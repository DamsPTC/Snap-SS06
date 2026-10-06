/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108efce8c; end: 108efcf23;  */

void FUN_108efce8c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_opt_new(PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0);
  func_0x00010c21e900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108efcf24; end: 108efd223; -[SCSearchContainerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efcf24(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ff330;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar1 = (long)_DAT_11277dbe4;
  uVar13 = param_3;
  uVar14 = param_4;
  func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar1));
  dVar2 = *(double *)(param_5 + _DAT_11277dbec);
  dVar3 = -dVar2;
  if (0.0 <= dVar2) {
    dVar3 = dVar2;
  }
  dVar4 = *(double *)(param_5 + _DAT_11277dbf0);
  dVar5 = *(double *)(param_5 + _DAT_11277dbf4);
  dVar2 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar6 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  dVar6 = dVar3 * 0.5 + dVar4 * -12.0 + dVar5 + dVar6;
  func_0x00010b816528(dVar2);
  dVar3 = param_1;
  uVar7 = param_2;
  uVar9 = param_3;
  uVar11 = param_4;
  FUN_108efd224(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + _DAT_11277dbfc));
  dVar4 = param_1;
  uVar8 = param_2;
  uVar10 = param_3;
  uVar12 = param_4;
  FUN_108efd224(*(undefined8 *)(param_5 + _DAT_11277dc04));
  func_0x00010c19f0e0(dVar2,dVar6,uVar13,uVar14,*(undefined8 *)(param_5 + lVar1));
  uVar13 = *(undefined8 *)PTR__CGPointZero_110347540;
  uVar14 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  func_0x00010b816428(uVar13,uVar14,uVar9,uVar11);
  lVar1 = (long)_DAT_11277dc08;
  func_0x00010c1739e0(*(undefined8 *)(param_5 + lVar1));
  dVar2 = dVar3;
  _CGRectGetMidX(dVar3,uVar7,uVar9,uVar11);
  _CGRectGetMidY(dVar3,uVar7,uVar9,uVar11);
  func_0x00010c17a6a0(dVar2 + *(double *)(param_5 + _DAT_11277dc0c),
                      dVar3 + ((double *)(param_5 + _DAT_11277dc0c))[1],
                      *(undefined8 *)(param_5 + lVar1));
  func_0x00010b816428(uVar13,uVar14,uVar10,uVar12);
  lVar1 = (long)_DAT_11277dc10;
  func_0x00010c1739e0(*(undefined8 *)(param_5 + lVar1));
  dVar3 = dVar4;
  _CGRectGetMidX(dVar4,uVar8,uVar10,uVar12);
  _CGRectGetMidY(dVar4,uVar8,uVar10,uVar12);
  func_0x00010c17a6a0(dVar3 + *(double *)(param_5 + _DAT_11277dc14),
                      dVar4 + ((double *)(param_5 + _DAT_11277dc14))[1],
                      *(undefined8 *)(param_5 + lVar1));
  uVar13 = *(undefined8 *)(param_5 + _DAT_11277dbdc);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_5 + _DAT_11277dbe0);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar13);
  return;
}



/* Entry: 108efd224; end: 108efd2f7;  */

double FUN_108efd224(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = 0.0;
  if (param_5 < 2) {
    if ((param_5 != 0) && (param_5 == 1)) goto LAB_108efd2a8;
  }
  else {
    if (param_5 == 2) goto LAB_108efd2a8;
    if (param_5 == 4) {
      dVar3 = 1.0;
      goto LAB_108efd2a8;
    }
    if (param_5 == 3) {
      dVar3 = -1.0;
      goto LAB_108efd2a8;
    }
  }
  dVar3 = *(double *)PTR__CGPointZero_110347540;
LAB_108efd2a8:
  dVar1 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  dVar2 = dVar1 * dVar3;
  func_0x00010b816218();
  func_0x00010b816218();
  func_0x00010b816218();
  func_0x00010b816218();
  return (double)(long)(dVar1 * dVar3 * dVar2) / dVar2;
}



