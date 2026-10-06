/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108fc8bd0; end: 108fc8c13;  */

void FUN_108fc8bd0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c155a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21c120();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fc8c14; end: 108fc8ccf; -[SCCollectionViewCarouselSection tearDown] */

void FUN_108fc8c14(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(ulong *)(param_1 + 0xf8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_tearDown_112678508);
  if ((uVar1 & 1) != 0) {
    _objc_initWeak(auStack_28,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 108fc8cd0; end: 108fc8d37;  */

void FUN_108fc8cd0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c155a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ab80();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be92720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fc8d38; end: 108fc8ed3; -[SCCollectionViewCarouselSection applyConfiguration:] */

void FUN_108fc8d38(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4890;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar5 = *(ulong *)(param_1 + 0x30);
  _objc_retain(uVar1);
  _objc_retain(uVar5);
  if (uVar1 == uVar5) {
    _objc_release(uVar5);
    _objc_release(uVar1);
LAB_108fc8df4:
    if (*(char *)(param_1 + 0xb9) == '\x01') {
      _objc_initWeak(auStack_48,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c0f7fc0(uVar4);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  else {
    if (uVar5 == 0) {
      _objc_release();
    }
    else {
      uVar3 = uVar1;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      _objc_release(uVar1);
      if ((int)uVar3 != 0) goto LAB_108fc8df4;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(ulong *)(param_1 + 0x30) = uVar5;
    _objc_release(uVar4);
    func_0x00010bee4680(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108fc8ed4; end: 108fc8eff;  */

void FUN_108fc8ed4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fc8f00; end: 108fc8f83; -[SCCollectionViewCarouselSection reuseCellClassesByIdentifiers] */

undefined * FUN_108fc8f00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126dcd50;
  _objc_opt_class();
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_30,&uStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(puVar2 + 0x38);
  func_0x00010bf529e0(lVar3);
  return (undefined *)(ulong)(lVar3 != 0);
}



/* Entry: 108fc8f84; end: 108fc8fa3; -[SCCollectionViewCarouselSection numberOfCellsInSection] */

bool FUN_108fc8f84(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 108fc8fa4; end: 108fc96c7; -[SCCollectionViewCarouselSection cellForItemAtIndexInSection:] */

undefined1  [16] FUN_108fc8fa4(double param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)(param_2 + 200);
  _objc_loadWeakRetained();
  puVar4 = puVar3;
  func_0x00010bf40940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c20f8;
  _objc_opt_class(PTR_PTR_1126c20f8);
  puVar5 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar3);
  puVar3 = puVar4;
  if (((ulong)puVar5 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar4);
  func_0x00010c18b5e0(puVar3);
  puVar4 = puVar3;
  func_0x00010bf4c080(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189840();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf4c080(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_2 + 0x78,puVar4);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf4c080(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2025c0();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf4c080(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf4c080(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1738c0();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf4c080(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  puVar6 = puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar4);
  puVar4 = puVar5;
  if (((ulong)puVar6 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  _objc_retain(puVar4);
  _objc_release(puVar5);
  func_0x00010c0ce5e0(param_2);
  dVar16 = param_1;
  func_0x00010b816218();
  dVar16 = (double)(long)(param_1 * dVar16) / dVar16;
  func_0x00010c1c82c0(dVar16,puVar4);
  func_0x00010c0ce5e0(param_2);
  dVar17 = dVar16;
  func_0x00010b816218();
  dVar16 = (double)(long)(dVar16 * dVar17);
  dVar17 = dVar16 / dVar17;
  func_0x00010c1c8300(dVar17,puVar4);
  if ((*(char *)(param_2 + 0xb1) == '\x01') && (*(long *)(param_2 + 0xa0) == 0)) {
    puVar5 = PTR_PTR_1126dcd58;
    _objc_alloc_init();
    func_0x00010c0ce5e0(param_2);
    dVar16 = dVar17;
    func_0x00010b816218();
    dVar16 = (double)(long)(dVar17 * dVar16) / dVar16;
    func_0x00010c1c82c0(dVar16,puVar5);
    func_0x00010c223720(puVar5);
    puVar6 = PTR_PTR_1126dcd58;
    _objc_alloc_init();
    func_0x00010c0ce5e0(param_2);
    dVar17 = dVar16;
    func_0x00010b816218();
    dVar16 = (double)(long)(dVar16 * dVar17);
    func_0x00010c1c82c0(dVar16 / dVar17,puVar6);
    func_0x00010c1c82a0(*(undefined8 *)(param_2 + 0xe8),puVar6);
    func_0x00010c223720(puVar6);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_2 + 0xa0);
    *(undefined **)(param_2 + 0xa0) = puVar7;
    _objc_release(uVar13);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  dVar17 = 0.0;
  lVar8 = *(long *)(param_2 + 0x40);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      puVar5 = puVar3;
      func_0x00010bf4c080(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(*(undefined8 *)(param_2 + 0x40));
      func_0x00010c126000(puVar5);
      _objc_release(puVar5);
      lVar15 = lVar15 + 1;
    } while (lVar9 != lVar15);
    lVar9 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  puVar5 = puVar3;
  func_0x00010bf4c080(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
  func_0x00010c126000(puVar5);
  _objc_release(puVar5);
  uVar10 = *(ulong *)(param_2 + 0xf8);
  _objc_opt_respondsToSelector(uVar10,PTR_s_shouldRecalculateSectionHeightWi_11266a2f8);
  if ((uVar10 & 1) != 0) {
    iVar2 = (int)*(undefined8 *)(param_2 + 0xf8);
    func_0x00010c232340();
    if (iVar2 != 0) {
      uVar11 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010bfb1920(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_2 + 0x40);
      uVar13 = uVar11;
      func_0x00010bf34020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar14);
      _objc_release(uVar13);
      puVar5 = puVar3;
      func_0x00010bf4c080(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      dVar16 = dVar17;
      _objc_release(puVar5);
      puVar5 = puVar3;
      func_0x00010bf4c080(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      _objc_release(puVar5);
      uVar13 = uVar11;
      func_0x00010bf4ddc0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d6e0(dVar17,dVar16,uVar14);
      _objc_release(uVar13);
      dVar16 = 0.5;
      func_0x00010b8169fc();
      uVar10 = *(ulong *)(param_2 + 0x38);
      func_0x00010bf529e0();
      dVar17 = (dVar16 - dVar17 * (double)uVar10 * 0.5) + -5.0;
      dVar16 = 0.0;
      if (0.0 <= dVar17) {
        dVar16 = dVar17;
      }
      dVar16 = dVar16 + 5.0;
      dVar17 = 8.0;
      puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297340(0x4020000000000000,dVar16,0x4030000000000000,0x4014000000000000,
                          PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ce460(*(undefined8 *)(param_2 + 0x30));
      FUN_108fc96c8(puVar5);
      dVar18 = 0.0;
      uVar13 = 0;
      func_0x00010b816264(0,dVar17,0,dVar16);
      puVar6 = puVar3;
      func_0x00010bf4c080(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c181f80(dVar18,dVar17,uVar13,dVar16);
      _objc_release(puVar6);
      goto LAB_108fc95f0;
    }
  }
  uVar11 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c156140(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ce460(*(undefined8 *)(param_2 + 0x30));
  FUN_108fc96c8(uVar11);
  dVar18 = 0.0;
  uVar13 = 0;
  func_0x00010b816264(0,dVar17,0,dVar16);
  puVar5 = puVar3;
  func_0x00010bf4c080(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f80(dVar18,dVar17,uVar13,dVar16);
LAB_108fc95f0:
  _objc_release(puVar5);
  _objc_release(uVar11);
  puVar5 = puVar3;
  func_0x00010bf4c080(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(puVar5);
  puVar5 = puVar3;
  func_0x00010bf4c080(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = puVar3;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    auVar21._8_8_ = dVar17;
    auVar21._0_8_ = dVar18;
    return auVar21;
  }
  ___stack_chk_fail();
  dVar19 = dVar18;
  if (puVar4 != (undefined *)0x0) {
    _objc_retain();
    func_0x00010bdc2aa0(puVar4);
    func_0x00010bdc2aa0(puVar4);
    _objc_release(puVar4);
    dVar18 = dVar17;
    dVar19 = dVar16;
  }
  auVar20._8_8_ = dVar19;
  auVar20._0_8_ = dVar18;
  return auVar20;
}



/* Entry: 108fc96c8; end: 108fc9723;  */

undefined1  [16]
FUN_108fc96c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  if (param_5 != 0) {
    _objc_retain();
    func_0x00010bdc2aa0(param_5);
    func_0x00010bdc2aa0(param_5);
    _objc_release(param_5);
    param_1 = param_2;
    uVar1 = param_4;
  }
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 108fc9724; end: 108fc97f3; -[SCCollectionViewCarouselSection collectionView:willDisplayCell:atIndexInSection:] */

void FUN_108fc9724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108fc97f4;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x000107c312d0("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108fc97f4; end: 108fc98fb;  */

void FUN_108fc97f4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) goto LAB_108fc98e4;
  uVar3 = lVar2 + 0x78;
  _objc_loadWeakRetained();
  if (uVar3 == 0) {
    lVar4 = lVar2;
    func_0x00010bf8f8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf1f3c0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar7 = PTR_PTR_1126c20f8;
    if ((int)lVar6 != 0) {
      uVar8 = *(ulong *)(param_1 + 0x20);
      _objc_retain(uVar8);
      _objc_opt_class(puVar7);
      uVar3 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar7);
      uVar1 = uVar8;
      if ((uVar3 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar8);
      uVar3 = uVar1;
      func_0x00010bf4c080(uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_storeWeak(lVar2 + 0x78,uVar3);
      goto LAB_108fc98d4;
    }
  }
  else {
LAB_108fc98d4:
    _objc_release(uVar3);
  }
  func_0x00010be93980(lVar2);
LAB_108fc98e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108fc98fc; end: 108fc9b07; -[SCCollectionViewCarouselSection collectionViewDidEndDisplayingCell:atIndexInSection:] */

undefined1  [16]
FUN_108fc98fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,ulong param_7)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_opt_class(PTR__OBJC_CLASS___UICollectionView_1126afd20);
  uVar3 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar2);
  uVar7 = param_7;
  if ((uVar3 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(param_7);
  func_0x00010bf20c00(uVar7);
  lVar4 = param_5 + 0x78;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf51460(param_1,param_2,param_3,param_4,uVar7);
  uVar12 = param_2;
  _objc_release(lVar4);
  uVar11 = 0;
  lVar4 = param_5 + 0x78;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar9 = *(undefined8 *)(lVar10 * 8);
      uVar3 = uVar7;
      func_0x00010c070ea0(uVar7);
      uVar6 = uVar7;
      func_0x00010c070400(uVar7);
      uVar11 = param_1;
      uVar12 = param_2;
      FUN_108fd70e0(param_1,param_2,param_3,param_4,uVar9,uVar3,uVar6);
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_storeWeak(param_5 + 0x78,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    auVar13._8_8_ = uVar12;
    auVar13._0_8_ = uVar11;
    return auVar13;
  }
  ___stack_chk_fail();
  if (*(char *)(uVar7 + 0xb1) == '\x01') {
    lVar8 = uVar7 + 0x78;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar8 != 0) {
      lVar8 = uVar7 + 0x78;
      _objc_loadWeakRetained(lVar8);
      func_0x00010bf4d5e0();
      _objc_release(lVar8);
      goto LAB_108fc9b78;
    }
  }
  uVar12 = uVar11;
  FUN_108fc9b90(uVar11,0x7fefffffffffffff,*(undefined8 *)(uVar7 + 0x38),
                *(undefined8 *)(uVar7 + 0x40));
LAB_108fc9b78:
  auVar14._8_8_ = uVar12;
  auVar14._0_8_ = uVar11;
  return auVar14;
}



/* Entry: 108fc9b08; end: 108fc9b8f; -[SCCollectionViewCarouselSection sizeForItemAtIndexInSection:withWidth:] */

undefined1  [16] FUN_108fc9b08(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (*(char *)(param_3 + 0xb1) == '\x01') {
    lVar1 = param_3 + 0x78;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      param_3 = param_3 + 0x78;
      _objc_loadWeakRetained(param_3);
      func_0x00010bf4d5e0();
      _objc_release(param_3);
      goto LAB_108fc9b78;
    }
  }
  param_2 = param_1;
  FUN_108fc9b90(param_1,0x7fefffffffffffff,*(undefined8 *)(param_3 + 0x38),
                *(undefined8 *)(param_3 + 0x40));
LAB_108fc9b78:
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 108fc9b90; end: 108fc9c7f;  */

double FUN_108fc9b90(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    param_1 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    lVar1 = param_3;
    func_0x00010bf34020(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf4ddc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d6e0(param_1,param_2,uVar2);
    _objc_release(lVar1);
    func_0x00010b816218();
    func_0x00010b816218();
    param_1 = (double)(long)(param_2 * param_1) / param_1;
  }
  _objc_release(param_3);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 108fc9c80; end: 108fc9c87; -[SCCollectionViewCarouselSection minimumSectionInteritemSpacing] */

undefined8 FUN_108fc9c80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108fc9c88; end: 108fc9d1b; -[SCCollectionViewCarouselSection sectionInsets] */

void FUN_108fc9c88(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  lVar1 = *(long *)(param_2 + 0x30);
  func_0x00010c156140();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    uVar3 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  }
  else {
    func_0x00010bdc2aa0(lVar1);
    func_0x00010bdc2aa0(lVar1);
    uVar3 = 0;
  }
  func_0x00010c297340(param_1,uVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108fc9d1c; end: 108fc9d43; -[SCCollectionViewCarouselSection supplementaryViewProvider] */

void FUN_108fc9d1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fc9d44; end: 108fc9d4b; -[SCCollectionViewCarouselSection experimentalPagingMode] */

undefined8 FUN_108fc9d44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108fc9d4c; end: 108fc9d73; -[SCCollectionViewCarouselSection sectionInfo] */

void FUN_108fc9d4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fc9d74; end: 108fc9f2f; -[SCCollectionViewCarouselSection setSectionDataProvider:] */

void FUN_108fc9d74(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xf8) != param_3) {
    func_0x00010c1896c0();
    func_0x00010c12cf80(*(undefined8 *)(param_1 + 0xf8));
    func_0x00010c21c740(*(undefined8 *)(param_1 + 0xf8));
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0xf8);
    *(long *)(param_1 + 0xf8) = param_3;
    _objc_release(uVar1);
    func_0x00010c1896c0(*(undefined8 *)(param_1 + 0xf8));
    func_0x00010bef9980(*(undefined8 *)(param_1 + 0xf8));
    func_0x00010c21c740(*(undefined8 *)(param_1 + 0xf8));
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
    func_0x00010bf4bfc0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar3 = *(ulong *)(param_1 + 0xf8);
    _objc_opt_respondsToSelector(uVar3,PTR_s_configurationBlocksByReuseIdenti_1125af330);
    if ((uVar3 & 1) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0xf8);
      func_0x00010bf46620();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = uVar1;
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
    uVar3 = *(ulong *)(param_1 + 0xf8);
    _objc_opt_respondsToSelector(uVar3,PTR_s_experimentalPagingMode_1125c4b28);
    if ((uVar3 & 1) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0xf8);
      func_0x00010bf9c600();
      *(undefined8 *)(param_1 + 0x70) = uVar1;
    }
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108fc9f30; end: 108fc9f77;  */

void FUN_108fc9f30(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bea70e0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fc9f78; end: 108fc9fc7; -[SCCollectionViewCarouselSection setDataProvidingScheduler:] */

void FUN_108fc9f78(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x108,param_3);
  _objc_retain();
  func_0x00010c0d0be0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fc9fc8; end: 108fc9fff; -[SCCollectionViewCarouselSection setLayoutCalculator:] */

void FUN_108fc9fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_3;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 108fca000; end: 108fca02f; -[SCCollectionViewCarouselSection setSectionInfo:] */

void FUN_108fca000(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fca030; end: 108fca0cb; -[SCCollectionViewCarouselSection setActionHandler:] */

void FUN_108fca030(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  _objc_release(uVar2);
  puVar1 = PTR_DAT_1126a5b90;
  if (*(char *)(param_1 + 0xb1) == '\x01') {
    _objc_retain(param_3);
    uVar3 = param_3;
    func_0x000107c318f8(param_3,puVar1);
    uVar2 = param_3;
    if ((int)uVar3 == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_3);
    func_0x00010c223700(uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fca0cc; end: 108fca2d7; -[SCCollectionViewCarouselSection handleActionWithSender:actionModel:fromSourceView:] */

long FUN_108fca0cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1 + 200;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf40920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c20f8;
  _objc_opt_class(PTR_PTR_1126c20f8);
  uVar6 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    func_0x00010bf4c080();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bfecfa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,param_1);
    uVar4 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_108fca2d8;
    puStack_78 = &UNK_110848218;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(uVar6);
    uStack_70 = uVar6;
    _objc_retain(param_4);
    uStack_68 = param_4;
    func_0x000107c27d8c(uVar4,&puStack_90);
    _objc_release(uVar4);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  lVar5 = *(long *)(param_1 + 0xd8);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    func_0x00010bfd0140();
  }
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 108fca2d8; end: 108fca30b;  */

void FUN_108fca2d8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fca30c; end: 108fca4af; -[SCCollectionViewCarouselSection didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_108fca30c(long param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bf4b900();
  if ((int)puVar2 == 0) {
    uVar4 = param_4;
    func_0x00010bf7dbc0(*(undefined8 *)(param_1 + 8));
  }
  else {
    uVar4 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010bdcc4a0(param_1);
    _objc_release(uVar1);
  }
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_3 + 0x30);
  func_0x00010bf4c1e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(puVar3);
  }
  _objc_release(lVar6);
  if (*(char *)(param_3 + 0xb1) == '\x01') {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c268120(uVar4);
    func_0x00010c0df780(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
  }
  uVar7 = *(undefined8 *)(param_3 + 8);
  _objc_opt_class(param_3);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar7);
  _objc_release(param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108fca4b0; end: 108fca677; -[SCCollectionViewCarouselSection scrollToEndDetector:scrollViewWillReachEnd:] */

void FUN_108fca4b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010bf4c1e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110f8a838);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110f8a838);
  }
  _objc_release(lVar2);
  if (*(char *)(param_1 + 0xb1) == '\x01') {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110f166b8);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0xb3)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110f166d8);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = param_4;
    func_0x00010c268120(param_4);
    func_0x00010c0df780(puVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110f166f8);
    _objc_release(puVar3);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar4,param_2,&PTR____CFConstantStringClassReference_110f16618,param_1,puVar1)
  ;
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108fca678; end: 108fca67f; -[SCCollectionViewCarouselSection dataLoadingStatus] */

undefined8 FUN_108fca678(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 108fca680; end: 108fca743; -[SCCollectionViewCarouselSection sectionDataProviderDidUpdateViewModels:] */

void FUN_108fca680(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108fca6ec;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  func_0x00010bcbe2c4("APPSTORE",&puStack_48);
  func_0x00010bec17c0(param_1);
  return;
}



/* Entry: 108fca744; end: 108fca7a3; -[SCCollectionViewCarouselSection _startSectionDataModelUpdate] */

void FUN_108fca744(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0xd0) = 1;
  lVar1 = param_1 + 0x108;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x108;
    _objc_loadWeakRetained(param_1);
    func_0x00010c150140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSectionDataModel_112595648);
  return;
}



/* Entry: 108fca7a4; end: 108fca7ef; -[SCCollectionViewCarouselSection _updateContainerCellViewModelsIfNecessary] */

void FUN_108fca7a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf529e0();
  lVar2 = *(long *)(param_1 + 0xf8);
  func_0x00010c0deec0();
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec17d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startSectionDataModelUpdate_11258df98);
  return;
}



/* Entry: 108fca7f0; end: 108fca7f3; -[SCCollectionViewCarouselSection shouldUpdateDataModelsFromDataProviding] */

void FUN_108fca7f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSectionDataModel_112595648);
  return;
}



/* Entry: 108fca7f4; end: 108fca8a3; -[SCCollectionViewCarouselSection _updateSectionDataModel] */

void FUN_108fca7f4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  *(undefined8 *)(param_1 + 0xd0) = 1;
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108fca8a4; end: 108fca8cf;  */

void FUN_108fca8a4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fca8d0; end: 108fca8d7; -[SCCollectionViewCarouselSection numberOfSectionsInCollectionView:] */

undefined8 FUN_108fca8d0(void)

{
  return 1;
}



/* Entry: 108fca8d8; end: 108fca8eb; -[SCCollectionViewCarouselSection collectionView:numberOfItemsInSection:] */

undefined8 FUN_108fca8d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_count_1125b2420);
  return uVar1;
}



/* Entry: 108fca8ec; end: 108fcaafb; -[SCCollectionViewCarouselSection collectionView:cellForItemAtIndexPath:] */

void FUN_108fca8ec(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010c0840e0();
  uVar4 = *(ulong *)(param_1 + 0x38);
  func_0x00010bf529e0();
  uVar7 = param_3;
  if (uVar3 < uVar4) {
    lVar8 = *(long *)(param_1 + 0x38);
    func_0x00010c0840e0(param_4);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 != 0) {
      lVar5 = lVar8;
      func_0x00010bf34020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e0c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      lVar9 = *(long *)(param_1 + 0x48);
      lVar5 = lVar8;
      func_0x00010bf34020(lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      if (lVar9 != 0) {
        (**(code **)(lVar9 + 0x10))(lVar9,uVar7);
      }
      puVar2 = PTR_DAT_1126a4e90;
      _objc_retain(uVar7);
      uVar6 = uVar7;
      func_0x000107c318f8(uVar7,puVar2);
      uVar1 = uVar7;
      if ((int)uVar6 == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar7);
      func_0x00010c161980(uVar1);
      _objc_release(uVar1);
      lVar5 = lVar8;
      func_0x00010bf4ddc0(lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0(uVar7);
      _objc_release(lVar5);
      puVar2 = PTR_DAT_1126a5538;
      _objc_retain(uVar7);
      uVar6 = uVar7;
      func_0x000107c318f8(uVar7,puVar2);
      uVar1 = uVar7;
      if ((int)uVar6 == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar7);
      func_0x00010bef9980(uVar1);
      _objc_release(uVar1);
      _objc_release(lVar9);
      _objc_release(lVar8);
      goto LAB_108fcaad0;
    }
  }
  func_0x00010bf6e0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_108fcaad0:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 108fcaafc; end: 108fcad0f; -[SCCollectionViewCarouselSection containerCollectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_108fcaafc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010c0840e0();
  uVar2 = *(ulong *)(param_2 + 0x38);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    _CACurrentMediaTime();
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c0840e0(param_6);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010bf51e00();
    _objc_initWeak(auStack_78,param_2);
    uVar6 = param_4;
    func_0x00010bf4c080();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c070ea0();
    _objc_release(uVar6);
    uVar6 = param_4;
    func_0x00010bf4c080();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c070400();
    _objc_release(uVar6);
    uVar6 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_108fcad10;
    puStack_b0 = &UNK_110ad1cf8;
    _objc_copyWeak(auStack_90,auStack_78);
    uStack_80 = (undefined1)uVar4;
    uStack_7f = (undefined1)uVar5;
    _objc_retain(param_6);
    uStack_a8 = param_6;
    uStack_a0 = uVar7;
    uStack_98 = uVar3;
    uStack_88 = param_1;
    _objc_retain(uVar3);
    _objc_retain(uVar7);
    func_0x000107c27d8c(uVar6,&puStack_c8);
    _objc_release(uVar6);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108fcad10; end: 108fcad53;  */

void FUN_108fcad10(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdcb740(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108fcad54; end: 108fcadff; -[SCCollectionViewCarouselSection containerCollectionViewDidScroll:] */

void FUN_108fcad54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar3,param_2,&PTR____CFConstantStringClassReference_110f165f8,lVar1,0);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = param_3;
  func_0x00010bf4c080(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c288160(uVar2,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108fcae00; end: 108fcaf63; -[SCCollectionViewCarouselSection containerCollectionViewWillBeginDragging:] */

undefined1  [16]
FUN_108fcae00(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined **ppuStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined **ppuStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = &PTR____CFConstantStringClassReference_110f16598;
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f16658;
  uVar3 = param_5;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bf4cdc0(uVar3);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f16678;
  uStack_60 = *(undefined8 *)(param_3 + 0x28);
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_68 = puVar10;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_68,&ppuStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010bdcc4a0(param_3,param_4,&PTR____CFConstantStringClassReference_110f16598,uVar2,puVar9)
  ;
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar4 = uVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = param_1;
    return auVar19;
  }
  ___stack_chk_fail();
  ppuStack_d0 = &PTR_PTR_110ad1fb0;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f16598;
  pcStack_88 = FUN_108fcaf64;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = &PTR____CFConstantStringClassReference_110f165b8;
  uStack_c8 = uVar3;
  puStack_c0 = puVar9;
  puStack_b8 = puVar10;
  lStack_a8 = param_3;
  uStack_a0 = uVar2;
  uStack_98 = uVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar12);
  ppuVar5 = ppuVar12;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110f16638;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110f16658;
  ppuVar7 = ppuVar12;
  puStack_e8 = puVar9;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar12);
  func_0x00010bf4cdc0(ppuVar7);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_e0 = puVar10;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_e8,&ppuStack_f8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcc4a0(uVar4,param_4,&PTR____CFConstantStringClassReference_110f165b8,ppuVar6,puVar8)
  ;
  _objc_release(puVar8);
  _objc_release(puVar10);
  _objc_release(ppuVar7);
  _objc_release(puVar9);
  _objc_release(ppuVar6);
  ppuVar12 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    auVar20._8_8_ = param_2;
    auVar20._0_8_ = param_1;
    return auVar20;
  }
  ___stack_chk_fail();
  ppuStack_130 = &PTR____CFConstantStringClassReference_110f165b8;
  pcStack_108 = FUN_108fcb0e8;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = &PTR____CFConstantStringClassReference_110f165d8;
  ppuStack_150 = ppuVar7;
  puStack_148 = puVar8;
  puStack_140 = puVar10;
  puStack_138 = puVar9;
  uStack_128 = uVar4;
  ppuStack_120 = ppuVar6;
  ppuStack_118 = ppuVar5;
  ppuStack_110 = &puStack_90;
  _objc_retain(ppuVar13);
  ppuVar5 = ppuVar13;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110f16658;
  ppuVar7 = ppuVar13;
  func_0x00010bf4c080(ppuVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar13);
  func_0x00010bf4cdc0(ppuVar7);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_160 = puVar10;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_160,&ppuStack_168,1)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar9;
  func_0x00010bdcc4a0(ppuVar12,param_4,&PTR____CFConstantStringClassReference_110f165d8,ppuVar6);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    auVar21._8_8_ = param_2;
    auVar21._0_8_ = param_1;
    return auVar21;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar15);
  _objc_retain(puVar8);
  puVar10 = puVar8;
  func_0x00010c0840e0();
  puVar9 = ppuVar5[7];
  func_0x00010bf529e0();
  if (puVar10 < puVar9) {
    ppuVar12 = ppuVar15;
    func_0x00010bf4c080(ppuVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar17 = param_1;
    _objc_release(ppuVar12);
    if (param_1 != 0.0) {
      puVar9 = ppuVar5[7];
      puVar10 = puVar8;
      func_0x00010c0840e0(puVar8);
      func_0x00010c0dfd40(puVar9,param_4,puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = ppuVar5[6];
      func_0x00010c156140(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ce460(ppuVar5[6]);
      FUN_108fc96c8(puVar10);
      dVar16 = 0.0;
      func_0x00010b816264(0,dVar17,0);
      _objc_release(puVar10);
      ppuVar12 = ppuVar15;
      func_0x00010bf4c080(ppuVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      dVar16 = dVar16 - dVar17;
      param_2 = dVar16 - param_2;
      _objc_release(ppuVar12);
      puVar14 = ppuVar5[8];
      puVar10 = puVar9;
      func_0x00010bf34020(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(puVar14,param_4,puVar10);
      _objc_release(puVar10);
      puVar10 = puVar9;
      func_0x00010bf4ddc0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar15;
      func_0x00010bf4c080(ppuVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      func_0x00010c23d6e0(puVar14,param_4,puVar10);
      dVar17 = param_2;
      func_0x00010b816218();
      dVar18 = dVar17;
      func_0x00010b816218();
      dVar17 = (double)(long)(param_2 * dVar17) / dVar17;
      dVar18 = (double)(long)(dVar16 * dVar18) / dVar18;
      _objc_release(ppuVar12);
      _objc_release(puVar10);
      _objc_release(puVar9);
      goto LAB_108fcb2d0;
    }
  }
  dVar18 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  dVar17 = *(double *)PTR__CGSizeZero_110347620;
LAB_108fcb2d0:
  _objc_release(puVar8);
  _objc_release(ppuVar15);
  auVar22._8_8_ = dVar18;
  auVar22._0_8_ = dVar17;
  return auVar22;
}



/* Entry: 108fcaf64; end: 108fcb0e7; -[SCCollectionViewCarouselSection containerCollectionViewDidEndDragging:willDecelerate:] */

undefined1  [16]
FUN_108fcaf64(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = &PTR____CFConstantStringClassReference_110f165b8;
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f16638;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f16658;
  uVar3 = param_5;
  puStack_68 = puVar9;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bf4cdc0(uVar3);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar10;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_68,&ppuStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcc4a0(param_3,param_4,&PTR____CFConstantStringClassReference_110f165b8,uVar2,puVar4)
  ;
  _objc_release(puVar4);
  _objc_release(puVar10);
  _objc_release(uVar3);
  _objc_release(puVar9);
  _objc_release(uVar2);
  uVar5 = uVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = param_1;
    return auVar17;
  }
  ___stack_chk_fail();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f165b8;
  pcStack_88 = FUN_108fcb0e8;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = &PTR____CFConstantStringClassReference_110f165d8;
  uStack_d0 = uVar3;
  puStack_c8 = puVar4;
  puStack_c0 = puVar10;
  puStack_b8 = puVar9;
  uStack_a8 = param_3;
  uStack_a0 = uVar2;
  uStack_98 = uVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar11);
  ppuVar6 = ppuVar11;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110f16658;
  ppuVar8 = ppuVar11;
  func_0x00010bf4c080(ppuVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar11);
  func_0x00010bf4cdc0(ppuVar8);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_e0 = puVar10;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_e0,&ppuStack_e8,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar9;
  func_0x00010bdcc4a0(uVar5,param_4,&PTR____CFConstantStringClassReference_110f165d8,ppuVar7);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = param_1;
    return auVar18;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar13);
  _objc_retain(puVar4);
  puVar10 = puVar4;
  func_0x00010c0840e0();
  puVar9 = ppuVar6[7];
  func_0x00010bf529e0();
  if (puVar10 < puVar9) {
    ppuVar11 = ppuVar13;
    func_0x00010bf4c080(ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar15 = param_1;
    _objc_release(ppuVar11);
    if (param_1 != 0.0) {
      puVar9 = ppuVar6[7];
      puVar10 = puVar4;
      func_0x00010c0840e0(puVar4);
      func_0x00010c0dfd40(puVar9,param_4,puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = ppuVar6[6];
      func_0x00010c156140(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ce460(ppuVar6[6]);
      FUN_108fc96c8(puVar10);
      dVar14 = 0.0;
      func_0x00010b816264(0,dVar15,0);
      _objc_release(puVar10);
      ppuVar11 = ppuVar13;
      func_0x00010bf4c080(ppuVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      dVar14 = dVar14 - dVar15;
      param_2 = dVar14 - param_2;
      _objc_release(ppuVar11);
      puVar12 = ppuVar6[8];
      puVar10 = puVar9;
      func_0x00010bf34020(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(puVar12,param_4,puVar10);
      _objc_release(puVar10);
      puVar10 = puVar9;
      func_0x00010bf4ddc0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar13;
      func_0x00010bf4c080(ppuVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      func_0x00010c23d6e0(puVar12,param_4,puVar10);
      dVar15 = param_2;
      func_0x00010b816218();
      dVar16 = dVar15;
      func_0x00010b816218();
      dVar15 = (double)(long)(param_2 * dVar15) / dVar15;
      dVar16 = (double)(long)(dVar14 * dVar16) / dVar16;
      _objc_release(ppuVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      goto LAB_108fcb2d0;
    }
  }
  dVar16 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  dVar15 = *(double *)PTR__CGSizeZero_110347620;
LAB_108fcb2d0:
  _objc_release(puVar4);
  _objc_release(ppuVar13);
  auVar19._8_8_ = dVar16;
  auVar19._0_8_ = dVar15;
  return auVar19;
}



/* Entry: 108fcb0e8; end: 108fcb23f; -[SCCollectionViewCarouselSection containerCollectionViewDidEndDecelerating:] */

undefined1  [16]
FUN_108fcb0e8(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = &PTR____CFConstantStringClassReference_110f165d8;
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f16658;
  lVar3 = param_5;
  func_0x00010bf4c080(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bf4cdc0(lVar3);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_60,&ppuStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bdcc4a0(param_3,param_4,&PTR____CFConstantStringClassReference_110f165d8,lVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = param_1;
    return auVar15;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar11);
  _objc_retain(puVar8);
  puVar4 = puVar8;
  func_0x00010c0840e0();
  puVar5 = *(undefined **)(lVar1 + 0x38);
  func_0x00010bf529e0();
  if (puVar4 < puVar5) {
    ppuVar6 = ppuVar11;
    func_0x00010bf4c080(ppuVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar13 = param_1;
    _objc_release(ppuVar6);
    if (param_1 != 0.0) {
      uVar9 = *(undefined8 *)(lVar1 + 0x38);
      puVar4 = puVar8;
      func_0x00010c0840e0(puVar8);
      func_0x00010c0dfd40(uVar9,param_4,puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(lVar1 + 0x30);
      func_0x00010c156140(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ce460(*(undefined8 *)(lVar1 + 0x30));
      FUN_108fc96c8(uVar7);
      dVar12 = 0.0;
      func_0x00010b816264(0,dVar13,0);
      _objc_release(uVar7);
      ppuVar6 = ppuVar11;
      func_0x00010bf4c080(ppuVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      dVar12 = dVar12 - dVar13;
      param_2 = dVar12 - param_2;
      _objc_release(ppuVar6);
      uVar10 = *(undefined8 *)(lVar1 + 0x40);
      uVar7 = uVar9;
      func_0x00010bf34020(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar10,param_4,uVar7);
      _objc_release(uVar7);
      uVar7 = uVar9;
      func_0x00010bf4ddc0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar11;
      func_0x00010bf4c080(ppuVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      func_0x00010c23d6e0(uVar10,param_4,uVar7);
      dVar13 = param_2;
      func_0x00010b816218();
      dVar14 = dVar13;
      func_0x00010b816218();
      dVar13 = (double)(long)(param_2 * dVar13) / dVar13;
      dVar14 = (double)(long)(dVar12 * dVar14) / dVar14;
      _objc_release(ppuVar6);
      _objc_release(uVar7);
      _objc_release(uVar9);
      goto LAB_108fcb2d0;
    }
  }
  dVar14 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  dVar13 = *(double *)PTR__CGSizeZero_110347620;
LAB_108fcb2d0:
  _objc_release(puVar8);
  _objc_release(ppuVar11);
  auVar16._8_8_ = dVar14;
  auVar16._0_8_ = dVar13;
  return auVar16;
}



/* Entry: 108fcb240; end: 108fcb46f; -[SCCollectionViewCarouselSection containerCollectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_108fcb240(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010c0840e0();
  uVar2 = *(ulong *)(param_3 + 0x38);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    uVar3 = param_5;
    func_0x00010bf4c080(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar8 = param_1;
    _objc_release(uVar3);
    if (param_1 != 0.0) {
      uVar5 = *(undefined8 *)(param_3 + 0x38);
      uVar1 = param_7;
      func_0x00010c0840e0(param_7);
      func_0x00010c0dfd40(uVar5,param_4,uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_3 + 0x30);
      func_0x00010c156140(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ce460(*(undefined8 *)(param_3 + 0x30));
      FUN_108fc96c8(uVar3);
      dVar7 = 0.0;
      func_0x00010b816264(0,dVar8,0);
      _objc_release(uVar3);
      uVar3 = param_5;
      func_0x00010bf4c080(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      dVar7 = dVar7 - dVar8;
      param_2 = dVar7 - param_2;
      _objc_release(uVar3);
      uVar6 = *(undefined8 *)(param_3 + 0x40);
      uVar3 = uVar5;
      func_0x00010bf34020(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar6,param_4,uVar3);
      _objc_release(uVar3);
      uVar3 = uVar5;
      func_0x00010bf4ddc0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_5;
      func_0x00010bf4c080(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      func_0x00010c23d6e0(uVar6,param_4,uVar3);
      dVar8 = param_2;
      func_0x00010b816218();
      dVar9 = dVar8;
      func_0x00010b816218();
      dVar8 = (double)(long)(param_2 * dVar8) / dVar8;
      dVar9 = (double)(long)(dVar7 * dVar9) / dVar9;
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar5);
      goto LAB_108fcb2d0;
    }
  }
  dVar9 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  dVar8 = *(double *)PTR__CGSizeZero_110347620;
LAB_108fcb2d0:
  _objc_release(param_7);
  _objc_release(param_5);
  auVar10._8_8_ = dVar9;
  auVar10._0_8_ = dVar8;
  return auVar10;
}



/* Entry: 108fcb470; end: 108fcb63b; -[SCCollectionViewCarouselSection containerCollectionView:layout:insetForSectionAtIndex:] */

undefined **
FUN_108fcb470(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,long param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0xb1) == '\x01') {
    lVar15 = *(long *)(param_1 + 0xa0);
    _objc_retain(lVar15);
    puVar3 = auStack_f8;
    lVar13 = lVar15;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar13 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar15);
        }
        if (param_4 == *(undefined1 **)(lVar16 * 8)) {
          ppuVar18 = *(undefined ***)PTR__UIEdgeInsetsZero_110345bb0;
          ppuVar17 = *(undefined ***)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
          _objc_release(lVar15);
          goto LAB_108fcb5dc;
        }
        lVar16 = lVar16 + 1;
      } while (lVar13 != lVar16);
      puVar3 = auStack_f8;
      lVar13 = lVar15;
      func_0x00010bf52a60();
    }
    _objc_release(lVar15);
  }
  puVar2 = param_3;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b8166c0();
  _objc_release(puVar2);
  if (param_5 == 0) {
    ppuVar18 = *(undefined ***)PTR__UIEdgeInsetsZero_110345bb0;
    ppuVar17 = *(undefined ***)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  }
  else {
    func_0x00010c0ce5e0(param_1);
    ppuVar17 = (undefined **)0x0;
    ppuVar18 = (undefined **)0x0;
  }
LAB_108fcb5dc:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return ppuVar18;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar3;
  func_0x00010c152b60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined1 *)0x0) {
    uVar14 = *(undefined8 *)(param_3 + 8);
    puVar4 = param_3;
    _objc_opt_class();
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bf7dbc0(uVar14);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c288160(*(undefined8 *)(param_3 + 0x20));
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  func_0x00010c152b60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined1 *)0x0) {
    puVar9 = puVar3 + 0x78;
    _objc_loadWeakRetained();
    puVar10 = puVar9;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf4cdc0(puVar2);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = &PTR____CFConstantStringClassReference_110f16658;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar10;
    func_0x00010bdcc4a0(puVar3);
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar10);
    _objc_release(puVar9);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  func_0x00010c152b60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined1 *)0x0) {
    puVar9 = puVar2 + 0x78;
    _objc_loadWeakRetained();
    puVar10 = puVar9;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf4cdc0(puVar4);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = &PTR____CFConstantStringClassReference_110f16638;
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar10;
    func_0x00010bdcc4a0(puVar2);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar10);
    _objc_release(puVar9);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c152b60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar4 + 0x78;
    _objc_loadWeakRetained(puVar2);
    puVar9 = puVar2;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf4cdc0(puVar3);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcc4a0(puVar4);
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar9);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return ppuVar17;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c23d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return ppuVar17;
}



/* Entry: 108fcb63c; end: 108fcb7df; -[SCCollectionViewCarouselSection containerCollectionView:layout:section:didScrollToOffset:] */

void FUN_108fcb63c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_4;
  func_0x00010c152b60(param_4,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    uVar13 = *(undefined8 *)(param_1 + 8);
    lVar10 = param_1;
    _objc_opt_class();
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010bf7dbc0(uVar13);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(lVar10);
    func_0x00010c288160(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = lVar12;
  func_0x00010c152b60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar12 != 0) {
    lVar11 = param_4 + 0x78;
    _objc_loadWeakRetained();
    lVar5 = lVar11;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf4cdc0(lVar12);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar5;
    func_0x00010bdcc4a0(param_4);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(lVar5);
    _objc_release(lVar11);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = lVar9;
  func_0x00010c152b60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    lVar5 = lVar12 + 0x78;
    _objc_loadWeakRetained();
    lVar7 = lVar5;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf4cdc0(lVar9);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar7;
    func_0x00010bdcc4a0(lVar12);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(lVar7);
    _objc_release(lVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c152b60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 != 0) {
    lVar11 = lVar9 + 0x78;
    _objc_loadWeakRetained(lVar11);
    lVar5 = lVar11;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf4cdc0(lVar10);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcc4a0(lVar9);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(lVar5);
    _objc_release(lVar11);
  }
  _objc_release(lVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c23d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108fcb7e0; end: 108fcb9b3; -[SCCollectionViewCarouselSection containerCollectionView:layout:sectionWillBeginDragging:] */

void FUN_108fcb7e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_4;
  func_0x00010c152b60(param_4,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    lVar11 = param_1 + 0x78;
    _objc_loadWeakRetained();
    lVar1 = lVar11;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf4cdc0(param_4);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010bdcc4a0(param_1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_release(lVar11);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = lVar7;
  func_0x00010c152b60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 != 0) {
    lVar1 = param_4 + 0x78;
    _objc_loadWeakRetained();
    lVar8 = lVar1;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf4cdc0(lVar7);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x00010bdcc4a0(param_4);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(lVar8);
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c152b60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 != 0) {
    lVar1 = lVar7 + 0x78;
    _objc_loadWeakRetained(lVar1);
    lVar8 = lVar1;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf4cdc0(lVar10);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcc4a0(lVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar8);
    _objc_release(lVar1);
  }
  _objc_release(lVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c23d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108fcb9b4; end: 108fcbbab; -[SCCollectionViewCarouselSection containerCollectionView:layout:sectionDidEndDragging:willDecelerate:] */

void FUN_108fcb9b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_4;
  func_0x00010c152b60(param_4,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    lVar1 = param_1 + 0x78;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf4cdc0(param_4);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010bdcc4a0(param_1);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c152b60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    lVar1 = param_4 + 0x78;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf4cdc0(lVar9);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcc4a0(param_4);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c23d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108fcbbac; end: 108fcbd83; -[SCCollectionViewCarouselSection containerCollectionView:layout:sectionDidEndDecelerating:] */

void FUN_108fcbbac(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c152b60(param_4,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    lVar1 = param_1 + 0x78;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf4cdc0(param_4);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcc4a0(param_1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c23d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108fcbd84; end: 108fcbd87; -[SCCollectionViewCarouselSection sizeForItemAtIndex:width:] */

void FUN_108fcbd84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_sizeForItemAtIndexInSection_with_11266cec0);
  return;
}



/* Entry: 108fcbd88; end: 108fcbd8f; -[SCCollectionViewCarouselSection totalNumberOfItems] */

void FUN_108fcbd88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_count_1125b2420);
  return;
}



/* Entry: 108fcbd90; end: 108fcbdef; -[SCCollectionViewCarouselSection _resetScroll] */

void FUN_108fcbd90(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0xb5) == '\x01') {
    lVar1 = param_1 + 0x78;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + 0xb5) = 0;
      param_1 = param_1 + 0x78;
      _objc_loadWeakRetained(param_1);
      FUN_108fcf548();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 108fcbdf0; end: 108fcbf7f; -[SCCollectionViewCarouselSection _updateWithConfiguration] */

void FUN_108fcbdf0(undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  _objc_release(uVar2);
  *(undefined8 *)(param_2 + 0xd0) = 1;
  puVar3 = PTR_PTR_1126b48b0;
  func_0x00010c128f60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined **)(param_2 + 0xc0) = puVar3;
  _objc_release(uVar2);
  bVar1 = (byte)*(undefined8 *)(param_2 + 0x30);
  func_0x00010c0b7d40();
  *(byte *)(param_2 + 0xb5) = bVar1 ^ 1;
  func_0x00010c0ce460(*(undefined8 *)(param_2 + 0x30));
  *(undefined8 *)(param_2 + 0x50) = param_1;
  _objc_initWeak(auStack_38,param_2);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf4c1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf51e00();
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c155e60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf51e00();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar4);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108fcbf80; end: 108fcbfb3;  */

void FUN_108fcbf80(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fcbfb4; end: 108fcc01f; -[SCCollectionViewCarouselSection _performSectionDataProviderUpdateWithHeaderModel:contentDataModel:] */

void FUN_108fcbfb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(uVar1);
  func_0x00010c1f9220(*(undefined8 *)(param_1 + 0xf8),param_2,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108fcc020; end: 108fcc0a3; -[SCCollectionViewCarouselSection _setSectionDataModelFromConfiguration] */

void FUN_108fcc020(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  func_0x00010c1559c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010bf4c1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf4c1e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f9220(*(undefined8 *)(param_1 + 0xf8),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 108fcc0a4; end: 108fcc0f7; -[SCCollectionViewCarouselSection _reloadSupplementaryViewModels:] */

void FUN_108fcc0a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 200;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf409c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fcc0f8; end: 108fcc14f; -[SCCollectionViewCarouselSection _reloadSection] */

void FUN_108fcc0f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b48b0;
  func_0x00010c128f60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined **)(param_1 + 0xc0) = puVar1;
  _objc_release(uVar2);
  param_1 = param_1 + 200;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf40a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fcc150; end: 108fcc15f; -[SCCollectionViewCarouselSection _resetConfiguration] */

void FUN_108fcc150(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fcc160; end: 108fcc38b; -[SCCollectionViewCarouselSection _updateWithSectionDataProvider] */

void FUN_108fcc160(long param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = *(ulong *)(param_1 + 0xf8);
    _objc_opt_respondsToSelector(uVar1,PTR_s_modelCanUpdateComparator_1126119a0);
    if ((uVar1 & 1) == 0) {
      ppuVar2 = &PTR___NSConcreteGlobalBlock_110d622f0;
    }
    else {
      ppuVar2 = *(undefined ***)(param_1 + 0xf8);
      func_0x00010c0cfe20();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar3 = ppuVar2;
    _objc_retainBlock();
    uVar11 = *(undefined8 *)(param_1 + 0x60);
    *(undefined ***)(param_1 + 0x60) = ppuVar3;
    _objc_release(uVar11);
    _objc_release(ppuVar2);
    uVar1 = *(ulong *)(param_1 + 0xf8);
    _objc_opt_respondsToSelector(uVar1,PTR_s_numberOfSections_1126156d0);
    if ((uVar1 & 1) == 0) {
      lVar4 = 1;
    }
    else {
      lVar4 = *(long *)(param_1 + 0xf8);
      func_0x00010c0df2e0();
    }
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    if (lVar4 != 0) {
      lVar12 = 0;
      do {
        uVar11 = *(undefined8 *)(param_1 + 0xf8);
        func_0x00010c0deec0(uVar11);
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0xc0000000;
        pcStack_88 = FUN_108fd6d04;
        puStack_80 = &UNK_110ad1ef8;
        uVar7 = 0;
        lStack_78 = lVar12;
        func_0x00010bd86bb4(0,uVar11,&puStack_98);
        func_0x00010befa160(puVar5);
        _objc_release(uVar7);
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6);
        _objc_release(puVar8);
        lVar12 = lVar12 + 1;
      } while (lVar4 != lVar12);
    }
    puVar8 = puVar5;
    func_0x00010bf51e00(puVar5);
    uVar7 = *(undefined8 *)(param_1 + 0xf8);
    puVar9 = puVar5;
    func_0x00010bf51e00(puVar5);
    func_0x00010bf4ac00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar7;
    func_0x00010bf51e00();
    puVar10 = puVar6;
    func_0x00010bf51e00(puVar6);
    func_0x00010bedf440(param_1);
    _objc_release(puVar10);
    _objc_release(uVar11);
    _objc_release(uVar7);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 108fcc38c; end: 108fcc903; -[SCCollectionViewCarouselSection _updateSectionWithIndexPaths:containerCellViewModels:numberOfItemsBySection:] */

void FUN_108fcc38c(long param_1,undefined8 param_2,long param_3,long param_4,undefined **param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  uint uStack_1ec;
  undefined *puStack_1e0;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar16 = param_5;
  if (param_4 == 0) goto LAB_108fcc88c;
  uVar2 = *(ulong *)(param_1 + 0xf8);
  _objc_opt_respondsToSelector(uVar2,PTR_s_supplementaryViewModels_1126765b0);
  if ((uVar2 & 1) == 0) {
    lVar17 = *(long *)(param_1 + 0x68);
    if (lVar17 == 0) {
      puStack_1e0 = (undefined *)0x0;
    }
    else {
      uStack_80 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
      ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d18d8;
      func_0x00010bf51e00();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_88 = lVar17;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puStack_1e0 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_78 = puVar6;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(lVar17);
    }
  }
  else {
    puStack_1e0 = *(undefined **)(param_1 + 0xf8);
    func_0x00010c262e20();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(ulong *)(param_1 + 0xf8);
  _objc_opt_respondsToSelector(uVar2,PTR_s_minimumInteritemSpacing_112611330);
  if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    func_0x00010c0ce460();
    func_0x00010c0ce460(*(undefined8 *)(param_1 + 0xf8));
  }
  uVar3 = *(ulong *)(param_1 + 0x38);
  func_0x00010bf51e00();
  uVar2 = uVar3;
  func_0x00010b813c80(uVar3,param_4,*(undefined8 *)(param_1 + 0x60));
  lVar17 = param_1;
  func_0x00010be350c0();
  uVar4 = *(ulong *)(param_1 + 0x38);
  func_0x00010bf529e0();
  lVar5 = param_4;
  func_0x00010bf529e0();
  puVar6 = *(undefined **)(param_1 + 0x18);
  func_0x00010c262e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(puStack_1e0);
  if (puVar6 == puStack_1e0) {
    uStack_1ec = 0;
  }
  else if (puStack_1e0 == (undefined *)0x0) {
    uStack_1ec = 1;
  }
  else {
    puVar7 = puVar6;
    func_0x00010c071ae0();
    uStack_1ec = (uint)puVar7 ^ 1;
  }
  ppuVar16 = (undefined **)(ulong)(lVar5 != 0);
  _objc_release(puStack_1e0);
  _objc_release(puVar6);
  _objc_release(puVar6);
  if ((((uint)lVar17 | uStack_1ec) & 1) == 0) {
    uVar8 = uVar2;
    func_0x000108fdc9e0();
    if ((uVar8 & 1) != 0) goto LAB_108fcc5d4;
    *(undefined8 *)(param_1 + 0xd0) = 2;
  }
  else {
LAB_108fcc5d4:
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar7 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new();
    uVar1 = (uint)((uVar4 != 0) != (lVar5 != 0)) | ((uint)lVar17 | uStack_1ec) & 1;
    if (uVar1 == 0) {
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      lStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      uVar4 = uVar2;
      func_0x00010c286820();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010bf52a60();
      if (uVar8 != 0) {
        lVar17 = *plStack_140;
        do {
          uVar18 = 0;
          do {
            if (*plStack_140 != lVar17) {
              _objc_enumerationMutation(uVar4);
            }
            uVar19 = *(undefined8 *)(lStack_148 + uVar18 * 8);
            func_0x00010c0e1e60(uVar19);
            uVar9 = uVar3;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d8ae0(uVar19);
            lVar5 = param_4;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar9;
            func_0x00010bf34020();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar5;
            func_0x00010bf34020();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar10;
            func_0x00010c0720c0();
            _objc_release(lVar11);
            _objc_release(uVar10);
            if ((int)uVar12 == 0) {
              func_0x00010c0e1e60(uVar19);
              func_0x00010bef92c0(puVar7);
            }
            else {
              func_0x00010befa120(puVar6);
            }
            _objc_release(lVar5);
            _objc_release(uVar9);
            uVar18 = uVar18 + 1;
          } while (uVar8 != uVar18);
          uVar8 = uVar4;
          func_0x00010bf52a60();
        } while (uVar8 != 0);
      }
      _objc_release(uVar4);
    }
    _objc_initWeak(auStack_158,param_1);
    puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_108fcc904;
    puStack_198 = &UNK_110ad1d28;
    ppuVar16 = &puStack_1b0;
    _objc_copyWeak(auStack_168,auStack_158);
    _objc_retain(param_4);
    lStack_190 = param_4;
    _objc_retain(puStack_1e0);
    puStack_188 = puStack_1e0;
    uStack_160 = (undefined1)uVar1;
    uStack_15f = (undefined1)uStack_1ec;
    _objc_retain(uVar2);
    uStack_180 = uVar2;
    _objc_retain(puVar7);
    puStack_178 = puVar7;
    _objc_retain(puVar6);
    puStack_170 = puVar6;
    func_0x00010bcbe2c4("APPSTORE",&puStack_1b0);
    _objc_release(puStack_170);
    _objc_release(puStack_178);
    _objc_release(uStack_180);
    _objc_release(puStack_188);
    _objc_release(lStack_190);
    _objc_destroyWeak(auStack_168);
    _objc_destroyWeak(auStack_158);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puStack_1e0);
LAB_108fcc88c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar16 + 9);
  _objc_destroyWeak(auStack_158);
  __Unwind_Resume();
  lVar17 = param_3 + 0x48;
  _objc_loadWeakRetained(lVar17);
  uVar19 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c066900(uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010bf6c000(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_3 + 0x38);
  func_0x00010bf51e00();
  uVar15 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010bf51e00();
  func_0x00010bee4620(lVar17);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar17);
  return;
}



/* Entry: 108fcc904; end: 108fcc9e7;  */

void FUN_108fcc904(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar5 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined1 *)(param_1 + 0x50);
  uVar4 = *(undefined1 *)(param_1 + 0x51);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c066900(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf6c000(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf51e00();
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf51e00();
  func_0x00010bee4620(lVar5,param_2,uVar1,uVar2,uVar3,uVar4,uVar6,uVar7,uVar8,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 108fcc9e8; end: 108fcca67; -[SCCollectionViewCarouselSection _updateIvarWithCellViewModels:supplementaryViewModels:] */

void FUN_108fcc9e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf51e00(param_4);
  _objc_release(param_4);
  func_0x00010c20fe40(*(undefined8 *)(param_1 + 0x18));
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0xd0) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010be86c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__recalculateVirtualSectionMappin_11257f4b0);
  return;
}



/* Entry: 108fcca68; end: 108fccfd3; -[SCCollectionViewCarouselSection _updateWithCellViewModels:supplementaryViewModels:shouldReloadSection:hasSupplementaryViewModelsChanged:insertIndexSet:deleteIndexSet:reloadIndexSet:updateListIndices:] */

void FUN_108fcca68(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,long param_10
                  )

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar2 = param_1 + 200;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010bf40920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c20f8;
  _objc_opt_class(PTR_PTR_1126c20f8);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  func_0x00010beda0c0(param_1);
  if (((param_5 & 1) == 0) && (uVar2 != 0)) {
    if (param_6 != 0) {
      func_0x00010be8ad80(param_1);
    }
    func_0x00010bf4c080();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_9;
    func_0x00010c0d3c80();
    _objc_retain(param_10);
    lVar6 = param_10;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_10);
        }
        puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        uVar16 = *(undefined8 *)(lVar14 * 8);
        func_0x00010c0e1e60(uVar16);
        func_0x00010bfed020(puVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        func_0x00010bf33b60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        uVar8 = uVar7;
        func_0x000107c318f8(uVar7,PTR_DAT_1126a4fe8);
        uVar5 = uVar7;
        if ((int)uVar8 == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar7);
        if (uVar5 == 0) {
          func_0x00010c0e1e60(uVar16);
          func_0x00010bef92c0(uVar15);
        }
        else {
          func_0x00010c0d8ae0();
          lVar9 = param_3;
          func_0x00010c0dfd40(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010bf4ddc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2226c0(uVar7);
          _objc_release(lVar10);
          _objc_release(lVar9);
        }
        _objc_release(uVar5);
        lVar14 = lVar14 + 1;
      } while (lVar6 != lVar14);
      lVar6 = param_10;
      func_0x00010bf52a60();
    }
    _objc_release(param_10);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(puVar4);
    func_0x00010bf97bc0(param_7);
    _objc_retain(puVar11);
    func_0x00010bf97bc0(param_8);
    _objc_retain(puVar12);
    func_0x00010bf97bc0(param_9);
    if (*(char *)(param_1 + 0xb8) == '\x01') {
      func_0x00010c08cdc0(uVar3);
    }
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_retain(puVar4);
    _objc_retain(puVar12);
    _objc_retain(uVar15);
    _objc_retain(puVar11);
    _objc_retain(uVar3);
    func_0x00010c0f8420(uVar3);
    if (((*(byte *)(param_1 + 0xb0) & 1) == 0) && (*(char *)(param_1 + 0xb1) == '\x01')) {
      lVar6 = param_1 + 0x78;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar6 != 0) {
        *(undefined1 *)(param_1 + 0xb0) = 1;
        param_1 = param_1 + 0xe0;
        _objc_loadWeakRetained(param_1);
        func_0x00010c29fa00();
        _objc_release(param_1);
      }
    }
    _objc_release(puVar4);
    _objc_release(param_7);
    _objc_release(puVar12);
    _objc_release(uVar15);
    _objc_release(puVar11);
    _objc_release(uVar3);
    _objc_release(param_8);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar4);
    _objc_release(puVar4);
    _objc_release(puVar12);
    _objc_release(uVar15);
    _objc_release(puVar11);
    _objc_release(uVar3);
  }
  else {
    func_0x00010be350a0(param_1);
    func_0x00010be8ab60(param_1);
  }
  _objc_release(uVar2);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  uVar15 = *(undefined8 *)(param_3 + 0x20);
  puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108fccfd4; end: 108fcd0b7;  */

void FUN_108fccfd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108fcd0b8; end: 108fcd143;  */

void FUN_108fcd0b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf6c100(*(undefined8 *)(param_1 + 0x28));
  }
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf51e00(uVar2);
    func_0x00010c128de0(uVar3);
    _objc_release(uVar2);
  }
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c066a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_insertItemsAtIndexPaths__1125f74a0,
               *(undefined8 *)(param_1 + 0x50));
    return;
  }
  return;
}



/* Entry: 108fcd144; end: 108fcd403; -[SCCollectionViewCarouselSection _announceCellWillDisplayEventWithIsDragging:isDecelerating:indexPath:viewModel:existingContainerViewModels:eventTime:] */

/* WARNING: Possible PIC construction at 0x000108fcd254: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108fcd258) */
/* WARNING: Removing unreachable block (ram,0x000108fcd26c) */
/* WARNING: Removing unreachable block (ram,0x000108fcd284) */
/* WARNING: Removing unreachable block (ram,0x000108fcd378) */
/* WARNING: Removing unreachable block (ram,0x000108fcd380) */
/* WARNING: Removing unreachable block (ram,0x000108fcd38c) */
/* WARNING: Removing unreachable block (ram,0x000108fcd394) */
/* WARNING: Removing unreachable block (ram,0x000108fcd400) */
/* WARNING: Removing unreachable block (ram,0x000108fcd3dc) */

void FUN_108fcd144(long param_1)

{
  long lVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  func_0x000107c31908(in_x6,&PTR___NSConcreteGlobalBlock_110ad1d58);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0xf8);
  func_0x00010c1559c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51e00();
  if (lVar1 == 0) {
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf4ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(in_x5,PTR_s_contentViewModel_1125b1118);
  return;
}



/* Entry: 108fcd404; end: 108fcd40b;  */

void FUN_108fcd404(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_contentViewModel_1125b1118);
  return;
}



/* Entry: 108fcd40c; end: 108fcd5fb; -[SCCollectionViewCarouselSection _announceActionEventWithIndexPath:actionModel:] */

void FUN_108fcd40c(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar10 = *(undefined8 *)(param_1 + 8);
  lVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined **)(param_1 + 0xf8);
  func_0x00010c1559c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar11 = &PTR____CFConstantStringClassReference_110f8a7b8;
  puVar4 = param_4;
  if (param_4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  puVar8 = puVar6;
  func_0x00010bf7dbc0(uVar10);
  _objc_release(puVar6);
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    _objc_retain(puVar8);
    _objc_retain(ppuVar11);
    func_0x000107c31908(lVar7,&PTR___NSConcreteGlobalBlock_110ad1d98);
    puVar3 = puVar8;
    func_0x00010c0d3c80();
    _objc_release(puVar8);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    }
    else {
      _objc_retain(puVar3);
      puVar2 = puVar3;
    }
    _objc_release(puVar3);
    lVar9 = *(long *)(param_3 + 0x30);
    func_0x00010bf4c1e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar9;
    func_0x00010bf51e00();
    if (lVar1 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar3);
    }
    else {
      func_0x00010c1d0640(puVar2);
    }
    _objc_release(lVar1);
    _objc_release(lVar9);
    if (lVar7 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar3);
    }
    else {
      func_0x00010c1d0640(puVar2);
    }
    func_0x00010c1d0640(puVar2);
    uVar10 = *(undefined8 *)(param_3 + 8);
    _objc_opt_class(param_3);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010bf7dbc0(uVar10);
    _objc_release(ppuVar11);
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar7);
    return;
  }
  return;
}



/* Entry: 108fcd5fc; end: 108fcd7f7; -[SCCollectionViewCarouselSection _announceScrollEvent:forVisibleCells:extraData:] */

void FUN_108fcd5fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x000107c31908(param_4,&PTR___NSConcreteGlobalBlock_110ad1d98);
  puVar1 = param_5;
  func_0x00010c0d3c80();
  _objc_release(param_5);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010bf4c1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf51e00();
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar1);
  }
  else {
    func_0x00010c1d0640(puVar2);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (param_4 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar1);
  }
  else {
    func_0x00010c1d0640(puVar2);
  }
  func_0x00010c1d0640(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010bf7dbc0(uVar5);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108fcd7f8; end: 108fcd897;  */

void FUN_108fcd7f8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x000107c318f8(param_2,PTR_DAT_1126a4fe8);
  puVar1 = PTR_DAT_1126a4fe8;
  lVar3 = 0;
  if ((param_2 != 0) && ((int)lVar2 != 0)) {
    _objc_retain(param_2);
    lVar3 = param_2;
    func_0x000107c318f8(param_2,puVar1);
    lVar2 = param_2;
    if ((int)lVar3 == 0) {
      lVar2 = 0;
    }
    _objc_retain(lVar2);
    _objc_release(param_2);
    lVar3 = lVar2;
    func_0x00010c29d560(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108fcd898; end: 108fcd8af; -[SCCollectionViewCarouselSection _configuration] */

void FUN_108fcd898(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fcd8b0; end: 108fcd8c7; -[SCCollectionViewCarouselSection _modelCanUpdateComparator] */

void FUN_108fcd8b0(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fcd8c8; end: 108fcd99f; -[SCCollectionViewCarouselSection _heightUpdatedWithContainerCellViewModels:existingContainerCellViewModels:] */

long FUN_108fcd8c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  dVar5 = 1.79769313486232e+308;
  FUN_108fc9b90(0x7fefffffffffffff,0x7fefffffffffffff,param_4,uVar2);
  dVar3 = 1.79769313486232e+308;
  FUN_108fc9b90(0x7fefffffffffffff,0x7fefffffffffffff,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(param_3);
  dVar4 = ABS(dVar3 - dVar5);
  dVar5 = ABS(dVar5 + dVar3) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar4) && (bVar1 = false, !NAN(dVar4) && !NAN(dVar5))) {
    bVar1 = dVar4 < dVar5;
  }
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010be350b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__heightUpdatedFromLayoutCalculat_11256adc8)
    ;
    return param_1;
  }
  return 1;
}



/* Entry: 108fcd9a0; end: 108fcda93; -[SCCollectionViewCarouselSection _heightUpdatedFromLayoutCalculator] */

undefined8 FUN_108fcd9a0(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar2 = *(long *)(param_1 + 0x100);
  if (lVar2 != 0) {
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x100);
      dVar7 = *(double *)(param_1 + 0x50);
      lVar2 = param_1;
      func_0x00010c0deb60(param_1);
      func_0x00010c08c9a0(*(undefined8 *)PTR__CGPointZero_110347540,
                          *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x40f86a0000000000,uVar4,
                          param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _objc_release(uVar3);
      _objc_release(uVar4);
      dVar6 = ABS(dVar7 - *(double *)(param_1 + 0x58));
      dVar5 = ABS(dVar7 + *(double *)(param_1 + 0x58)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (!bVar1) {
        *(double *)(param_1 + 0x58) = dVar7;
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 108fcda94; end: 108fcdbbb; -[SCCollectionViewCarouselSection scrollToItemAtOriginalIndexPath:atVirtualScrollPosition:onlyIfNecessary:] */

void FUN_108fcda94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_5 != 0) {
    uVar1 = param_1 + 0x78;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf4b900();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) goto LAB_108fcdba4;
  }
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c0dfd40(uVar4,param_2,*(undefined1 *)(param_1 + 0xb3));
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar5);
  lVar6 = param_1;
  func_0x00010bf404a0(param_1,param_2,lVar5,uVar4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  func_0x00010c152580(uVar4,param_2,lVar6,param_4);
  func_0x00010c069fe0(uVar4);
  lVar5 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c1cbe20();
  _objc_release(lVar5);
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  func_0x00010c08cdc0();
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(uVar4);
LAB_108fcdba4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fcdbbc; end: 108fcdcf3; -[SCCollectionViewCarouselSection resetAllSectionOffsets] */

ulong FUN_108fcdbbc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0xa0);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar6);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      func_0x00010c1380e0(uVar7);
      func_0x00010c069fe0(uVar7);
      lVar8 = lVar8 + 1;
    } while (lVar1 != lVar8);
    lVar1 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  func_0x00010c1cbe20();
  _objc_release(lVar1);
  uVar2 = param_1 + 0x78;
  _objc_loadWeakRetained();
  func_0x00010c08cdc0();
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar2;
  }
  ___stack_chk_fail();
  lVar1 = uVar2 + 0x78;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126dcd58;
  _objc_opt_class(PTR_PTR_1126dcd58);
  lVar1 = lVar3;
  _objc_opt_isKindOfClass(lVar3,puVar4);
  _objc_release(lVar3);
  return (ulong)((uint)lVar1 & (uint)(lVar3 != 0));
}



/* Entry: 108fcdcf4; end: 108fcdd5f; -[SCCollectionViewCarouselSection isUsingVirtualSectionLayout] */

uint FUN_108fcdcf4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126dcd58;
  _objc_opt_class(PTR_PTR_1126dcd58);
  lVar3 = lVar1;
  _objc_opt_isKindOfClass(lVar1,puVar2);
  _objc_release(lVar1);
  return (uint)lVar3 & (uint)(lVar1 != 0);
}



/* Entry: 108fcdd60; end: 108fce077; -[SCCollectionViewCarouselSection setVirtualSectionsExpanded:] */

void FUN_108fcdd60(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,uint param_7)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_5;
  if (*(char *)(param_5 + 0xb1) == '\x01') {
    if (*(byte *)(param_5 + 0xb3) != param_7) {
      *(char *)(param_5 + 0xb3) = (char)param_7;
      if (param_7 == 0) {
        func_0x00010bee4000(param_5);
      }
      else {
        func_0x00010bee4020();
      }
      uVar11 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      lVar7 = *(long *)(param_5 + 0xa0);
      _objc_retain(lVar7);
      lVar6 = lVar7;
      func_0x00010bf52a60();
      if (lVar6 != 0) {
        lVar9 = *plStack_130;
        do {
          lVar10 = 0;
          do {
            if (*plStack_130 != lVar9) {
              _objc_enumerationMutation(lVar7);
            }
            func_0x00010c069fe0(*(undefined8 *)(lStack_138 + lVar10 * 8));
            lVar10 = lVar10 + 1;
          } while (lVar6 != lVar10);
          lVar6 = lVar7;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      _objc_release(lVar7);
      lVar6 = param_5 + 0x78;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bfb68e0();
      _objc_release(lVar6);
      lVar6 = param_5 + 0x78;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c19f0e0(uVar11,param_2,param_3 * 10.0,param_4 + param_4);
      _objc_release(lVar6);
      uVar3 = param_5 + 0x78;
      _objc_loadWeakRetained();
      uVar4 = uVar3;
      func_0x00010bf408e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar5 = PTR_PTR_1126dcd58;
      _objc_opt_class(PTR_PTR_1126dcd58);
      uVar3 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      _objc_release(uVar4);
      if (((uVar3 & 1) == 0) || (uVar4 == 0)) {
        lVar6 = param_5 + 0x78;
        _objc_loadWeakRetained(lVar6);
        func_0x00010c1738c0();
        _objc_release(lVar6);
        lVar6 = param_5 + 0x78;
        _objc_loadWeakRetained(lVar6);
        func_0x00010c167a20();
        _objc_release(lVar6);
        lVar6 = param_5 + 0x78;
        _objc_loadWeakRetained(lVar6);
        func_0x00010c167a00();
        _objc_release(lVar6);
        lVar6 = param_5 + 0x78;
        _objc_loadWeakRetained(lVar6);
        func_0x00010c1f7b20();
        _objc_release(lVar6);
      }
      lVar6 = *(long *)(param_5 + 0xa0);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_5 + 0x78;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c17e7a0();
      _objc_release(lVar7);
      lVar7 = param_5 + 0xe0;
      _objc_loadWeakRetained();
      func_0x00010c29f9e0();
      _objc_release(lVar7);
      puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_170 = 0xc2000000;
      pcStack_168 = FUN_108fce078;
      puStack_160 = &UNK_11084d5f8;
      lStack_158 = lVar6;
      lStack_150 = param_5;
      uStack_148 = (char)param_7;
      _objc_retain(lVar6);
      func_0x000107c312d0("APPSTORE",&puStack_178);
      _objc_release(lStack_158);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  bVar2 = *(byte *)(lVar6 + 0x30);
  bVar8 = 1;
  do {
    lVar7 = *(long *)(lVar6 + 0x20);
    func_0x00010c152b60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      func_0x00010c288120(*(undefined8 *)(*(long *)(lVar6 + 0x28) + 0x20));
    }
    _objc_release(lVar7);
    bVar1 = bVar8 & bVar2;
    bVar8 = 0;
  } while (bVar1 != 0);
  return;
}



/* Entry: 108fce078; end: 108fce0e7;  */

void FUN_108fce078(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  
  uVar4 = 0;
  bVar2 = *(byte *)(param_1 + 0x30);
  bVar5 = 1;
  do {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c152b60(lVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010c288120(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20),param_2,lVar3);
    }
    _objc_release(lVar3);
    bVar1 = bVar5 & bVar2;
    uVar4 = 1;
    bVar5 = 0;
  } while (bVar1 != 0);
  return;
}



/* Entry: 108fce0e8; end: 108fce317; -[SCCollectionViewCarouselSection _updateVirtualSectionOffsetForCollapse] */

void FUN_108fce0e8(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  double dVar29;
  undefined *puStack_460;
  undefined8 uStack_458;
  code *pcStack_450;
  undefined *puStack_448;
  long lStack_440;
  long lStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  code *pcStack_420;
  undefined *puStack_418;
  long lStack_410;
  undefined *puStack_408;
  long lStack_380;
  long lStack_370;
  long lStack_360;
  long lStack_358;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar4 = lVar13;
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 0.0;
  _objc_retain(lVar4);
  lVar7 = lVar4;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  if (lVar7 == 0) {
    _objc_release(lVar4);
LAB_108fce2b8:
    func_0x00010c1380e0(uVar5);
  }
  else {
    lVar25 = 0;
    do {
      lVar23 = 0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(lVar4);
        }
        lVar27 = *(long *)(lVar23 * 8);
        lVar8 = *(long *)(param_1 + 0x88);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if ((lVar8 != 0) && (lVar9 = lVar8, func_0x00010c1554e0(), lVar9 == 0)) {
          if (lVar25 != 0) {
            lVar9 = lVar25;
            func_0x00010c0840e0();
            lVar10 = lVar27;
            func_0x00010c0840e0();
            if (lVar9 <= lVar10) goto LAB_108fce204;
          }
          func_0x00010bfed160(uVar6);
          if (0.5 <= dVar29) {
            _objc_retain(lVar27);
            _objc_release(lVar25);
            lVar25 = lVar27;
          }
        }
LAB_108fce204:
        _objc_release(lVar8);
        lVar23 = lVar23 + 1;
      } while (lVar7 != lVar23);
      lVar7 = lVar4;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
    _objc_release(lVar4);
    if (lVar25 == 0) goto LAB_108fce2b8;
    func_0x00010c152580(uVar5);
    _objc_release(lVar25);
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = lVar4 + 0x78;
  _objc_loadWeakRetained();
  lVar7 = lVar13;
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar13 = lVar7;
  func_0x00010bf529e0();
  if (lVar13 == 0) goto LAB_108fce7fc;
  uVar5 = *(undefined8 *)(lVar4 + 0xa0);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar4 + 0xa0);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 0.0;
  _objc_retain(lVar7);
  lVar25 = lVar7;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  if (lVar25 == 0) {
    _objc_release(lVar7);
    lStack_360 = 0;
    lStack_358 = 0;
    lStack_380 = 0;
    lStack_370 = 0;
LAB_108fce578:
    lVar13 = lVar7;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar13;
    func_0x00010c0840e0();
    _objc_release(lVar13);
    lVar23 = *(long *)(lVar4 + 0x38);
    func_0x00010bf529e0();
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar25;
    if (lVar25 < lVar23) {
      do {
        puVar12 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar11);
        _objc_release(puVar12);
        lVar13 = lVar13 + 1;
      } while (lVar23 != lVar13);
    }
    if (0 < lVar25) {
      uVar24 = lVar25 + 1;
      do {
        puVar12 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar11);
        _objc_release(puVar12);
        uVar24 = uVar24 - 1;
      } while (1 < uVar24);
    }
    _objc_retain(puVar11);
    puVar12 = puVar11;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    while (puVar12 != (undefined *)0x0) {
      puVar22 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(puVar11);
        }
        lVar23 = *(long *)((long)puVar22 * 8);
        lVar25 = *(long *)(lVar4 + 0x88);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar25 != 0) {
          if ((lStack_358 == 0) &&
             (lVar8 = lVar25, func_0x00010c1554e0(), lVar27 = lStack_380, lVar9 = lVar25,
             lVar10 = lStack_370, lVar26 = lVar23, lVar8 == 0)) {
LAB_108fce728:
            lStack_358 = lVar26;
            lStack_370 = lVar10;
            lStack_380 = lVar9;
            _objc_retain(lVar23);
            _objc_retain(lVar25);
            _objc_release(lVar27);
          }
          else if (lStack_360 == 0) {
            lVar8 = lVar25;
            func_0x00010c1554e0();
            lVar27 = lStack_370;
            lVar9 = lStack_380;
            lVar10 = lVar25;
            lStack_360 = lVar23;
            lVar26 = lStack_358;
            if (lVar8 != 1) {
              lStack_360 = 0;
              goto LAB_108fce754;
            }
            goto LAB_108fce728;
          }
          if ((lStack_358 != 0) && (lStack_360 != 0)) {
            _objc_release(lVar25);
            goto LAB_108fce790;
          }
        }
LAB_108fce754:
        _objc_release(lVar25);
        puVar22 = puVar22 + 1;
      } while (puVar12 != puVar22);
      puVar12 = puVar11;
      func_0x00010bf52a60();
    }
