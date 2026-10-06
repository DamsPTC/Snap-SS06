/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106339728; end: 1063397f7; -[SCOperaPageViewController _baseBoundsForBackdrop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106339728(double param_1,double param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar2 = (long)_DAT_112745cf4;
  func_0x00010c0eb1c0(*(undefined8 *)(param_3 + lVar2));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c230b40();
  if ((uVar1 & 1) == 0) {
    func_0x00010c0f1de0(*(undefined8 *)(param_3 + lVar2));
    func_0x00010c0f0c40(*(undefined8 *)(param_3 + lVar2));
  }
  return param_1 + param_2;
}



/* Entry: 1063397f8; end: 10633987f; -[SCOperaPageViewController _responsiveLayoutRulesForPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063397f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c13be80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + _DAT_112745cf0);
    func_0x00010c13be80(lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106339880; end: 106339b4b; -[SCOperaPageViewController _responsiveLayoutConfigForBaseBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106339880(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_6 + _DAT_112745db4) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be94710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,param_2,param_3,param_4,param_5,param_6,
               PTR_s__resizeLayoutConfigForBaseBounds_112582b60);
    return;
  }
  lVar1 = param_6;
  uVar3 = param_2;
  func_0x00010be952a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08d1e0();
  if (lVar2 < 3) {
    if (lVar2 == 0) {
      func_0x00010bdf96a0(param_1,param_2,param_3,param_4,param_5,param_6);
      goto LAB_106339b24;
    }
    if (((lVar2 != 1) && (lVar2 == 2)) && (lVar2 = param_6, func_0x00010be952c0(), (int)lVar2 != 0))
    {
      func_0x00010c0c5140(param_6);
      uVar4 = uVar3;
      func_0x00010c0c3240(lVar1);
      uVar5 = uVar4;
      func_0x00010c0c2360(lVar1);
      func_0x000107dd9448(param_1,uVar3,param_2,param_3,param_4,param_5,uVar4,uVar5);
      goto LAB_106339b24;
    }
  }
  else if (lVar2 < 5) {
    if (lVar2 == 3) {
      lVar2 = param_6;
      func_0x00010be952c0();
      if ((int)lVar2 != 0) {
        func_0x00010c0c5140(param_6);
        uVar4 = uVar3;
        func_0x00010c252dc0(lVar1);
        uVar5 = uVar4;
        func_0x00010bfdfd20(lVar1);
        uVar6 = uVar5;
        func_0x00010c0c3240(lVar1);
        func_0x00010c0c2360(lVar1);
        func_0x000107dd95fc(param_1,uVar3,param_2,param_3,param_4,param_5,uVar4,uVar5,uVar6);
        goto LAB_106339b24;
      }
    }
    else if (lVar2 == 4) {
      *param_1 = 2;
      param_1[1] = param_2;
      param_1[2] = param_3;
      param_1[3] = param_4;
      param_1[4] = param_5;
      param_1[5] = 0;
      param_1[6] = &PTR____CFConstantStringClassReference_110e4b478;
      param_1[7] = 0;
      goto LAB_106339b24;
    }
  }
  else {
    if (lVar2 == 5) {
      func_0x00010c0c5140(param_6);
      func_0x000107dd8dc8(param_1);
      goto LAB_106339b24;
    }
    if (lVar2 == 6) {
      func_0x00010c0c5140(param_6);
      func_0x000107dd9040(param_1);
      goto LAB_106339b24;
    }
  }
  func_0x00010c0c5140(param_6);
  func_0x000107dd8b0c(param_1);
LAB_106339b24:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106339b4c; end: 106339cbb; -[SCOperaPageViewController _responsiveLayoutTypeSupported:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_106339b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
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
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_5);
        }
        uVar1 = *(ulong *)(lStack_128 + lVar7 * 8);
        func_0x00010c263240();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf529e0();
        if (uVar2 != 0) {
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_6,param_7);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          puVar4 = (undefined8 *)puVar5;
          func_0x00010bf4b900(uVar1,param_6,puVar5);
          _objc_release(puVar5);
          if ((uVar2 & 1) == 0) {
            _objc_release(uVar1);
            puVar5 = (undefined *)0x0;
            goto LAB_106339c74;
          }
        }
        _objc_release(uVar1);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = param_5;
      puVar4 = &uStack_130;
      func_0x00010bf52a60(param_5,param_6,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  puVar5 = (undefined *)0x1;
LAB_106339c74:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar5;
  }
  ___stack_chk_fail();
  uVar9 = uVar8;
  _objc_retain(puVar4);
  if ((*(char *)(param_5 + _DAT_112745d48) == '\x01') &&
     (lVar3 = param_5, func_0x00010be952c0(param_5,param_6,3), (int)lVar3 != 0)) {
LAB_106339dd0:
    func_0x00010c0c5140(param_5);
    func_0x000107dd8dc8(extraout_x8);
    goto LAB_106339e38;
  }
  lVar3 = *(long *)(param_5 + _DAT_112745cf0);
  func_0x00010c0da1c0();
  if (lVar3 < 3) {
    if (1 < lVar3 - 1U) goto LAB_106339dac;
    lVar3 = param_5;
    func_0x00010be952c0(param_5,param_6,2);
    func_0x00010c0c5140(param_5);
    if ((int)lVar3 != 0) {
      uVar10 = uVar9;
      func_0x00010c0c3240(puVar4);
      uVar11 = uVar10;
      func_0x00010c0c2360(puVar4);
      func_0x000107dd9448(extraout_x8,uVar9,uVar8,param_2,param_3,param_4,uVar10,uVar11);
      goto LAB_106339e38;
    }
  }
  else {
    if (lVar3 == 3) goto LAB_106339dd0;
LAB_106339dac:
    func_0x00010c0c5140(param_5);
  }
  func_0x000107dd8b0c(extraout_x8);
LAB_106339e38:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return (undefined *)puVar4;
}



/* Entry: 106339cbc; end: 106339e57; -[SCOperaPageViewController _defaultResponsiveLayoutConfigForBaseBounds:layoutRules:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106339cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2;
  _objc_retain(param_8);
  if ((*(char *)(param_6 + _DAT_112745d48) == '\x01') &&
     (lVar1 = param_6, func_0x00010be952c0(param_6,param_7,3), (int)lVar1 != 0)) {
LAB_106339dd0:
    func_0x00010c0c5140(param_6);
    func_0x000107dd8dc8(param_1);
    goto LAB_106339e38;
  }
  lVar1 = *(long *)(param_6 + _DAT_112745cf0);
  func_0x00010c0da1c0();
  if (lVar1 < 3) {
    if (1 < lVar1 - 1U) goto LAB_106339dac;
    lVar1 = param_6;
    func_0x00010be952c0(param_6,param_7,2);
    func_0x00010c0c5140(param_6);
    if ((int)lVar1 != 0) {
      uVar3 = uVar2;
      func_0x00010c0c3240(param_8);
      uVar4 = uVar3;
      func_0x00010c0c2360(param_8);
      func_0x000107dd9448(param_1,uVar2,param_2,param_3,param_4,param_5,uVar3,uVar4);
      goto LAB_106339e38;
    }
  }
  else {
    if (lVar1 == 3) goto LAB_106339dd0;
LAB_106339dac:
    func_0x00010c0c5140(param_6);
  }
  func_0x000107dd8b0c(param_1);
LAB_106339e38:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 106339e58; end: 106339fcf; -[SCOperaPageViewController _applyResponsiveLayoutConfigForLayerViewControllers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106339e58(long param_1,undefined8 param_2,double *param_3)

{
  double *pdVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double in_d3;
  double dVar22;
  double dVar23;
  double dVar24;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_1;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar5;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (lVar16 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(lVar5);
      }
      if ((ulong)*param_3 < 3) {
        func_0x00010c1b9900(*(undefined8 *)(lVar17 * 8));
      }
      lVar17 = lVar17 + 1;
    } while (lVar16 != lVar17);
    lVar16 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  pdVar1 = (double *)(param_1 + _DAT_112745d6c);
  uVar12 = *(undefined8 *)((long)param_3 + 0x21);
  dVar18 = *(double *)((long)param_3 + 0x19);
  dVar20 = *param_3;
  dVar6 = param_3[3];
  dVar19 = param_3[2];
  pdVar1[1] = param_3[1];
  *pdVar1 = dVar20;
  pdVar1[3] = dVar6;
  pdVar1[2] = dVar19;
  *(undefined8 *)((long)pdVar1 + 0x21) = uVar12;
  *(double *)((long)pdVar1 + 0x19) = dVar18;
  dVar15 = param_3[6];
  _objc_retain(dVar15);
  dVar6 = pdVar1[6];
  pdVar1[6] = dVar15;
  _objc_release(dVar6);
  *(undefined1 *)(pdVar1 + 7) = *(undefined1 *)(param_3 + 7);
  dVar6 = param_3[6];
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3[6]);
  __Unwind_Resume();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar15 = dVar6;
  dVar23 = dVar18;
  func_0x00010be48b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1c0(*(undefined8 *)((long)dVar6 + (long)_DAT_112745cf4));
  dVar7 = dVar6;
  dVar24 = dVar23;
  dVar8 = dVar19;
  dVar21 = dVar20;
  dVar22 = in_d3;
  func_0x00010c29bf00(dVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar24 = dVar19 + dVar24;
  _objc_release(dVar7);
  _CGRectGetHeight(dVar24,dVar23 + dVar8,dVar21 - (dVar19 + in_d3),dVar22 - (dVar23 + dVar20));
  dVar23 = 0.0;
  dVar19 = dVar6;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  dVar7 = dVar19;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  if (dVar7 != 0.0) {
    dVar24 = dVar24 - dVar18;
    do {
      dVar18 = 0.0;
      do {
        if (lRam0000000000000000 != lVar16) {
          _objc_enumerationMutation(dVar19);
        }
        puVar9 = PTR_DAT_1126a5318;
        lVar13 = *(long *)((long)dVar18 * 8);
        _objc_retain(lVar13);
        lVar5 = lVar13;
        func_0x00010010fab4(lVar13,puVar9);
        _objc_release(lVar13);
        bVar2 = false;
        bVar3 = true;
        bVar4 = false;
        if ((int)lVar5 != 0 && lVar13 != 0) {
          bVar2 = false;
          bVar3 = false;
          bVar4 = true;
          if (!NAN(dVar24)) {
            bVar2 = dVar24 < 120.0;
            bVar3 = dVar24 == 120.0;
            bVar4 = false;
          }
        }
        if (!bVar3 && bVar2 == bVar4) {
          func_0x00010c274140(dVar15);
          dVar23 = dVar20 - dVar23;
          lVar5 = lVar13;
          func_0x00010c29bf00(lVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2172c0(dVar23);
          _objc_release(lVar5);
          dVar8 = dVar6;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe0640();
          dVar23 = dVar23 + dVar20 * -2.0;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a7d00();
          _objc_release(lVar13);
          _objc_release(dVar8);
        }
        dVar18 = (double)((long)dVar18 + 1);
      } while (dVar7 != dVar18);
      dVar7 = dVar19;
      func_0x00010bf52a60();
    } while (dVar7 != 0.0);
  }
  _objc_release(dVar19);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = PTR_PTR_1126c98e0;
  func_0x00010bf18180(PTR_PTR_1126c98e0);
  puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  lVar16 = (long)_DAT_112745cf0;
  func_0x00010bf20c00(*(undefined8 *)((long)dVar15 + lVar16));
  func_0x00010c013de0(puVar10);
  func_0x00010c222380(dVar15);
  _objc_release(puVar10);
  lVar14 = (long)_DAT_112745d10;
  uVar11 = *(ulong *)((long)dVar15 + lVar14);
  func_0x00010c0f1520();
  if ((uVar11 & 1) == 0) {
    uVar11 = *(ulong *)((long)dVar15 + lVar16);
    func_0x00010c2bf0e0();
    if ((uVar11 & 1) == 0) {
      func_0x00010c2bf3a0(*(undefined8 *)((long)dVar15 + lVar14));
    }
  }
  dVar6 = dVar15;
  func_0x00010c29bf00(dVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(dVar6);
  uVar12 = *(undefined8 *)((long)dVar15 + lVar14);
  func_0x00010beecf00(uVar12);
  _objc_retainAutoreleasedReturnValue();
  dVar6 = dVar15;
  func_0x00010c29bf00(dVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(dVar6);
  _objc_release(uVar12);
  dVar6 = dVar15;
  func_0x00010bf6b020(dVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2000();
  _objc_release(dVar6);
  func_0x00010be4e620(dVar15);
  func_0x00010be4cea0(dVar15);
  func_0x00010bdf0fe0(dVar15);
  func_0x00010be4e2c0(dVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bf94970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c98e0,PTR_s_endFor__1125c2c00,puVar9);
  return;
}



/* Entry: 106339fd0; end: 10633a23f; -[SCOperaPageViewController _resizeSwipeUpViewLayerWithRespectToContentHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106339fd0(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_5;
  dVar19 = param_1;
  func_0x00010be48b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1c0(*(undefined8 *)(param_5 + _DAT_112745cf4));
  lVar12 = param_5;
  dVar20 = dVar19;
  dVar16 = param_2;
  dVar17 = param_3;
  dVar18 = param_4;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar20 = param_2 + dVar20;
  _objc_release(lVar12);
  _CGRectGetHeight(dVar20,dVar19 + dVar16,dVar17 - (param_2 + param_4),dVar18 - (dVar19 + param_3));
  dVar19 = 0.0;
  lVar14 = param_5;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar14;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  if (lVar5 != 0) {
    dVar20 = dVar20 - param_1;
    do {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar14);
        }
        puVar7 = PTR_DAT_1126a5318;
        lVar13 = *(long *)(lVar15 * 8);
        _objc_retain(lVar13);
        lVar6 = lVar13;
        func_0x00010010fab4(lVar13,puVar7);
        _objc_release(lVar13);
        bVar1 = false;
        bVar2 = true;
        bVar3 = false;
        if ((int)lVar6 != 0 && lVar13 != 0) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(dVar20)) {
            bVar1 = dVar20 < 120.0;
            bVar2 = dVar20 == 120.0;
            bVar3 = false;
          }
        }
        if (!bVar2 && bVar1 == bVar3) {
          func_0x00010c274140(lVar4);
          dVar19 = param_3 - dVar19;
          lVar6 = lVar13;
          func_0x00010c29bf00(lVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2172c0(dVar19);
          _objc_release(lVar6);
          lVar6 = param_5;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe0640();
          dVar19 = dVar19 + param_3 * -2.0;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a7d00();
          _objc_release(lVar13);
          _objc_release(lVar6);
        }
        lVar15 = lVar15 + 1;
      } while (lVar5 != lVar15);
      lVar5 = lVar14;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR_PTR_1126c98e0;
  func_0x00010bf18180(PTR_PTR_1126c98e0);
  puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  lVar12 = (long)_DAT_112745cf0;
  func_0x00010bf20c00(*(undefined8 *)(lVar4 + lVar12));
  func_0x00010c013de0(puVar8);
  func_0x00010c222380(lVar4);
  _objc_release(puVar8);
  lVar14 = (long)_DAT_112745d10;
  uVar9 = *(ulong *)(lVar4 + lVar14);
  func_0x00010c0f1520();
  if ((uVar9 & 1) == 0) {
    uVar9 = *(ulong *)(lVar4 + lVar12);
    func_0x00010c2bf0e0();
    if ((uVar9 & 1) == 0) {
      func_0x00010c2bf3a0(*(undefined8 *)(lVar4 + lVar14));
    }
  }
  lVar12 = lVar4;
  func_0x00010c29bf00(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(lVar12);
  uVar10 = *(undefined8 *)(lVar4 + lVar14);
  func_0x00010beecf00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar4;
  func_0x00010c29bf00(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(lVar12);
  _objc_release(uVar10);
  lVar12 = lVar4;
  func_0x00010bf6b020(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2000();
  _objc_release(lVar12);
  func_0x00010be4e620(lVar4);
  func_0x00010be4cea0(lVar4);
  func_0x00010bdf0fe0(lVar4);
  func_0x00010be4e2c0(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bf94970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c98e0,PTR_s_endFor__1125c2c00,puVar7);
  return;
}



/* Entry: 10633a240; end: 10633a3a7; -[SCOperaPageViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633a240(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c98e0;
  func_0x00010bf18180(PTR_PTR_1126c98e0,param_2,&PTR____CFConstantStringClassReference_110e4b498);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  lVar5 = (long)_DAT_112745cf0;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c013de0(puVar2);
  func_0x00010c222380(param_1);
  _objc_release(puVar2);
  lVar6 = (long)_DAT_112745d10;
  uVar3 = *(ulong *)(param_1 + lVar6);
  func_0x00010c0f1520();
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + lVar5);
    func_0x00010c2bf0e0();
    if ((uVar3 & 1) == 0) {
      func_0x00010c2bf3a0(*(undefined8 *)(param_1 + lVar6));
    }
  }
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(lVar5);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010beecf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(lVar5);
  _objc_release(uVar4);
  lVar5 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2000();
  _objc_release(lVar5);
  func_0x00010be4e620(param_1);
  func_0x00010be4cea0(param_1);
  func_0x00010bdf0fe0(param_1);
  func_0x00010be4e2c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf94970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c98e0,PTR_s_endFor__1125c2c00,puVar1);
  return;
}



/* Entry: 10633a3a8; end: 10633a53f; -[SCOperaPageViewController _loadScrollView] */

/* WARNING: Possible PIC construction at 0x00010633a508: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010633a50c) */
/* WARNING: Removing unreachable block (ram,0x00010c18b580) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633a3a8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar6 = (long)_DAT_112745d10;
  uVar2 = *(ulong *)(param_1 + lVar6);
  func_0x00010c0f1520();
  if ((uVar2 & 1) == 0) {
    lVar5 = (long)_DAT_112745cf0;
    uVar2 = *(ulong *)(param_1 + lVar5);
    func_0x00010beeeb00();
    if ((uVar2 & 1) == 0) {
      uVar2 = *(ulong *)(param_1 + lVar5);
      func_0x00010c2bf0e0();
      if ((uVar2 & 1) == 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
        func_0x00010c2bf3a0();
        if (iVar1 == 0) {
          return;
        }
      }
    }
  }
  puVar3 = PTR_PTR_1126c9d88;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar7 = (long)_DAT_112745d94;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar3;
  _objc_release(uVar4);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c1c9b40(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar7));
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  func_0x00010c1c8480(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar7));
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c0f1520();
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112745cf0);
    func_0x00010c2bf0e0();
    if (iVar1 == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
      func_0x00010c2bf3a0();
      if (iVar1 == 0) {
        return;
      }
      *(undefined1 *)(param_1 + _DAT_112745db8) = 1;
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      uVar8 = 0x4008000000000000;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      uVar8 = 0x4000000000000000;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    uVar8 = 0x4008000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1c3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar8,uVar4,PTR_s_setMaximumZoomScale__11264e980);
  return;
}



/* Entry: 10633a540; end: 10633a707; -[SCOperaPageViewController _loadContainerView] */

/* WARNING: Possible PIC construction at 0x00010633a60c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010633a6f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010633a6fc) */
/* WARNING: Removing unreachable block (ram,0x00010633a610) */
/* WARNING: Removing unreachable block (ram,0x00010633a6ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x00010633a644) */
/* WARNING: Removing unreachable block (ram,0x00010633a6cc) */
/* WARNING: Removing unreachable block (ram,0x00010633a66c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633a540(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c9d90;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar5 = (long)_DAT_112745d80;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar2);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5));
  uVar3 = *(ulong *)(param_1 + _DAT_112745cf0);
  func_0x00010c2bf0e0();
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + _DAT_112745d10);
    func_0x00010c0f1520();
    if (((uVar3 & 1) == 0) && (*(char *)(param_1 + _DAT_112745db8) != '\x01')) {
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10633a708; end: 10633a817; -[SCOperaPageViewController _updateCornerOverlayViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633a708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_5 + _DAT_112745dbc);
  if (lVar1 != 0) {
    lVar2 = (long)_DAT_112745d80;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
    uVar3 = param_1;
    uVar4 = param_2;
    uVar5 = param_3;
    uVar6 = param_4;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
    func_0x00010bf46560(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6a1a0();
    func_0x00010c285f80(param_1,param_2,param_3,param_4,uVar3,uVar4,uVar5,uVar6,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
  return;
}



/* Entry: 10633a818; end: 10633a96b; -[SCOperaPageViewController updatePageLayersSnapshot:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633a818(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0f21e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar7 = (long)_DAT_112745d10;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0f21e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
    if ((int)uVar4 != 0) {
      lVar5 = (long)_DAT_112745dc0;
      lVar6 = *(long *)(param_1 + lVar5);
      lVar1 = param_3;
      func_0x00010c0f21e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      *(long *)(param_1 + lVar7) = lVar3;
      _objc_release(uVar4);
      _objc_release(lVar1);
      _objc_retain(param_3);
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(long *)(param_1 + lVar5) = param_3;
      _objc_release(uVar4);
      if ((lVar6 != 0) && (lVar1 = param_1, func_0x00010c0834c0(), (int)lVar1 != 0)) {
        func_0x00010be8aa80(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10633a96c; end: 10633a96f; -[SCOperaPageViewController logPageProperties] */

void FUN_10633a96c(void)

{
  return;
}



/* Entry: 10633a970; end: 10633a9c7; -[SCOperaPageViewController _updateViewWithHorizontalPageOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633a970(long param_1,undefined8 param_2)

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
  
  func_0x00010be9a960();
  _CGAffineTransformMakeScale(&uStack_50);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + _DAT_112745d80),param_2,&uStack_80);
  return;
}



/* Entry: 10633a9c8; end: 10633aa03; -[SCOperaPageViewController _scaleForHorizontalTransition:] */

double FUN_10633a9c8(double param_1)

{
  double dVar1;
  
  dVar1 = 1.0;
  if (param_1 < 0.0) {
    param_1 = ABS(param_1);
    dVar1 = param_1 * -0.4 + param_1 * param_1 * 0.2 + 1.0;
  }
  return dVar1;
}



/* Entry: 10633aa04; end: 10633aa1b; -[SCOperaPageViewController _alphaForHorizontalTransition:] */

double FUN_10633aa04(double param_1)

{
  double dVar1;
  
  dVar1 = 1.0 - ABS(param_1);
  if (0.0 <= param_1) {
    dVar1 = 1.0;
  }
  return dVar1;
}



/* Entry: 10633aa1c; end: 10633ab43; -[SCOperaPageViewController setHasRoundedCornersForAttachment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633aa1c(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  *(char *)(param_1 + _DAT_112745dc4) = (char)param_3;
  lVar5 = (long)_DAT_112745d80;
  puVar1 = *(undefined **)(param_1 + lVar5);
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c1c2c00();
  }
  else {
    puVar2 = puVar1;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (puVar2 != (undefined *)0x0) {
      return;
    }
    puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf20c00(*(undefined8 *)(param_1 + _DAT_112745cf0));
    func_0x00010bf199e0(puVar2,param_2,3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(puVar1,param_2,puVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10633ab44; end: 10633aca7; -[SCOperaPageViewController setContainerViewYOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633ab44(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  lVar4 = (long)_DAT_112745da4;
  dVar5 = *(double *)(param_5 + lVar4);
  if (dVar5 != param_1) {
    lVar1 = param_5;
    func_0x00010be48b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMinY();
    if (dVar5 != param_1) {
      func_0x00010bfb68e0(lVar1);
      func_0x00010bc8525c();
      func_0x00010c19f0e0(lVar1);
    }
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010bc8525c();
    lVar3 = param_5;
    func_0x00010bf0cba0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar5,param_2,param_3,param_4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bf20c00(lVar1);
    _CGRectGetHeight();
    lVar2 = param_5;
    func_0x00010bf0cba0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(param_1 / dVar5);
    _objc_release(lVar2);
    *(double *)(param_5 + lVar4) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10633aca8; end: 10633adff; -[SCOperaPageViewController setContainerViewXOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633aca8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  lVar4 = (long)_DAT_112745d9c;
  dVar5 = *(double *)(param_5 + lVar4);
  if (dVar5 != param_1) {
    lVar1 = param_5;
    func_0x00010be48b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMinX();
    if (dVar5 != param_1) {
      func_0x00010bfb68e0(lVar1);
      func_0x00010bc851d4();
      func_0x00010c19f0e0(lVar1);
    }
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010bc851d4();
    lVar3 = param_5;
    func_0x00010bf0cba0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar5,param_2,param_3,param_4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bf20c00(lVar1);
    _CGRectGetWidth();
    lVar2 = param_5;
    func_0x00010bf0cba0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(param_1 / dVar5);
    _objc_release(lVar2);
    *(double *)(param_5 + lVar4) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10633ae00; end: 10633af03; -[SCOperaPageViewController _isAttachmentBackgroundTransparent] */

long FUN_10633ae00(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar7 = 0;
  }
  else {
    func_0x00010c29d560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf1f3c0();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(param_1);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar7;
}



/* Entry: 10633af04; end: 10633afe3; -[SCOperaPageViewController attachmentBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633af04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112745da0;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = param_1;
    func_0x00010be3e360();
    uVar2 = 0xd6;
    if ((int)lVar3 == 0) {
      uVar2 = 0xd4;
    }
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    lVar3 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10633afe4; end: 10633b22b; -[SCOperaPageViewController _loadPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633afe4(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_112745d00;
  uVar7 = *(undefined8 *)(param_2 + lVar10);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c29e960(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_112745d10;
  uVar8 = *(undefined8 *)(param_2 + lVar11);
  puVar3 = PTR_PTR_1126c9a20;
  func_0x00010c06c7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = param_2;
  puStack_78 = puVar3;
  func_0x00010be3e340(param_2);
  func_0x00010c0df6e0(puVar4,param_3,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_70,&puStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar7,param_3,puVar2,uVar8,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar7 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c0b4de0(uVar7);
  func_0x00010bdc4e00(param_2,param_3,uVar7);
  func_0x00010bdd6460(param_2,param_3,&PTR____CFConstantStringClassReference_110e4b4b8);
  lVar6 = param_2;
  func_0x00010bf38f00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beac740(param_2,param_3,lVar6);
  _objc_release(lVar6);
  uVar7 = *(undefined8 *)(param_2 + lVar10);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c29e020();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + lVar11);
  puVar3 = PTR_PTR_1126c9a20;
  func_0x00010c06c7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar3;
  func_0x00010be3e340(param_2);
  func_0x00010c0df6e0(puVar4,param_3,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_80,&puStack_88,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar7,param_3,puVar2,uVar8,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = (long)_DAT_112745dc8;
  lVar10 = *(long *)(puVar2 + lVar11);
  lVar9 = (long)_DAT_112745da8;
  lVar6 = *(long *)(puVar2 + lVar9);
  if (lVar10 == 0) {
    func_0x00010c12c960(lVar6);
    uVar7 = *(undefined8 *)(puVar2 + lVar9);
    *(undefined8 *)(puVar2 + lVar9) = 0;
  }
  else {
    if (lVar6 == 0) {
      puVar4 = PTR_PTR_1126c9da0;
      _objc_alloc();
      func_0x00010bdd2a60(puVar2);
      func_0x00010c013de0();
      uVar7 = *(undefined8 *)(puVar2 + lVar9);
      *(undefined **)(puVar2 + lVar9) = puVar4;
      _objc_release(uVar7);
      func_0x00010c1a7f60(*(undefined8 *)(puVar2 + lVar9),param_3,1);
      iVar1 = (int)*(undefined8 *)(puVar2 + _DAT_112745cf4);
      func_0x00010bfdb4e0();
      if (iVar1 != 0) {
        uVar7 = *(undefined8 *)(puVar2 + lVar9);
        func_0x00010c08c0e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c2d20();
        _objc_release(uVar7);
        puVar4 = puVar2;
        func_0x00010bf46560(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6a1a0();
        uVar7 = *(undefined8 *)(puVar2 + lVar9);
        func_0x00010c08c0e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1842e0(param_1);
        _objc_release(uVar7);
        _objc_release(puVar4);
      }
      puVar4 = puVar2;
      func_0x00010c29bf00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fa0();
      _objc_release(puVar4);
      lVar6 = *(long *)(puVar2 + lVar9);
      lVar10 = *(long *)(puVar2 + lVar11);
    }
    uVar7 = *(undefined8 *)(puVar2 + _DAT_112745cf0);
    func_0x00010bf13aa0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e2c0(lVar6,param_3,lVar10,uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 10633b22c; end: 10633b3af; -[SCOperaPageViewController _setupBackdropView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633b22c(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = (long)_DAT_112745dc8;
  lVar5 = *(long *)(param_2 + lVar6);
  lVar7 = (long)_DAT_112745da8;
  lVar4 = *(long *)(param_2 + lVar7);
  if (lVar5 == 0) {
    func_0x00010c12c960(lVar4);
    uVar3 = *(undefined8 *)(param_2 + lVar7);
    *(undefined8 *)(param_2 + lVar7) = 0;
  }
  else {
    if (lVar4 == 0) {
      puVar2 = PTR_PTR_1126c9da0;
      _objc_alloc();
      func_0x00010bdd2a60(param_2);
      func_0x00010c013de0();
      uVar3 = *(undefined8 *)(param_2 + lVar7);
      *(undefined **)(param_2 + lVar7) = puVar2;
      _objc_release(uVar3);
      func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar7),param_3,1);
      iVar1 = (int)*(undefined8 *)(param_2 + _DAT_112745cf4);
      func_0x00010bfdb4e0();
      if (iVar1 != 0) {
        uVar3 = *(undefined8 *)(param_2 + lVar7);
        func_0x00010c08c0e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c2d20();
        _objc_release(uVar3);
        lVar4 = param_2;
        func_0x00010bf46560(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6a1a0();
        uVar3 = *(undefined8 *)(param_2 + lVar7);
        func_0x00010c08c0e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1842e0(param_1);
        _objc_release(uVar3);
        _objc_release(lVar4);
      }
      lVar4 = param_2;
      func_0x00010c29bf00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fa0();
      _objc_release(lVar4);
      lVar4 = *(long *)(param_2 + lVar7);
      lVar5 = *(long *)(param_2 + lVar6);
    }
    uVar3 = *(undefined8 *)(param_2 + _DAT_112745cf0);
    func_0x00010bf13aa0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e2c0(lVar4,param_3,lVar5,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10633b3b0; end: 10633b5eb; -[SCOperaPageViewController _activatePageGestureRecognizers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633b3b0(ulong param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112745dcc;
  if (param_3 != 0) {
    if (*(long *)(param_1 + lVar8) == 0) {
      puVar1 = PTR_PTR_1126c9da8;
      _objc_alloc();
      func_0x00010c0b4ea0(*(undefined8 *)(param_1 + (long)_DAT_112745cf0));
      func_0x00010c045e20();
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      *(undefined **)(param_1 + lVar8) = puVar1;
      _objc_release(uVar7);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar8));
    }
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar5 != 0) {
      func_0x00010befa120(puVar1);
    }
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf88460();
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar2);
    }
    else {
      uVar3 = param_1;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf1f3c0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((int)uVar6 != 0) {
        func_0x00010befa120(puVar1);
      }
    }
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    uVar2 = param_1;
    func_0x00010be6f1a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf88480();
    func_0x00010beefc40(uVar7);
    _objc_release(param_1);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf65cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + lVar8),PTR_s_deactivateGestureRecognizers_1125b70d8);
  return;
}



/* Entry: 10633b5ec; end: 10633b707; -[SCOperaPageViewController _reactivateGestureRecognizers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633b5ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112745dcc;
  lVar2 = *(long *)(param_1 + lVar4);
  func_0x00010c0b4e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5920);
  }
  lVar2 = *(long *)(param_1 + lVar4);
  func_0x00010c22d460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5938);
  }
  lVar2 = *(long *)(param_1 + lVar4);
  func_0x00010bf884c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5950);
  }
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  lVar2 = param_1;
  func_0x00010be6f1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf88480();
  func_0x00010beefc40(uVar3,param_2,puVar1,lVar2);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10633b708; end: 10633b767; -[SCOperaPageViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633b708(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29e740(*(undefined8 *)(param_1 + _DAT_112745cec),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126f0ef8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0,param_3);
  return;
}



/* Entry: 10633b768; end: 10633b7cf; -[SCOperaPageViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633b768(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29c6c0(*(undefined8 *)(param_1 + _DAT_112745cec),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126f0ef8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0,param_3);
  func_0x00010be86260(param_1);
  return;
}



/* Entry: 10633b7d0; end: 10633b82f; -[SCOperaPageViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633b7d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29e860(*(undefined8 *)(param_1 + _DAT_112745cec),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126f0ef8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438,param_3);
  return;
}



/* Entry: 10633b830; end: 10633b88f; -[SCOperaPageViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633b830(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29c8a0(*(undefined8 *)(param_1 + _DAT_112745cec),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126f0ef8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48,param_3);
  return;
}



/* Entry: 10633b890; end: 10633b903; -[SCOperaPageViewController beginAppearanceTransition:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633b890(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf17b20(*(undefined8 *)(param_1 + _DAT_112745cec),param_2,param_1,param_3,param_4);
  puStack_38 = PTR_PTR_1126f0ef8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_beginAppearanceTransition_animat_1125a3868,param_3,param_4);
  return;
}



/* Entry: 10633b904; end: 10633b957; -[SCOperaPageViewController endAppearanceTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633b904(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf941c0(*(undefined8 *)(param_1 + _DAT_112745cec),param_2,param_1);
  puStack_28 = PTR_PTR_1126f0ef8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_endAppearanceTransition_1125c2a10);
  return;
}



/* Entry: 10633b958; end: 10633b9d3; -[SCOperaPageViewController willMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633b958(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745cec);
  _objc_retain(param_3);
  func_0x00010c2a6760(uVar1);
  puStack_38 = PTR_PTR_1126f0ef8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_willMoveToParentViewController__1126873f8,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10633b9d4; end: 10633ba4f; -[SCOperaPageViewController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633b9d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745cec);
  _objc_retain(param_3);
  func_0x00010bf77ea0(uVar1);
  puStack_38 = PTR_PTR_1126f0ef8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_didMoveToParentViewController__1125bb948,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10633ba50; end: 10633bbfb; -[SCOperaPageViewController viewWillFullyAppear] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010633bd8c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_10633ba50(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010beccfe0(param_1,param_2,*(undefined8 *)(param_1 + (long)_DAT_112745d94));
  uVar1 = param_1;
  func_0x00010bf38f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb0b80(param_1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf38f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea6560(param_1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf1d960();
  if ((uVar1 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (uVar1 != 0) {
      uVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(uVar2);
        }
        func_0x00010be64b40(param_1);
        uVar8 = uVar8 + 1;
      } while (uVar1 != uVar8);
      uVar1 = uVar2;
      func_0x00010bf52a60();
    }
    _objc_release(uVar2);
  }
  uVar7 = *(undefined8 *)(param_1 + (long)_DAT_112745d00);
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010c29e700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar3;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea6560(puVar3);
  _objc_release(puVar4);
  func_0x00010bf1d960();
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(puVar3);
      }
      func_0x00010c29e7e0(*(undefined8 *)((long)puVar9 * 8));
      puVar9 = puVar9 + 1;
    } while (puVar4 != puVar9);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar3;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar9;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(puVar9);
      }
      func_0x00010c29c800(*(undefined8 *)((long)puVar10 * 8));
      puVar10 = puVar10 + 1;
    } while (puVar4 != puVar10);
    puVar4 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1fe0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c29e800(*(undefined8 *)((long)puVar9 * 8));
        puVar9 = puVar9 + 1;
      } while (puVar4 != puVar9);
      puVar4 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return;
    }
    ___stack_chk_fail();
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010bf1d960();
    puVar9 = puVar3;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar9;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(puVar9);
        }
        func_0x00010c29c820(*(undefined8 *)((long)puVar10 * 8));
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      puVar4 = puVar9;
      func_0x00010bf52a60();
    }
    _objc_release(puVar9);
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f1fe0();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return;
    }
    ___stack_chk_fail();
    puVar4 = puVar3 + _DAT_112745d2c;
    _objc_loadWeakRetained(puVar4);
    lVar5 = (long)_DAT_112745d10;
    uVar7 = *(undefined8 *)(puVar3 + lVar5);
    func_0x00010be36bc0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0f40(puVar4);
    _objc_release(uVar7);
    _objc_release(puVar4);
    puVar9 = PTR_PTR_1126c98e0;
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar7 = *(undefined8 *)(puVar3 + lVar5);
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04340(puVar9);
    _objc_release(puVar4);
    _objc_release(uVar7);
    puVar4 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(puVar3 + lVar5);
    func_0x00010be36bc0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa540(puVar4);
    _objc_release(uVar7);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010bf38f00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea6560(puVar3);
    _objc_release(puVar4);
    func_0x00010c18dcc0(puVar3);
    puVar3[_DAT_112745dd0] = 0;
    func_0x00010bedcac0(puVar3);
    func_0x00010bed82a0(puVar3);
    func_0x00010bdcb9e0(puVar3);
    puVar4 = puVar3;
    func_0x00010bf38f00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee94e0(puVar3);
    _objc_release(puVar4);
    puVar3[_DAT_112745dd4] = 1;
    func_0x00010bf7e940(puVar3);
    func_0x00010c137fe0(*(undefined8 *)(puVar3 + _DAT_112745d18));
    puVar4 = PTR_PTR_1126b6b20;
    func_0x00010c22ba80(PTR_PTR_1126b6b20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27ab40();
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be043b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s__displayContentBlockingMessageIf_11255ea88);
    return;
  }
  return;
}



/* Entry: 10633bbfc; end: 10633bd27; -[SCOperaPageViewController viewWillBeginTransitionIn:] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010633bd8c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_10633bbfc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea6560(param_1);
  _objc_release(lVar2);
  func_0x00010bf1d960();
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c29e7e0(*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_1;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar5);
      }
      func_0x00010c29c800(*(undefined8 *)(lVar7 * 8));
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1fe0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c29e800(*(undefined8 *)(lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return;
    }
    ___stack_chk_fail();
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010bf1d960();
    lVar5 = param_1;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010c29c820(*(undefined8 *)(lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f1fe0();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return;
    }
    ___stack_chk_fail();
    lVar2 = param_1 + _DAT_112745d2c;
    _objc_loadWeakRetained(lVar2);
    lVar8 = (long)_DAT_112745d10;
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010be36bc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0f40(lVar2);
    _objc_release(uVar3);
    _objc_release(lVar2);
    puVar1 = PTR_PTR_1126c98e0;
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04340(puVar1);
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010be36bc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa540(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar4);
    lVar2 = param_1;
    func_0x00010bf38f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea6560(param_1);
    _objc_release(lVar2);
    func_0x00010c18dcc0(param_1);
    *(undefined1 *)(param_1 + _DAT_112745dd0) = 0;
    func_0x00010bedcac0(param_1);
    func_0x00010bed82a0(param_1);
    func_0x00010bdcb9e0(param_1);
    lVar2 = param_1;
    func_0x00010bf38f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee94e0(param_1);
    _objc_release(lVar2);
    *(undefined1 *)(param_1 + _DAT_112745dd4) = 1;
    func_0x00010bf7e940(param_1);
    func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_112745d18));
    puVar4 = PTR_PTR_1126b6b20;
    func_0x00010c22ba80(PTR_PTR_1126b6b20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27ab40();
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be043b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayContentBlockingMessageIf_11255ea88)
    ;
    return;
  }
  return;
}



/* Entry: 10633bd28; end: 10633be3f; -[SCOperaPageViewController viewDidCancelTransitionIn] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010633bd8c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_10633bd28(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_1;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar6);
      }
      func_0x00010c29c800(*(undefined8 *)(lVar7 * 8));
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1fe0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c29e800(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf1d960();
  lVar6 = param_1;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar6);
      }
      func_0x00010c29c820(*(undefined8 *)(lVar7 * 8));
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1fe0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = param_1 + _DAT_112745d2c;
  _objc_loadWeakRetained(lVar2);
  lVar8 = (long)_DAT_112745d10;
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010be36bc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0f40(lVar2);
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126c98e0;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04340(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126c9aa8;
  func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010be36bc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa540(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar4);
  lVar2 = param_1;
  func_0x00010bf38f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea6560(param_1);
  _objc_release(lVar2);
  func_0x00010c18dcc0(param_1);
  *(undefined1 *)(param_1 + _DAT_112745dd0) = 0;
  func_0x00010bedcac0(param_1);
  func_0x00010bed82a0(param_1);
  func_0x00010bdcb9e0(param_1);
  lVar2 = param_1;
  func_0x00010bf38f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee94e0(param_1);
  _objc_release(lVar2);
  *(undefined1 *)(param_1 + _DAT_112745dd4) = 1;
  func_0x00010bf7e940(param_1);
  func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_112745d18));
  puVar4 = PTR_PTR_1126b6b20;
  func_0x00010c22ba80(PTR_PTR_1126b6b20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ab40();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be043b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayContentBlockingMessageIf_11255ea88);
  return;
}



/* Entry: 10633be40; end: 10633bf2f; -[SCOperaPageViewController viewWillBeginTransitionOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633be40(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c29e800(*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf1d960();
  lVar5 = param_1;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar5);
      }
      func_0x00010c29c820(*(undefined8 *)(lVar7 * 8));
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1fe0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = param_1 + _DAT_112745d2c;
  _objc_loadWeakRetained(lVar2);
  lVar8 = (long)_DAT_112745d10;
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010be36bc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0f40(lVar2);
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126c98e0;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04340(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126c9aa8;
  func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010be36bc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa540(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar4);
  lVar2 = param_1;
  func_0x00010bf38f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea6560(param_1);
  _objc_release(lVar2);
  func_0x00010c18dcc0(param_1);
  *(undefined1 *)(param_1 + _DAT_112745dd0) = 0;
  func_0x00010bedcac0(param_1);
  func_0x00010bed82a0(param_1);
  func_0x00010bdcb9e0(param_1);
  lVar2 = param_1;
  func_0x00010bf38f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee94e0(param_1);
  _objc_release(lVar2);
  *(undefined1 *)(param_1 + _DAT_112745dd4) = 1;
  func_0x00010bf7e940(param_1);
  func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_112745d18));
  puVar4 = PTR_PTR_1126b6b20;
  func_0x00010c22ba80(PTR_PTR_1126b6b20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ab40();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be043b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayContentBlockingMessageIf_11255ea88);
  return;
}



/* Entry: 10633bf30; end: 10633c05f; -[SCOperaPageViewController viewDidCancelTransitionOut:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633bf30(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf1d960();
  lVar2 = param_1;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010c29c820(*(undefined8 *)(lVar7 * 8));
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1fe0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = param_1 + _DAT_112745d2c;
  _objc_loadWeakRetained(lVar3);
  lVar8 = (long)_DAT_112745d10;
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010be36bc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0f40(lVar3);
  _objc_release(uVar4);
  _objc_release(lVar3);
  puVar1 = PTR_PTR_1126c98e0;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04340(puVar1);
  _objc_release(puVar5);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126c9aa8;
  func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010be36bc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa540(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar5);
  lVar3 = param_1;
  func_0x00010bf38f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea6560(param_1);
  _objc_release(lVar3);
  func_0x00010c18dcc0(param_1);
  *(undefined1 *)(param_1 + _DAT_112745dd0) = 0;
  func_0x00010bedcac0(param_1);
  func_0x00010bed82a0(param_1);
  func_0x00010bdcb9e0(param_1);
  lVar3 = param_1;
  func_0x00010bf38f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee94e0(param_1);
  _objc_release(lVar3);
  *(undefined1 *)(param_1 + _DAT_112745dd4) = 1;
  func_0x00010bf7e940(param_1);
  func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_112745d18));
  puVar5 = PTR_PTR_1126b6b20;
  func_0x00010c22ba80(PTR_PTR_1126b6b20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ab40();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010be043b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayContentBlockingMessageIf_11255ea88);
  return;
}



/* Entry: 10633c060; end: 10633c26b; -[SCOperaPageViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633c060(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar2 = param_1 + _DAT_112745d2c;
  _objc_loadWeakRetained(lVar2);
  lVar5 = (long)_DAT_112745d10;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010be36bc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0f40(lVar2);
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126c98e0;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04340(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126c9aa8;
  func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010be36bc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa540(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar4);
  lVar2 = param_1;
  func_0x00010bf38f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea6560(param_1);
  _objc_release(lVar2);
  func_0x00010c18dcc0(param_1);
  *(undefined1 *)(param_1 + _DAT_112745dd0) = 0;
  func_0x00010bedcac0(param_1);
  func_0x00010bed82a0(param_1);
  func_0x00010bdcb9e0(param_1);
  lVar2 = param_1;
  func_0x00010bf38f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee94e0(param_1);
  _objc_release(lVar2);
  *(undefined1 *)(param_1 + _DAT_112745dd4) = 1;
  func_0x00010bf7e940(param_1);
  func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_112745d18));
  puVar4 = PTR_PTR_1126b6b20;
  func_0x00010c22ba80(PTR_PTR_1126b6b20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ab40();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be043b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayContentBlockingMessageIf_11255ea88);
  return;
}



/* Entry: 10633c26c; end: 10633c38b; -[SCOperaPageViewController neighborViewDidFullyAppearWithCurrentViewRelativePosition:neighborsInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10633c26c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  ulong unaff_x23;
  ulong uVar11;
  long lVar12;
  long unaff_x24;
  ulong uVar13;
  undefined8 uStack_690;
  long lStack_688;
  long *plStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined1 auStack_648 [128];
  long lStack_5c8;
  undefined8 uStack_570;
  long lStack_568;
  long *plStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined1 auStack_528 [128];
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  undefined8 uStack_488;
  undefined *puStack_480;
  ulong uStack_478;
  undefined8 **ppuStack_470;
  code *pcStack_468;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 auStack_418 [128];
  long lStack_398;
  undefined8 **ppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_2f8 [128];
  long lStack_278;
  long lStack_270;
  ulong uStack_268;
  long lStack_260;
  long lStack_258;
  ulong uStack_250;
  undefined1 *puStack_248;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  ulong *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (ulong *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    unaff_x23 = *puStack_110;
    do {
      unaff_x24 = 0;
      do {
        if (*puStack_110 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0d7640(*(undefined8 *)(lStack_118 + unaff_x24 * 8),param_2,param_3,param_4);
        unaff_x24 = unaff_x24 + 1;
      } while (lVar7 != unaff_x24);
      lVar7 = param_1;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar7 != 0);
  }
  _objc_release(param_1);
  uVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar2;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10633c38c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_160 = unaff_x24;
  uStack_158 = unaff_x23;
  lStack_150 = unaff_x22;
  lStack_148 = param_1;
  uStack_140 = param_3;
  uStack_138 = param_4;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf52a60();
  if (uVar4 != 0) {
    unaff_x22 = *plStack_220;
    do {
      unaff_x23 = 0;
      do {
        if (*plStack_220 != unaff_x22) {
          _objc_enumerationMutation(uVar2);
        }
        func_0x00010c29cb80(*(undefined8 *)(lStack_228 + unaff_x23 * 8),param_2,puVar6);
        unaff_x23 = unaff_x23 + 1;
      } while (uVar4 != unaff_x23);
      uVar4 = uVar2;
      func_0x00010bf52a60(uVar2,param_2,&uStack_230,auStack_1e8,0x10);
      param_1 = 0;
    } while (uVar4 != 0);
  }
  uVar4 = uVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return uVar4;
  }
  ___stack_chk_fail();
  pcStack_238 = FUN_10633c484;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_112745dd0;
  uVar1 = uVar4;
  lStack_270 = unaff_x24;
  uStack_268 = unaff_x23;
  lStack_260 = unaff_x22;
  lStack_258 = param_1;
  uStack_250 = uVar2;
  puStack_248 = (undefined1 *)puVar6;
  ppuStack_240 = &puStack_130;
  if ((*(byte *)(uVar4 + lVar7) & 1) == 0) {
    func_0x00010be945c0();
    *(undefined1 *)(uVar4 + lVar7) = 1;
    uVar2 = uVar4;
    func_0x00010bf1d960();
    if ((uVar2 & 1) == 0) {
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      lStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      plStack_330 = (long *)0x0;
      uVar2 = uVar4;
      func_0x00010bf38f00();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010bf52a60();
      if (uVar1 != 0) {
        lVar7 = *plStack_330;
        do {
          uVar11 = 0;
          do {
            if (*plStack_330 != lVar7) {
              _objc_enumerationMutation(uVar2);
            }
            func_0x00010c29e920(*(undefined8 *)(lStack_338 + uVar11 * 8));
            uVar11 = uVar11 + 1;
          } while (uVar1 != uVar11);
          uVar1 = uVar2;
          func_0x00010bf52a60(uVar2,param_2,&uStack_340,auStack_2f8,0x10);
        } while (uVar1 != 0);
      }
      _objc_release(uVar2);
    }
    uVar8 = *(undefined8 *)(uVar4 + (long)_DAT_112745d24);
    uVar1 = *(ulong *)(uVar4 + (long)_DAT_112745d10);
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf7360(uVar4);
    func_0x00010c0f10e0(uVar8,param_2,uVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return uVar1;
  }
  ___stack_chk_fail();
  pcStack_348 = FUN_10633c5e8;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = uVar1 + (long)_DAT_112745d2c;
  ppuStack_350 = &ppuStack_240;
  _objc_loadWeakRetained(lVar7);
  lVar10 = (long)_DAT_112745d10;
  uVar8 = *(undefined8 *)(uVar1 + lVar10);
  func_0x00010be36bc0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0f20(lVar7,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(lVar7);
  uVar8 = 1;
  if (*(char *)(uVar1 + (long)_DAT_112745de0) == '\0') {
    uVar8 = 2;
  }
  func_0x00010bf73680(*(undefined8 *)(uVar1 + (long)_DAT_112745ddc),param_2,uVar8);
  func_0x00010bddf540(uVar1);
  *(undefined1 *)(uVar1 + (long)_DAT_112745de4) = 0;
  uVar8 = *(undefined8 *)(uVar1 + (long)_DAT_112745de8);
  *(undefined8 *)(uVar1 + (long)_DAT_112745de8) = 0;
  _objc_release(uVar8);
  uVar9 = *(undefined8 *)(uVar1 + (long)_DAT_112745d24);
  uVar8 = *(undefined8 *)(uVar1 + lVar10);
  func_0x00010be36bc0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7360(uVar1);
  func_0x00010c0f10e0(uVar9,param_2,uVar8);
  _objc_release(uVar8);
  lVar12 = (long)_DAT_112745d28;
  lVar7 = uVar1 + lVar12;
  _objc_loadWeakRetained(lVar7);
  uVar8 = *(undefined8 *)(uVar1 + lVar10);
  func_0x00010be36bc0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79300(lVar7,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(lVar7);
  uVar2 = uVar1;
  func_0x00010bf1d940();
  if ((int)uVar2 != 0) {
    uVar8 = *(undefined8 *)(uVar1 + (long)_DAT_112745dec);
    func_0x00010c089820(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29ca00();
    _objc_release(uVar8);
  }
  uVar2 = uVar1;
  func_0x00010bf1d960();
  if ((uVar2 & 1) == 0) {
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    lStack_458 = 0;
    uStack_460 = 0;
    uStack_448 = 0;
    plStack_450 = (long *)0x0;
    uVar2 = uVar1;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf52a60();
    if (uVar4 != 0) {
      unaff_x24 = *plStack_450;
      do {
        uVar11 = 0;
        do {
          if (*plStack_450 != unaff_x24) {
            _objc_enumerationMutation(uVar2);
          }
          func_0x00010c29ca00(*(undefined8 *)(lStack_458 + uVar11 * 8));
          uVar11 = uVar11 + 1;
        } while (uVar4 != uVar11);
        uVar4 = uVar2;
        func_0x00010bf52a60(uVar2,param_2,&uStack_460,auStack_418,0x10);
      } while (uVar4 != 0);
    }
    _objc_release(uVar2);
  }
  lVar7 = uVar1 + lVar12;
  _objc_loadWeakRetained(lVar7);
  uVar8 = *(undefined8 *)(uVar1 + lVar10);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf76040(lVar7,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(lVar7);
  func_0x00010c15d940(uVar1);
  func_0x00010bde0c40(uVar1);
  func_0x00010c12adc0(*(undefined8 *)(uVar1 + (long)_DAT_112745d1c));
  func_0x00010c12adc0(*(undefined8 *)(uVar1 + (long)_DAT_112745d20));
  func_0x00010be8bc60(uVar1);
  uVar2 = *(ulong *)(uVar1 + (long)_DAT_112745df0);
  *(undefined8 *)(uVar1 + (long)_DAT_112745df0) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return uVar2;
  }
  ___stack_chk_fail();
  puStack_480 = &DAT_112745d1c;
  pcStack_468 = FUN_10633c8ac;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = uVar2 + (long)_DAT_112745d28;
  lStack_4a0 = unaff_x24;
  lStack_498 = lVar12;
  lStack_490 = lVar10;
  uStack_488 = uVar8;
  uStack_478 = uVar1;
  ppuStack_470 = &ppuStack_350;
  _objc_loadWeakRetained(lVar7);
  uVar4 = uVar2;
  func_0x00010c0f0be0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79300(lVar7,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(lVar7);
  uVar4 = uVar2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  func_0x00010bf1f3c0();
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_release(uVar4);
  if ((int)uVar3 != 0) {
    func_0x00010beb8100(uVar2);
  }
  func_0x00010be70c40(uVar2);
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  lStack_568 = 0;
  uStack_570 = 0;
  uStack_558 = 0;
  plStack_560 = (long *)0x0;
  uVar4 = uVar2;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf52a60();
  if (uVar1 != 0) {
    lVar7 = *plStack_560;
    do {
      uVar11 = 0;
      do {
        if (*plStack_560 != lVar7) {
          _objc_enumerationMutation(uVar4);
        }
        func_0x00010c0f5b20(*(undefined8 *)(lStack_568 + uVar11 * 8));
        uVar11 = uVar11 + 1;
      } while (uVar1 != uVar11);
      uVar1 = uVar4;
      func_0x00010bf52a60(uVar4,param_2,&uStack_570,auStack_528,0x10);
    } while (uVar1 != 0);
  }
  _objc_release(uVar4);
  func_0x00010bf73680(*(undefined8 *)(uVar2 + (long)_DAT_112745ddc),param_2,1);
  uVar8 = *(undefined8 *)(uVar2 + (long)_DAT_112745d24);
  uVar4 = *(ulong *)(uVar2 + (long)_DAT_112745d10);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7360(uVar2);
  uVar2 = uVar4;
  func_0x00010c0f0fe0(uVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return uVar4;
  }
  ___stack_chk_fail();
  lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = uVar4;
  if ((uint)*(byte *)(uVar4 + (long)_DAT_112745de0) != (uint)uVar2) {
    *(char *)(uVar4 + (long)_DAT_112745de0) = (char)uVar2;
    lStack_688 = 0;
    uStack_690 = 0;
    uStack_678 = 0;
    plStack_680 = (long *)0x0;
    uStack_668 = 0;
    uStack_670 = 0;
    uStack_658 = 0;
    uStack_660 = 0;
    uVar11 = uVar4;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar11;
    func_0x00010bf52a60();
    if (uVar3 != 0) {
      lVar7 = *plStack_680;
      do {
        uVar13 = 0;
        do {
          if (*plStack_680 != lVar7) {
            _objc_enumerationMutation(uVar11);
          }
          func_0x00010c1d99a0(*(undefined8 *)(lStack_688 + uVar13 * 8),param_2,uVar2);
          uVar13 = uVar13 + 1;
        } while (uVar3 != uVar13);
        uVar3 = uVar11;
        func_0x00010bf52a60(uVar11,param_2,&uStack_690,auStack_648,0x10);
      } while (uVar3 != 0);
    }
    _objc_release(uVar11);
    if ((uint)uVar2 == 0) {
      func_0x00010c0f5b20(*(undefined8 *)(uVar4 + (long)_DAT_112745d18));
      func_0x00010c13d1c0(uVar4);
      func_0x00010bf99b40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b2338;
      func_0x00010c13d9e0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c24d960();
      func_0x00010c0f5b20(uVar4);
      func_0x00010bf99b40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b2338;
      func_0x00010c0f60e0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0eb7a0(uVar1,param_2,puVar5,*(undefined8 *)(uVar4 + (long)_DAT_112745d10));
    _objc_release(puVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
    return uVar1;
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(uVar1 + (long)_DAT_112745de0);
}



/* Entry: 10633c38c; end: 10633c483; -[SCOperaPageViewController viewDidPartiallyAppearWithCurrentViewRelativePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10633c38c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x24;
  ulong uVar11;
  ulong uVar12;
  undefined8 uStack_570;
  long lStack_568;
  long *plStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined1 auStack_528 [128];
  long lStack_4a8;
  undefined8 uStack_450;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined1 auStack_408 [128];
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  ulong uStack_358;
  undefined8 **ppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_2f8 [128];
  long lStack_278;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf52a60();
  if (uVar1 != 0) {
    lVar6 = *plStack_100;
    do {
      uVar8 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c29cb80(*(undefined8 *)(lStack_108 + uVar8 * 8),param_2,param_3);
        uVar8 = uVar8 + 1;
      } while (uVar1 != uVar8);
      uVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (uVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_10633c484;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = (long)_DAT_112745dd0;
  uVar1 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  if ((*(byte *)(param_1 + lVar6) & 1) == 0) {
    func_0x00010be945c0();
    *(undefined1 *)(param_1 + lVar6) = 1;
    func_0x00010bf1d960();
    if ((uVar1 & 1) == 0) {
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      lStack_218 = 0;
      uStack_220 = 0;
      uStack_208 = 0;
      plStack_210 = (long *)0x0;
      uVar1 = param_1;
      func_0x00010bf38f00();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar1;
      func_0x00010bf52a60();
      if (uVar8 != 0) {
        lVar6 = *plStack_210;
        do {
          uVar9 = 0;
          do {
            if (*plStack_210 != lVar6) {
              _objc_enumerationMutation(uVar1);
            }
            func_0x00010c29e920(*(undefined8 *)(lStack_218 + uVar9 * 8));
            uVar9 = uVar9 + 1;
          } while (uVar8 != uVar9);
          uVar8 = uVar1;
          func_0x00010bf52a60(uVar1,param_2,&uStack_220,auStack_1d8,0x10);
        } while (uVar8 != 0);
      }
      _objc_release(uVar1);
    }
    uVar4 = *(undefined8 *)(param_1 + (long)_DAT_112745d24);
    uVar1 = *(ulong *)(param_1 + (long)_DAT_112745d10);
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf7360(param_1);
    func_0x00010c0f10e0(uVar4,param_2,uVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return uVar1;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_10633c5e8;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = uVar1 + (long)_DAT_112745d2c;
  ppuStack_230 = &puStack_120;
  _objc_loadWeakRetained(lVar6);
  lVar7 = (long)_DAT_112745d10;
  uVar4 = *(undefined8 *)(uVar1 + lVar7);
  func_0x00010be36bc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0f20(lVar6,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(lVar6);
  uVar4 = 1;
  if (*(char *)(uVar1 + (long)_DAT_112745de0) == '\0') {
    uVar4 = 2;
  }
  func_0x00010bf73680(*(undefined8 *)(uVar1 + (long)_DAT_112745ddc),param_2,uVar4);
  func_0x00010bddf540(uVar1);
  *(undefined1 *)(uVar1 + (long)_DAT_112745de4) = 0;
  uVar4 = *(undefined8 *)(uVar1 + (long)_DAT_112745de8);
  *(undefined8 *)(uVar1 + (long)_DAT_112745de8) = 0;
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(uVar1 + (long)_DAT_112745d24);
  uVar4 = *(undefined8 *)(uVar1 + lVar7);
  func_0x00010be36bc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7360(uVar1);
  func_0x00010c0f10e0(uVar5,param_2,uVar4);
  _objc_release(uVar4);
  lVar10 = (long)_DAT_112745d28;
  lVar6 = uVar1 + lVar10;
  _objc_loadWeakRetained(lVar6);
  uVar4 = *(undefined8 *)(uVar1 + lVar7);
  func_0x00010be36bc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79300(lVar6,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(lVar6);
  uVar8 = uVar1;
  func_0x00010bf1d940();
  if ((int)uVar8 != 0) {
    uVar4 = *(undefined8 *)(uVar1 + (long)_DAT_112745dec);
    func_0x00010c089820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29ca00();
    _objc_release(uVar4);
  }
  uVar8 = uVar1;
  func_0x00010bf1d960();
  if ((uVar8 & 1) == 0) {
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    lStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    plStack_330 = (long *)0x0;
    uVar8 = uVar1;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf52a60();
    if (uVar9 != 0) {
      unaff_x24 = *plStack_330;
      do {
        uVar12 = 0;
        do {
          if (*plStack_330 != unaff_x24) {
            _objc_enumerationMutation(uVar8);
          }
          func_0x00010c29ca00(*(undefined8 *)(lStack_338 + uVar12 * 8));
          uVar12 = uVar12 + 1;
        } while (uVar9 != uVar12);
        uVar9 = uVar8;
        func_0x00010bf52a60(uVar8,param_2,&uStack_340,auStack_2f8,0x10);
      } while (uVar9 != 0);
    }
    _objc_release(uVar8);
  }
  lVar6 = uVar1 + lVar10;
  _objc_loadWeakRetained(lVar6);
  uVar4 = *(undefined8 *)(uVar1 + lVar7);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf76040(lVar6,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(lVar6);
  func_0x00010c15d940(uVar1);
  func_0x00010bde0c40(uVar1);
  func_0x00010c12adc0(*(undefined8 *)(uVar1 + (long)_DAT_112745d1c));
  func_0x00010c12adc0(*(undefined8 *)(uVar1 + (long)_DAT_112745d20));
  func_0x00010be8bc60(uVar1);
  uVar8 = *(ulong *)(uVar1 + (long)_DAT_112745df0);
  *(undefined8 *)(uVar1 + (long)_DAT_112745df0) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return uVar8;
  }
  ___stack_chk_fail();
  puStack_360 = &DAT_112745d1c;
  pcStack_348 = FUN_10633c8ac;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = uVar8 + (long)_DAT_112745d28;
  lStack_380 = unaff_x24;
  lStack_378 = lVar10;
  lStack_370 = lVar7;
  uStack_368 = uVar4;
  uStack_358 = uVar1;
  ppuStack_350 = &ppuStack_230;
  _objc_loadWeakRetained(lVar6);
  uVar1 = uVar8;
  func_0x00010c0f0be0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79300(lVar6,param_2,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar1);
  _objc_release(lVar6);
  uVar1 = uVar8;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010bf1f3c0();
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010beb8100(uVar8);
  }
  func_0x00010be70c40(uVar8);
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  lStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  plStack_440 = (long *)0x0;
  uVar1 = uVar8;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bf52a60();
  if (uVar9 != 0) {
    lVar6 = *plStack_440;
    do {
      uVar12 = 0;
      do {
        if (*plStack_440 != lVar6) {
          _objc_enumerationMutation(uVar1);
        }
        func_0x00010c0f5b20(*(undefined8 *)(lStack_448 + uVar12 * 8));
        uVar12 = uVar12 + 1;
      } while (uVar9 != uVar12);
      uVar9 = uVar1;
      func_0x00010bf52a60(uVar1,param_2,&uStack_450,auStack_408,0x10);
    } while (uVar9 != 0);
  }
  _objc_release(uVar1);
  func_0x00010bf73680(*(undefined8 *)(uVar8 + (long)_DAT_112745ddc),param_2,1);
  uVar4 = *(undefined8 *)(uVar8 + (long)_DAT_112745d24);
  uVar9 = *(ulong *)(uVar8 + (long)_DAT_112745d10);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7360(uVar8);
  uVar1 = uVar9;
  func_0x00010c0f0fe0(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return uVar9;
  }
  ___stack_chk_fail();
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = uVar9;
  if ((uint)*(byte *)(uVar9 + (long)_DAT_112745de0) != (uint)uVar1) {
    *(char *)(uVar9 + (long)_DAT_112745de0) = (char)uVar1;
    lStack_568 = 0;
    uStack_570 = 0;
    uStack_558 = 0;
    plStack_560 = (long *)0x0;
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    uVar12 = uVar9;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar12;
    func_0x00010bf52a60();
    if (uVar2 != 0) {
      lVar6 = *plStack_560;
      do {
        uVar11 = 0;
        do {
          if (*plStack_560 != lVar6) {
            _objc_enumerationMutation(uVar12);
          }
          func_0x00010c1d99a0(*(undefined8 *)(lStack_568 + uVar11 * 8),param_2,uVar1);
          uVar11 = uVar11 + 1;
        } while (uVar2 != uVar11);
        uVar2 = uVar12;
        func_0x00010bf52a60(uVar12,param_2,&uStack_570,auStack_528,0x10);
      } while (uVar2 != 0);
    }
    _objc_release(uVar12);
    if ((uint)uVar1 == 0) {
      func_0x00010c0f5b20(*(undefined8 *)(uVar9 + (long)_DAT_112745d18));
      func_0x00010c13d1c0(uVar9);
      func_0x00010bf99b40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b2338;
      func_0x00010c13d9e0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c24d960();
      func_0x00010c0f5b20(uVar9);
      func_0x00010bf99b40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b2338;
      func_0x00010c0f60e0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0eb7a0(uVar8,param_2,puVar3,*(undefined8 *)(uVar9 + (long)_DAT_112745d10));
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return uVar8;
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(uVar8 + (long)_DAT_112745de0);
}



/* Entry: 10633c484; end: 10633c5e7; -[SCOperaPageViewController viewWillFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10633c484(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x24;
  ulong uVar11;
  ulong uVar12;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 auStack_418 [128];
  long lStack_398;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_2f8 [128];
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  ulong uStack_248;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_112745dd0;
  uVar1 = param_1;
  if ((*(byte *)(param_1 + lVar5) & 1) == 0) {
    func_0x00010be945c0();
    *(undefined1 *)(param_1 + lVar5) = 1;
    func_0x00010bf1d960();
    if ((uVar1 & 1) == 0) {
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      lStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      plStack_100 = (long *)0x0;
      uVar1 = param_1;
      func_0x00010bf38f00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf52a60();
      if (uVar2 != 0) {
        lVar5 = *plStack_100;
        do {
          uVar9 = 0;
          do {
            if (*plStack_100 != lVar5) {
              _objc_enumerationMutation(uVar1);
            }
            func_0x00010c29e920(*(undefined8 *)(lStack_108 + uVar9 * 8));
            uVar9 = uVar9 + 1;
          } while (uVar2 != uVar9);
          uVar2 = uVar1;
          func_0x00010bf52a60(uVar1,param_2,&uStack_110,auStack_c8,0x10);
        } while (uVar2 != 0);
      }
      _objc_release(uVar1);
    }
    uVar6 = *(undefined8 *)(param_1 + (long)_DAT_112745d24);
    uVar1 = *(ulong *)(param_1 + (long)_DAT_112745d10);
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf7360(param_1);
    func_0x00010c0f10e0(uVar6,param_2,uVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar1;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_10633c5e8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = uVar1 + (long)_DAT_112745d2c;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained(lVar5);
  lVar8 = (long)_DAT_112745d10;
  uVar6 = *(undefined8 *)(uVar1 + lVar8);
  func_0x00010be36bc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0f20(lVar5,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(lVar5);
  uVar6 = 1;
  if (*(char *)(uVar1 + (long)_DAT_112745de0) == '\0') {
    uVar6 = 2;
  }
  func_0x00010bf73680(*(undefined8 *)(uVar1 + (long)_DAT_112745ddc),param_2,uVar6);
  func_0x00010bddf540(uVar1);
  *(undefined1 *)(uVar1 + (long)_DAT_112745de4) = 0;
  uVar6 = *(undefined8 *)(uVar1 + (long)_DAT_112745de8);
  *(undefined8 *)(uVar1 + (long)_DAT_112745de8) = 0;
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(uVar1 + (long)_DAT_112745d24);
  uVar6 = *(undefined8 *)(uVar1 + lVar8);
  func_0x00010be36bc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7360(uVar1);
  func_0x00010c0f10e0(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  lVar10 = (long)_DAT_112745d28;
  lVar5 = uVar1 + lVar10;
  _objc_loadWeakRetained(lVar5);
  uVar6 = *(undefined8 *)(uVar1 + lVar8);
  func_0x00010be36bc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79300(lVar5,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(lVar5);
  uVar2 = uVar1;
  func_0x00010bf1d940();
  if ((int)uVar2 != 0) {
    uVar6 = *(undefined8 *)(uVar1 + (long)_DAT_112745dec);
    func_0x00010c089820(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29ca00();
    _objc_release(uVar6);
  }
  uVar2 = uVar1;
  func_0x00010bf1d960();
  if ((uVar2 & 1) == 0) {
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    uVar2 = uVar1;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010bf52a60();
    if (uVar9 != 0) {
      unaff_x24 = *plStack_220;
      do {
        uVar12 = 0;
        do {
          if (*plStack_220 != unaff_x24) {
            _objc_enumerationMutation(uVar2);
          }
          func_0x00010c29ca00(*(undefined8 *)(lStack_228 + uVar12 * 8));
          uVar12 = uVar12 + 1;
        } while (uVar9 != uVar12);
        uVar9 = uVar2;
        func_0x00010bf52a60(uVar2,param_2,&uStack_230,auStack_1e8,0x10);
      } while (uVar9 != 0);
    }
    _objc_release(uVar2);
  }
  lVar5 = uVar1 + lVar10;
  _objc_loadWeakRetained(lVar5);
  uVar6 = *(undefined8 *)(uVar1 + lVar8);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf76040(lVar5,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(lVar5);
  func_0x00010c15d940(uVar1);
  func_0x00010bde0c40(uVar1);
  func_0x00010c12adc0(*(undefined8 *)(uVar1 + (long)_DAT_112745d1c));
  func_0x00010c12adc0(*(undefined8 *)(uVar1 + (long)_DAT_112745d20));
  func_0x00010be8bc60(uVar1);
  uVar2 = *(ulong *)(uVar1 + (long)_DAT_112745df0);
  *(undefined8 *)(uVar1 + (long)_DAT_112745df0) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return uVar2;
  }
  ___stack_chk_fail();
  puStack_250 = &DAT_112745d1c;
  pcStack_238 = FUN_10633c8ac;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = uVar2 + (long)_DAT_112745d28;
  lStack_270 = unaff_x24;
  lStack_268 = lVar10;
  lStack_260 = lVar8;
  uStack_258 = uVar6;
  uStack_248 = uVar1;
  ppuStack_240 = &puStack_120;
  _objc_loadWeakRetained(lVar5);
  uVar1 = uVar2;
  func_0x00010c0f0be0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79300(lVar5,param_2,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar1);
  _objc_release(lVar5);
  uVar1 = uVar2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010bf1f3c0();
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    func_0x00010beb8100(uVar2);
  }
  func_0x00010be70c40(uVar2);
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  uVar1 = uVar2;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bf52a60();
  if (uVar9 != 0) {
    lVar5 = *plStack_330;
    do {
      uVar12 = 0;
      do {
        if (*plStack_330 != lVar5) {
          _objc_enumerationMutation(uVar1);
        }
        func_0x00010c0f5b20(*(undefined8 *)(lStack_338 + uVar12 * 8));
        uVar12 = uVar12 + 1;
      } while (uVar9 != uVar12);
      uVar9 = uVar1;
      func_0x00010bf52a60(uVar1,param_2,&uStack_340,auStack_2f8,0x10);
    } while (uVar9 != 0);
  }
  _objc_release(uVar1);
  func_0x00010bf73680(*(undefined8 *)(uVar2 + (long)_DAT_112745ddc),param_2,1);
  uVar6 = *(undefined8 *)(uVar2 + (long)_DAT_112745d24);
  uVar9 = *(ulong *)(uVar2 + (long)_DAT_112745d10);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7360(uVar2);
  uVar1 = uVar9;
  func_0x00010c0f0fe0(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return uVar9;
  }
  ___stack_chk_fail();
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = uVar9;
  if ((uint)*(byte *)(uVar9 + (long)_DAT_112745de0) != (uint)uVar1) {
    *(char *)(uVar9 + (long)_DAT_112745de0) = (char)uVar1;
    lStack_458 = 0;
    uStack_460 = 0;
    uStack_448 = 0;
    plStack_450 = (long *)0x0;
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    uVar12 = uVar9;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar12;
    func_0x00010bf52a60();
    if (uVar3 != 0) {
      lVar5 = *plStack_450;
      do {
        uVar11 = 0;
        do {
          if (*plStack_450 != lVar5) {
            _objc_enumerationMutation(uVar12);
          }
          func_0x00010c1d99a0(*(undefined8 *)(lStack_458 + uVar11 * 8),param_2,uVar1);
          uVar11 = uVar11 + 1;
        } while (uVar3 != uVar11);
        uVar3 = uVar12;
        func_0x00010bf52a60(uVar12,param_2,&uStack_460,auStack_418,0x10);
      } while (uVar3 != 0);
    }
    _objc_release(uVar12);
    if ((uint)uVar1 == 0) {
      func_0x00010c0f5b20(*(undefined8 *)(uVar9 + (long)_DAT_112745d18));
      func_0x00010c13d1c0(uVar9);
      func_0x00010bf99b40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b2338;
      func_0x00010c13d9e0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c24d960();
      func_0x00010c0f5b20(uVar9);
      func_0x00010bf99b40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b2338;
      func_0x00010c0f60e0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0eb7a0(uVar2,param_2,puVar4,*(undefined8 *)(uVar9 + (long)_DAT_112745d10));
    _objc_release(puVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return uVar2;
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(uVar2 + (long)_DAT_112745de0);
}



/* Entry: 10633c5e8; end: 10633c8ab; -[SCOperaPageViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10633c5e8(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x24;
  ulong uVar11;
  ulong uVar12;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_308 [128];
  long lStack_288;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  ulong uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_1 + (long)_DAT_112745d2c;
  _objc_loadWeakRetained(lVar8);
  lVar7 = (long)_DAT_112745d10;
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010be36bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0f20(lVar8,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(lVar8);
  uVar1 = 1;
  if (*(char *)(param_1 + (long)_DAT_112745de0) == '\0') {
    uVar1 = 2;
  }
  func_0x00010bf73680(*(undefined8 *)(param_1 + (long)_DAT_112745ddc),param_2,uVar1);
  func_0x00010bddf540(param_1);
  *(undefined1 *)(param_1 + (long)_DAT_112745de4) = 0;
  uVar1 = *(undefined8 *)(param_1 + (long)_DAT_112745de8);
  *(undefined8 *)(param_1 + (long)_DAT_112745de8) = 0;
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(param_1 + (long)_DAT_112745d24);
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010be36bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7360(param_1);
  func_0x00010c0f10e0(uVar6,param_2,uVar1);
  _objc_release(uVar1);
  lVar9 = (long)_DAT_112745d28;
  lVar8 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar8);
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010be36bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79300(lVar8,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(lVar8);
  uVar2 = param_1;
  func_0x00010bf1d940();
  if ((int)uVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + (long)_DAT_112745dec);
    func_0x00010c089820(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29ca00();
    _objc_release(uVar1);
  }
  uVar2 = param_1;
  func_0x00010bf1d960();
  if ((uVar2 & 1) == 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uVar2 = param_1;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf52a60();
    if (uVar4 != 0) {
      unaff_x24 = *plStack_110;
      do {
        uVar12 = 0;
        do {
          if (*plStack_110 != unaff_x24) {
            _objc_enumerationMutation(uVar2);
          }
          func_0x00010c29ca00(*(undefined8 *)(lStack_118 + uVar12 * 8));
          uVar12 = uVar12 + 1;
        } while (uVar4 != uVar12);
        uVar4 = uVar2;
        func_0x00010bf52a60(uVar2,param_2,&uStack_120,auStack_d8,0x10);
      } while (uVar4 != 0);
    }
    _objc_release(uVar2);
  }
  lVar8 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar8);
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf76040(lVar8,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(lVar8);
  func_0x00010c15d940(param_1);
  func_0x00010bde0c40(param_1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + (long)_DAT_112745d1c));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + (long)_DAT_112745d20));
  func_0x00010be8bc60(param_1);
  uVar2 = *(ulong *)(param_1 + (long)_DAT_112745df0);
  *(undefined8 *)(param_1 + (long)_DAT_112745df0) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar2;
  }
  ___stack_chk_fail();
  puStack_140 = &DAT_112745d1c;
  pcStack_128 = FUN_10633c8ac;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = uVar2 + (long)_DAT_112745d28;
  lStack_160 = unaff_x24;
  lStack_158 = lVar9;
  lStack_150 = lVar7;
  uStack_148 = uVar1;
  uStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained(lVar8);
  uVar4 = uVar2;
  func_0x00010c0f0be0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79300(lVar8,param_2,uVar12);
  _objc_release(uVar12);
  _objc_release(uVar4);
  _objc_release(lVar8);
  uVar4 = uVar2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar12;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar10;
  func_0x00010bf1f3c0();
  _objc_release(uVar10);
  _objc_release(uVar12);
  _objc_release(uVar4);
  if ((int)uVar3 != 0) {
    func_0x00010beb8100(uVar2);
  }
  func_0x00010be70c40(uVar2);
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uVar4 = uVar2;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010bf52a60();
  if (uVar12 != 0) {
    lVar8 = *plStack_220;
    do {
      uVar10 = 0;
      do {
        if (*plStack_220 != lVar8) {
          _objc_enumerationMutation(uVar4);
        }
        func_0x00010c0f5b20(*(undefined8 *)(lStack_228 + uVar10 * 8));
        uVar10 = uVar10 + 1;
      } while (uVar12 != uVar10);
      uVar12 = uVar4;
      func_0x00010bf52a60(uVar4,param_2,&uStack_230,auStack_1e8,0x10);
    } while (uVar12 != 0);
  }
  _objc_release(uVar4);
  func_0x00010bf73680(*(undefined8 *)(uVar2 + (long)_DAT_112745ddc),param_2,1);
  uVar1 = *(undefined8 *)(uVar2 + (long)_DAT_112745d24);
  uVar4 = *(ulong *)(uVar2 + (long)_DAT_112745d10);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7360(uVar2);
  uVar2 = uVar4;
  func_0x00010c0f0fe0(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return uVar4;
  }
  ___stack_chk_fail();
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = uVar4;
  if ((uint)*(byte *)(uVar4 + (long)_DAT_112745de0) != (uint)uVar2) {
    *(char *)(uVar4 + (long)_DAT_112745de0) = (char)uVar2;
    lStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    plStack_340 = (long *)0x0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uVar10 = uVar4;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar10;
    func_0x00010bf52a60();
    if (uVar3 != 0) {
      lVar8 = *plStack_340;
      do {
        uVar11 = 0;
        do {
          if (*plStack_340 != lVar8) {
            _objc_enumerationMutation(uVar10);
          }
          func_0x00010c1d99a0(*(undefined8 *)(lStack_348 + uVar11 * 8),param_2,uVar2);
          uVar11 = uVar11 + 1;
        } while (uVar3 != uVar11);
        uVar3 = uVar10;
        func_0x00010bf52a60(uVar10,param_2,&uStack_350,auStack_308,0x10);
      } while (uVar3 != 0);
    }
    _objc_release(uVar10);
    if ((uint)uVar2 == 0) {
      func_0x00010c0f5b20(*(undefined8 *)(uVar4 + (long)_DAT_112745d18));
      func_0x00010c13d1c0(uVar4);
      func_0x00010bf99b40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b2338;
      func_0x00010c13d9e0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c24d960();
      func_0x00010c0f5b20(uVar4);
      func_0x00010bf99b40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b2338;
      func_0x00010c0f60e0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0eb7a0(uVar12,param_2,puVar5,*(undefined8 *)(uVar4 + (long)_DAT_112745d10));
    _objc_release(puVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return uVar12;
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(uVar12 + (long)_DAT_112745de0);
}



/* Entry: 10633c8ac; end: 10633cac7; -[SCOperaPageViewController pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10633c8ac(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_1 + _DAT_112745d28;
  _objc_loadWeakRetained(lVar11);
  lVar1 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79300(lVar11,param_2,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf1f3c0();
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_release(lVar11);
  if ((int)lVar10 != 0) {
    func_0x00010beb8100(param_1);
  }
  func_0x00010be70c40(param_1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar11 = param_1;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_100;
    do {
      lVar10 = 0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(lVar11);
        }
        func_0x00010c0f5b20(*(undefined8 *)(lStack_108 + lVar10 * 8));
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar11;
      func_0x00010bf52a60(lVar11,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar11);
  func_0x00010bf73680(*(undefined8 *)(param_1 + _DAT_112745ddc),param_2,1);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112745d24);
  uVar2 = *(ulong *)(param_1 + _DAT_112745d10);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7360(param_1);
  uVar7 = uVar2;
  func_0x00010c0f0fe0(uVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar2;
  }
  ___stack_chk_fail();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = uVar2;
  if ((uint)*(byte *)(uVar2 + (long)_DAT_112745de0) != (uint)uVar7) {
    *(char *)(uVar2 + (long)_DAT_112745de0) = (char)uVar7;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uVar3 = uVar2;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf52a60();
    if (uVar4 != 0) {
      lVar11 = *plStack_220;
      do {
        uVar12 = 0;
        do {
          if (*plStack_220 != lVar11) {
            _objc_enumerationMutation(uVar3);
          }
          func_0x00010c1d99a0(*(undefined8 *)(lStack_228 + uVar12 * 8),param_2,uVar7);
          uVar12 = uVar12 + 1;
        } while (uVar4 != uVar12);
        uVar4 = uVar3;
        func_0x00010bf52a60(uVar3,param_2,&uStack_230,auStack_1e8,0x10);
      } while (uVar4 != 0);
    }
    _objc_release(uVar3);
    if ((uint)uVar7 == 0) {
      func_0x00010c0f5b20(*(undefined8 *)(uVar2 + (long)_DAT_112745d18));
      func_0x00010c13d1c0(uVar2);
      func_0x00010bf99b40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b2338;
      func_0x00010c13d9e0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c24d960();
      func_0x00010c0f5b20(uVar2);
      func_0x00010bf99b40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b2338;
      func_0x00010c0f60e0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0eb7a0(uVar5,param_2,puVar6,*(undefined8 *)(uVar2 + (long)_DAT_112745d10));
    _objc_release(puVar6);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return uVar5;
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(uVar5 + (long)_DAT_112745de0);
}



/* Entry: 10633cac8; end: 10633cc8b; -[SCOperaPageViewController setPausedForAttachment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10633cac8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_1;
  if ((uint)*(byte *)(param_1 + (long)_DAT_112745de0) != (uint)param_3) {
    *(char *)(param_1 + (long)_DAT_112745de0) = (char)param_3;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uVar1 = param_1;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf52a60();
    if (uVar2 != 0) {
      lVar5 = *plStack_110;
      do {
        uVar6 = 0;
        do {
          if (*plStack_110 != lVar5) {
            _objc_enumerationMutation(uVar1);
          }
          func_0x00010c1d99a0(*(undefined8 *)(lStack_118 + uVar6 * 8),param_2,param_3);
          uVar6 = uVar6 + 1;
        } while (uVar2 != uVar6);
        uVar2 = uVar1;
        func_0x00010bf52a60(uVar1,param_2,&uStack_120,auStack_d8,0x10);
      } while (uVar2 != 0);
    }
    _objc_release(uVar1);
    if ((uint)param_3 == 0) {
      func_0x00010c0f5b20(*(undefined8 *)(param_1 + (long)_DAT_112745d18));
      func_0x00010c13d1c0(param_1);
      func_0x00010bf99b40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b2338;
      func_0x00010c13d9e0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c24d960();
      func_0x00010c0f5b20(param_1);
      func_0x00010bf99b40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b2338;
      func_0x00010c0f60e0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0eb7a0(uVar3,param_2,puVar4,*(undefined8 *)(param_1 + (long)_DAT_112745d10));
    _objc_release(puVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar3;
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(uVar3 + (long)_DAT_112745de0);
}



/* Entry: 10633cc8c; end: 10633cc9b; -[SCOperaPageViewController isPausedForAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10633cc8c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745de0);
}



/* Entry: 10633cc9c; end: 10633ce7b; -[SCOperaPageViewController resume] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010633cedc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_10633cc9c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + _DAT_112745df4) & 1) == 0) {
    lVar2 = param_1 + _DAT_112745d28;
    _objc_loadWeakRetained(lVar2);
    lVar5 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf79420(lVar2);
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(lVar2);
    func_0x00010be95bc0(param_1);
    lVar8 = param_1;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar8);
        }
        uVar7 = *(undefined8 *)(lVar10 * 8);
        func_0x00010c13d1c0(uVar7);
        func_0x00010c1d99a0(uVar7);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    func_0x00010bf73680(*(undefined8 *)(param_1 + _DAT_112745ddc));
    uVar6 = *(undefined8 *)(param_1 + _DAT_112745d24);
    uVar7 = *(undefined8 *)(param_1 + _DAT_112745d10);
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf7360(param_1);
    func_0x00010c0f1020(uVar6);
    _objc_release(uVar7);
    func_0x00010be35460();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c24d960(*(undefined8 *)(lVar8 * 8));
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
    lVar4 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_1;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar5);
      }
      func_0x00010c255780(*(undefined8 *)(lVar10 * 8));
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  lVar4 = *(long *)(param_1 + _DAT_112745ddc);
  func_0x00010bf73680();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  puVar1 = PTR_s_overridePlaybackToLastPositionFo_112619b08;
  while (PTR_s_overridePlaybackToLastPositionFo_112619b08 = puVar1, lVar2 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar4);
      }
      uVar9 = *(ulong *)(lVar10 * 8);
      uVar3 = uVar9;
      _objc_opt_respondsToSelector(uVar9,puVar1);
      if ((uVar3 & 1) != 0) {
        func_0x00010c0f03c0(uVar9);
      }
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    lVar2 = lVar4;
    func_0x00010bf52a60();
    puVar1 = PTR_s_overridePlaybackToLastPositionFo_112619b08;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar4;
  func_0x00010bf1d960();
  if ((int)lVar2 == 0) {
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar4);
        }
        uVar3 = *(ulong *)(lVar10 * 8);
        func_0x00010c0c53e0();
        if ((uVar3 & 1) != 0) {
          _objc_release(lVar4);
          lVar4 = 1;
          goto LAB_10633d2a8;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    lVar4 = 0;
LAB_10633d2a8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return;
    }
  }
  else {
    lVar4 = *(long *)(lVar4 + _DAT_112745d10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010c0ea090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar4,PTR_s_operaBuiltInMediaResolverEnabled_112618238)
      ;
      return;
    }
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar4 + _DAT_112745d3c),PTR_s_setVolume__112666a90);
  return;
}



/* Entry: 10633ce7c; end: 10633cf6b; -[SCOperaPageViewController start] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010633cedc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_10633ce7c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c24d960(*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_1;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar5);
      }
      func_0x00010c255780(*(undefined8 *)(lVar8 * 8));
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  lVar2 = *(long *)(param_1 + _DAT_112745ddc);
  func_0x00010bf73680();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  puVar1 = PTR_s_overridePlaybackToLastPositionFo_112619b08;
  while (PTR_s_overridePlaybackToLastPositionFo_112619b08 = puVar1, lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar2);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      uVar4 = uVar7;
      _objc_opt_respondsToSelector(uVar7,puVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010c0f03c0(uVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar2;
    func_0x00010bf52a60();
    puVar1 = PTR_s_overridePlaybackToLastPositionFo_112619b08;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = lVar2;
  func_0x00010bf1d960();
  if ((int)lVar3 == 0) {
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        uVar4 = *(ulong *)(lVar8 * 8);
        func_0x00010c0c53e0();
        if ((uVar4 & 1) != 0) {
          _objc_release(lVar2);
          lVar2 = 1;
          goto LAB_10633d2a8;
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
    lVar2 = 0;
LAB_10633d2a8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return;
    }
  }
  else {
    lVar2 = *(long *)(lVar2 + _DAT_112745d10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010c0ea090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_operaBuiltInMediaResolverEnabled_112618238)
      ;
      return;
    }
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + _DAT_112745d3c),PTR_s_setVolume__112666a90);
  return;
}



/* Entry: 10633cf6c; end: 10633d073; -[SCOperaPageViewController stop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633cf6c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_1;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar6);
      }
      func_0x00010c255780(*(undefined8 *)(lVar8 * 8));
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  lVar2 = *(long *)(param_1 + _DAT_112745ddc);
  func_0x00010bf73680();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  puVar1 = PTR_s_overridePlaybackToLastPositionFo_112619b08;
  while (PTR_s_overridePlaybackToLastPositionFo_112619b08 = puVar1, lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar2);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      uVar4 = uVar7;
      _objc_opt_respondsToSelector(uVar7,puVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010c0f03c0(uVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar2;
    func_0x00010bf52a60();
    puVar1 = PTR_s_overridePlaybackToLastPositionFo_112619b08;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = lVar2;
  func_0x00010bf1d960();
  if ((int)lVar3 == 0) {
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        uVar4 = *(ulong *)(lVar8 * 8);
        func_0x00010c0c53e0();
        if ((uVar4 & 1) != 0) {
          _objc_release(lVar2);
          lVar2 = 1;
          goto LAB_10633d2a8;
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
    lVar2 = 0;
LAB_10633d2a8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return;
    }
  }
  else {
    lVar2 = *(long *)(lVar2 + _DAT_112745d10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010c0ea090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_operaBuiltInMediaResolverEnabled_112618238)
      ;
      return;
    }
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + _DAT_112745d3c),PTR_s_setVolume__112666a90);
  return;
}



/* Entry: 10633d074; end: 10633d187; -[SCOperaPageViewController overridePlaybackToLastPositionForResume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633d074(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  puVar1 = PTR_s_overridePlaybackToLastPositionFo_112619b08;
  while (PTR_s_overridePlaybackToLastPositionFo_112619b08 = puVar1, lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_1);
      }
      uVar6 = *(ulong *)(lVar7 * 8);
      uVar3 = uVar6;
      _objc_opt_respondsToSelector(uVar6,puVar1);
      if ((uVar3 & 1) != 0) {
        func_0x00010c0f03c0(uVar6);
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_overridePlaybackToLastPositionFo_112619b08;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bf1d960();
  if ((int)lVar2 == 0) {
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_1);
        }
        uVar3 = *(ulong *)(lVar7 * 8);
        func_0x00010c0c53e0();
        if ((uVar3 & 1) != 0) {
          _objc_release(param_1);
          lVar2 = 1;
          goto LAB_10633d2a8;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    lVar2 = 0;
LAB_10633d2a8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_112745d10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010c0ea090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_operaBuiltInMediaResolverEnabled_112618238)
      ;
      return;
    }
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + _DAT_112745d3c),PTR_s_setVolume__112666a90);
  return;
}



/* Entry: 10633d188; end: 10633d2db; -[SCOperaPageViewController mediaIsBeingPreparedForDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633d188(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bf1d960();
  if ((int)lVar2 == 0) {
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar3 = *(ulong *)(lVar5 * 8);
        func_0x00010c0c53e0();
        if ((uVar3 & 1) != 0) {
          _objc_release(param_1);
          lVar2 = 1;
          goto LAB_10633d2a8;
        }
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    lVar2 = 0;
LAB_10633d2a8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
      return;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_112745d10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010c0ea090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_operaBuiltInMediaResolverEnabled_112618238)
      ;
      return;
    }
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + _DAT_112745d3c),PTR_s_setVolume__112666a90);
  return;
}



/* Entry: 10633d2dc; end: 10633d2eb; -[SCOperaPageViewController setVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633d2dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745d3c),PTR_s_setVolume__112666a90);
  return;
}



/* Entry: 10633d2ec; end: 10633d2fb; -[SCOperaPageViewController setMuted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633d2ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ca6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745d3c),PTR_s_setMuted__1126503d0);
  return;
}



/* Entry: 10633d2fc; end: 10633d3b7; -[SCOperaPageViewController setImageForBackdrop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633d2fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_112745cf0);
  func_0x00010bf13aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112745da8);
    func_0x00010bf13ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((param_3 != 0) || (lVar1 == 0)) {
      lVar1 = (long)_DAT_112745dc8;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      *(long *)(param_1 + lVar1) = param_3;
      _objc_release(uVar2);
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cbe20();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10633d3b8; end: 10633d483; -[SCOperaPageViewController isPaused] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10633d3b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745cf8);
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112745cf0);
  func_0x00010c29d360(uVar3);
  uVar4 = uVar2;
  func_0x000109128eac(uVar2,uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    lVar5 = 0;
  }
  else if ((*(byte *)(param_1 + _DAT_112745de0) & 1) == 0) {
    func_0x00010c0f2520(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c079ba0();
    _objc_release(param_1);
  }
  else {
    lVar5 = 1;
  }
  return lVar5;
}



/* Entry: 10633d484; end: 10633d6c7; -[SCOperaPageViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633d484(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bddf980();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar1 = param_1;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_130;
    do {
      lVar10 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(undefined8 *)(lStack_138 + lVar10 * 8);
        func_0x00010c2a6740(uVar8,param_2,0);
        uVar7 = uVar8;
        func_0x00010c29bf00(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c960();
        _objc_release(uVar7);
        func_0x00010c12c8e0(uVar8);
        func_0x00010c26ac80(*(undefined8 *)(param_1 + _DAT_112745d08),param_2,uVar8);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_140,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2020();
  _objc_release(lVar1);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112745d00);
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010c29e3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112745d10);
  puVar4 = PTR_PTR_1126c9a20;
  func_0x00010c06c7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_f8 = puVar4;
  func_0x00010be3e340(param_1);
  func_0x00010c0df6e0(puVar5,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_f0 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_f0,&puStack_f8,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar7,param_2,puVar3,uVar8,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(puVar3 + _DAT_112745df8);
  _objc_retain(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 10633d6c8; end: 10633d6f7; -[SCOperaPageViewController progressUpdateTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633d6c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745df8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10633d6f8; end: 10633d893; -[SCOperaPageViewController pageabilityForRelativePosition:gestureRecognizer:] */

undefined ** FUN_10633d6f8(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be08e80(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010be6f0e0(param_1,param_2,param_3,param_4);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = param_1, func_0x00010bdcc8c0(param_1,param_2,param_3,param_4), (uVar1 & 1) == 0)) {
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      plStack_110 = (long *)0x0;
      func_0x00010be48b00();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010c140180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      uVar2 = uVar1;
      func_0x00010bf52a60(uVar1,param_2,&uStack_120,auStack_d8,0x10);
      if (uVar2 != 0) {
        lVar4 = *plStack_110;
        do {
          uVar5 = 0;
          do {
            if (*plStack_110 != lVar4) {
              _objc_enumerationMutation(uVar1);
            }
            ppuVar3 = *(undefined ***)(lStack_118 + uVar5 * 8);
            func_0x00010c0f2480(ppuVar3,param_2,param_3,param_4);
            if (ppuVar3 != (undefined **)0xffffffffffffffff) goto LAB_10633d848;
            uVar5 = uVar5 + 1;
          } while (uVar2 != uVar5);
          uVar2 = uVar1;
          func_0x00010bf52a60(uVar1,param_2,&uStack_120,auStack_d8,0x10);
        } while (uVar2 != 0);
      }
      ppuVar3 = (undefined **)0x0;
LAB_10633d848:
      _objc_release(uVar1);
    }
    else {
      ppuVar3 = (undefined **)0x1;
    }
  }
  else {
    ppuVar3 = (undefined **)0x0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  if (5 < param_4 - 1U) {
    return &PTR____CFConstantStringClassReference_110dd32f8;
  }
  return (undefined **)(&PTR_PTR_11091cc48)[param_4 - 1U];
}