/* Entry: 108efd2f8; end: 108efd443; -[SCSearchContainerView setBackgroundStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efd2f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(long *)(param_1 + _DAT_11277dc18) = param_3;
  if (param_3 == 1) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277dbdc);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277dbe0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
  }
  else {
    if (param_3 != 0) goto LAB_108efd430;
    lVar3 = (long)_DAT_11277dbdc;
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1);
      _objc_release(uVar2);
    }
    lVar3 = (long)_DAT_11277dbe0;
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) goto LAB_108efd430;
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1);
  }
  _objc_release(uVar2);
LAB_108efd430:
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108efd444; end: 108efd53b; -[SCSearchContainerView setLayoutInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efd444(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  pdVar1 = (double *)(param_5 + _DAT_11277dbe8);
  dVar7 = *pdVar1;
  dVar5 = pdVar1[2];
  dVar4 = pdVar1[3];
  dVar8 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
  dVar10 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  dVar9 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  dVar11 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  bVar2 = false;
  if ((pdVar1[1] == dVar10) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar8))) {
    bVar2 = dVar7 == dVar8;
  }
  bVar3 = false;
  if ((bVar2) && (bVar3 = false, !NAN(dVar4) && !NAN(dVar11))) {
    bVar3 = dVar4 == dVar11;
  }
  bVar2 = false;
  if ((bVar3) && (bVar2 = false, !NAN(dVar5) && !NAN(dVar9))) {
    bVar2 = dVar5 == dVar9;
  }
  dVar6 = pdVar1[1];
  if (bVar2) {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    pdVar1[2] = param_3;
    pdVar1[3] = param_4;
    dVar4 = param_4;
    dVar5 = param_3;
    dVar6 = param_2;
    dVar7 = param_1;
  }
  bVar2 = false;
  if ((param_2 == dVar10) && (bVar2 = false, !NAN(param_1) && !NAN(dVar8))) {
    bVar2 = param_1 == dVar8;
  }
  bVar3 = false;
  if ((bVar2) && (bVar3 = false, !NAN(param_4) && !NAN(dVar11))) {
    bVar3 = param_4 == dVar11;
  }
  bVar2 = false;
  if ((bVar3) && (bVar2 = false, !NAN(param_3) && !NAN(dVar9))) {
    bVar2 = param_3 == dVar9;
  }
  if (bVar2) {
    param_1 = dVar7;
    param_2 = dVar6;
    param_3 = dVar5;
    param_4 = dVar4;
  }
  pdVar1 = (double *)(param_5 + _DAT_11277dc1c);
  bVar2 = false;
  if ((param_2 == pdVar1[1]) && (bVar2 = false, !NAN(param_1) && !NAN(*pdVar1))) {
    bVar2 = param_1 == *pdVar1;
  }
  bVar3 = false;
  if ((bVar2) && (bVar3 = false, !NAN(param_4) && !NAN(pdVar1[3]))) {
    bVar3 = param_4 == pdVar1[3];
  }
  bVar2 = false;
  if ((bVar3) && (bVar2 = false, !NAN(param_3) && !NAN(pdVar1[2]))) {
    bVar2 = param_3 == pdVar1[2];
  }
  if (!bVar2) {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    pdVar1[2] = param_3;
    pdVar1[3] = param_4;
    dVar4 = 0.0;
    if (*(char *)(param_5 + _DAT_11277dc20) == '\0') {
      dVar4 = param_1;
    }
    func_0x00010c1b9b60(dVar4,*(undefined8 *)(param_5 + _DAT_11277dbe4));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 108efd53c; end: 108efd57b; -[SCSearchContainerView setNavigationBarTopInsetFixed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efd53c(long param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *(byte *)(param_1 + _DAT_11277dc20) = param_3;
  uVar2 = 0;
  if ((param_3 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277dc1c);
  }
  lVar1 = param_1 + _DAT_11277dc1c;
                    /* WARNING: Could not recover jumptable at 0x00010c1b9b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,*(undefined8 *)(lVar1 + 8),0,*(undefined8 *)(lVar1 + 0x18),
             *(undefined8 *)(param_1 + _DAT_11277dbe4),PTR_s_setLayoutInsets__11264c100);
  return;
}



/* Entry: 108efd57c; end: 108efd59b; -[SCSearchContainerView setTransitionTargetViewPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efd57c(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11277dbfc) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_11277dbfc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108efd59c; end: 108efd5bb; -[SCSearchContainerView setContentViewPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efd59c(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11277dc04) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_11277dc04) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108efd5bc; end: 108efd737; -[SCSearchContainerView replaceContentViewWithTransitionTargetView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efd5bc(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (((param_3 != 0) &&
      (lVar3 = (long)_DAT_11277dc10, func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3)),
      *(long *)(param_1 + lVar3) != 0)) && ((*(ulong *)(param_1 + _DAT_11277dc00) & 0xf) == 1)) {
    *(long *)(param_1 + _DAT_11277dc24) = *(long *)(param_1 + _DAT_11277dc24) + -1;
  }
  iVar1 = _DAT_11277dc24;
  lVar3 = (long)_DAT_11277dc08;
  if ((*(long *)(param_1 + lVar3) != 0) && ((*(ulong *)(param_1 + _DAT_11277dbf8) & 0xf) == 1)) {
    *(long *)(param_1 + _DAT_11277dc24) = *(long *)(param_1 + _DAT_11277dc24) + 1;
  }
  if (*(long *)(param_1 + iVar1) == 0) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_11277dbe4));
  }
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  lVar6 = (long)_DAT_11277dc10;
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar4;
  _objc_release(uVar2);
  lVar6 = *(long *)(param_1 + lVar6);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != param_1) {
    func_0x00010befbb60(param_1);
  }
  lVar5 = (long)_DAT_11277dbf8;
  *(undefined8 *)(param_1 + _DAT_11277dc00) = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + _DAT_11277dc04) = 0;
  lVar6 = (long)_DAT_11277dc14;
  uVar7 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  uVar4 = *(undefined8 *)PTR__CGPointZero_110347540;
  ((undefined8 *)(param_1 + lVar6))[1] = uVar7;
  *(undefined8 *)(param_1 + lVar6) = uVar4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + _DAT_11277dbfc) = 0;
  *(undefined8 *)(param_1 + lVar5) = 0;
  lVar3 = (long)_DAT_11277dc0c;
  ((undefined8 *)(param_1 + lVar3))[1] = uVar7;
  *(undefined8 *)(param_1 + lVar3) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108efd738; end: 108efd7c7; -[SCSearchContainerView cleanUpTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efd738(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + _DAT_11277dc04) = 0;
  lVar2 = (long)_DAT_11277dc14;
  uVar4 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  uVar3 = *(undefined8 *)PTR__CGPointZero_110347540;
  ((undefined8 *)(param_1 + lVar2))[1] = uVar4;
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  lVar2 = (long)_DAT_11277dc08;
  if (param_3 != 0) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  }
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_11277dbfc) = 0;
  *(undefined8 *)(param_1 + _DAT_11277dbf8) = 0;
  lVar2 = (long)_DAT_11277dc0c;
  ((undefined8 *)(param_1 + lVar2))[1] = uVar4;
  *(undefined8 *)(param_1 + lVar2) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108efd7c8; end: 108efd993; -[SCSearchContainerView setTransitionTargetView:position:navigationStyle:isAboveContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efd7c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  int param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  _objc_retain(param_3);
  plVar1 = (long *)(param_1 + _DAT_11277dc08);
  func_0x00010c12c960(*plVar1);
  _objc_retain(param_3);
  lVar3 = *plVar1;
  *plVar1 = param_3;
  _objc_release(lVar3);
  *(undefined8 *)(param_1 + _DAT_11277dbfc) = param_4;
  lVar3 = (long)_DAT_11277dbf8;
  *(ulong *)(param_1 + lVar3) = param_5;
  plVar2 = (long *)(param_1 + _DAT_11277dc10);
  if (*plVar2 == 0) {
    *(ulong *)(param_1 + _DAT_11277dc00) = param_5;
    uVar4 = *(ulong *)(param_1 + lVar3);
  }
  else {
    uVar4 = param_5;
    param_5 = *(ulong *)(param_1 + _DAT_11277dc00);
  }
  param_5 = param_5 & 0xf;
  uVar4 = uVar4 & 0xf;
  plVar5 = plVar1;
  if ((uVar4 == 1) && (param_5 == 1)) {
    plVar6 = (long *)(param_1 + _DAT_11277dbe4);
    func_0x00010c12c960(*plVar6);
    if (param_6 == 0) {
      plVar5 = plVar2;
      plVar2 = plVar1;
    }
    FUN_108efd994(param_1,*plVar2);
  }
  else if (param_5 == 1 || uVar4 != 1) {
    if ((uVar4 == 1) || (param_5 != 1)) {
      plVar5 = plVar2;
      plVar6 = plVar1;
      if (param_6 == 0) {
        plVar5 = plVar1;
        plVar6 = plVar2;
      }
    }
    else {
      plVar6 = (long *)(param_1 + _DAT_11277dbe4);
      func_0x00010c12c960(*plVar6);
      if (param_6 == 0) {
        FUN_108efd994(param_1,*plVar1);
        plVar5 = plVar2;
      }
      else {
        FUN_108efd994(param_1,*plVar2);
        plVar5 = plVar6;
        plVar6 = plVar1;
      }
    }
  }
  else {
    plVar6 = (long *)(param_1 + _DAT_11277dbe4);
    func_0x00010c12c960(*plVar6);
    if (param_6 == 0) {
      FUN_108efd994(param_1,*plVar1);
      plVar5 = plVar6;
      plVar6 = plVar2;
    }
    else {
      FUN_108efd994(param_1,*plVar2);
    }
  }
  FUN_108efd994(param_1,*plVar5);
  FUN_108efd994(param_1,*plVar6);
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108efd994; end: 108efda1b;  */

