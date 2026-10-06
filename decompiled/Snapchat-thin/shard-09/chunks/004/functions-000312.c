/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106dabe70; end: 106dabf77;  */

void FUN_106dabe70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = uVar4;
  func_0x00010be6e3c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be846e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106dabf78; end: 106dac1eb; -[SCMemoriesSemanticSearchResolver locallyRefreshedPublishedResult:] */

void FUN_106dabf78(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c154000();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010bf9f420();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = puVar2;
    func_0x00010c0c1c20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bf0a0e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar6 = puVar2;
    func_0x00010c0c1c20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar6);
        }
        uVar7 = *(undefined8 *)((long)puVar9 * 8);
        func_0x00010bf97200(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(uVar7);
        puVar9 = puVar9 + 1;
      } while (puVar4 != puVar9);
      puVar4 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    puVar4 = param_1;
    func_0x00010be6e3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c13cdc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be846e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  else {
    puVar5 = param_1;
    func_0x00010be6e3c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c13cdc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be846e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106dac1ec; end: 106dac233; -[SCMemoriesSemanticSearchResolver .cxx_destruct] */

void FUN_106dac1ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106dac234; end: 106dac503; -[SCMemoriesInlineSearchDataSourceEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dac234(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126d28b8;
  _objc_alloc(PTR_PTR_1126d28b8);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11275e2fc;
    _objc_loadWeakRetained(lVar9);
  }
  lVar2 = lVar9;
  func_0x00010c0c9740(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02abe0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar9);
  puVar3 = PTR_PTR_1126d28c0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11275e308;
    _objc_loadWeakRetained(lVar9);
  }
  lVar2 = lVar9;
  func_0x00010c0c8780(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008820(puVar3,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar9);
  puVar4 = PTR_PTR_1126d28c8;
  _objc_alloc();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11275e304;
    _objc_loadWeakRetained(lVar9);
  }
  lVar2 = lVar9;
  func_0x00010c15b240(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044200(puVar4,param_2,lVar2,puVar1,puVar3);
  _objc_release(lVar2);
  _objc_release(lVar9);
  puVar5 = PTR_PTR_1126d28d0;
  _objc_alloc(PTR_PTR_1126d28d0);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11275e2f8;
    _objc_loadWeakRetained(lVar9);
  }
  lVar2 = lVar9;
  func_0x00010bfbd5c0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11275e2f4;
    _objc_loadWeakRetained(lVar10);
  }
  lVar6 = lVar10;
  func_0x00010c0cadc0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11275e300;
    _objc_loadWeakRetained(lVar11);
  }
  lVar7 = lVar11;
  func_0x00010c0c8940(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017000(puVar5,param_2,lVar2,lVar6,lVar7,puVar1,puVar4);
  _objc_release(lVar7);
  _objc_release(lVar11);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(lVar2);
  _objc_release(lVar9);
  puVar8 = PTR_PTR_1126d28d8;
  _objc_alloc(PTR_PTR_1126d28d8);
  func_0x00010c01df60();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11275e2ec),param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106dac504; end: 106dac587; -[SCMemoriesInlineSearchDataSourceEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dac504(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275e2ec,0);
  _objc_destroyWeak(param_1 + _DAT_11275e308);
  _objc_destroyWeak(param_1 + _DAT_11275e304);
  _objc_destroyWeak(param_1 + _DAT_11275e300);
  _objc_destroyWeak(param_1 + _DAT_11275e2fc);
  _objc_destroyWeak(param_1 + _DAT_11275e2f8);
  _objc_destroyWeak(param_1 + _DAT_11275e2f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275e2f0);
  return;
}



/* Entry: 106dac588; end: 106dac62b; -[SCMemoriesSemanticSearchSubmissionController initWithDataSource:experimentService:] */

