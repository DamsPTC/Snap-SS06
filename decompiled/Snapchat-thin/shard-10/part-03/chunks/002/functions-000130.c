/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f8b5a4; end: 107f8b5e3; -[SCSmartCarouselFilterArranger carouselSource] */

undefined8 FUN_107f8b5a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf46140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf32b40();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107f8b5e4; end: 107f8b5eb; -[SCSmartCarouselFilterArranger allFilters] */

void FUN_107f8b5e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c084fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_items_1125fee00);
  return;
}



/* Entry: 107f8b5ec; end: 107f8b613; -[SCSmartCarouselFilterArranger currentFilters] */

void FUN_107f8b5ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f8b614; end: 107f8b61b; -[SCSmartCarouselFilterArranger addListener:] */

void FUN_107f8b614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107f8b61c; end: 107f8b623; -[SCSmartCarouselFilterArranger removeListener:] */

void FUN_107f8b61c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107f8b624; end: 107f8b64b; -[SCSmartCarouselFilterArranger orderDidCompleteObservable] */

void FUN_107f8b624(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f8b64c; end: 107f8b673; -[SCSmartCarouselFilterArranger loadCompleteObservable] */

void FUN_107f8b64c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f8b674; end: 107f8b69b; -[SCSmartCarouselFilterArranger orderBatchUpdateRunningObservable] */

void FUN_107f8b674(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f8b69c; end: 107f8b717; -[SCSmartCarouselFilterArranger toolFilterConfigs] */

void FUN_107f8b69c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c273680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000100504554();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f8b718; end: 107f8b727;  */

void FUN_107f8b718(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),
             PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 107f8b728; end: 107f8b777; -[SCSmartCarouselFilterArranger toolFilterNames] */

void FUN_107f8b728(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + 0x18);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f8b778; end: 107f8b96b; -[SCSmartCarouselFilterArranger applyToolFilterName:config:lensSource:lensType:] */

void FUN_107f8b778(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071d00();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar3;
      _objc_release(uVar10);
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar3;
      _objc_release(uVar10);
    }
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,param_4,param_3);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    lVar4 = param_3;
    func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110db3638);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      puVar3 = PTR_PTR_1126d8958;
      _objc_alloc_init(PTR_PTR_1126d8958);
      puVar6 = puVar3;
      func_0x00010c2b2880();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c2b2ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c2b2d60();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar9,lVar5);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar3);
    }
    param_1 = param_1 + 0x80;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfad820();
    _objc_release(param_1);
    _objc_release(lVar5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f8b96c; end: 107f8ba9b; -[SCSmartCarouselFilterArranger unapplyToolFilterName:] */

void FUN_107f8b96c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,0,param_3);
    lVar2 = param_3;
    func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110db3638);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      lVar2 = param_1;
      func_0x00010c0955a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c095540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar4;
      func_0x00010bfe6360(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65b20();
      _objc_release(lVar2);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,0,lVar3);
      _objc_release(lVar4);
    }
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    param_1 = param_1 + 0x80;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfad8a0();
    _objc_release(param_1);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f8ba9c; end: 107f8bac3; -[SCSmartCarouselFilterArranger toolLensesMap] */

void FUN_107f8ba9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f8bac4; end: 107f8badb; -[SCSmartCarouselFilterArranger delegate] */

void FUN_107f8bac4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f8badc; end: 107f8bae7; -[SCSmartCarouselFilterArranger setDelegate:] */

void FUN_107f8badc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 107f8bae8; end: 107f8baff; -[SCSmartCarouselFilterArranger swipeStateDataSource] */

void FUN_107f8bae8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f8bb00; end: 107f8bb0b; -[SCSmartCarouselFilterArranger setSwipeStateDataSource:] */

void FUN_107f8bb00(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 107f8bb0c; end: 107f8bb13; -[SCSmartCarouselFilterArranger loggingParameters] */

undefined8 FUN_107f8bb0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107f8bb14; end: 107f8bb1b; -[SCSmartCarouselFilterArranger setLoggingParameters:] */

void FUN_107f8bb14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107f8bb1c; end: 107f8bb23; -[SCSmartCarouselFilterArranger filterVisualNamesProvider] */

undefined8 FUN_107f8bb1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107f8bb24; end: 107f8bb2b; -[SCSmartCarouselFilterArranger stackingManager] */

undefined8 FUN_107f8bb24(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107f8bb2c; end: 107f8bb33; -[SCSmartCarouselFilterArranger shouldIgnoreUCOFilter] */

undefined1 FUN_107f8bb2c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x78);
}



/* Entry: 107f8bb34; end: 107f8bb3b; -[SCSmartCarouselFilterArranger setShouldIgnoreUCOFilter:] */

