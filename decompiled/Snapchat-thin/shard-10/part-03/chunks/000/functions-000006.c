/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d12300; end: 107d1266b; -[SCProfileMyStoryDataSource initWithStoryId:storyType:myStoriesDataCoordinator:snapViewerDataCoordinator:readReceiptCoordinator:storyPrivacySettingManager:snapProUserProfileIdProvider:snapProManagedProfilesProvider:currentUserId:circumstanceEngine:dataSourceFilter:] */

undefined8 *
FUN_107d12300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_70 = PTR_PTR_1126faa18;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_3;
    _objc_release(uVar2);
    puVar1[0x10] = param_4;
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[7];
    puVar1[7] = param_12;
    _objc_release(uVar2);
    puVar1[0xe] = param_13;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[9];
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21b4a0(puVar1[10]);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    uVar2 = puVar1[9];
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d1266c; end: 107d12697;  */

void FUN_107d1266c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea8d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d12698; end: 107d12a3f; -[SCProfileMyStoryDataSource _setUp] */

void FUN_107d12698(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0d4c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c258b20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c241380();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf3d040();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010bf3d000();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010c25ab00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = uVar3;
  func_0x00010bf41860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar12 = uVar11;
  func_0x00010c25ff60(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 107d12a40; end: 107d12b2b;  */

void FUN_107d12a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126d78d8;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar6 = puVar2;
  func_0x00010c036fa0();
  _objc_release(param_3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126d78d8;
    _objc_retain(puVar6);
    _objc_retain(uVar5);
    _objc_alloc(puVar1);
    uVar3 = uVar5;
    func_0x00010c100120(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c2413c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    func_0x00010c036fa0(puVar1);
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d12b2c; end: 107d12cef;  */

void FUN_107d12b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d78d8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c100120(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2413c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c036fa0(puVar1);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d12cf0; end: 107d12f3b;  */

void FUN_107d12cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d78d8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c100120(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2413c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c241360(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf3d020(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c036fa0(puVar1);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d12f3c; end: 107d12f83;  */

void FUN_107d12f3c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6bb60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d12f84; end: 107d1336b; -[SCProfileMyStoryDataSource _onStoryUpdate:] */

void FUN_107d12f84(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c100120();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c25b720(puVar2);
  func_0x00010c297440(puVar2);
  lVar12 = *(long *)(param_1 + 0x70);
  if (lVar12 == 2) {
    puVar1 = puVar2;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x0001084d2cc4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else if (lVar12 == 1) {
    puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar1 = puVar2;
    func_0x00010c25b340(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001084d2cc4();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else if (lVar12 == 0) {
    puVar14 = puVar2;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar14 = (undefined *)0x0;
  }
  puVar1 = PTR_PTR_1126b1338;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x00010c259cc0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04dbe0();
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c25b340(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(puVar3);
  uVar13 = *(undefined8 *)(param_1 + 0x68);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar13);
  _objc_release();
  func_0x000108f57dfc();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010bfdc480();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdc4a0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd88a0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe4600();
  _objc_release(uVar4);
  puVar5 = param_3;
  func_0x00010c2413c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_3;
  func_0x00010bf3d020(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_3;
  func_0x00010bf3cfe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_3;
  func_0x00010c241360(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c25aa80();
  puVar9 = param_3;
  func_0x00010bf624a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar10 = puVar9;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  puVar11 = puVar1;
  func_0x000107d14310(puVar1,puVar5,puVar6,puVar7,puVar8,uVar4,0,puVar3,(char)uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x60));
  _objc_release(puVar11);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107d1336c; end: 107d13373; -[SCProfileMyStoryDataSource storiesSectionDataModelObservable] */

void FUN_107d1336c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 107d13374; end: 107d1337b; -[SCProfileMyStoryDataSource storySavableObservable] */

void FUN_107d13374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 107d1337c; end: 107d1337f; -[SCProfileMyStoryDataSource dismissTooltip] */

void FUN_107d1337c(void)

{
  return;
}



/* Entry: 107d13380; end: 107d13387; -[SCProfileMyStoryDataSource storyId] */

undefined8 FUN_107d13380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107d13388; end: 107d1338f; -[SCProfileMyStoryDataSource storyType] */

undefined8 FUN_107d13388(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107d13390; end: 107d1344f; -[SCProfileMyStoryDataSource .cxx_destruct] */

void FUN_107d13390(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
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



/* Entry: 107d13450; end: 107d13513;  */

bool FUN_107d13450(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain();
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf4cce0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar3 = param_1;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      if (lVar4 == 0) {
        lVar4 = param_1;
        func_0x00010c0880c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c08fa60();
        bVar1 = lVar5 != 0;
        _objc_release(lVar4);
      }
      else {
        bVar1 = true;
      }
      _objc_release(lVar3);
    }
    else {
      bVar1 = true;
    }
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107d13514; end: 107d13803;  */

void FUN_107d13514(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x000100819d24();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  puVar13 = puRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(lVar2);
LAB_107d1374c:
      lVar3 = param_1;
      func_0x00010c140180();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010bf52a60();
      puVar12 = puRam0000000000000000;
      if (lVar2 == 0) {
        puVar12 = (undefined *)0x0;
      }
      else {
        _objc_retain(puRam0000000000000000);
      }
      _objc_release(lVar3);
      puVar13 = (undefined *)0x0;
LAB_107d137a4:
      _objc_release(puVar13);
      _objc_release(lVar1);
      _objc_release(param_2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
        ___stack_chk_fail();
        _objc_retain();
        lVar3 = param_1;
        func_0x00010c26d760();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar3;
        FUN_107d13450();
        _objc_release(lVar3);
        if ((int)lVar1 == 0) {
          lVar3 = param_1;
          func_0x000107d23718(param_1,0,0,0,1);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          lVar1 = param_1;
          func_0x00010c26d760();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          lVar3 = lVar1;
          func_0x000107d23490(lVar1);
          _objc_retainAutoreleasedReturnValue();
          param_1 = lVar1;
        }
        _objc_release(param_1);
        puVar12 = PTR_PTR_1126b4860;
        func_0x00010c258dc0(PTR_PTR_1126b4860);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
      return;
    }
    lVar11 = 0;
    do {
      if (puRam0000000000000000 != puVar13) {
        _objc_enumerationMutation(lVar2);
      }
      puVar12 = *(undefined **)(lVar11 * 8);
      puVar4 = puVar12;
      func_0x00010bf0e700();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf0a8c0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c07f5e0();
      _objc_release(puVar5);
      _objc_release(puVar4);
      if (((int)puVar6 == 0) ||
         (puVar4 = puVar12, func_0x000108f41bc0(puVar12,lVar1), ((ulong)puVar4 & 1) == 0)) {
        puVar4 = puVar12;
        func_0x00010c15f2e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 != (undefined *)0x0) {
          puVar5 = puVar12;
          func_0x00010c15f2e0(puVar12);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = param_2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar7 == 0) {
            _objc_release(puVar5);
            _objc_release(puVar4);
          }
          else {
            puVar6 = puVar12;
            func_0x00010c15f2e0(puVar12);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = param_2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar8;
            func_0x00010c29ea60();
            _objc_release(lVar8);
            _objc_release(puVar6);
            _objc_release(lVar7);
            _objc_release(puVar5);
            _objc_release(puVar4);
            if ((int)lVar9 != 0) goto LAB_107d136d4;
          }
        }
        _objc_retain(puVar12);
        _objc_release(lVar2);
        if (puVar12 == (undefined *)0x0) goto LAB_107d1374c;
        _objc_retain(puVar12);
        puVar13 = puVar12;
        goto LAB_107d137a4;
      }
LAB_107d136d4:
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107d13804; end: 107d1398b;  */

void FUN_107d13804(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_107d13450();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_1;
    func_0x000107d23718(param_1,0,0,0,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_1;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar1 = uVar2;
    func_0x000107d23490(uVar2);
    _objc_retainAutoreleasedReturnValue();
    param_1 = uVar2;
  }
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126b4860;
  func_0x00010c258dc0(PTR_PTR_1126b4860);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d1398c; end: 107d13bf3;  */

long FUN_107d1398c(long param_1,long param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x000100819d24();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar12 = param_1;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  do {
    if (lVar12 == 0) {
      lVar12 = 0;
LAB_107d13b90:
      _objc_release(param_1);
      _objc_release(lVar1);
      _objc_release(param_2);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        return lVar12;
      }
      ___stack_chk_fail();
      _objc_retain(lVar9);
      func_0x00010bf3cf60(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_1;
      func_0x000108ea5f00();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      _objc_release(lVar12);
      _objc_release(param_1);
      if (lVar8 != 0) {
        func_0x00010bf885a0(lVar8);
      }
      _objc_release(lVar8);
      return lVar8;
    }
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(param_1);
      }
      uVar13 = *(ulong *)(lVar11 * 8);
      if ((param_3 & 1) == 0) {
        uVar2 = uVar13;
        func_0x00010bf0e700();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf0a8c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c07f5e0();
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((int)uVar4 != 0) goto LAB_107d13a90;
LAB_107d13aa0:
        uVar2 = uVar13;
        func_0x00010c15f2e0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar2 != 0) {
          uVar3 = uVar13;
          func_0x00010c15f2e0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = param_2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 == 0) {
            _objc_release();
            _objc_release(uVar3);
            _objc_release(uVar2);
          }
          else {
            func_0x00010c15f2e0(uVar13);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = param_2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010c29ea60();
            _objc_release(lVar6);
            _objc_release(uVar13);
            _objc_release(lVar5);
            _objc_release(uVar3);
            _objc_release(uVar2);
            if ((int)lVar7 != 0) goto LAB_107d13b48;
          }
        }
        lVar12 = 1;
        goto LAB_107d13b90;
      }
LAB_107d13a90:
      uVar2 = uVar13;
      lVar9 = lVar1;
      func_0x000108f41bc0();
      if ((uVar2 & 1) == 0) goto LAB_107d13aa0;
LAB_107d13b48:
      lVar11 = lVar11 + 1;
    } while (lVar12 != lVar11);
    lVar12 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107d13bf4; end: 107d13ca3;  */

undefined8 FUN_107d13bf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010bf3cf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_2);
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf885a0(lVar2);
  }
  _objc_release(lVar2);
  return param_1;
}



/* Entry: 107d13ca4; end: 107d13e0f;  */

uint FUN_107d13ca4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain(param_2);
  func_0x00010bf3cf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(param_1);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c067fc0();
    uVar4 = 0;
    if (lVar3 + 6U < 7) {
      uVar4 = 0x45 >> (ulong)((uint)(lVar3 + 6U) & 0x1f);
    }
  }
  _objc_release(lVar2);
  return uVar4 & 1;
}



/* Entry: 107d13e10; end: 107d13ecf;  */

undefined8 FUN_107d13e10(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c15f2e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c29ea60();
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 107d13ed0; end: 107d14bfb;  */

/* WARNING: Possible PIC construction at 0x000107d15184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107d151c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107d15188) */
/* WARNING: Removing unreachable block (ram,0x000107d15198) */
/* WARNING: Removing unreachable block (ram,0x000107d151b4) */
/* WARNING: Removing unreachable block (ram,0x000107d151c8) */

undefined8 *
FUN_107d13ed0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  undefined *puVar21;
  undefined1 *puVar22;
  undefined4 uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  int iVar28;
  undefined8 *puVar29;
  long lVar30;
  undefined8 *puVar31;
  byte bVar32;
  uint uVar33;
  undefined8 *puVar34;
  undefined8 uVar35;
  undefined8 *puVar36;
  undefined8 uVar37;
  undefined8 *unaff_x25;
  ulong uVar38;
  undefined8 *unaff_x26;
  long lVar39;
  undefined8 *unaff_x27;
  long lVar40;
  undefined8 *unaff_x28;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  double dVar44;
  double unaff_d8;
  double dVar45;
  undefined8 unaff_d9;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar20 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar24 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x000108f41864();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c29f100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_retain(puVar5);
  puVar4 = puVar5;
  func_0x00010bfb91e0();
  puVar14 = puVar5;
  func_0x00010c0edf40();
  _objc_release(puVar5);
  puVar14 = (undefined8 *)((long)puVar14 + (long)puVar4);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  puVar36 = param_2;
  puStack_140 = param_1;
  puStack_138 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = &uStack_130;
  puVar29 = puVar36;
  func_0x00010bf52a60();
  if (puVar29 != (undefined8 *)0x0) {
    param_2 = (undefined8 *)*puStack_120;
    do {
      param_1 = (undefined8 *)0x0;
      do {
        if ((undefined8 *)*puStack_120 != param_2) {
          _objc_enumerationMutation(puVar36);
        }
        puVar4 = param_3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = puVar4;
        func_0x00010c29f100();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_retain(unaff_x26);
        unaff_x27 = unaff_x26;
        func_0x00010bfb91e0();
        unaff_x28 = unaff_x26;
        func_0x00010c0edf40();
        _objc_release(unaff_x26);
        puVar14 = (undefined8 *)((long)unaff_x27 + (long)puVar14 + (long)unaff_x28);
        _objc_release(unaff_x26);
        param_1 = (undefined8 *)((long)param_1 + 1);
      } while (puVar29 != param_1);
      puVar4 = &uStack_130;
      puVar29 = puVar36;
      func_0x00010bf52a60();
      unaff_x25 = (undefined8 *)0x0;
    } while (puVar29 != (undefined8 *)0x0);
  }
  _objc_release(puVar36);
  _objc_release(puVar5);
  _objc_release(puStack_140);
  _objc_release(param_3);
  puVar29 = puStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar14;
  }
  uVar43 = 0x107d140f0;
  ___stack_chk_fail();
  ppuVar3 = &puStack_140;
SUB_107d140f0:
  *(undefined8 **)((long)ppuVar3 + -0x60) = unaff_x28;
  *(undefined8 **)((long)ppuVar3 + -0x58) = unaff_x27;
  *(undefined8 **)((long)ppuVar3 + -0x50) = unaff_x26;
  *(undefined8 **)((long)ppuVar3 + -0x48) = unaff_x25;
  *(undefined8 **)((long)ppuVar3 + -0x40) = puVar36;
  *(undefined8 **)((long)ppuVar3 + -0x38) = puVar14;
  *(undefined8 **)((long)ppuVar3 + -0x30) = puVar5;
  *(undefined8 **)((long)ppuVar3 + -0x28) = param_1;
  *(undefined8 **)((long)ppuVar3 + -0x20) = param_3;
  *(undefined8 **)((long)ppuVar3 + -0x18) = param_2;
  *(undefined1 **)((long)ppuVar3 + -0x10) = puVar20;
  *(undefined8 *)((long)ppuVar3 + -8) = uVar43;
  *(undefined8 *)((long)ppuVar3 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar24;
  _objc_retain(puVar24);
  _objc_retain(puVar4);
  func_0x000108f41864();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = puVar14;
  func_0x00010c29f100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_retain(puVar36);
  puVar5 = puVar36;
  func_0x00010bfb8ac0();
  puVar14 = puVar36;
  func_0x00010c0edf20();
  _objc_release(puVar36);
  puVar14 = (undefined8 *)((long)puVar14 + (long)puVar5);
  *(undefined8 *)((long)ppuVar3 + -0x108) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x110) = 0;
  *(undefined8 *)((long)ppuVar3 + -0xf8) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x100) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x128) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x130) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x118) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x120) = 0;
  *(undefined8 **)((long)ppuVar3 + -0x140) = puVar29;
  *(undefined8 **)((long)ppuVar3 + -0x138) = puVar24;
  puVar5 = puVar24;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = (undefined1 *)((long)ppuVar3 + -0x130);
  puVar22 = (undefined1 *)((long)ppuVar3 + -0xf0);
  uVar43 = 0x10;
  puVar17 = puVar5;
  func_0x00010bf52a60();
  if (puVar17 != (undefined8 *)0x0) {
    puVar24 = (undefined8 *)**(undefined8 **)((long)ppuVar3 + -0x120);
    do {
      puVar29 = (undefined8 *)0x0;
      do {
        if ((undefined8 *)**(undefined8 **)((long)ppuVar3 + -0x120) != puVar24) {
          _objc_enumerationMutation(puVar5);
        }
        puVar6 = puVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = puVar6;
        func_0x00010c29f100();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_retain(unaff_x26);
        unaff_x27 = unaff_x26;
        func_0x00010bfb8ac0();
        unaff_x28 = unaff_x26;
        func_0x00010c0edf20();
        _objc_release(unaff_x26);
        puVar14 = (undefined8 *)((long)unaff_x27 + (long)puVar14 + (long)unaff_x28);
        _objc_release(unaff_x26);
        puVar29 = (undefined8 *)((long)puVar29 + 1);
      } while (puVar17 != puVar29);
      puVar20 = (undefined1 *)((long)ppuVar3 + -0x130);
      puVar22 = (undefined1 *)((long)ppuVar3 + -0xf0);
      uVar43 = 0x10;
      puVar17 = puVar5;
      func_0x00010bf52a60();
      unaff_x25 = (undefined8 *)0x0;
    } while (puVar17 != (undefined8 *)0x0);
  }
  _objc_release(puVar5);
  _objc_release(puVar36);
  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x140));
  _objc_release(puVar4);
  lVar7 = *(long *)((long)ppuVar3 + -0x138);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar3 + -0x70)) {
    return puVar14;
  }
  ___stack_chk_fail();
  *(undefined8 **)((long)ppuVar3 + -0x1a0) = unaff_x28;
  *(undefined8 **)((long)ppuVar3 + -0x198) = unaff_x27;
  *(undefined8 **)((long)ppuVar3 + -400) = unaff_x26;
  *(undefined8 **)((long)ppuVar3 + -0x188) = unaff_x25;
  *(undefined8 **)((long)ppuVar3 + -0x180) = puVar5;
  *(undefined8 **)((long)ppuVar3 + -0x178) = puVar14;
  *(undefined8 **)((long)ppuVar3 + -0x170) = puVar36;
  *(undefined8 **)((long)ppuVar3 + -0x168) = puVar29;
  *(undefined8 **)((long)ppuVar3 + -0x160) = puVar4;
  *(undefined8 **)((long)ppuVar3 + -0x158) = puVar24;
  *(undefined1 **)((long)ppuVar3 + -0x150) = (undefined1 *)((long)ppuVar3 + -0x10);
  *(undefined8 *)((long)ppuVar3 + -0x148) = 0x107d14310;
  *(undefined8 **)((long)ppuVar3 + -0x330) = param_6;
  *(undefined8 *)((long)ppuVar3 + -0x388) = *(undefined8 *)((long)ppuVar3 + -0x118);
  *(undefined8 *)((long)ppuVar3 + -0x378) = *(undefined8 *)((long)ppuVar3 + -0x128);
  uVar35 = *(undefined8 *)((long)ppuVar3 + -0x130);
  *(undefined8 *)((long)ppuVar3 + -0x380) = *(undefined8 *)((long)ppuVar3 + -0x138);
  *(uint *)((long)ppuVar3 + -0x394) = (uint)*(byte *)((long)ppuVar3 + -0x13e);
  *(uint *)((long)ppuVar3 + -0x38c) = (uint)*(byte *)((long)ppuVar3 + -0x13f);
  *(uint *)((long)ppuVar3 + -0x390) = (uint)*(byte *)((long)ppuVar3 + -0x140);
  *(undefined8 *)((long)ppuVar3 + -0x1b0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  *(undefined8 **)((long)ppuVar3 + -0x328) = puVar15;
  _objc_retain(puVar15);
  *(undefined1 **)((long)ppuVar3 + -0x338) = puVar20;
  _objc_retain(puVar20);
  *(undefined1 **)((long)ppuVar3 + -0x340) = puVar22;
  _objc_retain(puVar22);
  *(undefined8 *)((long)ppuVar3 + -0x348) = uVar43;
  _objc_retain(uVar43);
  *(undefined8 **)((long)ppuVar3 + -0x360) = param_7;
  _objc_retain(param_7);
  *(undefined8 **)((long)ppuVar3 + -0x368) = param_8;
  _objc_retain(param_8);
  *(undefined8 *)((long)ppuVar3 + -0x278) = uVar35;
  _objc_retain(uVar35);
  puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  *(undefined **)((long)ppuVar3 + -0x350) = puVar18;
  *(long *)((long)ppuVar3 + -800) = lVar7;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = lVar30;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = lVar7;
  func_0x00010bf0a600();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = lVar40;
  func_0x00010c27dd80();
  if (lVar39 == 6) {
    *(undefined4 *)((long)ppuVar3 + -0x30c) = 1;
  }
  else {
    lVar39 = lVar30;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar39;
    func_0x00010bf0a600();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c27dd80();
    *(uint *)((long)ppuVar3 + -0x30c) = (uint)(lVar9 == 7);
    _objc_release(lVar8);
    _objc_release(lVar39);
  }
  _objc_release(lVar40);
  _objc_release(lVar7);
  if (*(long *)((long)ppuVar3 + -0x330) == 7) {
    *(undefined4 *)((long)ppuVar3 + -0x398) = 1;
  }
  else {
    lVar7 = lVar30;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    lVar40 = lVar7;
    func_0x00010bf0a600();
    _objc_retainAutoreleasedReturnValue();
    lVar39 = lVar40;
    func_0x00010c27dd80();
    *(uint *)((long)ppuVar3 + -0x398) = (uint)(lVar39 == 10);
    _objc_release(lVar40);
    _objc_release(lVar7);
  }
  *(long *)((long)ppuVar3 + -0x370) = lVar30;
  dVar44 = 0.0;
  *(undefined8 *)((long)ppuVar3 + -0x248) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x250) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x238) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x240) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x268) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x270) = 0;
  *(undefined8 *)((long)ppuVar3 + -600) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x260) = 0;
  lVar7 = *(long *)((long)ppuVar3 + -800);
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  *(long *)((long)ppuVar3 + -0x358) = lVar7;
  func_0x00010bf52a60();
  *(long *)((long)ppuVar3 + -0x308) = lVar7;
  if (lVar7 == 0) {
    *(undefined8 *)((long)ppuVar3 + -0x298) = 0;
    *(undefined8 *)((long)ppuVar3 + -0x290) = 0;
    *(undefined8 *)((long)ppuVar3 + -0x2a0) = 0;
    *(undefined8 *)((long)ppuVar3 + -0x288) = 0;
    bVar32 = 1;
  }
  else {
    uVar33 = 0;
    lVar7 = 0;
    uVar38 = 0;
    lVar40 = 0;
    lVar30 = 0;
    *(undefined8 *)((long)ppuVar3 + -0x318) = **(undefined8 **)((long)ppuVar3 + -0x260);
    do {
      lVar39 = 0;
      do {
        if (**(long **)((long)ppuVar3 + -0x260) != *(long *)((long)ppuVar3 + -0x318)) {
          _objc_enumerationMutation(*(undefined8 *)((long)ppuVar3 + -0x358));
        }
        uVar25 = *(ulong *)(*(long *)((long)ppuVar3 + -0x268) + lVar39 * 8);
        uVar16 = uVar25;
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        uVar26 = uVar16;
        func_0x00010c0720c0();
        *(int *)((long)ppuVar3 + -0x280) = (int)uVar26;
        _objc_release(uVar16);
        if (*(int *)((long)ppuVar3 + -0x30c) == 0) {
LAB_107d145f4:
          uVar16 = uVar25;
          func_0x00010c15f2e0(uVar25);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = *(long *)((long)ppuVar3 + -0x348);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          *(uint *)((long)ppuVar3 + -0x2a4) = uVar33;
          _objc_release(uVar16);
          _objc_retain(lVar10);
          lVar8 = lVar10;
          func_0x00010bfb91e0();
          lVar9 = lVar10;
          func_0x00010c0edf40();
          _objc_release(lVar10);
          uVar16 = lVar9 + lVar8;
          *(ulong *)((long)ppuVar3 + -0x2b0) = uVar16;
          if (uVar38 <= uVar16) {
            uVar38 = uVar16;
          }
          *(ulong *)((long)ppuVar3 + -0x2a0) = uVar38;
          _objc_retain(lVar10);
          lVar8 = lVar10;
          func_0x00010bfb8ac0();
          lVar9 = lVar10;
          func_0x00010c0edf20();
          _objc_release(lVar10);
          *(long *)((long)ppuVar3 + -0x2b8) = lVar9 + lVar8;
          *(long *)((long)ppuVar3 + -0x290) = lVar9 + lVar8 + lVar7;
          FUN_107d13bf4(uVar25,*(undefined8 *)((long)ppuVar3 + -0x340));
          dVar44 = dVar44 * 100.0;
          *(long *)((long)ppuVar3 + -0x2c0) = (long)dVar44;
          uVar43 = *(undefined8 *)((long)ppuVar3 + -0x338);
          uVar38 = uVar25;
          FUN_107d13ca4(uVar25,uVar43);
          *(int *)((long)ppuVar3 + -0x2c4) = (int)uVar38;
          *(ulong *)((long)ppuVar3 + -0x288) = lVar30 + (uVar38 & 0xffffffff);
          uVar38 = uVar25;
          func_0x000107d13d5c(uVar25,uVar43);
          *(int *)((long)ppuVar3 + -0x2d8) = (int)uVar38;
          *(ulong *)((long)ppuVar3 + -0x298) = lVar40 + (uVar38 & 0xffffffff);
          uVar38 = uVar25;
          func_0x00010bf5bbc0();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar38;
          func_0x00010c0720c0();
          *(int *)((long)ppuVar3 + -0x2d4) = (int)uVar16;
          _objc_release(uVar38);
          uVar38 = uVar25;
          FUN_107d13e10(uVar25,*(undefined8 *)((long)ppuVar3 + -0x328));
          puVar18 = PTR_PTR_1126b1088;
          _objc_alloc();
          *(undefined **)((long)ppuVar3 + -0x2e0) = puVar18;
          uVar16 = uVar25;
          func_0x000107d138dc();
          _objc_retainAutoreleasedReturnValue();
          *(ulong *)((long)ppuVar3 + -0x2e8) = uVar16;
          uVar16 = uVar25;
          func_0x00010bf0e700();
          _objc_retainAutoreleasedReturnValue();
          *(ulong *)((long)ppuVar3 + -0x2f8) = uVar16;
          uVar16 = uVar25;
          func_0x00010bf3cf60();
          _objc_retainAutoreleasedReturnValue();
          *(ulong *)((long)ppuVar3 + -0x2f0) = uVar16;
          uVar43 = *(undefined8 *)((long)ppuVar3 + -800);
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)((long)ppuVar3 + -0x300) = uVar43;
          uVar16 = uVar25;
          func_0x00010c12fc80();
          _objc_retainAutoreleasedReturnValue();
          *(ulong *)((long)ppuVar3 + -0x2d0) = uVar16;
          func_0x00010bf30620();
          _objc_retainAutoreleasedReturnValue();
          uVar26 = uVar25;
          func_0x00010c26f2a0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar26;
          func_0x00010c2709c0();
          func_0x000109021670();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4e880();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar25;
          func_0x00010c11ff60();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar12;
          FUN_107d2a86c();
          *(char *)((long)ppuVar3 + -0x3d3) = (char)uVar13;
          *(undefined2 *)((long)ppuVar3 + -0x3d5) = 0;
          *(char *)((long)ppuVar3 + -0x3d6) = (char)uVar38;
          *(char *)((long)ppuVar3 + -0x3d7) = (char)*(undefined4 *)((long)ppuVar3 + -0x2d4);
          *(char *)((long)ppuVar3 + -0x3d8) = (char)*(undefined4 *)((long)ppuVar3 + -0x2d8);
          *(undefined8 *)((long)ppuVar3 + -0x3e0) = *(undefined8 *)((long)ppuVar3 + -0x2c0);
          *(char *)((long)ppuVar3 + -1000) = (char)*(undefined4 *)((long)ppuVar3 + -0x2c4);
          *(ulong *)((long)ppuVar3 + -0x3f8) = uVar11;
          *(undefined8 *)((long)ppuVar3 + -0x3f0) = *(undefined8 *)((long)ppuVar3 + -0x330);
          *(undefined8 *)((long)ppuVar3 + -0x408) = uVar43;
          *(ulong *)((long)ppuVar3 + -0x400) = uVar16;
          *(undefined8 *)((long)ppuVar3 + -0x410) = 0;
          uVar43 = *(undefined8 *)((long)ppuVar3 + -0x2e8);
          uVar35 = *(undefined8 *)((long)ppuVar3 + -0x2e0);
          uVar41 = *(undefined8 *)((long)ppuVar3 + -0x2f0);
          func_0x00010c04d3c0(uVar35);
          func_0x00010befa120(*(undefined8 *)((long)ppuVar3 + -0x350));
          lVar30 = *(long *)((long)ppuVar3 + -0x288);
          _objc_release(uVar35);
          uVar38 = *(ulong *)((long)ppuVar3 + -0x2a0);
          _objc_release(uVar12);
          _objc_release(uVar25);
          _objc_release(uVar11);
          _objc_release(uVar26);
          lVar40 = *(long *)((long)ppuVar3 + -0x298);
          _objc_release(uVar16);
          lVar7 = *(long *)((long)ppuVar3 + -0x290);
          _objc_release(*(undefined8 *)((long)ppuVar3 + -0x2d0));
          _objc_release(*(undefined8 *)((long)ppuVar3 + -0x300));
          _objc_release(uVar41);
          _objc_release(*(undefined8 *)((long)ppuVar3 + -0x2f8));
          _objc_release(uVar43);
          uVar33 = *(uint *)((long)ppuVar3 + -0x2a4);
          _objc_release(lVar10);
        }
        else {
          uVar16 = uVar25;
          func_0x00010bf5bbc0();
          _objc_retainAutoreleasedReturnValue();
          uVar26 = uVar16;
          func_0x00010c0720c0();
          _objc_release(uVar16);
          if ((int)uVar26 != 0) goto LAB_107d145f4;
        }
        uVar33 = *(uint *)((long)ppuVar3 + -0x280) | uVar33;
        lVar39 = lVar39 + 1;
      } while (*(long *)((long)ppuVar3 + -0x308) != lVar39);
      lVar39 = *(long *)((long)ppuVar3 + -0x358);
      func_0x00010bf52a60();
      *(long *)((long)ppuVar3 + -0x308) = lVar39;
    } while (lVar39 != 0);
    bVar32 = (byte)uVar33 ^ 1;
    *(long *)((long)ppuVar3 + -0x290) = lVar7;
    *(long *)((long)ppuVar3 + -0x288) = lVar30;
    *(ulong *)((long)ppuVar3 + -0x2a0) = uVar38;
    *(long *)((long)ppuVar3 + -0x298) = lVar40;
  }
  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x358));
  puVar31 = *(undefined8 **)((long)ppuVar3 + -800);
  puVar4 = puVar31;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)((long)ppuVar3 + -0x328);
  puVar29 = puVar4;
  FUN_107d13514();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar29;
  func_0x000107d13804();
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 **)((long)ppuVar3 + -0x280) = puVar4;
  puVar4 = puVar31;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  FUN_107d1398c();
  *(int *)((long)ppuVar3 + -0x2a4) = (int)puVar14;
  _objc_release(puVar4);
  puVar18 = PTR_PTR_1126d78e0;
  _objc_alloc();
  puVar17 = puVar29;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar29;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 **)((long)ppuVar3 + -0x2b8) = puVar4;
  puVar15 = puVar31;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 **)((long)ppuVar3 + -0x2b0) = puVar15;
  func_0x00010bf529e0();
  puVar6 = puVar31;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  func_0x00010bf529e0();
  puVar14 = puVar31;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined4 *)((long)ppuVar3 + -0x30c);
  uVar2 = *(undefined4 *)((long)ppuVar3 + -0x398);
  puVar5 = puVar29;
  func_0x00010c26f2a0(puVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  *(undefined8 *)((long)ppuVar3 + -0x3a0) = *(undefined8 *)((long)ppuVar3 + -0x388);
  *(byte *)((long)ppuVar3 + -0x3a7) = bVar32 & ((byte)uVar23 | (byte)uVar2) & 1;
  *(char *)((long)ppuVar3 + -0x3a8) = (char)*(undefined4 *)((long)ppuVar3 + -0x394);
  *(undefined8 *)((long)ppuVar3 + -0x3b0) = *(undefined8 *)((long)ppuVar3 + -0x380);
  *(char *)((long)ppuVar3 + -0x3b7) = (char)*(undefined4 *)((long)ppuVar3 + -0x38c);
  *(char *)((long)ppuVar3 + -0x3b8) = (char)*(undefined4 *)((long)ppuVar3 + -0x390);
  *(undefined8 *)((long)ppuVar3 + -0x3c8) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x3c0) = *(undefined8 *)((long)ppuVar3 + -0x330);
  *(undefined8 *)((long)ppuVar3 + -0x3d8) = *(undefined8 *)((long)ppuVar3 + -0x368);
  *(undefined8 *)((long)ppuVar3 + -0x3d0) = *(undefined8 *)((long)ppuVar3 + -0x360);
  *(undefined8 *)((long)ppuVar3 + -1000) = *(undefined8 *)((long)ppuVar3 + -0x378);
  *(undefined8 **)((long)ppuVar3 + -0x3e0) = puVar14;
  *(undefined8 *)((long)ppuVar3 + -0x3f8) = 0;
  *(undefined8 **)((long)ppuVar3 + -0x3f0) = puVar4;
  puVar4 = *(undefined8 **)((long)ppuVar3 + -0x288);
  *(undefined8 *)((long)ppuVar3 + -0x408) = *(undefined8 *)((long)ppuVar3 + -0x2a0);
  *(undefined8 *)((long)ppuVar3 + -0x400) = *(undefined8 *)((long)ppuVar3 + -0x290);
  *(undefined8 *)((long)ppuVar3 + -0x410) = *(undefined8 *)((long)ppuVar3 + -0x298);
  uVar42 = *(undefined8 *)((long)ppuVar3 + -0x280);
  uVar41 = *(undefined8 *)((long)ppuVar3 + -0x2b8);
  unaff_x28 = (undefined8 *)(ulong)*(uint *)((long)ppuVar3 + -0x2a4);
  uVar43 = uVar41;
  puVar36 = (undefined8 *)(ulong)(puVar15 != (undefined8 *)0x0);
  func_0x00010c051d40();
  _objc_release(puVar5);
  _objc_release(puVar14);
  _objc_release(puVar6);
  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x2b0));
  _objc_release(uVar41);
  _objc_release(puVar17);
  puVar14 = (undefined8 *)PTR_PTR_1126d78e8;
  _objc_alloc();
  puVar34 = *(undefined8 **)((long)ppuVar3 + -0x350);
  puVar21 = puVar18;
  puVar5 = puVar34;
  func_0x00010c019fe0();
  _objc_release(puVar18);
  _objc_release(uVar42);
  _objc_release(puVar29);
  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x370));
  _objc_release(puVar34);
  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x278));
  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x368));
  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x360));
  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x348));
  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x340));
  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x338));
  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x328));
  puVar24 = puVar31;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)ppuVar3 + -0x1b0)) {
    ___stack_chk_fail();
    *(undefined8 *)((long)ppuVar3 + -0x480) = unaff_d9;
    *(double *)((long)ppuVar3 + -0x478) = unaff_d8;
    *(undefined8 *)((long)ppuVar3 + -0x470) = uVar42;
    *(undefined8 **)((long)ppuVar3 + -0x468) = (undefined8 *)(ulong)(puVar15 != (undefined8 *)0x0);
    *(undefined8 **)((long)ppuVar3 + -0x460) = puVar6;
    *(undefined **)((long)ppuVar3 + -0x458) = puVar18;
    *(undefined8 *)((long)ppuVar3 + -0x450) = uVar41;
    *(undefined8 **)((long)ppuVar3 + -0x448) = puVar34;
    *(undefined8 **)((long)ppuVar3 + -0x440) = puVar31;
    *(undefined8 **)((long)ppuVar3 + -0x438) = puVar17;
    *(undefined8 **)((long)ppuVar3 + -0x430) = puVar14;
    *(undefined8 **)((long)ppuVar3 + -0x428) = puVar29;
    *(undefined1 **)((long)ppuVar3 + -0x420) = (undefined1 *)((long)ppuVar3 + -0x150);
    *(code **)((long)ppuVar3 + -0x418) = FUN_107d14bfc;
    puVar20 = (undefined1 *)((long)ppuVar3 + -0x420);
    *(int *)((long)ppuVar3 + -0x6ec) = (int)unaff_x28;
    unaff_x26 = *(undefined8 **)((long)ppuVar3 + -0x410);
    uVar41 = *(undefined8 *)((long)ppuVar3 + -0x408);
    *(undefined8 *)((long)ppuVar3 + -0x490) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    param_6 = puVar36;
    param_8 = puVar4;
    _objc_retain();
    *(undefined8 *)((long)ppuVar3 + -0x628) = uVar35;
    *(undefined **)((long)ppuVar3 + -0x618) = puVar21;
    _objc_retain(uVar35);
    _objc_retain(puVar21);
    _objc_retain(puVar5);
    *(undefined8 *)((long)ppuVar3 + -0x738) = uVar43;
    _objc_retain(uVar43);
    *(undefined8 **)((long)ppuVar3 + -0x718) = puVar36;
    _objc_retain(puVar36);
    _objc_retain(puVar4);
    _objc_retain(unaff_x26);
    *(undefined8 *)((long)ppuVar3 + -0x730) = uVar41;
    _objc_retain(uVar41);
    puVar14 = puVar24;
    func_0x000108f41710();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 **)((long)ppuVar3 + -0x740) = puVar24;
    func_0x000108f418c8();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar14;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar29;
    func_0x000108f41ca8();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 **)((long)ppuVar3 + -0x620) = puVar17;
    _objc_release(puVar29);
    puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    *(undefined **)((long)ppuVar3 + -0x720) = puVar18;
    puVar29 = puVar14;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar29;
    func_0x000100819d24();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 **)((long)ppuVar3 + -0x708) = puVar17;
    _objc_release(puVar29);
    *(undefined8 *)((long)ppuVar3 + -0x5e8) = 0;
    *(undefined8 *)((long)ppuVar3 + -0x5f0) = 0;
    *(undefined8 *)((long)ppuVar3 + -0x5d8) = 0;
    *(undefined8 *)((long)ppuVar3 + -0x5e0) = 0;
    *(undefined8 *)((long)ppuVar3 + -0x608) = 0;
    *(undefined8 *)((long)ppuVar3 + -0x610) = 0;
    *(undefined8 *)((long)ppuVar3 + -0x5f8) = 0;
    *(undefined8 *)((long)ppuVar3 + -0x600) = 0;
    *(undefined8 **)((long)ppuVar3 + -0x710) = puVar14;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 **)((long)ppuVar3 + -0x728) = puVar14;
    func_0x00010bf52a60();
    *(undefined8 **)((long)ppuVar3 + -0x700) = unaff_x26;
    *(undefined8 **)((long)ppuVar3 + -0x6e8) = puVar14;
    if (puVar14 == (undefined8 *)0x0) {
      *(undefined8 *)((long)ppuVar3 + -0x678) = 0;
      *(undefined8 *)((long)ppuVar3 + -0x670) = 0;
      *(undefined8 *)((long)ppuVar3 + -0x668) = 0;
      *(undefined8 *)((long)ppuVar3 + -0x660) = 0;
      *(undefined8 *)((long)ppuVar3 + -0x680) = 0;
    }
    else {
      *(undefined8 *)((long)ppuVar3 + -0x678) = 0;
      *(undefined8 *)((long)ppuVar3 + -0x670) = 0;
      *(undefined8 *)((long)ppuVar3 + -0x668) = 0;
      *(undefined8 *)((long)ppuVar3 + -0x660) = 0;
      *(undefined8 *)((long)ppuVar3 + -0x680) = 0;
      *(undefined8 *)((long)ppuVar3 + -0x6f8) = **(undefined8 **)((long)ppuVar3 + -0x600);
      do {
        lVar7 = 0;
        dVar44 = unaff_d8;
        do {
          param_7 = unaff_x28;
          if (**(long **)((long)ppuVar3 + -0x600) != *(long *)((long)ppuVar3 + -0x6f8)) {
            _objc_enumerationMutation(*(undefined8 *)((long)ppuVar3 + -0x728));
            param_7 = unaff_x28;
          }
          unaff_x27 = *(undefined8 **)(*(long *)((long)ppuVar3 + -0x608) + lVar7 * 8);
          puVar29 = unaff_x27;
          func_0x00010bf0e700();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar29;
          func_0x00010bf0a8c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar29);
          unaff_x28 = param_7;
          unaff_d8 = dVar44;
          if (((*(uint *)((long)ppuVar3 + -0x6ec) & 1) == 0) &&
             (puVar29 = puVar14, func_0x00010c07f5e0(), unaff_x28 = param_7, (int)puVar29 == 0)) {
            *(long *)((long)ppuVar3 + -0x688) = lVar7;
            iVar27 = 0;
LAB_107d14e24:
            _objc_retain(unaff_x27);
            _objc_retain(*(undefined8 *)((long)ppuVar3 + -0x620));
            _objc_retain(puVar24);
            _objc_retain(puVar4);
            _objc_retain(unaff_x26);
            puVar29 = unaff_x27;
            func_0x00010c0d2260();
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar29;
            func_0x00010bf24a40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar29);
            *(int *)((long)ppuVar3 + -0x630) = iVar27;
            *(undefined8 **)((long)ppuVar3 + -0x638) = puVar14;
            if ((iVar27 == 0) ||
               (puVar14 = puVar17, func_0x00010c08fa60(), puVar14 == (undefined8 *)0x0)) {
              unaff_x28 = unaff_x27;
              FUN_107d13ed0(unaff_x27,puVar24,puVar4);
            }
            else {
              lVar30 = *(long *)((long)ppuVar3 + -0x620);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              *(undefined8 *)((long)ppuVar3 + -0x5c8) = 0;
              *(undefined8 *)((long)ppuVar3 + -0x5d0) = 0;
              *(undefined8 *)((long)ppuVar3 + -0x5b8) = 0;
              *(undefined8 *)((long)ppuVar3 + -0x5c0) = 0;
              *(undefined8 *)((long)ppuVar3 + -0x5a8) = 0;
              *(undefined8 *)((long)ppuVar3 + -0x5b0) = 0;
              *(undefined8 *)((long)ppuVar3 + -0x598) = 0;
              *(undefined8 *)((long)ppuVar3 + -0x5a0) = 0;
              lVar7 = lVar30;
              func_0x00010bf52a60();
              if (lVar7 == 0) {
                unaff_x28 = (undefined8 *)0x0;
              }
              else {
                unaff_x28 = (undefined8 *)0x0;
                puVar36 = (undefined8 *)**(undefined8 **)((long)ppuVar3 + -0x5c0);
                do {
                  lVar40 = 0;
                  do {
                    if ((undefined8 *)**(undefined8 **)((long)ppuVar3 + -0x5c0) != puVar36) {
                      _objc_enumerationMutation(lVar30);
                    }
                    puVar14 = *(undefined8 **)(*(long *)((long)ppuVar3 + -0x5c8) + lVar40 * 8);
                    FUN_107d13ed0(puVar14,puVar24,puVar4);
                    if (unaff_x28 <= puVar14) {
                      unaff_x28 = puVar14;
                    }
                    lVar40 = lVar40 + 1;
                  } while (lVar7 != lVar40);
                  lVar7 = lVar30;
                  func_0x00010bf52a60();
                } while (lVar7 != 0);
              }
              _objc_release(lVar30);
              unaff_x26 = *(undefined8 **)((long)ppuVar3 + -0x700);
            }
            puVar14 = unaff_x27;
            func_0x00010bf0e700();
            _objc_retainAutoreleasedReturnValue();
            puVar29 = puVar14;
            func_0x00010bf0a8c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar14);
            puVar14 = puVar29;
            func_0x00010c07f5e0();
            puVar15 = unaff_x26;
            if ((((int)puVar14 == 0) ||
                (puVar14 = puVar29, func_0x00010c24c380(), puVar14 != (undefined8 *)0x2)) ||
               (unaff_x28 != (undefined8 *)0x0)) {
              puVar14 = puVar29;
              func_0x00010c07f5e0();
              if ((int)puVar14 != 0) {
                func_0x00010c09ab20(unaff_x26);
                _objc_retainAutoreleasedReturnValue();
                puVar36 = unaff_x27;
                func_0x00010bf3cf60();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c12d360(puVar15);
                goto LAB_107d15028;
              }
            }
            else {
              func_0x00010c09ab20(unaff_x26);
              _objc_retainAutoreleasedReturnValue();
              puVar36 = unaff_x27;
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar15);
LAB_107d15028:
              _objc_release(puVar36);
              _objc_release(puVar15);
            }
            _objc_release(puVar29);
            _objc_release(puVar17);
            _objc_release(unaff_x26);
            _objc_release(puVar4);
            _objc_release(puVar24);
            uVar43 = *(undefined8 *)((long)ppuVar3 + -0x620);
            _objc_release(uVar43);
            _objc_release(unaff_x27);
            _objc_retain(unaff_x27);
            _objc_retain(uVar43);
            _objc_retain(puVar24);
            _objc_retain(puVar4);
            param_2 = unaff_x27;
            func_0x00010c0d2260();
            _objc_retainAutoreleasedReturnValue();
            param_3 = param_2;
            func_0x00010bf24a40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            uVar33 = 0;
            puVar14 = puVar24;
            unaff_x25 = puVar4;
            if (*(int *)((long)ppuVar3 + -0x630) != 0) {
              param_2 = unaff_x27;
              func_0x00010c0d2260();
              _objc_retainAutoreleasedReturnValue();
              puVar36 = param_2;
              func_0x00010bf24a40();
              _objc_retainAutoreleasedReturnValue();
              puVar29 = puVar36;
              func_0x00010c08fa60();
              uVar33 = *(uint *)((long)ppuVar3 + -0x630);
              _objc_release(puVar36);
              _objc_release(param_2);
              puVar36 = (undefined8 *)0x0;
              if (puVar29 != (undefined8 *)0x0) {
                param_2 = *(undefined8 **)((long)ppuVar3 + -0x620);
                *(undefined8 **)((long)ppuVar3 + -0x640) = param_3;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                unaff_d8 = 0.0;
                *(undefined8 *)((long)ppuVar3 + -0x5c8) = 0;
                *(undefined8 *)((long)ppuVar3 + -0x5d0) = 0;
                *(undefined8 *)((long)ppuVar3 + -0x5b8) = 0;
                *(undefined8 *)((long)ppuVar3 + -0x5c0) = 0;
                *(undefined8 *)((long)ppuVar3 + -0x5a8) = 0;
                *(undefined8 *)((long)ppuVar3 + -0x5b0) = 0;
                *(undefined8 *)((long)ppuVar3 + -0x598) = 0;
                *(undefined8 *)((long)ppuVar3 + -0x5a0) = 0;
                param_1 = param_2;
                func_0x00010bf52a60();
                if (param_1 == (undefined8 *)0x0) {
                  _objc_release(param_2);
                  iVar27 = *(int *)((long)ppuVar3 + -0x630);
                  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x640));
                  _objc_release(puVar4);
                  _objc_release(puVar24);
                  uVar43 = *(undefined8 *)((long)ppuVar3 + -0x620);
                  _objc_release(uVar43);
                  _objc_release(unaff_x27);
                  puVar14 = unaff_x27;
                  func_0x00010bf5bbc0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar36 = puVar14;
                  func_0x00010c0720c0();
                  *(int *)((long)ppuVar3 + -0x690) = (int)puVar36;
                  _objc_release(puVar14);
                  _objc_retain(unaff_x27);
                  _objc_retain(uVar43);
                  _objc_retain(puVar5);
                  puVar14 = unaff_x27;
                  func_0x00010c0d2260();
                  _objc_retainAutoreleasedReturnValue();
                  puVar36 = puVar14;
                  func_0x00010bf24a40();
                  _objc_retainAutoreleasedReturnValue();
                  *(undefined8 **)((long)ppuVar3 + -0x640) = puVar36;
                  _objc_release(puVar14);
                  uVar43 = *(undefined8 *)((long)ppuVar3 + -0x618);
                  iVar28 = 0;
                  if (iVar27 == 0) {
LAB_107d1536c:
                    FUN_107d13bf4(unaff_x27,puVar5);
                  }
                  else {
                    puVar14 = unaff_x27;
                    func_0x00010c0d2260();
                    _objc_retainAutoreleasedReturnValue();
                    puVar36 = puVar14;
                    func_0x00010bf24a40();
                    _objc_retainAutoreleasedReturnValue();
                    puVar29 = puVar36;
                    func_0x00010c08fa60();
                    iVar28 = *(int *)((long)ppuVar3 + -0x630);
                    _objc_release(puVar36);
                    _objc_release(puVar14);
                    if (puVar29 == (undefined8 *)0x0) goto LAB_107d1536c;
                    uVar16 = *(ulong *)((long)ppuVar3 + -0x620);
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    dVar44 = 0.0;
                    *(undefined8 *)((long)ppuVar3 + -0x5c8) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5d0) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5b8) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5c0) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5a8) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5b0) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x598) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5a0) = 0;
                    uVar38 = uVar16;
                    func_0x00010bf52a60();
                    if (uVar38 == 0) {
                      dVar45 = 0.0;
                    }
                    else {
                      lVar7 = **(long **)((long)ppuVar3 + -0x5c0);
                      dVar45 = 0.0;
                      do {
                        uVar26 = 0;
                        do {
                          if (**(long **)((long)ppuVar3 + -0x5c0) != lVar7) {
                            _objc_enumerationMutation(uVar16);
                          }
                          FUN_107d13bf4(*(undefined8 *)
                                         (*(long *)((long)ppuVar3 + -0x5c8) + uVar26 * 8),puVar5);
                          dVar45 = dVar45 + dVar44;
                          uVar26 = uVar26 + 1;
                        } while (uVar38 != uVar26);
                        uVar38 = uVar16;
                        func_0x00010bf52a60();
                      } while (uVar38 != 0);
                    }
                    uVar38 = uVar16;
                    func_0x00010bf529e0();
                    unaff_d8 = dVar45 / (double)uVar38;
                    _objc_release(uVar16);
                    uVar43 = *(undefined8 *)((long)ppuVar3 + -0x618);
                    iVar28 = *(int *)((long)ppuVar3 + -0x630);
                  }
                  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x640));
                  _objc_release(puVar5);
                  uVar35 = *(undefined8 *)((long)ppuVar3 + -0x620);
                  _objc_release(uVar35);
                  _objc_release(unaff_x27);
                  _objc_retain(unaff_x27);
                  _objc_retain(uVar35);
                  _objc_retain(uVar43);
                  puVar14 = unaff_x27;
                  func_0x00010c0d2260();
                  _objc_retainAutoreleasedReturnValue();
                  puVar36 = puVar14;
                  func_0x00010bf24a40();
                  _objc_retainAutoreleasedReturnValue();
                  *(undefined8 **)((long)ppuVar3 + -0x648) = puVar36;
                  _objc_release(puVar14);
                  iVar27 = 0;
                  if (iVar28 == 0) {
LAB_107d15500:
                    puVar14 = unaff_x27;
                    FUN_107d13ca4(unaff_x27,uVar43);
                    *(int *)((long)ppuVar3 + -0x640) = (int)puVar14;
                  }
                  else {
                    puVar14 = unaff_x27;
                    func_0x00010c0d2260();
                    _objc_retainAutoreleasedReturnValue();
                    puVar36 = puVar14;
                    func_0x00010bf24a40();
                    _objc_retainAutoreleasedReturnValue();
                    puVar29 = puVar36;
                    func_0x00010c08fa60();
                    iVar27 = *(int *)((long)ppuVar3 + -0x630);
                    _objc_release(puVar36);
                    _objc_release(puVar14);
                    if (puVar29 == (undefined8 *)0x0) goto LAB_107d15500;
                    lVar30 = *(long *)((long)ppuVar3 + -0x620);
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    *(undefined8 *)((long)ppuVar3 + -0x5c8) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5d0) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5b8) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5c0) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5a8) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5b0) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x598) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5a0) = 0;
                    _objc_retain();
                    lVar7 = lVar30;
                    func_0x00010bf52a60();
                    if (lVar7 == 0) {
                      *(undefined4 *)((long)ppuVar3 + -0x640) = 0;
                    }
                    else {
                      lVar40 = **(long **)((long)ppuVar3 + -0x5c0);
                      do {
                        lVar39 = 0;
                        do {
                          if (**(long **)((long)ppuVar3 + -0x5c0) != lVar40) {
                            _objc_enumerationMutation(lVar30);
                          }
                          uVar38 = *(ulong *)(*(long *)((long)ppuVar3 + -0x5c8) + lVar39 * 8);
                          FUN_107d13ca4(uVar38,*(undefined8 *)((long)ppuVar3 + -0x618));
                          if ((uVar38 & 1) != 0) {
                            *(undefined4 *)((long)ppuVar3 + -0x640) = 1;
                            goto LAB_107d1551c;
                          }
                          lVar39 = lVar39 + 1;
                        } while (lVar7 != lVar39);
                        lVar7 = lVar30;
                        func_0x00010bf52a60();
                      } while (lVar7 != 0);
                      *(undefined4 *)((long)ppuVar3 + -0x640) = 0;
LAB_107d1551c:
                      uVar43 = *(undefined8 *)((long)ppuVar3 + -0x618);
                    }
                    _objc_release(lVar30);
                    _objc_release(lVar30);
                    iVar27 = *(int *)((long)ppuVar3 + -0x630);
                  }
                  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x648));
                  _objc_release(uVar43);
                  uVar35 = *(undefined8 *)((long)ppuVar3 + -0x620);
                  _objc_release(uVar35);
                  _objc_release(unaff_x27);
                  _objc_retain(unaff_x27);
                  _objc_retain(uVar35);
                  _objc_retain(uVar43);
                  puVar14 = unaff_x27;
                  func_0x00010c0d2260();
                  _objc_retainAutoreleasedReturnValue();
                  puVar36 = puVar14;
                  func_0x00010bf24a40();
                  _objc_retainAutoreleasedReturnValue();
                  *(undefined8 **)((long)ppuVar3 + -0x650) = puVar36;
                  _objc_release(puVar14);
                  iVar28 = 0;
                  if (iVar27 == 0) {
LAB_107d15698:
                    puVar14 = unaff_x27;
                    func_0x000107d13d5c(unaff_x27,uVar43);
                    *(int *)((long)ppuVar3 + -0x648) = (int)puVar14;
                  }
                  else {
                    puVar14 = unaff_x27;
                    func_0x00010c0d2260();
                    _objc_retainAutoreleasedReturnValue();
                    puVar36 = puVar14;
                    func_0x00010bf24a40();
                    _objc_retainAutoreleasedReturnValue();
                    puVar29 = puVar36;
                    func_0x00010c08fa60();
                    iVar28 = *(int *)((long)ppuVar3 + -0x630);
                    _objc_release(puVar36);
                    _objc_release(puVar14);
                    if (puVar29 == (undefined8 *)0x0) goto LAB_107d15698;
                    lVar30 = *(long *)((long)ppuVar3 + -0x620);
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    *(undefined8 *)((long)ppuVar3 + -0x5c8) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5d0) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5b8) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5c0) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5a8) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5b0) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x598) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5a0) = 0;
                    _objc_retain();
                    lVar7 = lVar30;
                    func_0x00010bf52a60();
                    if (lVar7 == 0) {
                      *(undefined4 *)((long)ppuVar3 + -0x648) = 0;
                    }
                    else {
                      lVar40 = **(long **)((long)ppuVar3 + -0x5c0);
                      do {
                        lVar39 = 0;
                        do {
                          if (**(long **)((long)ppuVar3 + -0x5c0) != lVar40) {
                            _objc_enumerationMutation(lVar30);
                          }
                          uVar38 = *(ulong *)(*(long *)((long)ppuVar3 + -0x5c8) + lVar39 * 8);
                          func_0x000107d13d5c(uVar38,*(undefined8 *)((long)ppuVar3 + -0x618));
                          if ((uVar38 & 1) != 0) {
                            *(undefined4 *)((long)ppuVar3 + -0x648) = 1;
                            goto LAB_107d156b4;
                          }
                          lVar39 = lVar39 + 1;
                        } while (lVar7 != lVar39);
                        lVar7 = lVar30;
                        func_0x00010bf52a60();
                      } while (lVar7 != 0);
                      *(undefined4 *)((long)ppuVar3 + -0x648) = 0;
LAB_107d156b4:
                      uVar43 = *(undefined8 *)((long)ppuVar3 + -0x618);
                    }
                    _objc_release(lVar30);
                    _objc_release(lVar30);
                    iVar28 = *(int *)((long)ppuVar3 + -0x630);
                  }
                  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x650));
                  _objc_release(uVar43);
                  uVar43 = *(undefined8 *)((long)ppuVar3 + -0x620);
                  _objc_release(uVar43);
                  _objc_release(unaff_x27);
                  _objc_retain(unaff_x27);
                  _objc_retain(uVar43);
                  _objc_retain(*(undefined8 *)((long)ppuVar3 + -0x628));
                  puVar14 = unaff_x27;
                  func_0x00010c0d2260();
                  _objc_retainAutoreleasedReturnValue();
                  puVar36 = puVar14;
                  func_0x00010bf24a40();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar14);
                  if (iVar28 == 0) {
LAB_107d15830:
                    uVar43 = *(undefined8 *)((long)ppuVar3 + -0x628);
                    puVar14 = unaff_x27;
                    FUN_107d13e10(unaff_x27,uVar43);
                    *(int *)((long)ppuVar3 + -0x694) = (int)puVar14;
                  }
                  else {
                    puVar14 = unaff_x27;
                    func_0x00010c0d2260();
                    _objc_retainAutoreleasedReturnValue();
                    puVar29 = puVar14;
                    func_0x00010bf24a40();
                    _objc_retainAutoreleasedReturnValue();
                    puVar17 = puVar29;
                    func_0x00010c08fa60();
                    _objc_release(puVar29);
                    _objc_release(puVar14);
                    if (puVar17 == (undefined8 *)0x0) goto LAB_107d15830;
                    lVar30 = *(long *)((long)ppuVar3 + -0x620);
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    *(undefined8 *)((long)ppuVar3 + -0x5c8) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5d0) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5b8) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5c0) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5a8) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5b0) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x598) = 0;
                    *(undefined8 *)((long)ppuVar3 + -0x5a0) = 0;
                    _objc_retain();
                    lVar7 = lVar30;
                    func_0x00010bf52a60();
                    if (lVar7 == 0) {
                      uVar23 = 0;
                    }
                    else {
                      *(undefined8 **)((long)ppuVar3 + -0x630) = puVar36;
                      lVar40 = **(long **)((long)ppuVar3 + -0x5c0);
                      do {
                        lVar39 = 0;
                        do {
                          if (**(long **)((long)ppuVar3 + -0x5c0) != lVar40) {
                            _objc_enumerationMutation(lVar30);
                          }
                          uVar38 = *(ulong *)(*(long *)((long)ppuVar3 + -0x5c8) + lVar39 * 8);
                          FUN_107d13e10(uVar38,*(undefined8 *)((long)ppuVar3 + -0x628));
                          if ((uVar38 & 1) != 0) {
                            uVar23 = 1;
                            goto LAB_107d1584c;
                          }
                          lVar39 = lVar39 + 1;
                        } while (lVar7 != lVar39);
                        lVar7 = lVar30;
                        func_0x00010bf52a60();
                      } while (lVar7 != 0);
                      uVar23 = 0;
LAB_107d1584c:
                      puVar36 = *(undefined8 **)((long)ppuVar3 + -0x630);
                    }
                    *(undefined4 *)((long)ppuVar3 + -0x694) = uVar23;
                    _objc_release(lVar30);
                    _objc_release(lVar30);
                    uVar43 = *(undefined8 *)((long)ppuVar3 + -0x628);
                  }
                  *(long *)((long)ppuVar3 + -0x660) =
                       (long)unaff_x28 + *(long *)((long)ppuVar3 + -0x660);
                  *(undefined8 *)((long)ppuVar3 + -0x670) = *(undefined8 *)((long)ppuVar3 + -0x670);
                  *(long *)((long)ppuVar3 + -0x6a0) = (long)(unaff_d8 * 100.0);
                  *(ulong *)((long)ppuVar3 + -0x668) =
                       *(long *)((long)ppuVar3 + -0x668) + (ulong)*(uint *)((long)ppuVar3 + -0x640);
                  *(long *)((long)ppuVar3 + -0x680) = *(long *)((long)ppuVar3 + -0x680) + 1;
                  *(ulong *)((long)ppuVar3 + -0x678) =
                       *(long *)((long)ppuVar3 + -0x678) + (ulong)*(uint *)((long)ppuVar3 + -0x648);
                  _objc_release(puVar36);
                  _objc_release(uVar43);
                  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x620));
                  _objc_release(unaff_x27);
                  uVar35 = *(undefined8 *)((long)ppuVar3 + -0x638);
                  uVar43 = uVar35;
                  func_0x00010bf9e140();
                  _objc_retainAutoreleasedReturnValue();
                  *(undefined8 *)((long)ppuVar3 + -0x650) = uVar43;
                  puVar18 = PTR_PTR_1126b1088;
                  _objc_alloc();
                  *(undefined **)((long)ppuVar3 + -0x6b0) = puVar18;
                  puVar14 = unaff_x27;
                  func_0x000107d138dc();
                  _objc_retainAutoreleasedReturnValue();
                  *(undefined8 **)((long)ppuVar3 + -0x630) = puVar14;
                  puVar14 = unaff_x27;
                  func_0x00010bf0e700();
                  _objc_retainAutoreleasedReturnValue();
                  *(undefined8 **)((long)ppuVar3 + -0x6c0) = puVar14;
                  puVar14 = unaff_x27;
                  func_0x00010bf3cf60();
                  _objc_retainAutoreleasedReturnValue();
                  *(undefined8 **)((long)ppuVar3 + -0x6c8) = puVar14;
                  uVar43 = *(undefined8 *)((long)ppuVar3 + -0x710);
                  func_0x00010c259cc0();
                  _objc_retainAutoreleasedReturnValue();
                  *(undefined8 *)((long)ppuVar3 + -0x658) = uVar43;
                  puVar14 = unaff_x27;
                  func_0x00010c12fc80();
                  _objc_retainAutoreleasedReturnValue();
                  *(undefined8 **)((long)ppuVar3 + -0x6a8) = puVar14;
                  func_0x00010bf30620();
                  _objc_retainAutoreleasedReturnValue();
                  *(undefined8 **)((long)ppuVar3 + -0x6d0) = puVar14;
                  puVar14 = unaff_x27;
                  func_0x00010c26f2a0();
                  _objc_retainAutoreleasedReturnValue();
                  *(undefined8 **)((long)ppuVar3 + -0x6b8) = puVar14;
                  func_0x00010c2709c0();
                  func_0x000109021670();
                  _objc_retainAutoreleasedReturnValue();
                  *(undefined8 **)((long)ppuVar3 + -0x6e0) = puVar14;
                  uVar43 = uVar35;
                  func_0x00010c07f5e0();
                  func_0x00010c077620();
                  func_0x00010bf4e880();
                  _objc_retainAutoreleasedReturnValue();
                  *(undefined8 **)((long)ppuVar3 + -0x6d8) = unaff_x27;
                  func_0x00010c11ff60();
                  _objc_retainAutoreleasedReturnValue();
                  puVar36 = unaff_x27;
                  FUN_107d2a86c();
                  *(char *)((long)ppuVar3 + -0x783) = (char)puVar36;
                  *(char *)((long)ppuVar3 + -0x784) = (char)uVar35;
                  *(char *)((long)ppuVar3 + -0x785) = (char)uVar43;
                  *(char *)((long)ppuVar3 + -0x786) = (char)*(undefined4 *)((long)ppuVar3 + -0x694);
                  *(char *)((long)ppuVar3 + -0x787) = (char)*(undefined4 *)((long)ppuVar3 + -0x690);
                  *(char *)((long)ppuVar3 + -0x788) = (char)*(undefined4 *)((long)ppuVar3 + -0x648);
                  *(undefined8 *)((long)ppuVar3 + -0x790) = *(undefined8 *)((long)ppuVar3 + -0x6a0);
                  *(char *)((long)ppuVar3 + -0x798) = (char)*(undefined4 *)((long)ppuVar3 + -0x640);
                  *(undefined8 **)((long)ppuVar3 + -0x7a8) = puVar14;
                  *(undefined8 *)((long)ppuVar3 + -0x7a0) = 2;
                  uVar43 = *(undefined8 *)((long)ppuVar3 + -0x6d0);
                  uVar35 = *(undefined8 *)((long)ppuVar3 + -0x6c8);
                  param_6 = *(undefined8 **)((long)ppuVar3 + -0x650);
                  *(undefined8 *)((long)ppuVar3 + -0x7b8) = *(undefined8 *)((long)ppuVar3 + -0x658);
                  *(undefined8 *)((long)ppuVar3 + -0x7b0) = uVar43;
                  *(undefined8 *)((long)ppuVar3 + -0x7c0) = 0;
                  uVar41 = *(undefined8 *)((long)ppuVar3 + -0x6b0);
                  puVar36 = *(undefined8 **)((long)ppuVar3 + -0x6c0);
                  puVar14 = *(undefined8 **)((long)ppuVar3 + -0x638);
                  param_8 = (undefined8 *)0x0;
                  func_0x00010c04d3c0(uVar41);
                  func_0x00010befa120(*(undefined8 *)((long)ppuVar3 + -0x720));
                  _objc_release(uVar41);
                  _objc_release(unaff_x27);
                  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x6d8));
                  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x6e0));
                  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x6b8));
                  _objc_release(uVar43);
                  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x6a8));
                  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x658));
                  _objc_release(uVar35);
                  _objc_release(puVar36);
                  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x630));
                  _objc_release(*(undefined8 *)((long)ppuVar3 + -0x650));
                  unaff_x26 = *(undefined8 **)((long)ppuVar3 + -0x700);
                  lVar7 = *(long *)((long)ppuVar3 + -0x688);
                  goto LAB_107d15ad0;
                }
                unaff_x26 = (undefined8 *)0x0;
                puVar36 = (undefined8 *)**(undefined8 **)((long)ppuVar3 + -0x5c0);
                param_3 = (undefined8 *)0x0;
                if ((undefined8 *)**(undefined8 **)((long)ppuVar3 + -0x5c0) != puVar36) {
                  _objc_enumerationMutation(param_2);
                }
                puVar29 = (undefined8 *)((long)ppuVar3 + -0x5c8);
                uVar43 = 0x107d15188;
                ppuVar3 = (undefined8 **)((long)ppuVar3 + -0x7c0);
                puVar29 = *(undefined8 **)*puVar29;
                unaff_d8 = dVar44;
                goto SUB_107d140f0;
              }
            }
            param_1 = (undefined8 *)(ulong)uVar33;
            uVar43 = 0x107d151c8;
            ppuVar3 = (undefined8 **)((long)ppuVar3 + -0x7c0);
            puVar29 = unaff_x27;
            goto SUB_107d140f0;
          }
          puVar29 = unaff_x27;
          func_0x000108f41bc0(unaff_x27,*(undefined8 *)((long)ppuVar3 + -0x708));
          if (((ulong)puVar29 & 1) == 0) {
            *(long *)((long)ppuVar3 + -0x688) = lVar7;
            iVar27 = 1;
            param_7 = unaff_x28;
            goto LAB_107d14e24;
          }