undefined1 *
FUN_106dac588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6e28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    func_0x00010bea9160(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106dac62c; end: 106dac7ff; -[SCMemoriesSemanticSearchSubmissionController _setUpDebounce] */

void FUN_106dac62c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c15b200();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar4;
  _objc_release(uVar9);
  puVar4 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar4;
  _objc_release(uVar9);
  puVar5 = auStack_58;
  _objc_initWeak(puVar5,param_1);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 1000;
  if (0 < lVar3) {
    lVar2 = lVar3;
  }
  func_0x00010bf65f60((double)lVar2 / 1000.0,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar9;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010c0e0ec0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar8 = uVar7;
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e00(uVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar9);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106dac800; end: 106dac833;  */

void FUN_106dac800(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be17760(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106dac834; end: 106dac8a3; -[SCMemoriesSemanticSearchSubmissionController _isSemanticSearchActive] */

undefined8 FUN_106dac834(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c07d760();
  if ((int)lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07d780();
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 106dac8a4; end: 106dac937; -[SCMemoriesSemanticSearchSubmissionController queryDidChange:] */

void FUN_106dac8a4(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be43a80();
  if (((int)lVar1 == 0) || (uVar2 = param_3, func_0x00010bfd5ae0(), (uVar2 & 1) == 0)) {
    func_0x00010bf2dba0(param_1);
  }
  else {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(ulong *)(param_1 + 0x28) = param_3;
    _objc_release(uVar3);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1fbe40();
    _objc_release(lVar1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dac938; end: 106dac997; -[SCMemoriesSemanticSearchSubmissionController submitNow:] */

void FUN_106dac938(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be43a80();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar2);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c25f800();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dac998; end: 106dac9d3; -[SCMemoriesSemanticSearchSubmissionController cancel] */

void FUN_106dac998(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf2e4e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106dac9d4; end: 106daca53; -[SCMemoriesSemanticSearchSubmissionController _fireDebounce] */

void FUN_106dac9d4(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010be43a80();
  if ((int)lVar3 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar3);
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = 0;
      _objc_release(uVar1);
      uVar2 = *(ulong *)(param_1 + 0x38);
      if ((uVar2 == 0) || ((**(code **)(uVar2 + 0x10))(), (uVar2 & 1) == 0)) {
        param_1 = param_1 + 8;
        _objc_loadWeakRetained(param_1);
        func_0x00010c25f800();
        _objc_release(param_1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 106daca54; end: 106daca6b; -[SCMemoriesSemanticSearchSubmissionController tabEligibility] */

void FUN_106daca54(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106daca6c; end: 106daca77; -[SCMemoriesSemanticSearchSubmissionController setTabEligibility:] */

void FUN_106daca6c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 106daca78; end: 106daca7f; -[SCMemoriesSemanticSearchSubmissionController debounceAutoApplyHandler] */

undefined8 FUN_106daca78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106daca80; end: 106daca87; -[SCMemoriesSemanticSearchSubmissionController setDebounceAutoApplyHandler:] */

void FUN_106daca80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106daca88; end: 106dacaeb; -[SCMemoriesSemanticSearchSubmissionController .cxx_destruct] */

void FUN_106daca88(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106dacaec; end: 106daceb7; -[SCMemoriesFacetSuggestionData labelForLanguageIdentifier:] */

void FUN_106dacaec(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010c09e2e0(PTR__OBJC_CLASS___NSLocale_1126af788,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain(param_1);
  _objc_retain(puVar12);
  puVar3 = param_1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d0e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = param_1;
  if (puVar4 == (undefined *)0x0) {
    FUN_106daceb8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = param_1;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2bedc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
    _objc_alloc_init(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
    if (puVar6 == (undefined *)0x0) {
      puVar11 = (undefined *)0x7d0;
    }
    else {
      puVar11 = puVar6;
      func_0x00010c067fc0(puVar6);
    }
    func_0x00010c2278a0(puVar5,param_2,puVar11);
    puVar11 = puVar4;
    func_0x00010c067fc0(puVar4);
    func_0x00010c1c8fc0(puVar5,param_2,puVar11);
    func_0x00010c189d40(puVar5,param_2,0xf);
    uVar13 = *(undefined8 *)PTR__NSCalendarIdentifierGregorian_11034aa28;
    puVar11 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x00010bf27bc0(PTR__OBJC_CLASS___NSCalendar_1126aeec8,param_2,uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar11;
    func_0x00010bf650e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    if (puVar7 == (undefined *)0x0) {
      FUN_106daceb8(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e86718;
      if (puVar6 != (undefined *)0x0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e866f8;
      }
      _objc_retain(ppuVar1);
      _objc_retain(puVar12);
      puVar3 = puVar12;
      if (puVar12 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
        func_0x00010bf5f320();
        _objc_retainAutoreleasedReturnValue();
      }
      if (puRam00000001136c7dd8 == (undefined *)0x0) {
        puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puRam00000001136c7dd8;
        puRam00000001136c7dd8 = puVar8;
        _objc_release(puVar11);
      }
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar8 = puVar3;
      func_0x00010c09e220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar11,param_2,&PTR____CFConstantStringClassReference_110e86738);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar8 = puRam00000001136c7dd8;
      func_0x00010c0e00e0(puRam00000001136c7dd8,param_2,puVar11);
      _objc_retainAutoreleasedReturnValue();
      if (puVar8 == (undefined *)0x0) {
        puVar9 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
        _objc_alloc_init(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
        func_0x00010c1bf3e0();
        puVar10 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
        func_0x00010bf27bc0(PTR__OBJC_CLASS___NSCalendar_1126aeec8,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c175640(puVar9,param_2,puVar10);
        _objc_release(puVar10);
        puVar10 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
        func_0x00010bf650c0(PTR__OBJC_CLASS___NSDateFormatter_1126af778,param_2,ppuVar1,0,puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c189b60(puVar9,param_2,puVar10);
        _objc_release(puVar10);
        func_0x00010c1d0640(puRam00000001136c7dd8,param_2,puVar9,puVar11);
      }
      else {
        _objc_retain(puVar8);
        puVar9 = puVar8;
      }
      _objc_release(puVar8);
      _objc_release(puVar11);
      _objc_release(puVar3);
      _objc_release(ppuVar1);
      puVar3 = puVar9;
      func_0x00010c25d400(puVar9,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
    }
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  _objc_release(puVar4);
  _objc_release(puVar12);
  _objc_release(param_1);
  _objc_release(puVar12);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106daceb8; end: 106dacf8f;  */

void FUN_106daceb8(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain();
  ppuVar1 = param_1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c2bedc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar3 = param_1;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c09f000();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar1 = ppuVar4;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
  }
  else {
    ppuVar1 = ppuVar2;
    func_0x00010c25d700(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106dacf90; end: 106dad38b; -[SCMemoriesInlineSearchAccessoryCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106dacf90(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  long lVar9;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f6e30;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar7 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    lVar9 = (long)_DAT_11275e328;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar2;
    _objc_release(uVar8);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar9));
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4025555555555555);
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar9));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar9));
    puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_a8 = uVar8;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar8;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    uStack_b8 = uVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_c8 = uVar4;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar9);
    uStack_e0 = uVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = unaff_x20;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = unaff_x22;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_d8);
    _objc_release(puVar2);
    _objc_release(uVar8);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
    _objc_release(uVar5);
    _objc_release(uStack_e0);
    _objc_release(puStack_d0);
    _objc_release(puStack_c0);
    _objc_release(uStack_c8);
    _objc_release(uStack_b8);
    _objc_release(puStack_b0);
    _objc_release(puStack_a0);
    _objc_release(uStack_a8);
    func_0x00010c1af000(puVar1);
    func_0x00010c161080();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_106dad38c;
  puStack_118 = PTR_PTR_1126f6e30;
  puStack_120 = puVar7;
  uStack_110 = unaff_x22;
  puStack_108 = unaff_x21;
  puStack_100 = unaff_x20;
  puStack_f8 = puVar1;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_120,PTR_s_prepareForReuse_112620008);
  lVar9 = (long)_DAT_11275e328;
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)((long)puVar7 + lVar9));
  uVar8 = *(undefined8 *)((long)puVar7 + lVar9);
  func_0x00010c08c0e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)((long)puVar7 + lVar9);
  func_0x00010c08c0e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar8);
  func_0x00010c161080(puVar7);
  return puVar7;
}



/* Entry: 106dad38c; end: 106dad443; -[SCMemoriesInlineSearchAccessoryCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dad38c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f6e30;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  lVar2 = (long)_DAT_11275e328;
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar1);
  func_0x00010c161080(param_1);
  return;
}



/* Entry: 106dad444; end: 106dad497; -[SCMemoriesInlineSearchAccessoryCell setTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dad444(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_106daf1e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275e328),param_2,param_3);
  func_0x00010c161020(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dad498; end: 106dad5af; -[SCMemoriesInlineSearchAccessoryCell setActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dad498(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11275e328;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c1733a0(0,uVar1);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar1);
    uVar3 = *(ulong *)PTR__UIAccessibilityTraitButton_110345920;
  }
  else {
    func_0x00010c1733a0(0x3ff8000000000000,uVar1);
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar1);
    _objc_release(puVar2);
    uVar3 = *(ulong *)PTR__UIAccessibilityTraitSelected_110345958 |
            *(ulong *)PTR__UIAccessibilityTraitButton_110345920;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c161090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAccessibilityTraits__112635e40,uVar3);
  return;
}



/* Entry: 106dad5b0; end: 106dad613; -[SCMemoriesInlineSearchAccessoryCell setHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dad5b0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6e30;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setHighlighted__112647c38);
  uVar1 = 0x3fe0000000000000;
  if (param_3 == 0) {
    uVar1 = 0x3ff0000000000000;
  }
  func_0x00010c1677c0(uVar1,*(undefined8 *)(param_1 + _DAT_11275e328));
  return;
}



/* Entry: 106dad614; end: 106dad627; -[SCMemoriesInlineSearchAccessoryCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dad614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275e328,0);
  return;
}



/* Entry: 106dad628; end: 106dad77f; -[SCMemoriesInlineSearchAccessoryView initWithInlineSearchDataSource:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106dad628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  puStack_48 = PTR_PTR_1126f6e38;
  uStack_50 = param_2;
  _objc_msgSendSuper2(0,0,param_1,0x4052000000000000,&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar2 + (long)_DAT_11275e32c),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar2 + (long)_DAT_11275e330),param_4);
    _objc_retain();
    func_0x00010bef9980(param_4);
    _objc_release(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11275e334);
    *(undefined **)((long)puVar2 + (long)_DAT_11275e334) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar3);
    func_0x00010beacda0(puVar2);
    func_0x00010beab960(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 106dad780; end: 106dada2b; -[SCMemoriesInlineSearchAccessoryView _setupGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dad780(undefined8 param_1,undefined8 param_2)

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
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1677c0(0x3fe0000000000000);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010bea4300(param_1,param_2,puVar1);
  func_0x00010befbb60(param_1,param_2,puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  puStack_b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  puStack_90 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uVar10;
  func_0x00010bf493a0(puVar2,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  puStack_a0 = puVar2;
  puStack_88 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  puStack_a8 = puVar3;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(puVar3,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  puStack_80 = puVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf493a0(puVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_78 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf493a0(puVar6,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010beef8c0(puStack_b0);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(uVar10);
  _objc_release(puStack_a8);
  _objc_release(puStack_a0);
  _objc_release(uStack_98);
  _objc_release(puStack_90);
  puVar2 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  pcStack_b8 = FUN_106dada2c;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = puVar8;
  puStack_e8 = puVar7;
  uStack_e0 = param_1;
  puStack_d8 = puVar6;
  puStack_d0 = puVar5;
  puStack_c8 = puVar1;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(puVar2);
  func_0x00010c19f0e0(puVar3);
  func_0x00010c1bff00(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantArray_111181268);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = puVar1;
  puStack_108 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_100 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_108,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = puVar9;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  func_0x00010c1c2c00(puVar5,param_2,puVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1c82c0(0x4018000000000000);
  func_0x00010c1c8300(0x4018000000000000,puVar1);
  func_0x00010c1f7ac0(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010bf20c00(puVar3);
  func_0x00010c014040(puVar2,param_2,puVar1);
  lVar11 = (long)_DAT_11275e338;
  uVar10 = *(undefined8 *)(puVar3 + lVar11);
  *(undefined **)(puVar3 + lVar11) = puVar2;
  _objc_release(uVar10);
  func_0x00010c1b6de0(*(undefined8 *)(puVar3 + lVar11),param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(puVar3 + lVar11),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1f7e20(*(undefined8 *)(puVar3 + lVar11),param_2,0);
  func_0x00010c2025c0(*(undefined8 *)(puVar3 + lVar11),param_2,0);
  func_0x00010c2026e0(*(undefined8 *)(puVar3 + lVar11),param_2,0);
  func_0x00010c167a00(*(undefined8 *)(puVar3 + lVar11),param_2,1);
  func_0x00010c181f80(0x403c000000000000,0x4028000000000000,0x4028000000000000,0x4028000000000000,
                      *(undefined8 *)(puVar3 + lVar11));
  uVar10 = *(undefined8 *)(puVar3 + lVar11);
  puVar2 = PTR_PTR_1126d28e0;
  _objc_opt_class(PTR_PTR_1126d28e0);
  puVar5 = PTR_PTR_1126d28e0;
  _objc_opt_class(PTR_PTR_1126d28e0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar10,param_2,puVar2,puVar5);
  _objc_release(puVar5);
  func_0x00010c189840(*(undefined8 *)(puVar3 + lVar11),param_2,puVar3);
  func_0x00010c18b5e0(*(undefined8 *)(puVar3 + lVar11),param_2,puVar3);
  func_0x00010befbb60(puVar3,param_2,*(undefined8 *)(puVar3 + lVar11));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106dada2c; end: 106dadb97; -[SCMemoriesInlineSearchAccessoryView _setGradientBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dada2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(puVar1);
  func_0x00010c1bff00(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantArray_111181268);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = puVar2;
  puStack_58 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  uVar6 = param_3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1c2c00(uVar6,param_2,puVar1);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1c82c0(0x4018000000000000);
  func_0x00010c1c8300(0x4018000000000000,puVar2);
  func_0x00010c1f7ac0(puVar2,param_2,1);
  puVar3 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010bf20c00(puVar1);
  func_0x00010c014040(puVar3,param_2,puVar2);
  lVar7 = (long)_DAT_11275e338;
  uVar6 = *(undefined8 *)(puVar1 + lVar7);
  *(undefined **)(puVar1 + lVar7) = puVar3;
  _objc_release(uVar6);
  func_0x00010c1b6de0(*(undefined8 *)(puVar1 + lVar7),param_2,0);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(puVar1 + lVar7),param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1f7e20(*(undefined8 *)(puVar1 + lVar7),param_2,0);
  func_0x00010c2025c0(*(undefined8 *)(puVar1 + lVar7),param_2,0);
  func_0x00010c2026e0(*(undefined8 *)(puVar1 + lVar7),param_2,0);
  func_0x00010c167a00(*(undefined8 *)(puVar1 + lVar7),param_2,1);
  func_0x00010c181f80(0x403c000000000000,0x4028000000000000,0x4028000000000000,0x4028000000000000,
                      *(undefined8 *)(puVar1 + lVar7));
  uVar6 = *(undefined8 *)(puVar1 + lVar7);
  puVar3 = PTR_PTR_1126d28e0;
  _objc_opt_class(PTR_PTR_1126d28e0);
  puVar4 = PTR_PTR_1126d28e0;
  _objc_opt_class(PTR_PTR_1126d28e0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar6,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  func_0x00010c189840(*(undefined8 *)(puVar1 + lVar7),param_2,puVar1);
  func_0x00010c18b5e0(*(undefined8 *)(puVar1 + lVar7),param_2,puVar1);
  func_0x00010befbb60(puVar1,param_2,*(undefined8 *)(puVar1 + lVar7));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106dadb98; end: 106dadd1b; -[SCMemoriesInlineSearchAccessoryView _setupCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dadb98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1c82c0(0x4018000000000000);
  func_0x00010c1c8300(0x4018000000000000,puVar1);
  func_0x00010c1f7ac0(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010bf20c00(param_1);
  func_0x00010c014040(puVar2,param_2,puVar1);
  lVar5 = (long)_DAT_11275e338;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  func_0x00010c1b6de0(*(undefined8 *)(param_1 + lVar5),param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1f7e20(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c167a00(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c181f80(0x403c000000000000,0x4028000000000000,0x4028000000000000,0x4028000000000000,
                      *(undefined8 *)(param_1 + lVar5));
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  puVar2 = PTR_PTR_1126d28e0;
  _objc_opt_class(PTR_PTR_1126d28e0);
  puVar3 = PTR_PTR_1126d28e0;
  _objc_opt_class(PTR_PTR_1126d28e0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar4,param_2,puVar2,puVar3);
  _objc_release(puVar3);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106dadd1c; end: 106dadddb; -[SCMemoriesInlineSearchAccessoryView willMoveToWindow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dadd1c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f6e38;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_willMoveToWindow__112687408);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_11275e334);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      lVar4 = (long)_DAT_11275e33c;
      lVar1 = *(long *)(param_1 + lVar4);
      func_0x00010bf529e0();
      if (lVar1 == 0) {
        lVar1 = param_1 + _DAT_11275e330;
        _objc_loadWeakRetained();
        lVar2 = lVar1;
        func_0x00010c154420();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + lVar4);
        *(long *)(param_1 + lVar4) = lVar2;
        _objc_release(uVar3);
        _objc_release(lVar1);
        func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_11275e338));
      }
    }
  }
  return;
}



/* Entry: 106dadddc; end: 106dadfa7; -[SCMemoriesInlineSearchAccessoryView memoriesInlineSearchDataSource:didChangeSearchResults:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dadddc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *unaff_x23;
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
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar8 = param_4;
  func_0x00010bf529e0(param_4);
  func_0x00010bf0a0e0(puVar1,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_4);
  lVar8 = param_4;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(param_4);
        }
        unaff_x23 = *(undefined **)(lStack_118 + lVar7 * 8);
        puVar2 = unaff_x23;
        func_0x00010c1540a0();
        if (puVar2 != (undefined *)0x4) {
          func_0x00010befa120(puVar1,param_2,unaff_x23);
        }
        lVar7 = lVar7 + 1;
      } while (lVar8 != lVar7);
      lVar8 = param_4;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(param_4);
  puVar2 = puVar1;
  func_0x00010bf529e0();
  puVar3 = puVar1;
  if (puVar2 == (undefined *)0x0) {
    unaff_x23 = (undefined *)(param_1 + _DAT_11275e330);
    _objc_loadWeakRetained();
    puVar3 = unaff_x23;
    func_0x00010c154420();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar8 = (long)_DAT_11275e33c;
  _objc_retain(puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar3;
  _objc_release(uVar4);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar3);
    _objc_release(unaff_x23);
  }
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_11275e338));
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = (undefined *)puVar5;
  }
  lVar8 = (long)_DAT_11275e334;
  _objc_retain(puVar1);
  uVar4 = *(undefined8 *)(param_4 + lVar8);
  *(undefined **)(param_4 + lVar8) = puVar1;
  _objc_retain(puVar5);
  _objc_release(uVar4);
  func_0x00010c128b60(*(undefined8 *)(param_4 + _DAT_11275e338));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106dadfa8; end: 106dae023; -[SCMemoriesInlineSearchAccessoryView updateWithFacetSuggestions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dadfa8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  lVar3 = (long)_DAT_11275e334;
  _objc_retain(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_retain(param_3);
  _objc_release(uVar2);
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_11275e338));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dae024; end: 106dae09f; -[SCMemoriesInlineSearchAccessoryView _isActiveFacetKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106dae024(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275e330;
  _objc_retain(param_3);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1595e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf4b900();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106dae0a0; end: 106dae177; -[SCMemoriesInlineSearchAccessoryView _displayTitleForFacetSuggestion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dae0a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_PTR_1126c3ab8;
  lVar3 = (long)_DAT_11275e340;
  _objc_retain(param_3);
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  FUN_106daf27c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c086560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf85ac0(puVar2,param_2,lVar3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
  uVar1 = param_3;
  func_0x00010c0876a0(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106dae178; end: 106dae1bb; -[SCMemoriesInlineSearchAccessoryView collectionView:numberOfItemsInSection:] */

/* WARNING: Possible PIC construction at 0x000106dae198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106dae19c) */
/* WARNING: Removing unreachable block (ram,0x000106dae1a0) */
/* WARNING: Removing unreachable block (ram,0x000106dae1ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dae178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275e334),PTR_s_count_1125b2420);
  return;
}



/* Entry: 106dae1bc; end: 106dae36f; -[SCMemoriesInlineSearchAccessoryView collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dae1bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126d28e0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  lVar5 = (long)_DAT_11275e334;
  lVar3 = *(long *)(param_1 + lVar5);
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_11275e33c);
    uVar4 = param_4;
    func_0x00010c0840e0(param_4);
    _objc_release(param_4);
    func_0x00010c0dfd40(uVar6,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c13cdc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(uVar2,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar6);
    func_0x00010c162480(uVar2,param_2,0);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + lVar5);
    uVar4 = param_4;
    func_0x00010c0840e0(param_4);
    _objc_release(param_4);
    func_0x00010c0dfd40(uVar6,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be04fa0(param_1,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(uVar2,param_2,lVar3);
    _objc_release(lVar3);
    uVar4 = uVar6;
    func_0x00010c086560(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3df20(param_1,param_2,uVar4);
    func_0x00010c162480(uVar2,param_2,param_1);
    _objc_release(uVar4);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106dae370; end: 106dae50b; -[SCMemoriesInlineSearchAccessoryView collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dae370(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  func_0x00010c0840e0();
  lVar7 = (long)_DAT_11275e334;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = (long)_DAT_11275e33c;
    uVar2 = *(ulong *)(param_1 + lVar1);
    func_0x00010bf529e0();
    if (uVar2 <= param_4) {
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c0dfd40(uVar3,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c13cdc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_106daf1e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11275e340;
    lVar1 = param_1 + lVar7;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c212f20();
    _objc_release(lVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar1 = param_1 + _DAT_11275e32c;
    _objc_loadWeakRetained(lVar1);
    lVar7 = param_1 + lVar7;
    _objc_loadWeakRetained(lVar7);
    lVar6 = lVar7;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0653a0(lVar1,param_2,param_1,lVar6);
    _objc_release(lVar6);
  }
  else {
    uVar2 = *(ulong *)(param_1 + lVar7);
    func_0x00010bf529e0();
    if (uVar2 <= param_4) {
      return;
    }
    lVar1 = param_1 + _DAT_11275e344;
    _objc_loadWeakRetained(lVar1);
    lVar7 = *(long *)(param_1 + lVar7);
    func_0x00010c0dfd40(lVar7,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c065380(lVar1,param_2,param_1,lVar7);
  }
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106dae50c; end: 106dae6b3; -[SCMemoriesInlineSearchAccessoryView collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_106dae50c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_11275e334;
  lVar4 = *(long *)(param_3 + lVar5);
  _objc_retain(param_7);
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_3 + _DAT_11275e33c);
    uVar1 = param_7;
    func_0x00010c0840e0(param_7);
    _objc_release(param_7);
    func_0x00010c0dfd40(lVar4,param_4,uVar1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = lVar4;
    func_0x00010c13cdc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = *(long *)(param_3 + lVar5);
    uVar1 = param_7;
    func_0x00010c0840e0(param_7);
    _objc_release(param_7);
    func_0x00010c0dfd40(lVar4,param_4,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be04fa0(param_3,param_4,lVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar4);
  uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  dVar6 = 15.0;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_50,&uStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d660(param_3,param_4,puVar3);
  dVar7 = dVar6;
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar8._0_8_ = dVar6 + 24.0;
    auVar8._8_8_ = 0x4040000000000000;
    return auVar8;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(param_3 + _DAT_11275e340);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = dVar7;
  return auVar9;
}



/* Entry: 106dae6b4; end: 106dae6d3; -[SCMemoriesInlineSearchAccessoryView searchField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dae6b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275e340);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106dae6d4; end: 106dae6e7; -[SCMemoriesInlineSearchAccessoryView setSearchField:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dae6d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275e340,param_3);
  return;
}



/* Entry: 106dae6e8; end: 106dae707; -[SCMemoriesInlineSearchAccessoryView facetDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dae6e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275e344);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106dae708; end: 106dae71b; -[SCMemoriesInlineSearchAccessoryView setFacetDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dae708(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275e344,param_3);
  return;
}



/* Entry: 106dae71c; end: 106dae79b; -[SCMemoriesInlineSearchAccessoryView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dae71c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275e344);
  _objc_destroyWeak(param_1 + _DAT_11275e340);
  _objc_storeStrong(param_1 + _DAT_11275e334,0);
  _objc_destroyWeak(param_1 + _DAT_11275e330);
  _objc_storeStrong(param_1 + _DAT_11275e33c,0);
  _objc_destroyWeak(param_1 + _DAT_11275e32c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275e338,0);
  return;
}



/* Entry: 106dae79c; end: 106dae86b; -[SCMemoriesInlineSearchEmptyStateView initWithType:] */

undefined1 * FUN_106dae79c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  puStack_38 = PTR_PTR_1126f6e40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar1);
    func_0x00010bea2ea0(puVar2);
    func_0x00010bea87c0(puVar2);
    func_0x00010bea35e0(puVar2);
    func_0x00010bea8c00(puVar2);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 106dae86c; end: 106daeaef; -[SCMemoriesInlineSearchEmptyStateView _setContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dae86c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined *puStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar16 = (long)_DAT_11275e348;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar15);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar16));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16),param_2,0);
  puStack_a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  lStack_90 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_98 = lVar9;
  func_0x00010bf493c0(0,lVar2,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  lStack_a0 = lVar2;
  lStack_88 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar3;
  func_0x00010bf493c0(0,uVar3,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  uStack_80 = uVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493c0(0,uVar4,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar16);
  uStack_78 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493c0(0,uVar6,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_a8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(lVar9);
  _objc_release(uVar3);
  _objc_release(lStack_a0);
  _objc_release(lStack_98);
  lVar16 = lStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_106daeaf0;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR__OBJC_CLASS___UILabel_1126aec30;
  lStack_110 = lVar2;
  uStack_108 = uVar4;
  uStack_100 = uVar15;
  uStack_f8 = uVar5;
  lStack_f0 = lVar9;
  uStack_e8 = uVar3;
  lStack_e0 = param_1;
  puStack_d8 = puVar1;
  uStack_d0 = uVar7;
  uStack_c8 = uVar6;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar2 = (long)_DAT_11275e34c;
  uVar15 = *(undefined8 *)(lVar16 + lVar2);
  *(undefined **)(lVar16 + lVar2) = puVar8;
  _objc_release(uVar15);
  func_0x00010c1cfce0(*(undefined8 *)(lVar16 + lVar2),param_2,0);
  func_0x00010c213040(*(undefined8 *)(lVar16 + lVar2),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar16 + lVar2),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar16 + lVar2),param_2,puVar1);
  _objc_release(puVar1);
  lVar17 = (long)_DAT_11275e348;
  func_0x00010befbb60(*(undefined8 *)(lVar16 + lVar17),param_2,*(undefined8 *)(lVar16 + lVar2));
  func_0x00010c219b60(*(undefined8 *)(lVar16 + lVar2),param_2,0);
  puStack_158 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar9 = *(long *)(lVar16 + lVar2);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar16 + lVar17);
  lStack_140 = lVar9;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_148 = uVar15;
  func_0x00010bf493a0(lVar9,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar16 + lVar2);
  lStack_150 = lVar9;
  lStack_138 = lVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar16 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar3;
  func_0x00010bf493c0(0x4041000000000000,uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar16 + lVar2);
  uStack_130 = uVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar16 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar16 + lVar2);
  uStack_128 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar16 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_120 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_138,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_158,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar5);
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar15);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lStack_150);
  _objc_release(uStack_148);
  lVar9 = lStack_140;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_106daedec;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR__OBJC_CLASS___UILabel_1126aec30;
  uStack_1c0 = uVar10;
  uStack_1b8 = uVar6;
  uStack_1b0 = uVar15;
  uStack_1a8 = uVar5;
  uStack_1a0 = uVar4;
  uStack_198 = uVar3;
  puStack_190 = puVar1;
  uStack_188 = uVar7;
  uStack_180 = uVar11;
  uStack_178 = uVar12;
  ppuStack_170 = &puStack_c0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar17 = (long)_DAT_11275e350;
  uVar15 = *(undefined8 *)(lVar9 + lVar17);
  *(undefined **)(lVar9 + lVar17) = puVar8;
  _objc_release(uVar15);
  func_0x00010c1cfce0(*(undefined8 *)(lVar9 + lVar17),param_2,0);
  func_0x00010c213040(*(undefined8 *)(lVar9 + lVar17),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar9 + lVar17),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar9 + lVar17),param_2,puVar1);
  _objc_release(puVar1);
  lVar18 = (long)_DAT_11275e348;
  func_0x00010befbb60(*(undefined8 *)(lVar9 + lVar18),param_2,*(undefined8 *)(lVar9 + lVar17));
  func_0x00010c219b60(*(undefined8 *)(lVar9 + lVar17),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar16 = *(long *)(lVar9 + lVar17);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar9 + lVar18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar16;
  func_0x00010bf493a0(lVar16,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar9 + lVar17);
  lStack_1e8 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar9 + _DAT_11275e34c);
  func_0x00010bf1ff80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar4;
  func_0x00010bf493c0(0x4010000000000000,uVar4,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar9 + lVar17);
  uStack_1e0 = uVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar9 + lVar18);
  func_0x00010c08de00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar9 + lVar17);
  uStack_1d8 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar9 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1d0 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_1e8,4);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar8;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar15);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = lVar16;
  func_0x000108dfd7dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar16 + _DAT_11275e350),param_2,lVar9);
  _objc_release(lVar9);
  if (puVar14 == (undefined *)0x1) {
    func_0x000108dfd7c4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (puVar14 != (undefined *)0x0) {
      return;
    }
    func_0x000108dfd7ac();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c212f20(*(undefined8 *)(lVar16 + _DAT_11275e34c),param_2,lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 106daeaf0; end: 106daedeb; -[SCMemoriesInlineSearchEmptyStateView _setTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106daeaf0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar15 = (long)_DAT_11275e34c;
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar14);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar15),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar15),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar15),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar15),param_2,puVar1);
  _objc_release(puVar1);
  lVar17 = (long)_DAT_11275e348;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar17),param_2,*(undefined8 *)(param_1 + lVar15));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
  puStack_a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar15);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar17);
  lStack_90 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uVar14;
  func_0x00010bf493a0(lVar2,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  lStack_a0 = lVar2;
  lStack_88 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar3;
  func_0x00010bf493c0(0x4041000000000000,uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  uStack_80 = uVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  uStack_78 = uVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_a8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar14);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lStack_a0);
  _objc_release(uStack_98);
  lVar2 = lStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_106daedec;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = PTR__OBJC_CLASS___UILabel_1126aec30;
  uStack_110 = uVar6;
  uStack_108 = uVar5;
  uStack_100 = uVar14;
  uStack_f8 = uVar7;
  uStack_f0 = uVar4;
  uStack_e8 = uVar3;
  puStack_e0 = puVar1;
  uStack_d8 = uVar10;
  uStack_d0 = uVar8;
  uStack_c8 = uVar9;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar16 = (long)_DAT_11275e350;
  uVar14 = *(undefined8 *)(lVar2 + lVar16);
  *(undefined **)(lVar2 + lVar16) = puVar11;
  _objc_release(uVar14);
  func_0x00010c1cfce0(*(undefined8 *)(lVar2 + lVar16),param_2,0);
  func_0x00010c213040(*(undefined8 *)(lVar2 + lVar16),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar2 + lVar16),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar2 + lVar16),param_2,puVar1);
  _objc_release(puVar1);
  lVar18 = (long)_DAT_11275e348;
  func_0x00010befbb60(*(undefined8 *)(lVar2 + lVar18),param_2,*(undefined8 *)(lVar2 + lVar16));
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar16),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar17 = *(long *)(lVar2 + lVar16);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar2 + lVar18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar17;
  func_0x00010bf493a0(lVar17,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar2 + lVar16);
  lStack_138 = lVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + _DAT_11275e34c);
  func_0x00010bf1ff80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bf493c0(0x4010000000000000,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar2 + lVar16);
  uStack_130 = uVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar2 + lVar18);
  func_0x00010c08de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar2 + lVar16);
  uStack_128 = uVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar2 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_120 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_138,4);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar14);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar15);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lVar17;
  func_0x000108dfd7dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar17 + _DAT_11275e350),param_2,lVar2);
  _objc_release(lVar2);
  if (puVar13 == (undefined *)0x1) {
    func_0x000108dfd7c4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (puVar13 != (undefined *)0x0) {
      return;
    }
    func_0x000108dfd7ac();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c212f20(*(undefined8 *)(lVar17 + _DAT_11275e34c),param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106daedec; end: 106daf0e7; -[SCMemoriesInlineSearchEmptyStateView _setDescLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106daedec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar16 = (long)_DAT_11275e350;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar15);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar16),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar16),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar16),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar16),param_2,puVar1);
  _objc_release(puVar1);
  lVar17 = (long)_DAT_11275e348;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar17),param_2,*(undefined8 *)(param_1 + lVar16));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar16);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  lStack_88 = lVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11275e34c);
  func_0x00010bf1ff80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar5;
  func_0x00010bf493c0(0x4010000000000000,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar16);
  uStack_80 = uVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar16);
  uStack_78 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar15);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = lVar2;
  func_0x000108dfd7dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar2 + _DAT_11275e350),param_2,lVar4);
  _objc_release(lVar4);
  if (puVar14 == (undefined *)0x1) {
    func_0x000108dfd7c4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (puVar14 != (undefined *)0x0) {
      return;
    }
    func_0x000108dfd7ac();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c212f20(*(undefined8 *)(lVar2 + _DAT_11275e34c),param_2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106daf0e8; end: 106daf18f; -[SCMemoriesInlineSearchEmptyStateView _setType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106daf0e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000108dfd7dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275e350),param_2,lVar1);
  _objc_release(lVar1);
  if (param_3 == 1) {
    func_0x000108dfd7c4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 0) {
      return;
    }
    func_0x000108dfd7ac();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275e34c),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106daf190; end: 106daf1df; -[SCMemoriesInlineSearchEmptyStateView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106daf190(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275e350,0);
  _objc_storeStrong(param_1 + _DAT_11275e34c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275e348,0);
  return;
}