void FUN_108efd994(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == param_1) {
    func_0x00010bf21300(param_1);
  }
  else if (param_2 != 0) {
    func_0x00010c12c960(param_2);
    func_0x00010befbb60(param_1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108efda1c; end: 108efda3b; -[SCSearchContainerView setTargetViewPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efda1c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)(param_1 + _DAT_11277dbfc)) {
    return;
  }
  *(long *)(param_1 + _DAT_11277dbfc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108efda3c; end: 108efda5b; -[SCSearchContainerView setNavigationBarFixedOffsetY:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efda3c(double param_1,long param_2)

{
  if (param_1 == *(double *)(param_2 + _DAT_11277dbf4)) {
    return;
  }
  *(double *)(param_2 + _DAT_11277dbf4) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108efda5c; end: 108efda7b; -[SCSearchContainerView updatePercentOverscrolled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efda5c(double param_1,long param_2)

{
  if (param_1 == *(double *)(param_2 + _DAT_11277dbf0)) {
    return;
  }
  *(double *)(param_2 + _DAT_11277dbf0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108efda7c; end: 108efda8b; -[SCSearchContainerView navigationBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108efda7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dbe4);
}



/* Entry: 108efda8c; end: 108efdacb; -[SCSearchContainerView setNavigationBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efda8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277dbe4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108efdacc; end: 108efdadb; -[SCSearchContainerView blurView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108efdacc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dbdc);
}



/* Entry: 108efdadc; end: 108efdaeb; -[SCSearchContainerView blurOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108efdadc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dbe0);
}



/* Entry: 108efdaec; end: 108efdafb; -[SCSearchContainerView backgroundStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108efdaec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dc18);
}



/* Entry: 108efdafc; end: 108efdb13; -[SCSearchContainerView layoutInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108efdafc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dc1c);
}



/* Entry: 108efdb14; end: 108efdb23; -[SCSearchContainerView overscrollPercent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108efdb14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dbf0);
}



/* Entry: 108efdb24; end: 108efdb33; -[SCSearchContainerView setOverscrollPercent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efdb24(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277dbf0) = param_1;
  return;
}



/* Entry: 108efdb34; end: 108efdb43; -[SCSearchContainerView overscrollOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108efdb34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dbec);
}



/* Entry: 108efdb44; end: 108efdb53; -[SCSearchContainerView setOverscrollOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efdb44(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277dbec) = param_1;
  return;
}



/* Entry: 108efdb54; end: 108efdb67; -[SCSearchContainerView contentViewOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108efdb54(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277dc14);
}



/* Entry: 108efdb68; end: 108efdb7b; -[SCSearchContainerView setContentViewOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efdb68(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277dc14;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 108efdb7c; end: 108efdb8f; -[SCSearchContainerView targetViewOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108efdb7c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277dc0c);
}



/* Entry: 108efdb90; end: 108efdba3; -[SCSearchContainerView setTargetViewOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efdb90(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277dc0c;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 108efdba4; end: 108efdbb3; -[SCSearchContainerView navigationBarFixedOffsetY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108efdba4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dbf4);
}



/* Entry: 108efdbb4; end: 108efdbc3; -[SCSearchContainerView navigationBarTopInsetFixed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108efdbb4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277dc20);
}



/* Entry: 108efdbc4; end: 108efdbd3; -[SCSearchContainerView contentViewPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108efdbc4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dc04);
}



/* Entry: 108efdbd4; end: 108efdbe3; -[SCSearchContainerView targetViewPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108efdbd4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dbfc);
}



/* Entry: 108efdbe4; end: 108efdc53; -[SCSearchContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efdbe4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277dbe0,0);
  _objc_storeStrong(param_1 + _DAT_11277dbdc,0);
  _objc_storeStrong(param_1 + _DAT_11277dbe4,0);
  _objc_storeStrong(param_1 + _DAT_11277dc08,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277dc10,0);
  return;
}



/* Entry: 108efdc54; end: 108efdddf; -[SCSearchNavigationBar initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108efdc54(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  puStack_48 = PTR_PTR_1126ff338;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126d5000;
    _objc_alloc();
    ppuVar4 = &PTR____CFConstantStringClassReference_110de3ab8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110de3ab8,
                        &PTR____CFConstantStringClassReference_110f03df8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0368c0();
    lVar6 = (long)_DAT_11277dc28;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined **)((long)puVar2 + lVar6) = puVar3;
    _objc_release(uVar5);
    _objc_release(ppuVar4);
    func_0x00010c1dca00(0x3fd999999999999a,*(undefined8 *)((long)puVar2 + lVar6));
    uVar5 = *(undefined8 *)((long)puVar2 + lVar6);
    func_0x00010c153520(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar5);
    func_0x00010c213320(*(undefined8 *)((long)puVar2 + lVar6));
    func_0x00010befbb60(puVar2);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11277dc2c);
    uVar7 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    uVar5 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    uVar9 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    uVar8 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    puVar1[1] = uVar7;
    *puVar1 = uVar5;
    puVar1[3] = uVar9;
    puVar1[2] = uVar8;
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11277dc30);
    puVar1[1] = uVar7;
    *puVar1 = uVar5;
    puVar1[3] = uVar9;
    puVar1[2] = uVar8;
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277dc34);
    *(undefined **)((long)puVar2 + (long)_DAT_11277dc34) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277dc38);
    *(undefined **)((long)puVar2 + (long)_DAT_11277dc38) = puVar3;
    _objc_release(uVar5);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 108efdde0; end: 108efde17;  */

void FUN_108efdde0(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108efde18; end: 108efe407; -[SCSearchNavigationBar layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108efde18(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  double *pdVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  long lStack_138;
  undefined *puStack_130;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = PTR_PTR_1126ff338;
  lStack_138 = param_5;
  _objc_msgSendSuper2(&lStack_138,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar7 = (long)_DAT_11277dc40;
  pdVar1 = (double *)(param_5 + _DAT_11277dc3c);
  dVar16 = param_1 + 8.0 + pdVar1[1];
  dVar17 = *pdVar1 + param_2 + 0.0;
  dVar18 = (param_3 + -8.0) - (pdVar1[1] + pdVar1[3]);
  param_4 = param_4 - (*pdVar1 + pdVar1[2]);
  uVar3 = *(ulong *)(param_5 + lVar7);
  func_0x00010c074c20();
  if ((uVar3 & 1) == 0) {
    dVar19 = dVar18;
    dVar20 = param_4;
    func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar7));
  }
  else {
    dVar19 = *(double *)PTR__CGSizeZero_110347620;
    dVar20 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  dVar21 = 7.5;
  if (dVar19 <= 0.0) {
    dVar21 = 0.0;
  }
  dVar14 = dVar16;
  _CGRectGetMinX(dVar16,dVar17,dVar18,param_4);
  pdVar1 = (double *)(param_5 + _DAT_11277dc44);
  dVar22 = dVar21 + dVar14 + *pdVar1;
  dVar21 = dVar16;
  _CGRectGetMinY(dVar16,dVar17,dVar18,param_4);
  dVar14 = dVar16;
  _CGRectGetHeight(dVar16,dVar17,dVar18,param_4);
  dVar14 = pdVar1[1] + dVar21 + (dVar14 - dVar20) * 0.5;
  func_0x00010b816528();
  dVar21 = dVar16;
  _CGRectGetMaxX(dVar16,dVar17,dVar18,param_4);
  lVar9 = (long)_DAT_11277dc48;
  lVar4 = *(long *)(param_5 + lVar9);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    dVar21 = dVar21 + -10.0;
  }
  lVar10 = *(long *)(param_5 + lVar9);
  _objc_retain(lVar10);
  lVar4 = lVar10;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar10);
      }
      uVar5 = *(undefined8 *)(lVar11 * 8);
      func_0x00010bf62b60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      dVar12 = dVar18;
      dVar15 = param_4;
      func_0x00010c23d5a0(dVar18,param_4);
      dVar21 = dVar21 - dVar12;
      dVar13 = dVar16;
      _CGRectGetMinY(dVar16,dVar17,dVar18,param_4);
      dVar23 = dVar16;
      _CGRectGetHeight(dVar16,dVar17,dVar18,param_4);
      func_0x00010b816528(dVar21,pdVar1[1] + dVar13 + (dVar23 - dVar15) * 0.5,dVar12,dVar15);
      func_0x00010b816430();
      func_0x00010c17a6a0(uVar5);
      _objc_release(uVar5);
      lVar11 = lVar11 + 1;
    } while (lVar4 != lVar11);
    lVar4 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  lVar4 = (long)_DAT_11277dc28;
  dVar13 = param_4;
  func_0x00010c23d5a0(dVar18,*(undefined8 *)(param_5 + lVar4));
  pdVar2 = (double *)(param_5 + _DAT_11277dc4c);
  dVar23 = *pdVar2;
  dVar12 = dVar22;
  _CGRectGetMaxX(dVar22,dVar14,dVar19,dVar20);
  dVar23 = dVar23 + dVar12;
  dVar12 = dVar16;
  _CGRectGetMinY(dVar16,dVar17,dVar18,param_4);
  _CGRectGetHeight(dVar16,dVar17,dVar18,param_4);
  dVar17 = pdVar1[1] + pdVar2[1] + dVar12 + (dVar16 - dVar13) * 0.5;
  dVar16 = dVar22;
  _CGRectGetMaxX(dVar22,dVar14,dVar19,dVar20);
  dVar16 = (dVar21 - dVar16) - *pdVar2;
  func_0x00010b816528(dVar23,dVar17,dVar16);
  pdVar1 = (double *)(param_5 + _DAT_11277dc30);
  func_0x00010c19f0e0(dVar23 + pdVar1[1],dVar17 + *pdVar1,dVar16 - (pdVar1[1] + pdVar1[3]),
                      dVar13 - (*pdVar1 + pdVar1[2]),*(undefined8 *)(param_5 + lVar4));
  func_0x00010b816430(dVar22,dVar14,dVar19,dVar20);
  func_0x00010c17a6a0(*(undefined8 *)(param_5 + lVar7));
  ppuVar6 = &PTR____CFConstantStringClassReference_110e1b618;
  func_0x00010c160fc0(*(undefined8 *)(param_5 + lVar7));
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b618,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_5 + lVar7));
  _objc_release(ppuVar6);
  lVar7 = *(long *)(param_5 + _DAT_11277dc50);
  if (lVar7 != 0) {
    pdVar1 = (double *)(param_5 + _DAT_11277dc2c);
    dVar22 = dVar23 + pdVar1[1];
    dVar14 = dVar17 + *pdVar1;
    func_0x00010c19f0e0(dVar22,dVar14,dVar16 - (pdVar1[1] + pdVar1[3]),
                        dVar13 - (*pdVar1 + pdVar1[2]));
  }
  lVar4 = (long)_DAT_11277dc54;
  uVar3 = *(ulong *)(param_5 + lVar4);
  uVar8 = (uint)uVar3;
  if ((uVar3 & 1) != 0) {
    func_0x00010bf20c00(param_5);
    _CGRectGetMinX();
    dVar16 = dVar22;
    func_0x00010bf20c00(param_5);
    _CGRectGetMinY();
    dVar14 = dVar16 + -1.0;
    func_0x00010bf20c00(param_5);
    _CGRectGetWidth();
    uVar5 = 0x3ff0000000000000;
    func_0x00010b816528(dVar22,dVar14,dVar16,0x3ff0000000000000);
    lVar7 = *(long *)(param_5 + _DAT_11277dc34);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar22,dVar14,dVar16,uVar5);
    _objc_release();
    uVar8 = (uint)*(undefined8 *)(param_5 + lVar4);
  }
  if ((uVar8 >> 1 & 1) != 0) {
    func_0x00010bf20c00(param_5);
    _CGRectGetMinX();
    dVar16 = dVar22;
    func_0x00010bf20c00(param_5);
    _CGRectGetMaxY();
    dVar14 = dVar16 + -1.0;
    func_0x00010bf20c00(param_5);
    _CGRectGetWidth();
    uVar5 = 0x3ff0000000000000;
    func_0x00010b816528(dVar22,dVar14,dVar16,0x3ff0000000000000);
    lVar7 = *(long *)(param_5 + _DAT_11277dc38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar22,dVar14,dVar16,uVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    auVar24._8_8_ = dVar14;
    auVar24._0_8_ = dVar22;
    return auVar24;
  }
  ___stack_chk_fail();
  dVar17 = *(double *)(lVar7 + _DAT_11277dc3c);
  dVar16 = dVar22;
  func_0x00010c0d6560(*(undefined8 *)(lVar7 + _DAT_11277dc58));
  auVar25._8_8_ = dVar17 + dVar16;
  auVar25._0_8_ = dVar22;
  return auVar25;
}



/* Entry: 108efe408; end: 108efe447; -[SCSearchNavigationBar sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108efe408(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  dVar2 = *(double *)(param_2 + _DAT_11277dc3c);
  dVar1 = param_1;
  func_0x00010c0d6560(*(undefined8 *)(param_2 + _DAT_11277dc58));
  auVar3._8_8_ = dVar2 + dVar1;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 108efe448; end: 108efe4bb; -[SCSearchNavigationBar setNavigationItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efe448(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277dc58;
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bee4a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateWithNavigationItem_112596c30);
  return;
}



/* Entry: 108efe4bc; end: 108efe4e3; -[SCSearchNavigationBar setSearchViewOriginOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efe4bc(double param_1,double param_2,long param_3)

{
  double *pdVar1;
  bool bVar2;
  
  pdVar1 = (double *)(param_3 + _DAT_11277dc4c);
  bVar2 = false;
  if ((*pdVar1 == param_1) && (bVar2 = false, !NAN(pdVar1[1]) && !NAN(param_2))) {
    bVar2 = pdVar1[1] == param_2;
  }
  if (!bVar2) {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 108efe4e4; end: 108efe4e7; -[SCSearchNavigationBar searchNavigationItemDidUpdate:] */

void FUN_108efe4e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee4a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateWithNavigationItem_112596c30);
  return;
}



