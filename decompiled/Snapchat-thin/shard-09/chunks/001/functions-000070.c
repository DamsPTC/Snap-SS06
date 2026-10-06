/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106932960; end: 10693298f;  */

void FUN_106932960(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106932990; end: 106932a8f; -[SCDiscoverFeedPrefetchHandler _handleCarouselSectionScrollWithEventName:extraData:] */

void FUN_106932990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined ***param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  undefined **ppuStack_48;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar6 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f8a858);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  pppuVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar3);
  pppuVar5 = param_4;
  if (((ulong)pppuVar4 & 1) == 0) {
    pppuVar5 = (undefined ***)0x0;
  }
  _objc_retain(pppuVar5);
  _objc_release(param_4);
  pppuVar4 = pppuVar5;
  func_0x00010bf529e0();
  if (pppuVar4 != (undefined ***)0x0) {
    ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7948;
    pppuVar6 = &ppuStack_48;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    pppuStack_40 = pppuVar5;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be77840(param_1);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cf2d0;
  _objc_alloc();
  func_0x00010c010e40();
  _objc_retain(pppuVar6);
  pppuVar4 = pppuVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (pppuVar4 != (undefined ***)0x0) {
    pppuVar13 = (undefined ***)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(pppuVar6);
      }
      uVar7 = *(undefined8 *)((long)pppuVar13 * 8);
      func_0x0001079af428();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x0001079d6288();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = pppuVar5[2];
      _objc_retain(ppuVar12);
      ppuVar9 = ppuVar12;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (ppuVar9 != (undefined **)0x0) {
        ppuVar11 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(ppuVar12);
          }
          func_0x00010bfd1fa0(*(undefined8 *)((long)ppuVar11 * 8));
          ppuVar11 = (undefined **)((long)ppuVar11 + 1);
        } while (ppuVar9 != ppuVar11);
        ppuVar9 = ppuVar12;
        func_0x00010bf52a60();
      }
      _objc_release(ppuVar12);
      _objc_release(uVar8);
      _objc_release(uVar7);
      pppuVar13 = (undefined ***)((long)pppuVar13 + 1);
    } while (pppuVar13 != pppuVar4);
    pppuVar4 = pppuVar6;
    func_0x00010bf52a60();
  }
  _objc_release(pppuVar6);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126cf2d0;
  _objc_alloc();
  func_0x00010c010e40();
  ppuVar12 = pppuVar6[2];
  _objc_retain(ppuVar12);
  ppuVar9 = ppuVar12;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (ppuVar9 != (undefined **)0x0) {
    ppuVar11 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(ppuVar12);
      }
      func_0x00010bfd1fa0(*(undefined8 *)((long)ppuVar11 * 8));
      ppuVar11 = (undefined **)((long)ppuVar11 + 1);
    } while (ppuVar9 != ppuVar11);
    ppuVar9 = ppuVar12;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar12);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(puVar3 + 0x18);
  _objc_storeStrong(puVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + 8,0);
  return;
}



/* Entry: 106932a90; end: 106932cab; -[SCDiscoverFeedPrefetchHandler _handleSuspendedUpdateWithEventName:extraData:] */

void FUN_106932a90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f15c58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cf2d0;
  _objc_alloc();
  func_0x00010c010e40();
  _objc_retain(param_4);
  lVar4 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      uVar5 = *(undefined8 *)(lVar11 * 8);
      func_0x0001079af428();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x0001079d6288();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = *(long *)(param_1 + 0x10);
      _objc_retain(lVar10);
      lVar9 = lVar10;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar9 != 0) {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar10);
          }
          func_0x00010bfd1fa0(*(undefined8 *)(lVar8 * 8));
          lVar8 = lVar8 + 1;
        } while (lVar9 != lVar8);
        lVar9 = lVar10;
        func_0x00010bf52a60();
      }
      _objc_release(lVar10);
      _objc_release(uVar6);
      _objc_release(uVar5);
      lVar11 = lVar11 + 1;
    } while (lVar11 != lVar4);
    lVar4 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126cf2d0;
  _objc_alloc();
  func_0x00010c010e40();
  lVar11 = *(long *)(param_4 + 0x10);
  _objc_retain(lVar11);
  lVar4 = lVar11;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar11);
      }
      func_0x00010bfd1fa0(*(undefined8 *)(lVar9 * 8));
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(puVar3 + 0x18);
  _objc_storeStrong(puVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + 8,0);
  return;
}



/* Entry: 106932cac; end: 106932dcb; -[SCDiscoverFeedPrefetchHandler _handlePrefetchEvent:] */

