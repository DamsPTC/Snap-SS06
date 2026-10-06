/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105582138; end: 10558216f;  */

void FUN_105582138(long param_1,undefined8 param_2)

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



/* Entry: 105582170; end: 105582197;  */

void FUN_105582170(long param_1,undefined8 param_2)

{
  func_0x00010c0d9840(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 105582198; end: 1055823cb;  */

void FUN_105582198(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c087060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010bfa6b20(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055823cc; end: 105582497; -[CTPKmpItemsLoaderDeltaForce _getItemsByFeedType:origin:] */

void FUN_1055823cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105582498;
  puStack_50 = &UNK_1108683b8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105582498; end: 1055826b7;  */

void FUN_105582498(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0(*(undefined8 *)(param_1 + 0x28));
  _objc_retain(param_2);
  func_0x00010c11d500(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055826b8; end: 1055827df; -[CTPKmpItemsLoaderDeltaForce _loadSyncedItemsFromCacheForKey:feed:] */

void FUN_1055826b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010be1f080(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1055827e0;
  puStack_60 = &UNK_110897b88;
  uVar4 = uVar3;
  uStack_58 = param_1;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105582af4;
  puStack_90 = &UNK_11088cb90;
  uStack_88 = param_1;
  uStack_80 = param_4;
  _objc_retain(param_4);
  uVar2 = uVar4;
  func_0x00010c0b8600(uVar4,param_2,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_80);
  _objc_release(uVar4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1055827e0; end: 10558293b;  */

void FUN_1055827e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1055816a8;
  uStack_60 = 0x1055816b8;
  uStack_58 = 0;
  _objc_initWeak(auStack_88,*(undefined8 *)(param_1 + 0x20));
  _objc_copyWeak(auStack_90,auStack_88);
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10558293c; end: 105582af3;  */

void FUN_10558293c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  uVar5 = param_2;
  func_0x00010bf002e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = param_2;
  func_0x00010bf00d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar5;
  func_0x00010bfb1920(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010be1fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(long *)(lVar6 + 0x28) = lVar4;
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105582af4; end: 105582c27;  */

void FUN_105582af4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1055816a8;
  uStack_50 = 0x1055816b8;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105582c28; end: 105582d87;  */

void FUN_105582c28(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105582d88;
  puStack_60 = &UNK_1108986c8;
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  ppuVar6 = &puStack_78;
  func_0x000100504554(param_2,ppuVar6);
  puVar1 = PTR_PTR_1126badc0;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d4f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0531c0();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126af5d0;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar4;
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
  _objc_retain(ppuVar6);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar6;
  func_0x00010bf63640(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  uVar2 = uVar8;
  func_0x00010bf5d7e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105582d88; end: 105582e17;  */

void FUN_105582d88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010bf5d7e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105582e18; end: 105582e5f;  */

void FUN_105582e18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105582e60; end: 105582eb3; -[CTPKmpItemsLoaderDeltaForce .cxx_destruct] */

void FUN_105582e60(long param_1)

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



/* Entry: 105582eb4; end: 105582ecf;  */

undefined ** FUN_105582eb4(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dea458;
  if (param_1 != 3) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db9e38;
  }
  return ppuVar1;
}



/* Entry: 105582ed0; end: 105583047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105582ed0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126bade8;
    _objc_alloc(PTR_PTR_1126bade8);
    lVar1 = param_1 + _DAT_112725be0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + _DAT_112725bd8;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c291140();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_112725be8;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf1ad00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_112725be8;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010bf1a840();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_112725bf4;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010c09f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05abe0(puVar10,param_2,lVar1,lVar3,lVar5,lVar7,lVar9);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105583048; end: 10558307f;  */

void FUN_105583048(void)

{
  _objc_alloc_init(PTR_PTR_1126badf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105583080; end: 1055830df;  */

void FUN_105583080(void)

{
  _objc_alloc(PTR_PTR_1126bae00);
  func_0x00010c029100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055830e0; end: 1055833ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055830e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
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
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar24 = (undefined *)0x0;
  }
  else {
    puVar24 = PTR_PTR_1126bae10;
    _objc_alloc();
    puVar2 = PTR_PTR_1126bae18;
    _objc_alloc();
    func_0x00010c029100();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puStack_f0 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bae20;
    uStack_e8 = uVar3;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    puStack_e0 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126bae28;
    uStack_d8 = uVar5;
    _objc_alloc();
    func_0x00010c029100();
    puVar7 = PTR_PTR_1126bae30;
    puStack_d0 = puVar6;
    _objc_alloc_init();
    puVar8 = PTR_PTR_1126bae38;
    puStack_c8 = puVar7;
    _objc_alloc_init();
    puVar9 = PTR_PTR_1126bae40;
    puStack_c0 = puVar8;
    _objc_alloc_init();
    puVar10 = PTR_PTR_1126bae48;
    puStack_b8 = puVar9;
    _objc_alloc_init();
    puVar11 = PTR_PTR_1126bae50;
    puStack_b0 = puVar10;
    _objc_alloc_init();
    puVar12 = PTR_PTR_1126bae58;
    puStack_a8 = puVar11;
    _objc_alloc_init();
    puVar13 = PTR_PTR_1126bae60;
    puStack_a0 = puVar12;
    _objc_alloc();
    func_0x00010c029100();
    puVar14 = PTR_PTR_1126bae68;
    puStack_98 = puVar13;
    _objc_alloc();
    func_0x00010c029100();
    puVar15 = PTR_PTR_1126bae70;
    puStack_90 = puVar14;
    _objc_alloc_init();
    puVar16 = PTR_PTR_1126bae78;
    puStack_88 = puVar15;
    _objc_alloc();
    func_0x00010c029100();
    puVar17 = PTR_PTR_1126bae80;
    puStack_80 = puVar16;
    _objc_alloc_init();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f0,0x10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0553c0(puVar24,param_2,puVar18);
    _objc_release(puVar18);
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
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar19 = lVar1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar19 == 0) {
      puVar24 = (undefined *)0x0;
    }
    else {
      puVar24 = PTR_PTR_1126bae88;
      _objc_alloc(PTR_PTR_1126bae88);
      lVar20 = lVar19;
      func_0x00010be24d40(lVar19);
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar19;
      func_0x00010be24ca0(lVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      lVar22 = lVar19 + _DAT_112725bdc;
      _objc_loadWeakRetained(lVar22);
      lVar23 = lVar22;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c016b00(puVar24,param_2,lVar20,lVar21,uVar3,lVar23,*(undefined8 *)(lVar1 + 0x28));
      _objc_release(lVar23);
      _objc_release(lVar22);
      _objc_release(lVar21);
      _objc_release(lVar20);
    }
    _objc_release(lVar19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar24);
  return;
}



/* Entry: 1055833ac; end: 1055834a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055833ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126bae88;
    _objc_alloc(PTR_PTR_1126bae88);
    lVar2 = lVar1;
    func_0x00010be24d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010be24ca0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = lVar1 + _DAT_112725bdc;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c016b00(puVar6,param_2,lVar2,lVar3,uVar7,lVar5,*(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1055834a4; end: 1055834c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055834a4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112725bdc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055834c8; end: 1055835c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055834c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126bae90;
    _objc_alloc(PTR_PTR_1126bae90);
    lVar2 = lVar1;
    func_0x00010be24ca0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = lVar1 + _DAT_112725bdc;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112725bd0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c016b20(puVar7,param_2,lVar2,uVar6,lVar4,uVar5);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1055835c4; end: 105583753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055835c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126bae98;
    _objc_alloc();
    lVar2 = lVar1 + _DAT_112725bec;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bfcfa00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = lVar1 + _DAT_112725bdc;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(lVar1 + _DAT_112725bd0);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1 + _DAT_112725bfc;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1 + _DAT_112725c00;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c0d7980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c058d60(puVar13,param_2,lVar3,uVar11,lVar5,uVar12,uVar6,lVar8,lVar10);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 105583754; end: 105583777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105583754(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112725bec);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105583778; end: 1055837a7;  */

void FUN_105583778(void)

{
  _objc_alloc(PTR_PTR_1126baea0);
  func_0x00010c029100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055837a8; end: 105583863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055837a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = param_1 + _DAT_112725bf0;
      _objc_loadWeakRetained(lVar2);
    }
    puVar3 = PTR_PTR_1126baea8;
    _objc_alloc(PTR_PTR_1126baea8);
    lVar1 = lVar2;
    func_0x00010bfcdfa0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0184a0(puVar3,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105583864; end: 10558399f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105583864(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010be24c80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126baeb0;
    _objc_alloc(PTR_PTR_1126baeb0);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = lVar1 + _DAT_112725bdc;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112725bd0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1 + _DAT_112725bf8;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010bf1dba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c016ae0(puVar8,param_2,lVar2,uVar9,lVar4,uVar5,lVar7,*(undefined8 *)(param_1 + 0x28)
                       );
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1055839a0; end: 1055839e7;  */

void FUN_1055839a0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be18740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055839e8; end: 105583b5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055839e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126bae10;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0553c0(puVar2,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar3);
    puVar7 = PTR_PTR_1126baeb8;
    _objc_alloc();
    lVar4 = lVar1;
    func_0x00010be24ce0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1 + _DAT_112725bdc;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c016ac0(puVar7,param_2,lVar4,lVar6,*(undefined8 *)(param_1 + 0x28),puVar2);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar1 = lVar1 + 0x20;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR_PTR_1126baec0;
      _objc_alloc(PTR_PTR_1126baec0);
      lVar5 = lVar1;
      func_0x00010be24e00(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010be24d00(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c006e40(puVar7,param_2,lVar5,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar5);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105583b60; end: 105583d7f;  */

void FUN_105583b60(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126baec0;
    _objc_alloc(PTR_PTR_1126baec0);
    lVar1 = param_1;
    func_0x00010be24e00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010be24d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006e40(puVar3,param_2,lVar1,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105583d80; end: 105583e2b; -[CTPGRPCNetworkServiceProvider _grpcSearchClient] */

void FUN_105583d80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  FUN_1055834a4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_105583754(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000105586cd4(uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105583e2c; end: 105583ed7; -[CTPGRPCNetworkServiceProvider _grpcGiphyClient] */

void FUN_105583e2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  FUN_1055834a4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_105583754(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  FUN_105586ee0(uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105583ed8; end: 105583f83; -[CTPGRPCNetworkServiceProvider _grpcFeedsClient] */

void FUN_105583ed8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  FUN_1055834a4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_105583754(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000105587040(uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105583f84; end: 10558402f; -[CTPGRPCNetworkServiceProvider _grpcHometabClient] */

void FUN_105583f84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  FUN_1055834a4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_105583754(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x0001055871a0(uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105584030; end: 1055840db; -[CTPGRPCNetworkServiceProvider _grpcItemsLookupClient] */

void FUN_105584030(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  FUN_1055834a4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_105583754(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000105587250(uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1055840dc; end: 105584187; -[CTPGRPCNetworkServiceProvider _grpcUserDataClient] */

void FUN_1055840dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  FUN_1055834a4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_105583754(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000105587300(uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105584188; end: 105584233; -[CTPGRPCNetworkServiceProvider _grpcMusicUserDataClient] */

void FUN_105584188(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  FUN_1055834a4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_105583754(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x0001055873b0(uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105584234; end: 1055842df; -[CTPGRPCNetworkServiceProvider _grpcCustomStickerClient] */

void FUN_105584234(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  FUN_1055834a4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_105583754(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000105587460(uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1055842e0; end: 10558438b; -[CTPGRPCNetworkServiceProvider _grpcCustomojiClient] */

void FUN_1055842e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  FUN_1055834a4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_105583754(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010558750c(uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10558438c; end: 105584493; -[CTPGRPCNetworkServiceProvider _forYouClientItemTransformer:cameoTransformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10558438c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126baee8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1;
  func_0x00010be24cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112725bd0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112725be4;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c1541c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016b40(puVar1,param_2,lVar2,param_3,uVar3,param_4,lVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105584494; end: 105584553; -[CTPGRPCNetworkServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105584494(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112725c00);
  _objc_destroyWeak(param_1 + _DAT_112725bfc);
  _objc_destroyWeak(param_1 + _DAT_112725bf8);
  _objc_destroyWeak(param_1 + _DAT_112725bf4);
  _objc_destroyWeak(param_1 + _DAT_112725bf0);
  _objc_destroyWeak(param_1 + _DAT_112725bec);
  _objc_destroyWeak(param_1 + _DAT_112725be8);
  _objc_destroyWeak(param_1 + _DAT_112725be4);
  _objc_destroyWeak(param_1 + _DAT_112725be0);
  _objc_destroyWeak(param_1 + _DAT_112725bdc);
  _objc_destroyWeak(param_1 + _DAT_112725bd8);
  _objc_destroyWeak(param_1 + _DAT_112725bd4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112725bd0,0);
  return;
}



/* Entry: 105584554; end: 1055845ff; -[CTPGRPCNetworkCallback initWithSuccessHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105584554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e9028;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112725c04);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112725c04) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112725c08);
    *(undefined **)((long)puVar1 + (long)_DAT_112725c08) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105584600; end: 10558460f; -[CTPGRPCNetworkCallback subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105584600(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25fd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112725c08),PTR_s_subscribe__112675970);
  return;
}



/* Entry: 105584610; end: 105584713; -[CTPGRPCNetworkCallback onEvent:status:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105584610(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = (long)_DAT_112725c04;
  puVar1 = *(undefined **)(param_1 + lVar4);
  if (puVar1 == (undefined *)0x0) goto LAB_1055846f4;
  if (param_4 == 0) {
LAB_10558469c:
    (**(code **)(puVar1 + 0x10))(puVar1,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_4;
    func_0x00010c252ee0();
    if (lVar2 == 0) {
      puVar1 = *(undefined **)(param_1 + lVar4);
      goto LAB_10558469c;
    }
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99360(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112725c08));
  _objc_release(puVar3);
LAB_1055846f4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105584714; end: 105584753; -[CTPGRPCNetworkCallback .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105584714(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112725c08,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112725c04,0);
  return;
}



/* Entry: 105584754; end: 105584827; -[CTPGRPCNetworkCustomStickerClient initWithCtpGRPCClient:] */

undefined1 * FUN_105584754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9030;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105584828; end: 105584a3f; -[CTPGRPCNetworkCustomStickerClient createCustomStickers:deleteCustomStickers:] */

void FUN_105584828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0b8620(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0b8620(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126baf08;
  _objc_alloc_init();
  uVar4 = uVar1;
  func_0x00010c0d3c80(uVar1);
  func_0x00010c185280(puVar3);
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010c0d3c80(uVar2);
  func_0x00010c18b8a0(puVar3);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010558dab8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_initWeak(auStack_58,param_1);
  puVar6 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar3);
  _objc_retain(puVar5);
  func_0x00010bf54280(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105584a40; end: 105584b37;  */

void FUN_105584a40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b0cb8;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_2);
  puVar4 = puVar1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010bf96ee0();
  _objc_release(puVar4);
  if ((int)puVar2 == 3) {
    puVar4 = puVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bf61ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0c45e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    _objc_release(puVar4);
    if (puVar3 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126baef8;
      _objc_alloc_init(PTR_PTR_1126baef8);
      func_0x00010c188860();
      goto LAB_105584b1c;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_105584b1c:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105584b38; end: 105584b83;  */

void FUN_105584b38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126baf00;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c1a99c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105584b84; end: 105584c73;  */

void FUN_105584b84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010bf17020(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105584c74; end: 105584d0b;  */

void FUN_105584c74(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af5d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 == 0) {
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar1);
  }
  else {
    param_2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105584d0c; end: 105584d17; -[CTPGRPCNetworkCustomStickerClient .cxx_destruct] */

void FUN_105584d0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105584d18; end: 105584deb; -[CTPGRPCNetworkCustomojiClient initWithCtpGRPCClient:] */

undefined1 * FUN_105584d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9038;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105584dec; end: 10558504f; -[CTPGRPCNetworkCustomojiClient createCustomoji:] */

void FUN_105584dec(undefined8 param_1,undefined1 *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **unaff_x24;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf1c2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar3 == (undefined *)0x0) {
    uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110deb3d8;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae6b8;
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = puVar3;
    func_0x00010bf51e00();
    func_0x00010c1b04a0();
    puVar4 = PTR_PTR_1126baf18;
    _objc_opt_new();
    func_0x00010c20a7e0();
    _objc_initWeak(auStack_60,param_1);
    puVar2 = PTR_PTR_1126ae6b8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105585050;
    puStack_78 = &UNK_110851360;
    param_2 = auStack_60;
    _objc_copyWeak(auStack_68);
    _objc_retain(puVar4);
    puStack_70 = puVar4;
    func_0x00010bf54280(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_60);
    unaff_x24 = &puStack_90;
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_destroyWeak((undefined1 *)((long)unaff_x24 + 0x28));
    _objc_destroyWeak(auStack_60);
    __Unwind_Resume();
    _objc_retain(param_2);
    param_3 = param_3 + 0x28;
    _objc_loadWeakRetained();
    uVar5 = *(undefined8 *)(param_3 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010bf5a380(uVar5);
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(param_2);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105585050; end: 1055851db;  */

void FUN_105585050(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010bf5a380(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055851dc; end: 1055851e7; -[CTPGRPCNetworkCustomojiClient .cxx_destruct] */

void FUN_1055851dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055851e8; end: 10558534f; -[CTPGRPCNetworkFeedsClient initWithGRPCClient:feedsConverter:circumstanceEngine:userDataFactory:bloopsOptionService:logger:] */

undefined1 *
FUN_1055851e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e9040;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105585350; end: 10558539b;  */

void FUN_105585350(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126baf20;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c058f80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558539c; end: 1055853a3; -[CTPGRPCNetworkFeedsClient feedTreeForContext:supportedFeedTypes:] */

void FUN_10558539c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0ee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__feedTreeForContext_supportedFee_112561540,param_3,param_4,1);
  return;
}



/* Entry: 1055853a4; end: 1055853ab; -[CTPGRPCNetworkFeedsClient feedTreeRawResponseForContext:supportedFeedTypes:] */

void FUN_1055853a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0ee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__feedTreeForContext_supportedFee_112561540,param_3,param_4,0);
  return;
}



/* Entry: 1055853ac; end: 10558543b; -[CTPGRPCNetworkFeedsClient feedFromFeedTreeRawResponse:] */

void FUN_1055853ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bfeea60();
  _objc_release(param_3);
  func_0x00010c1ec620(puVar1,param_2,0);
  puVar2 = puVar1;
  func_0x00010bf67000(puVar1,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10558543c; end: 105585577; -[CTPGRPCNetworkFeedsClient _feedTreeForContext:supportedFeedTypes:shouldParseResponse:] */

void FUN_10558543c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf28d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_3;
  _objc_retain(param_4);
  uVar1 = uVar2;
  uStack_50 = param_5;
  func_0x00010bfb2660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105585578; end: 1055855e7;  */

void FUN_105585578(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be0ee60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055855e8; end: 105585d53; -[CTPGRPCNetworkFeedsClient _feedTreeForContext:supportedFeedTypes:cameoOptions:shouldParseResponse:] */

void FUN_1055855e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lStack_278;
  undefined1 auStack_230 [8];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c067f00();
  _CACurrentMediaTime();
  puVar1 = PTR_PTR_1126baf28;
  _objc_alloc_init();
  func_0x00010c1ebb40(puVar1);
  uVar10 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_5);
  _objc_retain(uVar10);
  lVar7 = param_5;
  func_0x00010bf529e0();
  if (lVar7 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126baf30;
    _objc_alloc_init(PTR_PTR_1126baf30);
    puVar2 = PTR_PTR_1126ae740;
    _objc_alloc_init();
    lStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    _objc_retain(param_5);
    lVar7 = param_5;
    func_0x00010bf52a60();
    if (lVar7 != 0) {
      lVar8 = *plStack_180;
      do {
        lVar9 = 0;
        do {
          if (*plStack_180 != lVar8) {
            _objc_enumerationMutation(param_5);
          }
          func_0x00010c2827c0(*(undefined8 *)(lStack_188 + lVar9 * 8));
          uVar3 = uVar10;
          func_0x00010c269d40(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c119180();
          _objc_release(uVar3);
          func_0x00010befc800(puVar2);
          lVar9 = lVar9 + 1;
        } while (lVar7 != lVar9);
        lVar7 = param_5;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
    _objc_release(param_5);
    func_0x00010c19b300(puVar12);
    _objc_release(puVar2);
  }
  _objc_release(uVar10);
  _objc_release(param_5);
  func_0x00010c17cc80(puVar1);
  _objc_release(puVar12);
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(uVar10);
  puVar12 = PTR_PTR_1126baf38;
  _objc_alloc_init();
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1f8 = 0;
  plStack_200 = (long *)0x0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lStack_208 = 0;
  uStack_210 = 0;
  _objc_retain(param_5);
  lStack_278 = param_5;
  func_0x00010bf52a60();
  if (lStack_278 != 0) {
    lVar7 = *plStack_200;
    do {
      lVar8 = 0;
      do {
        if (*plStack_200 != lVar7) {
          _objc_enumerationMutation(param_5);
        }
        lVar11 = *(long *)(lStack_208 + lVar8 * 8);
        lVar9 = lVar11;
        func_0x00010c067fc0();
        func_0x00010c067fc0();
        if (lVar11 == 9 || lVar9 == 0xd) {
          puVar2 = PTR_PTR_1126baf40;
          _objc_alloc_init(PTR_PTR_1126baf40);
          func_0x00010c175f80(puVar12);
          _objc_release(puVar2);
          puVar2 = PTR_PTR_1126baf48;
          _objc_alloc_init(PTR_PTR_1126baf48);
          lVar9 = param_6;
          func_0x00010bf04be0(param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b6e20();
          func_0x00010c1c1ac0(puVar2);
          _objc_release(lVar9);
          lVar9 = param_6;
          func_0x00010bf04be0(param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ce7c0();
          func_0x00010c1c84a0(puVar2);
          _objc_release(lVar9);
          lVar9 = param_6;
          func_0x00010bf04be0(param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f5760();
          func_0x00010c1d97e0(puVar2);
          _objc_release(lVar9);
          puVar4 = puVar12;
          func_0x00010bf28d60(puVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c168700();
          _objc_release(puVar4);
          lVar9 = param_6;
          func_0x00010bfbec00();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar4 = PTR_PTR_1126ae740;
          _objc_alloc_init(PTR_PTR_1126ae740);
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          lStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          plStack_1c0 = (long *)0x0;
          _objc_retain(lVar9);
          lVar11 = lVar9;
          func_0x00010bf52a60();
          if (lVar11 != 0) {
            lVar13 = *plStack_1c0;
            do {
              lVar14 = 0;
              do {
                if (*plStack_1c0 != lVar13) {
                  _objc_enumerationMutation(lVar9);
                }
                func_0x00010c067fc0(*(undefined8 *)(lStack_1c8 + lVar14 * 8));
                func_0x00010c1190a0(PTR_PTR_1126bae00);
                func_0x00010befc800(puVar4);
                lVar14 = lVar14 + 1;
              } while (lVar11 != lVar14);
              lVar11 = lVar9;
              func_0x00010bf52a60();
            } while (lVar11 != 0);
          }
          _objc_release(lVar9);
          _objc_release(lVar9);
          puVar5 = puVar12;
          func_0x00010bf28d60(puVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a2660();
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(lVar9);
          func_0x00010c0c1fc0(param_6);
          puVar4 = puVar12;
          func_0x00010bf28d60(puVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c3160();
          _objc_release(puVar4);
          func_0x00010c0e8320(param_6);
          puVar4 = puVar12;
          func_0x00010bf28d60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d4720();
          _objc_release(puVar4);
          _objc_release(puVar2);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != lStack_278);
      lStack_278 = param_5;
      func_0x00010bf52a60();
    } while (lStack_278 != 0);
  }
  _objc_release(param_5);
  uVar3 = uVar10;
  func_0x00010bfc0680(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e7c0(puVar12);
  _objc_release(uVar3);
  _objc_release(uVar10);
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010c1ebf20(puVar1);
  _objc_release(puVar12);
  puVar2 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010c1eeba0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  FUN_10558640c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_initWeak(auStack_108,param_2);
  puVar12 = PTR_PTR_1126ae6b8;
  puVar6 = auStack_108;
  _objc_copyWeak(auStack_230);
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  uStack_228 = param_4;
  uStack_220 = param_1;
  uStack_218 = param_7;
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_230);
  _objc_destroyWeak(auStack_108);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_230);
    _objc_destroyWeak(auStack_108);
    __Unwind_Resume();
    _objc_retain(puVar6);
    param_5 = param_5 + 0x38;
    _objc_loadWeakRetained();
    uVar10 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar6);
    func_0x00010bfa41a0(uVar10);
    _objc_release(uVar10);
    puVar12 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar6);
    _objc_release(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105585d54; end: 105585e5f;  */

void FUN_105585d54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010bfa41a0(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105585e60; end: 10558613f;  */

long FUN_105585e60(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bfdb4c0();
  if ((int)lVar1 != 0) {
    puVar2 = *(undefined **)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c1414e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfa3c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(puVar2);
    if (puVar3 != (undefined *)0x0) {
      if (*(char *)(param_1 + 0x48) == '\x01') {
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        puVar2 = PTR_PTR_1126af5d0;
        func_0x00010c2619e0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar6);
        _objc_release(puVar2);
        _CACurrentMediaTime();
        puVar2 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x10);
        func_0x00010c269d40(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0aae20();
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
        func_0x00010bf09780();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(0);
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        puVar4 = PTR_PTR_1126af5d0;
        if (puVar2 == (undefined *)0x0) {
          func_0x00010bfa01c0(PTR_PTR_1126af5d0);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c2619e0();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c0d9840(uVar6);
        _objc_release(0);
        _objc_release(puVar4);
      }
      _objc_release(puVar2);
      puVar2 = param_3;
      goto LAB_1055860f0;
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_opt_class(uVar6);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar6);
LAB_1055860f0:
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_2;
  }
  ___stack_chk_fail();
  return *(long *)(param_2 + 0x30);
}



/* Entry: 105586140; end: 105586147; -[CTPGRPCNetworkFeedsClient feedService] */

undefined8 FUN_105586140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105586148; end: 105586177; -[CTPGRPCNetworkFeedsClient setFeedService:] */

void FUN_105586148(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105586178; end: 1055861d7; -[CTPGRPCNetworkFeedsClient .cxx_destruct] */

void FUN_105586178(long param_1)

{
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



/* Entry: 1055861d8; end: 10558624b; -[UNISCCTPCreativeToolsFeedsService initWithUnifiedGrpcService:] */

undefined1 * FUN_1055861d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9048;
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



/* Entry: 10558624c; end: 10558632f; -[UNISCCTPCreativeToolsFeedsService feedRequestWithRequest:callOptionsBuilder:handler:] */

void FUN_10558624c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126baf50;
  _objc_opt_class(PTR_PTR_1126baf50);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110deb438,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105586330; end: 1055863ff; -[UNISCCTPCreativeToolsFeedsService feedBidiStreamWithOptionsBuilder:eventHandler:] */

void FUN_105586330(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b8580;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126baf58;
  _objc_opt_class(PTR_PTR_1126baf58);
  func_0x00010c0199c0(puVar1,param_2,param_4,puVar2);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf19be0(uVar3,param_2,&PTR____CFConstantStringClassReference_110deb458,param_3,puVar1)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b8590;
  _objc_alloc(PTR_PTR_1126b8590);
  func_0x00010c0199a0();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105586400; end: 10558640b; -[UNISCCTPCreativeToolsFeedsService .cxx_destruct] */

void FUN_105586400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10558640c; end: 1055864f3;  */

void FUN_10558640c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  FUN_10558d868();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d3c80();
  _objc_release(param_1);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c106d20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110deb478);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1,param_2,puVar5,&PTR____CFConstantStringClassReference_110dbeff8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055864f4; end: 105586587;  */

void FUN_1055864f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126baf48;
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain();
    _objc_alloc_init(puVar2);
    lVar1 = param_1;
    func_0x00010c0b6e20(param_1);
    func_0x00010c1c1ac0(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010c0ce7c0(param_1);
    func_0x00010c1c84a0(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010c0f5760(param_1);
    _objc_release(param_1);
    func_0x00010c1d97e0(puVar2,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105586588; end: 1055866cf;  */

undefined *
FUN_105586588(undefined *param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
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
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar5 = param_1;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126ae740;
    _objc_alloc_init();
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain(param_1);
    param_4 = auStack_d8;
    param_5 = 0x10;
    puVar1 = param_1;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar6 = *plStack_110;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_110 != lVar6) {
            _objc_enumerationMutation(param_1);
          }
          uVar2 = *(undefined8 *)(lStack_118 + (long)puVar7 * 8);
          func_0x00010c2827c0(uVar2);
          puVar3 = PTR_PTR_1126bae00;
          func_0x00010c1190a0(PTR_PTR_1126bae00,param_2,uVar2);
          func_0x00010befc800(puVar5,param_2,puVar3);
          puVar7 = puVar7 + 1;
        } while (puVar1 != puVar7);
        param_4 = auStack_d8;
        param_5 = 0x10;
        puVar1 = param_1;
        puVar4 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(param_1);
    param_3 = (undefined1 *)puVar4;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_1 != (undefined *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined1 **)(param_1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined1 **)(param_1 + 0x28) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1055866d0; end: 1055867cb; -[CTPGRPCUserDataFactory initWithUserIPInferredLocationServices:userAdIdProvider:bitmojiAvatarProvider:birthdayInfoProvider:locationProvider:] */

long FUN_1055866d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_4;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_5;
    _objc_release(uVar1);
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_6;
    _objc_release(uVar1);
    _objc_retain(param_7);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_7;
    _objc_release(uVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1055867cc; end: 10558681f; -[CTPGRPCUserDataFactory _timeZoneOffset] */

int FUN_1055867cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c1552e0();
  _objc_release(puVar1);
  return (int)((double)(long)puVar2 / 60.0);
}



/* Entry: 105586820; end: 105586aef; -[CTPGRPCUserDataFactory generateUserInfoWithCameos:] */

void FUN_105586820(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126baf60;
  _objc_alloc_init(PTR_PTR_1126baf60);
  func_0x00010becc040(param_3);
  func_0x00010c1d0c00(puVar1);
  puVar2 = PTR_PTR_1126baf68;
  _objc_alloc_init(PTR_PTR_1126baf68);
  uVar3 = *(undefined8 *)(param_3 + 8);
  func_0x00010bf534e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184960(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010bdc9960(param_3);
  func_0x00010c1664c0(puVar2);
  func_0x00010c1a2620(puVar2);
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5a40(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar5);
  func_0x00010c1a5ae0(puVar2);
  func_0x00010c215860(puVar2);
  puVar6 = PTR_PTR_1126afad0;
  _objc_alloc_init(PTR_PTR_1126afad0);
  func_0x00010c2038e0(puVar2);
  _objc_release(puVar6);
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c149400();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100576d08();
  _objc_release(uVar4);
  _objc_release(uVar5);
  puVar6 = puVar2;
  func_0x00010c23f300(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a85a0();
  _objc_release(puVar6);
  puVar6 = puVar2;
  func_0x00010c23f300(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0fe0();
  _objc_release(puVar6);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar7 = PTR_PTR_1126baf70;
  _objc_alloc_init(PTR_PTR_1126baf70);
  func_0x00010bf51c80(uVar4);
  func_0x00010c1b9520(puVar7);
  func_0x00010bf51c80(uVar4);
  func_0x00010c1c0e80(param_2,puVar7);
  func_0x00010bfe4080(uVar4);
  func_0x00010c1a9120(puVar7);
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uVar5 = uVar4;
  func_0x00010c2709c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f260(puVar6);
  func_0x00010c215e80(puVar7);
  _objc_release(uVar5);
  func_0x00010c1bf6c0(puVar2);
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105586af0; end: 105586b57; -[CTPGRPCUserDataFactory _ageOfUser] */

long FUN_105586af0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0xffffffff;
  }
  else {
    lVar1 = lVar2;
    func_0x00010befe7e0(lVar2);
  }
  _objc_release(lVar2);
  return lVar1;
}



/* Entry: 105586b58; end: 105586bab; -[CTPGRPCUserDataFactory .cxx_destruct] */

void FUN_105586b58(long param_1)

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



/* Entry: 105586bac; end: 105586edf;  */

void FUN_105586bac(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252ee0();
  uVar2 = param_3;
  func_0x00010bf98fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    _objc_retain(param_1);
    puVar4 = param_1;
    func_0x00010bf1f440();
    puVar3 = PTR_PTR_1126ae790;
    ppuVar1 = &PTR____CFConstantStringClassReference_110deb4f8;
    if ((int)puVar4 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110deb4d8;
    }
    _objc_retain(ppuVar1);
    _objc_alloc(puVar3);
    func_0x00010c021520();
    puVar4 = param_1;
    func_0x000105586dc8(param_1,ppuVar1,0,puVar3,0,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    _objc_release(param_2);
    _objc_release(param_1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105586ee0; end: 1055875b7;  */

void FUN_105586ee0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c021520();
  uVar2 = param_1;
  func_0x000105586dc8(param_1,&PTR____CFConstantStringClassReference_110deb538,0,puVar1,0,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1055875b8; end: 105587743;  */

void FUN_1055875b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c25d780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b5020(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ca40();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x28);
  if ((uVar2 == 0) || (func_0x00010c08fa60(), uVar2 < 2)) {
    func_0x00010c196320(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  func_0x00010c1eeba0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf56360(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105587744; end: 1055878f3; -[CTPGRPCNetworkItemsClient initWithUnifiedGRPCClientFactory:itemTransformer:circumstanceEngine:requestFactory:userDataFactory:adConfigProvider:networkConnectivityAnnouncer:] */

undefined1 *
FUN_105587744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  puStack_58 = PTR_PTR_1126e9050;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x000105586f90(param_5,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x0001055870f0(param_5,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 1055878f4; end: 1055878fb; -[CTPGRPCNetworkItemsClient deprecated_cameoItemsWithSession:] */

void FUN_1055878f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfad50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__deprecated_cameoItemsWithSessio_11255c4f0,param_3,1);
  return;
}



/* Entry: 1055878fc; end: 105587923; -[CTPGRPCNetworkItemsClient rawItemsForComputeFeedWithEndpoint:withBackendPrivateData:feedType:cachedItems:] */

void FUN_1055878fc(void)

{
  func_0x00010c120260();
  return;
}



/* Entry: 105587924; end: 105587ffb; -[CTPGRPCNetworkItemsClient rawItemsForComputeFeedWithEndpoint:withBackendPrivateData:feedType:cachedItems:pageToken:pageSizeOverride:usePaging:] */

void FUN_105587924(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,long param_8,char param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126baf78;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bff4000();
  func_0x00010c16e2e0(puVar2);
  _objc_release(puVar3);
  if (param_5 < 0x15) {
    if (param_5 != 0xc) {
      if (param_5 == 0x11) {
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010bfc0680();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126baf38;
        _objc_alloc_init();
        func_0x00010c21e7c0();
        puVar11 = PTR_PTR_1126b7d78;
        _objc_alloc();
        func_0x00010bff1280();
        puVar5 = PTR_PTR_1126baf80;
        _objc_alloc_init();
        puVar6 = puVar11;
        func_0x00010bef4a40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c164240(puVar5);
        _objc_release();
        func_0x00010558dbe0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bf529e0();
        if (puVar7 != (undefined *)0x0) {
          puVar7 = PTR_PTR_1126baf88;
          _objc_alloc_init(PTR_PTR_1126baf88);
          func_0x00010c189fc0(puVar5);
          _objc_release(puVar7);
          _objc_retain(puVar6);
          puVar7 = puVar6;
          func_0x00010bf52a60();
          lVar10 = lRam0000000000000000;
          while (puVar7 != (undefined *)0x0) {
            puVar14 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar10) {
                _objc_enumerationMutation(puVar6);
              }
              uVar16 = *(undefined8 *)((long)puVar14 * 8);
              puVar8 = puVar5;
              func_0x00010bf66160(puVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c282800(uVar16);
              func_0x00010befc800(puVar8);
              _objc_release(puVar8);
              puVar14 = puVar14 + 1;
            } while (puVar7 != puVar14);
            puVar7 = puVar6;
            func_0x00010bf52a60();
          }
          _objc_release(puVar6);
        }
        func_0x00010c19c420(puVar3);
        func_0x00010c1ebf20(puVar2);
        puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        lVar9 = param_6;
        func_0x00010c0b8620();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar10 != 0) {
          lVar13 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar9);
            }
            uVar15 = *(undefined8 *)(lVar13 * 8);
            puVar14 = PTR_PTR_1126baf90;
            _objc_alloc_init(PTR_PTR_1126baf90);
            puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
            _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
            uVar16 = uVar15;
            func_0x00010c0844e0(uVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bff6b20(puVar8);
            func_0x00010c1a99c0(puVar14);
            _objc_release(puVar8);
            _objc_release(uVar16);
            func_0x00010c298be0(uVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067ec0();
            func_0x00010c220e20(puVar14);
            _objc_release(uVar15);
            func_0x00010befa120(puVar7);
            _objc_release(puVar14);
            lVar13 = lVar13 + 1;
          } while (lVar10 != lVar13);
          lVar10 = lVar9;
          func_0x00010bf52a60();
        }
        func_0x00010c175480(puVar2);
        _objc_release(lVar9);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar11);
        _objc_release(puVar3);
        _objc_release(uVar4);
      }
      goto LAB_105587e14;
    }
    puVar11 = PTR_PTR_1126baf38;
    _objc_opt_new(PTR_PTR_1126baf38);
    puVar3 = PTR_PTR_1126baf98;
    _objc_opt_new(PTR_PTR_1126baf98);
    func_0x00010c178cc0(puVar11);
    func_0x00010c1ebf20(puVar2);
    _objc_release(puVar3);
  }
  else {
    if ((param_5 != 0x17) && (param_5 != 0x15)) goto LAB_105587e14;
    puVar11 = *(undefined **)(param_1 + 0x30);
    func_0x00010bfc0680(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126baf38;
    _objc_alloc_init(PTR_PTR_1126baf38);
    func_0x00010c21e7c0();
    func_0x00010c1ebf20(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(puVar11);
LAB_105587e14:
  puVar3 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  func_0x00010c1eeba0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  FUN_10558640c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar11);
  if (param_9 != '\0') {
    puVar11 = PTR_PTR_1126bafa0;
    _objc_opt_new(PTR_PTR_1126bafa0);
    if (param_8 != 0) {
      func_0x00010c067ec0(param_8);
      func_0x00010c1d8660(puVar11);
    }
    lVar10 = param_7;
    func_0x00010c08fa60();
    if (lVar10 != 0) {
      puVar5 = PTR_PTR_1126bafa8;
      _objc_opt_new(PTR_PTR_1126bafa8);
      func_0x00010c1d87c0();
      func_0x00010c1d87c0(puVar11);
      _objc_release(puVar5);
    }
    func_0x00010c1d8b20(puVar2);
    _objc_release(puVar11);
  }
  uVar4 = param_3;
  func_0x00010bfda7c0();
  if ((int)uVar4 != 0) {
    func_0x00010c16b5a0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar11 = PTR_PTR_1126bafb0;
  _objc_alloc(PTR_PTR_1126bafb0);
  func_0x00010c04f520();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126bacd0;
    _objc_retain(param_2);
    _objc_opt_class(puVar2);
    puVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    puVar11 = param_2;
    if (((ulong)puVar3 & 1) == 0) {
      puVar11 = (undefined *)0x0;
    }
    _objc_retain(puVar11);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105587ffc; end: 105588057;  */

void FUN_105587ffc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR_PTR_1126bacd0;
  _objc_retain(param_2);
  _objc_opt_class(puVar2);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105588058; end: 10558805f;  */

void FUN_105588058(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126bafc8;
  _objc_retain();
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_2);
  puVar7 = puVar1;
  func_0x00010c13ba40();
  if ((int)puVar7 == 2) {
    puVar7 = puVar1;
    func_0x00010c156ae0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010c156b20();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_105588f3c;
    puStack_b0 = &UNK_110898e08;
    _objc_retain(puVar1);
    puVar2 = puVar6;
    puStack_a8 = puVar1;
    func_0x000100504554(puVar6,&puStack_c8);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126bafd8;
    func_0x00010c156ac0(PTR_PTR_1126bafd8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puStack_a8;
  }
  else {
    puVar6 = (undefined *)0x0;
    if ((int)puVar7 != 3) goto LAB_10558837c;
    puVar7 = puVar1;
    func_0x00010bfb2700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bf97000();
    _objc_release(puVar7);
    puVar7 = puVar1;
    func_0x00010bfb2700(puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puVar6 = puVar7;
      func_0x00010c084fe0();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_105588e94;
      puStack_88 = &UNK_110898dd8;
      _objc_retain(puVar1);
      puVar2 = puVar6;
      puStack_80 = puVar1;
      func_0x000100504554(puVar6,&puStack_a0);
      _objc_release(puVar6);
      _objc_release(puVar7);
      puVar7 = puStack_80;
    }
    else {
      puVar6 = puVar7;
      func_0x00010bf96fe0();
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105588ccc;
      puStack_60 = &UNK_110898da8;
      _objc_retain(puVar1);
      puVar2 = puVar6;
      puStack_58 = puVar1;
      func_0x000100504554(puVar6,&puStack_78);
      _objc_release(puVar6);
      _objc_release(puVar7);
      puVar7 = puStack_58;
    }
    _objc_release(puVar7);
    puVar6 = puVar1;
    func_0x00010bfb2700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfd9f80();
    if ((int)puVar7 == 0) {
      puVar7 = (undefined *)0x0;
LAB_105588344:
      _objc_release(puVar6);
    }
    else {
      puVar7 = puVar1;
      func_0x00010bfb2700();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar7;
      func_0x00010c0f1e20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0f1e20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c08fa60();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar7);
      _objc_release(puVar6);
      if (puVar5 != (undefined *)0x0) {
        puVar6 = puVar1;
        func_0x00010bfb2700(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar6;
        func_0x00010c0f1e20();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c0f1e20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        goto LAB_105588344;
      }
      puVar7 = (undefined *)0x0;
    }
    puVar6 = PTR_PTR_1126bafd8;
    func_0x00010bfb26e0(PTR_PTR_1126bafd8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar7);
  _objc_release(puVar2);
LAB_10558837c:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105588060; end: 1055883ab;  */

void FUN_105588060(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126bafc8;
  _objc_retain();
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_1);
  puVar7 = puVar1;
  func_0x00010c13ba40();
  if ((int)puVar7 == 2) {
    puVar7 = puVar1;
    func_0x00010c156ae0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010c156b20();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_105588f3c;
    puStack_b0 = &UNK_110898e08;
    _objc_retain(puVar1);
    puVar2 = puVar6;
    puStack_a8 = puVar1;
    func_0x000100504554(puVar6,&puStack_c8);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126bafd8;
    func_0x00010c156ac0(PTR_PTR_1126bafd8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puStack_a8;
  }
  else {
    puVar6 = (undefined *)0x0;
    if ((int)puVar7 != 3) goto LAB_10558837c;
    puVar7 = puVar1;
    func_0x00010bfb2700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bf97000();
    _objc_release(puVar7);
    puVar7 = puVar1;
    func_0x00010bfb2700(puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puVar6 = puVar7;
      func_0x00010c084fe0();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_105588e94;
      puStack_88 = &UNK_110898dd8;
      _objc_retain(puVar1);
      puVar2 = puVar6;
      puStack_80 = puVar1;
      func_0x000100504554(puVar6,&puStack_a0);
      _objc_release(puVar6);
      _objc_release(puVar7);
      puVar7 = puStack_80;
    }
    else {
      puVar6 = puVar7;
      func_0x00010bf96fe0();
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105588ccc;
      puStack_60 = &UNK_110898da8;
      _objc_retain(puVar1);
      puVar2 = puVar6;
      puStack_58 = puVar1;
      func_0x000100504554(puVar6,&puStack_78);
      _objc_release(puVar6);
      _objc_release(puVar7);
      puVar7 = puStack_58;
    }
    _objc_release(puVar7);
    puVar6 = puVar1;
    func_0x00010bfb2700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfd9f80();
    if ((int)puVar7 == 0) {
      puVar7 = (undefined *)0x0;
LAB_105588344:
      _objc_release(puVar6);
    }
    else {
      puVar7 = puVar1;
      func_0x00010bfb2700();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar7;
      func_0x00010c0f1e20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0f1e20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c08fa60();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar7);
      _objc_release(puVar6);
      if (puVar5 != (undefined *)0x0) {
        puVar6 = puVar1;
        func_0x00010bfb2700(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar6;
        func_0x00010c0f1e20();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c0f1e20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        goto LAB_105588344;
      }
      puVar7 = (undefined *)0x0;
    }
    puVar6 = PTR_PTR_1126bafd8;
    func_0x00010bfb26e0(PTR_PTR_1126bafd8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar7);
  _objc_release(puVar2);
LAB_10558837c:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1055883ac; end: 10558844b; -[CTPGRPCNetworkItemsClient ctpItemFromRawResponse:] */

void FUN_1055883ac(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b0cb8;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010c008360();
    _objc_release(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c084460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10558844c; end: 1055885e7; -[CTPGRPCNetworkItemsClient _deprecated_cameoItemsWithSession:shouldParseResponse:] */

void FUN_10558844c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf54f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1eeba0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  FUN_10558dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140(puVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126bafb0;
  _objc_alloc(PTR_PTR_1126bafb0);
  func_0x00010c04f520();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf63640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110deb798,uVar5,puVar2,
                      puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055885e8; end: 10558894b;  */

void FUN_1055885e8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  undefined *unaff_x28;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  code *pcStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined1 *puStack_2f8;
  undefined1 ***pppuStack_2f0;
  code *pcStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_2;
  _objc_retain(param_2);
  puVar11 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x18);
  _objc_retain(puVar11);
  puVar1 = PTR_PTR_1126bafe8;
  _objc_alloc();
  func_0x00010c008360();
  puVar13 = puVar1;
  func_0x00010c084fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar3 = puVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(puVar13);
  puVar2 = puVar13;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = (undefined *)0x0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(puVar13);
        }
        unaff_x26 = puVar3;
        func_0x00010c084460();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x26 != (undefined *)0x0) {
          func_0x00010befa120(puVar12);
        }
        _objc_release(unaff_x26);
        unaff_x28 = unaff_x28 + 1;
      } while (puVar2 != unaff_x28);
      puVar2 = puVar13;
      func_0x00010bf52a60();
      unaff_x25 = 0;
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar13);
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar13);
  _objc_release(puVar1);
  _objc_release(puVar11);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar10 = &uStack_260;
  uStack_138 = 0x1055887bc;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = lVar8;
  puStack_190 = unaff_x28;
  lStack_188 = unaff_x27;
  puStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  puStack_170 = puVar3;
  puStack_168 = puVar13;
  puStack_160 = puVar12;
  puStack_158 = puVar1;
  puStack_150 = puVar11;
  lStack_148 = param_2;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(lVar8);
  puVar1 = PTR_PTR_1126bafe8;
  _objc_alloc();
  func_0x00010c008360();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar12 = puVar1;
  func_0x00010c084fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar12;
  func_0x00010bf52a60();
  if (puVar11 != (undefined *)0x0) {
    unaff_x25 = *plStack_250;
    do {
      unaff_x26 = (undefined *)0x0;
      do {
        if (*plStack_250 != unaff_x25) {
          _objc_enumerationMutation(puVar12);
        }
        puVar3 = *(undefined **)(lStack_258 + (long)unaff_x26 * 8);
        func_0x00010bf63640();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 != (undefined *)0x0) {
          func_0x00010befa120(puVar2);
        }
        _objc_release(puVar3);
        unaff_x26 = unaff_x26 + 1;
      } while (puVar11 != unaff_x26);
      puVar11 = puVar12;
      puVar10 = &uStack_260;
      func_0x00010bf52a60();
      puVar13 = (undefined *)0x0;
    } while (puVar11 != (undefined *)0x0);
  }
  _objc_release(puVar12);
  puVar12 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar4 = lVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_268 = FUN_10558894c;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2c0 = unaff_x28;
  lStack_2b8 = unaff_x27;
  puStack_2b0 = unaff_x26;
  lStack_2a8 = unaff_x25;
  puStack_2a0 = puVar3;
  puStack_298 = puVar13;
  puStack_290 = puVar12;
  puStack_288 = puVar2;
  puStack_280 = puVar1;
  lStack_278 = lVar8;
  ppuStack_270 = &puStack_140;
  _objc_retain(puVar10);
  uVar5 = *(undefined8 *)(lVar4 + 0x30);
  lStack_2e0 = lVar4;
  func_0x00010bfc0680();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126baf38;
  _objc_alloc_init();
  uStack_2d8 = uVar5;
  func_0x00010c21e7c0();
  puVar1 = PTR_PTR_1126bafb8;
  _objc_alloc_init();
  func_0x00010c17f4c0();
  func_0x00010c186380(puVar1);
  puVar3 = PTR_PTR_1126bafc0;
  _objc_alloc_init();
  func_0x00010c1ec2e0();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  puVar12 = puVar3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_2d0 = puVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000();
  _objc_release(puVar11);
  _objc_release(puVar12);
  puVar11 = PTR_PTR_1126baf78;
  _objc_alloc_init();
  func_0x00010c19b200(puVar11);
  func_0x00010c1ebf20(puVar11);
  func_0x00010c1ebb40(puVar11);
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bff4000();
  func_0x00010c16e2e0(puVar11);
  _objc_release(puVar12);
  puVar6 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar6;
  func_0x00010c1eeba0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  FUN_10558640c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126bafb0;
  _objc_alloc();
  func_0x00010c04f520();
  uVar5 = *(undefined8 *)(lStack_2e0 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar11;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(puVar6);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar13);
  _objc_release(uStack_2d8);
  _objc_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar11 = PTR_PTR_1126bafc8;
  pcStack_2e8 = FUN_105588c4c;
  puStack_330 = puVar12;
  puStack_328 = puVar2;
  puStack_320 = puVar3;
  puStack_318 = puVar7;
  puStack_310 = puVar1;
  puStack_308 = puVar13;
  uStack_300 = uVar5;
  puStack_2f8 = (undefined1 *)puVar10;
  pppuStack_2f0 = &ppuStack_270;
  _objc_retain();
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(lVar9);
  puVar13 = puVar11;
  func_0x00010c13ba40();
  if ((int)puVar13 == 2) {
    puVar13 = puVar11;
    func_0x00010c156ae0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar13;
    func_0x00010c156b20();
    _objc_retainAutoreleasedReturnValue();
    puStack_3a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3a0 = 0xc2000000;
    pcStack_398 = FUN_105588f3c;
    puStack_390 = &UNK_110898e08;
    _objc_retain(puVar11);
    puVar3 = puVar1;
    puStack_388 = puVar11;
    func_0x000100504554(puVar1,&puStack_3a8);
    _objc_release(puVar1);
    _objc_release(puVar13);
    puVar12 = PTR_PTR_1126bafd8;
    func_0x00010c156ac0(PTR_PTR_1126bafd8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puStack_388;
LAB_10558836c:
    _objc_release(puVar13);
    _objc_release(puVar3);
  }
  else {
    puVar12 = (undefined *)0x0;
    if ((int)puVar13 == 3) {
      puVar13 = puVar11;
      func_0x00010bfb2700();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar13;
      func_0x00010bf97000();
      _objc_release(puVar13);
      puVar13 = puVar11;
      func_0x00010bfb2700(puVar11);
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 == (undefined *)0x0) {
        puVar1 = puVar13;
        func_0x00010c084fe0();
        _objc_retainAutoreleasedReturnValue();
        puStack_380 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_378 = 0xc2000000;
        pcStack_370 = FUN_105588e94;
        puStack_368 = &UNK_110898dd8;
        _objc_retain(puVar11);
        puVar3 = puVar1;
        puStack_360 = puVar11;
        func_0x000100504554(puVar1,&puStack_380);
        _objc_release(puVar1);
        _objc_release(puVar13);
        puVar13 = puStack_360;
      }
      else {
        puVar1 = puVar13;
        func_0x00010bf96fe0();
        _objc_retainAutoreleasedReturnValue();
        puStack_358 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_350 = 0xc2000000;
        pcStack_348 = FUN_105588ccc;
        puStack_340 = &UNK_110898da8;
        _objc_retain(puVar11);
        puVar3 = puVar1;
        puStack_338 = puVar11;
        func_0x000100504554(puVar1,&puStack_358);
        _objc_release(puVar1);
        _objc_release(puVar13);
        puVar13 = puStack_338;
      }
      _objc_release(puVar13);
      puVar1 = puVar11;
      func_0x00010bfb2700();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar1;
      func_0x00010bfd9f80();
      if ((int)puVar13 == 0) {
        puVar13 = (undefined *)0x0;
LAB_105588344:
        _objc_release(puVar1);
      }
      else {
        puVar13 = puVar11;
        func_0x00010bfb2700();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar13;
        func_0x00010c0f1e20();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar12;
        func_0x00010c0f1e20();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010c08fa60();
        _objc_release(puVar2);
        _objc_release(puVar12);
        _objc_release(puVar13);
        _objc_release(puVar1);
        if (puVar6 != (undefined *)0x0) {
          puVar1 = puVar11;
          func_0x00010bfb2700(puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar1;
          func_0x00010c0f1e20();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010c0f1e20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          goto LAB_105588344;
        }
        puVar13 = (undefined *)0x0;
      }
      puVar12 = PTR_PTR_1126bafd8;
      func_0x00010bfb26e0(PTR_PTR_1126bafd8);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10558836c;
    }
  }
  _objc_release(puVar11);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10558894c; end: 105588c4b; -[CTPGRPCNetworkItemsClient itemsForContextualComputeFeedWithEndpoint:withFeedType:requestContext:] */

void FUN_10558894c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  lStack_80 = param_1;
  func_0x00010bfc0680();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126baf38;
  _objc_alloc_init();
  uStack_78 = uVar1;
  func_0x00010c21e7c0();
  puVar2 = PTR_PTR_1126bafb8;
  _objc_alloc_init();
  func_0x00010c17f4c0();
  func_0x00010c186380(puVar2);
  puVar3 = PTR_PTR_1126bafc0;
  _objc_alloc_init();
  func_0x00010c1ec2e0();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  puVar5 = puVar3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000();
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126baf78;
  _objc_alloc_init();
  func_0x00010c19b200(puVar5);
  func_0x00010c1ebf20(puVar5);
  func_0x00010c1ebb40(puVar5);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bff4000();
  func_0x00010c16e2e0(puVar5);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c1eeba0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  FUN_10558640c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126bafb0;
  _objc_alloc();
  func_0x00010c04f520();
  uVar1 = *(undefined8 *)(lStack_80 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(uStack_78);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126bafc8;
  pcStack_88 = FUN_105588c4c;
  puStack_d0 = puVar8;
  puStack_c8 = puVar4;
  puStack_c0 = puVar3;
  puStack_b8 = puVar7;
  puStack_b0 = puVar2;
  puStack_a8 = puVar9;
  uStack_a0 = uVar1;
  uStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_2);
  puVar9 = puVar5;
  func_0x00010c13ba40();
  if ((int)puVar9 == 2) {
    puVar9 = puVar5;
    func_0x00010c156ae0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010c156b20();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_105588f3c;
    puStack_130 = &UNK_110898e08;
    _objc_retain(puVar5);
    puVar3 = puVar2;
    puStack_128 = puVar5;
    func_0x000100504554(puVar2,&puStack_148);
    _objc_release(puVar2);
    _objc_release(puVar9);
    puVar8 = PTR_PTR_1126bafd8;
    func_0x00010c156ac0(PTR_PTR_1126bafd8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puStack_128;
LAB_10558836c:
    _objc_release(puVar9);
    _objc_release(puVar3);
  }
  else {
    puVar8 = (undefined *)0x0;
    if ((int)puVar9 == 3) {
      puVar9 = puVar5;
      func_0x00010bfb2700();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar9;
      func_0x00010bf97000();
      _objc_release(puVar9);
      puVar9 = puVar5;
      func_0x00010bfb2700(puVar5);
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        puVar2 = puVar9;
        func_0x00010c084fe0();
        _objc_retainAutoreleasedReturnValue();
        puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_118 = 0xc2000000;
        pcStack_110 = FUN_105588e94;
        puStack_108 = &UNK_110898dd8;
        _objc_retain(puVar5);
        puVar3 = puVar2;
        puStack_100 = puVar5;
        func_0x000100504554(puVar2,&puStack_120);
        _objc_release(puVar2);
        _objc_release(puVar9);
        puVar9 = puStack_100;
      }
      else {
        puVar2 = puVar9;
        func_0x00010bf96fe0();
        _objc_retainAutoreleasedReturnValue();
        puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f0 = 0xc2000000;
        pcStack_e8 = FUN_105588ccc;
        puStack_e0 = &UNK_110898da8;
        _objc_retain(puVar5);
        puVar3 = puVar2;
        puStack_d8 = puVar5;
        func_0x000100504554(puVar2,&puStack_f8);
        _objc_release(puVar2);
        _objc_release(puVar9);
        puVar9 = puStack_d8;
      }
      _objc_release(puVar9);
      puVar2 = puVar5;
      func_0x00010bfb2700();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar2;
      func_0x00010bfd9f80();
      if ((int)puVar9 == 0) {
        puVar9 = (undefined *)0x0;
LAB_105588344:
        _objc_release(puVar2);
      }
      else {
        puVar9 = puVar5;
        func_0x00010bfb2700();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar9;
        func_0x00010c0f1e20();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010c0f1e20();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010c08fa60();
        _objc_release(puVar6);
        _objc_release(puVar4);
        _objc_release(puVar9);
        _objc_release(puVar2);
        if (puVar8 != (undefined *)0x0) {
          puVar2 = puVar5;
          func_0x00010bfb2700(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar2;
          func_0x00010c0f1e20();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar4;
          func_0x00010c0f1e20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          goto LAB_105588344;
        }
        puVar9 = (undefined *)0x0;
      }
      puVar8 = PTR_PTR_1126bafd8;
      func_0x00010bfb26e0(PTR_PTR_1126bafd8);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10558836c;
    }
  }
  _objc_release(puVar5);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105588c4c; end: 105588c53;  */

void FUN_105588c4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126bafc8;
  _objc_retain();
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_2);
  puVar7 = puVar1;
  func_0x00010c13ba40();
  if ((int)puVar7 == 2) {
    puVar7 = puVar1;
    func_0x00010c156ae0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010c156b20();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_105588f3c;
    puStack_b0 = &UNK_110898e08;
    _objc_retain(puVar1);
    puVar2 = puVar6;
    puStack_a8 = puVar1;
    func_0x000100504554(puVar6,&puStack_c8);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126bafd8;
    func_0x00010c156ac0(PTR_PTR_1126bafd8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puStack_a8;
  }
  else {
    puVar6 = (undefined *)0x0;
    if ((int)puVar7 != 3) goto LAB_10558837c;
    puVar7 = puVar1;
    func_0x00010bfb2700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bf97000();
    _objc_release(puVar7);
    puVar7 = puVar1;
    func_0x00010bfb2700(puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puVar6 = puVar7;
      func_0x00010c084fe0();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_105588e94;
      puStack_88 = &UNK_110898dd8;
      _objc_retain(puVar1);
      puVar2 = puVar6;
      puStack_80 = puVar1;
      func_0x000100504554(puVar6,&puStack_a0);
      _objc_release(puVar6);
      _objc_release(puVar7);
      puVar7 = puStack_80;
    }
    else {
      puVar6 = puVar7;
      func_0x00010bf96fe0();
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105588ccc;
      puStack_60 = &UNK_110898da8;
      _objc_retain(puVar1);
      puVar2 = puVar6;
      puStack_58 = puVar1;
      func_0x000100504554(puVar6,&puStack_78);
      _objc_release(puVar6);
      _objc_release(puVar7);
      puVar7 = puStack_58;
    }
    _objc_release(puVar7);
    puVar6 = puVar1;
    func_0x00010bfb2700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfd9f80();
    if ((int)puVar7 == 0) {
      puVar7 = (undefined *)0x0;
LAB_105588344:
      _objc_release(puVar6);
    }
    else {
      puVar7 = puVar1;
      func_0x00010bfb2700();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar7;
      func_0x00010c0f1e20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0f1e20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c08fa60();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar7);
      _objc_release(puVar6);
      if (puVar5 != (undefined *)0x0) {
        puVar6 = puVar1;
        func_0x00010bfb2700(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar6;
        func_0x00010c0f1e20();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c0f1e20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        goto LAB_105588344;
      }
      puVar7 = (undefined *)0x0;
    }
    puVar6 = PTR_PTR_1126bafd8;
    func_0x00010bfb26e0(PTR_PTR_1126bafd8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar7);
  _objc_release(puVar2);
LAB_10558837c:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105588c54; end: 105588ccb; -[CTPGRPCNetworkItemsClient .cxx_destruct] */

void FUN_105588c54(long param_1)

{
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



/* Entry: 105588ccc; end: 105588e93;  */

void FUN_105588ccc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf97340();
  puVar6 = PTR_PTR_1126bafd0;
  uVar3 = param_2;
  if ((int)uVar1 == 3) {
    func_0x00010bf27160(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3cba0(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c135700(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf15d80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010c156360(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf27480(puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((int)uVar1 != 2) {
      puVar6 = (undefined *)0x0;
      goto LAB_105588e6c;
    }
    func_0x00010bf5cc00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298be0(param_2);
    func_0x00010bf3cba0(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c135700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf15d80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c156360(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d7f80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_105588e6c:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105588e94; end: 105588f3b;  */

void FUN_105588e94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126bafd0;
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c135700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf15d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d7f80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105588f3c; end: 10558906b;  */

void FUN_105588f3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c13cf40(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10558906c;
  puStack_50 = &UNK_110898da8;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar2 = uVar1;
  uStack_48 = uVar4;
  func_0x000100504554(uVar1,&puStack_68);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126bafe0;
  _objc_alloc(PTR_PTR_1126bafe0);
  func_0x00010c08cc60();
  func_0x00010c156900();
  func_0x00010bf85520(param_2);
  func_0x00010c00c900(puVar3);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10558906c; end: 10558918b;  */

void FUN_10558906c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar6 = PTR_PTR_1126bafd0;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298be0(param_2);
  func_0x00010bf3cba0(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c135700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf15d80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c156360(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0d7f80(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}


