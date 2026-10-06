/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059d852c; end: 1059d8663;  */

void FUN_1059d852c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010be10d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 == 0) goto LAB_1059d864c;
  if (puVar2 == (undefined *)0x0) {
LAB_1059d861c:
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,puVar3);
  }
  else {
    puVar1 = puVar2;
    func_0x00010c09a0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ae750;
    lVar5 = *(long *)(param_1 + 0x28);
    if (puVar3 == (undefined *)0x0) goto LAB_1059d861c;
    puVar3 = puVar2;
    func_0x00010c09a0a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec800(puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
LAB_1059d864c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1059d8664; end: 1059d8667; -[SCSendToListsDataCoordinator createListWithList:successBlock:failureBlock:] */

void FUN_1059d8664(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdede70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createForList_successBlock_fail_112559138);
  return;
}



/* Entry: 1059d8668; end: 1059d866b; -[SCSendToListsDataCoordinator updateListWithList:successBlock:failureBlock:] */

void FUN_1059d8668(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed8490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateForList_successBlock_fail_112593ac8);
  return;
}



/* Entry: 1059d866c; end: 1059d866f; -[SCSendToListsDataCoordinator deleteListWithListId:successBlock:failureBlock:] */

void FUN_1059d866c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfa0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deleteForListId_successBlock_fa_11255c1d8);
  return;
}



/* Entry: 1059d8670; end: 1059d8677; -[SCSendToListsDataCoordinator addListener:] */

