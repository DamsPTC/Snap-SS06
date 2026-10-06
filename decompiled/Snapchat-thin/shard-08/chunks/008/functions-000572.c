/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066e1cf8; end: 1066e1dcb;  */

void FUN_1066e1cf8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1066e1dcc; end: 1066e1dff;  */

void FUN_1066e1dcc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066e1e00; end: 1066e1f37; -[SCLensExplorerBaseQueryCoordinator _handleRequestResult:query:] */

void FUN_1066e1e00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be85460(param_1,param_2,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1066e1f38;
  puStack_70 = &UNK_1109357d0;
  lStack_68 = param_1;
  _objc_retain();
  lStack_60 = lVar2;
  _objc_retain(param_4);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x1066e1fc0;
  puStack_a8 = &UNK_11088b408;
  lStack_a0 = param_1;
  lStack_98 = lVar2;
  uStack_90 = param_4;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(lVar2);
  func_0x00010c0c0800(param_3,param_2,&puStack_88,&puStack_c0);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar3);
  _objc_release(uStack_90);
  _objc_release(lStack_98);
  _objc_release(uStack_58);
  _objc_release(lStack_60);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1066e1f38; end: 1066e2063;  */

void FUN_1066e1f38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bfd2520(*(undefined8 *)(param_1 + 0x20),param_2,param_2,
                      *(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be651e0(uVar2);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf51e00(uVar2);
  func_0x00010bfaf9e0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1066e2064; end: 1066e2187; -[SCLensExplorerBaseQueryCoordinator _notifyUpdatingBlocksWithResult:] */

void FUN_1066e2064(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar6 = *(long *)(param_1 + 0x38);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        lVar2 = *(long *)(lStack_118 + lVar8 * 8);
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x10))(lVar2,param_3);
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar6;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar6);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126ccfd8;
  _objc_retain(puVar5);
  _objc_alloc(puVar3);
  func_0x00010c003b80();
  puVar4 = PTR_PTR_1126ccfe0;
  _objc_alloc(PTR_PTR_1126ccfe0);
  func_0x00010c03c280();
  _objc_release(puVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066e2188; end: 1066e2203; -[SCLensExplorerBaseQueryCoordinator _queryResultWithQuery:source:] */

void FUN_1066e2188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ccfd8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c003b80();
  puVar2 = PTR_PTR_1126ccfe0;
  _objc_alloc(PTR_PTR_1126ccfe0);
  func_0x00010c03c280();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066e2204; end: 1066e2243; -[SCLensExplorerBaseQueryCoordinator _addPendingUpdatingBlock:] */

void FUN_1066e2204(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_retainBlock(param_3);
    func_0x00010befa120(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1066e2244; end: 1066e224b; -[SCLensExplorerBaseQueryCoordinator isLoading] */

undefined1 FUN_1066e2244(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 1066e224c; end: 1066e2253; -[SCLensExplorerBaseQueryCoordinator requestProvider] */

undefined8 FUN_1066e224c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1066e2254; end: 1066e225b; -[SCLensExplorerBaseQueryCoordinator responseParser] */

undefined8 FUN_1066e2254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1066e225c; end: 1066e22df; -[SCLensExplorerBaseQueryCoordinator .cxx_destruct] */

void FUN_1066e225c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 1066e22e0; end: 1066e2383; -[SCLensExplorerCategoriesAggregatorMapper initWithCategoriesFactory:selectedFeedId:] */

undefined1 *
FUN_1066e22e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2858;
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



/* Entry: 1066e2384; end: 1066e2563; -[SCLensExplorerCategoriesAggregatorMapper categoriesAggregatorFromResponseFeedModels:] */

void FUN_1066e2384(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126cce40;
  _objc_alloc();
  func_0x00010c043bc0();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  puVar6 = &uStack_140;
  lVar4 = param_3;
  func_0x00010bf52a60(param_3,param_2,puVar6,auStack_100,0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar4 != 0) {
    lVar11 = *plStack_130;
    do {
      lVar12 = 0;
      do {
        if (*plStack_130 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        uVar10 = *(undefined8 *)(lStack_138 + lVar12 * 8);
        uVar5 = uVar10;
        func_0x00010bf332e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_178 = puVar1;
        uStack_170 = 0xc2000000;
        pcStack_168 = FUN_1066e2564;
        puStack_160 = &UNK_110935820;
        uStack_158 = param_1;
        uStack_150 = uVar10;
        _objc_retain(puVar3);
        puStack_1b0 = puVar1;
        uStack_1a8 = 0xc2000000;
        pcStack_1a0 = FUN_1066e269c;
        puStack_198 = &UNK_110935850;
        uStack_190 = param_1;
        uStack_188 = uVar10;
        puStack_148 = puVar3;
        _objc_retain(puVar3);
        puStack_180 = puVar3;
        func_0x00010c0bcf20(uVar5,param_2,&puStack_178,&puStack_1b0);
        _objc_release(uVar5);
        _objc_release(puStack_180);
        _objc_release(puStack_148);
        lVar12 = lVar12 + 1;
      } while (lVar4 != lVar12);
      puVar6 = &uStack_140;
      lVar4 = param_3;
      func_0x00010bf52a60(param_3,param_2,puVar6,auStack_100,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0b8600(puVar6,param_2,&PTR___NSConcreteGlobalBlock_110935800);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 8);
  func_0x00010bfa3d80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bf85d80(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bfa3660(uVar7);
  uVar8 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bfe5be0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf333a0(uVar9,param_2,uVar5,uVar10,puVar6,uVar7,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar5);
  func_0x00010bf01980(*(undefined8 *)(param_3 + 0x30),param_2,uVar9);
  iVar2 = (int)*(undefined8 *)(param_3 + 0x28);
  func_0x00010c070480();
  if (iVar2 != 0) {
    uVar10 = *(undefined8 *)(param_3 + 0x30);
    uVar5 = uVar9;
    func_0x00010bf334a0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18afc0(uVar10,param_2,uVar5);
    _objc_release(uVar5);
  }
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1066e2564; end: 1066e2693;  */

void FUN_1066e2564(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_110935800);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bfa3d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf85d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3660(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe5be0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf333a0(uVar6,param_2,uVar2,uVar3,param_3,uVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bf01980(*(undefined8 *)(param_1 + 0x30),param_2,uVar6);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c070480();
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = uVar6;
    func_0x00010bf334a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18afc0(uVar3,param_2,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066e2694; end: 1066e269b;  */

void FUN_1066e2694(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ea50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_subcategoryIdentifier_1126754b8);
  return;
}



/* Entry: 1066e269c; end: 1066e2767;  */

void FUN_1066e269c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bfa3d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf85d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3660(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe5be0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf333a0(uVar5,param_2,uVar1,uVar2,PTR____NSArray0__struct_11034ab48,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010befbb00(*(undefined8 *)(param_1 + 0x30),param_2,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1066e2768; end: 1066e2797; -[SCLensExplorerCategoriesAggregatorMapper .cxx_destruct] */

void FUN_1066e2768(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066e2798; end: 1066e298b; -[SCLensExplorerCategoriesBatchQueryCoordinator initWithRequestManager:queryFactory:categoriesFactory:categoriesAggregator:requestProvider:responseParser:dynamicUpdateHandler:queryStatusChecker:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1066e2798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_1126cd108;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puStack_68 = PTR_PTR_1126f2860;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithRequestManager_requestPr_112531820,param_3,param_7,
                      param_8,param_9,puVar1,param_10);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11274e418;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_4;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11274e41c;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_5;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11274e420;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_6;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11274e424;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_11;
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new();
    lVar4 = (long)_DAT_11274e428;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined **)((long)puVar2 + lVar4) = puVar1;
    _objc_release(uVar3);
    func_0x00010c0d9840(*(undefined8 *)((long)puVar2 + lVar4));
  }
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 1066e298c; end: 1066e29c7; -[SCLensExplorerCategoriesBatchQueryCoordinator categoriesResponse] */

void FUN_1066e298c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new(PTR_PTR_1126ae568);
  func_0x00010be90b00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066e29c8; end: 1066e2abb; -[SCLensExplorerCategoriesBatchQueryCoordinator _requestCategoriesWithSubject:] */

void FUN_1066e29c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be10460(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c13cfe0(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1066e2abc; end: 1066e2baf;  */

void FUN_1066e2abc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066e2bb0; end: 1066e2d27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066e2bb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cd110;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar4 = param_2;
  func_0x00010c0cc0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf4d6a0(uVar4);
  func_0x00010c003b80(puVar1);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126cd118;
  _objc_alloc(PTR_PTR_1126cd118);
  func_0x00010bff2840();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066e2d28; end: 1066e2db7; -[SCLensExplorerCategoriesBatchQueryCoordinator _fetchCategoriesQuery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066e2d28(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274e424;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c0f8400();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274e418);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfa3d00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (iVar1 == 0) {
    func_0x00010bfa5940(uVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa5900();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1066e2db8; end: 1066e2e23; -[SCLensExplorerCategoriesBatchQueryCoordinator requestForQuery:] */

void FUN_1066e2db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c136300(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf33120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066e2e24; end: 1066e3003; -[SCLensExplorerCategoriesBatchQueryCoordinator handleReceivedResponseFeeds:forQueryResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066e2e24(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar3 = param_3;
  func_0x00010bf52a60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 != 0) {
    lVar8 = *plStack_130;
    do {
      lVar9 = 0;
      do {
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(undefined8 *)(lStack_138 + lVar9 * 8);
        uVar4 = uVar7;
        func_0x00010bf332e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_170 = puVar1;
        uStack_168 = 0xc2000000;
        pcStack_160 = FUN_1066e3004;
        puStack_158 = &UNK_1109358d0;
        puStack_1a0 = puVar1;
        uStack_198 = 0xc2000000;
        pcStack_190 = FUN_1066e3154;
        puStack_188 = &UNK_110847310;
        lStack_180 = param_1;
        uStack_178 = uVar7;
        lStack_150 = param_1;
        uStack_148 = uVar7;
        func_0x00010c0bcf20();
        _objc_release(uVar4);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11274e428));
  puStack_1a8 = PTR_PTR_1126f2860;
  lVar3 = param_3;
  lStack_1b0 = param_1;
  _objc_msgSendSuper2(&lStack_1b0,PTR_s_handleReceivedResponseFeeds_forQ_1125d2298,param_3,param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0b8600(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x20) + (long)_DAT_11274e41c);
  func_0x00010bfa3d80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bf85d80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa3660(*(undefined8 *)(param_3 + 0x28));
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bfe5be0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf333a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar4);
  lVar8 = (long)_DAT_11274e420;
  func_0x00010bf01980(*(undefined8 *)(*(long *)(param_3 + 0x20) + lVar8));
  iVar2 = (int)*(undefined8 *)(param_3 + 0x28);
  func_0x00010c070480();
  if (iVar2 != 0) {
    uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x20) + lVar8);
    uVar4 = uVar6;
    func_0x00010bf334a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18afc0(uVar7);
    _objc_release(uVar4);
  }
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1066e3004; end: 1066e314b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066e3004(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_1109358b0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274e41c);
  func_0x00010bfa3d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf85d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3660(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe5be0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf333a0(uVar6,param_2,uVar2,uVar3,param_3,uVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar7 = (long)_DAT_11274e420;
  func_0x00010bf01980(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7),param_2,uVar6);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c070480();
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7);
    uVar2 = uVar6;
    func_0x00010bf334a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18afc0(uVar3,param_2,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066e314c; end: 1066e3153;  */

void FUN_1066e314c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ea50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_subcategoryIdentifier_1126754b8);
  return;
}



/* Entry: 1066e3154; end: 1066e323b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066e3154(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274e41c);
  func_0x00010bfa3d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf85d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3660(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe5be0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf333a0(uVar5,param_2,uVar1,uVar2,PTR____NSArray0__struct_11034ab48,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010befbb00(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274e420),param_2,
                      uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1066e323c; end: 1066e324b; -[SCLensExplorerCategoriesBatchQueryCoordinator categoriesAggregator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066e323c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274e428);
}



/* Entry: 1066e324c; end: 1066e32bb; -[SCLensExplorerCategoriesBatchQueryCoordinator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066e324c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274e428,0);
  _objc_storeStrong(param_1 + _DAT_11274e424,0);
  _objc_storeStrong(param_1 + _DAT_11274e420,0);
  _objc_storeStrong(param_1 + _DAT_11274e41c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e418,0);
  return;
}



/* Entry: 1066e32bc; end: 1066e33cb; -[SCLensExplorerCategoriesBatchRefreshQueryCoordinator initWithRequestManager:requestProvider:responseParser:dynamicUpdateHandler:queryStatusChecker:sectionsDataStore:queryFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1066e32bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f2868;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithRequestManager_requestPr_112531820,param_3,param_4,
                      param_5,param_6,0,param_7);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11274e42c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e430;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274e434);
    *(undefined **)((long)puVar1 + (long)_DAT_11274e434) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 1066e33cc; end: 1066e350f; -[SCLensExplorerCategoriesBatchRefreshQueryCoordinator refreshSectionsWithIdentifiers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066e33cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274e42c);
    func_0x00010bfa3980(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1066e3510; end: 1066e3557;  */

void FUN_1066e3510(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be88960();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066e3558; end: 1066e35c7; -[SCLensExplorerCategoriesBatchRefreshQueryCoordinator requestForQuery:] */

void FUN_1066e3558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c136300(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c098760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066e35c8; end: 1066e36e7; -[SCLensExplorerCategoriesBatchRefreshQueryCoordinator _refreshSectionsWithConfigurations:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066e35c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274e430);
    func_0x00010bf17140(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c13cfe0(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1066e36e8; end: 1066e36ef;  */

void FUN_1066e36e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf643f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dataSource_1125b6aa0);
  return;
}



/* Entry: 1066e36f0; end: 1066e3707;  */

void FUN_1066e36f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1066e3708; end: 1066e3757; -[SCLensExplorerCategoriesBatchRefreshQueryCoordinator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066e3708(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274e434,0);
  _objc_storeStrong(param_1 + _DAT_11274e430,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e42c,0);
  return;
}



/* Entry: 1066e3758; end: 1066e37fb; -[SCLensExplorerContainerFeedsBatchUpdateHandler handleFeeds:forQueryResult:] */

void FUN_1066e3758(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1066e37fc;
  puStack_40 = &UNK_110933478;
  lStack_38 = param_1;
  _objc_retain(param_4);
  func_0x00010bfb2660(param_3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1240(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066e37fc; end: 1066e3807;  */

void FUN_1066e37fc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde7790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__containerSubfeedsFromFeed__112557780,param_2);
  return;
}



/* Entry: 1066e3808; end: 1066e380f; -[SCLensExplorerContainerFeedsBatchUpdateHandler handleItems:forFeedId:remoteState:queryResult:] */

void FUN_1066e3808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_handleItems_forFeedId_remoteStat_1125d1ef8);
  return;
}



/* Entry: 1066e3810; end: 1066e39cb; -[SCLensExplorerContainerFeedsBatchUpdateHandler _containerSubfeedsFromFeed:] */

void FUN_1066e3810(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1066e39cc;
  puStack_70 = &UNK_110935940;
  _objc_retain(param_3);
  lStack_68 = param_3;
  _objc_retain(puVar1);
  lVar4 = lVar2;
  puStack_60 = puVar1;
  uStack_58 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar6 = puVar1;
  func_0x00010bf529e0();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = param_3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = PTR_PTR_1126cd120;
    func_0x00010c093500(PTR_PTR_1126cd120);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b1bc0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010bf21f60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar3);
    _objc_retain(puVar1);
    _objc_release(puVar6);
    puVar6 = puVar1;
  }
  _objc_release(lVar4);
  _objc_release(puStack_60);
  _objc_release(lStack_68);
  _objc_release(puVar1);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_98 = FUN_1066e39cc;
  puStack_c0 = puVar6;
  lStack_b8 = lVar4;
  puStack_b0 = puVar1;
  lStack_a8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  puStack_e8 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x3032000000;
  pcStack_d8 = FUN_1066e3b70;
  uStack_d0 = 0x1066e3b80;
  uStack_c8 = 0;
  func_0x00010c0be960(param_2);
  lVar4 = puStack_e8[5];
  puVar6 = param_2;
  if (lVar4 == 0) {
LAB_1066e3afc:
    _objc_retain(param_2);
  }
  else {
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    puVar1 = PTR_PTR_1126ccc88;
    if (lVar5 == 0) goto LAB_1066e3afc;
    func_0x00010bfa3660(*(undefined8 *)(lVar2 + 0x20));
    func_0x00010bfa3f80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      _objc_retain(param_2);
    }
    else {
      func_0x00010befa120(*(undefined8 *)(lVar2 + 0x28));
      puVar6 = *(undefined **)(lVar2 + 0x30);
      func_0x00010be087c0(puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
  }
  __Block_object_dispose(&uStack_f0,8);
  _objc_release(uStack_c8);
  _objc_release(param_2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1066e39cc; end: 1066e3b6f;  */

void FUN_1066e39cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1066e3b70;
  uStack_40 = 0x1066e3b80;
  uStack_38 = 0;
  func_0x00010c0be960(param_2);
  lVar1 = puStack_58[5];
  uVar4 = param_2;
  if (lVar1 != 0) {
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126ccc88;
    if (lVar2 != 0) {
      func_0x00010bfa3660(*(undefined8 *)(param_1 + 0x20));
      func_0x00010bfa3f80();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        _objc_retain(param_2);
      }
      else {
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010be087c0(uVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar3);
      goto LAB_1066e3b20;
    }
  }
  _objc_retain(param_2);
LAB_1066e3b20:
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1066e3b70; end: 1066e3b87;  */

void FUN_1066e3b70(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1066e3b88; end: 1066e3bbf;  */

void FUN_1066e3b88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066e3bc0; end: 1066e3c4f; -[SCLensExplorerContainerFeedsBatchUpdateHandler _emptyContainerFeedItemFromContainer:] */

void FUN_1066e3bc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126cd128;
  func_0x00010c092c00(PTR_PTR_1126cd128);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b1bc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ccc20;
  func_0x00010bf4aea0(PTR_PTR_1126ccc20,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066e3c50; end: 1066e3c5b; -[SCLensExplorerContainerFeedsBatchUpdateHandler .cxx_destruct] */

void FUN_1066e3c50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066e3c5c; end: 1066e3dcb; -[SCLensExplorerDynamicBatchUpdateHandler handleFeeds:forQueryResult:] */

void FUN_1066e3c5c(ulong param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
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
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar10 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar9 = param_1 + 0x18;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar9 != 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(param_3);
    puVar10 = auStack_d8;
    param_5 = 0x10;
    puVar1 = param_3;
    func_0x00010bf52a60();
    if (puVar1 != (undefined1 *)0x0) {
      lVar9 = *plStack_110;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          if (*plStack_110 != lVar9) {
            _objc_enumerationMutation(param_3);
          }
          uVar8 = *(undefined8 *)(lStack_118 + (long)puVar10 * 8);
          uVar2 = param_1;
          func_0x00010be3f1e0(param_1,param_2,uVar8,param_3);
          if ((uVar2 & 1) == 0) {
            func_0x00010bec4180(param_1,param_2,uVar8);
          }
          func_0x00010bed6200(param_1,param_2,uVar8,param_4);
          func_0x00010be54ce0(param_1,param_2,uVar8,param_4);
          puVar10 = puVar10 + 1;
        } while (puVar1 != puVar10);
        puVar10 = auStack_d8;
        param_5 = 0x10;
        puVar1 = param_3;
        puVar7 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    puVar1 = (undefined1 *)puVar7;
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar1);
  _objc_retain(puVar10);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar3 = param_3 + 0x18;
  _objc_loadWeakRetained();
  _objc_release();
  if (puVar3 != (undefined1 *)0x0) {
    uVar2 = param_6;
    func_0x00010c11d080();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c11d680();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c137200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf4b900();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010bf529e0();
    if ((puVar3 != (undefined1 *)0x0) || ((uVar6 & 1) == 0)) {
      param_3 = param_3 + 0x18;
      _objc_loadWeakRetained();
      puVar3 = param_3;
      func_0x00010c0965e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      if (puVar3 != (undefined1 *)0x0) {
        func_0x00010bfd1220(puVar3,param_2,puVar1,param_5,param_6);
      }
      _objc_release(puVar3);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066e3dcc; end: 1066e3f1f; -[SCLensExplorerDynamicBatchUpdateHandler handleItems:forFeedId:remoteState:queryResult:] */

void FUN_1066e3dcc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = param_6;
    func_0x00010c11d080();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11d680();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c137200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf4b900();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010bf529e0();
    if ((lVar1 != 0) || ((uVar5 & 1) == 0)) {
      param_1 = param_1 + 0x18;
      _objc_loadWeakRetained();
      lVar1 = param_1;
      func_0x00010c0965e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      if (lVar1 != 0) {
        func_0x00010bfd1220(lVar1,param_2,param_3,param_5,param_6);
      }
      _objc_release(lVar1);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066e3f20; end: 1066e4207; -[SCLensExplorerDynamicBatchUpdateHandler _storeSectionForFeed:] */

void FUN_1066e3f20(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
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
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_1066e4208;
  uStack_80 = 0x1066e4218;
  uStack_78 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_1066e4208;
  uStack_b0 = 0x1066e4218;
  uStack_a8 = 0;
  lVar1 = param_3;
  func_0x00010bf332e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0bcf20(lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c260ea0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar6 = (undefined *)0x0;
      goto LAB_1066e4080;
    }
  }
  puVar6 = PTR_PTR_1126ccf18;
  _objc_alloc(PTR_PTR_1126ccf18);
  func_0x00010c02db40();
LAB_1066e4080:
  puVar2 = PTR_PTR_1126ccf20;
  _objc_alloc(PTR_PTR_1126ccf20);
  lVar3 = param_3;
  func_0x00010bfa3d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027860(puVar2);
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126ccc58;
  _objc_alloc(PTR_PTR_1126ccc58);
  lVar3 = param_3;
  func_0x00010bfa3d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c130180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0431a0(puVar4);
  _objc_release(lVar5);
  _objc_release(lVar3);
  func_0x00010c257760(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  _objc_release(puVar6);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 1066e4208; end: 1066e421f;  */

void FUN_1066e4208(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1066e4220; end: 1066e42bb;  */

void FUN_1066e4220(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_110935970);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ccbc8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0430e0(puVar1,param_2,uVar2,param_3);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066e42bc; end: 1066e42c3;  */

void FUN_1066e42bc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ea50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_subcategoryIdentifier_1126754b8);
  return;
}



/* Entry: 1066e42c4; end: 1066e4367;  */

void FUN_1066e42c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ccbc8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0430e0(puVar1,param_2,uVar2,PTR____NSArray0__struct_11034ab48);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  func_0x00010bf682a0(uVar2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1066e4368; end: 1066e45c3; -[SCLensExplorerDynamicBatchUpdateHandler _updateCoordinatorForFeed:queryResult:] */

void FUN_1066e4368(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  lVar1 = param_3;
  func_0x00010bf332e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcf20();
  _objc_release(lVar1);
  uVar2 = param_4;
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c137200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf4b900();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar1 = param_3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf529e0();
  if ((lVar6 == 0) && ((*(byte *)(puStack_68 + 3) & 1) == 0)) {
    _objc_release(lVar1);
    if ((uVar5 & 1) != 0) goto LAB_1066e455c;
  }
  else {
    _objc_release(lVar1);
  }
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar1 = param_3;
  func_0x00010bfa3d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c0965e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  if (lVar6 != 0) {
    lVar1 = param_3;
    func_0x00010c084fc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010c12a440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1220(lVar6);
    _objc_release(lVar7);
    _objc_release(lVar1);
  }
  _objc_release(lVar6);
LAB_1066e455c:
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066e45c4; end: 1066e45e7;  */

void FUN_1066e45c4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1066e45e8; end: 1066e45eb; -[SCLensExplorerDynamicBatchUpdateHandler _logInfoForHandledFeed:queryResult:] */

void FUN_1066e45e8(void)

{
  return;
}



/* Entry: 1066e45ec; end: 1066e470f; -[SCLensExplorerDynamicBatchUpdateHandler _isContainerFeed:withinFeeds:] */

undefined8
FUN_1066e45ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1066e4678;
  puStack_30 = &UNK_1109359c0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf04920(param_4,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return param_4;
}



/* Entry: 1066e4710; end: 1066e47f3;  */

undefined1 FUN_1066e4710(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0be960(param_2);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1066e47f4; end: 1066e487b;  */

void FUN_1066e47f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfa3d80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfa3d00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010c0720c0();
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1066e487c; end: 1066e4893; -[SCLensExplorerDynamicBatchUpdateHandler coordinatorFactory] */

void FUN_1066e487c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066e4894; end: 1066e489f; -[SCLensExplorerDynamicBatchUpdateHandler setCoordinatorFactory:] */

void FUN_1066e4894(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1066e48a0; end: 1066e48d7; -[SCLensExplorerDynamicBatchUpdateHandler .cxx_destruct] */

void FUN_1066e48a0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066e48d8; end: 1066e4ad3; -[SCLensExplorerDynamicLayoutBatchUpdateHandler handleFeeds:forQueryResult:] */

void FUN_1066e48d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be06c00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    func_0x00010bfd1240(*(undefined8 *)(param_1 + 8));
  }
  else {
    lVar2 = param_4;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4d6a0();
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    if (lVar3 == 0) {
      func_0x00010bfa66c0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c08cc00();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar4);
    _objc_initWeak(auStack_58,param_1);
    uVar4 = uVar5;
    func_0x00010c268560(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uVar6 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar5);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066e4ad4; end: 1066e4b27;  */

void FUN_1066e4ad4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b1c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066e4b28; end: 1066e4b2f; -[SCLensExplorerDynamicLayoutBatchUpdateHandler handleItems:forFeedId:remoteState:queryResult:] */

void FUN_1066e4b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_handleItems_forFeedId_remoteStat_1125d1ef8);
  return;
}



/* Entry: 1066e4b30; end: 1066e4c37; -[SCLensExplorerDynamicLayoutBatchUpdateHandler _heroItemFromFeedItem:] */

void FUN_1066e4b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1066e4c38;
  uStack_30 = 0x1066e4c48;
  uStack_28 = 0;
  func_0x00010c0be960(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066e4c38; end: 1066e4c4f;  */

void FUN_1066e4c38(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1066e4c50; end: 1066e4cf3;  */

void FUN_1066e4c50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c084fc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be980();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066e4cf4; end: 1066e4d63;  */

void FUN_1066e4cf4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066e4d64; end: 1066e4dc3; -[SCLensExplorerDynamicLayoutBatchUpdateHandler _dynamicLayoutIdsFromFeeds:] */

void FUN_1066e4d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1066e4dc4;
  puStack_20 = &UNK_110933478;
  uStack_18 = param_1;
  func_0x00010bfb2660(param_3,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066e4dc4; end: 1066e4eab;  */

void FUN_1066e4dc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c084fc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066e4eac; end: 1066e4fc3; -[SCLensExplorerDynamicLayoutBatchUpdateHandler _handleLayoutContainerAttributes:responseFeeds:forQueryResult:] */

void FUN_1066e4eac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_110935a10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1066e4fcc;
  puStack_58 = &UNK_110935a60;
  lStack_50 = param_1;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  uVar2 = param_4;
  func_0x00010bf43280(param_4,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bfd1240(*(undefined8 *)(param_1 + 8),param_2,uVar2,param_5);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066e4fc4; end: 1066e4fcb;  */

void FUN_1066e4fc4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_layoutId_112600d78);
  return;
}



/* Entry: 1066e4fcc; end: 1066e512f;  */

void FUN_1066e4fcc(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  puVar2 = puVar1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_2;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf529e0();
  puVar4 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  if (puVar3 == puVar4) {
    _objc_retain(param_2);
    puVar3 = param_2;
  }
  else {
    puVar1 = PTR_PTR_1126cd120;
    func_0x00010c093500(PTR_PTR_1126cd120);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b1bc0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066e5130; end: 1066e51b3;  */

undefined8 FUN_1066e5130(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be351c0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    lVar2 = lVar1;
    func_0x00010c08cda0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 1066e51b4; end: 1066e51fb; -[SCLensExplorerDynamicLayoutBatchUpdateHandler .cxx_destruct] */

void FUN_1066e51b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066e51fc; end: 1066e524b; -[SCLensExplorerFeedLensesBatchUpdateHandler feedResponse] */

void FUN_1066e51fc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1066e524c; end: 1066e52db; -[SCLensExplorerFeedLensesBatchUpdateHandler handleFeeds:forQueryResult:] */

void FUN_1066e524c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar1 = PTR_PTR_1126cd130;
    _objc_alloc(PTR_PTR_1126cd130);
    func_0x00010c012840();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
    _objc_release(puVar1);
  }
  func_0x00010bfd1240(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066e52dc; end: 1066e52e3; -[SCLensExplorerFeedLensesBatchUpdateHandler handleItems:forFeedId:remoteState:queryResult:] */

void FUN_1066e52dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_handleItems_forFeedId_remoteStat_1125d1ef8);
  return;
}



/* Entry: 1066e52e4; end: 1066e5313; -[SCLensExplorerFeedLensesBatchUpdateHandler .cxx_destruct] */

void FUN_1066e52e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066e5314; end: 1066e54bf; -[SCLensExplorerLocalCategoriesBatchQueryCoordinator initWithBaseCategoriesProvider:batchUpdateHandler:feedModelPersisting:categoriesAggregatorMapper:queryFactory:performer:configuration:prefetchPreselectedFeedEnabled:] */

undefined1 *
FUN_1066e5314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_68 = PTR_PTR_1126f2890;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 0x40) = param_10;
    *(undefined1 *)((long)puVar1 + 0x41) = 0;
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066e54c0; end: 1066e587f; -[SCLensExplorerLocalCategoriesBatchQueryCoordinator categoriesResponse] */

void FUN_1066e54c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf331c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be4f2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_98,param_1);
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1066e5880;
  puStack_a8 = &UNK_110842c58;
  _objc_copyWeak(auStack_a0,auStack_98);
  lVar3 = lVar1;
  func_0x00010bf87460(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010be5ca00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af5d0;
  puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar5 = PTR_PTR_1126af5d0;
  puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puStack_e8 = puVar9;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_1066e58ec;
  puStack_d0 = &UNK_110935a90;
  _objc_copyWeak(auStack_c8,auStack_98);
  lVar2 = lVar1;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar11 = auStack_98;
  _objc_copyWeak(auStack_f0);
  lVar2 = lVar1;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar9 = PTR_PTR_1126ae6b8;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_90 = lVar7;
  lStack_88 = lVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cab40(puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar8);
  _objc_destroyWeak(auStack_f0);
  _objc_release(lVar7);
  _objc_destroyWeak(auStack_c8);
  _objc_release(lVar6);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume();
  _objc_retain(puVar11);
  lVar1 = lVar1 + 0x20;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (puVar10 = puVar11, func_0x00010bf529e0(), puVar10 != (undefined1 *)0x0)) &&
     ((*(byte *)(lVar1 + 0x41) & 1) == 0)) {
    func_0x00010be26b80(lVar1);
    *(undefined1 *)(lVar1 + 0x41) = 1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 1066e5880; end: 1066e58eb;  */

void FUN_1066e5880(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && (lVar1 = param_2, func_0x00010bf529e0(), lVar1 != 0)) &&
     ((*(byte *)(param_1 + 0x41) & 1) == 0)) {
    func_0x00010be26b80(param_1);
    *(undefined1 *)(param_1 + 0x41) = 1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066e58ec; end: 1066e599f;  */

void FUN_1066e58ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
LAB_1066e5970:
    uVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010be453a0();
    if ((int)lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010be453a0();
      uVar2 = param_3;
      if ((int)lVar1 == 0) goto LAB_1066e5970;
    }
    else {
      *(undefined1 *)(param_1 + 0x41) = 1;
      uVar2 = param_2;
    }
    _objc_retain(uVar2);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066e59a0; end: 1066e59ab;  */

bool FUN_1066e59a0(undefined8 param_1,long param_2)

{
  return param_2 != 0;
}



/* Entry: 1066e59ac; end: 1066e5a8b;  */

void FUN_1066e59ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((uVar1 == 0) || (uVar2 = uVar1, func_0x00010be453a0(), (uVar2 & 1) != 0)) ||
     (uVar2 = uVar1, func_0x00010be453a0(), puVar4 = PTR_PTR_1126af5d0, (uVar2 & 1) != 0)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126cd138;
    func_0x00010be088e0(PTR_PTR_1126cd138);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066e5a8c; end: 1066e5a97;  */

bool FUN_1066e5a8c(undefined8 param_1,long param_2)

{
  return param_2 != 0;
}



/* Entry: 1066e5a98; end: 1066e5b5f; -[SCLensExplorerLocalCategoriesBatchQueryCoordinator categoriesAggregator] */

void FUN_1066e5a98(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf33080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6b8;
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_48 = lVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cab40(puVar3,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    iVar1 = (int)*(undefined8 *)(lVar2 + 0x38);
    func_0x00010c0f8400();
    if (iVar1 == 0) {
      puVar5 = *(undefined **)(lVar2 + 0x18);
      uVar4 = *(undefined8 *)(lVar2 + 0x38);
      func_0x00010bfa3d00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa3fc0(puVar5,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (*(char *)(lVar2 + 0x40) == '\x01') {
        uVar4 = *(undefined8 *)(lVar2 + 0x38);
        func_0x00010bfa3d00(uVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar4 = 0;
      }
      puVar5 = *(undefined **)(lVar2 + 0x18);
      func_0x00010bfa3fa0(puVar5,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = puVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066e5b60; end: 1066e5c27; -[SCLensExplorerLocalCategoriesBatchQueryCoordinator _localFeedsObservable] */

void FUN_1066e5b60(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010c0f8400();
  if (iVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bfa3d00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa3fc0(uVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(char *)(param_1 + 0x40) == '\x01') {
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bfa3d00(uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar2 = 0;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bfa3fa0(uVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = uVar3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1066e5c28; end: 1066e5cf7; -[SCLensExplorerLocalCategoriesBatchQueryCoordinator _mapCacheToBatchResponseObservable:] */

void FUN_1066e5c28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066e5cf8; end: 1066e5e2f;  */

void FUN_1066e5cf8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_2;
    func_0x00010bf529e0();
    puVar5 = PTR_PTR_1126af5d0;
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126cd138;
      func_0x00010be088e0(PTR_PTR_1126cd138);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = *(undefined **)(param_1 + 0x20);
      func_0x00010bf330a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x48));
      puVar3 = PTR_PTR_1126cd110;
      _objc_alloc(PTR_PTR_1126cd110);
      func_0x00010c003b80();
      puVar4 = PTR_PTR_1126cd118;
      _objc_alloc(PTR_PTR_1126cd118);
      func_0x00010bff2840();
      puVar5 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1066e5e30; end: 1066e5edb; -[SCLensExplorerLocalCategoriesBatchQueryCoordinator _handleCacheFeedModels:] */

void FUN_1066e5e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bddbe80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccfd8;
  _objc_alloc(PTR_PTR_1126ccfd8);
  func_0x00010c003b80();
  puVar3 = PTR_PTR_1126ccfe0;
  _objc_alloc(PTR_PTR_1126ccfe0);
  func_0x00010c03c280();
  func_0x00010bfd1240(*(undefined8 *)(param_1 + 0x10),param_2,param_3,puVar3);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066e5edc; end: 1066e5f5b; -[SCLensExplorerLocalCategoriesBatchQueryCoordinator _categoriesQuery] */

void FUN_1066e5edc(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010c0f8400();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfa3d00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (iVar1 == 0) {
    func_0x00010bfa5940(uVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa5900();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1066e5f5c; end: 1066e6047; -[SCLensExplorerLocalCategoriesBatchQueryCoordinator _isValidFetchResult:allowInProgressState:] */

undefined1 FUN_1066e5f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0c0800(param_3);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1066e6048; end: 1066e60fb;  */

void FUN_1066e6048(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c071ae0();
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x20);
    uVar2 = param_2;
    func_0x00010befea40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be452a0();
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar3;
    _objc_release(uVar2);
  }
  else {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
         *(undefined1 *)(param_1 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066e60fc; end: 1066e610b;  */

void FUN_1066e60fc(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1066e610c; end: 1066e61a3; -[SCLensExplorerLocalCategoriesBatchQueryCoordinator _isValidAggregator:] */

bool FUN_1066e610c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf33060();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      lVar3 = param_3;
      func_0x00010c25e9a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      bVar1 = lVar4 != 0;
      _objc_release(lVar3);
    }
    else {
      bVar1 = true;
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1066e61a4; end: 1066e6283; +[SCLensExplorerLocalCategoriesBatchQueryCoordinator _emptyResultError] */

void FUN_1066e61a4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 1066e6284; end: 1066e62fb; -[SCLensExplorerLocalCategoriesBatchQueryCoordinator .cxx_destruct] */

void FUN_1066e6284(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
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


