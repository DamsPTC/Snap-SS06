/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107c15114; end: 107c151d3; -[SCDiscoverFeedStoryCollectionViewCell operaBaseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c15114(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126c22b8;
  uVar4 = *(ulong *)(param_1 + _DAT_11276c048);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c087660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 == 0) {
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = *(long *)(param_1 + _DAT_11276c00c);
    _objc_retain(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107c151d4; end: 107c151d7; -[SCDiscoverFeedStoryCollectionViewCell autoPlayBaseView] */

void FUN_107c151d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4dcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contentView_1125b10e0);
  return;
}



/* Entry: 107c151d8; end: 107c151eb; -[SCDiscoverFeedStoryCollectionViewCell autoPlayDesiredSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107c151d8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11276c074);
}



/* Entry: 107c151ec; end: 107c1521b; -[SCDiscoverFeedStoryCollectionViewCell autoPlayInsertBelowView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c151ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c014);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107c1521c; end: 107c1522b; -[SCDiscoverFeedStoryCollectionViewCell autoPlayControlsView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1521c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf11950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c028),PTR_s_autoPlayControlsView_1125a1ff8);
  return;
}



/* Entry: 107c1522c; end: 107c152bf; -[SCDiscoverFeedStoryCollectionViewCell setAutoPlayGradientActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1522c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  double dVar2;
  
  func_0x00010c16ce60(*(undefined8 *)(param_1 + _DAT_11276c014));
  lVar1 = (long)_DAT_11276c06c;
  dVar2 = *(double *)(param_1 + lVar1);
  if (param_3 == 0) {
    if (dVar2 <= 0.0) {
      return;
    }
    _CFAbsoluteTimeGetCurrent();
    *(long *)(param_1 + _DAT_11276c070) =
         *(long *)(param_1 + _DAT_11276c070) +
         (long)((dVar2 - *(double *)(param_1 + lVar1)) * 1000.0);
    dVar2 = 0.0;
  }
  else {
    if (dVar2 != 0.0) {
      return;
    }
    _CFAbsoluteTimeGetCurrent();
  }
  *(double *)(param_1 + lVar1) = dVar2;
  return;
}



/* Entry: 107c152c0; end: 107c152cf; -[SCDiscoverFeedStoryCollectionViewCell setAutoPlayControlsActive:withDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c152c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16ce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c028),
             PTR_s_setAutoPlayControlsActive_withDe_112638da8);
  return;
}



/* Entry: 107c152d0; end: 107c152df; -[SCDiscoverFeedStoryCollectionViewCell setAutoPlayControlsMuteState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c152d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c028),PTR_s_setAutoPlayControlsMuteState__112638db0
            );
  return;
}



/* Entry: 107c152e0; end: 107c15397; -[SCDiscoverFeedStoryCollectionViewCell autoPlayViewObstructed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107c152e0(long param_1)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar3 = PTR_PTR_1126c22b8;
  uVar5 = *(ulong *)(param_1 + _DAT_11276c048);
  _objc_retain(uVar5);
  _objc_opt_class(puVar3);
  uVar4 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar1 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar4 = uVar1;
  func_0x00010bf8ba00();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uVar5 = uVar1;
    func_0x00010bf96140(uVar1);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar5 != 0;
    _objc_release();
  }
  else {
    bVar2 = true;
  }
  _objc_release(uVar4);
  _objc_release(uVar1);
  return bVar2;
}



/* Entry: 107c15398; end: 107c154af; -[SCDiscoverFeedStoryCollectionViewCell accessibilityCustomActions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c15398(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  undefined *puStack_48;
  
  plVar2 = &lStack_50;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126fa388;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_accessibilityCustomActions_112538c68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined1 *)plVar2;
  func_0x00010bf529e0();
  if (puVar3 != (undefined1 *)0x0) {
    func_0x00010befa160(puVar1);
  }
  lVar4 = *(long *)(param_1 + _DAT_11276c028);
  func_0x00010bf11920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    func_0x00010befa160(puVar1);
  }
  lVar6 = *(long *)(param_1 + _DAT_11276c000);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010c0e9560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (lVar5 != 0) {
    func_0x00010befa120(puVar1);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c154b0; end: 107c1558b; -[SCDiscoverFeedStoryCollectionViewCell _updateBottomLabelInset] */

/* WARNING: Possible PIC construction at 0x000107c1554c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107c15550) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c154b0(double param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  lVar3 = (long)_DAT_11276c078;
  uVar1 = *(ulong *)(param_2 + lVar3);
  if ((uVar1 != 0) && (func_0x00010c074c20(), (uVar1 & 1) == 0)) {
    func_0x00010c274140(*(undefined8 *)(param_2 + lVar3));
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    dVar4 = param_1;
    func_0x00010c262ca0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0640();
    dVar5 = dVar4;
    _objc_release(uVar2);
    if (param_1 < dVar4) {
      func_0x00010c262ca0(*(undefined8 *)(param_2 + lVar3));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0640();
      dVar4 = dVar5;
      func_0x00010c274140(*(undefined8 *)(param_2 + lVar3));
      dVar5 = dVar5 - dVar4;
      uVar2 = *(undefined8 *)(param_2 + _DAT_11276c014);
      goto code_r0x00010c173600;
    }
  }
  uVar2 = *(undefined8 *)(param_2 + _DAT_11276c014);
  dVar5 = 0.0;
code_r0x00010c173600:
                    /* WARNING: Could not recover jumptable at 0x00010c173610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(dVar5,uVar2,PTR_s_setBottomInset__11263a7a0);
  return;
}



/* Entry: 107c1558c; end: 107c15637; -[SCDiscoverFeedStoryCollectionViewCell _compareAndUpdateViewModelIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1558c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + _DAT_11276c048);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  if (uVar2 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar2);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar2);
    }
    else {
      uVar1 = uVar2;
      func_0x00010c071ae0(uVar2,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar2);
      if ((uVar1 & 1) != 0) goto LAB_107c15624;
    }
    func_0x00010bee5000(param_1,param_2,param_3);
  }
LAB_107c15624:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c15638; end: 107c15feb; -[SCDiscoverFeedStoryCollectionViewCell _layoutWithViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c15638(double param_1,double param_2,long param_3)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
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
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  
  lVar8 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar9 = param_3;
  dVar12 = param_1;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  pdVar1 = (double *)(param_3 + _DAT_11276c074);
  dVar30 = *pdVar1;
  dVar28 = pdVar1[1];
  _objc_release(lVar9);
  _objc_release(lVar8);
  lVar10 = (long)_DAT_11276c01c;
  uVar4 = *(undefined8 *)(param_3 + lVar10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf15900();
  _objc_release(uVar4);
  dVar34 = param_1;
  _CGRectGetMinX(param_1,param_2,dVar30,dVar28);
  dVar13 = param_1;
  _CGRectGetMinY(param_1,param_2,dVar30,dVar28);
  dVar13 = dVar12 + dVar13;
  dVar29 = param_1;
  _CGRectGetWidth(param_1,param_2,dVar30,dVar28);
  dVar14 = param_1;
  dVar22 = dVar30;
  dVar25 = dVar28;
  _CGRectGetHeight(param_1,param_2);
  dVar14 = dVar14 - dVar12;
  lVar8 = param_3;
  dVar15 = dVar14;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010b816528();
  func_0x00010b8166f8(lVar8);
  _objc_release(lVar9);
  _objc_release(lVar8);
  lVar8 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  dVar16 = param_1;
  dVar20 = param_2;
  dVar23 = dVar30;
  dVar26 = dVar28;
  func_0x00010b816528();
  func_0x00010b8166f8(lVar8);
  _objc_release(lVar8);
  lVar8 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  dVar17 = dVar34;
  dVar21 = dVar13;
  dVar24 = dVar29;
  dVar27 = dVar14;
  func_0x00010b816528();
  func_0x00010b8166f8(lVar8);
  _objc_release(lVar8);
  lVar9 = (long)_DAT_11276c004;
  func_0x00010c19f0e0(param_1,param_2,dVar30,dVar28,*(undefined8 *)(param_3 + lVar9));
  uVar4 = *(undefined8 *)(param_3 + lVar10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar16,dVar20,dVar23,dVar26);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_3 + _DAT_11276c020);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar16,dVar20,dVar23,dVar26);
  _objc_release(uVar4);
  lVar8 = (long)_DAT_11276bffc;
  func_0x00010c19f0e0(dVar16,dVar20,dVar23,dVar26,*(undefined8 *)(param_3 + lVar8));
  lVar10 = (long)_DAT_11276c07c;
  if (*(long *)(param_3 + lVar10) != 0) {
    dVar35 = param_1;
    _CGRectGetWidth(param_1,param_2,dVar30,dVar28);
    dVar32 = dVar35;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar10));
    _CGRectGetWidth();
    dVar18 = param_1;
    _CGRectGetHeight(param_1,param_2,dVar30,dVar28);
    dVar19 = dVar18;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar10));
    _CGRectGetHeight();
    dVar18 = dVar18 - dVar19;
    dVar31 = dVar18 + -5.0;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar10));
    _CGRectGetWidth();
    dVar19 = dVar18;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar10));
    _CGRectGetHeight();
    lVar11 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b816528((dVar35 - dVar32) + -5.0,dVar31,dVar18,dVar19);
    func_0x00010b8166f8(lVar11);
    func_0x00010c19f0e0(*(undefined8 *)(param_3 + lVar10));
    _objc_release(lVar11);
  }
  lVar11 = (long)_DAT_11276c080;
  if (*(long *)(param_3 + lVar11) != 0) {
    dVar35 = 5.0;
    if (*(long *)(param_3 + lVar10) != 0) {
      dVar35 = 10.0;
    }
    dVar32 = param_1;
    _CGRectGetWidth(param_1,param_2,dVar30,dVar28);
    dVar18 = dVar32;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar11));
    _CGRectGetWidth();
    dVar32 = dVar32 - dVar18;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar10));
    _CGRectGetWidth();
    dVar19 = param_1;
    _CGRectGetHeight(param_1,param_2,dVar30,dVar28);
    dVar31 = dVar19;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar11));
    _CGRectGetHeight();
    dVar19 = dVar19 - dVar31;
    dVar33 = dVar19 + -5.0;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar11));
    _CGRectGetWidth();
    dVar31 = dVar19;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar11));
    _CGRectGetHeight();
    lVar10 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b816528((dVar32 - dVar18) - dVar35,dVar33,dVar19,dVar31);
    func_0x00010b8166f8(lVar10);
    func_0x00010c19f0e0(*(undefined8 *)(param_3 + lVar11));
    _objc_release(lVar10);
  }
  uVar4 = *(undefined8 *)(param_3 + _DAT_11276c010);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar16,dVar20,dVar23,dVar26);
  _objc_release(uVar4);
  func_0x00010c19f0e0(dVar16,dVar20,dVar23,dVar26,*(undefined8 *)(param_3 + _DAT_11276c008));
  lVar10 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b8162e0(dVar34,dVar13,dVar29,dVar14);
  func_0x00010b8166f8(lVar10);
  _objc_release(lVar10);
  lVar10 = (long)_DAT_11276c064;
  if (((*(byte *)(param_3 + lVar10) & 1) == 0) && ((*(byte *)(param_3 + _DAT_11276c060) & 1) != 0))
  {
    dVar35 = 1.0 - *(double *)(param_3 + _DAT_11276c084);
    _CGRectInset(dVar34,dVar13,dVar29,dVar14,dVar29 * dVar35 * 0.5,dVar14 * dVar35 * 0.5);
  }
  func_0x00010c19f0e0(dVar34,dVar13,dVar29,dVar14,*(undefined8 *)(param_3 + _DAT_11276c00c));
  lVar11 = (long)_DAT_11276c078;
  uVar5 = *(ulong *)(param_3 + lVar11);
  if (uVar5 == 0) {
    uVar7 = 0;
  }
  else {
    func_0x00010c074c20();
    uVar7 = *(ulong *)(param_3 + lVar11);
    if ((uVar5 & 1) == 0) {
      puVar6 = PTR_PTR_1126aec40;
      _objc_opt_class(PTR_PTR_1126aec40);
      _objc_opt_isKindOfClass(uVar7,puVar6);
      dVar34 = 0.0;
      if ((uVar7 & 1) != 0) {
        _CGRectGetWidth(param_1,param_2,dVar30,dVar28);
        dVar13 = 0.0444;
        dVar34 = param_1 * 0.0444;
      }
      dVar29 = dVar30 + dVar34 * -2.0;
      func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar11));
      dVar14 = (dVar28 - dVar13) - dVar34;
      if ((*(ulong *)(param_3 + lVar10) & 2) != 0) {
        dVar14 = (double)(long)dVar28;
      }
      _CGRectIntegral(dVar34,dVar14,dVar29,dVar13);
      dVar35 = dVar13;
      func_0x00010c19f0e0(*(undefined8 *)(param_3 + lVar11));
      uVar5 = *(ulong *)(param_3 + lVar8);
      dVar13 = dVar14;
      if ((uVar5 != 0) && (func_0x00010c074c20(), dVar13 = dVar14, (uVar5 & 1) == 0)) {
        func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar11));
        dVar29 = dVar14;
        func_0x00010c1736c0(*(undefined8 *)(param_3 + lVar8));
        func_0x00010c08cdc0(*(undefined8 *)(param_3 + lVar8));
        func_0x00010c0c1a40(*(undefined8 *)(param_3 + lVar8));
        dVar34 = dVar28 + -32.0;
        dVar13 = dVar34 - dVar14;
        if (dVar29 <= 0.0) {
          func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar11));
        }
        else {
          dVar34 = (dVar30 - dVar29) * 0.5;
          dVar35 = dVar14;
        }
        _CGRectIntegral();
        func_0x00010c19f0e0(*(undefined8 *)(param_3 + lVar11));
      }
      uVar4 = *(undefined8 *)(param_3 + lVar11);
      func_0x00010c262ca0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300();
      _objc_release(uVar4);
      lVar8 = (long)_DAT_11276c088;
      uVar7 = *(ulong *)(param_3 + lVar11);
      if (*(long *)(param_3 + lVar8) != 0) {
        func_0x00010bfb68e0(uVar7);
        pdVar2 = (double *)(param_3 + _DAT_11276c08c);
        dVar13 = dVar13 + *pdVar2;
        func_0x00010c19f0e0(dVar34 + pdVar2[1],dVar13,dVar29 - (pdVar2[1] + pdVar2[3]),
                            dVar35 - (*pdVar2 + pdVar2[2]),*(undefined8 *)(param_3 + lVar8));
        uVar7 = *(ulong *)(param_3 + lVar11);
      }
    }
  }
  dVar34 = pdVar1[1];
  func_0x00010c074c20();
  if ((uVar7 & 1) == 0) {
    func_0x00010c23d0a0(*(undefined8 *)(param_3 + lVar11));
    dVar34 = dVar34 - dVar13;
  }
  func_0x00010c183a40(dVar34,*(undefined8 *)(param_3 + _DAT_11276c028));
  lVar8 = (long)_DAT_11276c014;
  func_0x00010c217560(dVar12,*(undefined8 *)(param_3 + lVar8));
  func_0x00010c19f0e0(dVar16,dVar20,dVar23,dVar26,*(undefined8 *)(param_3 + lVar8));
  lVar8 = (long)_DAT_11276c000;
  iVar3 = (int)*(undefined8 *)(param_3 + lVar8);
  func_0x00010c06f880();
  if (iVar3 != 0) {
    uVar4 = *(undefined8 *)(param_3 + lVar8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar15,dVar20 + dVar26,dVar22,dVar25 - dVar26);
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_3 + _DAT_11276c024);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar16,dVar20,dVar23,dVar26);
  _objc_release(uVar4);
  func_0x00010bed4440(param_3);
  lVar8 = (long)_DAT_11276c02c;
  uVar5 = *(ulong *)(param_3 + lVar8);
  if ((uVar5 != 0) && (func_0x00010c074c20(), (uVar5 & 1) == 0)) {
    func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar8));
    _CGRectGetWidth(dVar17,dVar21,dVar24,dVar27);
    uVar4 = *(undefined8 *)(param_3 + lVar9);
    func_0x00010b816528((dVar17 - dVar16) + -12.0,dVar21 + 12.0,dVar16,dVar20);
    func_0x00010b8166f8(uVar4);
    func_0x00010c19f0e0(*(undefined8 *)(param_3 + lVar8));
    func_0x00010bf21300(*(undefined8 *)(param_3 + lVar9));
    dVar23 = dVar16;
    dVar26 = dVar20;
  }
  if (*(char *)(param_3 + _DAT_11276c090) == '\x01') {
    lVar8 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar10 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(0,0,dVar23,dVar26 + -82.0,*(undefined8 *)(param_3 + lVar9));
    _objc_release(lVar10);
    _objc_release(lVar8);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e8e0(param_3);
    _objc_release(puVar6);
    uVar4 = *(undefined8 *)(param_3 + _DAT_11276c018);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(0,dVar25 + -82.0,dVar22,0x4054800000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 107c15fec; end: 107c17187; -[SCDiscoverFeedStoryCollectionViewCell _updateWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c15fec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  char *pcVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  lVar11 = (long)_DAT_11276c074;
  func_0x00010c106920(param_5);
  func_0x00010b8165e8();
  *(undefined8 *)(param_3 + lVar11) = param_1;
  ((undefined8 *)(param_3 + lVar11))[1] = param_2;
  *(undefined1 *)(param_3 + _DAT_11276c044) = 0;
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cfc0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_3 + _DAT_11276c00c));
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c137fe0(*(undefined8 *)(param_3 + _DAT_11276c028));
  puVar5 = PTR_PTR_1126c22b8;
  lVar11 = (long)_DAT_11276c048;
  uVar16 = *(ulong *)(param_3 + lVar11);
  _objc_retain(uVar16);
  _objc_opt_class(puVar5);
  uVar6 = uVar16;
  _objc_opt_isKindOfClass(uVar16,puVar5);
  uVar2 = uVar16;
  if ((uVar6 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar16);
  uVar6 = uVar2;
  func_0x00010bf96140();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar2;
  func_0x00010c112fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_5;
  func_0x00010bf51e00();
  uVar12 = *(undefined8 *)(param_3 + lVar11);
  *(ulong *)(param_3 + lVar11) = uVar8;
  _objc_release(uVar12);
  uVar8 = param_5;
  func_0x00010c112dc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  FUN_107c1a400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_3 + _DAT_11276c008));
  _objc_release(uVar7);
  _objc_release(uVar8);
  lVar11 = (long)_DAT_11276c004;
  func_0x00010bf21300(param_3);
  lVar13 = (long)_DAT_11276c02c;
  uVar12 = *(undefined8 *)(param_3 + lVar13);
  func_0x00010c259ca0(param_5);
  func_0x00010bf47b80(uVar12);
  uVar8 = param_5;
  func_0x00010c23a960();
  if ((uVar8 & 1) == 0) {
    uVar8 = param_5;
    func_0x00010bf15a40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c08fa60();
    if (((uVar7 != 0) || (uVar7 = param_5, func_0x00010c076ae0(), (uVar7 & 1) != 0)) ||
       (uVar7 = param_5, func_0x00010bf915a0(), (int)uVar7 != 0)) {
      puVar1 = (ulong *)(param_3 + _DAT_11276c01c);
      uVar7 = *puVar1;
      func_0x00010c06f880();
      _objc_release(uVar8);
      goto joined_r0x000107c16220;
    }
LAB_107c1625c:
    _objc_release(uVar8);
  }
  else {
    puVar1 = (ulong *)(param_3 + _DAT_11276c01c);
    uVar7 = *puVar1;
    func_0x00010c06f880();
joined_r0x000107c16220:
    if ((uVar7 & 1) == 0) {
      func_0x00010bf57500(*puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_3 + lVar11);
      uVar8 = *puVar1;
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(uVar12);
      goto LAB_107c1625c;
    }
  }
  puVar5 = PTR_PTR_1126d7328;
  _objc_alloc(PTR_PTR_1126d7328);
  func_0x00010c23a960(param_5);
  uVar8 = param_5;
  func_0x00010bf15a40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c076ae0(param_5);
  func_0x00010bf915a0(param_5);
  func_0x00010c260560(param_5);
  func_0x00010c074c20(*(undefined8 *)(param_3 + lVar13));
  func_0x00010c04f000(puVar5);
  lVar13 = (long)_DAT_11276c01c;
  uVar12 = *(undefined8 *)(param_3 + lVar13);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar12);
  _objc_release(puVar5);
  _objc_release(uVar8);
  uVar8 = param_5;
  func_0x00010bf8ba00();
  _objc_retainAutoreleasedReturnValue();
  if (uVar8 != 0) {
    lVar17 = (long)_DAT_11276c020;
    lVar9 = *(long *)(param_3 + lVar17);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar8);
    if (lVar9 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_3 + lVar17));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_3 + lVar17);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f5f00();
      _objc_release(uVar12);
      uVar18 = *(undefined8 *)(param_3 + lVar11);
      uVar12 = *(undefined8 *)(param_3 + lVar17);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(uVar18);
      _objc_release(uVar12);
      uVar18 = *(undefined8 *)(param_3 + lVar11);
      uVar12 = *(undefined8 *)(param_3 + lVar17);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300(uVar18);
      _objc_release(uVar12);
      uVar18 = *(undefined8 *)(param_3 + lVar11);
      uVar12 = *(undefined8 *)(param_3 + lVar13);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300(uVar18);
      _objc_release(uVar12);
    }
  }
  uVar8 = param_5;
  func_0x00010bf8ba00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11276c020;
  uVar12 = *(undefined8 *)(param_3 + lVar9);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar12);
  _objc_release(uVar8);
  uVar8 = param_5;
  func_0x00010bf8ba00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bfe2cc0();
  _objc_release(uVar8);
  if ((int)uVar7 != 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_3 + _DAT_11276c014));
    lVar17 = (long)_DAT_11276c010;
    iVar3 = (int)*(undefined8 *)(param_3 + lVar17);
    func_0x00010c06f880();
    if (iVar3 != 0) {
      uVar12 = *(undefined8 *)(param_3 + lVar17);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar12);
    }
  }
  func_0x00010beabfa0(param_3);
  uVar8 = param_5;
  func_0x00010bf28ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar8 == 0) {
    uVar8 = param_5;
    func_0x00010c26e120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar8 != 0) {
      _objc_initWeak(auStack_78,param_3);
      uVar12 = *(undefined8 *)(param_3 + _DAT_11276c030);
      param_1 = 0xc2000000;
      _objc_copyWeak(auStack_80,auStack_78);
      _objc_retain(param_5);
      func_0x00010c0f7fc0(uVar12);
      _objc_release(param_5);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
  }
  uVar8 = param_5;
  func_0x00010c0b45e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar8 != 0) {
    lVar14 = (long)_DAT_11276c010;
    lVar17 = *(long *)(param_3 + lVar14);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar8);
    if (lVar17 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_3 + lVar14));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_3 + lVar14);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20c5a0();
      _objc_release(uVar12);
      uVar12 = *(undefined8 *)(param_3 + lVar14);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1aa2c0();
      _objc_release(uVar12);
      uVar12 = *(undefined8 *)(param_3 + lVar14);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f5f00();
      _objc_release(uVar12);
      uVar12 = *(undefined8 *)(param_3 + lVar14);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e67c0();
      _objc_release(uVar12);
      uVar18 = *(undefined8 *)(param_3 + lVar11);
      uVar12 = *(undefined8 *)(param_3 + lVar14);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(uVar18);
      _objc_release(uVar12);
      uVar18 = *(undefined8 *)(param_3 + lVar11);
      uVar12 = *(undefined8 *)(param_3 + lVar9);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300(uVar18);
      _objc_release(uVar12);
      uVar18 = *(undefined8 *)(param_3 + lVar11);
      uVar12 = *(undefined8 *)(param_3 + lVar13);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300(uVar18);
      _objc_release(uVar12);
      func_0x00010bf21300(*(undefined8 *)(param_3 + lVar11));
    }
  }
  uVar8 = param_5;
  func_0x00010c0b45e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11276c010;
  uVar12 = *(undefined8 *)(param_3 + lVar17);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar12);
  _objc_release(uVar8);
  uVar12 = *(undefined8 *)(param_3 + lVar13);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf15900();
  uVar18 = *(undefined8 *)(param_3 + lVar17);
  func_0x00010c269d40(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f0e0();
  _objc_release(uVar18);
  _objc_release(uVar12);
  iVar3 = (int)*(undefined8 *)(param_3 + lVar17);
  func_0x00010c06f880();
  if (iVar3 != 0) {
    uVar8 = param_5;
    func_0x00010c0b45e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_3 + lVar17);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar12);
    _objc_release(uVar8);
  }
  uVar8 = param_5;
  func_0x00010c087660();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11276c000;
  if (uVar8 != 0) {
    uVar7 = *(ulong *)(param_3 + lVar17);
    func_0x00010c06f880();
    _objc_release(uVar8);
    if ((uVar7 & 1) == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_3 + lVar17));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  iVar3 = (int)*(undefined8 *)(param_3 + lVar17);
  func_0x00010c06f880();
  if (iVar3 != 0) {
    uVar12 = *(undefined8 *)(param_3 + lVar17);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161980();
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(param_3 + lVar17);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_5;
    func_0x00010c087660(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222740(uVar12);
    _objc_release(uVar8);
    _objc_release(uVar12);
  }
  uVar8 = param_5;
  func_0x00010c087760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar8 != 0) {
    uVar12 = *(undefined8 *)(param_3 + _DAT_11276c014);
    uVar8 = param_5;
    func_0x00010c087760(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222740(uVar12);
    _objc_release(uVar8);
  }
  func_0x00010c087760(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010c1a7f60(*(undefined8 *)(param_3 + _DAT_11276c014));
  lVar17 = (long)_DAT_11276c03c;
  uVar18 = *(undefined8 *)(param_3 + lVar17);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1270;
  func_0x00010bf71a00(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar18;
  func_0x00010bf1f320();
  _objc_release(puVar5);
  _objc_release(uVar18);
  if ((int)uVar12 != 0) {
    uVar8 = param_5;
    func_0x00010bf8ba00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar8 != 0) {
      uVar18 = *(undefined8 *)(param_3 + lVar11);
      uVar12 = *(undefined8 *)(param_3 + lVar9);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300(uVar18);
      _objc_release(uVar12);
    }
    uVar8 = param_5;
    func_0x00010bf915a0();
    if ((int)uVar8 != 0) {
      uVar18 = *(undefined8 *)(param_3 + lVar11);
      uVar12 = *(undefined8 *)(param_3 + lVar13);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300(uVar18);
      _objc_release(uVar12);
    }
  }
  uVar8 = param_5;
  func_0x00010bf8ba00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bfe2cc0();
  _objc_release(uVar8);
  if ((int)uVar7 != 0) {
    func_0x00010be35f60(param_3);
  }
  uVar8 = param_5;
  func_0x00010c087660();
  _objc_retainAutoreleasedReturnValue();
  if (uVar8 == 0) {
    uVar7 = param_5;
    func_0x00010c085b40();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar7;
    func_0x00010c2757a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar19;
    func_0x00010c08fa60();
    pcVar15 = (char *)(param_3 + _DAT_11276c090);
    *pcVar15 = uVar10 != 0;
    _objc_release(uVar19);
    _objc_release(uVar7);
  }
  else {
    pcVar15 = (char *)(param_3 + _DAT_11276c090);
    *pcVar15 = '\0';
  }
  _objc_release(uVar8);
  lVar13 = (long)_DAT_11276c018;
  if (*pcVar15 == '\x01') {
    lVar14 = *(long *)(param_3 + lVar13);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar14 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_3 + lVar13));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar14 = param_3;
      func_0x00010bf4dce0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_3 + lVar13);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(lVar14);
      _objc_release(uVar12);
      _objc_release(lVar14);
    }
  }
  uVar12 = *(undefined8 *)(param_3 + lVar13);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar12);
  uVar8 = param_5;
  func_0x00010c085b40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_3 + lVar13);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar12);
  _objc_release(uVar8);
  func_0x00010bde4c20(param_3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar8 = param_5;
  func_0x00010c087760();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar7;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(param_3);
  _objc_release(puVar5);
  _objc_release(uVar19);
  _objc_release(uVar7);
  _objc_release(uVar8);
  uVar8 = param_5;
  func_0x00010c087760(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar7;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(param_3);
  _objc_release(uVar19);
  _objc_release(uVar7);
  _objc_release(uVar8);
  uVar8 = param_5;
  func_0x00010c112fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf51e00();
  lVar13 = (long)_DAT_11276c094;
  uVar12 = *(undefined8 *)(param_3 + lVar13);
  *(ulong *)(param_3 + lVar13) = uVar7;
  _objc_release(uVar12);
  _objc_release(uVar8);
  uVar8 = param_5;
  func_0x00010c155060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf51e00();
  uVar12 = *(undefined8 *)(param_3 + _DAT_11276c098);
  *(ulong *)(param_3 + _DAT_11276c098) = uVar7;
  _objc_release(uVar12);
  _objc_release(uVar8);
  uVar8 = param_5;
  func_0x00010c0b4d20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf51e00();
  uVar12 = *(undefined8 *)(param_3 + _DAT_11276c09c);
  *(ulong *)(param_3 + _DAT_11276c09c) = uVar7;
  _objc_release(uVar12);
  _objc_release(uVar8);
  uVar8 = param_5;
  func_0x00010c152160();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf51e00();
  uVar12 = *(undefined8 *)(param_3 + _DAT_11276c058);
  *(ulong *)(param_3 + _DAT_11276c058) = uVar7;
  _objc_release(uVar12);
  _objc_release(uVar8);
  uVar8 = param_5;
  func_0x00010bf5d520();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf51e00();
  uVar12 = *(undefined8 *)(param_3 + _DAT_11276c0a0);
  *(ulong *)(param_3 + _DAT_11276c0a0) = uVar7;
  _objc_release(uVar12);
  _objc_release(uVar8);
  uVar8 = param_5;
  func_0x00010bf96140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar6);
  _objc_retain(uVar8);
  if (uVar6 == uVar8) {
    _objc_release(uVar8);
    _objc_release(uVar6);
LAB_107c16e80:
    uVar19 = param_5;
    func_0x00010c112fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar16);
    _objc_retain(uVar19);
    if (uVar16 != uVar19) {
      uVar7 = uVar16;
      if (uVar19 == 0) goto LAB_107c16ef4;
      func_0x00010c071ae0();
      _objc_release(uVar19);
      _objc_release(uVar16);
      _objc_release(uVar19);
      _objc_release(uVar8);
      if ((uVar7 & 1) != 0) goto LAB_107c16f88;
      goto LAB_107c16f00;
    }
    _objc_release(uVar19);
    _objc_release(uVar16);
  }
  else {
    uVar7 = uVar6;
    if (uVar8 == 0) {
LAB_107c16ef4:
      _objc_release(uVar7);
    }
    else {
      func_0x00010c071ae0();
      _objc_release(uVar8);
      _objc_release(uVar6);
      if ((int)uVar7 != 0) goto LAB_107c16e80;
    }
    _objc_release(uVar8);
LAB_107c16f00:
    lVar14 = (long)_DAT_11276bffc;
    uVar12 = *(undefined8 *)(param_3 + lVar11);
    uVar8 = param_5;
    func_0x00010bf96140(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_3 + lVar14;
    FUN_107c6f7d4(lVar14,uVar12,uVar8,*(undefined8 *)(param_3 + _DAT_11276bff8),param_3,
                  *(undefined8 *)(param_3 + _DAT_11276c034),
                  *(undefined8 *)(param_3 + _DAT_11276c0a4),*(undefined8 *)(param_3 + lVar13));
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(ulong *)(param_3 + _DAT_11276c0a8);
    *(long *)(param_3 + _DAT_11276c0a8) = lVar14;
  }
  _objc_release(uVar19);
  _objc_release(uVar8);
LAB_107c16f88:
  uVar8 = param_5;
  func_0x00010bf96140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar8 != 0) {
    lVar17 = *(long *)(param_3 + lVar17);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c2328;
    func_0x00010bf71400(PTR_PTR_1126c2328);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar17;
    func_0x00010c067e20();
    _objc_release(puVar5);
    _objc_release(lVar17);
    if (lVar13 != 0) {
      uVar12 = *(undefined8 *)(param_3 + lVar9);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar12);
      func_0x00010be35f60(param_3);
      func_0x00010bf21300(*(undefined8 *)(param_3 + lVar11));
    }
  }
  uVar8 = param_5;
  func_0x00010c0e62e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf03e00();
  *(ulong *)(param_3 + _DAT_11276c060) = uVar7;
  _objc_release(uVar8);
  uVar8 = param_5;
  func_0x00010c0e62e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf53940();
  *(undefined8 *)(param_3 + _DAT_11276c084) = param_1;
  _objc_release(uVar8);
  uVar8 = param_5;
  func_0x00010c07bea0();
  if ((int)uVar8 != 0) {
    lVar11 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_3 + _DAT_11276c024);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar11);
    _objc_release(uVar12);
    _objc_release(lVar11);
  }
  func_0x00010c07bea0(param_5);
  uVar12 = *(undefined8 *)(param_3 + _DAT_11276c024);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar12);
  func_0x00010c1cbe20(param_3);
  _objc_release(uVar16);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 107c17188; end: 107c171e7;  */

void FUN_107c17188(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26e120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be062a0(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107c171e8; end: 107c17293; -[SCDiscoverFeedStoryCollectionViewCell _hideUnderlayViews] */

/* WARNING: Possible PIC construction at 0x000107c17210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107c1723c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107c1726c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107c17240) */
/* WARNING: Removing unreachable block (ram,0x000107c17214) */
/* WARNING: Removing unreachable block (ram,0x000107c17248) */
/* WARNING: Removing unreachable block (ram,0x000107c17224) */
/* WARNING: Removing unreachable block (ram,0x000107c17270) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c171e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c014),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 107c17294; end: 107c179b3; -[SCDiscoverFeedStoryCollectionViewCell _configureCTA:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c17294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined *param_7)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar3 = param_7;
  func_0x00010c087760();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf5d660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = param_7;
  func_0x00010c087760();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf5d660();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  func_0x00010c08fa60(puVar6);
  lVar18 = (long)_DAT_11276c078;
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar18));
  uVar7 = *(undefined8 *)(param_5 + lVar18);
  func_0x00010c074c20(uVar7);
  lVar21 = (long)_DAT_11276c088;
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar21));
  puVar3 = puVar6;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) goto LAB_107c17960;
  puVar1 = (undefined8 *)(param_5 + (long)_DAT_11276c08c);
  puVar3 = param_7;
  func_0x00010c087760(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf5d660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c268d20();
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = param_7;
  func_0x00010c087660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar20 = *(ulong *)(param_5 + lVar18);
  if (uVar20 == 0) {
LAB_107c17470:
    if (puVar3 == (undefined *)0x0) {
LAB_107c174b8:
      puVar3 = param_7;
      func_0x00010c087760();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf5d660();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar5;
      func_0x00010c23b720();
      puVar10 = param_7;
      func_0x00010c087760(param_7);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bf5d660();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c23b700();
      FUN_107c76d04(puVar9,puVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_5 + lVar18);
      *(undefined **)(param_5 + lVar18) = puVar9;
      _objc_release(uVar7);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar5);
      _objc_release(puVar3);
      lVar8 = *(long *)(param_5 + lVar18);
LAB_107c17560:
      func_0x00010c160fc0(lVar8);
      goto LAB_107c1756c;
    }
LAB_107c17474:
    puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + lVar18);
    *(undefined **)(param_5 + lVar18) = puVar3;
    _objc_release(uVar7);
    lVar8 = *(long *)(param_5 + lVar18);
LAB_107c174a0:
    func_0x00010c160fc0(lVar8);
LAB_107c17728:
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + (long)_DAT_11276c0ac));
  }
  else {
    if (puVar3 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___UIButton_1126aec48;
      _objc_opt_class(PTR__OBJC_CLASS___UIButton_1126aec48);
      _objc_opt_isKindOfClass(uVar20,puVar5);
      if ((uVar20 & 1) != 0) goto LAB_107c17440;
      lVar8 = *(long *)(param_5 + lVar18);
      if (lVar8 == 0) goto LAB_107c174b8;
      goto LAB_107c17560;
    }
    puVar5 = PTR_PTR_1126aec40;
    _objc_opt_class(PTR_PTR_1126aec40);
    _objc_opt_isKindOfClass(uVar20,puVar5);
    if ((uVar20 & 1) == 0) {
      lVar8 = *(long *)(param_5 + lVar18);
      if (lVar8 == 0) goto LAB_107c17474;
      goto LAB_107c174a0;
    }
LAB_107c17440:
    func_0x00010c12c960(*(undefined8 *)(param_5 + lVar18));
    uVar7 = *(undefined8 *)(param_5 + lVar18);
    *(undefined8 *)(param_5 + lVar18) = 0;
    _objc_release(uVar7);
    if (*(long *)(param_5 + lVar18) == 0) goto LAB_107c17470;
    func_0x00010c160fc0();
    if (puVar3 != (undefined *)0x0) goto LAB_107c17728;
LAB_107c1756c:
    puVar3 = puVar4;
    func_0x00010bfe5400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    iVar2 = _DAT_11276c0ac;
    if (puVar3 == (undefined *)0x0) goto LAB_107c17728;
    lVar8 = *(long *)(param_5 + (long)_DAT_11276c0ac);
    if (lVar8 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_opt_new();
      uVar7 = *(undefined8 *)(param_5 + (long)iVar2);
      *(undefined **)(param_5 + (long)iVar2) = puVar3;
      _objc_release(uVar7);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(*(undefined8 *)(param_5 + (long)iVar2));
      _objc_release(puVar3);
      lVar8 = *(long *)(param_5 + (long)iVar2);
    }
    func_0x00010c1a7f60(lVar8);
    puVar3 = puVar4;
    func_0x00010bfe5400(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_5 + (long)iVar2));
    _objc_release(puVar5);
    _objc_release(puVar3);
    lVar8 = (long)_DAT_11276c0b0;
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar13 = *(undefined8 *)(param_5 + (long)iVar2);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5a00(puVar4);
    uVar7 = uVar13;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_5 + (long)iVar2);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5a00(puVar4);
    uVar15 = uVar14;
    func_0x00010bf49420(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_5 + lVar8);
    *(undefined **)(param_5 + lVar8) = puVar5;
    _objc_release(uVar16);
    func_0x00010beef8c0(puVar3);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar7);
    _objc_release(uVar13);
  }
  uVar19 = *(ulong *)(param_5 + lVar18);
  puVar3 = PTR_PTR_1126aec40;
  _objc_opt_class(PTR_PTR_1126aec40);
  _objc_opt_isKindOfClass(uVar19,puVar3);
  uVar20 = *(ulong *)(param_5 + lVar18);
  if ((uVar19 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_opt_class(PTR__OBJC_CLASS___UIButton_1126aec48);
    _objc_opt_isKindOfClass(uVar20,puVar3);
    if ((uVar20 & 1) != 0) {
      uVar7 = *(undefined8 *)(param_5 + lVar18);
      _objc_retain(uVar7);
      func_0x00010c181ee0(uVar7);
      uVar20 = param_5;
      func_0x00010bf5d1e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c180a40(uVar7);
      _objc_release(uVar7);
      goto LAB_107c17890;
    }
  }
  else {
    _objc_retain(uVar20);
    puVar3 = param_7;
    func_0x00010c087760(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf5d660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23b700();
    func_0x00010c20eaa0(uVar20);
    _objc_release(puVar5);
    _objc_release(puVar3);
    func_0x00010c216260(uVar20);
    puVar3 = param_7;
    func_0x00010c087760(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf5d660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c3460();
    func_0x00010c1c3ae0(uVar20);
    _objc_release(puVar5);
    _objc_release(puVar3);
    func_0x00010bfe5960(puVar4);
    func_0x00010c161220(uVar20);
    func_0x00010c074c20();
    func_0x00010c1612a0(uVar20);
LAB_107c17890:
    _objc_release(uVar20);
  }
  puVar3 = param_7;
  func_0x00010c087760();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf5d660();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar5;
  func_0x00010c23a6a0();
  if ((int)puVar9 == 0) {
    _objc_release(puVar5);
LAB_107c1792c:
    _objc_release(puVar3);
  }
  else {
    lVar8 = *(long *)(param_5 + lVar21);
    _objc_release(puVar5);
    _objc_release(puVar3);
    if (lVar8 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_opt_new();
      uVar7 = *(undefined8 *)(param_5 + lVar21);
      *(undefined **)(param_5 + lVar21) = puVar3;
      _objc_release(uVar7);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_5 + lVar21));
      goto LAB_107c1792c;
    }
  }
  lVar21 = (long)_DAT_11276c004;
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar21));
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar21));
  uVar7 = *(undefined8 *)(param_5 + lVar18);
  func_0x00010bf21300(*(undefined8 *)(param_5 + lVar21));
LAB_107c17960:
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___UIButtonConfiguration_1126c96c8;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar7);
  func_0x00010bfad700(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x00010c04e840();
  _objc_release(uVar7);
  func_0x00010c16b760(puVar3);
  puVar6 = PTR_PTR_1126b0c40;
  func_0x00010bfe8d40(0x402c000000000000,0x402c000000000000,PTR_PTR_1126b0c40);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x00010bfe77e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar3);
  _objc_release(puVar9);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f2a0(puVar3);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f300(puVar3);
  _objc_release(puVar6);
  puVar6 = puVar3;
  func_0x00010bf13c20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0);
  _objc_release(puVar6);
  func_0x00010c184300(puVar3);
  func_0x00010c1aa6a0(puVar3);
  func_0x00010c181fe0(0x4028000000000000,0x4020000000000000,0x4028000000000000,0x4020000000000000,
                      puVar3);
  _objc_release(puVar4);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107c179b4; end: 107c17bd7; -[SCDiscoverFeedStoryCollectionViewCell ctaButtonWithFooterConfigurationWithCTAText:] */

void FUN_107c179b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIButtonConfiguration_1126c96c8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bfad700(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&uStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x00010c04e840();
  _objc_release(param_3);
  func_0x00010c16b760(puVar1,param_2,puVar2);
  puVar4 = PTR_PTR_1126b0c40;
  func_0x00010bfe8d40(0x402c000000000000,0x402c000000000000,PTR_PTR_1126b0c40,param_2,0x88);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfe77e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f2a0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f300(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010bf13c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0);
  _objc_release(puVar4);
  func_0x00010c184300(puVar1,param_2,0xffffffffffffffff);
  func_0x00010c1aa6a0(puVar1,param_2,8);
  func_0x00010c181fe0(0x4028000000000000,0x4020000000000000,0x4028000000000000,0x4020000000000000,
                      puVar1);
  _objc_release(puVar2);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107c17bd8; end: 107c17bdb; -[SCDiscoverFeedStoryCollectionViewCell _setupDebugViewIfNeeded:] */

void FUN_107c17bd8(void)

{
  return;
}



/* Entry: 107c17bdc; end: 107c17c9f; -[SCDiscoverFeedStoryCollectionViewCell _debugGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c17bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126c22b8;
  uVar4 = *(ulong *)(param_1 + _DAT_11276c048);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010bf65fa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11276bff8));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107c17ca0; end: 107c17dbb; -[SCDiscoverFeedStoryCollectionViewCell _setupThumbnailImageViewWithImage:viewModel:] */

void FUN_107c17ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107c17dbc; end: 107c17def;  */

void FUN_107c17dbc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea8620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c17df0; end: 107c17edf; -[SCDiscoverFeedStoryCollectionViewCell _setThumbnailImageViewWithFinalImage:viewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c17df0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + _DAT_11276c048);
  _objc_retain(param_4);
  _objc_retain(lVar2);
  if (param_4 == lVar2) {
    _objc_release(lVar2);
    _objc_release(param_4);
LAB_107c17e84:
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11276c00c),param_2,param_3);
    *(undefined1 *)(param_1 + _DAT_11276c044) = 1;
    lVar2 = (long)_DAT_11276c0b4;
    _objc_retain(param_3);
    lVar1 = *(long *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
  }
  else {
    lVar1 = param_4;
    if (lVar2 != 0) {
      func_0x00010c071ae0(param_4,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(param_4);
      if ((int)lVar1 == 0) goto LAB_107c17ec0;
      goto LAB_107c17e84;
    }
  }
  _objc_release(lVar1);
LAB_107c17ec0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c17ee0; end: 107c1842f; -[SCDiscoverFeedStoryCollectionViewCell _downloadThumbnailWithThumbnailDataModel:viewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c17ee0(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_1d8 [8];
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_140 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_107c18430;
  uStack_80 = 0x107c18440;
  uStack_78 = 0;
  puStack_138 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_107c18430;
  uStack_b0 = 0x107c18440;
  uStack_a8 = 0;
  puStack_130 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_107c18430;
  uStack_e0 = 0x107c18440;
  uStack_d8 = 0;
  puStack_128 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 7;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_107c18448;
  puStack_148 = &UNK_1108d4ea8;
  puStack_118 = puStack_128;
  puStack_f8 = puStack_130;
  puStack_c8 = puStack_138;
  puStack_98 = puStack_140;
  func_0x00010c0c0cc0(param_3);
  lVar2 = puStack_98[5];
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    lVar2 = puStack_c8[5];
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      puVar5 = PTR_PTR_1126b58e0;
      _objc_opt_new(PTR_PTR_1126b58e0);
      func_0x00010c2bae20();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2a8ea0(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b6d40(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_initWeak(auStack_168,param_1);
      uVar3 = *(undefined8 *)(param_1 + _DAT_11276c040);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf21f60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_11276c030);
      func_0x00010c11de00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puStack_198 = puVar1;
      uStack_190 = 0xc2000000;
      pcStack_188 = FUN_107c1851c;
      puStack_180 = &UNK_1108acaf0;
      _objc_copyWeak(auStack_170,auStack_168);
      _objc_retain(param_4);
      uStack_178 = param_4;
      func_0x00010bfa5420(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(puVar6);
      _objc_release(uVar3);
      _objc_release(uStack_178);
      _objc_destroyWeak(auStack_170);
      _objc_destroyWeak(auStack_168);
      goto LAB_107c18320;
    }
  }
  puVar5 = param_3;
  func_0x000107dd4c00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  lVar2 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar6);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126b85a8;
  _objc_alloc(PTR_PTR_1126b85a8);
  puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c01cf00(puVar7);
  _objc_release(puVar8);
  _objc_initWeak(auStack_168,param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276c034);
  puStack_1d0 = puVar1;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_107c18578;
  puStack_1b8 = &UNK_110849840;
  _objc_copyWeak(auStack_1a0,auStack_168);
  _objc_retain(param_4);
  uStack_1b0 = param_4;
  _objc_retain(param_3);
  puStack_1a8 = param_3;
  func_0x00010bfa7900();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1d8,auStack_168);
  _objc_retain(param_4);
  _objc_retain(uVar4);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_1d8);
  _objc_release(uVar4);
  _objc_release(puStack_1a8);
  _objc_release(uStack_1b0);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_168);
  _objc_release(puVar7);
  _objc_release(puVar6);
LAB_107c18320:
  _objc_release(puVar5);
  __Block_object_dispose(&uStack_120,8);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107c18430; end: 107c18447;  */

void FUN_107c18430(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107c18448; end: 107c1851b;  */

void FUN_107c18448(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = param_5;
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107c1851c; end: 107c18577;  */

void FUN_107c1851c(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010beb0820();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107c18578; end: 107c1867b;  */

void FUN_107c18578(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_58,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 107c1867c; end: 107c186ef;  */

void FUN_107c1867c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010beb0820(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c186f0; end: 107c186f3;  */

void FUN_107c186f0(void)

{
  return;
}



/* Entry: 107c186f4; end: 107c187e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c186f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    lVar6 = lVar1;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar5);
    _objc_retain(lVar6);
    if (lVar5 == lVar6) {
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar6);
LAB_107c18798:
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      lVar6 = (long)_DAT_11276c05c;
      _objc_retain(uVar4);
      uVar3 = *(undefined8 *)(lVar1 + lVar6);
      *(undefined8 *)(lVar1 + lVar6) = uVar4;
      _objc_release(uVar3);
      goto LAB_107c187cc;
    }
    if (lVar6 == 0) {
      _objc_release(lVar5);
    }
    else {
      lVar2 = lVar5;
      func_0x00010c071ae0(lVar5,param_2,lVar6);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar6);
      if ((int)lVar2 != 0) goto LAB_107c18798;
    }
  }
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x28));
LAB_107c187cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107c187e4; end: 107c18847; -[SCDiscoverFeedStoryCollectionViewCell videoAutoPlayTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107c187e4(long param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  lVar1 = (long)_DAT_11276c06c;
  lVar2 = *(long *)(param_1 + _DAT_11276c070);
  dVar3 = *(double *)(param_1 + lVar1);
  if (0.0 < dVar3) {
    _CFAbsoluteTimeGetCurrent();
    lVar2 = lVar2 + (long)((dVar3 - *(double *)(param_1 + lVar1)) * 1000.0);
  }
  return lVar2;
}



/* Entry: 107c18848; end: 107c1888b; -[SCDiscoverFeedStoryCollectionViewCell resetAutoPlayTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c18848(long param_1)

{
  long lVar1;
  double dVar2;
  
  *(undefined8 *)(param_1 + _DAT_11276c070) = 0;
  lVar1 = (long)_DAT_11276c06c;
  dVar2 = *(double *)(param_1 + lVar1);
  if (0.0 < dVar2) {
    _CFAbsoluteTimeGetCurrent();
    *(double *)(param_1 + lVar1) = dVar2;
  }
  return;
}



/* Entry: 107c1888c; end: 107c18a27; -[SCDiscoverFeedStoryCollectionViewCell _handleTapAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1888c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010be27b60(param_3,param_4,param_5);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_3, func_0x00010be261a0(param_3,param_4,param_5), (uVar1 & 1) == 0)) {
    uVar2 = *(ulong *)(param_3 + (long)_DAT_11276c000);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bfd1b40();
    _objc_release(uVar2);
    if ((uVar1 & 1) == 0) {
      func_0x00010c09ef00(param_5,param_4,param_3);
      uVar1 = param_3;
      func_0x00010beca700(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_107c18a28;
      puStack_70 = &UNK_110a010d8;
      uVar2 = param_3;
      uStack_68 = param_3;
      uStack_60 = param_1;
      uStack_58 = param_2;
      func_0x00010be61980(param_3,param_4,uVar1,&puStack_88);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      if (uVar2 != 0) {
        puVar3 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf17b60();
        _objc_release(puVar3);
        func_0x00010bfd0140(*(undefined8 *)(param_3 + (long)_DAT_11276bff8),param_4,param_3,uVar2,
                            param_3);
        puVar3 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf941e0();
        _objc_release(puVar3);
      }
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107c18a28; end: 107c18afb;  */

void FUN_107c18a28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  _objc_retain(param_6);
  func_0x00010bf4dce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c2971c0(param_3,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_6);
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(*(undefined8 *)(param_5 + 0x28),*(undefined8 *)(param_5 + 0x30),
                      PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_6);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c18afc; end: 107c18c63; -[SCDiscoverFeedStoryCollectionViewCell _handleCtaTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_107c18afc(double param_1,double param_2,double param_3,double param_4,long param_5,
             undefined8 param_6,undefined8 param_7)

{
  double *pdVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  double dStack_60;
  double dStack_58;
  
  _objc_retain(param_7);
  lVar6 = (long)_DAT_11276c078;
  uVar3 = *(ulong *)(param_5 + lVar6);
  if ((uVar3 != 0) && (func_0x00010c074c20(), (uVar3 & 1) == 0)) {
    lVar5 = (long)_DAT_11276c0a0;
    if (*(long *)(param_5 + lVar5) != 0) {
      func_0x00010c09ef00(param_7,param_6,param_5);
      dVar7 = param_1;
      dVar9 = param_2;
      func_0x00010c09ef00(param_7,param_6,*(undefined8 *)(param_5 + lVar6));
      iVar2 = (int)*(undefined8 *)(param_5 + lVar6);
      dVar8 = dVar7;
      dVar10 = dVar9;
      func_0x00010bf20c00();
      pdVar1 = (double *)(param_5 + _DAT_11276c08c);
      _CGRectContainsPoint
                (dVar8 + pdVar1[1],dVar10 + *pdVar1,param_3 - (pdVar1[1] + pdVar1[3]),
                 param_4 - (*pdVar1 + pdVar1[2]),dVar7,dVar9);
      if (iVar2 != 0) {
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_107c18c64;
        puStack_70 = &UNK_110a010d8;
        lVar6 = param_5;
        lStack_68 = param_5;
        dStack_60 = param_1;
        dStack_58 = param_2;
        func_0x00010be61980(param_5,param_6,*(undefined8 *)(param_5 + lVar5),&puStack_88);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd0140(*(undefined8 *)(param_5 + _DAT_11276bff8),param_6,param_5,lVar6,param_5)
        ;
        _objc_release(lVar6);
        uVar4 = 1;
        goto LAB_107c18c3c;
      }
    }
  }
  uVar4 = 0;
LAB_107c18c3c:
  _objc_release(param_7);
  return uVar4;
}



/* Entry: 107c18c64; end: 107c18e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c18c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uVar4 = *(undefined8 *)(param_5 + 0x20);
  _objc_retain(param_6);
  func_0x00010bf4dce0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c2971c0(param_3,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2090;
  func_0x00010bf34080(PTR_PTR_1126c2090);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(*(undefined8 *)(param_5 + 0x28),*(undefined8 *)(param_5 + 0x30),
                      PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2090;
  func_0x00010bf5d540(PTR_PTR_1126c2090);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(*(long *)(param_5 + 0x20) + (long)_DAT_11276c020);
  func_0x00010bfe6360(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2090;
  func_0x00010c1315e0(PTR_PTR_1126c2090);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_6);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107c18e0c; end: 107c18f23; -[SCDiscoverFeedStoryCollectionViewCell _mutateActionModel:block:] */

void FUN_107c18e0c(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    _objc_retain(param_3);
    puVar3 = param_3;
  }
  else {
    func_0x00010c0d3c80(puVar1);
    (**(code **)(param_4 + 0x10))(param_4,puVar1);
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    puVar4 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107c18f24; end: 107c1917f; -[SCDiscoverFeedStoryCollectionViewCell _tapActionModelForTapLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c18f24(double param_1,double param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  
  puVar2 = PTR_PTR_1126c22b8;
  uVar8 = *(ulong *)(param_3 + _DAT_11276c048);
  dVar12 = param_1;
  _objc_retain(uVar8);
  _objc_opt_class(puVar2);
  uVar3 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar2);
  uVar1 = uVar8;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar8);
  uVar3 = uVar1;
  func_0x00010bf96140();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c116500();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0 || uVar8 == 0) {
LAB_107c19060:
    lVar10 = (long)_DAT_11276c094;
    uVar4 = *(ulong *)(param_3 + lVar10);
    if (uVar4 == 0) goto LAB_107c19144;
    lVar11 = (long)_DAT_11276c098;
    if (*(long *)(param_3 + lVar11) != 0) {
      if (*(char *)(param_3 + _DAT_11276c090) == '\x01') {
        lVar9 = (long)_DAT_11276c018;
        uVar6 = *(ulong *)(param_3 + lVar9);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_3;
        func_0x00010bf4dce0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_3 + lVar9);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf512a0(param_1,param_2,lVar5);
        uVar4 = uVar6;
        func_0x00010c102ae0();
        _objc_release(uVar7);
        _objc_release(lVar5);
        _objc_release(uVar6);
        if ((uVar4 & 1) != 0) {
LAB_107c19138:
          uVar4 = *(ulong *)(param_3 + lVar11);
          goto LAB_107c1913c;
        }
      }
      else {
        func_0x00010bf20c00(param_3);
        _CGRectGetHeight();
        if (dVar12 * 0.5 < param_2) goto LAB_107c19138;
      }
      uVar4 = *(ulong *)(param_3 + lVar10);
    }
  }
  else {
    lVar10 = (long)_DAT_11276bffc;
    uVar4 = *(ulong *)(param_3 + lVar10);
    func_0x00010c074c20();
    if ((uVar4 & 1) != 0) goto LAB_107c19060;
    lVar5 = *(long *)(param_3 + _DAT_11276c03c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c2328;
    func_0x00010bf71400(PTR_PTR_1126c2328);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar5;
    func_0x00010c067e20();
    _objc_release(puVar2);
    _objc_release(lVar5);
    if (lVar11 == 0) goto LAB_107c19060;
    func_0x00010bf512a0(param_1,param_2,param_3);
    uVar6 = *(ulong *)(param_3 + lVar10);
    func_0x00010c080aa0();
    uVar4 = uVar8;
    if ((uVar6 & 1) != 0) {
      uVar4 = 0;
      goto LAB_107c19144;
    }
  }
LAB_107c1913c:
  _objc_retain(uVar4);
LAB_107c19144:
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107c19180; end: 107c1918f; -[SCDiscoverFeedStoryCollectionViewCell _handleAutoPlayControlsMuteButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c19180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c028),PTR_s_handleAutoPlayMuteButtonTap__1125d1ab8)
  ;
  return;
}



/* Entry: 107c19190; end: 107c1923b; -[SCDiscoverFeedStoryCollectionViewCell _handleLongPressAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c19190(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if ((lVar1 == 2) || (lVar1 = param_3, func_0x00010c252440(), lVar1 == 1)) {
    func_0x00010c14c8a0(param_3);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276bff8);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276c09c);
    lVar1 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar2,param_2,param_1,uVar3,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c1923c; end: 107c1939b; -[SCDiscoverFeedStoryCollectionViewCell didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1923c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    func_0x00010bf7dbc0(*(undefined8 *)(param_1 + _DAT_11276bff4));
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107c1939c;
    puStack_60 = &UNK_110850cf8;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107c1939c; end: 107c193d3;  */

void FUN_107c1939c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd8500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c193d4; end: 107c1950b; -[SCDiscoverFeedStoryCollectionViewCell _calculateCellFrameAndDispatchEventIfNecessary:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c193d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf20c00(param_1);
  func_0x00010bf51460(param_1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c14c760();
  iVar1 = (int)puVar3;
  _CGRectIntersectsRect();
  if (iVar1 == 0) {
    uVar4 = param_5;
    func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110f19eb8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    _objc_release(puVar2);
    if ((int)uVar5 == 0) goto LAB_107c194d8;
  }
  else {
    _objc_release(puVar2);
  }
  func_0x00010bf7dbc0(*(undefined8 *)(param_1 + _DAT_11276bff4),param_2,param_3,param_4,param_5);
LAB_107c194d8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c1950c; end: 107c1957f; -[SCDiscoverFeedStoryCollectionViewCell prepareForAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1950c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf03e00();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf03e00();
    *(long *)(param_1 + _DAT_11276c064) = lVar1;
    func_0x00010c1cbe20(param_1);
    func_0x00010c08cdc0(param_1);
    func_0x00010c08cdc0(*(undefined8 *)(param_1 + _DAT_11276c014));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c19580; end: 107c196db; -[SCDiscoverFeedStoryCollectionViewCell animate:completion:] */

void FUN_107c19580(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010bf03e00();
  if (uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010bf03e00();
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    if ((uVar2 & 1) == 0) {
      uVar2 = param_4;
      func_0x00010bf03e00();
      if (((uint)uVar2 >> 1 & 1) != 0) {
        func_0x00010bf5d4a0(param_4);
        uVar3 = param_1;
        func_0x00010bf03ae0(param_4);
        func_0x00010bdcab00(param_1,uVar3,param_2,param_3,param_5);
      }
    }
    else {
      func_0x00010bf53920(param_4);
      uVar3 = param_1;
      func_0x00010bf03ae0(param_4);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_107c196dc;
      puStack_50 = &UNK_110842e18;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_107c1971c;
      puStack_88 = &UNK_110866910;
      uStack_48 = param_2;
      _objc_retain(param_4);
      uStack_80 = param_4;
      _objc_retain(param_5);
      uStack_78 = param_2;
      uStack_70 = param_5;
      func_0x00010bf03440(param_1,uVar3,puVar1,param_3,6,&puStack_68,&puStack_a0);
      _objc_release(uStack_70);
      _objc_release(uStack_80);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107c196dc; end: 107c1971b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c196dc(long param_1)

{
  *(ulong *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276c064) =
       *(ulong *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276c064) ^ 1;
  func_0x00010c1cbe20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 107c1971c; end: 107c1979f;  */

void FUN_107c1971c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = (uint)*(undefined8 *)(param_2 + 0x20);
  func_0x00010bf03e00();
  if ((uVar2 >> 1 & 1) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bf5d4a0(*(undefined8 *)(param_2 + 0x20));
    uVar4 = param_1;
    func_0x00010bf5d480(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdcab10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,uVar4,uVar1,PTR_s__animateCtaWithDuration_delay_co_112550460,
               *(undefined8 *)(param_2 + 0x30));
    return;
  }
  lVar3 = *(long *)(param_2 + 0x30);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107c19758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,1);
    return;
  }
  return;
}



/* Entry: 107c197a0; end: 107c198d3; -[SCDiscoverFeedStoryCollectionViewCell _animateCtaWithDuration:delay:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c197a0(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_3 + _DAT_11276c068);
  *(undefined **)(param_3 + _DAT_11276c068) = puVar1;
  _objc_release(uVar2);
  _objc_retain(puVar1);
  _objc_initWeak(auStack_48,param_3);
  uVar2 = 0;
  _dispatch_time(0,(long)(param_2 * 1000000000.0));
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107c198d4;
  puStack_70 = &UNK_1108484f8;
  _objc_copyWeak(auStack_58,auStack_48);
  puStack_68 = puVar1;
  uStack_60 = param_5;
  uStack_50 = param_1;
  _objc_retain(param_5);
  _objc_retain(puVar1);
  func_0x00010058c530(uVar2,PTR___dispatch_main_q_11034be20,&puStack_88);
  _objc_release(uStack_60);
  _objc_release(puStack_68);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107c198d4; end: 107c19a43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c198d4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + _DAT_11276c068) == *(long *)(param_1 + 0x20)) {
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_107c19a44;
      puStack_68 = &UNK_110848708;
      _objc_copyWeak(auStack_58,param_1 + 0x30);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar4);
      uStack_60 = uVar4;
      _objc_copyWeak(auStack_88,param_1 + 0x30);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar4);
      func_0x00010bf03440(uVar5,0,puVar1);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_88);
      _objc_release(uStack_60);
      _objc_destroyWeak(auStack_58);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x28);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x10))(lVar3,0);
      }
    }
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 107c19a44; end: 107c19b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c19a44(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0);
    }
  }
  else {
    *(ulong *)(lVar1 + _DAT_11276c064) = *(ulong *)(lVar1 + _DAT_11276c064) ^ 2;
    func_0x00010c1cbe20(lVar1);
    func_0x00010c08cdc0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107c19b04; end: 107c19c3b; -[SCDiscoverFeedStoryCollectionViewCell _onCtaAnimationFinished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c19b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_7);
  lVar4 = (long)_DAT_11276c078;
  uVar1 = *(ulong *)(param_5 + lVar4);
  func_0x00010c074c20();
  if ((uVar1 & 1) == 0) {
    lVar2 = param_5;
    func_0x00010c262ca0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar1 = *(ulong *)(param_5 + lVar4);
    uVar3 = param_1;
    uVar5 = param_2;
    uVar6 = param_3;
    uVar7 = param_4;
    func_0x00010bf20c00(uVar1);
    func_0x00010c262ca0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51460(uVar3,uVar5,uVar6,uVar7);
    _CGRectContainsRect(param_1,param_2,param_3,param_4,uVar3,uVar5,uVar6,uVar7);
    _objc_release(param_5);
    _objc_release(lVar2);
    if ((uVar1 & 1) == 0) goto LAB_107c19c04;
    if (param_7 == 0) goto LAB_107c19c18;
    uVar3 = 1;
  }
  else {
LAB_107c19c04:
    if (param_7 == 0) goto LAB_107c19c18;
    uVar3 = 0;
  }
  (**(code **)(param_7 + 0x10))(param_7,uVar3);
LAB_107c19c18:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 107c19c3c; end: 107c19cff; -[SCDiscoverFeedStoryCollectionViewCell viewToAnimateOnTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c19c3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11276bffc;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c074c20();
  if ((uVar1 & 1) == 0) {
    func_0x00010c09ef00(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
    uVar1 = *(ulong *)(param_1 + lVar3);
    func_0x00010c080aa0();
    if ((uVar1 & 1) == 0) goto LAB_107c19c88;
  }
  else {
LAB_107c19c88:
    uVar1 = *(ulong *)(param_1 + _DAT_11276c028);
    func_0x00010c080ac0(uVar1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      uVar2 = *(ulong *)(param_1 + _DAT_11276c000);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c080ae0();
      _objc_release(uVar2);
      if ((uVar1 & 1) == 0) {
        _objc_retain(param_1);
        goto LAB_107c19cd8;
      }
    }
  }
  param_1 = 0;
LAB_107c19cd8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107c19d00; end: 107c19d07; -[SCDiscoverFeedStoryCollectionViewCell shouldShowBackgroundView] */

undefined8 FUN_107c19d00(void)

{
  return 0;
}



/* Entry: 107c19d08; end: 107c19d17; -[SCDiscoverFeedStoryCollectionViewCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c19d08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276bfec);
}



/* Entry: 107c19d18; end: 107c19d27; -[SCDiscoverFeedStoryCollectionViewCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c19d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11276bfec) = param_3;
  return;
}



/* Entry: 107c19d28; end: 107c19d37; -[SCDiscoverFeedStoryCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c19d28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276bff8);
}



/* Entry: 107c19d38; end: 107c19d47; -[SCDiscoverFeedStoryCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c19d38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c048);
}



/* Entry: 107c19d48; end: 107c19d5f; -[SCDiscoverFeedStoryCollectionViewCell viewportFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c19d48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c04c);
}



/* Entry: 107c19d60; end: 107c19d77; -[SCDiscoverFeedStoryCollectionViewCell setViewportFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c19d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11276c04c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 107c19d78; end: 107c19d87; -[SCDiscoverFeedStoryCollectionViewCell friendsContextLabelBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c19d78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c038);
}



/* Entry: 107c19d88; end: 107c19d97; -[SCDiscoverFeedStoryCollectionViewCell imageFetchingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c19d88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c034);
}



/* Entry: 107c19d98; end: 107c19da7; -[SCDiscoverFeedStoryCollectionViewCell storiesConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c19d98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c03c);
}



/* Entry: 107c19da8; end: 107c19db7; -[SCDiscoverFeedStoryCollectionViewCell bitmojiImageFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c19da8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c040);
}



/* Entry: 107c19db8; end: 107c19dc7; -[SCDiscoverFeedStoryCollectionViewCell bitmojiSelfieFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c19db8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c0a4);
}



/* Entry: 107c19dc8; end: 107c19e07; -[SCDiscoverFeedStoryCollectionViewCell setBitmojiSelfieFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c19dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c0a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c19e08; end: 107c19e17; -[SCDiscoverFeedStoryCollectionViewCell truncateYaxisFromBottom] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107c19e08(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276bff0);
}



/* Entry: 107c19e18; end: 107c19e27; -[SCDiscoverFeedStoryCollectionViewCell setTruncateYaxisFromBottom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c19e18(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276bff0) = param_3;
  return;
}



/* Entry: 107c19e28; end: 107c19e37; -[SCDiscoverFeedStoryCollectionViewCell setStoryThumbnailImageLoaded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c19e28(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276c044) = param_3;
  return;
}



/* Entry: 107c19e38; end: 107c19e47; -[SCDiscoverFeedStoryCollectionViewCell storyThumbnailImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c19e38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c0b4);
}



/* Entry: 107c19e48; end: 107c19e87; -[SCDiscoverFeedStoryCollectionViewCell setStoryThumbnailImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c19e48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c0b4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c19e88; end: 107c1a107; -[SCDiscoverFeedStoryCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c19e88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c0b4,0);
  _objc_storeStrong(param_1 + _DAT_11276c0a4,0);
  _objc_storeStrong(param_1 + _DAT_11276c040,0);
  _objc_storeStrong(param_1 + _DAT_11276c048,0);
  _objc_storeStrong(param_1 + _DAT_11276bff8,0);
  _objc_storeStrong(param_1 + _DAT_11276c02c,0);
  _objc_storeStrong(param_1 + _DAT_11276c024,0);
  _objc_storeStrong(param_1 + _DAT_11276c030,0);
  _objc_storeStrong(param_1 + _DAT_11276bff4,0);
  _objc_storeStrong(param_1 + _DAT_11276c0a8,0);
  _objc_storeStrong(param_1 + _DAT_11276c0a0,0);
  _objc_storeStrong(param_1 + _DAT_11276c058,0);
  _objc_storeStrong(param_1 + _DAT_11276c09c,0);
  _objc_storeStrong(param_1 + _DAT_11276c098,0);
  _objc_storeStrong(param_1 + _DAT_11276c094,0);
  _objc_storeStrong(param_1 + _DAT_11276c080,0);
  _objc_storeStrong(param_1 + _DAT_11276c07c,0);
  _objc_storeStrong(param_1 + _DAT_11276c068,0);
  _objc_storeStrong(param_1 + _DAT_11276c0b0,0);
  _objc_storeStrong(param_1 + _DAT_11276c088,0);
  _objc_storeStrong(param_1 + _DAT_11276c0ac,0);
  _objc_storeStrong(param_1 + _DAT_11276c078,0);
  _objc_storeStrong(param_1 + _DAT_11276c028,0);
  _objc_storeStrong(param_1 + _DAT_11276c010,0);
  _objc_storeStrong(param_1 + _DAT_11276c000,0);
  _objc_storeStrong(param_1 + _DAT_11276c014,0);
  _objc_storeStrong(param_1 + _DAT_11276c018,0);
  _objc_storeStrong(param_1 + _DAT_11276bffc,0);
  _objc_storeStrong(param_1 + _DAT_11276c020,0);
  _objc_storeStrong(param_1 + _DAT_11276c01c,0);
  _objc_storeStrong(param_1 + _DAT_11276c0b8,0);
  _objc_storeStrong(param_1 + _DAT_11276c00c,0);
  _objc_storeStrong(param_1 + _DAT_11276c05c,0);
  _objc_storeStrong(param_1 + _DAT_11276c038,0);
  _objc_storeStrong(param_1 + _DAT_11276c03c,0);
  _objc_storeStrong(param_1 + _DAT_11276c034,0);
  _objc_storeStrong(param_1 + _DAT_11276c004,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c008,0);
  return;
}



/* Entry: 107c1a108; end: 107c1a277;  */

void FUN_107c1a108(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bf529e0();
  puVar1 = puVar6;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_retain();
    _objc_alloc(puVar1);
    func_0x00010c050900();
    _objc_release(puVar6);
    func_0x00010c178280(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c1a278; end: 107c1a3ff;  */

void FUN_107c1a278(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c050900();
  _objc_release(param_1);
  func_0x00010c178280(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c1a400; end: 107c1a44f;  */

void FUN_107c1a400(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_retain();
  if (param_1 == 0) {
    func_0x000108fe353c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_1);
    lVar1 = param_1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107c1a450; end: 107c1a4ff; -[SCDiscoverFeedStoryIconView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c1a450(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fa390;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    func_0x00010c160f00(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar4 = (long)_DAT_11276c0bc;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c1a500; end: 107c1a557; -[SCDiscoverFeedStoryIconView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1a500(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa390;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11276c0bc));
  return;
}



/* Entry: 107c1a558; end: 107c1a637; -[SCDiscoverFeedStoryIconView configureWithStoryIconOption:] */

/* WARNING: Possible PIC construction at 0x000107c1a5b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107c1a5b8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1a558(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_3 - 1U < 3) {
    puVar2 = PTR_PTR_1126b0c40;
    func_0x00010bfe8d40(0x4032000000000000,0x4032000000000000,PTR_PTR_1126b0c40,param_2,
                        *(undefined8 *)(&UNK_10dee2a90 + (param_3 - 1U) * 8));
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276c0bc);
  }
  else {
    func_0x00010c1a7f60(param_1,param_2,1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276c0bc);
    puVar2 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setImage__1126481e8,puVar2);
  return;
}



/* Entry: 107c1a638; end: 107c1a643; -[SCDiscoverFeedStoryIconView intrinsicContentSize] */

undefined1  [16] FUN_107c1a638(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4032000000000000;
  auVar1._0_8_ = 0x4032000000000000;
  return auVar1;
}



/* Entry: 107c1a644; end: 107c1a657; -[SCDiscoverFeedStoryIconView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1a644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c0bc,0);
  return;
}



/* Entry: 107c1a658; end: 107c1a707; -[SCDiscoverFeedStoryViewModel xLogObjectInfo] */

void FUN_107c1a658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110eb3f98;
  func_0x00010c259740();
  func_0x00010c0df880(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_30,&ppuStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107c1a708; end: 107c1a713; +[SCDiscoverFeedExpandedPlaceholderCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_107c1a708(void)

{
  return;
}



/* Entry: 107c1a714; end: 107c1a723; -[SCDiscoverFeedExpandedPlaceholderCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c1a714(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c0c0);
}



/* Entry: 107c1a724; end: 107c1a763; -[SCDiscoverFeedExpandedPlaceholderCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1a724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c0c0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c1a764; end: 107c1a777; -[SCDiscoverFeedExpandedPlaceholderCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1a764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c0c0,0);
  return;
}



/* Entry: 107c1a778; end: 107c1a77f; +[SCDiscoverFeedPlaceholderCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_107c1a778(void)

{
  return;
}



/* Entry: 107c1a780; end: 107c1a78f; -[SCDiscoverFeedPlaceholderCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c1a780(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c0c4);
}



/* Entry: 107c1a790; end: 107c1a7cf; -[SCDiscoverFeedPlaceholderCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1a790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c0c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c1a7d0; end: 107c1a7e3; -[SCDiscoverFeedPlaceholderCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1a7d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c0c4,0);
  return;
}



/* Entry: 107c1a7e4; end: 107c1a87b; -[SCDiscoverFeedAutoPlaybackControlsContainer initWithContentView:] */

undefined1 * FUN_107c1a7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa398;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107c1a87c; end: 107c1a8ab;  */

void FUN_107c1a87c(void)

{
  _objc_alloc(PTR_PTR_1126d7330);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c1a8ac; end: 107c1abb7; -[SCDiscoverFeedAutoPlaybackControlsContainer _createControlsViewIfNeeded] */

/* WARNING: Possible PIC construction at 0x000107c1a910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107c1a934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107c1a958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107c1a980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107c1a9e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107c1aa38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107c1aa8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107c1aa3c) */
/* WARNING: Removing unreachable block (ram,0x000107c1a9e4) */
/* WARNING: Removing unreachable block (ram,0x000107c1a984) */
/* WARNING: Removing unreachable block (ram,0x000107c1a95c) */
/* WARNING: Removing unreachable block (ram,0x000107c1a938) */
/* WARNING: Removing unreachable block (ram,0x000107c1a914) */
/* WARNING: Removing unreachable block (ram,0x000107c1aa90) */

void FUN_107c1a8ac(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c06f880();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    if (uVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      goto code_r0x00010c269d40;
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bdec800();
  uVar2 = *(undefined8 *)(uVar1 + 0x10);
code_r0x00010c269d40:
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_target_112678178);
  return;
}



/* Entry: 107c1abb8; end: 107c1abdb; -[SCDiscoverFeedAutoPlaybackControlsContainer autoPlayControlsView] */

void FUN_107c1abb8(long param_1)

{
  func_0x00010bdec800();
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 107c1abdc; end: 107c1aca3; -[SCDiscoverFeedAutoPlaybackControlsContainer setAutoPlayControlsActive:withDelegate:] */

void FUN_107c1abdc(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  func_0x00010bdec800(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(param_4);
  _objc_release(uVar1);
  if (param_3 != 0) {
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21300(lVar2,param_2,uVar1);
    _objc_release(uVar1);
    _objc_release(lVar2);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c1aca4; end: 107c1ad17; -[SCDiscoverFeedAutoPlaybackControlsContainer setAutoPlayControlsMuteState:] */

void FUN_107c1aca4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107c1ad18; end: 107c1ad7b; -[SCDiscoverFeedAutoPlaybackControlsContainer autoPlayControlsCustomActions] */

void FUN_107c1ad18(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c06f880();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (iVar1 != 0) {
    puVar2 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d4180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107c1ad7c; end: 107c1ae57; -[SCDiscoverFeedAutoPlaybackControlsContainer handleAutoPlayMuteButtonTap:] */

undefined8
FUN_107c1ad7c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_3 + 0x10);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(ulong *)(param_3 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_3 + 0x10);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_5,param_4,uVar5);
      _objc_release(uVar5);
      uVar4 = *(undefined8 *)(param_3 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c080aa0(param_1,param_2);
      _objc_release(uVar4);
      goto LAB_107c1ae38;
    }
  }
  uVar5 = 0;
LAB_107c1ae38:
  _objc_release(param_5);
  return uVar5;
}



/* Entry: 107c1ae58; end: 107c1af4f; -[SCDiscoverFeedAutoPlaybackControlsContainer isTapOnControlsButton:] */

undefined8
FUN_107c1ae58(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  lVar1 = *(long *)(param_3 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_3 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_3 + 0x10);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_5,param_4,uVar5);
      _objc_release(uVar5);
      uVar4 = *(undefined8 *)(param_3 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c080aa0(param_1,param_2);
      _objc_release(uVar4);
      goto LAB_107c1af2c;
    }
  }
  uVar5 = 0;
LAB_107c1af2c:
  _objc_release(param_5);
  return uVar5;
}



/* Entry: 107c1af50; end: 107c1af97; -[SCDiscoverFeedAutoPlaybackControlsContainer reset] */

void FUN_107c1af50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c16ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAutoPlayControlsMuteState__112638db0,1);
  return;
}



/* Entry: 107c1af98; end: 107c1afa3; -[SCDiscoverFeedAutoPlaybackControlsContainer setControlsViewHeightConstant:] */

void FUN_107c1af98(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_setConstant__11263de70);
  return;
}


