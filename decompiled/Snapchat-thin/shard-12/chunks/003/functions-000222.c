/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108fd3614; end: 108fd3927; -[SCCollectionViewListSection _reloadIndexSetForUpdateIndices:withOldList:newList:] */

/* WARNING: Removing unreachable block (ram,0x000108fd37c0) */
/* WARNING: Removing unreachable block (ram,0x000108fd37cc) */

void FUN_108fd3614(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(param_3);
      puVar10 = puVar2;
      func_0x00010bf51e00();
      _objc_release(puVar2);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
        return;
      }
      ___stack_chk_fail();
      if (*(char *)(param_3 + 0x48) != '\x01') {
        return;
      }
      *(undefined1 *)(param_3 + 0x48) = 0;
      func_0x00010bea2e60();
      uVar11 = *(undefined8 *)(param_3 + 0x58);
      func_0x00010bf51e00();
      uVar13 = *(undefined8 *)(param_3 + 0x70);
      *(undefined8 *)(param_3 + 0x70) = uVar11;
      _objc_release(uVar13);
      uVar11 = *(undefined8 *)(param_3 + 0x50);
      *(undefined8 *)(param_3 + 0x50) = 0;
      _objc_release(uVar11);
      uVar11 = *(undefined8 *)(param_3 + 0x58);
      *(undefined8 *)(param_3 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar11);
      return;
    }
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar15 = *(undefined8 *)(lVar14 * 8);
      func_0x00010c0e1e60(uVar15);
      uVar11 = param_4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d8ae0(uVar15);
      uVar13 = param_5;
      func_0x00010c0dfd40(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar11;
      func_0x00010bf34020();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar13;
      func_0x00010bf34020(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c0720c0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((int)uVar6 == 0) {
LAB_108fd3860:
        func_0x00010c0e1e60(uVar15);
        func_0x00010bef92c0(puVar2);
      }
      else {
        lVar7 = param_1 + 0xa8;
        _objc_loadWeakRetained();
        func_0x00010c0e1e60(uVar15);
        lVar8 = lVar7;
        func_0x00010bf40920();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(0);
        _objc_release(lVar7);
        puVar10 = PTR_DAT_1126a4fe8;
        _objc_retain(lVar8);
        lVar9 = lVar8;
        func_0x000107c318f8(lVar8,puVar10);
        lVar7 = lVar8;
        if ((int)lVar9 == 0) {
          lVar7 = 0;
        }
        _objc_retain(lVar7);
        _objc_release(lVar8);
        if (lVar7 == 0) {
          _objc_release(lVar8);
          _objc_release(0);
          goto LAB_108fd3860;
        }
        uVar4 = uVar13;
        func_0x00010bf4ddc0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2226c0(lVar8);
        _objc_release(uVar4);
        _objc_release(lVar8);
        _objc_release(lVar8);
      }
      _objc_release(uVar13);
      _objc_release(uVar11);
      lVar14 = lVar14 + 1;
    } while (lVar3 != lVar14);
    lVar3 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 108fd3928; end: 108fd398b; -[SCCollectionViewListSection _releasePendingUpdates] */

void FUN_108fd3928(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 0;
    func_0x00010bea2e60(param_1,param_2,*(undefined8 *)(param_1 + 0x50));
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar1;
    _objc_release(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108fd398c; end: 108fd39c7; -[SCCollectionViewListSection _setContainerCellViewModels:] */

void FUN_108fd398c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c181950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xd8),PTR_s_setContainerCellViewModels__11263e070,
             *(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 108fd39c8; end: 108fd39cf; -[SCCollectionViewListSection _copyExpansionTracker] */

void FUN_108fd39c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf51e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x70),PTR_s_copy_1125b2128);
  return;
}



/* Entry: 108fd39d0; end: 108fd39d7; -[SCCollectionViewListSection _copyContainerViewModels] */

void FUN_108fd39d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf51e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_copy_1125b2128);
  return;
}



/* Entry: 108fd39d8; end: 108fd39df; -[SCCollectionViewListSection _copyListConfiguration] */

void FUN_108fd39d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf51e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_copy_1125b2128);
  return;
}



/* Entry: 108fd39e0; end: 108fd3a9f; -[SCCollectionViewListSection _heightUpdatedWithContainerCellViewModels:existingContainerCellViewModels:] */

long FUN_108fd39e0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain(uVar2);
  _objc_retain(param_4);
  FUN_108fd3e88(param_5,uVar2);
  dVar4 = param_1;
  FUN_108fd3e88(param_4,uVar2);
  _objc_release(uVar2);
  _objc_release(param_4);
  dVar3 = ABS(dVar4 - param_1);
  dVar4 = ABS(param_1 + dVar4) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar3) && (bVar1 = false, !NAN(dVar3) && !NAN(dVar4))) {
    bVar1 = dVar3 < dVar4;
  }
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010be350b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__heightUpdatedFromLayoutCalculat_11256adc8)
    ;
    return param_2;
  }
  return 1;
}



/* Entry: 108fd3aa0; end: 108fd3c3f; -[SCCollectionViewListSection _heightUpdatedFromLayoutCalculator] */

