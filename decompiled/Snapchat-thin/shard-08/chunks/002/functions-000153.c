/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ea9828; end: 105ea9c53;  */

undefined1 * FUN_105ea9828(double param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  long lStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined4 uStack_94;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_94 = param_3;
  _objc_retain();
  lVar4 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar6;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b19f8;
  func_0x00010bf81400();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c0 = 1;
  uStack_c8 = 0;
  uStack_cc = CONCAT31(uStack_cc._1_3_,1);
  uStack_d0 = 7;
  lVar11 = lVar4;
  func_0x000108feb5c8(lVar4,lVar22,lVar5,lVar6,lVar8,0,0,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lStack_a0);
  _objc_release(lVar5);
  _objc_release(lVar22);
  _objc_release(lVar4);
  func_0x00010b816218();
  param_1 = (double)(long)(param_1 * 3.3333333333333335) / param_1;
  lStack_a0 = lVar11;
  func_0x000107cf5f4c(0x4049000000000000,0x4049000000000000,param_1 + param_1,param_1,0,param_1,
                      lVar11,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c5778;
  lStack_a8 = lVar11;
  func_0x00010c244300();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b02a8;
  _objc_alloc();
  puVar12 = PTR_PTR_1126c5750;
  _objc_alloc(PTR_PTR_1126c5750);
  func_0x00010c049040();
  func_0x00010c01b460();
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126b02a8;
  _objc_alloc();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e2f338;
  lVar4 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e2f358;
  puStack_78 = PTR____kCFBooleanFalse_11034ab60;
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_80 = lVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  _objc_release(puVar13);
  _objc_release(lVar4);
  puVar13 = PTR_PTR_1126b02a8;
  _objc_alloc();
  puVar14 = PTR_PTR_1126c5750;
  _objc_alloc(PTR_PTR_1126c5750);
  func_0x00010c049040();
  func_0x00010c01b460();
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126c5788;
  _objc_alloc();
  lVar4 = param_2;
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_2;
    func_0x000108f47298();
  }
  _objc_release(param_2);
  uStack_d0 = CONCAT31(uStack_d0._1_3_,(char)uStack_94);
  puVar15 = puVar14;
  lVar6 = lVar4;
  puVar18 = puVar9;
  puVar19 = puVar10;
  puVar20 = puVar12;
  puVar21 = puVar13;
  func_0x00010c01a640();
  _objc_release(lVar4);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lStack_a8);
  lVar5 = lStack_a0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return puVar15;
  }
  ___stack_chk_fail();
  uVar3 = uStack_c8;
  plVar16 = &lStack_140;
  ppuStack_100 = &PTR_PTR_1108f1728;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110e2f278;
  pcStack_d8 = FUN_105ea9c54;
  uVar2 = CONCAT71(uStack_bf,uStack_c0);
  uVar1 = CONCAT44(uStack_cc,uStack_d0);
  puStack_130 = puVar14;
  lStack_128 = lVar4;
  puStack_120 = puVar13;
  puStack_118 = puVar12;
  puStack_110 = puVar10;
  puStack_108 = puVar9;
  lStack_f0 = param_2;
  puStack_e8 = puVar15;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(lVar6);
  _objc_retain(lVar22);
  _objc_retain(puVar18);
  _objc_retain(puVar19);
  _objc_retain(puVar20);
  _objc_retain(puVar21);
  _objc_retain(uVar1);
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  puStack_138 = PTR_PTR_1126eda68;
  lStack_140 = lVar5;
  _objc_msgSendSuper2(&lStack_140,PTR_s_init_1125d9248);
  if (plVar16 != (long *)0x0) {
    _objc_retain(lVar6);
    uVar17 = *(undefined8 *)((long)plVar16 + 8);
    *(long *)((long)plVar16 + 8) = lVar6;
    _objc_release(uVar17);
    _objc_retain(lVar22);
    uVar17 = *(undefined8 *)((long)plVar16 + 0x10);
    *(long *)((long)plVar16 + 0x10) = lVar22;
    _objc_release(uVar17);
    _objc_retain(puVar18);
    uVar17 = *(undefined8 *)((long)plVar16 + 0x18);
    *(undefined **)((long)plVar16 + 0x18) = puVar18;
    _objc_release(uVar17);
    _objc_retain(puVar19);
    uVar17 = *(undefined8 *)((long)plVar16 + 0x20);
    *(undefined **)((long)plVar16 + 0x20) = puVar19;
    _objc_release(uVar17);
    _objc_retain(puVar20);
    uVar17 = *(undefined8 *)((long)plVar16 + 0x28);
    *(undefined **)((long)plVar16 + 0x28) = puVar20;
    _objc_release(uVar17);
    _objc_retain(puVar21);
    uVar17 = *(undefined8 *)((long)plVar16 + 0x30);
    *(undefined **)((long)plVar16 + 0x30) = puVar21;
    _objc_release(uVar17);
    _objc_retain(uVar1);
    uVar17 = *(undefined8 *)((long)plVar16 + 0x38);
    *(undefined8 *)((long)plVar16 + 0x38) = uVar1;
    _objc_release(uVar17);
    _objc_retain(uVar3);
    uVar17 = *(undefined8 *)((long)plVar16 + 0x40);
    *(undefined8 *)((long)plVar16 + 0x40) = uVar3;
    _objc_release(uVar17);
    _objc_retain(uVar2);
    uVar17 = *(undefined8 *)((long)plVar16 + 0x48);
    *(undefined8 *)((long)plVar16 + 0x48) = uVar2;
    _objc_release(uVar17);
  }
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(lVar22);
  _objc_release(lVar6);
  return (undefined1 *)plVar16;
}