void FUN_1059d8670(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1059d8678; end: 1059d867f; -[SCSendToListsDataCoordinator removeListener:] */

void FUN_1059d8678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1059d8680; end: 1059d86a7; -[SCSendToListsDataCoordinator newCustomShortcutIdsObservable] */

undefined8 FUN_1059d8680(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
  return uVar1;
}



/* Entry: 1059d86a8; end: 1059d86cf; -[SCSendToListsDataCoordinator _fetchDataObject] */

void FUN_1059d86a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059d86d0; end: 1059d87d7; -[SCSendToListsDataCoordinator _deleteCachedDataModelForId:completion:] */

void FUN_1059d86d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d87d8; end: 1059d89c3;  */

void FUN_1059d87d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be10d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x0001059d4be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be9a4a0();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b5478;
  _objc_alloc();
  uStack_70 = 0;
  func_0x00010c026340(0);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9a40(uVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60);
  puVar5 = PTR_PTR_1126b5478;
  _objc_alloc();
  uStack_70 = 0;
  func_0x00010c026340(0);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR____NSArray0__struct_11034ab48;
  puVar8 = puVar6;
  func_0x00010bf7e3a0(uVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  lVar1 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1059d89c4;
  puStack_a0 = puVar6;
  uStack_98 = uVar4;
  puStack_90 = puVar5;
  lStack_88 = lVar3;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_initWeak(auStack_a8,lVar1);
  uVar4 = *(undefined8 *)(lVar1 + 0x18);
  _objc_retain(puVar7);
  _objc_copyWeak(auStack_b0,auStack_a8);
  _objc_retain(puVar8);
  func_0x00010c0f7fc0(uVar4);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  return;
}



/* Entry: 1059d89c4; end: 1059d8ac3; -[SCSendToListsDataCoordinator _resetCachedDataModelsForLists:completion:] */

void FUN_1059d89c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d8ac4; end: 1059d8b2f;  */

void FUN_1059d8ac4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1059d4d74(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be9a4a0();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059d8b30; end: 1059d8b87; -[SCSendToListsDataCoordinator _saveWithDataObject:] */

void FUN_1059d8b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c246e80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1059d8b88; end: 1059d8ceb; -[SCSendToListsDataCoordinator _syncWithServerIfNeeded] */

void FUN_1059d8b88(double param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_2;
  func_0x00010be34860();
  if ((int)lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010be47060(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar2);
    _objc_release(lVar1);
    _objc_release(puVar2);
    if (param_1 < 60.0) {
      return;
    }
  }
  _objc_initWeak(auStack_48,param_2);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c265f80(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1059d8cec; end: 1059d8d63;  */

void FUN_1059d8cec(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    _objc_retain(param_2);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010becf460();
    _objc_release(lVar1);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bee1720();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1059d8d64; end: 1059d8d67;  */

void FUN_1059d8d64(void)

{
  return;
}



/* Entry: 1059d8d68; end: 1059d8eef; -[SCSendToListsDataCoordinator _translateAndResetCachedDataModelsForLists:completion:] */

void FUN_1059d8d68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1059d8ef0;
  puStack_70 = &UNK_11084e370;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  uStack_68 = param_4;
  FUN_1059d5660(param_3,uVar1,uVar2,uVar5,uVar3,uVar4,&puStack_88);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d8ef0; end: 1059d8f43;  */

void FUN_1059d8ef0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be924c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059d8f44; end: 1059d9057; -[SCSendToListsDataCoordinator _updateSuggestionsDataWithLists:] */

void FUN_1059d8f44(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
    func_0x000108f3e0c8();
    if (iVar1 != 0) {
      _objc_initWeak(auStack_38,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(param_3);
      func_0x00010bf6cbe0(uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1059d9058; end: 1059d9093;  */

void FUN_1059d9058(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be3ca00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1059d9094; end: 1059d94b3; -[SCSendToListsDataCoordinator _insertSuggestionsDataWithLists:] */

void FUN_1059d9094(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_328;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  undefined1 auStack_188 [128];
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfc2300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  _objc_retain(param_3);
  lStack_328 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_250,auStack_108,0x10);
  if (lStack_328 != 0) {
    lVar1 = *plStack_240;
    do {
      lVar10 = 0;
      do {
        if (*plStack_240 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar11 = *(long *)(lStack_248 + lVar10 * 8);
        puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0();
        _objc_retainAutoreleasedReturnValue();
        lStack_288 = 0;
        uStack_290 = 0;
        uStack_278 = 0;
        plStack_280 = (long *)0x0;
        uStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        uStack_260 = 0;
        lVar4 = lVar11;
        func_0x00010c09a120();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf52a60();
        if (lVar5 != 0) {
          lVar15 = *plStack_280;
          do {
            lVar13 = 0;
            do {
              if (*plStack_280 != lVar15) {
                _objc_enumerationMutation(lVar4);
              }
              lVar12 = *(long *)(lStack_288 + lVar13 * 8);
              lVar6 = lVar12;
              func_0x00010c27dd80();
              if ((int)lVar6 == 0) {
                func_0x00010c122b80(lVar12);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar3,param_2,lVar12);
LAB_1059d9330:
                _objc_release(lVar12);
              }
              else {
                lVar6 = lVar12;
                func_0x00010c27dd80();
                if ((int)lVar6 == 1) {
                  func_0x00010c122b80(lVar12);
                  _objc_retainAutoreleasedReturnValue();
                  lVar6 = lVar2;
                  func_0x00010c0e00e0(lVar2,param_2,lVar12);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar12);
                  uStack_2a8 = 0;
                  uStack_2b0 = 0;
                  uStack_298 = 0;
                  uStack_2a0 = 0;
                  lStack_2c8 = 0;
                  uStack_2d0 = 0;
                  uStack_2b8 = 0;
                  plStack_2c0 = (long *)0x0;
                  lVar12 = lVar6;
                  func_0x00010c0ecc20();
                  _objc_retainAutoreleasedReturnValue();
                  lVar7 = lVar12;
                  func_0x00010bf52a60();
                  if (lVar7 != 0) {
                    lVar14 = *plStack_2c0;
                    do {
                      lVar16 = 0;
                      do {
                        if (*plStack_2c0 != lVar14) {
                          _objc_enumerationMutation(lVar12);
                        }
                        uVar8 = *(undefined8 *)(lStack_2c8 + lVar16 * 8);
                        func_0x00010c2923e0(uVar8);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010befa120(puVar3,param_2,uVar8);
                        _objc_release(uVar8);
                        lVar16 = lVar16 + 1;
                      } while (lVar7 != lVar16);
                      lVar7 = lVar12;
                      func_0x00010bf52a60(lVar12,param_2,&uStack_2d0,auStack_208,0x10);
                    } while (lVar7 != 0);
                  }
                  _objc_release(lVar12);
                  lVar12 = lVar6;
                  goto LAB_1059d9330;
                }
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 != lVar5);
            lVar5 = lVar4;
            func_0x00010bf52a60(lVar4,param_2,&uStack_290,auStack_188,0x10);
          } while (lVar5 != 0);
        }
        _objc_release(lVar4);
        uVar8 = *(undefined8 *)(param_1 + 8);
        func_0x00010c2923e0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d360(puVar3,param_2,uVar8);
        _objc_release(uVar8);
        puVar9 = puVar3;
        func_0x00010bf529e0();
        if ((undefined *)0x1 < puVar9) {
          uVar8 = *(undefined8 *)(param_1 + 0x48);
          func_0x00010c269d40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar3;
          func_0x00010bf00560(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puStack_2f8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_2f0 = 0xc2000000;
          pcStack_2e8 = FUN_1059d94b4;
          puStack_2e0 = &UNK_110841f20;
          lStack_2d8 = lVar11;
          func_0x00010c067020(uVar8,param_2,puVar9,1,&puStack_2f8);
          _objc_release(puVar9);
          _objc_release(uVar8);
        }
        _objc_release(puVar3);
        lVar10 = lVar10 + 1;
      } while (lVar10 != lStack_328);
      lStack_328 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_250,auStack_108,0x10);
    } while (lStack_328 != 0);
  }
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1059d94b4; end: 1059d94b7;  */

void FUN_1059d94b4(void)

{
  return;
}



/* Entry: 1059d94b8; end: 1059d96a7; -[SCSendToListsDataCoordinator _translateAndUpdateCachedDataModelsForList:completion:] */

void FUN_1059d94b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = param_3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1059d96a8;
  puStack_90 = &UNK_11084e370;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_4);
  lVar6 = lVar2;
  uStack_88 = param_4;
  FUN_1059d5660(puVar1,lVar2,uVar3,uVar7,uVar4,uVar5,&puStack_a8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    param_3 = param_3 + 0x28;
    _objc_loadWeakRetained(param_3);
    lVar2 = lVar6;
    func_0x00010bfb1920(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed4880(param_3);
    _objc_release(lVar2);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 1059d96a8; end: 1059d9727;  */

void FUN_1059d96a8(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed4880(param_1);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059d9728; end: 1059d982b; -[SCSendToListsDataCoordinator _updateCachedDataModelsForList:completion:] */

void FUN_1059d9728(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d982c; end: 1059d9933;  */

void FUN_1059d982c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be10d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_1059d4f14();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar3);
  func_0x00010be9a4a0();
  _objc_release(lVar3);
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
  lVar3 = lVar1;
  func_0x00010c09a0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c09a080(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar4);
  _objc_release(lVar3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  if (lVar5 == 0) {
    func_0x00010bdcc7c0();
  }
  else {
    func_0x00010bdcbb20();
  }
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1059d9934; end: 1059d9a3f; -[SCSendToListsDataCoordinator _announceEditList:] */

void FUN_1059d9934(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_3);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e3a0(uVar5);
  _objc_release(puVar1);
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010c0a9a60(lVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(lVar2 + 0x60);
  _objc_retain(puVar3);
  func_0x00010bf0a140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e3a0(uVar5);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(lVar2 + 0x80);
  puVar1 = puVar3;
  func_0x00010c09a080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
  _objc_release(puVar1);
  lVar2 = *(long *)(lVar2 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c0a9a20(lVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_retain(uVar5);
  _objc_retain(param_5);
  _objc_initWeak(auStack_108,lVar2);
  uVar6 = *(undefined8 *)(lVar2 + 0x10);
  _objc_retain(puVar3);
  _objc_copyWeak(auStack_110,auStack_108);
  _objc_retain(uVar5);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar6);
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_110);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_108);
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(puVar3);
  return;
}



/* Entry: 1059d9a40; end: 1059d9b77; -[SCSendToListsDataCoordinator _announceUserInitiatedCreateList:] */

void FUN_1059d9a40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e3a0(uVar5);
  _objc_release(puVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  uVar5 = param_3;
  func_0x00010c09a080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar6);
  _objc_release(uVar5);
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010c0a9a20(lVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_retain(uVar5);
  _objc_retain(param_5);
  _objc_initWeak(auStack_a8,lVar2);
  uVar6 = *(undefined8 *)(lVar2 + 0x10);
  _objc_retain(puVar3);
  _objc_copyWeak(auStack_b0,auStack_a8);
  _objc_retain(uVar5);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar6);
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_a8);
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(puVar3);
  return;
}



/* Entry: 1059d9b78; end: 1059d9ca7; -[SCSendToListsDataCoordinator _createForList:successBlock:failureBlock:] */

void FUN_1059d9b78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d9ca8; end: 1059d9e7f;  */

void FUN_1059d9ca8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_1059d481c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x40;
  _objc_copyWeak(auStack_78);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar11);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar8);
  func_0x00010bf56e80(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_78);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = lVar5;
  _objc_retain(lVar5);
  iVar6 = (int)lVar9;
  if ((lVar5 == 0) || (lVar9 = lVar5, func_0x00010bf529e0(), lVar9 != 1)) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    lVar9 = *(long *)(puVar2 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar1);
    _objc_retainAutoreleasedReturnValue();
    iVar6 = 0;
    (**(code **)(lVar9 + 0x10))(lVar9,0,puVar1);
    _objc_release(puVar1);
  }
  else {
    puVar2 = puVar2 + 0x30;
    _objc_loadWeakRetained(puVar2);
    lVar9 = lVar5;
    func_0x00010bfb1920(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becf480(puVar2);
    _objc_release(lVar9);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = 0;
  if (iVar6 - 1U < 5) {
    lVar9 = (ulong)(iVar6 - 1U) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001059d9fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x20) + 0x10))(*(long *)(lVar5 + 0x20),lVar9);
  return;
}



/* Entry: 1059d9e80; end: 1059d9fcf;  */

void FUN_1059d9e80(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  iVar3 = (int)lVar5;
  if ((param_2 == 0) || (lVar5 = param_2, func_0x00010bf529e0(), lVar5 != 1)) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    lVar5 = *(long *)(param_1 + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar2);
    _objc_retainAutoreleasedReturnValue();
    iVar3 = 0;
    (**(code **)(lVar5 + 0x10))(lVar5,0,puVar2);
    _objc_release(puVar2);
  }
  else {
    puVar1 = (undefined *)(param_1 + 0x30);
    _objc_loadWeakRetained(puVar1);
    lVar5 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becf480(puVar1);
    _objc_release(lVar5);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = 0;
  if (iVar3 - 1U < 5) {
    lVar5 = (ulong)(iVar3 - 1U) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001059d9fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),lVar5);
  return;
}



/* Entry: 1059d9fd0; end: 1059d9fe7;  */

void FUN_1059d9fd0(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 - 1U < 5) {
    lVar1 = (ulong)(param_2 - 1U) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001059d9fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1);
  return;
}



/* Entry: 1059d9fe8; end: 1059da1eb; -[SCSendToListsDataCoordinator _deleteForListId:successBlock:failureBlock:] */

void FUN_1059d9fe8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf6c280(uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained(param_3);
  func_0x00010bdf9d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059da1ec; end: 1059da21f;  */

void FUN_1059da1ec(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf9d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059da220; end: 1059da237;  */

void FUN_1059da220(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 - 1U < 5) {
    lVar1 = (ulong)(param_2 - 1U) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001059da234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1);
  return;
}



/* Entry: 1059da238; end: 1059da367; -[SCSendToListsDataCoordinator _updateForList:successBlock:failureBlock:] */

void FUN_1059da238(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059da368; end: 1059da53f;  */

void FUN_1059da368(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_1059d481c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x40;
  _objc_copyWeak(auStack_78);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar11);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar8);
  func_0x00010c2874c0(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_78);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = lVar5;
  _objc_retain(lVar5);
  iVar6 = (int)lVar9;
  if ((lVar5 == 0) || (lVar9 = lVar5, func_0x00010bf529e0(), lVar9 != 1)) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    lVar9 = *(long *)(puVar2 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar1);
    _objc_retainAutoreleasedReturnValue();
    iVar6 = 0;
    (**(code **)(lVar9 + 0x10))(lVar9,0,puVar1);
    _objc_release(puVar1);
  }
  else {
    puVar2 = puVar2 + 0x30;
    _objc_loadWeakRetained(puVar2);
    lVar9 = lVar5;
    func_0x00010bfb1920(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becf480(puVar2);
    _objc_release(lVar9);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = 0;
  if (iVar6 - 1U < 5) {
    lVar9 = (ulong)(iVar6 - 1U) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001059da6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x20) + 0x10))(*(long *)(lVar5 + 0x20),lVar9);
  return;
}



/* Entry: 1059da540; end: 1059da68f;  */

void FUN_1059da540(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  iVar3 = (int)lVar5;
  if ((param_2 == 0) || (lVar5 = param_2, func_0x00010bf529e0(), lVar5 != 1)) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    lVar5 = *(long *)(param_1 + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar2);
    _objc_retainAutoreleasedReturnValue();
    iVar3 = 0;
    (**(code **)(lVar5 + 0x10))(lVar5,0,puVar2);
    _objc_release(puVar2);
  }
  else {
    puVar1 = (undefined *)(param_1 + 0x30);
    _objc_loadWeakRetained(puVar1);
    lVar5 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becf480(puVar1);
    _objc_release(lVar5);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = 0;
  if (iVar3 - 1U < 5) {
    lVar5 = (ulong)(iVar3 - 1U) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001059da6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),lVar5);
  return;
}



/* Entry: 1059da690; end: 1059da6a7;  */

void FUN_1059da690(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 - 1U < 5) {
    lVar1 = (ulong)(param_2 - 1U) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001059da6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1);
  return;
}



/* Entry: 1059da6a8; end: 1059da77f; -[SCSendToListsDataCoordinator .cxx_destruct] */

void FUN_1059da6a8(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059da780; end: 1059da927; -[SCSendToListsAlertView presentListsAlertViewWithTitle:description:confirmation:completion:] */

void FUN_1059da780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puVar3 = PTR_PTR_1126af4d8;
  puVar1 = PTR_PTR_1126af180;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff880(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c160fc0(puVar3);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c00();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_6 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059da934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_6 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1059da928; end: 1059da93b;  */

void FUN_1059da928(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059da934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1059da93c; end: 1059dab47; -[SCSendToListsRemoveListAlertView presentListsRemoveListAlertViewWithCompletion:] */

void FUN_1059da93c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_3;
  _objc_retain(param_3);
  puVar8 = PTR_PTR_1126af4d8;
  func_0x0001059dac4c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001059dac64();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af180;
  lVar3 = lVar2;
  func_0x0001059dac7c();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126af180;
  puVar5 = puVar4;
  func_0x0001059dac94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff880(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c00();
  _objc_release(puVar4);
  _objc_release(puVar8);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059dab54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1059dab48; end: 1059dade3;  */

void FUN_1059dab48(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059dab54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1059dade4; end: 1059daebb; -[SCSendToListsDataContainerObject initWithCoder:] */

undefined1 * FUN_1059dade4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb388;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059daebc; end: 1059daf93; -[SCSendToListsDataContainerObject initWithUserId:sortedListDataModels:listIdToDataModelMap:] */

undefined1 *
FUN_1059daebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eb388;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059daf94; end: 1059dafb7; -[SCSendToListsDataContainerObject copyWithZone:] */

undefined8 FUN_1059daf94(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1059dafb8; end: 1059db02b; -[SCSendToListsDataContainerObject encodeWithCoder:] */

void FUN_1059dafb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110de81d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e15378);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e15398);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059db02c; end: 1059db0ab; -[SCSendToListsDataContainerObject hash] */

undefined8 * FUN_1059db02c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1059db144:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1059db150;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_1059db150;
          }
          goto LAB_1059db144;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1059db150:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1059db0ac; end: 1059db16b; -[SCSendToListsDataContainerObject isEqual:] */

long FUN_1059db0ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1059db144:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1059db150;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_1059db150;
          }
          goto LAB_1059db144;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1059db150:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1059db16c; end: 1059db173; -[SCSendToListsDataContainerObject userId] */

undefined8 FUN_1059db16c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1059db174; end: 1059db17b; -[SCSendToListsDataContainerObject sortedListDataModels] */

undefined8 FUN_1059db174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1059db17c; end: 1059db183; -[SCSendToListsDataContainerObject listIdToDataModelMap] */

undefined8 FUN_1059db17c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1059db184; end: 1059db1bf; -[SCSendToListsDataContainerObject .cxx_destruct] */

void FUN_1059db184(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059db1c0; end: 1059db233; -[SCSendToRankingFeaturesComposerPersistenceService initWithAsyncValdiRuntime:] */

undefined1 * FUN_1059db1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb390;
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



/* Entry: 1059db234; end: 1059db2bb; -[SCSendToRankingFeaturesComposerPersistenceService resolveComposerServiceWithCompletion:] */

void FUN_1059db234(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1059db2bc;
  puStack_30 = &UNK_1108cc2d8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfc6980(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1059db2bc; end: 1059db3cf;  */

void FUN_1059db2bc(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,0,puVar2);
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1059db570;
    puStack_40 = &UNK_110855710;
    _objc_retain(param_2);
    puStack_60 = (undefined *)0x0;
    ppuVar1 = &puStack_58;
    lStack_38 = param_2;
    FUN_1059db3d0(ppuVar1,&puStack_60);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puStack_60;
    _objc_retain(puStack_60);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),ppuVar1,puVar2);
    _objc_release(ppuVar1);
    _objc_release(lStack_38);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059db3d0; end: 1059db56f;  */

void FUN_1059db3d0(undefined *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  
  iVar5 = (int)param_2;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar7 = param_1;
  (**(code **)(param_1 + 0x10))(param_1);
  _objc_retainAutoreleasedReturnValue();
  do {
    puVar1 = param_1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
      return;
    }
    ___stack_chk_fail();
    if ((iVar5 == 0) || (iVar5 != 1)) {
      __Unwind_Resume();
      puVar1 = PTR_PTR_1126c0c18;
      func_0x00010bfbc0e0(PTR_PTR_1126c0c18);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010bf58360();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      goto _objc_autoreleaseReturnValue;
    }
    _objc_begin_catch();
    _objc_retain();
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar2 = puVar1;
    func_0x00010c121ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = puVar1;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_2 = puVar7;
    _objc_release(puVar4);
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_end_catch();
    puVar7 = (undefined *)0x0;
  } while( true );
}



/* Entry: 1059db570; end: 1059db5c3;  */

void FUN_1059db570(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c0c18;
  func_0x00010bfbc0e0(PTR_PTR_1126c0c18,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf58360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059db5c4; end: 1059db673; -[SCSendToRankingFeaturesComposerPersistenceService persist:completionHandler:] */

void FUN_1059db5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1059db674;
  puStack_48 = &UNK_1108cc308;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c13a680(param_1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1059db674; end: 1059db88b;  */

void FUN_1059db674(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    lVar5 = *(long *)(param_1 + 0x28);
    if (param_3 != 0) {
      (**(code **)(lVar5 + 0x10))(lVar5,param_3);
      goto LAB_1059db818;
    }
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,puVar1);
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x20);
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      lVar5 = *(long *)(param_1 + 0x28);
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,puVar3);
    }
    else {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_1059db88c;
      puStack_78 = &UNK_110876b90;
      _objc_retain(param_2);
      lStack_70 = param_2;
      _objc_retain(puVar1);
      puStack_98 = (undefined *)0x0;
      ppuVar2 = &puStack_90;
      puStack_68 = puVar1;
      FUN_1059db3d0(ppuVar2,&puStack_98);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puStack_98;
      _objc_retain(puStack_98);
      if (ppuVar2 == (undefined **)0x0) {
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3);
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar4);
        func_0x00010c0e3040(ppuVar2);
        _objc_release(uVar4);
      }
      _objc_release(ppuVar2);
      _objc_release(puStack_68);
      _objc_release(lStack_70);
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
LAB_1059db818:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1059db88c; end: 1059db957;  */

void FUN_1059db88c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0f9f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1059db958; end: 1059db9db; -[SCSendToRankingFeaturesComposerPersistenceService retrieveTimestampWithCompletionHandler:] */

void FUN_1059db958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1059db9dc;
  puStack_30 = &UNK_1108cc338;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c13a680(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1059db9dc; end: 1059dbb7b;  */

void FUN_1059db9dc(long param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (param_3 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,0,param_3);
      goto LAB_1059dbb0c;
    }
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,0,puVar2);
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1059dbb7c;
    puStack_60 = &UNK_110855710;
    _objc_retain(param_2);
    puStack_80 = (undefined *)0x0;
    ppuVar1 = &puStack_78;
    lStack_58 = param_2;
    FUN_1059db3d0(ppuVar1,&puStack_80);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puStack_80;
    _objc_retain(puStack_80);
    if (ppuVar1 == (undefined **)0x0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,puVar2);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      func_0x00010c0e3040(ppuVar1);
      _objc_release(uVar3);
    }
    _objc_release(ppuVar1);
    _objc_release(lStack_58);
  }
  _objc_release(puVar2);