ulong FUN_108fd3aa0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
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
  lVar1 = *(long *)(param_1 + 0xd0);
  lVar2 = lVar1;
  if (lVar1 != 0) {
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    _objc_release();
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0xd0);
      dVar7 = *(double *)(param_1 + 0x88);
      lVar1 = param_1;
      func_0x00010c0deb60(param_1);
      func_0x00010c08c9a0(*(undefined8 *)PTR__CGPointZero_110347540,
                          *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x40f86a0000000000,lVar2,
                          param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      lStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      plStack_110 = (long *)0x0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      lVar1 = lVar2;
      func_0x00010bf52a60();
      if (lVar1 == 0) {
        dVar8 = 0.0;
      }
      else {
        lVar4 = *plStack_110;
        dVar8 = 0.0;
        do {
          lVar5 = 0;
          do {
            if (*plStack_110 != lVar4) {
              _objc_enumerationMutation(lVar2);
            }
            func_0x00010bfb68e0(*(undefined8 *)(lStack_118 + lVar5 * 8));
            dVar8 = dVar8 + dVar7;
            lVar5 = lVar5 + 1;
          } while (lVar1 != lVar5);
          lVar1 = lVar2;
          func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
        } while (lVar1 != 0);
      }
      dVar6 = ABS(dVar8 - *(double *)(param_1 + 0x90));
      dVar7 = ABS(dVar8 + *(double *)(param_1 + 0x90)) * 2.220446049250313e-16;
      if (dVar7 <= 2.2250738585072014e-308) {
        dVar7 = 2.2250738585072014e-308;
      }
      uVar3 = (ulong)(dVar7 <= dVar6);
      if (dVar7 <= dVar6) {
        *(double *)(param_1 + 0x90) = dVar8;
      }
      _objc_release(lVar2);
      goto LAB_108fd3c04;
    }
  }
  uVar3 = 0;
LAB_108fd3c04:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar3;
  }
  ___stack_chk_fail();
  uVar3 = lVar2 + 0xa8;
  _objc_loadWeakRetained(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return uVar3;
}



/* Entry: 108fd3c40; end: 108fd3c57; -[SCCollectionViewListSection delegate] */