LAB_108fce790:
    _objc_release(puVar11);
    _objc_release(puVar11);
  }
  else {
    lStack_370 = 0;
    lStack_360 = 0;
    lStack_358 = 0;
    lStack_380 = 0;
    do {
      lVar23 = 0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(lVar7);
        }
        lVar27 = *(long *)(lVar23 * 8);
        lVar8 = *(long *)(lVar4 + 0x88);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar8 != 0) {
          lVar9 = lVar8;
          func_0x00010c1554e0();
          if (lVar9 == 0) {
            if (lStack_358 != 0) {
              lVar9 = lStack_358;
              func_0x00010c0840e0();
              lVar10 = lVar27;
              func_0x00010c0840e0();
              if (lVar9 <= lVar10) goto LAB_108fce448;
            }
            func_0x00010bfed160(uVar5);
            lVar9 = lStack_360;
            lVar10 = lStack_370;
            lVar26 = lStack_380;
            lVar28 = lStack_358;
            lVar2 = lVar8;
            lVar3 = lVar27;
            if (dVar29 < 0.5) goto LAB_108fce448;
LAB_108fce4ec:
            lStack_358 = lVar3;
            lStack_380 = lVar2;
            _objc_retain(lVar27);
            _objc_release(lVar28);
            _objc_retain(lVar8);
            _objc_release(lVar26);
            lStack_370 = lVar10;
            lStack_360 = lVar9;
          }
          else {
LAB_108fce448:
            lVar9 = lVar8;
            func_0x00010c1554e0();
            if (lVar9 == 1) {
              if (lStack_360 != 0) {
                lVar9 = lStack_360;
                func_0x00010c0840e0();
                lVar10 = lVar27;
                func_0x00010c0840e0();
                if (lVar9 <= lVar10) goto LAB_108fce514;
              }
              func_0x00010bfed160(uVar5);
              lVar9 = lVar27;
              lVar10 = lVar8;
              lVar26 = lStack_370;
              lVar28 = lStack_360;
              lVar2 = lStack_380;
              lVar3 = lStack_358;
              if (0.5 <= dVar29) goto LAB_108fce4ec;
            }
          }
        }
