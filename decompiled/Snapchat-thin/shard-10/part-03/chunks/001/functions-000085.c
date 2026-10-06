/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e8f03c; end: 107e8f073; -[SCTableIndex _installExpandedDaggerWithHeight:width:centerXOffset:leftCornerRadius:rightCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8f03c(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112770b98;
  *(undefined8 *)(param_6 + lVar1) = param_2;
  ((undefined8 *)(param_6 + lVar1))[1] = param_1;
  lVar1 = (long)_DAT_112770b9c;
  *(undefined8 *)(param_6 + lVar1) = param_4;
  ((undefined8 *)(param_6 + lVar1))[1] = param_5;
  if (0.0 <= param_3) {
    param_3 = -param_3;
  }
  *(double *)(param_6 + _DAT_112770bd4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_6,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107e8f074; end: 107e8f377; -[SCTableIndex _transitionScrollBarColorToPercent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8f074(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  undefined *puVar8;
  long lVar9;
  double dVar10;
  
  lVar9 = (long)_DAT_112770b8c;
  lVar1 = *(long *)(param_2 + lVar9);
  func_0x00010c27aa40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 == 0) || (param_1 == *(double *)(param_2 + _DAT_112770bdc))) {
    return;
  }
  *(double *)(param_2 + _DAT_112770bdc) = param_1;
  if (param_1 == 0.0) {
    uVar2 = *(undefined8 *)(param_2 + lVar9);
    func_0x00010c151d80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar3 = *(undefined8 *)(param_2 + _DAT_112770b94);
    func_0x00010c22a660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (*(char *)(param_2 + _DAT_112770bb0) != '\x01') {
      return;
    }
    puVar4 = *(undefined **)(param_2 + lVar9);
    func_0x00010c27aa40(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    pdVar5 = *(double **)(param_2 + lVar9);
    if (param_1 != 1.0) {
      func_0x00010c151d80();
      _objc_retainAutoreleasedReturnValue();
      pdVar6 = pdVar5;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      _CGColorGetComponents();
      _objc_release(pdVar5);
      pdVar7 = *(double **)(param_2 + lVar9);
      func_0x00010c27aa40();
      _objc_retainAutoreleasedReturnValue();
      pdVar5 = pdVar7;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      _CGColorGetComponents();
      _objc_release(pdVar7);
      dVar10 = 1.0 - param_1;
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41620(param_1 * *pdVar5 + *pdVar6 * dVar10,
                          param_1 * pdVar5[1] + pdVar6[1] * dVar10,
                          param_1 * pdVar5[2] + pdVar6[2] * dVar10,0x3ff0000000000000,
                          PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      uVar2 = *(undefined8 *)(param_2 + _DAT_112770b94);
      func_0x00010c22a660(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19bc00();
      _objc_release(uVar2);
      if (*(char *)(param_2 + _DAT_112770bb0) == '\x01') {
        puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf41620(param_1 * *pdVar6 + *pdVar5 * dVar10,
                            param_1 * pdVar6[1] + pdVar5[1] * dVar10,
                            param_1 * pdVar6[2] + pdVar5[2] * dVar10,0x3ff0000000000000,
                            PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(*(undefined8 *)(param_2 + _DAT_112770ba4),param_3,puVar8);
        _objc_release(puVar8);
      }
      goto LAB_107e8f210;
    }
    func_0x00010c27aa40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_2 + _DAT_112770b94);
    func_0x00010c22a660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar2);
    _objc_release(pdVar5);
    if (*(char *)(param_2 + _DAT_112770bb0) != '\x01') {
      return;
    }
    puVar4 = *(undefined **)(param_2 + lVar9);
    func_0x00010c151d80(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c213180(*(undefined8 *)(param_2 + _DAT_112770ba4),param_3,puVar4);
LAB_107e8f210:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107e8f378; end: 107e8f96f; -[SCTableIndex layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8f378(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  double *pdVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  long lStack_a0;
  undefined *puStack_98;
  
  puStack_98 = PTR_PTR_1126fb820;
  lStack_a0 = param_4;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_4);
  func_0x00010bc85050();
  pdVar1 = (double *)(param_4 + _DAT_112770be0);
  dVar15 = *pdVar1;
  dVar17 = pdVar1[2];
  dVar18 = pdVar1[3];
  _CGRectGetHeight(dVar15,pdVar1[1]);
  lVar14 = (long)_DAT_112770b90;
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar14));
  bVar2 = false;
  if ((param_3 == dVar17) && (bVar2 = false, !NAN(dVar15) && !NAN(dVar18))) {
    bVar2 = dVar15 == dVar18;
  }
  if (bVar2) {
    lVar3 = *(long *)(param_4 + lVar14);
    func_0x00010c22a660();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar3;
    func_0x00010c0f5800();
    _objc_release(lVar3);
    if (lVar13 == 0) goto LAB_107e8f444;
  }
  else {
LAB_107e8f444:
    func_0x00010c1739e0(param_1,param_2,param_3,dVar15,*(undefined8 *)(param_4 + lVar14));
    func_0x00010bf20c00(param_4);
    _CGRectGetMidX();
    dVar15 = *pdVar1;
    dVar17 = pdVar1[2];
    dVar18 = pdVar1[3];
    _CGRectGetMidY(dVar15,pdVar1[1]);
    func_0x00010c17a6a0(param_1,dVar15,*(undefined8 *)(param_4 + lVar14));
    puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar14));
    func_0x00010bf19a00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar5 = *(undefined8 *)(param_4 + lVar14);
    func_0x00010c22a660(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  lVar14 = (long)_DAT_112770b94;
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar14));
  pdVar1 = (double *)(param_4 + _DAT_112770b98);
  bVar2 = false;
  if ((dVar17 == *pdVar1) && (bVar2 = false, !NAN(dVar18) && !NAN(pdVar1[1]))) {
    bVar2 = dVar18 == pdVar1[1];
  }
  if (bVar2) {
    lVar3 = *(long *)(param_4 + lVar14);
    func_0x00010c22a660();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar3;
    func_0x00010c0f5800();
    _objc_release(lVar3);
    if (lVar13 != 0) goto LAB_107e8f80c;
  }
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar14));
  func_0x00010bc85160();
  func_0x00010c1739e0(*(undefined8 *)(param_4 + lVar14));
  dVar20 = *pdVar1;
  dVar19 = pdVar1[1];
  dVar15 = *(double *)(param_4 + _DAT_112770b9c);
  dVar18 = ((double *)(param_4 + _DAT_112770b9c))[1];
  dVar17 = dVar18;
  if (*(char *)(param_4 + _DAT_112770ba8) == '\0') {
    dVar17 = dVar15;
    dVar15 = dVar18;
  }
  puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d18c0(0,dVar17);
  func_0x00010befac40(dVar17,0,0,0,puVar4);
  func_0x00010bef98c0(dVar20 - dVar15,0,puVar4);
  func_0x00010befac40(dVar20,dVar15,dVar20,0,puVar4);
  func_0x00010bef98c0(dVar20,dVar19 - dVar15,puVar4);
  func_0x00010befac40(dVar20 - dVar15,dVar19,dVar20,dVar19,puVar4);
  func_0x00010bef98c0(dVar17,dVar19,puVar4);
  func_0x00010befac40(0,dVar19 - dVar17,0,dVar19,puVar4);
  func_0x00010bf3dc80(puVar4);
  uVar6 = *(ulong *)(param_4 + lVar14);
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  _objc_retain(uVar6);
  puVar7 = PTR_s_path_11261b020;
  _NSStringFromSelector(PTR_s_path_11261b020);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_s_backgroundColor_1125a28f8;
  _NSStringFromSelector(PTR_s_backgroundColor_1125a28f8);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar6;
  func_0x00010beee3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  _objc_opt_class(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
  uVar9 = uVar12;
  _objc_opt_isKindOfClass(uVar12,puVar8);
  if ((uVar9 & 1) == 0) {
    _objc_retainAutorelease(puVar4);
    func_0x00010bdc1040();
    func_0x00010c220240(uVar6);
  }
  else {
    uVar9 = uVar6;
    func_0x00010c296f80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar6;
    func_0x00010bf03c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar11 = uVar9;
    if (uVar10 != 0) {
      uVar10 = uVar6;
      func_0x00010c10f4e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c296f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar10);
      func_0x00010c12b200(uVar6);
    }
    _objc_retainAutorelease(puVar4);
    func_0x00010bdc1040();
    func_0x00010c220240(uVar6);
    uVar9 = uVar12;
    func_0x00010bf51e00(uVar12);
    func_0x00010c1b6c80();
    func_0x00010c1a1180(uVar9);
    _objc_retainAutorelease(puVar4);
    func_0x00010bdc1040();
    func_0x00010c216920(uVar9);
    func_0x00010bef6c20(uVar6);
    _objc_release(uVar9);
    _objc_release(uVar11);
  }
  _objc_release(uVar12);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(puVar4);
LAB_107e8f80c:
  dVar15 = *(double *)(param_4 + _DAT_112770bcc);
  if (dVar15 <= 0.01) {
    *(undefined8 *)(param_4 + _DAT_112770bcc) = 0;
    dVar15 = 0.0;
    dVar17 = 0.0;
  }
  else {
    dVar17 = dVar15 + dVar15;
  }
  dVar19 = (dVar17 + -1.0) * -30.0;
  uVar5 = 0x3fe0000000000000;
  dVar18 = (1.0 - dVar17) * 30.0;
  if (0.5 <= dVar15) {
    dVar18 = dVar19;
  }
  dVar20 = dVar18 * 0.5;
  func_0x00010bf20c00(param_4);
  _CGRectGetMidX();
  dVar15 = dVar18 + *(double *)(param_4 + _DAT_112770bd4);
  func_0x00010bf20c00(param_4);
  _CGRectGetMidY();
  func_0x00010c17a6a0(dVar15,dVar20 + dVar17 * dVar18,*(undefined8 *)(param_4 + lVar14));
  lVar13 = (long)_DAT_112770ba4;
  uVar12 = *(ulong *)(param_4 + lVar13);
  func_0x00010c074c20();
  if ((uVar12 & 1) == 0) {
    dVar15 = 6.0;
    uVar16 = 0x4020000000000000;
    dVar17 = 8.0;
    if ((*(long *)(param_4 + _DAT_112770bc8) - 2U & 0xfffffffffffffffd) != 0) {
      dVar17 = 6.0;
    }
    func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar14));
    func_0x00010bc851d4();
    func_0x00010c19f0e0(*(undefined8 *)(param_4 + lVar13));
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar13));
    dVar18 = dVar15;
    func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar14));
    _CGRectGetWidth();
    func_0x00010bc85050(dVar15,uVar16,dVar19,uVar5,
                        (dVar18 - dVar17) - *(double *)(param_4 + _DAT_112770bac));
    func_0x00010c19f0e0(*(undefined8 *)(param_4 + lVar13));
  }
  return;
}



