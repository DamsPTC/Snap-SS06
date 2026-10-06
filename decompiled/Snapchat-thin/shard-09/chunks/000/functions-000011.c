/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067f6608; end: 1067f6617;  */

void FUN_1067f6608(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c233890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_shouldShowForSource__11266a848,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1067f6618; end: 1067f677b; -[SCShortcutsDataFetcherImpl _customAndNonPluginContextualShortcutsObservableForSource:] */

void FUN_1067f6618(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08d940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e0ea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  uVar6 = uVar5;
  uStack_60 = param_3;
  func_0x00010c0b8600(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1067f677c; end: 1067f67e3;  */

void FUN_1067f677c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf7620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067f67e4; end: 1067f6837; -[SCShortcutsDataFetcherImpl _customAndNonPluginContextualShortcutsToEmitWithListDataModels:source:] */

void FUN_1067f67e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1067f6838;
  puStack_28 = &UNK_110940d30;
  uStack_20 = param_1;
  uStack_18 = param_4;
  func_0x000100504554(param_3,&puStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067f6838; end: 1067f6847;  */

void FUN_1067f6838(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb2350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__shortcutWithListDataModel_sourc_11258a278,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1067f6848; end: 1067f691f; -[SCShortcutsDataFetcherImpl _shortcutIdToRecipientsObservableMapWithShortcutDataPlugins:source:] */

void FUN_1067f6848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_48,auStack_38);
  uVar1 = param_3;
  uStack_40 = param_4;
  func_0x00010bfb2660(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067f6920; end: 1067f6bdb;  */

void FUN_1067f6920(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 == 0) || (puVar1 = param_2, func_0x00010bf529e0(), puVar1 == (undefined *)0x0)) {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c22d640();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010c122f80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    puVar1 = puVar10;
    func_0x00010c0b8600(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = param_2;
    func_0x00010bf529e0();
    if (((undefined *)0x1 < puVar10) &&
       (puVar10 = param_2, func_0x00010bf529e0(), (undefined *)0x1 < puVar10)) {
      puVar10 = (undefined *)0x1;
      puVar9 = puVar1;
      do {
        puVar4 = param_2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c22d640();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c08fa60();
        puVar1 = puVar9;
        if (puVar6 != (undefined *)0x0) {
          puVar6 = puVar4;
          func_0x00010c122f80();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c2519e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar7 == (undefined *)0x0) {
            puVar8 = PTR_PTR_1126ae6b8;
            func_0x00010c0860a0(PTR_PTR_1126ae6b8);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            _objc_retain(puVar7);
            puVar8 = puVar7;
          }
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_retain(puVar5);
          func_0x00010bf41860(puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          _objc_release(puVar5);
          _objc_release(puVar8);
        }
        _objc_release(puVar5);
        _objc_release(puVar4);
        puVar10 = puVar10 + 1;
        puVar4 = param_2;
        func_0x00010bf529e0();
        puVar9 = puVar1;
      } while (puVar10 < puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067f6bdc; end: 1067f6ce3;  */

void FUN_1067f6bdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067f6ce4; end: 1067f6eff; -[SCShortcutsDataFetcherImpl _pluginShortcutsObservableForSource:] */

void FUN_1067f6ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  lVar2 = param_1;
  func_0x00010beb22c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1067f6f00;
  puStack_80 = &UNK_110940d00;
  _objc_copyWeak(auStack_78,auStack_68);
  lVar3 = lVar2;
  uStack_70 = param_3;
  func_0x00010c0b8600(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010beb2280(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc0000000;
  pcStack_b0 = FUN_1067f6f7c;
  puStack_a8 = &UNK_110940e40;
  lVar4 = lVar3;
  uStack_a0 = param_3;
  func_0x00010bf41860(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0e0ea0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c8,auStack_68);
  lVar7 = lVar6;
  func_0x00010bfb2660(lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_c8);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 1067f6f00; end: 1067f6f7b;  */

void FUN_1067f6f00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != 0) {
    puVar1 = *(undefined **)(param_1 + 0x20);
    func_0x00010c11f5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067f6f7c; end: 1067f7067;  */

void FUN_1067f6f7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1067f7068;
  puStack_50 = &UNK_11090a328;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x0001006372a4(param_2,&puStack_68);
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1067f7114;
  puStack_80 = &UNK_110940e10;
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = param_3;
  _objc_retain(param_3);
  uVar2 = param_2;
  func_0x000100504554(param_2,&puStack_98);
  _objc_release(uStack_78);
  _objc_release(param_2);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1067f7068; end: 1067f7113;  */

bool FUN_1067f7068(long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c22d640();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c0e00e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf02160();
    if ((uVar3 & 1) == 0) {
      lVar5 = lVar4;
      func_0x00010bf529e0(lVar4);
      bVar1 = lVar5 != 0;
    }
    else {
      bVar1 = true;
    }
    _objc_release(lVar4);
  }
  _objc_release(uVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1067f7114; end: 1067f720b;  */

void FUN_1067f7114(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c22d640(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c22d620(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1067f720c; end: 1067f7313;  */

void FUN_1067f720c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1067f57a0;
  uStack_30 = 0x1067f57b0;
  uStack_28 = 0;
  func_0x00010c0bf0a0(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067f7314; end: 1067f7357;  */

void FUN_1067f7314(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0db140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1067f7358; end: 1067f74af;  */

void FUN_1067f7358(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ce438;
  puVar2 = PTR_PTR_1126ae750;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c045e80();
  _objc_release(param_2);
  func_0x00010c2468a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067f74b0; end: 1067f74d7;  */

void FUN_1067f74b0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1067f74d8; end: 1067f74f7;  */

void FUN_1067f74d8(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_110940ec0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067f74f8; end: 1067f75d7;  */

void FUN_1067f74f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1067f57a0;
  uStack_30 = 0x1067f57b0;
  uStack_28 = 0;
  func_0x00010c0bf0a0(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067f75d8; end: 1067f760f;  */

void FUN_1067f75d8(long param_1,undefined8 param_2)

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



/* Entry: 1067f7610; end: 1067f7753; -[SCShortcutsDataFetcherImpl _shortcutWithListDataModel:source:] */

void FUN_1067f7610(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_4 == 2) {
    uVar1 = param_3;
    func_0x00010c0d4f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb2260(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    param_1 = 0;
  }
  puVar2 = PTR_PTR_1126b1498;
  _objc_alloc(PTR_PTR_1126b1498);
  uVar1 = param_3;
  func_0x00010c09a080(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1490;
  func_0x00010bf8c140(PTR_PTR_1126b1490);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045ee0(puVar2,param_2,uVar1,param_1,uVar3,puVar4,1,1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126ce438;
  _objc_alloc(PTR_PTR_1126ce438);
  func_0x00010c045e80();
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1067f7754; end: 1067f781f; -[SCShortcutsDataFetcherImpl _shortcutIconWithShortcutName:] */

void FUN_1067f7754(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_3);
  func_0x00010c2a4bc0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf44700(param_3,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  puVar3 = PTR_PTR_1126b1508;
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bfb1920(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8ea40(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067f7820; end: 1067f7a43; -[SCShortcutsDataFetcherImpl _shortcutRecipientsWithListDataModel:] */

void FUN_1067f7820(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar5 = &uStack_1f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar2 = param_3;
  func_0x00010c244720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar6 = *plStack_1a0;
    do {
      lVar7 = 0;
      do {
        if (*plStack_1a0 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        puVar4 = PTR_PTR_1126b14a0;
        func_0x00010c2448a0(PTR_PTR_1126b14a0,param_2,*(undefined8 *)(lStack_1a8 + lVar7 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,puVar4);
        _objc_release(puVar4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_1b0,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lVar2 = param_3;
  func_0x00010bfceb60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar6 = *plStack_1e0;
    do {
      lVar7 = 0;
      do {
        if (*plStack_1e0 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        puVar4 = PTR_PTR_1126b14a0;
        func_0x00010bfcf600(PTR_PTR_1126b14a0,param_2,*(undefined8 *)(lStack_1e8 + lVar7 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,puVar4);
        _objc_release(puVar4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar2;
      puVar5 = &uStack_1f0;
      func_0x00010bf52a60(lVar2,param_2,&uStack_1f0,auStack_168,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)puVar5;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1067f7a44; end: 1067f7a9f; -[SCShortcutsDataFetcherImpl _createPerformerWithPerformerProvider:] */

void FUN_1067f7a44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1067f7aa0; end: 1067f7b17; -[SCShortcutsDataFetcherImpl .cxx_destruct] */

void FUN_1067f7aa0(long param_1)

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



/* Entry: 1067f7b18; end: 1067f7b8b; -[SCShortcutsInteractionFetcherImpl initWithUserPreferences:] */

undefined1 * FUN_1067f7b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3548;
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



/* Entry: 1067f7b8c; end: 1067f7c17; -[SCShortcutsInteractionFetcherImpl shortcutsInteractionTimestampsForSource:] */

void FUN_1067f7b8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001067f3438(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22d880();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1067f7c18; end: 1067f7c23; -[SCShortcutsInteractionFetcherImpl .cxx_destruct] */

void FUN_1067f7c18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067f7c24; end: 1067f7d07; -[SCShortcutsInteractionMutatorImpl initWithUserPreferences:sendToListsDataTracker:] */

undefined1 *
FUN_1067f7c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3550;
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
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    func_0x00010bec7e80(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067f7d08; end: 1067f7fe3; -[SCShortcutsInteractionMutatorImpl updateShortcutsInteractionTimestamps:source:] */

void FUN_1067f7d08(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = *(undefined **)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c22d880();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d3c80();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
  }
  else {
    _objc_retain(puVar4);
    puVar5 = puVar4;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x0001067f3438(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar2 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar3);
  puVar3 = puVar4;
  if (((ulong)puVar2 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c0d3c80();
  _objc_release(puVar3);
  if (puVar4 == (undefined *)0x0) {
    lVar7 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010c1d0640(puVar5);
    _objc_release(lVar7);
  }
  else {
    _objc_retain(param_3);
    lVar7 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar7 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar6 = param_3;
        func_0x00010c0e00e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(lVar6);
        lVar10 = lVar10 + 1;
      } while (lVar7 != lVar10);
      lVar7 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar3 = puVar4;
    func_0x00010bf51e00(puVar4);
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar3);
  }
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ffe60();
  _objc_release(uVar8);
  func_0x00010beb22a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010beb22a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return;
}



/* Entry: 1067f7fe4; end: 1067f802f; -[SCShortcutsInteractionMutatorImpl shortcutInteractionTimestampDidUpdateObservable:] */

void FUN_1067f7fe4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010beb22a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067f8030; end: 1067f8233; -[SCShortcutsInteractionMutatorImpl updateShortcutCreationTimestamp:timestamp:source:] */

void FUN_1067f8030(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c22d880();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
  }
  else {
    _objc_retain(puVar3);
    puVar4 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x0001067f3438(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar1 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar2);
  puVar2 = puVar3;
  if (((ulong)puVar1 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
  }
  puVar2 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    func_0x00010c1d0640(puVar3);
    puVar2 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar2);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ffe60();
    _objc_release(uVar5);
    func_0x00010beb22a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(param_1);
  }
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067f8234; end: 1067f8337; -[SCShortcutsInteractionMutatorImpl _subscribeToNewCustomShortcutsObservable] */

void FUN_1067f8234(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d8840();
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



/* Entry: 1067f8338; end: 1067f837f;  */

void FUN_1067f8338(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be73360();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067f8380; end: 1067f844b; -[SCShortcutsInteractionMutatorImpl _persistNewShortcutCreationTimestamp:] */

void FUN_1067f8380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar2;
  func_0x00010c289ec0(param_1,param_2,puVar2,1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(puVar1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar5,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (lVar5 == 0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new(PTR_PTR_1126ae820);
    uVar6 = *(undefined8 *)(puVar1 + 0x20);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar6,param_2,puVar2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  uVar6 = *(undefined8 *)(puVar1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar6,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1067f844c; end: 1067f854b; -[SCShortcutsInteractionMutatorImpl _shortcutInteractionTimestampObservable:] */

void FUN_1067f844c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new(PTR_PTR_1126ae820);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4,param_2,puVar1,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1067f854c; end: 1067f8593; -[SCShortcutsInteractionMutatorImpl .cxx_destruct] */

void FUN_1067f854c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067f8594; end: 1067f8927; -[SCShortcutsDataServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f8594(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  lVar1 = param_1 + _DAT_112750e78;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c09a560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126ae720;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1067f8928;
  puStack_90 = &UNK_110842c88;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_112750e7c;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126ae720;
  puStack_d0 = puVar8;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1067f8968;
  puStack_b8 = &UNK_110940f10;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae720;
  puStack_f8 = puVar8;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x1067f89a8;
  puStack_e0 = &UNK_110940f40;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112750e80;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar7 = PTR_PTR_1126ae720;
  puStack_120 = puVar8;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_1067f89e8;
  puStack_108 = &UNK_11084cac0;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_128,auStack_80);
  func_0x00010bf11fe0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ce440;
  _objc_alloc(PTR_PTR_1126ce440);
  func_0x00010c045f40();
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_128);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_100);
  _objc_release(lVar1);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_b0);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_88);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1067f8928; end: 1067f89e7;  */

void FUN_1067f8928(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beb2380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067f89e8; end: 1067f8aa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f89e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_112750e98;
    _objc_loadWeakRetained(lVar5);
  }
  lVar1 = lVar5;
  func_0x00010bf461c0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0784e0();
  func_0x00010c0df6e0(puVar4,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1067f8aa8; end: 1067f8b57;  */

void FUN_1067f8aa8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar6 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar6);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0d44c0();
  lVar9 = lVar6;
  func_0x00010beb2360(lVar6,param_2,uVar1,uVar4,uVar2,uVar5,uVar3,uVar8,
                      *(undefined8 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return;
}



/* Entry: 1067f8b58; end: 1067f8d1f; -[SCShortcutsDataServiceProvider _shortcutsDataFetcherWithSendToListsDataFetcher:shortcutsDataPluginsFuture:performerProvider:shortcutsInteractionFetcher:shortcutsInteractionMutator:myAISendToRankingVariant:myAIFFShortcutSlotOneEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f8b58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126ce448;
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + _DAT_112750e84;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112750e80;
  lVar4 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ce450;
  _objc_alloc();
  param_1 = param_1 + lVar7;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045f80(puVar6,param_2,param_6,lVar7,param_9);
  _objc_release(param_9);
  _objc_release(param_6);
  func_0x00010c044420(puVar1,param_2,param_3,lVar3,lVar5,param_4,param_5,param_7,puVar6,param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067f8d20; end: 1067f8ddb; -[SCShortcutsDataServiceProvider _shortcutsInteractionMutator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f8d20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ce458;
  _objc_alloc(PTR_PTR_1126ce458);
  lVar2 = param_1 + _DAT_112750e88;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112750e78;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c09a560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05cb80(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067f8ddc; end: 1067f8e57; -[SCShortcutsDataServiceProvider _shortcutsInteractionFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f8ddc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ce460;
  _objc_alloc(PTR_PTR_1126ce460);
  param_1 = param_1 + _DAT_112750e88;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ca20(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067f8e58; end: 1067f8f6f; -[SCShortcutsDataServiceProvider _shortcutsDataPluginsFuture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f8e58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar3 = (undefined *)(param_1 + _DAT_112750e8c);
  _objc_loadWeakRetained();
  puVar4 = puVar3;
  func_0x00010bf22660();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar4 != (undefined *)0x0) {
    puVar1 = puVar4;
  }
  _objc_retain(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112750e90);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1067f8fbc;
  puStack_58 = &UNK_110844e40;
  puStack_50 = puVar1;
  puStack_48 = puVar2;
  _objc_retain(puVar2);
  func_0x00010bf9d5c0(uVar5,param_2,&PTR___NSConcreteGlobalBlock_110940fa0,&puStack_70);
  puVar3 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067f8f70; end: 1067f8fbb;  */

void FUN_1067f8f70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ce468;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067f8fbc; end: 1067f9023;  */

void FUN_1067f8fbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0d3c80(param_2);
  func_0x00010befa160();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = param_2;
  func_0x00010bf00560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067f9024; end: 1067f9043; -[SCShortcutsDataServiceProvider circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f9024(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112750e84);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067f9044; end: 1067f9057; -[SCShortcutsDataServiceProvider setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f9044(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112750e84,param_3);
  return;
}



/* Entry: 1067f9058; end: 1067f90e7; -[SCShortcutsDataServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f9058(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112750e8c);
  _objc_destroyWeak(param_1 + _DAT_112750e98);
  _objc_destroyWeak(param_1 + _DAT_112750e84);
  _objc_storeStrong(param_1 + _DAT_112750e90,0);
  _objc_destroyWeak(param_1 + _DAT_112750e80);
  _objc_destroyWeak(param_1 + _DAT_112750e88);
  _objc_destroyWeak(param_1 + _DAT_112750e7c);
  _objc_destroyWeak(param_1 + _DAT_112750e78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112750e94);
  return;
}



/* Entry: 1067f90e8; end: 1067f90f3; -[SCFeatureSettingsService hasSeenMainCameraSharePrompt] */

void FUN_1067f90e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e606d8);
  return;
}



/* Entry: 1067f90f4; end: 1067f90ff; -[SCFeatureSettingsService seenMainCameraSharePromptServerParam] */

undefined ** FUN_1067f90f4(void)

{
  return &PTR____CFConstantStringClassReference_110e606d8;
}



/* Entry: 1067f9100; end: 1067f910f; -[SCFeatureSettingsService setSeenMainCameraSharePrompt:] */

void FUN_1067f9100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e606d8,param_3);
  return;
}



/* Entry: 1067f9110; end: 1067f9117; -[SCFeatureSettingsService SEEN_MAIN_CAMERA_SHARE_PROMPT_client_value:] */

undefined * FUN_1067f9110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1067f9118; end: 1067f911f; -[SCFeatureSettingsService SEEN_MAIN_CAMERA_SHARE_PROMPT_server_value:] */

void FUN_1067f9118(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1067f9120; end: 1067f912f; -[SCFeatureSettingsService seenMainCameraSharePrompt] */

void FUN_1067f9120(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e606d8,0);
  return;
}



/* Entry: 1067f9130; end: 1067f91a7; -[SCAFPContainerDeallocBackstop initWithBlock:] */

undefined1 * FUN_1067f9130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3558;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067f91a8; end: 1067f91f7; -[SCAFPContainerDeallocBackstop dealloc] */

void FUN_1067f91a8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  }
  puStack_28 = PTR_PTR_1126f3558;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1067f91f8; end: 1067f9203; -[SCAFPContainerDeallocBackstop .cxx_destruct] */

void FUN_1067f91f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067f9204; end: 1067f938b; -[SCOpenAddFriendsCardActionHandler initWithStartChatDelegate:navigationDelegate:addFriendsScopeExposer:addFriendsScopeServices:addFriendsWorkflowDelegate:userPreferences:friendingExperimentReader:deckContainerFactory:] */

undefined1 *
FUN_1067f9204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f3560;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_7);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_10);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067f938c; end: 1067f94c7; -[SCOpenAddFriendsCardActionHandler openAddFriendsCardWithPresentingViewController:isFromNotification:placement:friendRequestId:onAddFriendsReady:] */

void FUN_1067f938c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_51;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = param_6;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dbc60();
    _objc_release(uVar1);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    uStack_51 = 0;
    lVar3 = param_1;
    func_0x00010be5b840(param_1,param_2,param_3,1,param_5,param_7,&uStack_51);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be6ce00(param_1,param_2,lVar3,lVar2,param_5,uStack_51);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  else if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1067f94c8; end: 1067f959f; -[SCOpenAddFriendsCardActionHandler _openAddFriendsCardWithUIContainer:deckContainerFactory:placement:usesNavigationPresentation:] */

void FUN_1067f94c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af668;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c033380();
  func_0x00010bf22980(uVar2,param_2,puVar1,param_3,param_4,param_5,param_6,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  *(undefined1 *)(param_1 + 0x48) = 0;
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1067f95a0; end: 1067f998f; -[SCOpenAddFriendsCardActionHandler _makeCustomUIContainerWithPresentingViewController:animated:placement:onAddFriendsReady:usesNavigationPresentation:] */

void FUN_1067f95a0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 *param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1698;
    func_0x00010bef8e40(PTR_PTR_1126b1698);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf1f320();
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((int)uVar6 != 0) {
      puVar4 = (undefined *)(param_1 + 0x40);
      _objc_loadWeakRetained(puVar4);
      puVar5 = PTR_PTR_1126b0ad8;
      func_0x00010c0d6620(PTR_PTR_1126b0ad8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c0d6640(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c1a4840(puVar3);
      uStack_a8 = 0;
      uStack_98 = 0x3032000000;
      pcStack_90 = FUN_1067f9990;
      pcStack_88 = FUN_1067f99b8;
      uVar6 = param_6;
      puStack_a0 = &uStack_a8;
      func_0x00010bf51e00();
      puVar4 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_1067f99c0;
      puStack_b8 = &UNK_110940fc0;
      puStack_b0 = &uStack_a8;
      uStack_80 = uVar6;
      func_0x00010c0e3a80(puVar3);
      _objc_initWeak(auStack_d8,param_1);
      puStack_100 = puVar4;
      uStack_f8 = 0xc2000000;
      uStack_f0 = 0x1067f9a18;
      puStack_e8 = &UNK_11084f130;
      _objc_copyWeak(auStack_e0,auStack_d8);
      func_0x00010c0e3aa0(puVar3);
      puVar5 = PTR__OBJC_CLASS___NSObject_1126b1300;
      _objc_opt_new();
      _objc_retain();
      uVar6 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar5;
      _objc_release(uVar6);
      puVar7 = PTR_PTR_1126ce470;
      _objc_alloc(PTR_PTR_1126ce470);
      puStack_130 = puVar4;
      uStack_128 = 0xc2000000;
      uStack_120 = 0x1067f9a48;
      puStack_118 = &UNK_110841fb0;
      _objc_copyWeak(auStack_108,auStack_d8);
      _objc_retain(puVar5);
      puStack_110 = puVar5;
      func_0x00010bff8d00(puVar7);
      _objc_setAssociatedObject(puVar3,PTR_LOOP_113165d50,puVar7,1);
      *param_7 = 1;
      _objc_release(puVar7);
      _objc_release(puStack_110);
      _objc_destroyWeak(auStack_108);
      _objc_release(puVar5);
      _objc_destroyWeak(auStack_e0);
      _objc_destroyWeak(auStack_d8);
      __Block_object_dispose(&uStack_a8,8);
      uVar6 = uStack_80;
      goto LAB_1067f9908;
    }
  }
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x1067f9b0c;
  puStack_158 = &UNK_110940ff0;
  _objc_retain(param_3);
  uStack_150 = param_3;
  uStack_138 = param_4;
  _objc_retain(param_6);
  ppuVar8 = &puStack_170;
  uStack_148 = param_6;
  uStack_140 = param_5;
  _objc_retainBlock(ppuVar8);
  puStack_1a8 = puVar3;
  uStack_1a0 = 0xc2000000;
  uStack_198 = 0x1067f9b98;
  puStack_190 = &UNK_110941020;
  _objc_retain(param_3);
  ppuVar9 = &puStack_1a8;
  uStack_188 = param_3;
  uStack_180 = param_5;
  uStack_178 = param_4;
  _objc_retainBlock(ppuVar9);
  puVar3 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  func_0x00010c0311a0();
  _objc_release(ppuVar9);
  _objc_release(uStack_188);
  _objc_release(ppuVar8);
  _objc_release(uStack_148);
  uVar6 = uStack_150;
LAB_1067f9908:
  _objc_release(uVar6);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067f9990; end: 1067f99b7;  */

void FUN_1067f9990(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 1067f99b8; end: 1067f99bf;  */

void FUN_1067f99b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1067f99c0; end: 1067f9c1f;  */

void FUN_1067f99c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  _objc_retainBlock();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  _objc_release(uVar2);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067f9c20; end: 1067f9c67; -[SCOpenAddFriendsCardActionHandler addFriendsWorkflowSkipped:] */

void FUN_1067f9c20(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1067f9c68; end: 1067f9ce7; -[SCOpenAddFriendsCardActionHandler addFriendsWorkflowCompleted:] */

void FUN_1067f9c68(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x48) = 1;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef8fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067f9ce8; end: 1067f9cff; -[SCOpenAddFriendsCardActionHandler _handleNavContainerDeallocForSessionToken:] */

void FUN_1067f9ce8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x50)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bef8fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addFriendsWorkflowCompleted__11259bd90,0);
  return;
}



/* Entry: 1067f9d00; end: 1067f9d73; -[SCOpenAddFriendsCardActionHandler .cxx_destruct] */

void FUN_1067f9d00(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1067f9d74; end: 1067f9f53; -[SCLegacyNavigationState navigationStack] */

void FUN_1067f9d74(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(ulong *)(param_1 + 8);
  _objc_retain(uVar8);
  if (uVar8 != 0) {
    do {
      uVar2 = uVar8;
      func_0x00010c06d1a0();
      if ((uVar2 & 1) != 0) break;
      uVar2 = uVar8;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c06d1a0();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) break;
      uVar2 = uVar8;
      func_0x00010c24d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      uVar3 = uVar8;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 == 0) {
        uVar6 = uVar8;
        func_0x00010c10f940();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar4 = uVar3;
        func_0x00010c29c580();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010bfecde0();
        uVar5 = uVar4;
        func_0x00010bf529e0();
        if (uVar6 + 1 == uVar5) {
          uVar6 = uVar3;
          func_0x00010c10f940();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar6 = uVar4;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(uVar8);
        uVar8 = uVar4;
      }
      _objc_release(uVar8);
      puVar7 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
      _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
      uVar4 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar7);
      uVar8 = uVar6;
      if ((uVar4 & 1) != 0) {
        uVar4 = uVar6;
        func_0x00010c29c580();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar4);
      }
      _objc_release(uVar3);
      _objc_release(uVar2);
    } while (uVar8 != 0);
    _objc_release(uVar8);
  }
  puVar7 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1067f9f54; end: 1067fa1f7; -[SCLegacyNavigationState popToDestination:becauseOfEvent:notificationId:completion:] */

void FUN_1067f9f54(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  long lStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d6b80();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) || (lVar5 = param_1, func_0x00010bf4b900(), (int)lVar5 != 0)) {
    uVar7 = param_3;
    _objc_opt_respondsToSelector(param_3,PTR_s_willBeNavigatedTo__112687080);
    if ((uVar7 & 1) != 0) {
      func_0x00010c2a5960(param_3);
    }
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(param_1);
    lVar5 = param_1;
    func_0x00010bf52a60();
    if (lVar5 == 0) {
      _objc_release(param_1);
    }
    else {
      ppuVar8 = (undefined **)0x0;
      lVar9 = *plStack_130;
      do {
        lVar10 = 0;
        do {
          if (*plStack_130 != lVar9) {
            _objc_enumerationMutation(param_1);
          }
          uStack_170 = *(undefined8 *)(lStack_138 + lVar10 * 8);
          puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_188 = 0xc2000000;
          pcStack_180 = FUN_1067fa1f8;
          puStack_178 = &UNK_1108b24d8;
          _objc_retain(param_3);
          uStack_168 = param_3;
          _objc_retain(ppuVar2);
          ppuStack_160 = ppuVar2;
          _objc_retain(param_6);
          lStack_150 = param_6;
          ppuStack_148 = ppuVar8;
          _objc_retain(param_1);
          ppuVar8 = &puStack_190;
          lStack_158 = param_1;
          _objc_retainBlock();
          _objc_release(lStack_158);
          _objc_release(ppuStack_148);
          _objc_release(lStack_150);
          _objc_release(ppuStack_160);
          _objc_release(uStack_168);
          lVar10 = lVar10 + 1;
        } while (lVar5 != lVar10);
        lVar5 = param_1;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
      _objc_release(param_1);
      if (ppuVar8 != (undefined **)0x0) {
        (*(code *)ppuVar8[2])(ppuVar8);
        _objc_release(ppuVar8);
        goto LAB_1067fa190;
      }
    }
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6);
    }
  }
LAB_1067fa190:
  _objc_release(param_1);
  _objc_release(ppuVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  if ((*(long *)(param_3 + 0x20) == *(long *)(param_3 + 0x28)) ||
     (uVar4 = uVar3, func_0x00010c0720c0(), (int)uVar4 != 0)) {
    if (*(long *)(param_3 + 0x40) != 0) {
      (**(code **)(*(long *)(param_3 + 0x40) + 0x10))();
    }
    goto LAB_1067fa2f4;
  }
  lVar5 = *(long *)(param_3 + 0x48);
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_3 + 0x40);
  }
  _objc_retainBlock();
  uVar7 = *(ulong *)(param_3 + 0x20);
  puVar6 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
  _objc_opt_isKindOfClass(uVar7,puVar6);
  if ((uVar7 & 1) == 0) {
LAB_1067fa2e0:
    func_0x00010bf9b420(*(undefined8 *)(param_3 + 0x20));
  }
  else {
    lVar9 = *(long *)(param_3 + 0x20);
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    iVar1 = (int)*(undefined8 *)(param_3 + 0x38);
    func_0x00010bf4b900();
    if ((iVar1 == 0) || (lVar9 == *(long *)(param_3 + 0x28))) {
      _objc_release(lVar9);
      goto LAB_1067fa2e0;
    }
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x10))(lVar5);
    }
    _objc_release(lVar9);
  }
  _objc_release(lVar5);
LAB_1067fa2f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1067fa1f8; end: 1067fa307;  */

void FUN_1067fa1f8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  if ((*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28)) ||
     (uVar3 = uVar2, func_0x00010c0720c0(), (int)uVar3 != 0)) {
    if (*(long *)(param_1 + 0x40) != 0) {
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
    }
    goto LAB_1067fa2f4;
  }
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0x40);
  }
  _objc_retainBlock();
  uVar7 = *(ulong *)(param_1 + 0x20);
  puVar5 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
  _objc_opt_isKindOfClass(uVar7,puVar5);
  if ((uVar7 & 1) == 0) {
LAB_1067fa2e0:
    func_0x00010bf9b420(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar6 = *(long *)(param_1 + 0x20);
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
    func_0x00010bf4b900();
    if ((iVar1 == 0) || (lVar6 == *(long *)(param_1 + 0x28))) {
      _objc_release(lVar6);
      goto LAB_1067fa2e0;
    }
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4);
    }
    _objc_release(lVar6);
  }
  _objc_release(lVar4);
LAB_1067fa2f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1067fa308; end: 1067fa41f; -[SCLegacyNavigationState targetDestinationMatching:] */

void FUN_1067fa308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c0d6b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1067fa420;
  uStack_40 = 0x1067fa430;
  uStack_38 = 0;
  _objc_retain(param_3);
  func_0x00010bf97f00(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067fa420; end: 1067fa437;  */

void FUN_1067fa420(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1067fa438; end: 1067fa4a7;  */

void FUN_1067fa438(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  if ((int)lVar1 != 0) {
    *param_4 = 1;
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = param_2;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067fa4a8; end: 1067fa4b3; -[SCLegacyNavigationState .cxx_destruct] */

void FUN_1067fa4a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067fa4b4; end: 1067fa4fb; -[SCActiveUserNGSNavigationRouter isProfilePresented] */

bool FUN_1067fa4b4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x288;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 1067fa4fc; end: 1067fa66b; -[SCActiveUserNGSNavigationRouter _handleLongPress] */

void FUN_1067fa4fc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar1 = param_1 + 0x308;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x310);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf6a640();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c252440();
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar2);
    if (lVar4 != 0) {
      puVar5 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      lVar1 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c038f40(puVar5);
      _objc_release(lVar1);
      puVar6 = PTR_PTR_1126ce4b8;
      _objc_alloc(PTR_PTR_1126ce4b8);
      func_0x00010c0582c0();
      puVar7 = PTR_PTR_1126affa8;
      func_0x00010c22bc20(PTR_PTR_1126affa8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8760();
      _objc_release(puVar7);
      lVar1 = param_1 + 0x300;
      _objc_loadWeakRetained(lVar1);
      lVar3 = lVar1;
      func_0x00010bf21f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_storeWeak(param_1 + 0x308,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar1);
      _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar5);
      return;
    }
  }
  return;
}



/* Entry: 1067fa66c; end: 1067fa697;  */

void FUN_1067fa66c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2bc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067fa698; end: 1067fa6fb; -[SCActiveUserNGSNavigationRouter _navigateToFirstTabWithCompletion:] */

void FUN_1067fa698(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be44060();
  if ((int)lVar1 == 0) {
    func_0x00010c2384a0(*(undefined8 *)(param_1 + 0x428),param_2,0,1,0,param_3,
                        *(undefined8 *)(param_1 + 0x1d8));
  }
  else {
    func_0x00010c23a2c0(*(undefined8 *)(param_1 + 0x448),param_2,0xffffffffffffffff);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067fa6fc; end: 1067fa787; -[SCActiveUserNGSNavigationRouter _isSpotlightFirstTab] */

bool FUN_1067fa6fc(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c63a0;
  func_0x00010c24b660(PTR_PTR_1126c63a0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf1f360(uVar2,param_2,puVar3);
  if ((int)uVar4 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010be17dc0(param_1);
    bVar1 = param_1 == 5;
  }
  _objc_release(puVar3);
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 1067fa788; end: 1067fa813; -[SCActiveUserNGSNavigationRouter _isMapFifthTab] */

bool FUN_1067fa788(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c63a0;
  func_0x00010c24b660(PTR_PTR_1126c63a0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf1f360(uVar2,param_2,puVar3);
  if ((int)uVar4 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010be158c0(param_1);
    bVar1 = param_1 == 0;
  }
  _objc_release(puVar3);
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 1067fa814; end: 1067fa86f; -[SCActiveUserNGSNavigationRouter _isSpotlightBeforeDiscoverTab] */

bool FUN_1067fa814(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c265680();
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010be18f00(param_1);
    bVar1 = param_1 == 5;
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 1067fa870; end: 1067fa91b; -[SCActiveUserNGSNavigationRouter _navigateToFourthTabWithCompletion:] */

void FUN_1067fa870(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be41880();
  if ((int)lVar1 != 0) {
    func_0x00010c2384a0(*(undefined8 *)(param_1 + 0x428),param_2,0,1,0,param_3,
                        *(undefined8 *)(param_1 + 0x1d8));
    goto LAB_1067fa908;
  }
  lVar1 = param_1;
  func_0x00010be18f00();
  lVar2 = param_1;
  func_0x00010be44020();
  if ((int)lVar2 == 0) {
    if (lVar1 == 5) goto LAB_1067fa8fc;
  }
  else if ((lVar1 == 5) && (*(long *)(param_1 + 800) == 1)) {
LAB_1067fa8fc:
    func_0x00010c23a2c0(*(undefined8 *)(param_1 + 0x448),param_2,0xffffffffffffffff);
    goto LAB_1067fa908;
  }
  func_0x00010c2370c0(*(undefined8 *)(param_1 + 0x440),param_2,param_3);
LAB_1067fa908:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067fa91c; end: 1067faa7f; -[SCActiveUserNGSNavigationRouter _navigateToFifthTabWithCompletion:] */

void FUN_1067fa91c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be41880();
  if ((int)lVar1 != 0) {
    func_0x00010c236600(*(undefined8 *)(param_1 + 0x438),param_2,0,param_3);
    goto LAB_1067faa64;
  }
  lVar1 = param_1;
  func_0x00010be158c0();
  lVar2 = param_1;
  func_0x00010be41be0();
  if ((int)lVar2 != 0) {
    func_0x00010c2384a0(*(undefined8 *)(param_1 + 0x428),param_2,0,1,0,param_3,
                        *(undefined8 *)(param_1 + 0x1d8));
    goto LAB_1067faa64;
  }
  lVar2 = param_1;
  func_0x00010be44020();
  if ((int)lVar2 == 0) {
    if (lVar1 == 5) goto LAB_1067faa04;
    uVar3 = *(undefined8 *)(param_1 + 0x450);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x1067faa98;
    puStack_68 = &UNK_110849530;
    _objc_retain(param_3);
    uStack_60 = param_3;
    func_0x00010c239bc0(uVar3,param_2,&puStack_80);
    uVar3 = uStack_60;
  }
  else {
    if (lVar1 != 4) {
LAB_1067faa04:
      func_0x00010c23a2c0(*(undefined8 *)(param_1 + 0x448),param_2,0xffffffffffffffff);
      goto LAB_1067faa64;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x450);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1067faa80;
    puStack_40 = &UNK_110849530;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010c239bc0(uVar3,param_2,&puStack_58);
    uVar3 = uStack_38;
  }
  _objc_release(uVar3);
LAB_1067faa64:
  _objc_release(param_3);
  return;
}



/* Entry: 1067faa80; end: 1067faaaf;  */

void FUN_1067faa80(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001067faa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 1067faab0; end: 1067fab43; -[SCActiveUserNGSNavigationRouter _getSelectedImageWithName:withFilledButton:] */

void FUN_1067faab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_4 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067fab44; end: 1067fab47; -[SCActiveUserNGSNavigationRouter onUIWillDisappear:appearance:] */

void FUN_1067fab44(void)

{
  return;
}



/* Entry: 1067fab48; end: 1067fab4b; -[SCActiveUserNGSNavigationRouter onUIDidDisappear:appearance:] */

void FUN_1067fab48(void)

{
  return;
}



/* Entry: 1067fab4c; end: 1067fab4f; -[SCActiveUserNGSNavigationRouter onUIDidExitHierarchy:appearance:] */

void FUN_1067fab4c(void)

{
  return;
}



/* Entry: 1067fab50; end: 1067faba3; -[SCActiveUserNGSNavigationRouter rootContainer:shouldConsiderViewControllerFullScreen:] */

uint FUN_1067fab50(void)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  func_0x00010c27acc0(in_x3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e60838;
  _NSClassFromString(&PTR____CFConstantStringClassReference_110e60838);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,ppuVar1);
  _objc_release(in_x3);
  return (uint)uVar2 & 1;
}



/* Entry: 1067faba4; end: 1067faba7; -[SCActiveUserNGSNavigationRouter rootContainer:leafAskedToActivateButAlreadyActive:] */

void FUN_1067faba4(void)

{
  return;
}



/* Entry: 1067faba8; end: 1067fac13; -[SCActiveUserNGSNavigationRouter exit:] */

void FUN_1067faba8(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010bdf6d20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    func_0x00010bf9b420(param_1,param_2,param_3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067fac14; end: 1067fac5f; -[SCActiveUserNGSNavigationRouter willBeNavigatedTo:] */

void FUN_1067fac14(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010bdf6d20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) != 0) {
    func_0x00010c2a5960(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067fac60; end: 1067faccf; -[SCActiveUserNGSNavigationRouter backgroundExitBehavior] */

void FUN_1067fac60(undefined *param_1)

{
  undefined *puVar1;
  
  func_0x00010bdf6d20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  _objc_opt_respondsToSelector();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126aecb0;
    func_0x00010bf9b820(PTR_PTR_1126aecb0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_1;
    func_0x00010bf13f60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067facd0; end: 1067fad4f; -[SCActiveUserNGSNavigationRouter canHandleNotification:] */

ulong FUN_1067facd0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  func_0x00010bdf6d20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf2cbe0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1067fad50; end: 1067fadb3; -[SCActiveUserNGSNavigationRouter handleQuickAction:] */

void FUN_1067fad50(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  func_0x00010bdf6d20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) != 0) {
    func_0x00010bfd2320(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067fadb4; end: 1067faf23; -[SCActiveUserNGSNavigationRouter _currentNavigationDestination] */

void FUN_1067fadb4(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x140);
  func_0x00010b09cee8();
  if (iVar1 == 0) {
    uVar6 = *(ulong *)(param_1 + 0x188);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar4 = uVar6;
    func_0x00010bf38e80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0d6780();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = param_1 + 0x20;
    _objc_loadWeakRetained();
    puVar3 = PTR_PTR_1126ce4d0;
    _objc_opt_class(PTR_PTR_1126ce4d0);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar6 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar4);
    uVar2 = uVar6;
    func_0x00010bf60ba0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c6e70;
    _objc_opt_class(PTR_PTR_1126c6e70);
    uVar5 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar4 = uVar2;
    if ((uVar5 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar2);
    if (uVar4 == 0) {
      uVar2 = uVar6;
      func_0x00010bf60ba0(uVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf38e80(uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar5 = uVar2;
    func_0x00010c0d6780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(uVar4);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1067faf24; end: 1067faf53; -[SCActiveUserNGSNavigationRouter isCameraVisible] */

uint FUN_1067faf24(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x1a0) == 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x438);
    func_0x00010c0803c0(uVar1);
    return (uint)uVar1 ^ 1;
  }
  return 0;
}