LAB_108fce514:
        _objc_release(lVar8);
        lVar23 = lVar23 + 1;
      } while (lVar25 != lVar23);
      lVar25 = lVar7;
      func_0x00010bf52a60();
    } while (lVar25 != 0);
    _objc_release(lVar7);
    if ((lStack_358 == 0) || (lStack_360 == 0)) goto LAB_108fce578;
  }
  func_0x00010c152580(uVar6);
  func_0x00010c152580(uVar6);
  _objc_release(lStack_370);
  _objc_release(lStack_360);
  _objc_release(lStack_380);
  _objc_release(lStack_358);
  _objc_release(uVar6);
  _objc_release(uVar5);
LAB_108fce7fc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)(lVar7 + 0xb1) == '\x01') {
    lVar13 = *(long *)(lVar7 + 0x38);
    func_0x00010bf529e0();
    if (lVar13 == 0) {
      *(undefined8 *)(lVar7 + 0xf0) = 0;
    }
    else {
      ppuVar14 = *(undefined ***)(lVar7 + 0x98);
      func_0x00010bf51e00();
      puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(lVar7 + 0x88);
      *(undefined **)(lVar7 + 0x88) = puVar11;
      _objc_release(uVar5);
      puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(lVar7 + 0x90);
      *(undefined **)(lVar7 + 0x90) = puVar11;
      _objc_release(uVar5);
      puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(lVar7 + 0x98);
      *(undefined **)(lVar7 + 0x98) = puVar11;
      _objc_release(uVar5);
      puVar11 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = *(long *)(lVar7 + 0x38);
      func_0x00010bf529e0();
      if (lVar13 == 0) {
        lVar13 = 1;
      }
      else {
        uVar24 = 0;
        lVar4 = 0;
        do {
          lVar23 = *(long *)(lVar7 + 0x38);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar23;
          func_0x00010bf4ddc0();
          _objc_retainAutoreleasedReturnValue();
          lVar25 = lVar13;
          func_0x000107c318f8();
          lVar21 = lVar13;
          if ((int)lVar25 == 0) {
            lVar21 = 0;
          }
          _objc_retain(lVar21);
          _objc_release(lVar13);
          puVar12 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar21;
          func_0x00010c29f9c0();
          puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          if (lVar13 <= lVar4) {
            lVar13 = lVar4;
          }
          uVar5 = *(undefined8 *)(lVar7 + 0x98);
          func_0x00010c0e00e0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067fc0();
          _objc_release(uVar5);
          puVar15 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(lVar7 + 0x88));
          func_0x00010c1d0640(*(undefined8 *)(lVar7 + 0x90));
          puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(lVar7 + 0x98));
          _objc_release(puVar16);
          lVar4 = lVar21;
          func_0x00010bf537a0();
          _objc_release(lVar21);
          if ((int)lVar4 != 0) {
            func_0x00010befa120(puVar11);
          }
          _objc_release(puVar15);
          _objc_release(puVar22);
          _objc_release(puVar12);
          _objc_release(lVar23);
          uVar24 = uVar24 + 1;
          uVar17 = *(ulong *)(lVar7 + 0x38);
          func_0x00010bf529e0();
          lVar4 = lVar13;
        } while (uVar24 < uVar17);
        lVar13 = lVar13 + 1;
      }
      *(long *)(lVar7 + 0xf0) = lVar13;
      puVar12 = puVar11;
      func_0x00010bf529e0();
      *(bool *)(lVar7 + 0xb2) = (undefined *)0x1 < puVar12;
      puVar12 = PTR_PTR_1126dcd60;
      _objc_alloc_init();
      func_0x00010c1ae7a0();
      uVar24 = lVar7 + 0x78;
      _objc_loadWeakRetained();
      uVar17 = uVar24;
      func_0x00010bf408e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar24);
      puVar22 = PTR_PTR_1126dcd58;
      _objc_opt_class(PTR_PTR_1126dcd58);
      uVar18 = uVar17;
      _objc_opt_isKindOfClass(uVar17,puVar22);
      uVar24 = uVar17;
      if ((uVar18 & 1) == 0) {
        uVar24 = 0;
      }
      _objc_retain(uVar24);
      _objc_release(uVar17);
      func_0x00010c06a080(uVar24);
      _objc_release(uVar24);
      if (((*(byte *)(lVar7 + 0xb2) & 1) == 0) && (*(char *)(lVar7 + 0xb3) == '\x01')) {
        puStack_430 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_428 = 0xc2000000;
        pcStack_420 = FUN_108fcedb0;
        puStack_418 = &UNK_110841f80;
        lStack_410 = lVar7;
        _objc_retain(puVar12);
        puStack_408 = puVar12;
        func_0x000107c312d0("APPSTORE",&puStack_430);
        puVar22 = puStack_408;
      }
      else {
        if ((*(char *)(lVar7 + 0xb4) == '\x01') &&
           ((*(char *)(lVar7 + 0xb3) == '\x01' && (0 < *(long *)(lVar7 + 0xf0))))) {
          lVar13 = 0;
          do {
            puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            ppuVar19 = ppuVar14;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d18d8;
            if (ppuVar19 != (undefined **)0x0) {
              ppuVar1 = ppuVar19;
            }
            _objc_retain(ppuVar1);
            _objc_release(ppuVar19);
            ppuVar20 = *(undefined ***)(lVar7 + 0x98);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar19 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d18d8;
            if (ppuVar20 != (undefined **)0x0) {
              ppuVar19 = ppuVar20;
            }
            _objc_retain(ppuVar19);
            _objc_release(ppuVar20);
            ppuVar20 = ppuVar1;
            func_0x00010bf433a0();
            if (ppuVar20 == (undefined **)0x1) {
              lVar21 = *(long *)(lVar7 + 0xa0);
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar21;
              func_0x00010c152b60();
              _objc_retainAutoreleasedReturnValue();
              if (lVar4 != 0) {
                puStack_460 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_458 = 0xc2000000;
                pcStack_450 = FUN_108fcee00;
                puStack_448 = &UNK_110841f80;
                lStack_440 = lVar7;
                lStack_438 = lVar4;
                _objc_retain();
                func_0x000107c312d0("APPSTORE",&puStack_460);
                _objc_release(lStack_438);
                _objc_release(lVar4);
              }
              _objc_release(lVar21);
            }
            _objc_release(ppuVar19);
            _objc_release(ppuVar1);
            _objc_release(puVar22);
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(long *)(lVar7 + 0xf0));
        }
        puVar22 = (undefined *)(lVar7 + 0xe0);
        _objc_loadWeakRetained(puVar22);
        func_0x00010c29f9e0();
      }
      _objc_release(puVar22);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(ppuVar14);
    }
  }
  return;
}