/* Entry: 105ea9c54; end: 105ea9e23; -[SCDiscoverFeedManagementFullScreenDataProviderFactory initWithDiscoverFeedManagementFullScreenDataCoordinator:snapchattersDataFetcher:snapchatterPublicInfoFetcher:userSession:imageDownloader:snapProServices:creatorSettingsFetcher:creatorSettingsTracker:circumstanceEngine:] */

undefined1 *
FUN_105ea9c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126eda68;
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



/* Entry: 105ea9e24; end: 105ea9ea7; -[SCDiscoverFeedManagementFullScreenDataProviderFactory sectionDataProviderForEnum:] */

void FUN_105ea9e24(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    _objc_alloc(PTR_PTR_1126c5798);
    func_0x00010c049960();
  }
  else if (param_3 == 0) {
    _objc_alloc(PTR_PTR_1126c5790);
    func_0x00010c00cf00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ea9ea8; end: 105ea9f2b; -[SCDiscoverFeedManagementFullScreenDataProviderFactory .cxx_destruct] */

void FUN_105ea9ea8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 105ea9f2c; end: 105ea9f37; +[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider announcerIdentifier] */

undefined ** FUN_105ea9f2c(void)

{
  return &PTR____CFConstantStringClassReference_110e2ee18;
}



/* Entry: 105ea9f38; end: 105ea9f3f; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider addListener:] */

void FUN_105ea9f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105ea9f40; end: 105ea9f47; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider removeListener:] */

void FUN_105ea9f40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105ea9f48; end: 105eaa0eb; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider initWithSnapchattersDataFetcher:snapchatterPublicInfoFetcher:userSession:imageDownloader:snapProServices:creatorSettingsFetcher:creatorSettingsTracker:] */

undefined1 *
FUN_105ea9f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126eda70;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c1176a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_9;
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



/* Entry: 105eaa0ec; end: 105eaa1c3; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider reloadDataWithFilterBlock:] */

void FUN_105eaa0ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105eaa1c4; end: 105eaa223;  */

void FUN_105eaa1c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(lVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bee3a20();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105eaa224; end: 105eaa25f; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider setUp] */

void FUN_105eaa224(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105eaa260; end: 105eaa29b; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider tearDown] */

void FUN_105eaa260(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105eaa29c; end: 105eaa31f; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_105eaa29c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c57a0;
  _objc_opt_class();
  ppuVar3 = &puStack_20;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined ***)(puVar2 + 0x68) = ppuVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bed69f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s__updateDataFromCreatorSettingsDa_112593420);
  return;
}



/* Entry: 105eaa320; end: 105eaa357; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider setSectionDataModel:] */

void FUN_105eaa320(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed69f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDataFromCreatorSettingsDa_112593420);
  return;
}



/* Entry: 105eaa358; end: 105eaa35f; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider numberOfItemsInSection:] */

void FUN_105eaa358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105eaa360; end: 105eaa48f; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_105eaa360(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105eaa490;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e2f3b8;
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  puVar4 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar4);
  _objc_retain(puVar5);
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bde5ba0();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105eaa490; end: 105eaa4d7;  */

void FUN_105eaa490(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5ba0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eaa4d8; end: 105eaa52b; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_105eaa4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105eaa52c;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105eaa52c; end: 105eaa55b;  */

void FUN_105eaa52c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return;
}



/* Entry: 105eaa55c; end: 105eaa60b; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_105eaa55c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4030;
  func_0x00010bf5b2a0(PTR_PTR_1126b4030);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  if ((int)uVar2 == 0) {
    puVar3 = PTR_PTR_1126b4030;
    func_0x00010bf5b320(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) goto LAB_105eaa5f4;
  }
  else {
    _objc_release(puVar1);
  }
  func_0x00010bed69e0(param_1);
LAB_105eaa5f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105eaa60c; end: 105eaa67f; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider _configureStoryCardCollectionViewCell:] */

void FUN_105eaa60c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c57a0;
  _objc_opt_class(PTR_PTR_1126c57a0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105eaa680; end: 105eaa7a3; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider _updateDataFromCreatorSettingsDataStore] */

void FUN_105eaa680(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4028;
  func_0x00010bf81a20(PTR_PTR_1126b4028);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfe1420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100504554();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4028;
  func_0x00010bf81a20(PTR_PTR_1126b4028);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bfe1520(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x000100504554();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar5);
  func_0x00010be135a0(param_1);
  func_0x00010be143a0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105eaa7a4; end: 105eaa7b3;  */

void FUN_105eaa7a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 105eaa7b4; end: 105eaa95b; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider _fetchSnapchattersMetadata:] */

void FUN_105eaa7b4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105eaa95c;
    puStack_48 = &UNK_1108434b0;
    puVar4 = auStack_40;
    _objc_copyWeak(puVar4,auStack_38);
    func_0x00010c0f7fc0(uVar3);
  }
  else {
    uVar1 = param_3;
    func_0x00010bf529e0();
    uVar2 = param_3;
    if (0x140 < uVar1) {
      func_0x00010c25e980(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = auStack_68;
    _objc_copyWeak(puVar4,auStack_38);
    func_0x00010c244ea0(uVar5);
    _objc_release(uVar3);
    param_3 = uVar2;
  }
  _objc_destroyWeak(puVar4);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105eaa95c; end: 105eaa9d7;  */

void FUN_105eaa95c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eaa9d8; end: 105eaaabb; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider _updateSnapchattersMetadata:] */

void FUN_105eaa9d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_1108f14f8);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105eaaabc; end: 105eaab2b;  */

bool FUN_105eaaabc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08fa60();
  _objc_release(param_2);
  return lVar1 != 0;
}



/* Entry: 105eaab2c; end: 105eaad3b; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider _fetchPublishersMetadata:] */