LAB_107d15ad0:
          _objc_release(puVar14);
          lVar7 = lVar7 + 1;
          dVar44 = unaff_d8;
        } while (lVar7 != *(long *)((long)ppuVar3 + -0x6e8));
        lVar7 = *(long *)((long)ppuVar3 + -0x728);
        func_0x00010bf52a60();
        *(long *)((long)ppuVar3 + -0x6e8) = lVar7;
      } while (lVar7 != 0);
    }
    _objc_release(*(undefined8 *)((long)ppuVar3 + -0x728));
    uVar41 = *(undefined8 *)((long)ppuVar3 + -0x710);
    uVar43 = uVar41;
    func_0x00010c25b340(uVar41);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c218940(unaff_x26);
    _objc_release(uVar43);
    func_0x00010c2024a0(unaff_x26);
    puVar14 = puVar4;
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29f0c0();
    func_0x00010c218be0(unaff_x26);
    _objc_release(puVar14);
    func_0x00010c218b80(unaff_x26);
    uVar43 = uVar41;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = uVar43;
    FUN_107d13514();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar43);
    uVar43 = uVar35;
    func_0x000107d13804();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)((long)ppuVar3 + -0x630) = uVar43;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    uVar43 = uVar41;
    FUN_107d1398c();
    *(int *)((long)ppuVar3 + -0x640) = (int)uVar43;
    _objc_release(uVar41);
    uVar43 = *(undefined8 *)((long)ppuVar3 + -0x730);
    uVar41 = 0;
    func_0x0001009703d0();
    if ((int)uVar43 == 0) {
      func_0x000108f580cc();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108f581d4();
      _objc_retainAutoreleasedReturnValue();
    }
    *(undefined8 *)((long)ppuVar3 + -0x638) = uVar43;
    puVar18 = PTR_PTR_1126d78e0;
    _objc_alloc();
    *(undefined **)((long)ppuVar3 + -0x658) = puVar18;
    uVar43 = uVar35;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)((long)ppuVar3 + -0x680) = uVar43;
    uVar43 = uVar35;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)((long)ppuVar3 + -0x688) = uVar43;
    lVar30 = *(long *)((long)ppuVar3 + -0x710);
    lVar7 = lVar30;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    *(long *)((long)ppuVar3 + -0x650) = lVar7;
    func_0x00010bf529e0();
    *(uint *)((long)ppuVar3 + -0x694) = (uint)(lVar7 != 0);
    lVar7 = lVar30;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)((long)ppuVar3 + -0x648) = uVar35;
    *(long *)((long)ppuVar3 + -0x690) = lVar7;
    func_0x00010bf529e0();
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    iVar27 = (int)*(undefined8 *)((long)ppuVar3 + -0x730);
    func_0x0001005929c0();
    uVar43 = 2;
    if (iVar27 != 0) {
      uVar43 = 3;
    }
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    *(undefined8 *)((long)ppuVar3 + -0x750) = 0;
    *(undefined2 *)((long)ppuVar3 + -0x758) = 0;
    *(undefined8 *)((long)ppuVar3 + -0x760) = 3;
    *(undefined2 *)((long)ppuVar3 + -0x768) = 0;
    *(undefined8 *)((long)ppuVar3 + -0x778) = *(undefined8 *)((long)ppuVar3 + -0x738);
    *(undefined8 *)((long)ppuVar3 + -0x770) = uVar43;
    uVar43 = *(undefined8 *)((long)ppuVar3 + -0x638);
    uVar1 = *(undefined8 *)((long)ppuVar3 + -0x630);
    *(undefined8 *)((long)ppuVar3 + -0x788) = uVar43;
    *(undefined8 *)((long)ppuVar3 + -0x780) = 0;
    *(undefined8 *)((long)ppuVar3 + -0x798) = 0;
    *(long *)((long)ppuVar3 + -0x790) = lVar30;
    *(undefined8 *)((long)ppuVar3 + -0x7a8) = 0;
    *(long *)((long)ppuVar3 + -0x7a0) = lVar7;
    uVar19 = *(undefined8 *)((long)ppuVar3 + -0x658);
    *(undefined8 *)((long)ppuVar3 + -0x7b8) = *(undefined8 *)((long)ppuVar3 + -0x660);
    *(undefined8 *)((long)ppuVar3 + -0x7b0) = *(undefined8 *)((long)ppuVar3 + -0x670);
    uVar42 = *(undefined8 *)((long)ppuVar3 + -0x680);
    *(undefined8 *)((long)ppuVar3 + -0x7c0) = *(undefined8 *)((long)ppuVar3 + -0x678);
    uVar37 = *(undefined8 *)((long)ppuVar3 + -0x688);
    func_0x00010c051d40();
    _objc_release(uVar35);
    _objc_release(lVar30);
    _objc_release(*(undefined8 *)((long)ppuVar3 + -0x690));
    _objc_release(*(undefined8 *)((long)ppuVar3 + -0x650));
    _objc_release(uVar37);
    _objc_release(uVar42);
    puVar14 = (undefined8 *)PTR_PTR_1126d78e8;
    _objc_alloc();
    uVar37 = *(undefined8 *)((long)ppuVar3 + -0x720);
    func_0x00010c019fe0();
    _objc_release(uVar19);
    _objc_release(uVar43);
    _objc_release(uVar1);
    _objc_release(*(undefined8 *)((long)ppuVar3 + -0x648));
    _objc_release(*(undefined8 *)((long)ppuVar3 + -0x708));
    _objc_release(uVar37);
    _objc_release(*(undefined8 *)((long)ppuVar3 + -0x620));
    _objc_release(puVar24);
    _objc_release(*(undefined8 *)((long)ppuVar3 + -0x710));
    _objc_release(*(undefined8 *)((long)ppuVar3 + -0x730));
    _objc_release(*(undefined8 *)((long)ppuVar3 + -0x700));
    _objc_release(puVar4);
    _objc_release(*(undefined8 *)((long)ppuVar3 + -0x718));
    _objc_release(*(undefined8 *)((long)ppuVar3 + -0x738));
    _objc_release(puVar5);
    _objc_release(*(undefined8 *)((long)ppuVar3 + -0x618));
    _objc_release(*(undefined8 *)((long)ppuVar3 + -0x628));
    puVar36 = *(undefined8 **)((long)ppuVar3 + -0x740);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)ppuVar3 + -0x490)) {
      ___stack_chk_fail();
      *(undefined8 *)((long)ppuVar3 + -0x830) = unaff_d9;
      *(double *)((long)ppuVar3 + -0x828) = unaff_d8;
      *(undefined8 *)((long)ppuVar3 + -0x820) = uVar43;
      *(undefined8 *)((long)ppuVar3 + -0x818) = uVar1;
      *(undefined8 *)((long)ppuVar3 + -0x810) = uVar35;
      *(undefined8 **)((long)ppuVar3 + -0x808) = puVar4;
      *(undefined8 *)((long)ppuVar3 + -0x800) = uVar37;
      *(undefined8 **)((long)ppuVar3 + -0x7f8) = puVar24;
      *(undefined8 **)((long)ppuVar3 + -0x7f0) = puVar5;
      *(undefined8 **)((long)ppuVar3 + -0x7e8) = puVar14;
      *(undefined8 *)((long)ppuVar3 + -0x7e0) = uVar42;
      *(undefined8 *)((long)ppuVar3 + -0x7d8) = uVar19;
      *(undefined1 **)((long)ppuVar3 + -2000) = puVar20;
      *(code **)((long)ppuVar3 + -0x7c8) = FUN_107d15e78;
      *(undefined8 *)((long)ppuVar3 + -0x840) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      *(undefined8 *)((long)ppuVar3 + -0x968) = uVar41;
      _objc_retain(uVar41);
      puVar4 = puVar36;
      func_0x00010bfa2680();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar4;
      func_0x00010bf0a9a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar14;
      func_0x00010c22d640();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      _objc_release(puVar4);
      puVar4 = puVar5;
      func_0x00010c08fa60();
      if (puVar4 == (undefined8 *)0x0) {
        _objc_retain(puVar36);
        puVar14 = puVar36;
      }
      else {
        *(undefined8 *)((long)ppuVar3 + -0x8f0) = 0;
        *(undefined1 **)((long)ppuVar3 + -0x8e8) = (undefined1 *)((long)ppuVar3 + -0x8f0);
        *(undefined8 *)((long)ppuVar3 + -0x8e0) = 0x3032000000;
        *(code **)((long)ppuVar3 + -0x8d8) = FUN_107d1635c;
        *(undefined8 *)((long)ppuVar3 + -0x8d0) = 0x107d1636c;
        puVar4 = puVar36;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 **)((long)ppuVar3 + -0x8c8) = puVar4;
        uVar43 = 0;
        *(undefined8 *)((long)ppuVar3 + -0x928) = 0;
        *(undefined8 *)((long)ppuVar3 + -0x930) = 0;
        *(undefined8 *)((long)ppuVar3 + -0x918) = 0;
        *(undefined8 *)((long)ppuVar3 + -0x920) = 0;
        *(undefined8 *)((long)ppuVar3 + -0x908) = 0;
        *(undefined8 *)((long)ppuVar3 + -0x910) = 0;
        *(undefined8 *)((long)ppuVar3 + -0x8f8) = 0;
        *(undefined8 *)((long)ppuVar3 + -0x900) = 0;
        lVar7 = *(long *)((long)ppuVar3 + -0x968);
        _objc_retain(lVar7);
        func_0x00010bf52a60();
        if (lVar7 != 0) {
          lVar30 = **(long **)((long)ppuVar3 + -0x920);
          do {
            lVar40 = 0;
            do {
              if (**(long **)((long)ppuVar3 + -0x920) != lVar30) {
                _objc_enumerationMutation(*(undefined8 *)((long)ppuVar3 + -0x968));
              }
              uVar42 = *(undefined8 *)(*(long *)((long)ppuVar3 + -0x928) + lVar40 * 8);
              uVar35 = uVar42;
              func_0x00010c22d640();
              _objc_retainAutoreleasedReturnValue();
              uVar41 = uVar35;
              func_0x00010c0720c0();
              _objc_release(uVar35);
              if ((int)uVar41 != 0) {
                func_0x00010bfe5400(uVar42);
                _objc_retainAutoreleasedReturnValue();
                *(undefined **)((long)ppuVar3 + -0x960) = PTR___NSConcreteStackBlock_11034bd00;
                *(undefined8 *)((long)ppuVar3 + -0x958) = 0xc2000000;
                *(code **)((long)ppuVar3 + -0x950) = FUN_107d16374;
                *(undefined **)((long)ppuVar3 + -0x948) = &UNK_11084a578;
                *(undefined1 **)((long)ppuVar3 + -0x938) = (undefined1 *)((long)ppuVar3 + -0x8f0);
                _objc_retain(puVar36);
                *(undefined8 **)((long)ppuVar3 + -0x940) = puVar36;
                func_0x00010c0be560(uVar42);
                _objc_release(uVar42);
                _objc_release(*(undefined8 *)((long)ppuVar3 + -0x940));
              }
              lVar40 = lVar40 + 1;
            } while (lVar7 != lVar40);
            lVar7 = *(long *)((long)ppuVar3 + -0x968);
            func_0x00010bf52a60();
          } while (lVar7 != 0);
        }
        _objc_release(*(undefined8 *)((long)ppuVar3 + -0x968));
        puVar18 = PTR_PTR_1126b47a0;
        _objc_alloc();
        *(undefined **)((long)ppuVar3 + -0x998) = puVar18;
        puVar4 = puVar36;
        func_0x00010c11ac00(puVar36);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar36;
        func_0x00010c27dd80();
        *(undefined8 **)((long)ppuVar3 + -0x9a0) = puVar14;
        *(undefined8 *)((long)ppuVar3 + -0x9a8) =
             *(undefined8 *)(*(long *)((long)ppuVar3 + -0x8e8) + 0x28);
        puVar14 = puVar36;
        func_0x00010bf5a820();
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 **)((long)ppuVar3 + -0x970) = puVar14;
        puVar14 = puVar36;
        func_0x00010bf60900();
        *(int *)((long)ppuVar3 + -0x9ac) = (int)puVar14;
        puVar14 = puVar36;
        func_0x00010c0f4aa0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 **)((long)ppuVar3 + -0x978) = puVar14;
        puVar14 = puVar36;
        func_0x00010c1057e0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 **)((long)ppuVar3 + -0x980) = puVar14;
        puVar14 = puVar36;
        func_0x00010c29ef80();
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 **)((long)ppuVar3 + -0x988) = puVar14;
        puVar14 = puVar36;
        func_0x00010c075620();
        *(int *)((long)ppuVar3 + -0x9b0) = (int)puVar14;
        puVar14 = puVar36;
        func_0x00010c246f40();
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 **)((long)ppuVar3 + -0x990) = puVar14;
        puVar14 = puVar36;
        func_0x00010bf608e0();
        *(int *)((long)ppuVar3 + -0x9b4) = (int)puVar14;
        puVar14 = puVar36;
        func_0x00010bf608c0();
        *(int *)((long)ppuVar3 + -0x9b8) = (int)puVar14;
        puVar14 = puVar36;
        func_0x00010c298be0();
        *(undefined8 **)((long)ppuVar3 + -0x9c0) = puVar14;
        puVar29 = puVar36;
        func_0x00010c0d02e0();
        _objc_retainAutoreleasedReturnValue();
        puVar24 = puVar36;
        func_0x00010bf1d8c0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar36;
        func_0x00010bf1d820();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar36;
        func_0x00010bf1d840();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar36;
        func_0x00010bfa2680();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c085be0(puVar36);
        puVar31 = puVar36;
        func_0x00010bf15880();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar36;
        func_0x00010c078420();
        puVar34 = puVar36;
        func_0x00010c1143e0();
        *(undefined8 **)((long)ppuVar3 + -0x9c8) = puVar34;
        *(char *)((long)ppuVar3 + -0x9d0) = (char)puVar14;
        *(undefined8 **)((long)ppuVar3 + -0x9e0) = puVar6;
        *(undefined8 **)((long)ppuVar3 + -0x9d8) = puVar31;
        *(undefined8 **)((long)ppuVar3 + -0x9f0) = puVar17;
        *(undefined8 **)((long)ppuVar3 + -0x9e8) = puVar15;
        *(undefined8 **)((long)ppuVar3 + -0xa00) = puVar29;
        *(undefined8 **)((long)ppuVar3 + -0x9f8) = puVar24;
        *(undefined8 *)((long)ppuVar3 + -0xa08) = *(undefined8 *)((long)ppuVar3 + -0x9c0);
        *(char *)((long)ppuVar3 + -0xa0f) = (char)*(undefined4 *)((long)ppuVar3 + -0x9b8);
        *(char *)((long)ppuVar3 + -0xa10) = (char)*(undefined4 *)((long)ppuVar3 + -0x9b4);
        puVar14 = *(undefined8 **)((long)ppuVar3 + -0x998);
        *(undefined8 *)((long)ppuVar3 + -0xa18) = *(undefined8 *)((long)ppuVar3 + -0x990);
        *(char *)((long)ppuVar3 + -0xa20) = (char)*(undefined4 *)((long)ppuVar3 + -0x9b0);
        *(undefined8 *)((long)ppuVar3 + -0xa30) = *(undefined8 *)((long)ppuVar3 + -0x980);
        *(undefined8 *)((long)ppuVar3 + -0xa28) = *(undefined8 *)((long)ppuVar3 + -0x988);
        func_0x00010c03bf60(uVar43,puVar14);
        _objc_release(puVar31);
        _objc_release(puVar6);
        _objc_release(puVar15);
        _objc_release(puVar17);
        _objc_release(puVar24);
        _objc_release(puVar29);
        _objc_release(*(undefined8 *)((long)ppuVar3 + -0x990));
        _objc_release(*(undefined8 *)((long)ppuVar3 + -0x988));
        _objc_release(*(undefined8 *)((long)ppuVar3 + -0x980));
        _objc_release(*(undefined8 *)((long)ppuVar3 + -0x978));
        _objc_release(*(undefined8 *)((long)ppuVar3 + -0x970));
        _objc_release(puVar4);
        __Block_object_dispose((undefined1 *)((long)ppuVar3 + -0x8f0),8);
        _objc_release(*(undefined8 *)((long)ppuVar3 + -0x8c8));
      }
      _objc_release(puVar5);
      _objc_release(*(undefined8 *)((long)ppuVar3 + -0x968));
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)ppuVar3 + -0x840)) {
        ___stack_chk_fail();
        lVar7 = 8;
        __Block_object_dispose((undefined1 *)((long)ppuVar3 + -0x8f0));
        __Unwind_Resume();
        puVar36[5] = *(undefined8 *)(lVar7 + 0x28);
        *(undefined8 *)(lVar7 + 0x28) = 0;
        return puVar36;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return puVar14;
}



