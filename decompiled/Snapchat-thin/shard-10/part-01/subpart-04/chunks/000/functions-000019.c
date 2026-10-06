/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107990b24; end: 107990c17; -[SCDiscoverFeedOpenFriendProfileActionHandler friendActionSheetOpenProfile:] */

void FUN_107990b24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c0159e0();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10799118c; end: 1079911a3; -[SCDiscoverFeedOpenFriendProfileActionHandler presentingViewController] */

void FUN_10799118c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107991700; end: 10799170b; -[SCDiscoverFeedPostStoryActionHandler setPresentingViewController:] */

void FUN_107991700(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107991fbc; end: 10799253f; -[SCDiscoverFeedSectionHeaderActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_107991fbc(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0720c0();
  _objc_release(ppuVar2);
  if ((int)ppuVar3 == 0) {
    ppuVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c0720c0();
    _objc_release(ppuVar2);
    if ((int)ppuVar3 == 0) {
      ppuVar2 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x00010c0720c0();
      _objc_release(ppuVar2);
      if ((int)ppuVar3 != 0) {
        ppuVar3 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126c2400;
        _objc_opt_class(PTR_PTR_1126c2400);
        ppuVar8 = ppuVar3;
        _objc_opt_isKindOfClass(ppuVar3,puVar7);
        ppuVar2 = ppuVar3;
        if (((ulong)ppuVar8 & 1) == 0) {
          ppuVar2 = (undefined **)0x0;
        }
        _objc_retain(ppuVar2);
        _objc_release(ppuVar3);
        if (ppuVar2 != (undefined **)0x0) {
          func_0x00010be531a0(param_1);
        }
        ppuVar3 = (undefined **)PTR_PTR_1126ae6c0;
        func_0x00010c25bbc0(PTR_PTR_1126ae6c0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126ae6c8;
        _objc_alloc(PTR_PTR_1126ae6c8);
        puVar4 = puVar7;
        func_0x000108f58144();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03e6c0(puVar7);
        _objc_release(puVar4);
        puVar4 = PTR_PTR_1126ae6d0;
        _objc_alloc(PTR_PTR_1126ae6d0);
        func_0x00010c03e5a0();
        puVar5 = PTR_PTR_1126b1bb0;
        func_0x00010bf165e0(PTR_PTR_1126b1bb0);
        _objc_retainAutoreleasedReturnValue();
        iVar1 = (int)*(undefined8 *)(param_1 + 0xd8);
        func_0x00010c071800();
        if (iVar1 != 0) {
          uVar9 = *(undefined8 *)(param_1 + 0xe0);
          lVar6 = param_1 + 0x170;
          _objc_loadWeakRetained(lVar6);
          func_0x00010bf237e0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xd8));
          _objc_release(uVar9);
        }
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar7);
LAB_1079922e0:
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
LAB_1079922f0:
        uVar9 = 0;
        goto LAB_1079920d8;
      }
      ppuVar2 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x00010c0720c0();
      _objc_release(ppuVar2);
      if ((int)ppuVar3 == 0) {
        ppuVar2 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010c0720c0();
        _objc_release(ppuVar2);
        if ((int)ppuVar3 == 0) {
          ppuVar2 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar2;
          func_0x00010c0720c0();
          _objc_release(ppuVar2);
          if ((int)ppuVar3 != 0) {
            ppuVar3 = param_4;
            func_0x00010beee2e0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            ppuVar8 = ppuVar3;
            _objc_opt_isKindOfClass(ppuVar3,puVar7);
            ppuVar2 = ppuVar3;
            if (((ulong)ppuVar8 & 1) == 0) {
              ppuVar2 = (undefined **)0x0;
            }
            _objc_retain(ppuVar2);
            _objc_release(ppuVar3);
            ppuVar3 = ppuVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar2);
            puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
            ppuVar8 = ppuVar3;
            _objc_opt_isKindOfClass(ppuVar3,puVar7);
            ppuVar2 = ppuVar3;
            if (((ulong)ppuVar8 & 1) == 0) {
              ppuVar2 = (undefined **)0x0;
            }
            _objc_retain(ppuVar2);
            _objc_release(ppuVar3);
            ppuVar3 = ppuVar2;
            func_0x000108f54160();
            _objc_retainAutoreleasedReturnValue();
            _objc_initWeak(auStack_68,param_1);
            if (ppuVar3 != (undefined **)0x0) {
              uVar9 = *(undefined8 *)(param_1 + 0x10);
              func_0x00010c067fc0(ppuVar3);
              _objc_copyWeak(auStack_70,auStack_68);
              _objc_retain(ppuVar3);
              func_0x00010bf661c0(uVar9);
              _objc_release(ppuVar3);
              _objc_destroyWeak(auStack_70);
            }
            _objc_destroyWeak(auStack_68);
            goto LAB_1079922e0;
          }
          goto LAB_1079922f0;
        }
        ppuVar2 = &PTR____CFConstantStringClassReference_110ea77b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea77b8,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010b0aeb34();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010bded800(param_1);
      goto LAB_107992090;
    }
    func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x18));
  }
  else {
    ppuVar3 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c2400;
    _objc_opt_class(PTR_PTR_1126c2400);
    ppuVar8 = ppuVar3;
    _objc_opt_isKindOfClass(ppuVar3,puVar7);
    ppuVar2 = ppuVar3;
    if (((ulong)ppuVar8 & 1) == 0) {
      ppuVar2 = (undefined **)0x0;
    }
    _objc_retain(ppuVar2);
    _objc_release(ppuVar3);
    if (ppuVar2 != (undefined **)0x0) {
      func_0x00010beb9580(param_1);
    }
LAB_107992090:
    _objc_release(ppuVar2);
  }
  uVar9 = 1;
LAB_1079920d8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 1079925b8; end: 1079925bb; -[SCDiscoverFeedSectionHeaderActionHandler operaModalDismissalDidEnd] */

void FUN_1079925b8(void)

{
  return;
}



/* Entry: 107992954; end: 107992bc3; -[SCDiscoverFeedSectionHeaderActionHandler _showHideAlertForSection:] */

void FUN_107992954(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_70,param_1);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea77d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea77d8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_70);
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea77f8;
  uVar6 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea77f8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar2;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar5);
  _objc_release(ppuVar1);
  param_1 = param_1 + 0x170;
  _objc_loadWeakRetained();
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  _objc_retain(uVar6);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010be35c40();
  _objc_release(param_3);
  func_0x00010bf84b00(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}