/* Entry: 108efe4e8; end: 108efeabf; -[SCSearchNavigationBar _updateWithNavigationItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efe4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 in_b0;
  undefined1 uVar17;
  undefined1 in_register_00005001;
  undefined1 uVar18;
  undefined1 in_register_00005002;
  undefined1 uVar19;
  undefined1 in_register_00005003;
  undefined1 uVar20;
  undefined1 in_register_00005004;
  undefined1 uVar21;
  undefined1 in_register_00005005;
  undefined1 uVar22;
  undefined1 in_register_00005006;
  undefined1 uVar23;
  undefined1 in_register_00005007;
  undefined1 uVar24;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_11277dc58;
  uVar2 = *(undefined8 *)(param_4 + lVar15);
  func_0x00010c153dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_11277dc28;
  func_0x00010c1dcb60(*(undefined8 *)(param_4 + lVar12));
  _objc_release(uVar2);
  puVar3 = *(undefined **)(param_4 + lVar15);
  func_0x00010c153a80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar3);
    puVar4 = puVar3;
  }
  _objc_release(puVar3);
  lVar5 = *(long *)(param_4 + lVar15);
  func_0x00010c153c20();
  puVar3 = puVar4;
  FUN_108efeac0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_4 + lVar12);
  func_0x00010c153520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar2);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_4 + lVar15);
  func_0x00010c153a40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f84c0(*(undefined8 *)(param_4 + lVar12));
  _objc_release(uVar2);
  func_0x00010c153640(*(undefined8 *)(param_4 + lVar15));
  func_0x00010c213320(*(undefined8 *)(param_4 + lVar12));
  uVar2 = *(undefined8 *)(param_4 + lVar15);
  func_0x00010c153b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8560(*(undefined8 *)(param_4 + lVar12));
  _objc_release(uVar2);
  func_0x00010c153c20();
  func_0x00010c20eaa0(*(undefined8 *)(param_4 + lVar12));
  uVar2 = *(undefined8 *)(param_4 + lVar15);
  func_0x00010c1545a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213380(*(undefined8 *)(param_4 + lVar12));
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_4 + lVar15);
  func_0x00010c140de0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee2a0(*(undefined8 *)(param_4 + lVar12));
  _objc_release(uVar2);
  lVar10 = (long)_DAT_11277dc44;
  func_0x00010c0d6540(*(undefined8 *)(param_4 + lVar15));
  *(undefined8 *)(param_4 + lVar10) =
       CONCAT17(in_register_00005007,
                CONCAT16(in_register_00005006,
                         CONCAT15(in_register_00005005,
                                  CONCAT14(in_register_00005004,
                                           CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
                                 )));
  ((undefined8 *)(param_4 + lVar10))[1] = param_1;
  lVar10 = *(long *)(param_4 + lVar15);
  func_0x00010bf138a0();
  if (lVar10 == 0) {
    func_0x00010be394c0(param_4);
    lVar12 = param_4;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar12;
    func_0x00010c153c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    lVar12 = lVar10;
    func_0x00010c0d6820(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    lVar13 = (long)_DAT_11277dc40;
    func_0x00010c1a7f60(*(undefined8 *)(param_4 + lVar13));
    _objc_release(lVar12);
    _objc_release(lVar10);
  }
  else if (lVar10 == 1) {
    lVar13 = (long)_DAT_11277dc40;
    func_0x00010c1a7f60(*(undefined8 *)(param_4 + lVar13));
  }
  else if (lVar10 == 2) {
    func_0x00010be394c0(param_4);
    lVar13 = (long)_DAT_11277dc40;
    func_0x00010c1a7f60(*(undefined8 *)(param_4 + lVar13));
    func_0x00010c201920(*(undefined8 *)(param_4 + lVar12));
  }
  else {
    lVar13 = (long)_DAT_11277dc40;
  }
  uVar6 = *(ulong *)(param_4 + lVar13);
  if ((uVar6 != 0) && (func_0x00010c074c20(), (uVar6 & 1) == 0)) {
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_4 + lVar15);
    func_0x00010c153c20();
    puVar7 = puVar3;
    FUN_108efeac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_4 + lVar13));
    _objc_release(puVar7);
    _objc_release(puVar3);
  }
  lVar14 = (long)_DAT_11277dc48;
  lVar13 = *(long *)(param_4 + lVar14);
  _objc_retain(lVar13);
  lVar12 = lVar13;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar13);
      }
      uVar2 = *(undefined8 *)(lVar16 * 8);
      func_0x00010bf62b60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(uVar2);
      lVar16 = lVar16 + 1;
    } while (lVar12 != lVar16);
    lVar12 = lVar13;
    func_0x00010bf52a60();
  }
  _objc_release(lVar13);
  uVar8 = *(undefined8 *)(param_4 + lVar15);
  func_0x00010c1408e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bf51e00();
  uVar11 = *(undefined8 *)(param_4 + lVar14);
  *(undefined8 *)(param_4 + lVar14) = uVar2;
  _objc_release(uVar11);
  _objc_release(uVar8);
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  lVar13 = *(long *)(param_4 + lVar14);
  _objc_retain(lVar13);
  lVar12 = lVar13;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar13);
      }
      uVar8 = *(undefined8 *)(lVar14 * 8);
      uVar2 = uVar8;
      func_0x00010bf62b60(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_4);
      _objc_release(uVar2);
      func_0x00010bf62b60(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d620();
      _objc_release(uVar8);
      lVar14 = lVar14 + 1;
    } while (lVar12 != lVar14);
    lVar12 = lVar13;
    func_0x00010bf52a60();
  }
  _objc_release(lVar13);
  lVar12 = *(long *)(param_4 + lVar15);
  func_0x00010c1533e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar12 != 0) {
    lVar12 = (long)_DAT_11277dc50;
    func_0x00010c12c960(*(undefined8 *)(param_4 + lVar12));
    uVar2 = *(undefined8 *)(param_4 + lVar15);
    func_0x00010c1533e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_4 + lVar12);
    *(undefined8 *)(param_4 + lVar12) = uVar2;
    _objc_release(uVar8);
    func_0x00010c066fa0(param_4);
    puVar1 = (undefined8 *)(param_4 + _DAT_11277dc2c);
    func_0x00010c1533c0(*(undefined8 *)(param_4 + lVar15));
    *puVar1 = CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(uVar20,
                                                  CONCAT12(uVar19,CONCAT11(uVar18,uVar17)))))));
    puVar1[1] = param_1;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1 = (undefined8 *)(param_4 + _DAT_11277dc30);
    func_0x00010c154800(*(undefined8 *)(param_4 + lVar15));
    *puVar1 = CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(uVar20,
                                                  CONCAT12(uVar19,CONCAT11(uVar18,uVar17)))))));
    puVar1[1] = param_1;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
  }
  func_0x00010c1cbe20(param_4);
  puVar3 = puVar4;
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  if (lVar5 == 0) {
    _objc_retain(puVar3);
    puVar4 = puVar3;
  }
  else if (lVar5 == 1) {
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c14d100(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108efeac0; end: 108efeb4f;  */