/* Entry: 107d14bfc; end: 107d15e77;  */

void FUN_107d14bfc(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined *puVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  undefined8 uStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 uStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  undefined *puStack_4b8;
  long lStack_430;
  
  lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar3 = param_1;
  func_0x000108f41710();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x000108f418c8();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000108f41ca8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = puVar3;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x000100819d24();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar9 = puVar3;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar9;
  func_0x00010bf52a60();
  lVar27 = lRam0000000000000000;
  do {
    if (puVar5 == (undefined *)0x0) {
      _objc_release(puVar9);
      puVar5 = puVar3;
      func_0x00010c25b340(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c218940(param_9);
      _objc_release(puVar5);
      func_0x00010c2024a0(param_9);
      uVar16 = param_8;
      func_0x00010c269d40(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29f0c0();
      func_0x00010c218be0(param_9);
      _objc_release(uVar16);
      func_0x00010c218b80(param_9);
      puVar5 = puVar3;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar5;
      FUN_107d13514();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = puVar9;
      func_0x000107d13804();
      _objc_retainAutoreleasedReturnValue();
      puVar29 = puVar3;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      FUN_107d1398c();
      _objc_release(puVar29);
      lVar27 = 0;
      uVar16 = param_10;
      func_0x0001009703d0();
      if ((int)uVar16 == 0) {
        func_0x000108f580cc();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000108f581d4();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar29 = PTR_PTR_1126d78e0;
      _objc_alloc();
      puVar12 = puVar9;
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar9;
      func_0x00010bf0e700();
      _objc_retainAutoreleasedReturnValue();
      puVar31 = puVar3;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      puVar22 = puVar3;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      puVar23 = puVar3;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001005929c0();
      puVar24 = puVar9;
      func_0x00010c26f2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2709c0();
      func_0x00010c051d40();
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar31);
      _objc_release(puVar13);
      _objc_release(puVar12);
      puVar12 = PTR_PTR_1126d78e8;
      _objc_alloc();
      func_0x00010c019fe0();
      _objc_release(puVar29);
      _objc_release(uVar16);
      _objc_release(puVar5);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(param_10);
      _objc_release(param_9);
      _objc_release(param_8);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(param_2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar28) {
        ___stack_chk_fail();
        lStack_430 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain();
        _objc_retain(lVar27);
        puVar5 = param_1;
        func_0x00010bfa2680();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
        func_0x00010bf0a9a0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c22d640();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(puVar5);
        puVar5 = puVar4;
        func_0x00010c08fa60();
        if (puVar5 == (undefined *)0x0) {
          _objc_retain(param_1);
          puVar12 = param_1;
        }
        else {
          puStack_4d8 = &uStack_4e0;
          uStack_4e0 = 0;
          uStack_4d0 = 0x3032000000;
          pcStack_4c8 = FUN_107d1635c;
          uStack_4c0 = 0x107d1636c;
          puVar5 = param_1;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = 0;
          puStack_4b8 = puVar5;
          _objc_retain(lVar27);
          lVar28 = lVar27;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar28 != 0) {
            lVar34 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar27);
              }
              uVar30 = *(undefined8 *)(lVar34 * 8);
              uVar25 = uVar30;
              func_0x00010c22d640();
              _objc_retainAutoreleasedReturnValue();
              uVar26 = uVar25;
              func_0x00010c0720c0();
              _objc_release(uVar25);
              if ((int)uVar26 != 0) {
                func_0x00010bfe5400(uVar30);
                _objc_retainAutoreleasedReturnValue();
                _objc_retain(param_1);
                func_0x00010c0be560(uVar30);
                _objc_release(uVar30);
                _objc_release(param_1);
              }
              lVar34 = lVar34 + 1;
            } while (lVar28 != lVar34);
            lVar28 = lVar27;
            func_0x00010bf52a60();
          }
          _objc_release(lVar27);
          puVar12 = PTR_PTR_1126b47a0;
          _objc_alloc();
          puVar5 = param_1;
          func_0x00010c11ac00(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27dd80();
          puVar3 = param_1;
          func_0x00010bf5a820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf60900();
          puVar6 = param_1;
          func_0x00010c0f4aa0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = param_1;
          func_0x00010c1057e0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = param_1;
          func_0x00010c29ef80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c075620();
          puVar9 = param_1;
          func_0x00010c246f40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf608e0();
          func_0x00010bf608c0();
          func_0x00010c298be0();
          puVar29 = param_1;
          func_0x00010c0d02e0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = param_1;
          func_0x00010bf1d8c0();
          _objc_retainAutoreleasedReturnValue();
          puVar31 = param_1;
          func_0x00010bf1d820();
          _objc_retainAutoreleasedReturnValue();
          puVar22 = param_1;
          func_0x00010bf1d840();
          _objc_retainAutoreleasedReturnValue();
          puVar23 = param_1;
          func_0x00010bfa2680();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c085be0(param_1);
          puVar24 = param_1;
          func_0x00010bf15880();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c078420();
          func_0x00010c1143e0();
          func_0x00010c03bf60(uVar16,puVar12);
          _objc_release(puVar24);
          _objc_release(puVar23);
          _objc_release(puVar22);
          _objc_release(puVar31);
          _objc_release(puVar13);
          _objc_release(puVar29);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar3);
          _objc_release(puVar5);
          __Block_object_dispose(&uStack_4e0,8);
          _objc_release(puStack_4b8);
        }
        _objc_release(puVar4);
        _objc_release(lVar27);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_430) {
          ___stack_chk_fail();
          lVar27 = 8;
          __Block_object_dispose(&uStack_4e0);
          __Unwind_Resume();
          *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar27 + 0x28);
          *(undefined8 *)(lVar27 + 0x28) = 0;
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
      return;
    }
    puVar29 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar27) {
        _objc_enumerationMutation(puVar9);
      }
      uVar32 = *(ulong *)((long)puVar29 * 8);
      uVar33 = uVar32;
      func_0x00010bf0e700();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar33;
      func_0x00010bf0a8c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar33);
      if (((param_7 & 1) == 0) && (uVar33 = uVar10, func_0x00010c07f5e0(), (int)uVar33 == 0)) {
        bVar1 = false;
LAB_107d14e24:
        _objc_retain(uVar32);
        _objc_retain(puVar6);
        _objc_retain(puVar4);
        _objc_retain(param_8);
        _objc_retain(param_9);
        uVar33 = uVar32;
        func_0x00010c0d2260();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar33;
        func_0x00010bf24a40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar33);
        if ((bVar1) && (uVar33 = uVar11, func_0x00010c08fa60(), uVar33 != 0)) {
          puVar12 = puVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          if (puVar13 == (undefined *)0x0) {
            uVar33 = 0;
          }
          else {
            uVar33 = 0;
            do {
              puVar31 = (undefined *)0x0;
              do {
                if (lRam0000000000000000 != lVar2) {
                  _objc_enumerationMutation(puVar12);
                }
                uVar14 = *(ulong *)((long)puVar31 * 8);
                FUN_107d13ed0(uVar14,puVar4,param_8);
                if (uVar33 <= uVar14) {
                  uVar33 = uVar14;
                }
                puVar31 = puVar31 + 1;
              } while (puVar13 != puVar31);
              puVar13 = puVar12;
              func_0x00010bf52a60();
            } while (puVar13 != (undefined *)0x0);
          }
          _objc_release(puVar12);
        }
        else {
          uVar33 = uVar32;
          FUN_107d13ed0(uVar32,puVar4,param_8);
        }
        uVar14 = uVar32;
        func_0x00010bf0e700();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar14;
        func_0x00010bf0a8c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar14);
        uVar14 = uVar15;
        func_0x00010c07f5e0();
        uVar16 = param_9;
        uVar17 = uVar32;
        if ((((int)uVar14 == 0) || (uVar14 = uVar15, func_0x00010c24c380(), uVar14 != 2)) ||
           (uVar33 != 0)) {
          uVar33 = uVar15;
          func_0x00010c07f5e0();
          if ((int)uVar33 != 0) {
            func_0x00010c09ab20(param_9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf3cf60(uVar32);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d360(uVar16);
            goto LAB_107d15028;
          }
        }
        else {
          func_0x00010c09ab20(param_9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf3cf60(uVar32);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar16);
LAB_107d15028:
          _objc_release(uVar17);
          _objc_release(uVar16);
        }
        _objc_release(uVar15);
        _objc_release(uVar11);
        _objc_release(param_9);
        _objc_release(param_8);
        _objc_release(puVar4);
        _objc_release(puVar6);
        _objc_release(uVar32);
        _objc_retain(uVar32);
        _objc_retain(puVar6);
        _objc_retain(puVar4);
        _objc_retain(param_8);
        uVar33 = uVar32;
        func_0x00010c0d2260();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar33;
        func_0x00010bf24a40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar33);
        if (bVar1) {
          uVar33 = uVar32;
          func_0x00010c0d2260();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar33;
          func_0x00010bf24a40();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar14;
          func_0x00010c08fa60();
          _objc_release(uVar14);
          _objc_release(uVar33);
          if (uVar15 == 0) goto LAB_107d151b8;
          puVar13 = puVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar13;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (puVar12 != (undefined *)0x0) {
            puVar31 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(puVar13);
              }
              func_0x000107d140f0(*(undefined8 *)((long)puVar31 * 8),puVar4,param_8);
              puVar31 = puVar31 + 1;
            } while (puVar12 != puVar31);
            puVar12 = puVar13;
            func_0x00010bf52a60();
          }
          _objc_release(puVar13);
        }
        else {
LAB_107d151b8:
          func_0x000107d140f0(uVar32,puVar4,param_8);
        }
        _objc_release(uVar11);
        _objc_release(param_8);
        _objc_release(puVar4);
        _objc_release(puVar6);
        _objc_release(uVar32);
        uVar33 = uVar32;
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        _objc_release(uVar33);
        _objc_retain(uVar32);
        _objc_retain(puVar6);
        _objc_retain(param_4);
        uVar33 = uVar32;
        func_0x00010c0d2260();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar33;
        func_0x00010bf24a40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar33);
        if (bVar1) {
          uVar33 = uVar32;
          func_0x00010c0d2260();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar33;
          func_0x00010bf24a40();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar14;
          func_0x00010c08fa60();
          _objc_release(uVar14);
          _objc_release(uVar33);
          if (uVar15 == 0) goto LAB_107d1536c;
          puVar13 = puVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar13;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (puVar12 != (undefined *)0x0) {
            puVar31 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(puVar13);
              }
              FUN_107d13bf4(*(undefined8 *)((long)puVar31 * 8),param_4);
              puVar31 = puVar31 + 1;
            } while (puVar12 != puVar31);
            puVar12 = puVar13;
            func_0x00010bf52a60();
          }
          func_0x00010bf529e0();
          _objc_release(puVar13);
        }
        else {
LAB_107d1536c:
          FUN_107d13bf4(uVar32,param_4);
        }
        _objc_release(uVar11);
        _objc_release(param_4);
        _objc_release(puVar6);
        _objc_release(uVar32);
        _objc_retain(uVar32);
        _objc_retain(puVar6);
        _objc_retain(param_3);
        uVar33 = uVar32;
        func_0x00010c0d2260();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar33;
        func_0x00010bf24a40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar33);
        if (bVar1) {
          uVar33 = uVar32;
          func_0x00010c0d2260();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar33;
          func_0x00010bf24a40();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar14;
          func_0x00010c08fa60();
          _objc_release(uVar14);
          _objc_release(uVar33);
          if (uVar15 == 0) goto LAB_107d15500;
          puVar13 = puVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar12 = puVar13;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (puVar12 != (undefined *)0x0) {
            puVar31 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(puVar13);
              }
              uVar33 = *(ulong *)((long)puVar31 * 8);
              FUN_107d13ca4(uVar33,param_3);
              if ((uVar33 & 1) != 0) goto LAB_107d15528;
              puVar31 = puVar31 + 1;
            } while (puVar12 != puVar31);
            puVar12 = puVar13;
            func_0x00010bf52a60();
          }
