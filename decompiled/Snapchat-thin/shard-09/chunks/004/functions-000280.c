/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106cfc22c; end: 106cfc813; -[SCGalleryCameraRollTabController _updateEmptyStateV2] */

void FUN_106cfc22c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar2 == (undefined *)0x0) {
LAB_106cfc290:
    if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
      func_0x00010bf10fa0();
      if (puVar2 != (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
        func_0x00010bf10fa0();
        if (puVar2 != (undefined *)0x2) {
          puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
          func_0x00010bf10fa0();
          if (puVar2 != (undefined *)0x1) {
            func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x78));
            uVar20 = 8;
            goto LAB_106cfc2d0;
          }
        }
      }
      uVar20 = 6;
    }
    else {
      uVar20 = 7;
    }
LAB_106cfc2d0:
    if (*(long *)(param_1 + 0x58) != 0) {
      puVar2 = *(undefined **)(param_1 + 0x50);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010c28b250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (puVar2,PTR_s_updateToNewCameraRollViewType__1126806b8,uVar20);
        return;
      }
      goto LAB_106cfc810;
    }
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar20 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar2;
    _objc_release(uVar20);
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0x18));
    func_0x00010c219b60(*(undefined8 *)(param_1 + 0x58));
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c274200(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c274200(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar3;
    func_0x00010bf493a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar20);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c08de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c08de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar3;
    func_0x00010bf493a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar20);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c2793a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c2793a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar3;
    func_0x00010bf493a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar20);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bf1ff80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf1ff80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar3;
    func_0x00010bf493a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar20);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if (*(long *)(param_1 + 0x50) == 0) {
      puVar2 = PTR_PTR_1126c3a20;
      _objc_alloc();
      func_0x00010c0621e0();
      uVar20 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar2;
      _objc_release(uVar20);
    }
    lVar18 = param_1 + 8;
    _objc_loadWeakRetained(lVar18);
    func_0x00010bef76e0();
    _objc_release(lVar18);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = *(undefined **)(param_1 + 0x50);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493c0(0);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c2793a0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar4);
    _objc_release(uVar10);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar20);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar2 == (undefined *)0x2) goto LAB_106cfc290;
    puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar2 == (undefined *)0x1) goto LAB_106cfc290;
    if (*(long *)(param_1 + 0x58) != 0) {
      lVar18 = param_1 + 8;
      _objc_loadWeakRetained();
      func_0x00010c12b760();
      _objc_release(lVar18);
      uVar20 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = 0;
      _objc_release(uVar20);
      func_0x00010c12c960(*(undefined8 *)(param_1 + 0x58));
      puVar2 = *(undefined **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)();
        return;
      }
      goto LAB_106cfc810;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
LAB_106cfc810:
  ___stack_chk_fail();
  func_0x00010bde1e80();
  func_0x00010c1f93e0(*(undefined8 *)(puVar2 + 0x38));
  func_0x00010c181140(*(double *)(puVar2 + 0x168) + 2.0,*(undefined8 *)(puVar2 + 0xa8));
  func_0x00010bed9280(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be65010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s__notifyScrollContentOffsetChange_112576da0);
  return;
}



/* Entry: 106cfc814; end: 106cfc85b; -[SCGalleryCameraRollTabController _updateWithScrollContentInset] */

void FUN_106cfc814(long param_1)

{
  func_0x00010bde1e80();
  func_0x00010c1f93e0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c181140(*(double *)(param_1 + 0x168) + 2.0,*(undefined8 *)(param_1 + 0xa8));
  func_0x00010bed9280(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be65010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyScrollContentOffsetChange_112576da0);
  return;
}



/* Entry: 106cfc85c; end: 106cfc8df; -[SCGalleryCameraRollTabController _notifyScrollContentOffsetChange] */

void FUN_106cfc85c(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  func_0x00010c151ea0();
  if (*(double *)(param_2 + 0x60) != param_1) {
    *(double *)(param_2 + 0x60) = param_1;
    dVar1 = -param_1;
    if (0.0 <= param_1) {
      dVar1 = param_1;
    }
    dVar2 = *(double *)(param_2 + 0x98);
    if (*(double *)(param_2 + 0x98) <= dVar1) {
      dVar2 = dVar1;
    }
    *(double *)(param_2 + 0x98) = dVar2;
    param_2 = param_2 + 0x158;
    _objc_loadWeakRetained(param_2);
    func_0x00010c2679c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 106cfc8e0; end: 106cfc98f; -[SCGalleryCameraRollTabController _updateHeaderView] */

void FUN_106cfc8e0(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  double dVar1;
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
  
  func_0x00010c106e60(PTR_PTR_1126cfa50,param_4,*(undefined8 *)(param_3 + 0xa0),1);
  dVar1 = param_2;
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + 0x20));
  dVar1 = dVar1 + -2.0;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  if (dVar1 <= param_2) {
    param_2 = dVar1;
  }
  func_0x00010c184c80(*(undefined8 *)(param_3 + 0x40));
  func_0x00010be9be40(param_3);
  dVar1 = 0.0;
  if (param_2 <= -0.0) {
    dVar1 = -param_2;
  }
  _CGAffineTransformMakeTranslation(&uStack_60,0,dVar1);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(*(undefined8 *)(param_3 + 0x40),param_4,&uStack_90);
  return;
}



/* Entry: 106cfc990; end: 106cfca4f; -[SCGalleryCameraRollTabController _collectionViewLayoutSectionInset] */

double FUN_106cfc990(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = *(double *)(param_1 + 0x168) + 2.0 + 54.0;
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c079f80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  dVar6 = dVar5 + 27.0;
  if ((int)uVar4 == 0) {
    dVar6 = dVar5;
  }
  func_0x000107e857e4();
  return dVar6;
}



/* Entry: 106cfca50; end: 106cfca8b; -[SCGalleryCameraRollTabController _scrollContentOffset] */

double FUN_106cfca50(double param_1,double param_2,long param_3)

{
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + 0x20));
  func_0x00010bf4c7c0(*(undefined8 *)(param_3 + 0x20));
  return param_2 + param_1;
}



/* Entry: 106cfca8c; end: 106cfcaf3; -[SCGalleryCameraRollTabController _collectionViewContentOffsetFromScrollContentOffset:] */

double FUN_106cfca8c(double param_1,double param_2,long param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_3 + 0x168);
  dVar1 = -dVar2;
  if (param_1 <= dVar1) {
    func_0x00010c106e60(PTR_PTR_1126cfa50,param_4,*(undefined8 *)(param_3 + 0xa0),1);
    dVar1 = dVar2 + param_2;
    param_1 = -dVar1;
  }
  func_0x00010c156120(*(undefined8 *)(param_3 + 0x38));
  return param_1 + dVar1 + -2.0;
}



/* Entry: 106cfcaf4; end: 106cfcb4f; -[SCGalleryCameraRollTabController _scrollContentDistanceToTop] */

double FUN_106cfcaf4(double param_1,double param_2,long param_3)

{
  double dVar1;
  
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + 0x20));
  func_0x00010c156120(*(undefined8 *)(param_3 + 0x38));
  param_2 = (param_1 + -2.0) - param_2;
  dVar1 = 0.0;
  if (0.0 <= param_2) {
    dVar1 = param_2;
  }
  if (*(double *)(param_3 + 0x168) <= dVar1) {
    dVar1 = *(double *)(param_3 + 0x168);
  }
  return dVar1;
}



/* Entry: 106cfcb50; end: 106cfcb5b; -[SCGalleryCameraRollTabController _updateAlbumsTab] */

void FUN_106cfcb50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xd0),PTR_s_viewWillAppear__1126853f0,1);
  return;
}



/* Entry: 106cfcb5c; end: 106cfccff; -[SCGalleryCameraRollTabController memoriesCollectionViewSelectionHelperDidTapOverSelectionLimit:] */

