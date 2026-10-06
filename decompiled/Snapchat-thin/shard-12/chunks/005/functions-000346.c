/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091e0450; end: 1091e048b; -[SCLensDataProviderAutoInvalidatingProxy conformsToProtocol:] */

undefined4 FUN_1091e0450(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    lVar2 = lVar3;
    func_0x000107c318f8(lVar3,param_3);
    uVar1 = 0;
    if (lVar3 != 0) {
      uVar1 = (undefined4)lVar2;
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 1091e048c; end: 1091e0497; -[SCLensDataProviderAutoInvalidatingProxy .cxx_destruct] */

void FUN_1091e048c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091e0498; end: 1091e04d3;  */

void FUN_1091e0498(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMethodSignature_1126ddd48;
  func_0x00010c23c380(PTR__OBJC_CLASS___NSMethodSignature_1126ddd48,param_2,&UNK_10f55bfd3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113732920;
  puRam0000000113732920 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e04d4; end: 1091e0563; -[SCLensDataProviderProxy methodSignatureForSelector:] */

void FUN_1091e04d4(long param_1)

{
  long lVar1;
  
  func_0x00010be4a980();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    if (lRam0000000113732928 != -1) {
      func_0x000107c27d9c(0x113732928,&PTR___NSConcreteGlobalBlock_110ae08b8);
    }
    lVar1 = lRam0000000113732930;
    _objc_retain(lRam0000000113732930);
  }
  else {
    lVar1 = param_1;
    func_0x00010c0cca80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1091e0564; end: 1091e05a7; -[SCLensDataProviderProxy class] */

void FUN_1091e0564(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be4a980();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_class();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091e05a8; end: 1091e05ab; -[SCLensDataProviderProxy forwardingTargetForSelector:] */

void FUN_1091e05a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4a990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__lensDataProvider_112570400);
  return;
}



/* Entry: 1091e05ac; end: 1091e0603; -[SCLensDataProviderProxy forwardInvocation:] */

void FUN_1091e05ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be4a980();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c06ae40(param_3,param_2,param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091e0604; end: 1091e0647; -[SCLensDataProviderProxy isKindOfClass:] */

uint FUN_1091e0604(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be4a980();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_isKindOfClass();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1091e0648; end: 1091e068b; -[SCLensDataProviderProxy respondsToSelector:] */

uint FUN_1091e0648(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be4a980();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1091e068c; end: 1091e0703; -[SCLensDataProviderProxy conformsToProtocol:] */

undefined4 FUN_1091e068c(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010be4a980();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x000107c318f8(param_1,param_3);
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = (undefined4)lVar2;
    }
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1091e0704; end: 1091e07eb; -[SCLensDataProviderProxy _lensDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091e0704(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112783220;
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained();
  _objc_release();
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar2 = param_1 + lVar4;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x000107c318f8();
    _objc_release(lVar2);
    if (lVar2 == 0 || (int)lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      param_1 = param_1 + lVar4;
      _objc_loadWeakRetained();
      lVar2 = param_1;
      func_0x00010bf5f180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      puVar1 = PTR_DAT_1126a5be0;
      _objc_retain(lVar2);
      lVar4 = lVar2;
      func_0x000107c318f8(lVar2,puVar1);
      _objc_release(lVar2);
      lVar3 = 0;
      if (((int)lVar4 != 0) && (lVar2 != 0)) {
        _objc_retain(lVar2);
        lVar3 = lVar2;
      }
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1091e07ec; end: 1091e07fb; -[SCLensDataProviderProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091e07ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112783220);
  return;
}



/* Entry: 1091e07fc; end: 1091e0837;  */

void FUN_1091e07fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMethodSignature_1126ddd48;
  func_0x00010c23c380(PTR__OBJC_CLASS___NSMethodSignature_1126ddd48,param_2,&UNK_10f55bfd3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113732930;
  puRam0000000113732930 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e0838; end: 1091e087f; -[SCLensDataProviderV2 initWithLensDataFetcher:adaptiveLensFetcher:metadataStore:sortStrategy:lensRemovalManager:prefetchFiltersFactory:configuration:lensDataConfigProvider:lensUserProvider:lensCarouselStudySettings:lensContentCacheProvider:] */

void FUN_1091e0838(void)

{
  func_0x00010c023760();
  return;
}



/* Entry: 1091e0880; end: 1091e08e3;  */

void FUN_1091e0880(void)

{
  _objc_alloc(PTR_PTR_1126ddd50);
  func_0x00010c02bc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091e08e4; end: 1091e0937; -[SCLensDataProviderV2 startUpdatingLensData] */

void FUN_1091e08e4(long param_1)

{
  ulong uVar1;
  
  func_0x00010bf96800();
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010c28d800();
  if ((uVar1 & 1) == 0) {
    func_0x00010bef9980(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c251660(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c28d300(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2515b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_startUpdatingLensData_112671f90);
  return;
}



/* Entry: 1091e0938; end: 1091e098f; -[SCLensDataProviderV2 stopUpdatingLensDataWithToken:] */

void FUN_1091e0938(long param_1)

{
  ulong uVar1;
  
  func_0x00010c256da0(*(undefined8 *)(param_1 + 0x40));
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010c28d800();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c256d40(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c28d310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updatedFeatureStateWithState__112680ee8,1);
  return;
}



/* Entry: 1091e0990; end: 1091e09bb; -[SCLensDataProviderV2 _currentFetchType] */

undefined8 FUN_1091e0990(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be77480();
  uVar1 = 1;
  if (param_1 != 1) {
    uVar1 = 2;
  }
  uVar2 = 4;
  if (param_1 != 2) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 1091e09bc; end: 1091e0a83; -[SCLensDataProviderV2 didUpdateLenses:lensMetadataStore:] */

void FUN_1091e09bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1091e0a44;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000107c312d0("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1091e0a84; end: 1091e0adb; -[SCLensDataProviderV2 didUpdateLensesToPrefetch:lensMetadataStore:] */

void FUN_1091e0a84(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1091e0adc;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000107c312d0("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1091e0adc; end: 1091e0ae3;  */

void FUN_1091e0adc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebdf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__sortAndPrefetchLenses_11258d188);
  return;
}



/* Entry: 1091e0ae4; end: 1091e0cd3; -[SCLensDataProviderV2 _forceUpdateSelectedStudioLensIfNeededWithUpdatedLenses:] */

void FUN_1091e0ae4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
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
  _objc_retain(param_3);
  lVar3 = param_1;
  func_0x00010c159a40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar12 = param_1;
    func_0x00010c159a40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c080040();
    _objc_release(lVar12);
    _objc_release(lVar3);
    if ((int)lVar13 != 0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain(param_3);
      lVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
      if (lVar3 != 0) {
        lVar12 = *plStack_120;
        do {
          lVar13 = 0;
          do {
            if (*plStack_120 != lVar12) {
              _objc_enumerationMutation(param_3);
            }
            uVar11 = *(undefined8 *)(lStack_128 + lVar13 * 8);
            uVar4 = uVar11;
            func_0x00010c094540();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = param_1;
            func_0x00010c159a40(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010c094540();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar4;
            func_0x00010c071ae0(uVar4,param_2,lVar6);
            if ((int)uVar7 == 0) {
              _objc_release(lVar6);
              _objc_release(lVar5);
              _objc_release(uVar4);
            }
            else {
              uVar7 = uVar11;
              func_0x00010c080040();
              _objc_release(lVar6);
              _objc_release(lVar5);
              _objc_release(uVar4);
              if ((int)uVar7 != 0) {
                func_0x00010c1fb2e0(param_1,param_2,uVar11);
              }
            }
            lVar13 = lVar13 + 1;
          } while (lVar3 != lVar13);
          lVar3 = param_3;
          func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
        } while (lVar3 != 0);
      }
      _objc_release(param_3);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = *(undefined **)(param_3 + 0x28);
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar8 != (undefined *)0x0) {
    puVar1 = puVar8;
  }
  _objc_retain(puVar1);
  _objc_release(puVar8);
  puVar8 = puVar1;
  func_0x00010bf529e0();
  if (puVar8 != (undefined *)0x0) {
    uVar9 = *(ulong *)(param_3 + 0x40);
    func_0x00010c28d800();
    puVar8 = puVar1;
    if ((uVar9 & 1) != 0) goto LAB_1091e0d74;
  }
  func_0x00010c265e20(param_3);
  puVar10 = *(undefined **)(param_3 + 0x28);
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  if (puVar10 != (undefined *)0x0) {
    puVar8 = puVar10;
  }
  _objc_retain(puVar8);
  _objc_release(puVar1);
  _objc_release(puVar10);
LAB_1091e0d74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1091e0cd4; end: 1091e0d87; -[SCLensDataProviderV2 lenses] */

void FUN_1091e0cd4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  
  puVar3 = *(undefined **)(param_1 + 0x28);
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bf529e0();
  if (puVar3 != (undefined *)0x0) {
    uVar4 = *(ulong *)(param_1 + 0x40);
    func_0x00010c28d800();
    puVar3 = puVar1;
    if ((uVar4 & 1) != 0) goto LAB_1091e0d74;
  }
  func_0x00010c265e20(param_1);
  puVar5 = *(undefined **)(param_1 + 0x28);
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  if (puVar5 != (undefined *)0x0) {
    puVar3 = puVar5;
  }
  _objc_retain(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar5);
LAB_1091e0d74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091e0d88; end: 1091e0fbf; -[SCLensDataProviderV2 lensesToPresent] */

void FUN_1091e0d88(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  func_0x00010bf96800();
  lVar4 = param_1;
  func_0x00010c098240(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = *(undefined **)(param_1 + 0x38);
  lVar1 = param_1;
  func_0x00010bf2a2c0(param_1);
  lVar2 = param_1;
  func_0x00010bebe200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b100(puVar9,param_2,lVar4,lVar1,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar3 = puVar9;
  func_0x00010c098240(puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010bfaebc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = puVar9;
  puVar6 = puVar3;
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfaebc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaea40(puVar3,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar5);
    puVar7 = PTR_PTR_1126ddca0;
    _objc_alloc();
    puVar3 = puVar9;
    func_0x00010c097640(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010bf783a0(puVar9);
    func_0x00010c025dc0(puVar7,param_2,puVar6,puVar3,puVar8);
    _objc_release(puVar9);
    _objc_release(puVar3);
  }
  puVar3 = puVar7;
  func_0x00010bf783a0();
  puVar8 = puVar7;
  puVar9 = puVar6;
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = PTR_PTR_1126ddd58;
    _objc_opt_new(PTR_PTR_1126ddd58);
    puVar9 = puVar3;
    func_0x00010bfae0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar8 = PTR_PTR_1126ddca0;
    _objc_alloc();
    puVar6 = puVar7;
    func_0x00010c097640(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c025dc0(puVar8,param_2,puVar9,puVar6,1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  puVar3 = puVar8;
  func_0x00010c097640();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar3;
  _objc_release(uVar5);
  puVar3 = puVar8;
  func_0x00010c098240(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091e0fc0; end: 1091e10af; -[SCLensDataProviderV2 _sortStrategyParameters] */

void FUN_1091e0fc0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010bfd93e0();
  puVar2 = PTR_PTR_1126ddd60;
  _objc_alloc(PTR_PTR_1126ddd60);
  lVar3 = param_1;
  func_0x00010c236200(param_1);
  lVar4 = param_1;
  func_0x00010c0ed600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c159a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf9ce40(uVar6);
  }
  else {
    uVar6 = 1;
  }
  func_0x00010bf07500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0463a0(puVar2,param_2,lVar3,lVar4,lVar5,uVar6,uVar1,param_1);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091e10b0; end: 1091e1133; -[SCLensDataProviderV2 _prefetchSortStrategyParameters] */

void FUN_1091e10b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ddd60;
  _objc_alloc(PTR_PTR_1126ddd60);
  uVar2 = param_1;
  func_0x00010c236200(param_1);
  func_0x00010bf07500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0463a0(puVar1,param_2,uVar2,0,0,1,0,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091e1134; end: 1091e119f; -[SCLensDataProviderV2 lensForId:] */

void FUN_1091e1134(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c093fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091e11a0; end: 1091e11a7; -[SCLensDataProviderV2 syncDownloadableData] */

void FUN_1091e11a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c266b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_synchronize_112677508);
  return;
}



/* Entry: 1091e11a8; end: 1091e12a7; -[SCLensDataProviderV2 applicableContext] */

void FUN_1091e11a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1091e12a8;
  uStack_30 = 0x1091e12b8;
  uStack_28 = 0;
  func_0x00010c0cc640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf07500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc8c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091e12a8; end: 1091e12bf;  */

void FUN_1091e12a8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1091e12c0; end: 1091e12f7;  */

void FUN_1091e12c0(long param_1,undefined8 param_2)

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



/* Entry: 1091e12f8; end: 1091e12fb;  */

void FUN_1091e12f8(void)

{
  return;
}



/* Entry: 1091e12fc; end: 1091e1347; -[SCLensDataProviderV2 _shouldTriggerFetchingForCurrentCameraPosition] */

byte FUN_1091e12fc(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010bf2a2c0();
  if (lVar2 == 0) {
    lVar2 = 8;
  }
  else {
    if (lVar2 != 1) {
      bVar1 = 0;
      goto LAB_1091e1338;
    }
    lVar2 = 9;
  }
  bVar1 = *(byte *)(param_1 + lVar2) ^ 1;
LAB_1091e1338:
  return bVar1 & 1;
}



/* Entry: 1091e1348; end: 1091e1383; -[SCLensDataProviderV2 cameraPosition] */

undefined8 FUN_1091e1348(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0cc640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf2a2c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1091e1384; end: 1091e138b; -[SCLensDataProviderV2 originalLens] */

void FUN_1091e1384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ed610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_originalLens_112618f98);
  return;
}



/* Entry: 1091e138c; end: 1091e1393; -[SCLensDataProviderV2 addListener:] */

void FUN_1091e138c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1091e1394; end: 1091e139b; -[SCLensDataProviderV2 removeListener:] */

void FUN_1091e1394(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1091e139c; end: 1091e13a3; -[SCLensDataProviderV2 addProgressListener:] */

void FUN_1091e139c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_addProgressListener__11259c4a8);
  return;
}



/* Entry: 1091e13a4; end: 1091e13ab; -[SCLensDataProviderV2 removeProgressListener:] */

void FUN_1091e13a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12ddb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_removeProgressListener__112629188);
  return;
}



/* Entry: 1091e13ac; end: 1091e13b3; -[SCLensDataProviderV2 addEventsListener:] */

void FUN_1091e13ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef8110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_addEventsListener__11259b9e8);
  return;
}



/* Entry: 1091e13b4; end: 1091e13bb; -[SCLensDataProviderV2 removeEventsListener:] */

void FUN_1091e13b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_removeEventsListener__112628aa0);
  return;
}



/* Entry: 1091e13bc; end: 1091e13bf; -[SCLensDataProviderV2 lensUIStateListener] */

void FUN_1091e13bc(void)

{
  return;
}



/* Entry: 1091e13c0; end: 1091e13c7; -[SCLensDataProviderV2 cancelDownloads] */

void FUN_1091e13c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_cancelDownloads_1125a9258);
  return;
}



/* Entry: 1091e13c8; end: 1091e13cf; -[SCLensDataProviderV2 clearCacheWithCompletionBlock:] */

void FUN_1091e13c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3ac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_clearCacheWithCompletionBlock__1125ac4c8);
  return;
}



/* Entry: 1091e13d0; end: 1091e13d7; -[SCLensDataProviderV2 fetchAsset:lens:fetchSourceType:completionPerformer:completion:] */

void FUN_1091e13d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa4f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_fetchAsset_lens_fetchSourceType__1125c6d68);
  return;
}



/* Entry: 1091e13d8; end: 1091e13df; -[SCLensDataProviderV2 fetchLenses:fetchSourceType:] */

void FUN_1091e13d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_fetchLenses_fetchSourceType__1125c7988);
  return;
}



/* Entry: 1091e13e0; end: 1091e13e7; -[SCLensDataProviderV2 fetchLenses:requestTiming:fetchSourceType:] */

void FUN_1091e13e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_fetchLenses_requestTiming_fetchS_1125c7990);
  return;
}



/* Entry: 1091e13e8; end: 1091e13ef; -[SCLensDataProviderV2 fetchCachedLenses:fetchSourceType:] */

void FUN_1091e13e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa56f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_fetchCachedLenses_fetchSourceTyp_1125c6f60);
  return;
}



/* Entry: 1091e13f0; end: 1091e13f7; -[SCLensDataProviderV2 fetchIconsForLenses:requestTiming:fetchSourceType:] */

void FUN_1091e13f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa77d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_fetchIconsForLenses_requestTimin_1125c7798);
  return;
}



/* Entry: 1091e13f8; end: 1091e13ff; -[SCLensDataProviderV2 pauseDownloads] */

void FUN_1091e13f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f5d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_pauseDownloads_11261b160);
  return;
}



