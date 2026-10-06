/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066ff9bc; end: 1066fff0f; -[SCLensExplorerCategoryPageLayoutProvider _compositionalSectionFromSection:headerEnabled:environment:orthogonalScrollHandler:] */

void FUN_1066ff9bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,int param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  char *pcStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = param_7;
  func_0x00010c156280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084a80();
  func_0x00010b816218();
  func_0x00010b816218();
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_1066fff10;
  uStack_b8 = 0x1066fff20;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_1066fff10;
  uStack_e8 = 0x1066fff20;
  uStack_e0 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_1066fff10;
  uStack_118 = 0x1066fff20;
  uStack_110 = 0;
  puStack_160 = &uStack_168;
  uStack_168 = 0;
  uStack_158 = 0x3032000000;
  pcStack_150 = FUN_1066fff10;
  uStack_148 = 0x1066fff20;
  uStack_140 = 0;
  puStack_190 = &uStack_198;
  uStack_198 = 0;
  uStack_188 = 0x3032000000;
  pcStack_180 = FUN_1066fff10;
  uStack_178 = 0x1066fff20;
  uStack_170 = 0;
  puStack_1d0 = &uStack_1d8;
  uStack_1d8 = 0;
  uVar4 = 0x4010000000;
  uStack_1c8 = 0x4010000000;
  pcStack_1c0 = "";
  func_0x00010c156140(uVar1);
  uStack_1b8 = uVar4;
  uStack_1b0 = param_2;
  uStack_1a8 = param_3;
  uStack_1a0 = param_4;
  func_0x00010c084e80();
  uVar4 = param_9;
  func_0x00010bf4ab60(param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8cfc0();
  _objc_release(uVar4);
  uVar4 = param_7;
  func_0x00010c1556c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c130180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c097520();
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126ccab0;
  uVar4 = param_7;
  func_0x00010c1556c0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c130180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c097500();
  func_0x00010c084ac0(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010c08d1e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(param_7);
  _objc_retain(uVar1);
  _objc_retain(param_10);
  func_0x00010c0bd3a0(uVar4);
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (param_8 == 0) {
    param_5 = 0;
  }
  else {
    func_0x00010bde4160();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 != 0) {
      func_0x00010befa120(puVar3);
    }
  }
  func_0x00010c173980(puStack_190[5]);
  func_0x00010c20fe20(puStack_190[5]);
  uVar4 = puStack_190[5];
  _objc_retain(uVar4);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(param_10);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_1d8,8);
  __Block_object_dispose(&uStack_198,8);
  _objc_release(uStack_170);
  __Block_object_dispose(&uStack_168,8);
  _objc_release(uStack_140);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1066fff10; end: 1066fff27;  */

void FUN_1066fff10(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1066fff28; end: 1067005d3;  */

void FUN_1066fff28(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  
  puVar4 = PTR__OBJC_CLASS___NSCollectionLayoutSize_1126cd3b8;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSCollectionLayoutDimension_1126cd3c0;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    func_0x00010beec720(*(undefined8 *)(param_1 + 0x58));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf99720(*(undefined8 *)(param_1 + 0x60),
                        PTR__OBJC_CLASS___NSCollectionLayoutDimension_1126cd3c0);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSCollectionLayoutDimension_1126cd3c0;
  if (*(char *)(param_1 + 0x81) == '\x01') {
    func_0x00010beec720(*(undefined8 *)(param_1 + 0x78));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf99720(*(undefined8 *)(param_1 + 0x68),
                        PTR__OBJC_CLASS___NSCollectionLayoutDimension_1126cd3c0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c23d760();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar6 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar4;
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSCollectionLayoutItem_1126cd3c8;
  func_0x00010c084ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar6 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar4;
  _objc_release(uVar6);
  puVar4 = PTR__OBJC_CLASS___NSCollectionLayoutSize_1126cd3b8;
  puVar2 = PTR__OBJC_CLASS___NSCollectionLayoutDimension_1126cd3c0;
  func_0x00010bfb6800(0x3ff0000000000000,PTR__OBJC_CLASS___NSCollectionLayoutDimension_1126cd3c0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSCollectionLayoutDimension_1126cd3c0;
  if (*(char *)(param_1 + 0x81) == '\x01') {
    dVar11 = *(double *)(param_1 + 0x78);
    func_0x00010beec720();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    dVar11 = *(double *)(param_1 + 0x68);
    func_0x00010bf99720(PTR__OBJC_CLASS___NSCollectionLayoutDimension_1126cd3c0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c23d760();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar6 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar4;
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSCollectionLayoutGroup_1126cd3d0;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe41e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar6 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar4;
  _objc_release(uVar6);
  _objc_release(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSCollectionLayoutSpacing_1126cd3d8;
  func_0x00010c0ce460(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bfb2300(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1adf60(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSCollectionLayoutSection_1126cd3e0;
  func_0x00010c1569e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar6 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar4;
  _objc_release(uVar6);
  lVar8 = *(long *)(param_1 + 0x20);
  func_0x00010c299060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  if (lVar8 == 0) {
    func_0x00010c0ce460();
  }
  else {
    func_0x00010c299060();
    fVar10 = SUB84(dVar11,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar11 = (double)fVar10;
    _objc_release(uVar6);
  }
  _objc_release(lVar8);
  func_0x00010c1adf40(dVar11,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
  lVar7 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  dVar11 = *(double *)(lVar7 + 0x20);
  dVar12 = *(double *)(lVar7 + 0x28);
  lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
  func_0x00010c181fe0(dVar11,dVar12,*(undefined8 *)(lVar7 + 0x30),*(undefined8 *)(lVar7 + 0x38));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010c23d1e0(*(undefined8 *)(lVar8 + 0x20));
    puVar4 = PTR__OBJC_CLASS___NSCollectionLayoutSize_1126cd3b8;
    bVar1 = false;
    if ((dVar11 == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar1 = false, !NAN(dVar12) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar1 = dVar12 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (bVar1) {
      dVar12 = *(double *)(lVar8 + 0x78);
    }
    puVar2 = PTR__OBJC_CLASS___NSCollectionLayoutDimension_1126cd3c0;
    if (*(char *)(lVar8 + 0x98) == '\x01') {
      func_0x00010beec720(*(undefined8 *)(lVar8 + 0x80));
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf99720(PTR__OBJC_CLASS___NSCollectionLayoutDimension_1126cd3c0);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR__OBJC_CLASS___NSCollectionLayoutDimension_1126cd3c0;
    if (*(char *)(lVar8 + 0x99) == '\x01') {
      func_0x00010beec720(*(undefined8 *)(lVar8 + 0x90));
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf99720(dVar12,PTR__OBJC_CLASS___NSCollectionLayoutDimension_1126cd3c0);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c23d760();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(lVar8 + 0x40) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar4 = PTR__OBJC_CLASS___NSCollectionLayoutItem_1126cd3c8;
    func_0x00010c084ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(lVar8 + 0x48) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar4;
    _objc_release(uVar6);
    uVar9 = *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x40) + 8) + 0x28);
    lVar7 = *(long *)(*(long *)(lVar8 + 0x50) + 8);
    _objc_retain(uVar9);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x28) = uVar9;
    _objc_release(uVar6);
    puVar4 = PTR__OBJC_CLASS___NSCollectionLayoutGroup_1126cd3d0;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe41e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(lVar8 + 0x58) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar2);
    puVar4 = PTR__OBJC_CLASS___NSCollectionLayoutSpacing_1126cd3d8;
    func_0x00010c0ce460(*(undefined8 *)(lVar8 + 0x28));
    func_0x00010bfb2300(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1adf60(*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x58) + 8) + 0x28));
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSCollectionLayoutSection_1126cd3e0;
    func_0x00010c1569e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(lVar8 + 0x60) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar4;
    _objc_release(uVar6);
    lVar7 = *(long *)(*(long *)(lVar8 + 0x68) + 8);
    func_0x00010c181fe0(*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x28),
                        *(undefined8 *)(lVar7 + 0x30),*(undefined8 *)(lVar7 + 0x38),
                        *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x60) + 8) + 0x28));
    func_0x00010be6e680(*(undefined8 *)(lVar8 + 0x30));
    func_0x00010c1d6940(*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x60) + 8) + 0x28));
    func_0x00010c0ce460(*(undefined8 *)(lVar8 + 0x28));
    func_0x00010c1adf40(*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x60) + 8) + 0x28));
    lVar7 = *(long *)(lVar8 + 0x38);
    _objc_retain(lVar7);
    func_0x00010c223aa0(*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x60) + 8) + 0x28));
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return;
    }
    ___stack_chk_fail();
    if (*(long *)(lVar7 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001067005e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar7 + 0x20) + 0x10))();
      return;
    }
    return;
  }
  return;
}