void FUN_106cfcb5c(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  uVar8 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000108dfd5b4();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  lVar6 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar6);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  if (lVar7 == 0) {
    func_0x00010c10eda0();
  }
  else {
    lVar6 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0();
    _objc_release(lVar6);
  }
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar8,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 106cfcd00; end: 106cfcd0f;  */

void FUN_106cfcd00(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106cfcd10; end: 106cfce33; -[SCGalleryCameraRollTabController _displayCameraRollAlbumPickerView] */

void FUN_106cfcd10(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c66e8;
  _objc_alloc(PTR_PTR_1126c66e8);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c09da80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = (byte)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c0fb480();
  func_0x00010c299f60();
  func_0x00010c041f00(puVar2,param_2,param_1,param_1,puVar3,uVar4,0,0,bVar1 ^ 1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf2a6c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620();
  _objc_release(uVar4);
  _objc_release(uVar5);
  param_1 = param_1 + 0x158;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf2ab20();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106cfce34; end: 106cfce37; -[SCGalleryCameraRollTabController _updateViewsAfterScrolling] */

void FUN_106cfce34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be26cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleCameraRollBannerAfterScro_1125674d8);
  return;
}



/* Entry: 106cfce38; end: 106cfcf7b; -[SCGalleryCameraRollTabController _handleCameraRollBannerAfterScrolling] */

void FUN_106cfce38(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  if (*(long *)(param_1 + 0x108) != 0) {
    dVar12 = *(double *)(param_1 + 0x60);
    dVar13 = dVar12;
    if (dVar12 <= 0.0) {
      dVar13 = 0.0;
    }
    func_0x00010c151ea0();
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    if (dVar12 <= 0.0) {
      dVar12 = 0.0;
    }
    if (dVar13 != dVar12) {
      if (dVar12 <= dVar13) {
        if (dVar13 <= dVar12) goto LAB_106cfcf40;
        puVar10 = &uStack_88;
        puVar8 = &uStack_80;
        lVar11 = 0x118;
        lVar9 = 0x120;
      }
      else {
        puVar10 = &uStack_78;
        puVar8 = &uStack_70;
        lVar11 = 0x120;
        lVar9 = 0x118;
      }
      *puVar8 = *(undefined8 *)(param_1 + lVar9);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65be0(puVar5,param_2,puVar2);
      _objc_release(puVar2);
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      *puVar10 = *(undefined8 *)(param_1 + lVar11);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar10,1);
      _objc_retainAutoreleasedReturnValue();
      param_3 = puVar2;
      func_0x00010beef8c0(puVar5);
      _objc_release();
    }
  }
LAB_106cfcf40:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(puVar2 + 0xe0);
    *(undefined **)(puVar2 + 0xe0) = param_3;
    _objc_release(uVar3);
    uVar4 = *(ulong *)(puVar2 + 0x10);
    func_0x00010c0fb480();
    if ((uVar4 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(puVar2 + 0x10);
      func_0x00010c299f60();
      uVar3 = 3;
      if (iVar1 == 0) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 2;
    }
    func_0x00010be10420(puVar2,param_2,uVar3);
    puVar5 = param_3;
    func_0x00010c09da80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar2 + 0xe8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c293260();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(puVar5);
  }
  puVar5 = puVar2 + 0x158;
  _objc_loadWeakRetained(puVar5);
  func_0x00010bf2ab00();
  _objc_release(puVar5);
  func_0x00010bdfd420(puVar2);
  puVar2[0x91] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cfcf7c; end: 106cfd09f; -[SCGalleryCameraRollTabController cameraRollAlbumPickerViewWillDimiss:] */

void FUN_106cfcf7c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xe0);
    *(long *)(param_1 + 0xe0) = param_3;
    _objc_release(uVar2);
    uVar3 = *(ulong *)(param_1 + 0x10);
    func_0x00010c0fb480();
    if ((uVar3 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
      func_0x00010c299f60();
      uVar2 = 3;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 2;
    }
    func_0x00010be10420(param_1,param_2,uVar2);
    lVar4 = param_3;
    func_0x00010c09da80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c293260();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  lVar4 = param_1 + 0x158;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf2ab00();
  _objc_release(lVar4);
  func_0x00010bdfd420(param_1);
  *(undefined1 *)(param_1 + 0x91) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cfd0a0; end: 106cfd1b3; -[SCGalleryCameraRollTabController didSelectCameraRollAlbumPill:] */

void FUN_106cfd0a0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010c182300(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),
                        *(undefined8 *)(param_1 + 0x20),param_2,1);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xe0);
    *(long *)(param_1 + 0xe0) = param_3;
    _objc_release(uVar2);
    uVar3 = *(ulong *)(param_1 + 0x10);
    func_0x00010c0fb480();
    if ((uVar3 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
      func_0x00010c299f60();
      uVar2 = 3;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 2;
    }
    func_0x00010be10420(param_1,param_2,uVar2);
    lVar4 = param_3;
    func_0x00010c09da80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c293260();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cfd1b4; end: 106cfd1bf; -[SCGalleryCameraRollTabController showAlbumPicker] */

void FUN_106cfd1b4(long param_1)

{
  *(undefined1 *)(param_1 + 0x91) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be04250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayCameraRollAlbumPickerVie_11255ea30);
  return;
}



/* Entry: 106cfd1c0; end: 106cfd1c3; -[SCGalleryCameraRollTabController willAlbumPillsViewBeginScrolling] */

void FUN_106cfd1c0(void)

{
  return;
}



/* Entry: 106cfd1c4; end: 106cfd1c7; -[SCGalleryCameraRollTabController didAlbumPillsViewFinishScrolling] */

void FUN_106cfd1c4(void)

{
  return;
}



/* Entry: 106cfd1c8; end: 106cfd2d7; -[SCGalleryCameraRollTabController seedWithAssetIdentifier:] */

void FUN_106cfd1c8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((param_3 != 0) &&
     ((lVar2 = *(long *)(param_1 + 0x78), lVar2 == 0 || (func_0x00010bf529e0(), lVar2 == 0)))) {
    puVar4 = PTR__OBJC_CLASS___PHAsset_1126bd898;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_40 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa50e0(puVar4,param_2,puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010bf529e0();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126d22a8;
      _objc_alloc();
      func_0x00010c063320();
      func_0x00010bee4b20(param_1,param_2,puVar3);
      _objc_release(puVar3);
    }
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (*(long *)(param_3 + 0x88) == 0) {
      uVar5 = *(undefined8 *)(param_3 + 0x110);
      func_0x00010c0b8600(uVar5,param_2,&PTR___NSConcreteGlobalBlock_110975988);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b2670;
      _objc_alloc();
      uVar6 = *(undefined8 *)(param_3 + 0xe8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar6;
      func_0x00010c0fb4c0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_3 + 0xe8);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar7;
      func_0x00010bf522a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c035d40(puVar4,param_2,uVar13,uVar14,*(undefined8 *)(param_3 + 0x100),
                          *(undefined8 *)(param_3 + 0x130),uVar5);
      uVar12 = *(undefined8 *)(param_3 + 0x88);
      *(undefined **)(param_3 + 0x88) = puVar4;
      _objc_release(uVar12);
      _objc_release(uVar14);
      _objc_release(uVar7);
      _objc_release(uVar13);
      _objc_release(uVar6);
      uVar8 = *(ulong *)(param_3 + 0x10);
      func_0x00010c0fb480();
      if ((uVar8 & 1) == 0) {
        iVar1 = (int)*(undefined8 *)(param_3 + 0x10);
        func_0x00010c299f60();
        uVar13 = 3;
        if (iVar1 == 0) {
          uVar13 = 0;
        }
      }
      else {
        uVar13 = 2;
      }
      lVar9 = *(long *)(param_3 + 0xe8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar9;
      func_0x00010c293260();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      _objc_release(lVar2);
      _objc_release(lVar9);
      if (lVar11 != 0) {
        uVar14 = *(undefined8 *)(param_3 + 0x140);
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0xc2000000;
        pcStack_b8 = FUN_106cfd510;
        puStack_b0 = &UNK_110844b80;
        _objc_retain(lVar11);
        lStack_a8 = lVar11;
        lStack_a0 = param_3;
        uStack_98 = uVar13;
        func_0x00010c0f7fc0(uVar14,param_2,&puStack_c8);
        _objc_release(lStack_a8);
      }
      func_0x00010be10420(param_3,param_2,uVar13);
      _objc_release(lVar11);
      _objc_release(uVar5);
      return;
    }
    return;
  }
  return;
}



