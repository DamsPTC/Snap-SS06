/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10678fce0; end: 10678fd0b; -[SCMemoriesContentFetcherImpl fetchGalleryEntriesWithRequest:] */

void FUN_10678fce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c099040(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be136f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__fetchRecentSnapEntriesWithLimit_112562758,param_3);
  return;
}



/* Entry: 10678fd0c; end: 10678fe43; -[SCMemoriesContentFetcherImpl observeRecentSnapEntriesWithLimit:] */

void FUN_10678fd0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,PTR____kCFBooleanTrue_11034ab68);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2519e0(uVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 10678fe44; end: 106790017;  */

void FUN_10678fe44(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar9 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be136e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  _objc_retain(lVar1);
  lVar3 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar3 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar1);
        }
        lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bfa7340();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_release(lVar4);
        if (lVar6 != 0) {
          puVar7 = PTR_PTR_1126cdd10;
          _objc_alloc(PTR_PTR_1126cdd10);
          func_0x00010c0101c0();
          func_0x00010befa120(puVar2,param_2,puVar7);
          _objc_release(puVar7);
        }
        _objc_release(lVar6);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar1;
      puVar9 = &uStack_130;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar1);
  puVar7 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar7 = PTR_PTR_1126af4c0;
    uVar8 = *(undefined8 *)(lVar1 + 0x38);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa9b00(puVar7,param_2,puVar9,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106790018; end: 10679007f; -[SCMemoriesContentFetcherImpl _fetchRecentSnapEntriesWithLimit:] */

void FUN_106790018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126af4c0;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa9b00(puVar2,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106790080; end: 106790293; -[SCMemoriesContentFetcherImpl _predicatesForFilters:referenceDate:endReferenceDate:] */

void FUN_106790080(undefined8 param_1,undefined8 param_2,uint param_3,undefined *param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  func_0x000108ebecc4(0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010befa160(puVar1);
  if (((param_3 & 1) != 0) && (param_4 != (undefined *)0x0)) {
    puVar6 = param_4;
    func_0x000108ebea08(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar6);
  }
  if (((param_4 != (undefined *)0x0) && ((param_3 >> 2 & 1) != 0)) && (param_5 != 0)) {
    puVar6 = param_4;
    func_0x000108ebeac0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x000108ebeb20(param_5,1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000108ebeac0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x000108ebebb0(puVar6,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar6);
  }
  if ((param_3 >> 1 & 1) != 0) {
    func_0x000108ebebe4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar6);
  }
  if ((param_3 >> 6 & 1) == 0) {
    if ((param_3 >> 7 & 1) != 0) {
      puVar6 = (undefined *)0x2;
      goto LAB_1067901e8;
    }
  }
  else {
    puVar6 = (undefined *)0x1;
LAB_1067901e8:
    func_0x000108ebee90(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar6);
  }
  if ((param_3 >> 3 & 1) == 0) {
    if ((param_3 >> 4 & 1) == 0) goto LAB_106790248;
    func_0x000108ebee58();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108ebebf8();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010befa120(puVar1);
  _objc_release(puVar6);
LAB_106790248:
  puVar6 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106790294; end: 1067902bf; -[SCMemoriesContentFetcherImpl _assetCollectionForSelfiesWithFilters:] */

void FUN_106790294(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 >> 5 & 1) != 0) {
    func_0x00010be12280();
    func_0x000108ebf144();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067902c0; end: 1067902ff; -[SCMemoriesContentFetcherImpl _fetchLimit] */

undefined8 FUN_1067902c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fb7e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106790300; end: 10679030f; -[SCMemoriesContentFetcherImpl _fetchLimitLazy] */

void FUN_106790300(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_map__11260bb98,
             &PTR___NSConcreteGlobalBlock_11093ae28);
  return;
}



/* Entry: 106790310; end: 10679033f;  */

void FUN_106790310(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fb7e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 106790340; end: 106790403; -[SCMemoriesContentFetcherImpl .cxx_destruct] */

void FUN_106790340(long param_1)

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



/* Entry: 106790404; end: 106790627; -[SCMemoriesContentFetcherServiceProvider _contentFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106790404(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  puVar1 = PTR_PTR_1126cdd20;
  _objc_alloc();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11274fd78;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar11;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_106790628();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11274fd80;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar12;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11274fd70;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11274fd84;
    _objc_loadWeakRetained(lVar14);
  }
  lVar8 = lVar14;
  func_0x00010c0cadc0(lVar14);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11274fd88;
    _objc_loadWeakRetained(lVar13);
  }
  lVar9 = lVar13;
  func_0x00010c0c8780(lVar13);
  _objc_retainAutoreleasedReturnValue();
  FUN_106790628();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035d60(puVar1,param_2,lVar2,lVar4,lVar5,lVar7,lVar8,lVar9,lVar10);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar13);
  _objc_release(lVar8);
  _objc_release(lVar14);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106790628; end: 10679064b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106790628(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274fd7c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10679064c; end: 1067906bf; -[SCMemoriesContentFetcherServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10679064c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274fd88);
  _objc_destroyWeak(param_1 + _DAT_11274fd84);
  _objc_destroyWeak(param_1 + _DAT_11274fd70);
  _objc_destroyWeak(param_1 + _DAT_11274fd80);
  _objc_destroyWeak(param_1 + _DAT_11274fd7c);
  _objc_destroyWeak(param_1 + _DAT_11274fd78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274fd74);
  return;
}



/* Entry: 1067906c0; end: 1067906cb; -[SCMemoriesContentFetcherServices .cxx_destruct] */

void FUN_1067906c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067906cc; end: 10679072f; +[SCMemoriesContentFetchResult cameraRollFetchResultWithPhFetchResult:] */

void FUN_1067906cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cdd08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106790730; end: 10679079b; +[SCMemoriesContentFetchResult phArrayFetchResultWithPhArrayFetchResult:] */

void FUN_106790730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cdd08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10679079c; end: 1067907df; -[SCMemoriesContentFetchResult internalInit] */

void FUN_10679079c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f3048;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067907e0; end: 106790863; -[SCMemoriesContentFetchResult matchCameraRollFetchResult:phArrayFetchResult:] */

void FUN_1067907e0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_106790848;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_106790848;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_106790848:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106790864; end: 106790893; -[SCMemoriesContentFetchResult .cxx_destruct] */

void FUN_106790864(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106790894; end: 10679097f; -[SCMemoriesContentFetchRequest initWithReferenceDate:endReferenceDate:limit:filters:albumsToExclude:] */

undefined1 *
FUN_106790894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f3050;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106790980; end: 106790987; -[SCMemoriesContentFetchRequest referenceDate] */

undefined8 FUN_106790980(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106790988; end: 10679098f; -[SCMemoriesContentFetchRequest endReferenceDate] */

undefined8 FUN_106790988(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106790990; end: 106790997; -[SCMemoriesContentFetchRequest limit] */

undefined8 FUN_106790990(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106790998; end: 10679099f; -[SCMemoriesContentFetchRequest filters] */

undefined8 FUN_106790998(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1067909a0; end: 1067909a7; -[SCMemoriesContentFetchRequest albumsToExclude] */

undefined8 FUN_1067909a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1067909a8; end: 1067909e3; -[SCMemoriesContentFetchRequest .cxx_destruct] */

void FUN_1067909a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067909e4; end: 106790a87; -[SCGalleryEntryAndSnap initWithEntry:snap:] */

undefined1 *
FUN_1067909e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3058;
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



/* Entry: 106790a88; end: 106790aab; -[SCGalleryEntryAndSnap copyWithZone:] */

undefined8 FUN_106790a88(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106790aac; end: 106790b1f; -[SCGalleryEntryAndSnap hash] */

undefined8 * FUN_106790aac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106790ba0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106790bac;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_106790bac;
        }
        goto LAB_106790ba0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106790bac:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106790b20; end: 106790bc7; -[SCGalleryEntryAndSnap isEqual:] */

long FUN_106790b20(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106790ba0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106790bac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106790bac;
        }
        goto LAB_106790ba0;
      }
    }
    lVar3 = 0;
  }
LAB_106790bac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106790bc8; end: 106790bcf; -[SCGalleryEntryAndSnap entry] */

undefined8 FUN_106790bc8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106790bd0; end: 106790bd7; -[SCGalleryEntryAndSnap snap] */

undefined8 FUN_106790bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106790bd8; end: 106790c07; -[SCGalleryEntryAndSnap .cxx_destruct] */

void FUN_106790bd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106790c08; end: 106790c53; -[SCMemoriesNavigationImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106790c08(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274fdc0,0);
  _objc_storeStrong(param_1 + _DAT_11274fdbc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274fdb8);
  return;
}



/* Entry: 106790c54; end: 106790ca3; -[SCMemoriesNavigationPromiseEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106790c54(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274fdd0);
  _objc_destroyWeak(param_1 + _DAT_11274fdcc);
  _objc_destroyWeak(param_1 + _DAT_11274fdc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274fdc4);
  return;
}



/* Entry: 106790ca4; end: 106790ce7; -[SCMemoriesNavigationServiceImpl galleryViewController] */

void FUN_106790ca4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be5f1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfbde40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106790ce8; end: 106790d5f; -[SCMemoriesNavigationServiceImpl scrollToCameraAnimated:reason:completion:] */

void FUN_106790ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010be5f1c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1522e0();
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106790d60; end: 106790dff; -[SCMemoriesNavigationServiceImpl scrollToGalleryFromCameraAnimated:openSource:notificationId:notificationName:completion:] */

void FUN_106790d60(undefined8 param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  
  _objc_retain(in_x6);
  _objc_retain(in_x5);
  _objc_retain(in_x4);
  func_0x00010be5f1c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152480();
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106790e00; end: 106790e67; -[SCMemoriesNavigationServiceImpl scrollToSnapFeedFromCameraAnimated:openSource:completion:] */

void FUN_106790e00(undefined8 param_1)

{
  undefined8 in_x4;
  
  _objc_retain(in_x4);
  func_0x00010be5f1c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1527a0();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106790e68; end: 106790e97; -[SCMemoriesNavigationServiceImpl scrollGalleryToSpectaclesTab] */

void FUN_106790e68(undefined8 param_1)

{
  func_0x00010be5f1c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106790e98; end: 106790ec7; -[SCMemoriesNavigationServiceImpl scrollGalleryToFeaturedTab] */

void FUN_106790e98(undefined8 param_1)

{
  func_0x00010be5f1c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106790ec8; end: 106790ef7; -[SCMemoriesNavigationServiceImpl scrollGalleryToScreenshotsTab] */

void FUN_106790ec8(undefined8 param_1)

{
  func_0x00010be5f1c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106790ef8; end: 106790f27; -[SCMemoriesNavigationServiceImpl openQuickCut] */

void FUN_106790ef8(undefined8 param_1)

{
  func_0x00010be5f1c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106790f28; end: 106790fe7; -[SCMemoriesNavigationServiceImpl scrollGalleryToDreamsTabWithSnapIds:generationIds:notificationId:notificationType:dreamsPackId:] */

void FUN_106790f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be5f1c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152000();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106790fe8; end: 106791023; -[SCMemoriesNavigationServiceImpl isSnapTabVisible] */

undefined8 FUN_106790fe8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be5f1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07ec40();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106791024; end: 1067910bb; -[SCMemoriesNavigationServiceImpl handleDeeplinkWithDestinationInfo:notificationId:notificationName:openSource:] */

void FUN_106791024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be5f1c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0ca0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067910bc; end: 10679110b; -[SCMemoriesNavigationServiceImpl lockScrollWithKey:] */

void FUN_1067910bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be5f1c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09fdc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10679110c; end: 106791173; -[SCMemoriesNavigationServiceImpl scrollToCameraFromGalleryAnimated:completion:withTapButton:] */

void FUN_10679110c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010be5f1c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152300();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106791174; end: 1067911d7; -[SCMemoriesNavigationServiceImpl shouldLockScrollForLensId:] */

undefined8 FUN_106791174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010be5f1c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c231700();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1067911d8; end: 1067911df; -[SCMemoriesNavigationServiceImpl .cxx_destruct] */

void FUN_1067911d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1067911e0; end: 1067911ff; -[SCMemoriesSideButtonStateProvidingServiceProvider userNavigationScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067911e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274fddc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106791200; end: 106791213; -[SCMemoriesSideButtonStateProvidingServiceProvider setUserNavigationScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106791200(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274fddc,param_3);
  return;
}



/* Entry: 106791214; end: 1067912ff; -[SCMemoriesSideButtonStateProvidingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106791214(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274fe1c);
  _objc_destroyWeak(param_1 + _DAT_11274fe18);
  _objc_destroyWeak(param_1 + _DAT_11274fe14);
  _objc_destroyWeak(param_1 + _DAT_11274fe10);
  _objc_destroyWeak(param_1 + _DAT_11274fe0c);
  _objc_destroyWeak(param_1 + _DAT_11274fe08);
  _objc_destroyWeak(param_1 + _DAT_11274fe04);
  _objc_destroyWeak(param_1 + _DAT_11274fe00);
  _objc_destroyWeak(param_1 + _DAT_11274fdfc);
  _objc_destroyWeak(param_1 + _DAT_11274fdf8);
  _objc_destroyWeak(param_1 + _DAT_11274fdf4);
  _objc_destroyWeak(param_1 + _DAT_11274fdf0);
  _objc_destroyWeak(param_1 + _DAT_11274fdec);
  _objc_destroyWeak(param_1 + _DAT_11274fde8);
  _objc_destroyWeak(param_1 + _DAT_11274fde4);
  _objc_destroyWeak(param_1 + _DAT_11274fde0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274fddc);
  return;
}



/* Entry: 106791300; end: 1067913bf; -[SCMemoriesBadgeLogger logBadgeShownWithTriggerSource:hasSavedSnaps:] */

void FUN_106791300(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  if (((*(char *)(param_1 + 0x21) == '\x01') && (*(long *)(param_1 + 0x18) == param_3)) &&
     ((uint)*(byte *)(param_1 + 0x20) == (uint)param_4)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x21) = 1;
  *(long *)(param_1 + 0x18) = param_3;
  *(char *)(param_1 + 0x20) = (char)param_4;
  lVar1 = param_1;
  func_0x00010bdc4000(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be24720(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1067933f0(*(undefined8 *)(param_1 + 0x10),lVar1,param_4,lVar2,1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067913c0; end: 1067913c7; -[SCMemoriesBadgeLogger markBadgeCleared] */

void FUN_1067913c0(long param_1)

{
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}



/* Entry: 1067913c8; end: 1067913eb; -[SCMemoriesBadgeLogger _grapheneStringForSource:] */

undefined ** FUN_1067913c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 8) {
    return (undefined **)(&PTR_PTR_11093ae78)[param_3];
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 1067913ec; end: 1067914eb; -[SCMemoriesBadgeLogger _accountAgeBucket] */

undefined ** FUN_1067913ec(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined **ppuVar5;
  
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010beed420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  else {
    func_0x00010c26f3a0(lVar3);
    uVar4 = (ulong)(param_1 / -86400.0);
    if ((long)uVar4 < 1) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e5e4b8;
    }
    else if (uVar4 < 0xf) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e5e4d8;
    }
    else if (uVar4 < 0x1f) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e5e4f8;
    }
    else if (uVar4 < 0x5b) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e5e518;
    }
    else {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e5e538;
      if (0x16d < uVar4) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110e5e558;
      }
    }
  }
  _objc_release(lVar3);
  return ppuVar5;
}



/* Entry: 1067914ec; end: 106791573; -[SCMemoriesBadgeLogger .cxx_destruct] */

void FUN_1067914ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106791574; end: 1067915af; -[SCMemoriesSideButtonStateProvider observeSpectaclesAppStatusChanges] */

void FUN_106791574(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067915b0; end: 1067916f7; -[SCMemoriesSideButtonStateProvider setupObservableIfNeeded] */

void FUN_1067915b0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0xb0) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined **)(param_1 + 0xb0) = puVar1;
    _objc_release(uVar5);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010bfbe760(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf8a4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1067916f8; end: 10679172b;  */

void FUN_1067916f8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf37d80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10679172c; end: 106791737; -[SCMemoriesSideButtonStateProvider updateMemoriesEntriesWithMemoriesVisibility:] */

void FUN_10679172c(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea3e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setFeaturedEntriesSeen_112586930);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed7f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFeaturedBadge_112593978);
  return;
}



/* Entry: 106791738; end: 106791847; -[SCMemoriesSideButtonStateProvider _hasSnapchatRecapEntryInEntries:] */

undefined8 FUN_106791738(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
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
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_110,auStack_c8,0x10);
  uVar5 = 0;
  if (lVar2 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = *(ulong *)(lStack_108 + lVar7 * 8);
        func_0x000107e6b734();
        if ((uVar3 & 1) != 0) {
          uVar5 = 1;
          goto LAB_106791800;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
    uVar5 = 0;
  }
LAB_106791800:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar5;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(param_3 + 0x88);
  func_0x00010bf05240(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  iVar1 = (int)*(undefined8 *)(param_3 + 0xa8);
  func_0x000108ec1c5c();
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar5;
    func_0x00010bf1f320(uVar5,param_2,&PTR____CFConstantStringClassReference_110e0a818);
  }
  _objc_release(uVar5);
  return uVar4;
}



/* Entry: 106791848; end: 1067918cb; -[SCMemoriesSideButtonStateProvider _shouldShowBadgeForPendingNotification] */

undefined8 FUN_106791848(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010bf05240(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0xa8);
  func_0x000108ec1c5c();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar3;
    func_0x00010bf1f320(uVar3,param_2,&PTR____CFConstantStringClassReference_110e0a818);
  }
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 1067918cc; end: 106791a0f; -[SCMemoriesSideButtonStateProvider _setFeaturedEntriesSeen] */

void FUN_1067918cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9ea0();
  _objc_release(uVar1);
  func_0x00010c0bb160(*(undefined8 *)(param_1 + 0xe8));
  puVar2 = PTR_PTR_1126cdd50;
  _objc_alloc(PTR_PTR_1126cdd50);
  func_0x00010c0463c0();
  if ((*(char *)(param_1 + 0x19) == '\x01') && (*(char *)(param_1 + 0x1a) == '\x01')) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19d2e0();
    _objc_release(uVar1);
  }
  if (*(char *)(param_1 + 0x98) == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010bfbe760(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2854a0();
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c071800();
  _objc_release(uVar3);
  if ((int)uVar1 == 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40),param_2,puVar2);
    func_0x00010c1c5c80(*(undefined8 *)(param_1 + 0x28),param_2,0);
  }
  else {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xd8),param_2,puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106791a10; end: 106791d57; -[SCMemoriesSideButtonStateProvider _updateFeaturedBadge] */

undefined ** FUN_106791a10(long param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined **ppuVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  byte bVar22;
  long lVar23;
  long lVar24;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar17 = param_1;
  func_0x00010beb5c20(param_1);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar19 = *(long *)(param_1 + 8);
  _objc_retain(lVar19);
  lVar4 = lVar19;
  func_0x00010bf52a60(lVar19,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar4 == 0) {
    uVar16 = 0;
    bVar22 = 0;
  }
  else {
    uVar16 = 0;
    bVar22 = 0;
    lVar23 = *plStack_120;
    do {
      lVar24 = 0;
      do {
        if (*plStack_120 != lVar23) {
          _objc_enumerationMutation(lVar19);
        }
        uVar21 = *(ulong *)(lStack_128 + lVar24 * 8);
        uVar5 = uVar21;
        func_0x00010c1577e0();
        if ((uVar5 & 1) == 0) {
          uVar16 = uVar16 + 1;
          func_0x00010befa120(ppuVar3,param_2,uVar21);
          bVar22 = 1;
        }
        lVar24 = lVar24 + 1;
      } while (lVar4 != lVar24);
      lVar4 = lVar19;
      func_0x00010bf52a60(lVar19,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar19);
  ppuVar6 = ppuVar3;
  func_0x00010bf529e0();
  if (ppuVar6 == (undefined **)0x0) {
    iVar18 = 7;
  }
  else {
    ppuVar6 = ppuVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010be347a0(param_1,param_2,ppuVar3);
    func_0x00010be50740(param_1,param_2,ppuVar6,lVar4,lVar17);
    ppuVar7 = ppuVar6;
    func_0x00010bf977c0();
    ppuVar8 = ppuVar6;
    func_0x000107e6b734();
    uVar20 = (uint)ppuVar7;
    if ((uVar20 < 0x3c) && ((1L << ((ulong)ppuVar7 & 0x3f) & 0xc3c1e8000000080U) != 0)) {
      iVar18 = 3;
    }
    else {
      uVar2 = (uint)ppuVar8;
      if (uVar20 == 0xe) {
        uVar2 = 1;
      }
      iVar18 = 4;
      if (uVar20 != 0xe) {
        iVar18 = 5;
      }
      if (((uVar2 & 1) == 0) && (iVar18 = 6, uVar20 != 0x11)) {
        iVar18 = 7;
      }
    }
    _objc_release(ppuVar6);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfb1820();
  _objc_release(uVar9);
  if ((int)uVar10 != 0) {
    bVar22 = *(byte *)(param_1 + 0x19);
    uVar16 = (uint)*(undefined8 *)(param_1 + 0x20);
    iVar18 = 2;
  }
  bVar1 = *(byte *)(param_1 + 0x98);
  puVar11 = PTR_PTR_1126cdd50;
  _objc_alloc();
  func_0x00010c0463c0();
  uVar21 = *(ulong *)(param_1 + 0xd0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar21;
  func_0x00010c071800();
  _objc_release(uVar21);
  if ((uVar5 & 1) == 0) {
    func_0x00010c1c5c80(*(undefined8 *)(param_1 + 0x28),param_2,bVar1 | bVar22 & 1);
    lVar17 = 0x40;
  }
  else {
    lVar17 = 0xd8;
  }
  puVar12 = puVar11;
  func_0x00010c0d9840(*(undefined8 *)(param_1 + lVar17));
  iVar15 = (int)puVar12;
  if (*(long *)(param_1 + 8) != 0) {
    puVar12 = puVar11;
    func_0x00010c2371c0();
    puVar13 = puVar11;
    func_0x00010bfda140();
    puVar14 = puVar11;
    func_0x00010bf151a0();
    uVar5 = 0;
    if (puVar14 != (undefined *)0x0) {
      uVar5 = 3;
    }
    uVar21 = 2;
    if ((int)puVar13 == 0) {
      uVar21 = uVar5;
    }
    if ((int)puVar12 != 0) {
      uVar21 = 1;
    }
    if (uVar21 < 2) {
      if (uVar21 == 0) {
        func_0x00010c0bb160();
        goto LAB_106791ce8;
      }
      uVar16 = (uint)*(byte *)(param_1 + 0xf0);
      iVar15 = 0;
    }
    else if (uVar21 == 2) {
      uVar16 = (uint)*(byte *)(param_1 + 0xf0);
      iVar15 = 1;
    }
    else {
      uVar16 = (uint)*(byte *)(param_1 + 0xf0);
      iVar15 = iVar18;
    }
    func_0x00010c0a17c0(*(undefined8 *)(param_1 + 0xe8));
  }
LAB_106791ce8:
  _objc_release(puVar11);
  _objc_release(ppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e5e598;
    if (iVar15 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110dcc338;
    }
    ppuVar6 = &PTR____CFConstantStringClassReference_110e3cd18;
    if (uVar16 == 0) {
      ppuVar6 = ppuVar3;
    }
    return ppuVar6;
  }
  return ppuVar3;
}



/* Entry: 106791d58; end: 106791d83; -[SCMemoriesSideButtonStateProvider _determineBadgeType:hasPendingNotification:] */

undefined ** FUN_106791d58(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e5e598;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dcc338;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e3cd18;
  if (param_4 == 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 106791d84; end: 106791e57; -[SCMemoriesSideButtonStateProvider _logBadgeEvent:hasSnapchatRecapEntry:hasPendingNotification:] */

void FUN_106791d84(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  
  _objc_retain(param_3);
  lVar1 = lRam00000001136c42f0;
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106791e58;
  puStack_68 = &UNK_1109297f0;
  uStack_60 = param_3;
  lStack_58 = param_1;
  uStack_50 = uVar3;
  uStack_48 = param_4;
  uStack_47 = param_5;
  _objc_retain(param_3);
  _objc_retain(uVar3);
  uVar2 = param_3;
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x1136c42f0,&puStack_80);
    uVar2 = uStack_60;
  }
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106791e58; end: 106791f47;  */

void FUN_106791e58(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cdd58;
  _objc_opt_new(PTR_PTR_1126cdd58);
  func_0x00010c2262e0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf977c0(uVar2);
  lVar3 = (long)(int)uVar2;
  func_0x00010b5f5864(lVar3,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1a00(puVar1);
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf9e140(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1a20(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bdfbaa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16eda0(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106791f48; end: 106792073; -[SCMemoriesSideButtonStateProvider _hasSavedSnapsInEntries:] */

undefined * FUN_106791f48(undefined8 param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar8;
  ulong uVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar5 = (undefined *)0x0;
  if (lVar2 != 0) {
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(ulong *)(lVar8 * 8);
        iVar6 = (int)uVar7;
        uVar3 = uVar7;
        func_0x00010c07b240();
        if ((((uVar3 & 1) == 0) && (func_0x00010c074c20(), (uVar7 & 1) == 0)) &&
           (func_0x00010c080ca0(), iVar6 == 0)) {
          puVar5 = (undefined *)0x1;
          goto LAB_10679202c;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    puVar5 = (undefined *)0x0;
  }
LAB_10679202c:
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    uVar3 = param_2;
    func_0x00010c2371c0();
    if ((((uVar3 & 1) == 0) && (uVar3 = param_2, func_0x00010bf151a0(), uVar3 == 0)) &&
       (uVar3 = param_2, func_0x00010bfda140(), (uVar3 & 1) == 0)) {
      puVar5 = PTR_PTR_1126b1460;
      func_0x00010c0db7e0(PTR_PTR_1126b1460);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar5 = PTR_PTR_1126b1460;
      func_0x00010bef0400(PTR_PTR_1126b1460);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  return puVar5;
}



/* Entry: 106792074; end: 1067920fb;  */

void FUN_106792074(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2371c0();
  if ((((uVar1 & 1) == 0) && (uVar1 = param_2, func_0x00010bf151a0(), uVar1 == 0)) &&
     (uVar1 = param_2, func_0x00010bfda140(), (uVar1 & 1) == 0)) {
    puVar2 = PTR_PTR_1126b1460;
    func_0x00010c0db7e0(PTR_PTR_1126b1460);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126b1460;
    func_0x00010bef0400(PTR_PTR_1126b1460);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067920fc; end: 1067921b7;  */

void FUN_1067920fc(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1067921b8;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1067921b8; end: 106792293;  */

void FUN_1067921b8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c06b700();
    if (iVar1 != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        uVar6 = *(undefined8 *)(lVar2 + 0x40);
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c296d80(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar6,param_2,uVar4);
        _objc_release(uVar4);
        func_0x00010c1c5c80(*(undefined8 *)(lVar2 + 0x28),param_2,1);
        goto LAB_106792280;
      }
    }
    puVar5 = PTR_PTR_1126cdd50;
    _objc_alloc(PTR_PTR_1126cdd50);
    func_0x00010c0463c0();
    func_0x00010c0d9840(*(undefined8 *)(lVar2 + 0x40),param_2,puVar5);
    func_0x00010c1c5c80(*(undefined8 *)(lVar2 + 0x28),param_2,0);
    _objc_release(puVar5);
  }
LAB_106792280:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106792294; end: 10679241b; -[SCMemoriesSideButtonStateProvider _spectaclesStatusDidUpdateForDevice:forceUpdate:] */

void FUN_106792294(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06d6e0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0dec60();
    _objc_release(lVar3);
    if (lVar5 == 0) {
      lVar5 = 1;
    }
    else {
      if (param_3 != 0) {
        lVar3 = *(long *)(param_1 + 0x30);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010c0debe0();
        _objc_release(lVar3);
        if (lVar5 != 0) {
          lVar3 = *(long *)(param_1 + 0x30);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar3;
          func_0x00010bf06300();
          _objc_release(lVar3);
          goto joined_r0x00010679236c;
        }
      }
      lVar5 = 2;
    }
  }
joined_r0x00010679236c:
  if (((param_4 & 1) != 0) || (*(long *)(param_1 + 0x100) != lVar5)) {
    *(long *)(param_1 + 0x100) = lVar5;
    func_0x00010be5f380(param_1,param_2,lVar5);
    lVar5 = param_3;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf70e00();
    _objc_release(lVar5);
    puVar4 = PTR_PTR_1126cdd60;
    _objc_alloc(PTR_PTR_1126cdd60);
    func_0x00010c00c420();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x50),param_2,puVar4);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10679241c; end: 10679248f; -[SCMemoriesSideButtonStateProvider _memoriesStateForSpectaclesState:] */

undefined8 FUN_10679241c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c064e60();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      return 1;
    }
  }
  if (0x18 < param_3 - 3U) {
    return 1;
  }
  return *(undefined8 *)(&UNK_10dddf310 + (param_3 - 3U) * 8);
}



/* Entry: 106792490; end: 10679257b; -[SCMemoriesSideButtonStateProvider checkDreamsBadge] */

void FUN_106792490(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c229020();
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bfbe760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c233680(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10679257c; end: 10679260f;  */

void FUN_10679257c(long param_1,undefined1 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106792610;
  puStack_38 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_30,param_1 + 0x20);
  uStack_28 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  return;
}



/* Entry: 106792610; end: 10679264f;  */

void FUN_106792610(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x98) = *(undefined1 *)(param_1 + 0x28);
    func_0x00010bed7f40(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106792650; end: 10679275b; -[SCMemoriesSideButtonStateProvider _observeFeaturedEntryDataModels] */

void FUN_106792650(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0a20();
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



/* Entry: 10679275c; end: 1067927bf;  */

void FUN_10679275c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_2;
    _objc_release(uVar1);
    func_0x00010bee5100(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067927c0; end: 1067927e7; -[SCMemoriesSideButtonStateProvider yearEndRecapIsAvailable] */

void FUN_1067927c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067927e8; end: 1067928e7; -[SCMemoriesSideButtonStateProvider _updateYearEndRecapAvailabilityWithDataModels:] */

void FUN_1067927e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf92640();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1067928e8; end: 106792e3f;  */

void FUN_1067928e8(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_106792dfc;
  lVar2 = *(long *)(lVar1 + 200);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf65080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if ((lVar3 == 0) || (func_0x00010c26f3a0(lVar3), 0.0 < param_1)) {
    lVar2 = *(long *)(param_2 + 0x20);
    func_0x00010bf529e0();
    if (lVar2 == 0) goto LAB_106792a9c;
    lVar16 = *(long *)(param_2 + 0x20);
    _objc_retain(lVar16);
    lVar2 = lVar16;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar19 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar16);
        }
        uVar18 = *(ulong *)(lVar19 * 8);
        uVar17 = uVar18;
        func_0x00010c127ea0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar17;
        func_0x00010bf4c440();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar17);
        if (uVar4 != 0) {
          uVar17 = uVar4;
          func_0x00010bf977c0();
          if ((int)uVar17 == 0x4a) {
            uVar5 = 0;
            uVar15 = uVar18;
LAB_106792a48:
            uVar14 = uVar5;
            _objc_retain(uVar18);
          }
          else {
            uVar17 = uVar4;
            func_0x00010bfa0420();
            uVar15 = 0;
            uVar14 = 0;
            uVar5 = uVar18;
            if ((int)uVar17 == 0x31) goto LAB_106792a48;
          }
          if (uVar14 != 0 || uVar15 != 0) {
            _objc_release(uVar4);
            goto LAB_106792ab8;
          }
        }
        _objc_release(uVar4);
        lVar19 = lVar19 + 1;
      } while (lVar2 != lVar19);
      lVar2 = lVar16;
      func_0x00010bf52a60();
    }
    uVar14 = 0;
    uVar15 = 0;
LAB_106792ab8:
    _objc_release(lVar16);
    if (uVar14 == 0 && uVar15 == 0) {
      func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x58));
    }
    else {
      uVar17 = uVar15;
      func_0x00010c127ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar17;
      func_0x00010bf4c440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar17);
      uVar17 = uVar14;
      func_0x00010c127ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010bf4c440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar17);
      uVar17 = uVar4;
      func_0x00010c074c20();
      if (((int)uVar17 == 0) || (uVar17 = uVar18, func_0x00010c074c20(), (uVar17 & 1) == 0)) {
        if ((uVar4 == 0) ||
           ((uVar17 = uVar4, func_0x00010c074c20(), (uVar17 & 1) != 0 ||
            (uVar17 = uVar15, func_0x00010c234360(), (uVar17 & 1) != 0)))) {
          if ((uVar18 == 0) || (uVar17 = uVar18, func_0x00010c074c20(), (uVar17 & 1) != 0)) {
            if (uVar4 != 0) {
              func_0x00010c234360(uVar15);
            }
            uVar17 = 0;
          }
          else {
            uVar5 = uVar18;
            func_0x000107e7774c(uVar18,*(undefined8 *)(lVar1 + 0xa8));
            _objc_retainAutoreleasedReturnValue();
            if (uVar5 == 0) {
LAB_106792bec:
              _objc_retain(uVar18);
              uVar17 = uVar18;
            }
            else {
              puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
              func_0x00010bf64de0();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              func_0x00010bf433a0();
              _objc_release(puVar6);
              if (puVar7 != (undefined *)0xffffffffffffffff) goto LAB_106792bec;
              uVar17 = 0;
            }
            _objc_release(uVar5);
          }
        }
        else {
          _objc_retain(uVar4);
          uVar17 = uVar4;
        }
      }
      else {
        uVar17 = 0;
      }
      uVar5 = uVar17;
      func_0x00010bf9e140();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(lVar1 + 200);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c0d11a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      if (uVar5 == 0) {
        lVar2 = 0;
        func_0x00010c08fa60();
        if (lVar2 != 0) {
LAB_106792d50:
          uVar8 = *(undefined8 *)(lVar1 + 200);
          func_0x00010c269d40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfde0e0();
          _objc_release(uVar8);
        }
      }
      else {
        uVar10 = uVar5;
        func_0x00010c0720c0();
        uVar11 = uVar5;
        func_0x00010c08fa60();
        if (uVar11 != 0) {
          if ((uVar10 & 1) != 0) goto LAB_106792d50;
          uVar8 = *(undefined8 *)(lVar1 + 200);
          func_0x00010c269d40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a7280();
          _objc_release(uVar8);
          if (lVar3 == 0) {
            lVar12 = *(long *)(lVar1 + 0xc0);
            func_0x00010c269d40(lVar12);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar12;
            func_0x00010c2bede0();
            _objc_release(lVar12);
            puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf65600((double)lVar2,PTR__OBJC_CLASS___NSDate_1126ae770);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = *(undefined8 *)(lVar1 + 200);
            func_0x00010c269d40(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c189b40();
            _objc_release(uVar8);
            _objc_release(puVar6);
          }
          uVar8 = *(undefined8 *)(lVar1 + 200);
          func_0x00010c269d40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c9160();
          _objc_release(uVar8);
        }
      }
      uVar8 = *(undefined8 *)(lVar1 + 0x58);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar8);
      _objc_release(puVar6);
      _objc_release(uVar9);
      _objc_release(uVar5);
      _objc_release(uVar17);
      _objc_release(uVar18);
      _objc_release(uVar4);
    }
    _objc_release(uVar14);
    _objc_release(uVar15);
  }
  else {
LAB_106792a9c:
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x58));
  }
  _objc_release(lVar3);
LAB_106792dfc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(lVar1 + 200);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0d11a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(lVar1 + 200);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7280();
  _objc_release(uVar8);
  func_0x00010bee5100(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 106792e40; end: 106792ec3; -[SCMemoriesSideButtonStateProvider dismissYearEndRecapBadge] */

void FUN_106792e40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d11a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7280();
  _objc_release(uVar1);
  func_0x00010bee5100(param_1,param_2,*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106792ec4; end: 106792f0b; -[SCMemoriesSideButtonStateProvider statusCoordinatorBluetoothTurnedOn:] */

void FUN_106792ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf486e0(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebea60(param_1,param_2,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106792f0c; end: 106792f53; -[SCMemoriesSideButtonStateProvider statusCoordinatorBluetoothTurnedOff:] */

void FUN_106792f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf486e0(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebea60(param_1,param_2,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106792f54; end: 106792f9b; -[SCMemoriesSideButtonStateProvider statusCoordinatorNumberOfDevicesUpdated:] */

void FUN_106792f54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf486e0(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebea60(param_1,param_2,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106792f9c; end: 106792fa7; -[SCMemoriesSideButtonStateProvider statusCoordinator:needsToUpdateStateForDevice:] */

void FUN_106792f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebea70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__spectaclesStatusDidUpdateForDev_11258d440,param_4,0);
  return;
}



/* Entry: 106792fa8; end: 106792fbf; -[SCMemoriesSideButtonStateProvider statusCoordinator:updateMemoriesSideButtonTooltipVisibility:tooltipText:] */

void FUN_106792fa8(long param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined **param_5)

{
  if (param_4 == 0) {
    param_5 = &PTR____CFConstantStringClassReference_110daafd8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_next__112614028,param_5);
  return;
}



/* Entry: 106792fc0; end: 1067930fb; -[SCMemoriesSideButtonStateProvider dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_106792fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1067930fc;
  puStack_68 = &UNK_110848218;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_5);
  uStack_58 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_80);
  func_0x00010bf37d80(param_1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067930fc; end: 106793233;  */

void FUN_1067930fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107e756d8();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = uVar2;
    _objc_release(uVar5);
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x0001006372a4(lVar3,&PTR___NSConcreteGlobalBlock_110d25e40);
    lVar4 = lVar3;
    func_0x00010bf529e0();
    *(bool *)(lVar1 + 0x18) = lVar4 != 0;
    _objc_release(lVar3);
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010bf529e0();
    *(long *)(lVar1 + 0x20) = lVar3 + lVar4;
    *(bool *)(lVar1 + 0x19) = lVar3 + lVar4 != 0;
    lVar4 = lVar1;
    func_0x00010be345c0();
    *(char *)(lVar1 + 0xf0) = (char)lVar4;
    if (*(char *)(lVar1 + 0x19) == '\x01') {
      uVar5 = *(undefined8 *)(lVar1 + 0xc0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010c22e980();
      *(char *)(lVar1 + 0x1a) = (char)uVar2;
      _objc_release(uVar5);
    }
    func_0x00010bed7f40(lVar1);
    uVar5 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf486e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebea60(lVar1);
    _objc_release(uVar2);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106793234; end: 10679323b; -[SCMemoriesSideButtonStateProvider showBadgeObservable] */

undefined8 FUN_106793234(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10679323c; end: 106793243; -[SCMemoriesSideButtonStateProvider tooltipTextObservable] */

undefined8 FUN_10679323c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106793244; end: 10679324b; -[SCMemoriesSideButtonStateProvider memoriesSideButtonSpectaclesStateObservable] */

undefined8 FUN_106793244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10679324c; end: 106793253; -[SCMemoriesSideButtonStateProvider userSession] */

undefined8 FUN_10679324c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 106793254; end: 106793283; -[SCMemoriesSideButtonStateProvider setUserSession:] */

void FUN_106793254(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106793284; end: 10679328b; -[SCMemoriesSideButtonStateProvider currentSpectaclesState] */

undefined8 FUN_106793284(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 10679328c; end: 106793293; -[SCMemoriesSideButtonStateProvider setCurrentSpectaclesState:] */

void FUN_10679328c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x100) = param_3;
  return;
}



/* Entry: 106793294; end: 1067933ef; -[SCMemoriesSideButtonStateProvider .cxx_destruct] */

void FUN_106793294(long param_1)

{
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067933f0; end: 106793667;  */

/* WARNING: Removing unreachable block (ram,0x000106793638) */

void FUN_1067933f0(long param_1,char *param_2,int param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *unaff_x23;
  undefined4 uStack_14c;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_a0,pcVar1);
    pcVar1 = "true";
    if (param_3 == 0) {
      pcVar1 = "false";
    }
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
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_11093aef8,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar5 = 0;
    do {
      if ((&cStack_59)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
      unaff_x23 = &uStack_c0;
    } while (lVar5 != -0x48);
  }
  _objc_release(param_4);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    puStack_f0 = auStack_a0;
    do {
      unaff_x23 = (undefined8 *)((long)unaff_x23 + -0x18);
    } while (unaff_x23 != (undefined8 *)puStack_f0);
    _objc_release(param_4);
    _objc_release(param_2);
    pcVar2 = pcVar1;
    __Unwind_Resume();
    pcStack_c8 = FUN_106793668;
    pcStack_e8 = pcVar1;
    pcStack_e0 = param_4;
    pcStack_d8 = param_2;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_opt_class(PTR_PTR_1126cdd68);
    if (pcVar2 == (char *)0x0) {
      uStack_100 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_130,pcVar2);
    }
    lStack_148 = 0;
    lStack_140 = 0;
    uStack_138 = 0;
    uStack_14c = 0;
    puVar3 = &uStack_130;
    func_0x00010054c81c(puVar3,&lStack_148,&uStack_14c);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (lStack_148 != 0) {
      lStack_140 = lStack_148;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_108);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
    _objc_release(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  return;
}