void FUN_105eaab2c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105eaad3c;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c0f7fc0(uVar6);
    _objc_destroyWeak(auStack_60);
  }
  else {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c1176c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_58);
    _objc_retain(puVar2);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar3);
    func_0x00010bef7e00(puVar2);
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_88);
    _objc_release(puVar2);
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105eaad3c; end: 105eaad67;  */

void FUN_105eaad3c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eaad68; end: 105eaae5f;  */

void FUN_105eaad68(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105eaae60;
  puStack_50 = &UNK_110842c58;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_copyWeak(auStack_70,param_1 + 0x28);
  func_0x00010c0c0800(param_2);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x20));
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 105eaae60; end: 105eaaedb;  */

void FUN_105eaae60(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bede340();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eaaedc; end: 105eaafbf; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider _updatePublishersMetadata:] */

void FUN_105eaaedc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_1108f1538);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105eaafc0; end: 105eab02f;  */

bool FUN_105eaafc0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c11b1e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08fa60();
  _objc_release(param_2);
  return lVar1 != 0;
}



/* Entry: 105eab030; end: 105eab13f; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider _updateViewModels] */

void FUN_105eab030(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  func_0x00010befa160();
  func_0x00010befa160(puVar1);
  _objc_retain(&PTR___NSConcreteGlobalBlock_1108f1498);
  puVar2 = puVar1;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR___NSConcreteGlobalBlock_1108f1498);
  puVar3 = puVar2;
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x0001006372a4();
    _objc_release(puVar2);
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105eab140;
  puStack_40 = &UNK_1108f1558;
  puStack_38 = puVar3;
  _objc_retain(puVar3);
  puVar2 = puVar3;
  func_0x00010bd86420(puVar3,&puStack_58);
  func_0x00010bed5ec0(param_1);
  _objc_release(puVar2);
  _objc_release(puStack_38);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105eab140; end: 105eab22b;  */

void FUN_105eab140(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0(lVar1);
  puVar2 = PTR_PTR_1126b15c8;
  _objc_opt_class(PTR_PTR_1126b15c8);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  puVar2 = PTR_PTR_1126aea98;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  uVar4 = param_2;
  if ((uVar3 & 1) == 0) {
    FUN_105ea95fc(param_2,param_3 == lVar1 + -1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_105ea9828();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  func_0x00010bffd260(puVar2);
  _objc_release(uVar4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105eab22c; end: 105eab277; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider _updateContainerCellViewModels:] */

void FUN_105eab22c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eab278; end: 105eab27f; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider sectionDataModel] */

undefined8 FUN_105eab278(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105eab280; end: 105eab297; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider dataProviderDelegate] */

void FUN_105eab280(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105eab298; end: 105eab2a3; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider setDataProviderDelegate:] */

void FUN_105eab298(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 105eab2a4; end: 105eab2ab; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider updateQueuePerformer] */

undefined8 FUN_105eab2a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105eab2ac; end: 105eab2db; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider setUpdateQueuePerformer:] */

void FUN_105eab2ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105eab2dc; end: 105eab3a3; -[SCDiscoverFeedManagementHiddenChannelsSectionDataProvider .cxx_destruct] */

void FUN_105eab2dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105eab3a4; end: 105eab53f; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider initWithDiscoverFeedManagementFullScreenDataCoordinator:snapchattersDataFetcher:userSession:imageDownloader:snapProServices:creatorSettingsFetcher:creatorSettingsTracker:circumstanceEngine:] */

undefined1 *
FUN_105eab3a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126eda78;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x50) = 0;
    *(undefined8 *)((long)puVar1 + 0x58) = 0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_9;
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



/* Entry: 105eab540; end: 105eab54b; +[SCDiscoverFeedManagementSubscriptionsSectionDataProvider announcerIdentifier] */

undefined ** FUN_105eab540(void)

{
  return &PTR____CFConstantStringClassReference_110e2ee38;
}



/* Entry: 105eab54c; end: 105eab553; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider addListener:] */

void FUN_105eab54c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105eab554; end: 105eab55b; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider removeListener:] */

void FUN_105eab554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105eab55c; end: 105eab633; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider reloadDataWithFilterBlock:] */

void FUN_105eab55c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105eab634; end: 105eab693;  */

void FUN_105eab634(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)(lVar1 + 0x80) = uVar2;
    _objc_release(uVar3);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bee3a20();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105eab694; end: 105eab6db; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider setUp] */

void FUN_105eab694(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bef7c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addDataUpdateListener__11259b8c0,param_1);
  return;
}



/* Entry: 105eab6dc; end: 105eab723; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider tearDown] */

void FUN_105eab6dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bef7c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addDataUpdateListener__11259b8c0,param_1);
  return;
}



/* Entry: 105eab724; end: 105eab7ff; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider setSectionDataModel:] */

void FUN_105eab724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105eab800; end: 105eab82b;  */

void FUN_105eab800(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0f880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eab82c; end: 105eab87f; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_105eab82c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105eab880;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105eab880; end: 105eab8af;  */

void FUN_105eab880(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return;
}



/* Entry: 105eab8b0; end: 105eab933; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_105eab8b0(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105eab934; end: 105eab93b; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider numberOfItemsInSection:] */

void FUN_105eab934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105eab93c; end: 105eaba6b; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_105eab93c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105eaba6c;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e2f398;
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  puVar4 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar4);
  _objc_retain(puVar5);
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bde5c00();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105eaba6c; end: 105eabab3;  */

void FUN_105eaba6c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5c00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eabab4; end: 105eabc27; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider dataCoordinatorDidUpdateWithIdentifier:dataRequest:] */