/* Entry: 106cfd2d8; end: 106cfd4df; -[SCGalleryCameraRollTabController initializePhotoLibraryFetcher] */

void FUN_106cfd2d8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x110);
    func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110975988);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2670;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar4;
    func_0x00010c0fb4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010bf522a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c035d40(puVar3,param_2,uVar12,uVar13,*(undefined8 *)(param_1 + 0x100),
                        *(undefined8 *)(param_1 + 0x130),uVar2);
    uVar11 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = puVar3;
    _objc_release(uVar11);
    _objc_release(uVar13);
    _objc_release(uVar5);
    _objc_release(uVar12);
    _objc_release(uVar4);
    uVar6 = *(ulong *)(param_1 + 0x10);
    func_0x00010c0fb480();
    if ((uVar6 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
      func_0x00010c299f60();
      uVar12 = 3;
      if (iVar1 == 0) {
        uVar12 = 0;
      }
    }
    else {
      uVar12 = 2;
    }
    lVar7 = *(long *)(param_1 + 0xe8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c293260();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    if (lVar10 != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x140);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_106cfd510;
      puStack_70 = &UNK_110844b80;
      _objc_retain(lVar10);
      lStack_68 = lVar10;
      lStack_60 = param_1;
      uStack_58 = uVar12;
      func_0x00010c0f7fc0(uVar13,param_2,&puStack_88);
      _objc_release(lStack_68);
    }
    func_0x00010be10420(param_1,param_2,uVar12);
    _objc_release(lVar10);
    _objc_release(uVar2);
    return;
  }
  return;
}



/* Entry: 106cfd4e0; end: 106cfd50f;  */

void FUN_106cfd4e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fb7e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 106cfd510; end: 106cfd68f;  */

void FUN_106cfd510(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar3 = PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4f40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x106cfd634;
  puStack_60 = &UNK_110844b80;
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  puStack_50 = puVar4;
  _objc_retain(puVar4);
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(puStack_50);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)(puVar4 + 0x20);
  uVar1 = *(undefined8 *)(puVar4 + 0x28);
  _objc_retain(uVar1);
  uVar5 = *(undefined8 *)(lVar6 + 0xe0);
  *(undefined8 *)(lVar6 + 0xe0) = uVar1;
  _objc_release(uVar5);
  lVar6 = *(long *)(puVar4 + 0x30);
  if (lVar6 == 3) {
    func_0x00010be04260(*(undefined8 *)(puVar4 + 0x20));
    lVar6 = *(long *)(puVar4 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be10430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar4 + 0x20),PTR_s__fetchCameraRollAssets__112561aa8,lVar6);
  return;
}



/* Entry: 106cfd690; end: 106cfd693; -[SCGalleryCameraRollTabController _fetchCameraRollAssets:] */

void FUN_106cfd690(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be10410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchCameraRollAlbumsAssets__112561aa0);
  return;
}



/* Entry: 106cfd694; end: 106cfd923; -[SCGalleryCameraRollTabController _fetchCameraRollAlbumsAssets:] */

void FUN_106cfd694(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_58,param_2);
  lVar1 = *(long *)(param_2 + 0xe0);
  puVar2 = PTR_PTR_1126b2688;
  if ((param_4 == 3) && (lVar1 != 0)) {
    _objc_opt_new(PTR_PTR_1126b2688);
    func_0x00010c2a87c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b3b00(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x88);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106cfd924;
    puStack_70 = &UNK_1109759a8;
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = param_1;
    func_0x00010bfa9020(uVar4);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar3);
  }
  else {
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x88);
      func_0x00010bf51e00();
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      uStack_a8 = 0x106cfd980;
      puStack_a0 = &UNK_1109759a8;
      _objc_copyWeak(auStack_98,auStack_58);
      uStack_90 = param_1;
      func_0x00010bfab6a0(uVar4);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_98);
      goto LAB_106cfd8b4;
    }
    _objc_opt_new(PTR_PTR_1126b2688);
    func_0x00010c2b4b40();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x88);
    _objc_copyWeak(auStack_c8,auStack_58);
    uStack_c0 = param_1;
    func_0x00010bfab780(uVar4);
    _objc_destroyWeak(auStack_c8);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
LAB_106cfd8b4:
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106cfd924; end: 106cfda37;  */

