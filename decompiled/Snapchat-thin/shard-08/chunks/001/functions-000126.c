/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e28a5c; end: 105e28a67;  */

void FUN_105e28a5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 105e28a68; end: 105e28bab; -[SCSendToSuggestionsBarProvider _onSuggestionSelected:isSelected:] */

void FUN_105e28a68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c27dd80();
  if ((int)uVar1 != 1) {
    if ((int)uVar1 != 0) goto LAB_105e28b94;
    uVar1 = param_3;
    func_0x00010bf96e80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000108ef83a4(uVar1,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar1);
    func_0x00010c1fb940(*(undefined8 *)(param_1 + 0x10));
    _objc_release(uVar2);
  }
  puVar4 = PTR_PTR_1126b60f8;
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  uVar1 = param_3;
  func_0x00010bf96e80(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2b40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
LAB_105e28b94:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e28bac; end: 105e28c97; -[SCSendToSuggestionsBarProvider _selectedRecipients] */

void FUN_105e28bac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c159a20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105e28c98; end: 105e28d87;  */

void FUN_105e28c98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108ebfb0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15a8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e28d88; end: 105e28da7;  */

void FUN_105e28d88(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108ec010);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e28da8; end: 105e28fdb;  */

void FUN_105e28da8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105e29448;
  uStack_40 = 0x105e29458;
  uStack_38 = 0;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_105e29448;
  uStack_90 = 0x105e29458;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110daafd8;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  pcStack_c8 = FUN_105e29448;
  uStack_c0 = 0x105e29458;
  uStack_b8 = 0;
  func_0x00010c0c0060(param_2);
  if (puStack_58[5] == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c5118;
    _objc_alloc(PTR_PTR_1126c5118);
    func_0x00010c0100c0();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puStack_d8[5] != 0) {
      func_0x00010c26f320();
      func_0x00010c0df720(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20e300(puVar2);
      _objc_release(puVar1);
    }
  }
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(uStack_b8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(ppuStack_88);
  __Block_object_dispose(&uStack_80,8);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e28fdc; end: 105e290d7; -[SCSendToSuggestionsBarProvider _subscribeToGroupSelections] */

void FUN_105e28fdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105e290d8;
  puStack_60 = &UNK_1108ec060;
  uStack_58 = uVar3;
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  func_0x00010bfb2660(uVar4,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 105e290d8; end: 105e292fb;  */

void FUN_105e290d8(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c15a640();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  puVar8 = puVar4;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_retain(lVar6);
    lVar2 = lVar6;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      lVar2 = lVar6;
      func_0x00010c0dfd40(lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar2;
      func_0x000108ef7600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      puVar8 = PTR_PTR_1126b60f8;
      uVar5 = *(undefined8 *)(puVar1 + 0x20);
      func_0x00010c154b60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f2b40(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(lVar7);
    }
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105e292fc; end: 105e2938b;  */

void FUN_105e292fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfb0d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c154b60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf1f3c0(uVar2);
  func_0x00010c1fb940(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e2938c; end: 105e29393; -[SCSendToSuggestionsBarProvider suggestionsBar] */

undefined8 FUN_105e2938c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105e29394; end: 105e29447; -[SCSendToSuggestionsBarProvider .cxx_destruct] */

void FUN_105e29394(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 105e29448; end: 105e2945f;  */

void FUN_105e29448(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105e29460; end: 105e29563;  */

void FUN_105e29460(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar1;
  _objc_release(uVar3);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  lVar1 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c08fa60();
  lVar2 = param_2;
  if (lVar4 == 0) {
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain();
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010901db40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e29564; end: 105e2963f;  */

void FUN_105e29564(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar1;
  _objc_release(uVar3);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  lVar1 = param_2;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c08fa60();
  lVar2 = param_2;
  if (lVar4 == 0) {
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(lVar2);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e29640; end: 105e2972f; -[SCSendToContactTracker initWithNonSnapchattersDataCoordinator:utilityPerformer:] */

undefined1 *
FUN_105e29640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ed3b8;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e29730; end: 105e2982b; -[SCSendToContactTracker trackExportBeginWithSelectionItem:source:] */

void FUN_105e29730(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = param_3;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    lVar3 = param_4;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar5);
    if (lVar3 == 0) goto LAB_105e29808;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    lVar5 = *(long *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = param_4;
  }
  _objc_release(lVar5);
LAB_105e29808:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e2982c; end: 105e29b17; -[SCSendToContactTracker trackExportComplete] */

void FUN_105e2982c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar5 = *(long *)(param_2 + 0x28);
  if ((lVar5 != 0) && (*(long *)(param_2 + 0x30) != 0)) {
    _objc_retain(lVar5);
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    _objc_retain(uVar6);
    lVar1 = lVar5;
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c122b80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010c08fa60();
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      _CACurrentMediaTime();
      _os_unfair_lock_lock(param_2 + 0x38);
      lVar7 = *(long *)(param_2 + 0x20);
      lVar1 = lVar5;
      func_0x00010c122a80(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar7 != 0) {
        uVar8 = *(undefined8 *)(param_2 + 0x18);
        lVar1 = lVar5;
        func_0x00010c122a80(lVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d360(uVar8);
        _objc_release(lVar2);
        _objc_release(lVar1);
      }
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      lVar1 = lVar5;
      func_0x00010c122a80(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar8);
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar4 = PTR_PTR_1126c5120;
      _objc_alloc(PTR_PTR_1126c5120);
      func_0x00010c01fd00(param_1);
      uVar8 = *(undefined8 *)(param_2 + 0x20);
      lVar1 = lVar5;
      func_0x00010c122a80(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar8);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010be92ec0(param_2);
      _objc_initWeak(auStack_68,param_2);
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(lVar5);
      func_0x00010c0f7fc0(uVar8);
      _objc_release(lVar5);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar4);
      _os_unfair_lock_unlock(param_2 + 0x38);
    }
    _objc_release(uVar6);
    _objc_release(lVar5);
  }
  return;
}



/* Entry: 105e29b18; end: 105e29b4b;  */

void FUN_105e29b18(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beda3c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e29b4c; end: 105e29b4f; -[SCSendToContactTracker trackExportDismiss] */

void FUN_105e29b4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetInProgressSelectionStates_112582550);
  return;
}



/* Entry: 105e29b50; end: 105e29bdb; -[SCSendToContactTracker orderedSelectedItems] */

void FUN_105e29b50(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e29bdc;
  puStack_30 = &UNK_1108ec0f0;
  lStack_28 = param_1;
  func_0x000100504554(uVar1,&puStack_48);
  _os_unfair_lock_unlock(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e29bdc; end: 105e29c2b;  */

void FUN_105e29bdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c0e00e0(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e29c2c; end: 105e29cb7; -[SCSendToContactTracker orderedSelectionItemAttributions] */

void FUN_105e29c2c(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e29cb8;
  puStack_30 = &UNK_1108ec120;
  lStack_28 = param_1;
  func_0x000100504554(uVar1,&puStack_48);
  _os_unfair_lock_unlock(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e29cb8; end: 105e29cc7;  */

void FUN_105e29cb8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),
             PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 105e29cc8; end: 105e29cf7; -[SCSendToContactTracker _resetInProgressSelectionStates] */

void FUN_105e29cc8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e29cf8; end: 105e29e97; -[SCSendToContactTracker _updateLastInteractionTimestampFor:] */

void FUN_105e29cf8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010befcf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126c24d0;
  _objc_opt_class(PTR_PTR_1126c24d0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010c08fa60();
  if (uVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    func_0x00010c286f80(uVar5);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar1);
  }
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105e29e98; end: 105e29e9b;  */

void FUN_105e29e98(void)

{
  return;
}



/* Entry: 105e29e9c; end: 105e29efb; -[SCSendToContactTracker .cxx_destruct] */

void FUN_105e29e9c(long param_1)

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



/* Entry: 105e29efc; end: 105e2a00f; -[SCSendToTracker initWithSelectionTracker:contactTracker:snapProUserProfileIdProvider:] */

undefined1 *
FUN_105e29efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ed3c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c06f860();
    *(char *)((long)puVar1 + 0x18) = (char)puVar4;
    *(undefined1 *)((long)puVar1 + 0x19) = 1;
    *(undefined1 *)((long)puVar1 + 0x1d) = 0;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = PTR____NSDictionary0__struct_11034ab58;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e2a010; end: 105e2a05f; -[SCSendToTracker isCreateHighlightEnabled] */

byte FUN_105e2a010(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c239b40();
  if ((uVar2 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x1d);
  }
  else {
    bVar3 = 1;
  }
  _objc_release(uVar1);
  return bVar3 & 1;
}



/* Entry: 105e2a060; end: 105e2a0ef; -[SCSendToTracker toggleValues] */

void FUN_105e2a060(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0d3c80(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010beb2620(param_1);
  func_0x00010c0df6e0(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f12eb8);
  _objc_release(puVar2);
  uVar3 = uVar1;
  func_0x00010bf51e00(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105e2a0f0; end: 105e2a0f7; -[SCSendToTracker emitEvent:] */

void FUN_105e2a0f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_next__112614028);
  return;
}



/* Entry: 105e2a0f8; end: 105e2a11f; -[SCSendToTracker eventObservable] */

void FUN_105e2a0f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e2a120; end: 105e2a23b; -[SCSendToTracker _shouldAllowRemixingToggleValue] */

ulong FUN_105e2a120(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b3558;
  _objc_alloc();
  func_0x00010c03d4e0();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15aa20(uVar5,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = uVar5;
  func_0x00010c0e00e0(uVar5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  if ((int)uVar4 != 0) {
    uVar6 = (uint)*(byte *)(param_1 + 0x1b);
  }
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (ulong)(uVar6 & 1);
  }
  ___stack_chk_fail();
  return *(ulong *)(puVar1 + 0x20);
}



/* Entry: 105e2a23c; end: 105e2a243; -[SCSendToTracker selectionTracker] */

undefined8 FUN_105e2a23c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105e2a244; end: 105e2a24b; -[SCSendToTracker contactTracker] */

undefined8 FUN_105e2a244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105e2a24c; end: 105e2a253; -[SCSendToTracker previewText] */

undefined8 FUN_105e2a24c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105e2a254; end: 105e2a25b; -[SCSendToTracker setPreviewText:] */

void FUN_105e2a254(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105e2a25c; end: 105e2a263; -[SCSendToTracker setToggleValues:] */

void FUN_105e2a25c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105e2a264; end: 105e2a26b; -[SCSendToTracker topicTracker] */

undefined8 FUN_105e2a264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105e2a26c; end: 105e2a29b; -[SCSendToTracker setTopicTracker:] */

void FUN_105e2a26c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e2a29c; end: 105e2a2a7; -[SCSendToTracker shouldCreateHighlight] */

byte FUN_105e2a29c(long param_1)

{
  return *(byte *)(param_1 + 0x18) & 1;
}



/* Entry: 105e2a2a8; end: 105e2a2af; -[SCSendToTracker setShouldCreateHighlight:] */

void FUN_105e2a2a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 105e2a2b0; end: 105e2a2bb; -[SCSendToTracker shareAnonymously] */

void FUN_105e2a2b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x48,1);
  return;
}



/* Entry: 105e2a2bc; end: 105e2a2c3; -[SCSendToTracker setShareAnonymously:] */

void FUN_105e2a2bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105e2a2c4; end: 105e2a2cb; -[SCSendToTracker sponsor] */

undefined8 FUN_105e2a2c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105e2a2cc; end: 105e2a2d3; -[SCSendToTracker setSponsor:] */

void FUN_105e2a2cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105e2a2d4; end: 105e2a2db; -[SCSendToTracker sponsorProfile] */

undefined8 FUN_105e2a2d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105e2a2dc; end: 105e2a2e3; -[SCSendToTracker setSponsorProfile:] */

void FUN_105e2a2dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105e2a2e4; end: 105e2a2ef; -[SCSendToTracker shouldAutoApproveSpotlightReplies] */

byte FUN_105e2a2e4(long param_1)

{
  return *(byte *)(param_1 + 0x19) & 1;
}



/* Entry: 105e2a2f0; end: 105e2a2f7; -[SCSendToTracker setShouldAutoApproveSpotlightReplies:] */

void FUN_105e2a2f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x19) = param_3;
  return;
}



/* Entry: 105e2a2f8; end: 105e2a303; -[SCSendToTracker shouldShowSpotlightRepliesAutoApprovalToggle] */

byte FUN_105e2a2f8(long param_1)

{
  return *(byte *)(param_1 + 0x1a) & 1;
}



/* Entry: 105e2a304; end: 105e2a30b; -[SCSendToTracker setShouldShowSpotlightRepliesAutoApprovalToggle:] */

void FUN_105e2a304(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1a) = param_3;
  return;
}



/* Entry: 105e2a30c; end: 105e2a317; -[SCSendToTracker shouldAllowSpotlightRemixing] */

byte FUN_105e2a30c(long param_1)

{
  return *(byte *)(param_1 + 0x1b) & 1;
}



/* Entry: 105e2a318; end: 105e2a31f; -[SCSendToTracker setShouldAllowSpotlightRemixing:] */

void FUN_105e2a318(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1b) = param_3;
  return;
}



/* Entry: 105e2a320; end: 105e2a32b; -[SCSendToTracker shouldShowAllowSpotlightRemixingToggle] */

byte FUN_105e2a320(long param_1)

{
  return *(byte *)(param_1 + 0x1c) & 1;
}



/* Entry: 105e2a32c; end: 105e2a333; -[SCSendToTracker setShouldShowAllowSpotlightRemixingToggle:] */

void FUN_105e2a32c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1c) = param_3;
  return;
}



/* Entry: 105e2a334; end: 105e2a33f; -[SCSendToTracker canSaveHighlightsWithMemberRole] */

byte FUN_105e2a334(long param_1)

{
  return *(byte *)(param_1 + 0x1d) & 1;
}



/* Entry: 105e2a340; end: 105e2a347; -[SCSendToTracker setCanSaveHighlightsWithMemberRole:] */

void FUN_105e2a340(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1d) = param_3;
  return;
}



/* Entry: 105e2a348; end: 105e2a34f; -[SCSendToTracker scheduleDate] */

undefined8 FUN_105e2a348(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105e2a350; end: 105e2a37f; -[SCSendToTracker setScheduleDate:] */

void FUN_105e2a350(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e2a380; end: 105e2a387; -[SCSendToTracker remixConfiguration] */

undefined8 FUN_105e2a380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105e2a388; end: 105e2a3b7; -[SCSendToTracker setRemixConfiguration:] */

void FUN_105e2a388(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e2a3b8; end: 105e2a3cf; -[SCSendToTracker externalContentShareDelegate] */

void FUN_105e2a3b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e2a3d0; end: 105e2a3db; -[SCSendToTracker setExternalContentShareDelegate:] */

void FUN_105e2a3d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 105e2a3dc; end: 105e2a48b; -[SCSendToTracker .cxx_destruct] */

void FUN_105e2a3dc(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e2a48c; end: 105e2a50f; -[SCSendToExternalFloatingShareButton initWithFrame:] */

undefined1 * FUN_105e2a48c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ed3c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bde5c20(puVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105e2a510; end: 105e2a7eb; -[SCSendToExternalFloatingShareButton _configureSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2a510(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_5,param_6,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_5);
  dVar7 = param_3;
  func_0x00010bf20c00(param_5);
  func_0x00010bf19a00(param_1,param_2,param_3,param_4,dVar7 * 0.5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_opt_new();
  lVar6 = (long)_DAT_11273784c;
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  *(undefined **)(param_5 + lVar6) = puVar2;
  _objc_release(uVar5);
  puVar2 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_5 + lVar6),param_6,puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(*(undefined8 *)(param_5 + lVar6),param_6,puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c1fe740(*(undefined8 *)(param_5 + lVar6),param_6,puVar3);
  _objc_release(puVar2);
  func_0x00010c1fe840(0x4000000000000000,*(undefined8 *)(param_5 + lVar6));
  func_0x00010c1fe7a0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),
                      *(undefined8 *)(param_5 + lVar6));
  func_0x00010c1fe800(0x3e4ccccd,*(undefined8 *)(param_5 + lVar6));
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar6));
  lVar6 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(lVar6);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_6,
                      &PTR____CFConstantStringClassReference_110dbb538);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  lVar6 = (long)_DAT_112737850;
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  *(undefined **)(param_5 + lVar6) = puVar2;
  _objc_release(uVar5);
  func_0x00010c182220(*(undefined8 *)(param_5 + lVar6),param_6,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_5 + lVar6),param_6,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  func_0x00010bfb68e0(param_5);
  func_0x00010bfb68e0(param_5);
  func_0x00010c19f0e0((param_3 + -20.0) * 0.5,(param_4 + -20.0) * 0.5,0x4034000000000000,
                      0x4034000000000000,*(undefined8 *)(param_5 + lVar6));
  func_0x00010befbb60(param_5,param_6,*(undefined8 *)(param_5 + lVar6));
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e2a7ec; end: 105e2a8bb; -[SCSendToExternalFloatingShareButton traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2a7ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puVar3 = PTR_s_traitCollectionDidChange__11267bf88;
  puStack_38 = PTR_PTR_1126ed3c8;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar3,param_3);
  lVar1 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfd64c0();
  _objc_release(param_3);
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(*(undefined8 *)(param_1 + _DAT_11273784c));
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 105e2a8bc; end: 105e2a8eb; -[SCSendToExternalFloatingShareButton _handleTapAction] */

void FUN_105e2a8bc(undefined8 param_1)

{
  func_0x00010beee300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9e120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e2a8ec; end: 105e2a90b; -[SCSendToExternalFloatingShareButton actionDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2a8ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112737854);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e2a90c; end: 105e2a91f; -[SCSendToExternalFloatingShareButton setActionDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2a90c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112737854,param_3);
  return;
}



/* Entry: 105e2a920; end: 105e2a96b; -[SCSendToExternalFloatingShareButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2a920(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112737854);
  _objc_storeStrong(param_1 + _DAT_11273784c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112737850,0);
  return;
}



/* Entry: 105e2a96c; end: 105e2aabf; -[SCSendToTrayViewController initWithDelegate:trayVC:defaultTrayHeightPercentage:useSpringAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105e2a96c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126ed3d0;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar4 = (long)_DAT_112737858;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c152980(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f7b20();
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11273785c),param_4);
    puVar3 = PTR_PTR_1126b0a08;
    _objc_alloc();
    func_0x00010c055640();
    lVar4 = (long)_DAT_112737860;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c167420(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c219e20(*(undefined8 *)((long)puVar1 + lVar4));
    *(undefined8 *)((long)puVar1 + (long)_DAT_112737864) = 1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112737868) = param_1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105e2aac0; end: 105e2aac7; -[SCSendToTrayViewController modalPresentationStyle] */

undefined8 FUN_105e2aac0(void)

{
  return 5;
}



/* Entry: 105e2aac8; end: 105e2ab43; -[SCSendToTrayViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2aac8(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ed3d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  lVar1 = (long)_DAT_11273786c;
  if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
    func_0x00010c10c5a0(*(undefined8 *)(param_1 + _DAT_112737868),
                        *(undefined8 *)(param_1 + _DAT_112737860));
    *(undefined1 *)(param_1 + lVar1) = 1;
  }
  return;
}



/* Entry: 105e2ab44; end: 105e2abb3; -[SCSendToTrayViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2ab44(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ed3d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  lVar1 = param_1;
  func_0x00010c06d1a0();
  if ((int)lVar1 != 0) {
    param_1 = param_1 + _DAT_11273785c;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf75320();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 105e2abb4; end: 105e2abc7; -[SCSendToTrayViewController dismissTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2abb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112737860),PTR_s_dismissAnimated__1125be608,1);
  return;
}



/* Entry: 105e2abc8; end: 105e2abd7; -[SCSendToTrayViewController setTrayPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2abc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112737860),PTR_s_setPosition__1126555c8);
  return;
}



/* Entry: 105e2abd8; end: 105e2ac13; -[SCSendToTrayViewController trayDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2abd8(long param_1)

{
  param_1 = param_1 + _DAT_11273785c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf84940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e2ac14; end: 105e2acef; -[SCSendToTrayViewController tray:positionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2ac14(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 != 2) {
    if (param_4 == 0x10) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112737858);
      func_0x00010c152980(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f7b20();
      _objc_release(uVar1);
      param_1 = param_1 + _DAT_11273785c;
      _objc_loadWeakRetained(param_1);
      func_0x00010c27b280();
    }
    else {
      lVar2 = param_1 + _DAT_11273785c;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c27b280();
      _objc_release(lVar2);
      param_1 = *(long *)(param_1 + _DAT_112737858);
      func_0x00010c152980(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f7b20();
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e2acf0; end: 105e2ad3b; -[SCSendToTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2acf0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112737858,0);
  _objc_storeStrong(param_1 + _DAT_112737860,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273785c);
  return;
}



/* Entry: 105e2ad3c; end: 105e2b5e3; -[SCSendToViewController initWithConfiguration:eventHandler:logger:sectionCoordinator:sectionCreator:sendToTracker:isFloatingShareButtonEnabled:circumstanceEngine:featureSettingsService:userBirthdayProvider:tooltipsService:panGestureActionHandler:sourcePageViewName:selectedItemObservable:userInitiatedPerformer:valdiRuntimeProvider:cofStore:composerPeopleBridgeFriendServices:composerPeopleBridgeGroupServices:composerNetworkingBridgeServices:composerCoreUIServices:selectionRecipientObservableRepository:selectionGroupObservableRepository:sendToUIConfiguration:sendToRankingConfiguration:recentsDebugScopeExposer:contextualSignalsObservable:sendToFeedLogger:snapSource:renderingTracker:previewConfiguration:sendToExperimentConfiguration:customAppThemeProvider:showSendToTray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105e2ad3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,long param_35,undefined8 param_36,
             undefined8 param_37,undefined1 param_38)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
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
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  puStack_70 = PTR_PTR_1126ed3d8;
  puVar1 = &uStack_78;
  uStack_78 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle_transitio_1125e9860,0,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar4 = (long)_DAT_112737870;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112737874;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112737878;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11273787c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737880;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737884;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737888;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_12;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11273788c;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_14;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737890;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_15;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737894;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_17;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737898;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_16;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11273789c;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_19;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127378a0;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_20;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127378a4;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_21;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127378a8;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_22;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127378ac;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_23;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127378b0;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_24;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127378b4;
    _objc_retain(param_26);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_26;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127378b8;
    _objc_retain(param_27);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_27;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127378bc;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_25;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127378c0;
    _objc_retain(param_28);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_28;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127378c4;
    _objc_retain(param_29);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_29;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127378c8;
    _objc_retain(param_30);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_30;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127378cc;
    _objc_retain(param_31);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_31;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127378d0;
    _objc_retain(param_32);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_32;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127378d4;
    _objc_retain(param_34);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_34;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127378d8;
    _objc_retain(param_35);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(long *)((long)puVar1 + lVar5) = param_35;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127378dc;
    _objc_retain(param_36);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_36;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127378e0;
    *(undefined1 *)((long)puVar1 + lVar6) = param_38;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127378e4) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127378e8) = 0;
    lVar5 = (long)_DAT_1127378ec;
    _objc_retain(param_37);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_37;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127378f0) = 0;
    uVar2 = param_12;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + (long)_DAT_1127378f4) = (char)uVar2;
    uVar2 = param_12;
    func_0x00010bf1f440();
    lVar7 = (long)_DAT_1127378f8;
    *(char *)((long)puVar1 + lVar7) = (char)uVar2;
    uVar2 = param_12;
    func_0x000108faa660();
    *(char *)((long)puVar1 + (long)_DAT_1127378fc) = (char)uVar2;
    uVar2 = param_12;
    func_0x000108faa6c4();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112737900) = uVar2;
    func_0x000108faa6ec(param_12);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112737904) = param_1;
    uVar2 = param_12;
    func_0x000108f3e118();
    *(char *)((long)puVar1 + (long)_DAT_112737908) = (char)uVar2;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar4);
    uVar2 = param_9;
    func_0x00010c15ab20(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbae0(uVar8);
    _objc_release(uVar2);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar4);
    uVar2 = param_9;
    func_0x00010bf4a780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1816c0(uVar8);
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11273790c;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_18;
    _objc_release(uVar2);
    func_0x00010c20eaa0(puVar1);
    if (*(char *)((long)puVar1 + lVar6) == '\x01') {
      func_0x00010c21e060(puVar1);
    }
    func_0x00010beacf80(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112737910) = 0;
    if (*(char *)((long)puVar1 + lVar7) == '\x01') {
      puVar3 = puVar1;
      func_0x00010bfdef60(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      _objc_release(puVar3);
    }
    *(undefined8 *)((long)puVar1 + (long)_DAT_112737914) = 0x4038000000000000;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112737918) = param_10;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273791c) = 0;
    lVar5 = (long)_DAT_112737920;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_13;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112737924) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112737928) = param_33;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273792c) = 0;
    lVar5 = param_35;
    func_0x00010c064560();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    if (lVar6 != 0) {
      func_0x00010c165040(*(undefined8 *)((long)puVar1 + lVar4));
    }
  }
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
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
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105e2b5e4; end: 105e2b8ab; -[SCSendToViewController loadScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2b5e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c2558;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c225ac0();
  puVar2 = PTR_PTR_1126b1150;
  _objc_alloc();
  func_0x00010c03fd60();
  lVar6 = (long)_DAT_112737930;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar5);
  func_0x00010c17e720(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf40a20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e7c0();
  _objc_release(uVar5);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127378c4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c12d8e0();
  _objc_release(uVar3);
  if ((int)uVar5 != 0) {
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bf40a20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1da460(0x3fa0e5604189374c);
    _objc_release(uVar5);
  }
  puVar2 = PTR_PTR_1126c2560;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112737934);
  *(undefined **)(param_1 + _DAT_112737934) = puVar2;
  _objc_release(uVar5);
  if (*(char *)(param_1 + _DAT_1127378fc) == '\x01') {
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    func_0x00010c050900();
    func_0x00010c1c8340(*(undefined8 *)(param_1 + _DAT_112737904));
    lVar6 = (long)_DAT_112737900;
    func_0x00010c1d01c0(puVar2,param_2,*(undefined8 *)(param_1 + lVar6));
    func_0x00010c18b5a0(puVar2,param_2,0);
    func_0x00010c178280(puVar2,param_2,0);
    func_0x00010c18b5e0(puVar2,param_2,param_1);
    puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    func_0x00010c050900();
    func_0x00010c1c8320();
    func_0x00010c1c3c20(puVar4,param_2,*(undefined8 *)(param_1 + lVar6));
    func_0x00010c178280(puVar4,param_2,0);
    func_0x00010c18b5e0(puVar4,param_2,param_1);
    func_0x00010bef9040(puVar1,param_2,puVar2);
    func_0x00010bef9040(puVar1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  lVar6 = (long)_DAT_112737938;
  _objc_retain(puVar1);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar5);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar6),param_2,
                      &PTR____CFConstantStringClassReference_110e2bcb8);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e2b8ac; end: 105e2b953; -[SCSendToViewController hideFloatingShareButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2b8ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273793c);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e2b954;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x105e2b960;
  puStack_58 = &UNK_110841f20;
  uStack_50 = uVar2;
  uStack_28 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf03420(0x3fd3333333333333,puVar1,param_2,&puStack_48,&puStack_70);
  _objc_release(uVar2);
  return;
}



/* Entry: 105e2b954; end: 105e2b96b;  */

void FUN_105e2b954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105e2b96c; end: 105e2b9bf; -[SCSendToViewController dragToSelectModeUpdated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2b96c(long param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127378e4;
  if (((param_3 & 1) == 0) && ((*(byte *)(param_1 + lVar1) & 1) != 0)) {
    func_0x00010bdd0b80(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112737940));
  }
  *(byte *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 105e2b9c0; end: 105e2b9c7; -[SCSendToViewController pageViewName] */

undefined8 FUN_105e2b9c0(void)

{
  return 0x109;
}



/* Entry: 105e2b9c8; end: 105e2cd93; -[SCSendToViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2b9c8(undefined **param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined1 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined8 unaff_x22;
  long lVar28;
  long lVar29;
  long lVar30;
  double dVar31;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d8 = PTR_PTR_1126ed3d8;
  ppuStack_e0 = param_1;
  _objc_msgSendSuper2(&ppuStack_e0,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c1c8b40(param_1);
  ppuVar2 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf80f60();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_112737944;
  uVar24 = *(undefined8 *)((long)param_1 + lVar26);
  *(undefined ***)((long)param_1 + lVar26) = ppuVar3;
  _objc_release(uVar24);
  _objc_release(ppuVar2);
  func_0x00010c181ec0(0x4038000000000000,*(undefined8 *)((long)param_1 + lVar26));
  ppuVar2 = param_1;
  func_0x00010c25fc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010c25fc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0bd00();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126c5128;
  _objc_alloc();
  lVar29 = (long)_DAT_112737884;
  uVar24 = *(undefined8 *)((long)param_1 + lVar29);
  func_0x00010c15ab20(uVar24);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_1127378d8;
  lVar30 = *(long *)((long)param_1 + lVar28);
  if (lVar30 != 0) {
    unaff_x22 = *(undefined8 *)((long)param_1 + (long)_DAT_1127378dc);
    func_0x00010c269d40(unaff_x22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8f320();
  }
  func_0x00010c0440e0();
  lVar27 = (long)_DAT_112737948;
  uVar25 = *(undefined8 *)((long)param_1 + lVar27);
  *(undefined **)((long)param_1 + lVar27) = puVar4;
  _objc_release(uVar25);
  if (lVar30 != 0) {
    _objc_release(unaff_x22);
  }
  _objc_release(uVar24);
  lVar30 = *(long *)((long)param_1 + lVar27);
  func_0x00010c158760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(lVar30);
  func_0x00010c18b5e0(lVar30);
  uVar24 = *(undefined8 *)((long)param_1 + (long)_DAT_112737890);
  func_0x00010c269d40(uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22f920();
  func_0x00010c201d80(lVar30);
  _objc_release(uVar24);
  func_0x00010c1a7f60(lVar30);
  ppuVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(ppuVar2);
  lVar27 = (long)_DAT_1127378dc;
  uVar25 = *(undefined8 *)((long)param_1 + lVar27);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar25;
  func_0x00010bf8f320();
  _objc_release(uVar25);
  if ((int)uVar24 != 0) {
    uVar24 = *(undefined8 *)((long)param_1 + lVar27);
    func_0x00010c269d40(uVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6880();
    func_0x00010c165020(lVar30);
    _objc_release(uVar24);
    uVar24 = *(undefined8 *)((long)param_1 + lVar28);
    func_0x00010c064560(uVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165080(lVar30);
    _objc_release(uVar24);
  }
  ppuVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(ppuVar2);
  func_0x00010beb03e0(param_1);
  puVar4 = PTR_PTR_1126c5130;
  _objc_alloc();
  func_0x00010c0445e0();
  uVar24 = *(undefined8 *)((long)param_1 + (long)_DAT_11273794c);
  *(undefined **)((long)param_1 + (long)_DAT_11273794c) = puVar4;
  _objc_release(uVar24);
  ppuVar2 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8420();
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8d060();
  ppuVar3 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(ppuVar5);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  uVar24 = *(undefined8 *)((long)param_1 + (long)_DAT_112737870);
  func_0x00010c1539a0(uVar24);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9c0();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(uVar24);
  ppuVar2 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d0c0();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d0a0();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126c5138;
  _objc_alloc();
  uVar24 = *(undefined8 *)((long)param_1 + lVar29);
  func_0x00010c15ab20(uVar24);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0440c0();
  uVar25 = *(undefined8 *)((long)param_1 + (long)_DAT_112737950);
  *(undefined **)((long)param_1 + (long)_DAT_112737950) = puVar4;
  _objc_release(uVar25);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(uVar24);
  lVar28 = (long)_DAT_112737874;
  func_0x00010c1e64a0(*(undefined8 *)((long)param_1 + lVar28));
  func_0x00010c17e6a0(*(undefined8 *)((long)param_1 + lVar28));
  func_0x00010c1f89e0(*(undefined8 *)((long)param_1 + lVar28));
  uVar24 = *(undefined8 *)((long)param_1 + lVar28);
  ppuVar2 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8400(uVar24);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010c1fabe0(*(undefined8 *)((long)param_1 + lVar28));
  uVar24 = *(undefined8 *)((long)param_1 + lVar28);
  ppuVar2 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a78c0(uVar24);
  _objc_release(ppuVar2);
  uVar24 = *(undefined8 *)((long)param_1 + lVar29);
  puVar4 = PTR_PTR_1126b50d0;
  func_0x00010c29cb20(PTR_PTR_1126b50d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar24);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar24 = *(undefined8 *)((long)param_1 + (long)_DAT_112737954);
  *(undefined **)((long)param_1 + (long)_DAT_112737954) = puVar4;
  _objc_release(uVar24);
  _objc_initWeak(auStack_e8,param_1);
  uVar6 = *(undefined8 *)((long)param_1 + lVar29);
  func_0x00010bf9a080(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar6;
  func_0x00010c0e0e80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_105e2cd94;
  puStack_f8 = &UNK_11086a5e0;
  _objc_copyWeak(auStack_f0,auStack_e8);
  uVar25 = uVar24;
  func_0x00010c25ff60(uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(puVar4);
  _objc_release(uVar6);
  ppuVar7 = *(undefined ***)((long)param_1 + (long)_DAT_11273790c);
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar7;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar5;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  dVar31 = 0.2;
  ppuVar2 = ppuVar5;
  func_0x00010c26d5a0(0x3fc999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x105e2cddc;
  puStack_120 = &UNK_1108ec150;
  puVar23 = auStack_e8;
  _objc_copyWeak(auStack_118,puVar23);
  ppuVar3 = ppuVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar8);
  _objc_release(ppuVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar7);
  if (*(char *)((long)param_1 + (long)_DAT_1127378f8) == '\x01') {
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar29 = (long)_DAT_112737958;
    uVar24 = *(undefined8 *)((long)param_1 + lVar29);
    *(undefined **)((long)param_1 + lVar29) = puVar4;
    _objc_release(uVar24);
    func_0x00010c219b60(*(undefined8 *)((long)param_1 + lVar29));
    uVar24 = *(undefined8 *)((long)param_1 + lVar29);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(uVar24);
    _objc_release(puVar4);
    ppuVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_1;
    func_0x00010bfdef60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fe0(ppuVar2);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    uVar6 = *(undefined8 *)((long)param_1 + lVar29);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    dVar31 = *(double *)((long)param_1 + (long)_DAT_112737910) + 5.0;
    uVar24 = uVar6;
    func_0x00010bf49420(dVar31);
    _objc_retainAutoreleasedReturnValue();
    lVar28 = (long)_DAT_11273795c;
    uVar25 = *(undefined8 *)((long)param_1 + lVar28);
    *(undefined8 *)((long)param_1 + lVar28) = uVar24;
    _objc_release(uVar25);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar9 = *(undefined8 *)((long)param_1 + lVar29);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar3;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)param_1 + lVar29);
    uStack_a0 = uVar24;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = *(undefined8 *)((long)param_1 + lVar28);
    ppuVar11 = *(undefined ***)((long)param_1 + lVar29);
    uStack_98 = uVar25;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar12;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_88 = ppuVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar14);
    _objc_release(ppuVar2);
    _objc_release(ppuVar13);
    _objc_release(ppuVar12);
    _objc_release(ppuVar11);
    _objc_release(uVar25);
    _objc_release(ppuVar7);
    _objc_release(ppuVar8);
    _objc_release(uVar10);
    _objc_release(uVar24);
    _objc_release(ppuVar5);
    _objc_release(ppuVar3);
    _objc_release(uVar9);
    _objc_release(uVar6);
  }
  if (2 < lRam00000001138466f0) {
    puVar4 = PTR_PTR_1126b1830;
    _objc_alloc();
    func_0x00010c051be0();
    lVar29 = (long)_DAT_112737960;
    uVar24 = *(undefined8 *)((long)param_1 + lVar29);
    *(undefined **)((long)param_1 + lVar29) = puVar4;
    _objc_release(uVar24);
    func_0x00010c18b5e0(*(undefined8 *)((long)param_1 + lVar29));
    uVar24 = *(undefined8 *)((long)param_1 + lVar29);
    ppuVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0678a0(uVar24);
    _objc_release(ppuVar2);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    ppuVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    lVar28 = (long)_DAT_112737964;
    uVar24 = *(undefined8 *)((long)param_1 + lVar28);
    *(undefined **)((long)param_1 + lVar28) = puVar4;
    _objc_release(uVar24);
    _objc_release(ppuVar2);
    func_0x00010c219b60(*(undefined8 *)((long)param_1 + lVar28));
    func_0x00010c182220(*(undefined8 *)((long)param_1 + lVar28));
    uVar24 = *(undefined8 *)((long)param_1 + lVar29);
    func_0x00010bf5e160(uVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)param_1 + lVar28));
    _objc_release(uVar24);
    func_0x00010befbb60(*(undefined8 *)((long)param_1 + lVar26));
    puVar14 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010c19f0e0(0,0,dVar31,*(double *)((long)param_1 + (long)_DAT_112737910) + 5.0,puVar14);
    _objc_release(ppuVar2);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0(puVar4);
    func_0x00010c16e440(puVar14);
    _objc_release(puVar4);
    uVar24 = *(undefined8 *)((long)param_1 + lVar28);
    func_0x00010c08c0e0(uVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(uVar24);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar10 = *(undefined8 *)((long)param_1 + lVar28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)param_1 + lVar28);
    uStack_c0 = uVar24;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)param_1 + lVar28);
    uStack_b8 = uVar25;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar12;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)((long)param_1 + lVar28);
    uStack_b0 = uVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar13;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar18);
    _objc_release(uVar9);
    _objc_release(ppuVar11);
    _objc_release(ppuVar13);
    _objc_release(uVar17);
    _objc_release(uVar6);
    _objc_release(ppuVar2);
    _objc_release(ppuVar12);
    _objc_release(uVar16);
    _objc_release(uVar25);
    _objc_release(ppuVar7);
    _objc_release(ppuVar8);
    _objc_release(uVar15);
    _objc_release(uVar24);
    _objc_release(ppuVar5);
    _objc_release(ppuVar3);
    _objc_release(uVar10);
    _objc_release(puVar14);
  }
  iVar1 = (int)*(undefined8 *)((long)param_1 + (long)_DAT_1127378c8);
  func_0x00010c071800();
  if (iVar1 != 0) {
    uVar25 = *(undefined8 *)((long)param_1 + (long)_DAT_1127378c4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar25;
    func_0x00010c236f00();
    _objc_release(uVar25);
    if ((int)uVar24 != 0) {
      puVar14 = PTR_PTR_1126aec40;
      func_0x00010bf25cc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20eaa0();
      func_0x00010c216260(puVar14);
      func_0x00010c219b60(puVar14);
      puVar4 = puVar14;
      func_0x00010c08c0e0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c227960(0x4197d78400000000);
      _objc_release(puVar4);
      ppuVar2 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(ppuVar2);
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar18 = puVar14;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x00010c149040();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar3;
      func_0x00010c2793a0(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar18;
      func_0x00010bf493c0(0xc03e000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar14;
      puStack_d0 = puVar19;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar8;
      func_0x00010c149040();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar7;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar20;
      func_0x00010bf493c0(0xc03e000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c8 = puVar21;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar4);
      _objc_release(puVar22);
      _objc_release(puVar21);
      _objc_release(ppuVar12);
      _objc_release(ppuVar7);
      _objc_release(ppuVar8);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(ppuVar5);
      _objc_release(ppuVar3);
      _objc_release(ppuVar2);
      _objc_release(puVar18);
      lVar26 = (long)_DAT_112737968;
      _objc_retain(puVar14);
      uVar24 = *(undefined8 *)((long)param_1 + lVar26);
      *(undefined **)((long)param_1 + lVar26) = puVar14;
      _objc_release(uVar24);
      _objc_initWeak(auStack_140,param_1);
      uVar25 = *(undefined8 *)((long)param_1 + (long)_DAT_1127378cc);
      puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
      func_0x00010c0b6ba0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e0e80(uVar25);
      _objc_retainAutoreleasedReturnValue();
      puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_160 = 0xc2000000;
      uStack_158 = 0x105e2ce24;
      puStack_150 = &UNK_1108ec180;
      ppuVar2 = &puStack_168;
      puVar23 = auStack_140;
      _objc_copyWeak(auStack_148,puVar23);
      uVar24 = uVar25;
      func_0x00010c25ff60(uVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar24);
      _objc_release(uVar25);
      _objc_release(puVar4);
      _objc_destroyWeak(auStack_148);
      _objc_destroyWeak(auStack_140);
      _objc_release(puVar14);
    }
  }
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_e8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar2 + 4);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_e8);
  __Unwind_Resume(lVar30);
  _objc_retain(puVar23);
  lVar30 = lVar30 + 0x20;
  _objc_loadWeakRetained(lVar30);
  func_0x00010be6a5c0();
  _objc_release(puVar23);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar30);
  return;
}



/* Entry: 105e2cd94; end: 105e2ce6b;  */

void FUN_105e2cd94(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a5c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e2ce6c; end: 105e2ce7f; -[SCSendToViewController themeBackgroundView:didUpdateImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2ce6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112737964),PTR_s_setImage__1126481e8,param_4);
  return;
}



/* Entry: 105e2ce80; end: 105e2cf6b; -[SCSendToViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2ce80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf18ce0(*(undefined8 *)(param_1 + _DAT_112737878),param_2,
                      *(undefined8 *)(param_1 + _DAT_1127378d4),
                      *(undefined8 *)(param_1 + _DAT_112737930));
  func_0x00010be5b7c0(param_1);
  *(undefined1 *)(param_1 + _DAT_11273796c) = 1;
  puStack_38 = PTR_PTR_1126ed3d8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0,param_3);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_112737970) = puVar2;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c07f8c0();
  *(char *)(param_1 + _DAT_112737974) = (char)puVar2;
  _objc_release(puVar1);
  func_0x00010c1cbec0(param_1);
  func_0x00010bdc6d20(param_1);
  return;
}



/* Entry: 105e2cf6c; end: 105e2cfdf; -[SCSendToViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2cf6c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ed3d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  lVar2 = (long)_DAT_112737978;
  if ((*(byte *)(param_1 + lVar2) & 1) == 0) {
    lVar1 = param_1;
    func_0x00010c06d1e0();
    if ((int)lVar1 != 0) {
      func_0x00010c29c680(*(undefined8 *)(param_1 + _DAT_112737878));
    }
    *(undefined1 *)(param_1 + lVar2) = 1;
  }
  return;
}



/* Entry: 105e2cfe0; end: 105e2d087; -[SCSendToViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2cfe0(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112737888;
  iVar1 = (int)*(undefined8 *)(param_2 + lVar3);
  func_0x000108f3e1cc();
  if (iVar1 == 0) {
    if ((*(ulong *)(param_2 + _DAT_112737928) & 0xfffffffffffffffd) != 0) {
      return;
    }
  }
  else if (*(ulong *)(param_2 + _DAT_112737928) != 2) {
    return;
  }
  lVar2 = (long)_DAT_11273792c;
  if ((*(byte *)(param_2 + lVar2) & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + lVar3);
    func_0x000108f3e1a4();
    if ((iVar1 != 0) && (func_0x00010becd7e0(param_2), 0.0 < param_1)) {
      func_0x00010c182300(0,param_1,*(undefined8 *)(param_2 + _DAT_112737938),param_3,1);
      *(undefined1 *)(param_2 + lVar2) = 1;
    }
  }
  return;
}



/* Entry: 105e2d088; end: 105e2d193; -[SCSendToViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2d088(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ed3d8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewWillDisappear__112685438);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc80();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010c106ee0(param_1);
  }
  func_0x00010c14dc40(puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112737884);
  puVar1 = PTR_PTR_1126b50d0;
  func_0x00010c29e820(PTR_PTR_1126b50d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 105e2d194; end: 105e2d29f; -[SCSendToViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2d194(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ed3d8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidDisappear__112684c48);
  lVar4 = param_1;
  func_0x00010c06d1a0();
  if ((int)lVar4 != 0) {
    lVar4 = (long)_DAT_112737884;
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c15ab20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0ecca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    puVar3 = PTR_PTR_1126b50d0;
    func_0x00010bf84d80(PTR_PTR_1126b50d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8de60(uVar1);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  func_0x00010c29c880(*(undefined8 *)(param_1 + _DAT_112737878));
  *(undefined1 *)(param_1 + _DAT_11273796c) = 0;
  *(undefined1 *)(param_1 + _DAT_112737978) = 0;
  *(undefined1 *)(param_1 + _DAT_1127378f0) = 0;
  return;
}



/* Entry: 105e2d2a0; end: 105e2d2cf; -[SCSendToViewController dismissFrom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2d2a0(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 == 1) && ((*(byte *)(param_1 + _DAT_1127378f0) & 1) == 0)) {
    *(undefined1 *)(param_1 + _DAT_1127378f0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
    return;
  }
  return;
}



/* Entry: 105e2d2d0; end: 105e2d2d3; -[SCSendToViewController preferredStatusBarStyle] */

undefined8 FUN_105e2d2d0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 105e2d2d4; end: 105e2d2db; -[SCSendToViewController preferredStatusBarUpdateAnimation] */

undefined8 FUN_105e2d2d4(void)

{
  return 1;
}



/* Entry: 105e2d2dc; end: 105e2d397; -[SCSendToViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_105e2d2dc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ed3d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1070e0(param_1);
  func_0x00010c106ee0(param_1);
  func_0x00010c14dc40(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 105e2d398; end: 105e2d64b; -[SCSendToViewController _setupHeaderWithSearchMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2d398(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
                  int param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar2 = param_4;
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_4 + _DAT_112737894);
  func_0x00010c0720c0(uVar3,param_5,&PTR____CFConstantStringClassReference_110f5ad38);
  uVar1 = (uint)uVar3;
  if (uVar1 != 0) {
    func_0x000105e342d4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(lVar2,param_5,uVar3);
    _objc_release(uVar3);
    func_0x00010c1675c0(lVar2,param_5,1);
  }
  func_0x00010c2162c0(lVar2,param_5,uVar1 ^ 1);
  func_0x00010c1734a0(lVar2,param_5,1);
  func_0x00010c173480(lVar2,param_5,1);
  func_0x00010c202660(lVar2,param_5,1);
  func_0x00010c1f8460(lVar2,param_5,1);
  lVar4 = lVar2;
  func_0x00010c1539c0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d0c0();
  _objc_release(lVar4);
  lVar4 = lVar2;
  func_0x00010c1539c0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d0a0();
  _objc_release(lVar4);
  if ((*(byte *)(param_4 + _DAT_1127378f4) & 1) == 0) {
    func_0x00010c1d94a0(lVar2,param_5,1);
  }
  func_0x00010bedcc20(param_4);
  if (param_6 == 0) {
    func_0x00010c18f820(lVar2,param_5,*(byte *)(param_4 + _DAT_1127378e0) ^ 1);
    func_0x00010beae4a0(param_4,param_5,lVar2);
  }
  else {
    func_0x00010bfdef60(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    func_0x00010c153980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(lVar4);
    _objc_release(param_4);
    puVar5 = PTR_PTR_1126aea58;
    _objc_alloc(PTR_PTR_1126aea58);
    func_0x00010c013de0(param_1 + param_3,0,0x4044000000000000,0x4044000000000000);
    puVar6 = puVar5;
    func_0x00010c213040();
    func_0x000105e34304();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar5,param_5,puVar6);
    _objc_release(puVar6);
    func_0x00010c21ad00(puVar5,param_5,6);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar5,param_5,puVar6);
    _objc_release(puVar6);
    func_0x00010c1cfce0(puVar5,param_5,1);
    func_0x00010c21e900(puVar5,param_5,1);
    puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar5,param_5,puVar6);
    func_0x00010c2194c0(lVar2,param_5,puVar5);
    func_0x00010c18f820(lVar2,param_5,0);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}