LAB_107d15528:
          _objc_release(puVar13);
          _objc_release(puVar13);
        }
        else {
LAB_107d15500:
          FUN_107d13ca4(uVar32,param_3);
        }
        _objc_release(uVar11);
        _objc_release(param_3);
        _objc_release(puVar6);
        _objc_release(uVar32);
        _objc_retain(uVar32);
        _objc_retain(puVar6);
        _objc_retain(param_3);
        uVar33 = uVar32;
        func_0x00010c0d2260();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar33;
        func_0x00010bf24a40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar33);
        if (bVar1) {
          uVar33 = uVar32;
          func_0x00010c0d2260();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar33;
          func_0x00010bf24a40();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar14;
          func_0x00010c08fa60();
          _objc_release(uVar14);
          _objc_release(uVar33);
          if (uVar15 == 0) goto LAB_107d15698;
          puVar13 = puVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar12 = puVar13;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (puVar12 != (undefined *)0x0) {
            puVar31 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(puVar13);
              }
              uVar33 = *(ulong *)((long)puVar31 * 8);
              func_0x000107d13d5c(uVar33,param_3);
              if ((uVar33 & 1) != 0) goto LAB_107d156c0;
              puVar31 = puVar31 + 1;
            } while (puVar12 != puVar31);
            puVar12 = puVar13;
            func_0x00010bf52a60();
          }