LAB_1059dbb0c:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1059dbb7c; end: 1059dbbc7;  */

void FUN_1059dbb7c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c13efa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1059dbbc8; end: 1059dbc8f;  */

void FUN_1059dbbc8(double param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (param_4 == 0) {
    if (param_3 != 0) {
      func_0x00010bf885a0(param_3);
      func_0x00010bf655e0(param_1 / 1000.0,puVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),puVar2,0);
      _objc_release(puVar2);
      goto LAB_1059dbc60;
    }
    lVar1 = *(long *)(param_2 + 0x20);
    pcVar4 = *(code **)(lVar1 + 0x10);
    lVar3 = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    pcVar4 = *(code **)(lVar1 + 0x10);
    lVar3 = param_4;
  }
  (*pcVar4)(lVar1,0,lVar3);
LAB_1059dbc60:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059dbc90; end: 1059dbd13; -[SCSendToRankingFeaturesComposerPersistenceService retrieveFeaturesWithCompletionHandler:] */

void FUN_1059dbc90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1059dbd14;
  puStack_30 = &UNK_1108cc338;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c13a680(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1059dbd14; end: 1059dbeb3;  */

void FUN_1059dbd14(long param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (param_3 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,0,param_3);
      goto LAB_1059dbe44;
    }
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,0,puVar2);
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1059dbeb4;
    puStack_60 = &UNK_110855710;
    _objc_retain(param_2);
    puStack_80 = (undefined *)0x0;
    ppuVar1 = &puStack_78;
    lStack_58 = param_2;
    FUN_1059db3d0(ppuVar1,&puStack_80);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puStack_80;
    _objc_retain(puStack_80);
    if (ppuVar1 == (undefined **)0x0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,puVar2);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      func_0x00010c0e3040(ppuVar1);
      _objc_release(uVar3);
    }
    _objc_release(ppuVar1);
    _objc_release(lStack_58);
  }
  _objc_release(puVar2);