void FUN_106cfd924(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be81cc0(*(undefined8 *)(param_1 + 0x28),lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106cfda38; end: 106cfdbf3; -[SCGalleryCameraRollTabController _processPhotoLibraryFetchResult:startFetch:] */

void FUN_106cfda38(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  
  dVar6 = param_1;
  _objc_retain(param_4);
  if ((*(byte *)(param_2 + 0x92) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x92) = 1;
    _CACurrentMediaTime();
    uVar1 = *(undefined8 *)(param_2 + 0xe8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfbd160();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2360(dVar6 - param_1);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126b2438;
    func_0x00010bf4c9a0(PTR_PTR_1126b2438);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_2 + 0x100);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar2);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126b2438;
    func_0x00010bf2a7c0(PTR_PTR_1126b2438);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + 0x100);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010bf529e0(param_4);
    func_0x00010bef9180(uVar2,param_3,puVar3,uVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  func_0x00010bee4b20(param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106cfdbf4; end: 106cfdd43; -[SCGalleryCameraRollTabController _showInitialNeedsPhotoAccessIfNeeded] */

void FUN_106cfdbf4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar1 == (undefined *)0x0) {
    if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x90) = 1;
      func_0x00010bed76a0(param_1);
      _objc_initWeak(auStack_38,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0xe8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0fb4c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010c134a40(uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar1 == (undefined *)0x3) {
                    /* WARNING: Could not recover jumptable at 0x00010c0649b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initializePhotoLibraryFetcher_1125f6c78);
      return;
    }
  }
  return;
}



/* Entry: 106cfdd44; end: 106cfdd93;  */

void FUN_106cfdd44(long param_1,int param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x90) = 0;
    if (param_2 == 0) {
      func_0x00010bed76a0(param_1);
    }
    else {
      func_0x00010c0649a0();
      func_0x00010be04740(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cfdd94; end: 106cfde47; -[SCGalleryCameraRollTabController emptyStateViewDidTapButton] */

void FUN_106cfdd94(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar1 != (undefined *)0x2) {
      puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
      func_0x00010bf10fa0();
      if (puVar1 != (undefined *)0x1) goto LAB_106cfde34;
    }
    uVar2 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0fb4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e99c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
LAB_106cfde34:
                    /* WARNING: Could not recover jumptable at 0x00010beb9710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showInitialNeedsPhotoAccessIfNe_11258bf68);
  return;
}



/* Entry: 106cfde48; end: 106cfe01f; -[SCGalleryCameraRollTabController _updateAlbumsPickerShortcuts:] */

void FUN_106cfde48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb5ae0();
  if ((((int)lVar1 != 0) && (*(long *)(param_1 + 0x48) != 0)) &&
     ((*(byte *)(param_1 + 0x91) & 1) == 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0xd0);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = param_3;
    _objc_retain(param_3);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c29bf00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(uVar3);
    FUN_106d02ad0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0xd0));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_retain(uVar4);
    func_0x00010bf03420(0x3fb999999999999a,puVar2);
    _objc_release(uVar4);
    _objc_release(uVar4);
    _objc_release(param_3);
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b0a08;
  _objc_alloc();
  func_0x00010c055600();
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined **)(param_1 + 0xd8) = puVar2;
  _objc_release(uVar3);
  func_0x00010c219e20(*(undefined8 *)(param_1 + 0xd8));
  func_0x00010c16d3e0(*(undefined8 *)(param_1 + 0xd8));
  *(undefined1 *)(param_1 + 0x91) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10c5a0(0x3fe8a3d70a3d70a4,uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cfe020; end: 106cfe0bb;  */

void FUN_106cfe020(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106cfe0bc; end: 106cfe0c7; -[SCGalleryCameraRollTabController attachUI:] */

void FUN_106cfe0bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed2e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAlbumsPickerShortcuts__112592528);
    return;
  }
  return;
}



/* Entry: 106cfe0c8; end: 106cfe10b; -[SCGalleryCameraRollTabController detachUI:] */

void FUN_106cfe0c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010bdfd420(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cfe10c; end: 106cfe13f; -[SCGalleryCameraRollTabController tray:positionDidChange:] */

void FUN_106cfe10c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
    func_0x00010bdfd420();
                    /* WARNING: Could not recover jumptable at 0x00010be04270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__displayCameraRollAlbumViewWithP_11255ea38,1);
    return;
  }
  return;
}



/* Entry: 106cfe140; end: 106cfe203; -[SCGalleryCameraRollTabController _didDismissAlbumPickerTray] */

void FUN_106cfe140(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0xe8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf2a6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf2a6c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  func_0x00010bf83180(*(undefined8 *)(param_1 + 0xd8),param_2,1);
  uVar5 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106cfe204; end: 106cfe20f; -[SCGalleryCameraRollTabController scrollContentInset] */

undefined8 FUN_106cfe204(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 106cfe210; end: 106cfe217; -[SCGalleryCameraRollTabController visible] */

undefined1 FUN_106cfe210(long param_1)

{
  return *(undefined1 *)(param_1 + 0x150);
}



/* Entry: 106cfe218; end: 106cfe21f; -[SCGalleryCameraRollTabController focused] */

undefined1 FUN_106cfe218(long param_1)

{
  return *(undefined1 *)(param_1 + 0x151);
}



/* Entry: 106cfe220; end: 106cfe227; -[SCGalleryCameraRollTabController loading] */

undefined1 FUN_106cfe220(long param_1)

{
  return *(undefined1 *)(param_1 + 0x152);
}



/* Entry: 106cfe228; end: 106cfe22f; -[SCGalleryCameraRollTabController setLoading:] */

void FUN_106cfe228(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x152) = param_3;
  return;
}



/* Entry: 106cfe230; end: 106cfe237; -[SCGalleryCameraRollTabController selectMode] */

undefined1 FUN_106cfe230(long param_1)

{
  return *(undefined1 *)(param_1 + 0x153);
}



/* Entry: 106cfe238; end: 106cfe24f; -[SCGalleryCameraRollTabController delegate] */

void FUN_106cfe238(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cfe250; end: 106cfe25b; -[SCGalleryCameraRollTabController setDelegate:] */

void FUN_106cfe250(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x158,param_3);
  return;
}



/* Entry: 106cfe25c; end: 106cfe263; -[SCGalleryCameraRollTabController tabType] */

undefined8 FUN_106cfe25c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 106cfe264; end: 106cfe437; -[SCGalleryCameraRollTabController .cxx_destruct] */

void FUN_106cfe264(long param_1)

{
  _objc_destroyWeak(param_1 + 0x158);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_destroyWeak(param_1 + 0xf8);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106cfe438; end: 106cfe5bb; +[SCGalleryCameraRollTabHeaderView attributedTextWithString:textColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106cfe438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined8 param_6,long param_7,undefined *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_110;
  undefined *puStack_108;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_7 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_alloc_init();
    func_0x00010c1bdc00(0x3feccccccccccccd);
    func_0x00010c166c00(puVar1);
    puVar12 = puVar1;
    func_0x00010bf51e00();
    param_1 = 0x4028000000000000;
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar12);
    puVar12 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    _objc_release(param_8);
    lVar10 = param_7;
    param_8 = puVar3;
    func_0x00010c04e840();
    _objc_release(param_7);
    _objc_release(puVar3);
    _objc_release();
    param_5 = puVar1;
    param_7 = lVar10;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return puVar12;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_110;
  _objc_retain(param_8);
  puStack_108 = PTR_PTR_1126f6808;
  puStack_110 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&puStack_110,PTR_s_initWithFrame__1125e2948);
  if (ppuVar4 != (undefined **)0x0) {
    lVar11 = (long)_DAT_11275c954;
    _objc_retain(param_8);
    uVar5 = *(undefined8 *)((long)ppuVar4 + lVar11);
    *(undefined **)((long)ppuVar4 + lVar11) = param_8;
    _objc_release(uVar5);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(ppuVar4);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CALayer_1126b1750);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined1 *)ppuVar4;
    func_0x00010c08c0e0(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(puVar6);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c14c9e0(PTR__OBJC_CLASS___CALayer_1126b1750);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined1 *)ppuVar4;
    func_0x00010c08c0e0(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = (undefined1 *)ppuVar4;
    func_0x00010c08c0e0(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar1);
    puVar6 = (undefined1 *)ppuVar4;
    func_0x00010c08c0e0(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    puVar7 = (undefined1 *)ppuVar4;
    func_0x00010c08c0e0(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
    uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar5,uVar13,uVar14,uVar15);
    puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar12);
    puVar6 = (undefined1 *)ppuVar4;
    _objc_opt_class(ppuVar4);
    puVar7 = (undefined1 *)ppuVar4;
    _objc_opt_class(ppuVar4);
    func_0x00010be46c00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0e620(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar12);
    _objc_release(puVar7);
    func_0x00010c1cfce0(puVar1);
    func_0x00010befbb60(ppuVar4);
    func_0x00010c219b60(puVar1);
    puVar12 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined1 *)ppuVar4;
    func_0x00010c08de00(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar12;
    func_0x00010bf493a0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar12);
    puVar12 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined1 *)ppuVar4;
    func_0x00010c2793a0(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar12;
    func_0x00010bf493a0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar12);
    *(long *)((long)ppuVar4 + (long)_DAT_11275c958) = param_7;
    if (param_7 == 0) {
      puVar12 = puVar1;
      func_0x00010bf1ff80(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = (undefined1 *)ppuVar4;
      func_0x00010bf1ff80(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar12;
      func_0x00010bf493c0(0xc01e000000000000,puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162480();
      _objc_release(puVar2);
      _objc_release(puVar6);
      _objc_release(puVar12);
      func_0x00010c21e900(ppuVar4);
    }
    else if (param_7 == 1) {
      puVar12 = PTR__OBJC_CLASS___UIButton_1126aec48;
      _objc_alloc(PTR__OBJC_CLASS___UIButton_1126aec48);
      func_0x00010c013de0(uVar5,uVar13,uVar14,uVar15);
      puVar2 = puVar12;
      func_0x000108dfdb84();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = (undefined1 *)ppuVar4;
      _objc_opt_class(ppuVar4);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0e620(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b780(puVar12);
      _objc_release(puVar6);
      _objc_release(puVar3);
      func_0x00010befbb60(ppuVar4);
      func_0x00010c219b60(puVar12);
      puVar3 = puVar12;
      func_0x00010c08de00(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = (undefined1 *)ppuVar4;
      func_0x00010c08de00(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bf493a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162480();
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar3);
      puVar3 = puVar12;
      func_0x00010c2793a0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = (undefined1 *)ppuVar4;
      func_0x00010c2793a0(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bf493a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162480();
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar3);
      puVar3 = puVar12;
      func_0x00010bf1ff80(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = (undefined1 *)ppuVar4;
      func_0x00010bf1ff80(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bf493a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162480();
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar3);
      puVar3 = puVar12;
      func_0x00010c274200(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar1;
      func_0x00010bf1ff80(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      func_0x00010bf493a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162480();
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar3);
      func_0x00010befbd60(puVar12);
      puVar3 = puVar1;
      func_0x00010c274200(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = (undefined1 *)ppuVar4;
      func_0x00010c274200(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bf493a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162480();
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar12);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_8);
  return (undefined1 *)ppuVar4;
}



/* Entry: 106cfe5bc; end: 106cfed23; -[SCGalleryCameraRollTabHeaderView initWithFrame:mode:coreConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106cfe5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  _objc_retain(param_8);
  puStack_88 = PTR_PTR_1126f6808;
  uStack_90 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_90,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar11 = (long)_DAT_11275c954;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CALayer_1126b1750);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c14c9e0(PTR__OBJC_CLASS___CALayer_1126b1750);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
    uVar2 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar2,uVar12,uVar13,uVar14);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3);
    _objc_release(puVar6);
    puVar4 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    puVar5 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    func_0x00010be46c00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0e620(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c1cfce0(puVar3);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(puVar3);
    puVar6 = puVar3;
    func_0x00010c08de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf493a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010c2793a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf493a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar6);
    *(long *)((long)puVar1 + (long)_DAT_11275c958) = param_7;
    if (param_7 == 0) {
      puVar6 = puVar3;
      func_0x00010bf1ff80(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = (undefined1 *)puVar1;
      func_0x00010bf1ff80(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf493c0(0xc01e000000000000,puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162480();
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(puVar6);
      func_0x00010c21e900(puVar1);
    }
    else if (param_7 == 1) {
      puVar6 = PTR__OBJC_CLASS___UIButton_1126aec48;
      _objc_alloc(PTR__OBJC_CLASS___UIButton_1126aec48);
      func_0x00010c013de0(uVar2,uVar12,uVar13,uVar14);
      puVar7 = puVar6;
      func_0x000108dfdb84();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0e620(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b780(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar8);
      func_0x00010befbb60(puVar1);
      func_0x00010c219b60(puVar6);
      puVar8 = puVar6;
      func_0x00010c08de00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = (undefined1 *)puVar1;
      func_0x00010c08de00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf493a0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162480();
      _objc_release(puVar9);
      _objc_release(puVar4);
      _objc_release(puVar8);
      puVar8 = puVar6;
      func_0x00010c2793a0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = (undefined1 *)puVar1;
      func_0x00010c2793a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf493a0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162480();
      _objc_release(puVar9);
      _objc_release(puVar4);
      _objc_release(puVar8);
      puVar8 = puVar6;
      func_0x00010bf1ff80(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = (undefined1 *)puVar1;
      func_0x00010bf1ff80(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf493a0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162480();
      _objc_release(puVar9);
      _objc_release(puVar4);
      _objc_release(puVar8);
      puVar8 = puVar6;
      func_0x00010c274200(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      func_0x00010bf1ff80(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010bf493a0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162480();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      func_0x00010befbd60(puVar6);
      puVar8 = puVar3;
      func_0x00010c274200(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = (undefined1 *)puVar1;
      func_0x00010c274200(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf493a0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162480();
      _objc_release(puVar9);
      _objc_release(puVar4);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 106cfed24; end: 106cfef47; +[SCGalleryCameraRollTabHeaderView preferredSizeWithHeaderViewMode:shouldShowAlbumPickerButton:] */

undefined1  [16]
FUN_106cfed24(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,int param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  dVar8 = param_3 + -44.0;
  _objc_release(puVar1);
  uVar2 = param_5;
  _objc_opt_class(param_5);
  func_0x00010be46c00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xbf);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010bf0e620(param_5,param_6,uVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x7fefffffffffffff;
  dVar4 = dVar8;
  func_0x00010bf20bc0(dVar8,0x7fefffffffffffff);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  dVar6 = dVar4;
  dVar7 = param_3;
  uVar3 = param_4;
  _CGRectGetHeight(dVar4,uVar5,param_3,param_4);
  if (param_8 == 0) {
    dVar4 = (double)(long)dVar6;
    dVar6 = 16.0;
  }
  else {
    _CGRectGetHeight(dVar4,uVar5,param_3,param_4);
    dVar4 = (double)(long)dVar4 + 36.0;
    dVar6 = 37.5;
    dVar7 = param_3;
    uVar3 = param_4;
  }
  dVar4 = dVar4 + dVar6;
  if (param_7 == 1) {
    func_0x000108dfd92c();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x3a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0e620(param_5,param_6,uVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x7fefffffffffffff;
    dVar6 = dVar8;
    func_0x00010bf20bc0(dVar8,0x7fefffffffffffff);
    _objc_release(param_5);
    _objc_release(puVar1);
    _objc_release(uVar2);
    _CGRectGetHeight(dVar6,uVar5,dVar7,uVar3);
    dVar4 = dVar4 + (double)(long)dVar6 + 8.0;
  }
  auVar9._8_8_ = dVar4;
  auVar9._0_8_ = dVar8;
  return auVar9;
}



/* Entry: 106cfef48; end: 106cfef77; -[SCGalleryCameraRollTabHeaderView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cfef48(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010c106e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106cfef78; end: 106cfefc7; -[SCGalleryCameraRollTabHeaderView layoutSubviews] */

void FUN_106cfef78(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6808;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bed2fc0(param_1);
  func_0x00010bedb2c0(param_1);
  return;
}



/* Entry: 106cfefc8; end: 106cff007; -[SCGalleryCameraRollTabHeaderView setCoveredHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cfefc8(double param_1,long param_2)

{
  if (*(double *)(param_2 + _DAT_11275c950) != param_1) {
    *(double *)(param_2 + _DAT_11275c950) = param_1;
    func_0x00010bed2fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bedb2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateMask_112594658);
    return;
  }
  return;
}



/* Entry: 106cff008; end: 106cff06b; -[SCGalleryCameraRollTabHeaderView _updateAlpha] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cff008(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  func_0x00010bf20c00();
  _CGRectGetHeight();
  param_1 = param_1 * 0.25;
  dVar1 = 1.0;
  if (0.0 < param_1) {
    dVar1 = *(double *)(param_2 + _DAT_11275c950);
    if (dVar1 <= 0.0) {
      dVar1 = 0.0;
    }
    dVar2 = param_1;
    if (dVar1 <= param_1) {
      dVar2 = dVar1;
    }
    dVar1 = 1.0 - dVar2 / param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(dVar1,param_2,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106cff06c; end: 106cff143; -[SCGalleryCameraRollTabHeaderView _updateMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cff06c(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  lVar1 = param_4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar2 = param_1;
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c08c0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar2 = dVar2 - *(double *)(param_4 + _DAT_11275c950);
  _objc_release(lVar1);
  dVar3 = 0.0;
  if (0.0 <= dVar2) {
    dVar3 = dVar2;
  }
  func_0x00010c08c0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,dVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106cff144; end: 106cff16f; +[SCGalleryCameraRollTabHeaderView _labelTitleTextWithHeaderViewMode:] */

void FUN_106cff144(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    func_0x000108dfdb54();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cff170; end: 106cff19f; -[SCGalleryCameraRollTabHeaderView _didTapGrantFullAccessButton] */

void FUN_106cff170(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7cb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cff1a0; end: 106cff1af; -[SCGalleryCameraRollTabHeaderView coveredHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106cff1a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275c950);
}



/* Entry: 106cff1b0; end: 106cff1cf; -[SCGalleryCameraRollTabHeaderView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cff1b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275c95c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cff1d0; end: 106cff1e3; -[SCGalleryCameraRollTabHeaderView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cff1d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275c95c,param_3);
  return;
}



/* Entry: 106cff1e4; end: 106cff21f; -[SCGalleryCameraRollTabHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cff1e4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275c95c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275c954,0);
  return;
}



/* Entry: 106cff220; end: 106cff9b3; -[SCGalleryPhotoAssetViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106cff220(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
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
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
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
  puStack_d8 = PTR_PTR_1126f6810;
  puVar23 = &uStack_e0;
  uStack_e0 = param_1;
  _objc_msgSendSuper2(puVar23,PTR_s_initWithFrame__1125e2948);
  lVar26 = 0;
  if (puVar23 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    puVar2 = puVar23;
    func_0x00010bf4dce0(puVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    lVar27 = (long)_DAT_11275c964;
    uVar24 = *(undefined8 *)((long)puVar23 + lVar27);
    *(undefined **)((long)puVar23 + lVar27) = puVar1;
    _objc_release(uVar24);
    _objc_release(puVar2);
    puVar2 = puVar23;
    func_0x00010bf4dce0(puVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar23 + lVar27));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar23 + lVar27);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar23;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar24;
    uVar5 = *(undefined8 *)((long)puVar23 + lVar27);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar23;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar8;
    uVar9 = *(undefined8 *)((long)puVar23 + lVar27);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar23;
    func_0x00010bf4dce0(puVar23);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar12;
    uVar13 = *(undefined8 *)((long)puVar23 + lVar27);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar23;
    func_0x00010bf4dce0(puVar23);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar21;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar16);
    _objc_release(uVar21);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar24);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(uVar3);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar23 + lVar27));
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar26 = (long)_DAT_11275c968;
    uVar24 = *(undefined8 *)((long)puVar23 + lVar26);
    *(undefined **)((long)puVar23 + lVar26) = puVar1;
    _objc_release(uVar24);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar23 + lVar26));
    _objc_release(puVar1);
    func_0x00010c182220(*(undefined8 *)((long)puVar23 + lVar26));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar23 + lVar26));
    func_0x00010befbb60(*(undefined8 *)((long)puVar23 + lVar27));
    func_0x00010c219b60(*(undefined8 *)((long)puVar23 + lVar26));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar23 + lVar26);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar23 + lVar27);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar24;
    uVar9 = *(undefined8 *)((long)puVar23 + lVar26);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)((long)puVar23 + lVar27);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar8;
    uVar17 = *(undefined8 *)((long)puVar23 + lVar26);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar23 + lVar27);
    func_0x00010c274200(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar12;
    uVar19 = *(undefined8 *)((long)puVar23 + lVar26);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar23 + lVar27);
    func_0x00010bf1ff80(uVar20);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar21;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar16);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar12);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar8);
    _objc_release(uVar13);
    _objc_release(uVar9);
    _objc_release(uVar24);
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126d22b8;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar25 = (long)_DAT_11275c96c;
    uVar24 = *(undefined8 *)((long)puVar23 + lVar25);
    *(undefined **)((long)puVar23 + lVar25) = puVar1;
    _objc_release(uVar24);
    func_0x00010befbb60(*(undefined8 *)((long)puVar23 + lVar27));
    func_0x00010c219b60(*(undefined8 *)((long)puVar23 + lVar25));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar26 = *(long *)((long)puVar23 + lVar25);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)((long)puVar23 + lVar27);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar26;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_d0 = lVar22;
    uVar3 = *(undefined8 *)((long)puVar23 + lVar25);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar23 + lVar27);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar12;
    uVar9 = *(undefined8 *)((long)puVar23 + lVar25);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)((long)puVar23 + lVar27);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar8;
    uVar17 = *(undefined8 *)((long)puVar23 + lVar25);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar23 + lVar27);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b8 = uVar24;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar16);
    _objc_release(uVar24);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar8);
    _objc_release(uVar13);
    _objc_release(uVar9);
    _objc_release(uVar12);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(lVar22);
    _objc_release(uVar21);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar23;
  }
  ___stack_chk_fail();
  lVar25 = (long)_DAT_11275c968;
  lVar22 = *(long *)(lVar26 + lVar25);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar22 == 0) {
    puVar23 = (undefined8 *)0x0;
  }
  else {
    puVar23 = *(undefined8 **)(lVar26 + lVar25);
    func_0x00010bfe6ac0(puVar23);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return puVar23;
}



/* Entry: 106cff9b4; end: 106cffa1f; -[SCGalleryPhotoAssetViewCell transitioningPosterFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cff9b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11275c968;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bfe6ac0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106cffa20; end: 106cffa2f; -[SCGalleryPhotoAssetViewCell transitioningImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cffa20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275c968),PTR_s_image_1125d7478);
  return;
}



/* Entry: 106cffa30; end: 106cffa33; -[SCGalleryPhotoAssetViewCell transitioningExpandingView] */

void FUN_106cffa30(void)

{
  return;
}



/* Entry: 106cffa34; end: 106cffa43; -[SCGalleryPhotoAssetViewCell setTransitioningInitialImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cffa34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275c968),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 106cffa44; end: 106cffa53; -[SCGalleryPhotoAssetViewCell setSelected:selectOverlayImage:snapIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cffa44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fadd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275c96c),PTR_s_setSelected__11265c598);
  return;
}



/* Entry: 106cffa54; end: 106cffa63; -[SCGalleryPhotoAssetViewCell setSelectionOrderNumber:orderNumbersBySnapId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cffa54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fba10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275c96c),PTR_s_setSelectionOrderNumber__11265c8a8);
  return;
}



/* Entry: 106cffa64; end: 106cffa73; -[SCGalleryPhotoAssetViewCell setSelectMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cffa64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1facd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275c96c),PTR_s_setSelectMode__11265c558);
  return;
}



/* Entry: 106cffa74; end: 106cffa7b; -[SCGalleryPhotoAssetViewCell interactionMode] */

undefined8 FUN_106cffa74(void)

{
  return 3;
}



/* Entry: 106cffa7c; end: 106cffaf7; -[SCGalleryPhotoAssetViewCell animateLongTapForTouchLocation:reverse:] */

void FUN_106cffa7c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x3ff0000000000000;
  if (param_3 == 0) {
    uStack_18 = 0x3fee666666666666;
  }
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106cffaf8;
  puStack_28 = &UNK_110848c48;
  uStack_20 = param_1;
  func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_40);
  return;
}



/* Entry: 106cffaf8; end: 106cffb53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cffaf8(long param_1,undefined8 param_2)

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
  
  _CGAffineTransformMakeScale
            (&uStack_50,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275c964),param_2,
                      &uStack_80);
  return;
}



/* Entry: 106cffb54; end: 106cffb57; -[SCGalleryPhotoAssetViewCell startGeneratingUpdates] */

void FUN_106cffb54(void)

{
  return;
}



/* Entry: 106cffb58; end: 106cffb5b; -[SCGalleryPhotoAssetViewCell stopGeneratingUpdates] */

void FUN_106cffb58(void)

{
  return;
}



/* Entry: 106cffb5c; end: 106cffc33; -[SCGalleryPhotoAssetViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cffb5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6810;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11275c968));
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275c970));
  lVar1 = (long)_DAT_11275c978;
  if ((*(byte *)(param_1 + _DAT_11275c974) & 1) != 0) {
    *(undefined1 *)(param_1 + _DAT_11275c974) = 0;
    func_0x00010bf2e480(*(undefined8 *)(param_1 + lVar1));
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275c980);
  *(undefined8 *)(param_1 + _DAT_11275c980) = 0;
  _objc_release(uVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275c984));
  func_0x00010c1097a0(*(undefined8 *)(param_1 + _DAT_11275c96c));
  func_0x00010c1a7f60(param_1);
  return;
}



/* Entry: 106cffc34; end: 106d0048b; -[SCGalleryPhotoAssetViewCell setImageManager:photoAsset:thumbnailSize:contentsUnloaded:selectMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cffc34(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  ulong param_6,uint param_7,int param_8)

{
  double *pdVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  double dVar26;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = param_5;
  uVar18 = param_6;
  _objc_retain(param_5);
  iVar17 = (int)lVar19;
  _objc_retain(param_6);
  lVar19 = (long)_DAT_11275c978;
  if ((*(long *)(param_3 + lVar19) == param_5) && (*(ulong *)(param_3 + _DAT_11275c980) == param_6))
  {
    dVar26 = ((double *)(param_3 + _DAT_11275c988))[1];
    bVar2 = false;
    if ((*(double *)(param_3 + _DAT_11275c988) == param_1) &&
       (bVar2 = false, !NAN(dVar26) && !NAN(param_2))) {
      bVar2 = dVar26 == param_2;
    }
    if ((bVar2) && (*(byte *)(param_3 + _DAT_11275c98c) == param_7)) goto LAB_106d00418;
  }
  lVar20 = (long)_DAT_11275c968;
  func_0x00010c1a9f00(*(undefined8 *)(param_3 + lVar20));
  lVar21 = (long)_DAT_11275c970;
  func_0x00010c212f20(*(undefined8 *)(param_3 + lVar21));
  lVar22 = (long)_DAT_11275c974;
  if (*(char *)(param_3 + lVar22) == '\x01') {
    *(undefined1 *)(param_3 + lVar22) = 0;
    func_0x00010bf2e480(*(undefined8 *)(param_3 + lVar19));
  }
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_3 + lVar19);
  *(long *)(param_3 + lVar19) = param_5;
  _objc_release(uVar3);
  lVar24 = (long)_DAT_11275c980;
  _objc_retain(param_6);
  uVar3 = *(undefined8 *)(param_3 + lVar24);
  *(ulong *)(param_3 + lVar24) = param_6;
  _objc_release(uVar3);
  pdVar1 = (double *)(param_3 + _DAT_11275c988);
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  lVar23 = (long)_DAT_11275c98c;
  *(char *)(param_3 + lVar23) = (char)param_7;
  lVar25 = (long)_DAT_11275c984;
  if (*(long *)(param_3 + lVar25) == 0) {
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x402e000000000000,0x402e000000000000);
    uVar3 = *(undefined8 *)(param_3 + lVar25);
    *(undefined **)(param_3 + lVar25) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b0c40;
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x402e000000000000,0x402e000000000000,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_3 + lVar25));
    _objc_release(puVar4);
    _objc_release(puVar5);
    func_0x00010c182220(*(undefined8 *)(param_3 + lVar25));
    lVar6 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar6);
    func_0x00010c219b60(*(undefined8 *)(param_3 + lVar25));
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)(param_3 + lVar25);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + lVar25);
    uStack_a0 = uVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_3 + lVar25);
    uStack_98 = uVar12;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf49420(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_3 + lVar25);
    uStack_90 = uVar15;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010bf49420(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = 0;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar5);
    _objc_release(uVar16);
    _objc_release(uVar14);
    _objc_release(uVar15);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(uVar9);
    _objc_release(uVar3);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(uVar7);
  }
  func_0x00010c072a60(param_6);
  func_0x00010c1a7f60(*(undefined8 *)(param_3 + lVar25));
  if (((*(long *)(param_3 + lVar19) != 0) && (lVar25 = *(long *)(param_3 + lVar24), lVar25 != 0)) &&
     ((*(byte *)(param_3 + lVar23) & 1) == 0)) {
    func_0x00010c0c6c20();
    if (lVar25 == 2) {
      if (*(long *)(param_3 + lVar21) == 0) {
        puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
        _objc_alloc();
        func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
        uVar3 = *(undefined8 *)(param_3 + lVar21);
        *(undefined **)(param_3 + lVar21) = puVar4;
        _objc_release(uVar3);
        puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19e480(*(undefined8 *)(param_3 + lVar21));
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(*(undefined8 *)(param_3 + lVar21));
        _objc_release(puVar4);
        uVar3 = *(undefined8 *)(param_3 + lVar21);
        func_0x00010c08c0e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fe7a0(0,0x3ff0000000000000);
        _objc_release(uVar3);
        uVar3 = *(undefined8 *)(param_3 + lVar21);
        func_0x00010c08c0e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fe840(0x4000000000000000);
        _objc_release(uVar3);
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bdc0fe0(puVar4);
        uVar3 = *(undefined8 *)(param_3 + lVar21);
        func_0x00010c08c0e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fe740();
        _objc_release(uVar3);
        _objc_release(puVar4);
        uVar3 = *(undefined8 *)(param_3 + lVar21);
        func_0x00010c08c0e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fe800(0x3f19999a);
        _objc_release(uVar3);
        func_0x00010befbb60(*(undefined8 *)(param_3 + lVar20));
        func_0x00010c219b60(*(undefined8 *)(param_3 + lVar21));
        puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        uVar15 = *(undefined8 *)(param_3 + lVar21);
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = *(undefined8 *)(param_3 + lVar20);
        func_0x00010c08de00(uVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar15;
        func_0x00010bf493c0(0x4014000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_3 + lVar21);
        uStack_b0 = uVar3;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_3 + lVar20);
        func_0x00010bf1ff80(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar7;
        func_0x00010bf493c0(0xc008000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_a8 = uVar12;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar4);
        _objc_release(puVar5);
        _objc_release(uVar12);
        _objc_release(uVar9);
        _objc_release(uVar7);
        _objc_release(uVar3);
        _objc_release(uVar16);
        _objc_release(uVar15);
      }
      uVar3 = *(undefined8 *)(param_3 + lVar24);
      func_0x000107f70300(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_3 + lVar21));
      _objc_release(uVar3);
    }
    *(undefined1 *)(param_3 + lVar22) = 1;
    _objc_initWeak(auStack_b8,param_3);
    uVar3 = *(undefined8 *)(param_3 + lVar19);
    param_4 = *(undefined8 *)(param_3 + lVar24);
    _objc_copyWeak(auStack_c0,auStack_b8);
    uVar18 = 0;
    func_0x000107f6e0e0(*pdVar1,pdVar1[1],uVar3,param_4,0);
    *(int *)(param_3 + _DAT_11275c97c) = (int)uVar3;
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
  }
  iVar17 = param_8;
  func_0x00010c1facc0(param_3);
LAB_106d00418:
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_6 + 0x20);
  _objc_destroyWeak(auStack_b8);
  __Unwind_Resume();
  _objc_retain(param_4);
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained();
  if ((param_5 != 0) && (*(int *)(param_5 + _DAT_11275c97c) == iVar17)) {
    if ((uVar18 & 1) == 0) {
      *(undefined1 *)(param_5 + _DAT_11275c974) = 0;
    }
    func_0x00010c1a9f00(*(undefined8 *)(param_5 + _DAT_11275c968));
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106d0048c; end: 106d00517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0048c(long param_1,undefined8 param_2,int param_3,ulong param_4)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(int *)(param_1 + _DAT_11275c97c) == param_3)) {
    if ((param_4 & 1) == 0) {
      *(undefined1 *)(param_1 + _DAT_11275c974) = 0;
    }
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11275c968));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d00518; end: 106d00527; -[SCGalleryPhotoAssetViewCell disableMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106d00518(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275c960);
}



/* Entry: 106d00528; end: 106d00537; -[SCGalleryPhotoAssetViewCell setDisableMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d00528(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11275c960) = param_3;
  return;
}



/* Entry: 106d00538; end: 106d005c7; -[SCGalleryPhotoAssetViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d00538(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275c984,0);
  _objc_storeStrong(param_1 + _DAT_11275c980,0);
  _objc_storeStrong(param_1 + _DAT_11275c978,0);
  _objc_storeStrong(param_1 + _DAT_11275c96c,0);
  _objc_storeStrong(param_1 + _DAT_11275c970,0);
  _objc_storeStrong(param_1 + _DAT_11275c968,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275c964,0);
  return;
}



/* Entry: 106d005c8; end: 106d0078f; -[SCMemoriesCameraRollTabService initWithCameraRollAlbumPickerScopeExposer:userPreference:memoriesUserDefaultsManager:galleryLogger:photoPermissionCoordinator:featureSettingsService:coreConfigProvider:memoriesExperimentService:memoriesTweaksServices:] */

undefined1 *
FUN_106d005c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f6818;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
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
  return (undefined1 *)puVar1;
}



/* Entry: 106d00790; end: 106d007a7; -[SCMemoriesCameraRollTabService cameraRollAlbumPickerScopeExposer] */

void FUN_106d00790(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d007a8; end: 106d007af; -[SCMemoriesCameraRollTabService userPreferences] */

undefined8 FUN_106d007a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d007b0; end: 106d007b7; -[SCMemoriesCameraRollTabService memoriesUserDefaultsManager] */

undefined8 FUN_106d007b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d007b8; end: 106d007bf; -[SCMemoriesCameraRollTabService galleryLogger] */

undefined8 FUN_106d007b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106d007c0; end: 106d007c7; -[SCMemoriesCameraRollTabService photoPermissionCoordinator] */

undefined8 FUN_106d007c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106d007c8; end: 106d007cf; -[SCMemoriesCameraRollTabService featureSettingsService] */

undefined8 FUN_106d007c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106d007d0; end: 106d007d7; -[SCMemoriesCameraRollTabService coreConfigProvider] */

undefined8 FUN_106d007d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106d007d8; end: 106d007df; -[SCMemoriesCameraRollTabService memoriesExperimentService] */

undefined8 FUN_106d007d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106d007e0; end: 106d007e7; -[SCMemoriesCameraRollTabService memoriesTweaksServices] */

undefined8 FUN_106d007e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106d007e8; end: 106d00867; -[SCMemoriesCameraRollTabService .cxx_destruct] */

void FUN_106d007e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106d00868; end: 106d0094b; -[SCMemoriesCameraRollTabServiceProvider provide] */

void FUN_106d00868(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d22c0;
  _objc_alloc(PTR_PTR_1126d22c0);
  func_0x00010c016d40();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d0094c; end: 106d0098b;  */

void FUN_106d0094c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5f060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106d0098c; end: 106d00bb7; -[SCMemoriesCameraRollTabServiceProvider _memoriesCameraRollTabService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0098c(long param_1,undefined8 param_2)

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
  undefined8 uVar10;
  
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11275c9d0;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar9;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = (long)_DAT_11275c9b8;
  uVar10 = *(undefined8 *)(param_1 + _DAT_11275c9b4);
  _objc_retain(uVar10);
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained();
  lVar2 = lVar9;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = param_1 + _DAT_11275c9bc;
  _objc_loadWeakRetained();
  lVar3 = lVar9;
  func_0x00010c0ca000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar8 = (long)_DAT_11275c9c0;
  lVar9 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar4 = lVar9;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar5 = lVar8;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar9 = param_1 + _DAT_11275c9c4;
  _objc_loadWeakRetained();
  lVar8 = lVar9;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  puVar6 = PTR_PTR_1126d22c8;
  _objc_alloc();
  lVar9 = param_1 + _DAT_11275c9c8;
  _objc_loadWeakRetained(lVar9);
  lVar7 = lVar9;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275c9d4;
  _objc_loadWeakRetained();
  func_0x00010bffba60(puVar6,param_2,uVar10,lVar2,lVar3,lVar7,lVar4,lVar8,lVar5,lVar1,param_1);
  _objc_release(uVar10);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106d00bb8; end: 106d00c47; -[SCMemoriesCameraRollTabServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d00bb8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275c9b4,0);
  _objc_destroyWeak(param_1 + _DAT_11275c9d4);
  _objc_destroyWeak(param_1 + _DAT_11275c9c4);
  _objc_destroyWeak(param_1 + _DAT_11275c9d0);
  _objc_destroyWeak(param_1 + _DAT_11275c9bc);
  _objc_destroyWeak(param_1 + _DAT_11275c9b8);
  _objc_destroyWeak(param_1 + _DAT_11275c9c0);
  _objc_destroyWeak(param_1 + _DAT_11275c9c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275c9cc);
  return;
}



/* Entry: 106d00c48; end: 106d00cbb; -[SCMemoriesCameraRollTabServices initWithGalleryCameraRollTabService:] */

undefined1 * FUN_106d00c48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6820;
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



/* Entry: 106d00cbc; end: 106d00cc3; -[SCMemoriesCameraRollTabServices memoriesCameraRollTabService] */

undefined8 FUN_106d00cbc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d00cc4; end: 106d00ccf; -[SCMemoriesCameraRollTabServices .cxx_destruct] */

void FUN_106d00cc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d00cd0; end: 106d00d57;  */

void FUN_106d00cd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain();
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b1c58;
  _objc_alloc(PTR_PTR_1126b1c58);
  func_0x00010c01fc40();
  _objc_release(param_1);
  func_0x00010c01b460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e879b8,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d00d58; end: 106d00dbf; -[SCMemoriesCameraRollViewAlbumsButton initWithFrame:origin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106d00d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6828;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275c9dc) = param_3;
    func_0x00010beb1160(puVar1);
    func_0x00010beb11a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d00dc0; end: 106d00f1f; -[SCMemoriesCameraRollViewAlbumsButton updateTitle:] */

/* WARNING: Possible PIC construction at 0x000106d01128: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106d0112c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d00dc0(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_4 + _DAT_11275c9e0);
  _objc_retain(param_6);
  func_0x00010c212f20();
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ba0(0x7fefffffffffffff,0x7fefffffffffffff,param_6);
  _objc_release(param_6);
  _objc_release(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar4);
  NEON_fminnm(param_3 + 16.0 + 36.0,0x406a400000000000);
  func_0x00010bfb68e0(param_4);
  func_0x00010c19f0e0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c21e900();
  uVar6 = 0x4032000000000000;
  if (*(long *)(param_4 + _DAT_11275c9dc) != 0) {
    uVar6 = 0x402e000000000000;
  }
  lVar3 = param_4;
  func_0x00010c08c0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(uVar6);
  _objc_release(lVar3);
  func_0x00010bed39e0(param_4);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  uVar4 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar4,uVar7,uVar8,uVar9);
  lVar3 = (long)_DAT_11275c9e0;
  uVar6 = *(undefined8 *)(param_4 + lVar3);
  *(undefined **)(param_4 + lVar3) = puVar1;
  _objc_release(uVar6);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_4 + lVar3));
  _objc_release(puVar1);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_4 + lVar3));
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(uVar4,uVar7,uVar8,uVar9);
  lVar5 = (long)_DAT_11275c9e4;
  uVar7 = *(undefined8 *)(param_4 + lVar5);
  *(undefined **)(param_4 + lVar5) = puVar1;
  _objc_release(uVar7);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf833a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_4 + lVar5));
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar7);
  func_0x00010c182220(*(undefined8 *)(param_4 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_4 + lVar5));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_4,PTR_s_addSubview__11259c880,*(undefined8 *)(param_4 + lVar3));
  return;
}