LAB_107d156c0:
          _objc_release(puVar13);
          _objc_release(puVar13);
        }
        else {
LAB_107d15698:
          func_0x000107d13d5c(uVar32,param_3);
        }
        _objc_release(uVar11);
        _objc_release(param_3);
        _objc_release(puVar6);
        _objc_release(uVar32);
        _objc_retain(uVar32);
        _objc_retain(puVar6);
        _objc_retain(param_2);
        uVar33 = uVar32;
        func_0x00010c0d2260();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar33;
        func_0x00010bf24a40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar33);
        if (bVar1) {
          uVar33 = uVar32;
          func_0x00010c0d2260();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar33;
          func_0x00010bf24a40();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar14;
          func_0x00010c08fa60();
          _objc_release(uVar14);
          _objc_release(uVar33);
          if (uVar15 == 0) goto LAB_107d15830;
          puVar13 = puVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar12 = puVar13;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (puVar12 != (undefined *)0x0) {
            puVar31 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(puVar13);
              }
              uVar33 = *(ulong *)((long)puVar31 * 8);
              FUN_107d13e10(uVar33,param_2);
              if ((uVar33 & 1) != 0) goto LAB_107d15858;
              puVar31 = puVar31 + 1;
            } while (puVar12 != puVar31);
            puVar12 = puVar13;
            func_0x00010bf52a60();
          }
LAB_107d15858:
          _objc_release(puVar13);
          _objc_release(puVar13);
        }
        else {
LAB_107d15830:
          FUN_107d13e10(uVar32,param_2);
        }
        _objc_release(uVar11);
        _objc_release(param_2);
        _objc_release(puVar6);
        _objc_release(uVar32);
        uVar33 = uVar10;
        func_0x00010bf9e140();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR_PTR_1126b1088;
        _objc_alloc();
        uVar11 = uVar32;
        func_0x000107d138dc();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar32;
        func_0x00010bf0e700();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar32;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar3;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar32;
        func_0x00010c12fc80();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar17;
        func_0x00010bf30620();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar32;
        func_0x00010c26f2a0();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar19;
        func_0x00010c2709c0();
        func_0x000109021670();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07f5e0();
        func_0x00010c077620();
        func_0x00010bf4e880();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar32;
        func_0x00010c11ff60();
        _objc_retainAutoreleasedReturnValue();
        FUN_107d2a86c();
        func_0x00010c04d3c0(puVar12);
        func_0x00010befa120(puVar7);
        _objc_release(puVar12);
        _objc_release(uVar21);
        _objc_release(uVar32);
        _objc_release(uVar20);
        _objc_release(uVar19);
        _objc_release(uVar18);
        _objc_release(uVar17);
        _objc_release(puVar13);
        _objc_release(uVar15);
        _objc_release(uVar14);
        _objc_release(uVar11);
        _objc_release(uVar33);
      }
      else {
        uVar33 = uVar32;
        func_0x000108f41bc0(uVar32,puVar8);
        if ((uVar33 & 1) == 0) {
          bVar1 = true;
          goto LAB_107d14e24;
        }
      }
      _objc_release(uVar10);
      puVar29 = puVar29 + 1;
    } while (puVar29 != puVar5);
    puVar5 = puVar9;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107d15e78; end: 107d1635b;  */

void FUN_107d15e78(undefined *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = param_1;
  func_0x00010bfa2680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf0a9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c22d640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    _objc_retain(param_1);
    puVar2 = param_1;
  }
  else {
    puStack_128 = &uStack_130;
    uStack_130 = 0;
    uStack_120 = 0x3032000000;
    pcStack_118 = FUN_107d1635c;
    uStack_110 = 0x107d1636c;
    puVar2 = param_1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = 0;
    puStack_108 = puVar2;
    _objc_retain(param_2);
    lVar18 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar18 != 0) {
      lVar20 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar19 = *(undefined8 *)(lVar20 * 8);
        uVar5 = uVar19;
        func_0x00010c22d640();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0720c0();
        _objc_release(uVar5);
        if ((int)uVar6 != 0) {
          func_0x00010bfe5400(uVar19);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(param_1);
          func_0x00010c0be560(uVar19);
          _objc_release(uVar19);
          _objc_release(param_1);
        }
        lVar20 = lVar20 + 1;
      } while (lVar18 != lVar20);
      lVar18 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    puVar2 = PTR_PTR_1126b47a0;
    _objc_alloc();
    puVar3 = param_1;
    func_0x00010c11ac00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    puVar7 = param_1;
    func_0x00010bf5a820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf60900();
    puVar8 = param_1;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010c1057e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_1;
    func_0x00010c29ef80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c075620();
    puVar11 = param_1;
    func_0x00010c246f40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf608e0();
    func_0x00010bf608c0();
    func_0x00010c298be0();
    puVar12 = param_1;
    func_0x00010c0d02e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_1;
    func_0x00010bf1d8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_1;
    func_0x00010bf1d820();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_1;
    func_0x00010bf1d840();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_1;
    func_0x00010bfa2680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c085be0(param_1);
    puVar17 = param_1;
    func_0x00010bf15880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078420();
    func_0x00010c1143e0();
    func_0x00010c03bf60(uVar21,puVar2);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_130,8);
    _objc_release(puStack_108);
  }
  _objc_release(puVar4);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  lVar18 = 8;
  __Block_object_dispose(&uStack_130);
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar18 + 0x28);
  *(undefined8 *)(lVar18 + 0x28) = 0;
  return;
}



/* Entry: 107d1635c; end: 107d16373;  */

void FUN_107d1635c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107d16374; end: 107d1640b;  */

void FUN_107d16374(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c25cde0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar1;
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d1640c; end: 107d16a9b;  */

void FUN_107d1640c(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf529e0();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = param_1;
  if (puVar1 == (undefined *)0x1) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110eb8e18;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb8e18,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
LAB_107d16528:
    _objc_release(puVar4);
    _objc_release(ppuVar3);
LAB_107d16538:
    puVar1 = puVar6;
    if (param_2 == 0) goto LAB_107d165c4;
    if (param_2 == 1) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110eb8e78;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb8e78,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ce40(puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110eb8e98;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb8e98,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25cde0(puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar6 = param_1;
    func_0x00010bf529e0();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar5 = param_1;
    if (puVar6 == (undefined *)0x2) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110eb8e38;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb8e38,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar1);
      _objc_retainAutoreleasedReturnValue();
LAB_107d16520:
      _objc_release(puVar5);
      puVar6 = puVar1;
      goto LAB_107d16528;
    }
    puVar6 = param_1;
    func_0x00010bf529e0();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((param_2 != 0) || (puVar6 != (undefined *)0x3)) {
      puVar2 = param_1;
      func_0x00010bf529e0();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar6 = (undefined *)0x0;
      if ((param_2 != 0) && (puVar2 == (undefined *)0x3)) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110e159d8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e159d8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        goto LAB_107d16520;
      }
      goto LAB_107d16538;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110eb8e58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb8e58,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar6);
  _objc_release(ppuVar3);
LAB_107d165c4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d16a9c; end: 107d17767;  */

undefined * FUN_107d16a9c(long param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar21 = param_1;
  func_0x00010c27dd80();
  if (lVar21 == 10) {
    puVar14 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_1;
    func_0x00010bf5a820();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar21;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c08fa60();
    _objc_release(lVar10);
    _objc_release(lVar21);
    if (lVar11 != 0) {
      lVar21 = param_1;
      func_0x00010bf5a820(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar21;
      func_0x00010bf5bbc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar14);
      _objc_release(lVar10);
      _objc_release(lVar21);
    }
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    lVar21 = param_1;
    func_0x00010c0d02e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar21;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      lVar11 = *plStack_220;
      do {
        lVar20 = 0;
        do {
          if (*plStack_220 != lVar11) {
            _objc_enumerationMutation(lVar21);
          }
          lVar16 = *(long *)(lStack_228 + lVar20 * 8);
          func_0x00010c08fa60();
          if (lVar16 != 0) {
            func_0x00010befa120(puVar14);
          }
          lVar20 = lVar20 + 1;
        } while (lVar10 != lVar20);
        lVar10 = lVar21;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
    _objc_release(lVar21);
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    _objc_retain(puVar14);
    puVar9 = &uStack_270;
    puVar2 = puVar14;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar21 = *plStack_260;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_260 != lVar21) {
            _objc_enumerationMutation(puVar14);
          }
          puVar17 = *(undefined8 **)(lStack_268 + (long)puVar12 * 8);
          puVar1 = puVar13;
          func_0x00010bf529e0();
          if (puVar1 == (undefined *)0x3) goto LAB_107d16d9c;
          uVar8 = param_2;
          puVar9 = puVar17;
          func_0x00010c0720c0();
          if ((uVar8 & 1) == 0) {
            lVar10 = param_3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar10;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
            lVar20 = lVar11;
            func_0x00010c08fa60();
            _objc_release(lVar11);
            puVar3 = (undefined8 *)PTR_PTR_1126b2c18;
            puVar9 = puVar17;
            if (lVar20 != 0) {
              lVar11 = lVar10;
              func_0x00010bf85d80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c22d940();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar11);
              puVar9 = puVar3;
              func_0x00010befa120(puVar13);
              _objc_release(puVar3);
            }
            _objc_release(lVar10);
          }
          puVar12 = puVar12 + 1;
        } while (puVar2 != puVar12);
        puVar9 = &uStack_270;
        puVar2 = puVar14;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
LAB_107d16d9c:
    _objc_release(puVar14);
    uVar8 = 0;
    puVar2 = puVar13;
    FUN_107d1640c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
  }
  else {
    puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    lVar21 = param_1;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = &uStack_2b0;
    lVar10 = lVar21;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      lVar11 = *plStack_2a0;
      do {
        lVar20 = 0;
        do {
          if (*plStack_2a0 != lVar11) {
            _objc_enumerationMutation(lVar21);
          }
          puVar17 = *(undefined8 **)(lStack_2a8 + lVar20 * 8);
          puVar2 = puVar14;
          func_0x00010bf529e0();
          if (puVar2 == (undefined *)0x3) goto LAB_107d16f6c;
          puVar3 = puVar17;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = param_2;
          puVar9 = puVar3;
          func_0x00010c0720c0();
          _objc_release(puVar3);
          if ((uVar8 & 1) == 0) {
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            lVar16 = param_3;
            puVar9 = puVar17;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar17);
            lVar18 = lVar16;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar18;
            func_0x00010c08fa60();
            _objc_release(lVar18);
            puVar17 = (undefined8 *)PTR_PTR_1126b2c18;
            if (lVar4 != 0) {
              lVar18 = lVar16;
              func_0x00010bf85d80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c22d940();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar18);
              puVar9 = puVar17;
              func_0x00010befa120(puVar14);
              _objc_release(puVar17);
            }
            _objc_release(lVar16);
          }
          lVar20 = lVar20 + 1;
        } while (lVar10 != lVar20);
        puVar9 = &uStack_2b0;
        lVar10 = lVar21;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
LAB_107d16f6c:
    _objc_release(lVar21);
    lVar21 = param_1;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar21;
    func_0x00010bf529e0();
    puVar2 = puVar14;
    func_0x00010bf529e0();
    _objc_release(lVar21);
    uVar8 = lVar10 + ~(ulong)puVar2;
    puVar2 = puVar14;
    FUN_107d1640c();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar14);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(uVar8);
    _objc_retain(puVar9);
    lVar21 = param_1;
    func_0x00010c27dd80();
    if (lVar21 == 10) {
      puVar14 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      func_0x00010c0ecd20();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = param_1;
      func_0x00010bf5a820();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar21;
      func_0x00010bf5bbc0();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar11;
      func_0x00010c08fa60();
      _objc_release(lVar11);
      _objc_release(lVar21);
      if (lVar20 != 0) {
        lVar21 = param_1;
        func_0x00010bf5a820(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar21;
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar14);
        _objc_release(lVar11);
        _objc_release(lVar21);
      }
      lVar20 = param_1;
      func_0x00010c0d02e0();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar20;
      func_0x00010bf52a60();
      lVar11 = lRam0000000000000000;
      while (lVar21 != 0) {
        lVar16 = 0;
        do {
          if (lRam0000000000000000 != lVar11) {
            _objc_enumerationMutation(lVar20);
          }
          lVar18 = *(long *)(lVar16 * 8);
          func_0x00010c08fa60();
          if (lVar18 != 0) {
            func_0x00010befa120(puVar14);
          }
          lVar16 = lVar16 + 1;
        } while (lVar21 != lVar16);
        lVar21 = lVar20;
        func_0x00010bf52a60();
      }
      _objc_release(lVar20);
      puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar14);
      puVar2 = puVar14;
      func_0x00010bf52a60();
      lVar21 = lRam0000000000000000;
      while (puVar2 != (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar21) {
            _objc_enumerationMutation(puVar14);
          }
          puVar1 = puVar12;
          func_0x00010bf529e0();
          if (puVar1 == (undefined *)0x3) goto LAB_107d17320;
          uVar6 = uVar8;
          func_0x00010c0720c0();
          if ((uVar6 & 1) == 0) {
            puVar17 = puVar9;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar17;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010c08fa60();
            _objc_release(puVar3);
            puVar1 = PTR_PTR_1126b2c18;
            if (puVar7 != (undefined8 *)0x0) {
              puVar3 = puVar17;
              func_0x00010bf85d80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c22d940();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar3);
              func_0x00010befa120(puVar12);
              _objc_release(puVar1);
            }
            _objc_release(puVar17);
          }
          puVar13 = puVar13 + 1;
        } while (puVar2 != puVar13);
        puVar2 = puVar14;
        func_0x00010bf52a60();
      }
LAB_107d17320:
      _objc_release(puVar14);
      puVar13 = (undefined *)0x0;
      puVar2 = puVar12;
      func_0x000107d16750();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
    }
    else {
      puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = param_1;
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar20;
      func_0x00010bf52a60();
      lVar11 = lRam0000000000000000;
      while (lVar21 != 0) {
        lVar16 = 0;
        do {
          if (lRam0000000000000000 != lVar11) {
            _objc_enumerationMutation(lVar20);
          }
          uVar19 = *(undefined8 *)(lVar16 * 8);
          puVar2 = puVar14;
          func_0x00010bf529e0();
          if (puVar2 == (undefined *)0x3) goto LAB_107d174f0;
          uVar5 = uVar19;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar8;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          if ((uVar6 & 1) == 0) {
            func_0x00010c2923e0(uVar19);
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar9;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar19);
            puVar3 = puVar17;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010c08fa60();
            _objc_release(puVar3);
            puVar2 = PTR_PTR_1126b2c18;
            if (puVar7 != (undefined8 *)0x0) {
              puVar3 = puVar17;
              func_0x00010bf85d80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c22d940();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar3);
              func_0x00010befa120(puVar14);
              _objc_release(puVar2);
            }
            _objc_release(puVar17);
          }
          lVar16 = lVar16 + 1;
        } while (lVar21 != lVar16);
        lVar21 = lVar20;
        func_0x00010bf52a60();
      }