void FUN_108efeac0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  _objc_retain();
  if (param_2 == 0) {
    _objc_retain(param_1);
    unaff_x20 = param_1;
  }
  else if (param_2 == 1) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = param_1;
    func_0x00010c14d100(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 108efeb50; end: 108efecdf; -[SCSearchNavigationBar _initBackButtonIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efeb50(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = (long)_DAT_11277dc40;
  if (*(long *)(param_3 + lVar4) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_4,
                        &PTR____CFConstantStringClassReference_110e78318);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b6138;
    _objc_alloc();
    func_0x00010c23d0a0(puVar1);
    dVar5 = *(double *)PTR__CGPointZero_110347540;
    func_0x00010b816428(dVar5,*(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_1,param_2);
    func_0x00010c013de0();
    func_0x00010c1a9f00();
    func_0x00010befbd40(puVar2,param_4,param_3,PTR_s_didClickBackButton_1125ba808);
    func_0x00010c21d680(puVar2,param_4,1);
    func_0x00010bf20c00(puVar2);
    _CGRectGetWidth();
    dVar5 = dVar5 + -44.0;
    if (dVar5 < 0.0) {
      func_0x00010c218d60(dVar5,dVar5,dVar5,dVar5,puVar2);
    }
    if (*(long *)(param_3 + _DAT_11277dc5c) == 0) {
      uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    }
    else if (*(long *)(param_3 + _DAT_11277dc5c) == 1) {
      _CGAffineTransformMakeRotation(&uStack_70,0xbff921fb54442d18);
    }
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    func_0x00010c219960(puVar2,param_4,&uStack_a0);
    uVar3 = *(undefined8 *)(param_3 + lVar4);
    *(undefined **)(param_3 + lVar4) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar3);
    func_0x00010befbb60(param_3,param_4,*(undefined8 *)(param_3 + lVar4));
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 108efece0; end: 108efed8b; -[SCSearchNavigationBar setBackButtonDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efece0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  
  lVar1 = (long)_DAT_11277dc5c;
  if (*(long *)(param_1 + lVar1) != param_3) {
    if (param_3 == 0) {
      uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    }
    else if (param_3 == 1) {
      _CGAffineTransformMakeRotation(&uStack_60,0xbff921fb54442d18);
    }
    lVar2 = (long)_DAT_11277dc40;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    func_0x00010c219960(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_90);
    func_0x00010c1cbd40(*(undefined8 *)(param_1 + lVar2));
    *(long *)(param_1 + lVar1) = param_3;
  }
  return;
}



/* Entry: 108efed8c; end: 108efee5b; -[SCSearchNavigationBar didClickBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efed8c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277dc58;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010bf138a0();
  if (lVar1 == 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c153c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010bf84b20(lVar1,param_2,1,0);
LAB_108efee48:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  if (lVar1 == 2) {
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010bf13880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = *(long *)(param_1 + lVar2);
      func_0x00010bf13880();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))();
      goto LAB_108efee48;
    }
  }
  return;
}



/* Entry: 108efee5c; end: 108efef17; -[SCSearchNavigationBar _initTopSeparatorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efee5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277dc34;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108efef18; end: 108efefd3; -[SCSearchNavigationBar _initBottomSeparatorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efef18(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277dc38;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108efefd4; end: 108eff0bf; -[SCSearchNavigationBar setSeparatorMask:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108efefd4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277dc54;
  if (*(ulong *)(param_1 + lVar2) != param_3) {
    *(ulong *)(param_1 + lVar2) = param_3;
    if ((param_3 & 1) != 0) {
      func_0x00010be3a920(param_1);
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277dc34);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    if ((*(byte *)(param_1 + lVar2) >> 1 & 1) != 0) {
      func_0x00010be39620(param_1);
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277dc38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 108eff0c0; end: 108eff187; -[SCSearchNavigationBar setSeparatorColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eff0c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277dc60;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277dc34);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277dc38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108eff188; end: 108eff197; -[SCSearchNavigationBar separatorMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108eff188(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dc54);
}



/* Entry: 108eff198; end: 108eff1a7; -[SCSearchNavigationBar separatorColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108eff198(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dc60);
}



/* Entry: 108eff1a8; end: 108eff1b7; -[SCSearchNavigationBar searchView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108eff1a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dc28);
}



/* Entry: 108eff1b8; end: 108eff1f7; -[SCSearchNavigationBar setSearchView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eff1b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277dc28;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108eff1f8; end: 108eff207; -[SCSearchNavigationBar rightBarButtonItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108eff1f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dc48);
}



/* Entry: 108eff208; end: 108eff217; -[SCSearchNavigationBar navigationItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108eff208(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dc58);
}



/* Entry: 108eff218; end: 108eff22f; -[SCSearchNavigationBar layoutInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108eff218(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dc3c);
}



/* Entry: 108eff230; end: 108eff247; -[SCSearchNavigationBar setLayoutInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eff230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11277dc3c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 108eff248; end: 108eff257; -[SCSearchNavigationBar backButtonDirection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108eff248(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dc5c);
}



/* Entry: 108eff258; end: 108eff26b; -[SCSearchNavigationBar searchViewOriginOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108eff258(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277dc4c);
}



/* Entry: 108eff26c; end: 108eff28b; -[SCSearchNavigationBar delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eff26c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277dc64);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108eff28c; end: 108eff29f; -[SCSearchNavigationBar setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eff28c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277dc64,param_3);
  return;
}



/* Entry: 108eff2a0; end: 108eff34b; -[SCSearchNavigationBar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eff2a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277dc64);
  _objc_storeStrong(param_1 + _DAT_11277dc58,0);
  _objc_storeStrong(param_1 + _DAT_11277dc48,0);
  _objc_storeStrong(param_1 + _DAT_11277dc28,0);
  _objc_storeStrong(param_1 + _DAT_11277dc60,0);
  _objc_storeStrong(param_1 + _DAT_11277dc38,0);
  _objc_storeStrong(param_1 + _DAT_11277dc34,0);
  _objc_storeStrong(param_1 + _DAT_11277dc50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277dc40,0);
  return;
}



/* Entry: 108eff34c; end: 108eff3bf; -[SCSearchNavigationBarButtonItem initWithCustomView:] */

undefined1 * FUN_108eff34c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff340;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108eff3c0; end: 108eff3c7; -[SCSearchNavigationBarButtonItem customView] */

undefined8 FUN_108eff3c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108eff3c8; end: 108eff3f7; -[SCSearchNavigationBarButtonItem setCustomView:] */

void FUN_108eff3c8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108eff3f8; end: 108eff403; -[SCSearchNavigationBarButtonItem .cxx_destruct] */

void FUN_108eff3f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108eff404; end: 108eff467; -[SCSearchNavigationCoordinator init] */

undefined1 * FUN_108eff404(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff348;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108eff468; end: 108eff53b; -[SCSearchNavigationCoordinator presentWithNavigationInfo:animated:completionBlock:] */

void FUN_108eff468(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0d6c60();
  if ((uVar1 & 0xc00) == 0x400) {
    lVar2 = param_1 + 0x38;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c10f100();
      goto LAB_108eff514;
    }
  }
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c089820(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becf020(param_1,param_2,lVar2,param_3,1,param_4,param_5);
LAB_108eff514:
  _objc_release(lVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108eff53c; end: 108eff5f7; -[SCSearchNavigationCoordinator dismissViewControllerAnimated:completionBlock:] */

void FUN_108eff53c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (uVar2 < 2) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 8);
    lVar3 = lVar4;
    func_0x00010bf529e0(lVar4);
    func_0x00010c0dfd40(lVar4,param_2,lVar3 + -2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010becf020(param_1,param_2,uVar1,lVar4,0,param_3,param_4);
  _objc_release(lVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108eff5f8; end: 108eff66b; -[SCSearchNavigationCoordinator dismissContainerViewControllerAnimated:completionBlock:] */

void FUN_108eff5f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1547a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
  _objc_release(param_4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108eff66c; end: 108eff6eb; -[SCSearchNavigationCoordinator dismissViewControllerFromParentStackIfPossibleWithAnimated:completionBlock:] */

void FUN_108eff66c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf84b20(param_1,param_2,param_3,param_4);
  }
  else {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf84b20();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108eff6ec; end: 108eff733; -[SCSearchNavigationCoordinator topViewController] */

void FUN_108eff6ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29c380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108eff734; end: 108eff74b; -[SCSearchNavigationCoordinator navigationInfos] */

void FUN_108eff734(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108eff74c; end: 108eff8fb; -[SCSearchNavigationCoordinator setNavigationInfos:] */

void FUN_108eff74c(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  int iVar18;
  undefined1 auStack_190 [8];
  undefined1 uStack_188;
  undefined1 uStack_187;
  undefined1 auStack_180 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined auStack_c8 [128];
  long lStack_48;
  
  puVar14 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  puVar2 = *(undefined **)(param_1 + 8);
  func_0x00010bf51e00();
  _objc_retain();
  _objc_retain(param_3);
  uVar15 = (undefined1)param_6;
  if (puVar2 == param_3) {
    _objc_release(param_3);
    _objc_release(puVar2);
    puVar14 = (undefined8 *)puVar3;
LAB_108eff8bc:
    _objc_release(puVar2);
    puVar16 = (undefined *)puVar14;
  }
  else {
    if (param_3 == (undefined *)0x0) {
      _objc_release();
      _objc_release(puVar2);
LAB_108eff7fc:
      lVar4 = *(long *)(param_1 + 8);
      func_0x00010bf529e0();
      for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        func_0x00010bf84b20(param_1);
      }
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      plStack_100 = (long *)0x0;
      _objc_retain(param_3);
      param_4 = auStack_c8;
      param_5 = 0x10;
      puVar3 = param_3;
      func_0x00010bf52a60();
      uVar15 = (undefined1)param_6;
      puVar2 = param_3;
      if (puVar3 != (undefined *)0x0) {
        lVar4 = *plStack_100;
        do {
          puVar16 = (undefined *)0x0;
          do {
            if (*plStack_100 != lVar4) {
              _objc_enumerationMutation(param_3);
            }
            func_0x00010c10f100(param_1);
            puVar16 = puVar16 + 1;
          } while (puVar3 != puVar16);
          param_4 = auStack_c8;
          param_5 = 0x10;
          puVar3 = param_3;
          puVar14 = &uStack_110;
          func_0x00010bf52a60();
          uVar15 = (undefined1)param_6;
        } while (puVar3 != (undefined *)0x0);
      }
      goto LAB_108eff8bc;
    }
    puVar3 = puVar2;
    puVar16 = param_3;
    func_0x00010c071ae0();
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_release(puVar2);
    uVar15 = (undefined1)param_6;
    if (((ulong)puVar3 & 1) == 0) goto LAB_108eff7fc;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar16);
  _objc_retain(param_4);
  _objc_retain(param_7);
  iVar18 = (int)param_5;
  if (iVar18 == 0) {
    func_0x00010be8ca00(param_3);
  }
  else {
    func_0x00010bdc7820();
  }
  puVar2 = param_3 + 0x18;
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010c1547a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar5 = puVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c3e68;
  _objc_opt_class(PTR_PTR_1126c3e68);
  puVar6 = puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar2);
  puVar2 = puVar5;
  if (((ulong)puVar6 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain();
  _objc_release(puVar5);
  puVar6 = puVar16;
  func_0x00010c29c380();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000107c318f8();
  puVar5 = puVar6;
  if ((int)puVar7 == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain();
  _objc_release(puVar6);
  puVar7 = param_4;
  func_0x00010c29c380();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x000107c318f8();
  puVar6 = puVar7;
  if ((int)puVar8 == 0) {
    puVar6 = (undefined *)0x0;
  }
  _objc_retain(puVar6);
  _objc_release(puVar7);
  if ((iVar18 == 0) || (puVar6 == (undefined *)0x0)) {
    if ((param_5 & 1) == 0) {
      puVar8 = puVar5;
      func_0x00010c153720(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1af7e0();
      goto LAB_108effb68;
    }
  }
  else {
    puVar8 = PTR_PTR_1126dc770;
    _objc_alloc(PTR_PTR_1126dc770);
    puVar9 = puVar2;
    func_0x00010c0d6280(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_4;
    func_0x00010c0d6c60();
    puVar11 = puVar5;
    func_0x00010c153720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar11;
    func_0x00010c0d68c0();
    _objc_retainAutoreleasedReturnValue();
    if (((ulong)puVar10 & 0x30) == 0x10) {
      puVar10 = puVar17;
      func_0x00010bf51e00(puVar17);
    }
    else {
      puVar10 = PTR_PTR_1126dc780;
      _objc_opt_new(PTR_PTR_1126dc780);
    }
    func_0x00010c02e560(puVar8);
    func_0x00010c1f82c0(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar10);
    _objc_release(puVar17);
    _objc_release(puVar11);
    _objc_release(puVar9);
    puVar8 = puVar7;
    func_0x00010c153720(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1af840();
LAB_108effb68:
    _objc_release(puVar8);
  }
  puVar8 = puVar16;
  func_0x00010c29c380();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_4;
  func_0x00010c29c380();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  _objc_retain(puVar3);
  if (iVar18 == 0) {
    puVar10 = puVar8;
    func_0x00010c27acc0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    _objc_opt_respondsToSelector();
    _objc_release(puVar10);
    if (((ulong)puVar11 & 1) == 0) goto LAB_108effc8c;
    puVar10 = puVar8;
    func_0x00010c27acc0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf03a40();
    _objc_retainAutoreleasedReturnValue();
LAB_108effc78:
    _objc_release(puVar10);
  }
  else {
    puVar10 = puVar9;
    func_0x00010c27acc0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    _objc_opt_respondsToSelector();
    _objc_release(puVar10);
    if (((ulong)puVar11 & 1) != 0) {
      puVar10 = puVar9;
      func_0x00010c27acc0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bf03a60();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108effc78;
    }
LAB_108effc8c:
    puVar11 = PTR_PTR_1126c3ea8;
    _objc_alloc();
    func_0x00010c038ca0();
  }
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar8 = puVar16;
  func_0x00010c29c380();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_4;
  func_0x00010c29c380();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_3;
  func_0x00010c075b80();
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  _objc_retain(puVar11);
  if (iVar18 == 0) {
    puVar17 = puVar8;
    func_0x00010c27acc0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar17;
    _objc_opt_respondsToSelector();
    _objc_release(puVar17);
    if (((ulong)puVar12 & 1) == 0) {
      if ((uint)puVar10 == 0) {
        puVar17 = (undefined *)0x0;
        goto LAB_108effe44;
      }
    }
    else {
      puVar12 = puVar8;
      func_0x00010c27acc0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar12;
      func_0x00010c0684a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      uVar1 = 0;
      if (puVar17 == (undefined *)0x0) {
        uVar1 = (uint)puVar10;
      }
      if ((uVar1 & 1) == 0) goto LAB_108effe44;
    }
    puVar17 = PTR_PTR_1126c3ea8;
    _objc_alloc();
    func_0x00010c038ca0();
  }
  else {
    puVar10 = puVar9;
    func_0x00010c27acc0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar10;
    _objc_opt_respondsToSelector();
    _objc_release(puVar10);
    if (((ulong)puVar17 & 1) == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar10 = puVar9;
      func_0x00010c27acc0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar10;
      func_0x00010c0684c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
    }
  }
LAB_108effe44:
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar8 = param_3;
  func_0x00010c075b80();
  if ((int)puVar8 != 0) {
    _objc_retain(puVar17);
    uVar13 = *(undefined8 *)(param_3 + 0x28);
    *(undefined **)(param_3 + 0x28) = puVar17;
    _objc_release(uVar13);
  }
  _objc_initWeak(auStack_180,param_3);
  puVar8 = PTR_PTR_1126dc778;
  _objc_alloc();
  _objc_copyWeak(auStack_190,auStack_180);
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  _objc_retain(param_4);
  uStack_188 = (undefined1)param_5;
  _objc_retain(puVar3);
  _objc_retain(puVar16);
  uStack_187 = uVar15;
  _objc_retain(puVar2);
  _objc_retain(param_7);
  func_0x00010c0167c0();
  uVar13 = *(undefined8 *)(param_3 + 0x30);
  *(undefined **)(param_3 + 0x30) = puVar8;
  _objc_release(uVar13);
  puVar8 = param_4;
  func_0x00010c29c380(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182b60(puVar3);
  _objc_release(puVar8);
  if (puVar6 != (undefined *)0x0) {
    func_0x00010c153720(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0d68c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010c0d6280(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cb8a0();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  if (puVar17 == (undefined *)0x0) {
    func_0x00010bf03260(puVar11);
  }
  else {
    func_0x00010c24f080(puVar17);
  }
  _objc_release(param_7);
  _objc_release(puVar2);
  _objc_release(puVar16);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_180);
  _objc_release(puVar17);
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(puVar16);
  return;
}



/* Entry: 108eff8fc; end: 108f00157; -[SCSearchNavigationCoordinator _transitionFromNavigationInfo:toNavigationInfo:isPresenting:animated:completionBlock:] */

void FUN_108eff8fc(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  uint param_5,undefined1 param_6,undefined8 param_7)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  if (param_5 == 0) {
    func_0x00010be8ca00(param_1);
  }
  else {
    func_0x00010bdc7820();
  }
  uVar2 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c1547a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c3e68;
  _objc_opt_class(PTR_PTR_1126c3e68);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar2 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain();
  _objc_release(uVar4);
  puVar7 = param_3;
  func_0x00010c29c380();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x000107c318f8();
  puVar5 = puVar7;
  if ((int)puVar8 == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain();
  _objc_release(puVar7);
  puVar8 = param_4;
  func_0x00010c29c380();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x000107c318f8();
  puVar7 = puVar8;
  if ((int)puVar9 == 0) {
    puVar7 = (undefined *)0x0;
  }
  _objc_retain(puVar7);
  _objc_release(puVar8);
  if ((param_5 == 0) || (puVar7 == (undefined *)0x0)) {
    if ((param_5 & 1) == 0) {
      puVar9 = puVar5;
      func_0x00010c153720(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1af7e0();
      goto LAB_108effb68;
    }
  }
  else {
    puVar9 = PTR_PTR_1126dc770;
    _objc_alloc(PTR_PTR_1126dc770);
    uVar4 = uVar2;
    func_0x00010c0d6280(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_4;
    func_0x00010c0d6c60();
    puVar15 = puVar5;
    func_0x00010c153720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar15;
    func_0x00010c0d68c0();
    _objc_retainAutoreleasedReturnValue();
    if (((ulong)puVar10 & 0x30) == 0x10) {
      puVar10 = puVar11;
      func_0x00010bf51e00(puVar11);
    }
    else {
      puVar10 = PTR_PTR_1126dc780;
      _objc_opt_new(PTR_PTR_1126dc780);
    }
    func_0x00010c02e560(puVar9);
    func_0x00010c1f82c0(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(puVar11);
    _objc_release(puVar15);
    _objc_release(uVar4);
    puVar9 = puVar8;
    func_0x00010c153720(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1af840();
LAB_108effb68:
    _objc_release(puVar9);
  }
  puVar9 = param_3;
  func_0x00010c29c380();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_4;
  func_0x00010c29c380();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  _objc_retain(uVar3);
  if (param_5 == 0) {
    puVar15 = puVar9;
    func_0x00010c27acc0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar15;
    _objc_opt_respondsToSelector();
    _objc_release(puVar15);
    if (((ulong)puVar11 & 1) != 0) {
      puVar15 = puVar9;
      func_0x00010c27acc0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar15;
      func_0x00010bf03a40();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108effc78;
    }
LAB_108effc8c:
    puVar11 = PTR_PTR_1126c3ea8;
    _objc_alloc();
    func_0x00010c038ca0();
  }
  else {
    puVar15 = puVar10;
    func_0x00010c27acc0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar15;
    _objc_opt_respondsToSelector();
    _objc_release(puVar15);
    if (((ulong)puVar11 & 1) == 0) goto LAB_108effc8c;
    puVar15 = puVar10;
    func_0x00010c27acc0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar15;
    func_0x00010bf03a60();
    _objc_retainAutoreleasedReturnValue();
LAB_108effc78:
    _objc_release(puVar15);
  }
  _objc_release(uVar3);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar9);
  puVar9 = param_3;
  func_0x00010c29c380();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_4;
  func_0x00010c29c380();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c075b80();
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  if (param_5 == 0) {
    puVar15 = puVar9;
    func_0x00010c27acc0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar15;
    _objc_opt_respondsToSelector();
    _objc_release(puVar15);
    if (((ulong)puVar13 & 1) == 0) {
      if ((uint)lVar12 == 0) {
        puVar15 = (undefined *)0x0;
        goto LAB_108effe44;
      }
    }
    else {
      puVar13 = puVar9;
      func_0x00010c27acc0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar13;
      func_0x00010c0684a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      uVar1 = 0;
      if (puVar15 == (undefined *)0x0) {
        uVar1 = (uint)lVar12;
      }
      if ((uVar1 & 1) == 0) goto LAB_108effe44;
    }
    puVar15 = PTR_PTR_1126c3ea8;
    _objc_alloc();
    func_0x00010c038ca0();
  }
  else {
    puVar15 = puVar10;
    func_0x00010c27acc0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar15;
    _objc_opt_respondsToSelector();
    _objc_release(puVar15);
    if (((ulong)puVar13 & 1) == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar13 = puVar10;
      func_0x00010c27acc0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar13;
      func_0x00010c0684c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
    }
  }
LAB_108effe44:
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar9);
  lVar12 = param_1;
  func_0x00010c075b80();
  if ((int)lVar12 != 0) {
    _objc_retain(puVar15);
    uVar14 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar15;
    _objc_release(uVar14);
  }
  _objc_initWeak(auStack_70,param_1);
  puVar9 = PTR_PTR_1126dc778;
  _objc_alloc();
  _objc_copyWeak(auStack_80,auStack_70);
  _objc_retain(puVar7);
  _objc_retain(puVar5);
  _objc_retain(param_4);
  uStack_78 = (undefined1)param_5;
  _objc_retain(uVar3);
  _objc_retain(param_3);
  uStack_77 = param_6;
  _objc_retain(uVar2);
  _objc_retain(param_7);
  func_0x00010c0167c0();
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar9;
  _objc_release(uVar14);
  puVar9 = param_4;
  func_0x00010c29c380(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182b60(uVar3);
  _objc_release(puVar9);
  if (puVar7 != (undefined *)0x0) {
    func_0x00010c153720(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0d68c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0d6280(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cb8a0();
    _objc_release(uVar4);
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  if (puVar15 == (undefined *)0x0) {
    func_0x00010bf03260(puVar11);
  }
  else {
    func_0x00010c24f080(puVar15);
  }
  _objc_release(param_7);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar15);
  _objc_release(puVar11);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108f00158; end: 108f003b7;  */

void FUN_108f00158(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_108f003a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c153720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af840();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c153720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af7e0();
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x30);
  if ((lVar3 != 0) && (*(char *)(param_1 + 0x60) == '\x01')) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c29c380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7700(uVar2);
    _objc_release(lVar3);
  }
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x60) != '\0') {
      lVar3 = *(long *)(param_1 + 0x30);
      func_0x00010c29c380(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf77e80();
      goto LAB_108f002cc;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c29c380();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x000107c318f8();
    uVar2 = uVar5;
    if ((int)uVar6 == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar5);
    func_0x00010c1f82c0(uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c29c380(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a6740();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c29c380(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c8e0();
    _objc_release(uVar2);
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010bf84b00(*(undefined8 *)(param_1 + 0x38));
    }
  }
  else {
    if (*(char *)(param_1 + 0x60) == '\0') {
      func_0x00010bdc7820(lVar1);
    }
    else {
      func_0x00010be8ca00(lVar1);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c29c380(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182b60(*(undefined8 *)(param_1 + 0x38));
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      func_0x00010c153720();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0d68c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c0d6280(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cb8a0();
      _objc_release(uVar2);
      _objc_release(lVar4);
LAB_108f002cc:
      _objc_release(lVar3);
    }
  }
  func_0x00010bddf2c0(lVar1);
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(*(long *)(param_1 + 0x50) + 0x10))();
  }
LAB_108f003a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108f003b8; end: 108f003bf; -[SCSearchNavigationCoordinator containerViewControllerStatusForTransitionContext:] */

undefined8 FUN_108f003b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f003c0; end: 108f00447; -[SCSearchNavigationCoordinator _cleanUpTransitionWithFromNavigationInfo:toNavigationInfo:] */

void FUN_108f003c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c153c60();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f00448; end: 108f0044f; -[SCSearchNavigationCoordinator _addNavigationInfoToStack:] */

void FUN_108f00448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 108f00450; end: 108f00457; -[SCSearchNavigationCoordinator _removeNavigationInfoFromStack] */

void FUN_108f00450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeLastObject_112628d78);
  return;
}



/* Entry: 108f00458; end: 108f0046f; -[SCSearchNavigationCoordinator delegate] */

void FUN_108f00458(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f00470; end: 108f0047b; -[SCSearchNavigationCoordinator setDelegate:] */

void FUN_108f00470(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 108f0047c; end: 108f00483; -[SCSearchNavigationCoordinator viewControllerStatus] */

undefined8 FUN_108f0047c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f00484; end: 108f0048b; -[SCSearchNavigationCoordinator setViewControllerStatus:] */

void FUN_108f00484(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 108f0048c; end: 108f00493; -[SCSearchNavigationCoordinator isInteractiveDismissing] */

undefined1 FUN_108f0048c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 108f00494; end: 108f0049b; -[SCSearchNavigationCoordinator setIsInteractiveDismissing:] */

void FUN_108f00494(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 108f0049c; end: 108f004a3; -[SCSearchNavigationCoordinator interactiveDismissalController] */

undefined8 FUN_108f0049c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f004a4; end: 108f004ab; -[SCSearchNavigationCoordinator ongoingTransitionContext] */

undefined8 FUN_108f004a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f004ac; end: 108f004c3; -[SCSearchNavigationCoordinator parentNavigationCoordinator] */

void FUN_108f004ac(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f004c4; end: 108f004cf; -[SCSearchNavigationCoordinator setParentNavigationCoordinator:] */

void FUN_108f004c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 108f004d0; end: 108f0051b; -[SCSearchNavigationCoordinator .cxx_destruct] */

void FUN_108f004d0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f0051c; end: 108f005a3; -[SCSearchNavigationInfo initWithViewControllerToPresent:presentingOriginPosition:navigationStyle:] */

undefined1 *
FUN_108f0051c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ff350;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f005a4; end: 108f005af; -[SCSearchNavigationInfo initWithViewControllerToPresent:] */

void FUN_108f005a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c061a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithViewControllerToPresent__1125f60a8,param_3,2,0);
  return;
}



/* Entry: 108f005b0; end: 108f005b7; -[SCSearchNavigationInfo viewControllerToPresent] */

undefined8 FUN_108f005b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f005b8; end: 108f005bf; -[SCSearchNavigationInfo presentingOriginPosition] */

undefined8 FUN_108f005b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f005c0; end: 108f005c7; -[SCSearchNavigationInfo navigationStyle] */

undefined8 FUN_108f005c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f005c8; end: 108f005d3; -[SCSearchNavigationInfo .cxx_destruct] */

void FUN_108f005c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f005d4; end: 108f006d3; -[SCSearchNavigationItem init] */

undefined1 * FUN_108f005d4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff358;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0x4046000000000000;
    uVar5 = 0;
    *(undefined8 *)((long)puVar1 + 0x80) = 0xc000000000000000;
    *(undefined8 *)((long)puVar1 + 0x78) = 0;
    *(undefined8 *)((long)puVar1 + 0x18) = 3;
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010b816670();
    func_0x00010c013de0(0,0,0,uVar5);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf414e0(0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar5);
    *(undefined8 *)((long)puVar1 + 0x50) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f006d4; end: 108f008bf; -[SCSearchNavigationItem copyWithZone:] */

undefined *
FUN_108f006d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126dc780;
  func_0x00010bf00e40();
  func_0x00010bfee200();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c0d6560(param_5);
    *(undefined8 *)(puVar1 + 8) = param_1;
    func_0x00010c0d6540(param_5);
    *(undefined8 *)(puVar1 + 0x78) = param_1;
    *(undefined8 *)(puVar1 + 0x80) = param_2;
    uVar4 = param_5;
    func_0x00010c153dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(puVar1 + 0x10) = uVar3;
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar4 = param_5;
    func_0x00010c153640();
    *(undefined8 *)(puVar1 + 0x18) = uVar4;
    uVar4 = param_5;
    func_0x00010c153a40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar1 + 0x48);
    *(undefined8 *)(puVar1 + 0x48) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_5;
    func_0x00010c153a80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar1 + 0x30);
    *(undefined8 *)(puVar1 + 0x30) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_5;
    func_0x00010c153b60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar1 + 0x28);
    *(undefined8 *)(puVar1 + 0x28) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_5;
    func_0x00010c153c20();
    *(undefined8 *)(puVar1 + 0x50) = uVar4;
    uVar4 = param_5;
    func_0x00010bf138a0();
    *(undefined8 *)(puVar1 + 0x58) = uVar4;
    uVar4 = param_5;
    func_0x00010bf13880();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 0x60);
    *(undefined8 *)(puVar1 + 0x60) = uVar3;
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar4 = param_5;
    func_0x00010c1408e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 0x68);
    *(undefined8 *)(puVar1 + 0x68) = uVar3;
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar4 = param_5;
    func_0x00010c1533e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar1 + 0x20);
    *(undefined8 *)(puVar1 + 0x20) = uVar4;
    _objc_release(uVar3);
    func_0x00010c1533c0(param_5);
    *(undefined8 *)(puVar1 + 0x88) = param_1;
    *(undefined8 *)(puVar1 + 0x90) = param_2;
    *(undefined8 *)(puVar1 + 0x98) = param_3;
    *(undefined8 *)(puVar1 + 0xa0) = param_4;
    func_0x00010c154800(param_5);
    *(undefined8 *)(puVar1 + 0xa8) = param_1;
    *(undefined8 *)(puVar1 + 0xb0) = param_2;
    *(undefined8 *)(puVar1 + 0xb8) = param_3;
    *(undefined8 *)(puVar1 + 0xc0) = param_4;
    uVar4 = param_5;
    func_0x00010c1545a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar1 + 0x40);
    *(undefined8 *)(puVar1 + 0x40) = uVar4;
    _objc_release(uVar3);
    func_0x00010c140de0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(puVar1 + 0x38);
    *(undefined8 *)(puVar1 + 0x38) = param_5;
    _objc_release(uVar4);
  }
  return puVar1;
}