/* Entry: 10633d894; end: 10633d8bb;  */

undefined ** FUN_10633d894(long param_1)

{
  if (param_1 - 1U < 6) {
    return (undefined **)(&PTR_PTR_11091cc48)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dd32f8;
}



/* Entry: 10633d8bc; end: 10633da07; -[SCOperaPageViewController _enablePageabilityOverwriteForRelativePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633d8bc(double param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  lVar5 = (long)_DAT_112745d24;
  iVar1 = (int)*(undefined8 *)(param_2 + lVar5);
  func_0x00010c076be0();
  if (iVar1 != 0) {
    lVar6 = (long)_DAT_112745d10;
    uVar2 = *(ulong *)(param_2 + lVar6);
    func_0x00010c0f2500();
    puVar3 = PTR_PTR_1126c9db0;
    func_0x00010bf01340();
    if ((((((ulong)puVar3 & uVar2) == 0) || ((param_4 != 2 && (param_4 != 5)))) &&
        ((puVar3 = PTR_PTR_1126c9db0, func_0x00010bf01320(), ((ulong)puVar3 & uVar2) == 0 ||
         ((param_4 != 1 && (param_4 != 6)))))) &&
       (((puVar3 = PTR_PTR_1126c9db0, func_0x00010bf01360(), param_4 != 4 ||
         (((ulong)puVar3 & uVar2) == 0)) &&
        (lVar4 = (long)_DAT_112745d58, *(long *)(param_2 + lVar4) != 0)))) {
      uVar2 = *(ulong *)(param_2 + lVar6);
      func_0x00010c06b7e0();
      if ((uVar2 & 1) == 0) {
        uVar2 = *(ulong *)(param_2 + lVar4);
        func_0x00010bf91100();
        if ((uVar2 & 1) != 0) {
          return;
        }
      }
      func_0x00010c09cdc0(*(undefined8 *)(param_2 + lVar5));
      dVar7 = param_1;
      func_0x00010c270480(*(undefined8 *)(param_2 + lVar4));
      if (dVar7 <= param_1) {
        func_0x00010c09cdc0(*(undefined8 *)(param_2 + lVar5));
        uVar2 = *(ulong *)(param_2 + lVar4);
        func_0x00010bf92600();
        if ((1 < param_4 - 5U) || ((uVar2 & 1) == 0)) {
          func_0x00010bf8f6c0(*(undefined8 *)(param_2 + lVar4));
        }
      }
    }
  }
  return;
}



/* Entry: 10633da08; end: 10633dbc3; -[SCOperaPageViewController pageabilityForRelativePosition:navigationStyle:swipeDirection:gestureRecognizer:] */

ulong FUN_10633da08(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5,ulong param_6)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_5;
  _objc_retain(param_6);
  uVar7 = param_1;
  func_0x00010be08e80();
  if ((uVar7 & 1) == 0) {
    uVar7 = param_1;
    func_0x00010be6f0e0();
    if (((uVar7 & 1) == 0) &&
       (uVar7 = param_1, uVar5 = param_5, func_0x00010bdcc8e0(), (uVar7 & 1) == 0)) {
      func_0x00010be48b00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c140180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      uVar5 = 0x10;
      uVar4 = uVar3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (uVar4 != 0) {
        uVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar3);
          }
          uVar7 = *(ulong *)(uVar8 * 8);
          uVar5 = param_6;
          FUN_10633dbc4(uVar7,param_3,param_4,param_5,param_6);
          if (uVar7 != 0xffffffffffffffff) goto LAB_10633db74;
          uVar8 = uVar8 + 1;
        } while (uVar4 != uVar8);
        uVar5 = 0x10;
        uVar4 = uVar3;
        func_0x00010bf52a60();
      }
      uVar7 = 0;