LAB_107d174f0:
      _objc_release(lVar20);
      lVar21 = param_1;
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar21;
      func_0x00010bf529e0();
      puVar2 = puVar14;
      func_0x00010bf529e0();
      _objc_release(lVar21);
      puVar13 = (undefined *)(lVar11 + ~(ulong)puVar2);
      puVar2 = puVar14;
      func_0x000107d16750();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar14);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
      lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar13);
      if (puVar13 != (undefined *)0x0) {
        func_0x000108f41710();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = param_1;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar10;
        func_0x000100819d24();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
        lVar16 = param_1;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar16;
        func_0x00010bf52a60();
        lVar11 = lRam0000000000000000;
        while (lVar10 != 0) {
          lVar18 = 0;
          do {
            if (lRam0000000000000000 != lVar11) {
              _objc_enumerationMutation(lVar16);
            }
            uVar15 = *(ulong *)(lVar18 * 8);
            uVar8 = uVar15;
            func_0x00010bf0e700();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar8;
            func_0x00010bf0a8c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar8);
            uVar8 = uVar6;
            func_0x00010c07f5e0();
            if (((int)uVar8 == 0) || (func_0x000108f41bc0(uVar15,lVar20), (uVar15 & 1) == 0)) {
              func_0x00010c1eae60(puVar13);
            }
            _objc_release(uVar6);
            lVar18 = lVar18 + 1;
          } while (lVar10 != lVar18);
          lVar10 = lVar16;
          func_0x00010bf52a60();
        }
        _objc_release(lVar16);
        _objc_release(lVar20);
        _objc_release(param_1);
      }
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
        return puVar13;
      }
      ___stack_chk_fail();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puVar14 = (undefined *)0x0;
      if (puVar13 != (undefined *)0x0) {
        _objc_retain(puVar13);
        _objc_opt_new(puVar2);
        puVar14 = puVar13;
        func_0x00010c25b340(puVar13);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        func_0x0001084d2cc4(puVar14,puVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        puVar14 = puVar2;
        func_0x00010bf529e0(puVar2);
        puVar14 = (undefined *)(ulong)(puVar14 != (undefined *)0x0);
        _objc_release(puVar2);
      }
      return puVar14;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 107d17768; end: 107d177ff;  */

bool FUN_107d17768(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  bVar1 = false;
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_opt_new(puVar2);
    lVar3 = param_1;
    func_0x00010c25b340(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x0001084d2cc4(lVar3,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar4 = puVar2;
    func_0x00010bf529e0(puVar2);
    bVar1 = puVar4 != (undefined *)0x0;
    _objc_release(puVar2);
  }
  return bVar1;
}



/* Entry: 107d17800; end: 107d17bb3;  */

void FUN_107d17800(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar2 = param_1;
    func_0x00010c25b340(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001084d2cc4();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar3 = puVar1;
    func_0x00010bf529e0();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126b1338;
      _objc_alloc(PTR_PTR_1126b1338);
      lVar2 = param_1;
      func_0x00010c259cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04dbe0(puVar3);
      _objc_release(lVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d17bb4; end: 107d17c17; -[SCUnifiedProfileMyStoriesDataSourceManager init] */

undefined1 * FUN_107d17bb4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126faa20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107d17c18; end: 107d17c73; -[SCUnifiedProfileMyStoriesDataSourceManager dismissTooltipForStoryId:] */

void FUN_107d17c18(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84780();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d17c74; end: 107d17cdb; -[SCUnifiedProfileMyStoriesDataSourceManager registerStoryDataSource:forStoryId:] */

void FUN_107d17c74(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((param_3 != 0) && (lVar1 != 0)) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d17cdc; end: 107d17d5b; -[SCUnifiedProfileMyStoriesDataSourceManager storySavableObservableForStoryId:] */

void FUN_107d17cdc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25af00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107d17d5c; end: 107d17d67; -[SCUnifiedProfileMyStoriesDataSourceManager .cxx_destruct] */

void FUN_107d17d5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d17d68; end: 107d17f1b; -[SCUnifiedProfileStoriesSectionDataProvider initWithImageDownloader:dataSource:showEmptyState:storyPrivacySettingManager:circumstanceEngine:lazyLegacyProfileTooltipsService:] */

undefined1 *
FUN_107d17d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126faa28;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x38) = param_5;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_8;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c25aac0();
    *(undefined8 *)((long)puVar1 + 0x60) = uVar4;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c157a20();
    *(char *)((long)puVar1 + 0x68) = (char)uVar4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b1130;
    func_0x00010c070420();
    *(char *)((long)puVar1 + 0x80) = (char)puVar3;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d17f1c; end: 107d17f8f; -[SCUnifiedProfileStoriesSectionDataProvider setUpdateQueuePerformer:] */

void FUN_107d17f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b4a0(*(undefined8 *)(param_1 + 0x20),param_2,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d17f90; end: 107d1809f; -[SCUnifiedProfileStoriesSectionDataProvider setUp] */

void FUN_107d17f90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c258ba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107d180a0; end: 107d180e7;  */

void FUN_107d180a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a560();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d180e8; end: 107d180ef; -[SCUnifiedProfileStoriesSectionDataProvider tearDown] */

void FUN_107d180e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 107d180f0; end: 107d18317; -[SCUnifiedProfileStoriesSectionDataProvider _onNextSectionDataModel:] */

void FUN_107d180f0(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfdf440();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  func_0x0001005929c0();
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x000108f494b0();
  puVar1 = PTR_PTR_1126c2fa8;
  func_0x00010bf33ec0(PTR_PTR_1126c2fa8);
  lVar3 = param_1;
  func_0x00010bf8eda0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf8ed60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf8ed80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  FUN_107d19658(lVar3,lVar4,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  FUN_107d19ab4(uVar7,puVar1 != (undefined *)0x0,*(undefined1 *)(param_1 + 0x38),1,
                *(undefined8 *)(param_1 + 0x60),*(undefined1 *)(param_1 + 0x68),uVar9,
                *(undefined8 *)(param_1 + 0x70),3,lVar2 == 2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  _objc_release(uVar10);
  puVar8 = param_3;
  func_0x00010c23fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar8 != (undefined *)0x0) {
    puVar1 = puVar8;
  }
  func_0x00010c140200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar7);
  _objc_release(puVar8);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107d18318;
  puStack_78 = &UNK_110a08ea8;
  uStack_68 = (undefined1)uVar9;
  lStack_70 = param_1;
  func_0x00010bd86420(uVar7,&puStack_90);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  _objc_release(uVar9);
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained(param_1);
  func_0x00010c258bc0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 107d18318; end: 107d1839f;  */

void FUN_107d18318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x68);
  uVar2 = *(undefined1 *)(param_1 + 0x28);
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c0823e0(param_2);
  uVar4 = param_2;
  FUN_107d1adc0(param_2,param_3,uVar1,uVar2,(uint)uVar3 ^ 1,
                *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107d183a0; end: 107d183ab; +[SCUnifiedProfileStoriesSectionDataProvider announcerIdentifier] */

undefined ** FUN_107d183a0(void)

{
  return &PTR____CFConstantStringClassReference_110eb8ed8;
}



/* Entry: 107d183ac; end: 107d183b3; -[SCUnifiedProfileStoriesSectionDataProvider addListener:] */

void FUN_107d183ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107d183b4; end: 107d183bb; -[SCUnifiedProfileStoriesSectionDataProvider removeListener:] */

void FUN_107d183b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107d183bc; end: 107d184ab; -[SCUnifiedProfileStoriesSectionDataProvider setSectionDataModel:] */

void FUN_107d183bc(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar3;
  long lVar4;
  long lVar2;
  
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x78);
  _objc_retain(lVar4);
  _objc_retain(param_3);
  if (lVar4 == param_3) {
    iVar1 = 1;
  }
  else if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    lVar2 = lVar4;
    func_0x00010c071ae0(lVar4,param_2,param_3);
    iVar1 = (int)lVar2;
  }
  _objc_release(param_3);
  _objc_release(lVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(long *)(param_1 + 0x78) = param_3;
  _objc_release(uVar3);
  if (*(char *)(param_1 + 0x80) == '\x01') {
    if ((iVar1 == 0) || ((*(byte *)(param_1 + 0x81) & 1) == 0)) {
      lVar4 = param_1 + 0x90;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c258bc0();
      _objc_release(lVar4);
      *(undefined1 *)(param_1 + 0x81) = 1;
    }
    return;
  }
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained(param_1);
  func_0x00010c258bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d184ac; end: 107d184d3; -[SCUnifiedProfileStoriesSectionDataProvider storiesCellViewModel] */

void FUN_107d184ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d184d4; end: 107d184fb; -[SCUnifiedProfileStoriesSectionDataProvider storyListViewCellViewModels] */

void FUN_107d184d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d184fc; end: 107d1859b; -[SCUnifiedProfileStoriesSectionDataProvider configurationBlockForStoriesCell] */

void FUN_107d184fc(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107d1859c;
  puStack_48 = &UNK_110845ae0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  puVar2 = (undefined1 *)ppuVar1;
  _objc_retainBlock();
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d1859c; end: 107d185e3;  */

void FUN_107d1859c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5b60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d185e4; end: 107d18683; -[SCUnifiedProfileStoriesSectionDataProvider configurationBlockForStoriesListViewCell] */

void FUN_107d185e4(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107d18684;
  puStack_48 = &UNK_110845ae0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  puVar2 = (undefined1 *)ppuVar1;
  _objc_retainBlock();
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d18684; end: 107d186cb;  */

void FUN_107d18684(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5b80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d186cc; end: 107d18737; -[SCUnifiedProfileStoriesSectionDataProvider viewMoreExpansionThreshold] */

long FUN_107d186cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c25b720();
  if (lVar1 < 6) {
    if (lVar1 != 1) {
      if ((lVar1 != 2) && (lVar1 != 3)) {
        return -1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bee9c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__viewMoreExpansionThresholdForSp_1125980b0);
      return param_1;
    }
  }
  else if (2 < lVar1 - 6U) {
    return -1;
  }
  return 1;
}



/* Entry: 107d18738; end: 107d188bb; -[SCUnifiedProfileStoriesSectionDataProvider _viewMoreExpansionThresholdForSpotlight] */

ulong FUN_107d18738(long param_1,undefined8 param_2)

{
  double dVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
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
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar5 = *(long *)(param_1 + 0x50);
  _objc_retain(lVar5);
  lVar4 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_140,auStack_f8,0x10);
  if (lVar4 == 0) {
    _objc_release(lVar5);
  }
  else {
    uVar7 = 0;
    lVar8 = *plStack_130;
    do {
      lVar9 = 0;
      do {
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(lVar5);
        }
        uVar6 = *(undefined8 *)(lStack_138 + lVar9 * 8);
        puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2709c0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380(puVar2,param_2,uVar6);
        dVar1 = (double)CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,CONCAT13(
                                                  uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10)))))
                                                ));
        _objc_release(uVar6);
        _objc_release(puVar2);
        if (dVar1 <= 86400.0) {
          uVar7 = uVar7 + 1;
        }
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_140,auStack_f8,0x10);
    } while (lVar4 != 0);
    _objc_release(lVar5);
    uVar3 = uVar7;
    if (9 < uVar7) {
      uVar3 = 10;
    }
    if (uVar7 != 0) goto LAB_107d1887c;
  }
  uVar3 = 10;
LAB_107d1887c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return uVar3;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(uVar3 + 0x40);
  func_0x00010c25b720();
  if (lVar4 - 1U < 8) {
    uVar7 = *(ulong *)(&UNK_10dee5d38 + (lVar4 - 1U) * 8);
  }
  else {
    uVar7 = 0xffffffffffffffff;
  }
  return uVar7;
}



/* Entry: 107d188bc; end: 107d188f3; -[SCUnifiedProfileStoriesSectionDataProvider viewMoreExpansionIncrementThreshold] */

undefined8 FUN_107d188bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c25b720();
  if (lVar1 - 1U < 8) {
    uVar2 = *(undefined8 *)(&UNK_10dee5d38 + (lVar1 - 1U) * 8);
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}



/* Entry: 107d188f4; end: 107d188fb; -[SCUnifiedProfileStoriesSectionDataProvider storyId] */

void FUN_107d188f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_storyId_112674158);
  return;
}



/* Entry: 107d188fc; end: 107d18903; -[SCUnifiedProfileStoriesSectionDataProvider storyType] */

void FUN_107d188fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25b730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_storyType_1126747f0);
  return;
}



/* Entry: 107d18904; end: 107d18973; -[SCUnifiedProfileStoriesSectionDataProvider _configureStoriesCollectionViewCell:] */

void FUN_107d18904(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b10f8;
  _objc_opt_class(PTR_PTR_1126b10f8);
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



/* Entry: 107d18974; end: 107d189e3; -[SCUnifiedProfileStoriesSectionDataProvider _configureStoriesListViewCell:] */

void FUN_107d18974(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cc250;
  _objc_opt_class(PTR_PTR_1126cc250);
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



/* Entry: 107d189e4; end: 107d189fb; -[SCUnifiedProfileStoriesSectionDataProvider dataProviderDelegate] */

void FUN_107d189e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d189fc; end: 107d18a07; -[SCUnifiedProfileStoriesSectionDataProvider setDataProviderDelegate:] */

void FUN_107d189fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 107d18a08; end: 107d18a0f; -[SCUnifiedProfileStoriesSectionDataProvider updateQueuePerformer] */

undefined8 FUN_107d18a08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107d18a10; end: 107d18a17; -[SCUnifiedProfileStoriesSectionDataProvider emptyStateBitmojiUserId] */

undefined8 FUN_107d18a10(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107d18a18; end: 107d18a1f; -[SCUnifiedProfileStoriesSectionDataProvider setEmptyStateBitmojiUserId:] */

void FUN_107d18a18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d18a20; end: 107d18a27; -[SCUnifiedProfileStoriesSectionDataProvider emptyStateBitmojiAvatarId] */

undefined8 FUN_107d18a20(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 107d18a28; end: 107d18a2f; -[SCUnifiedProfileStoriesSectionDataProvider setEmptyStateBitmojiAvatarId:] */

void FUN_107d18a28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d18a30; end: 107d18a37; -[SCUnifiedProfileStoriesSectionDataProvider emptyStateBitmojiSelfieId] */

undefined8 FUN_107d18a30(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 107d18a38; end: 107d18a3f; -[SCUnifiedProfileStoriesSectionDataProvider setEmptyStateBitmojiSelfieId:] */

void FUN_107d18a38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d18a40; end: 107d18b1f; -[SCUnifiedProfileStoriesSectionDataProvider .cxx_destruct] */

void FUN_107d18a40(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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



/* Entry: 107d18b20; end: 107d192c3;  */

void FUN_107d18b20(undefined **param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 param_7,ulong param_8,long param_9,long param_10)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_10 == -1) {
    func_0x000108f57f4c();
    iVar12 = (int)param_5;
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_1;
    func_0x000108f63694();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    ppuVar15 = (undefined **)PTR_PTR_1126c72f8;
    _objc_alloc();
    lVar9 = param_2;
LAB_107d18bf8:
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = 0;
    ppuVar8 = ppuVar2;
    func_0x00010c044860();
LAB_107d18eb0:
    _objc_release(ppuVar2);
  }
  else {
    if (param_10 == -2) {
      func_0x000108f57f34();
      iVar12 = (int)param_5;
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = param_1;
      func_0x000108f635f4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      ppuVar15 = (undefined **)PTR_PTR_1126c72f8;
      _objc_alloc();
      lVar9 = param_2;
      goto LAB_107d18bf8;
    }
    if (param_6 != 0) {
      if (param_6 == 1) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110eb8f18;
        lVar9 = 0;
        func_0x00010bcbeaa8();
        iVar12 = (int)param_5;
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar15 = &PTR____CFConstantStringClassReference_110eb8f38;
        lVar9 = 0;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb8f38);
        iVar12 = (int)param_5;
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar15);
      }
      ppuVar2 = ppuVar1;
      func_0x000108f63694();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = (undefined **)PTR_PTR_1126c72f8;
      _objc_alloc();
LAB_107d18e80:
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = 0;
      ppuVar8 = ppuVar3;
      func_0x00010c044860();
      _objc_release(ppuVar3);
      goto LAB_107d18eb0;
    }
    if (param_5 != 0) {
      if (param_5 == 1) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110eb8f58;
        lVar9 = 0;
        func_0x00010bcbeaa8();
        iVar12 = (int)param_5;
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar15 = &PTR____CFConstantStringClassReference_110eb8f78;
        lVar9 = 0;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb8f78);
        iVar12 = (int)param_5;
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar15);
      }
      ppuVar2 = ppuVar1;
      func_0x000108f635f4();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = (undefined **)PTR_PTR_1126c72f8;
      _objc_alloc();
      goto LAB_107d18e80;
    }
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    lVar9 = param_2;
    _objc_alloc_init();
    puVar5 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    iVar12 = (int)param_5;
    if ((param_8 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09e880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar6 = puVar5;
      func_0x000108f63554();
      _objc_retainAutoreleasedReturnValue();
      iVar12 = 0;
      puVar7 = PTR_PTR_1126c7300;
      func_0x00010bfe5cc0(0x4028000000000000,0x4014000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(ppuVar1);
      _objc_release(puVar4);
    }
    else {
      ppuVar15 = ppuVar1;
      func_0x000108f58ce4();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09e880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar6);
      _objc_release(ppuVar15);
      puVar6 = puVar4;
      func_0x000108f63554();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(ppuVar1);
      puVar5 = puVar4;
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release();
    puVar4 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
    if (param_2 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09e880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = puVar4;
      func_0x000108f63554();
      _objc_retainAutoreleasedReturnValue();
      iVar12 = 0;
      puVar6 = PTR_PTR_1126c7300;
      func_0x00010bfe5cc0(0x4028000000000000,0x4014000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(ppuVar1);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release();
      puVar5 = puVar4;
    }
    puVar4 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
    if (param_3 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09e880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = puVar4;
      func_0x000108f63554();
      _objc_retainAutoreleasedReturnValue();
      iVar12 = 0;
      puVar6 = PTR_PTR_1126c7300;
      func_0x00010bfe5cc0(0x4028000000000000,0x4014000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(ppuVar1);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release();
      puVar5 = puVar4;
    }
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (param_9 != 0) {
      if (param_9 == 1) {
        func_0x000108f58e4c();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar5;
      }
      else {
        func_0x000108f58e64();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      puVar5 = puVar4;
      func_0x000108f63554();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar1;
      func_0x00010bf529e0();
      if (ppuVar15 == (undefined **)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar15 = &PTR____CFConstantStringClassReference_110e20938;
        func_0x000108f63554();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar15);
      }
      func_0x00010befa160(ppuVar1);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    ppuVar15 = (undefined **)PTR_PTR_1126c72f8;
    _objc_alloc();
    lVar10 = 0;
    ppuVar8 = ppuVar1;
    func_0x00010c044860();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = lVar9;
  lVar11 = lVar10;
  _objc_retain();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)lVar9 == 0) {
    if ((int)lVar10 != 0) {
      if ((long)ppuVar8 < 100) {
        ppuVar15 = &PTR____CFConstantStringClassReference_110eb8fb8;
        lVar14 = 0;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb8fb8);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(ppuVar15);
      }
      else {
        ppuVar2 = &PTR____CFConstantStringClassReference_110eb8fd8;
        lVar14 = 0;
        func_0x00010bcbeaa8();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuVar8 = ppuVar2;
      func_0x000108f635f4();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = (undefined **)PTR_PTR_1126c72f8;
      _objc_alloc();
LAB_107d195cc:
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = 0;
      func_0x00010c044860();
LAB_107d195f8:
      _objc_release(puVar4);
      goto LAB_107d195fc;
    }
    if (iVar12 != 0) {
      ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDateFormatter_1126af778;
      func_0x00010c22d3a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar15;
      func_0x00010c25d400();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar15);
      ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDateFormatter_1126af778;
      func_0x00010c22d4a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar15;
      func_0x00010c25d400();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar15);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000108f58e7c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar15);
      puVar5 = puVar4;
      func_0x000108f63554();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = (undefined **)PTR_PTR_1126c72f8;
      _objc_alloc();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = 0;
      func_0x00010c044860();
      _objc_release(puVar6);
      _objc_release(puVar5);
      goto LAB_107d195f8;
    }
    if (ppuVar1 != (undefined **)0x0) {
      func_0x00010bfb5a00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar2;
      func_0x000108f63554();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = (undefined **)PTR_PTR_1126c72f8;
      _objc_alloc();
      goto LAB_107d195cc;
    }
    ppuVar15 = (undefined **)0x0;
  }
  else {
    ppuVar15 = &PTR____CFConstantStringClassReference_110eb8f98;
    lVar14 = 0;
    func_0x00010bcbeaa8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar15;
    func_0x000108f63694();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar15);
    ppuVar15 = (undefined **)PTR_PTR_1126c72f8;
    _objc_alloc();
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = 0;
    func_0x00010c044860();
LAB_107d195fc:
    _objc_release(ppuVar8);
    _objc_release(ppuVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(lVar14);
    _objc_retain(lVar11);
    ppuVar15 = ppuVar1;
    func_0x00010c08fa60();
    if (((ppuVar15 == (undefined **)0x0) || (lVar9 = lVar14, func_0x00010c08fa60(), lVar9 == 0)) ||
       (lVar9 = lVar11, func_0x00010c08fa60(), lVar9 == 0)) {
      ppuVar15 = (undefined **)0x0;
    }
    else {
      ppuVar2 = ppuVar1;
      func_0x000108feb5c8(ppuVar1,0,0,lVar14,lVar11,0,0,PTR____NSArray0__struct_11034ab48,0,1,0,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar2;
      func_0x000108fec9ec();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
    }
    _objc_release(lVar11);
    _objc_release(lVar14);
    _objc_release(ppuVar1);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar15);
  return;
}