/* Entry: 108fce318; end: 108fce843; -[SCCollectionViewCarouselSection _updateVirtualSectionOffsetForExpansion] */

void FUN_108fce318(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  double dVar28;
  undefined *puStack_310;
  undefined8 uStack_308;
  code *pcStack_300;
  undefined *puStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  long lStack_2c0;
  undefined *puStack_2b8;
  long lStack_230;
  long lStack_220;
  long lStack_210;
  long lStack_208;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar4 = lVar12;
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  lVar12 = lVar4;
  func_0x00010bf529e0();
  if (lVar12 == 0) goto LAB_108fce7fc;
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  dVar28 = 0.0;
  _objc_retain(lVar4);
  lVar20 = lVar4;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  if (lVar20 == 0) {
    _objc_release(lVar4);
    lStack_210 = 0;
    lStack_208 = 0;
    lStack_230 = 0;
    lStack_220 = 0;
LAB_108fce578:
    lVar12 = lVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar12;
    func_0x00010c0840e0();
    _objc_release(lVar12);
    lVar22 = *(long *)(param_1 + 0x38);
    func_0x00010bf529e0();
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar20;
    if (lVar20 < lVar22) {
      do {
        puVar11 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar10);
        _objc_release(puVar11);
        lVar12 = lVar12 + 1;
      } while (lVar22 != lVar12);
    }
    if (0 < lVar20) {
      uVar24 = lVar20 + 1;
      do {
        puVar11 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar10);
        _objc_release(puVar11);
        uVar24 = uVar24 - 1;
      } while (1 < uVar24);
    }
    _objc_retain(puVar10);
    puVar11 = puVar10;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (puVar11 != (undefined *)0x0) {
      puVar23 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(puVar10);
        }
        lVar22 = *(long *)((long)puVar23 * 8);
        lVar20 = *(long *)(param_1 + 0x88);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar20 != 0) {
          if ((lStack_208 == 0) &&
             (lVar7 = lVar20, func_0x00010c1554e0(), lVar26 = lStack_230, lVar8 = lVar20,
             lVar9 = lStack_220, lVar25 = lVar22, lVar7 == 0)) {
LAB_108fce728:
            lStack_208 = lVar25;
            lStack_220 = lVar9;
            lStack_230 = lVar8;
            _objc_retain(lVar22);
            _objc_retain(lVar20);
            _objc_release(lVar26);
          }
          else if (lStack_210 == 0) {
            lVar7 = lVar20;
            func_0x00010c1554e0();
            lVar26 = lStack_220;
            lVar8 = lStack_230;
            lVar9 = lVar20;
            lStack_210 = lVar22;
            lVar25 = lStack_208;
            if (lVar7 != 1) {
              lStack_210 = 0;
              goto LAB_108fce754;
            }
            goto LAB_108fce728;
          }
          if ((lStack_208 != 0) && (lStack_210 != 0)) {
            _objc_release(lVar20);
            goto LAB_108fce790;
          }
        }