/* Entry: 107e8f970; end: 107e8f9e3; -[SCTableIndex sectionHeaderLabelFont] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8f970(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112770be4;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(*(undefined8 *)(param_1 + _DAT_112770bb4));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107e8f9e4; end: 107e8fb4b; -[SCTableIndex updateScrollViewWithHidingFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8f9e4(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  
  puVar2 = PTR__CGRectZero_110347608;
  if (param_4 == 0.0) {
    pdVar1 = (double *)(param_5 + _DAT_112770be0);
    func_0x00010bf20c00(param_5);
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    pdVar1[2] = param_3;
    pdVar1[3] = param_4;
    return;
  }
  dVar7 = *(double *)PTR__CGRectZero_110347608;
  dVar6 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  dVar9 = param_1;
  _CGRectGetMinY();
  if (dVar9 <= 0.0) {
    uVar10 = *(undefined8 *)(puVar2 + 0x18);
    _CGRectGetMaxY(param_1,param_2,param_3,param_4);
    dVar9 = param_1;
    func_0x00010bf20c00(param_5);
    _CGRectGetHeight();
    dVar3 = dVar7;
    _CGRectGetMaxY(dVar7,param_1,dVar6,uVar10);
    dVar9 = dVar9 - dVar3;
    dVar8 = param_1;
  }
  else {
    dVar8 = *(double *)(puVar2 + 8);
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    dVar3 = param_1;
    dVar9 = param_1;
  }
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  dVar4 = dVar7;
  _CGRectGetMinY(dVar7,dVar8,dVar6,dVar9);
  dVar5 = dVar7;
  _CGRectGetHeight(dVar7,dVar8,dVar6,dVar9);
  dVar9 = dVar3 - dVar4;
  if (dVar5 <= dVar3 - dVar4) {
    dVar9 = dVar5;
  }
  pdVar1 = (double *)(param_5 + _DAT_112770be0);
  *pdVar1 = dVar7;
  pdVar1[1] = dVar8;
  pdVar1[2] = dVar6;
  pdVar1[3] = dVar9;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107e8fb4c; end: 107e8fc8f; -[SCTableIndex updateScrollBarWithHidingFrame:padding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8fb4c(double param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = *(double *)PTR__CGSizeZero_110347620;
  dVar6 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  bVar1 = false;
  if ((dVar5 == param_3) && (bVar1 = false, !NAN(dVar6) && !NAN(param_4))) {
    bVar1 = dVar6 == param_4;
  }
  if (!bVar1) {
    iVar2 = (int)*(undefined8 *)(param_6 + _DAT_112770b94);
    dVar7 = param_3;
    dVar8 = param_4;
    func_0x00010bfb68e0();
    _CGRectIntersectsRect(param_1,param_2,param_3,param_4,dVar5,dVar6,dVar7,dVar8);
    if (iVar2 != 0) {
      lVar4 = (long)_DAT_112770bb0;
      if ((*(byte *)(param_6 + lVar4) & 1) == 0) {
        func_0x00010c239b80(param_6,param_7,0);
      }
      func_0x00010bde2000(param_1,param_2,param_3,param_4,param_5,param_6);
      func_0x00010becf100(param_6);
      func_0x00010c1677c0(1.0 - param_1,*(undefined8 *)(param_6 + _DAT_112770b90));
      if ((*(byte *)(param_6 + lVar4) & 1) != 0) {
        return;
      }
      uVar3 = 1;
      goto LAB_107e8fc6c;
    }
  }
  func_0x00010becf100(0,param_6);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_6 + _DAT_112770b90));
  if ((*(byte *)(param_6 + _DAT_112770bb0) & 1) != 0) {
    return;
  }
  uVar3 = 0;
LAB_107e8fc6c:
  *(undefined1 *)(param_6 + _DAT_112770bc4) = uVar3;
  return;
}



/* Entry: 107e8fc90; end: 107e8fd5b; -[SCTableIndex _colorTransitionPercentWithHidingFrame:padding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107e8fc90(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
                    double param_5,long param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = param_2 + param_5;
  lVar4 = (long)_DAT_112770b94;
  dVar6 = param_2;
  dVar7 = param_4;
  func_0x00010bfb68e0(*(undefined8 *)(param_6 + lVar4));
  dVar5 = dVar6;
  func_0x00010bfb68e0(*(undefined8 *)(param_6 + lVar4));
  func_0x00010bfb68e0(*(undefined8 *)(param_6 + lVar4));
  dVar5 = dVar5 + dVar7;
  bVar1 = false;
  if ((dVar8 < dVar5) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar8))) {
    bVar1 = dVar6 < dVar8;
  }
  if (bVar1) {
    dVar7 = (dVar8 - dVar6) / -30.0 + 1.0;
  }
  else {
    param_5 = (param_2 + param_4) - param_5;
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (dVar5 < param_5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar6) && !NAN(dVar8)) {
        bVar1 = dVar6 < dVar8;
        bVar2 = dVar6 == dVar8;
        bVar3 = false;
      }
    }
    dVar7 = 1.0;
    if (bVar2 || bVar1 != bVar3) {
      dVar7 = 0.0;
    }
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (dVar6 < param_5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar5) && !NAN(param_5)) {
        bVar1 = dVar5 < param_5;
        bVar2 = dVar5 == param_5;
        bVar3 = false;
      }
    }
    if (!bVar2 && bVar1 == bVar3) {
      dVar7 = (dVar5 - param_5) / -30.0 + 1.0;
    }
  }
  return dVar7;
}



/* Entry: 107e8fd5c; end: 107e8fd7b; -[SCTableIndex delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8fd5c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112770be8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e8fd7c; end: 107e8fd8f; -[SCTableIndex setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8fd7c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112770be8,param_3);
  return;
}



/* Entry: 107e8fd90; end: 107e8fe3b; -[SCTableIndex .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8fd90(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112770be8);
  _objc_storeStrong(param_1 + _DAT_112770bec,0);
  _objc_storeStrong(param_1 + _DAT_112770be4,0);
  _objc_storeStrong(param_1 + _DAT_112770bd0,0);
  _objc_storeStrong(param_1 + _DAT_112770ba4,0);
  _objc_storeStrong(param_1 + _DAT_112770bbc,0);
  _objc_storeStrong(param_1 + _DAT_112770b94,0);
  _objc_storeStrong(param_1 + _DAT_112770b8c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112770b90,0);
  return;
}



/* Entry: 107e8fe3c; end: 107e8fee3; -[SCTableIndexGestureRecognizer touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8fe3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x00010c209fc0(param_3,param_4,0);
  lVar3 = (long)_DAT_112770bf0;
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_3,param_4,lVar1);
  *(undefined8 *)(param_3 + lVar3) = param_1;
  ((undefined8 *)(param_3 + lVar3))[1] = param_2;
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c1503c0(*(undefined8 *)(param_3 + _DAT_112770bf4),PTR__OBJC_CLASS___NSTimer_1126af1b0,
                      param_4,param_3,PTR_s__handleTimer__1125397e0,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + _DAT_112770bf8);
  *(undefined **)(param_3 + _DAT_112770bf8) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107e8fee4; end: 107e8ff2f; -[SCTableIndexGestureRecognizer _handleTimer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8fee4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 != 0) {
    return;
  }
  func_0x00010c209fc0(param_1,param_2,1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112770bf8);
  *(undefined8 *)(param_1 + _DAT_112770bf8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e8ff30; end: 107e8ffef; -[SCTableIndexGestureRecognizer touchesMoved:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8ff30(double param_1,double param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_3);
    _objc_release(lVar1);
    if (ABS(param_1 - *(double *)(param_3 + _DAT_112770bf0)) <= 10.0) {
      if (ABS(param_2 - ((double *)(param_3 + _DAT_112770bf0))[1]) <= 10.0) {
        return;
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 5;
    }
    func_0x00010be3da20(param_3);
  }
  else {
    uVar2 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_setState__112660218,uVar2);
  return;
}



/* Entry: 107e8fff0; end: 107e9002b; -[SCTableIndexGestureRecognizer touchesEnded:withEvent:] */