/* Entry: 1091e1400; end: 1091e1407; -[SCLensDataProviderV2 resumeDownloads] */

void FUN_1091e1400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13d470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_resumeDownloads_11262cf38);
  return;
}



/* Entry: 1091e1408; end: 1091e140f; -[SCLensDataProviderV2 fetchLens:fetchSourceType:] */

void FUN_1091e1408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_fetchLens_fetchSourceType__1125c7948);
  return;
}



/* Entry: 1091e1410; end: 1091e1417; -[SCLensDataProviderV2 fetchLensesIfNeededWithFetchSourceType:] */

void FUN_1091e1410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_fetchLensesIfNeededWithFetchSour_1125c7998);
  return;
}



/* Entry: 1091e1418; end: 1091e141f; -[SCLensDataProviderV2 prefetchLensesIfNeededWithFetchSourceType:] */

void FUN_1091e1418(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c107990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_prefetchLensesIfNeededWithFetchS_11261f880);
  return;
}



/* Entry: 1091e1420; end: 1091e1427; -[SCLensDataProviderV2 isFetchingLens:] */

void FUN_1091e1420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c072dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_isFetchingLens__1125fa580);
  return;
}



/* Entry: 1091e1428; end: 1091e1433; -[SCLensDataProviderV2 fetchMoreLensesIfNeeded] */