LAB_108fce754:
        _objc_release(lVar20);
        puVar23 = puVar23 + 1;
      } while (puVar11 != puVar23);
      puVar11 = puVar10;
      func_0x00010bf52a60();
    }
LAB_108fce790:
    _objc_release(puVar10);
    _objc_release(puVar10);
  }
  else {
    lStack_220 = 0;
    lStack_210 = 0;
    lStack_208 = 0;
    lStack_230 = 0;
    do {
      lVar22 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar4);
        }
        lVar26 = *(long *)(lVar22 * 8);
        lVar7 = *(long *)(param_1 + 0x88);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 != 0) {
          lVar8 = lVar7;
          func_0x00010c1554e0();
          if (lVar8 == 0) {
            if (lStack_208 != 0) {
              lVar8 = lStack_208;
              func_0x00010c0840e0();
              lVar9 = lVar26;
              func_0x00010c0840e0();
              if (lVar8 <= lVar9) goto LAB_108fce448;
            }
            func_0x00010bfed160(uVar5);
            lVar8 = lStack_210;
            lVar9 = lStack_220;
            lVar25 = lStack_230;
            lVar27 = lStack_208;
            lVar2 = lVar7;
            lVar3 = lVar26;
            if (dVar28 < 0.5) goto LAB_108fce448;
LAB_108fce4ec:
            lStack_208 = lVar3;
            lStack_230 = lVar2;
            _objc_retain(lVar26);
            _objc_release(lVar27);
            _objc_retain(lVar7);
            _objc_release(lVar25);
            lStack_220 = lVar9;
            lStack_210 = lVar8;
          }
          else {
LAB_108fce448:
            lVar8 = lVar7;
            func_0x00010c1554e0();
            if (lVar8 == 1) {
              if (lStack_210 != 0) {
                lVar8 = lStack_210;
                func_0x00010c0840e0();
                lVar9 = lVar26;
                func_0x00010c0840e0();
                if (lVar8 <= lVar9) goto LAB_108fce514;
              }
              func_0x00010bfed160(uVar5);
              lVar8 = lVar26;
              lVar9 = lVar7;
              lVar25 = lStack_220;
              lVar27 = lStack_210;
              lVar2 = lStack_230;
              lVar3 = lStack_208;
              if (0.5 <= dVar28) goto LAB_108fce4ec;
            }
          }
        }