LAB_1059dbe44:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1059dbeb4; end: 1059dbeff;  */

void FUN_1059dbeb4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c13e7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1059dbf00; end: 1059dbfcb;  */

void FUN_1059dbf00(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3);
  }
  else {
    puVar1 = PTR_PTR_1126c0c20;
    _objc_alloc(PTR_PTR_1126c0c20);
    func_0x00010c008360();
    _objc_retain(param_3);
    _objc_release(param_3);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1,param_3);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1059dbfcc; end: 1059dc07b; -[SCSendToRankingFeaturesComposerPersistenceService persistContextualFeatures:completionHandler:] */

void FUN_1059dbfcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1059dc07c;
  puStack_48 = &UNK_1108cc308;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c13a680(param_1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1059dc07c; end: 1059dc293;  */

void FUN_1059dc07c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    lVar5 = *(long *)(param_1 + 0x28);
    if (param_3 != 0) {
      (**(code **)(lVar5 + 0x10))(lVar5,param_3);
      goto LAB_1059dc220;
    }
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,puVar1);
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x20);
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      lVar5 = *(long *)(param_1 + 0x28);
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,puVar3);
    }
    else {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_1059dc294;
      puStack_78 = &UNK_110876b90;
      _objc_retain(param_2);
      lStack_70 = param_2;
      _objc_retain(puVar1);
      puStack_98 = (undefined *)0x0;
      ppuVar2 = &puStack_90;
      puStack_68 = puVar1;
      FUN_1059db3d0(ppuVar2,&puStack_98);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puStack_98;
      _objc_retain(puStack_98);
      if (ppuVar2 == (undefined **)0x0) {
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3);
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar4);
        func_0x00010c0e3040(ppuVar2);
        _objc_release(uVar4);
      }
      _objc_release(ppuVar2);
      _objc_release(puStack_68);
      _objc_release(lStack_70);
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
LAB_1059dc220:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1059dc294; end: 1059dc35f;  */