void FUN_107e8fff0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010be3da20();
  lVar2 = param_1;
  func_0x00010c252440();
  uVar1 = 5;
  if (lVar2 != 0) {
    uVar1 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setState__112660218,uVar1);
  return;
}



/* Entry: 107e9002c; end: 107e90063; -[SCTableIndexGestureRecognizer touchesCancelled:withEvent:] */

void FUN_107e9002c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010be3da20();
  lVar2 = param_1;
  func_0x00010c252440();
  uVar1 = 4;
  if (lVar2 == 0) {
    uVar1 = 5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setState__112660218,uVar1);
  return;
}



/* Entry: 107e90064; end: 107e90067; -[SCTableIndexGestureRecognizer reset] */

void FUN_107e90064(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3da30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__invalidateTimer_11256d028);
  return;
}



/* Entry: 107e90068; end: 107e9009b; -[SCTableIndexGestureRecognizer _invalidateTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e90068(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112770bf8;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e9009c; end: 107e900df; -[SCTableIndexGestureRecognizer dealloc] */

void FUN_107e9009c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be3da20();
  puStack_28 = PTR_PTR_1126fb828;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107e900e0; end: 107e900ef; -[SCTableIndexGestureRecognizer minimumPressDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e900e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770bf4);
}



/* Entry: 107e900f0; end: 107e900ff; -[SCTableIndexGestureRecognizer setMinimumPressDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e900f0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112770bf4) = param_1;
  return;
}



/* Entry: 107e90100; end: 107e90113; -[SCTableIndexGestureRecognizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e90100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112770bf8,0);
  return;
}



/* Entry: 107e90114; end: 107e9023b; -[SCTableIndexConfigurationModel initWithScrollBarPressedWidth:scrollBarFastScrollingMinimumWidth:scrollBarColor:scrollBarBackgroundColor:scrollBarLabelTextColor:supportsRTL:transitionScrollBarColor:] */