LAB_108fce514:
        _objc_release(lVar7);
        lVar22 = lVar22 + 1;
      } while (lVar20 != lVar22);
      lVar20 = lVar4;
      func_0x00010bf52a60();
    } while (lVar20 != 0);
    _objc_release(lVar4);
    if ((lStack_208 == 0) || (lStack_210 == 0)) goto LAB_108fce578;
  }
  func_0x00010c152580(uVar6);
  func_0x00010c152580(uVar6);
  _objc_release(lStack_220);
  _objc_release(lStack_210);
  _objc_release(lStack_230);
  _objc_release(lStack_208);
  _objc_release(uVar6);
  _objc_release(uVar5);
LAB_108fce7fc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)(lVar4 + 0xb1) == '\x01') {
    lVar12 = *(long *)(lVar4 + 0x38);
    func_0x00010bf529e0();
    if (lVar12 == 0) {
      *(undefined8 *)(lVar4 + 0xf0) = 0;
    }
    else {
      ppuVar13 = *(undefined ***)(lVar4 + 0x98);
      func_0x00010bf51e00();
      puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(lVar4 + 0x88);
      *(undefined **)(lVar4 + 0x88) = puVar10;
      _objc_release(uVar5);
      puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(lVar4 + 0x90);
      *(undefined **)(lVar4 + 0x90) = puVar10;
      _objc_release(uVar5);
      puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(lVar4 + 0x98);
      *(undefined **)(lVar4 + 0x98) = puVar10;
      _objc_release(uVar5);
      puVar10 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = *(long *)(lVar4 + 0x38);
      func_0x00010bf529e0();
      if (lVar12 == 0) {
        lVar12 = 1;
      }
      else {
        uVar24 = 0;
        lVar21 = 0;
        do {
          lVar7 = *(long *)(lVar4 + 0x38);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar7;
          func_0x00010bf4ddc0();
          _objc_retainAutoreleasedReturnValue();
          lVar22 = lVar12;
          func_0x000107c318f8();
          lVar20 = lVar12;
          if ((int)lVar22 == 0) {
            lVar20 = 0;
          }
          _objc_retain(lVar20);
          _objc_release(lVar12);
          puVar11 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar20;
          func_0x00010c29f9c0();
          puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          if (lVar12 <= lVar21) {
            lVar12 = lVar21;
          }
          uVar5 = *(undefined8 *)(lVar4 + 0x98);
          func_0x00010c0e00e0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067fc0();
          _objc_release(uVar5);
          puVar14 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(lVar4 + 0x88));
          func_0x00010c1d0640(*(undefined8 *)(lVar4 + 0x90));
          puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(lVar4 + 0x98));
          _objc_release(puVar15);
          lVar21 = lVar20;
          func_0x00010bf537a0();
          _objc_release(lVar20);
          if ((int)lVar21 != 0) {
            func_0x00010befa120(puVar10);
          }
          _objc_release(puVar14);
          _objc_release(puVar23);
          _objc_release(puVar11);
          _objc_release(lVar7);
          uVar24 = uVar24 + 1;
          uVar16 = *(ulong *)(lVar4 + 0x38);
          func_0x00010bf529e0();
          lVar21 = lVar12;
        } while (uVar24 < uVar16);
        lVar12 = lVar12 + 1;
      }
      *(long *)(lVar4 + 0xf0) = lVar12;
      puVar11 = puVar10;
      func_0x00010bf529e0();
      *(bool *)(lVar4 + 0xb2) = (undefined *)0x1 < puVar11;
      puVar11 = PTR_PTR_1126dcd60;
      _objc_alloc_init();
      func_0x00010c1ae7a0();
      uVar24 = lVar4 + 0x78;
      _objc_loadWeakRetained();
      uVar16 = uVar24;
      func_0x00010bf408e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar24);
      puVar23 = PTR_PTR_1126dcd58;
      _objc_opt_class(PTR_PTR_1126dcd58);
      uVar17 = uVar16;
      _objc_opt_isKindOfClass(uVar16,puVar23);
      uVar24 = uVar16;
      if ((uVar17 & 1) == 0) {
        uVar24 = 0;
      }
      _objc_retain(uVar24);
      _objc_release(uVar16);
      func_0x00010c06a080(uVar24);
      _objc_release(uVar24);
      if (((*(byte *)(lVar4 + 0xb2) & 1) == 0) && (*(char *)(lVar4 + 0xb3) == '\x01')) {
        puStack_2e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2d8 = 0xc2000000;
        pcStack_2d0 = FUN_108fcedb0;
        puStack_2c8 = &UNK_110841f80;
        lStack_2c0 = lVar4;
        _objc_retain(puVar11);
        puStack_2b8 = puVar11;
        func_0x000107c312d0("APPSTORE",&puStack_2e0);
        puVar23 = puStack_2b8;
      }
      else {
        if ((*(char *)(lVar4 + 0xb4) == '\x01') &&
           ((*(char *)(lVar4 + 0xb3) == '\x01' && (0 < *(long *)(lVar4 + 0xf0))))) {
          lVar12 = 0;
          do {
            puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            ppuVar18 = ppuVar13;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d18d8;
            if (ppuVar18 != (undefined **)0x0) {
              ppuVar1 = ppuVar18;
            }
            _objc_retain(ppuVar1);
            _objc_release(ppuVar18);
            ppuVar19 = *(undefined ***)(lVar4 + 0x98);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar18 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d18d8;
            if (ppuVar19 != (undefined **)0x0) {
              ppuVar18 = ppuVar19;
            }
            _objc_retain(ppuVar18);
            _objc_release(ppuVar19);
            ppuVar19 = ppuVar1;
            func_0x00010bf433a0();
            if (ppuVar19 == (undefined **)0x1) {
              lVar20 = *(long *)(lVar4 + 0xa0);
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              lVar21 = lVar20;
              func_0x00010c152b60();
              _objc_retainAutoreleasedReturnValue();
              if (lVar21 != 0) {
                puStack_310 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_308 = 0xc2000000;
                pcStack_300 = FUN_108fcee00;
                puStack_2f8 = &UNK_110841f80;
                lStack_2f0 = lVar4;
                lStack_2e8 = lVar21;
                _objc_retain();
                func_0x000107c312d0("APPSTORE",&puStack_310);
                _objc_release(lStack_2e8);
                _objc_release(lVar21);
              }
              _objc_release(lVar20);
            }
            _objc_release(ppuVar18);
            _objc_release(ppuVar1);
            _objc_release(puVar23);
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(long *)(lVar4 + 0xf0));
        }
        puVar23 = (undefined *)(lVar4 + 0xe0);
        _objc_loadWeakRetained(puVar23);
        func_0x00010c29f9e0();
      }
      _objc_release(puVar23);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(ppuVar13);
    }
  }
  return;
}