void FUN_1059dc294(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0f9fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1059dc360; end: 1059dc3e3; -[SCSendToRankingFeaturesComposerPersistenceService retrieveContextualFeaturesTimestampWithCompletionHandler:] */

void FUN_1059dc360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1059dc3e4;
  puStack_30 = &UNK_1108cc338;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c13a680(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1059dc3e4; end: 1059dc583;  */

void FUN_1059dc3e4(long param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (param_3 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,0,param_3);
      goto LAB_1059dc514;
    }
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,0,puVar2);
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1059dc584;
    puStack_60 = &UNK_110855710;
    _objc_retain(param_2);
    puStack_80 = (undefined *)0x0;
    ppuVar1 = &puStack_78;
    lStack_58 = param_2;
    FUN_1059db3d0(ppuVar1,&puStack_80);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puStack_80;
    _objc_retain(puStack_80);
    if (ppuVar1 == (undefined **)0x0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,puVar2);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      func_0x00010c0e3040(ppuVar1);
      _objc_release(uVar3);
    }
    _objc_release(ppuVar1);
    _objc_release(lStack_58);
  }
  _objc_release(puVar2);
LAB_1059dc514:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1059dc584; end: 1059dc5cf;  */

void FUN_1059dc584(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c13e6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1059dc5d0; end: 1059dc697;  */

void FUN_1059dc5d0(double param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (param_4 == 0) {
    if (param_3 != 0) {
      func_0x00010bf885a0(param_3);
      func_0x00010bf655e0(param_1 / 1000.0,puVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),puVar2,0);
      _objc_release(puVar2);
      goto LAB_1059dc668;
    }
    lVar1 = *(long *)(param_2 + 0x20);
    pcVar4 = *(code **)(lVar1 + 0x10);
    lVar3 = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    pcVar4 = *(code **)(lVar1 + 0x10);
    lVar3 = param_4;
  }
  (*pcVar4)(lVar1,0,lVar3);
LAB_1059dc668:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059dc698; end: 1059dc71b; -[SCSendToRankingFeaturesComposerPersistenceService retrieveContextualFeaturesWithCompletionHandler:] */

void FUN_1059dc698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1059dc71c;
  puStack_30 = &UNK_1108cc338;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c13a680(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1059dc71c; end: 1059dc8bb;  */

void FUN_1059dc71c(long param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (param_3 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,0,param_3);
      goto LAB_1059dc84c;
    }
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,0,puVar2);
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1059dc8bc;
    puStack_60 = &UNK_110855710;
    _objc_retain(param_2);
    puStack_80 = (undefined *)0x0;
    ppuVar1 = &puStack_78;
    lStack_58 = param_2;
    FUN_1059db3d0(ppuVar1,&puStack_80);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puStack_80;
    _objc_retain(puStack_80);
    if (ppuVar1 == (undefined **)0x0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,puVar2);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      func_0x00010c0e3040(ppuVar1);
      _objc_release(uVar3);
    }
    _objc_release(ppuVar1);
    _objc_release(lStack_58);
  }
  _objc_release(puVar2);