void FUN_106932cac(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126cf2d0;
  _objc_alloc();
  func_0x00010c010e40();
  lVar5 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      func_0x00010bfd1fa0(*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(puVar2 + 0x18);
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 106932dcc; end: 106932e53; -[SCDiscoverFeedPrefetchHandler .cxx_destruct] */

void FUN_106932dcc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106932e54; end: 106932f1f; -[SCDiscoverStoriesPrefetcher initWithDiscoverFeedCollection:discoverFeedDataFetcher:grapheneMetricsEmitter:storiesConfigProvider:] */

undefined1 *
FUN_106932e54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_38 = PTR_PTR_1126f3dc0;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106932f20; end: 106933373; -[SCDiscoverStoriesPrefetcher prefetchableDataFromViewModel:] */

void FUN_106932f20(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar6 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar6);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar6 = PTR_PTR_1126c2100;
  _objc_retain(param_3);
  _objc_opt_class(puVar6);
  uVar7 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar6);
  uVar2 = param_3;
  if ((uVar7 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106933374;
  uStack_60 = 0x106933384;
  uStack_58 = 0;
  if (uVar1 == 0) {
    if (uVar2 == 0) {
      uVar7 = param_3;
      func_0x0001079b9610();
      if ((int)uVar7 == 0) goto LAB_1069332b8;
      uVar7 = param_3;
      func_0x0001079b9678();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c11fd40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar8;
      func_0x00010c259740();
      func_0x000106932e04();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puStack_78[5];
      puStack_78[5] = uVar4;
      _objc_release(uVar3);
    }
    else {
      uVar8 = param_3;
      func_0x00010c268c60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      puVar6 = PTR_PTR_1126c2108;
      _objc_opt_class(PTR_PTR_1126c2108);
      uVar4 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar6);
      uVar8 = uVar7;
      if ((uVar4 & 1) == 0) {
        uVar8 = 0;
      }
      _objc_retain(uVar8);
      _objc_release(uVar7);
      if (uVar8 == 0) {
        uVar7 = param_3;
        func_0x00010c268c60();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar7;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        uVar7 = uVar4;
        _objc_opt_isKindOfClass(uVar4,puVar6);
        uVar8 = uVar4;
        if ((uVar7 & 1) == 0) {
          uVar8 = 0;
        }
        _objc_retain(uVar8);
        _objc_release(uVar4);
        uVar4 = uVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126c2098;
        _objc_opt_class(PTR_PTR_1126c2098);
        uVar5 = uVar4;
        _objc_opt_isKindOfClass(uVar4,puVar6);
        uVar7 = uVar4;
        if ((uVar5 & 1) == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
        _objc_release(uVar4);
        uVar3 = puStack_78[5];
        puStack_78[5] = uVar7;
        _objc_release(uVar3);
        uVar7 = 0;
      }
      else {
        uVar8 = uVar7;
        func_0x00010c0644a0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0bdf60();
      }
    }
LAB_1069332a8:
    _objc_release(uVar8);
  }
  else {
    uVar7 = param_3;
    func_0x00010c112fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar4 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar6);
    uVar7 = uVar8;
    if ((uVar4 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar8);
    uVar4 = uVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c2098;
    _objc_opt_class(PTR_PTR_1126c2098);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar6);
    uVar8 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar8 = 0;
    }
    _objc_retain(uVar8);
    _objc_release(uVar4);
    uVar3 = puStack_78[5];
    puStack_78[5] = uVar8;
    _objc_release(uVar3);
    if (puStack_78[5] == 0) {
      uVar4 = param_3;
      func_0x00010c259740();
      func_0x000106932e04();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = puStack_78[5];
      puStack_78[5] = uVar4;
      goto LAB_1069332a8;
    }
  }
  _objc_release(uVar7);
LAB_1069332b8:
  if (puStack_78[5] == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126cf2b8;
    _objc_alloc(PTR_PTR_1126cf2b8);
    func_0x00010c04d440();
  }
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106933374; end: 10693338b;  */

void FUN_106933374(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10693338c; end: 1069333c3;  */

void FUN_10693338c(long param_1,undefined8 param_2)

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



/* Entry: 1069333c4; end: 10693349b; -[SCDiscoverStoriesPrefetcher prefetchIfPossibleWithViewModels:] */

void FUN_1069333c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10693349c;
  puStack_48 = &UNK_11094bd78;
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x000100504554(param_3,&puStack_60);
  func_0x00010c108140(param_1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10693349c; end: 10693350f;  */

void FUN_10693349c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c1082a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106933510; end: 1069335b3; -[SCDiscoverStoriesPrefetcher prefetchIfPossibleWithDataModels:numSnapsToPrefetch:] */

void FUN_106933510(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010bd86420(param_3,&PTR___NSConcreteGlobalBlock_11094bdc8);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc0000000;
    pcStack_48 = FUN_106933720;
    puStack_40 = &UNK_11094be28;
    lVar1 = param_3;
    uStack_38 = param_4;
    func_0x00010bd86420(param_3,&puStack_58);
    func_0x00010c108140(param_1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069335b4; end: 1069336e3;  */

void FUN_1069335b4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c2138;
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
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106933374;
  uStack_40 = 0x106933384;
  uStack_38 = 0;
  func_0x00010c0bdf60(uVar1);
  uVar4 = puStack_58[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1069336e4; end: 1069336e7;  */

void FUN_1069336e4(void)

{
  return;
}



/* Entry: 1069336e8; end: 10693371f;  */

void FUN_1069336e8(long param_1,undefined8 param_2)

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



/* Entry: 106933720; end: 10693378b;  */

void FUN_106933720(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf2b8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c04d440();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10693378c; end: 106933823; -[SCDiscoverStoriesPrefetcher prefetchWithData:] */

void FUN_10693378c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_106933824;
    puStack_38 = &UNK_110841f80;
    uStack_30 = param_1;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106933824; end: 10693382f;  */

void FUN_106933824(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c107a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_prefetchMediaWithData__11261f8c0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106933830; end: 106933897; -[SCDiscoverStoriesPrefetcher handlePrefetchWithContext:sectionType:] */

void FUN_106933830(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010bf9a440();
  if ((param_3 == 1) &&
     (uVar1 = param_4,
     func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110eb5658),
     (int)uVar1 != 0)) {
    func_0x00010be77760(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106933898; end: 10693398b; -[SCDiscoverStoriesPrefetcher _prefetchSubscriptionSection] */

void FUN_106933898(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf00a00(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10693398c; end: 1069339d3;  */

void FUN_10693398c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be77780();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069339d4; end: 106933c17; -[SCDiscoverStoriesPrefetcher _prefetchSubscriptionSectionWithStories:] */

void FUN_1069339d4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  ppuVar10 = &puStack_a0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010bf432c0();
  if (uVar11 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf82b40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf71b40();
    uVar11 = (ulong)(int)uVar5;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar11 < uVar1) {
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
  }
  puVar6 = PTR_PTR_1126ca858;
  func_0x00010c156900();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110eb5658;
  puVar7 = PTR_PTR_1126ca858;
  puStack_78 = puVar6;
  func_0x00010c108020();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ca860;
  puStack_70 = puVar7;
  func_0x00010bfb5340();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar8;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106933c18;
  puStack_88 = &UNK_11094be48;
  puStack_80 = puVar9;
  _objc_retain(puVar9);
  uVar11 = param_3;
  func_0x00010bd86420(param_3,&puStack_a0);
  func_0x00010c108140(param_1);
  _objc_release(uVar11);
  _objc_release(puStack_80);
  _objc_release(puVar9);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126cf2b8;
  _objc_retain(ppuVar10);
  _objc_alloc(puVar6);
  func_0x00010c04d440();
  _objc_release(ppuVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106933c18; end: 106933c7b;  */

void FUN_106933c18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf2b8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c04d440();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106933c7c; end: 106933cb7; -[SCDiscoverStoriesPrefetcher .cxx_destruct] */

void FUN_106933c7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106933cb8; end: 106933d83; -[SCFriendStoriesPrefetchInfo initWithMediaInfo:contexts:fetchBatchId:] */

undefined1 *
FUN_106933cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f3dc8;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106933d84; end: 106933d8b; -[SCFriendStoriesPrefetchInfo mediaInfo] */

undefined8 FUN_106933d84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106933d8c; end: 106933d93; -[SCFriendStoriesPrefetchInfo contexts] */

undefined8 FUN_106933d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106933d94; end: 106933d9b; -[SCFriendStoriesPrefetchInfo fetchBatchId] */

undefined8 FUN_106933d94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106933d9c; end: 106933dd7; -[SCFriendStoriesPrefetchInfo .cxx_destruct] */

void FUN_106933d9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106933dd8; end: 106933ddf;  */

void FUN_106933dd8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb8dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_friendStoryCarouselPrefetchConfi_1125cbd18);
  return;
}



/* Entry: 106933de0; end: 106933e1f; -[SCDocFriendStoriesPrefetcher prefetchIfPossibleWithViewModels:] */

void FUN_106933de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11094beb8);
  func_0x00010c108140(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106933e20; end: 106933e27;  */

void FUN_106933e20(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  puVar1 = PTR_PTR_1126c22b8;
  uVar6 = param_2;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126c22c0;
    _objc_opt_class(PTR_PTR_1126c22c0);
    uVar2 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar1);
    puVar1 = PTR_PTR_1126c22c0;
    if ((uVar2 & 1) != 0) {
      _objc_retain(param_2);
      _objc_opt_class(puVar1);
      uVar2 = param_2;
      _objc_opt_isKindOfClass(param_2,puVar1);
      if ((uVar2 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(param_2);
      uVar2 = uVar6;
      func_0x00010c268c60();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106934c90;
    }
    puVar1 = PTR_PTR_1126c2100;
    _objc_opt_class(PTR_PTR_1126c2100);
    _objc_opt_isKindOfClass(param_2,puVar1);
    puVar1 = PTR_PTR_1126c2100;
    if ((uVar6 & 1) == 0) {
      uVar6 = 0;
      goto LAB_106934d04;
    }
    _objc_retain(param_2);
    _objc_opt_class(puVar1);
    uVar6 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar1);
    uVar2 = param_2;
    if ((uVar6 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_2);
    uVar3 = uVar2;
    func_0x00010c268c60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126c2380;
    _objc_opt_class(PTR_PTR_1126c2380);
    uVar4 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar1);
    uVar3 = uVar6;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar6);
    if (uVar3 == 0) {
      uVar6 = uVar2;
      func_0x00010c268c60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar1 = PTR_PTR_1126c2108;
      _objc_opt_class(PTR_PTR_1126c2108);
      uVar6 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar1);
      uVar4 = uVar5;
      if ((uVar6 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar5);
      puStack_68 = &uStack_70;
      uStack_70 = 0;
      uStack_60 = 0x3032000000;
      pcStack_58 = FUN_106934f30;
      uStack_50 = 0x106934f40;
      uStack_48 = 0;
      uVar6 = uVar4;
      func_0x00010c0644a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bdf60();
      _objc_release(uVar6);
      uVar6 = puStack_68[5];
      _objc_retain(uVar6);
      __Block_object_dispose(&uStack_70,8);
      _objc_release(uStack_48);
      _objc_release(uVar4);
    }
    else {
      func_0x00010bf5ed80(uVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar3);
  }
  else {
    _objc_retain(param_2);
    _objc_opt_class(puVar1);
    uVar2 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(param_2);
    uVar2 = uVar6;
    func_0x00010c112fe0();
    _objc_retainAutoreleasedReturnValue();
LAB_106934c90:
    _objc_release(uVar6);
    uVar6 = uVar2;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126c2380;
    _objc_opt_class(PTR_PTR_1126c2380);
    uVar3 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar1);
    uVar2 = uVar6;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar6);
    uVar6 = uVar2;
    func_0x00010bf5ed80(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
LAB_106934d04:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106933e28; end: 106933e6f; -[SCDocFriendStoriesPrefetcher prefetchIfPossibleWithDataModels:numSnapsToPrefetch:] */

void FUN_106933e28(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010bd86420(param_3,&PTR___NSConcreteGlobalBlock_11094bef8);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c108140(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106933e70; end: 106933f9f;  */

void FUN_106933e70(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c2138;
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
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106933fa0;
  uStack_40 = 0x106933fb0;
  uStack_38 = 0;
  func_0x00010c0bdf60(uVar1);
  uVar4 = puStack_58[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106933fa0; end: 106933fb7;  */

void FUN_106933fa0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106933fb8; end: 106933fef;  */

void FUN_106933fb8(long param_1,undefined8 param_2)

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



/* Entry: 106933ff0; end: 106933ff3;  */

void FUN_106933ff0(void)

{
  return;
}



/* Entry: 106933ff4; end: 106934037; -[SCDocFriendStoriesPrefetcher prefetchWithData:] */

void FUN_106933ff4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010be77220(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106934038; end: 1069340ab; -[SCDocFriendStoriesPrefetcher handlePrefetchWithContext:sectionType:] */

void FUN_106934038(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010bf9a440();
  if (param_3 != 1) {
    if (param_3 != 0) goto LAB_106934098;
    func_0x00010bf3bd20(param_1);
  }
  uVar1 = param_4;
  func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110eb3638);
  if ((int)uVar1 != 0) {
    func_0x00010be77240(param_1);
  }
LAB_106934098:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1069340ac; end: 1069340b3; -[SCDocFriendStoriesPrefetcher clearPrefetchedCount] */

void FUN_1069340ac(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 1069340b4; end: 1069341eb; -[SCDocFriendStoriesPrefetcher _prefetchFriendStoriesForSuspendedUIUpdate] */

void FUN_1069340b4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined1 auStack_38 [8];
  
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf48f60();
  _objc_release(lVar2);
  if (lVar5 == 4) {
LAB_106934108:
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb8e40();
    iVar1 = (int)uVar4;
  }
  else {
    if (lVar5 != 2) {
      if (lVar5 != 1) {
        lVar5 = 0;
        goto LAB_106934150;
      }
      goto LAB_106934108;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb8e20();
    iVar1 = (int)uVar4;
  }
  lVar5 = (long)iVar1;
  _objc_release(uVar3);
LAB_106934150:
  _objc_initWeak(auStack_38,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  lStack_40 = lVar5;
  _objc_copyWeak(auStack_48,auStack_38);
  func_0x00010c259d60(uVar4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1069341ec; end: 10693427b;  */

void FUN_1069341ec(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf529e0();
    lVar1 = param_2;
    func_0x00010c25e980(param_2);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be77220();
    _objc_release(param_1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10693427c; end: 1069343cb; -[SCDocFriendStoriesPrefetcher _prefetchFriendStories:] */

void FUN_10693427c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb2d0;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c231e40();
  _objc_release(puVar1);
  if (((int)puVar2 != 0) && (lVar3 = param_3, func_0x00010bf529e0(), lVar3 != 0)) {
    lVar3 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11094bf58);
    _objc_initWeak(auStack_38,param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(lVar3);
    func_0x00010c25b360(uVar4);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1069343cc; end: 1069343d3;  */

void FUN_1069343cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storyId_112674158);
  return;
}



/* Entry: 1069343d4; end: 10693443f;  */

void FUN_1069343d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be77260();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106934440; end: 106934a47; -[SCDocFriendStoriesPrefetcher _prefetchFriendStoriesFromPlaybackInfos:viewStateMap:withOrderInFriendStoryIds:] */

void FUN_106934440(long param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  long lVar19;
  undefined1 auStack_340 [8];
  undefined1 auStack_338 [8];
  ulong uStack_330;
  ulong uStack_328;
  undefined1 *puStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  ulong uStack_300;
  ulong uStack_2f8;
  long lStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  uint uStack_2d4;
  undefined *puStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  ulong *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  ulong *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_2c0 = param_4;
  _objc_retain(param_4);
  uStack_2e8 = param_5;
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 0x18);
  lStack_2b8 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf48f60();
  _objc_release(lVar2);
  if (lVar3 == 4) {
LAB_1069344e0:
    uVar4 = *(undefined8 *)(lStack_2b8 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar4;
    func_0x00010bfb8e00();
    iVar1 = (int)uVar12;
  }
  else {
    if (lVar3 != 2) {
      if (lVar3 != 1) {
        uStack_2c8 = 0;
        goto LAB_106934534;
      }
      goto LAB_1069344e0;
    }
    uVar4 = *(undefined8 *)(lStack_2b8 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar4;
    func_0x00010bfb8de0();
    iVar1 = (int)uVar12;
  }
  uStack_2c8 = (ulong)iVar1;
  _objc_release(uVar4);
LAB_106934534:
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar14 = uStack_2e8;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  puStack_220 = (ulong *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  _objc_retain(uStack_2e8);
  puVar15 = &uStack_230;
  uVar17 = uVar14;
  func_0x00010bf52a60();
  lStack_2f0 = param_3;
  if (uVar17 != 0) {
    uVar14 = *puStack_220;
    param_5 = uVar17;
    uStack_300 = uVar14;
    do {
      uVar17 = 0;
      uStack_2f8 = param_5;
      do {
        if (*puStack_220 != uVar14) {
          _objc_enumerationMutation(uStack_2e8);
        }
        puVar15 = *(undefined8 **)(lStack_228 + uVar17 * 8);
        lVar3 = param_3;
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010bf4b900();
        _objc_release(lVar3);
        if ((int)lVar2 != 0) {
          if (0x10 < *(long *)(lStack_2b8 + 0x28)) goto LAB_10693486c;
          uStack_2e0 = uVar17;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          lStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          plStack_260 = (long *)0x0;
          uStack_248 = 0;
          uStack_250 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          puStack_2d0 = puVar6;
          _objc_retain(param_3);
          lVar3 = param_3;
          func_0x00010bf52a60();
          if (lVar3 == 0) {
            _objc_release(param_3);
          }
          else {
            uStack_2d4 = 0;
            uVar14 = 0;
            lVar2 = *plStack_260;
            do {
              lVar19 = 0;
              do {
                if (*plStack_260 != lVar2) {
                  _objc_enumerationMutation(param_3);
                }
                uVar4 = *(undefined8 *)(lStack_268 + lVar19 * 8);
                uVar12 = uVar4;
                func_0x00010c15f2e0(uVar4);
                _objc_retainAutoreleasedReturnValue();
                uVar17 = uStack_2c0;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar17;
                func_0x00010c29ea60();
                _objc_release(uVar17);
                _objc_release(uVar12);
                if ((uVar7 & 1) == 0) {
                  uVar14 = uVar14 + 1;
                  if (uStack_2c8 < uVar14) goto LAB_1069347f0;
                  uVar12 = uVar4;
                  func_0x000107d22a6c(uVar4,1,1);
                  _objc_retainAutoreleasedReturnValue();
                  lVar8 = *(long *)(lStack_2b8 + 0x10);
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  lVar9 = lVar8;
                  func_0x00010c0c6980();
                  _objc_release(lVar8);
                  if (lVar9 != 2) {
                    func_0x0001084d1fa0(uVar4,*(undefined8 *)(lStack_2b8 + 0x38));
                    _objc_retainAutoreleasedReturnValue();
                    uVar10 = uVar12;
                    func_0x00010bf267e0(uVar12);
                    _objc_retainAutoreleasedReturnValue();
                    uVar11 = uVar4;
                    func_0x00010b26c050(uVar4,uVar10);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar10);
                    puVar6 = PTR_PTR_1126cf2d8;
                    _objc_alloc(PTR_PTR_1126cf2d8);
                    func_0x00010c0297a0();
                    func_0x00010befa120(puStack_2d0);
                    _objc_release(puVar6);
                    _objc_release(uVar11);
                    _objc_release(uVar4);
                    uStack_2d4 = 1;
                  }
                  _objc_release(uVar12);
                }
                lVar19 = lVar19 + 1;
              } while (lVar3 != lVar19);
              lVar3 = param_3;
              func_0x00010bf52a60();
            } while (lVar3 != 0);
LAB_1069347f0:
            _objc_release(param_3);
            param_5 = uStack_2f8;
            uVar14 = uStack_300;
            if ((uStack_2d4 & 1) != 0) {
              *(long *)(lStack_2b8 + 0x28) = *(long *)(lStack_2b8 + 0x28) + 1;
              func_0x00010befa120(puVar5);
            }
          }
          _objc_release(puStack_2d0);
          _objc_release(param_3);
          uVar17 = uStack_2e0;
          param_3 = lStack_2f0;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != param_5);
      puVar15 = &uStack_230;
      param_5 = uStack_2e8;
      func_0x00010bf52a60();
    } while (param_5 != 0);
  }
LAB_10693486c:
  _objc_release(uStack_2e8);
  if (uStack_2c8 != 0) {
    uVar17 = 0;
    do {
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      lStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      puStack_2a0 = (ulong *)0x0;
      _objc_retain(puVar5);
      puVar15 = &uStack_2b0;
      puVar6 = puVar5;
      func_0x00010bf52a60();
      if (puVar6 != (undefined *)0x0) {
        param_5 = *puStack_2a0;
        do {
          puVar18 = (undefined *)0x0;
          do {
            if (*puStack_2a0 != param_5) {
              _objc_enumerationMutation(puVar5);
            }
            uVar16 = *(ulong *)(lStack_2a8 + (long)puVar18 * 8);
            uVar7 = uVar16;
            func_0x00010bf529e0();
            if (uVar17 < uVar7) {
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              uVar12 = *(undefined8 *)(lStack_2b8 + 0x10);
              func_0x00010c269d40(uVar12);
              _objc_retainAutoreleasedReturnValue();
              uVar14 = uVar16;
              func_0x00010c0c5340(uVar16);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar16;
              func_0x00010bf4f6c0(uVar16);
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar16;
              func_0x00010bfa5320(uVar16);
              _objc_retainAutoreleasedReturnValue();
              uStack_310 = 0;
              func_0x00010bfa85c0(uVar12);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(uVar13);
              _objc_release(uVar7);
              _objc_release(uVar14);
              _objc_release(uVar12);
              _objc_release(uVar16);
              uVar14 = uVar16;
            }
            puVar18 = puVar18 + 1;
          } while (puVar6 != puVar18);
          puVar15 = &uStack_2b0;
          puVar6 = puVar5;
          func_0x00010bf52a60();
        } while (puVar6 != (undefined *)0x0);
      }
      _objc_release(puVar5);
      uVar17 = uVar17 + 1;
    } while (uVar17 != uStack_2c8);
  }
  _objc_release(puVar5);
  _objc_release(uStack_2e8);
  _objc_release(uStack_2c0);
  lVar3 = lStack_2f0;
  _objc_release(lStack_2f0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_318 = FUN_106934a48;
  uStack_330 = param_5;
  uStack_328 = uVar14;
  puStack_320 = &stack0xfffffffffffffff0;
  _objc_retain(puVar15);
  _objc_initWeak(auStack_338,lVar3);
  _objc_copyWeak(auStack_340,auStack_338);
  func_0x00010c0bf7c0(puVar15);
  _objc_destroyWeak(auStack_340);
  _objc_destroyWeak(auStack_338);
  _objc_release(puVar15);
  return;
}



/* Entry: 106934a48; end: 106934b07; -[SCDocFriendStoriesPrefetcher didUpdateSummaryInfo:] */

void FUN_106934a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0bf7c0(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106934b08; end: 106934b3f;  */

void FUN_106934b08(long param_1,long param_2)

{
  if (param_2 == 1) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be77240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106934b40; end: 106934b43;  */

void FUN_106934b40(void)

{
  return;
}



/* Entry: 106934b44; end: 106934ba3; -[SCDocFriendStoriesPrefetcher .cxx_destruct] */

void FUN_106934b44(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106934ba4; end: 106934f2f;  */

void FUN_106934ba4(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126c22b8;
  uVar6 = param_1;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126c22c0;
    _objc_opt_class(PTR_PTR_1126c22c0);
    uVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    puVar1 = PTR_PTR_1126c22c0;
    if ((uVar2 & 1) != 0) {
      _objc_retain(param_1);
      _objc_opt_class(puVar1);
      uVar2 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar1);
      if ((uVar2 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(param_1);
      uVar2 = uVar6;
      func_0x00010c268c60();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106934c90;
    }
    puVar1 = PTR_PTR_1126c2100;
    _objc_opt_class(PTR_PTR_1126c2100);
    _objc_opt_isKindOfClass(param_1,puVar1);
    puVar1 = PTR_PTR_1126c2100;
    if ((uVar6 & 1) == 0) {
      uVar6 = 0;
      goto LAB_106934d04;
    }
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar6 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    uVar2 = param_1;
    if ((uVar6 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    uVar3 = uVar2;
    func_0x00010c268c60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126c2380;
    _objc_opt_class(PTR_PTR_1126c2380);
    uVar4 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar1);
    uVar3 = uVar6;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar6);
    if (uVar3 == 0) {
      uVar6 = uVar2;
      func_0x00010c268c60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar1 = PTR_PTR_1126c2108;
      _objc_opt_class(PTR_PTR_1126c2108);
      uVar6 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar1);
      uVar4 = uVar5;
      if ((uVar6 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar5);
      puStack_68 = &uStack_70;
      uStack_70 = 0;
      uStack_60 = 0x3032000000;
      pcStack_58 = FUN_106934f30;
      uStack_50 = 0x106934f40;
      uStack_48 = 0;
      uVar6 = uVar4;
      func_0x00010c0644a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bdf60();
      _objc_release(uVar6);
      uVar6 = puStack_68[5];
      _objc_retain(uVar6);
      __Block_object_dispose(&uStack_70,8);
      _objc_release(uStack_48);
      _objc_release(uVar4);
    }
    else {
      func_0x00010bf5ed80(uVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar3);
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(param_1);
    uVar2 = uVar6;
    func_0x00010c112fe0();
    _objc_retainAutoreleasedReturnValue();
LAB_106934c90:
    _objc_release(uVar6);
    uVar6 = uVar2;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126c2380;
    _objc_opt_class(PTR_PTR_1126c2380);
    uVar3 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar1);
    uVar2 = uVar6;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar6);
    uVar6 = uVar2;
    func_0x00010bf5ed80(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
LAB_106934d04:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106934f30; end: 106934f47;  */

void FUN_106934f30(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106934f48; end: 106934f7f;  */

void FUN_106934f48(long param_1,undefined8 param_2)

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



/* Entry: 106934f80; end: 106935513;  */

/* WARNING: Possible PIC construction at 0x000106935548: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010693554c) */
/* WARNING: Removing unreachable block (ram,0x00010693559c) */
/* WARNING: Removing unreachable block (ram,0x0001069355c0) */
/* WARNING: Removing unreachable block (ram,0x0001069355c4) */
/* WARNING: Removing unreachable block (ram,0x0001069355d4) */
/* WARNING: Removing unreachable block (ram,0x0001069355dc) */
/* WARNING: Removing unreachable block (ram,0x000106935680) */
/* WARNING: Removing unreachable block (ram,0x00010693569c) */
/* WARNING: Removing unreachable block (ram,0x000106935700) */
/* WARNING: Removing unreachable block (ram,0x000106935740) */
/* WARNING: Removing unreachable block (ram,0x00010693576c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x0001069356d8) */

void FUN_106934f80(undefined **param_1)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **unaff_x20;
  undefined **unaff_x21;
  long lVar6;
  undefined **ppuVar7;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **ppuVar8;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_140 [8];
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar2 = (undefined **)PTR____NSArray0__struct_11034ab48;
  if (param_1 != (undefined **)0x0) {
    unaff_x20 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_1;
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    puStack_120 = (undefined8 *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    ppuStack_138 = ppuVar2;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      unaff_x27 = (undefined **)*puStack_120;
      unaff_x21 = &PTR_PTR_1126c2000;
      do {
        unaff_x28 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_120 != unaff_x27) {
            _objc_enumerationMutation(ppuStack_138);
          }
          unaff_x24 = param_1;
          func_0x00010bf33b60();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = unaff_x24;
          func_0x00010010fab4();
          unaff_x23 = unaff_x24;
          if ((int)ppuVar3 == 0) {
            unaff_x23 = (undefined **)0x0;
          }
          _objc_retain(unaff_x23);
          _objc_release(unaff_x24);
          unaff_x26 = param_1;
          func_0x00010bf33b60();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126c20f8;
          _objc_opt_class(PTR_PTR_1126c20f8);
          ppuVar3 = unaff_x26;
          _objc_opt_isKindOfClass(unaff_x26,puVar4);
          unaff_x25 = unaff_x26;
          if (((ulong)ppuVar3 & 1) == 0) {
            unaff_x25 = (undefined **)0x0;
          }
          _objc_retain(unaff_x25);
          _objc_release(unaff_x26);
          if (unaff_x25 == (undefined **)0x0) {
            if (unaff_x23 != (undefined **)0x0) {
              func_0x00010befa120(unaff_x20);
            }
          }
          else {
            func_0x00010bf4c080();
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = unaff_x26;
            FUN_106934f80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(unaff_x20);
            _objc_release(ppuVar3);
            _objc_release(unaff_x26);
            unaff_x24 = unaff_x26;
            unaff_x26 = ppuVar3;
          }
          _objc_release(unaff_x25);
          _objc_release(unaff_x23);
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (ppuVar2 != unaff_x28);
        ppuVar2 = ppuStack_138;
        func_0x00010bf52a60();
      } while (ppuVar2 != (undefined **)0x0);
    }
    ppuVar2 = unaff_x20;
    func_0x00010bf51e00();
    _objc_release(ppuStack_138);
    _objc_release(unaff_x20);
  }
  ppuVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    uVar10 = 0x1069351bc;
    ___stack_chk_fail();
    puVar1 = auStack_140;
    ppuVar7 = ppuVar2;
    while( true ) {
      ppuVar5 = ppuVar3;
      puVar9 = (undefined1 *)((long)register0x00000008 + -0x10);
      register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x160);
      *(undefined ***)(puVar1 + -0x60) = unaff_x28;
      *(undefined ***)(puVar1 + -0x58) = unaff_x27;
      *(undefined ***)(puVar1 + -0x50) = unaff_x26;
      *(undefined ***)(puVar1 + -0x48) = unaff_x25;
      *(undefined ***)(puVar1 + -0x40) = unaff_x24;
      *(undefined ***)(puVar1 + -0x38) = unaff_x23;
      *(undefined ***)(puVar1 + -0x30) = ppuVar7;
      *(undefined ***)(puVar1 + -0x28) = unaff_x21;
      *(undefined ***)(puVar1 + -0x20) = unaff_x20;
      *(undefined ***)(puVar1 + -0x18) = param_1;
      *(undefined1 **)(puVar1 + -0x10) = puVar9;
      *(undefined8 *)(puVar1 + -8) = uVar10;
      *(undefined8 *)(puVar1 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      ppuVar2 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
      if (ppuVar5 != (undefined **)0x0) {
        unaff_x20 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
        *(undefined8 *)(puVar1 + -0x138) = 0;
        *(undefined8 *)(puVar1 + -0x140) = 0;
        *(undefined8 *)(puVar1 + -0x128) = 0;
        *(undefined8 *)(puVar1 + -0x130) = 0;
        *(undefined8 *)(puVar1 + -0x118) = 0;
        *(undefined8 *)(puVar1 + -0x120) = 0;
        *(undefined8 *)(puVar1 + -0x108) = 0;
        *(undefined8 *)(puVar1 + -0x110) = 0;
        ppuVar2 = ppuVar5;
        func_0x00010bfed1a0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined ***)(puVar1 + -0x158) = ppuVar2;
        func_0x00010bf52a60();
        *(undefined ***)(puVar1 + -0x148) = ppuVar2;
        if (ppuVar2 != (undefined **)0x0) {
          *(undefined8 *)(puVar1 + -0x150) = **(undefined8 **)(puVar1 + -0x130);
          ppuVar7 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
          do {
            lVar6 = 0;
            do {
              if (**(long **)(puVar1 + -0x130) != *(long *)(puVar1 + -0x150)) {
                _objc_enumerationMutation(*(undefined8 *)(puVar1 + -0x158));
              }
              ppuVar8 = *(undefined ***)(*(long *)(puVar1 + -0x138) + lVar6 * 8);
              ppuVar2 = ppuVar5;
              func_0x00010bf33b60();
              _objc_retainAutoreleasedReturnValue();
              ppuVar3 = ppuVar2;
              func_0x00010010fab4();
              unaff_x23 = ppuVar2;
              if ((int)ppuVar3 == 0) {
                unaff_x23 = (undefined **)0x0;
              }
              _objc_retain(unaff_x23);
              _objc_release(ppuVar2);
              ppuVar2 = ppuVar5;
              func_0x00010bf33b60();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR_PTR_1126c20f8;
              _objc_opt_class(PTR_PTR_1126c20f8);
              ppuVar3 = ppuVar2;
              _objc_opt_isKindOfClass(ppuVar2,puVar4);
              unaff_x25 = ppuVar2;
              if (((ulong)ppuVar3 & 1) == 0) {
                unaff_x25 = (undefined **)0x0;
              }
              _objc_retain(unaff_x25);
              _objc_release(ppuVar2);
              if (unaff_x25 == (undefined **)0x0) {
                if (unaff_x23 == (undefined **)0x0) {
                  unaff_x26 = (undefined **)0x0;
                }
                else {
                  *(undefined ***)(puVar1 + -0xf8) = unaff_x23;
                  unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                  func_0x00010bf0a140();
                  _objc_retainAutoreleasedReturnValue();
                }
              }
              else {
                func_0x00010bf4c080();
                _objc_retainAutoreleasedReturnValue();
                unaff_x26 = ppuVar2;
                FUN_106934f80();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar2);
                unaff_x27 = ppuVar2;
              }
              ppuVar2 = unaff_x26;
              func_0x00010bf529e0();
              puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              unaff_x24 = ppuVar8;
              if (ppuVar2 != (undefined **)0x0) {
                func_0x00010c1554e0(ppuVar8);
                func_0x00010c0df780(puVar4);
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = unaff_x20;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(puVar4);
                if (unaff_x28 == (undefined **)0x0) {
                  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                  unaff_x28 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c1554e0(ppuVar8);
                  func_0x00010c0df780();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(unaff_x20);
                  _objc_release(unaff_x28);
                  _objc_release(puVar4);
                }
                unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c1554e0(ppuVar8);
                func_0x00010c0df780();
                _objc_retainAutoreleasedReturnValue();
                unaff_x27 = unaff_x20;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa160();
                _objc_release(unaff_x27);
                _objc_release(unaff_x24);
              }
              _objc_release(unaff_x26);
              _objc_release(unaff_x25);
              _objc_release(unaff_x23);
              lVar6 = lVar6 + 1;
            } while (*(long *)(puVar1 + -0x148) != lVar6);
            lVar6 = *(long *)(puVar1 + -0x158);
            func_0x00010bf52a60();
            *(long *)(puVar1 + -0x148) = lVar6;
          } while (lVar6 != 0);
        }
        _objc_release(*(undefined8 *)(puVar1 + -0x158));
        ppuVar2 = unaff_x20;
        func_0x00010bf51e00();
        _objc_release(unaff_x20);
      }
      ppuVar3 = ppuVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -0x70)) break;
      ___stack_chk_fail();
      *(undefined8 *)(puVar1 + -0x1d0) = unaff_d9;
      *(undefined8 *)(puVar1 + -0x1c8) = unaff_d8;
      *(undefined ***)(puVar1 + -0x1c0) = unaff_x28;
      *(undefined ***)(puVar1 + -0x1b8) = unaff_x27;
      *(undefined ***)(puVar1 + -0x1b0) = unaff_x26;
      *(undefined ***)(puVar1 + -0x1a8) = unaff_x25;
      *(undefined ***)(puVar1 + -0x1a0) = unaff_x24;
      *(undefined ***)(puVar1 + -0x198) = unaff_x23;
      *(undefined ***)(puVar1 + -400) = ppuVar7;
      *(undefined ***)(puVar1 + -0x188) = ppuVar2;
      *(undefined ***)(puVar1 + -0x180) = unaff_x20;
      *(undefined ***)(puVar1 + -0x178) = ppuVar5;
      *(undefined1 **)(puVar1 + -0x170) = puVar1 + -0x10;
      *(code **)(puVar1 + -0x168) = FUN_106935514;
      *(undefined8 *)(puVar1 + -0x1e0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar10 = 0x10693554c;
      puVar1 = puVar1 + -0x2d0;
      param_1 = ppuVar5;
      unaff_x21 = ppuVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106935514; end: 106935703;  */

void FUN_106935514(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001069351bc();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar3 = param_1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lVar6 = param_1;
      func_0x00010c0e00e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar5);
      func_0x00010bf97e80(lVar6);
      _objc_release(lVar6);
      puVar7 = puVar5;
      func_0x00010bf51e00(puVar5);
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar5);
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = param_2;
    func_0x00010c29d560(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar9);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106935704; end: 10693577f;  */

void FUN_106935704(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c29d560(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106935780; end: 1069357e7; +[DiscoverBackgroundPrefetchConfig descriptor] */

void FUN_106935780(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4740 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b06e80,
                        &PTR____CFConstantStringClassReference_110e653b8,&PTR_DAT_11316a220,
                        &PTR_DAT_11316a238,6,0x20,0x1c);
    puRam00000001136c4740 = puVar1;
  }
  return;
}



/* Entry: 1069357e8; end: 106936177; -[SCDiscoverFeedQueryCoordinator initWithUserSession:snapTokenProvider:friendStoriesDataCoordinator:docObjectContext:storiesSyncNetworkRequester:endpointManager:circumstanceEngine:discoverFeedDataFetcher:discoverFeedDataMutator:discoverFeedDataLoader:discoverFeedEventsController:bitmojiAvatarProvider:discoverFeedRanker:adsClientInfoProvider:bitmojiFriendAvatarProvider:interactionHistoryManager:userRegistrationInfoProvider:snapchattersDataFetcher:storiesGrapheneMetricsEmitter:readReceiptCoordinator:sectionsCoordinator:promotedStoriesLogger:adConfigProvider:discoverPerformanceLogging:userSegmentsProvider:blizzardLogger:crashLogger:pageLoadMetricManager:storiesConfigProvider:networkConnectivityMonitor:rtusClientCacheManager:upNextGrapheneMetricsEmitter:storySyncCacheRequestSender:dpaConfigProvider:adRenderDataParser:spotlightMediaFetcherFactory:cachedReadReceiptViewStateProvider:locationProvider:unifiedGRPCClientFactory:] */

undefined8 *
FUN_1069357e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
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
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  puStack_70 = PTR_PTR_1126f3dd8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[3];
    puVar1[3] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[5];
    puVar1[5] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[4];
    puVar1[4] = param_12;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c135d00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar6);
    _objc_retain(param_8);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_25;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cec38;
    _objc_alloc();
    uVar2 = puVar1[3];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00cca0();
    uVar6 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar6);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[10];
    puVar1[10] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_33;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c1080;
    _objc_alloc();
    uVar2 = param_31;
    func_0x00010c269d40(param_31);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c142560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cb40();
    uVar7 = puVar1[0x23];
    puVar1[0x23] = puVar3;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_9);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x26];
    puVar1[0x26] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_31;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c2320;
    func_0x00010bf71360(PTR_PTR_1126c2320);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf1f320();
    *(char *)((long)puVar1 + 0x141) = (char)uVar6;
    _objc_release(puVar3);
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x144) = 0;
    _objc_retain(param_34);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_40;
    _objc_release(uVar2);
    puVar5 = puVar1;
    func_0x00010bdee080();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = puVar5;
    _objc_release(uVar2);
    _objc_release(param_9);
  }
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
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
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106936178; end: 1069361a7;  */

void FUN_106936178(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108f543e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,uVar2);
  return;
}



/* Entry: 1069361a8; end: 10693625f; -[SCDiscoverFeedQueryCoordinator _createFrontierServiceWithFactory:] */

void FUN_1069361a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106936260;
  puStack_48 = &UNK_11094bfc8;
  uStack_40 = uVar2;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar2);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106936260; end: 106936413;  */

void FUN_106936260(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  puVar2 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = *(undefined ***)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c2320;
  func_0x00010bfbb340(PTR_PTR_1126c2320);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010c25d300(ppuVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  ppuVar6 = ppuVar5;
  func_0x00010c08fa60();
  ppuVar3 = &PTR____CFConstantStringClassReference_110db1dd8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar3 = ppuVar5;
  }
  func_0x00010c196320(puVar2,param_2,ppuVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar2,param_2,20000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar2,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar2,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1fd6e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e653f8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar4 = PTR_PTR_1126cf2e0;
  _objc_alloc(PTR_PTR_1126cf2e0);
  func_0x00010c058f80();
  _objc_release(uVar8);
  _objc_release(ppuVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106936414; end: 1069364ef; -[SCDiscoverFeedQueryCoordinator _frontierCallOptionsBuilder] */

undefined * FUN_106936414(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000108f54f3c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  if (puVar4 != (undefined *)0x0) {
    ppuStack_48 = &PTR____CFConstantStringClassReference_110dadcb8;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&ppuStack_48,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9140(puVar2,param_2,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  _os_unfair_lock_lock(puVar3 + 0x144);
  bVar1 = puVar3[0x140];
  _os_unfair_lock_unlock(puVar3 + 0x144);
  return (undefined *)(ulong)bVar1;
}



/* Entry: 1069364f0; end: 106936523; -[SCDiscoverFeedQueryCoordinator hasPendingBatchRequest] */

undefined1 FUN_1069364f0(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x144);
  uVar1 = *(undefined1 *)(param_1 + 0x140);
  _os_unfair_lock_unlock(param_1 + 0x144);
  return uVar1;
}



/* Entry: 106936524; end: 106936553; -[SCDiscoverFeedQueryCoordinator setHasPendingBatchRequest:] */

void FUN_106936524(long param_1,undefined8 param_2,undefined1 param_3)

{
  _os_unfair_lock_lock(param_1 + 0x144);
  *(undefined1 *)(param_1 + 0x140) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x144);
  return;
}



/* Entry: 106936554; end: 1069365ef; -[SCDiscoverFeedQueryCoordinator _unlockPendingBatchRequestWithQuery:] */

void FUN_106936554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010be3e600(param_1,param_2,param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e65438);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar2);
    func_0x00010c1a6660(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069365f0; end: 1069365fb; +[SCDiscoverFeedQueryCoordinator announcerIdentifier] */

undefined ** FUN_1069365f0(void)

{
  return &PTR____CFConstantStringClassReference_110e65458;
}



/* Entry: 1069365fc; end: 10693664b; -[SCDiscoverFeedQueryCoordinator setSectionExtensionServices:] */

void FUN_1069365fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 400);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 400);
    *(undefined8 *)(param_1 + 400) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10693664c; end: 1069366f7; -[SCDiscoverFeedQueryCoordinator canPerformQuery:] */

undefined8 FUN_10693664c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x141) == '\x01') {
    uVar1 = param_3;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    if (((uVar2 & 1) == 0) &&
       (uVar2 = param_1, func_0x00010be3e600(param_1,param_2,param_3), (int)uVar2 != 0)) {
      func_0x00010bfda0e0();
      _objc_release(uVar1);
      if ((param_1 & 1) != 0) {
        uVar3 = 0;
        goto LAB_1069366dc;
      }
    }
    else {
      _objc_release(uVar1);
    }
  }
  uVar3 = 1;
LAB_1069366dc:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1069366f8; end: 106936a1f; -[SCDiscoverFeedQueryCoordinator resultsForQuery:updatingBlock:] */

void FUN_1069366f8(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bea08e0(param_1);
    goto LAB_106936940;
  }
  func_0x00010bf63d40(*(undefined8 *)(param_1 + 0x138));
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + 0x188);
  *(ulong *)(param_1 + 0x188) = uVar1;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2130;
  _objc_opt_class(PTR_PTR_1126c2130);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010bfa4340(uVar1);
  _objc_release(uVar1);
  func_0x00010c10a120(uVar6);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0960();
  _objc_release(uVar6);
  uVar1 = param_3;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010be13860(param_1);
    func_0x00010bed1600(param_1);
    goto LAB_106936940;
  }
  uVar1 = param_3;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010be13860(param_1);
    goto LAB_106936940;
  }
  uVar1 = param_3;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    if ((int)uVar4 != 0) {
      _objc_release(uVar2);
      goto LAB_106936928;
    }
    uVar4 = param_3;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar5 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c11d960();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      if ((int)uVar2 == 0) {
LAB_106936a04:
        _objc_release(uVar1);
      }
      else {
        uVar2 = param_1;
        func_0x00010bfda0e0();
        _objc_release(uVar1);
        if ((uVar2 & 1) == 0) {
          uVar1 = param_3;
          func_0x0001079b7dd0(param_3);
          _objc_retainAutoreleasedReturnValue();
          if (param_4 != 0) {
            (**(code **)(param_4 + 0x10))(param_4,uVar1,0);
          }
          goto LAB_106936a04;
        }
      }
      func_0x00010beca160(param_1);
      goto LAB_106936940;
    }
  }
  else {
LAB_106936928:
    _objc_release(uVar1);
  }
  func_0x00010be13820(param_1);
LAB_106936940:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106936a20; end: 106936a4b; -[SCDiscoverFeedQueryCoordinator _invalidateQueryTimeoutTimer] */

void FUN_106936a20(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x70));
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106936a4c; end: 106936bb7; -[SCDiscoverFeedQueryCoordinator _startQueryTimeoutTimerWithQuery:resultState:updatingBlock:] */

void FUN_106936a4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x70));
  puVar1 = PTR_PTR_1126ae888;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  uStack_60 = param_4;
  _objc_retain(param_5);
  func_0x00010c0522e0(0x403e000000000000);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106936bb8; end: 106936bef;  */

void FUN_106936bb8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010becc200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106936bf0; end: 106936bf3; -[SCDiscoverFeedQueryCoordinator _timeoutTimerAssertWithQuery:resultState:updatingBlock:] */

void FUN_106936bf0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed60d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateContentSectionsWithQuery__1125931d8);
  return;
}



/* Entry: 106936bf4; end: 106936f37; -[SCDiscoverFeedQueryCoordinator _synchronizedCachedContentFetchForQuery:updatingBlock:] */

void FUN_106936bf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain();
  _dispatch_group_create();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x2020000000;
  uStack_b8 = 3;
  _dispatch_group_enter();
  func_0x00010bec1400(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_106936f38;
  puStack_e8 = &UNK_110853230;
  puStack_d8 = &uStack_90;
  _objc_retain(uVar2);
  uStack_e0 = uVar2;
  func_0x00010bfa9a40(uVar3);
  _objc_release(uVar3);
  _dispatch_group_enter(uVar2);
  _objc_initWeak(auStack_108,param_1);
  puStack_158 = puVar1;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_106936f74;
  puStack_140 = &UNK_11094bff8;
  _objc_copyWeak(auStack_110,auStack_108);
  puStack_120 = &uStack_b0;
  _objc_retain(param_3);
  puStack_118 = &uStack_d0;
  uStack_138 = param_3;
  _objc_retain(uVar2);
  uStack_130 = uVar2;
  _objc_retain(param_4);
  ppuVar4 = &puStack_158;
  uStack_128 = param_4;
  _objc_retainBlock(ppuVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c11d960(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09afa0(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar5);
  puStack_1b0 = puVar1;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_10693716c;
  puStack_198 = &UNK_11094c028;
  puStack_178 = &uStack_90;
  puStack_170 = &uStack_b0;
  _objc_copyWeak(auStack_160,auStack_108);
  puStack_168 = &uStack_d0;
  uStack_190 = param_3;
  uStack_188 = uVar2;
  uStack_180 = param_4;
  _objc_retain(uVar2);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000100bc0718(uVar2,PTR___dispatch_main_q_11034be20,&puStack_1b0);
  _objc_release(uStack_188);
  _objc_release(uStack_180);
  _objc_release(uStack_190);
  _objc_destroyWeak(auStack_160);
  _objc_release(ppuVar4);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(uStack_138);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  _objc_release(uStack_e0);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_d0,8);
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  return;
}



/* Entry: 106936f38; end: 106936f73;  */

void FUN_106936f38(long param_1,long param_2)

{
  func_0x00010bf529e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_2 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106936f74; end: 10693716b;  */

void FUN_106936f74(long param_1,long param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = param_2;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      func_0x00010bf63ce0(*(undefined8 *)(lVar2 + 0x138));
      uVar4 = *(undefined8 *)(lVar2 + 0xe8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b0960();
      _objc_release(uVar4);
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c11d960();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 2;
      if (param_3 != 0) {
        uVar4 = 3;
      }
      func_0x00010c14de00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar5);
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar4;
    }
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
    lVar3 = lVar2;
    func_0x00010bfda0e0();
    if ((int)lVar3 == 0) {
      param_1 = param_1 + 0x48;
      _objc_loadWeakRetained(param_1);
      func_0x00010be116c0();
    }
    else {
      uVar4 = *(undefined8 *)(lVar2 + 0xb8);
      param_1 = *(long *)(param_1 + 0x20);
      func_0x00010c11d960(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf5fc60(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c11d960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5280(uVar4);
      _objc_release(lVar6);
      _objc_release(lVar3);
    }
    _objc_release(param_1);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10693716c; end: 106937263;  */

void FUN_10693716c(long param_1)

{
  long lVar1;
  
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) & 1) != 0) ||
     (*(char *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) == '\x01')) {
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bed60c0();
    _objc_release(lVar1);
  }
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3d9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106937264; end: 106937503; -[SCDiscoverFeedQueryCoordinator _shouldDebounceRequestFor:] */

bool FUN_106937264(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  _objc_retain(param_4);
  uVar2 = *(ulong *)(param_2 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf82840();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = uVar4;
  func_0x00010bf713e0();
  if ((uVar3 & 1) != 0) {
    bVar1 = false;
    goto LAB_10693749c;
  }
  uVar5 = param_4;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0720c0();
  if ((int)uVar6 == 0) {
    _objc_release(uVar5);
LAB_106937338:
    uVar5 = param_4;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0720c0();
    if ((int)uVar6 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar4;
      func_0x00010bf71b20();
      _objc_release(uVar5);
      if (0 < (int)uVar3) {
        uVar3 = uVar4;
        func_0x00010bf71b20();
        iVar7 = (int)uVar3;
        goto LAB_106937470;
      }
    }
    uVar5 = param_4;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0720c0();
    if ((int)uVar6 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar4;
      func_0x00010bf71b00();
      _objc_release(uVar5);
      if (0 < (int)uVar3) {
        uVar3 = uVar4;
        func_0x00010bf71b00();
        iVar7 = (int)uVar3;
        goto LAB_106937470;
      }
    }
    uVar5 = param_4;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0720c0();
    if ((int)uVar6 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar4;
      func_0x00010bf71ac0();
      _objc_release(uVar5);
      if (0 < (int)uVar3) {
        uVar3 = uVar4;
        func_0x00010bf71ac0();
        iVar7 = (int)uVar3;
        goto LAB_106937470;
      }
    }
    uVar5 = param_4;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0720c0();
    if ((int)uVar6 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar4;
      func_0x00010bf71aa0();
      _objc_release(uVar5);
      if (0 < (int)uVar3) {
        uVar3 = uVar4;
        func_0x00010bf71aa0();
        iVar7 = (int)uVar3;
        goto LAB_106937470;
      }
    }
    uVar5 = param_4;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0720c0();
    _objc_release(uVar5);
    iVar7 = 1000;
    if ((int)uVar6 == 0) {
      iVar7 = 0;
    }
  }
  else {
    uVar3 = uVar4;
    func_0x00010bf71ae0();
    _objc_release(uVar5);
    if ((int)uVar3 < 1) goto LAB_106937338;
    uVar3 = uVar4;
    func_0x00010bf71ae0();
    iVar7 = (int)uVar3;
  }
LAB_106937470:
  _CACurrentMediaTime();
  bVar1 = param_1 < *(double *)(param_2 + 0x120) + (double)(iVar7 / 1000);
LAB_10693749c:
  _objc_release(uVar4);
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 106937504; end: 106937567; -[SCDiscoverFeedQueryCoordinator _fetchRemoteFriendAndDFStoriesIfNeededWithQuery:updatingBlock:] */

void FUN_106937504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be138a0(param_1,param_2,param_3);
  func_0x00010be13820(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106937568; end: 10693759f; -[SCDiscoverFeedQueryCoordinator _fetchRemoteFriendStoriesWithQuery:] */

void FUN_106937568(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069375a0; end: 1069376f3; -[SCDiscoverFeedQueryCoordinator _rerankDiscoverStoriesWithQuery:sectionsToRerank:isDebouncedQuery:updatingBlock:] */

void FUN_1069375a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_11094c058);
  uVar2 = param_4;
  FUN_106937724(param_4,*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x68),
                *(undefined8 *)(param_1 + 0x100));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  func_0x00010c130ac0(uVar3);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1069376f4; end: 106937723;  */

void FUN_1069376f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfa4340(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 106937724; end: 106937d7b;  */

void FUN_106937724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6,undefined8 param_7,ulong param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (param_6 != 0) {
    ppuStack_130 = &PTR____CFConstantStringClassReference_110eb3638;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_130 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_106940880;
    puStack_118 = &UNK_11094c668;
    _objc_retain(param_6);
    puVar3 = puVar2;
    lStack_110 = param_6;
    func_0x000100504554(puVar2,&ppuStack_130);
    _objc_release(lStack_110);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  puVar2 = puVar3;
  func_0x00010c0d3c80();
  _objc_release(puVar3);
  uVar13 = param_5;
  func_0x00010bf529e0();
  if (uVar13 != 0) {
    uVar13 = 0;
    do {
      uVar12 = param_5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar12;
      func_0x00010bfa4340();
      if (uVar4 != 0x106) {
        lVar11 = param_6;
        func_0x00010c12a3c0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfa4340(uVar12);
        func_0x00010c0df840(puVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar11;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(lVar11);
        if (lVar5 == 0) {
          lVar11 = param_6;
          func_0x00010c12a3c0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar11;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          _objc_release(lVar11);
        }
        lVar11 = lVar5;
        func_0x00010c12a3a0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar11 != 0) {
          func_0x00010befa120(puVar1);
        }
        _objc_release(lVar11);
        _objc_release(lVar5);
      }
      _objc_release(uVar12);
      uVar13 = uVar13 + 1;
      uVar12 = param_5;
      func_0x00010bf529e0();
    } while (uVar13 < uVar12);
  }
  uVar13 = param_8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  func_0x00010c12c800();
  _objc_release(uVar13);
  if ((uVar12 & 1) == 0) {
    puVar3 = puVar2;
    func_0x00010bf529e0();
    if ((puVar3 == (undefined *)0x0) ||
       (puVar3 = puVar1, func_0x00010bf529e0(), puVar3 == (undefined *)0x0)) {
      func_0x00010befa160(puVar1);
    }
    else {
      uVar13 = param_8;
      func_0x00010c269d40(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c231d40();
      _objc_release(uVar13);
      puVar3 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      _objc_alloc(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
      func_0x00010bf529e0(puVar2);
      func_0x00010c01d900(puVar3);
      func_0x00010c066b20(puVar1);
      _objc_release(puVar3);
    }
  }
  _objc_retain(param_5);
  uVar16 = 0;
  _objc_retain(param_5);
  uVar13 = param_5;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  do {
    puVar3 = puVar1;
    if (uVar13 == 0) {
      _objc_release(param_5);
      _objc_release(param_5);
      puVar6 = PTR_PTR_1126c2180;
      _objc_alloc(PTR_PTR_1126c2180);
      ppuVar15 = &PTR____CFConstantStringClassReference_110f4b1d8;
      ppuVar7 = ppuVar15;
      func_0x000108f54160(&PTR____CFConstantStringClassReference_110f4b1d8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar15;
      func_0x0001079d61d4(&PTR____CFConstantStringClassReference_110f4b1d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108f54a98();
      func_0x00010c0127c0(puVar6);
      _objc_release(ppuVar8);
      _objc_release(ppuVar7);
      _objc_retain(puVar6);
      uVar9 = 0;
      func_0x0001079b7d94(0);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c27608(&PTR____CFConstantStringClassReference_110f4b1d8);
      dVar19 = 0.021299999207258224;
      dVar17 = dVar19;
      func_0x00010b8169fc(0x3f95cfaac0000000);
      func_0x00010b8169fc(0x3f95cfaac0000000);
      dVar18 = dVar19;
      func_0x00010b816218();
      ppuVar7 = ppuVar15;
      func_0x00010c0720c0();
      puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297340(uVar16,param_2,param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      if ((int)ppuVar7 == 0) {
        func_0x0001079b7bc4((double)(long)(dVar19 * dVar18) / dVar18,
                            &PTR____CFConstantStringClassReference_110f4b1d8,uVar9,puVar6,puVar10);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x0001079b7cb4(dVar17,&PTR____CFConstantStringClassReference_110f4b1d8,puVar6,puVar10);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar6);
      _objc_release(puVar10);
      _objc_release(uVar9);
      func_0x00010befa120(puVar1);
      _objc_release(ppuVar15);
      func_0x00010bf51e00(puVar1);
      _objc_release(puVar6);
LAB_106937cfc:
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(param_8);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
        return;
      }
      ___stack_chk_fail();
      puVar1 = PTR_PTR_1126b16f0;
      _objc_alloc(PTR_PTR_1126b16f0);
      func_0x00010c042a40();
      lVar11 = *(long *)(param_5 + 0x30);
      if (lVar11 != 0) {
        (**(code **)(lVar11 + 0x10))(lVar11,puVar1,0);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
    uVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(param_5);
      }
      uVar14 = *(ulong *)(uVar12 * 8);
      uVar4 = uVar14;
      func_0x00010bfa4340();
      if ((uVar4 == 3) && (func_0x00010bf98260(), (uVar14 & 1) != 0)) {
        _objc_release(param_5);
        _objc_release(param_5);
        func_0x00010bf51e00(puVar1);
        goto LAB_106937cfc;
      }
      uVar12 = uVar12 + 1;
    } while (uVar13 != uVar12);
    uVar13 = param_5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106937d7c; end: 106937dcf;  */

void FUN_106937d7c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b16f0;
  _objc_alloc(PTR_PTR_1126b16f0);
  func_0x00010c042a40();
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106937dd0; end: 106937dd7; -[SCDiscoverFeedQueryCoordinator _fetchRemoteDFStoriesWithQuery:updatingBlock:] */

void FUN_106937dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be13850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__fetchRemoteDFStoriesWithQuery_u_1125627b0,param_3,param_4,0);
  return;
}



/* Entry: 106937dd8; end: 10693804f; -[SCDiscoverFeedQueryCoordinator _fetchFullFeedAndOrFulfillAdsForQuery:cachedStories:isValid:invalidFeedTypes:updatingBlock:] */

void FUN_106937dd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5,
                  ulong param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2320;
  func_0x00010c06af80(PTR_PTR_1126c2320);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2320;
  func_0x00010c06afa0(PTR_PTR_1126c2320);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067e20();
  _objc_release(puVar2);
  _objc_release(lVar3);
  if ((param_5 == 0) || (lVar3 = param_4, func_0x00010bf529e0(), lVar3 == 0)) {
    func_0x00010be13840(param_1);
  }
  iVar7 = 0;
  if (0 < lVar4) {
    iVar7 = (int)uVar6;
  }
  if (((iVar7 == 1) && (uVar5 = param_6, func_0x00010bf4b900(), (uVar5 & 1) == 0)) &&
     (uVar5 = param_6, func_0x00010bf4b900(), (uVar5 & 1) == 0)) {
    _objc_initWeak(auStack_68,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    lStack_70 = lVar4;
    _objc_retain(param_3);
    _objc_retain(param_7);
    func_0x00010bfcac80(uVar6);
    _objc_release(uVar1);
    _objc_release(uVar6);
    _objc_release(param_7);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106938050; end: 106938253;  */

void FUN_106938050(long param_1,undefined *param_2,ulong param_3,undefined *param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar8 = PTR____NSArray0__struct_11034ab48;
    if (param_2 != (undefined *)0x0) {
      puVar8 = param_2;
    }
    _objc_retain(puVar8);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    in_b0 = 0;
    in_register_00005001 = 0;
    in_register_00005002 = 0;
    in_register_00005003 = 0;
    in_register_00005004 = 0;
    in_register_00005005 = 0;
    in_register_00005006 = 0;
    in_register_00005007 = 0;
    _objc_retain(puVar8);
    param_5 = 0x10;
    puVar3 = puVar8;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(puVar8);
        }
        uVar12 = *(undefined8 *)((long)puVar11 * 8);
        uVar4 = uVar12;
        func_0x00010c276740();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)uVar4 != 0) {
          func_0x00010c259740(uVar12);
          func_0x00010c0df880(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(puVar5);
        }
        puVar11 = puVar11 + 1;
      } while (puVar3 != puVar11);
      param_5 = 0x10;
      puVar3 = puVar8;
      func_0x00010bf52a60();
    }
    _objc_release(puVar8);
    uVar6 = *(ulong *)(lVar1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    param_4 = puVar2;
    func_0x00010bf27600();
    _objc_release(uVar6);
    param_3 = uVar7;
    func_0x00010c0a7080(*(undefined8 *)(lVar1 + 0xb8));
    if (uVar7 < *(ulong *)(param_1 + 0x38)) {
      param_3 = *(ulong *)(param_1 + 0x20);
      param_5 = *(undefined8 *)(param_1 + 0x28);
      param_4 = (undefined *)0x3;
      func_0x00010be138c0(lVar1);
    }
    _objc_release(puVar2);
    _objc_release(puVar8);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar8 = param_2;
  func_0x00010be3e600();
  if ((int)puVar8 != 0) {
    puVar8 = param_2;
    func_0x00010beb2f20();
    if ((int)puVar8 != 0) {
      lVar9 = *(long *)(param_2 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar9;
      func_0x00010c156b00();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar1;
      func_0x00010bf51e00();
      _objc_release(lVar1);
      _objc_release(lVar9);
      lVar1 = lVar10;
      func_0x00010bf529e0();
      if (lVar1 != 0) {
        func_0x00010be91f00(param_2);
        _objc_release(lVar10);
        goto LAB_106938398;
      }
      _objc_release(lVar10);
    }
    _CACurrentMediaTime();
    *(ulong *)(param_2 + 0x120) =
         CONCAT17(in_register_00005007,
                  CONCAT16(in_register_00005006,
                           CONCAT15(in_register_00005005,
                                    CONCAT14(in_register_00005004,
                                             CONCAT13(in_register_00005003,
                                                      CONCAT12(in_register_00005002,
                                                               CONCAT11(in_register_00005001,in_b0))
                                                     )))));
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar7 = param_3;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar7);
    func_0x00010c1a6660(param_2);
  }
  func_0x00010be13940(param_2);
LAB_106938398:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106938254; end: 1069383c7; -[SCDiscoverFeedQueryCoordinator _fetchRemoteDFStoriesWithQuery:updatingBlock:invalidFeedTypes:] */

void FUN_106938254(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = param_2;
  func_0x00010be3e600(param_2,param_3,param_4);
  if ((int)lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010beb2f20(param_2,param_3,param_4);
    if ((int)lVar2 != 0) {
      lVar3 = *(long *)(param_2 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c156b00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf51e00();
      _objc_release(lVar2);
      _objc_release(lVar3);
      lVar2 = lVar4;
      func_0x00010bf529e0();
      if (lVar2 != 0) {
        func_0x00010be91f00(param_2,param_3,param_4,lVar4,1,param_5);
        _objc_release(lVar4);
        goto LAB_106938398;
      }
      _objc_release(lVar4);
    }
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + 0x120) = param_1;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar5 = param_4;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_3,&PTR____CFConstantStringClassReference_110e65498);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar5);
    func_0x00010c1a6660(param_2,param_3,1);
  }
  func_0x00010be13940(param_2,param_3,param_4,param_5,param_6);
LAB_106938398:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1069383c8; end: 1069385ef; -[SCDiscoverFeedQueryCoordinator _fetchRemoteStoriesWithQuery:updatingBlock:invalidFeedTypes:] */

void FUN_1069383c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  ppuVar3 = &puStack_f0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1069385f0;
  puStack_a0 = &UNK_1109389b0;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_3);
  uStack_98 = param_3;
  _objc_retain(param_4);
  uStack_88 = param_4;
  _objc_retain(param_5);
  ppuVar2 = &puStack_b8;
  uStack_90 = param_5;
  _objc_retainBlock(ppuVar2);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_106938648;
  puStack_d8 = &UNK_110864758;
  _objc_retain(param_4);
  lStack_d0 = param_1;
  uStack_c0 = param_4;
  _objc_retain(param_3);
  uStack_c8 = param_3;
  _objc_retainBlock(&puStack_f0);
  func_0x00010c106e80(*(undefined8 *)(param_1 + 0x60));
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa48e0(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(uStack_c8);
  _objc_release(uStack_c0);
  _objc_release(ppuVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_88);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069385f0; end: 106938647;  */

void FUN_1069385f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9fc20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106938648; end: 10693867f;  */

void FUN_106938648(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed1610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__unlockPendingBatchRequestWithQu_112591f28,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106938680; end: 10693878f; -[SCDiscoverFeedQueryCoordinator _fetchRemoteFulfillStoryAdsWithQuery:feedType:updatingBlock:] */

void FUN_106938680(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106938790; end: 1069387c7;  */

void FUN_106938790(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9f2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069387c8; end: 106938d5b; -[SCDiscoverFeedQueryCoordinator _sendFulfillStoryAdsQuery:feedType:updatingBlock:] */

void FUN_1069387c8(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined4 uStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = param_1[3];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf009e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(puVar2);
  func_0x00010bffc4a0();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(puVar2);
  ppuVar15 = apuStack_f0;
  puVar17 = puVar2;
  func_0x00010bf52a60();
  if (puVar17 != (undefined *)0x0) {
    lVar18 = *plStack_120;
    do {
      puVar19 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar18) {
          _objc_enumerationMutation(puVar2);
        }
        lVar16 = *(long *)(lStack_128 + (long)puVar19 * 8);
        lVar3 = lVar16;
        func_0x00010c25b720();
        if (lVar3 != 5) {
          func_0x00010bf454e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar16 != 0) {
            func_0x00010befa120(puVar1);
          }
        }
        puVar19 = puVar19 + 1;
      } while (puVar17 != puVar19);
      ppuVar15 = apuStack_f0;
      puVar17 = puVar2;
      func_0x00010bf52a60();
    } while (puVar17 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar17 = param_1[0x17];
  func_0x00010bf529e0(puVar1);
  func_0x00010c0a7000(puVar17);
  puVar17 = puVar1;
  func_0x00010bf529e0();
  ppuVar20 = param_1;
  if (puVar17 != (undefined *)0x0) {
    puVar19 = param_1[0x12];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar19;
    func_0x00010c118120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    puVar4 = param_1[0x1c];
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1[0x2b];
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar17;
    func_0x000108487704(puVar17,puVar4,0,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar5 = param_1[0x11];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bfd46e0();
    _objc_release(puVar5);
    puVar6 = param_1[0x25];
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010bf5ff60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c078a60();
    puVar8 = param_1[0x15];
    func_0x00010c269d40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar8;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar13;
    func_0x00010beed420();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_1[0x16];
    func_0x00010c269d40(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c0d42e0();
    param_8 = param_1[0x2e];
    uVar12 = 0;
    param_7 = 0;
    FUN_106938d5c(0,puVar7,(ulong)puVar4 & 0xffffffff,puVar9,puVar11,param_1[0x21],0,param_8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar13);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar6);
    puVar13 = param_1[3];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar13;
    func_0x00010c155a40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar13);
    puVar4 = puVar7;
    func_0x00010c25c6c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_3;
    func_0x00010c11d960(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar5;
    param_6 = puVar4;
    func_0x00010846d55c(puVar5,uVar14,puVar1,uVar12,puVar19,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    _objc_release(puVar5);
    func_0x00010c0a7040(param_1[0x17]);
    _objc_initWeak(auStack_138,param_1);
    puVar5 = param_1[0x2f];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be19b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_106938f8c;
    puStack_160 = &UNK_11094c078;
    ppuVar20 = &puStack_178;
    _objc_copyWeak(auStack_148,auStack_138);
    _objc_retain(param_3);
    uStack_158 = param_3;
    uStack_140 = param_4;
    _objc_retain(param_5);
    ppuVar15 = param_1;
    uStack_150 = param_5;
    func_0x00010bfbb6c0(puVar5);
    _objc_release(param_1);
    _objc_release(puVar5);
    _objc_release(uStack_150);
    _objc_release(uStack_158);
    _objc_destroyWeak(auStack_148);
    _objc_destroyWeak(auStack_138);
    _objc_release(puVar13);
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(uVar12);
    _objc_release(puVar19);
    _objc_release(puVar17);
  }
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar20 + 6);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume(param_3);
  puVar2 = PTR_PTR_1126c0e20;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(ppuVar15);
  _objc_retain(param_3);
  _objc_opt_new(puVar2);
  func_0x000108f1337c();
  _objc_release(param_8);
  puVar1 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a4e0();
  func_0x00010c206a80(puVar2);
  _objc_release(puVar1);
  puVar1 = param_6;
  func_0x000108f136bc(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c180e80(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar1;
  func_0x00010bf88860();
  _objc_release(puVar1);
  if (puVar17 != (undefined *)0xffffffffffffffff) {
    puVar1 = PTR_PTR_1126b7410;
    func_0x00010c22b6a0(PTR_PTR_1126b7410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf88860();
    puVar17 = puVar2;
    func_0x00010bf48c80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16eee0();
    _objc_release(puVar17);
    _objc_release(puVar1);
  }
  func_0x000108f137cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9e0(puVar2);
  _objc_release(puVar1);
  func_0x00010c1ae2e0(puVar2);
  _objc_release(param_3);
  func_0x00010c1b2d80(puVar2);
  func_0x00010c1a5a60(puVar2);
  func_0x00010c26f320(ppuVar15);
  _objc_release(ppuVar15);
  func_0x00010c21e160(puVar2);
  func_0x00010c170020(puVar2);
  func_0x00010c175f00(puVar2);
  func_0x00010c1e8040(puVar2);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106938d5c; end: 106938f8b;  */

void FUN_106938d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126c0e20;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  func_0x000108f1337c();
  _objc_release(param_8);
  puVar2 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a4e0();
  func_0x00010c206a80(puVar1);
  _objc_release(puVar2);
  uVar3 = param_6;
  func_0x000108f136bc(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c180e80(puVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf88860();
  _objc_release(puVar2);
  if (puVar4 != (undefined *)0xffffffffffffffff) {
    puVar2 = PTR_PTR_1126b7410;
    func_0x00010c22b6a0(PTR_PTR_1126b7410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf88860();
    puVar4 = puVar1;
    func_0x00010bf48c80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16eee0();
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  func_0x000108f137cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9e0(puVar1);
  _objc_release(puVar2);
  func_0x00010c1ae2e0(puVar1);
  _objc_release(param_1);
  func_0x00010c1b2d80(puVar1);
  func_0x00010c1a5a60(puVar1);
  func_0x00010c26f320(param_4);
  _objc_release(param_4);
  func_0x00010c21e160(puVar1);
  func_0x00010c170020(puVar1);
  func_0x00010c175f00(puVar1);
  func_0x00010c1e8040(puVar1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106938f8c; end: 106938ffb;  */

void FUN_106938f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be86ca0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106938ffc; end: 106939163; -[SCDiscoverFeedQueryCoordinator _receiveFulfillStoryAdsResponse:error:query:feedType:updatingBlock:] */

void FUN_106938ffc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_60 = param_6;
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106939164; end: 10693919f;  */

void FUN_106939164(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069391a0; end: 1069395ff; -[SCDiscoverFeedQueryCoordinator _handleFulfillStoryAdsResponse:error:query:feedType:updatingBlock:] */

void FUN_1069391a0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined **unaff_x24;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined4 uStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if ((param_3 != 0) && (param_4 == 0)) {
    lVar9 = param_3;
    func_0x00010c0ece40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar9;
    func_0x00010bf32220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be574e0(param_1);
    _objc_release(lVar1);
    _objc_release(lVar9);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar9 = param_3;
    func_0x00010c0ece40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar9;
    func_0x00010bf32220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    lVar9 = lVar1;
    func_0x00010bf52a60();
    if (lVar9 != 0) {
      lVar12 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(lVar1);
          }
          iVar10 = (int)*(undefined8 *)(lStack_128 + lVar11 * 8);
          func_0x00010bf31ee0();
          if (iVar10 == 6) {
            func_0x00010befa120(puVar2);
          }
          lVar11 = lVar11 + 1;
        } while (lVar9 != lVar11);
        lVar9 = lVar1;
        func_0x00010bf52a60();
      } while (lVar9 != 0);
    }
    _objc_release(lVar1);
    unaff_x24 = *(undefined ***)(param_1 + 0xb8);
    func_0x00010bf529e0(puVar2);
    func_0x00010c0a7020(unaff_x24);
    puVar3 = puVar2;
    func_0x00010bf529e0();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126b0ef8;
      _objc_alloc();
      lVar9 = param_3;
      func_0x00010c135700(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x00010c03ef40();
      _objc_release(puVar4);
      _objc_release(lVar9);
      uVar5 = *(undefined8 *)(param_1 + 0x88);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = *(long *)(param_1 + 0xb8);
      uVar13 = *(undefined8 *)(param_1 + 0xa0);
      uVar6 = *(undefined8 *)(param_1 + 0xe0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x000108482d58(puVar2,puVar3,uVar8,0,uVar13,PTR____NSDictionary0__struct_11034ab58,
                          param_6,0,lVar9,uVar6,*(undefined8 *)(param_1 + 0x68),
                          *(undefined8 *)(param_1 + 0x160));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar8);
      _objc_release(uVar5);
      unaff_x24 = *(undefined ***)(param_1 + 0xb8);
      func_0x00010bf529e0(puVar4);
      func_0x00010c0a7060(unaff_x24);
      puVar7 = puVar4;
      func_0x00010bf529e0();
      if (puVar7 != (undefined *)0x0) {
        _objc_initWeak(auStack_138,param_1);
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_170 = 0xc2000000;
        pcStack_168 = FUN_106939600;
        puStack_160 = &UNK_11089a980;
        unaff_x24 = &puStack_178;
        _objc_copyWeak(auStack_148,auStack_138);
        _objc_retain(param_5);
        uStack_158 = param_5;
        uStack_140 = (int)param_6;
        _objc_retain(param_7);
        uStack_150 = param_7;
        func_0x00010c10ff20(uVar8);
        _objc_release(uVar8);
        _objc_release(uStack_150);
        _objc_release(uStack_158);
        _objc_destroyWeak(auStack_148);
        _objc_destroyWeak(auStack_138);
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 6);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained(param_3);
  func_0x00010be8e840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106939600; end: 106939637;  */

void FUN_106939600(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8e840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