void FUN_107f8bb34(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 107f8bb3c; end: 107f8bc6f; -[SCSmartCarouselFilterArranger .cxx_destruct] */

void FUN_107f8bb3c(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 107f8bc70; end: 107f8bceb; -[SCSmartCarouselStackingManager init] */

undefined1 * FUN_107f8bc70(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fbe88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107f8bcec; end: 107f8bdb3; -[SCSmartCarouselStackingManager stackFilterItem:] */

void FUN_107f8bcec(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c06cd40();
  if ((int)lVar4 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = param_3;
    _objc_release(uVar1);
  }
  lVar4 = param_3;
  func_0x00010bfae5a0();
  if (lVar4 == 7) {
    lVar4 = 0x10;
  }
  else {
    lVar2 = param_3;
    func_0x00010bfae5a0();
    lVar4 = 0x10;
    if (lVar2 != 6) {
      lVar4 = 8;
    }
  }
  func_0x00010befa120(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
  lVar2 = param_1;
  _objc_opt_class();
  func_0x00010c246ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d3c80();
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = lVar3;
  _objc_release(uVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f8bdb4; end: 107f8be0f; -[SCSmartCarouselStackingManager unstackFilterItem:] */

void FUN_107f8bdb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c06cd40();
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
  }
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f8be10; end: 107f8be43; -[SCSmartCarouselStackingManager stackedFilterCount] */

long FUN_107f8be10(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0(lVar1);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0(lVar2);
  return lVar2 + lVar1;
}



/* Entry: 107f8be44; end: 107f8be8f; -[SCSmartCarouselStackingManager explicitlyStackedFilters] */

void FUN_107f8be44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c24d2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f8be90; end: 107f8beaf;  */

bool FUN_107f8be90(undefined8 param_1,long param_2)

{
  func_0x00010c24d220(param_2);
  return param_2 != 0xb;
}



/* Entry: 107f8beb0; end: 107f8beeb; -[SCSmartCarouselStackingManager hasStackedMediaFilter] */

bool FUN_107f8beb0(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    bVar1 = *(long *)(param_1 + 0x18) != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 107f8beec; end: 107f8bf53; -[SCSmartCarouselStackingManager clear] */

void FUN_107f8beec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bfb2040(lVar1,param_2,&PTR___NSConcreteGlobalBlock_110a15c38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar2);
  if (lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f8bf54; end: 107f8bf73;  */

bool FUN_107f8bf54(undefined8 param_1,long param_2)

{
  func_0x00010c24d220(param_2);
  return param_2 == 0xb;
}



/* Entry: 107f8bf74; end: 107f8c14b; -[SCSmartCarouselStackingManager stackedFilterNameForType:] */

void FUN_107f8bf74(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_3 == (undefined *)0x6) || (param_3 == (undefined *)0x0)) {
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    lStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    plStack_190 = (long *)0x0;
    lVar3 = *(long *)(param_1 + 0x10);
    _objc_retain(lVar3);
    lVar1 = lVar3;
    func_0x00010bf52a60(lVar3,param_2,&uStack_1a0,auStack_d8,0x10);
    if (lVar1 != 0) {
      lVar5 = *plStack_190;
      do {
        lVar6 = 0;
        do {
          if (*plStack_190 != lVar5) {
            _objc_enumerationMutation(lVar3);
          }
          puVar4 = *(undefined **)(lStack_198 + lVar6 * 8);
          puVar2 = puVar4;
          func_0x00010bfae5a0();
          if (puVar2 == param_3) goto LAB_107f8c0f4;
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        lVar1 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_1a0,auStack_d8,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(lVar3);
  }
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 8);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_1e0,auStack_158,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_1d0;
    do {
      lVar6 = 0;
      do {
        if (*plStack_1d0 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        puVar4 = *(undefined **)(lStack_1d8 + lVar6 * 8);
        puVar2 = puVar4;
        func_0x00010bfae5a0();
        if (puVar2 == param_3) goto LAB_107f8c0f4;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_1e0,auStack_158,0x10);
    } while (lVar1 != 0);
  }
  puVar4 = (undefined *)0x0;
LAB_107f8c108:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                        *(undefined8 *)(lVar3 + 8));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
LAB_107f8c0f4:
  func_0x00010bfae180();
  _objc_retainAutoreleasedReturnValue();
  goto LAB_107f8c108;
}



/* Entry: 107f8c14c; end: 107f8c18f; -[SCSmartCarouselStackingManager stackedFilterItems] */

void FUN_107f8c14c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      *(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f8c190; end: 107f8c1a3; +[SCSmartCarouselStackingManager sortedPreviewFilterItems:] */

void FUN_107f8c190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c246d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sortedArrayWithOptions_usingComp_11266f570,0x10,
             &PTR___NSConcreteGlobalBlock_110a15c78);
  return;
}



/* Entry: 107f8c1a4; end: 107f8c22f;  */

ulong FUN_107f8c1a4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c2bef60();
  lVar2 = param_3;
  func_0x00010c2bef60();
  if (lVar1 < lVar2) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    lVar1 = param_2;
    func_0x00010c2bef60(param_2);
    lVar2 = param_3;
    func_0x00010c2bef60(param_3);
    uVar3 = (ulong)(lVar2 < lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 107f8c230; end: 107f8c237; -[SCSmartCarouselStackingManager stackedOverlayFilters] */

undefined8 FUN_107f8c230(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f8c238; end: 107f8c267; -[SCSmartCarouselStackingManager setStackedOverlayFilters:] */

void FUN_107f8c238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f8c268; end: 107f8c26f; -[SCSmartCarouselStackingManager stackedMediaFilters] */

undefined8 FUN_107f8c268(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f8c270; end: 107f8c29f; -[SCSmartCarouselStackingManager setStackedMediaFilters:] */

void FUN_107f8c270(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f8c2a0; end: 107f8c2a7; -[SCSmartCarouselStackingManager stackedAutoStackFilterItem] */

undefined8 FUN_107f8c2a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f8c2a8; end: 107f8c2e3; -[SCSmartCarouselStackingManager .cxx_destruct] */

void FUN_107f8c2a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f8c2e4; end: 107f8c3d3; -[SCSmartCarouselSwipeOrder initWithCarouselGroupConfigParser:enforceLimits:] */

undefined1 *
FUN_107f8c2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fbe90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = 0;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    puVar2 = PTR_PTR_1126d8928;
    func_0x00010c27fae0(PTR_PTR_1126d8928);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3c400(0x7f7fffff,puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f8c3d4; end: 107f8c407; -[SCSmartCarouselSwipeOrder filterAtCarouselIndex:] */

void FUN_107f8c3d4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar2 = uVar3;
  func_0x00010bf529e0();
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = param_3 / uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar3,PTR_s_objectAtIndexedSubscript__112615968,param_3 - uVar1 * uVar2);
  return;
}



/* Entry: 107f8c408; end: 107f8c40b; -[SCSmartCarouselSwipeOrder objectAtIndexedSubscript:] */

void FUN_107f8c408(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfad990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_filterAtCarouselIndex__1125c9008);
  return;
}



/* Entry: 107f8c40c; end: 107f8c423; -[SCSmartCarouselSwipeOrder items] */

void FUN_107f8c40c(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f8c424; end: 107f8c42b; -[SCSmartCarouselSwipeOrder hasFilter:] */

void FUN_107f8c424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_containsObject__1125b07e8);
  return;
}



/* Entry: 107f8c42c; end: 107f8c433; -[SCSmartCarouselSwipeOrder count] */

void FUN_107f8c42c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107f8c434; end: 107f8c4e7; -[SCSmartCarouselSwipeOrder carouselIndexForFilterName:] */

ulong FUN_107f8c434(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar5 = 0;
    do {
      uVar2 = *(ulong *)(param_1 + 0x10);
      func_0x00010c0dfd40(uVar2,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bfae180();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c0720c0();
      _objc_release(uVar4);
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) goto LAB_107f8c4c8;
      uVar5 = uVar5 + 1;
      uVar4 = *(ulong *)(param_1 + 0x10);
      func_0x00010bf529e0();
    } while (uVar5 < uVar4);
  }
  uVar5 = 0x7fffffffffffffff;
LAB_107f8c4c8:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 107f8c4e8; end: 107f8c4ef; -[SCSmartCarouselSwipeOrder carouselIndexForFilter:] */

void FUN_107f8c4e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfecdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_indexOfObject__1125d8d40);
  return;
}



/* Entry: 107f8c4f0; end: 107f8c52f; -[SCSmartCarouselSwipeOrder removeFilter:] */

void FUN_107f8c4f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf32860();
  if (lVar1 == 0x7fffffffffffffff) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12c690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeFilterAtCarouselIndex__112628bc0,lVar1)
  ;
  return;
}



/* Entry: 107f8c530; end: 107f8c57f; -[SCSmartCarouselSwipeOrder removeFilterAtCarouselIndex:] */

/* WARNING: Possible PIC construction at 0x000107f8c55c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107f8c560) */

void FUN_107f8c530(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010c12d3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectAtIndex__112628f10,param_3);
    return;
  }
  return;
}