LAB_10633db74:
      _objc_release(uVar3);
    }
    else {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return uVar7;
  }
  ___stack_chk_fail();
  puVar2 = PTR_s_pageabilityForRelativePosition_n_11261a340;
  _objc_retain(uVar5);
  _objc_retain(param_6);
  uVar7 = param_6;
  _objc_opt_respondsToSelector(param_6,puVar2);
  uVar4 = param_6;
  if ((uVar7 & 1) == 0) {
    func_0x00010c0f2480(param_6);
  }
  else {
    func_0x00010c0f24a0(param_6);
  }
  _objc_release(uVar5);
  _objc_release(param_6);
  return uVar4;
}



/* Entry: 10633dbc4; end: 10633dc6b;  */

ulong FUN_10633dbc4(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_x4;
  
  puVar1 = PTR_s_pageabilityForRelativePosition_n_11261a340;
  _objc_retain(in_x4);
  _objc_retain(param_1);
  uVar2 = param_1;
  _objc_opt_respondsToSelector(param_1,puVar1);
  uVar3 = param_1;
  if ((uVar2 & 1) == 0) {
    func_0x00010c0f2480(param_1);
  }
  else {
    func_0x00010c0f24a0(param_1);
  }
  _objc_release(in_x4);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10633dc6c; end: 10633deb3; -[SCOperaPageViewController _pageDisablesPagingForPosition:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10633dc6c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain(param_4);
  lVar8 = (long)_DAT_112745d10;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar8);
  func_0x00010c23e0c0();
  if (iVar2 == 0) {
LAB_10633ddc0:
    if (param_4 == 0) {
LAB_10633ddf8:
      bVar1 = false;
    }
    else {
      puVar6 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
      _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
      uVar3 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar6);
      if ((uVar3 & 1) == 0) goto LAB_10633ddf8;
      uVar3 = param_4;
      func_0x00010c252440();
      if (uVar3 == 1) {
        bVar1 = true;
      }
      else {
        uVar3 = param_4;
        func_0x00010c252440();
        bVar1 = uVar3 == 2;
      }
    }
    iVar2 = (int)*(undefined8 *)(param_1 + lVar8);
    func_0x00010c264ee0();
    uVar5 = 0;
    if ((param_3 != 4) || (iVar2 == 0 || !bVar1)) goto LAB_10633de78;
    puVar6 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = *(undefined **)(param_1 + lVar8);
    func_0x00010be36bc0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa540(puVar6);
  }
  else {
    if (param_3 != 5) {
      uVar3 = *(ulong *)(param_1 + lVar8);
      func_0x00010bf91fc0();
      if ((param_3 != 2) || ((uVar3 & 1) != 0)) goto LAB_10633ddc0;
    }
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    FUN_10633d894();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c23e0c0(*(undefined8 *)(param_1 + lVar8));
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf91fc0(*(undefined8 *)(param_1 + lVar8));
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(param_3);
    puVar7 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010be36bc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa540(puVar7);
    _objc_release(uVar5);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar5 = 1;
LAB_10633de78:
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 10633deb4; end: 10633e0d7; -[SCOperaPageViewController _anyOfLayerViewControllersDisablePagingForPosition:navigationStyle:swipeDirection:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10633deb4(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5,long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined **ppuVar20;
  undefined8 uVar21;
  long lVar22;
  long unaff_x25;
  long lVar23;
  long unaff_x26;
  long lVar24;
  long unaff_x27;
  long unaff_x28;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined1 *puStack_2b8;
  long lStack_2b0;
  undefined **ppuStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  long lStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined1 *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar19 = param_1;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = &uStack_130;
  ppuVar8 = apuStack_f0;
  lVar16 = lVar19;
  func_0x00010bf52a60();
  if (lVar16 != 0) {
    unaff_x27 = *plStack_120;
    unaff_x25 = lVar16;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(lVar19);
        }
        unaff_x26 = *(long *)(lStack_128 + unaff_x28 * 8);
        lVar16 = unaff_x26;
        FUN_10633dbc4(unaff_x26,param_3,param_4,param_5,param_6);
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (lVar16 == 1) {
          FUN_10633d894();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780();
          _objc_retainAutoreleasedReturnValue();
          lStack_150 = unaff_x26;
          uStack_148 = param_3;
          puStack_140 = puVar2;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          _objc_release(param_3);
          param_4 = PTR_PTR_1126c9aa8;
          func_0x00010c22b6a0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = *(undefined8 **)(param_1 + _DAT_112745d10);
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = &PTR____CFConstantStringClassReference_110e4b4f8;
          puVar6 = puVar4;
          func_0x00010befa540(param_4);
          _objc_release(puVar4);
          _objc_release(param_4);
          _objc_release(puVar3);
          puVar18 = (undefined1 *)0x1;
          goto LAB_10633e088;
        }
        unaff_x28 = unaff_x28 + 1;
      } while (unaff_x25 != unaff_x28);
      puVar6 = &uStack_130;
      ppuVar8 = apuStack_f0;
      unaff_x25 = lVar19;
      func_0x00010bf52a60();
    } while (unaff_x25 != 0);
  }
  puVar18 = (undefined1 *)0x0;
  puVar3 = param_5;