/* Entry: 108fce844; end: 108fcedaf; -[SCCollectionViewCarouselSection _recalculateVirtualSectionMapping] */

void FUN_108fce844(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  if (*(char *)(param_1 + 0xb1) == '\x01') {
    lVar2 = *(long *)(param_1 + 0x38);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
    else {
      ppuVar3 = *(undefined ***)(param_1 + 0x98);
      func_0x00010bf51e00();
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)(param_1 + 0x88);
      *(undefined **)(param_1 + 0x88) = puVar4;
      _objc_release(uVar17);
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)(param_1 + 0x90);
      *(undefined **)(param_1 + 0x90) = puVar4;
      _objc_release(uVar17);
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)(param_1 + 0x98);
      *(undefined **)(param_1 + 0x98) = puVar4;
      _objc_release(uVar17);
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = *(long *)(param_1 + 0x38);
      func_0x00010bf529e0();
      if (lVar2 == 0) {
        lVar2 = 1;
      }
      else {
        uVar18 = 0;
        lVar11 = 0;
        do {
          lVar5 = *(long *)(param_1 + 0x38);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar5;
          func_0x00010bf4ddc0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar2;
          func_0x000107c318f8();
          lVar16 = lVar2;
          if ((int)lVar6 == 0) {
            lVar16 = 0;
          }
          _objc_retain(lVar16);
          _objc_release(lVar2);
          puVar7 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar16;
          func_0x00010c29f9c0();
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          if (lVar2 <= lVar11) {
            lVar2 = lVar11;
          }
          uVar17 = *(undefined8 *)(param_1 + 0x98);
          func_0x00010c0e00e0(uVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067fc0();
          _objc_release(uVar17);
          puVar9 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x88));
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x90));
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x98));
          _objc_release(puVar10);
          lVar11 = lVar16;
          func_0x00010bf537a0();
          _objc_release(lVar16);
          if ((int)lVar11 != 0) {
            func_0x00010befa120(puVar4);
          }
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(lVar5);
          uVar18 = uVar18 + 1;
          uVar12 = *(ulong *)(param_1 + 0x38);
          func_0x00010bf529e0();
          lVar11 = lVar2;
        } while (uVar18 < uVar12);
        lVar2 = lVar2 + 1;
      }
      *(long *)(param_1 + 0xf0) = lVar2;
      puVar7 = puVar4;
      func_0x00010bf529e0();
      *(bool *)(param_1 + 0xb2) = (undefined *)0x1 < puVar7;
      puVar7 = PTR_PTR_1126dcd60;
      _objc_alloc_init();
      func_0x00010c1ae7a0();
      uVar18 = param_1 + 0x78;
      _objc_loadWeakRetained();
      uVar12 = uVar18;
      func_0x00010bf408e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar18);
      puVar8 = PTR_PTR_1126dcd58;
      _objc_opt_class(PTR_PTR_1126dcd58);
      uVar13 = uVar12;
      _objc_opt_isKindOfClass(uVar12,puVar8);
      uVar18 = uVar12;
      if ((uVar13 & 1) == 0) {
        uVar18 = 0;
      }
      _objc_retain(uVar18);
      _objc_release(uVar12);
      func_0x00010c06a080(uVar18);
      _objc_release(uVar18);
      if (((*(byte *)(param_1 + 0xb2) & 1) == 0) && (*(char *)(param_1 + 0xb3) == '\x01')) {
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0xc2000000;
        pcStack_90 = FUN_108fcedb0;
        puStack_88 = &UNK_110841f80;
        lStack_80 = param_1;
        _objc_retain(puVar7);
        puStack_78 = puVar7;
        func_0x000107c312d0("APPSTORE",&puStack_a0);
        puVar8 = puStack_78;
      }
      else {
        if ((*(char *)(param_1 + 0xb4) == '\x01') &&
           ((*(char *)(param_1 + 0xb3) == '\x01' && (0 < *(long *)(param_1 + 0xf0))))) {
          lVar2 = 0;
          do {
            puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            ppuVar14 = ppuVar3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d18d8;
            if (ppuVar14 != (undefined **)0x0) {
              ppuVar1 = ppuVar14;
            }
            _objc_retain(ppuVar1);
            _objc_release(ppuVar14);
            ppuVar15 = *(undefined ***)(param_1 + 0x98);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar14 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d18d8;
            if (ppuVar15 != (undefined **)0x0) {
              ppuVar14 = ppuVar15;
            }
            _objc_retain(ppuVar14);
            _objc_release(ppuVar15);
            ppuVar15 = ppuVar1;
            func_0x00010bf433a0();
            if (ppuVar15 == (undefined **)0x1) {
              lVar16 = *(long *)(param_1 + 0xa0);
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              lVar11 = lVar16;
              func_0x00010c152b60();
              _objc_retainAutoreleasedReturnValue();
              if (lVar11 != 0) {
                puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_c8 = 0xc2000000;
                pcStack_c0 = FUN_108fcee00;
                puStack_b8 = &UNK_110841f80;
                lStack_b0 = param_1;
                lStack_a8 = lVar11;
                _objc_retain();
                func_0x000107c312d0("APPSTORE",&puStack_d0);
                _objc_release(lStack_a8);
                _objc_release(lVar11);
              }
              _objc_release(lVar16);
            }
            _objc_release(ppuVar14);
            _objc_release(ppuVar1);
            _objc_release(puVar8);
            lVar2 = lVar2 + 1;
          } while (lVar2 < *(long *)(param_1 + 0xf0));
        }
        puVar8 = (undefined *)(param_1 + 0xe0);
        _objc_loadWeakRetained(puVar8);
        func_0x00010c29f9e0();
      }
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(ppuVar3);
    }
  }
  return;
}