undefined1 *
FUN_107e90114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126fb830;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107e9023c; end: 107e90243; -[SCTableIndexConfigurationModel scrollBarPressedWidth] */

undefined8 FUN_107e9023c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e90244; end: 107e9024b; -[SCTableIndexConfigurationModel scrollBarFastScrollingMinimumWidth] */

undefined8 FUN_107e90244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e9024c; end: 107e90253; -[SCTableIndexConfigurationModel scrollBarColor] */

undefined8 FUN_107e9024c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e90254; end: 107e9025b; -[SCTableIndexConfigurationModel scrollBarBackgroundColor] */

undefined8 FUN_107e90254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107e9025c; end: 107e90263; -[SCTableIndexConfigurationModel scrollBarLabelTextColor] */

undefined8 FUN_107e9025c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107e90264; end: 107e9026b; -[SCTableIndexConfigurationModel supportsRTL] */

undefined1 FUN_107e90264(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107e9026c; end: 107e90273; -[SCTableIndexConfigurationModel transitionScrollBarColor] */

undefined8 FUN_107e9026c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107e90274; end: 107e902bb; -[SCTableIndexConfigurationModel .cxx_destruct] */

void FUN_107e90274(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 107e902bc; end: 107e902cb;  */

void FUN_107e902bc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ec1b58;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110ec1b58,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 107e902cc; end: 107e90333;  */

void FUN_107e902cc(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR_PTR_1126d80e0;
  _objc_alloc(PTR_PTR_1126d80e0);
  ppuVar2 = &PTR____CFConstantStringClassReference_110ec1b58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ec1b58,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ba00(puVar1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107e90334; end: 107e9050f;  */

void FUN_107e90334(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  if (lRam0000000113728220 != -1) {
    func_0x00010002a2fc(0x113728220,&PTR___NSConcreteGlobalBlock_110a106b8);
  }
  lVar1 = lRam0000000113728218;
  _objc_retain(lRam0000000113728218);
  puVar3 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_alloc_init();
  func_0x00010c1a9320();
  lVar4 = lVar1;
  func_0x00010bf64e20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar4 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (param_2 != 0) {
      puVar5 = PTR_PTR_1126d80e8;
      _objc_opt_new(PTR_PTR_1126d80e8);
      func_0x00010c197f20();
      func_0x00010c1971a0(puVar5);
      lVar6 = param_2;
      func_0x00010c269d40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(lVar6);
      _objc_release(puVar5);
    }
    _objc_release(puVar7);
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107e90510; end: 107e90543;  */

void FUN_107e90510(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113728218;
  puRam0000000113728218 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e90544; end: 107e9061b; -[SCMemoriesSnapsTabCRSectionDateMetadata initWithStartDate:endDate:diffableIdentifier:] */

undefined1 *
FUN_107e90544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fb838;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e9061c; end: 107e9063f; -[SCMemoriesSnapsTabCRSectionDateMetadata copyWithZone:] */

undefined8 FUN_107e9061c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107e90640; end: 107e906bf; -[SCMemoriesSnapsTabCRSectionDateMetadata hash] */

undefined8 * FUN_107e90640(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_107e90758:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107e90764;
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
            goto LAB_107e90764;
          }
          goto LAB_107e90758;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107e90764:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107e906c0; end: 107e9077f; -[SCMemoriesSnapsTabCRSectionDateMetadata isEqual:] */

long FUN_107e906c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107e90758:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107e90764;
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
            goto LAB_107e90764;
          }
          goto LAB_107e90758;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107e90764:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107e90780; end: 107e90787; -[SCMemoriesSnapsTabCRSectionDateMetadata startDate] */

undefined8 FUN_107e90780(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e90788; end: 107e9078f; -[SCMemoriesSnapsTabCRSectionDateMetadata endDate] */

undefined8 FUN_107e90788(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e90790; end: 107e90797; -[SCMemoriesSnapsTabCRSectionDateMetadata diffableIdentifier] */

undefined8 FUN_107e90790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e90798; end: 107e907d3; -[SCMemoriesSnapsTabCRSectionDateMetadata .cxx_destruct] */

void FUN_107e90798(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e907d4; end: 107e90b7b;  */

void FUN_107e907d4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ec1bb8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ec1bb8,
                      &PTR____CFConstantStringClassReference_110ec1bd8,0);
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



/* Entry: 107e90b7c; end: 107e90ccf; -[IGListIndexPathResult initWithInserts:deletes:updates:moves:oldIndexPathMap:newIndexPathMap:] */

undefined1 *
FUN_107e90b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fb840;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e90cd0; end: 107e90ceb; -[IGListIndexPathResult hasChanges] */

bool FUN_107e90cd0(long param_1)

{
  func_0x00010bf34de0();
  return 0 < param_1;
}



/* Entry: 107e90cec; end: 107e90da7; -[IGListIndexPathResult changeCount] */

long FUN_107e90cec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00010c0674e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  lVar3 = param_1;
  func_0x00010bf6d000(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  lVar5 = param_1;
  func_0x00010c28d760(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf529e0();
  func_0x00010c0d19c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  return lVar4 + lVar2 + lVar6 + lVar7;
}



/* Entry: 107e90da8; end: 107e9117f; -[IGListIndexPathResult resultForBatchUpdates] */

/* WARNING: Possible PIC construction at 0x000107e91004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e91038: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107e91008) */
/* WARNING: Removing unreachable block (ram,0x000107e91024) */
/* WARNING: Removing unreachable block (ram,0x000107e9103c) */
/* WARNING: Removing unreachable block (ram,0x000107e9105c) */
/* WARNING: Removing unreachable block (ram,0x000107e91070) */
/* WARNING: Removing unreachable block (ram,0x000107e90fec) */

void FUN_107e90da8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bf6d000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  lVar1 = param_1;
  func_0x00010c0674e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  lVar1 = param_1;
  func_0x00010c28d760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0d19c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c0d3c80();
  lVar6 = lVar1;
  func_0x00010bf529e0();
  if (0 < lVar6) {
    uVar14 = lVar6 + 1;
    do {
      lVar6 = lVar1;
      func_0x00010c0dfd40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar6;
      func_0x00010bfba9a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010bf4b900();
      _objc_release(lVar8);
      if ((int)puVar7 != 0) {
        func_0x00010c12d3c0(lVar5);
        lVar8 = lVar6;
        func_0x00010bfba9a0(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d360(puVar4);
        _objc_release(lVar8);
        lVar8 = lVar6;
        func_0x00010bfba9a0(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(lVar8);
        lVar8 = lVar6;
        func_0x00010c2719c0(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(lVar8);
      }
      _objc_release(lVar6);
      uVar14 = uVar14 - 1;
    } while (1 < uVar14);
  }
  lVar8 = *(long *)(param_1 + 8);
  func_0x00010c0865c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar8;
  func_0x00010bf52a60();
  if (lVar6 == 0) {
    _objc_release(lVar8);
    puVar7 = PTR_PTR_1126d80f0;
    _objc_alloc(PTR_PTR_1126d80f0);
    puVar10 = puVar3;
    func_0x00010bf00560(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010bf00560(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x00010c01e320(puVar7);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(lVar5);
    _objc_release(lVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
      return;
    }
    ___stack_chk_fail();
    uVar9 = *(undefined8 *)(puVar2 + 8);
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar9,PTR_s_objectForKey__1126159e0);
  return;
}



/* Entry: 107e91180; end: 107e91187; -[IGListIndexPathResult oldIndexPathForIdentifier:] */

void FUN_107e91180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_objectForKey__1126159e0)
  ;
  return;
}



/* Entry: 107e91188; end: 107e911a7; -[IGListIndexPathResult newIndexPathForIdentifier:] */

void FUN_107e91188(long param_1)

{
  func_0x00010c0dff20(*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  return;
}



/* Entry: 107e911a8; end: 107e912c7; -[IGListIndexPathResult description] */

void FUN_107e911a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0674e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  uVar3 = param_1;
  func_0x00010bf6d000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  uVar4 = param_1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0d19c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c25d9e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110ec2058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107e912c8; end: 107e914b7; -[IGListIndexPathResult resultWithoutUpdates:] */

undefined * FUN_107e912c8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
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
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        uVar4 = param_3;
        func_0x00010bf4b900(param_3,param_2,uVar7);
        if ((uVar4 & 1) == 0) {
          func_0x00010befa120(puVar1,param_2,uVar7);
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126d80f0;
  _objc_alloc(PTR_PTR_1126d80f0);
  lVar2 = param_1;
  func_0x00010c0674e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf6d000(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf51e00(puVar1);
  lVar8 = param_1;
  func_0x00010c0d19c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01e320(puVar5,param_2,lVar2,lVar3,puVar6,lVar8,*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x10));
  _objc_release(lVar8);
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_3 + 0x18);
}



/* Entry: 107e914b8; end: 107e914bf; -[IGListIndexPathResult inserts] */

undefined8 FUN_107e914b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e914c0; end: 107e914c7; -[IGListIndexPathResult deletes] */

undefined8 FUN_107e914c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e914c8; end: 107e914cf; -[IGListIndexPathResult updates] */

undefined8 FUN_107e914c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107e914d0; end: 107e914d7; -[IGListIndexPathResult moves] */

undefined8 FUN_107e914d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107e914d8; end: 107e91537; -[IGListIndexPathResult .cxx_destruct] */

void FUN_107e914d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e91538; end: 107e9168b; -[IGListIndexSetResult initWithInserts:deletes:updates:moves:oldIndexMap:newIndexMap:] */

undefined1 *
FUN_107e91538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fb848;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e9168c; end: 107e916a7; -[IGListIndexSetResult hasChanges] */

bool FUN_107e9168c(long param_1)

{
  func_0x00010bf34de0();
  return 0 < param_1;
}



/* Entry: 107e916a8; end: 107e91763; -[IGListIndexSetResult changeCount] */

long FUN_107e916a8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00010c0674e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  lVar3 = param_1;
  func_0x00010bf6d000(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  lVar5 = param_1;
  func_0x00010c28d760(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf529e0();
  func_0x00010c0d19c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  return lVar4 + lVar2 + lVar6 + lVar7;
}



/* Entry: 107e91764; end: 107e91a83; -[IGListIndexSetResult resultForBatchUpdates] */

undefined * FUN_107e91764(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
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
  lVar1 = param_1;
  func_0x00010bf6d000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d3c80();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0674e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0d3c80();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c0d3c80();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0d19c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c0d3c80();
  lVar6 = lVar1;
  func_0x00010bf529e0();
  if (0 < lVar6) {
    uVar12 = lVar6 + 1;
    do {
      lVar6 = lVar1;
      func_0x00010c0dfd40(lVar1,param_2,uVar12 - 2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bfba9a0();
      lVar15 = lVar4;
      func_0x00010bf4b800(lVar4,param_2,lVar7);
      if ((int)lVar15 != 0) {
        func_0x00010c12d3c0(lVar5,param_2,uVar12 - 2);
        lVar7 = lVar6;
        func_0x00010bfba9a0(lVar6);
        func_0x00010c12cb40(lVar4,param_2,lVar7);
        lVar7 = lVar6;
        func_0x00010bfba9a0(lVar6);
        func_0x00010bef92c0(lVar2,param_2,lVar7);
        lVar7 = lVar6;
        func_0x00010c2719c0(lVar6);
        func_0x00010bef92c0(lVar3,param_2,lVar7);
      }
      _objc_release(lVar6);
      uVar12 = uVar12 - 1;
    } while (1 < uVar12);
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar7 = *(long *)(param_1 + 8);
  func_0x00010c0865c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar15 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(lVar7);
        }
        uVar16 = *(undefined8 *)(lStack_128 + lVar13 * 8);
        uVar8 = *(undefined8 *)(param_1 + 8);
        func_0x00010c0dff20(uVar8,param_2,uVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c067fc0();
        _objc_release(uVar8);
        lVar10 = lVar4;
        func_0x00010bf4b800(lVar4,param_2,uVar9);
        if ((int)lVar10 != 0) {
          func_0x00010bef92c0(lVar2,param_2,uVar9);
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c0dff20(uVar8,param_2,uVar16);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c067fc0();
          func_0x00010bef92c0(lVar3,param_2,uVar9);
          _objc_release(uVar8);
        }
        lVar13 = lVar13 + 1;
      } while (lVar6 != lVar13);
      lVar6 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar6 != 0);
  }
  _objc_release(lVar7);
  puVar11 = PTR_PTR_1126d80f8;
  _objc_alloc(PTR_PTR_1126d80f8);
  puVar14 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  _objc_opt_new(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
  func_0x00010c01e300(puVar11,param_2,lVar3,lVar2,puVar14,lVar5,*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar14);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  ___stack_chk_fail();
  puVar11 = *(undefined **)(lVar2 + 8);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar11 == (undefined *)0x0) {
    puVar14 = (undefined *)0x7fffffffffffffff;
  }
  else {
    puVar14 = puVar11;
    func_0x00010c067fc0(puVar11);
  }
  _objc_release(puVar11);
  return puVar14;
}



/* Entry: 107e91a84; end: 107e91ad3; -[IGListIndexSetResult oldIndexForIdentifier:] */

long FUN_107e91a84(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0x7fffffffffffffff;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c067fc0(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 107e91ad4; end: 107e91b23; -[IGListIndexSetResult newIndexForIdentifier:] */

long FUN_107e91ad4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0x7fffffffffffffff;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c067fc0(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 107e91b24; end: 107e91c43; -[IGListIndexSetResult description] */

void FUN_107e91b24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0674e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  uVar3 = param_1;
  func_0x00010bf6d000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  uVar4 = param_1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0d19c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c25d9e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110ec2058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107e91c44; end: 107e91c4b; -[IGListIndexSetResult inserts] */

undefined8 FUN_107e91c44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e91c4c; end: 107e91c53; -[IGListIndexSetResult deletes] */

undefined8 FUN_107e91c4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e91c54; end: 107e91c5b; -[IGListIndexSetResult updates] */

undefined8 FUN_107e91c54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107e91c5c; end: 107e91c63; -[IGListIndexSetResult moves] */

undefined8 FUN_107e91c5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107e91c64; end: 107e91cc3; -[IGListIndexSetResult .cxx_destruct] */

void FUN_107e91c64(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e91cc4; end: 107e91d0f; -[IGListMoveIndex initWithFrom:to:] */

void FUN_107e91cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb850;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 107e91d10; end: 107e91d1b; -[IGListMoveIndex hash] */

ulong FUN_107e91d10(long param_1)

{
  return *(ulong *)(param_1 + 0x10) ^ *(ulong *)(param_1 + 8);
}



/* Entry: 107e91d1c; end: 107e91dc3; -[IGListMoveIndex isEqual:] */

bool FUN_107e91d1c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    bVar1 = true;
  }
  else {
    puVar2 = PTR_PTR_1126d8100;
    _objc_opt_class(PTR_PTR_1126d8100);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar3 & 1) == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = param_1;
      func_0x00010bfba9a0();
      uVar4 = param_3;
      func_0x00010bfba9a0();
      func_0x00010c2719c0(param_1);
      uVar5 = param_3;
      func_0x00010c2719c0(param_3);
      bVar1 = uVar3 == uVar4 && param_1 == uVar5;
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107e91dc4; end: 107e91dff; -[IGListMoveIndex compare:] */

ulong FUN_107e91dc4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  func_0x00010bfba9a0();
  func_0x00010bfba9a0();
  uVar1 = (ulong)(param_3 < param_1);
  if (param_1 < param_3) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 107e91e00; end: 107e91e8b; -[IGListMoveIndex description] */

void FUN_107e91e00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfba9a0();
  func_0x00010c2719c0();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec2078);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107e91e8c; end: 107e91e93; -[IGListMoveIndex from] */

undefined8 FUN_107e91e8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e91e94; end: 107e91e9b; -[IGListMoveIndex to] */

undefined8 FUN_107e91e94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e91e9c; end: 107e91f3f; -[IGListMoveIndexPath initWithFrom:to:] */

undefined1 *
FUN_107e91e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb858;
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



/* Entry: 107e91f40; end: 107e91f73; -[IGListMoveIndexPath hash] */

ulong FUN_107e91f40(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfde980(uVar1);
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010bfde980(uVar2);
  return uVar2 ^ uVar1;
}



/* Entry: 107e91f74; end: 107e92083; -[IGListMoveIndexPath isEqual:] */

ulong FUN_107e91f74(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    uVar5 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126d8108;
    _objc_opt_class(PTR_PTR_1126d8108);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar2 = param_1;
      func_0x00010bfba9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010bfba9a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2719c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c2719c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c071ae0();
      if ((int)uVar5 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = param_1;
        func_0x00010c071ae0(param_1);
      }
      _objc_release(uVar4);
      _objc_release(param_1);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 107e92084; end: 107e92107; -[IGListMoveIndexPath compare:] */

undefined8 FUN_107e92084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bfba9a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfba9a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010bf433a0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107e92108; end: 107e921bf; -[IGListMoveIndexPath description] */

void FUN_107e92108(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfba9a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2719c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110ec2098);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107e921c0; end: 107e921c7; -[IGListMoveIndexPath from] */

undefined8 FUN_107e921c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e921c8; end: 107e921cf; -[IGListMoveIndexPath to] */

undefined8 FUN_107e921c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e921d0; end: 107e921ff; -[IGListMoveIndexPath .cxx_destruct] */

void FUN_107e921d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e92200; end: 107e9220f;  */

void FUN_107e92200(void)

{
  return;
}



/* Entry: 107e92210; end: 107e9226b; -[IGListAdapter dealloc] */

void FUN_107e92210(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c156300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126fb860;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107e9226c; end: 107e92443; -[IGListAdapter initWithUpdater:viewController:workingRangeSize:] */

undefined1 *
FUN_107e9226c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126fb860;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e01a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSPointerFunctions_1126d8110;
    func_0x00010c102e20(PTR__OBJC_CLASS___NSPointerFunctions_1126d8110);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    _objc_alloc(PTR__OBJC_CLASS___NSMapTable_1126b4428);
    func_0x00010c020ec0();
    puVar5 = PTR_PTR_1126d8118;
    _objc_alloc();
    func_0x00010c028740();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar5;
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126d8120;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined **)((long)puVar1 + 0x88) = puVar5;
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126d8128;
    _objc_alloc();
    func_0x00010c063520();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined **)((long)puVar1 + 0x90) = puVar5;
    _objc_release(uVar6);
    puVar5 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar5;
    _objc_release(uVar6);
    puVar5 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c0ba140();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar5;
    _objc_release(uVar6);
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_3;
    _objc_release(uVar6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_4);
    func_0x00010c277980(PTR_PTR_1126d8130);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e92444; end: 107e9244b; -[IGListAdapter initWithUpdater:viewController:] */

void FUN_107e92444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c059910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUpdater_viewController_w_1125f4050,param_3,param_4,0);
  return;
}



/* Entry: 107e9244c; end: 107e92463; -[IGListAdapter collectionView] */

void FUN_107e9244c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e92464; end: 107e926c7; -[IGListAdapter setCollectionView:] */

void FUN_107e92464(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  if (lVar1 == param_3) {
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == param_1) goto LAB_107e926a8;
  }
  else {
    _objc_release(lVar1);
  }
  if (puRam0000000113728228 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c2a2c00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puRam0000000113728228;
    puRam0000000113728228 = puVar4;
    _objc_release(puVar5);
  }
  puVar5 = puRam0000000113728228;
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12d3e0(puVar5,param_2,lVar1);
  _objc_release(lVar1);
  puVar5 = puRam0000000113728228;
  func_0x00010c0dff20(puRam0000000113728228,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e6a0();
  _objc_release(puVar5);
  func_0x00010c1d0560(puRam0000000113728228,param_2,param_1,param_3);
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined **)(param_1 + 0xb0) = puVar5;
  _objc_release(uVar6);
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined **)(param_1 + 0xb8) = puVar5;
  _objc_release(uVar6);
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined **)(param_1 + 0xc0) = puVar5;
  _objc_release(uVar6);
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + 200);
  *(undefined **)(param_1 + 200) = puVar5;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107e926c8;
  puStack_58 = &UNK_110841f80;
  lStack_50 = param_1;
  _objc_retain(param_3);
  lStack_48 = param_3;
  func_0x00010c0f86a0(uVar6,param_2,&puStack_70);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1e0700();
  _objc_release(lVar1);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe6500();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lStack_48);
LAB_107e926a8:
  _objc_release(param_3);
  return;
}



/* Entry: 107e926c8; end: 107e9277b;  */

void FUN_107e926c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == lVar3) {
    lVar1 = *(long *)(param_1 + 0x20) + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c189840();
    _objc_release(lVar1);
  }
  _objc_storeWeak(*(long *)(param_1 + 0x20) + 8,*(undefined8 *)(param_1 + 0x28));
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c189840();
  _objc_release(lVar1);
  func_0x00010bed56a0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bedc4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateObjects_112594ae0);
  return;
}



/* Entry: 107e9277c; end: 107e9289b; -[IGListAdapter setDataSource:] */

void FUN_107e9277c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != param_3) {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x107e92828;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f86a0(uVar2,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107e9289c; end: 107e928fb; -[IGListAdapter setCollectionViewDelegate:] */

void FUN_107e9289c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != param_3) {
    _objc_storeWeak(param_1 + 0x50,param_3);
    func_0x00010bdf20e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e928fc; end: 107e9295b; -[IGListAdapter setScrollViewDelegate:] */

void FUN_107e928fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != param_3) {
    _objc_storeWeak(param_1 + 0x58,param_3);
    func_0x00010bdf20e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e9295c; end: 107e929f7; -[IGListAdapter _updateObjects] */

void FUN_107e9295c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0e0360();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_107e929f8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010bedc500(param_1,param_2,lVar3,lVar1);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107e929f8; end: 107e92ba3;  */

void FUN_107e929f8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c25de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_1);
    lVar3 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        lVar7 = *(long *)(lVar8 * 8);
        func_0x00010bf7ecc0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 != 0 && puVar4 == (undefined *)0x0) {
          func_0x00010c1d0560(puVar2);
          func_0x00010befa120(puVar6);
        }
        _objc_release(puVar4);
        _objc_release(lVar7);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c18b5e0();
  _objc_release(lVar5);
  puVar6 = PTR_PTR_1126d8138;
  _objc_alloc(PTR_PTR_1126d8138);
  lVar5 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar5);
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bfff9e0(puVar6);
  func_0x00010c18b6a0(param_1);
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bed56b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCollectionViewDelegate_112592f50);
  return;
}