void FUN_105eabab4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_opt_class(uVar2);
  func_0x00010bf63740();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar5 != 0) {
    _objc_retain(param_4);
    puVar3 = PTR_PTR_1126c5758;
    _objc_opt_class(PTR_PTR_1126c5758);
    uVar4 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar3);
    uVar1 = param_4;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    if (uVar1 != 0) {
      uVar4 = param_4;
      func_0x00010c235100();
      *(char *)(param_1 + 0x48) = (char)uVar4;
      uVar5 = *(undefined8 *)(param_1 + 0xa0);
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c0f7fc0(uVar5);
      _objc_destroyWeak(auStack_50);
    }
    _objc_release(uVar1);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105eabc28; end: 105eabc53;  */

void FUN_105eabc28(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0f880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eabc54; end: 105eabe77; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_105eabc54(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0720c0();
  _objc_release(uVar8);
  _objc_release(uVar1);
  if ((int)uVar2 == 0) goto LAB_105eabdd8;
  puVar3 = PTR_PTR_1126b4030;
  func_0x00010bf5b300(PTR_PTR_1126b4030);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
    puVar5 = PTR_PTR_1126b4030;
    func_0x00010bf5b340(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0();
    if ((uVar4 & 1) != 0) {
LAB_105eabd60:
      _objc_release(puVar5);
      goto LAB_105eabd68;
    }
    puVar6 = PTR_PTR_1126b4030;
    func_0x00010bf5b2c0(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar4 != 0) {
      _objc_release(puVar6);
      goto LAB_105eabd60;
    }
    puVar7 = PTR_PTR_1126b4030;
    func_0x00010bf5b2e0(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    if ((uVar4 & 1) == 0) goto LAB_105eabdd8;
  }
  else {
LAB_105eabd68:
    _objc_release(puVar3);
  }
  _objc_initWeak(auStack_68,param_1);
  uVar8 = *(undefined8 *)(param_1 + 0xa0);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0f7fc0(uVar8);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
LAB_105eabdd8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105eabe78; end: 105eabea3;  */

void FUN_105eabe78(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0f880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eabea4; end: 105eabfcf; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider _updateViewModels] */

void FUN_105eabea4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if ((*(long *)(param_1 + 0x50) == 2) && (*(long *)(param_1 + 0x58) == 2)) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010befa160();
    func_0x00010befa160(puVar1);
    _objc_retain(&PTR___NSConcreteGlobalBlock_1108f1498);
    puVar2 = puVar1;
    func_0x00010c246ca0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(&PTR___NSConcreteGlobalBlock_1108f1498);
    puVar3 = puVar2;
    if (*(long *)(param_1 + 0x80) != 0) {
      func_0x0001006372a4(puVar2);
      _objc_release(puVar2);
    }
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105eabfd0;
    puStack_40 = &UNK_1108f1588;
    puVar2 = puVar3;
    lStack_38 = param_1;
    func_0x000100504554(puVar3,&puStack_58);
    func_0x00010bed5ec0(param_1);
    _objc_release(puVar2);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105eabfd0; end: 105eac1b7;  */

void FUN_105eabfd0(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b15c8;
  _objc_opt_class(PTR_PTR_1126b15c8);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  puVar1 = PTR_PTR_1126aea98;
  if ((uVar3 & 1) == 0) {
    _objc_retain(param_2);
    _objc_alloc(puVar1);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
    func_0x00010bf51e00(uVar5);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x000105ea8d20(param_2,uVar5,uVar2,*(undefined1 *)(*(long *)(param_1 + 0x20) + 0x48));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010bffd260(puVar1);
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
    _objc_retain(param_2);
    uVar3 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
    func_0x00010bf51e00(uVar2);
    uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x000105ea903c(param_2,uVar5,uVar2,uVar3,*(undefined1 *)(*(long *)(param_1 + 0x20) + 0x48))
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010bffd260(puVar1);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105eac1b8; end: 105eac353; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider _fetchAndUpdateViewModels] */

void FUN_105eac1b8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar4 = &puStack_70;
  if ((*(long *)(param_1 + 0x50) != 1) && (*(long *)(param_1 + 0x58) != 1)) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b4028;
    func_0x00010bf81a20(PTR_PTR_1126b4028);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c2604e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar1);
    uVar1 = uVar3;
    func_0x00010050471c(uVar3,&PTR___NSConcreteGlobalBlock_1108f15b8,
                        &PTR___NSConcreteGlobalBlock_1108f15d8);
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = uVar1;
    _objc_release(uVar5);
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105eac384;
    puStack_58 = &UNK_1108531d0;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retainBlock(&puStack_70);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    uVar1 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010690eecc(uVar3,uVar6,uVar5,1,ppuVar4,uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 105eac354; end: 105eac35b;  */

void FUN_105eac354(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 105eac35c; end: 105eac383;  */

void FUN_105eac35c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105eac384; end: 105eac65f;  */

void FUN_105eac384(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar5 = param_2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar6 == 0) {
      _objc_release(lVar5);
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained();
      if (param_1 != 0) {
        uVar13 = *(undefined8 *)(param_1 + 0xa0);
        _objc_retain(puVar2);
        _objc_retain(puVar3);
        _objc_retain(puVar4);
        func_0x00010c0f7fc0(uVar13);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
      }
      _objc_release(param_1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        return;
      }
      ___stack_chk_fail();
      uVar13 = *(undefined8 *)(param_2 + 0x20);
      uVar12 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bf51e00(uVar12);
      uVar9 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010bf51e00(uVar9);
      func_0x00010bee0500(uVar13);
      _objc_release(uVar9);
      _objc_release(uVar12);
      uVar12 = *(undefined8 *)(param_2 + 0x20);
      uVar13 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010bf51e00(uVar13);
      func_0x00010bede340(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar13);
      return;
    }
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      lVar14 = *(long *)(lVar11 * 8);
      lVar7 = lVar14;
      func_0x00010c244280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar7 == 0) {
        func_0x00010c242840(lVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
LAB_105eac534:
        _objc_release(lVar14);
      }
      else {
        lVar7 = lVar14;
        func_0x00010c244280(lVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(lVar7);
        lVar7 = lVar14;
        func_0x00010c242840();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar7 != 0) {
          lVar7 = lVar14;
          func_0x00010c242840(lVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c244280(lVar14);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar14;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(puVar3);
          _objc_release(lVar8);
          _objc_release(lVar14);
          lVar14 = lVar7;
          goto LAB_105eac534;
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar6 != lVar11);
    lVar6 = lVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105eac660; end: 105eac6db;  */

void FUN_105eac660(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf51e00(uVar1);
  func_0x00010bee0500(uVar2,param_2,uVar3,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf51e00(uVar2);
  func_0x00010bede340(uVar3,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105eac6dc; end: 105eac74f; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider _configureSubscriptionCellForReuse:] */

void FUN_105eac6dc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c57a8;
  _objc_opt_class(PTR_PTR_1126c57a8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105eac750; end: 105eac87f; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider _updateSnapchattersMetadata:businessProfiles:] */

void FUN_105eac750(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_4;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x0001006372a4(uVar1,&PTR___NSConcreteGlobalBlock_1108f15f8);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0x50) = 2;
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105eac880; end: 105eac8ef;  */

long FUN_105eac880(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010901d398(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2;
}



/* Entry: 105eac8f0; end: 105eac91b;  */

void FUN_105eac8f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eac91c; end: 105eaca07; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider _updatePublishersMetadata:] */

void FUN_105eac91c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_1108f1618);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x58) = 2;
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105eaca08; end: 105eaca77;  */

bool FUN_105eaca08(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c11b1e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08fa60();
  _objc_release(param_2);
  return lVar1 != 0;
}



/* Entry: 105eaca78; end: 105eacac3; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider _updateContainerCellViewModels:] */

void FUN_105eaca78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  param_1 = param_1 + 0x98;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eacac4; end: 105eacacb; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider sectionDataModel] */

undefined8 FUN_105eacac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 105eacacc; end: 105eacae3; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider dataProviderDelegate] */

void FUN_105eacacc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105eacae4; end: 105eacaef; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider setDataProviderDelegate:] */

void FUN_105eacae4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 105eacaf0; end: 105eacaf7; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider updateQueuePerformer] */

undefined8 FUN_105eacaf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 105eacaf8; end: 105eacb27; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider setUpdateQueuePerformer:] */

void FUN_105eacaf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105eacb28; end: 105eacc07; -[SCDiscoverFeedManagementSubscriptionsSectionDataProvider .cxx_destruct] */

void FUN_105eacb28(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 105eacc08; end: 105eaccc3;  */

void FUN_105eacc08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f41858);
  _objc_release(puVar2);
  func_0x00010c1d0640(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3ee0,
                      &PTR____CFConstantStringClassReference_110dcad78);
  lVar3 = param_1;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    func_0x00010bef7f60(puVar1,param_2,param_1);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105eaccc4; end: 105eacecb;  */

void FUN_105eaccc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f41858);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c1d0640(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3ee0,
                      &PTR____CFConstantStringClassReference_110dcad78);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e5f1f8);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f418b8);
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    func_0x00010bef7f60(puVar1,param_2,param_1);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105eacecc; end: 105eacf63;  */