/* Entry: 108fcedb0; end: 108fcedff;  */

void FUN_108fcedb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
  func_0x00010c0dfd40(uVar1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06a080();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c223770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setVirtualSectionsExpanded__112666800,0);
  return;
}



/* Entry: 108fcee00; end: 108fcee0b;  */

void FUN_108fcee00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c288130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),PTR_s_updateOnLayoutChange__11267fa70
             ,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108fcee0c; end: 108fcee7b; -[SCCollectionViewCarouselSection collectionView:virtualSectionCountForLayout:] */

undefined8 FUN_108fcee0c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xa0);
  _objc_retain(param_4);
  func_0x00010c0dfd40(lVar2,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar2);
  if (param_4 == lVar2) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0xf0);
  }
  return uVar1;
}



/* Entry: 108fcee7c; end: 108fcef4b; -[SCCollectionViewCarouselSection collectionView:layout:numberOfItemsInVirtualSection:] */

undefined8 FUN_108fcee7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xa0);
  _objc_retain(param_4);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar4);
  if (param_4 != lVar4) {
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c067fc0();
    _objc_release(uVar3);
    _objc_release(puVar1);
    return uVar2;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_count_1125b2420);
  return uVar2;
}



/* Entry: 108fcef4c; end: 108fcf007; -[SCCollectionViewCarouselSection collectionView:layout:originalIndexPathForItemAtVirtualIndexPath:] */

void FUN_108fcef4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 0xa0);
  _objc_retain(param_4);
  func_0x00010c0dfd40(lVar2,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar2);
  lVar1 = param_5;
  if (param_4 == lVar2) {
    _objc_retain(param_5);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x90);
    func_0x00010c0e00e0(lVar2,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar1 = lVar2;
    }
    _objc_retain(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108fcf008; end: 108fcf0c3; -[SCCollectionViewCarouselSection collectionView:layout:virtualIndexPathForItemAtOriginalIndexPath:] */

void FUN_108fcf008(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 0xa0);
  _objc_retain(param_4);
  func_0x00010c0dfd40(lVar2,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar2);
  lVar1 = param_5;
  if (param_4 == lVar2) {
    _objc_retain(param_5);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x88);
    func_0x00010c0e00e0(lVar2,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar1 = lVar2;
    }
    _objc_retain(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108fcf0c4; end: 108fcf0cb; -[SCCollectionViewCarouselSection sectionUpdateModel] */

undefined8 FUN_108fcf0c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 108fcf0cc; end: 108fcf0d3; -[SCCollectionViewCarouselSection setSectionUpdateModel:] */

void FUN_108fcf0cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108fcf0d4; end: 108fcf0eb; -[SCCollectionViewCarouselSection delegate] */

void FUN_108fcf0d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fcf0ec; end: 108fcf0f7; -[SCCollectionViewCarouselSection setDelegate:] */

void FUN_108fcf0ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 200,param_3);
  return;
}



/* Entry: 108fcf0f8; end: 108fcf0ff; -[SCCollectionViewCarouselSection setDataLoadingStatus:] */

void FUN_108fcf0f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  return;
}



/* Entry: 108fcf100; end: 108fcf107; -[SCCollectionViewCarouselSection actionHandler] */

undefined8 FUN_108fcf100(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 108fcf108; end: 108fcf11f; -[SCCollectionViewCarouselSection virtualSectionConfigurableDelegate] */

void FUN_108fcf108(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fcf120; end: 108fcf12b; -[SCCollectionViewCarouselSection setVirtualSectionConfigurableDelegate:] */

void FUN_108fcf120(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xe0,param_3);
  return;
}



/* Entry: 108fcf12c; end: 108fcf133; -[SCCollectionViewCarouselSection enableVirtualSectionSupport] */

undefined1 FUN_108fcf12c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb1);
}


