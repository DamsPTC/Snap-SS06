/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108fbc14c; end: 108fbc203; -[SCContainerCollectionViewCell collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

void FUN_108fbc14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  FUN_108fd72b4(param_7,param_5);
  uVar1 = param_7;
  func_0x00010c070ea0(param_7);
  uVar2 = param_7;
  func_0x00010c070400(param_7);
  _objc_release(param_7);
  FUN_108fd70e0(param_1,param_2,param_3,param_4,param_8,uVar1,uVar2);
  FUN_108fd6ca0(param_8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 108fbc204; end: 108fbc2d7; -[SCContainerCollectionViewCell scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fbc204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277f090;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  _objc_retain(param_7);
  FUN_108fd72b4(uVar2,param_5);
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  uVar2 = param_7;
  func_0x00010c070ea0(param_7);
  uVar1 = param_7;
  func_0x00010c070400(param_7);
  _objc_release(param_7);
  FUN_108fd717c(param_1,param_2,param_3,param_4,uVar3,uVar2,uVar1);
  func_0x00010bf6b020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ad60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108fbc2d8; end: 108fbc30f; -[SCContainerCollectionViewCell scrollViewWillBeginDragging:] */

void FUN_108fbc2d8(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ad80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fbc310; end: 108fbc3ef; -[SCContainerCollectionViewCell scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fbc310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_8 & 1) == 0) {
    lVar4 = (long)_DAT_11277f090;
    uVar2 = *(undefined8 *)(param_5 + lVar4);
    _objc_retain(param_7);
    FUN_108fd72b4(uVar2,param_5);
    uVar3 = *(undefined8 *)(param_5 + lVar4);
    uVar2 = param_7;
    func_0x00010c070ea0(param_7);
    uVar1 = param_7;
    func_0x00010c070400(param_7);
    _objc_release(param_7);
    FUN_108fd717c(param_1,param_2,param_3,param_4,uVar3,uVar2,uVar1);
  }
  func_0x00010bf6b020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ad40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108fbc3f0; end: 108fbc4c3; -[SCContainerCollectionViewCell scrollViewDidEndDecelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fbc3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277f090;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  _objc_retain(param_7);
  FUN_108fd72b4(uVar2,param_5);
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  uVar2 = param_7;
  func_0x00010c070ea0(param_7);
  uVar1 = param_7;
  func_0x00010c070400(param_7);
  _objc_release(param_7);
  FUN_108fd717c(param_1,param_2,param_3,param_4,uVar3,uVar2,uVar1);
  func_0x00010bf6b020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ad20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108fbc4c4; end: 108fbc7d3; -[SCContainerCollectionViewCell viewportDidUpdateViewportFrame:dragging:decelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108fbc4c4(double param_1,double param_2,double param_3,double param_4,undefined *param_5,
                    undefined8 param_6,uint param_7,uint param_8)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined *puVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar1 = (double *)(param_5 + _DAT_11277f094);
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  pdVar1[2] = param_3;
  pdVar1[3] = param_4;
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  dVar14 = param_1;
  dVar15 = param_2;
  dVar16 = param_3;
  dVar18 = param_4;
  func_0x00010c26f3c0();
  lVar10 = (long)_DAT_11277f098;
  if ((param_7 | param_8) == 1) {
    dVar15 = dVar14 - *(double *)(param_5 + lVar10);
    dVar16 = 0.1;
    if (dVar15 <= 0.1) goto LAB_108fbc78c;
  }
  pdVar1 = (double *)(param_5 + _DAT_11277f09c);
  dVar20 = pdVar1[1];
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  *(double *)(param_5 + lVar10) = dVar14;
  puVar6 = param_5;
  func_0x00010bfb68e0();
  uVar4 = (uint)puVar6;
  func_0x00010b81648c();
  func_0x00010bfb68e0(param_5);
  if (dVar16 * dVar18 == 0.0) {
    uVar12 = 1;
    dVar17 = dVar16;
    dVar19 = dVar18;
  }
  else {
    dVar17 = param_3;
    dVar19 = param_4;
    _CGRectIntersection(param_1,param_2,param_3,param_4,dVar14,dVar15,dVar16,dVar18);
    dVar14 = (dVar17 * dVar19) / (dVar16 * dVar18);
    dVar15 = 0.5;
    uVar12 = (uint)(0.5 < dVar14);
  }
  puVar6 = param_5;
  func_0x00010bfb68e0();
  uVar5 = (uint)puVar6;
  _CGRectIntersectsRect(param_1,param_2,param_3,param_4,dVar14,dVar15,dVar17,dVar19);
  puVar6 = param_5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_11277f090;
  dVar15 = param_2;
  func_0x00010bf51460(param_1,param_2,param_3,param_4);
  _objc_release();
  if ((((param_7 | param_8) ^ 1) & uVar12) == 0) {
    dVar14 = ABS(param_2 - dVar20);
    uVar12 = 0;
    if (dVar14 < 20.0) {
      uVar12 = param_8;
    }
    if (((uVar12 & uVar4 ^ 1) & uVar5 & 1) != 0) goto LAB_108fbc78c;
  }
  dVar14 = 0.0;
  puVar6 = *(undefined **)(param_5 + lVar10);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (puVar7 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(puVar6);
      }
      puVar3 = PTR_DAT_1126a5b78;
      uVar11 = *(undefined8 *)((long)puVar13 * 8);
      _objc_retain(uVar11);
      uVar8 = uVar11;
      func_0x000107c318f8(uVar11,puVar3);
      uVar2 = uVar11;
      if ((int)uVar8 == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar11);
      dVar14 = param_1;
      func_0x00010c29f560(param_1,dVar15,param_3,param_4,uVar2);
      _objc_release(uVar2);
      puVar13 = puVar13 + 1;
    } while (puVar7 != puVar13);
    puVar7 = puVar6;
    func_0x00010bf52a60();
  }
  _objc_release();
LAB_108fbc78c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return dVar14;
  }
  ___stack_chk_fail();
  return *(double *)(puVar6 + _DAT_11277f094);
}



/* Entry: 108fbc7d4; end: 108fbc7eb; -[SCContainerCollectionViewCell viewportFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fbc7d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f094);
}



/* Entry: 108fbc7ec; end: 108fbc803; -[SCContainerCollectionViewCell setViewportFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fbc7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11277f094);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 108fbc804; end: 108fbc823; -[SCContainerCollectionViewCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fbc804(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277f0a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fbc824; end: 108fbc837; -[SCContainerCollectionViewCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fbc824(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277f0a0,param_3);
  return;
}



/* Entry: 108fbc838; end: 108fbc847; -[SCContainerCollectionViewCell contentCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fbc838(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f090);
}



/* Entry: 108fbc848; end: 108fbc883; -[SCContainerCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fbc848(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277f090,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277f0a0);
  return;
}



/* Entry: 108fbc884; end: 108fbc8f7; -[SCContainerCollectionViewCell collectionView:layout:section:didScrollToOffset:] */

void FUN_108fbc884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ac60(param_1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108fbc8f8; end: 108fbc95b; -[SCContainerCollectionViewCell collectionView:layout:sectionWillBeginDragging:] */

void FUN_108fbc8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4acc0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fbc95c; end: 108fbc9cf; -[SCContainerCollectionViewCell collectionView:layout:sectionDidEndDragging:willDecelerate:] */

void FUN_108fbc95c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4aca0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fbc9d0; end: 108fbca33; -[SCContainerCollectionViewCell collectionView:layout:sectionDidEndDecelerating:] */

void FUN_108fbc9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ac80();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fbca34; end: 108fbcba3; -[SCContainerCollectionViewRTLSupportCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fbca34(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffae0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    lVar7 = (long)_DAT_11277f0a4;
    if (*(long *)((long)puVar2 + lVar7) != 0) {
      func_0x00010c12c960();
    }
    func_0x00010c160fc0(puVar2);
    puVar3 = (undefined1 *)puVar2;
    func_0x00010b8166c0();
    ppuVar1 = &PTR_PTR_1126c91a0;
    if ((int)puVar3 == 0) {
      ppuVar1 = &PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    }
    puVar4 = *ppuVar1;
    _objc_opt_new(puVar4);
    func_0x00010c1f7ac0();
    puVar5 = PTR_PTR_1126b4900;
    _objc_alloc();
    func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar6 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined **)((long)puVar2 + lVar7) = puVar5;
    _objc_release(uVar6);
    puVar3 = (undefined1 *)puVar2;
    func_0x00010b8166c0();
    if ((int)puVar3 != 0) {
      func_0x00010c1fbe00(*(undefined8 *)((long)puVar2 + lVar7));
    }
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar7));
    func_0x00010c1f7e20(*(undefined8 *)((long)puVar2 + lVar7));
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar7));
    _objc_release(puVar5);
    func_0x00010c1738c0(*(undefined8 *)((long)puVar2 + lVar7));
    puVar3 = (undefined1 *)puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 108fbcba4; end: 108fbccaf; -[SCContainerCollectionViewRTLSupportCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fbcba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ffae0;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_layoutSubviews_112600e60);
  lVar4 = (long)_DAT_11277f0a4;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  uVar1 = param_5;
  uVar3 = param_1;
  uVar5 = param_2;
  uVar6 = param_3;
  uVar7 = param_4;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf20c00();
  _CGRectEqualToRect(param_1,param_2,param_3,param_4,uVar3,uVar5,uVar6,uVar7);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010bf408e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069fe0();
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 108fbccb0; end: 108fbcd3f; -[SCContainerCollectionViewRTLSupportCell collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_108fbccb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bf6b020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ace0();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 108fbcd40; end: 108fbcdd7; -[SCContainerCollectionViewRTLSupportCell collectionView:layout:insetForSectionAtIndex:] */

undefined8
FUN_108fbcd40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ac40();
  _objc_release(param_5);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108fbcdd8; end: 108fbced7; -[SCContainerCollectionViewRTLSupportCell collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_108fbcdd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  FUN_108fd72b4(param_7,param_5);
  uVar1 = param_7;
  func_0x00010c070ea0(param_7);
  uVar2 = param_7;
  func_0x00010c070400(param_7);
  _objc_release(param_7);
  FUN_108fd70e0(param_1,param_2,param_3,param_4,param_8,uVar1,uVar2);
  FUN_108fd6ca0(param_8,1);
  func_0x00010bf6b020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ad00();
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108fbced8; end: 108fbcf8f; -[SCContainerCollectionViewRTLSupportCell collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

void FUN_108fbced8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  FUN_108fd72b4(param_7,param_5);
  uVar1 = param_7;
  func_0x00010c070ea0(param_7);
  uVar2 = param_7;
  func_0x00010c070400(param_7);
  _objc_release(param_7);
  FUN_108fd70e0(param_1,param_2,param_3,param_4,param_8,uVar1,uVar2);
  FUN_108fd6ca0(param_8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 108fbcf90; end: 108fbd063; -[SCContainerCollectionViewRTLSupportCell scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fbcf90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277f0a4;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  _objc_retain(param_7);
  FUN_108fd72b4(uVar2,param_5);
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  uVar2 = param_7;
  func_0x00010c070ea0(param_7);
  uVar1 = param_7;
  func_0x00010c070400(param_7);
  _objc_release(param_7);
  FUN_108fd717c(param_1,param_2,param_3,param_4,uVar3,uVar2,uVar1);
  func_0x00010bf6b020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ad60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108fbd064; end: 108fbd09b; -[SCContainerCollectionViewRTLSupportCell scrollViewWillBeginDragging:] */

void FUN_108fbd064(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ad80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fbd09c; end: 108fbd17b; -[SCContainerCollectionViewRTLSupportCell scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fbd09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_8 & 1) == 0) {
    lVar4 = (long)_DAT_11277f0a4;
    uVar2 = *(undefined8 *)(param_5 + lVar4);
    _objc_retain(param_7);
    FUN_108fd72b4(uVar2,param_5);
    uVar3 = *(undefined8 *)(param_5 + lVar4);
    uVar2 = param_7;
    func_0x00010c070ea0(param_7);
    uVar1 = param_7;
    func_0x00010c070400(param_7);
    _objc_release(param_7);
    FUN_108fd717c(param_1,param_2,param_3,param_4,uVar3,uVar2,uVar1);
  }
  func_0x00010bf6b020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ad40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108fbd17c; end: 108fbd24f; -[SCContainerCollectionViewRTLSupportCell scrollViewDidEndDecelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fbd17c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277f0a4;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  _objc_retain(param_7);
  FUN_108fd72b4(uVar2,param_5);
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  uVar2 = param_7;
  func_0x00010c070ea0(param_7);
  uVar1 = param_7;
  func_0x00010c070400(param_7);
  _objc_release(param_7);
  FUN_108fd717c(param_1,param_2,param_3,param_4,uVar3,uVar2,uVar1);
  func_0x00010bf6b020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ad20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108fbd250; end: 108fbd563; -[SCContainerCollectionViewRTLSupportCell viewportDidUpdateViewportFrame:dragging:decelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108fbd250(double param_1,double param_2,double param_3,double param_4,undefined *param_5,
                    undefined8 param_6,uint param_7,uint param_8)

{
  double *pdVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar1 = (double *)(param_5 + _DAT_11277f0a8);
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  pdVar1[2] = param_3;
  pdVar1[3] = param_4;
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  dVar13 = param_1;
  dVar14 = param_2;
  dVar15 = param_3;
  dVar17 = param_4;
  func_0x00010c26f3c0();
  lVar9 = (long)_DAT_11277f0ac;
  if ((param_7 | param_8) == 1) {
    dVar14 = dVar13 - *(double *)(param_5 + lVar9);
    dVar15 = 0.1;
    if (dVar14 <= 0.1) goto LAB_108fbd518;
  }
  pdVar1 = (double *)(param_5 + _DAT_11277f0b0);
  dVar19 = pdVar1[1];
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  *(double *)(param_5 + lVar9) = dVar13;
  puVar4 = param_5;
  func_0x00010bfb68e0();
  uVar3 = (uint)puVar4;
  func_0x00010b81648c();
  func_0x00010bfb68e0(param_5);
  if (dVar15 * dVar17 == 0.0) {
    uVar10 = 1;
    dVar16 = dVar15;
    dVar18 = dVar17;
  }
  else {
    dVar16 = param_3;
    dVar18 = param_4;
    _CGRectIntersection(param_1,param_2,param_3,param_4,dVar13,dVar14,dVar15,dVar17);
    dVar13 = (dVar16 * dVar18) / (dVar15 * dVar17);
    dVar14 = 0.5;
    uVar10 = (uint)(0.5 < dVar13);
  }
  puVar4 = param_5;
  func_0x00010bfb68e0();
  _CGRectIntersectsRect(param_1,param_2,param_3,param_4,dVar13,dVar14,dVar16,dVar18);
  if ((((param_7 | param_8) ^ 1) & uVar10) == 0) {
    dVar13 = ABS(param_2 - dVar19);
    uVar10 = 0;
    if (dVar13 < 20.0) {
      uVar10 = param_8;
    }
    if (((uVar10 & uVar3 ^ 1) & (uint)puVar4 & 1) != 0) goto LAB_108fbd518;
  }
  dVar13 = 0.0;
  puVar4 = *(undefined **)(param_5 + _DAT_11277f0a4);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(puVar4);
      }
      uVar12 = *(undefined8 *)((long)puVar11 * 8);
      puVar6 = param_5;
      func_0x00010c262ca0(param_5);
      _objc_retainAutoreleasedReturnValue();
      dVar13 = param_1;
      dVar14 = param_2;
      dVar15 = param_3;
      dVar17 = param_4;
      func_0x00010bf51460(param_1,param_2,param_3,param_4);
      _objc_release(puVar6);
      puVar6 = PTR_DAT_1126a5b78;
      _objc_retain(uVar12);
      uVar7 = uVar12;
      func_0x000107c318f8(uVar12,puVar6);
      uVar2 = uVar12;
      if ((int)uVar7 == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar12);
      func_0x00010c29f560(dVar13,dVar14,dVar15,dVar17,uVar2);
      _objc_release(uVar2);
      puVar11 = puVar11 + 1;
    } while (puVar5 != puVar11);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release();
LAB_108fbd518:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return dVar13;
  }
  ___stack_chk_fail();
  return *(double *)(puVar4 + _DAT_11277f0a8);
}



/* Entry: 108fbd564; end: 108fbd57b; -[SCContainerCollectionViewRTLSupportCell viewportFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fbd564(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f0a8);
}



/* Entry: 108fbd57c; end: 108fbd593; -[SCContainerCollectionViewRTLSupportCell setViewportFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fbd57c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11277f0a8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 108fbd594; end: 108fbd5a3; -[SCContainerCollectionViewRTLSupportCell contentCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fbd594(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f0a4);
}



/* Entry: 108fbd5a4; end: 108fbd5b7; -[SCContainerCollectionViewRTLSupportCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fbd5a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f0a4,0);
  return;
}



/* Entry: 108fbd5b8; end: 108fbd60b; -[SCHorizontalOneBounceCollectionView initWithFrame:collectionViewLayout:] */

undefined1 * FUN_108fbd5b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ffae8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame_collectionViewLayo_1125e29e0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c181fc0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fbd60c; end: 108fbd71b; -[SCHorizontalOneBounceCollectionView gestureRecognizerShouldBegin:] */

undefined1 *
FUN_108fbd60c(double param_1,double param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  double dVar4;
  ulong uStack_60;
  undefined *puStack_58;
  
  puVar3 = &uStack_60;
  _objc_retain(param_5);
  func_0x00010bf4cdc0(param_3);
  dVar4 = param_1;
  func_0x00010bf4c7c0(param_3);
  uVar1 = param_3;
  func_0x00010c0f36c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  if (((uVar1 != param_5) || (0.0 < param_1 + param_2)) || (dVar4 <= 0.0)) {
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_3;
    func_0x00010bf209e0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      puVar3 = (ulong *)0x0;
      goto LAB_108fbd6f4;
    }
  }
  puStack_58 = PTR_PTR_1126ffae8;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_gestureRecognizerShouldBegin__1125ce098,param_5);
LAB_108fbd6f4:
  _objc_release(param_5);
  return (undefined1 *)puVar3;
}



/* Entry: 108fbd71c; end: 108fbd723; -[SCRTLCollectionViewFlowLayout flipsHorizontallyInOppositeLayoutDirection] */

undefined8 FUN_108fbd71c(void)

{
  return 1;
}



/* Entry: 108fbd724; end: 108fbd787; -[SCCollectionSectionBasedViewUpdaterLogger init] */

undefined1 * FUN_108fbd724(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ffaf0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dcd10;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fbd788; end: 108fbd7ef; -[SCCollectionSectionBasedViewUpdaterLogger logSigCollectionviewInvalidateLayoutErrorWithCollectionView:withUiElement:] */

void FUN_108fbd788(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _NSStringFromClass(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_108fe254c(uVar1,param_3,param_4,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fbd7f0; end: 108fbd857; -[SCCollectionSectionBasedViewUpdaterLogger logSigCollectionviewLayoutIfNeededErrorWithCollectionView:withUiElement:] */

void FUN_108fbd7f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _NSStringFromClass(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_108fe277c(uVar1,param_3,param_4,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fbd858; end: 108fbd8bf; -[SCCollectionSectionBasedViewUpdaterLogger logSigCollectionviewPerformBatchUpdatesErrorWithCollectionView:withUiElement:] */

void FUN_108fbd858(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _NSStringFromClass(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_108fe29ac(uVar1,param_3,param_4,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fbd8c0; end: 108fbd927; -[SCCollectionSectionBasedViewUpdaterLogger logSigCollectionviewBatchUpdateInvalidateLayoutErrorWithCollectionView:withUiElement:] */

void FUN_108fbd8c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _NSStringFromClass(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_108fe2bdc(uVar1,param_3,param_4,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fbd928; end: 108fbd933; -[SCCollectionSectionBasedViewUpdaterLogger .cxx_destruct] */

void FUN_108fbd928(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108fbd934; end: 108fbd93f; +[SCCollectionViewQueryResultController announcerIdentifier] */

undefined ** FUN_108fbd934(void)

{
  return &PTR____CFConstantStringClassReference_110f15bf8;
}



/* Entry: 108fbd940; end: 108fbd947; -[SCCollectionViewQueryResultController addListener:] */

void FUN_108fbd940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 108fbd948; end: 108fbd94f; -[SCCollectionViewQueryResultController removeListener:] */

void FUN_108fbd948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 108fbd950; end: 108fbd957; -[SCCollectionViewQueryResultController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_108fbd950(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 108fbd958; end: 108fbdb0f; -[SCCollectionViewQueryResultController initWithResultCollectionView:queryCoordinator:sectionCreator:] */

undefined1 *
FUN_108fbd958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ffaf8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b1318;
    func_0x00010c1555c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x70));
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_DAT_1126a5538;
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    _objc_retain(uVar5);
    uVar4 = uVar5;
    func_0x000107c318f8(uVar5,puVar3);
    uVar2 = uVar5;
    if ((int)uVar4 == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar5);
    func_0x00010bef9980(uVar2);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dcd18;
    _objc_alloc();
    func_0x00010c042ec0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dcd20;
    _objc_alloc();
    func_0x00010c042e80();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108fbdb10; end: 108fbdb17; -[SCCollectionViewQueryResultController setCollectionViewDelegate:] */

void FUN_108fbdb10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_setCollectionViewDelegate__11263d3e8);
  return;
}



/* Entry: 108fbdb18; end: 108fbdb1f; -[SCCollectionViewQueryResultController collectionViewDelegate] */

void FUN_108fbdb18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf407d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_collectionViewDelegate_1125adb98);
  return;
}



/* Entry: 108fbdb20; end: 108fbdc03; -[SCCollectionViewQueryResultController setQuery:] */

void FUN_108fbdb20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c13cfe0(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108fbdc04; end: 108fbdcd3;  */

void FUN_108fbdc04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108fbdcd4;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000107c312cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108fbdcd4; end: 108fbdd07;  */

void FUN_108fbdcd4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdce580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fbdd08; end: 108fbddbf; -[SCCollectionViewQueryResultController sectionBasedCollectionViewUpdaterWillUpdateCollectionView:] */

void FUN_108fbdd08(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar3);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x48);
  }
  func_0x00010bf51e00(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf51e00(uVar2);
  func_0x00010c153f00(lVar3,param_2,param_1,lVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(lVar3);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf51e00();
  lVar3 = lVar1;
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x48);
  }
  _objc_retain(lVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar3;
  _objc_release(uVar2);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108fbddc0; end: 108fbdf07; -[SCCollectionViewQueryResultController sectionBasedCollectionViewUpdater:didSetUpSections:] */

undefined8 FUN_108fbddc0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long in_x3;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x3);
  uVar11 = 0;
  puVar6 = auStack_e8;
  lVar3 = in_x3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(in_x3);
      }
      puVar2 = PTR_DAT_1126a5538;
      uVar8 = *(undefined8 *)(lVar9 * 8);
      _objc_retain(uVar8);
      uVar4 = uVar8;
      func_0x000107c318f8(uVar8,puVar2);
      uVar1 = uVar8;
      if ((int)uVar4 == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar8);
      func_0x00010bef9980(uVar1);
      _objc_release(uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    puVar6 = auStack_e8;
    lVar3 = in_x3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar6);
    uVar11 = 0;
    puVar5 = puVar6;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (puVar5 != (undefined1 *)0x0) {
      puVar10 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(puVar6);
        }
        puVar2 = PTR_DAT_1126a5538;
        uVar8 = *(undefined8 *)((long)puVar10 * 8);
        _objc_retain(uVar8);
        uVar4 = uVar8;
        func_0x000107c318f8(uVar8,puVar2);
        uVar1 = uVar8;
        if ((int)uVar4 == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar8);
        func_0x00010c12cf80(uVar1);
        _objc_release(uVar1);
        puVar10 = puVar10 + 1;
      } while (puVar5 != puVar10);
      puVar5 = puVar6;
      func_0x00010bf52a60();
    }
    if ((*(byte *)(in_x3 + 0x61) & 1) == 0) {
      func_0x00010c124840(*(undefined8 *)(in_x3 + 0x20));
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
      ___stack_chk_fail();
      lVar7 = *(long *)(puVar6 + 0x48);
      func_0x00010c11da20();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar7;
      func_0x00010c08fa60();
      uVar11 = 0x3ff0000000000000;
      if (lVar3 != 0) {
        uVar11 = 0x4008000000000000;
      }
      _objc_release(lVar7);
      return uVar11;
    }
    return uVar11;
  }
  return uVar11;
}



/* Entry: 108fbdf08; end: 108fbe063; -[SCCollectionViewQueryResultController sectionBasedCollectionViewUpdater:didTearDownSections:] */

undefined8 FUN_108fbdf08(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar9 = 0;
  lVar3 = param_4;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_4);
      }
      puVar2 = PTR_DAT_1126a5538;
      uVar7 = *(undefined8 *)(lVar8 * 8);
      _objc_retain(uVar7);
      uVar4 = uVar7;
      func_0x000107c318f8(uVar7,puVar2);
      uVar1 = uVar7;
      if ((int)uVar4 == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar7);
      func_0x00010c12cf80(uVar1);
      _objc_release(uVar1);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_4;
    func_0x00010bf52a60();
  }
  if ((*(byte *)(param_1 + 0x61) & 1) == 0) {
    func_0x00010c124840(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lVar5 = *(long *)(param_4 + 0x48);
    func_0x00010c11da20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c08fa60();
    uVar9 = 0x3ff0000000000000;
    if (lVar3 != 0) {
      uVar9 = 0x4008000000000000;
    }
    _objc_release(lVar5);
    return uVar9;
  }
  return uVar9;
}



/* Entry: 108fbe064; end: 108fbe0cf; -[SCCollectionViewQueryResultController sectionInsetsForSectionBasedCollectionViewUpdater:] */

undefined8 FUN_108fbe064(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c11da20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  uVar3 = 0x3ff0000000000000;
  if (lVar2 != 0) {
    uVar3 = 0x4008000000000000;
  }
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 108fbe0d0; end: 108fbe103; -[SCCollectionViewQueryResultController sectionBasedCollectionViewUpdater:didUpdateLayoutWithAnimationFinished:] */

void FUN_108fbe0d0(long param_1)

{
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010c153f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fbe104; end: 108fbe2bf; -[SCCollectionViewQueryResultController sectionBasedCollectionViewUpdater:didUpdateSectionsWithAnimationFinished:] */

void FUN_108fbe104(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010bed66e0(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf51e00(uVar2);
  func_0x00010bed6700(param_1);
  _objc_release(uVar2);
  lVar4 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c153f80();
  _objc_release(lVar4);
  uVar3 = param_1;
  func_0x00010be33fe0();
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x50);
    func_0x00010bf529e0();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar4 != 0) {
      _objc_initWeak(auStack_58,param_1);
      uVar2 = 0x15;
      func_0x000107c312b8(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = puVar1;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_108fbe2c0;
      puStack_68 = &UNK_1108434b0;
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x000107c27d8c(uVar2,&puStack_80);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
    _objc_initWeak(auStack_58,param_1);
    uVar2 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = puVar1;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x108fbe2ec;
    puStack_90 = &UNK_1108434b0;
    _objc_copyWeak(auStack_88,auStack_58);
    func_0x000107c27d8c(uVar2,&puStack_a8);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108fbe2c0; end: 108fbe317;  */

void FUN_108fbe2c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fbe318; end: 108fbe35f; -[SCCollectionViewQueryResultController presentingViewControllerForSectionBasedCollectionViewUpdater:] */

void FUN_108fbe318(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c10fde0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108fbe360; end: 108fbe4a7; -[SCCollectionViewQueryResultController releasePendingQueryResultWithLoadingQueryResult:] */

void FUN_108fbe360(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c264360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x108fbe4d4;
    puStack_68 = &UNK_110841fb0;
    puVar2 = auStack_58;
    _objc_copyWeak(puVar2,auStack_28);
    _objc_retain(param_3);
    uStack_60 = param_3;
    func_0x000107c312cc("APPSTORE",&puStack_80);
    _objc_release(uStack_60);
  }
  else {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_108fbe4a8;
    puStack_38 = &UNK_1108434b0;
    puVar2 = auStack_30;
    _objc_copyWeak(puVar2,auStack_28);
    func_0x000107c312cc("APPSTORE",&puStack_50);
  }
  _objc_destroyWeak(puVar2);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 108fbe4a8; end: 108fbe507;  */

void FUN_108fbe4a8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8a440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fbe508; end: 108fbe5f3; -[SCCollectionViewQueryResultController _releasePendingQueryResult] */

void FUN_108fbe508(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c264360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c153ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c13cd80();
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c264340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000107c31908();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c264340(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf51e00();
  func_0x00010c1f9720(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fbe5f4; end: 108fbe633;  */

void FUN_108fbe5f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf46560(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf51e00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fbe634; end: 108fbe6b7; -[SCCollectionViewQueryResultController firstSectionHeightChangedBy:] */

void FUN_108fbe634(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2 + 0x68;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_2 = param_2 + 0x68;
    _objc_loadWeakRetained(param_2);
    func_0x00010bfb1ba0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 108fbe6b8; end: 108fbe957; -[SCCollectionViewQueryResultController _updateSuspendedQueryResult:] */

void FUN_108fbe6b8(undefined **param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c28aa00(param_1[3]);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar2 = param_1[3];
  func_0x00010c264340();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar14 = *plStack_130;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar14) {
          _objc_enumerationMutation(puVar2);
        }
        uVar12 = *(undefined8 *)(lStack_138 + (long)puVar15 * 8);
        uVar4 = uVar12;
        func_0x00010c1554e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x000107c318f8();
        uVar11 = uVar4;
        if ((int)uVar5 == 0) {
          uVar11 = 0;
        }
        _objc_retain(uVar11);
        _objc_release(uVar4);
        func_0x00010bef9980(uVar11);
        _objc_release(uVar11);
        func_0x00010bf46560(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(uVar12);
        puVar15 = puVar15 + 1;
      } while (puVar3 != puVar15);
      puVar3 = puVar2;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar15 = param_1[0xb];
  ppuVar13 = &PTR____CFConstantStringClassReference_110f15c38;
  ppuVar6 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f15c58;
  puVar3 = puVar1;
  func_0x00010bf51e00();
  puVar2 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_f8 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(puVar15);
  _objc_release(puVar7);
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  _objc_release(ppuVar6);
  ppuVar6 = param_1 + 0xd;
  _objc_loadWeakRetained();
  ppuVar8 = ppuVar6;
  _objc_opt_respondsToSelector();
  _objc_release(ppuVar6);
  if (((ulong)ppuVar8 & 1) != 0) {
    ppuVar6 = param_1 + 0xd;
    _objc_loadWeakRetained();
    ppuVar13 = param_1;
    func_0x00010c153f60();
    _objc_release(ppuVar6);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_178 = &PTR____CFConstantStringClassReference_110f15c38;
  pcStack_148 = FUN_108fbe958;
  puStack_180 = puVar3;
  ppuStack_170 = ppuVar8;
  ppuStack_168 = ppuVar6;
  puStack_160 = puVar1;
  ppuStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar13);
  puVar1 = puVar2 + 0x68;
  _objc_loadWeakRetained();
  puVar3 = puVar1;
  _objc_opt_respondsToSelector();
  if (((ulong)puVar3 & 1) == 0) {
    _objc_release(puVar1);
  }
  else {
    puVar3 = puVar2 + 0x68;
    _objc_loadWeakRetained();
    puVar15 = puVar3;
    func_0x00010c153fa0();
    _objc_release(puVar3);
    _objc_release(puVar1);
    if (((ulong)puVar15 & 1) == 0) {
      func_0x00010c13cd80(ppuVar13);
      func_0x00010bed66e0(puVar2);
      _objc_initWeak(auStack_188,puVar2);
      puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1b0 = 0xc2000000;
      pcStack_1a8 = FUN_108fbebd0;
      puStack_1a0 = &UNK_110841fb0;
      _objc_copyWeak(auStack_190,auStack_188);
      _objc_retain(ppuVar13);
      ppuStack_198 = ppuVar13;
      func_0x000107c312cc("APPSTORE",&puStack_1b8);
      puVar1 = puVar2 + 0x68;
      _objc_loadWeakRetained();
      puVar3 = puVar1;
      _objc_opt_respondsToSelector();
      _objc_release(puVar1);
      if (((ulong)puVar3 & 1) != 0) {
        puVar2 = puVar2 + 0x68;
        _objc_loadWeakRetained(puVar2);
        func_0x00010c153f20();
        _objc_release(puVar2);
      }
      _objc_release(ppuStack_198);
      _objc_destroyWeak(auStack_190);
      _objc_destroyWeak(auStack_188);
      goto LAB_108fbeb80;
    }
  }
  ppuVar6 = ppuVar13;
  func_0x00010c155be0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar6;
  func_0x000107c31910();
  _objc_release(ppuVar6);
  _objc_retain(puVar2);
  _objc_sync_enter(puVar2);
  ppuVar6 = ppuVar8;
  func_0x00010bf51e00();
  uVar11 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined ***)(puVar2 + 0x50) = ppuVar6;
  _objc_release(uVar11);
  _objc_sync_exit(puVar2);
  _objc_release(puVar2);
  ppuVar6 = ppuVar13;
  func_0x00010c153ea0(ppuVar13);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar13;
  func_0x00010c155be0(ppuVar13);
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  func_0x000107c31910();
  func_0x00010c13cd80(ppuVar13);
  func_0x00010bedea20(puVar2);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar6);
  _objc_release(ppuVar8);
LAB_108fbeb80:
  _objc_release(ppuVar13);
  return;
}



/* Entry: 108fbe958; end: 108fbebcf; -[SCCollectionViewQueryResultController _applyNewQueryResults:] */

void FUN_108fbe958(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_1 + 0x68;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c153fa0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      func_0x00010c13cd80(param_3);
      func_0x00010bed66e0(param_1);
      _objc_initWeak(auStack_48,param_1);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_108fbebd0;
      puStack_60 = &UNK_110841fb0;
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      uStack_58 = param_3;
      func_0x000107c312cc("APPSTORE",&puStack_78);
      uVar1 = param_1 + 0x68;
      _objc_loadWeakRetained();
      uVar2 = uVar1;
      _objc_opt_respondsToSelector();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) {
        param_1 = param_1 + 0x68;
        _objc_loadWeakRetained(param_1);
        func_0x00010c153f20();
        _objc_release(param_1);
      }
      _objc_release(uStack_58);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      goto LAB_108fbeb80;
    }
  }
  uVar4 = param_3;
  func_0x00010c155be0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000107c31910();
  _objc_release(uVar4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar4 = uVar5;
  func_0x00010bf51e00();
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  _objc_release(uVar7);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  uVar4 = param_3;
  func_0x00010c153ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c155be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x000107c31910();
  func_0x00010c13cd80(param_3);
  func_0x00010bedea20(param_1);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar5);
LAB_108fbeb80:
  _objc_release(param_3);
  return;
}



/* Entry: 108fbebd0; end: 108fbec03;  */

void FUN_108fbebd0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee18e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fbec04; end: 108fbec43;  */

bool FUN_108fbec04(undefined8 param_1,long param_2)

{
  func_0x00010bf86240(param_2);
  return param_2 == 1;
}



/* Entry: 108fbec44; end: 108fbee0b; -[SCCollectionViewQueryResultController _updateResultsWithQuery:sectionDescriptors:resultState:] */

void FUN_108fbec44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (*(char *)(param_1 + 0x61) == '\x01') {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108fbee0c;
    puStack_70 = &UNK_110ad1750;
    uVar2 = param_4;
    lStack_68 = param_1;
    func_0x000107c31908(param_4,&puStack_88);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf6e140();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_108fbee1c;
  puStack_98 = &UNK_110ad1780;
  _objc_retain(param_4);
  uVar3 = uVar2;
  uStack_90 = param_4;
  func_0x00010bd86420(uVar2,&puStack_b0);
  _objc_initWeak(auStack_b8,param_1);
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_108fbeebc;
  puStack_e0 = &UNK_1108502a8;
  _objc_copyWeak(auStack_c8,auStack_b8);
  _objc_retain(param_3);
  uStack_d8 = param_3;
  _objc_retain(uVar3);
  uStack_d0 = uVar3;
  uStack_c0 = param_5;
  func_0x000107c312cc("APPSTORE",&puStack_f8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_b8);
  _objc_release(uVar3);
  _objc_release(uStack_90);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108fbee0c; end: 108fbee1b;  */

void FUN_108fbee0c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c155cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_sectionForDescriptor__112633158
             ,param_2);
  return;
}



/* Entry: 108fbee1c; end: 108fbeebb;  */

void FUN_108fbee1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b1308;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042ce0(puVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108fbeebc; end: 108fbeef3;  */

void FUN_108fbeebc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdce8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fbeef4; end: 108fbf093; -[SCCollectionViewQueryResultController _applySectionsChangesWithQuery:newSectionWithConfigurations:resultState:] */

void FUN_108fbeef4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = *(ulong *)(param_1 + 0x78);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
LAB_108fbef80:
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(ulong *)(param_1 + 0x30) = uVar4;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + 0x38) = param_5;
    uVar2 = param_4;
    func_0x000107c31908(param_4,&PTR___NSConcreteGlobalBlock_110ad17b0);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar4 = *(ulong *)(param_1 + 0x48);
    _objc_retain(uVar4);
    _objc_retain(param_3);
    if ((uVar4 != param_3) && (param_3 != 0)) {
      func_0x00010c071ae0(uVar4);
    }
    _objc_release(param_3);
    _objc_release(uVar4);
    func_0x00010c1f9720(*(undefined8 *)(param_1 + 0x70));
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_108fbef80;
    }
    uVar4 = param_1 + 0x68;
    _objc_loadWeakRetained();
    uVar1 = uVar4;
    _objc_opt_respondsToSelector();
    _objc_release(uVar4);
    if ((uVar1 & 1) != 0) {
      param_1 = param_1 + 0x68;
      _objc_loadWeakRetained(param_1);
      func_0x00010c153f40();
      _objc_release(param_1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fbf094; end: 108fbf0d3;  */

void FUN_108fbf094(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf46560(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf51e00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fbf0d4; end: 108fbf17f; -[SCCollectionViewQueryResultController _updateCurrentResultState:] */

void FUN_108fbf0d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108fbf180;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108fbf180; end: 108fbf1ab;  */

void FUN_108fbf180(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be64f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fbf1ac; end: 108fbf1db; -[SCCollectionViewQueryResultController _updateCurrentSectionConfigurations:] */

void FUN_108fbf1ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fbf1dc; end: 108fbf2f3; -[SCCollectionViewQueryResultController _hasItemsInResult] */

undefined8 FUN_108fbf1dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
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
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  uVar5 = 0;
  if (lVar2 != 0) {
    lVar8 = *plStack_100;
    do {
      lVar9 = 0;
      do {
        if (*plStack_100 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        lVar7 = *(long *)(lStack_108 + lVar9 * 8);
        lVar3 = lVar7;
        func_0x00010bf63d80();
        if ((lVar3 != 2) || (func_0x00010c0deb60(), lVar7 != 0)) {
          uVar5 = 1;
          goto LAB_108fbf2b4;
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
    uVar5 = 0;
  }
LAB_108fbf2b4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar5;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_sync_enter(lVar1);
  uVar4 = *(undefined8 *)(lVar1 + 0x50);
  func_0x00010bf51e00(uVar4);
  uVar5 = *(undefined8 *)(lVar1 + 0x78);
  func_0x00010bf51e00(uVar5);
  uVar6 = *(undefined8 *)(lVar1 + 0x50);
  *(undefined8 *)(lVar1 + 0x50) = 0;
  _objc_release(uVar6);
  _objc_sync_exit(lVar1);
  _objc_release(lVar1);
  func_0x00010bedea20(lVar1,param_2,uVar5,uVar4,*(undefined8 *)(lVar1 + 0x80));
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return uVar4;
}



/* Entry: 108fbf2f4; end: 108fbf38b; -[SCCollectionViewQueryResultController _updateWithNoResultSections] */

void FUN_108fbf2f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf51e00(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf51e00(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  func_0x00010bedea20(param_1,param_2,uVar2,uVar1,*(undefined8 *)(param_1 + 0x80));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fbf38c; end: 108fbf52f; -[SCCollectionViewQueryResultController _announceNoResultEvent] */

ulong FUN_108fbf38c(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined **)(param_1 + 0x48);
  func_0x00010c11da20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = *(undefined **)(param_1 + 0x48);
  func_0x00010c11dac0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar12);
  _objc_release(puVar6);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return uVar1;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = uVar1 + 0x68;
  _objc_loadWeakRetained();
  uVar14 = uVar8;
  _objc_opt_respondsToSelector();
  if ((uVar14 & 1) != 0) {
    lVar7 = uVar1 + 0x68;
    _objc_loadWeakRetained(lVar7);
    func_0x00010c153fa0();
    _objc_release(lVar7);
  }
  _objc_release(uVar8);
  uVar8 = *(ulong *)(uVar1 + 0x70);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  puVar3 = PTR_s_supplementaryViewProvider_1126765b8;
  while (PTR_s_supplementaryViewProvider_1126765b8 = puVar3, uVar1 != 0) {
    uVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(uVar8);
      }
      uVar13 = *(ulong *)(uVar14 * 8);
      uVar9 = uVar13;
      _objc_opt_respondsToSelector(uVar13,puVar3);
      if ((uVar9 & 1) == 0) {
        uVar13 = 0;
      }
      else {
        func_0x00010c262e40();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar2 = PTR_PTR_1126c3ec0;
      _objc_retain(uVar13);
      _objc_opt_class(puVar2);
      uVar10 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar2);
      uVar9 = uVar13;
      if ((uVar10 & 1) == 0) {
        uVar9 = 0;
      }
      _objc_retain(uVar9);
      _objc_release(uVar13);
      func_0x00010c28cc00(uVar9);
      _objc_release(uVar9);
      _objc_release(uVar13);
      uVar14 = uVar14 + 1;
    } while (uVar1 != uVar14);
    uVar1 = uVar8;
    func_0x00010bf52a60();
    puVar3 = PTR_s_supplementaryViewProvider_1126765b8;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return uVar8;
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(uVar8 + 0x60);
}



/* Entry: 108fbf530; end: 108fbf70f; -[SCCollectionViewQueryResultController _notifyQueryStateAwareSupplementaryViewProviders] */

ulong FUN_108fbf530(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1 + 0x68;
  _objc_loadWeakRetained();
  uVar4 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar4 & 1) != 0) {
    lVar3 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c153fa0();
    _objc_release(lVar3);
  }
  _objc_release(uVar2);
  uVar4 = *(ulong *)(param_1 + 0x70);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  puVar1 = PTR_s_supplementaryViewProvider_1126765b8;
  while (PTR_s_supplementaryViewProvider_1126765b8 = puVar1, uVar2 != 0) {
    uVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(uVar4);
      }
      uVar9 = *(ulong *)(uVar10 * 8);
      uVar5 = uVar9;
      _objc_opt_respondsToSelector(uVar9,puVar1);
      if ((uVar5 & 1) == 0) {
        uVar9 = 0;
      }
      else {
        func_0x00010c262e40();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar6 = PTR_PTR_1126c3ec0;
      _objc_retain(uVar9);
      _objc_opt_class(puVar6);
      uVar7 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar6);
      uVar5 = uVar9;
      if ((uVar7 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar9);
      func_0x00010c28cc00(uVar5);
      _objc_release(uVar5);
      _objc_release(uVar9);
      uVar10 = uVar10 + 1;
    } while (uVar2 != uVar10);
    uVar2 = uVar4;
    func_0x00010bf52a60();
    puVar1 = PTR_s_supplementaryViewProvider_1126765b8;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return uVar4;
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(uVar4 + 0x60);
}



/* Entry: 108fbf710; end: 108fbf717; -[SCCollectionViewQueryResultController shouldPerformAnimationWhenQueryChanges] */

undefined1 FUN_108fbf710(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}



/* Entry: 108fbf718; end: 108fbf71f; -[SCCollectionViewQueryResultController setShouldPerformAnimationWhenQueryChanges:] */

void FUN_108fbf718(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 108fbf720; end: 108fbf737; -[SCCollectionViewQueryResultController delegate] */

void FUN_108fbf720(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fbf738; end: 108fbf743; -[SCCollectionViewQueryResultController setDelegate:] */

void FUN_108fbf738(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 108fbf744; end: 108fbf74b; -[SCCollectionViewQueryResultController collectionViewUpdater] */

undefined8 FUN_108fbf744(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108fbf74c; end: 108fbf753; -[SCCollectionViewQueryResultController query] */

undefined8 FUN_108fbf74c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108fbf754; end: 108fbf75b; -[SCCollectionViewQueryResultController currentQueryResultState] */

undefined8 FUN_108fbf754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108fbf75c; end: 108fbf763; -[SCCollectionViewQueryResultController currentSectionConfigurations] */

undefined8 FUN_108fbf75c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108fbf764; end: 108fbf76b; -[SCCollectionViewQueryResultController sectionController] */

undefined8 FUN_108fbf764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108fbf76c; end: 108fbf773; -[SCCollectionViewQueryResultController disableSectionRecycle] */

undefined1 FUN_108fbf76c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x61);
}



/* Entry: 108fbf774; end: 108fbf77b; -[SCCollectionViewQueryResultController setDisableSectionRecycle:] */

void FUN_108fbf774(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x61) = param_3;
  return;
}



/* Entry: 108fbf77c; end: 108fbf837; -[SCCollectionViewQueryResultController .cxx_destruct] */

void FUN_108fbf77c(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 108fbf838; end: 108fbf913; -[SCCollectionViewSectionController initWithSectionCreator:] */

undefined1 * FUN_108fbf838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ffb00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c0ba140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108fbf914; end: 108fbfcfb; -[SCCollectionViewSectionController dequeueSectionsWithDescriptors:] */

/* WARNING: Possible PIC construction at 0x000108fbfb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108fbfbdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108fbfb90) */
/* WARNING: Removing unreachable block (ram,0x000108fbfbe0) */
/* WARNING: Removing unreachable block (ram,0x000108fbfc18) */
/* WARNING: Removing unreachable block (ram,0x000108fbfabc) */

void FUN_108fbf914(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_178 [264];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  _objc_initWeak(auStack_178,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010bf52a60();
  ppuVar6 = ppuRam0000000000000000;
  while (lVar7 != 0) {
    lVar9 = 0;
    do {
      if (ppuRam0000000000000000 != ppuVar6) {
        _objc_enumerationMutation(param_3);
      }
      puVar2 = auStack_178;
      _objc_loadWeakRetained();
      puVar3 = puVar2;
      func_0x00010bdfaec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      if (puVar3 != (undefined1 *)0x0) {
        puVar4 = PTR_PTR_1126dcd28;
        _objc_alloc(PTR_PTR_1126dcd28);
        func_0x00010c042d00();
        func_0x00010befa120(puVar1);
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
      lVar9 = lVar9 + 1;
    } while (lVar7 != lVar9);
    lVar7 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_retain(puVar1);
  puVar4 = puVar1;
  func_0x00010bf52a60();
  ppuVar6 = ppuRam0000000000000000;
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar1);
    ppuVar6 = &PTR___NSConcreteGlobalBlock_110ad1a18;
    puVar4 = puVar1;
    func_0x000107c31908(puVar1,&PTR___NSConcreteGlobalBlock_110ad1a18);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_178);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
      return;
    }
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_178);
    _objc_sync_exit(param_1);
    __Unwind_Resume(param_3);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x18);
    ppuVar5 = ppuRam0000000000000000;
    func_0x00010bf6e760(ppuRam0000000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar5);
    if (lVar7 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      ppuVar5 = ppuVar6;
      func_0x00010bf6e760(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar8);
      _objc_release(ppuVar5);
      _objc_release(puVar1);
    }
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf6e760(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1554f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(ppuVar6,PTR_s_section_112632f58);
  return;
}



/* Entry: 108fbfcfc; end: 108fbfd03;  */

void FUN_108fbfcfc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1554f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_section_112632f58);
  return;
}



/* Entry: 108fbfd04; end: 108fbff43; -[SCCollectionViewSectionController recycleSections:] */

void FUN_108fbfd04(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
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
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar6 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        lVar1 = *(long *)(param_1 + 0x20);
        func_0x00010c0dff20(lVar1,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 != 0) {
          lVar2 = *(long *)(param_1 + 0x18);
          func_0x00010c0e00e0(lVar2,param_2,lVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d360();
          lVar3 = lVar2;
          func_0x00010bf529e0();
          if (lVar3 == 0) {
            func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18),param_2,lVar1);
          }
          func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x20),param_2,uVar8);
          lVar3 = lVar1;
          func_0x00010bfe5ec0(lVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = *(undefined **)(param_1 + 0x10);
          func_0x00010c0e00e0(puVar4,param_2,lVar3);
          _objc_retainAutoreleasedReturnValue();
          if (puVar4 == (undefined *)0x0) {
            puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,puVar4,lVar3);
          }
          func_0x00010befa120(puVar4,param_2,uVar8);
          _objc_release(puVar4);
          _objc_release(lVar3);
          _objc_release(lVar2);
        }
        _objc_release(lVar1);
        lVar10 = lVar10 + 1;
      } while (lVar6 != lVar10);
      lVar6 = param_3;
      puVar7 = &uStack_130;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar6 != 0);
  }
  _objc_release(param_3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  _objc_retain(puVar7);
  lVar9 = *(long *)(param_3 + 0x18);
  func_0x00010c0e00e0(lVar9,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar9;
  func_0x00010bf04a20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    lVar10 = *(long *)(param_3 + 0x10);
    puVar5 = (undefined1 *)puVar7;
    func_0x00010bfe5ec0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar10,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    lVar6 = lVar10;
    func_0x00010bf529e0();
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_3 + 8);
      func_0x00010c155ce0(lVar6,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar6 = lVar10;
      func_0x00010c089820(lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cd60(lVar10);
    }
    _objc_release(lVar10);
  }
  else {
    func_0x00010c12d360(lVar9,param_2,lVar6);
  }
  _objc_release(lVar9);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 108fbff44; end: 108fc004f; -[SCCollectionViewSectionController _dequeueSectionWithDescriptor:] */

void FUN_108fbff44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf04a20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    uVar2 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar3 = lVar4;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 8);
      func_0x00010c155ce0(lVar3,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar3 = lVar4;
      func_0x00010c089820(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cd60(lVar4);
    }
    _objc_release(lVar4);
  }
  else {
    func_0x00010c12d360(lVar1,param_2,lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108fc0050; end: 108fc00af; -[SCCollectionViewSectionController cleanUp] */

void FUN_108fc0050(long param_1)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fc00b0; end: 108fc00f7; -[SCCollectionViewSectionController .cxx_destruct] */

void FUN_108fc00b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108fc00f8; end: 108fc019f; -[SCCollectionViewSectionWithDescriptor initWithSection:descriptor:] */

undefined1 *
FUN_108fc00f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ffb08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