long FUN_105eacecc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c067fc0();
  _objc_release(param_2);
  lVar2 = param_1;
  func_0x00010bf81aa0();
  if (lVar1 < lVar2) {
    lVar1 = param_1;
    func_0x00010bf81aa0(param_1);
  }
  else {
    func_0x00010c18f040(param_1);
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105eacf64; end: 105eacfa3;  */

void FUN_105eacf64(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_105eacecc(param_1,param_2);
  func_0x00010c18f040(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eacfa4; end: 105ead55b; -[SCDiscoverFeedManagementSettingFullScreenViewController initWithDiscoverFeedManagementSettingConfig:imageDownloader:presentPublicUserProfileBlock:impalaShowProfileActionHandlerProvider:impalaPublisherProfileActionHandlerProvider:discoverFeedDataMutator:discoverFeedDataFetcher:requestNotificationPermissionsBlock:displayOptInNotificationPromptBlock:willDismissBlock:snapProServices:creatorSettingsFetcher:creatorSettingsTracker:creatorSettingsMutator:userSession:snapchattersDataFetcher:snapchatterPublicInfoFetcher:circumstanceEngine:interactionHistoryManager:customAppThemeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105eacfa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  puStack_70 = PTR_PTR_1126eda80;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar8 = (long)_DAT_112739048;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_3;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11273904c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112739050);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112739050) = uVar2;
    _objc_release(uVar6);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112739054);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112739054) = uVar2;
    _objc_release(uVar6);
    uVar2 = param_7;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112739058);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112739058) = uVar2;
    _objc_release(uVar6);
    lVar7 = (long)_DAT_11273905c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_8;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112739060;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_9;
    _objc_release(uVar2);
    uVar2 = param_10;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112739064);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112739064) = uVar2;
    _objc_release(uVar6);
    uVar2 = param_11;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112739068);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112739068) = uVar2;
    _objc_release(uVar6);
    uVar2 = param_12;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273906c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273906c) = uVar2;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112739070);
    *(undefined **)((long)puVar1 + (long)_DAT_112739070) = puVar3;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112739074;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_13;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112739078;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_14;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11273907c;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_15;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112739080;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_16;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112739084;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_17;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112739088;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_19;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11273908c;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_18;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112739090;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_20;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112739094;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_21;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112739098;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_22;
    _objc_release(uVar2);
    func_0x00010bfdf100(*(undefined8 *)((long)puVar1 + lVar8));
    puVar4 = puVar1;
    func_0x00010be34c00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194c0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c2711a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240();
    _objc_release(puVar4);
    _objc_release(uVar2);
    puVar4 = puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8420();
    _objc_release(puVar4);
    func_0x00010bfdb7e0();
    puVar4 = puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8460();
    _objc_release(puVar4);
    func_0x00010c20eaa0(puVar1);
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105ead55c; end: 105ead567; +[SCDiscoverFeedManagementSettingFullScreenViewController announcerIdentifier] */