/* Entry: 107f8c580; end: 107f8c603; -[SCSmartCarouselSwipeOrder addFilter:] */

ulong FUN_107f8c580(float param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c081ec0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010bfd7180(param_2,param_3,param_4);
    if (((uVar1 & 1) != 0) ||
       (func_0x00010beec7e0(*(undefined8 *)(param_2 + 0x18),param_3,param_4), param_1 < 0.0)) {
      param_2 = 0xffffffffffffffff;
    }
    else {
      func_0x00010be3c400(param_2,param_3,param_4);
    }
  }
  else {
    param_2 = 0x8000000000000000;
  }
  _objc_release(param_4);
  return param_2;
}



/* Entry: 107f8c604; end: 107f8c65f; -[SCSmartCarouselSwipeOrder clearAllFilters] */

void FUN_107f8c604(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR_PTR_1126d8928;
  func_0x00010c27fae0(PTR_PTR_1126d8928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3c400(0x7f7fffff,param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f8c660; end: 107f8c813; -[SCSmartCarouselSwipeOrder _insertFilter:absoluteScore:] */

ulong FUN_107f8c660(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar6 = param_1;
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_2 + 0x20);
    func_0x00010bf529e0();
    uVar7 = 1;
    if (1 < uVar2) {
      do {
        uVar3 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c0dfd40(uVar3,param_3,uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        uVar8 = uVar6;
        _objc_release(uVar3);
        if ((float)uVar6 < (float)param_1) break;
        if (((float)param_1 == (float)uVar6) &&
           (uVar2 = param_4, func_0x00010c073cc0(), (uVar2 & 1) == 0)) {
          uVar2 = param_4;
          func_0x00010bfae180();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = *(undefined8 *)(param_2 + 0x10);
          func_0x00010c0dfd40(uVar3,param_3,uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar3;
          func_0x00010bfae180();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          func_0x00010bf433a0(uVar2,param_3,uVar6);
          _objc_release(uVar6);
          _objc_release(uVar3);
          _objc_release(uVar2);
          if (uVar4 == 1) break;
        }
        uVar7 = uVar7 + 1;
        uVar2 = *(ulong *)(param_2 + 0x20);
        func_0x00010bf529e0();
        uVar6 = uVar8;
      } while (uVar7 < uVar2);
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c480(param_4,param_3,puVar5);
  _objc_release(puVar5);
  func_0x00010c066b00(*(undefined8 *)(param_2 + 0x10),param_3,param_4,uVar7);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066b00(uVar6,param_3,puVar5,uVar7);
  _objc_release(puVar5);
  _objc_release(param_4);
  return uVar7;
}



/* Entry: 107f8c814; end: 107f8c927;  */

undefined8 FUN_107f8c814(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x00010c06b660();
    if ((uVar1 & 1) != 0) {
      uVar3 = 6;
      goto LAB_107f8c90c;
    }
    uVar1 = param_1;
    func_0x00010c06d3a0();
    uVar2 = param_1;
    func_0x00010c073720();
    if ((int)uVar1 != 0) {
      if ((int)uVar2 == 0) {
        uVar3 = 2;
      }
      else {
        uVar1 = param_1;
        func_0x00010c280f00();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = 0xffffffffec934f6f;
        func_0x00010b79d9b8(0xffffffffec934f6f);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf4b900(uVar1,param_2,uVar3);
        _objc_release(uVar3);
        _objc_release(uVar1);
        uVar3 = 5;
        if ((uVar2 & 1) == 0) {
          uVar3 = 2;
        }
      }
      goto LAB_107f8c90c;
    }
    if ((uVar2 & 1) != 0) {
      uVar3 = 4;
      goto LAB_107f8c90c;
    }
    uVar1 = param_1;
    func_0x00010c073640();
    if ((uVar1 & 1) != 0) {
      uVar3 = 3;
      goto LAB_107f8c90c;
    }
    uVar1 = param_1;
    func_0x00010c280f40();
    if (uVar1 == 0xffffffffe258e046) {
      uVar3 = 1;
      goto LAB_107f8c90c;
    }
  }
  uVar3 = 0;
LAB_107f8c90c:
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 107f8c928; end: 107f8c92f; -[SCSmartCarouselSwipeOrder filterItems] */

undefined8 FUN_107f8c928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f8c930; end: 107f8c937; -[SCSmartCarouselSwipeOrder configParser] */

undefined8 FUN_107f8c930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f8c938; end: 107f8c967; -[SCSmartCarouselSwipeOrder setConfigParser:] */

void FUN_107f8c938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f8c968; end: 107f8c96f; -[SCSmartCarouselSwipeOrder enforceLimits] */

undefined1 FUN_107f8c968(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107f8c970; end: 107f8c977; -[SCSmartCarouselSwipeOrder setEnforceLimits:] */

void FUN_107f8c970(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107f8c978; end: 107f8c97f; -[SCSmartCarouselSwipeOrder scores] */

undefined8 FUN_107f8c978(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f8c980; end: 107f8c987; -[SCSmartCarouselSwipeOrder swipeOrderedFiltersSortedByScoreDescending] */

undefined1 FUN_107f8c980(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107f8c988; end: 107f8c98f; -[SCSmartCarouselSwipeOrder setSwipeOrderedFiltersSortedByScoreDescending:] */

void FUN_107f8c988(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 107f8c990; end: 107f8c9cb; -[SCSmartCarouselSwipeOrder .cxx_destruct] */

void FUN_107f8c990(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107f8c9cc; end: 107f8ca83; -[SCSwipeFilterViewLayoutGuide initWithSwipeFilterViewFrame:previewView:] */

undefined1 *
FUN_107f8c9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fbe98;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    uVar2 = param_7;
    func_0x000108cc6364(param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 107f8ca84; end: 107f8ca8f; -[SCSwipeFilterViewLayoutGuide updatePreviewCarouselView:] */

void FUN_107f8ca84(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107f8ca90; end: 107f8cb8f; -[SCSwipeFilterViewLayoutGuide previewCarouselPadding] */

double FUN_107f8ca90(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  dVar4 = 0.0;
  if (lVar1 != 0) {
    lVar1 = param_5 + 0x10;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      lVar2 = param_5 + 8;
      _objc_loadWeakRetained();
      lVar1 = lVar2;
      func_0x00010c110940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if (lVar1 == 0) {
        return 0.0;
      }
    }
    func_0x00010bf20c00(lVar1);
    lVar2 = param_5 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51460(param_1,param_2,param_3,param_4,lVar1,param_6,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    dVar4 = *(double *)(param_5 + 0x30) - param_2;
    _objc_release(lVar1);
  }
  return dVar4;
}



/* Entry: 107f8cb90; end: 107f8cbb7; -[SCSwipeFilterViewLayoutGuide .cxx_destruct] */

void FUN_107f8cb90(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107f8cbb8; end: 107f8cbbb; -[SCSmartSwipeFilterView smartSwipeFilterViewLogger] */

void FUN_107f8cbb8(void)

{
  return;
}



/* Entry: 107f8cbbc; end: 107f8cc37; -[SCSmartSwipeFilterView updateFilterSourceForSwipeForFilter:filterSource:] */

void FUN_107f8cbbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfae580(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c19c4e0(uVar1,param_2,param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f8cc38; end: 107f8cccf; -[SCSmartSwipeFilterView logNameForCurrentFilters] */

void FUN_107f8cc38(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x00010bf5ea20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010bf529e0();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dea818;
    _objc_retain(&PTR____CFConstantStringClassReference_110dea818);
  }
  else {
    ppuVar1 = param_1;
    func_0x00010c0b8600(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a15c98);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 107f8ccd0; end: 107f8ccd7;  */

void FUN_107f8ccd0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfae190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_filterName_1125c9208);
  return;
}



/* Entry: 107f8ccd8; end: 107f8cdd7; -[SCSmartSwipeFilterView logNameForCurrentFilterOfType:mediaFilterSubtype:] */

void FUN_107f8ccd8(undefined **param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar1 = param_1;
  func_0x00010bf5ea60();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 6) {
    if (param_4 == 3) {
      ppuVar2 = ppuVar1;
      func_0x00010bfda7c0(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110f275f8);
      if (((ulong)ppuVar2 & 1) != 0) goto LAB_107f8cd54;
    }
    else if ((param_4 != 2) ||
            (ppuVar2 = ppuVar1,
            func_0x00010bfda7c0(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110f275f8),
            ((ulong)ppuVar2 & 1) == 0)) goto LAB_107f8cd54;
    _objc_retain(&PTR____CFConstantStringClassReference_110f27658);
    _objc_release(ppuVar1);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f27658;
  }
LAB_107f8cd54:
  ppuVar2 = param_1;
  func_0x00010bf5eb00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = (undefined **)0x0;
  if ((ppuVar1 != (undefined **)0x0) && (ppuVar2 != (undefined **)0x0)) {
    _objc_opt_class(param_1);
    func_0x00010be563a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_1;
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 107f8cdd8; end: 107f8cddb; -[SCSmartSwipeFilterView logVisualFilterIsSeen] */

void FUN_107f8cdd8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a0410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_visualFilterIsSeen_112685b28);
  return;
}



/* Entry: 107f8cddc; end: 107f8ce6b; -[SCSmartSwipeFilterView attachmentWillOpenWithLensMetadata:] */

void FUN_107f8cddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c27e7e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf0d140(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f8ce6c; end: 107f8ceb3; -[SCSmartSwipeFilterView logAttachmentOpenedWithAttachmentClosesLensCarousel:] */

void FUN_107f8ce6c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if ((param_3 & 1) != 0) {
    return;
  }
  uVar1 = param_1;
  func_0x00010bfae020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c140(param_1,param_2,uVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f8ceb4; end: 107f8cefb; -[SCSmartSwipeFilterView logAttachmentClosedWithAttachmentClosesLensCarousel:] */

void FUN_107f8ceb4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if ((param_3 & 1) != 0) {
    return;
  }
  uVar1 = param_1;
  func_0x00010bfae020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c140(param_1,param_2,uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f8cefc; end: 107f8cf87; -[SCSmartSwipeFilterView updateViewingItemIfNecessary:displayed:] */

void FUN_107f8cefc(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfb1de0();
  if (lVar1 == -1) {
    lVar1 = param_1;
    func_0x00010c08a320(param_1);
    func_0x00010c19d6a0(param_1,param_2,lVar1);
  }
  uVar2 = param_3;
  func_0x00010c081ec0();
  if (((uVar2 & 1) == 0) && (uVar2 = param_3, func_0x00010c07a1a0(), (uVar2 & 1) == 0)) {
    if (param_4 == 0) {
      func_0x00010bec3bc0(param_1,param_2,param_3);
    }
    else {
      func_0x00010bec2140();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f8cf88; end: 107f8d167; -[SCSmartSwipeFilterView updateFilterItemDownloaded:] */

void FUN_107f8cf88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfae580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfae180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c0835e0();
  if (((int)uVar1 != 0) && (uVar1 = uVar3, func_0x00010c07f1e0(), (int)uVar1 != 0)) {
    uVar1 = param_1;
    func_0x00010bfad800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bfae180(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0a8940(uVar1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010be5a000(param_1,param_2,param_3,uVar4,uVar3);
    uVar1 = param_1;
    func_0x00010bdf46a0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfae580(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bfae180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_1,param_2,uVar1,uVar2);
    _objc_release(uVar2);
    _objc_release(param_1);
    func_0x00010c2519c0(uVar1,param_2,0);
    uVar2 = uVar3;
    func_0x00010c264ae0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c210680(uVar1,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010bfae360(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c480(uVar1,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010c08a320(uVar3);
    func_0x00010c1b8b40(uVar1,param_2,uVar2);
    _objc_release(uVar1);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f8d168; end: 107f8d323; -[SCSmartSwipeFilterView _startViewingIfNecessary:] */

void FUN_107f8d168(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bec9380(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bfae5a0();
  if (lVar6 == 7) {
    lVar2 = param_3;
    func_0x00010bfae180();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    lVar6 = 0;
  }
  uVar4 = uVar1;
  func_0x00010c0835e0();
  if ((uVar4 & 1) == 0) {
    uVar4 = param_1;
    func_0x00010bf09a80(param_1,param_2,param_3);
    func_0x00010c2519c0(uVar1,param_2,(uint)uVar4 ^ 1);
    lVar2 = param_3;
    func_0x00010bfae360(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c480(uVar1,param_2,lVar2);
    _objc_release(lVar2);
    uVar4 = param_1;
    func_0x00010c08a320(param_1);
    func_0x00010c1b8b40(uVar1,param_2,uVar4);
  }
  uVar4 = param_1;
  func_0x00010bfe8460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df0a0();
  _objc_release(uVar4);
  func_0x00010c091fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    func_0x00010c210680(uVar4,param_2,0);
  }
  else {
    uVar5 = uVar1;
    func_0x00010c264ae0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c210680(uVar4,param_2,uVar5);
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f8d324; end: 107f8d41b; -[SCSmartSwipeFilterView _swipeMetadataForFilterItem:] */

void FUN_107f8d324(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfae580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfae180(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010bdf46a0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfae580(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bfae180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_1,param_2,lVar3,uVar2);
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107f8d41c; end: 107f8d453; -[SCSmartSwipeFilterView _createSwipeMetadataForItem:] */

void FUN_107f8d41c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bfae5a0();
  ppuVar1 = &PTR_PTR_1126d8960;
  if (param_3 != 1) {
    ppuVar1 = &PTR_PTR_1126d8968;
  }
  _objc_opt_new(*ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f8d454; end: 107f8d93f; -[SCSmartSwipeFilterView _stopViewingIfNecessary:] */

void FUN_107f8d454(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfae580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfae180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 == 0) ||
     ((uVar1 = uVar3, func_0x00010c0835e0(), (uVar1 & 1) == 0 &&
      (uVar1 = uVar3, func_0x00010c079ba0(), (int)uVar1 == 0)))) goto LAB_107f8d914;
  func_0x00010c264e00(param_1);
  func_0x00010c2107c0(param_1);
  func_0x00010bf95b40(uVar3);
  uVar1 = param_1;
  func_0x00010bfae820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfae180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126d8960;
  _objc_retain(uVar3);
  _objc_opt_class(puVar5);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar5);
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126c3c80;
  if ((uVar2 & 1) != 0) {
    _objc_retain(uVar4);
    _objc_opt_class(puVar5);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar2 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar4);
    uVar6 = uVar2;
    func_0x00010c15a3e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2208a0(uVar3);
    _objc_release(uVar6);
    func_0x00010c15a400(uVar2);
    func_0x00010c220b20(uVar3);
    uVar6 = uVar2;
    func_0x00010c297c20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c220820(uVar3);
    _objc_release(uVar6);
  }
  uVar2 = param_1;
  func_0x00010bfad800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfae180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a8940(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar2);
  uVar6 = param_3;
  func_0x00010bfae5a0();
  puVar5 = PTR_PTR_1126c3c88;
  uVar2 = param_3;
  if (uVar6 == 0) {
    _objc_retain(uVar4);
    _objc_opt_class(puVar5);
    uVar7 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar6 = uVar4;
    if ((uVar7 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar4);
    func_0x00010bf32760(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c135700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be59800(param_1);
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(uVar7);
LAB_107f8d900:
    _objc_release(uVar2);
  }
  else {
    uVar6 = param_3;
    func_0x00010bfae5a0();
    puVar5 = PTR_PTR_1126c3c80;
    if (uVar6 == 1) {
      _objc_retain(uVar4);
      _objc_opt_class(puVar5);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      uVar2 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar4);
      uVar6 = param_3;
      func_0x00010c135700(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be59820(param_1);
      _objc_release(uVar6);
      uVar6 = uVar2;
      func_0x00010bfd47c0();
      if ((int)uVar6 != 0) {
        uVar6 = uVar2;
        func_0x00010bfc1380(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_3;
        func_0x00010c135700(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be59800(param_1);
        _objc_release(uVar7);
        _objc_release(uVar6);
      }
      goto LAB_107f8d900;
    }
    uVar6 = param_3;
    func_0x00010bfae5a0();
    if (uVar6 != 7) {
      func_0x00010bfae180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfae5a0(param_3);
      uVar6 = param_3;
      func_0x00010bf32760(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfcef60();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010c135700(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be597e0(param_1);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      goto LAB_107f8d900;
    }
    func_0x00010be5a000(param_1);
  }
  _objc_release(uVar1);
  _objc_release(uVar4);
LAB_107f8d914:
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f8d940; end: 107f8daa3; -[SCSmartSwipeFilterView logViewingEnded] */

void FUN_107f8d940(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bf5ea20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  _objc_release(lVar2);
  func_0x00010bfae580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      func_0x00010bf95b40(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c28c150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar3 + 0x20),PTR_s_updateViewingItemIfNecessary_dis_112680a78,param_2,
             0);
  return;
}



/* Entry: 107f8daa4; end: 107f8dab3;  */

void FUN_107f8daa4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28c150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateViewingItemIfNecessary_dis_112680a78,
             param_2,0);
  return;
}



/* Entry: 107f8dab4; end: 107f8dbbf; -[SCSmartSwipeFilterView logViewingPaused] */

void FUN_107f8dab4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  func_0x00010bfae580();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar2 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010c0f61a0(*(undefined8 *)(lStack_108 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf5ea20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  _objc_release(lVar1);
  return;
}



/* Entry: 107f8dbc0; end: 107f8dc33; -[SCSmartSwipeFilterView logViewingResumed] */

void FUN_107f8dbc0(undefined8 param_1)

{
  func_0x00010bf5ea20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  _objc_release(param_1);
  return;
}



/* Entry: 107f8dc34; end: 107f8dc43;  */

void FUN_107f8dc34(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28c150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateViewingItemIfNecessary_dis_112680a78,
             param_2,1);
  return;
}



/* Entry: 107f8dc44; end: 107f8e077; -[SCSmartSwipeFilterView _logSwipeEventForFilterItem:atIndex:filterType:metadata:carouselGroupName:requestId:] */

void FUN_107f8dc44(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d8970;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x00010bfae820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  _objc_opt_class();
  func_0x00010be563a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000108442914();
  func_0x00010c19bf40(puVar1);
  lVar5 = param_6;
  func_0x00010bfadfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_6;
    func_0x00010bfadfc0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c19c200(puVar1);
    _objc_release(lVar5);
  }
  lVar5 = param_6;
  func_0x00010bfae520();
  if (lVar5 != 0) {
    func_0x00010bfae520(param_6);
    func_0x00010c19c640(puVar1);
  }
  func_0x00010c19c460(puVar1);
  func_0x00010c19c2c0(puVar1);
  if ((long)uVar4 < 0xd) {
    if ((uVar4 != 0xb) && (uVar4 != 0xc)) goto LAB_107f8ddf0;
  }
  else if (uVar4 != 0xd) {
    if (uVar4 == 0xe) {
      func_0x00010c19c460(puVar1);
    }
    goto LAB_107f8ddf0;
  }
  func_0x00010c19c2c0(puVar1);
LAB_107f8ddf0:
  uVar4 = param_1;
  func_0x00010bf42a00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010bf5eb00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b38c0;
  _objc_opt_class(PTR_PTR_1126b38c0);
  uVar8 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar7);
  _objc_release(uVar4);
  if (((uVar8 & 1) != 0) && (uVar4 != 0)) {
    func_0x000108442be8(uVar2);
    func_0x00010c19c1c0(puVar1);
  }
  func_0x000108442868(uVar2);
  func_0x00010c19c760(puVar1);
  func_0x00010c0c6c20();
  func_0x00010c1c5440(puVar1);
  uVar4 = uVar6;
  func_0x00010c243340(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar1);
  _objc_release(uVar4);
  uVar4 = uVar6;
  func_0x00010bf31200(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar1);
  _objc_release(uVar4);
  func_0x00010be17e60(param_1);
  func_0x00010c176040(puVar1);
  func_0x00010be597a0(param_1);
  _objc_release(param_8);
  func_0x00010bfad800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0b3c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107fb4d24();
  _objc_release(uVar4);
  _objc_release(param_1);
  puVar7 = PTR_PTR_1126d88d8;
  func_0x00010c08fa60();
  func_0x00010c0c6c20(uVar6);
  func_0x00010c0a7a80(puVar7);
  _objc_release(param_7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f8e078; end: 107f8e8d7; -[SCSmartSwipeFilterView _logSwipeEventForGeoFilter:atIndex:metadata:isBackgroundFilter:carouselGroupName:requestId:] */

void FUN_107f8e078(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  double dVar12;
  
  _objc_retain(param_4);
  if (param_4 == 0) goto LAB_107f8e888;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  uVar1 = param_2;
  func_0x00010bf42a00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010bfc12a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c08a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126d8978;
  _objc_opt_new(PTR_PTR_1126d8978);
  uVar6 = param_4;
  func_0x00010bfadea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c040(puVar5);
  _objc_release(uVar6);
  uVar6 = param_4;
  func_0x00010bf93ae0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1955e0(puVar5);
  _objc_release(uVar6);
  func_0x00010bf8d300();
  func_0x00010c193f20(puVar5);
  func_0x00010c2837e0(param_4);
  func_0x00010c21c4a0(puVar5);
  func_0x00010c139b40(param_4);
  uVar6 = param_4;
  func_0x00010bfc12a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c08a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175300(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x00010c175540(param_1,puVar5);
  uVar6 = param_4;
  func_0x00010bfc12a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf26ce0();
  dVar12 = (double)(long)(uVar7 * 0x3c);
  func_0x00010c1afb60(puVar5);
  _objc_release(uVar6);
  uVar6 = param_4;
  func_0x00010bfc12a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a980();
  func_0x00010c1b1820(puVar5);
  _objc_release(uVar6);
  func_0x00010c226400(puVar5);
  uVar1 = param_2;
  func_0x00010bfc1540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210660(puVar5);
  _objc_release(uVar1);
  func_0x00010bfe4080(uVar4);
  func_0x00010c1bf720(puVar5);
  uVar1 = param_2;
  func_0x00010bfae580(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010bfadea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110ec9cb8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ec9cb8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfae3c0();
  func_0x00010c19c4e0(puVar5);
  _objc_release(uVar3);
  _objc_release(ppuVar8);
  _objc_release(uVar6);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf31200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar5);
  _objc_release(uVar1);
  func_0x00010c116000(uVar2);
  func_0x00010c1e3cc0(puVar5);
  func_0x00010be17e60(param_2);
  func_0x00010c176040(puVar5);
  uVar6 = param_4;
  func_0x00010c06d3a0();
  if ((uVar6 & 1) == 0) {
    uVar6 = param_4;
    func_0x00010c280f40();
    if (uVar6 == 0xffffffffe258e046) {
      func_0x00010c073640();
      goto LAB_107f8e498;
    }
  }
  else {
LAB_107f8e498:
    func_0x00010c1a2d00(puVar5);
  }
  puVar9 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010bfadea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49920(puVar9);
  _objc_release(uVar6);
  _objc_release(puVar9);
  func_0x00010c0c6c20();
  func_0x00010c1c5440(puVar5);
  uVar1 = uVar2;
  func_0x00010c243340(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar5);
  _objc_release(uVar1);
  func_0x00010c2b3080(uVar2);
  func_0x00010c226420(puVar5);
  uVar6 = param_4;
  func_0x00010bfc12a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf8b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1930a0(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x00010be597a0(param_2);
  _objc_release(param_9);
  puVar9 = PTR_PTR_1126d88d8;
  func_0x00010c08fa60();
  func_0x00010c0c6c20(uVar2);
  func_0x00010c0a7a80(puVar9);
  _objc_release(param_8);
  uVar1 = param_2;
  func_0x00010bfad800(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0b3c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107fb4d24();
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar10 = PTR_PTR_1126d0fe0;
  _objc_opt_new(PTR_PTR_1126d0fe0);
  uVar6 = param_4;
  func_0x00010bfadea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21bbe0(puVar10);
  _objc_release(uVar6);
  func_0x00010bdc54e0(param_2);
  func_0x00010c1a2dc0(puVar10);
  uVar6 = param_4;
  func_0x00010bf93ae0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195a40(puVar10);
  _objc_release(uVar6);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010c277000(param_6);
  _objc_release(param_6);
  func_0x00010c0df720(dVar12,puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a100(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210880(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar11);
  func_0x00010c1ac060(puVar10);
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19d580(puVar10);
  _objc_release(puVar9);
  func_0x00010c264e00(param_2);
  func_0x00010c1fcfa0(puVar10);
  puVar9 = PTR_PTR_1126b38a0;
  uVar6 = param_4;
  func_0x00010c2813a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2813c0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21bcc0(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar6);
  func_0x00010c281060(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar10;
  func_0x00010c2810a0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9460(param_2);
  _objc_release(puVar9);
  _objc_release(param_2);
  _objc_release(puVar10);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
LAB_107f8e888:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107f8e8d8; end: 107f8e917; -[SCSmartSwipeFilterView _adGeofilterTypeGtomGeofilterType:] */

undefined1 FUN_107f8e8d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = 2;
  if (param_3 != -0x77ad9bf7) {
    uVar1 = param_3 == -0x1da71fba;
  }
  uVar2 = 3;
  if (param_3 != -0x78339556) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 107f8e918; end: 107f8ed13; -[SCSmartSwipeFilterView _logSwipeEventForVenueFilter:atIndex:metadata:requestId:] */

void FUN_107f8e918(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126d8978;
  if (param_3 != 0) {
    _objc_retain(param_6);
    _objc_opt_new(puVar2);
    lVar3 = param_3;
    func_0x00010bfc1380(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfadea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c040(puVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar5 = PTR_PTR_1126d8960;
    _objc_retain(param_5);
    _objc_opt_class(puVar5);
    uVar6 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar5);
    uVar1 = param_5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    if (uVar1 != 0) {
      uVar6 = param_5;
      func_0x00010c298240(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010bfb1f60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c720(uVar6);
      _objc_release(lVar3);
      _objc_release(uVar6);
      uVar6 = param_5;
      func_0x00010c298240(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c15a3e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c720(uVar6);
      _objc_release(lVar3);
      _objc_release(uVar6);
    }
    uVar7 = param_1;
    func_0x00010bf42a00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    lVar3 = param_3;
    func_0x00010c297c20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220820(puVar2);
    _objc_release(lVar3);
    func_0x00010c15a400(param_3);
    func_0x00010c220b20(puVar2);
    lVar3 = param_3;
    func_0x00010c15a3e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c6c0(puVar2);
    _objc_release(lVar3);
    func_0x00010c1a2d00(puVar2);
    func_0x00010c0c6c20();
    func_0x00010c1c5440(puVar2);
    uVar7 = uVar8;
    func_0x00010c243340(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205660(puVar2);
    _objc_release(uVar7);
    uVar7 = uVar8;
    func_0x00010bf31200(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(puVar2);
    _objc_release(uVar7);
    func_0x00010c116000(uVar8);
    func_0x00010c1e3cc0(puVar2);
    func_0x00010bfd47c0(param_3);
    func_0x00010c226400(puVar2);
    func_0x00010be17e60(param_1);
    func_0x00010c176040(puVar2);
    func_0x00010be597a0(param_1);
    _objc_release(param_6);
    puVar5 = PTR_PTR_1126d88d8;
    func_0x00010c0c6c20(uVar8);
    func_0x00010c0a7a80(puVar5);
    func_0x00010bfad800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010c0b3c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107fb4d24();
    _objc_release(uVar7);
    _objc_release(param_1);
    _objc_release(uVar8);
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f8ed14; end: 107f8ef63; -[SCSmartSwipeFilterView _logSwipeEvent:atIndex:metadata:requestId:] */

void FUN_107f8ed14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010bf42a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c19c1a0(param_3,param_2,param_4);
  uVar1 = uVar2;
  func_0x00010c247520(uVar2);
  func_0x00010c206c40(param_3,param_2,uVar1);
  uVar1 = param_1;
  func_0x00010bfad800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c276560();
  func_0x00010c19c180(param_3,param_2,uVar3);
  _objc_release(uVar1);
  func_0x00010c277000(param_5);
  func_0x00010c222d20(param_3);
  func_0x00010c19bec0(param_3,param_2,1);
  uVar1 = param_1;
  func_0x00010c264e00(param_1);
  func_0x00010c2107a0(param_3,param_2,uVar1);
  uVar1 = uVar2;
  func_0x00010c23fb00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2057e0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  lVar4 = param_5;
  func_0x00010c130320(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c400(param_3,param_2,lVar4);
  _objc_release(lVar4);
  lVar4 = param_5;
  func_0x00010c08a320(param_5);
  func_0x00010c2105c0(param_3,param_2,lVar4);
  lVar4 = param_5;
  func_0x00010c268ec0(param_5);
  func_0x00010c211b80(param_3,param_2,lVar4);
  uVar1 = uVar2;
  func_0x00010c095800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc3e0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c1ebd20(param_3,param_2,param_6);
  _objc_release(param_6);
  lVar4 = param_5;
  func_0x00010bfae360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    lVar4 = param_5;
    func_0x00010bfae360(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c067fc0();
    func_0x00010c19c480((double)lVar5,param_3);
    _objc_release(lVar4);
  }
  func_0x00010c291500(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f8ef64; end: 107f8f3fb; -[SCSmartSwipeFilterView _logUcoEventsForItem:atIndex:metadata:] */

void FUN_107f8ef64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar2 = param_1;
  func_0x00010bf42a00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfad800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276560();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf32760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfc1680();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d8980;
  _objc_alloc();
  uVar6 = uVar3;
  func_0x00010c243340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  func_0x00010c247520();
  uVar7 = uVar3;
  func_0x00010c23fb00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08a320();
  func_0x00010c268ec0(param_5);
  func_0x00010be17e60();
  uVar8 = param_5;
  func_0x00010bfae360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c116000();
  func_0x00010c073cc0();
  func_0x00010c07f1e0();
  uVar9 = uVar3;
  func_0x00010bf09160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0486e0(puVar5);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = param_1;
  func_0x00010c27e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_5;
  func_0x00010c264ae0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264e80(param_5);
  func_0x00010c0b15e0(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar1 = PTR_PTR_1126d88d8;
  func_0x00010c08fa60();
  func_0x00010c0c6c20(uVar3);
  func_0x00010c0a7a80(puVar1);
  uVar6 = param_1;
  func_0x00010bfad800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0b3c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107fb4d24();
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar8 = param_5;
  func_0x00010c07f1e0();
  if ((uVar8 & 1) == 0) {
    func_0x00010c27e7e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010bfc1680(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_5;
    func_0x00010c251980(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_5;
    func_0x00010bf95b60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c264e80(param_5);
    func_0x00010bef94c0(uVar6);
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(param_1);
  }
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f8f3fc; end: 107f8f49b; -[SCSmartSwipeFilterView logCarouselArrangeHasNewFilter:config:] */

void FUN_107f8f3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfad800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b3c20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfae5a0(param_3);
  _objc_release(param_3);
  FUN_107fb4b24(uVar1,uVar2,param_4);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f8f49c; end: 107f8f4d7; -[SCSmartSwipeFilterView logIndexTotal] */

undefined8 FUN_107f8f49c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfad800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c276560();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107f8f4d8; end: 107f8f59b; -[SCSmartSwipeFilterView logTapCountForCurrentFilterWithType:] */

long FUN_107f8f4d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf5ea60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar3 = param_1;
    func_0x00010bfae580();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if (lVar2 != 0) {
      func_0x00010bfae580(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c268ec0();
      _objc_release(lVar2);
      _objc_release(param_1);
      goto LAB_107f8f580;
    }
  }
  lVar3 = 0;
LAB_107f8f580:
  _objc_release(lVar1);
  return lVar3;
}