void FUN_1091e1428(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c251670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_startUpdatingWithMode__112671fc0,2);
  return;
}



/* Entry: 1091e1434; end: 1091e143b; -[SCLensDataProviderV2 suggestedLoadMoreTriggerDistance] */

void FUN_1091e1434(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09bc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_loadMoreTriggerDistance_112604910);
  return;
}



/* Entry: 1091e143c; end: 1091e146b; -[SCLensDataProviderV2 setSelectedLens:] */

void FUN_1091e143c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e146c; end: 1091e1473; -[SCLensDataProviderV2 setStartVisibleIndex:endVisibleIndex:selectedIndex:] */

void FUN_1091e146c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updatedVisibleIndicesWithStartIn_112680fe0);
  return;
}



/* Entry: 1091e1474; end: 1091e157f; -[SCLensDataProviderV2 firstApplicableLens] */

void FUN_1091e1474(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  func_0x00010c0987e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c0ed600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar4 = uVar1;
  if (uVar5 == 0) {
    func_0x00010bfb1920(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar5 = 0;
    do {
      uVar2 = uVar1;
      func_0x00010bf529e0();
      if (uVar2 <= uVar5) goto LAB_1091e1544;
      uVar2 = uVar1;
      func_0x00010c0dfd40(uVar1,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c0ed600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar5 = uVar5 + 1;
      _objc_release(uVar2);
    } while (uVar2 != uVar3);
    if ((uVar5 == 0x7fffffffffffffff) || (uVar2 = uVar1, func_0x00010bf529e0(), uVar2 <= uVar5)) {
LAB_1091e1544:
      uVar4 = 0;
    }
    else {
      func_0x00010c0dfd40(uVar1,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1091e1580; end: 1091e16a7; -[SCLensDataProviderV2 _sortAndPrefetchLenses] */

void FUN_1091e1580(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(byte *)(param_1 + 199) & 1) == 0) {
    uVar1 = param_1;
    func_0x00010be77480();
    if (uVar1 < 3) {
      uVar2 = *(undefined8 *)(param_1 + uVar1 * 8 + 0x58);
      _objc_retain(uVar2);
    }
    else {
      uVar2 = 0;
    }
    uVar1 = param_1;
    func_0x00010be77640();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(uVar2);
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 1091e16a8; end: 1091e17d7;  */

void FUN_1091e16a8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c069d00(*(undefined8 *)(lVar1 + 0xb0));
    puVar2 = PTR_PTR_1126ae888;
    _objc_alloc();
    uVar3 = *(undefined8 *)(lVar1 + 0xa8);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    func_0x00010c0522e0(0x3ff0000000000000);
    uVar4 = *(undefined8 *)(lVar1 + 0xb0);
    *(undefined **)(lVar1 + 0xb0) = puVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1091e17d8; end: 1091e181f;  */

void FUN_1091e17d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be9b560(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
    uVar2 = *(undefined8 *)(lVar1 + 0xb0);
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091e1820; end: 1091e196f; -[SCLensDataProviderV2 _schedulePrefetchWithFilter:sortStrategyParameters:] */

void FUN_1091e1820(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ddd70;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0385e0();
  lVar2 = param_1;
  func_0x00010bdf6fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c098240(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf9b120(puVar1,param_2,uVar3,lVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar3);
  lVar5 = param_1;
  func_0x00010be76be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfae0c0(param_3,param_2,puVar4,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf6a40(param_1);
  func_0x00010c107960(uVar6,param_2,uVar3,param_1);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1091e1970; end: 1091e19af; -[SCLensDataProviderV2 _currentPrecachedLenses] */

void FUN_1091e1970(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0987c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091e19b0; end: 1091e1a03; -[SCLensDataProviderV2 _precachedLensIds] */

void FUN_1091e19b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0987c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ba200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091e1a04; end: 1091e1a0b;  */

void FUN_1091e1a04(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 1091e1a0c; end: 1091e1a53; -[SCLensDataProviderV2 setShowBirthdayReplyLens:] */

void FUN_1091e1a0c(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 200) != param_3) {
    *(char *)(param_1 + 200) = (char)param_3;
    iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
    func_0x00010c28d800();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c287390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateLenses_11267f708);
      return;
    }
  }
  return;
}



/* Entry: 1091e1a54; end: 1091e1a63; -[SCLensDataProviderV2 updateLenses] */

void FUN_1091e1a54(long param_1)

{
  *(undefined2 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c287410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateLensesWithFetching_require_11267f728,1,0);
  return;
}



/* Entry: 1091e1a64; end: 1091e1aa3; -[SCLensDataProviderV2 updateLensesWithFetching:requiresAnimation:] */

void FUN_1091e1a64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c28d800(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bedabd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateLensesWithFetching_requir_112594498,param_3,param_4);
  return;
}



/* Entry: 1091e1aa4; end: 1091e1d0b; -[SCLensDataProviderV2 _updateLensesWithFetching:requiresAnimation:] */

void FUN_1091e1aa4(undefined *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar2 = param_1;
  func_0x00010bf2a2c0();
  if (puVar2 == (undefined *)0x0) {
    lVar10 = 8;
  }
  else {
    if (puVar2 != (undefined *)0x1) goto LAB_1091e1af4;
    lVar10 = 9;
  }
  param_1[lVar10] = 1;
LAB_1091e1af4:
  puVar3 = param_1;
  func_0x00010c0987e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063e0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  func_0x00010c0ed600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  if (puVar5 != (undefined *)0x0) {
    puVar5 = param_1;
    func_0x00010c0ed600();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1063c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f2bf38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar4 = puVar2;
  }
  puVar2 = puVar3;
  func_0x00010bfaea40(puVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = param_1[0xc4];
  puVar6 = *(undefined **)(param_1 + 0x60);
  func_0x00010bfae0c0(puVar6,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  if ((bVar1 & 1) == 0) {
    func_0x00010c099060(puVar6,param_2,5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  puVar6 = puVar5;
  func_0x00010bf529e0();
  puVar7 = puVar2;
  func_0x00010bf529e0();
  if (puVar6 < puVar7) {
    puVar7 = puVar5;
    func_0x00010bf529e0(puVar5);
    puVar8 = puVar2;
    func_0x00010bf529e0(puVar2);
    puVar9 = puVar5;
    func_0x00010bf529e0(puVar5);
    puVar6 = puVar2;
    func_0x00010c25e980(puVar2,param_2,puVar7,(long)puVar8 - (long)puVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  func_0x00010c285400(*(undefined8 *)(param_1 + 0x40),param_2,puVar5,puVar6);
  if ((param_3 != 0) && ((param_1[0xc6] & 1) == 0)) {
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    puVar7 = param_1;
    func_0x00010bdf6a40(param_1);
    func_0x00010bfa6660(uVar11,param_2,puVar7);
  }
  puVar7 = PTR____NSArray0__struct_11034ab48;
  if (puVar3 != (undefined *)0x0) {
    puVar7 = puVar3;
  }
  func_0x00010c28d3e0(*(undefined8 *)(param_1 + 0x20),param_2,puVar7);
  func_0x00010bf7dfa0(*(undefined8 *)(param_1 + 0x50),param_2,puVar7,param_4,param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1091e1d0c; end: 1091e1d87;  */

void FUN_1091e1d0c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (uVar2 = param_2, func_0x00010bf1f3c0(), (int)uVar2 != 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
    func_0x00010c28d800();
    if (iVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bdf6a40(param_1);
      func_0x00010bfa6660(uVar2);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091e1d88; end: 1091e1d9f; -[SCLensDataProviderV2 lensDataFetchingMediator:didUpdateContentForLens:contentUpdateType:] */

void FUN_1091e1d88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_didUpdateLens_contentUpdateType__1125bd268,
             param_4,param_5,param_1);
  return;
}



/* Entry: 1091e1da0; end: 1091e1da3; -[SCLensDataProviderV2 lensDataFetchingMediatorDidStartUpdatingLensData:] */

void FUN_1091e1da0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c265e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_syncDownloadableData_1126771b0);
  return;
}



/* Entry: 1091e1da4; end: 1091e1dab; -[SCLensDataProviderV2 lensDataFetchingMediatorDidStopUpdatingLensData:] */

void FUN_1091e1da4(long param_1)

{
  *(undefined2 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1091e1dac; end: 1091e1daf; -[SCLensDataProviderV2 lensDataFetchingMediatorUpdateLenses:] */

void FUN_1091e1dac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c287390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateLenses_11267f708);
  return;
}



/* Entry: 1091e1db0; end: 1091e1dd7; -[SCLensDataProviderV2 lensDataProviderConfiguration] */

void FUN_1091e1db0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091e1dd8; end: 1091e1ddb; -[SCLensDataProviderV2 setPrefetchMode:] */

void FUN_1091e1dd8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea6790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setPrefetchMode__112587388);
  return;
}



/* Entry: 1091e1ddc; end: 1091e1eb7; -[SCLensDataProviderV2 _setPrefetchMode:] */

void FUN_1091e1ddc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _os_unfair_lock_lock(param_1 + 0xc0);
  *(long *)(param_1 + 0xb8) = param_3;
  _os_unfair_lock_unlock(param_1 + 0xc0);
  if (param_3 == 1) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x1091e1e60;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000107c312d0("APPSTORE",&puStack_48);
  }
  return;
}



/* Entry: 1091e1eb8; end: 1091e1eeb; -[SCLensDataProviderV2 _prefetchMode] */

undefined8 FUN_1091e1eb8(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0xc0);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  _os_unfair_lock_unlock(param_1 + 0xc0);
  return uVar1;
}



/* Entry: 1091e1eec; end: 1091e1f4b; -[SCLensDataProviderV2 didEndDisplayingLens:withContext:] */

void FUN_1091e1eec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c0978e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75920();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e1f4c; end: 1091e1fd3; -[SCLensDataProviderV2 didDrawIcon:forLens:atIndex:withContext:] */

void FUN_1091e1f4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0978e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75580();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e1fd4; end: 1091e200f; -[SCLensDataProviderV2 didHideLensesWithContext:] */

void FUN_1091e1fd4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0978e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e2010; end: 1091e20b7; -[SCLensDataProviderV2 didActivateLens:withContext:] */

void FUN_1091e2010(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c0978e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72240();
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c079580();
  _objc_release(param_3);
  if (((uVar1 & 1) == 0) && ((*(byte *)(param_1 + 0xc5) & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bdf6a40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bfa56b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar2,PTR_s_fetchCachedDownloadableLensesWit_1125c6f50,param_1,1);
    return;
  }
  return;
}



/* Entry: 1091e20b8; end: 1091e2117; -[SCLensDataProviderV2 didSelectLens:withContext:] */

void FUN_1091e20b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c0978e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7ab80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e2118; end: 1091e2177; -[SCLensDataProviderV2 didUpdateActiveLensOrder:withContext:] */

void FUN_1091e2118(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c0978e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7df60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e2178; end: 1091e21d7; -[SCLensDataProviderV2 willDisplayLens:withContext:] */

void FUN_1091e2178(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c0978e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6160();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e21d8; end: 1091e2237; -[SCLensDataProviderV2 didUpdateDisplayedLens:withContext:] */

void FUN_1091e21d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c0978e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e180();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e2238; end: 1091e2273; -[SCLensDataProviderV2 willShowLensesWithContext:] */

void FUN_1091e2238(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0978e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e2274; end: 1091e227b; -[SCLensDataProviderV2 showBirthdayReplyLens] */

undefined1 FUN_1091e2274(long param_1)

{
  return *(undefined1 *)(param_1 + 200);
}



/* Entry: 1091e227c; end: 1091e22ab; -[SCLensDataProviderV2 setMetadataProviderSettings:] */

void FUN_1091e227c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e22ac; end: 1091e23cb; -[SCLensDataProviderV2 .cxx_destruct] */

void FUN_1091e22ac(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
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
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1091e23cc; end: 1091e245f; +[SCMetadataLocalHelper cachedLensesWithPlaceholderObservable:centralizedDataStore:] */

void FUN_1091e23cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1091e2460;
  puStack_30 = &UNK_1108eb990;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010c2656e0(param_3,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1091e2460; end: 1091e263f;  */

void FUN_1091e2460(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  func_0x00010bf97e80(param_2);
  puVar3 = puVar1;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = puVar1;
    func_0x00010c0b8600(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)(param_1 + 0x20);
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf272a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    _objc_retain(puVar2);
    _objc_retain(puVar1);
    puVar3 = puVar6;
    func_0x00010c0b8600(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(param_2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091e2640; end: 1091e26c3;  */

void FUN_1091e2640(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c070fa0();
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091e26c4; end: 1091e26cb;  */

void FUN_1091e26c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 1091e26cc; end: 1091e27ab;  */

void FUN_1091e26cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0d3c80();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  func_0x00010bf97e80(param_2);
  _objc_release(param_2);
  uVar1 = uVar2;
  func_0x00010bf51e00(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091e27ac; end: 1091e28b7;  */

void FUN_1091e27ac(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    _objc_retain(uVar2);
    func_0x00010c0c0760(param_2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091e28b8; end: 1091e28fb;  */

void FUN_1091e28b8(long param_1,undefined8 param_2)

{
  func_0x00010bf13c00(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091e28fc; end: 1091e29f3; -[SCSingleLensCameraLensDataProvider initWithLens:dataFetcher:applicableContext:lensDataConfig:] */

undefined1 *
FUN_1091e28fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112700df0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined2 *)((long)puVar1 + 0x10) = 0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ddd18;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 0x20));
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