LAB_10633e088:
  _objc_release(lVar19);
  lVar16 = param_6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar18;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_10633e0d8;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1b0 = unaff_x28;
  lStack_1a8 = unaff_x27;
  lStack_1a0 = unaff_x26;
  lStack_198 = unaff_x25;
  puStack_190 = puVar3;
  uStack_188 = param_3;
  puStack_180 = param_4;
  puStack_178 = puVar18;
  lStack_170 = lVar19;
  lStack_168 = param_6;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar8);
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  lVar19 = lVar16;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar19;
  func_0x00010bf52a60();
  if (lVar17 != 0) {
    lVar23 = *plStack_270;
    do {
      lVar24 = 0;
      do {
        if (*plStack_270 != lVar23) {
          _objc_enumerationMutation(lVar19);
        }
        lVar22 = *(long *)(lStack_278 + lVar24 * 8);
        lVar5 = lVar22;
        func_0x00010c0f2480();
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (lVar5 == 1) {
          FUN_10633d894();
          _objc_retainAutoreleasedReturnValue();
          lStack_290 = lVar22;
          puStack_288 = puVar6;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          puVar6 = (undefined8 *)PTR_PTR_1126c9aa8;
          func_0x00010c22b6a0();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = *(undefined8 *)(lVar16 + _DAT_112745d10);
          func_0x00010be36bc0(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa540(puVar6);
          _objc_release(uVar15);
          _objc_release(puVar6);
          _objc_release(puVar3);
          puVar18 = (undefined1 *)0x1;
          goto LAB_10633e274;
        }
        lVar24 = lVar24 + 1;
      } while (lVar17 != lVar24);
      lVar17 = lVar19;
      func_0x00010bf52a60();
    } while (lVar17 != 0);
  }
  puVar18 = (undefined1 *)0x0;
LAB_10633e274:
  _objc_release(lVar19);
  ppuVar7 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return puVar18;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_3a0;
  pcStack_298 = FUN_10633e2c4;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  plStack_390 = (long *)0x0;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  lStack_2d0 = unaff_x28;
  lStack_2c8 = unaff_x27;
  puStack_2c0 = puVar6;
  puStack_2b8 = puVar18;
  lStack_2b0 = lVar19;
  ppuStack_2a8 = ppuVar8;
  ppuStack_2a0 = &puStack_160;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010bf52a60();
  if (ppuVar8 != (undefined **)0x0) {
    lVar19 = *plStack_390;
    do {
      ppuVar20 = (undefined **)0x0;
      do {
        if (*plStack_390 != lVar19) {
          _objc_enumerationMutation(ppuVar7);
        }
        iVar1 = (int)*(undefined8 *)(lStack_398 + (long)ppuVar20 * 8);
        func_0x00010bf2cc00();
        if (iVar1 == 0) {
          puVar18 = (undefined1 *)0x0;
          goto LAB_10633e388;
        }
        ppuVar20 = (undefined **)((long)ppuVar20 + 1);
      } while (ppuVar8 != ppuVar20);
      ppuVar8 = ppuVar7;
      puVar4 = &uStack_3a0;
      func_0x00010bf52a60();
    } while (ppuVar8 != (undefined **)0x0);
  }
  puVar18 = (undefined1 *)0x1;
LAB_10633e388:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return puVar18;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010bf52a60();
  lVar19 = lRam0000000000000000;
  while (ppuVar8 != (undefined **)0x0) {
    ppuVar20 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar19) {
        _objc_enumerationMutation(ppuVar7);
      }
      func_0x00010bf7e080(*(undefined8 *)((long)ppuVar20 * 8));
      ppuVar20 = (undefined **)((long)ppuVar20 + 1);
    } while (ppuVar8 != ppuVar20);
    ppuVar8 = ppuVar7;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return (undefined1 *)puVar4;
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = (long)_DAT_112745de8;
  if (*(long *)((long)puVar4 + lVar16) == 0) {
    func_0x00010c0abc80(puVar4);
    lVar17 = (long)_DAT_112745d00;
    uVar15 = *(undefined8 *)((long)puVar4 + lVar17);
    puVar3 = PTR_PTR_1126b2638;
    func_0x00010c2a67e0();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = (long)_DAT_112745d10;
    func_0x00010c0eb7a0(uVar15);
    _objc_release();
    if (*(char *)((long)puVar4 + (long)_DAT_112745d4c) == '\x01') {
      uVar14 = *(undefined8 *)((long)puVar4 + (long)_DAT_112745d30);
      uVar15 = *(undefined8 *)((long)puVar4 + lVar23);
      func_0x00010be36bc0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c5ee0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)((long)puVar4 + (long)_DAT_112745dfc);
      *(undefined8 *)((long)puVar4 + (long)_DAT_112745dfc) = uVar14;
      _objc_release(uVar21);
    }
    else {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)((long)puVar4 + (long)_DAT_112745dfc);
      *(undefined **)((long)puVar4 + (long)_DAT_112745dfc) = puVar3;
    }
    _objc_release(uVar15);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)puVar4 + lVar16);
    *(undefined **)((long)puVar4 + lVar16) = puVar3;
    _objc_release(uVar15);
    uVar15 = *(undefined8 *)((long)puVar4 + lVar17);
    puVar9 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b2348;
    func_0x00010c0c5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126c9a20;
    func_0x00010c06c7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010be3e340(puVar4);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126c9a20;
    func_0x00010c0725c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010be404a0(puVar4);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar15);
    _objc_release(puVar13);
    _objc_release(puVar2);
    _objc_release(puVar12);
    _objc_release(puVar3);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    *(undefined1 *)((long)puVar4 + (long)_DAT_112745d34) = 1;
    puVar3 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)puVar4 + lVar23);
    func_0x00010be36bc0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa540(puVar3);
    _objc_release(uVar15);
    _objc_release(puVar3);
    lVar16 = (long)_DAT_112745d04;
    if (*(long *)((long)puVar4 + lVar16) != 0) {
      puVar3 = PTR_PTR_1126c9db8;
      _objc_alloc(PTR_PTR_1126c9db8);
      func_0x00010be3e340(puVar4);
      func_0x00010be404a0(puVar4);
      func_0x00010c029aa0(puVar3);
      puVar2 = PTR_PTR_1126c9dc0;
      func_0x00010c0e9ca0(PTR_PTR_1126c9dc0);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)((long)puVar4 + lVar16);
      func_0x00010c0eb840(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11ad60();
      _objc_release(uVar15);
      _objc_release(puVar2);
      _objc_release(puVar3);
    }
    uVar14 = *(undefined8 *)((long)puVar4 + (long)_DAT_112745d24);
    uVar15 = *(undefined8 *)((long)puVar4 + lVar23);
    func_0x00010be36bc0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf7360(puVar4);
    func_0x00010c0f10a0(uVar14);
    _objc_release(uVar15);
    uVar15 = *(undefined8 *)((long)puVar4 + lVar23);
    func_0x00010c118b40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0(*(undefined8 *)((long)puVar4 + lVar23));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar15);
    puVar3 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)puVar4 + lVar23);
    func_0x00010be36bc0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa540(puVar3);
    _objc_release(uVar15);
    _objc_release(puVar3);
  }
  else {
    lVar23 = (long)_DAT_112745d10;
  }
  uVar21 = *(undefined8 *)((long)puVar4 + lVar23);
  uVar14 = *(undefined8 *)((long)puVar4 + (long)_DAT_112745cf8);
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107dc65c0(uVar21,uVar15);
  if ((int)uVar21 == 0) {
    _objc_release(uVar15);
    _objc_release(uVar14);
  }
  else {
    puVar18 = (undefined1 *)puVar4;
    func_0x00010bf1d960();
    _objc_release(uVar15);
    _objc_release(uVar14);
    puVar2 = PTR_PTR_1126c98e0;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((ulong)puVar18 & 1) == 0) {
      lVar16 = (long)_DAT_112745de4;
      if (((*(byte *)((long)puVar4 + lVar16) & 1) == 0) &&
         (lVar17 = (long)_DAT_112745d34, *(char *)((long)puVar4 + lVar17) == '\x01')) {
        uVar15 = *(undefined8 *)((long)puVar4 + lVar23);
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf04340(puVar2);
        _objc_release(puVar3);
        _objc_release(uVar15);
        puVar3 = PTR_PTR_1126c9aa8;
        func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)((long)puVar4 + lVar23);
        func_0x00010be36bc0(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa540(puVar3);
        _objc_release(uVar15);
        _objc_release(puVar3);
        uVar15 = *(undefined8 *)((long)puVar4 + (long)_DAT_112745d00);
        puVar2 = PTR_PTR_1126b2330;
        func_0x00010c0e9c60(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126b2348;
        func_0x00010c0c5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126b2348;
        func_0x00010c08c740();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bee85e0(puVar4);
        func_0x00010c0df6e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7c0(uVar15);
        _objc_release(puVar11);
        _objc_release(puVar3);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar2);
        lVar24 = (long)_DAT_112745d04;
        if (*(long *)((long)puVar4 + lVar24) != 0) {
          puVar3 = PTR_PTR_1126c9dc8;
          _objc_alloc(PTR_PTR_1126c9dc8);
          func_0x00010bee85e0(puVar4);
          func_0x00010c029ac0(puVar3);
          puVar2 = PTR_PTR_1126c9dc0;
          func_0x00010c0e9c80(PTR_PTR_1126c9dc0);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = *(undefined8 *)((long)puVar4 + lVar24);
          func_0x00010c0eb840(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11ad60();
          _objc_release(uVar15);
          _objc_release(puVar2);
          _objc_release(puVar3);
        }
        *(undefined1 *)((long)puVar4 + lVar16) = 1;
        *(undefined1 *)((long)puVar4 + lVar17) = 0;
        uVar15 = *(undefined8 *)((long)puVar4 + lVar23);
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be36bc0(*(undefined8 *)((long)puVar4 + lVar23));
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar15);
      }
      func_0x00010bf85c60(puVar4);
    }
  }
  func_0x00010beccae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return (undefined1 *)puVar4;
  }
  ___stack_chk_fail();
  puVar18 = *(undefined1 **)((long)puVar4 + (long)_DAT_112745dc0);
  _objc_retain(puVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return puVar18;
}