/* Entry: 1067005d4; end: 1067005e7;  */

void FUN_1067005d4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001067005e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1067005e8; end: 10670070b;  */

void FUN_1067005e8(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  return;
}



/* Entry: 10670070c; end: 10670081f; -[SCLensExplorerCategoryPageLayoutProvider _compositionalHeaderSupplementaryItem:] */

void FUN_10670070c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  func_0x00010bfdfce0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSCollectionLayoutDimension_1126cd3c0;
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010bfe0980(param_1);
    func_0x00010bf99720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCollectionLayoutDimension_1126cd3c0;
    func_0x00010bfb6800(0x3ff0000000000000,PTR__OBJC_CLASS___NSCollectionLayoutDimension_1126cd3c0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSCollectionLayoutSize_1126cd3b8;
    func_0x00010c23d760(PTR__OBJC_CLASS___NSCollectionLayoutSize_1126cd3b8,param_2,puVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSCollectionLayoutBoundarySupplementaryItem_1126cd3e8;
    lVar4 = param_1;
    func_0x00010c29d2e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20aa0(puVar5,param_2,puVar3,lVar4,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    func_0x00010c1992a0(puVar5,param_2,1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106700820; end: 10670082f; -[SCLensExplorerCategoryPageLayoutProvider _orthogonalScrollingBehaviourFrom:] */

undefined8 FUN_106700820(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 4;
  if (param_3 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 106700830; end: 1067009a3; -[SCLensExplorerCategoryPageLayoutProvider createLensExplorerOrthogonalLayoutWithSectionProvider:] */

void FUN_106700830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  _objc_initWeak(auStack_50,param_3);
  uVar1 = param_1;
  func_0x00010be4ab80();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1067009a4;
  puStack_80 = &UNK_1109364b0;
  _objc_copyWeak(auStack_60,auStack_50);
  _objc_retain(uVar1);
  uStack_78 = uVar1;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  ppuVar2 = &puStack_98;
  uStack_70 = param_3;
  uStack_68 = param_1;
  _objc_retainBlock(ppuVar2);
  puVar3 = PTR_PTR_1126cd3a8;
  _objc_alloc(PTR_PTR_1126cd3a8);
  func_0x00010c043560(0);
  _objc_release(ppuVar2);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067009a4; end: 106700acb;  */

void FUN_1067009a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
  }
  else {
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar6);
    }
    else {
      lVar3 = lVar1;
      func_0x00010c156b00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c14da60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar4 == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar6);
      }
      else {
        uVar5 = *(ulong *)(lVar2 + 0x18);
        func_0x00010c155ee0();
        if ((uVar5 & 1) == 0) {
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c156b00(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          _objc_release(uVar6);
        }
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010be4aba0(uVar6);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106700acc; end: 106700b27; -[SCLensExplorerCategoryPageLayoutProvider _lensExplorerLayouFallBackSection] */

void FUN_106700acc(void)

{
  _objc_alloc(PTR_PTR_1126cd3f0);
  func_0x00010c0428a0(0,0,*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),
                      *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106700b28; end: 106700fab; -[SCLensExplorerCategoryPageLayoutProvider _lensExplorerLayoutSectionFromSection:headerEnabled:] */

void FUN_106700b28(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,int param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  
  _objc_retain(param_7);
  lVar1 = param_7;
  func_0x00010c156280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_7;
  func_0x00010c262dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  uStack_e8 = 0;
  uStack_d8 = 0x2020000000;
  uStack_d0 = 0;
  uStack_118 = 0;
  dVar9 = 1.02270250269256e-312;
  uStack_108 = 0x3032000000;
  pcStack_100 = FUN_1066fff10;
  uStack_f8 = 0x1066fff20;
  puStack_f0 = PTR____NSArray0__struct_11034ab48;
  lVar4 = lVar1;
  puStack_110 = &uStack_118;
  puStack_e0 = &uStack_e8;
  puStack_c0 = &uStack_c8;
  func_0x00010c08d1e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_10670105c;
  puStack_130 = &UNK_110860b78;
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  uStack_170 = 0x106701138;
  puStack_168 = &UNK_110934a48;
  puStack_160 = &uStack_c8;
  puStack_158 = &uStack_118;
  puStack_150 = &uStack_e8;
  puStack_128 = &uStack_c8;
  puStack_120 = &uStack_118;
  func_0x00010c0bd3a0();
  _objc_release(lVar4);
  func_0x00010c084a80(lVar1);
  dVar10 = dVar9;
  dVar16 = param_2;
  func_0x00010b816218();
  dVar11 = dVar10;
  func_0x00010b816218();
  dVar12 = dVar11;
  func_0x00010c156140(lVar1);
  func_0x00010b816264();
  dVar13 = dVar12;
  if (param_8 == 0) {
    param_5 = 0;
  }
  else {
    func_0x00010bfdfce0();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 != 0) {
      puVar7 = PTR_PTR_1126cd400;
      _objc_alloc(PTR_PTR_1126cd400);
      lVar4 = param_5;
      func_0x00010c29d2e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0980(param_5);
      func_0x00010c00f200(puVar7);
      _objc_release(lVar4);
      goto LAB_106700d28;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_106700d28:
  puStack_198 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x2020000000;
  uStack_188 = 0;
  lVar4 = param_7;
  func_0x00010c156280(param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08d1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd3a0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = lVar1;
  func_0x00010c299060();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    func_0x00010c0ce460(lVar1);
    dVar17 = dVar13;
  }
  else {
    lVar5 = lVar1;
    func_0x00010c299060(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    fVar8 = SUB84(dVar13,0);
    _objc_release(lVar5);
    dVar17 = (double)fVar8;
  }
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126cd3f0;
  _objc_alloc(PTR_PTR_1126cd3f0);
  func_0x00010b816218();
  dVar14 = dVar13;
  func_0x00010c0ce460(lVar1);
  dVar15 = dVar14;
  func_0x00010b816218();
  lVar4 = param_7;
  func_0x00010bfe5f60(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0428a0((double)(long)(dVar17 * dVar13) / dVar13,
                      (double)(long)(dVar14 * dVar15) / dVar15,
                      (double)(long)(dVar9 * dVar10) / dVar10,
                      (double)(long)(param_2 * dVar11) / dVar11,dVar12,dVar16,param_3,param_4,puVar6
                     );
  _objc_release(lVar4);
  __Block_object_dispose(&uStack_1a0,8);
  _objc_release(param_5);
  _objc_release(puVar7);
  __Block_object_dispose(&uStack_118,8);
  _objc_release(puStack_f0);
  __Block_object_dispose(&uStack_e8,8);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106700fac; end: 10670105b;  */

void FUN_106700fac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cd3f8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c29d2e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c13fda0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bfc0(param_2);
  _objc_release(param_2);
  func_0x00010c061c00(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10670105c; end: 10670120f;  */

void FUN_10670105c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  puVar1 = PTR_PTR_1126ccf00;
  func_0x00010c155e20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccf00;
  func_0x00010bfa14a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar3;
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(*(long *)(*(long *)(puVar1 + 0x20) + 8) + 0x18) = 1;
  puVar2 = PTR_PTR_1126ccf00;
  func_0x00010beef360();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(puVar1 + 0x28) + 8) + 0x28);
  *(undefined **)(*(long *)(*(long *)(puVar1 + 0x28) + 8) + 0x28) = puVar3;
  _objc_release(uVar5);
  _objc_release();
  *(bool *)(*(long *)(*(long *)(puVar1 + 0x30) + 8) + 0x18) = param_2 == 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010be6e6a0();
  *(undefined8 *)(*(long *)(*(long *)(puVar2 + 0x28) + 8) + 0x18) = uVar5;
  return;
}



/* Entry: 106701210; end: 106701243;  */

void FUN_106701210(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be6e6a0(uVar1,param_2,param_2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 106701244; end: 10670124f; -[SCLensExplorerCategoryPageLayoutProvider _orthogonalSectionScrollBehaviorFrom:] */

bool FUN_106701244(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 106701250; end: 10670127f; -[SCLensExplorerCategoryPageLayoutProvider .cxx_destruct] */

void FUN_106701250(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106701280; end: 1067013b3; -[SCLensExplorerCategoryPageProvider initWithLensExplorerFactory:uiConfiguration:autoSelectionBehavior:performerProvider:] */

undefined1 *
FUN_106701280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f2a10;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf6d9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25df60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067013b4; end: 10670174b; -[SCLensExplorerCategoryPageProvider pageForCategoryId:categoryObservable:isFullPage:isLensCollectionCategoryPage:] */

void FUN_1067013b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfb4cc0(uVar16);
  puVar2 = PTR_PTR_1126cd408;
  _objc_alloc();
  func_0x00010c04e9e0();
  lVar3 = param_1;
  func_0x00010bddc0e0(param_1,param_2,*(undefined8 *)(param_1 + 8),param_5);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10670174c;
  puStack_70 = &UNK_110936520;
  uVar16 = param_4;
  lStack_68 = lVar3;
  func_0x00010bfb2660(param_4,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = uVar16;
  func_0x00010c11ac40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  puVar5 = PTR_PTR_1126cd410;
  _objc_alloc();
  uVar16 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b3860(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027720(puVar5,param_2,uVar16,param_3,uVar4,param_5,param_6);
  _objc_release(uVar16);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar6;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar7 = PTR_PTR_1126cd418;
  _objc_alloc();
  func_0x00010c02f140();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b8600(uVar6,param_2,&PTR___NSConcreteGlobalBlock_110936550);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126cd420;
  _objc_alloc();
  uVar17 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c093520(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf64740(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 8);
  func_0x00010c15ab20(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022ae0(puVar8,param_2,uVar17,uVar9,uVar4,uVar10,uVar11,uVar6);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  puVar12 = puVar2;
  func_0x00010c137900(puVar2);
  lVar13 = param_1;
  func_0x00010be5eec0(param_1,param_2,param_3,puVar5,puVar7,puVar8,puVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010be06ca0(param_1,param_2,lVar13,*(undefined8 *)(param_1 + 8),uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010be06b80(param_1,param_2,param_3,lVar13,*(undefined8 *)(param_1 + 8),uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beae0e0(param_1,param_2,lVar13,lVar15,lVar14);
  puVar12 = PTR_PTR_1126cd428;
  _objc_alloc(PTR_PTR_1126cd428);
  uVar9 = *(undefined8 *)(param_1 + 8);
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x18);
  func_0x00010bf7fca0();
  func_0x00010bffd040(puVar12,param_2,param_3,uVar9,puVar2,lVar15,lVar14,lVar13,uVar1);
  _objc_release(param_3);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(puVar7);
  _objc_release(uVar16);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10670174c; end: 10670175f;  */

void FUN_10670174c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa3970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_feedConfigurationsForCategory__1125c6800,param_2)
  ;
  return;
}



/* Entry: 106701760; end: 1067018bb; -[SCLensExplorerCategoryPageProvider _mediatorWithCategoryId:loggingColleague:networkMonitoringColleague:itemsTrackingColleague:manualItemsTracking:] */

void FUN_106701760(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c15ab20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c159940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c084a60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c234d80();
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    _objc_release(uVar5);
    uVar5 = 0;
  }
  puVar2 = PTR_PTR_1126cd430;
  _objc_alloc(PTR_PTR_1126cd430);
  func_0x00010bffd080();
  _objc_release(param_6);
  _objc_release(param_5);
  if (param_7 == 0) {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  else {
    puVar3 = PTR_PTR_1126cd438;
    _objc_alloc(PTR_PTR_1126cd438);
    func_0x00010c02a240();
  }
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067018bc; end: 10670191b; -[SCLensExplorerCategoryPageProvider _setupMediator:withFetchingColleague:viewModelColleague:] */

void FUN_1067018bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c125f00(param_3,param_2,param_4);
  func_0x00010c1275e0(param_3,param_2,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10670191c; end: 106701a4f; -[SCLensExplorerCategoryPageProvider _categorySectionsProviderWithFactory:isFullPage:] */

void FUN_10670191c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ccf30;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c1556e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf4b3e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043860(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ccf48;
  _objc_alloc(PTR_PTR_1126ccf48);
  func_0x00010bffd160();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ccf28;
  _objc_alloc(PTR_PTR_1126ccf28);
  uVar2 = param_3;
  func_0x00010bf159a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bff6c80(puVar1,param_2,puVar4,uVar2);
  _objc_release(puVar4);
  _objc_release(uVar2);
  puVar4 = puVar1;
  if (param_4 != 0) {
    puVar4 = PTR_PTR_1126ccf38;
    _objc_alloc(PTR_PTR_1126ccf38);
    func_0x00010bffd160();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106701a50; end: 106701b3f; -[SCLensExplorerCategoryPageProvider _dynamicSectionProviderColleagueWithMediator:factory:sectionConfigurations:] */

void FUN_106701a50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c1556e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010010fab4();
  uVar3 = param_4;
  if ((int)uVar1 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  func_0x00010c124440(uVar3);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126cd440;
  _objc_alloc(PTR_PTR_1126cd440);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c155c60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02a280(puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106701b40; end: 106701c5b; -[SCLensExplorerCategoryPageProvider _dynamicCategoryFetchingColleagueWithCategoryId:mediator:factory:sectionConfigurations:] */

void FUN_106701b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_5;
  func_0x00010c094c20(param_5,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0933e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cd448;
  _objc_alloc(PTR_PTR_1126cd448);
  uVar4 = param_5;
  func_0x00010c11d320(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c03c320(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126cd450;
  _objc_alloc(PTR_PTR_1126cd450);
  func_0x00010c02a260();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106701c5c; end: 106701caf; -[SCLensExplorerCategoryPageProvider .cxx_destruct] */

void FUN_106701c5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106701cb0; end: 106701d53; -[SCLensExplorerPageColleague initWithConentView:notificationPresenter:] */

undefined1 *
FUN_106701cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2a18;
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



/* Entry: 106701d54; end: 106701d5b; -[SCLensExplorerPageColleague showLoadingIndicator] */

void FUN_106701d54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c238150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showLoadingIndicator_11266ba78);
  return;
}



/* Entry: 106701d5c; end: 106701d63; -[SCLensExplorerPageColleague hideLoadingIndicator] */

void FUN_106701d5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe2270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_hideLoadingIndicator_1125d6258);
  return;
}



/* Entry: 106701d64; end: 106701d9f; -[SCLensExplorerPageColleague handleFetchError:] */

void FUN_106701d64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010670dfb8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236fe0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106701da0; end: 106701dcf; -[SCLensExplorerPageColleague .cxx_destruct] */

void FUN_106701da0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106701dd0; end: 106701dd3; -[SCLensExplorerViewControllerV3 addPermissionHandlerNoOpButton] */

void FUN_106701dd0(void)

{
  return;
}



/* Entry: 106701dd4; end: 106701e03; -[SCLensExplorerViewControllerV3 defaultProjectNameV2] */

void FUN_106701dd4(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110dcb5d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110dcb5d8);
  return;
}



/* Entry: 106701e04; end: 106701e33; -[SCLensExplorerViewControllerV3 defaultSubProjectName] */

void FUN_106701e04(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110f82898);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110f82898);
  return;
}



/* Entry: 106701e34; end: 106702057; -[SCLensExplorerViewControllerV3 initWithSearchViewPresenter:categoriesFetcher:pageProvider:cardTransition:actionButtonProvider:studySettings:searchEnabled:accessoryView:styleOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106701e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f2a20;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar4 = (long)_DAT_11274e8a4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e8a8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e8ac;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e8b0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e8b4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e8b8;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274e8bc) = param_9;
    lVar4 = (long)_DAT_11274e8c0;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274e8c4);
    *(undefined **)((long)puVar1 + (long)_DAT_11274e8c4) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274e8c8);
    *(undefined **)((long)puVar1 + (long)_DAT_11274e8c8) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274e8cc) = param_12;
  }
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106702058; end: 1067020d7; -[SCLensExplorerViewControllerV3 viewDidLoad] */

void FUN_106702058(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2a20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beaf8a0(param_1);
  func_0x00010beacf40(param_1);
  func_0x00010beadda0(param_1);
  func_0x00010bead480(param_1);
  func_0x00010beabac0(param_1);
  func_0x00010beaa560(param_1);
  func_0x00010befa7c0(param_1);
  func_0x00010be90ac0(param_1);
  return;
}



/* Entry: 1067020d8; end: 10670218b; -[SCLensExplorerViewControllerV3 viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067020d8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f2a20;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  func_0x00010beab780(param_1);
  func_0x00010c1cbec0(param_1);
  lVar4 = (long)_DAT_11274e8d0;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c159860();
  lVar5 = (long)_DAT_11274e8d4;
  uVar2 = *(ulong *)(param_1 + lVar5);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c159860(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c0dfd40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f22e0();
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 10670218c; end: 106702277; -[SCLensExplorerViewControllerV3 viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670218c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f2a20;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillDisappear__112685438);
  lVar5 = param_1;
  func_0x00010c06d1a0();
  if ((int)lVar5 != 0) {
    lVar5 = (long)_DAT_11274e8a4;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
    func_0x00010c06f880();
    if (iVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf83b00();
      _objc_release(uVar2);
    }
  }
  lVar5 = (long)_DAT_11274e8d0;
  uVar3 = *(ulong *)(param_1 + lVar5);
  func_0x00010c159860();
  lVar6 = (long)_DAT_11274e8d4;
  uVar4 = *(ulong *)(param_1 + lVar6);
  func_0x00010bf529e0();
  if (uVar3 < uVar4) {
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c159860(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2300();
    _objc_release(uVar2);
  }
  func_0x00010c137fe0(param_1);
  return;
}



/* Entry: 106702278; end: 10670227b; -[SCLensExplorerViewControllerV3 preferredStatusBarStyle] */

undefined8 FUN_106702278(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 10670227c; end: 1067022cb; -[SCLensExplorerViewControllerV3 setHeaderItemDelegate:] */

void FUN_10670227c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067022cc; end: 10670230f; -[SCLensExplorerViewControllerV3 headerItemDelegate] */

void FUN_1067022cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106702310; end: 1067024a7; -[SCLensExplorerViewControllerV3 viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106702310(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  long lStack_108;
  undefined *puStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = PTR_PTR_1126f2a20;
  lStack_108 = param_5;
  _objc_msgSendSuper2(&lStack_108,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar7 = (long)_DAT_11274e8d8;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar7));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar7));
  lVar5 = *(long *)(param_5 + _DAT_11274e8d4);
  _objc_retain(lVar5);
  lVar6 = lVar5;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  if (lVar6 == 0) {
    dVar9 = 0.0;
  }
  else {
    dVar9 = 0.0;
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar5);
        }
        uVar2 = *(undefined8 *)(lVar8 * 8);
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19f0e0(dVar9,0,param_3,param_4);
        _objc_release(uVar2);
        dVar9 = param_3 + dVar9;
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
      lVar6 = lVar5;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(lVar5);
  lVar3 = *(long *)(param_5 + lVar7);
  func_0x00010c1827c0(dVar9,param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    lVar6 = (long)_DAT_11274e8dc;
    if (*(long *)(lVar3 + lVar6) == 0) {
      puVar4 = PTR_PTR_1126af080;
      _objc_opt_new();
      uVar2 = *(undefined8 *)(lVar3 + lVar6);
      *(undefined **)(lVar3 + lVar6) = puVar4;
      _objc_release(uVar2);
      func_0x00010c1f8460(*(undefined8 *)(lVar3 + lVar6));
      uVar2 = *(undefined8 *)(lVar3 + lVar6);
      func_0x00010c2162c0(uVar2);
      func_0x00010670dfd0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240(*(undefined8 *)(lVar3 + lVar6));
      _objc_release(uVar2);
      func_0x00010c1f8420(*(undefined8 *)(lVar3 + lVar6));
      func_0x00010c18f820(*(undefined8 *)(lVar3 + lVar6));
      func_0x00010c211340(*(undefined8 *)(lVar3 + lVar6));
      func_0x00010c18b5e0(*(undefined8 *)(lVar3 + lVar6));
      lVar5 = (long)_DAT_11274e8b0;
      iVar1 = (int)*(undefined8 *)(lVar3 + lVar5);
      func_0x00010bfdf000();
      if (iVar1 != 0) {
        uVar2 = *(undefined8 *)(lVar3 + lVar5);
        func_0x00010bfdefe0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c219b60();
        func_0x00010c2194c0(*(undefined8 *)(lVar3 + lVar6));
        func_0x00010c2194e0(*(undefined8 *)(lVar3 + lVar6));
        _objc_release(uVar2);
      }
    }
    uVar2 = *(undefined8 *)(lVar3 + lVar6);
    _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1067024a8; end: 1067025cb; -[SCLensExplorerViewControllerV3 headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067024a8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11274e8dc;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar2 = PTR_PTR_1126af080;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11274e8bc;
    func_0x00010c1f8460(*(undefined8 *)(param_1 + lVar5),param_2,*(undefined1 *)(param_1 + lVar4));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c2162c0(uVar3,param_2,*(undefined1 *)(param_1 + lVar4));
    func_0x00010670dfd0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(*(undefined8 *)(param_1 + lVar5),param_2,uVar3);
    _objc_release(uVar3);
    func_0x00010c1f8420(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
    func_0x00010c18f820(*(undefined8 *)(param_1 + lVar5),param_2,1);
    func_0x00010c211340(*(undefined8 *)(param_1 + lVar5),param_2,1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
    lVar4 = (long)_DAT_11274e8b0;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
    func_0x00010bfdf000();
    if (iVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010bfdefe0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219b60();
      func_0x00010c2194c0(*(undefined8 *)(param_1 + lVar5),param_2,uVar3);
      func_0x00010c2194e0(*(undefined8 *)(param_1 + lVar5),param_2,0);
      _objc_release(uVar3);
    }
  }
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1067025cc; end: 10670274f; -[SCLensExplorerViewControllerV3 setViewControllers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067025cc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = (long)_DAT_11274e8d4;
  lVar4 = *(long *)(param_1 + lVar6);
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar3 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar4);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        uVar1 = param_3;
        func_0x00010bf4b900(param_3,param_2,uVar5);
        if ((uVar1 & 1) == 0) {
          func_0x00010c2a6740(uVar5,param_2,0);
          uVar2 = uVar5;
          func_0x00010c29bf00(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12c960();
          _objc_release(uVar2);
          func_0x00010c12c8e0(uVar5);
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar4);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(ulong *)(param_1 + lVar6) = param_3;
  _objc_release(uVar5);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = (long)_DAT_11274e8e0;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar3));
  uVar5 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106702750; end: 106702783; -[SCLensExplorerViewControllerV3 reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106702750(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274e8e0;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106702784; end: 10670295b; -[SCLensExplorerViewControllerV3 _setupAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106702784(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_11274e8c0;
  lVar1 = param_1;
  if (*(long *)(param_1 + lVar9) != 0) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9),param_2,0);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar1 = *(long *)(param_1 + lVar9);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf493a0(lVar1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar9);
    lStack_78 = lVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bf493c0(0xc054000000000000,uVar4,param_2,lVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar6,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar7);
    _objc_release(lVar9);
    _objc_release(param_1);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar8);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126af078;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar8 = (long)_DAT_11274e8e4;
  uVar7 = *(undefined8 *)(lVar1 + lVar8);
  *(undefined **)(lVar1 + lVar8) = puVar6;
  _objc_release(uVar7);
  func_0x00010c219b60(*(undefined8 *)(lVar1 + lVar8),param_2,0);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28,
                      *(undefined8 *)(lVar1 + _DAT_11274e8cc));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar1 + lVar8),param_2,puVar6);
  _objc_release(puVar6);
  lVar9 = lVar1;
  func_0x00010bfdf5e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c187440(*(undefined8 *)(lVar1 + lVar8),param_2,lVar9);
  _objc_release(lVar9);
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10670295c; end: 106702a47; -[SCLensExplorerViewControllerV3 _setupHeaderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670295c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126af078;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_11274e8e4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28,
                      *(undefined8 *)(param_1 + _DAT_11274e8cc));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c187440(*(undefined8 *)(param_1 + lVar4),param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106702a48; end: 106702bdb; -[SCLensExplorerViewControllerV3 _setupScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106702a48(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar6 = (long)_DAT_11274e8d8;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c181fc0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c1d8be0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c167a20(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c167a00(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c18e220(*(undefined8 *)(param_1 + lVar6));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar1);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar6));
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274e8b4);
  uStack_40 = *(undefined8 *)(param_1 + lVar6);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar4);
  _objc_release(puVar1);
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  lVar2 = lVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_106702bdc;
  puVar3 = PTR_PTR_1126cd458;
  lStack_70 = lVar6;
  puStack_68 = puVar1;
  lStack_60 = lVar5;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010c014f60(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar5 = (long)_DAT_11274e8e8;
  uVar4 = *(undefined8 *)(lVar2 + lVar5);
  *(undefined **)(lVar2 + lVar5) = puVar3;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar5));
  _objc_initWeak(auStack_78,lVar2);
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010c1d3220(*(undefined8 *)(lVar2 + lVar5));
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 106702bdc; end: 106702cff; -[SCLensExplorerViewControllerV3 _setupLoadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106702bdc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126cd458;
  _objc_alloc();
  func_0x00010c014f60(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11274e8e8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1d3220(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106702d00; end: 106702d2b;  */

void FUN_106702d00(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be90ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106702d2c; end: 1067032df; -[SCLensExplorerViewControllerV3 _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106702d2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  long lStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
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
  puStack_150 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar9 = (long)_DAT_11274e8e4;
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  lStack_d8 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  lStack_e8 = lVar1;
  lStack_c8 = lVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  uStack_f8 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = lVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_100 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  uStack_108 = uVar2;
  uStack_c0 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  uStack_118 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_110 = lVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_120 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_11274e8d8;
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  uStack_128 = uVar3;
  uStack_b8 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  uStack_138 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_130 = lVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  uStack_148 = uVar2;
  uStack_b0 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  uStack_160 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_158 = lVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_168 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  uStack_170 = uVar3;
  uStack_a8 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  uStack_178 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_180 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  uStack_188 = uVar4;
  uStack_a0 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  uStack_198 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_190 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a0 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_11274e8e8;
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  uStack_1a8 = uVar2;
  uStack_98 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  uStack_1b8 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1b0 = lVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1c0 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  uStack_1c8 = uVar3;
  uStack_90 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  uStack_1d8 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1d0 = lVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar1);
  uStack_88 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf1ff80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar1);
  uStack_80 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_150);
  _objc_release(puVar8);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar11);
  _objc_release(lStack_1d0);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1c8);
  _objc_release(lStack_1c0);
  _objc_release(lStack_1b0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1a8);
  _objc_release(lStack_1a0);
  _objc_release(lStack_190);
  _objc_release(uStack_198);
  _objc_release(uStack_188);
  _objc_release(uStack_180);
  _objc_release(uStack_178);
  _objc_release(uStack_170);
  _objc_release(lStack_168);
  _objc_release(lStack_158);
  _objc_release(uStack_160);
  _objc_release(uStack_148);
  _objc_release(lStack_140);
  _objc_release(lStack_130);
  _objc_release(uStack_138);
  _objc_release(uStack_128);
  _objc_release(lStack_120);
  _objc_release(lStack_110);
  _objc_release(uStack_118);
  _objc_release(uStack_108);
  _objc_release(lStack_100);
  _objc_release(lStack_f0);
  _objc_release(uStack_f8);
  _objc_release(lStack_e8);
  _objc_release(lStack_e0);
  _objc_release(lStack_d0);
  lVar9 = lStack_d8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1e8 = FUN_1067032e0;
  lVar10 = (long)_DAT_11274e8e0;
  if (*(long *)(lVar9 + lVar10) == 0) {
    uVar4 = *(undefined8 *)(lVar9 + _DAT_11274e8a8);
    lStack_220 = lVar11;
    puStack_218 = puVar8;
    uStack_210 = uVar3;
    lStack_208 = lVar1;
    uStack_200 = uVar7;
    lStack_1f8 = param_1;
    puStack_1f0 = &stack0xfffffffffffffff0;
    func_0x00010bf33140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_11274e8ec;
    uVar5 = *(undefined8 *)(lVar9 + lVar11);
    *(undefined8 *)(lVar9 + lVar11) = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_initWeak(auStack_228,lVar9);
    uVar2 = *(undefined8 *)(lVar9 + lVar11);
    _objc_copyWeak(auStack_230,auStack_228);
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar9 + lVar10);
    *(undefined8 *)(lVar9 + lVar10) = uVar2;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_230);
    _objc_destroyWeak(auStack_228);
  }
  return;
}



/* Entry: 1067032e0; end: 106703427; -[SCLensExplorerViewControllerV3 _setupCategoriesIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067032e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar5 = (long)_DAT_11274e8e0;
  if (*(long *)(param_1 + lVar5) == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274e8a8);
    func_0x00010bf33140();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11274e8ec;
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar3;
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar4;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 106703428; end: 1067034e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106703428(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010bf33060();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      func_0x00010c209fc0(*(undefined8 *)(param_1 + _DAT_11274e8e8));
    }
    else {
      func_0x00010c209fc0(*(undefined8 *)(param_1 + _DAT_11274e8e8));
      func_0x00010bee1a60(param_1);
      func_0x00010bee3660(param_1);
      func_0x00010bedf020(param_1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067034e4; end: 10670351f; -[SCLensExplorerViewControllerV3 _requestCategoriesIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067034e4(long param_1,undefined8 param_2)

{
  func_0x00010c209fc0(*(undefined8 *)(param_1 + _DAT_11274e8e8),param_2,2);
                    /* WARNING: Could not recover jumptable at 0x00010c134e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e8a8),PTR_s_requestCategoriesIfNeeded_11262ada8);
  return;
}



/* Entry: 106703520; end: 1067039d7; -[SCLensExplorerViewControllerV3 _updateTabBarWithCategoryModels:categoiresAggregator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106703520(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c267600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (uVar1 != 0) {
    uVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(uVar2);
      }
      uVar11 = *(undefined8 *)(uVar9 * 8);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d580(uVar11);
      _objc_release(puVar3);
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar9);
    uVar1 = uVar2;
    func_0x00010bf52a60();
  }
  _objc_release(uVar2);
  uVar1 = param_1;
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c267600();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bddc020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be9ddc0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uVar4 = param_4;
    func_0x00010c1593e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar2);
    uVar4 = uVar2;
  }
  _objc_release(uVar2);
  if ((uVar9 != 0) && (uVar1 != 0)) {
    uVar2 = uVar4;
    func_0x00010bf334a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar5 & 1) == 0) {
      uVar2 = uVar4;
      func_0x00010bf334a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010bddc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010c0f22e0(uVar5);
      uVar2 = param_1;
      func_0x00010bddc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f2300();
      _objc_release(uVar2);
      _objc_release(uVar5);
    }
  }
  lVar8 = (long)_DAT_11274e8c4;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf51e00();
  func_0x00010c12adc0(*(undefined8 *)(param_1 + lVar8));
  _objc_retain(uVar6);
  _objc_retain(uVar4);
  uVar11 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211320();
  _objc_release(uVar2);
  _objc_release(uVar11);
  uVar2 = param_1;
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c267600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(uVar5);
      }
      uVar11 = *(undefined8 *)(uVar10 * 8);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa220(uVar11);
      _objc_release(puVar3);
      uVar10 = uVar10 + 1;
    } while (uVar2 != uVar10);
    uVar2 = uVar5;
    func_0x00010bf52a60();
  }
  _objc_release(uVar5);
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + (long)_DAT_11274e8e4));
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar9);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c159250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_selected_112633eb0);
  return;
}



/* Entry: 1067039d8; end: 1067039df;  */

void FUN_1067039d8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c159250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_selected_112633eb0);
  return;
}



/* Entry: 1067039e0; end: 106703aef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067039e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar4 = *(undefined **)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010bf334a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b09e0;
  if (puVar4 == (undefined *)0x0) {
    uVar1 = param_2;
    func_0x00010c0d4f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c267640(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = puVar2;
  }
  func_0x00010c1fadc0(puVar4);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_11274e8c4);
  uVar1 = param_2;
  func_0x00010bf334a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106703af0; end: 106703ba7; -[SCLensExplorerViewControllerV3 _categoryPageForIdentifier:] */

void FUN_106703af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c29c580(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106703ba8;
  puStack_40 = &UNK_1109365e0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfb2040(param_1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106703ba8; end: 106703bef;  */

undefined8 FUN_106703ba8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf334a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106703bf0; end: 106703c3f; -[SCLensExplorerViewControllerV3 _categoryIdentifierForTabItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106703bf0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274e8c4);
  func_0x00010bf00320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106703c40; end: 106703f8b; -[SCLensExplorerViewControllerV3 _selectedCategoryFromCategoryModels:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106703c40(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  
  _objc_retain(param_3);
  uVar8 = param_1;
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c267600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = uVar2;
  func_0x00010bf529e0();
  if (uVar8 == 0) {
    uVar8 = 0;
    goto LAB_106703f54;
  }
  uVar3 = uVar2;
  func_0x00010bf529e0();
  lVar9 = (long)_DAT_11274e8d0;
  uVar4 = *(ulong *)(param_1 + lVar9);
  func_0x00010c159860();
  uVar8 = param_3;
  if (uVar4 < uVar3) {
    uVar3 = uVar2;
    func_0x00010bf529e0();
    uVar4 = *(ulong *)(param_1 + lVar9);
    func_0x00010bf03960();
    if (uVar4 < uVar3) {
      uVar5 = *(ulong *)(param_1 + lVar9);
      func_0x00010c159860();
      uVar3 = uVar2;
      func_0x00010c0dfd40(uVar2,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010bddc020(param_1,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar6 = *(ulong *)(param_1 + lVar9);
      func_0x00010bf03960();
      uVar3 = uVar2;
      func_0x00010c0dfd40(uVar2,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bddc020(param_1,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = param_3;
      func_0x00010bf529e0();
      if (uVar5 < uVar3) {
        func_0x00010c0dfd40(param_3,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_106703f8c;
      puStack_80 = &UNK_110933af8;
      uStack_78 = uVar4;
      _objc_retain(uVar4);
      uVar3 = param_3;
      func_0x00010bfb2040(param_3,param_2,&puStack_98);
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = puVar1;
      uStack_b8 = 0xc2000000;
      uStack_b0 = 0x106703fd4;
      puStack_a8 = &UNK_110933af8;
      uStack_a0 = param_1;
      _objc_retain(param_1);
      uVar7 = param_3;
      func_0x00010bfb2040(param_3,param_2,&puStack_c0);
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 < uVar6) {
        if (uVar3 == 0) {
LAB_106703eb8:
          if (uVar7 == 0) {
LAB_106703ef0:
            if (uVar8 == 0) goto LAB_106703f00;
          }
          else {
            _objc_retain(uVar7);
            _objc_release(uVar8);
            uVar8 = uVar7;
          }
        }
        else {
LAB_106703ed8:
          _objc_retain(uVar3);
          _objc_release(uVar8);
          uVar8 = uVar3;
        }
      }
      else {
        if (uVar5 == uVar6) {
          if (uVar3 == 0) goto LAB_106703ef0;
          goto LAB_106703ed8;
        }
        if (uVar3 == 0) goto LAB_106703eb8;
        uVar5 = param_3;
        func_0x00010bfecde0(param_3,param_2,uVar3);
        uVar6 = param_3;
        func_0x00010bf529e0();
        if (uVar5 - 1 < uVar6) {
          uVar6 = param_3;
          func_0x00010c0dfd40(param_3,param_2,uVar5 - 1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          uVar8 = uVar6;
          goto LAB_106703ef0;
        }
        _objc_release(uVar8);
LAB_106703f00:
        uVar8 = param_3;
        func_0x00010bfb1920(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_retain(uVar8);
      _objc_release(uVar7);
      _objc_release(uStack_a0);
      _objc_release(uVar3);
      _objc_release(uVar8);
      _objc_release(uStack_78);
      _objc_release(param_1);
      _objc_release(uVar4);
      goto LAB_106703f54;
    }
  }
  func_0x00010c089820(param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_106703f54:
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 106703f8c; end: 10670401b;  */

undefined8 FUN_106703f8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf334a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10670401c; end: 106704443; -[SCLensExplorerViewControllerV3 _updateViewControllersWithCategories:categoiresAggregator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670401c(long param_1,undefined1 *param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_140;
    do {
      lVar10 = 0;
      do {
        if (*plStack_140 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar11 = *(undefined8 *)(lStack_148 + lVar10 * 8);
        uVar9 = uVar11;
        func_0x00010bf334a0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = param_1;
        func_0x00010bddc0c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        if (lVar8 == 0) {
          uVar9 = uVar11;
          func_0x00010bf334a0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = param_1;
          func_0x00010bddc0a0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          lVar8 = *(long *)(param_1 + _DAT_11274e8ac);
          uVar9 = uVar11;
          func_0x00010bf334a0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f1240();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          func_0x00010bef7700(param_1);
          uVar9 = *(undefined8 *)(param_1 + _DAT_11274e8d8);
          lVar3 = lVar8;
          func_0x00010c29bf00(lVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60(uVar9);
          _objc_release(lVar3);
          func_0x00010bf77e80(lVar8);
          uVar9 = *(undefined8 *)(param_1 + _DAT_11274e8b4);
          lVar3 = lVar8;
          func_0x00010c152980();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
          lStack_108 = lVar3;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067a20(uVar9);
          _objc_release(puVar4);
          _objc_release(lVar3);
          _objc_initWeak(auStack_158,param_1);
          lVar3 = lVar8;
          func_0x00010bf7a4e0(lVar8);
          _objc_retainAutoreleasedReturnValue();
          param_2 = auStack_158;
          _objc_copyWeak(auStack_160,param_2);
          lVar5 = lVar3;
          func_0x00010c25ff60(lVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1a3e0();
          _objc_release(lVar5);
          _objc_release(lVar3);
          _objc_destroyWeak(auStack_160);
          _objc_destroyWeak(auStack_158);
          _objc_release(lVar6);
        }
        func_0x00010befa120(puVar1);
        lVar6 = *(long *)(param_1 + _DAT_11274e8d4);
        func_0x00010bf529e0();
        if (lVar6 == 0) {
          uVar9 = param_4;
          func_0x00010c1593e0(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c071ae0();
          _objc_release(uVar9);
          if ((int)uVar11 != 0) {
            func_0x00010c0f22e0(lVar8);
          }
        }
        _objc_release(lVar8);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  func_0x00010c2224a0(param_1);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_158);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    func_0x00010bf4cdc0(param_2);
    func_0x00010c1f7da0(*(undefined8 *)(param_3 + _DAT_11274e8e4));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106704444; end: 1067044a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106704444(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf4cdc0(param_2);
    func_0x00010c1f7da0(*(undefined8 *)(param_1 + _DAT_11274e8e4));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067044a4; end: 10670457b; -[SCLensExplorerViewControllerV3 _categoryObservableForCategoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067044a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274e8ec);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10670457c;
  puStack_40 = &UNK_110936610;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf43280(uVar3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10670457c; end: 106704663;  */

void FUN_10670457c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf33060(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = param_2;
  func_0x00010bfb2040(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106704664; end: 1067048af; -[SCLensExplorerViewControllerV3 _updateScrollViewCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106704664(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0x7fffffffffffffff;
  lVar6 = param_4;
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c267600();
  _objc_retainAutoreleasedReturnValue();
  dVar9 = 1.60807493534087e-314;
  func_0x00010bf97e80();
  _objc_release(lVar2);
  _objc_release(lVar6);
  lVar6 = puStack_78[3];
  if (lVar6 == 0x7fffffffffffffff) {
    lVar6 = 0;
    puStack_78[3] = 0;
  }
  lVar7 = (long)_DAT_11274e8d8;
  func_0x00010bf4cdc0(*(undefined8 *)(param_4 + lVar7));
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar7));
  lVar8 = (long)_DAT_11274e8d0;
  lVar2 = *(long *)(param_4 + lVar8);
  func_0x00010c159860(lVar2);
  func_0x00010bf4cdc0(*(undefined8 *)(param_4 + lVar7));
  uVar5 = (ulong)param_3;
  lVar2 = (long)dVar9 - lVar2 * uVar5;
  func_0x00010c1822e0((double)(lVar2 + lVar6 * uVar5 + (uVar5 & lVar2 >> 0x3f)),
                      *(undefined8 *)(param_4 + lVar7));
  puVar3 = PTR_PTR_1126b09e8;
  _objc_alloc();
  lVar6 = param_4;
  func_0x00010bfdf5e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c267600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0503e0();
  uVar4 = *(undefined8 *)(param_4 + lVar8);
  *(undefined **)(param_4 + lVar8) = puVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar6);
  func_0x00010c18b5e0(*(undefined8 *)(param_4 + lVar8));
  func_0x00010c18b5e0(*(undefined8 *)(param_4 + lVar7));
  iVar1 = (int)*(undefined8 *)(param_4 + lVar7);
  func_0x00010c070400();
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_4 + lVar7);
    func_0x00010c070ea0();
    uVar4 = *(undefined8 *)(param_4 + lVar8);
    if (iVar1 != 0) {
      func_0x00010c152b20(uVar4);
      goto LAB_106704858;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_4 + lVar8);
  }
  func_0x00010c158f40(uVar4);
LAB_106704858:
  __Block_object_dispose(&uStack_80,8);
  return;
}



/* Entry: 1067048b0; end: 1067048fb;  */

void FUN_1067048b0(long param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  func_0x00010c159240();
  if (param_2 != 0) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
    *param_4 = 1;
  }
  return;
}



/* Entry: 1067048fc; end: 10670496b; -[SCLensExplorerViewControllerV3 pageDidAppearForIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067048fc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274e8d4;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c0dfd40(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f22c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10670496c; end: 10670497b; -[SCLensExplorerViewControllerV3 onCategorySelectionChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670496c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c267bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e8d0),PTR_s_tabSelected__112677920);
  return;
}



/* Entry: 10670497c; end: 106704c37; -[SCLensExplorerViewControllerV3 observeValueForKeyPath:ofObject:change:context:] */

void FUN_10670497c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b09e0;
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  if (uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c071ae0();
    _objc_release(puVar2);
    if ((int)uVar4 != 0) {
      uVar4 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf1f3c0();
      _objc_release(uVar4);
      uVar4 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf1f3c0();
      _objc_release(uVar4);
      if ((int)uVar5 != (int)uVar6) {
        puStack_98 = &uStack_a0;
        uStack_a0 = 0;
        uStack_90 = 0x3032000000;
        pcStack_88 = FUN_106704c38;
        uStack_80 = 0x106704c48;
        uStack_78 = 0;
        func_0x00010bfdf5e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_1;
        func_0x00010c267600();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_4);
        func_0x00010bf97e80(uVar4);
        _objc_release(uVar4);
        _objc_release(param_1);
        if (puStack_98[5] != 0) {
          uVar3 = param_4;
          func_0x00010c159240();
          if ((int)uVar3 == 0) {
            func_0x00010c0f2300(puStack_98[5]);
          }
          else {
            func_0x00010c0f22e0();
            func_0x00010bf03400(0x3ff0000000000000,PTR__OBJC_CLASS___UIView_1126aec20);
          }
        }
        _objc_release(uVar1);
        __Block_object_dispose(&uStack_a0,8);
        _objc_release(uStack_78);
      }
    }
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106704c38; end: 106704c4f;  */

void FUN_106704c38(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106704c50; end: 106704cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106704c50(long param_1,undefined8 param_2,ulong param_3,undefined1 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010c071ae0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  if ((int)param_2 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    func_0x00010c29c580();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    if (param_3 < uVar2) {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_11274e8d4);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = uVar3;
      _objc_release(uVar4);
    }
    *param_4 = 1;
  }
  return;
}



/* Entry: 106704d00; end: 106704d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106704d00(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x28);
  func_0x00010c152980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  func_0x00010c1f7da0(*(undefined8 *)(*(long *)(param_3 + 0x20) + (long)_DAT_11274e8e4),param_4,
                      (long)param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106704d58; end: 106704da3; -[SCLensExplorerViewControllerV3 textFieldShouldBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106704d58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274e8a4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10cd20();
  _objc_release(uVar1);
  return 0;
}



/* Entry: 106704da4; end: 106704da7; -[SCLensExplorerViewControllerV3 _setupKarma] */

void FUN_106704da4(void)

{
  return;
}



/* Entry: 106704da8; end: 106704daf; -[SCLensExplorerViewControllerV3 pageViewName] */

undefined8 FUN_106704da8(void)

{
  return 0x8e;
}



/* Entry: 106704db0; end: 106704f13; -[SCLensExplorerViewControllerV3 dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_106704db0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  plVar4 = &lStack_140;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + _DAT_11274e8dc);
  func_0x00010c267600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d580(uVar5);
        _objc_release(puVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  puStack_138 = PTR_PTR_1126f2a20;
  lStack_140 = param_1;
  _objc_msgSendSuper2(&lStack_140,PTR_s_dealloc_112525b20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x00010c29c160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (long *)(undefined1 *)(ulong)(plVar4 != (long *)0x0);
}



/* Entry: 106704f14; end: 106704f47; -[SCLensExplorerViewControllerV3 viewControllerPrefersSelfDismiss] */

bool FUN_106704f14(long param_1)

{
  func_0x00010c29c160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 106704f48; end: 106704fa7; -[SCLensExplorerViewControllerV3 viewControllerDismissSelf:] */

void FUN_106704f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c29c160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1352a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106704fa8; end: 106704fe7; -[SCLensExplorerViewControllerV3 didSelectDismissalActionWithHeaderItem:] */

void FUN_106704fa8(undefined8 param_1)

{
  func_0x00010c29c160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1352a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106704fe8; end: 106704ff7; -[SCLensExplorerViewControllerV3 viewControllers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106704fe8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274e8d4);
}



/* Entry: 106704ff8; end: 106705017; -[SCLensExplorerViewControllerV3 viewControllerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106704ff8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274e8f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106705018; end: 10670502b; -[SCLensExplorerViewControllerV3 setViewControllerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106705018(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274e8f0,param_3);
  return;
}



/* Entry: 10670502c; end: 10670503b; -[SCLensExplorerViewControllerV3 scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10670502c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274e8d8);
}



/* Entry: 10670503c; end: 106705177; -[SCLensExplorerViewControllerV3 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670503c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274e8f0);
  _objc_storeStrong(param_1 + _DAT_11274e8d4,0);
  _objc_storeStrong(param_1 + _DAT_11274e8dc,0);
  _objc_storeStrong(param_1 + _DAT_11274e8b0,0);
  _objc_storeStrong(param_1 + _DAT_11274e8c0,0);
  _objc_storeStrong(param_1 + _DAT_11274e8b4,0);
  _objc_storeStrong(param_1 + _DAT_11274e8d0,0);
  _objc_storeStrong(param_1 + _DAT_11274e8e8,0);
  _objc_storeStrong(param_1 + _DAT_11274e8e4,0);
  _objc_storeStrong(param_1 + _DAT_11274e8d8,0);
  _objc_storeStrong(param_1 + _DAT_11274e8c8,0);
  _objc_storeStrong(param_1 + _DAT_11274e8c4,0);
  _objc_storeStrong(param_1 + _DAT_11274e8ec,0);
  _objc_storeStrong(param_1 + _DAT_11274e8e0,0);
  _objc_storeStrong(param_1 + _DAT_11274e8b8,0);
  _objc_storeStrong(param_1 + _DAT_11274e8ac,0);
  _objc_storeStrong(param_1 + _DAT_11274e8a8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e8a4,0);
  return;
}



/* Entry: 106705178; end: 10670521b; -[SCLensExplorerFavoritesOnboardingPresenter initWithLensExplorerAssetsProvider:lensPerformerProvider:] */

undefined1 *
FUN_106705178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2a28;
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



/* Entry: 10670521c; end: 10670541b; -[SCLensExplorerFavoritesOnboardingPresenter showWithPresentViewController:] */

void FUN_10670521c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126cceb0;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c023c00();
  puVar2 = puVar1;
  func_0x00010c160fc0();
  func_0x00010670df40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010670df58();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010b75e3bc();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aed70;
  _objc_retain(&PTR____CFConstantStringClassReference_110e82c38);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefe80(puVar6);
  _objc_release(puVar7);
  _objc_retain(puVar1);
  func_0x00010c10eda0(param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(&PTR____CFConstantStringClassReference_110e82c38);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10670541c; end: 106705433;  */

void FUN_10670541c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106705434; end: 106705463; -[SCLensExplorerFavoritesOnboardingPresenter .cxx_destruct] */

void FUN_106705434(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106705464; end: 10670557f; -[SCLensExplorerOnboardingManager initWithRouter:userSettings:studySettingsProvider:lensExplorerAssetsProvider:lensPerformerProvider:] */

undefined1 *
FUN_106705464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f2a30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106705580; end: 1067055eb; -[SCLensExplorerOnboardingManager presentLensFavoritesOnboardingIfNeeded] */

void FUN_106705580(long param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c2337e0();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126cd460;
    _objc_alloc(PTR_PTR_1126cd460);
    func_0x00010c023c00();
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10d4c0();
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1067055ec; end: 10670563b; -[SCLensExplorerOnboardingManager .cxx_destruct] */

void FUN_1067055ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10670563c; end: 10670571f; -[SCLensExplorerPressAndHoldOnboardingView initWithLensExplorerAssetsProvider:lensPerformerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10670563c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f2a38;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11274e910;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274e914;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274e918) = 0;
    func_0x00010beadda0(puVar1);
    func_0x00010bde49e0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106705720; end: 1067058d3; -[SCLensExplorerPressAndHoldOnboardingView _setupLoadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106705720(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar14 = (long)_DAT_11274e91c;
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar12);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  uStack_78 = uVar12;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar5);
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(lVar13);
  _objc_release(uVar2);
  lVar14 = *(long *)(param_1 + lVar14);
  func_0x00010c24dbc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puStack_b0 = puVar1;
  pcStack_88 = FUN_1067058d4;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d0 = uVar6;
  lStack_c8 = lVar4;
  uStack_c0 = uVar3;
  uStack_b8 = uVar12;
  lStack_a8 = lVar13;
  uStack_a0 = uVar2;
  lStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010c17d4c0();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(lVar14);
  _objc_release(puVar1);
  _objc_initWeak(auStack_f0,lVar14);
  puVar1 = PTR_PTR_1126ae558;
  lVar13 = (long)_DAT_11274e910;
  uVar6 = *(undefined8 *)(lVar14 + lVar13);
  func_0x00010c10ffe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar14 + lVar13);
  uStack_e8 = uVar6;
  func_0x00010c10ffc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e0 = uVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beffb40();
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_106705ad8;
  puStack_100 = &UNK_1108434e0;
  puVar10 = auStack_f0;
  _objc_copyWeak(auStack_f8);
  uVar3 = *(undefined8 *)(lVar14 + _DAT_11274e914);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &puStack_118;
  func_0x00010c297260(puVar1);
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_f8);
  puVar7 = auStack_f0;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_f0);
  __Unwind_Resume();
  _objc_retain(puVar10);
  puVar7 = puVar7 + 0x20;
  _objc_loadWeakRetained();
  if (((ppuVar11 == (undefined **)0x0) && (puVar7 != (undefined1 *)0x0)) &&
     (puVar8 = puVar10, func_0x00010bf529e0(), puVar8 == (undefined1 *)0x2)) {
    puVar8 = puVar10;
    func_0x00010bfb1920(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar10;
    func_0x00010c089820(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb1840(puVar7);
    lVar13 = (long)_DAT_11274e91c;
    func_0x00010c2558c0(*(undefined8 *)(puVar7 + lVar13));
    func_0x00010c12c960(*(undefined8 *)(puVar7 + lVar13));
    uVar12 = *(undefined8 *)(puVar7 + lVar13);
    *(undefined8 *)(puVar7 + lVar13) = 0;
    _objc_release(uVar12);
    if (puVar7[_DAT_11274e918] == '\x01') {
      func_0x00010bdd3a60(puVar7);
    }
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 1067058d4; end: 106705ad7; -[SCLensExplorerPressAndHoldOnboardingView _configure] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067058d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c17d4c0(param_1,param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae558;
  lVar12 = (long)_DAT_11274e910;
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c10ffe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  uStack_68 = uVar2;
  func_0x00010c10ffc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beffb40();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106705ad8;
  puStack_80 = &UNK_1108434e0;
  puVar10 = auStack_70;
  _objc_copyWeak(auStack_78);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274e914);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &puStack_98;
  func_0x00010c297260(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_78);
  puVar6 = auStack_70;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  _objc_retain(puVar10);
  puVar6 = puVar6 + 0x20;
  _objc_loadWeakRetained();
  if (((ppuVar11 == (undefined **)0x0) && (puVar6 != (undefined1 *)0x0)) &&
     (puVar7 = puVar10, func_0x00010bf529e0(), puVar7 == (undefined1 *)0x2)) {
    puVar7 = puVar10;
    func_0x00010bfb1920(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar10;
    func_0x00010c089820(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb1840(puVar6);
    lVar12 = (long)_DAT_11274e91c;
    func_0x00010c2558c0(*(undefined8 *)(puVar6 + lVar12));
    func_0x00010c12c960(*(undefined8 *)(puVar6 + lVar12));
    uVar9 = *(undefined8 *)(puVar6 + lVar12);
    *(undefined8 *)(puVar6 + lVar12) = 0;
    _objc_release(uVar9);
    if (puVar6[_DAT_11274e918] == '\x01') {
      func_0x00010bdd3a60(puVar6);
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 106705ad8; end: 106705bcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106705ad8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_3 == 0) && (param_1 != 0)) && (lVar1 = param_2, func_0x00010bf529e0(), lVar1 == 2)) {
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c089820(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb1840(param_1);
    lVar4 = (long)_DAT_11274e91c;
    func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar3);
    if (*(char *)(param_1 + _DAT_11274e918) == '\x01') {
      func_0x00010bdd3a60(param_1);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106705bcc; end: 10670647f; -[SCLensExplorerPressAndHoldOnboardingView _setupWithPreviews:pressAndHoldHand:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106705bcc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined *puVar48;
  long lVar49;
  long lVar50;
  
  lVar49 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c190b80();
  func_0x00010c219b60(puVar2);
  func_0x00010befbb60(param_1);
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar50 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
      func_0x00010c01bf60();
      func_0x00010c182220();
      func_0x00010bef6d60(puVar2);
      _objc_release(puVar4);
      lVar50 = lVar50 + 1;
    } while (lVar3 != lVar50);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar4 = puVar2;
  func_0x00010c261580(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2420(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  uVar6 = param_1;
  func_0x00010bdec020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar4);
  func_0x00010c17c5c0(param_1);
  _objc_release(puVar4);
  _objc_release(uVar6);
  uVar6 = param_1;
  func_0x00010bf398a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar6);
  uVar6 = param_1;
  func_0x00010bf398a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar6);
  uVar6 = param_1;
  func_0x00010bf398a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1);
  _objc_release(uVar6);
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  func_0x00010c1a5120(param_1);
  _objc_release(puVar4);
  uVar6 = param_1;
  func_0x00010bfcff20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182220();
  _objc_release(uVar6);
  uVar6 = param_1;
  func_0x00010bfcff20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar6);
  uVar6 = param_1;
  func_0x00010bfcff20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1);
  _objc_release(uVar6);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_1;
  func_0x00010bfcff20();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar18;
  func_0x00010bf493c0(0x4048000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_1;
  func_0x00010bfcff20();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar23;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_1;
  func_0x00010bfcff20();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar27;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar28;
  func_0x00010bf49420(0x405e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_1;
  func_0x00010bfcff20();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar30;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar31;
  func_0x00010bf49420(0x405e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = param_1;
  func_0x00010bf398a0();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar33;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar35;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar34;
  func_0x00010bf493c0(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar38 = param_1;
  func_0x00010bf398a0();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar38;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar40;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = uVar39;
  func_0x00010bf493c0(0xc033000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar43 = param_1;
  func_0x00010bf398a0();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar43;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar44;
  func_0x00010bf49420(0x4033000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf398a0();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = param_1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = uVar46;
  func_0x00010bf49420(0x4033000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar48 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar4);
  _objc_release(puVar48);
  _objc_release(uVar47);
  _objc_release(uVar46);
  _objc_release(param_1);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar49) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = param_3;
  func_0x00010bf398a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd3a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__beginPressAnimation_112552838);
    return;
  }
  *(undefined1 *)(param_3 + _DAT_11274e918) = 1;
  return;
}



/* Entry: 106706480; end: 1067064d3; -[SCLensExplorerPressAndHoldOnboardingView beginPreviewAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106706480(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf398a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd3a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__beginPressAnimation_112552838);
    return;
  }
  *(undefined1 *)(param_1 + _DAT_11274e918) = 1;
  return;
}



/* Entry: 1067064d4; end: 10670675f; -[SCLensExplorerPressAndHoldOnboardingView _beginPressAnimation] */

void FUN_1067064d4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
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
  
  puVar1 = PTR__OBJC_CLASS___UICubicTimingParameters_1126c8ab8;
  _objc_alloc(PTR__OBJC_CLASS___UICubicTimingParameters_1126c8ab8);
  func_0x00010bff2f00();
  puVar2 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc(PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0);
  func_0x00010c00eb20(0x3fd6666666666666);
  func_0x00010c1aa700(param_1);
  _objc_release(puVar2);
  _CGAffineTransformMakeScale(&uStack_90,0x3fc999999999999a,0x3fc999999999999a);
  uVar3 = param_1;
  func_0x00010bf398a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  func_0x00010c219960();
  _objc_release(uVar3);
  _objc_initWeak(&uStack_c0,param_1);
  uVar3 = param_1;
  func_0x00010bfe8480(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106706760;
  puStack_d0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_c8,&uStack_c0);
  func_0x00010bef6cc0(uVar3);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bfe8480(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar2;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_106706844;
  puStack_f8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_f0,&uStack_c0);
  func_0x00010bef6ce0(0x3fd0000000000000,uVar3);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bfe8480(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_118,&uStack_c0);
  func_0x00010bef78c0(uVar3);
  _objc_release(uVar3);
  func_0x00010bfe8480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dc80(0x3ff8000000000000);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(&uStack_c0);
  _objc_release(puVar1);
  return;
}



/* Entry: 106706760; end: 106706843;  */

void FUN_106706760(long param_1)

{
  long lVar1;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _CGAffineTransformMakeScale(&uStack_60,0x3feccccccccccccd,0x3feccccccccccccd);
    lVar1 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    func_0x00010c219960();
    _objc_release(lVar1);
    _CGAffineTransformMakeScale(&uStack_90,0x3feccccccccccccd,0x3feccccccccccccd);
    _CGAffineTransformTranslate(&uStack_c0,0xc028000000000000,0xc020000000000000,&uStack_90);
    lVar1 = param_1;
    func_0x00010bfcff20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    func_0x00010c219960();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return;
}