undefined ** FUN_105ead55c(void)

{
  return &PTR____CFConstantStringClassReference_110e2ee78;
}



/* Entry: 105ead568; end: 105ead577; -[SCDiscoverFeedManagementSettingFullScreenViewController addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ead568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112739070),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105ead578; end: 105ead587; -[SCDiscoverFeedManagementSettingFullScreenViewController removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ead578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112739070),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105ead588; end: 105ead597; -[SCDiscoverFeedManagementSettingFullScreenViewController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ead588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112739070),
             PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 105ead598; end: 105ead66f; -[SCDiscoverFeedManagementSettingFullScreenViewController loadScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ead598(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  puVar2 = PTR_PTR_1126c21f0;
  _objc_opt_new(PTR_PTR_1126c21f0);
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c2026e0(puVar1,param_2,0);
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e2ee98);
  lVar4 = (long)_DAT_11273909c;
  _objc_retain(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ead670; end: 105ead89f; -[SCDiscoverFeedManagementSettingFullScreenViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ead670(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined **ppuStack_1f0;
  long lStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126eda80;
  lStack_88 = param_1;
  _objc_msgSendSuper2(&lStack_88,PTR_s_loadView_112604be0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112739048);
  func_0x00010c260dc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bec8ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_1127390a0;
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  *(long *)(param_1 + lVar16) = lVar5;
  _objc_release(uVar13);
  _objc_release(uVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
  lVar5 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar16);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  lStack_78 = lVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(lVar16);
  _objc_release(param_1);
  _objc_release(uVar13);
  _objc_release(lVar15);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_105ead8a0;
  lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = PTR_PTR_1126eda80;
  lStack_148 = lVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_148,PTR_s_viewDidLoad_112684cd8);
  puVar4 = PTR_PTR_1126c57b0;
  _objc_alloc();
  func_0x00010c05ce40();
  puVar3 = PTR_PTR_1126c57b8;
  _objc_alloc();
  lVar5 = *(long *)(lVar2 + _DAT_112739054);
  (**(code **)(lVar5 + 0x10))(lVar5,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(lVar2 + _DAT_112739058);
  (**(code **)(lVar6 + 0x10))(lVar6,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_1d0 = *(undefined8 *)(lVar2 + _DAT_112739064);
  uStack_1c8 = *(undefined8 *)(lVar2 + _DAT_112739068);
  uStack_1c0 = *(undefined8 *)(lVar2 + _DAT_112739080);
  uStack_1b8 = *(undefined8 *)(lVar2 + _DAT_112739094);
  func_0x00010c00cec0();
  _objc_release(lVar6);
  _objc_release(lVar5);
  func_0x00010bef9980(puVar3);
  func_0x00010c1e1580(puVar3);
  lVar5 = (long)_DAT_1127390a4;
  _objc_retain(puVar3);
  uVar1 = *(undefined8 *)(lVar2 + lVar5);
  *(undefined **)(lVar2 + lVar5) = puVar3;
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126c57c0;
  _objc_alloc();
  uVar1 = *(undefined8 *)(lVar2 + _DAT_11273908c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar2 + _DAT_112739088);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uStack_1d0 = *(undefined8 *)(lVar2 + _DAT_112739078);
  uStack_1c8 = *(undefined8 *)(lVar2 + _DAT_11273907c);
  uStack_1c0 = *(undefined8 *)(lVar2 + _DAT_112739090);
  puStack_150 = puVar4;
  func_0x00010c00cee0();
  _objc_release(uVar13);
  _objc_release(uVar1);
  func_0x00010bfbbb40(*(undefined8 *)(lVar2 + _DAT_112739048));
  puStack_160 = puVar7;
  func_0x00010c155ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_1127390a8;
  uVar1 = *(undefined8 *)(lVar2 + lVar5);
  *(undefined **)(lVar2 + lVar5) = puVar7;
  _objc_release(uVar1);
  uVar13 = *(undefined8 *)(lVar2 + _DAT_11273909c);
  _objc_retain(uVar13);
  puVar4 = PTR_PTR_1126b1108;
  uVar1 = *(undefined8 *)(lVar2 + lVar5);
  _objc_retain(uVar1);
  _objc_retain(puVar3);
  _objc_alloc(puVar4);
  func_0x00010c04f820();
  func_0x00010c161980();
  puStack_158 = puVar3;
  _objc_release(puVar3);
  func_0x00010c1f9240(puVar4);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c23a0;
  _objc_alloc(PTR_PTR_1126c23a0);
  func_0x00010c042de0();
  func_0x00010c189840();
  func_0x00010c1b9a60(puVar4);
  puVar7 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  puVar8 = PTR_PTR_1126b1308;
  _objc_alloc();
  puVar9 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  uVar19 = 0;
  dVar20 = 16.0;
  puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(0x4039000000000000,0x4030000000000000,0,0x4030000000000000,
                      PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  dVar18 = 0.0;
  func_0x00010c043020(0,puVar9);
  func_0x00010c042ce0();
  _objc_release(puVar9);
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126b1318;
  uStack_168 = uVar13;
  func_0x00010c1555c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_118 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9720(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar4);
  lVar5 = (long)_DAT_1127390ac;
  uVar1 = *(undefined8 *)(lVar2 + lVar5);
  *(undefined **)(lVar2 + lVar5) = puVar10;
  _objc_release(uVar1);
  func_0x00010c18b5e0(*(undefined8 *)(lVar2 + lVar5));
  if (2 < lRam00000001138466f0) {
    puVar4 = PTR_PTR_1126b1830;
    _objc_alloc();
    func_0x00010c051be0();
    lVar15 = (long)_DAT_1127390b0;
    uVar1 = *(undefined8 *)(lVar2 + lVar15);
    *(undefined **)(lVar2 + lVar15) = puVar4;
    _objc_release(uVar1);
    func_0x00010c18b5e0(*(undefined8 *)(lVar2 + lVar15));
    uVar1 = *(undefined8 *)(lVar2 + lVar15);
    lVar5 = lVar2;
    func_0x00010bf14800(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067880(uVar1);
    _objc_release(lVar5);
    lVar5 = lVar2;
    func_0x00010bfdef60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf80f60();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = (long)_DAT_1127390b4;
    uVar1 = *(undefined8 *)(lVar2 + lVar17);
    *(long *)(lVar2 + lVar17) = lVar6;
    _objc_release(uVar1);
    _objc_release(lVar5);
    lVar5 = lVar2;
    func_0x00010c152980(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar5);
    lVar5 = lVar2;
    func_0x00010bfdef60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0bd00();
    _objc_release(lVar5);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    lVar5 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    lVar16 = (long)_DAT_1127390b8;
    uVar1 = *(undefined8 *)(lVar2 + lVar16);
    *(undefined **)(lVar2 + lVar16) = puVar4;
    _objc_release(uVar1);
    _objc_release(lVar5);
    func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar16));
    func_0x00010c182220(*(undefined8 *)(lVar2 + lVar16));
    uVar1 = *(undefined8 *)(lVar2 + lVar15);
    func_0x00010bf5e160(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(lVar2 + lVar16));
    _objc_release(uVar1);
    func_0x00010befbb60(*(undefined8 *)(lVar2 + lVar17));
    puVar4 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    lVar6 = lVar2;
    func_0x00010bfdef60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x00010c19f0e0(0,0,uVar19,dVar20 + dVar18,puVar4);
    _objc_release(lVar6);
    _objc_release(lVar5);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puStack_170 = puVar4;
    func_0x00010c16e440(puVar4);
    _objc_release(puVar3);
    uVar1 = *(undefined8 *)(lVar2 + lVar16);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(uVar1);
    puStack_1b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar1 = *(undefined8 *)(lVar2 + lVar16);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    uStack_180 = uVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_178 = lVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lStack_188 = lVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(lVar2 + lVar16);
    uStack_190 = uVar1;
    uStack_138 = uVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    uStack_1a0 = uVar19;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_198 = lVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_1a8 = lVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar2 + lVar16);
    uStack_130 = uVar19;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar2 + lVar16);
    uStack_128 = uVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_120 = uVar13;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1b0);
    _objc_release(ppuVar14);
    _objc_release(uVar13);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(uVar12);
    _objc_release(uVar1);
    _objc_release(lVar15);
    _objc_release(lVar6);
    _objc_release(uVar11);
    _objc_release(uVar19);
    _objc_release(lStack_1a8);
    _objc_release(lStack_198);
    _objc_release(uStack_1a0);
    _objc_release(uStack_190);
    _objc_release(lStack_188);
    _objc_release(lStack_178);
    _objc_release(uStack_180);
    _objc_release(puStack_170);
  }
  _objc_release(uStack_168);
  _objc_release(puStack_160);
  _objc_release(puStack_158);
  puVar4 = puStack_150;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1d8 = FUN_105eae1a8;
  puStack_1f8 = PTR_PTR_1126eda80;
  puStack_200 = puVar4;
  ppuStack_1f0 = ppuVar14;
  lStack_1e8 = lVar5;
  ppuStack_1e0 = &puStack_a0;
  _objc_msgSendSuper2(&puStack_200,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1cbec0(puVar4);
  return;
}



/* Entry: 105ead8a0; end: 105eae1a7; -[SCDiscoverFeedManagementSettingFullScreenViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ead8a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126eda80;
  lStack_b8 = param_1;
  _objc_msgSendSuper2(&lStack_b8,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126c57b0;
  _objc_alloc();
  func_0x00010c05ce40();
  puVar2 = PTR_PTR_1126c57b8;
  _objc_alloc();
  lVar3 = *(long *)(param_1 + _DAT_112739054);
  (**(code **)(lVar3 + 0x10))(lVar3,param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + _DAT_112739058);
  (**(code **)(lVar4 + 0x10))(lVar4,param_1);
  _objc_retainAutoreleasedReturnValue();
  uStack_140 = *(undefined8 *)(param_1 + _DAT_112739064);
  uStack_138 = *(undefined8 *)(param_1 + _DAT_112739068);
  uStack_130 = *(undefined8 *)(param_1 + _DAT_112739080);
  uStack_128 = *(undefined8 *)(param_1 + _DAT_112739094);
  func_0x00010c00cec0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010bef9980(puVar2);
  func_0x00010c1e1580(puVar2);
  lVar3 = (long)_DAT_1127390a4;
  _objc_retain(puVar2);
  uVar5 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar2;
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126c57c0;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11273908c);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112739088);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uStack_140 = *(undefined8 *)(param_1 + _DAT_112739078);
  uStack_138 = *(undefined8 *)(param_1 + _DAT_11273907c);
  uStack_130 = *(undefined8 *)(param_1 + _DAT_112739090);
  puStack_c0 = puVar1;
  func_0x00010c00cee0();
  _objc_release(uVar7);
  _objc_release(uVar5);
  func_0x00010bfbbb40(*(undefined8 *)(param_1 + _DAT_112739048));
  puStack_d0 = puVar6;
  func_0x00010c155ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_1127390a8;
  uVar5 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar6;
  _objc_release(uVar5);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11273909c);
  _objc_retain(uVar7);
  puVar1 = PTR_PTR_1126b1108;
  uVar5 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(uVar5);
  _objc_retain(puVar2);
  _objc_alloc(puVar1);
  func_0x00010c04f820();
  func_0x00010c161980();
  puStack_c8 = puVar2;
  _objc_release(puVar2);
  func_0x00010c1f9240(puVar1);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126c23a0;
  _objc_alloc(PTR_PTR_1126c23a0);
  func_0x00010c042de0();
  func_0x00010c189840();
  func_0x00010c1b9a60(puVar1);
  puVar6 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  puVar8 = PTR_PTR_1126b1308;
  _objc_alloc();
  puVar9 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  uVar18 = 0;
  dVar19 = 16.0;
  puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(0x4039000000000000,0x4030000000000000,0,0x4030000000000000,
                      PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  dVar17 = 0.0;
  func_0x00010c043020(0,puVar9);
  func_0x00010c042ce0();
  _objc_release(puVar9);
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126b1318;
  uStack_d8 = uVar7;
  func_0x00010c1555c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9720(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar3 = (long)_DAT_1127390ac;
  uVar5 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar10;
  _objc_release(uVar5);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
  if (2 < lRam00000001138466f0) {
    puVar1 = PTR_PTR_1126b1830;
    _objc_alloc();
    func_0x00010c051be0();
    lVar15 = (long)_DAT_1127390b0;
    uVar5 = *(undefined8 *)(param_1 + lVar15);
    *(undefined **)(param_1 + lVar15) = puVar1;
    _objc_release(uVar5);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar15));
    uVar5 = *(undefined8 *)(param_1 + lVar15);
    lVar3 = param_1;
    func_0x00010bf14800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067880(uVar5);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bfdef60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf80f60();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = (long)_DAT_1127390b4;
    uVar5 = *(undefined8 *)(param_1 + lVar16);
    *(long *)(param_1 + lVar16) = lVar4;
    _objc_release(uVar5);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bfdef60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0bd00();
    _objc_release(lVar3);
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    lVar3 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    lVar14 = (long)_DAT_1127390b8;
    uVar5 = *(undefined8 *)(param_1 + lVar14);
    *(undefined **)(param_1 + lVar14) = puVar1;
    _objc_release(uVar5);
    _objc_release(lVar3);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14));
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar14));
    uVar5 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010bf5e160(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar14));
    _objc_release(uVar5);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar16));
    puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    lVar4 = param_1;
    func_0x00010bfdef60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x00010c19f0e0(0,0,uVar18,dVar19 + dVar17,puVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puStack_e0 = puVar1;
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    uVar5 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(uVar5);
    puStack_120 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    uStack_f0 = uVar5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_e8 = lVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lStack_f8 = lVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_1 + lVar14);
    uStack_100 = uVar5;
    uStack_a8 = uVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    uStack_110 = uVar18;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_108 = lVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = lVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar14);
    uStack_a0 = uVar18;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar14);
    uStack_98 = uVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar7;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_120);
    _objc_release(ppuVar13);
    _objc_release(uVar7);
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(uVar12);
    _objc_release(uVar5);
    _objc_release(lVar15);
    _objc_release(lVar4);
    _objc_release(uVar11);
    _objc_release(uVar18);
    _objc_release(lStack_118);
    _objc_release(lStack_108);
    _objc_release(uStack_110);
    _objc_release(uStack_100);
    _objc_release(lStack_f8);
    _objc_release(lStack_e8);
    _objc_release(uStack_f0);
    _objc_release(puStack_e0);
  }
  _objc_release(uStack_d8);
  _objc_release(puStack_d0);
  _objc_release(puStack_c8);
  puVar1 = puStack_c0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_105eae1a8;
  puStack_168 = PTR_PTR_1126eda80;
  puStack_170 = puVar1;
  ppuStack_160 = ppuVar13;
  lStack_158 = lVar3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_170,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1cbec0(puVar1);
  return;
}



/* Entry: 105eae1a8; end: 105eae1ef; -[SCDiscoverFeedManagementSettingFullScreenViewController viewWillAppear:] */