/* Entry: 107d192c4; end: 107d19657;  */

void FUN_107d192c4(undefined *param_1,long param_2,long param_3,long param_4,int param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  lVar8 = param_3;
  _objc_retain();
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)param_2 == 0) {
    if ((int)param_3 == 0) {
      if (param_5 == 0) {
        if (param_1 == (undefined *)0x0) {
          puVar10 = (undefined *)0x0;
          goto LAB_107d1960c;
        }
        func_0x00010bfb5a00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar5;
        func_0x000108f63554();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126c72f8;
        _objc_alloc();
        goto LAB_107d195cc;
      }
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSDateFormatter_1126af778;
      func_0x00010c22d3a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar6;
      func_0x00010c25d400();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDateFormatter_1126af778;
      func_0x00010c22d4a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar1;
      func_0x00010c25d400();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000108f58e7c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      puVar3 = puVar2;
      func_0x000108f63554();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126c72f8;
      _objc_alloc();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = 0;
      func_0x00010c044860();
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    else {
      if (param_4 < 100) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110eb8fb8;
        lVar7 = 0;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb8fb8);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(ppuVar6);
      }
      else {
        ppuVar5 = &PTR____CFConstantStringClassReference_110eb8fd8;
        lVar7 = 0;
        func_0x00010bcbeaa8();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuVar6 = ppuVar5;
      func_0x000108f635f4();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126c72f8;
      _objc_alloc();
LAB_107d195cc:
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = 0;
      func_0x00010c044860();
    }
    _objc_release(puVar2);
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110eb8f98;
    lVar7 = 0;
    func_0x00010bcbeaa8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar6;
    func_0x000108f63694();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    puVar10 = PTR_PTR_1126c72f8;
    _objc_alloc();
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = 0;
    func_0x00010c044860();
  }
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
LAB_107d1960c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(lVar7);
    _objc_retain(lVar8);
    puVar10 = param_1;
    func_0x00010c08fa60();
    if (((puVar10 == (undefined *)0x0) || (lVar9 = lVar7, func_0x00010c08fa60(), lVar9 == 0)) ||
       (lVar9 = lVar8, func_0x00010c08fa60(), lVar9 == 0)) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar2 = param_1;
      func_0x000108feb5c8(param_1,0,0,lVar7,lVar8,0,0,PTR____NSArray0__struct_11034ab48,0,1,0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      func_0x000108fec9ec();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107d19658; end: 107d19757;  */

void FUN_107d19658(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c08fa60();
  if (((lVar2 == 0) || (lVar2 = param_2, func_0x00010c08fa60(), lVar2 == 0)) ||
     (lVar2 = param_3, func_0x00010c08fa60(), lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000108feb5c8(param_1,0,0,param_2,param_3,0,0,PTR____NSArray0__struct_11034ab48,0,1,0,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000108fec9ec();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107d19758; end: 107d19873;  */

void FUN_107d19758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126cc220;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar4 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar5 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar6 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  func_0x00010bff6300(param_1,param_1,uVar3,uVar4,uVar5,uVar6,0x3ff0000000000000,puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126cb048;
  _objc_alloc(PTR_PTR_1126cb048);
  func_0x00010bff5f60(uVar3,uVar4,uVar5,uVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d19874; end: 107d199f3;  */

void FUN_107d19874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b0c40;
  _objc_retain(param_3);
  func_0x00010bfe7b00(0x4030000000000000,0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010c0469e0(param_1,param_1);
  _objc_retain(puVar1);
  puVar3 = puVar2;
  func_0x00010bfe91c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bd8e8;
  func_0x00010bfe9660(PTR_PTR_1126bd8e8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000108fec9ec();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  FUN_107d19758(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107d199f4; end: 107d19ab3;  */

void FUN_107d199f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar1);
  dVar3 = 0.0;
  dVar4 = 0.0;
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(0,0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28),
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad4a0();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  dVar5 = *(double *)(param_1 + 0x28);
  func_0x00010c23d0a0(uVar2);
  dVar6 = *(double *)(param_1 + 0x28);
  func_0x00010c23d0a0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf897d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((dVar5 - dVar3) * 0.5,(dVar6 - dVar4) * 0.5,uVar2,PTR_s_drawAtPoint__1125bff98);
  return;
}



/* Entry: 107d19ab4; end: 107d1acff;  */

void FUN_107d19ab4(undefined8 param_1,undefined8 param_2,undefined **param_3,int param_4,
                  ulong param_5,int param_6,long param_7,uint param_8,ulong param_9,
                  undefined8 param_10,undefined4 param_11,undefined4 param_12,byte param_13,
                  undefined4 param_14,undefined *param_15,char param_16)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined **in_stack_fffffffffffffe80;
  undefined *puStack_148;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_118;
  undefined *puStack_a0;
  
  ppuVar13 = (undefined **)(ulong)param_13;
  _objc_retain();
  _objc_retain(param_10);
  _objc_retain(param_15);
  ppuVar19 = param_3;
  func_0x00010c105a20();
  ppuVar20 = param_3;
  func_0x00010bf9fce0();
  if (((param_5 & 1) == 0) && (ppuVar4 = param_3, func_0x00010bfdcc20(), (int)ppuVar4 == 0)) {
    puVar14 = (undefined *)0x0;
    goto LAB_107d1acb8;
  }
  ppuVar4 = param_3;
  func_0x00010c25b720();
  if (((ppuVar4 == (undefined **)0x1) ||
      (ppuVar4 = param_3, func_0x00010c25b720(), ppuVar4 == (undefined **)0x6)) ||
     (ppuVar4 = param_3, func_0x00010c25b720(), ppuVar4 == (undefined **)0x7)) {
    bVar3 = true;
  }
  else {
    ppuVar4 = param_3;
    func_0x00010c25b720();
    bVar3 = ppuVar4 == (undefined **)0x8;
  }
  ppuVar4 = param_3;
  func_0x00010bfdcc20();
  if (param_16 == '\0') {
    if (((ulong)ppuVar4 & 1) == 0) goto LAB_107d19be4;
    param_2 = 0x404c000000000000;
    func_0x000108f62de4(0x4054000000000000,0x404c000000000000,0x4022000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar5 = param_3;
    func_0x00010bfdcc20();
    if ((((ulong)ppuVar5 & 1) == 0) && (uVar1 = (ulong)ppuVar4 & 1, ppuVar4 = ppuVar5, uVar1 != 0))
    {
LAB_107d19be4:
      func_0x000108f62e54();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108f62ea4();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar5;
    }
  }
  _objc_retain(param_3);
  ppuVar6 = param_3;
  func_0x00010bfdcc20();
  ppuVar5 = param_3;
  func_0x00010c25b720();
  puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)ppuVar6 == 0) {
    if ((long)ppuVar5 < 3) {
      if (ppuVar5 == (undefined **)0x0) {
        if ((param_13 & 1) != 0) goto LAB_107d19d7c;
        func_0x000108f593a4();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (ppuVar5 == (undefined **)0x1) goto LAB_107d19c50;
        if (ppuVar5 != (undefined **)0x2) goto LAB_107d19d04;
        func_0x000108f5815c();
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_107d19d8c;
    }
    if ((long)ppuVar5 - 4U < 6) {
LAB_107d19c50:
      ppuVar13 = param_3;
      func_0x00010bf85d80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00();
      _objc_release(ppuVar13);
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((int)puVar14 == 0) {
        if ((param_13 & 1) != 0) goto LAB_107d19ccc;
        ppuVar13 = &PTR____CFConstantStringClassReference_110dcaf38;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcaf38,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = param_3;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        in_stack_fffffffffffffe80 = ppuVar6;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar6);
        _objc_release(ppuVar13);
        goto LAB_107d19d8c;
      }
      _objc_release(param_3);
      ppuVar13 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      if (ppuVar5 == (undefined **)0x3) {
        func_0x000108f58174();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107d19d8c;
      }
      if (ppuVar5 == (undefined **)0xa) goto LAB_107d19c2c;
LAB_107d19d04:
      _objc_release(param_3);
    }
LAB_107d19d98:
    if (ppuVar20 == (undefined **)0x0) {
      ppuVar5 = ppuVar13;
      func_0x000108f62f68();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      ppuStack_118 = ppuVar5;
    }
    else {
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_118 = ppuVar13;
      func_0x000108f62fec(ppuVar13,ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_release(ppuStack_118);
    }
    _objc_release(ppuVar5);
    bVar2 = false;
    ppuVar5 = ppuVar13;
  }
  else {
    if (ppuVar5 == (undefined **)0x0) {
LAB_107d19d7c:
      func_0x000108f5923c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar5 = param_3;
      func_0x00010c25b720();
      if (ppuVar5 == (undefined **)0xa) {
LAB_107d19c2c:
        func_0x000108f5932c();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107d19d8c;
      }
LAB_107d19ccc:
      ppuVar5 = param_3;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_107d19d8c:
    _objc_release(param_3);
    ppuVar13 = ppuVar5;
    if (ppuVar5 != (undefined **)0x0) goto LAB_107d19d98;
    ppuStack_118 = (undefined **)0x0;
    bVar2 = true;
  }
  ppuVar13 = param_3;
  func_0x00010c25b720();
  if (((int)param_9 == 0) || (ppuVar13 != (undefined **)0x2)) {
    ppuVar13 = param_3;
    func_0x00010c276ae0(param_3);
  }
  else {
    ppuVar13 = (undefined **)0x0;
  }
  ppuVar6 = param_3;
  func_0x00010bfdcc20();
  if ((int)ppuVar6 == 0) {
    ppuVar13 = param_3;
    if (param_6 == 0) {
LAB_107d19fa8:
      ppuVar6 = param_3;
      func_0x00010bfdcc20();
      if ((((ulong)ppuVar6 & 1) != 0) || (func_0x00010c25aa80(), ppuVar13 != (undefined **)0x2)) {
        ppuStack_128 = (undefined **)0x0;
        goto LAB_107d19ff4;
      }
      func_0x000108f591c4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar6 = param_3;
      func_0x00010c260ca0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar6 == (undefined **)0x0) goto LAB_107d19fa8;
      ppuVar15 = param_3;
      func_0x00010c25b720();
      if ((((ppuVar15 == (undefined **)0x5) ||
           (ppuVar15 = param_3, func_0x00010c25b720(), ppuVar15 == (undefined **)0x1)) ||
          (ppuVar15 = param_3, func_0x00010c25b720(), ppuVar15 == (undefined **)0x6)) ||
         (ppuVar15 = param_3, func_0x00010c25b720(), ppuVar15 == (undefined **)0x7)) {
        _objc_release(ppuVar6);
      }
      else {
        ppuVar15 = param_3;
        func_0x00010c25b720();
        _objc_release(ppuVar6);
        if (ppuVar15 != (undefined **)0x8) goto LAB_107d19fa8;
      }
      func_0x00010c260ca0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_128 = ppuVar13;
    FUN_107d1ad00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar13);
  }
  else {
    if ((int)param_9 != 0) {
      ppuVar6 = param_3;
      func_0x00010c25b720(param_3);
      param_9 = (ulong)(ppuVar6 == (undefined **)0x2);
    }
    ppuStack_128 = param_3;
    func_0x00010c276fe0();
    ppuVar6 = param_3;
    func_0x00010c276d60(param_3);
    ppuVar15 = param_3;
    func_0x00010bf623a0(param_3);
    ppuVar7 = param_3;
    func_0x00010c105a20(param_3);
    ppuVar8 = param_3;
    func_0x00010bf9fce0(param_3);
    ppuVar9 = param_3;
    func_0x00010c2342c0(param_3);
    in_stack_fffffffffffffe80 = (undefined **)0x0;
    FUN_107d18b20(ppuStack_128,ppuVar13,ppuVar6,ppuVar15,ppuVar7,ppuVar8,param_9,ppuVar9,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_107d19ff4:
  ppuVar13 = param_3;
  func_0x00010c25b720();
  FUN_107d0fb58();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = param_3;
  func_0x00010c25b720();
  if (param_16 == '\0') {
    puVar24 = (undefined *)0x0;
    if (param_4 == 0) goto LAB_107d1a104;
LAB_107d1a0d8:
    ppuVar15 = param_3;
    func_0x00010c258c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(ppuVar15);
  }
  else {
    ppuVar15 = param_3;
    func_0x00010bfdcc20();
    puVar24 = (undefined *)0x0;
    if ((((ulong)ppuVar15 & 1) == 0) && (ppuVar6 != (undefined **)0xa)) {
      puVar24 = PTR_PTR_1126b02a8;
      _objc_alloc();
      puVar14 = PTR_PTR_1126b11d0;
      _objc_alloc(PTR_PTR_1126b11d0);
      func_0x00010c25b720(param_3);
      ppuVar15 = param_3;
      func_0x00010c259cc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e320(puVar14);
      func_0x00010c01b460();
      _objc_retain();
      _objc_release(puVar24);
      _objc_release(puVar14);
      _objc_release(ppuVar15);
    }
    if (param_4 != 0) goto LAB_107d1a0d8;
LAB_107d1a104:
    ppuVar15 = (undefined **)0x0;
  }
  ppuVar7 = param_3;
  func_0x00010bfdcc20();
  if ((int)ppuVar7 == 0) {
    if (param_16 == '\0') {
      puStack_130 = (undefined *)0x0;
    }
    else {
      ppuVar19 = param_3;
      func_0x00010c25b720();
      if (ppuVar19 == (undefined **)0x5) {
        func_0x00010c08e740(ppuVar4);
        puStack_130 = (undefined *)0x1aa;
      }
      else if (bVar3) {
        func_0x00010c08e740(ppuVar4);
        puStack_130 = (undefined *)0x1d4;
      }
      else {
        func_0x00010c08e740(ppuVar4);
        if (param_15 != (undefined *)0x0) {
          puStack_130 = param_15;
          FUN_107d19758(param_2,param_15,puVar24);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107d1a4b8;
        }
        puStack_130 = (undefined *)0x1d0;
      }
      FUN_107d19874(param_2,puStack_130,puVar24);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    ppuVar7 = param_3;
    func_0x00010c26d760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08e740(ppuVar4);
    ppuVar8 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = param_3;
    func_0x00010c25b720();
    ppuVar10 = param_3;
    func_0x00010bfddf20();
    _objc_retain(ppuVar7);
    _objc_retain(ppuVar15);
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_retain(ppuVar8);
    func_0x00010c23ba80(puVar14);
    _objc_retainAutoreleasedReturnValue();
    if ((ppuVar20 == (undefined **)0x0) && (((ulong)ppuVar10 & 1) != 0)) {
      if (ppuVar15 != (undefined **)0x0) {
        puVar17 = PTR_PTR_1126c2fa8;
        func_0x00010c25aea0(PTR_PTR_1126c2fa8);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107d1a238;
      }
    }
    else {
      puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
LAB_107d1a238:
      _objc_release(puVar14);
      puVar14 = puVar17;
    }
    if (param_6 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      if ((long)ppuVar9 < 6) {
        if (ppuVar9 == (undefined **)0x1) goto LAB_107d1a2c4;
        if (ppuVar9 != (undefined **)0x5) goto LAB_107d1a300;
        uVar16 = 1;
        if ((int)ppuVar10 != 0) {
          uVar16 = 2;
        }
        if (ppuVar20 != (undefined **)0x0) {
          uVar16 = 0;
        }
      }
      else {
        if ((long)ppuVar9 - 6U < 2) {
LAB_107d1a2c4:
          uVar16 = 3;
          uVar26 = 5;
          if (ppuVar15 != (undefined **)0x0) {
            uVar26 = 6;
          }
          uVar12 = 4;
        }
        else {
          if (ppuVar9 != (undefined **)0x8) goto LAB_107d1a300;
          uVar16 = 7;
          uVar26 = 9;
          if (ppuVar15 != (undefined **)0x0) {
            uVar26 = 10;
          }
          uVar12 = 8;
        }
        if ((int)ppuVar10 == 0) {
          uVar26 = uVar12;
        }
        if (ppuVar20 == (undefined **)0x0) {
          uVar16 = uVar26;
        }
      }
      func_0x00010b0b25d4(uVar16);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_107d1a300:
    ppuVar20 = ppuVar7;
    func_0x000108fec800(ppuVar7,puVar14,0,ppuVar19 != (undefined **)0x0,0,uVar16,0,0,
                        (ulong)in_stack_fffffffffffffe80 & 0xffffffffffffff00,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    puVar23 = PTR_PTR_1126b11d0;
    _objc_alloc(PTR_PTR_1126b11d0);
    func_0x00010c04e320();
    _objc_release(ppuVar8);
    func_0x00010c01b460(puVar17);
    _objc_release(puVar23);
    puVar23 = PTR_PTR_1126cc220;
    _objc_alloc(PTR_PTR_1126cc220);
    uVar26 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    uVar12 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    uVar27 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    uVar28 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    func_0x00010bff6300(param_2,param_2,uVar26,uVar12,uVar27,uVar28,0x3ff0000000000000);
    puStack_130 = PTR_PTR_1126cb048;
    _objc_alloc();
    func_0x00010bff5f60(uVar26,uVar12,uVar27,uVar28);
    _objc_release(puVar23);
    _objc_release(puVar17);
    _objc_release(ppuVar20);
    _objc_release(uVar16);
    _objc_release(puVar14);
    _objc_release(ppuVar15);
    _objc_release(ppuVar7);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
  }
LAB_107d1a4b8:
  ppuVar19 = param_3;
  func_0x00010bfdcc20();
  if ((int)ppuVar19 == 0) {
    puStack_a0 = (undefined *)0x0;
  }
  else {
    puStack_a0 = PTR_PTR_1126b02a8;
    _objc_alloc();
    ppuVar20 = param_3;
    func_0x00010c25b720();
    ppuVar19 = &PTR_PTR_110a08fe0;
    if (ppuVar20 != (undefined **)0x0 || param_7 != 0) {
      ppuVar19 = &PTR_PTR_110a08fd8;
    }
    puVar17 = *ppuVar19;
    _objc_retain(puVar17);
    puVar14 = PTR_PTR_1126b11d0;
    _objc_alloc(PTR_PTR_1126b11d0);
    func_0x00010c25b720(param_3);
    ppuVar19 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e320(puVar14);
    func_0x00010c01b460();
    _objc_retain();
    _objc_release(puStack_a0);
    _objc_release(puVar14);
    _objc_release(ppuVar19);
    _objc_release(puVar17);
  }
  ppuVar20 = param_3;
  func_0x00010c25b720();
  ppuVar19 = &PTR_PTR_110a09038;
  if (ppuVar20 != (undefined **)0x2) {
    ppuVar19 = &PTR_PTR_110a09030;
  }
  puVar17 = *ppuVar19;
  _objc_retain();
  _objc_retain(param_3);
  ppuVar19 = param_3;
  func_0x00010c25b720();
  if (((ppuVar19 == (undefined **)0x6) ||
      (ppuVar19 = param_3, func_0x00010c25b720(), ppuVar19 == (undefined **)0x7)) ||
     (ppuVar19 = param_3, func_0x00010c25b720(), ppuVar19 == (undefined **)0x8)) {
    puVar23 = PTR_PTR_1126b11e8;
    _objc_alloc();
    func_0x00010bfdcc20(param_3);
    func_0x00010c019da0();
  }
  else {
    puVar23 = (undefined *)0x0;
  }
  _objc_release(param_3);
  if (ppuVar6 == (undefined **)0xa) {
    puVar21 = (undefined *)0x0;
LAB_107d1a6f8:
    ppuVar19 = (undefined **)0x0;
    puVar22 = (undefined *)0x0;
  }
  else {
    puVar21 = PTR_PTR_1126b02a8;
    _objc_alloc();
    puVar14 = PTR_PTR_1126b11d0;
    _objc_alloc(PTR_PTR_1126b11d0);
    func_0x00010c25b720(param_3);
    ppuVar19 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e320(puVar14);
    func_0x00010c01b460();
    _objc_retain();
    _objc_release(puVar21);
    _objc_release(puVar14);
    _objc_release(ppuVar19);
    if (param_16 == '\0') goto LAB_107d1a6f8;
    ppuVar19 = param_3;
    func_0x00010c25b720();
    if (ppuVar19 == (undefined **)0x2) {
      func_0x000108f59734();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108f595e4();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_retain();
    _objc_release(ppuVar19);
    puVar22 = PTR_PTR_1126b02a8;
    _objc_alloc();
    puVar14 = PTR_PTR_1126b11d0;
    _objc_alloc(PTR_PTR_1126b11d0);
    func_0x00010c25b720(param_3);
    ppuVar20 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e320(puVar14);
    func_0x00010c01b460();
    _objc_release(puVar14);
    _objc_release(ppuVar20);
  }
  _objc_retain(param_3);
  _objc_retain(puStack_a0);
  _objc_retain(puVar22);
  _objc_retain(ppuVar19);
  _objc_retain(puVar21);
  func_0x00010c25b720();
  puVar14 = puStack_a0;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar14;
  func_0x00010c0720c0();
  _objc_release(puVar14);
  ppuVar20 = (undefined **)PTR_PTR_1126b4860;
  if ((int)puVar11 == 0) {
    ppuVar20 = param_3;
    func_0x00010c25b720();
    if (ppuVar20 == (undefined **)0xa) {
      ppuVar20 = (undefined **)0x0;
    }
    else {
      ppuVar20 = param_3;
      func_0x00010c25b720();
      ppuVar7 = (undefined **)PTR_PTR_1126b4860;
      if (ppuVar20 == (undefined **)0x0 && param_7 == 0) {
        FUN_107d1b64c();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar14 = PTR_PTR_1126b0c40;
        func_0x00010bfe7b00(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe94a0(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        ppuVar20 = ppuVar7;
      }
    }
  }
  else {
    puVar14 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe94a0(ppuVar20);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
  }
  puVar11 = PTR_PTR_1126cc300;
  _objc_alloc();
  ppuVar7 = param_3;
  func_0x00010c273d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c054140();
  _objc_release(puVar22);
  _objc_release(ppuVar19);
  _objc_release(puVar21);
  _objc_release(ppuVar7);
  _objc_release(ppuVar20);
  _objc_release(puStack_a0);
  _objc_release(param_3);
  puVar18 = (undefined *)0x0;
  if (ppuVar6 != (undefined **)0xa) {
    puVar18 = PTR_PTR_1126b02a8;
    _objc_alloc();
    puVar14 = PTR_PTR_1126b11d0;
    _objc_alloc(PTR_PTR_1126b11d0);
    func_0x00010c25b720(param_3);
    ppuVar20 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e320(puVar14);
    func_0x00010c01b460();
    _objc_retain();
    _objc_release(puVar18);
    _objc_release(puVar14);
    _objc_release(ppuVar20);
  }
  ppuVar20 = param_3;
  func_0x00010bfdcc20();
  if (((ulong)ppuVar20 & 1) == 0) {
    puStack_148 = PTR_PTR_1126b02a8;
    _objc_alloc();
    puVar14 = PTR_PTR_1126b11d0;
    _objc_alloc(PTR_PTR_1126b11d0);
    func_0x00010c25b720(param_3);
    ppuVar20 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e320(puVar14);
    func_0x00010c01b460();
    _objc_retain();
    _objc_release(puStack_148);
    _objc_release(puVar14);
    _objc_release(ppuVar20);
  }
  else {
    puStack_148 = (undefined *)0x0;
  }
  ppuVar20 = param_3;
  func_0x00010bfdcc20();
  puVar25 = (undefined *)0x0;
  if (((param_8 & 1) == 0) && ((int)ppuVar20 != 0)) {
    ppuVar20 = param_3;
    func_0x00010c25b720();
    if (ppuVar20 == (undefined **)0x0 && param_7 == 0) {
      puVar25 = PTR_PTR_1126b4dc0;
      _objc_alloc(PTR_PTR_1126b4dc0);
      puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff6820(puVar25);
      _objc_release(puVar14);
      uVar16 = param_10;
      func_0x00010c269d40(param_10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c190580();
      _objc_release(uVar16);
    }
    else {
      puVar25 = (undefined *)0x0;
    }
  }
  if (bVar2) {
    ppuVar20 = (undefined **)0x0;
  }
  else {
    ppuVar20 = &PTR____CFConstantStringClassReference_110eb8ef8;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(ppuVar20);
  }
  puVar14 = PTR_PTR_1126b2c10;
  _objc_alloc(PTR_PTR_1126b2c10);
  func_0x00010c053700();
  _objc_release(ppuVar20);
  _objc_release(puVar25);
  _objc_release(puStack_148);
  _objc_release(puVar18);
  _objc_release(puVar11);
  _objc_release(puVar22);
  _objc_release(ppuVar19);
  _objc_release(puVar21);
  _objc_release(puVar23);
  _objc_release(puVar17);
  _objc_release(puStack_a0);
  _objc_release(puStack_130);
  _objc_release(ppuVar15);
  _objc_release(puVar24);
  _objc_release(ppuVar13);
  _objc_release(ppuStack_128);
  _objc_release(ppuStack_118);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
LAB_107d1acb8:
  _objc_release(param_15);
  _objc_release(param_10);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 107d1ad00; end: 107d1adbf;  */

void FUN_107d1ad00(ulong param_1,long param_2)

{
  undefined **ppuVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  uint uVar17;
  int iVar18;
  undefined8 in_x5;
  long lVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puStack_d8;
  ulong uStack_b8;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000108f63554();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c72f8;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = 0;
  puVar11 = puVar4;
  func_0x00010c044860();
  iVar18 = (int)puVar11;
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  uVar5 = in_x5;
  _objc_retain();
  func_0x000108f62de4(0x404c000000000000,0x404c000000000000,0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf30620();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c08fa60();
  if (uVar7 == 0) {
    uStack_b8 = 0;
  }
  else {
    uVar7 = param_1;
    func_0x00010bf30620();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar7;
    func_0x000108f62f68();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
  }
  _objc_release(uVar6);
  uVar6 = param_1;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bfd6f60(param_1);
  uVar8 = param_1;
  func_0x00010c0823e0(param_1);
  uVar9 = param_1;
  func_0x00010c28e4e0(param_1);
  uVar10 = uVar6;
  FUN_107d192c4(uVar6,uVar7,uVar8,uVar9,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = param_1;
  func_0x00010c258da0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  FUN_107d244dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar4 = PTR_PTR_1126b4860;
  func_0x00010c258dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  func_0x000108fec800();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bfd6f60();
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb9338;
  if ((int)uVar6 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb8c78;
  }
  _objc_retain(ppuVar1);
  puVar12 = PTR_PTR_1126b11d0;
  _objc_alloc();
  func_0x00010c25b720(param_1);
  uVar6 = param_1;
  func_0x00010c259cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c23f800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c243260(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e320();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  puVar13 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar14 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  uVar6 = param_1;
  func_0x00010c25b720();
  uVar8 = param_1;
  func_0x00010c234820();
  if ((((int)uVar8 == 0) || (uVar8 = param_1, func_0x00010bfd6f60(), (uVar8 & 1) != 0)) ||
     (uVar8 = param_1, func_0x00010c0823e0(), (uVar8 & 1) != 0)) {
    bVar2 = false;
  }
  else {
    uVar8 = param_1;
    func_0x00010c276fe0();
    bVar2 = uVar8 != 0 || uVar6 == 2;
  }
  uVar8 = param_1;
  func_0x00010bfd6f60();
  if ((int)uVar8 == 0) {
    if (bVar2) {
      if (uVar6 == 2) {
        uVar6 = param_1;
        func_0x00010c243260();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar6 == 0) goto LAB_107d1b24c;
        puStack_d8 = PTR_PTR_1126b02a8;
        _objc_alloc();
        puVar3 = PTR_PTR_1126b11d0;
        _objc_alloc(PTR_PTR_1126b11d0);
        func_0x00010c25b720(param_1);
        uVar6 = param_1;
        func_0x00010c259cc0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_1;
        func_0x00010c23f800(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = param_1;
        func_0x00010c243260(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e320(puVar3);
        func_0x00010c01b460();
        _objc_release(puVar3);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar6);
      }
      else {
LAB_107d1b24c:
        puStack_d8 = (undefined *)0x0;
      }
      if (iVar18 != 0) {
        func_0x00010c25b720(param_1);
      }
      puVar24 = PTR_PTR_1126cc2e0;
      _objc_alloc(PTR_PTR_1126cc2e0);
      func_0x00010c276fe0(param_1);
      func_0x00010c1518c0(param_1);
      uVar6 = param_1;
      func_0x00010c25ad00(param_1);
      FUN_107d1b64c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c061b20(puVar24);
      _objc_release(uVar6);
      puVar23 = PTR_PTR_1126b02a8;
      _objc_alloc();
      func_0x00010c01b460();
    }
    else {
      puVar23 = PTR_PTR_1126b02a8;
      _objc_alloc();
      func_0x00010c01b460();
      puStack_d8 = (undefined *)0x0;
      puVar24 = (undefined *)0x0;
    }
  }
  else {
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar23 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar24 = PTR_PTR_1126cc2f0;
    _objc_alloc(PTR_PTR_1126cc2f0);
    func_0x00010c0414e0();
    _objc_release(puVar23);
    _objc_release(puVar3);
    puStack_d8 = (undefined *)0x0;
    puVar23 = (undefined *)0x0;
  }
  uVar6 = param_1;
  func_0x00010c25b720();
  if (uVar6 == 10) {
    puVar20 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b11d0;
    _objc_alloc(PTR_PTR_1126b11d0);
    func_0x00010c25b720(param_1);
    uVar6 = param_1;
    func_0x00010c259cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010c23f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_1;
    func_0x00010c243260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e320(puVar3);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar6);
    ppuVar21 = &PTR____CFConstantStringClassReference_110eb9298;
    _objc_retain(&PTR____CFConstantStringClassReference_110eb9298);
    uVar6 = param_1;
    func_0x00010c25b720();
    if (uVar6 == 2) {
      uVar6 = param_1;
      func_0x00010c07f5a0();
      lVar19 = 0x60;
      if ((int)uVar6 == 0) {
        lVar19 = 0x58;
      }
      ppuVar21 = *(undefined ***)((long)&PTR_PTR_110a08fc8 + lVar19);
      _objc_retain(ppuVar21);
      _objc_release(&PTR____CFConstantStringClassReference_110eb9298);
    }
    puVar20 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    _objc_release(ppuVar21);
    _objc_release(puVar3);
  }
  if ((uVar17 & 1) == 0) {
    uVar6 = param_1;
    func_0x00010c25b720();
    puVar22 = (undefined *)0x0;
    if ((param_2 == 0) && (uVar6 == 2)) {
      puVar22 = PTR_PTR_1126b4dc0;
      _objc_alloc(PTR_PTR_1126b4dc0);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff6820(puVar22);
      _objc_release(puVar3);
      uVar15 = in_x5;
      func_0x00010c269d40(in_x5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c190580();
      _objc_release(uVar15);
    }
  }
  else {
    puVar22 = (undefined *)0x0;
  }
  puVar16 = PTR_PTR_1126b2c10;
  _objc_alloc(PTR_PTR_1126b2c10);
  func_0x00010c053700();
  puVar3 = PTR_PTR_1126cc2f8;
  _objc_alloc(PTR_PTR_1126cc2f8);
  uVar6 = param_1;
  func_0x00010c23f800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c243260(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd6f60(param_1);
  func_0x00010bfff020(puVar3);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(puVar16);
  _objc_release(puVar22);
  _objc_release(puVar20);
  _objc_release(puStack_d8);
  _objc_release(puVar23);
  _objc_release(puVar24);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(ppuVar1);
  _objc_release(puVar11);
  _objc_release(puVar4);
  _objc_release(uVar7);
  _objc_release(uVar10);
  _objc_release(uStack_b8);
  _objc_release(uVar5);
  _objc_release(in_x5);
  _objc_release(param_1);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d1adc0; end: 107d1b64b;  */

void FUN_107d1adc0(ulong param_1,long param_2,uint param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined **ppuVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puStack_98;
  ulong uStack_78;
  
  _objc_retain();
  uVar4 = param_6;
  _objc_retain();
  func_0x000108f62de4(0x404c000000000000,0x404c000000000000,0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf30620();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c08fa60();
  if (uVar6 == 0) {
    uStack_78 = 0;
  }
  else {
    uVar6 = param_1;
    func_0x00010bf30620();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar6;
    func_0x000108f62f68();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
  }
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bfd6f60(param_1);
  uVar7 = param_1;
  func_0x00010c0823e0(param_1);
  uVar8 = param_1;
  func_0x00010c28e4e0(param_1);
  uVar9 = uVar5;
  FUN_107d192c4(uVar5,uVar6,uVar7,uVar8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010c258da0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  FUN_107d244dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar10 = PTR_PTR_1126b4860;
  func_0x00010c258dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x000108fec800();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bfd6f60();
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb9338;
  if ((int)uVar5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb8c78;
  }
  _objc_retain(ppuVar1);
  puVar12 = PTR_PTR_1126b11d0;
  _objc_alloc();
  func_0x00010c25b720(param_1);
  uVar5 = param_1;
  func_0x00010c259cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c23f800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c243260(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e320();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  puVar13 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar14 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  uVar5 = param_1;
  func_0x00010c25b720();
  uVar7 = param_1;
  func_0x00010c234820();
  if ((((int)uVar7 == 0) || (uVar7 = param_1, func_0x00010bfd6f60(), (uVar7 & 1) != 0)) ||
     (uVar7 = param_1, func_0x00010c0823e0(), (uVar7 & 1) != 0)) {
    bVar3 = false;
  }
  else {
    uVar7 = param_1;
    func_0x00010c276fe0();
    bVar3 = uVar7 != 0 || uVar5 == 2;
  }
  uVar7 = param_1;
  func_0x00010bfd6f60();
  if ((int)uVar7 != 0) {
    puVar21 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar20 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar22 = PTR_PTR_1126cc2f0;
    _objc_alloc(PTR_PTR_1126cc2f0);
    func_0x00010c0414e0();
    _objc_release(puVar20);
    _objc_release(puVar21);
    puStack_98 = (undefined *)0x0;
    puVar21 = (undefined *)0x0;
    goto LAB_107d1b31c;
  }
  if (!bVar3) {
    puVar21 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    puStack_98 = (undefined *)0x0;
    puVar22 = (undefined *)0x0;
    goto LAB_107d1b31c;
  }
  if (uVar5 == 2) {
    uVar5 = param_1;
    func_0x00010c243260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar5 == 0) goto LAB_107d1b24c;
    puStack_98 = PTR_PTR_1126b02a8;
    _objc_alloc();
    puVar21 = PTR_PTR_1126b11d0;
    _objc_alloc(PTR_PTR_1126b11d0);
    func_0x00010c25b720(param_1);
    uVar5 = param_1;
    func_0x00010c259cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010c23f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010c243260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e320(puVar21);
    func_0x00010c01b460();
    _objc_release(puVar21);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
  }
  else {
LAB_107d1b24c:
    puStack_98 = (undefined *)0x0;
  }
  if (param_4 != 0) {
    func_0x00010c25b720(param_1);
  }
  puVar22 = PTR_PTR_1126cc2e0;
  _objc_alloc(PTR_PTR_1126cc2e0);
  func_0x00010c276fe0(param_1);
  func_0x00010c1518c0(param_1);
  uVar5 = param_1;
  func_0x00010c25ad00(param_1);
  FUN_107d1b64c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061b20(puVar22);
  _objc_release(uVar5);
  puVar21 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
LAB_107d1b31c:
  uVar5 = param_1;
  func_0x00010c25b720();
  if (uVar5 == 10) {
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar20 = PTR_PTR_1126b11d0;
    _objc_alloc(PTR_PTR_1126b11d0);
    func_0x00010c25b720(param_1);
    uVar5 = param_1;
    func_0x00010c259cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010c23f800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010c243260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e320(puVar20);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    ppuVar19 = &PTR____CFConstantStringClassReference_110eb9298;
    _objc_retain(&PTR____CFConstantStringClassReference_110eb9298);
    uVar5 = param_1;
    func_0x00010c25b720();
    if (uVar5 == 2) {
      uVar5 = param_1;
      func_0x00010c07f5a0();
      lVar2 = 0x60;
      if ((int)uVar5 == 0) {
        lVar2 = 0x58;
      }
      ppuVar19 = *(undefined ***)((long)&PTR_PTR_110a08fc8 + lVar2);
      _objc_retain(ppuVar19);
      _objc_release(&PTR____CFConstantStringClassReference_110eb9298);
    }
    puVar18 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    _objc_release(ppuVar19);
    _objc_release(puVar20);
  }
  if ((param_3 & 1) == 0) {
    uVar5 = param_1;
    func_0x00010c25b720();
    puVar20 = (undefined *)0x0;
    if ((param_2 == 0) && (uVar5 == 2)) {
      puVar20 = PTR_PTR_1126b4dc0;
      _objc_alloc(PTR_PTR_1126b4dc0);
      puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff6820(puVar20);
      _objc_release(puVar15);
      uVar16 = param_6;
      func_0x00010c269d40(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c190580();
      _objc_release(uVar16);
    }
  }
  else {
    puVar20 = (undefined *)0x0;
  }
  puVar15 = PTR_PTR_1126b2c10;
  _objc_alloc(PTR_PTR_1126b2c10);
  func_0x00010c053700();
  puVar17 = PTR_PTR_1126cc2f8;
  _objc_alloc(PTR_PTR_1126cc2f8);
  uVar5 = param_1;
  func_0x00010c23f800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c243260(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd6f60(param_1);
  func_0x00010bfff020(puVar17);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(puVar15);
  _objc_release(puVar20);
  _objc_release(puVar18);
  _objc_release(puStack_98);
  _objc_release(puVar21);
  _objc_release(puVar22);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(ppuVar1);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar6);
  _objc_release(uVar9);
  _objc_release(uStack_78);
  _objc_release(uVar4);
  _objc_release(param_6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 107d1b64c; end: 107d1b6eb;  */

void FUN_107d1b64c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126cc2d8;
  _objc_opt_new(PTR_PTR_1126cc2d8);
  puVar4 = PTR_PTR_1126b4860;
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar2 = puVar1;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fde60(puVar4,param_2,puVar3,0xd);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107d1b6ec; end: 107d1b9f7;  */

void FUN_107d1b6ec(int param_1,ulong param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  if (param_1 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e1e6f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e6f8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 5;
    func_0x000107d1b908(5,ppuVar3,puVar4,&PTR____CFConstantStringClassReference_110eb93f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    if ((param_2 & 1) != 0) {
      uVar6 = 0;
      goto LAB_107d1b8c4;
    }
    func_0x000108f57bd4();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 6;
    func_0x000107d1b908(6,ppuVar3,puVar4,&PTR____CFConstantStringClassReference_110eb9418);
    _objc_retainAutoreleasedReturnValue();
LAB_107d1b8b4:
    _objc_release(puVar4);
  }
  else {
    ppuVar3 = (undefined **)PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40,param_2,0x1aa,0x49);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110e1e6f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e6f8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 5;
    func_0x000107d1b908(5,ppuVar1,ppuVar3,&PTR____CFConstantStringClassReference_110eb93f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    if ((param_2 & 1) == 0) {
      puVar4 = PTR_PTR_1126b0c40;
      func_0x00010bfe7b00(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x000108f57bd4();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 6;
      func_0x000107d1b908(6,puVar5,puVar4,&PTR____CFConstantStringClassReference_110eb9418);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      goto LAB_107d1b8b4;
    }
    uVar6 = 0;
  }
  _objc_release(ppuVar3);
LAB_107d1b8c4:
  puVar4 = PTR_PTR_1126d78f0;
  _objc_alloc(PTR_PTR_1126d78f0);
  func_0x00010c0220a0();
  _objc_release(uVar6);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107d1b9f8; end: 107d1bb1f; -[SCSpotlightEntrySection initWithActionHandler:actionModel:supplementaryViewProvider:titleVariant:] */

undefined1 *
FUN_107d1b9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126faa30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_5;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + 0x28) = param_6;
    puVar1 = PTR_DAT_1126a4e90;
    uVar5 = *(undefined8 *)((long)puVar2 + 0x18);
    _objc_retain(uVar5);
    uVar4 = uVar5;
    func_0x00010010fab4(uVar5,puVar1);
    uVar3 = uVar5;
    if ((int)uVar4 == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar5);
    func_0x00010c161980(uVar3);
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 107d1bb20; end: 107d1bb47; -[SCSpotlightEntrySection supplementaryViewProvider] */

void FUN_107d1bb20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d1bb48; end: 107d1bb4b; -[SCSpotlightEntrySection setUp] */

void FUN_107d1bb48(void)

{
  return;
}



/* Entry: 107d1bb4c; end: 107d1bb4f; -[SCSpotlightEntrySection tearDown] */

void FUN_107d1bb4c(void)

{
  return;
}



/* Entry: 107d1bb50; end: 107d1bbcf; -[SCSpotlightEntrySection reuseCellClassesByIdentifiers] */

undefined * FUN_107d1bb50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110eb9058;
  puVar1 = PTR_PTR_1126d7900;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 107d1bbd0; end: 107d1bbd7; -[SCSpotlightEntrySection numberOfCellsInSection] */

undefined8 FUN_107d1bbd0(void)

{
  return 1;
}



/* Entry: 107d1bbd8; end: 107d1bd1b; -[SCSpotlightEntrySection cellForItemAtIndexInSection:] */

void FUN_107d1bbd8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(uVar1);
  uVar2 = uVar1;
  func_0x00010bf40940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c161980(uVar2,param_2,*(undefined8 *)(param_1 + 8));
  uVar1 = uVar2;
  func_0x00010c211b00(uVar2,param_2,*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x28) == 1) {
    func_0x000108f58da4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_1;
    func_0x00010c12f540();
    if ((uVar1 & 1) == 0) {
      func_0x000108f5833c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108f58354();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  uVar3 = uVar1;
  func_0x000108f59734();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c073920();
  if ((uVar4 & 1) == 0) {
    func_0x00010c12f540();
    if ((param_1 & 1) == 0) {
      func_0x000108f5836c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108f583cc();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x000108f583e4();
    _objc_retainAutoreleasedReturnValue();
    param_1 = uVar4;
  }
  func_0x00010bf47c40(uVar2,param_2,uVar1,param_1,uVar3);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d1bd1c; end: 107d1bd7f; -[SCSpotlightEntrySection sizeForItemAtIndexInSection:withWidth:] */

undefined1  [16]
FUN_107d1bd1c(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  undefined1 auVar1 [16];
  
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained(param_5);
  func_0x00010c156160();
  _objc_release(param_5);
  auVar1._0_8_ = (param_1 - param_2) - param_4;
  auVar1._8_8_ = 0x404c000000000000;
  return auVar1;
}



/* Entry: 107d1bd80; end: 107d1be03; -[SCSpotlightEntrySection sectionInfo] */

void FUN_107d1bd80(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110df78d8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c297350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0x4030000000000000,0,0x4030000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8,
             PTR_s_valueWithUIEdgeInsets__1126836f8);
  return;
}



/* Entry: 107d1be04; end: 107d1be1f; -[SCSpotlightEntrySection sectionInsets] */

void FUN_107d1be04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0x4030000000000000,0,0x4030000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8,
             PTR_s_valueWithUIEdgeInsets__1126836f8);
  return;
}



/* Entry: 107d1be20; end: 107d1be27; -[SCSpotlightEntrySection minimumSectionLineSpacing] */

undefined8 FUN_107d1be20(void)

{
  return 0;
}



/* Entry: 107d1be28; end: 107d1be3f; -[SCSpotlightEntrySection delegate] */

void FUN_107d1be28(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d1be40; end: 107d1be4b; -[SCSpotlightEntrySection setDelegate:] */

void FUN_107d1be40(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107d1be4c; end: 107d1be53; -[SCSpotlightEntrySection sectionUpdateModel] */

undefined8 FUN_107d1be4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d1be54; end: 107d1be5b; -[SCSpotlightEntrySection setSectionUpdateModel:] */

void FUN_107d1be54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d1be5c; end: 107d1be63; -[SCSpotlightEntrySection dataLoadingStatus] */

undefined8 FUN_107d1be5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d1be64; end: 107d1be6b; -[SCSpotlightEntrySection setDataLoadingStatus:] */

void FUN_107d1be64(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 107d1be6c; end: 107d1be73; -[SCSpotlightEntrySection isFriendsOnlyProfile] */

undefined1 FUN_107d1be6c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 107d1be74; end: 107d1be7b; -[SCSpotlightEntrySection setIsFriendsOnlyProfile:] */

void FUN_107d1be74(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 107d1be7c; end: 107d1be83; -[SCSpotlightEntrySection renameToReals] */

undefined1 FUN_107d1be7c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x31);
}