void FUN_108fd3c40(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fd3c58; end: 108fd3c63; -[SCCollectionViewListSection setDelegate:] */

void FUN_108fd3c58(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 108fd3c64; end: 108fd3c6b; -[SCCollectionViewListSection sectionUpdateModel] */

undefined8 FUN_108fd3c64(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 108fd3c6c; end: 108fd3c73; -[SCCollectionViewListSection setDataLoadingStatus:] */

void FUN_108fd3c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108fd3c74; end: 108fd3c7b; -[SCCollectionViewListSection actionHandler] */

undefined8 FUN_108fd3c74(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 108fd3c7c; end: 108fd3c83; -[SCCollectionViewListSection sectionDataProvider] */

undefined8 FUN_108fd3c7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 108fd3c84; end: 108fd3c8b; -[SCCollectionViewListSection viewMoreProvider] */

undefined8 FUN_108fd3c84(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 108fd3c8c; end: 108fd3c93; -[SCCollectionViewListSection layoutCalculator] */

undefined8 FUN_108fd3c8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 108fd3c94; end: 108fd3c9b; -[SCCollectionViewListSection fastAccessIndexer] */

undefined8 FUN_108fd3c94(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 108fd3c9c; end: 108fd3ccb; -[SCCollectionViewListSection setFastAccessIndexer:] */

void FUN_108fd3c9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fd3ccc; end: 108fd3ce3; -[SCCollectionViewListSection dataProvidingScheduler] */

void FUN_108fd3ccc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fd3ce4; end: 108fd3dfb; -[SCCollectionViewListSection .cxx_destruct] */

void FUN_108fd3ce4(long param_1)

{
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108fd3dfc; end: 108fd3dff;  */

void FUN_108fd3dfc(void)

{
  return;
}



/* Entry: 108fd3e00; end: 108fd3e87;  */

void FUN_108fd3e00(long param_1,long param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf529e0();
  if ((param_2 == 0) && (lVar2 = param_3, func_0x00010bf529e0(), lVar2 == 0)) {
    lVar2 = param_4;
    func_0x00010bf529e0();
    bVar1 = lVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = bVar1;
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fd3e88; end: 108fd405f;  */

double FUN_108fd3e88(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    dVar9 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    param_1 = 0.0;
    _objc_retain(param_2);
    lVar2 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (lVar2 == 0) {
      dVar9 = 0.0;
    }
    else {
      dVar9 = 0.0;
      do {
        lVar7 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_2);
          }
          uVar6 = *(undefined8 *)(lVar7 * 8);
          uVar3 = uVar6;
          func_0x00010bf34020(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_3;
          func_0x00010c0e00e0(param_3);
          _objc_release(uVar3);
          func_0x00010bf4ddc0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          param_1 = 1.79769313486232e+308;
          dVar8 = 1.79769313486232e+308;
          func_0x00010c23d6e0(0x7fefffffffffffff,0x7fefffffffffffff,uVar4);
          _objc_release(uVar6);
          dVar9 = dVar9 + dVar8;
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = param_2;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(param_2);
    func_0x00010b816218();
    func_0x00010b816218();
    dVar9 = (double)(long)(dVar9 * param_1) / param_1;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126dcd70);
    return param_1;
  }
  return dVar9;
}



/* Entry: 108fd4060; end: 108fd406b; +[SCCollectionViewListSectionDefaultViewMoreProvider viewMoreCellClass] */

void FUN_108fd4060(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126dcd70);
  return;
}



/* Entry: 108fd406c; end: 108fd4077; +[SCCollectionViewListSectionDefaultViewMoreProvider viewMoreCellReuseIdentifier] */

undefined ** FUN_108fd406c(void)

{
  return &PTR____CFConstantStringClassReference_110f16498;
}



/* Entry: 108fd4078; end: 108fd4087; -[SCCollectionViewListSectionDefaultViewMoreProvider viewModelForNumberOfItemsCollapsed:numberOfItemsTotal:] */

/* WARNING: Removing unreachable block (ram,0x000108fdc8cc) */
/* WARNING: Removing unreachable block (ram,0x000108fdc8a8) */
/* WARNING: Removing unreachable block (ram,0x000108fdc778) */
/* WARNING: Removing unreachable block (ram,0x000108fdc848) */
/* WARNING: Removing unreachable block (ram,0x000108fdc77c) */
/* WARNING: Removing unreachable block (ram,0x000108fdc920) */
/* WARNING: Removing unreachable block (ram,0x000108fdc93c) */
/* WARNING: Removing unreachable block (ram,0x000108fdc950) */

undefined * FUN_108fd4078(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e577d8;
  if (param_3 < 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e577f8;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar10 = PTR_PTR_1126d0e78;
  _objc_alloc();
  _objc_retain(ppuVar1);
  if (ppuVar1 == (undefined **)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    func_0x00010c04e840();
    _objc_release(puVar3);
  }
  _objc_release(ppuVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf415a0(0x3fb999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf415a0(0x3fb999999999999a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ac0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_retain();
    ppuVar4 = ppuVar1;
    func_0x00010c066900();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf529e0();
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar5 = ppuVar1;
      func_0x00010bf6c000();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010bf529e0();
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar6 = ppuVar1;
        func_0x00010c286820(ppuVar1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar6;
        func_0x00010bf529e0();
        puVar10 = (undefined *)(ulong)(ppuVar7 != (undefined **)0x0);
        _objc_release(ppuVar6);
      }
      else {
        puVar10 = (undefined *)0x1;
      }
      _objc_release(ppuVar5);
    }
    else {
      puVar10 = (undefined *)0x1;
    }
    _objc_release(ppuVar4);
    _objc_release(ppuVar1);
    return puVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return puVar10;
}



/* Entry: 108fd4088; end: 108fd408f; -[SCCollectionViewListSectionDefaultViewMoreProvider shouldRoundLastCellInList] */

undefined8 FUN_108fd4088(void)

{
  return 0;
}



/* Entry: 108fd4090; end: 108fd40a7; -[SCCollectionViewListSectionDefaultViewMoreProvider viewMoreProviderDelegate] */

void FUN_108fd4090(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fd40a8; end: 108fd40b3; -[SCCollectionViewListSectionDefaultViewMoreProvider setViewMoreProviderDelegate:] */

void FUN_108fd40a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 108fd40b4; end: 108fd40bb; -[SCCollectionViewListSectionDefaultViewMoreProvider .cxx_destruct] */

void FUN_108fd40b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108fd40bc; end: 108fd419f; -[SCCollectionViewListSectionLayoutAttributes isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108fd40bc(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  iVar1 = (int)&lStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ffb50;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_isEqual__1125fa0c8,param_3);
  if (iVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_11277f2d4);
    lVar2 = param_3;
    func_0x00010bf52580();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar3);
    _objc_retain(lVar2);
    if (lVar3 == lVar2) {
      lVar4 = 1;
    }
    else if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3;
      func_0x00010c071ae0(lVar3);
    }
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108fd41a0; end: 108fd420f; -[SCCollectionViewListSectionLayoutAttributes copyWithZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fd41a0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  puStack_28 = PTR_PTR_1126ffb50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_copyWithZone__1125b2238);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f2d4);
  func_0x00010bf51e00(uVar2);
  func_0x00010c1842a0(plVar1);
  _objc_release(uVar2);
  return (undefined1 *)plVar1;
}



/* Entry: 108fd4210; end: 108fd421f; -[SCCollectionViewListSectionLayoutAttributes cornerRadii] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fd4210(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f2d4);
}



/* Entry: 108fd4220; end: 108fd422b; -[SCCollectionViewListSectionLayoutAttributes setCornerRadii:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd4220(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108fd422c; end: 108fd423f; -[SCCollectionViewListSectionLayoutAttributes .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd422c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f2d4,0);
  return;
}



/* Entry: 108fd4240; end: 108fd429b; -[SCListSectionExpansionTracker initWithMinimumThreshold:maximumThreshold:incrementThreshold:] */

void FUN_108fd4240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffb58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 108fd429c; end: 108fd42ef; -[SCListSectionExpansionTracker copyWithZone:] */

void FUN_108fd429c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7938;
  func_0x00010bf00e40();
  func_0x00010c02c200();
  puVar1[0x20] = *(undefined1 *)(param_1 + 0x20);
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(puVar1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(puVar1 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  return;
}



/* Entry: 108fd42f0; end: 108fd42ff; -[SCListSectionExpansionTracker setNumberOfAllElements:shouldResetExpansion:] */

void FUN_108fd42f0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  if (param_4 != 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bee0b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateStatusWithNumberOfElement_112595c70);
  return;
}



/* Entry: 108fd4300; end: 108fd430f; -[SCListSectionExpansionTracker hasMoreElements] */

bool FUN_108fd4300(long param_1)

{
  return *(ulong *)(param_1 + 0x38) < *(ulong *)(param_1 + 0x30);
}



/* Entry: 108fd4310; end: 108fd436f; -[SCListSectionExpansionTracker setNumberOfExpansions:] */

void FUN_108fd4310(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_3 != *(ulong *)(param_1 + 0x28)) {
    if (*(ulong *)(param_1 + 0x10) < *(ulong *)(param_1 + 0x30)) {
      uVar3 = *(ulong *)(param_1 + 0x18);
      if (uVar3 == 0) {
        uVar2 = 1;
      }
      else {
        uVar1 = *(ulong *)(param_1 + 0x30) - *(long *)(param_1 + 8);
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = uVar1 / uVar3;
        }
        if (uVar1 != uVar2 * uVar3) {
          uVar2 = uVar2 + 1;
        }
      }
    }
    else {
      uVar2 = 0;
    }
    if (param_3 <= uVar2) {
      uVar2 = param_3;
    }
    *(ulong *)(param_1 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bee0b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateStatusWithNumberOfElement_112595c70)
    ;
    return;
  }
  return;
}



/* Entry: 108fd4370; end: 108fd43b3; -[SCListSectionExpansionTracker numberOfExpansionsWithOneMoreExpansion:] */

long FUN_108fd4370(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bfd9320();
  if ((int)lVar1 == 0) {
    if ((param_3 & 1) == 0) {
      lVar1 = *(long *)(param_1 + 0x38);
    }
    else {
      lVar1 = 0;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28) + 1;
  }
  return lVar1;
}



/* Entry: 108fd43b4; end: 108fd43b7; -[SCListSectionExpansionTracker numberOfExpandedElementsWithNumberOfAllElements:numberOfExpansions:] */

void FUN_108fd43b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be65530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__numberOfExpandedElementsWithNum_112576ee8);
  return;
}



/* Entry: 108fd43b8; end: 108fd43c3; -[SCListSectionExpansionTracker numberOfExpandedElementsWithNumberOfExpansions:] */

void FUN_108fd43b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ded30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_numberOfExpandedElementsWithNumb_112615560,
             *(undefined8 *)(param_1 + 0x30),param_3);
  return;
}



/* Entry: 108fd43c4; end: 108fd442b; -[SCListSectionExpansionTracker _updateStatusWithNumberOfElements] */

void FUN_108fd43c4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  func_0x00010be65520(param_1,param_2,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x28));
  *(ulong *)(param_1 + 0x38) = uVar3;
  if (*(ulong *)(param_1 + 0x10) < uVar3) {
    uVar1 = *(ulong *)(param_1 + 0x18);
    if (uVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar3 = uVar3 - *(long *)(param_1 + 8);
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar3 / uVar1;
      }
      if (uVar3 != uVar2 * uVar1) {
        uVar2 = uVar2 + 1;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  *(ulong *)(param_1 + 0x28) = uVar2;
  return;
}



/* Entry: 108fd442c; end: 108fd4467; -[SCListSectionExpansionTracker _numberOfExpandedElementsWithNumberOfAllElements:numberOfExpansions:] */

ulong FUN_108fd442c(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  if (param_4 != 0) {
    uVar1 = param_3;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar1 = *(long *)(param_1 + 8) + *(long *)(param_1 + 0x18) * param_4;
    }
    if (param_3 <= uVar1) {
      uVar1 = param_3;
    }
    return uVar1;
  }
  if (*(ulong *)(param_1 + 0x10) < param_3) {
    param_3 = *(ulong *)(param_1 + 8);
  }
  return param_3;
}



/* Entry: 108fd4468; end: 108fd446f; -[SCListSectionExpansionTracker numberOfExpansions] */

undefined8 FUN_108fd4468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108fd4470; end: 108fd4477; -[SCListSectionExpansionTracker setHasMoreElements:] */

void FUN_108fd4470(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 108fd4478; end: 108fd447f; -[SCListSectionExpansionTracker numberOfAllElements] */

undefined8 FUN_108fd4478(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108fd4480; end: 108fd4487; -[SCListSectionExpansionTracker setNumberOfAllElements:] */

void FUN_108fd4480(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108fd4488; end: 108fd448f; -[SCListSectionExpansionTracker numberOfExpandedElements] */

undefined8 FUN_108fd4488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108fd4490; end: 108fd4497; -[SCListSectionExpansionTracker setNumberOfExpandedElements:] */

void FUN_108fd4490(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 108fd4498; end: 108fd456f;  */

void FUN_108fd4498(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  double dStack_38;
  
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  if (param_1 != 0.0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc0000000;
    pcStack_48 = FUN_108fd4570;
    puStack_40 = &UNK_110ad1e78;
    uVar1 = param_3;
    dStack_38 = param_1;
    func_0x000107c31908(param_3,&puStack_58);
    func_0x00010c1bff00(param_2);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x000107c31908(param_3,&PTR___NSConcreteGlobalBlock_110ad1eb8);
    func_0x00010c17eb60(param_2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108fd4570; end: 108fd45f3;  */

void FUN_108fd4570(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c09ea00(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 / *(double *)(param_2 + 0x20),puVar1,PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 108fd45f4; end: 108fd46a3; -[SCCollectionViewQueryStateAwareSupplementaryViewProvider updateWithQueryResultState:canReloadFreshData:] */

void FUN_108fd45f4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined1 *)(param_1 + 0x10) = param_4;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108fd46a4;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108fd46a4; end: 108fd46cf;  */

void FUN_108fd46a4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fd46d0; end: 108fd47a3; -[SCCollectionViewQueryStateAwareSupplementaryViewProvider setSupplementaryViewModels:] */

void FUN_108fd46d0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(ulong *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar5);
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c3ec8;
  _objc_opt_class(PTR_PTR_1126c3ec8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c1f92e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fd47a4; end: 108fd48df; -[SCCollectionViewQueryStateAwareSupplementaryViewProvider setSectionHeaderModel:] */

void FUN_108fd47a4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x28);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_108fd48a8;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(ulong *)(param_1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108fd48e0;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x000107c312cc("APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
LAB_108fd48a8:
  _objc_release(param_3);
  return;
}



/* Entry: 108fd48e0; end: 108fd490b;  */

void FUN_108fd48e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fd490c; end: 108fd4913; -[SCCollectionViewQueryStateAwareSupplementaryViewProvider sectionHeaderDisplayStrategy] */

void FUN_108fd490c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_displayStrategy_1125bf2f0);
  return;
}



/* Entry: 108fd4914; end: 108fd49df; -[SCCollectionViewQueryStateAwareSupplementaryViewProvider viewClassesForSupplementaryViewsByElementKind] */

void FUN_108fd4914(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &puStack_30;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_retain(ppuVar5);
    ppuVar2 = ppuVar5;
    func_0x00010c0720c0();
    if ((int)ppuVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar1 + 0x20;
      _objc_loadWeakRetained();
      puVar3 = puVar6;
      func_0x00010c1565c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126dcd78;
      _objc_opt_class(PTR_PTR_1126dcd78);
      puVar4 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar6);
      puVar6 = puVar3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar6 = (undefined *)0x0;
      }
      _objc_retain(puVar6);
      _objc_release(puVar3);
      func_0x00010bedf320(puVar1);
    }
    _objc_release(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108fd49e0; end: 108fd4abb; -[SCCollectionViewQueryStateAwareSupplementaryViewProvider viewForSupplementaryElementOfKind:atIndexInSection:] */

void FUN_108fd49e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + 0x20;
    _objc_loadWeakRetained();
    uVar2 = uVar5;
    func_0x00010c1565c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126dcd78;
    _objc_opt_class(PTR_PTR_1126dcd78);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar5 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar2);
    func_0x00010bedf320(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 108fd4abc; end: 108fd4b07; -[SCCollectionViewQueryStateAwareSupplementaryViewProvider referenceSizeForSupplementaryElementOfKind:atIndexInSection:withWidth:] */

undefined1  [16]
FUN_108fd4abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  func_0x00010c0720c0(param_4,param_3,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00);
  bVar1 = (int)param_4 == 0;
  if (bVar1) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  }
  uVar2 = 0x403e000000000000;
  if (bVar1) {
    uVar2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 108fd4b08; end: 108fd4ba3; -[SCCollectionViewQueryStateAwareSupplementaryViewProvider _updateSectionHeaderViewIfNeeded] */

void FUN_108fd4b08(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c1565e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126dcd78;
  _objc_opt_class(PTR_PTR_1126dcd78);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010bedf320(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fd4ba4; end: 108fd4c0f; -[SCCollectionViewQueryStateAwareSupplementaryViewProvider _updateSectionHeaderView:] */

void FUN_108fd4ba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c156600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(param_3,param_2,uVar1);
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010c20eae0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fd4c10; end: 108fd4c17; -[SCCollectionViewQueryStateAwareSupplementaryViewProvider supplementaryViewModels] */

undefined8 FUN_108fd4c10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108fd4c18; end: 108fd4c2f; -[SCCollectionViewQueryStateAwareSupplementaryViewProvider supplementaryViewProviderDelegate] */

void FUN_108fd4c18(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fd4c30; end: 108fd4c3b; -[SCCollectionViewQueryStateAwareSupplementaryViewProvider setSupplementaryViewProviderDelegate:] */

void FUN_108fd4c30(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 108fd4c3c; end: 108fd4c43; -[SCCollectionViewQueryStateAwareSupplementaryViewProvider sectionHeaderModel] */

undefined8 FUN_108fd4c3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108fd4c44; end: 108fd4c4b; -[SCCollectionViewQueryStateAwareSupplementaryViewProvider sectionHeaderColor] */

undefined8 FUN_108fd4c44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108fd4c4c; end: 108fd4c7b; -[SCCollectionViewQueryStateAwareSupplementaryViewProvider setSectionHeaderColor:] */

void FUN_108fd4c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fd4c7c; end: 108fd4cbf; -[SCCollectionViewQueryStateAwareSupplementaryViewProvider .cxx_destruct] */

void FUN_108fd4c7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108fd4cc0; end: 108fd4f47; -[SCCollectionViewSectionHeaderView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108fd4cc0(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126ffb60;
  puVar1 = &uStack_b8;
  dVar7 = param_1;
  uVar5 = param_2;
  dVar13 = param_3;
  dVar12 = param_4;
  uStack_b8 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11277f310;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c1677c0(0x3fb47ae147ae147b,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11277f314;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c1677c0(0x3fb47ae147ae147b,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f318);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f318) = puVar2;
    _objc_release(uVar5);
    func_0x00010befbb60(puVar1);
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    dVar7 = 11.0;
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4026000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    uStack_a0 = *(undefined8 *)PTR__NSKernAttributeName_110345808;
    ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1920;
    uStack_98 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_90 = puVar3;
    puStack_80 = puVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f31c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f31c) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release();
    uVar5 = param_2;
    dVar13 = param_3;
    dVar12 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar1;
  }
  ___stack_chk_fail();
  puStack_128 = PTR_PTR_1126ffb60;
  puStack_130 = puVar3;
  _objc_msgSendSuper2(&puStack_130,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(puVar3);
  lVar6 = (long)_DAT_11277f318;
  dVar8 = dVar13;
  dVar11 = dVar12;
  func_0x00010c23d5a0(dVar13,dVar12,*(undefined8 *)((long)puVar3 + lVar6));
  dVar14 = dVar7;
  _CGRectGetWidth(dVar7,uVar5,dVar13,dVar12);
  dVar14 = (dVar14 - dVar8) * 0.5;
  _CGRectGetHeight(dVar7,uVar5,dVar13,dVar12);
  dVar12 = (dVar7 - dVar11) * 0.5;
  func_0x00010b816528(dVar14,dVar12,dVar8,dVar11);
  dVar7 = dVar14;
  dVar13 = dVar12;
  func_0x00010c19f0e0(*(undefined8 *)((long)puVar3 + lVar6));
  puVar1 = puVar3;
  func_0x00010c06c0e0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = puVar3;
    func_0x00010c08e840(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(puVar1);
    func_0x00010b816670();
    dVar10 = dVar14;
    _CGRectGetMinX(dVar14,dVar12,dVar8,dVar11);
    dVar15 = dVar10 + -8.0;
    func_0x00010bf20c00(puVar3);
    _CGRectGetHeight();
    dVar9 = 0.0;
    _CGRectGetHeight(0,dVar13,dVar15,dVar7);
    dVar9 = (dVar10 - dVar9) * 0.5;
    puVar1 = puVar3;
    func_0x00010c08e840(puVar3);
    _objc_retainAutoreleasedReturnValue();
    dVar10 = 0.0;
    func_0x00010c19f0e0(0,dVar9,dVar15,dVar7);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010c140c80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    dVar7 = dVar10;
    _objc_release(puVar1);
    func_0x00010b816670();
    dVar13 = dVar7;
    func_0x00010bf20c00(puVar3);
    _CGRectGetWidth();
    _CGRectGetMaxX(dVar14,dVar12,dVar8,dVar11);
    dVar14 = dVar14 + 8.0;
    dVar13 = dVar13 - dVar14;
    func_0x00010bf20c00(puVar3);
    _CGRectGetWidth();
    _CGRectGetWidth(dVar10,dVar9,dVar13,dVar7);
    dVar14 = dVar14 - dVar10;
    func_0x00010bf20c00(puVar3);
    _CGRectGetHeight();
    dVar12 = dVar14;
    _CGRectGetHeight(dVar14,dVar9,dVar13,dVar7);
    func_0x00010c140c80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar14,(dVar10 - dVar12) * 0.5,dVar13,dVar7);
    _objc_release(puVar3);
    puVar1 = puVar3;
  }
  return puVar1;
}



/* Entry: 108fd4f48; end: 108fd51df; -[SCCollectionViewSectionHeaderView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd4f48(double param_1,undefined8 param_2,double param_3,double param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulong uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126ffb60;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar2 = (long)_DAT_11277f318;
  dVar3 = param_3;
  dVar7 = param_4;
  func_0x00010c23d5a0(param_3,param_4,*(undefined8 *)(param_5 + lVar2));
  dVar4 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar10 = (dVar4 - dVar3) * 0.5;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  dVar8 = (param_1 - dVar7) * 0.5;
  func_0x00010b816528(dVar10,dVar8,dVar3,dVar7);
  dVar4 = dVar10;
  dVar9 = dVar8;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar2));
  uVar1 = param_5;
  func_0x00010c06c0e0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_5;
    func_0x00010c08e840(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(uVar1);
    func_0x00010b816670();
    dVar6 = dVar10;
    _CGRectGetMinX(dVar10,dVar8,dVar3,dVar7);
    dVar11 = dVar6 + -8.0;
    func_0x00010bf20c00(param_5);
    _CGRectGetHeight();
    dVar5 = 0.0;
    _CGRectGetHeight(0,dVar9,dVar11,dVar4);
    dVar5 = (dVar6 - dVar5) * 0.5;
    uVar1 = param_5;
    func_0x00010c08e840(param_5);
    _objc_retainAutoreleasedReturnValue();
    dVar6 = 0.0;
    func_0x00010c19f0e0(0,dVar5,dVar11,dVar4);
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c140c80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    dVar4 = dVar6;
    _objc_release(uVar1);
    func_0x00010b816670();
    dVar9 = dVar4;
    func_0x00010bf20c00(param_5);
    _CGRectGetWidth();
    _CGRectGetMaxX(dVar10,dVar8,dVar3,dVar7);
    dVar10 = dVar10 + 8.0;
    dVar9 = dVar9 - dVar10;
    func_0x00010bf20c00(param_5);
    _CGRectGetWidth();
    _CGRectGetWidth(dVar6,dVar5,dVar9,dVar4);
    dVar10 = dVar10 - dVar6;
    func_0x00010bf20c00(param_5);
    _CGRectGetHeight();
    dVar3 = dVar10;
    _CGRectGetHeight(dVar10,dVar5,dVar9,dVar4);
    func_0x00010c140c80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar10,(dVar6 - dVar3) * 0.5,dVar9,dVar4);
    _objc_release(param_5);
  }
  return;
}



/* Entry: 108fd51e0; end: 108fd52f7; -[SCCollectionViewSectionHeaderView setTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd51e0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277f320;
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + lVar5));
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar1;
    _objc_release(uVar4);
    if (param_3 == 0) {
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11277f318),param_2,0);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
      func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c28eda0(param_3,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(puVar2,param_2,uVar1,*(undefined8 *)(param_1 + _DAT_11277f31c));
      func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11277f318),param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(uVar1);
      _objc_release(puVar3);
    }
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fd52f8; end: 108fd537f; -[SCCollectionViewSectionHeaderView setStyleColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd52f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f324);
  *(undefined8 *)(param_1 + _DAT_11277f324) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11277f310),param_2,param_3);
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11277f314),param_2,param_3);
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11277f318),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fd5380; end: 108fd53f3; -[SCCollectionViewSectionHeaderView hitTest:withEvent:] */

void FUN_108fd5380(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_1126ffb60;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108fd53f4; end: 108fd555b; -[SCCollectionViewSectionHeaderView animationLayers] */

void FUN_108fd53f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = param_1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  func_0x00010bf0a0e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c2711a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28eda0(uVar1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c2711a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c08fa60();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108fd555c;
  puStack_68 = &UNK_110a1af00;
  uStack_60 = param_1;
  puStack_58 = puVar3;
  _objc_retain(puVar3);
  func_0x00010bf98040(uVar2,param_2,0,uVar6,2,&puStack_80);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar1);
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puStack_58);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108fd555c; end: 108fd56df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd555c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  
  puVar1 = PTR_PTR_1126dcd80;
  if (param_6 != 0) {
    _objc_retain(param_6);
    _objc_alloc_init(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e840();
    _objc_release(param_6);
    puVar3 = puVar1;
    func_0x00010c26c2e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e7c0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010befa120(*(undefined8 *)(param_5 + 0x28));
    puVar2 = puVar1;
    func_0x00010c26c2e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    dVar5 = 1.79769313486232e+308;
    func_0x00010bf20bc0(0x7fefffffffffffff,0x7fefffffffffffff);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c271420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    func_0x00010c19f0e0(0,(dVar5 - (double)(long)param_4) * 0.5,(long)param_3,puVar1);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 108fd56e0; end: 108fd5aaf; -[SCCollectionViewSectionHeaderView animateIn] */

void FUN_108fd56e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c167fc0(param_1,param_2,1);
  lVar3 = param_1;
  func_0x00010c08e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c140c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  dVar8 = 1.0;
  func_0x00010c1677c0();
  _objc_release(lVar3);
  func_0x00010bf20c00(param_1);
  _CGRectGetMidX();
  dVar11 = dVar8;
  func_0x00010bf20c00(param_1);
  _CGRectGetHeight();
  dVar11 = (dVar11 + -0.5) * 0.5;
  lVar3 = param_1;
  func_0x00010c08e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0;
  uVar10 = 0x3fe0000000000000;
  func_0x00010c19f0e0(dVar8,dVar11,0,0x3fe0000000000000);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c08e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  lVar4 = param_1;
  func_0x00010c140c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar8,dVar11,uVar9,uVar10);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf03d80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  lVar4 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c013de0();
  _objc_release(lVar4);
  func_0x00010befbb60(param_1,param_2,puVar5);
  uVar9 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(lVar3);
  lVar4 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_150,auStack_108,0x10);
  if (lVar4 != 0) {
    lVar6 = *plStack_140;
    do {
      lVar7 = 0;
      do {
        if (*plStack_140 != lVar6) {
          _objc_enumerationMutation(lVar3);
        }
        uVar10 = *(undefined8 *)(lStack_148 + lVar7 * 8);
        func_0x00010befbb60(puVar5,param_2,uVar10);
        func_0x00010bf20c00(puVar5);
        _CGRectGetMidX();
        func_0x00010bf345e0(uVar10);
        func_0x00010c17a6a0(uVar9,uVar10);
        uVar9 = 0;
        func_0x00010c1677c0(uVar10);
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_150,auStack_108,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_108fd5ab0;
  puStack_160 = &UNK_110842e18;
  lStack_158 = param_1;
  func_0x00010bf03440(0x3fc999999999999a,0x3fc3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,0,&puStack_178,0);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_1a8 = puVar1;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_108fd5b20;
  puStack_190 = &UNK_110841f80;
  puStack_1d8 = puVar1;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_108fd5c78;
  puStack_1c0 = &UNK_110848bd8;
  puStack_1b8 = puVar5;
  lStack_1b0 = param_1;
  lStack_188 = lVar3;
  lStack_180 = param_1;
  _objc_retain(puVar5);
  _objc_retain(lVar3);
  func_0x00010bf03460(0x3fd999999999999a,0x3fa999999999999a,0x3feccccccccccccd,0,puVar2,param_2,2,
                      &puStack_1a8,&puStack_1d8);
  _objc_release(puStack_1b8);
  _objc_release(lStack_188);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(undefined8 *)(lVar3 + 0x20);
  func_0x00010c08e840(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3fb47ae147ae147b);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(lVar3 + 0x20);
  func_0x00010c140c80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3fb47ae147ae147b);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 108fd5ab0; end: 108fd5b1f;  */

void FUN_108fd5ab0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08e840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3fb47ae147ae147b);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c140c80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3fb47ae147ae147b);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fd5b20; end: 108fd5c77;  */

void FUN_108fd5b20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_120;
    dVar7 = 0.0;
    do {
      lVar5 = 0;
      do {
        if (*plStack_120 != lVar4) {
          _objc_enumerationMutation(lVar2);
        }
        uVar3 = *(undefined8 *)(lStack_128 + lVar5 * 8);
        func_0x00010bfb68e0(uVar3);
        dVar6 = dVar7;
        func_0x00010c19f0e0(dVar7,uVar3);
        func_0x00010bfb68e0(uVar3);
        _CGRectGetWidth();
        dVar7 = dVar7 + dVar6 + -0.5;
        func_0x00010c1677c0(0x3ff0000000000000,uVar3);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  func_0x00010c167fc0(*(undefined8 *)(param_1 + 0x28),param_2,0);
  func_0x00010c1cbe20(*(undefined8 *)(param_1 + 0x28));
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c08cdc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12c960(*(undefined8 *)(lVar1 + 0x20));
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  func_0x00010c271420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108fd5c78; end: 108fd5cbb;  */

void FUN_108fd5c78(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c271420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fd5cbc; end: 108fd5fd7; -[SCCollectionViewSectionHeaderView animateOut:] */

void FUN_108fd5cbc(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined1 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c167fc0(param_1,param_2,1);
  lVar2 = param_1;
  func_0x00010bf03d80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  lVar4 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c013de0();
  _objc_release(lVar4);
  func_0x00010befbb60(param_1,param_2,puVar3);
  lVar4 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  dVar8 = 0.0;
  func_0x00010c1677c0(0);
  _objc_release(lVar4);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(lVar2);
  lVar4 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_140,auStack_f8,0x10);
  if (lVar4 != 0) {
    lVar6 = *plStack_130;
    do {
      lVar7 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        uVar5 = *(undefined8 *)(lStack_138 + lVar7 * 8);
        func_0x00010befbb60(puVar3,param_2,uVar5);
        func_0x00010bfb68e0(uVar5);
        dVar9 = dVar8;
        func_0x00010c19f0e0(dVar8,uVar5);
        func_0x00010bfb68e0(uVar5);
        _CGRectGetWidth();
        dVar8 = dVar8 + dVar9 + -0.5;
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_140,auStack_f8,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar2);
  puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
  uVar5 = 0x30004;
  if (param_3 == 0) {
    uVar5 = 4;
  }
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_108fd5fd8;
  puStack_150 = &UNK_110842e18;
  lStack_148 = param_1;
  func_0x00010bf03440(0x3fd1eb851eb851ec,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,uVar5,
                      &puStack_168,0);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_198 = puStack_1c0;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_108fd608c;
  puStack_180 = &UNK_110841f80;
  lStack_178 = lVar2;
  _objc_retain(puVar3);
  puStack_170 = puVar3;
  _objc_retain(lVar2);
  func_0x00010bf03440(0x3fcd70a3d70a3d71,0,puVar1,param_2,uVar5,&puStack_198,0);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uStack_1b8 = 0xc2000000;
  pcStack_1b0 = FUN_108fd61bc;
  puStack_1a8 = &UNK_110842e18;
  puStack_1f8 = puStack_1c0;
  uStack_1f0 = 0xc2000000;
  uStack_1e8 = 0x108fd6338;
  puStack_1e0 = &UNK_1109446f8;
  uStack_1c8 = (undefined1)param_3;
  lStack_1d8 = param_1;
  puStack_1d0 = puVar3;
  lStack_1a0 = param_1;
  _objc_retain(puVar3);
  dVar8 = 0.4;
  func_0x00010bf02ee0(0x3fd999999999999a,0,puVar1,param_2,4,&puStack_1c0,&puStack_1f8);
  _objc_release(puStack_1d0);
  _objc_release(puStack_170);
  _objc_release(lStack_178);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf20c00(*(undefined8 *)(lVar2 + 0x20));
  _CGRectGetMidX();
  dVar9 = dVar8;
  func_0x00010bf20c00(*(undefined8 *)(lVar2 + 0x20));
  _CGRectGetHeight();
  dVar9 = dVar9 * 0.5 + -0.5;
  uVar5 = *(undefined8 *)(lVar2 + 0x20);
  func_0x00010c140c80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar8,dVar9,0x4000000000000000,0x3fe0000000000000);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(lVar2 + 0x20);
  func_0x00010c08e840(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar8 + -2.0,dVar9,0x4000000000000000,0x3fe0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 108fd5fd8; end: 108fd608b;  */

void FUN_108fd5fd8(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x20));
  _CGRectGetMidX();
  dVar2 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x20));
  _CGRectGetHeight();
  dVar2 = dVar2 * 0.5 + -0.5;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c140c80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,dVar2,0x4000000000000000,0x3fe0000000000000);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c08e840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1 + -2.0,dVar2,0x4000000000000000,0x3fe0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fd608c; end: 108fd61bb;  */

void FUN_108fd608c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
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
  uVar7 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(undefined8 *)(lStack_128 + lVar6 * 8);
        func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x28));
        _CGRectGetMidX();
        func_0x00010bf345e0(uVar4);
        func_0x00010c17a6a0(uVar7,uVar4);
        uVar7 = 0;
        func_0x00010c1677c0(uVar4);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_108fd6278;
  puStack_180 = &UNK_110842e18;
  uStack_178 = *(undefined8 *)(lVar3 + 0x20);
  func_0x00010bef95a0(0,0x3fd999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_198);
  puStack_1c0 = puVar1;
  uStack_1b8 = 0xc2000000;
  uStack_1b0 = 0x108fd62d8;
  puStack_1a8 = &UNK_110842e18;
  uStack_1a0 = *(undefined8 *)(lVar3 + 0x20);
  func_0x00010bef95a0(0x3fd999999999999a,0x3fe3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,&puStack_1c0);
  return;
}



/* Entry: 108fd61bc; end: 108fd6277;  */

void FUN_108fd61bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108fd6278;
  puStack_50 = &UNK_110842e18;
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef95a0(0,0x3fd999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x108fd62d8;
  puStack_78 = &UNK_110842e18;
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef95a0(0x3fd999999999999a,0x3fe3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,&puStack_90);
  return;
}



/* Entry: 108fd6278; end: 108fd6393;  */

void FUN_108fd6278(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08e840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c140c80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fd6394; end: 108fd63a3; -[SCCollectionViewSectionHeaderView title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fd6394(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f320);
}



/* Entry: 108fd63a4; end: 108fd63b3; -[SCCollectionViewSectionHeaderView styleColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fd63a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f324);
}



/* Entry: 108fd63b4; end: 108fd63c3; -[SCCollectionViewSectionHeaderView leftLine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fd63b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f310);
}



/* Entry: 108fd63c4; end: 108fd6403; -[SCCollectionViewSectionHeaderView setLeftLine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd63c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f310;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fd6404; end: 108fd6413; -[SCCollectionViewSectionHeaderView rightLine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fd6404(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f314);
}



/* Entry: 108fd6414; end: 108fd6453; -[SCCollectionViewSectionHeaderView setRightLine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd6414(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f314;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fd6454; end: 108fd6463; -[SCCollectionViewSectionHeaderView titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fd6454(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f318);
}



/* Entry: 108fd6464; end: 108fd64a3; -[SCCollectionViewSectionHeaderView setTitleLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd6464(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f318;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fd64a4; end: 108fd64b3; -[SCCollectionViewSectionHeaderView textAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fd64a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f31c);
}



/* Entry: 108fd64b4; end: 108fd64f3; -[SCCollectionViewSectionHeaderView setTextAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd64b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f31c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fd64f4; end: 108fd6503; -[SCCollectionViewSectionHeaderView isAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108fd64f4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277f30c);
}



/* Entry: 108fd6504; end: 108fd6513; -[SCCollectionViewSectionHeaderView setAnimating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd6504(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277f30c) = param_3;
  return;
}



/* Entry: 108fd6514; end: 108fd6593; -[SCCollectionViewSectionHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd6514(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277f31c,0);
  _objc_storeStrong(param_1 + _DAT_11277f318,0);
  _objc_storeStrong(param_1 + _DAT_11277f314,0);
  _objc_storeStrong(param_1 + _DAT_11277f310,0);
  _objc_storeStrong(param_1 + _DAT_11277f324,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f320,0);
  return;
}