/* Entry: 10633e0d8; end: 10633e2c3; -[SCOperaPageViewController _anyOfLayerViewControllersDisablePagingForPosition:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10633e0d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar16 = param_1;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar16;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (lVar13 != 0) {
    lVar19 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(lVar16);
      }
      lVar18 = *(long *)(lVar19 * 8);
      func_0x00010c0f2480();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar18 == 1) {
        FUN_10633d894();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
        puVar3 = PTR_PTR_1126c9aa8;
        func_0x00010c22b6a0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(param_1 + _DAT_112745d10);
        func_0x00010be36bc0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa540(puVar3);
        _objc_release(uVar11);
        _objc_release(puVar3);
        _objc_release(puVar2);
        puVar14 = (undefined1 *)0x1;
        goto LAB_10633e274;
      }
      lVar19 = lVar19 + 1;
    } while (lVar13 != lVar19);
    lVar13 = lVar16;
    func_0x00010bf52a60();
  }
  puVar14 = (undefined1 *)0x0;
LAB_10633e274:
  _objc_release(lVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return puVar14;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_250;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_4;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar15 = *plStack_240;
    do {
      lVar16 = 0;
      do {
        if (*plStack_240 != lVar15) {
          _objc_enumerationMutation(param_4);
        }
        iVar1 = (int)*(undefined8 *)(lStack_248 + lVar16 * 8);
        func_0x00010bf2cc00();
        if (iVar1 == 0) {
          puVar14 = (undefined1 *)0x0;
          goto LAB_10633e388;
        }
        lVar16 = lVar16 + 1;
      } while (lVar13 != lVar16);
      lVar13 = param_4;
      puVar4 = &uStack_250;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  puVar14 = (undefined1 *)0x1;
LAB_10633e388:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar14;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_4;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (lVar13 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(param_4);
      }
      func_0x00010bf7e080(*(undefined8 *)(lVar12 * 8));
      lVar12 = lVar12 + 1;
    } while (lVar13 != lVar12);
    lVar13 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return (undefined1 *)puVar4;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_112745de8;
  if (*(long *)((long)puVar4 + lVar15) == 0) {
    func_0x00010c0abc80(puVar4);
    lVar16 = (long)_DAT_112745d00;
    uVar11 = *(undefined8 *)((long)puVar4 + lVar16);
    puVar2 = PTR_PTR_1126b2638;
    func_0x00010c2a67e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_112745d10;
    func_0x00010c0eb7a0(uVar11);
    _objc_release();
    if (*(char *)((long)puVar4 + (long)_DAT_112745d4c) == '\x01') {
      uVar10 = *(undefined8 *)((long)puVar4 + (long)_DAT_112745d30);
      uVar11 = *(undefined8 *)((long)puVar4 + lVar12);
      func_0x00010be36bc0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c5ee0();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)((long)puVar4 + (long)_DAT_112745dfc);
      *(undefined8 *)((long)puVar4 + (long)_DAT_112745dfc) = uVar10;
      _objc_release(uVar17);
    }
    else {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)((long)puVar4 + (long)_DAT_112745dfc);
      *(undefined **)((long)puVar4 + (long)_DAT_112745dfc) = puVar2;
    }
    _objc_release(uVar11);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar4 + lVar15);
    *(undefined **)((long)puVar4 + lVar15) = puVar2;
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)((long)puVar4 + lVar16);
    puVar5 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b2348;
    func_0x00010c0c5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c9a20;
    func_0x00010c06c7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010be3e340(puVar4);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c9a20;
    func_0x00010c0725c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010be404a0(puVar4);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar11);
    _objc_release(puVar9);
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    *(undefined1 *)((long)puVar4 + (long)_DAT_112745d34) = 1;
    puVar2 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar4 + lVar12);
    func_0x00010be36bc0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa540(puVar2);
    _objc_release(uVar11);
    _objc_release(puVar2);
    lVar15 = (long)_DAT_112745d04;
    if (*(long *)((long)puVar4 + lVar15) != 0) {
      puVar2 = PTR_PTR_1126c9db8;
      _objc_alloc(PTR_PTR_1126c9db8);
      func_0x00010be3e340(puVar4);
      func_0x00010be404a0(puVar4);
      func_0x00010c029aa0(puVar2);
      puVar3 = PTR_PTR_1126c9dc0;
      func_0x00010c0e9ca0(PTR_PTR_1126c9dc0);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)((long)puVar4 + lVar15);
      func_0x00010c0eb840(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11ad60();
      _objc_release(uVar11);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    uVar10 = *(undefined8 *)((long)puVar4 + (long)_DAT_112745d24);
    uVar11 = *(undefined8 *)((long)puVar4 + lVar12);
    func_0x00010be36bc0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf7360(puVar4);
    func_0x00010c0f10a0(uVar10);
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)((long)puVar4 + lVar12);
    func_0x00010c118b40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0(*(undefined8 *)((long)puVar4 + lVar12));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar11);
    puVar2 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar4 + lVar12);
    func_0x00010be36bc0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa540(puVar2);
    _objc_release(uVar11);
    _objc_release(puVar2);
  }
  else {
    lVar12 = (long)_DAT_112745d10;
  }
  uVar17 = *(undefined8 *)((long)puVar4 + lVar12);
  uVar10 = *(undefined8 *)((long)puVar4 + (long)_DAT_112745cf8);
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107dc65c0(uVar17,uVar11);
  if ((int)uVar17 == 0) {
    _objc_release(uVar11);
    _objc_release(uVar10);
  }
  else {
    puVar14 = (undefined1 *)puVar4;
    func_0x00010bf1d960();
    _objc_release(uVar11);
    _objc_release(uVar10);
    puVar3 = PTR_PTR_1126c98e0;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((ulong)puVar14 & 1) == 0) {
      lVar15 = (long)_DAT_112745de4;
      if (((*(byte *)((long)puVar4 + lVar15) & 1) == 0) &&
         (lVar16 = (long)_DAT_112745d34, *(char *)((long)puVar4 + lVar16) == '\x01')) {
        uVar11 = *(undefined8 *)((long)puVar4 + lVar12);
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf04340(puVar3);
        _objc_release(puVar2);
        _objc_release(uVar11);
        puVar2 = PTR_PTR_1126c9aa8;
        func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)((long)puVar4 + lVar12);
        func_0x00010be36bc0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa540(puVar2);
        _objc_release(uVar11);
        _objc_release(puVar2);
        uVar11 = *(undefined8 *)((long)puVar4 + (long)_DAT_112745d00);
        puVar3 = PTR_PTR_1126b2330;
        func_0x00010c0e9c60(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126b2348;
        func_0x00010c0c5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b2348;
        func_0x00010c08c740();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bee85e0(puVar4);
        func_0x00010c0df6e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7c0(uVar11);
        _objc_release(puVar7);
        _objc_release(puVar2);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar3);
        lVar19 = (long)_DAT_112745d04;
        if (*(long *)((long)puVar4 + lVar19) != 0) {
          puVar2 = PTR_PTR_1126c9dc8;
          _objc_alloc(PTR_PTR_1126c9dc8);
          func_0x00010bee85e0(puVar4);
          func_0x00010c029ac0(puVar2);
          puVar3 = PTR_PTR_1126c9dc0;
          func_0x00010c0e9c80(PTR_PTR_1126c9dc0);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = *(undefined8 *)((long)puVar4 + lVar19);
          func_0x00010c0eb840(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11ad60();
          _objc_release(uVar11);
          _objc_release(puVar3);
          _objc_release(puVar2);
        }
        *(undefined1 *)((long)puVar4 + lVar15) = 1;
        *(undefined1 *)((long)puVar4 + lVar16) = 0;
        uVar11 = *(undefined8 *)((long)puVar4 + lVar12);
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be36bc0(*(undefined8 *)((long)puVar4 + lVar12));
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar11);
      }
      func_0x00010bf85c60(puVar4);
    }
  }
  func_0x00010beccae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return (undefined1 *)puVar4;
  }
  ___stack_chk_fail();
  puVar14 = *(undefined1 **)((long)puVar4 + (long)_DAT_112745dc0);
  _objc_retain(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return puVar14;
}



/* Entry: 10633e2c4; end: 10633e3c7; -[SCOperaPageViewController canHandleRoundCorner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10633e2c4(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar2 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar14 = *plStack_100;
    do {
      lVar15 = 0;
      do {
        if (*plStack_100 != lVar14) {
          _objc_enumerationMutation(param_1);
        }
        iVar1 = (int)*(undefined8 *)(lStack_108 + lVar15 * 8);
        func_0x00010bf2cc00();
        if (iVar1 == 0) {
          puVar13 = (undefined1 *)0x0;
          goto LAB_10633e388;
        }
        lVar15 = lVar15 + 1;
      } while (lVar12 != lVar15);
      lVar12 = param_1;
      puVar2 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  puVar13 = (undefined1 *)0x1;
LAB_10633e388:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar13;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010bf7e080(*(undefined8 *)(lVar17 * 8));
      lVar17 = lVar17 + 1;
    } while (lVar12 != lVar17);
    lVar12 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return (undefined1 *)puVar2;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_112745de8;
  if (*(long *)((long)puVar2 + lVar14) == 0) {
    func_0x00010c0abc80(puVar2);
    lVar15 = (long)_DAT_112745d00;
    uVar11 = *(undefined8 *)((long)puVar2 + lVar15);
    puVar3 = PTR_PTR_1126b2638;
    func_0x00010c2a67e0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = (long)_DAT_112745d10;
    func_0x00010c0eb7a0(uVar11);
    _objc_release();
    if (*(char *)((long)puVar2 + (long)_DAT_112745d4c) == '\x01') {
      uVar10 = *(undefined8 *)((long)puVar2 + (long)_DAT_112745d30);
      uVar11 = *(undefined8 *)((long)puVar2 + lVar17);
      func_0x00010be36bc0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c5ee0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)((long)puVar2 + (long)_DAT_112745dfc);
      *(undefined8 *)((long)puVar2 + (long)_DAT_112745dfc) = uVar10;
      _objc_release(uVar16);
    }
    else {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)((long)puVar2 + (long)_DAT_112745dfc);
      *(undefined **)((long)puVar2 + (long)_DAT_112745dfc) = puVar3;
    }
    _objc_release(uVar11);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar2 + lVar14);
    *(undefined **)((long)puVar2 + lVar14) = puVar3;
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)((long)puVar2 + lVar15);
    puVar4 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2348;
    func_0x00010c0c5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c9a20;
    func_0x00010c06c7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010be3e340(puVar2);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c9a20;
    func_0x00010c0725c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010be404a0(puVar2);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar11);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112745d34) = 1;
    puVar3 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar2 + lVar17);
    func_0x00010be36bc0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa540(puVar3);
    _objc_release(uVar11);
    _objc_release(puVar3);
    lVar14 = (long)_DAT_112745d04;
    if (*(long *)((long)puVar2 + lVar14) != 0) {
      puVar3 = PTR_PTR_1126c9db8;
      _objc_alloc(PTR_PTR_1126c9db8);
      func_0x00010be3e340(puVar2);
      func_0x00010be404a0(puVar2);
      func_0x00010c029aa0(puVar3);
      puVar8 = PTR_PTR_1126c9dc0;
      func_0x00010c0e9ca0(PTR_PTR_1126c9dc0);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)((long)puVar2 + lVar14);
      func_0x00010c0eb840(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11ad60();
      _objc_release(uVar11);
      _objc_release(puVar8);
      _objc_release(puVar3);
    }
    uVar10 = *(undefined8 *)((long)puVar2 + (long)_DAT_112745d24);
    uVar11 = *(undefined8 *)((long)puVar2 + lVar17);
    func_0x00010be36bc0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf7360(puVar2);
    func_0x00010c0f10a0(uVar10);
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)((long)puVar2 + lVar17);
    func_0x00010c118b40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0(*(undefined8 *)((long)puVar2 + lVar17));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar11);
    puVar3 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar2 + lVar17);
    func_0x00010be36bc0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa540(puVar3);
    _objc_release(uVar11);
    _objc_release(puVar3);
  }
  else {
    lVar17 = (long)_DAT_112745d10;
  }
  uVar16 = *(undefined8 *)((long)puVar2 + lVar17);
  uVar10 = *(undefined8 *)((long)puVar2 + (long)_DAT_112745cf8);
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107dc65c0(uVar16,uVar11);
  if ((int)uVar16 == 0) {
    _objc_release(uVar11);
    _objc_release(uVar10);
  }
  else {
    puVar13 = (undefined1 *)puVar2;
    func_0x00010bf1d960();
    _objc_release(uVar11);
    _objc_release(uVar10);
    puVar8 = PTR_PTR_1126c98e0;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((ulong)puVar13 & 1) == 0) {
      lVar14 = (long)_DAT_112745de4;
      if (((*(byte *)((long)puVar2 + lVar14) & 1) == 0) &&
         (lVar15 = (long)_DAT_112745d34, *(char *)((long)puVar2 + lVar15) == '\x01')) {
        uVar11 = *(undefined8 *)((long)puVar2 + lVar17);
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf04340(puVar8);
        _objc_release(puVar3);
        _objc_release(uVar11);
        puVar3 = PTR_PTR_1126c9aa8;
        func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)((long)puVar2 + lVar17);
        func_0x00010be36bc0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa540(puVar3);
        _objc_release(uVar11);
        _objc_release(puVar3);
        uVar11 = *(undefined8 *)((long)puVar2 + (long)_DAT_112745d00);
        puVar8 = PTR_PTR_1126b2330;
        func_0x00010c0e9c60(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126b2348;
        func_0x00010c0c5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126b2348;
        func_0x00010c08c740();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bee85e0(puVar2);
        func_0x00010c0df6e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7c0(uVar11);
        _objc_release(puVar6);
        _objc_release(puVar3);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar8);
        lVar18 = (long)_DAT_112745d04;
        if (*(long *)((long)puVar2 + lVar18) != 0) {
          puVar3 = PTR_PTR_1126c9dc8;
          _objc_alloc(PTR_PTR_1126c9dc8);
          func_0x00010bee85e0(puVar2);
          func_0x00010c029ac0(puVar3);
          puVar8 = PTR_PTR_1126c9dc0;
          func_0x00010c0e9c80(PTR_PTR_1126c9dc0);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = *(undefined8 *)((long)puVar2 + lVar18);
          func_0x00010c0eb840(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11ad60();
          _objc_release(uVar11);
          _objc_release(puVar8);
          _objc_release(puVar3);
        }
        *(undefined1 *)((long)puVar2 + lVar14) = 1;
        *(undefined1 *)((long)puVar2 + lVar15) = 0;
        uVar11 = *(undefined8 *)((long)puVar2 + lVar17);
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be36bc0(*(undefined8 *)((long)puVar2 + lVar17));
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar11);
      }
      func_0x00010bf85c60(puVar2);
    }
  }
  func_0x00010beccae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return (undefined1 *)puVar2;
  }
  ___stack_chk_fail();
  puVar13 = *(undefined1 **)((long)puVar2 + (long)_DAT_112745dc0);
  _objc_retain(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return puVar13;
}



/* Entry: 10633e3c8; end: 10633e4d7; -[SCOperaPageViewController didUpdateBottomPageViewProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633e3c8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010bf7e080(*(undefined8 *)(lVar15 * 8));
      lVar15 = lVar15 + 1;
    } while (lVar12 != lVar15);
    lVar12 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_112745de8;
  if (*(long *)(param_3 + lVar13) == 0) {
    func_0x00010c0abc80(param_3);
    lVar11 = (long)_DAT_112745d00;
    uVar10 = *(undefined8 *)(param_3 + lVar11);
    puVar1 = PTR_PTR_1126b2638;
    func_0x00010c2a67e0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_112745d10;
    func_0x00010c0eb7a0(uVar10);
    _objc_release();
    if (*(char *)(param_3 + (long)_DAT_112745d4c) == '\x01') {
      uVar8 = *(undefined8 *)(param_3 + (long)_DAT_112745d30);
      uVar10 = *(undefined8 *)(param_3 + lVar15);
      func_0x00010be36bc0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c5ee0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_3 + (long)_DAT_112745dfc);
      *(undefined8 *)(param_3 + (long)_DAT_112745dfc) = uVar8;
      _objc_release(uVar14);
    }
    else {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_3 + (long)_DAT_112745dfc);
      *(undefined **)(param_3 + (long)_DAT_112745dfc) = puVar1;
    }
    _objc_release(uVar10);
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_3 + lVar13);
    *(undefined **)(param_3 + lVar13) = puVar1;
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_3 + lVar11);
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010c0c5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9a20;
    func_0x00010c06c7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010be3e340(param_3);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9a20;
    func_0x00010c0725c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010be404a0(param_3);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar10);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    *(undefined1 *)(param_3 + (long)_DAT_112745d34) = 1;
    puVar1 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_3 + lVar15);
    func_0x00010be36bc0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa540(puVar1);
    _objc_release(uVar10);
    _objc_release(puVar1);
    lVar13 = (long)_DAT_112745d04;
    if (*(long *)(param_3 + lVar13) != 0) {
      puVar1 = PTR_PTR_1126c9db8;
      _objc_alloc(PTR_PTR_1126c9db8);
      func_0x00010be3e340(param_3);
      func_0x00010be404a0(param_3);
      func_0x00010c029aa0(puVar1);
      puVar6 = PTR_PTR_1126c9dc0;
      func_0x00010c0e9ca0(PTR_PTR_1126c9dc0);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_3 + lVar13);
      func_0x00010c0eb840(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11ad60();
      _objc_release(uVar10);
      _objc_release(puVar6);
      _objc_release(puVar1);
    }
    uVar8 = *(undefined8 *)(param_3 + (long)_DAT_112745d24);
    uVar10 = *(undefined8 *)(param_3 + lVar15);
    func_0x00010be36bc0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf7360(param_3);
    func_0x00010c0f10a0(uVar8);
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_3 + lVar15);
    func_0x00010c118b40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0(*(undefined8 *)(param_3 + lVar15));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar10);
    puVar1 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_3 + lVar15);
    func_0x00010be36bc0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa540(puVar1);
    _objc_release(uVar10);
    _objc_release(puVar1);
  }
  else {
    lVar15 = (long)_DAT_112745d10;
  }
  uVar14 = *(undefined8 *)(param_3 + lVar15);
  uVar8 = *(undefined8 *)(param_3 + (long)_DAT_112745cf8);
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107dc65c0(uVar14,uVar10);
  if ((int)uVar14 == 0) {
    _objc_release(uVar10);
    _objc_release(uVar8);
  }
  else {
    uVar9 = param_3;
    func_0x00010bf1d960();
    _objc_release(uVar10);
    _objc_release(uVar8);
    puVar6 = PTR_PTR_1126c98e0;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((uVar9 & 1) == 0) {
      lVar13 = (long)_DAT_112745de4;
      if (((*(byte *)(param_3 + lVar13) & 1) == 0) &&
         (lVar11 = (long)_DAT_112745d34, *(char *)(param_3 + lVar11) == '\x01')) {
        uVar10 = *(undefined8 *)(param_3 + lVar15);
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf04340(puVar6);
        _objc_release(puVar1);
        _objc_release(uVar10);
        puVar1 = PTR_PTR_1126c9aa8;
        func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_3 + lVar15);
        func_0x00010be36bc0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa540(puVar1);
        _objc_release(uVar10);
        _objc_release(puVar1);
        uVar10 = *(undefined8 *)(param_3 + (long)_DAT_112745d00);
        puVar6 = PTR_PTR_1126b2330;
        func_0x00010c0e9c60(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b2348;
        func_0x00010c0c5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b2348;
        func_0x00010c08c740();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bee85e0(param_3);
        func_0x00010c0df6e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7c0(uVar10);
        _objc_release(puVar4);
        _objc_release(puVar1);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar6);
        lVar16 = (long)_DAT_112745d04;
        if (*(long *)(param_3 + lVar16) != 0) {
          puVar1 = PTR_PTR_1126c9dc8;
          _objc_alloc(PTR_PTR_1126c9dc8);
          func_0x00010bee85e0(param_3);
          func_0x00010c029ac0(puVar1);
          puVar6 = PTR_PTR_1126c9dc0;
          func_0x00010c0e9c80(PTR_PTR_1126c9dc0);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = *(undefined8 *)(param_3 + lVar16);
          func_0x00010c0eb840(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11ad60();
          _objc_release(uVar10);
          _objc_release(puVar6);
          _objc_release(puVar1);
        }
        *(undefined1 *)(param_3 + lVar13) = 1;
        *(undefined1 *)(param_3 + lVar11) = 0;
        uVar10 = *(undefined8 *)(param_3 + lVar15);
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be36bc0(*(undefined8 *)(param_3 + lVar15));
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar10);
      }
      func_0x00010bf85c60(param_3);
    }
  }
  func_0x00010beccae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  uVar10 = *(undefined8 *)(param_3 + (long)_DAT_112745dc0);
  _objc_retain(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 10633e4d8; end: 10633eca3; -[SCOperaPageViewController _announceDidFullyAppearEventIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633e4d8(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_112745de8;
  if (*(long *)(param_1 + lVar13) == 0) {
    func_0x00010c0abc80(param_1);
    lVar12 = (long)_DAT_112745d00;
    uVar10 = *(undefined8 *)(param_1 + lVar12);
    puVar1 = PTR_PTR_1126b2638;
    func_0x00010c2a67e0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = (long)_DAT_112745d10;
    func_0x00010c0eb7a0(uVar10);
    _objc_release();
    if (*(char *)(param_1 + (long)_DAT_112745d4c) == '\x01') {
      uVar8 = *(undefined8 *)(param_1 + (long)_DAT_112745d30);
      uVar10 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010be36bc0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c5ee0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_1 + (long)_DAT_112745dfc);
      *(undefined8 *)(param_1 + (long)_DAT_112745dfc) = uVar8;
      _objc_release(uVar14);
    }
    else {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + (long)_DAT_112745dfc);
      *(undefined **)(param_1 + (long)_DAT_112745dfc) = puVar1;
    }
    _objc_release(uVar10);
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar13);
    *(undefined **)(param_1 + lVar13) = puVar1;
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_1 + lVar12);
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010c0c5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9a20;
    func_0x00010c06c7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010be3e340(param_1);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9a20;
    func_0x00010c0725c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010be404a0(param_1);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar10);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    *(undefined1 *)(param_1 + (long)_DAT_112745d34) = 1;
    puVar1 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010be36bc0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa540(puVar1);
    _objc_release(uVar10);
    _objc_release(puVar1);
    lVar13 = (long)_DAT_112745d04;
    if (*(long *)(param_1 + lVar13) != 0) {
      puVar1 = PTR_PTR_1126c9db8;
      _objc_alloc(PTR_PTR_1126c9db8);
      func_0x00010be3e340(param_1);
      func_0x00010be404a0(param_1);
      func_0x00010c029aa0(puVar1);
      puVar6 = PTR_PTR_1126c9dc0;
      func_0x00010c0e9ca0(PTR_PTR_1126c9dc0);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + lVar13);
      func_0x00010c0eb840(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11ad60();
      _objc_release(uVar10);
      _objc_release(puVar6);
      _objc_release(puVar1);
    }
    uVar8 = *(undefined8 *)(param_1 + (long)_DAT_112745d24);
    uVar10 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010be36bc0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf7360(param_1);
    func_0x00010c0f10a0(uVar8);
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010c118b40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0(*(undefined8 *)(param_1 + lVar16));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar10);
    puVar1 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010be36bc0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa540(puVar1);
    _objc_release(uVar10);
    _objc_release(puVar1);
  }
  else {
    lVar16 = (long)_DAT_112745d10;
  }
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  uVar8 = *(undefined8 *)(param_1 + (long)_DAT_112745cf8);
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107dc65c0(uVar14,uVar10);
  if ((int)uVar14 == 0) {
    _objc_release(uVar10);
    _objc_release(uVar8);
  }
  else {
    uVar9 = param_1;
    func_0x00010bf1d960();
    _objc_release(uVar10);
    _objc_release(uVar8);
    puVar6 = PTR_PTR_1126c98e0;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((uVar9 & 1) == 0) {
      lVar13 = (long)_DAT_112745de4;
      if (((*(byte *)(param_1 + lVar13) & 1) == 0) &&
         (lVar12 = (long)_DAT_112745d34, *(char *)(param_1 + lVar12) == '\x01')) {
        uVar10 = *(undefined8 *)(param_1 + lVar16);
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf04340(puVar6);
        _objc_release(puVar1);
        _objc_release(uVar10);
        puVar1 = PTR_PTR_1126c9aa8;
        func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_1 + lVar16);
        func_0x00010be36bc0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa540(puVar1);
        _objc_release(uVar10);
        _objc_release(puVar1);
        uVar10 = *(undefined8 *)(param_1 + (long)_DAT_112745d00);
        puVar6 = PTR_PTR_1126b2330;
        func_0x00010c0e9c60(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b2348;
        func_0x00010c0c5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b2348;
        func_0x00010c08c740();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bee85e0(param_1);
        func_0x00010c0df6e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7c0(uVar10);
        _objc_release(puVar4);
        _objc_release(puVar1);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar6);
        lVar15 = (long)_DAT_112745d04;
        if (*(long *)(param_1 + lVar15) != 0) {
          puVar1 = PTR_PTR_1126c9dc8;
          _objc_alloc(PTR_PTR_1126c9dc8);
          func_0x00010bee85e0(param_1);
          func_0x00010c029ac0(puVar1);
          puVar6 = PTR_PTR_1126c9dc0;
          func_0x00010c0e9c80(PTR_PTR_1126c9dc0);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = *(undefined8 *)(param_1 + lVar15);
          func_0x00010c0eb840(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11ad60();
          _objc_release(uVar10);
          _objc_release(puVar6);
          _objc_release(puVar1);
        }
        *(undefined1 *)(param_1 + lVar13) = 1;
        *(undefined1 *)(param_1 + lVar12) = 0;
        uVar10 = *(undefined8 *)(param_1 + lVar16);
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be36bc0(*(undefined8 *)(param_1 + lVar16));
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar10);
      }
      func_0x00010bf85c60(param_1);
    }
  }
  func_0x00010beccae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  uVar10 = *(undefined8 *)(param_1 + (long)_DAT_112745dc0);
  _objc_retain(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 10633eca4; end: 10633ecd3; -[SCOperaPageViewController _pageLayersSnapshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633eca4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745dc0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10633ecd4; end: 10633efc3; -[SCOperaPageViewController _applyTransformForOffset:relativePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633ecd4(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  dVar8 = param_1;
  func_0x00010bdd2a20();
  bVar2 = false;
  if ((param_3 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar2 = false, !NAN(param_4) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar2 = param_4 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  dVar6 = ABS(param_3);
  dVar7 = ABS(param_3 + 0.0) * 2.220446049250313e-16;
  bVar1 = true;
  if ((!bVar2) && (bVar1 = false, !NAN(dVar6))) {
    bVar1 = dVar6 < 2.2250738585072014e-308;
  }
  bVar2 = true;
  if ((!bVar1) && (bVar2 = false, !NAN(dVar6) && !NAN(dVar7))) {
    bVar2 = dVar6 < dVar7;
  }
  if (bVar2) {
    return;
  }
  lVar3 = param_5;
  func_0x00010be952a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08d1e0();
  _objc_release(lVar3);
  if (lVar4 == 6) {
    dVar6 = dVar8;
    _CGRectGetHeight(dVar8,param_2,param_3,param_4);
    dVar7 = dVar8;
    _CGRectGetWidth(dVar8,param_2,param_3,param_4);
    dVar6 = dVar6 / dVar7;
    if (1.77 < dVar6) {
      dVar6 = dVar8;
      _CGRectGetWidth(dVar8,param_2,param_3,param_4);
      param_4 = dVar6 * 1.77;
    }
  }
  lVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _CGRectGetHeight(dVar8,param_2,param_3,param_4);
  _objc_release(lVar3);
  dVar7 = (double)*(long *)(param_5 + _DAT_112745d5c);
  dVar8 = (dVar6 - dVar8) - dVar7;
  if ((param_7 != 2) || (dVar8 <= 0.0)) {
    dVar6 = 0.0;
    if (param_7 == 1) {
      func_0x00010c0eb1c0(*(undefined8 *)(param_5 + _DAT_112745cf4));
      dVar8 = dVar8 - dVar7;
      if (0.0 < dVar8) {
        if ((-1.0 < param_1) && (param_1 < -0.19999999999999996)) goto LAB_10633ef08;
        if ((-0.19999999999999996 <= param_1) && (param_1 <= 0.0)) goto LAB_10633ef04;
      }
    }
  }
  else {
    if ((param_1 < 0.19999999999999996) || (1.0 <= param_1)) {
      dVar6 = 0.0;
      if ((param_1 <= 0.0) || (0.19999999999999996 <= param_1)) goto LAB_10633ef14;
LAB_10633ef04:
      dVar8 = (param_1 * dVar8) / -0.19999999999999996;
    }
    else {
      dVar8 = -dVar8;
    }
LAB_10633ef08:
    dVar6 = dVar8;
    if (dVar8 != 0.0) goto LAB_10633ef60;
  }
LAB_10633ef14:
  lVar3 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_90,lVar3);
  }
  uVar5 = 0;
  _CGAffineTransformIsIdentity();
  _objc_release(lVar3);
  if ((uVar5 & 1) != 0) {
    return;
  }
LAB_10633ef60:
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformTranslate(&uStack_c0,0,dVar6,&uStack_90);
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  func_0x00010c219960();
  _objc_release(param_5);
  return;
}



/* Entry: 10633efc4; end: 10633f43f; -[SCOperaPageViewController _viewDidFullyAppearWithLayerVCs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10633efc4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [128];
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar6 = param_1;
  func_0x00010bf1d940();
  if ((int)lVar6 != 0) {
    lVar7 = param_1;
    func_0x00010becd580(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29c980();
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    lVar9 = (long)_DAT_112745e00;
    lVar6 = param_1 + lVar9;
    _objc_loadWeakRetained();
    lVar5 = lVar6;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar10 = *plStack_2a0;
      do {
        lVar4 = 0;
        do {
          if (*plStack_2a0 != lVar10) {
            _objc_enumerationMutation(lVar6);
          }
          lVar1 = param_1 + lVar9;
          _objc_loadWeakRetained(lVar1);
          lVar2 = lVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c255780();
          _objc_release(lVar2);
          _objc_release(lVar1);
          lVar4 = lVar4 + 1;
        } while (lVar5 != lVar4);
        lVar5 = lVar6;
        func_0x00010bf52a60(lVar6,param_2,&uStack_2b0,auStack_f0,0x10);
      } while (lVar5 != 0);
    }
    _objc_release(lVar6);
    _objc_release(lVar7);
  }
  lVar6 = param_1;
  func_0x00010bf1d960();
  if ((int)lVar6 == 0) {
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    lStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    plStack_320 = (long *)0x0;
    _objc_retain(param_3);
    lVar6 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_330,auStack_1f0,0x10);
    if (lVar6 != 0) {
      lVar7 = *plStack_320;
      do {
        lVar5 = 0;
        do {
          if (*plStack_320 != lVar7) {
            _objc_enumerationMutation(param_3);
          }
          func_0x00010be64b20(param_1,param_2,*(undefined8 *)(lStack_328 + lVar5 * 8));
          lVar5 = lVar5 + 1;
        } while (lVar6 != lVar5);
        lVar6 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_330,auStack_1f0,0x10);
      } while (lVar6 != 0);
    }
    _objc_release(param_3);
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    plStack_360 = (long *)0x0;
    lVar7 = (long)_DAT_112745e00;
    lStack_378 = param_1 + lVar7;
    _objc_loadWeakRetained();
    lVar6 = lStack_378;
    func_0x00010bf52a60();
    if (lVar6 != 0) {
      lVar5 = *plStack_360;
      do {
        lVar9 = 0;
        do {
          if (*plStack_360 != lVar5) {
            _objc_enumerationMutation(lStack_378);
          }
          lVar10 = param_1 + lVar7;
          _objc_loadWeakRetained(lVar10);
          lVar4 = lVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c24d960();
          _objc_release(lVar4);
          _objc_release(lVar10);
          lVar9 = lVar9 + 1;
        } while (lVar6 != lVar9);
        lVar6 = lStack_378;
        func_0x00010bf52a60(lStack_378,param_2,&uStack_370,auStack_270,0x10);
      } while (lVar6 != 0);
    }
  }
  else {
    lStack_378 = param_1;
    func_0x00010becd580();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010be6f380();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c08c720();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lStack_378;
    func_0x00010c08c0e0(lStack_378);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010bfecde0(lVar7,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar7);
    _objc_release(lVar6);
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    lStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    plStack_2e0 = (long *)0x0;
    _objc_retain(param_3);
    lVar6 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_2f0,auStack_170,0x10);
    if (lVar6 != 0) {
      lVar7 = *plStack_2e0;
      do {
        lVar5 = 0;
        do {
          if (*plStack_2e0 != lVar7) {
            _objc_enumerationMutation(param_3);
          }
          uVar8 = *(undefined8 *)(lStack_2e8 + lVar5 * 8);
          lVar10 = param_1;
          func_0x00010be6f380();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar10;
          func_0x00010c08c720();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar8;
          func_0x00010c08c0e0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          lVar1 = lVar4;
          func_0x00010bfecde0(lVar4,param_2,uVar3);
          _objc_release(uVar3);
          _objc_release(lVar4);
          _objc_release(lVar10);
          if (lVar9 < lVar1) {
            func_0x00010c29c9c0(uVar8);
          }
          lVar5 = lVar5 + 1;
        } while (lVar6 != lVar5);
        lVar6 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_2f0,auStack_170,0x10);
      } while (lVar6 != 0);
    }
    _objc_release(param_3);
  }
  _objc_release(lStack_378);
  func_0x00010beaab00(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (*(char *)(param_3 + _DAT_112745d40) == '\x01') {
      func_0x00010bf38f00();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010bf04920();
      _objc_release(param_3);
    }
    else {
      lVar6 = 1;
    }
    return lVar6;
  }
  return param_3;
}



/* Entry: 10633f440; end: 10633f4d7; -[SCOperaPageViewController _verifyLayerVCViewsVisibleWhenViewFullyAppeared] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10633f440(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + _DAT_112745d40) == '\x01') {
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf04920();
    _objc_release(param_1);
  }
  else {
    lVar1 = 1;
  }
  return lVar1;
}



/* Entry: 10633f4d8; end: 10633f73b;  */