/* Entry: 107e92ba4; end: 107e92c4b; -[IGListAdapter _createProxyAndUpdateCollectionViewDelegate] */

void FUN_107e92ba4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c18b5e0();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126d8138;
  _objc_alloc(PTR_PTR_1126d8138);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bfff9e0(puVar2);
  func_0x00010c18b6a0(param_1);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed56b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCollectionViewDelegate_112592f50);
  return;
}



/* Entry: 107e92c4c; end: 107e92ca7; -[IGListAdapter _updateCollectionViewDelegate] */

void FUN_107e92c4c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf6b100();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c18b5e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107e92ca8; end: 107e92f6b; -[IGListAdapter scrollToObject:supplementaryKinds:scrollDirection:scrollPosition:additionalOffset:animated:] */

void FUN_107e92ca8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c155d20(param_1,param_2,param_3);
  if (lVar1 != 0x7fffffffffffffff) {
    lVar2 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be67420(param_1,param_2,puVar3,param_4,param_5);
    func_0x00010bf20c00(lVar2);
    func_0x00010bf20c00(lVar2);
    func_0x00010bfe64e0(lVar2);
    func_0x00010bf4cdc0(lVar2);
    if (param_5 == 0) {
      lVar1 = lVar2;
      func_0x00010bf408e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf407a0();
      _objc_release(lVar1);
      func_0x00010bfb68e0(lVar2);
    }
    else if (param_5 == 1) {
      func_0x00010bf4d5e0(lVar2);
      func_0x00010bfb68e0(lVar2);
    }
    func_0x00010c182300(lVar2,param_2,param_7);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107e92f6c; end: 107e93023; -[IGListAdapter indexPathForFirstVisibleItem] */

void FUN_107e92f6c(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = param_3;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  dVar2 = param_1;
  dVar3 = param_2;
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf40120(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  _objc_release(uVar1);
  func_0x00010bf40120(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfed040(param_1 + dVar3,param_2 + dVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e93024; end: 107e93127; -[IGListAdapter offsetForFirstVisibleItemWithScrollDirection:] */

double FUN_107e93024(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double unaff_d9;
  
  lVar1 = param_3;
  func_0x00010bfecfc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    unaff_d9 = 0.0;
  }
  else {
    func_0x00010be67420(param_3,param_4,lVar1,0,param_5);
    lVar2 = param_3;
    if (param_5 == 0) {
      dVar3 = param_1;
      func_0x00010bf40120(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4c7c0();
      func_0x00010bf40120(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4cdc0();
      param_2 = dVar3 + param_2;
    }
    else {
      if (param_5 != 1) goto LAB_107e93108;
      dVar3 = param_1;
      func_0x00010bf40120(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4c7c0();
      func_0x00010bf40120(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4cdc0();
      param_2 = param_2 + dVar3;
    }
    unaff_d9 = param_2 - param_1;
    _objc_release(param_3);
    _objc_release(lVar2);
  }
LAB_107e93108:
  _objc_release(lVar1);
  return unaff_d9;
}