LAB_1059dc84c:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1059dc8bc; end: 1059dc907;  */

void FUN_1059dc8bc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c13e680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1059dc908; end: 1059dc9d3;  */

void FUN_1059dc908(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3);
  }
  else {
    puVar1 = PTR_PTR_1126c0c28;
    _objc_alloc(PTR_PTR_1126c0c28);
    func_0x00010c008360();
    _objc_retain(param_3);
    _objc_release(param_3);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1,param_3);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1059dc9d4; end: 1059dc9df; -[SCSendToRankingFeaturesComposerPersistenceService .cxx_destruct] */

void FUN_1059dc9d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059dc9e0; end: 1059dcc57; -[SCSendToRankingRecentsPersistenceServiceProvider provide] */

/* WARNING: Removing unreachable block (ram,0x0001059dcbe4) */

void FUN_1059dc9e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  _objc_initWeak(auStack_78,param_1);
  puVar2 = PTR_PTR_1126c0c30;
  _objc_alloc(PTR_PTR_1126c0c30);
  puVar3 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1059dcc58;
  puStack_88 = &UNK_1108cc388;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1059dcc98;
  puStack_b0 = &UNK_1108cc3b8;
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_d0,auStack_78);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c740(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_d0);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059dcc58; end: 1059dcd17;  */