/* Entry: 106daf1e0; end: 106daf27b;  */

void FUN_106daf1e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    _objc_retain(param_1);
    lVar1 = param_1;
  }
  else {
    lVar2 = param_1;
    func_0x00010c25cfc0(param_1,param_2,&PTR____CFConstantStringClassReference_110e86758,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106daf27c; end: 106daf463;  */

void FUN_106daf27c(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  
  _objc_retain();
  ppuVar3 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  ppuVar3 = param_1;
  func_0x00010c0bbdc0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 == (undefined **)0x0) {
    _objc_retain(ppuVar1);
    ppuVar4 = ppuVar1;
    goto LAB_106daf42c;
  }
  ppuVar4 = param_1;
  func_0x00010bf193c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar3;
  func_0x00010c24d960(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = param_1;
  func_0x00010c26c600(param_1,param_2,ppuVar4,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar3;
  func_0x00010bf940a0(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_1;
  func_0x00010bf94e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = param_1;
  func_0x00010c26c600(param_1,param_2,ppuVar4,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  _objc_release(ppuVar4);
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar7 = (undefined **)0x0;
    if (ppuVar6 == (undefined **)0x0) goto LAB_106daf3e8;
LAB_106daf3b4:
    ppuVar8 = param_1;
    func_0x00010c26c0c0(param_1,param_2,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar7 = param_1;
    func_0x00010c26c0c0(param_1,param_2,ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar6 != (undefined **)0x0) goto LAB_106daf3b4;
LAB_106daf3e8:
    ppuVar8 = (undefined **)0x0;
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar4 = ppuVar7;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar2 = ppuVar8;
  }
  func_0x00010c25ce40(ppuVar4,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
LAB_106daf42c:
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 106daf464; end: 106daf70f; -[SCMemoriesInlineSearchDataSourceListenerAnnouncer addListener:] */

undefined8 FUN_106daf464(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_11097b4d0;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_106daf710(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_106daf850(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_106daf618:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_106daf638;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_106daf710(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_106daf710(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_106daf850(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_106daf618;
    }
  }
  uVar9 = 1;
LAB_106daf638:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 106daf710; end: 106daf84f;  */

void FUN_106daf710(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_106dafc40();
LAB_106daf84c:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_106daf84c;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 106daf850; end: 106daf897;  */

void FUN_106daf850(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 106daf898; end: 106dafac7; -[SCMemoriesInlineSearchDataSourceListenerAnnouncer removeListener:] */

void FUN_106daf898(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_106dafa4c;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_106daf900;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_106daf850(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_106dafa4c;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_106daf900:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_11097b4d0;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_106daf710(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_106daf850(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_106dafa4c;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_106dafa4c:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dafac8; end: 106dafbf7; -[SCMemoriesInlineSearchDataSourceListenerAnnouncer memoriesInlineSearchDataSource:didChangeSearchResults:] */

void FUN_106dafac8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar8 = param_1 + 0x48;
  __ZNSt3__112__get_sp_mutEPKv(lVar8);
  __ZNSt3__18__sp_mut4lockEv();
  plVar2 = *(long **)(param_1 + 0x48);
  plVar3 = *(long **)(param_1 + 0x50);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  __ZNSt3__18__sp_mut6unlockEv(lVar8);
  if (plVar2 != (long *)0x0) {
    lVar4 = plVar2[1];
    for (lVar8 = *plVar2; lVar8 != lVar4; lVar8 = lVar8 + 8) {
      lVar7 = lVar8;
      _objc_loadWeakRetained(lVar8);
      func_0x00010c0c8c00();
      _objc_release(lVar7);
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3 + 1;
    do {
      lVar8 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dafbf8; end: 106dafc1f; -[SCMemoriesInlineSearchDataSourceListenerAnnouncer .cxx_destruct] */

void FUN_106dafbf8(long param_1)

{
  FUN_106dafcf0(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 106dafc20; end: 106dafc3f; -[SCMemoriesInlineSearchDataSourceListenerAnnouncer .cxx_construct] */

void FUN_106dafc20(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 106dafc40; end: 106dafc53;  */

void FUN_106dafc40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = &PTR_FUN_11097b4d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106dafc54; end: 106dafc63;  */

void FUN_106dafc54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11097b4d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106dafc64; end: 106dafc83;  */

void FUN_106dafc64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11097b4d0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106dafc84; end: 106dafceb;  */

void FUN_106dafc84(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 106dafcec; end: 106dafcef;  */

void FUN_106dafcec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106dafcf0; end: 106dafd47;  */

long FUN_106dafcf0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 106dafd48; end: 106dafdb3; +[SCMemoriesSemanticSearchResult backendEntryIDsWithEntryIDs:] */

void FUN_106dafd48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d28a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106dafdb4; end: 106dafdfb; +[SCMemoriesSemanticSearchResult empty] */

void FUN_106dafdb4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d28a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106dafdfc; end: 106dafe63; +[SCMemoriesSemanticSearchResult facetSnapIDsWithSnapIDs:] */

void FUN_106dafdfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d28a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106dafe64; end: 106dafea7; -[SCMemoriesSemanticSearchResult internalInit] */

void FUN_106dafe64(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f6e48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106dafea8; end: 106daff57; -[SCMemoriesSemanticSearchResult matchEmpty:facetSnapIDs:backendEntryIDs:] */

void FUN_106dafea8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_106daff34;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if (lVar2 != 1) {
      if ((lVar2 == 0) && (param_3 != 0)) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
      goto LAB_106daff34;
    }
    if (param_4 == 0) goto LAB_106daff34;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar2 = param_4;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_106daff34:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106daff58; end: 106daff87; -[SCMemoriesSemanticSearchResult .cxx_destruct] */

void FUN_106daff58(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106daff88; end: 106db0093; -[SCMemoriesDefaultSearchSessionLoggingCoordinator initWithLogger:galleryLogging:] */

undefined1 *
FUN_106daff88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f6e50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106db0094; end: 106db0197; -[SCMemoriesDefaultSearchSessionLoggingCoordinator didPerformQueryInSession:withQueryString:] */

void FUN_106db0094(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106db0198; end: 106db01cb;  */

void FUN_106db0198(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfebe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106db01cc; end: 106db0343; -[SCMemoriesDefaultSearchSessionLoggingCoordinator didPerformEmbeddingSearchQueryInSession:queryTokens:numResults:] */

void FUN_106db01cc(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf51e00();
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uStack_60 = param_5;
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106db0344; end: 106db037f;  */

void FUN_106db0344(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfebc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106db0380; end: 106db0483; -[SCMemoriesDefaultSearchSessionLoggingCoordinator didUpdateSearchResultsInSession:withSearchResults:] */

void FUN_106db0380(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106db0484; end: 106db04b7;  */

void FUN_106db0484(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106db04b8; end: 106db05bb; -[SCMemoriesDefaultSearchSessionLoggingCoordinator didSelectSearchResultInSession:withSearchResult:] */

void FUN_106db04b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106db05bc; end: 106db05ef;  */

void FUN_106db05bc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be003c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106db05f0; end: 106db06f3; -[SCMemoriesDefaultSearchSessionLoggingCoordinator didSelectSearchResultInSession:withSearchResult:withSearchAction:] */

void FUN_106db05f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106db06f4; end: 106db0727;  */

void FUN_106db06f4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be003c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106db0728; end: 106db0803; -[SCMemoriesDefaultSearchSessionLoggingCoordinator didDeselectSearchResultInSession:] */

void FUN_106db0728(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106db0804; end: 106db0837;  */

void FUN_106db0804(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106db0838; end: 106db093b; -[SCMemoriesDefaultSearchSessionLoggingCoordinator didSelectSearchResultSnapInSession:withSearchResultSnap:] */

void FUN_106db0838(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106db093c; end: 106db096f;  */

void FUN_106db093c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be003e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106db0970; end: 106db0a73; -[SCMemoriesDefaultSearchSessionLoggingCoordinator didSelectSearchResultEntryInSession:withSearchResultEntry:] */

void FUN_106db0970(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106db0a74; end: 106db0aa7;  */

void FUN_106db0a74(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be003a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106db0aa8; end: 106db0be3; -[SCMemoriesDefaultSearchSessionLoggingCoordinator begin:] */

void FUN_106db0aa8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf51e00();
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106db0be4; end: 106db0c17;  */

void FUN_106db0be4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd30e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106db0c18; end: 106db0d1f; -[SCMemoriesDefaultSearchSessionLoggingCoordinator end] */

void FUN_106db0c18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0c7580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf51e00();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 106db0d20; end: 106db0d53;  */

void FUN_106db0d20(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be096a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106db0d54; end: 106db0ddf; -[SCMemoriesDefaultSearchSessionLoggingCoordinator _didPerformQueryInSession:withQueryString:] */

void FUN_106db0d54(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0(uVar3,param_2,param_3);
  if ((int)uVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    func_0x00010c08fa60();
    lVar5 = param_4;
    func_0x00010c08fa60();
    lVar2 = lVar4 - lVar5;
    lVar1 = -lVar2;
    if (-1 < lVar2) {
      lVar1 = lVar2;
    }
    if (lVar4 == lVar5) {
      lVar1 = 1;
    }
    *(long *)(param_1 + 0x40) = lVar1 + *(long *)(param_1 + 0x40);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = param_4;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106db0de0; end: 106db0ee3; -[SCMemoriesDefaultSearchSessionLoggingCoordinator _didPerformEmbeddingSearchQueryInSession:queryTokens:numResults:memSession:] */

void FUN_106db0de0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    lVar2 = param_4;
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar2;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x48) = param_5;
    lVar2 = param_4;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
      uVar1 = *(undefined8 *)(param_1 + 8);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
      func_0x00010c106cc0(PTR__OBJC_CLASS___NSLocale_1126af788);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5660(uVar1,param_2,uVar5,puVar4,*(undefined8 *)(param_1 + 0x38),param_5,
                          *(undefined8 *)(param_1 + 0x40),param_6);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106db0ee4; end: 106db0fb3; -[SCMemoriesDefaultSearchSessionLoggingCoordinator _didUpdateSearchResultsInSession:withSearchResults:] */

void FUN_106db0ee4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010bf529e0();
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
      func_0x00010c106cc0(PTR__OBJC_CLASS___NSLocale_1126af788);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2400(uVar1,param_2,uVar5,uVar6,puVar4,*(undefined8 *)(param_1 + 0x48),
                          *(undefined8 *)(param_1 + 0x40));
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106db0fb4; end: 106db117b; -[SCMemoriesDefaultSearchSessionLoggingCoordinator _didSelectSearchResultInSession:withSearchResult:] */

void FUN_106db0fb4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    lVar6 = param_4;
    func_0x00010c13cc40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      uVar9 = *(ulong *)(param_1 + 0x38);
      _objc_retain(uVar9);
      uVar5 = uVar9;
      func_0x00010bf4b900(uVar9,param_2,&PTR____CFConstantStringClassReference_110e86858);
      if ((uVar5 & 1) == 0) {
        uVar5 = uVar9;
        func_0x00010bf4b900(uVar9,param_2,&PTR____CFConstantStringClassReference_110e86878);
        if (((uVar5 & 1) == 0) &&
           (uVar5 = uVar9,
           func_0x00010bf4b900(uVar9,param_2,&PTR____CFConstantStringClassReference_110e86898),
           (uVar5 & 1) == 0)) {
          uVar5 = uVar9;
          func_0x00010bf4b900(uVar9,param_2,&PTR____CFConstantStringClassReference_110e868b8);
          uVar1 = 6;
          if ((int)uVar5 != 0) {
            uVar1 = 1;
          }
        }
        else {
          uVar1 = 1;
        }
      }
      else {
        uVar1 = 2;
      }
      _objc_release(uVar9);
      *(undefined8 *)(param_1 + 0x50) = uVar1;
    }
    else {
      lVar2 = param_4;
      func_0x00010c13cc40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c067ec0();
      *(long *)(param_1 + 0x50) = (long)(int)lVar4;
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar6);
    *(undefined1 *)(param_1 + 0x58) = 1;
    lVar6 = *(long *)(param_1 + 0x30);
    func_0x00010c08fa60();
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_1 + 0x38);
      func_0x00010bf529e0();
      if (lVar6 == 0) goto LAB_106db1164;
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    puVar7 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010c106cc0(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0af0a0(uVar1,param_2,uVar10,puVar8,*(undefined8 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x50));
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
LAB_106db1164:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106db117c; end: 106db11af; -[SCMemoriesDefaultSearchSessionLoggingCoordinator _didDeselectSearchResultInSession:] */

void FUN_106db117c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0();
  if (iVar1 != 0) {
    *(undefined8 *)(param_1 + 0x50) = 6;
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



/* Entry: 106db11b0; end: 106db12f7; -[SCMemoriesDefaultSearchSessionLoggingCoordinator _didSelectSearchResultSnapInSession:withSearchResultSnap:] */

void FUN_106db11b0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0720c0(uVar2,param_3,param_4);
  if (((int)uVar2 != 0) && (*(char *)(param_2 + 0x58) == '\x01')) {
    lVar3 = *(long *)(param_2 + 0x30);
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_2 + 0x38);
      func_0x00010bf529e0();
      if (lVar3 == 0) goto LAB_106db12d4;
    }
    _CACurrentMediaTime();
    dVar10 = *(double *)(param_2 + 0x28);
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    lVar3 = param_5;
    func_0x00010c241220(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010c106cc0(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    uVar7 = *(undefined8 *)(param_2 + 0x50);
    if (param_5 == 0) {
      lVar6 = 9999;
    }
    else {
      lVar6 = param_5;
      func_0x00010b5fa088();
    }
    func_0x00010c0af0e0(uVar8,param_3,uVar9,lVar3,puVar5,uVar1,uVar2,uVar7,lVar6,
                        (long)((param_1 - dVar10) * 1000.0));
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
LAB_106db12d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106db12f8; end: 106db1417; -[SCMemoriesDefaultSearchSessionLoggingCoordinator _didSelectSearchResultEntryInSession:withSearchResultEntry:] */

void FUN_106db12f8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0720c0(uVar1,param_3,param_4);
  if (((int)uVar1 != 0) && (*(char *)(param_2 + 0x58) == '\x01')) {
    lVar2 = *(long *)(param_2 + 0x30);
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_2 + 0x38);
      func_0x00010bf529e0();
      if (lVar2 == 0) goto LAB_106db13f8;
    }
    _CACurrentMediaTime();
    dVar7 = *(double *)(param_2 + 0x28);
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = param_5;
    func_0x00010bf97200(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010c106cc0(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0af0c0(uVar5,param_3,uVar6,uVar1,puVar4,*(undefined8 *)(param_2 + 0x48),
                        *(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x50),
                        (long)((param_1 - dVar7) * 1000.0));
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar1);
  }
LAB_106db13f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106db1418; end: 106db149f; -[SCMemoriesDefaultSearchSessionLoggingCoordinator _begin:memSession:] */

void FUN_106db1418(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be93800(param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x28) = param_1;
  func_0x00010c0aa220(*(undefined8 *)(param_2 + 8),param_3,0,param_4,param_5,0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}