void FUN_105eae1a8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eda80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1cbec0(param_1);
  return;
}



/* Entry: 105eae1f0; end: 105eae327; -[SCDiscoverFeedManagementSettingFullScreenViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_105eae1f0(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = PTR_PTR_1126eda80;
  puStack_58 = param_1;
  _objc_msgSendSuper2(&puStack_58,PTR_s_viewDidDisappear__112684c48);
  puVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    ppuStack_48 = &PTR____CFConstantStringClassReference_110e29c38;
    ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3ef8;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000105eacddc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112739070);
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar3);
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x4f;
}



/* Entry: 105eae328; end: 105eae32f; -[SCDiscoverFeedManagementSettingFullScreenViewController pageViewName] */

undefined8 FUN_105eae328(void)

{
  return 0x4f;
}



/* Entry: 105eae330; end: 105eae3df; -[SCDiscoverFeedManagementSettingFullScreenViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_105eae330(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126eda80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc80(puVar1);
  _objc_release(puVar1);
  func_0x00010c1070e0(param_1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a2e0();
  _objc_release(puVar1);
  return;
}



/* Entry: 105eae3e0; end: 105eae3e7; -[SCDiscoverFeedManagementSettingFullScreenViewController preferredStatusBarStyle] */

undefined8 FUN_105eae3e0(void)

{
  return 0;
}



/* Entry: 105eae3e8; end: 105eae3ef; -[SCDiscoverFeedManagementSettingFullScreenViewController prefersStatusBarHidden] */

undefined8 FUN_105eae3e8(void)

{
  return 0;
}


