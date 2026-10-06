/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0df360; end: 10b0df3bb;  */

ulong FUN_10b0df360(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  func_0x00010beec6c0();
  lVar1 = param_3;
  func_0x00010beec6c0();
  _objc_release(param_3);
  uVar2 = (ulong)(lVar1 < param_2);
  if (param_2 < lVar1) {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}



/* Entry: 10b0df3bc; end: 10b0df53b; +[SCLensSortHelpers sortLensesByAbsoluteCarouselPosition:cameraPosition:] */

void FUN_10b0df3bc(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
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
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c246e60(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c12d500(param_3,param_2,param_1);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    if (lVar1 != 0) {
      lVar7 = *plStack_110;
      do {
        lVar8 = 0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(param_1);
          }
          puVar6 = *(undefined1 **)(lStack_118 + lVar8 * 8);
          puVar2 = puVar6;
          func_0x00010beec6c0();
          puVar3 = param_3;
          func_0x00010bf529e0();
          if (puVar2 < puVar3) {
            func_0x00010c066b00(param_3,param_2,puVar6,puVar2);
          }
          else {
            func_0x00010befa120(param_3,param_2,puVar6);
          }
          lVar8 = lVar8 + 1;
        } while (lVar1 != lVar8);
        lVar1 = param_1;
        puVar5 = &uStack_120;
        func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(param_1);
    puVar2 = (undefined1 *)puVar5;
  }
  _objc_release(param_1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(puVar2);
  func_0x00010c1063a0(puVar4,param_2,&PTR___NSConcreteGlobalBlock_110cb9598);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfaea40(puVar2,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0df53c; end: 10b0df5b7; +[SCLensSortHelpers frontGeoLensesFromLenses:] */

void FUN_10b0df53c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_3);
  func_0x00010c1063a0(puVar1,param_2,&PTR___NSConcreteGlobalBlock_110cb9598);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfaea40(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0df5b8; end: 10b0df60f;  */

bool FUN_10b0df5b8(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c27dd80();
  if (lVar2 == 2) {
    lVar2 = param_2;
    func_0x00010c1554e0(param_2);
    bVar1 = lVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10b0df610; end: 10b0df68b; +[SCLensSortHelpers backGeoLensesFromLenses:] */

void FUN_10b0df610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_3);
  func_0x00010c1063a0(puVar1,param_2,&PTR___NSConcreteGlobalBlock_110cb95b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfaea40(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0df68c; end: 10b0df6e3;  */

bool FUN_10b0df68c(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c27dd80();
  if (lVar2 == 2) {
    lVar2 = param_2;
    func_0x00010c1554e0(param_2);
    bVar1 = lVar2 == 1;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10b0df6e4; end: 10b0df75f; +[SCLensSortHelpers scanUnlockedLensesFromLenses:] */

void FUN_10b0df6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_3);
  func_0x00010c1063a0(puVar1,param_2,&PTR___NSConcreteGlobalBlock_110cb95d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfaea40(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0df760; end: 10b0df7c3;  */

bool FUN_10b0df760(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c27dd80();
  if (lVar2 == 4) {
    lVar2 = param_2;
    func_0x00010c280be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 == 0;
    _objc_release();
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10b0df7c4; end: 10b0df83f; +[SCLensSortHelpers previewLensesFromLenses:] */

void FUN_10b0df7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_3);
  func_0x00010c1063a0(puVar1,param_2,&PTR___NSConcreteGlobalBlock_110cb95f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfaea40(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0df840; end: 10b0df85f;  */

bool FUN_10b0df840(undefined8 param_1,long param_2)

{
  func_0x00010c27dd80(param_2);
  return param_2 == 0xe;
}



/* Entry: 10b0df860; end: 10b0df8db; +[SCLensSortHelpers arBarLensesFromLenses:] */

void FUN_10b0df860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_3);
  func_0x00010c1063a0(puVar1,param_2,&PTR___NSConcreteGlobalBlock_110cb9618);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfaea40(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0df8dc; end: 10b0df8fb;  */

bool FUN_10b0df8dc(undefined8 param_1,long param_2)

{
  func_0x00010c27dd80(param_2);
  return param_2 == 0x11;
}



/* Entry: 10b0df8fc; end: 10b0df977; +[SCLensSortHelpers bundledLensesFromLenses:] */

void FUN_10b0df8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_3);
  func_0x00010c1063a0(puVar1,param_2,&PTR___NSConcreteGlobalBlock_110cb9638);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfaea40(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0df978; end: 10b0df997;  */

bool FUN_10b0df978(undefined8 param_1,long param_2)

{
  func_0x00010c27dd80(param_2);
  return param_2 == 1;
}



/* Entry: 10b0df998; end: 10b0dfa13; +[SCLensSortHelpers cameraRollLensesFromLenses:] */

void FUN_10b0df998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_3);
  func_0x00010c1063a0(puVar1,param_2,&PTR___NSConcreteGlobalBlock_110cb9658);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfaea40(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0dfa14; end: 10b0dfa33;  */

bool FUN_10b0dfa14(undefined8 param_1,long param_2)

{
  func_0x00010c27dd80(param_2);
  return param_2 == 0x10;
}



/* Entry: 10b0dfa34; end: 10b0dfbe7; +[SCLensSortHelpers scheduledLensesFromLenses:cameraPosition:] */

ulong FUN_10b0dfa34(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar5 = puVar2;
  if (param_4 != -1) {
    ppuVar1 = &PTR_PTR_1133c9290;
    if (param_4 != 0) {
      ppuVar1 = &PTR_PTR_1133c9298;
    }
    puVar8 = *ppuVar1;
    _objc_retain(puVar8);
    puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    _objc_retain(puVar8);
    func_0x00010c1063a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02a20(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar8);
  }
  uVar7 = param_3;
  func_0x00010bfaea40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return uVar7;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar6 = param_2;
  func_0x00010c27dd80();
  if (lVar6 == 3) {
    uVar7 = 1;
  }
  else {
    lVar6 = param_2;
    func_0x00010c27dd80(param_2);
    uVar7 = (ulong)(lVar6 == 7);
  }
  _objc_release(param_2);
  return uVar7;
}



/* Entry: 10b0dfbe8; end: 10b0dfc87;  */

bool FUN_10b0dfbe8(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c27dd80();
  if (lVar2 == 3) {
    bVar1 = true;
  }
  else {
    lVar2 = param_2;
    func_0x00010c27dd80(param_2);
    bVar1 = lVar2 == 7;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10b0dfc88; end: 10b0dfd67; +[SCLensSortHelpers extractLeftCarouselLensesFromLenses:] */

void FUN_10b0dfc88(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  func_0x00010bfed2e0(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf529e0();
  if (uVar5 != 0) {
    uVar5 = 0;
    do {
      uVar3 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c076320();
      if ((int)uVar4 != 0) {
        func_0x00010bef92c0(puVar2,param_2,uVar5);
        func_0x00010befa120(puVar1,param_2,uVar3);
      }
      _objc_release(uVar3);
      uVar5 = uVar5 + 1;
      uVar3 = param_3;
      func_0x00010bf529e0();
    } while (uVar5 < uVar3);
  }
  func_0x00010c12d480(param_3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0dfd68; end: 10b0e0267; -[SCMainCameraLensCarouselSortStrategy executeWithLenses:cameraPosition:parameters:] */

void FUN_10b0dfd68(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c0ed600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c159a40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c236200();
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if ((int)uVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf24d80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf529e0(puVar6);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf529e0();
  if (puVar8 != (undefined *)0x0) {
    func_0x00010befa160(puVar7);
  }
  lVar14 = param_3;
  func_0x00010bf529e0();
  if (lVar14 != 0) {
    func_0x00010befa160(puVar7);
  }
  puVar8 = puVar7;
  func_0x00010c12c0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c0d3c80();
  _objc_release(puVar7);
  _objc_release(puVar8);
  puVar7 = param_1;
  func_0x00010be0b740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246a60(PTR_PTR_1126ddd78);
  if (((uVar2 != 0) && (uVar2 != uVar1)) && (uVar3 = uVar2, func_0x00010c070fa0(), (uVar3 & 1) == 0)
     ) {
    func_0x00010bef97a0(*(undefined8 *)(param_1 + 0x18));
  }
  func_0x00010c2895c0(*(undefined8 *)(param_1 + 0x18));
  lVar14 = *(long *)(param_1 + 0x10);
  uVar3 = param_5;
  func_0x00010bf07500(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c093d20();
  _objc_release(uVar3);
  if (((lVar14 != 0) && (puVar8 = puVar9, func_0x00010bf529e0(), puVar8 != (undefined *)0x0)) &&
     (uVar3 = param_5, func_0x00010c23e140(), (uVar3 & 1) == 0)) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf24d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar8 = PTR_PTR_1126b0820;
    func_0x00010c094120(PTR_PTR_1126b0820);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010c2a7480();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(puVar10);
    _objc_release(puVar8);
    func_0x00010bef9740(PTR_PTR_1126ddd78);
    _objc_release(puVar11);
  }
  puVar8 = puVar9;
  func_0x00010bf529e0();
  if ((puVar8 != (undefined *)0x0) && (uVar3 = param_5, func_0x00010bf00fc0(), (int)uVar3 != 0)) {
    puVar8 = PTR_PTR_1126b0820;
    _objc_opt_new(PTR_PTR_1126b0820);
    func_0x00010c2b2880();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aa840(puVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a7480(puVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf21f60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9740(PTR_PTR_1126ddd78);
    _objc_release(puVar10);
    _objc_release(puVar8);
  }
  puVar8 = puVar7;
  func_0x00010bf51e00();
  puVar10 = puVar9;
  func_0x00010bf51e00(puVar9);
  if (uVar1 != 0) {
    func_0x00010c066b00(puVar9);
  }
  puVar11 = puVar7;
  func_0x00010bf529e0();
  puVar12 = puVar9;
  if (puVar11 != (undefined *)0x0) {
    puVar11 = puVar7;
    func_0x00010bf09f80(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c0d3c80();
    _objc_release(puVar9);
    _objc_release(puVar11);
  }
  puVar9 = PTR_PTR_1126ddca0;
  _objc_alloc(PTR_PTR_1126ddca0);
  func_0x00010c025d80();
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar12);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10b0e0268; end: 10b0e026f;  */

void FUN_10b0e0268(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 10b0e0270; end: 10b0e0303; -[SCMainCameraLensCarouselSortStrategy _excludeLeftCarouselLensesFromLenses:cameraPosition:] */

void FUN_10b0e0270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ddd78;
  func_0x00010bf9ee00(PTR_PTR_1126ddd78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246a60(PTR_PTR_1126ddd78,param_2,puVar1,param_4);
  puVar2 = puVar1;
  func_0x00010c140180(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d3c80();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b0e0304; end: 10b0e030f; -[SCMainCameraLensCarouselSortStrategy _isMultiCamSupported] */

void FUN_10b0e0304(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c078050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___AVCaptureMultiCamSession_1126b70a0,
             PTR_s_isMultiCamSupported_1125fba20);
  return;
}



/* Entry: 10b0e0310; end: 10b0e034b; -[SCMainCameraLensCarouselSortStrategy .cxx_destruct] */

void FUN_10b0e0310(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e034c; end: 10b0e0417; -[SCMainSortStrategyFeatureStateProviderImpl lensFeedCarouselButtonTypeForApplicableContext:] */

undefined8 FUN_10b0e034c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c092b60();
    if ((int)lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = param_3;
      func_0x00010c071ae0(param_3,param_2,PTR_PTR_1133c92a0);
      if (((uVar3 & 1) == 0) &&
         (uVar3 = param_3, func_0x00010c071ae0(param_3,param_2,PTR_PTR_1133c92c0), (uVar3 & 1) == 0)
         ) {
        uVar3 = param_3;
        func_0x00010c071ae0(param_3,param_2,PTR_PTR_1133c9390);
        uVar4 = 3;
        if ((int)uVar3 == 0) {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 3;
      }
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b0e0418; end: 10b0e041f; -[SCMainSortStrategyFeatureStateProviderImpl isNGSModeEnabled] */

undefined8 FUN_10b0e0418(void)

{
  return 1;
}



/* Entry: 10b0e0420; end: 10b0e048b; -[SCMainSortStrategyFeatureStateProviderImpl isArGamesAvailableForApplicableContext:] */

undefined8 FUN_10b0e0420(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133c92c0);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_3, func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133c92a0), (int)uVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10b0e048c; end: 10b0e0497; -[SCMainSortStrategyFeatureStateProviderImpl .cxx_destruct] */

void FUN_10b0e048c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e0498; end: 10b0e04a7; -[SCLegacyLensPreferences lensSubPickerActiveOptionIds] */

void FUN_10b0e0498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110f5df98);
  return;
}



/* Entry: 10b0e04a8; end: 10b0e04e7; -[SCLegacyLensPreferences setLensSubPickerActiveOptionIds:] */

void FUN_10b0e04a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,param_3,
                      &PTR____CFConstantStringClassReference_110f5df98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0e04e8; end: 10b0e04f7; -[SCLegacyLensPreferences usedLensIds] */

void FUN_10b0e04e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110f5df78);
  return;
}



/* Entry: 10b0e04f8; end: 10b0e0537; -[SCLegacyLensPreferences setUsedLensIds:] */

void FUN_10b0e04f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,param_3,
                      &PTR____CFConstantStringClassReference_110f5df78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0e0538; end: 10b0e05d7; -[SCLegacyLensPreferences contentArchiveSizeForLensId:] */

long FUN_10b0e0538(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0) {
    lVar3 = -1;
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010c0e00e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110f5dfb8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    if (lVar1 == 0) {
      lVar3 = -1;
    }
    else {
      lVar3 = lVar1;
      func_0x00010c067fc0(lVar1);
    }
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  return lVar3;
}



/* Entry: 10b0e05d8; end: 10b0e06c7; -[SCLegacyLensPreferences setContentArchiveSize:forLensId:] */

void FUN_10b0e05d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_4 != 0) {
    puVar2 = *(undefined **)(param_1 + 8);
    _objc_retain(param_4);
    func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f5dfb8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,param_4);
    _objc_release(param_4);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bf51e00(puVar1);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar2,
                        &PTR____CFConstantStringClassReference_110f5dfb8);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10b0e06c8; end: 10b0e07ab; -[SCLegacyLensPreferences loadLensPersistentStoreWithEffectId:] */

void FUN_10b0e06c8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = param_1;
  func_0x00010be4b780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uVar6 = 0;
  }
  else {
    puVar3 = PTR_PTR_1126dfae0;
    _objc_opt_class(PTR_PTR_1126dfae0);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar6 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    uVar5 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar5 = param_1;
      func_0x00010be73720(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 8));
    }
    uVar6 = uVar5;
    func_0x00010c15ecc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10b0e07ac; end: 10b0e0867; -[SCLegacyLensPreferences saveLensPersistentStoreWithEffectId:serializedStoreData:] */

void FUN_10b0e07ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be4b780(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dfae0;
  _objc_alloc(PTR_PTR_1126dfae0);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044b00(puVar2,param_2,param_4,puVar3);
  _objc_release(param_4);
  _objc_release(puVar3);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar2,lVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0e0868; end: 10b0e090f; -[SCLegacyLensPreferences clearLensPersistentStoreWithPolicy:completionQueue:completion:] */

void FUN_10b0e0868(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b0e0910;
  puStack_58 = &UNK_110841f80;
  lStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bf6db60(uVar1,param_2,&puStack_70,param_4,param_5);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0e0910; end: 10b0e0ac3;  */

void FUN_10b0e0910(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
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
  long lStack_68;
  
  puVar9 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf00340(lVar1,param_2,&PTR____CFConstantStringClassReference_110f5dfd8);
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar3 != 0) {
          puVar4 = PTR_PTR_1126dfae0;
          _objc_opt_class(PTR_PTR_1126dfae0);
          uVar5 = uVar3;
          _objc_opt_isKindOfClass(uVar3,puVar4);
          uVar6 = uVar3;
          if ((uVar5 & 1) == 0) {
            uVar6 = 0;
          }
          _objc_retain(uVar6);
          if ((uVar5 & 1) == 0) {
            uVar6 = *(ulong *)(param_1 + 0x20);
            func_0x00010be73720(uVar6);
            _objc_retainAutoreleasedReturnValue();
LAB_10b0e0a38:
            func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
          }
          else {
            uVar5 = *(ulong *)(param_1 + 0x28);
            func_0x00010c082e80();
            uVar6 = uVar3;
            if ((uVar5 & 1) == 0) goto LAB_10b0e0a38;
          }
          _objc_release(uVar6);
        }
        _objc_release(uVar3);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar1;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar9);
    ppuVar7 = &PTR____CFConstantStringClassReference_110f5dfd8;
    func_0x00010c0d3c80(&PTR____CFConstantStringClassReference_110f5dfd8);
    func_0x00010bf070e0();
    if (puVar9 != (undefined8 *)0x0) {
      func_0x00010bf070e0(ppuVar7);
    }
    ppuVar8 = ppuVar7;
    func_0x00010bf51e00(ppuVar7);
    _objc_release(ppuVar7);
    _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
    return;
  }
  return;
}



/* Entry: 10b0e0ac4; end: 10b0e0b3b; -[SCLegacyLensPreferences _lensPersistentStoreKeyWithEffectId:] */

void FUN_10b0e0ac4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5dfd8;
  func_0x00010c0d3c80(&PTR____CFConstantStringClassReference_110f5dfd8);
  func_0x00010bf070e0();
  if (param_3 != 0) {
    func_0x00010bf070e0(ppuVar1,param_2,param_3);
  }
  ppuVar2 = ppuVar1;
  func_0x00010bf51e00(ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10b0e0b3c; end: 10b0e0c27; -[SCLegacyLensPreferences _persistentStoreEntryWithValue:] */

void FUN_10b0e0b3c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar4 = param_3;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      _objc_retain(param_3);
    }
  }
  else {
    func_0x00010bf64920(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126dfae0;
  _objc_alloc(PTR_PTR_1126dfae0);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044b00(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0e0c28; end: 10b0e0c33; -[SCLegacyLensPreferences .cxx_destruct] */

void FUN_10b0e0c28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e0c34; end: 10b0e0ceb; -[SCLensPersistentStoreExpirationPolicy isValidPersistentStore:] */

bool FUN_10b0e0c34(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf5a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  bVar1 = false;
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010bf5a700(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar3,param_3,lVar2);
    _objc_release(lVar2);
    _objc_release(puVar3);
    bVar1 = param_1 < 5184000.0;
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10b0e0cec; end: 10b0e10b3; -[SCLensCofBasedRemoteAssetsLensResourceResolver lensResourceForLensAsset:lens:completion:] */

void FUN_10b0e0cec(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined **unaff_x26;
  double dVar7;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  double dStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_4;
  func_0x00010c27dd80();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar1 == (undefined *)0x7) {
    if (*(long *)(param_2 + 8) == 0) {
      uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_80 = &PTR____CFConstantStringClassReference_110f5e498;
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar5 = (undefined1 *)0x0;
      (**(code **)(param_6 + 0x10))(param_6,0,puVar4);
    }
    else {
      puVar4 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x00010c08fa60();
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (puVar2 == (undefined *)0x0) {
        uStack_98 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_90 = &PTR____CFConstantStringClassReference_110f5e4b8;
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar5 = (undefined1 *)0x0;
        (**(code **)(param_6 + 0x10))(param_6,0,puVar1);
      }
      else {
        _CACurrentMediaTime();
        puVar1 = PTR_PTR_1126ae790;
        lVar3 = param_2;
        _objc_opt_class(param_2);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfcd0e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        _objc_initWeak(auStack_a0,param_2);
        uVar6 = *(undefined8 *)(param_2 + 8);
        func_0x00010bdf9860();
        _objc_retainAutoreleasedReturnValue();
        puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
        dVar7 = 1.60807493534087e-314;
        uStack_d8 = 0xc2000000;
        pcStack_d0 = FUN_10b0e10b4;
        puStack_c8 = &UNK_110cb96b8;
        puVar5 = auStack_a0;
        _objc_copyWeak(auStack_b0,puVar5);
        _objc_retain(puVar4);
        puStack_c0 = puVar4;
        dStack_a8 = param_1;
        _objc_retain(param_6);
        lStack_b8 = param_6;
        func_0x00010c25d760(uVar6);
        _objc_release(param_2);
        _objc_release(lStack_b8);
        _objc_release(puStack_c0);
        _objc_destroyWeak(auStack_b0);
        _objc_destroyWeak(auStack_a0);
        unaff_x26 = &puStack_e0;
        param_1 = dVar7;
      }
      _objc_release(puVar1);
    }
  }
  else {
    uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110f5e478;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar5 = (undefined1 *)0x0;
    (**(code **)(param_6 + 0x10))(param_6,0,puVar4);
  }
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x26 + 0x30));
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume();
  _objc_retain(puVar5);
  puVar4 = param_4 + 0x30;
  _objc_loadWeakRetained();
  if (puVar4 != (undefined *)0x0) {
    puVar1 = puVar4;
    func_0x00010be4bb00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    uVar6 = *(undefined8 *)(puVar4 + 0x10);
    _CACurrentMediaTime();
    func_0x00010bf0b3a0(param_1 - *(double *)(param_4 + 0x38),uVar6);
    (**(code **)(*(long *)(param_4 + 0x28) + 0x10))(*(long *)(param_4 + 0x28),puVar1,0);
    _objc_release(0);
    _objc_release(puVar1);
  }
  _objc_release(puVar4);
  _objc_release(puVar5);
  return;
}



/* Entry: 10b0e10b4; end: 10b0e118b;  */

void FUN_10b0e10b4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be4bb00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    _CACurrentMediaTime();
    func_0x00010bf0b3a0(param_1 - *(double *)(param_2 + 0x38),uVar3);
    (**(code **)(*(long *)(param_2 + 0x28) + 0x10))(*(long *)(param_2 + 0x28),lVar2,0);
    _objc_release(0);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0e118c; end: 10b0e13f7; -[SCLensCofBasedRemoteAssetsLensResourceResolver _lensResourceFromConfigValue:configName:error:] */

void FUN_10b0e118c(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1900();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  _objc_retain(0);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((param_5 != (undefined8 *)0x0) && (puVar2 == (undefined *)0x0 || puVar3 == (undefined *)0x0))
  {
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_5 = puVar5;
    _objc_release(puVar4);
  }
  func_0x00010beb2cc0();
  if (((param_1 != 0) &&
      (puVar4 = puVar2, func_0x00010bfda7c0(), puVar5 = PTR__OBJC_CLASS___NSError_1126ae858,
      param_5 != (undefined8 *)0x0)) && ((int)puVar4 != 0)) {
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_5 = puVar5;
    _objc_release(puVar4);
  }
  puVar5 = PTR_PTR_1126de6c8;
  _objc_alloc(PTR_PTR_1126de6c8);
  func_0x00010c0558e0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar7 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f5e038,0,0);
  return;
}



/* Entry: 10b0e13f8; end: 10b0e140f; -[SCLensCofBasedRemoteAssetsLensResourceResolver _shouldCheckGCSLink] */

void FUN_10b0e13f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f5e038,0,0);
  return;
}



/* Entry: 10b0e1410; end: 10b0e146b; -[SCLensCofBasedRemoteAssetsLensResourceResolver _defaultValueForConfigValue:] */

void FUN_10b0e1410(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110e03918;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    ppuVar1 = *(undefined ***)(param_1 + 0x18);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar1 != (undefined **)0x0) {
      ppuVar2 = ppuVar1;
    }
    _objc_retain(ppuVar2);
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10b0e146c; end: 10b0e14a7; -[SCLensCofBasedRemoteAssetsLensResourceResolver .cxx_destruct] */

void FUN_10b0e146c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e14a8; end: 10b0e159f; -[SCLensDeviceDependentAssetDecisionResolver lensResourceForLensAsset:lens:completion:] */

void FUN_10b0e14a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (((lVar3 == 0) || (uVar4 = uVar2, func_0x00010bf703a0(), (int)uVar4 == 0)) ||
     (uVar4 = uVar2, func_0x00010bf70340(uVar2,param_2,lVar1), (int)uVar4 != 0)) {
    lVar3 = 8;
  }
  else {
    lVar3 = 0x10;
  }
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(uVar4);
  func_0x00010c096840(uVar4,param_2,param_3,param_4,param_5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0e15a0; end: 10b0e15db; -[SCLensDeviceDependentAssetDecisionResolver .cxx_destruct] */

void FUN_10b0e15a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e15dc; end: 10b0e1703; -[SCLensDeviceDependentAssetReportingResolver lensResourceForLensAsset:lens:completion:] */

void FUN_10b0e15dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_2 + 8);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10b0e1704;
  puStack_78 = &UNK_110cb9708;
  uStack_70 = uVar1;
  uStack_68 = param_4;
  uStack_60 = param_5;
  uStack_58 = param_6;
  uStack_50 = param_1;
  uStack_48 = uVar3;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(uVar1);
  func_0x00010c096840(uVar2,param_3,param_4,param_5,&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b0e1704; end: 10b0e1813;  */

void FUN_10b0e1704(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 == 0) || (param_3 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_3);
    _objc_retain(param_2);
    func_0x00010c133ee0(uVar1);
  }
  else {
    _objc_retain(0);
    _objc_retain(param_2);
    _CACurrentMediaTime();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = param_2;
    func_0x00010bdc3360(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c133f00(uVar1);
    _objc_release(lVar2);
  }
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0e1814; end: 10b0e1843; -[SCLensDeviceDependentAssetReportingResolver .cxx_destruct] */

void FUN_10b0e1814(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e1844; end: 10b0e1913; -[SCLensRemoteAssetPrefetcher initWithLensDataFetcher:lensUserProvider:overrideRequestTimingToRequired:] */

undefined8
FUN_10b0e1844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,uVar2,0x15,0,0xe);
  _objc_release(uVar2);
  func_0x00010c023860(param_1,param_2,param_3,param_4,param_5,puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10b0e1914; end: 10b0e19ef; -[SCLensRemoteAssetPrefetcher initWithLensDataFetcher:lensUserProvider:overrideRequestTimingToRequired:performer:] */

undefined1 *
FUN_10b0e1914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112705ad8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e19f0; end: 10b0e1a8f; -[SCLensRemoteAssetPrefetcher fetchAssetsForLens:fetchSourceType:onFetchAsset:onComplete:] */

void FUN_10b0e19f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0b8380(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa5080(param_1,param_2,uVar1,param_3,param_4,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0e1a90; end: 10b0e1bb7; -[SCLensRemoteAssetPrefetcher fetchAssets:lens:fetchSourceType:onFetchAsset:onComplete:] */

void FUN_10b0e1a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10b0e1bb8;
  puStack_70 = &UNK_110cb9738;
  uStack_68 = param_1;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bfb2660(param_3,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be10920(param_1,param_2,uVar1,param_4,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b0e1bb8; end: 10b0e1bcf;  */

void FUN_10b0e1bb8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcfa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__assetWithAvatarIDFromAsset__112551830,param_2);
  return;
}



/* Entry: 10b0e1bd0; end: 10b0e1d5f; -[SCLensRemoteAssetPrefetcher _fetchContentForAssets:lens:fetchSourceType:onFetchAsset:onComplete:] */

void FUN_10b0e1bd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  ppuVar3 = &puStack_c0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10b0e1d60;
  puStack_80 = &UNK_110cb9768;
  uStack_78 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar2 = &puStack_98;
  _objc_retainBlock(ppuVar2);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x10b0e1d74;
  puStack_a8 = &UNK_110849530;
  uStack_a0 = param_7;
  _objc_retain(param_7);
  _objc_retainBlock(&puStack_c0);
  puVar4 = (undefined1 *)ppuVar3;
  _dispatch_group_create();
  func_0x00010be10900(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27d98(puVar4,uVar5,ppuVar3);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(uStack_a0);
  _objc_release(ppuVar2);
  _objc_release(uStack_78);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 10b0e1d60; end: 10b0e1d87;  */

void FUN_10b0e1d60(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b0e1d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b0e1d88; end: 10b0e1edf; -[SCLensRemoteAssetPrefetcher _fetchContentForAssets:lens:fetchSourceType:dispatchGroup:onFetchAsset:] */

void FUN_10b0e1d88(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x25;
  long unaff_x26;
  long lVar7;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined1 auStack_188 [8];
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar2 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_6;
  uVar6 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar3 = auStack_e8;
  uVar4 = 0x10;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x26 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = param_6;
        uVar6 = param_7;
        func_0x00010be108e0(param_1);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      puVar3 = auStack_e8;
      uVar4 = 0x10;
      lVar1 = param_3;
      puVar2 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x25 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  lVar1 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10b0e1ee0;
  lStack_180 = unaff_x26;
  uStack_178 = unaff_x25;
  uStack_170 = param_1;
  uStack_168 = param_5;
  uStack_160 = param_7;
  uStack_158 = param_6;
  uStack_150 = param_4;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  _objc_retain(uVar5);
  _objc_retain(uVar6);
  _objc_initWeak(auStack_188,lVar1);
  _objc_copyWeak(auStack_198,auStack_188);
  _objc_retain(uVar6);
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  uStack_190 = uVar4;
  _objc_retain(uVar5);
  func_0x00010be0fa00(lVar1);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_198);
  _objc_destroyWeak(auStack_188);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 10b0e1ee0; end: 10b0e2053; -[SCLensRemoteAssetPrefetcher _fetchContentForAsset:lens:fetchSourceType:dispatchGroup:onFetchAsset:] */

void FUN_10b0e1ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_60 = param_5;
  _objc_retain(param_6);
  func_0x00010be0fa00(param_1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0e2054; end: 10b0e2147;  */

void FUN_10b0e2054(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if ((param_2 == 0) || (lVar1 == 0)) {
LAB_10b0e20d0:
    lVar3 = *(long *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    pcVar6 = *(code **)(lVar3 + 0x10);
    lVar5 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c27dd80();
    if (10 < uVar2) goto LAB_10b0e20e4;
    if ((1L << (uVar2 & 0x3f) & 0x788U) == 0) {
      if ((1L << (uVar2 & 0x3f) & 3U) == 0) {
        if (uVar2 == 2) {
          lVar5 = lVar1;
          func_0x00010bdd4520(lVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be10900(lVar1);
          _objc_release(lVar5);
        }
        goto LAB_10b0e20e4;
      }
      goto LAB_10b0e20d0;
    }
    lVar3 = *(long *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    pcVar6 = *(code **)(lVar3 + 0x10);
    lVar5 = param_2;
  }
  (*pcVar6)(lVar3,uVar4,lVar5);
LAB_10b0e20e4:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0e2148; end: 10b0e224f; -[SCLensRemoteAssetPrefetcher _fetchAsset:lens:fetchSourceType:dispatchGroup:completion:] */

void FUN_10b0e2148(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _dispatch_group_enter(param_6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10b0e2250;
  puStack_68 = &UNK_1108fe3e0;
  uStack_60 = param_6;
  uStack_58 = param_7;
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bfa4f00(uVar1,param_2,param_3,param_4,param_5,uVar2,&puStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(param_6);
  _objc_release(param_7);
  return;
}



/* Entry: 10b0e2250; end: 10b0e227b;  */

void FUN_10b0e2250(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b0e227c; end: 10b0e241f; -[SCLensRemoteAssetPrefetcher _assetWithAvatarIDFromAsset:] */

void FUN_10b0e227c(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  puVar10 = param_3;
  func_0x00010c27dd80();
  if ((puVar10 == (undefined *)0x1) ||
     (puVar10 = param_3, func_0x00010c27dd80(), puVar10 == (undefined *)0x2)) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1c5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 == 0) {
      puVar10 = (undefined *)0x0;
      goto LAB_10b0e23fc;
    }
    puVar10 = param_3;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar10;
    func_0x00010c08fa60();
    _objc_release(puVar10);
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR_PTR_1126bd478;
      func_0x00010c08ff00(PTR_PTR_1126bd478,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf1c5a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar5;
      func_0x00010c2a8ea0(puVar5,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(puVar5);
      goto LAB_10b0e23fc;
    }
  }
  _objc_retain(param_3);
  puVar10 = param_3;
LAB_10b0e23fc:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10b0e2420; end: 10b0e24bb; -[SCLensRemoteAssetPrefetcher _assetWithOverrideRequstTimingIfNeededFromAsset:] */

void FUN_10b0e2420(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  else {
    puVar1 = PTR_PTR_1126bd478;
    func_0x00010c08ff00(PTR_PTR_1126bd478,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b71c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0e24bc; end: 10b0e25f3; -[SCLensRemoteAssetPrefetcher _bitmojiAssetsFromAsset:bitmojiStickers:] */

void FUN_10b0e24bc(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_3;
  func_0x00010c1087e0();
  if (0 < lVar2) {
    uVar6 = 0;
    do {
      uVar3 = param_4;
      func_0x00010bf529e0();
      if (uVar3 <= uVar6) break;
      puVar4 = PTR_PTR_1126bd478;
      func_0x00010c08ff00(PTR_PTR_1126bd478,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c0dfd40(param_4,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2af9a0(puVar4,param_2,uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010c2bbd20(puVar4,param_2,1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf21f60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      uVar6 = uVar6 + 1;
      lVar2 = param_3;
      func_0x00010c1087e0();
    } while ((long)uVar6 < lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0e25f4; end: 10b0e2737; -[SCLensRemoteAssetPrefetcher _avatar3DAssetFromAsset:] */

void FUN_10b0e25f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126bd478;
  func_0x00010c08ff00(PTR_PTR_1126bd478);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b71c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c097c20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc360(puVar1,param_2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1c5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8ea0(puVar1,param_2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b0e2738; end: 10b0e2773; -[SCLensRemoteAssetPrefetcher .cxx_destruct] */

void FUN_10b0e2738(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e2774; end: 10b0e277f; -[SCLensCacheClearTracker initWithPreferencesStorage:currentDateProvider:] */

void FUN_10b0e2774(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c038390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x40f5180000000000,param_1,PTR_s_initWithPreferencesStorage_curre_1125ebae0);
  return;
}



/* Entry: 10b0e2780; end: 10b0e280b; -[SCLensCacheClearTracker trackLensCacheClearEvent] */

void FUN_10b0e2780(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar2);
    _objc_sync_enter(uVar2);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,lVar1,
                        &PTR____CFConstantStringClassReference_110f5e518);
    _objc_sync_exit(uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0e280c; end: 10b0e28db; -[SCLensCacheClearTracker wasLensCacheRecentlyCleared] */

bool FUN_10b0e280c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    bVar3 = false;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 8);
    _objc_retain(uVar4);
    _objc_sync_enter(uVar4);
    lVar2 = *(long *)(param_2 + 8);
    func_0x00010c0e00e0(lVar2,param_3,&PTR____CFConstantStringClassReference_110f5e518);
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_exit(uVar4);
    _objc_release(uVar4);
    if (lVar2 == 0) {
      bVar3 = false;
    }
    else {
      func_0x00010c26f380(lVar1,param_3,lVar2);
      bVar3 = param_1 <= *(double *)(param_2 + 0x18);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return bVar3;
}



/* Entry: 10b0e28dc; end: 10b0e293f; -[SCLensCacheClearTracker resetLensCacheClearTracker] */

void FUN_10b0e28dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,0,
                      &PTR____CFConstantStringClassReference_110f5e518);
  _objc_sync_exit(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0e2940; end: 10b0e296f; -[SCLensCacheClearTracker .cxx_destruct] */

void FUN_10b0e2940(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e2970; end: 10b0e297b; -[SCLensDownloadTracker initWithPreferencesStorage:currentDateProvider:] */

void FUN_10b0e2970(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c038390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x40f5180000000000,param_1,PTR_s_initWithPreferencesStorage_curre_1125ebae0);
  return;
}



/* Entry: 10b0e297c; end: 10b0e2a3b; -[SCLensDownloadTracker saveLastDownloadDateForLens:] */

void FUN_10b0e297c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010bf5e5e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c13b280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5fe00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf9c720(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bea51a0(param_1,param_2,uVar4,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10b0e2a3c; end: 10b0e2b17; -[SCLensDownloadTracker _setLastDownloadDate:forLensResource:withExpirationDate:] */

void FUN_10b0e2a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bdc3360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    func_0x00010be4d540(param_1);
    func_0x00010be98d40(param_1,param_2,param_3,param_4,param_5);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0e2b18; end: 10b0e2d73; -[SCLensDownloadTracker wasContentRecentlyDownloadedForLens:] */

bool FUN_10b0e2b18(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  
  _objc_retain(param_4);
  lVar5 = param_4;
  func_0x00010c13b280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010bf5fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bdc3360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar5);
  lVar5 = lVar2;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    bVar8 = false;
  }
  else {
    lVar5 = param_4;
    func_0x00010c13b280(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bf5fe00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c27dd80();
    lVar4 = lVar2;
    FUN_10b72dcc8(lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar5);
    _objc_retain(param_2);
    _objc_sync_enter(param_2);
    func_0x00010be4d540(param_2);
    lVar5 = *(long *)(param_2 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      lVar1 = param_4;
      func_0x00010c13b280(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf5fe00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_4;
      func_0x00010bf9c720(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be98d40(param_2);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x20));
      *(undefined1 *)(param_2 + 0x10) = 1;
    }
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c0e00e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bf5e5e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(uVar7);
    bVar8 = param_1 <= 0.0;
    if (0.0 < param_1) {
      func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x20));
      *(undefined1 *)(param_2 + 0x10) = 1;
    }
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_sync_exit(param_2);
    _objc_release(param_2);
    lVar2 = lVar4;
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  return bVar8;
}



/* Entry: 10b0e2d74; end: 10b0e2e67; -[SCLensDownloadTracker removeAllDownloadRecords] */

void FUN_10b0e2d74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  _objc_sync_enter(uVar2);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,0,
                      &PTR____CFConstantStringClassReference_110f5e538);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,0,
                      &PTR____CFConstantStringClassReference_110f5e558);
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x10) = 0;
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0e2e68; end: 10b0e2f5b; -[SCLensDownloadTracker saveToPreferences] */

void FUN_10b0e2e68(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  func_0x00010be4d540(param_1);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    _objc_sync_exit(param_1);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010bf51e00(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00(uVar2);
    *(undefined1 *)(param_1 + 0x10) = 0;
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar3);
    _objc_sync_enter(uVar3);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,lVar1,
                        &PTR____CFConstantStringClassReference_110f5e538);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,uVar2,
                        &PTR____CFConstantStringClassReference_110f5e558);
    _objc_sync_exit(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0e2f5c; end: 10b0e30af; -[SCLensDownloadTracker _loadFromPreferencesIfNeeded] */

void FUN_10b0e2f5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar5);
    _objc_sync_enter(uVar5);
    puVar1 = *(undefined **)(param_1 + 8);
    func_0x00010c0e00e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f5e538);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0d3c80();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar2);
      puVar3 = puVar2;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = *(undefined **)(param_1 + 8);
    func_0x00010c0e00e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f5e558);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0d3c80();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar2);
      puVar3 = puVar2;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    *(undefined1 *)(param_1 + 0x10) = 0;
    _objc_sync_exit(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 10b0e30b0; end: 10b0e3217; -[SCLensDownloadTracker _cleanupOldLensContentDownloadData] */

void FUN_10b0e30b0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  puVar10 = &uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  dVar15 = 0.0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar11 = auStack_f8;
  puVar12 = (undefined *)0x10;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_130;
    do {
      lVar14 = 0;
      do {
        dVar16 = dVar15;
        if (*plStack_130 != lVar13) {
          _objc_enumerationMutation(lVar1);
          dVar16 = dVar15;
        }
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf5e5e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380();
        dVar15 = dVar16;
        _objc_release(uVar4);
        if (0.0 < dVar16) {
          func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18));
        }
        _objc_release(uVar3);
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      puVar11 = auStack_f8;
      puVar12 = (undefined *)0x10;
      lVar2 = lVar1;
      puVar10 = &uStack_140;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  _objc_retain(puVar12);
  puVar5 = puVar11;
  func_0x00010bdc3360();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c08fa60();
  if (puVar6 != (undefined1 *)0x0) {
    puVar6 = puVar11;
    func_0x00010c27dd80(puVar11);
    puVar7 = puVar5;
    FUN_10b72dcc8(puVar5,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    uVar8 = *(ulong *)(lVar1 + 0x18);
    func_0x00010bf529e0();
    if (0x280 < uVar8) {
      func_0x00010bddf860(lVar1);
    }
    if (puVar12 == (undefined *)0x0) {
      puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf87060(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar12);
      puVar9 = puVar12;
    }
    puVar5 = (undefined1 *)puVar10;
    func_0x00010bf64e40(*(undefined8 *)(lVar1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf433a0();
    func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x18));
    *(undefined1 *)(lVar1 + 0x10) = 1;
    _objc_release(puVar5);
    _objc_release(puVar9);
    puVar5 = puVar7;
  }
  _objc_release(puVar5);
  _objc_release(puVar12);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 10b0e3218; end: 10b0e336b; -[SCLensDownloadTracker _saveCooldownExpirationDate:forLensResource:withExpirationDate:] */

void FUN_10b0e3218(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bdc3360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c27dd80(param_4);
    lVar3 = lVar1;
    FUN_10b72dcc8(lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar4 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf529e0();
    if (0x280 < uVar4) {
      func_0x00010bddf860(param_1);
    }
    if (param_5 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf87060(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_5);
      puVar5 = param_5;
    }
    uVar6 = param_3;
    func_0x00010bf64e40(*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf433a0();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18));
    *(undefined1 *)(param_1 + 0x10) = 1;
    _objc_release(uVar6);
    _objc_release(puVar5);
    lVar1 = lVar3;
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0e336c; end: 10b0e336f; -[SCLensDownloadTracker _didEnterBackground:] */

void FUN_10b0e336c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14b550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_saveToPreferences_112630770);
  return;
}



/* Entry: 10b0e3370; end: 10b0e33b7; -[SCLensDownloadTracker .cxx_destruct] */

void FUN_10b0e3370(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e33b8; end: 10b0e33c3; -[SCGenericLensMetadataStore init] */

void FUN_10b0e33b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff31d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithAnnouncerPerformer_owner_1125da638,0,0);
  return;
}



/* Entry: 10b0e33c4; end: 10b0e33cb; -[SCGenericLensMetadataStore addListener:] */

void FUN_10b0e33c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10b0e33cc; end: 10b0e33d3; -[SCGenericLensMetadataStore removeListener:] */

void FUN_10b0e33cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10b0e33d4; end: 10b0e341f; -[SCGenericLensMetadataStore lenses] */

void FUN_10b0e33d4(long param_1)

{
  undefined *puVar1;
  
  _os_unfair_lock_lock(param_1 + 8);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x30);
  }
  _objc_retain(puVar1);
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0e3420; end: 10b0e346b; -[SCGenericLensMetadataStore lensesToPrefetch] */

void FUN_10b0e3420(long param_1)

{
  undefined *puVar1;
  
  _os_unfair_lock_lock(param_1 + 8);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x28);
  }
  _objc_retain(puVar1);
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0e346c; end: 10b0e3473; -[SCGenericLensMetadataStore hasMoreLensesToLoad] */

undefined8 FUN_10b0e346c(void)

{
  return 0;
}



/* Entry: 10b0e3474; end: 10b0e347b; -[SCGenericLensMetadataStore loadMoreTriggerDistance] */

undefined8 FUN_10b0e3474(void)

{
  return 0;
}



/* Entry: 10b0e347c; end: 10b0e34f3;  */

void FUN_10b0e347c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x28);
  }
  lVar2 = *(long *)(param_1 + 0x20) + 0x40;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
  }
  func_0x00010bf7e380(uVar4,param_2,puVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10b0e34f4; end: 10b0e36b3; -[SCGenericLensMetadataStore addLens:overrideIfFound:] */

void FUN_10b0e34f4(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_10b0e3648;
  _os_unfair_lock_lock(param_1 + 8);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (*(undefined **)(param_1 + 0x20) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x20);
  }
  _objc_retain(puVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b0e36b4;
  puStack_50 = &UNK_110cb97c8;
  _objc_retain(param_3);
  puVar2 = puVar1;
  lStack_48 = param_3;
  func_0x00010bfece40(puVar1,param_2,&puStack_68);
  if (puVar2 == (undefined *)0x7fffffffffffffff) {
    puVar2 = puVar1;
    func_0x00010bf09f60(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
joined_r0x00010b0e35fc:
    if (puVar2 != (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar2;
      _objc_release(uVar4);
      _objc_release(lStack_48);
      _objc_release(puVar1);
      _os_unfair_lock_unlock(param_1 + 8);
      func_0x00010bdce1c0(param_1);
      goto LAB_10b0e3648;
    }
  }
  else if (param_4 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d04c0();
    puVar2 = puVar3;
    func_0x00010bf51e00();
    _objc_release(puVar3);
    goto joined_r0x00010b0e35fc;
  }
  _objc_release(lStack_48);
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 8);
LAB_10b0e3648:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0e36b4; end: 10b0e3747;  */

undefined8 FUN_10b0e36b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10b0e3748; end: 10b0e374b; -[SCGenericLensMetadataStore startUpdatingWithMode:] */

void FUN_10b0e3748(void)

{
  return;
}



/* Entry: 10b0e374c; end: 10b0e374f; -[SCGenericLensMetadataStore stopUpdating] */

void FUN_10b0e374c(void)

{
  return;
}



/* Entry: 10b0e3750; end: 10b0e3753; -[SCGenericLensMetadataStore applyMetadataProviderSettings:] */

void FUN_10b0e3750(void)

{
  return;
}



/* Entry: 10b0e3754; end: 10b0e3757; -[SCGenericLensMetadataStore synchronize] */

void FUN_10b0e3754(void)

{
  return;
}