void FUN_1059dcc58(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d0020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059dcd18; end: 1059dcd93; -[SCSendToRankingRecentsPersistenceServiceProvider modelPersistenceService] */

void FUN_1059dcd18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c0c38;
  _objc_alloc(PTR_PTR_1126c0c38);
  FUN_1059dcd94(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d820(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059dcd94; end: 1059dcdb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059dcd94(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272d11c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059dcdb8; end: 1059dced7; -[SCSendToRankingRecentsPersistenceServiceProvider featuresPersistenceService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059dcdb8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + _DAT_11272d110;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c28ffe0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 == 0) {
    puVar5 = PTR_PTR_1126c0c48;
    _objc_alloc(PTR_PTR_1126c0c48);
    FUN_1059dcd94(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf87660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00d820(puVar5,param_2,lVar1);
  }
  else {
    puVar5 = PTR_PTR_1126c0c40;
    _objc_alloc(PTR_PTR_1126c0c40);
    param_1 = param_1 + _DAT_11272d114;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf0c2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff4860(puVar5,param_2,lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1059dced8; end: 1059dcf53; -[SCSendToRankingRecentsPersistenceServiceProvider _contextualFeaturesPersistenceService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059dced8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c0c40;
  _objc_alloc(PTR_PTR_1126c0c40);
  param_1 = param_1 + _DAT_11272d114;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf0c2c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4860(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059dcf54; end: 1059dcfb3; -[SCSendToRankingRecentsPersistenceServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059dcf54(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272d110);
  _objc_destroyWeak(param_1 + _DAT_11272d114);
  _objc_destroyWeak(param_1 + _DAT_11272d11c);
  _objc_destroyWeak(param_1 + _DAT_11272d118);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272d120,0);
  return;
}



/* Entry: 1059dcfb4; end: 1059dd03b; -[SCSendToRankingFeaturesDocObjectPersistenceService initWithDocObjectContext:] */

undefined1 * FUN_1059dcfb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb398;
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



/* Entry: 1059dd03c; end: 1059dd2e3; -[SCSendToRankingFeaturesDocObjectPersistenceService persist:completionHandler:] */

void FUN_1059dd03c(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,puVar4);
  }
  else {
    puVar4 = param_3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,puVar5);
    }
    else {
      puVar5 = PTR_PTR_1126c0c50;
      _objc_alloc();
      puVar2 = param_3;
      func_0x00010bf998c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c020e00();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_retain(param_4);
      _objc_retain(puVar5);
      func_0x00010c0f8500(lVar1);
      _objc_release(param_4);
      _objc_release(puVar5);
    }
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059dd2e4; end: 1059dd36f;  */

void FUN_1059dd2e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1059df84c(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059dd370; end: 1059dd3fb;  */

void FUN_1059dd370(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if ((int)param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059dd398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,0);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e153f8,0xffffffffffffffff,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059dd3fc; end: 1059dd49b; -[SCSendToRankingFeaturesDocObjectPersistenceService retrieveTimestampWithCompletionHandler:] */

void FUN_1059dd3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1059dd49c;
  puStack_30 = &UNK_1108cc418;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c13e7c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1059dd49c; end: 1059dd583;  */

void FUN_1059dd49c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) ||
     (lVar1 = param_2, func_0x00010c2709c0(), puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770, lVar1 < 1
     )) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c2709c0(param_2);
    func_0x00010bf655e0((double)lVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,puVar2,0);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059dd584; end: 1059dd623; -[SCSendToRankingFeaturesDocObjectPersistenceService retrieveFeaturesWithCompletionHandler:] */

void FUN_1059dd584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1059dd624;
  puStack_30 = &UNK_1108cc418;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c13e7c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1059dd624; end: 1059dd773;  */

void FUN_1059dd624(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0c20;
      _objc_alloc(PTR_PTR_1126c0c20);
      lVar1 = param_2;
      func_0x00010c296d80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008360(puVar2);
      _objc_retain(param_3);
      _objc_release(param_3);
      _objc_release(lVar1);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2,param_3);
      _objc_release(puVar2);
      goto LAB_1059dd708;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3);
LAB_1059dd708:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1059dd774; end: 1059dda93; -[SCSendToRankingFeaturesDocObjectPersistenceService retrieveEntryWithCompletionHandler:] */

void FUN_1059dd774(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uStack_19c;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined4 uStack_168;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined1 uStack_109;
  undefined **ppuStack_108;
  undefined4 uStack_100;
  undefined2 uStack_f0;
  undefined2 uStack_ee;
  undefined1 *puStack_d0;
  undefined ***pppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,0,puVar6);
  }
  else {
    puVar3 = PTR_PTR_1126c0c50;
    _objc_opt_self(PTR_PTR_1126c0c50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa6be0(auStack_98,lVar2);
    puVar4 = &uStack_109;
    FUN_1059def84();
    uStack_178 = 0xf;
    uStack_168 = 0x100;
    ppuStack_150 = &PTR____CFConstantStringClassReference_110e15458;
    ppuStack_180 = &PTR_SUB_110862760;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    plStack_120 = (long *)0x0;
    uStack_128 = 0;
    plStack_118 = (long *)0x0;
    uStack_ee = *(undefined2 *)(puVar4 + 0x1a);
    uStack_100 = 10;
    uStack_f0 = 0x100;
    ppuStack_108 = &PTR_FUN_110862700;
    uStack_b8 = 0;
    uStack_c0 = 0;
    plStack_a8 = (long *)0x0;
    uStack_b0 = 0;
    plStack_a0 = (long *)0x0;
    puStack_198 = (undefined8 *)0x0;
    puStack_190 = (undefined8 *)0x0;
    uStack_188 = 0;
    uStack_19c = 0;
    puVar5 = auStack_98;
    puStack_d0 = puVar4;
    pppuStack_c8 = &ppuStack_180;
    func_0x0001000e77a0(puVar5,&ppuStack_108,&puStack_198,&uStack_19c);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (puStack_198 != (undefined8 *)0x0) {
      puStack_190 = puStack_198;
      __ZdlPv();
    }
    plVar1 = plStack_a0;
    ppuStack_108 = &PTR_FUN_110862700;
    plStack_a0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_a8;
    plStack_a8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_198 = &uStack_c0;
    func_0x000100105004(&puStack_198);
    plVar1 = plStack_118;
    ppuStack_180 = &PTR_SUB_110862760;
    plStack_118 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_120;
    plStack_120 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_198 = &uStack_138;
    func_0x000100105004(&puStack_198);
    _objc_release(ppuStack_150);
    func_0x0001000e76e0(auStack_70);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(puVar3);
    (**(code **)(param_3 + 0x10))(param_3,puVar6,0);
  }
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1059dda94; end: 1059dda9f; -[SCSendToRankingFeaturesDocObjectPersistenceService .cxx_destruct] */

void FUN_1059dda94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059ddaa0; end: 1059ddb27; -[SCSendToRankingRecentsModelDocObjectPersistenceService initWithDocObjectContext:] */

undefined1 * FUN_1059ddaa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb3a0;
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