bool FUN_10633f4d8(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  long param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  _objc_retain(param_6);
  lVar2 = param_6;
  func_0x00010010fab4(param_6,PTR_DAT_1126a5320);
  bVar1 = false;
  if ((param_6 != 0) && ((int)lVar2 != 0)) {
    lVar2 = param_6;
    func_0x00010c0834c0();
    if ((int)lVar2 != 0) {
      lVar2 = param_6;
      func_0x00010c29bf00(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      dVar10 = *(double *)PTR__CGSizeZero_110347620;
      dVar11 = *(double *)(PTR__CGSizeZero_110347620 + 8);
      dVar6 = param_3;
      dVar8 = param_4;
      _objc_release(lVar2);
      bVar1 = false;
      if ((param_3 == dVar10) && (bVar1 = false, !NAN(param_4) && !NAN(dVar11))) {
        bVar1 = param_4 == dVar11;
      }
      if (!bVar1) {
        lVar2 = param_6;
        func_0x00010c29bf00(param_6);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_6;
        func_0x00010c29bf00(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        uVar4 = *(undefined8 *)(param_5 + 0x20);
        func_0x00010c0f3ca0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf51460(param_1,param_2,dVar6,dVar8,lVar2);
        dVar10 = param_1;
        uVar7 = param_2;
        dVar11 = dVar6;
        dVar9 = dVar8;
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        uVar5 = *(undefined8 *)(param_5 + 0x20);
        func_0x00010c29bf00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectIntersection(param_1,param_2,dVar6,dVar8,dVar10,uVar7,dVar11,dVar9);
        _objc_release(uVar5);
        dVar10 = param_1;
        _CGRectGetWidth(param_1,param_2,dVar6,dVar8);
        lVar2 = param_6;
        dVar11 = dVar10;
        func_0x00010c29bf00(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectGetWidth();
        _objc_release(lVar2);
        _CGRectGetHeight(param_1,param_2,dVar6,dVar8);
        lVar2 = param_6;
        dVar6 = param_1;
        func_0x00010c29bf00(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectGetHeight();
        _objc_release(lVar2);
        bVar1 = false;
        if (0.1 < param_1 / dVar6) {
          bVar1 = 0.1 < dVar10 / dVar11;
        }
        goto LAB_10633f710;
      }
    }
    bVar1 = false;
  }
LAB_10633f710:
  _objc_release(param_6);
  return bVar1;
}



/* Entry: 10633f73c; end: 10633f7c3; -[SCOperaPageViewController loadingIndicatorController:didStartLoadingOnPageWithId:fromLayer:reason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633f73c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  if (param_4 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112745d24);
    if (lVar1 != 0) {
      _objc_retain(param_4);
      func_0x00010bdf7360(param_1);
      func_0x00010c09cd60(lVar1,param_2,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_4);
      return;
    }
  }
  return;
}



/* Entry: 10633f7c4; end: 10633f8b3; -[SCOperaPageViewController loadingIndicatorController:didFinishLoadingOnPageWithId:fromLayer:reason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633f7c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar4 = (long)_DAT_112745d24;
    lVar3 = *(long *)(param_1 + lVar4);
    if (lVar3 != 0) {
      func_0x00010bdf7360(param_1);
      func_0x00010c09cd20(lVar3,param_2,param_4,param_5,param_6);
      puVar2 = PTR_PTR_1126b2340;
      uVar1 = *(undefined8 *)(param_1 + _DAT_112745d10);
      func_0x00010c118b40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c075040(puVar2,param_2,uVar1);
      _objc_release(uVar1);
      if ((param_5 == 7) && ((int)puVar2 != 0)) {
        uVar1 = *(undefined8 *)(param_1 + lVar4);
        func_0x00010bdf7360(param_1);
        func_0x00010c0f10c0(uVar1,param_2,param_4);
      }
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10633f8b4; end: 10633f91f; -[SCOperaPageViewController loadingIndicatorController:didStartPlayingOnPageWithId:fromLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633f8b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112745d24);
    if (lVar1 != 0) {
      _objc_retain(param_4);
      func_0x00010bdf7360(param_1);
      func_0x00010c0f10c0(lVar1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_4);
      return;
    }
  }
  return;
}



/* Entry: 10633f920; end: 10633fa0b; -[SCOperaPageViewController maskableFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10633f920(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  lVar1 = param_5;
  func_0x00010be43580();
  if ((int)lVar1 == 0) {
    func_0x00010c0c7140(param_5);
    dVar2 = param_1;
    _CGRectGetMinX();
    dVar3 = param_1;
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    func_0x00010bc852e4(param_1,param_2,param_3,param_4,dVar2,
                        dVar3 + *(double *)(param_5 + _DAT_112745dac));
  }
  else {
    func_0x00010be48b80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(param_5);
  }
  return param_1;
}



/* Entry: 10633fa0c; end: 10633fd57; -[SCOperaPageViewController mediaViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10633fa0c(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong unaff_x20;
  ulong uVar12;
  long lVar13;
  ulong unaff_x22;
  ulong unaff_x23;
  long lVar14;
  long unaff_x24;
  undefined **unaff_x25;
  ulong uVar15;
  ulong unaff_x26;
  double dVar16;
  double dVar17;
  double dVar18;
  double unaff_d8;
  double dVar19;
  double unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auStack_470 [32];
  double dStack_450;
  ulong uStack_440;
  ulong uStack_438;
  undefined1 ***pppuStack_430;
  code *pcStack_428;
  undefined *puStack_420;
  undefined8 uStack_418;
  code *pcStack_410;
  undefined *puStack_408;
  long lStack_400;
  double dStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  double dStack_310;
  double dStack_308;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  ulong uStack_1c0;
  undefined **ppuStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar16 = 0.0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uVar6 = param_5;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf52a60();
  if (uVar7 != 0) {
    unaff_x24 = *plStack_160;
    unaff_d8 = *(double *)PTR__CGRectZero_110347608;
    unaff_d9 = *(double *)(PTR__CGRectZero_110347608 + 8);
    unaff_d10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    unaff_d11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    unaff_x25 = &PTR_DAT_1126a5000;
    unaff_x22 = uVar7;
    do {
      unaff_x26 = 0;
      do {
        if (*plStack_160 != unaff_x24) {
          _objc_enumerationMutation(uVar6);
        }
        puVar1 = PTR_DAT_1126a5328;
        unaff_x20 = *(ulong *)(lStack_168 + unaff_x26 * 8);
        _objc_retain(unaff_x20);
        unaff_x23 = unaff_x20;
        func_0x00010010fab4(unaff_x20,puVar1);
        _objc_release(unaff_x20);
        if ((int)unaff_x23 != 0 && unaff_x20 != 0) {
          _objc_retain(unaff_x20);
          uVar7 = unaff_x20;
          func_0x00010c079780();
          if ((uVar7 & 1) == 0) {
            unaff_x23 = unaff_x20;
            func_0x00010c08c280();
            uVar7 = unaff_x20;
            func_0x00010c0c7140();
            dVar19 = dVar16;
            if (unaff_x23 != 0) {
              _CGRectEqualToRect();
              if ((uVar7 & 1) != 0) goto LAB_10633fb58;
              uVar7 = *(ulong *)(param_5 + (long)_DAT_112745cf8);
              func_0x00010c069200();
              _objc_retainAutoreleasedReturnValue();
              unaff_x23 = uVar7;
              func_0x00010bfb2140();
              _objc_release(uVar7);
              func_0x00010c0c7140(unaff_x20);
              unaff_x22 = unaff_x20;
              dVar17 = dVar16;
              dVar18 = param_2;
              uVar10 = param_3;
              uVar11 = param_4;
              func_0x00010c29bf00();
              _objc_retainAutoreleasedReturnValue();
              if ((int)unaff_x23 == 0) {
                func_0x00010bfb68e0(unaff_x22);
                unaff_d9 = param_2;
              }
              else {
                unaff_x23 = param_5;
                func_0x00010c29bf00();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf51460(unaff_x22);
                _objc_release(unaff_x23);
                _objc_release(unaff_x22);
                func_0x00010bc852e4();
                unaff_x22 = param_5;
                dVar17 = dVar16;
                dVar18 = param_2;
                uVar10 = param_3;
                uVar11 = param_4;
                func_0x00010c29bf00();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf20c00();
                unaff_d9 = param_2;
              }
              dVar19 = dVar16;
              param_2 = unaff_d9;
              _CGRectIntersection(dVar16,unaff_d9,param_3,param_4,dVar17,dVar18,uVar10,uVar11);
              _objc_release(unaff_x22);
              unaff_d8 = dVar16;
              unaff_d10 = param_3;
              unaff_d11 = param_4;
            }
            _objc_release(unaff_x20);
            uVar7 = uVar6;
            _objc_release();
            goto LAB_10633fcfc;
          }
LAB_10633fb58:
          _objc_release(unaff_x20);
        }
        unaff_x26 = unaff_x26 + 1;
      } while (unaff_x22 != unaff_x26);
      unaff_x22 = uVar6;
      func_0x00010bf52a60();
    } while (unaff_x22 != 0);
  }
  _objc_release(uVar6);
  uVar7 = *(ulong *)(param_5 + (long)_DAT_112745d80);
  func_0x00010bf20c00();
  dVar19 = dVar16;
LAB_10633fcfc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return dVar19;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_10633fd58;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar16 = 0.0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  plStack_290 = (long *)0x0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  dStack_1d0 = unaff_d9;
  dStack_1c8 = unaff_d8;
  uStack_1c0 = unaff_x26;
  ppuStack_1b8 = unaff_x25;
  lStack_1b0 = unaff_x24;
  uStack_1a8 = unaff_x23;
  uStack_1a0 = unaff_x22;
  uStack_198 = param_5;
  uStack_190 = unaff_x20;
  uStack_188 = uVar6;
  puStack_180 = &stack0xfffffffffffffff0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf52a60();
  if (uVar6 == 0) {
    dVar19 = 0.0;
  }
  else {
    lVar14 = *plStack_290;
    unaff_d9 = 0.0;
    dVar19 = 0.0;
    do {
      uVar15 = 0;
      dVar17 = dVar19;
      do {
        if (*plStack_290 != lVar14) {
          _objc_enumerationMutation(uVar7);
        }
        puVar1 = PTR_DAT_1126a5328;
        uVar12 = *(ulong *)(lStack_298 + uVar15 * 8);
        _objc_retain(uVar12);
        uVar8 = uVar12;
        func_0x00010010fab4(uVar12,puVar1);
        _objc_release(uVar12);
        dVar19 = dVar17;
        if ((int)uVar8 != 0 && uVar12 != 0) {
          _objc_retain(uVar12);
          uVar8 = uVar12;
          func_0x00010c079780();
          if ((uVar8 & 1) == 0) {
            func_0x00010c0c5140(uVar12);
            bVar3 = false;
            bVar4 = true;
            bVar5 = false;
            if (dVar17 < dVar16) {
              bVar3 = false;
              bVar4 = false;
              bVar5 = true;
              if (!NAN(dVar16)) {
                bVar3 = dVar16 < 0.0;
                bVar4 = dVar16 == 0.0;
                bVar5 = false;
              }
            }
            dVar19 = dVar16;
            if (bVar4 || bVar3 != bVar5) {
              dVar19 = dVar17;
            }
          }
          _objc_release(uVar12);
        }
        uVar15 = uVar15 + 1;
        dVar17 = dVar19;
      } while (uVar6 != uVar15);
      uVar6 = uVar7;
      func_0x00010bf52a60();
    } while (uVar6 != 0);
    unaff_x20 = 0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return dVar19;
  }
  ___stack_chk_fail();
  pcStack_2a8 = FUN_10633fecc;
  lStack_330 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar17 = 0.0;
  lStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  plStack_3e0 = (long *)0x0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_320 = unaff_d11;
  uStack_318 = unaff_d10;
  dStack_310 = unaff_d9;
  dStack_308 = dVar19;
  ppuStack_2b0 = &puStack_180;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf52a60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (uVar6 != 0) {
    lVar14 = *plStack_3e0;
    do {
      uVar15 = 0;
      do {
        if (*plStack_3e0 != lVar14) {
          _objc_enumerationMutation(uVar7);
        }
        puVar2 = PTR_DAT_1126a5328;
        lVar13 = *(long *)(lStack_3e8 + uVar15 * 8);
        _objc_retain(lVar13);
        lVar9 = lVar13;
        func_0x00010010fab4(lVar13,puVar2);
        _objc_release(lVar13);
        if ((int)lVar9 != 0 && lVar13 != 0) {
          puStack_420 = puVar1;
          uStack_418 = 0xc2000000;
          pcStack_410 = FUN_10634005c;
          puStack_408 = &UNK_110848c48;
          dVar17 = param_2;
          lStack_400 = lVar13;
          dStack_3f8 = dVar16;
          func_0x00010bf03400(param_2,PTR__OBJC_CLASS___UIView_1126aec20);
        }
        uVar15 = uVar15 + 1;
      } while (uVar6 != uVar15);
      uVar6 = uVar7;
      func_0x00010bf52a60();
      unaff_x20 = 0;
    } while (uVar6 != 0);
  }
  uVar6 = uVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_330) {
    return dVar17;
  }
  ___stack_chk_fail();
  pcStack_428 = FUN_10634005c;
  uVar10 = *(undefined8 *)(uVar6 + 0x20);
  uStack_440 = unaff_x20;
  uStack_438 = uVar7;
  pppuStack_430 = &ppuStack_2b0;
  func_0x00010c29bf00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  FUN_106312c90(auStack_470,*(undefined8 *)(uVar6 + 0x28));
  uVar11 = *(undefined8 *)(uVar6 + 0x20);
  func_0x00010c29bf00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar11);
  _objc_release(uVar10);
  return dStack_450;
}



/* Entry: 10633fd58; end: 10633fecb; -[SCOperaPageViewController mediaHeightToWidthAspectRatio] */

double FUN_10633fd58(undefined8 param_1,double param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_300 [32];
  double dStack_2e0;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined1 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined *puStack_298;
  long lStack_290;
  double dStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1c0;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar15 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bf52a60();
  if (lVar6 == 0) {
    dVar16 = 0.0;
  }
  else {
    lVar13 = *plStack_120;
    dVar16 = 0.0;
    do {
      lVar14 = 0;
      dVar17 = dVar16;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(param_3);
        }
        puVar1 = PTR_DAT_1126a5328;
        uVar11 = *(ulong *)(lStack_128 + lVar14 * 8);
        _objc_retain(uVar11);
        uVar7 = uVar11;
        func_0x00010010fab4(uVar11,puVar1);
        _objc_release(uVar11);
        dVar16 = dVar17;
        if ((int)uVar7 != 0 && uVar11 != 0) {
          _objc_retain(uVar11);
          uVar7 = uVar11;
          func_0x00010c079780();
          if ((uVar7 & 1) == 0) {
            func_0x00010c0c5140(uVar11);
            bVar3 = false;
            bVar4 = true;
            bVar5 = false;
            if (dVar17 < dVar15) {
              bVar3 = false;
              bVar4 = false;
              bVar5 = true;
              if (!NAN(dVar15)) {
                bVar3 = dVar15 < 0.0;
                bVar4 = dVar15 == 0.0;
                bVar5 = false;
              }
            }
            dVar16 = dVar15;
            if (bVar4 || bVar3 != bVar5) {
              dVar16 = dVar17;
            }
          }
          _objc_release(uVar11);
        }
        lVar14 = lVar14 + 1;
        dVar17 = dVar16;
      } while (lVar6 != lVar14);
      lVar6 = param_3;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
    unaff_x20 = 0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return dVar16;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10633fecc;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar16 = 0.0;
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bf52a60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar6 != 0) {
    lVar13 = *plStack_270;
    do {
      lVar14 = 0;
      do {
        if (*plStack_270 != lVar13) {
          _objc_enumerationMutation(param_3);
        }
        puVar2 = PTR_DAT_1126a5328;
        lVar12 = *(long *)(lStack_278 + lVar14 * 8);
        _objc_retain(lVar12);
        lVar8 = lVar12;
        func_0x00010010fab4(lVar12,puVar2);
        _objc_release(lVar12);
        if ((int)lVar8 != 0 && lVar12 != 0) {
          puStack_2b0 = puVar1;
          uStack_2a8 = 0xc2000000;
          pcStack_2a0 = FUN_10634005c;
          puStack_298 = &UNK_110848c48;
          dVar16 = param_2;
          lStack_290 = lVar12;
          dStack_288 = dVar15;
          func_0x00010bf03400(param_2,PTR__OBJC_CLASS___UIView_1126aec20);
        }
        lVar14 = lVar14 + 1;
      } while (lVar6 != lVar14);
      lVar6 = param_3;
      func_0x00010bf52a60();
      unaff_x20 = 0;
    } while (lVar6 != 0);
  }
  lVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return dVar16;
  }
  ___stack_chk_fail();
  pcStack_2b8 = FUN_10634005c;
  uVar9 = *(undefined8 *)(lVar6 + 0x20);
  uStack_2d0 = unaff_x20;
  lStack_2c8 = param_3;
  ppuStack_2c0 = &puStack_140;
  func_0x00010c29bf00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  FUN_106312c90(auStack_300,*(undefined8 *)(lVar6 + 0x28));
  uVar10 = *(undefined8 *)(lVar6 + 0x20);
  func_0x00010c29bf00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar10);
  _objc_release(uVar9);
  return dStack_2e0;
}



/* Entry: 10633fecc; end: 10634005b; -[SCOperaPageViewController _shrinkMediaContainerLayersWithScale:duration:] */

void FUN_10633fecc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_1d0 [48];
  undefined8 uStack_1a0;
  long lStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf52a60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 != 0) {
    lVar8 = *plStack_140;
    do {
      lVar9 = 0;
      do {
        if (*plStack_140 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        puVar2 = PTR_DAT_1126a5328;
        lVar7 = *(long *)(lStack_148 + lVar9 * 8);
        _objc_retain(lVar7);
        lVar4 = lVar7;
        func_0x00010010fab4(lVar7,puVar2);
        _objc_release(lVar7);
        if ((int)lVar4 != 0 && lVar7 != 0) {
          puStack_180 = puVar1;
          uStack_178 = 0xc2000000;
          pcStack_170 = FUN_10634005c;
          puStack_168 = &UNK_110848c48;
          lStack_160 = lVar7;
          uStack_158 = param_1;
          func_0x00010bf03400(param_2,PTR__OBJC_CLASS___UIView_1126aec20);
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = param_3;
      func_0x00010bf52a60();
      unaff_x20 = 0;
    } while (lVar3 != 0);
  }
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_10634005c;
  uVar5 = *(undefined8 *)(lVar3 + 0x20);
  uStack_1a0 = unaff_x20;
  lStack_198 = param_3;
  puStack_190 = &stack0xfffffffffffffff0;
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  FUN_106312c90(auStack_1d0,*(undefined8 *)(lVar3 + 0x28));
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  func_0x00010c29bf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar6);
  _objc_release(uVar5);
  return;
}



/* Entry: 10634005c; end: 1063400db;  */

void FUN_10634005c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [48];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_106312c90(auStack_50,*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1063400dc; end: 1063400e3; -[SCOperaPageViewController isOverlay] */

undefined8 FUN_1063400dc(void)

{
  return 0;
}



/* Entry: 1063400e4; end: 10634046f; -[SCOperaPageViewController _didLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063400e4(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                  undefined8 param_6,long param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  _objc_retain(param_7);
  func_0x00010c09ef00(param_7,param_6,0);
  uVar1 = param_5;
  dVar9 = param_1;
  dVar10 = param_2;
  func_0x00010bf60c40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c9ab0;
  func_0x00010bf1d2c0(PTR_PTR_1126c9ab0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e00e0(uVar2,param_6,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(puVar3);
  if ((uVar4 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    dStack_80 = param_1;
    dStack_78 = param_2;
    func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8,param_6,&dStack_80,"{CGPoint=dd}");
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2348;
    func_0x00010c0b4f60(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_6,puVar3,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar3);
    uVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_7,param_6,uVar1);
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    dStack_90 = dVar9;
    dStack_88 = dVar10;
    func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8,param_6,&dStack_90,"{CGPoint=dd}");
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2e48;
    func_0x00010c09ef60(PTR_PTR_1126b2e48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_6,puVar3,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar3);
    uVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf512a0(dVar9,dVar10);
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar9 / param_3,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2e48;
    func_0x00010c09f960(PTR_PTR_1126b2e48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_6,puVar3,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar10 / param_4,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2e48;
    func_0x00010c09f9a0(PTR_PTR_1126b2e48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_6,puVar3,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar3);
    lVar6 = param_7;
    func_0x00010c252440();
    puVar3 = PTR_PTR_1126b2ea8;
    if (lVar6 == 4) {
      func_0x00010c0b4d60();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (lVar6 == 3) {
      func_0x00010c0b4e00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar6 != 1) goto LAB_10634043c;
      func_0x00010c0b4cc0();
      _objc_retainAutoreleasedReturnValue();
    }
    if (puVar3 != (undefined *)0x0) {
      uVar8 = *(undefined8 *)(param_5 + (long)_DAT_112745d00);
      uVar7 = *(undefined8 *)(param_5 + (long)_DAT_112745d10);
      uVar1 = uVar2;
      func_0x00010bf51e00(uVar2);
      func_0x00010c0eb7c0(uVar8,param_6,puVar3,uVar7,uVar1);
      _objc_release(uVar1);
      _objc_release(puVar3);
    }
  }
LAB_10634043c:
  _objc_release(uVar2);
  _objc_release(param_7);
  return;
}



/* Entry: 106340470; end: 1063406bf; -[SCOperaPageViewController operaPageGestureRecognizers:shouldRecognizeGesture:recognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106340470(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                   undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  _objc_retain(param_9);
  if (*(char *)(param_5 + (long)_DAT_112745dd4) == '\x01') {
    lVar8 = (long)_DAT_112745d10;
    uVar7 = *(undefined8 *)(param_5 + lVar8);
    uVar1 = *(undefined8 *)(param_5 + (long)_DAT_112745cf8);
    func_0x00010bf461c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107dc65c0(uVar7,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar7 != 0) {
      if (param_8 == 2) {
        if (*(long *)(param_5 + (long)_DAT_112745de8) == 0) goto LAB_106340670;
        func_0x00010c26f3a0();
        dVar12 = -param_1;
        func_0x00010bf46560(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf884a0();
        uVar3 = (ulong)(param_1 < dVar12);
      }
      else {
        if (param_8 != 0) {
          uVar3 = 1;
          goto LAB_106340674;
        }
        uVar3 = *(ulong *)(param_5 + lVar8);
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
        uVar6 = uVar4;
        _objc_opt_isKindOfClass(uVar4,puVar5);
        uVar3 = uVar4;
        if ((uVar6 & 1) == 0) {
          uVar3 = 0;
        }
        _objc_retain(uVar3);
        _objc_release(uVar4);
        if (uVar3 == 0) {
          param_5 = 0;
          uVar3 = 1;
        }
        else {
          func_0x00010bdc1080(uVar4);
          uVar3 = param_5;
          dVar12 = param_1;
          dVar9 = param_2;
          dVar10 = param_3;
          dVar11 = param_4;
          func_0x00010c29bf00(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf20c00();
          _objc_release(uVar3);
          func_0x00010c29bf00(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c09ef00(param_9);
          _objc_release(param_5);
          _CGRectContainsPoint
                    (param_1 * dVar10,param_2 * dVar11,param_3 * dVar10,param_4 * dVar11,dVar12,
                     dVar9);
          uVar3 = param_5;
          param_5 = uVar4;
        }
      }
      _objc_release(param_5);
      goto LAB_106340674;
    }
  }
LAB_106340670:
  uVar3 = 0;
LAB_106340674:
  _objc_release(param_9);
  return uVar3;
}



/* Entry: 1063406c0; end: 1063407a3; -[SCOperaPageViewController operaPageGestureRecognizers:didBeginGestureWithType:recognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063406c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 == 0) {
    func_0x00010bdfe920(param_1,param_2,param_5);
  }
  else {
    puVar1 = PTR_PTR_1126b2ea8;
    if (param_4 == 2) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112745d00);
      func_0x00010bf883c0(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_4 != 1) goto LAB_106340784;
      uVar2 = *(undefined8 *)(param_1 + _DAT_112745d00);
      func_0x00010c22d420(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0eb7a0(uVar2,param_2,puVar1,*(undefined8 *)(param_1 + _DAT_112745d10));
    _objc_release(puVar1);
  }
LAB_106340784:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063407a4; end: 10634090f; -[SCOperaPageViewController operaPageGestureRecognizers:didChangeStateWithType:recognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063407a4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,long param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126b2ea8;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_6 == 0) {
    uVar5 = *(undefined8 *)(param_3 + _DAT_112745d00);
    _objc_retain(param_7);
    func_0x00010c0b4d80();
    _objc_retainAutoreleasedReturnValue();
    param_6 = *(long *)(param_3 + _DAT_112745d10);
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010c0b4f60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    puStack_68 = puVar2;
    func_0x00010c09ef00(param_7,param_4,0);
    _objc_release(param_7);
    uStack_78 = param_1;
    uStack_70 = param_2;
    func_0x00010c297120(puVar3,param_4,&uStack_78,"{CGPoint=dd}");
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_60,&puStack_68,1);
    _objc_retainAutoreleasedReturnValue();
    param_5 = puVar1;
    param_7 = puVar4;
    func_0x00010c0eb7c0(uVar5,param_4,puVar1,param_6,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
    param_3 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (param_6 == 0) {
    func_0x00010bdfe920(param_3,param_4,param_7);
  }
  else {
    puVar1 = PTR_PTR_1126b2ea8;
    if (param_6 == 2) {
      uVar5 = *(undefined8 *)(param_3 + _DAT_112745d00);
      func_0x00010bf883c0(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_6 != 1) goto LAB_1063409d4;
      uVar5 = *(undefined8 *)(param_3 + _DAT_112745d00);
      func_0x00010c22d440(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0eb7a0(uVar5,param_4,puVar1,*(undefined8 *)(param_3 + _DAT_112745d10));
    _objc_release(puVar1);
  }
LAB_1063409d4:
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106340910; end: 1063409f3; -[SCOperaPageViewController operaPageGestureRecognizers:didEndGestureWithType:recognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106340910(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 == 0) {
    func_0x00010bdfe920(param_1,param_2,param_5);
  }
  else {
    puVar1 = PTR_PTR_1126b2ea8;
    if (param_4 == 2) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112745d00);
      func_0x00010bf883c0(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_4 != 1) goto LAB_1063409d4;
      uVar2 = *(undefined8 *)(param_1 + _DAT_112745d00);
      func_0x00010c22d440(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0eb7a0(uVar2,param_2,puVar1,*(undefined8 *)(param_1 + _DAT_112745d10));
    _objc_release(puVar1);
  }
LAB_1063409d4:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063409f4; end: 106340aa7; -[SCOperaPageViewController operaPageGestureRecognizers:didCancellGestureWithType:recognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063409f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 == 0) {
    func_0x00010bdfe920(param_1,param_2,param_5);
  }
  else if (param_4 == 1) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112745d00);
    puVar1 = PTR_PTR_1126b2ea8;
    func_0x00010c22d440(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7a0(uVar2,param_2,puVar1,*(undefined8 *)(param_1 + _DAT_112745d10));
    _objc_release(puVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106340aa8; end: 106340baf; -[SCOperaPageViewController pageableViewControllerVolumeHelperDidChangeVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106340aa8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_1;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar3 = *plStack_110;
    do {
      lVar4 = 0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010bf08b80(*(undefined8 *)(param_1 + _DAT_112745d3c),param_2,
                            *(undefined8 *)(lStack_118 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 106340bb0; end: 106340bb3; -[SCOperaPageViewController displayMediaLogIfAvailable] */

void FUN_106340bb0(void)

{
  return;
}



/* Entry: 106340bb4; end: 106340c4b; -[SCOperaPageViewController _triggerViewDidFullyAppearAfterBlockingExperienceIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106340bb4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + _DAT_112745e04) & 1) == 0) {
    lVar1 = param_1;
    func_0x00010c0f2520();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112745d10);
    func_0x00010be36bc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0f13c0();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c29c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_viewDidFullyAppear_112684c88);
      return;
    }
  }
  return;
}



/* Entry: 106340c4c; end: 106340fcf; -[SCOperaPageViewController _reloadLayerViewControllers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106340c4c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  puVar23 = &uStack_1f0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1;
  if ((*(byte *)((long)param_1 + (long)_DAT_112745e08) & 1) == 0) {
    lVar18 = (long)_DAT_112745dec;
    lVar2 = *(long *)((long)param_1 + lVar18);
    func_0x00010bf529e0();
    puVar19 = param_1;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar19;
    func_0x00010bf51e00();
    _objc_release(puVar19);
    func_0x00010bdd6460(param_1);
    puVar19 = param_1;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar19;
    func_0x00010c0d3c80();
    _objc_release(puVar19);
    func_0x00010c12d500(puVar4);
    lVar18 = *(long *)((long)param_1 + lVar18);
    func_0x00010bf529e0();
    if (lVar18 == 0 && lVar2 != 0) {
      func_0x00010becff60(param_1);
    }
    puVar19 = param_1;
    func_0x00010bf38f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beac740(param_1);
    _objc_release(puVar19);
    func_0x00010beb0b80(param_1);
    func_0x00010bea6560(param_1);
    puVar19 = param_1;
    func_0x00010c0f2520();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = (long)_DAT_112745d10;
    puVar5 = *(undefined8 **)((long)param_1 + lVar2);
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    param_3 = puVar5;
    func_0x00010c0f13c0();
    _objc_release(puVar5);
    _objc_release(puVar19);
    if ((int)puVar20 == 0) {
      puVar19 = param_1;
      func_0x00010c0f2520();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = *(undefined8 **)((long)param_1 + lVar2);
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar19;
      param_3 = puVar5;
      func_0x00010c128180();
      _objc_release(puVar5);
      _objc_release(puVar19);
      if (puVar20 != (undefined8 *)0x0) {
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        _objc_retain(puVar4);
        puVar19 = puVar4;
        func_0x00010bf52a60();
        if (puVar19 != (undefined8 *)0x0) {
          lVar2 = *plStack_1e0;
          do {
            puVar23 = (undefined8 *)0x0;
            do {
              if (*plStack_1e0 != lVar2) {
                _objc_enumerationMutation(puVar4);
              }
              puVar6 = (undefined1 *)((long)param_1 + (long)_DAT_112745d0c);
              _objc_loadWeakRetained();
              func_0x00010c0f1fc0();
              _objc_release(puVar6);
              puVar23 = (undefined8 *)((long)puVar23 + 1);
            } while (puVar19 != puVar23);
            puVar19 = puVar4;
            puVar23 = &uStack_1f0;
            func_0x00010bf52a60();
          } while (puVar19 != (undefined8 *)0x0);
        }
        _objc_release(puVar4);
        param_3 = puVar23;
      }
    }
    else {
      puVar23 = param_1;
      func_0x00010bf1d960();
      if (((ulong)puVar23 & 1) == 0) {
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        plStack_1a0 = (long *)0x0;
        _objc_retain(puVar4);
        param_3 = &uStack_1b0;
        puVar23 = puVar4;
        func_0x00010bf52a60();
        if (puVar23 != (undefined8 *)0x0) {
          lVar2 = *plStack_1a0;
          do {
            puVar19 = (undefined8 *)0x0;
            do {
              if (*plStack_1a0 != lVar2) {
                _objc_enumerationMutation(puVar4);
              }
              func_0x00010be64b40(param_1);
              puVar19 = (undefined8 *)((long)puVar19 + 1);
            } while (puVar23 != puVar19);
            param_3 = &uStack_1b0;
            puVar23 = puVar4;
            func_0x00010bf52a60();
          } while (puVar23 != (undefined8 *)0x0);
        }
        _objc_release(puVar4);
      }
      puVar23 = puVar4;
      func_0x00010bf529e0();
      if (puVar23 != (undefined8 *)0x0) {
        func_0x00010bdcb9e0(param_1);
        param_3 = puVar4;
        func_0x00010bee94e0(param_1);
      }
      func_0x00010bed82a0(param_1);
    }
    _objc_release(puVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar18 = (long)_DAT_112745d10;
  uVar7 = *(undefined8 *)((long)puVar3 + lVar18);
  func_0x00010be36bc0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar3;
  func_0x00010c0f13c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e4b658;
  if ((int)puVar23 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e4b678;
  }
  _objc_retain(ppuVar1);
  _objc_release(uVar7);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18180();
  lVar13 = (long)_DAT_112745e0c;
  *(undefined1 *)((long)puVar3 + lVar13) = 1;
  puVar23 = puVar3;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar23;
  func_0x00010c0d3c80();
  _objc_release(puVar23);
  lVar15 = (long)_DAT_112745dec;
  if (*(long *)((long)puVar3 + lVar15) == 0) {
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar3 + lVar15);
    *(undefined **)((long)puVar3 + lVar15) = puVar9;
    _objc_release(uVar7);
  }
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar3;
  func_0x00010be6f380();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar23;
  func_0x00010c08c720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar23);
  puVar23 = puVar4;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  do {
    if (puVar23 == (undefined8 *)0x0) {
      _objc_release(puVar4);
      func_0x00010bde0700(puVar3);
      puVar23 = puVar3;
      func_0x00010bf38f00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar9;
      func_0x00010c071b60();
      _objc_release(puVar23);
      if (((ulong)puVar12 & 1) == 0) {
        _objc_retain(puVar9);
        puVar12 = puVar9;
        func_0x00010bf52a60();
        lVar15 = lRam0000000000000000;
        while (puVar12 != (undefined *)0x0) {
          puVar22 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar15) {
              _objc_enumerationMutation(puVar9);
            }
            uVar7 = *(undefined8 *)((long)puVar22 * 8);
            puVar23 = puVar3;
            func_0x00010bf38f00();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar23;
            func_0x00010bf4b900();
            _objc_release(puVar23);
            if ((int)puVar4 == 0) {
              func_0x00010beae480(puVar3);
            }
            else {
              uVar14 = *(undefined8 *)((long)puVar3 + (long)_DAT_112745d80);
              func_0x00010c29bf00(uVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf21300(uVar14);
              _objc_release(uVar7);
              func_0x00010bef7700(puVar3);
            }
            func_0x00010bf08b80(*(undefined8 *)((long)puVar3 + (long)_DAT_112745d3c));
            puVar22 = puVar22 + 1;
          } while (puVar12 != puVar22);
          puVar12 = puVar9;
          func_0x00010bf52a60();
        }
        _objc_release(puVar9);
      }
      lVar15 = *(long *)((long)puVar3 + (long)_DAT_112745db0);
      if (lVar15 != 0) {
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        lVar17 = (long)_DAT_112745d80;
        lVar21 = *(long *)((long)puVar3 + lVar17);
        _objc_release();
        if (lVar15 == lVar21) {
          func_0x00010bf21300(*(undefined8 *)((long)puVar3 + lVar17));
        }
      }
      func_0x00010bed26a0(puVar3);
      func_0x00010bedcac0(puVar3);
      puVar23 = puVar3;
      func_0x00010c29bf00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cbe20();
      _objc_release(puVar23);
      uVar7 = *(undefined8 *)((long)puVar3 + lVar18);
      func_0x00010beecf00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020(*(undefined8 *)((long)puVar3 + (long)_DAT_112745d80));
      _objc_release(uVar7);
      *(undefined1 *)((long)puVar3 + lVar13) = 0;
      func_0x00010bf94960(PTR_PTR_1126c98e0);
      _objc_release(puVar9);
      _objc_release(puVar19);
      _objc_release(puVar8);
      _objc_release(ppuVar1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c08c650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)((long)param_3 + (long)_DAT_112745d08),
                 PTR_s_layerViewControllerWithLayer_con_112600ba0);
      return;
    }
    puVar20 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(puVar4);
      }
      lVar17 = *(long *)((long)puVar20 * 8);
      puVar5 = puVar3;
      func_0x00010beb68c0();
      if (((ulong)puVar5 & 1) == 0) {
        puVar5 = puVar3;
        func_0x00010be48ae0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 == (undefined8 *)0x0) {
          lVar21 = lVar17;
          func_0x00010c27dd80();
          if (lVar21 == 7) {
            uVar16 = *(undefined8 *)((long)puVar3 + lVar18);
            uVar14 = *(undefined8 *)((long)puVar3 + (long)_DAT_112745cf8);
            _objc_retain(lVar17);
            func_0x00010bf461c0(uVar14);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar14;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x000107dc65c0(uVar16,uVar7);
            _objc_release(uVar7);
            _objc_release(uVar14);
            lVar21 = lVar17;
            func_0x00010c09d3c0();
            _objc_release(lVar17);
            if (lVar21 != 0) goto LAB_1063412d4;
          }
          else {
LAB_1063412d4:
            puVar11 = puVar3;
            func_0x00010bdeefa0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar11 != (undefined8 *)0x0) {
              func_0x00010c1e5120(puVar11);
              func_0x00010bdf7780(puVar3);
              func_0x00010c1d8aa0(puVar11);
              func_0x00010c1ba680(puVar11);
              func_0x00010c1b98a0(puVar11);
              func_0x00010befa120(puVar9);
            }
            _objc_release(puVar11);
          }
        }
        else {
          puVar10 = puVar5;
          func_0x00010010fab4(puVar5,PTR_DAT_1126a5338);
          puVar11 = puVar5;
          if ((int)puVar10 == 0) {
            puVar11 = (undefined8 *)0x0;
          }
          _objc_retain(puVar11);
          if ((int)puVar10 == 0) {
LAB_106341208:
            func_0x00010c1b98a0(puVar5);
          }
          else {
            puVar11 = puVar5;
            func_0x00010c06d1a0();
            _objc_release(puVar5);
            if (((ulong)puVar11 & 1) == 0) goto LAB_106341208;
          }
          puVar11 = puVar5;
          func_0x00010c0f3ca0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar11 != (undefined8 *)0x0) {
            func_0x00010befa120(puVar9);
          }
          func_0x00010c12d360(puVar19);
        }
        _objc_release(puVar5);
      }
      puVar20 = (undefined8 *)((long)puVar20 + 1);
    } while (puVar23 != puVar20);
    puVar23 = puVar4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106340fd0; end: 1063415ff; -[SCOperaPageViewController _buildLayerVCsWithReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106340fd0(ulong param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined *puVar21;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar13 = (long)_DAT_112745d10;
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010be36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0f13c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e4b658;
  if ((int)uVar3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e4b678;
  }
  _objc_retain(ppuVar1);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18180();
  lVar14 = (long)_DAT_112745e0c;
  *(undefined1 *)(param_1 + lVar14) = 1;
  uVar3 = param_1;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0d3c80();
  _objc_release(uVar3);
  lVar16 = (long)_DAT_112745dec;
  if (*(long *)(param_1 + lVar16) == 0) {
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar16);
    *(undefined **)(param_1 + lVar16) = puVar6;
    _objc_release(uVar2);
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be6f380();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c08c720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar7;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  do {
    if (uVar3 == 0) {
      _objc_release(uVar7);
      func_0x00010bde0700(param_1);
      uVar3 = param_1;
      func_0x00010bf38f00(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar6;
      func_0x00010c071b60();
      _objc_release(uVar3);
      if (((ulong)puVar11 & 1) == 0) {
        _objc_retain(puVar6);
        puVar11 = puVar6;
        func_0x00010bf52a60();
        lVar16 = lRam0000000000000000;
        while (puVar11 != (undefined *)0x0) {
          puVar21 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar16) {
              _objc_enumerationMutation(puVar6);
            }
            uVar2 = *(undefined8 *)((long)puVar21 * 8);
            uVar3 = param_1;
            func_0x00010bf38f00();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar3;
            func_0x00010bf4b900();
            _objc_release(uVar3);
            if ((int)uVar7 == 0) {
              func_0x00010beae480(param_1);
            }
            else {
              uVar15 = *(undefined8 *)(param_1 + (long)_DAT_112745d80);
              func_0x00010c29bf00(uVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf21300(uVar15);
              _objc_release(uVar2);
              func_0x00010bef7700(param_1);
            }
            func_0x00010bf08b80(*(undefined8 *)(param_1 + (long)_DAT_112745d3c));
            puVar21 = puVar21 + 1;
          } while (puVar11 != puVar21);
          puVar11 = puVar6;
          func_0x00010bf52a60();
        }
        _objc_release(puVar6);
      }
      lVar16 = *(long *)(param_1 + (long)_DAT_112745db0);
      if (lVar16 != 0) {
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = (long)_DAT_112745d80;
        lVar20 = *(long *)(param_1 + lVar18);
        _objc_release();
        if (lVar16 == lVar20) {
          func_0x00010bf21300(*(undefined8 *)(param_1 + lVar18));
        }
      }
      func_0x00010bed26a0(param_1);
      func_0x00010bedcac0(param_1);
      uVar3 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cbe20();
      _objc_release(uVar3);
      uVar2 = *(undefined8 *)(param_1 + lVar13);
      func_0x00010beecf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020(*(undefined8 *)(param_1 + (long)_DAT_112745d80));
      _objc_release(uVar2);
      *(undefined1 *)(param_1 + lVar14) = 0;
      func_0x00010bf94960(PTR_PTR_1126c98e0);
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(ppuVar1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c08c650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_3 + _DAT_112745d08),
                 PTR_s_layerViewControllerWithLayer_con_112600ba0);
      return;
    }
    uVar19 = 0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(uVar7);
      }
      lVar18 = *(long *)(uVar19 * 8);
      uVar8 = param_1;
      func_0x00010beb68c0();
      if ((uVar8 & 1) == 0) {
        uVar8 = param_1;
        func_0x00010be48ae0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar8 == 0) {
          lVar20 = lVar18;
          func_0x00010c27dd80();
          if (lVar20 == 7) {
            uVar17 = *(undefined8 *)(param_1 + lVar13);
            uVar15 = *(undefined8 *)(param_1 + (long)_DAT_112745cf8);
            _objc_retain(lVar18);
            func_0x00010bf461c0(uVar15);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar15;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x000107dc65c0(uVar17,uVar2);
            _objc_release(uVar2);
            _objc_release(uVar15);
            lVar20 = lVar18;
            func_0x00010c09d3c0();
            _objc_release(lVar18);
            if (lVar20 != 0) goto LAB_1063412d4;
          }
          else {
LAB_1063412d4:
            uVar10 = param_1;
            func_0x00010bdeefa0();
            _objc_retainAutoreleasedReturnValue();
            if (uVar10 != 0) {
              func_0x00010c1e5120(uVar10);
              func_0x00010bdf7780(param_1);
              func_0x00010c1d8aa0(uVar10);
              func_0x00010c1ba680(uVar10);
              func_0x00010c1b98a0(uVar10);
              func_0x00010befa120(puVar6);
            }
            _objc_release(uVar10);
          }
        }
        else {
          uVar9 = uVar8;
          func_0x00010010fab4(uVar8,PTR_DAT_1126a5338);
          uVar10 = uVar8;
          if ((int)uVar9 == 0) {
            uVar10 = 0;
          }
          _objc_retain(uVar10);
          if ((int)uVar9 == 0) {
LAB_106341208:
            func_0x00010c1b98a0(uVar8);
          }
          else {
            uVar10 = uVar8;
            func_0x00010c06d1a0();
            _objc_release(uVar8);
            if ((uVar10 & 1) == 0) goto LAB_106341208;
          }
          uVar10 = uVar8;
          func_0x00010c0f3ca0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (uVar10 != 0) {
            func_0x00010befa120(puVar6);
          }
          func_0x00010c12d360(uVar5);
        }
        _objc_release(uVar8);
      }
      uVar19 = uVar19 + 1;
    } while (uVar3 != uVar19);
    uVar3 = uVar7;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106341600; end: 106341633; -[SCOperaPageViewController _createLayerViewControllerForLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106341600(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745d08),
             PTR_s_layerViewControllerWithLayer_con_112600ba0,param_3,
             *(undefined8 *)(param_1 + _DAT_112745cf0),*(undefined8 *)(param_1 + _DAT_112745cf4),
             *(undefined8 *)(param_1 + _DAT_112745cf8),*(undefined8 *)(param_1 + _DAT_112745d00));
  return;
}



/* Entry: 106341634; end: 1063418f7; -[SCOperaPageViewController _customSetupForLayerViewControllerIfNeeded:layer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106341634(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5338);
  lVar1 = param_3;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    func_0x00010c171de0(param_3);
    func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_112745dec));
  }
  puVar2 = PTR_DAT_1126a5340;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010010fab4(param_3,puVar2);
  lVar3 = param_3;
  if ((int)lVar4 == 0) {
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  _objc_release(param_3);
  if (lVar3 != 0) {
    func_0x00010c18b700(param_3);
  }
  puVar2 = PTR_DAT_1126a5348;
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010010fab4(param_3,puVar2);
  lVar4 = param_3;
  if ((int)lVar6 == 0) {
    lVar4 = 0;
  }
  _objc_retain(lVar4);
  _objc_release(param_3);
  if (lVar4 != 0) {
    func_0x00010c1becc0(param_3);
  }
  lVar6 = param_1;
  func_0x00010beb59a0();
  if ((int)lVar6 != 0) {
    func_0x00010c1dbba0(param_3);
    goto LAB_106341888;
  }
  lVar6 = param_4;
  func_0x00010c27dd80();
  puVar2 = PTR_DAT_1126a5350;
  if (lVar6 == 9) {
    _objc_retain(param_3);
    lVar7 = param_3;
    func_0x00010010fab4(param_3,puVar2);
    lVar6 = param_3;
    if ((int)lVar7 == 0) {
      lVar6 = 0;
    }
    _objc_retain(lVar6);
    _objc_release(param_3);
    if (lVar6 != 0) {
      lVar7 = (long)_DAT_112745dcc;
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0b4e40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c0d00(param_3);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0b4e40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      _objc_release(uVar5);
    }
  }
  else {
    lVar6 = param_4;
    func_0x00010c27dd80();
    puVar2 = PTR_DAT_1126a5358;
    if (lVar6 != 0x13) goto LAB_106341888;
    _objc_retain(param_3);
    lVar6 = param_3;
    func_0x00010010fab4(param_3,puVar2);
    _objc_release(param_3);
    if ((param_3 == 0) || ((int)lVar6 == 0)) goto LAB_106341888;
    if ((*(byte *)(param_1 + _DAT_112745d78) & 1) == 0) {
      lVar6 = *(long *)(param_1 + _DAT_112745d80);
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c210980(param_3);
    }
    else {
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c210980(param_3);
      lVar6 = param_1;
    }
  }
  _objc_release(lVar6);
LAB_106341888:
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063418f8; end: 1063419d7; -[SCOperaPageViewController _shouldSkipAddingLayerViewControllerForLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1063418f8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112745cf0;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010bf01880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar2 = param_3;
    _objc_opt_respondsToSelector(param_3,PTR_s_layerContentType_112600ab8);
    if ((uVar2 & 1) != 0) {
      func_0x00010c08c2a0(param_3);
    }
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bf01880(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf4b900(uVar3);
    uVar6 = (uint)uVar5 ^ 1;
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 1063419d8; end: 106341b33; -[SCOperaPageViewController _setupNewChildViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063419d8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112745d10;
  uVar1 = *(undefined8 *)(param_2 + lVar3);
  _objc_retain(param_4);
  func_0x00010be36bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010bef7700(param_2,param_3,param_4);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112745d80);
  uVar1 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_3,uVar1);
  _objc_release(uVar1);
  func_0x00010bead6e0(param_2,param_3,param_4);
  func_0x00010bf77e80(param_4,param_3,param_2);
  func_0x00010bf79560(param_4,param_3,*(undefined8 *)(param_2 + _DAT_112745dd8));
  func_0x00010c1d99a0(param_4,param_3,*(undefined1 *)(param_2 + _DAT_112745de0));
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010be36bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (0.0 < param_1) {
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                        &PTR____CFConstantStringClassReference_110e4b998);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106341b34; end: 106341c37; -[SCOperaPageViewController _setupLayoutForLayerViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106341b34(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c08c480();
  if (lVar2 - 1U < 3) {
    lVar2 = param_3;
    func_0x00010c08c480(param_3);
    func_0x00010be491e0(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fc140();
    _objc_release(param_1);
  }
  else if (lVar2 == 0) {
    if (*(char *)(param_1 + _DAT_112745d50) == '\x01') {
      uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      func_0x00010c219960(lVar1,param_2,&uStack_60);
    }
    func_0x00010bf20c00(*(undefined8 *)(param_1 + _DAT_112745d80));
    func_0x00010c19f0e0(lVar1);
    func_0x00010c16d4a0(lVar1,param_2,0x12);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106341c38; end: 106341c77; -[SCOperaPageViewController _layoutGuideForContainerOption:] */

void FUN_106341c38(long param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 4) {
    param_2 = *(undefined8 *)(param_1 + *(int *)(&PTR_DAT_11091cc78)[param_3]);
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106341c78; end: 106341f8b; -[SCOperaPageViewController _clearLayerViewControllers:] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000106341d48 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined * FUN_106341c78(double param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  long lStack_4a0;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010bf529e0(param_4);
  lVar17 = (long)_DAT_112745d10;
  uVar1 = *(undefined8 *)(param_2 + lVar17);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(uVar1);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retain(param_4);
  puVar12 = param_4;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (puVar12 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(param_4);
      }
      uVar14 = *(undefined8 *)((long)puVar10 * 8);
      lVar11 = param_2;
      func_0x00010c0f2520();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_2 + lVar17);
      func_0x00010be36bc0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar11;
      func_0x00010c0f13c0();
      _objc_release(uVar1);
      _objc_release(lVar11);
      if ((int)lVar18 != 0) {
        func_0x00010c29ca00(uVar14);
      }
      func_0x00010c2a6740(uVar14);
      uVar1 = uVar14;
      func_0x00010c29bf00(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(uVar1);
      func_0x00010c12c8e0(uVar14);
      func_0x00010c26ac80(*(undefined8 *)(param_2 + _DAT_112745d08));
      uVar2 = *(undefined8 *)(param_2 + lVar17);
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar1;
      func_0x00010bf1f3c0();
      _objc_release(uVar1);
      _objc_release(uVar2);
      if ((int)uVar14 != 0) {
        func_0x00010c12d360(*(undefined8 *)(param_2 + _DAT_112745d1c));
        func_0x00010c12d360(*(undefined8 *)(param_2 + _DAT_112745d20));
      }
      func_0x00010c12d360(*(undefined8 *)(param_2 + _DAT_112745dec));
      puVar10 = puVar10 + 1;
    } while (puVar12 != puVar10);
    puVar12 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  func_0x00010bf529e0(param_4);
  uVar1 = *(undefined8 *)(param_2 + lVar17);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110e4b6b8);
  if (0.0 < param_1) {
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_4;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  dVar21 = 0.0;
  puVar20 = param_4;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar20;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (puVar12 != (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(puVar20);
      }
      uVar1 = *(undefined8 *)((long)puVar16 * 8);
      func_0x00010bf60c40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(puVar10);
      _objc_release(uVar1);
      puVar16 = puVar16 + 1;
    } while (puVar12 != puVar16);
    puVar12 = puVar20;
    func_0x00010bf52a60();
  }
  _objc_release(puVar20);
  if (*(long *)(param_4 + _DAT_112745df0) != 0) {
    puVar12 = PTR_PTR_1126b2348;
    func_0x00010bfbbde0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar10);
    _objc_release(puVar12);
  }
  lVar13 = (long)_DAT_112745d18;
  func_0x00010beed820(*(undefined8 *)(param_4 + lVar13));
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (dVar21 != 0.0) {
    func_0x00010beed820(*(undefined8 *)(param_4 + lVar13));
    func_0x00010c0df720(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR_PTR_1126b2348;
    func_0x00010c0f62c0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar10);
    _objc_release(puVar20);
    _objc_release(puVar12);
  }
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar13 = (long)_DAT_112745d24;
  func_0x00010c2a2520(*(undefined8 *)(param_4 + lVar13));
  func_0x00010c0df6e0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126c9a20;
  func_0x00010c09d1c0(PTR_PTR_1126c9a20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar10);
  _objc_release(puVar20);
  _objc_release(puVar12);
  lVar11 = *(long *)(param_4 + lVar13);
  uVar1 = *(undefined8 *)(param_4 + _DAT_112745d10);
  func_0x00010be36bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09d040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(lVar11);
  lVar13 = lVar11;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  while (lVar13 != 0) {
    lVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(lVar11);
      }
      lVar15 = *(long *)(lVar18 * 8);
      _objc_retain(lVar15);
      puVar20 = PTR_PTR_1126c9df8;
      _objc_opt_new(PTR_PTR_1126c9df8);
      func_0x00010bf8d140(lVar15);
      func_0x00010c193ea0(puVar20);
      func_0x00010c09ea00(lVar15);
      func_0x00010c1bf6c0(puVar20);
      func_0x00010c09cdc0(lVar15);
      func_0x00010c1bebe0(puVar20);
      lVar3 = lVar15;
      func_0x00010bf862c0();
      if (0 < lVar3) {
        func_0x00010bf862c0(lVar15);
        func_0x00010c18fe60(puVar20);
      }
      lVar3 = lVar15;
      func_0x00010bfe26e0();
      if (0 < lVar3) {
        func_0x00010bfe26e0(lVar15);
        func_0x00010c1a8300(puVar20);
      }
      _objc_release(lVar15);
      func_0x00010befa120(puVar12);
      _objc_release(puVar20);
      lVar18 = lVar18 + 1;
    } while (lVar13 != lVar18);
    lVar13 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  puVar20 = puVar12;
  func_0x00010bf529e0();
  if (puVar20 != (undefined *)0x0) {
    puVar20 = PTR_PTR_1126c9680;
    func_0x00010c09d020(PTR_PTR_1126c9680);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar10);
    _objc_release(puVar20);
    puVar16 = param_4;
    func_0x00010be4da40();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar16;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    while (puVar20 != (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(puVar16);
        }
        puVar4 = puVar16;
        func_0x00010c0e00e0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar10);
        _objc_release(puVar4);
        puVar19 = puVar19 + 1;
      } while (puVar20 != puVar19);
      puVar20 = puVar16;
      func_0x00010bf52a60();
    }
    _objc_release(puVar16);
  }
  lVar13 = lVar11;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 != 0) {
    func_0x00010bfe26e0(lVar13);
  }
  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126c9680;
  func_0x00010bf9bbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar10);
  _objc_release(puVar16);
  _objc_release(puVar20);
  _objc_release(lVar13);
  _objc_release(puVar12);
  _objc_release(lVar11);
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010be3e340(param_4);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126c9a20;
  func_0x00010c06c7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar12;
  func_0x00010c1d0640(puVar10);
  _objc_release(puVar20);
  _objc_release(puVar12);
  puVar12 = puVar10;
  func_0x00010bf51e00();
  _objc_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return puVar12;
  }
  ___stack_chk_fail();
  lStack_4a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar16);
  puVar10 = puVar16;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  dVar21 = 0.0;
  puVar12 = puVar10;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  if (puVar12 == (undefined *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    dVar24 = 0.0;
    do {
      puVar20 = (undefined *)0x0;
      lVar17 = lVar9;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(puVar10);
        }
        lVar9 = *(long *)((long)puVar20 * 8);
        if (lVar17 == 0) {
          func_0x00010c09cdc0(lVar9);
          _objc_retain(lVar9);
        }
        else {
          func_0x00010bf8d140(lVar17);
          dVar23 = dVar21;
          func_0x00010c09cdc0(lVar17);
          dVar25 = dVar21 + dVar23;
          func_0x00010bf8d140(lVar9);
          dVar21 = dVar23;
          func_0x00010c09cdc0(lVar9);
          dVar23 = dVar23 + dVar21;
          func_0x00010c09cdc0(lVar9);
          if (dVar25 < dVar23) {
            func_0x00010bf8d140(lVar9);
            dVar21 = dVar25 - dVar21;
            if (0.0 <= dVar21) {
              dVar23 = dVar24 + dVar21;
            }
            else {
              dVar25 = ABS(dVar21);
              dVar22 = dVar25 * 2.220446049250313e-16;
              if (dVar22 <= 2.2250738585072014e-308) {
                dVar22 = 2.2250738585072014e-308;
              }
              dVar21 = dVar24 + dVar21;
              dVar23 = dVar21;
              if (dVar22 <= dVar25) {
                dVar23 = dVar24;
              }
            }
            _objc_retain(lVar9);
            _objc_release(lVar17);
            dVar24 = dVar23;
          }
          else {
            lVar9 = lVar17;
            dVar24 = dVar24 + dVar21;
          }
        }
        puVar20 = puVar20 + 1;
        lVar17 = lVar9;
      } while (puVar12 != puVar20);
      puVar12 = puVar10;
      func_0x00010bf52a60();
    } while (puVar12 != (undefined *)0x0);
    dVar21 = dVar24 * 1000.0;
  }
  puVar20 = PTR_PTR_1126c9680;
  func_0x00010c09cf40();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9680;
  puStack_538 = puVar19;
  func_0x00010c09cfa0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9680;
  puStack_530 = puVar5;
  func_0x00010c09d060();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &puStack_538;
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_528 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar19);
  _objc_release(puVar20);
  _objc_release(lVar9);
  _objc_release(puVar10);
  _objc_release(puVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(ppuVar8);
  func_0x00010bf8d140(param_3);
  dVar24 = dVar21;
  func_0x00010bf8d140(ppuVar8);
  if (dVar21 <= dVar24) {
    func_0x00010bf8d140(param_3);
    dVar21 = dVar24;
    func_0x00010bf8d140(ppuVar8);
    if (dVar24 < dVar21) {
      puVar12 = (undefined *)0xffffffffffffffff;
      goto LAB_106342988;
    }
    func_0x00010c09cdc0(param_3);
    dVar24 = dVar21;
    func_0x00010c09cdc0(ppuVar8);
    if (dVar21 <= dVar24) {
      func_0x00010c09cdc0(param_3);
      dVar21 = dVar24;
      func_0x00010c09cdc0(ppuVar8);
      puVar12 = (undefined *)-(ulong)(dVar24 < dVar21);
      goto LAB_106342988;
    }
  }
  puVar12 = (undefined *)((long)&lRam0000000000000000 + 1);
LAB_106342988:
  _objc_release(ppuVar8);
  _objc_release(param_3);
  return puVar12;
}


