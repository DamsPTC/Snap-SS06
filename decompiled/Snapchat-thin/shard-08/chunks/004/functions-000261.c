/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10607e360; end: 10607e7d3; -[SCShortcutsSessionLoggingServiceImpl _logBlizzardMetrics] */

void FUN_10607e360(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
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
  puVar1 = PTR_PTR_1126c7690;
  _objc_opt_new();
  func_0x00010c207140();
  uVar2 = 0x29;
  if (*(long *)(param_1 + 0x30) != 1) {
    uVar2 = 0xffffffffffffffff;
  }
  uVar7 = 0x48;
  if (*(long *)(param_1 + 0x30) != 2) {
    uVar7 = uVar2;
  }
  func_0x00010c206c40(puVar1,param_2,uVar7);
  func_0x00010c1ffd20(puVar1,param_2,*(undefined1 *)(param_1 + 0x38));
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010607efa4(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ffe80(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  lVar11 = *(long *)(param_1 + 0x58);
  _objc_retain(lVar11);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar8 = lVar11;
  func_0x00010bf529e0(lVar11);
  func_0x00010bf71fe0(puVar3,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  dVar13 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar8 = lVar11;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar12 = *plStack_130;
    do {
      lVar10 = 0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(lVar8);
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar2 = *(undefined8 *)(lStack_138 + lVar10 * 8);
        lVar4 = lVar11;
        func_0x00010c0e00e0(lVar11,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf529e0();
        func_0x00010c0df840(puVar6,param_2,lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3,param_2,puVar6,uVar2);
        _objc_release(puVar6);
        _objc_release(lVar4);
        lVar10 = lVar10 + 1;
      } while (lVar9 != lVar10);
      lVar9 = lVar8;
      func_0x00010bf52a60(lVar8,param_2,&uStack_140,auStack_100,0x10);
    } while (lVar9 != 0);
  }
  _objc_release(lVar8);
  _objc_release(lVar11);
  puVar6 = puVar3;
  func_0x00010607efa4(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ffdc0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010607efa4(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ffe00(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e3bf78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  FUN_10607b4fc(dVar13,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010607efa4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9200(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  dVar14 = dVar13;
  FUN_10607b4fc(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010607efa4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9360(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar7);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar8 = *(long *)(param_1 + 0x40);
  func_0x00010c0e00e0(lVar8,param_2,&PTR____CFConstantStringClassReference_110e3bfd8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 != 0) {
    puVar6 = PTR_PTR_1126c7698;
    _objc_opt_new(PTR_PTR_1126c7698);
    func_0x00010c21acc0();
    func_0x00010bf885a0(lVar8);
    dVar15 = dVar14 - dVar13;
    dVar14 = 0.0;
    if (0.0 <= dVar15) {
      dVar14 = dVar15;
    }
    func_0x00010c193e80(puVar6,param_2,(long)dVar14);
    func_0x00010befa120(puVar3,param_2,puVar6);
    _objc_release(puVar6);
  }
  lVar9 = *(long *)(param_1 + 0x40);
  func_0x00010c0e00e0(lVar9,param_2,&PTR____CFConstantStringClassReference_110e3bfb8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    puVar6 = PTR_PTR_1126c7698;
    _objc_opt_new(PTR_PTR_1126c7698);
    func_0x00010c21acc0();
    func_0x00010bf885a0(lVar9);
    dVar15 = 0.0;
    if (0.0 <= dVar14 - dVar13) {
      dVar15 = dVar14 - dVar13;
    }
    func_0x00010c193e80(puVar6,param_2,(long)dVar15);
    func_0x00010befa120(puVar3,param_2,puVar6);
    _objc_release(puVar6);
  }
  func_0x00010c1b9260(puVar1,param_2,puVar3);
  func_0x00010c162140(puVar1,param_2,*(undefined8 *)(param_1 + 0x68));
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c269d40(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar6;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10607e7d4; end: 10607e82f; -[SCShortcutsSessionLoggingServiceImpl _createPerformerWithPerformerProvider:] */

void FUN_10607e7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10607e830; end: 10607e83b; -[SCShortcutsSessionLoggingServiceImpl _convertShortcutLoggingSourceToShortcutSource:] */

bool FUN_10607e830(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffd) != 0;
}



/* Entry: 10607e83c; end: 10607e89b; -[SCShortcutsSessionLoggingServiceImpl _convertListIdToBlizzardShortcutId:] */

void FUN_10607e83c(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12e38);
  if (((ulong)ppuVar1 & 1) == 0) {
    _objc_retain(param_3);
    ppuVar1 = param_3;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbb718;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10607e89c; end: 10607e94f; -[SCShortcutsSessionLoggingServiceImpl .cxx_destruct] */

void FUN_10607e89c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 10607e950; end: 10607e9db;  */

void FUN_10607e950(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110dd1dd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10607e9dc; end: 10607eb8f; -[SCFriendsFeedHeaderShortcutsLoggingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607e9dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + _DAT_11273e174;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11273e178;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11273e17c;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c22d820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_58,param_1);
  puVar5 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11273e180);
  puVar6 = PTR_PTR_1126c76a0;
  _objc_alloc(PTR_PTR_1126c76a0);
  func_0x00010c045fa0();
  func_0x00010bf9d660(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 10607eb90; end: 10607ebdb;  */

void FUN_10607eb90(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beb2400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10607ebdc; end: 10607ec5f; -[SCFriendsFeedHeaderShortcutsLoggingServicesEntryPoint _shortcutsSessionLoggingServiceWithUserTrackedLogger:performerProvider:shortcutsDataFetcher:] */

void FUN_10607ebdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c76a8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c05f3e0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10607ec60; end: 10607ecbf; -[SCFriendsFeedHeaderShortcutsLoggingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607ec60(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e180,0);
  _objc_destroyWeak(param_1 + _DAT_11273e17c);
  _objc_destroyWeak(param_1 + _DAT_11273e178);
  _objc_destroyWeak(param_1 + _DAT_11273e174);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273e184);
  return;
}



/* Entry: 10607ecc0; end: 10607ee73; -[SCSendToHeaderShortcutsLoggingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607ecc0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + _DAT_11273e188;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11273e18c;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11273e190;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c22d820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_58,param_1);
  puVar5 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11273e194);
  puVar6 = PTR_PTR_1126c76b0;
  _objc_alloc(PTR_PTR_1126c76b0);
  func_0x00010c045fa0();
  func_0x00010bf9d660(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 10607ee74; end: 10607eebf;  */

void FUN_10607ee74(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beb2400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10607eec0; end: 10607ef43; -[SCSendToHeaderShortcutsLoggingServicesEntryPoint _shortcutsSessionLoggingServiceWithUserTrackedLogger:performerProvider:shortcutsDataFetcher:] */

void FUN_10607eec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c76a8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c05f3e0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10607ef44; end: 10607f027; -[SCSendToHeaderShortcutsLoggingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607ef44(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e194,0);
  _objc_destroyWeak(param_1 + _DAT_11273e190);
  _objc_destroyWeak(param_1 + _DAT_11273e18c);
  _objc_destroyWeak(param_1 + _DAT_11273e188);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273e198);
  return;
}



/* Entry: 10607f028; end: 10607f09b; -[SCGrapheneShortcutsCarouselMetric2 init] */

undefined1 * FUN_10607f028(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ef660;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10607f09c; end: 10607f20f;  */

void FUN_10607f09c(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3624d7;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11090a3b8;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_11090a3b8,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar6 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3624d7;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_11090a408;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_11090a408,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    FUN_10607f210(puVar2,puVar3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10607f210; end: 10607f383;  */

void FUN_10607f210(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3624d7;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11090a408;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_11090a408,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_10607f210(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10607f384; end: 10607f3ef;  */

void FUN_10607f384(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_10607f210(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10607f3f0; end: 10607f51b; -[SCFriendsFeedHeaderScope initWithViewContainer:uiContainer:delegate:feedInteractionEventObservable:shortcutEventObservable:preselectedShortcut:] */

undefined1 *
FUN_10607f3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ef668;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10607f51c; end: 10607f523; -[SCFriendsFeedHeaderScope viewContainer] */

undefined8 FUN_10607f51c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10607f524; end: 10607f52b; -[SCFriendsFeedHeaderScope uiContainer] */

undefined8 FUN_10607f524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10607f52c; end: 10607f543; -[SCFriendsFeedHeaderScope delegate] */

void FUN_10607f52c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10607f544; end: 10607f54f; -[SCFriendsFeedHeaderScope setDelegate:] */

void FUN_10607f544(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10607f550; end: 10607f557; -[SCFriendsFeedHeaderScope feedInteractionEventObservable] */

undefined8 FUN_10607f550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10607f558; end: 10607f55f; -[SCFriendsFeedHeaderScope shortcutEventObservable] */

undefined8 FUN_10607f558(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10607f560; end: 10607f567; -[SCFriendsFeedHeaderScope preselectedShortcut] */

undefined8 FUN_10607f560(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10607f568; end: 10607f5b7; -[SCFriendsFeedHeaderScope .cxx_destruct] */

void FUN_10607f568(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10607f5b8; end: 10607f613; +[SCFriendsFeedShortcutEvent didReceiveShortcutRecipientsWithRecipientCount:] */

void FUN_10607f5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c2c58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10607f614; end: 10607f667; +[SCFriendsFeedShortcutEvent interactWithNonShortcutRecipientWithExitEvent:] */

void FUN_10607f614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c2c58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10607f668; end: 10607f6b3; +[SCFriendsFeedShortcutEvent onExitDirectNavigationShortcut] */

void FUN_10607f668(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c2c58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10607f6b4; end: 10607f6d7; -[SCFriendsFeedShortcutEvent copyWithZone:] */

undefined8 FUN_10607f6b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10607f6d8; end: 10607f73f; -[SCFriendsFeedShortcutEvent hash] */

void FUN_10607f6d8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  uStack_20 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126ef670;
  puStack_60 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10607f740; end: 10607f783; -[SCFriendsFeedShortcutEvent internalInit] */

void FUN_10607f740(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ef670;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10607f784; end: 10607f82b; -[SCFriendsFeedShortcutEvent isEqual:] */

bool FUN_10607f784(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
          (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10607f82c; end: 10607f8db; -[SCFriendsFeedShortcutEvent matchInteractWithNonShortcutRecipient:didReceiveShortcutRecipients:onExitDirectNavigationShortcut:] */

void FUN_10607f82c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else {
    if (lVar2 == 1) {
      if (param_4 == 0) goto LAB_10607f8b8;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    else {
      if ((lVar2 != 0) || (param_3 == 0)) goto LAB_10607f8b8;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    (*pcVar3)(lVar2,uVar1);
  }
LAB_10607f8b8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10607f8dc; end: 10607f8e7; -[SCFeatureSettingsService hasSeenListsFirstCreationTooltip] */

void FUN_10607f8dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e3c038);
  return;
}



/* Entry: 10607f8e8; end: 10607f8f3; -[SCFeatureSettingsService seenListsFirstCreationTooltipServerParam] */

undefined ** FUN_10607f8e8(void)

{
  return &PTR____CFConstantStringClassReference_110e3c038;
}



/* Entry: 10607f8f4; end: 10607f903; -[SCFeatureSettingsService setSeenListsFirstCreationTooltip:] */

void FUN_10607f8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e3c038,param_3);
  return;
}



/* Entry: 10607f904; end: 10607f90b; -[SCFeatureSettingsService lists_first_creation_tooltip_tooltip_client_value:] */

undefined * FUN_10607f904(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10607f90c; end: 10607f913; -[SCFeatureSettingsService lists_first_creation_tooltip_tooltip_server_value:] */

void FUN_10607f90c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10607f914; end: 10607f923; -[SCFeatureSettingsService seenListsFirstCreationTooltip] */

void FUN_10607f914(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e3c038,0);
  return;
}



/* Entry: 10607f924; end: 10607f963; +[SCCSendToListStore valdiMarshallableObjectDescriptor] */

void FUN_10607f924(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11090a4d8;
  param_1[1] = &PTR_DAT_11090a568;
  param_1[2] = &PTR_DAT_11090a478;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10607f964; end: 10607f9b3;  */

void FUN_10607f964(void)

{
  func_0x000106080060();
  func_0x000106080038();
  func_0x00010607ffc8(FUN_10607fef4);
  func_0x000106080068();
  func_0x00010608000c();
  func_0x000106080004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10607f9b4; end: 10607f9cb;  */

void FUN_10607f9b4(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010607f9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_2,param_2[1],param_2[2],*(undefined4 *)(param_2 + 3));
  return;
}



/* Entry: 10607f9cc; end: 10607fa1b;  */

void FUN_10607f9cc(void)

{
  func_0x000106080060();
  func_0x000106080038();
  func_0x00010607ffc8(0x10607ff28);
  func_0x000106080068();
  func_0x00010608000c();
  func_0x000106080004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10607fa1c; end: 10607fa33;  */

void FUN_10607fa1c(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010607fa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_2,param_2[1],param_2[2],param_2[3],param_2[4]);
  return;
}



/* Entry: 10607fa34; end: 10607fa83;  */

void FUN_10607fa34(void)

{
  func_0x000106080060();
  func_0x000106080038();
  func_0x00010607ffc8(0x10607ff58);
  func_0x000106080068();
  func_0x00010608000c();
  func_0x000106080004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10607fa84; end: 10607fa9f; +[SCListEditorContext valdiMarshallableObjectDescriptor] */

void FUN_10607fa84(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11090a598;
  param_1[1] = &PTR_DAT_11090a688;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10607faa0; end: 10607fab3; +[SCSendToListEditMenuContext valdiMarshallableObjectDescriptor] */

void FUN_10607faa0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onDismiss_11090a6c0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10607fab4; end: 10607faf7;  */

undefined8 FUN_10607fab4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c76b8;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x000106080050();
  func_0x00010607ffd8();
  return param_1;
}



/* Entry: 10607faf8; end: 10607fb13; +[SCSendToListPickerContext valdiMarshallableObjectDescriptor] */

void FUN_10607faf8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11090a768;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_11090a738;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10607fb14; end: 10607fb43;  */

undefined8 FUN_10607fb14(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1,param_2[3],param_2[4]);
  return 0;
}



/* Entry: 10607fb44; end: 10607fb93;  */

void FUN_10607fb44(void)

{
  func_0x000106080060();
  func_0x000106080038();
  func_0x00010607ffc8(0x10607ff84);
  func_0x000106080068();
  func_0x00010608000c();
  func_0x000106080004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10607fb94; end: 10607fbd7;  */

undefined8 FUN_10607fb94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c76c0;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x000106080050();
  func_0x00010607ffd8();
  return param_1;
}



/* Entry: 10607fbd8; end: 10607fbeb; +[SCStringValidator valdiMarshallableObjectDescriptor] */

void FUN_10607fbd8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11090a828;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10607fbec; end: 10607fbf7; +[SCListEditorView componentPath] */

undefined ** FUN_10607fbec(void)

{
  return &PTR____CFConstantStringClassReference_110e3c058;
}



/* Entry: 10607fbf8; end: 10607fc17; -[SCListEditorView initWithViewModel:componentContext:runtime:] */

void FUN_10607fbf8(void)

{
  func_0x00010607fff0(PTR_PTR_1126ef678);
  return;
}



/* Entry: 10607fc18; end: 10607fc4b; -[SCListEditorView setViewModel:] */

void FUN_10607fc18(void)

{
  FUN_10607ffb8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010608002c();
  func_0x000106080004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10607fc4c; end: 10607fc83; -[SCListEditorView viewModel] */

void FUN_10607fc4c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010607ffd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10607fc84; end: 10607fc8f; +[SCSendToListEditMenuView componentPath] */

undefined ** FUN_10607fc84(void)

{
  return &PTR____CFConstantStringClassReference_110e3c078;
}



/* Entry: 10607fc90; end: 10607fcaf; -[SCSendToListEditMenuView initWithViewModel:componentContext:runtime:] */

void FUN_10607fc90(void)

{
  func_0x00010607fff0(PTR_PTR_1126ef680);
  return;
}



/* Entry: 10607fcb0; end: 10607fce3; -[SCSendToListEditMenuView setViewModel:] */

void FUN_10607fcb0(void)

{
  FUN_10607ffb8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010608002c();
  func_0x000106080004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10607fce4; end: 10607fd1b; -[SCSendToListEditMenuView viewModel] */

void FUN_10607fce4(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010607ffd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10607fd1c; end: 10607fd5b; -[SCSendToListEditMenuView emitShow:] */

void FUN_10607fd1c(void)

{
  undefined8 unaff_x20;
  
  FUN_10607ffb8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106080048();
  func_0x000106080004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 10607fd5c; end: 10607fd9b; -[SCSendToListEditMenuView emitHide:] */

void FUN_10607fd5c(void)

{
  undefined8 unaff_x20;
  
  FUN_10607ffb8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106080048();
  func_0x000106080004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 10607fd9c; end: 10607fda7; +[SCSendToListPickerView componentPath] */

undefined ** FUN_10607fd9c(void)

{
  return &PTR____CFConstantStringClassReference_110e3c098;
}



/* Entry: 10607fda8; end: 10607fdc7; -[SCSendToListPickerView initWithViewModel:componentContext:runtime:] */

void FUN_10607fda8(void)

{
  func_0x00010607fff0(PTR_PTR_1126ef688);
  return;
}



/* Entry: 10607fdc8; end: 10607fdfb; -[SCSendToListPickerView setViewModel:] */

void FUN_10607fdc8(void)

{
  FUN_10607ffb8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010608002c();
  func_0x000106080004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10607fdfc; end: 10607fe33; -[SCSendToListPickerView viewModel] */

void FUN_10607fdfc(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010607ffd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10607fe34; end: 10607fe73; -[SCSendToListPickerView emitClearSelection:] */

void FUN_10607fe34(void)

{
  undefined8 unaff_x20;
  
  FUN_10607ffb8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106080048();
  func_0x000106080004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 10607fe74; end: 10607feb3; -[SCSendToListPickerView emitResetCarousel:] */

void FUN_10607fe74(void)

{
  undefined8 unaff_x20;
  
  FUN_10607ffb8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106080048();
  func_0x000106080004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 10607feb4; end: 10607fef3; -[SCSendToListPickerView emitSelectShortcutById:] */

void FUN_10607feb4(void)

{
  undefined8 unaff_x20;
  
  FUN_10607ffb8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106080048();
  func_0x000106080004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 10607fef4; end: 10607ffb7;  */

void FUN_10607fef4(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10607ffb8; end: 106080093;  */

void FUN_10607ffb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 106080094; end: 10608009b; -[SCCSendToListsMutationError__Enum init] */

void FUN_106080094(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 10608009c; end: 1060800a3; -[SCCSendToListsSource__Enum init] */

void FUN_10608009c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 1060800a4; end: 1060800ab; -[SCListEditType__Enum init] */

void FUN_1060800a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 1060800ac; end: 1060800bb; -[SCListRecipientType__Enum init] */

void FUN_1060800ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithEnumCases_count__1125e1b50,0x11313c020,3);
  return;
}



/* Entry: 1060800bc; end: 1060800df; -[SCCSendToListsMutationResult init] */

void FUN_1060800bc(void)

{
  func_0x00010608035c(PTR_PTR_1126ef690);
  return;
}



/* Entry: 1060800e0; end: 1060800f3; +[SCCSendToListsMutationResult valdiMarshallableObjectDescriptor] */

void FUN_1060800e0(undefined8 *param_1)

{
  *param_1 = &PTR_s_error_11090a8b8;
  param_1[1] = &PTR_DAT_11090a8e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060800f4; end: 106080113; -[SCListEditorResult initWithListName:selectedRecipients:] */

void FUN_1060800f4(void)

{
  func_0x000106080328(PTR_PTR_1126ef698);
  return;
}



/* Entry: 106080114; end: 106080127; +[SCListEditorResult valdiMarshallableObjectDescriptor] */

void FUN_106080114(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11090a8f8;
  param_1[1] = &PTR_DAT_11090a940;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106080128; end: 10608015b; -[SCListEditorViewModel initWithType:listName:selectedRecipients:] */

void FUN_106080128(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010608034c(PTR_PTR_1126ef6a0);
  func_0x000106080344(auStack_20);
  return;
}



/* Entry: 10608015c; end: 10608016f; +[SCListEditorViewModel valdiMarshallableObjectDescriptor] */

void FUN_10608015c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11090a950;
  param_1[1] = &PTR_DAT_11090a9b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106080170; end: 10608018f; -[SCListRecipient initWithId2:type:] */

void FUN_106080170(void)

{
  func_0x000106080328(PTR_PTR_1126ef6a8);
  return;
}



/* Entry: 106080190; end: 1060801a3; +[SCListRecipient valdiMarshallableObjectDescriptor] */

void FUN_106080190(undefined8 *param_1)

{
  *param_1 = &PTR_s_id_11090a9c8;
  param_1[1] = &PTR_DAT_11090aa10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060801a4; end: 1060801d7; -[SCSendToListEditMenuModel initWithListId:name:snapchatterDisplayNames:groupDisplayNames:] */

void FUN_1060801a4(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010608034c(PTR_PTR_1126ef6b0);
  func_0x000106080344(auStack_20);
  return;
}



/* Entry: 1060801d8; end: 1060801e7; +[SCSendToListEditMenuModel valdiMarshallableObjectDescriptor] */

void FUN_1060801d8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11090aa20;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060801e8; end: 10608021b; -[SCSendToListEditMenuViewModel initWithListModels:] */

void FUN_1060801e8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ef6b8;
  uStack_20 = param_1;
  func_0x000106080344(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10608021c; end: 10608022f; +[SCSendToListEditMenuViewModel valdiMarshallableObjectDescriptor] */

void FUN_10608021c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11090aa98;
  param_1[1] = &PTR_DAT_11090aac8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106080230; end: 106080253; -[SCSendToListPickerIcon init] */

void FUN_106080230(void)

{
  func_0x00010608035c(PTR_PTR_1126ef6c0);
  return;
}



/* Entry: 106080254; end: 106080263; +[SCSendToListPickerIcon valdiMarshallableObjectDescriptor] */

void FUN_106080254(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11090aad8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106080264; end: 1060802a7; -[SCSendToListPickerItemModel initWithListId:name:isContextual:] */

void FUN_106080264(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010608034c(PTR_PTR_1126ef6c8);
  func_0x000106080344(auStack_20);
  return;
}



/* Entry: 1060802a8; end: 1060802bb; +[SCSendToListPickerItemModel valdiMarshallableObjectDescriptor] */

void FUN_1060802a8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11090ab38;
  param_1[1] = &PTR_DAT_11090ac28;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060802bc; end: 106080303; -[SCSendToListPickerViewModel initWithListModels:v11StyleEnabled:] */

void FUN_1060802bc(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010608034c(PTR_PTR_1126ef6d0);
  func_0x000106080344(auStack_20);
  return;
}



/* Entry: 106080304; end: 106080383; +[SCSendToListPickerViewModel valdiMarshallableObjectDescriptor] */

void FUN_106080304(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11090ac40;
  param_1[1] = &PTR_DAT_11090ae38;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106080384; end: 1060803f7; -[SCGrapheneShareUpsellPresenterMetric2 init] */

undefined1 * FUN_106080384(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ef6d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1060803f8; end: 1060806b7;  */

/* WARNING: Removing unreachable block (ram,0x000106080680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060803f8(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  char *pcVar15;
  char *unaff_x24;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 *puStack_230;
  char *pcStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_1f8 [24];
  char *pcStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined8 *puStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11090ae50,acStack_c0,param_5);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar12 = 0;
    pcVar6 = pcVar2;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar12 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  pcVar15 = acStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar15);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_1060806b8;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  pcVar10 = pcVar6;
  pcVar11 = pcVar4;
  pcStack_100 = unaff_x24;
  pcStack_f8 = pcVar15;
  pcStack_f0 = pcVar2;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  puVar13 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (char *)auStack_138;
    func_0x00010002b838(auStack_138,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_120,pcVar2);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x00010007e1e8(acStack_158,auStack_138,&lStack_108,2);
    pcVar9 = "";
    pcVar15 = acStack_158;
    pcVar10 = acStack_158;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11090aea0,pcVar10,pcVar4);
    pcStack_140 = pcVar15;
    func_0x00010007e5dc(&pcStack_140);
    lVar12 = 0;
    puVar13 = auStack_138;
    pcVar11 = pcVar4;
    do {
      if ((&cStack_109)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    pcVar5 = pcVar4;
    __Unwind_Resume();
    pcStack_168 = FUN_1060808e8;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar9;
    pcVar3 = pcVar10;
    pcStack_1a0 = unaff_x24;
    pcStack_198 = pcVar15;
    puStack_190 = puVar13;
    pcStack_188 = pcVar4;
    pcStack_180 = pcVar6;
    pcStack_178 = pcVar1;
    ppuStack_170 = &puStack_d0;
    _objc_retain(pcVar9);
    _objc_retain(pcVar10);
    puVar13 = (undefined8 *)0x0;
    if (pcVar5 != (char *)0x0) {
      plVar14 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      unaff_x24 = (char *)auStack_1d8;
      func_0x00010002b838(auStack_1d8,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_1c0,pcVar1);
      acStack_1f8[0] = '\0';
      acStack_1f8[1] = '\0';
      acStack_1f8[2] = '\0';
      acStack_1f8[3] = '\0';
      acStack_1f8[4] = '\0';
      acStack_1f8[5] = '\0';
      acStack_1f8[6] = '\0';
      acStack_1f8[7] = '\0';
      acStack_1f8[8] = '\0';
      acStack_1f8[9] = '\0';
      acStack_1f8[10] = '\0';
      acStack_1f8[0xb] = '\0';
      acStack_1f8[0xc] = '\0';
      acStack_1f8[0xd] = '\0';
      acStack_1f8[0xe] = '\0';
      acStack_1f8[0xf] = '\0';
      acStack_1f8[0x10] = '\0';
      acStack_1f8[0x11] = '\0';
      acStack_1f8[0x12] = '\0';
      acStack_1f8[0x13] = '\0';
      acStack_1f8[0x14] = '\0';
      acStack_1f8[0x15] = '\0';
      acStack_1f8[0x16] = '\0';
      acStack_1f8[0x17] = '\0';
      func_0x00010007e1e8(acStack_1f8,auStack_1d8,&lStack_1a8,2);
      pcVar2 = "";
      pcVar15 = acStack_1f8;
      pcVar3 = acStack_1f8;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11090aef0,pcVar3,pcVar11);
      pcStack_1e0 = pcVar15;
      func_0x00010007e5dc(&pcStack_1e0);
      lVar12 = 0;
      puVar13 = auStack_1d8;
      do {
        if ((&cStack_1a9)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
    _objc_release(pcVar10);
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_release(pcVar10);
      if (cStack_1c1 < '\0') {
        __ZdlPv(auStack_1d8[0]);
      }
      _objc_release(pcVar10);
      _objc_release(pcVar9);
      pcVar6 = pcVar1;
      __Unwind_Resume();
      pcStack_208 = FUN_106080b18;
      lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcStack_240 = unaff_x24;
      pcStack_238 = pcVar15;
      puStack_230 = puVar13;
      pcStack_228 = pcVar1;
      pcStack_220 = pcVar10;
      pcStack_218 = pcVar9;
      pppuStack_210 = &ppuStack_170;
      _objc_retain(pcVar2);
      if (pcVar6 != (char *)0x0) {
        plVar14 = *(long **)(pcVar6 + 8);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar2;
          _objc_retainAutorelease(pcVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_260,pcVar1);
        uStack_280 = 0;
        uStack_278 = 0;
        uStack_270 = 0;
        func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11090af40,&uStack_280,pcVar3);
        puStack_268 = (undefined1 *)&uStack_280;
        func_0x00010007e5dc(&puStack_268);
        if (cStack_249 < '\0') {
          __ZdlPv(auStack_260[0]);
        }
      }
      pcVar1 = pcVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
        ___stack_chk_fail();
        _objc_release(pcVar2);
        _objc_release(pcVar2);
        __Unwind_Resume();
        pcVar6 = pcVar1 + _DAT_11273e1c8;
        _objc_loadWeakRetained();
        pcVar1 = pcVar1 + _DAT_11273e1cc;
        _objc_loadWeakRetained();
        puVar7 = PTR_PTR_1126ae720;
        _objc_retain();
        _objc_retain(pcVar6);
        func_0x00010bf11fe0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126c76d0;
        _objc_alloc(PTR_PTR_1126c76d0);
        func_0x00010c062640();
        _objc_release(puVar7);
        _objc_release(pcVar1);
        _objc_release(pcVar6);
        _objc_release(pcVar1);
        _objc_release(pcVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1060806b8; end: 1060808e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060806b8(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  uVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar12 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar4 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11090aea0,pcVar4,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar10 = 0;
    puVar12 = auStack_78;
    uVar9 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_1060808e8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar8 = pcVar4;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar12;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  puVar12 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar7 = "";
    unaff_x23 = acStack_138;
    pcVar8 = acStack_138;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11090aef0,pcVar8,uVar9);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar10 = 0;
    puVar12 = auStack_118;
    do {
      if ((&cStack_e9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_106080b18;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar12;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar4;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar7);
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_1a0,pcVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11090af40,&uStack_1c0,pcVar8);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
    }
  }
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  _objc_release(pcVar7);
  __Unwind_Resume();
  pcVar4 = pcVar1 + _DAT_11273e1c8;
  _objc_loadWeakRetained();
  pcVar1 = pcVar1 + _DAT_11273e1cc;
  _objc_loadWeakRetained();
  puVar5 = PTR_PTR_1126ae720;
  _objc_retain();
  _objc_retain(pcVar4);
  func_0x00010bf11fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c76d0;
  _objc_alloc(PTR_PTR_1126c76d0);
  func_0x00010c062640();
  _objc_release(puVar5);
  _objc_release(pcVar1);
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  _objc_release(pcVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1060808e8; end: 106080b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060808e8(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar9 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar4 = acStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11090aef0,pcVar4,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar7 = 0;
    puVar9 = auStack_78;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_106080b18;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar9;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar3 != (char *)0x0) {
    plVar8 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_100,pcVar2);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11090af40,&uStack_120,pcVar4);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar1 = pcVar4 + _DAT_11273e1c8;
  _objc_loadWeakRetained();
  pcVar4 = pcVar4 + _DAT_11273e1cc;
  _objc_loadWeakRetained();
  puVar5 = PTR_PTR_1126ae720;
  _objc_retain();
  _objc_retain(pcVar1);
  func_0x00010bf11fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c76d0;
  _objc_alloc(PTR_PTR_1126c76d0);
  func_0x00010c062640();
  _objc_release(puVar5);
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  _objc_release(pcVar4);
  _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}


