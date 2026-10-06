/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105fa39a0; end: 105fa3c37; -[SCMessageAccessoryPluginManager _ctaAccessoryForMessage:messageObservable:conversationInformationObservable:prioritizedPluginIdentifiers:currentPriorityIndex:] */

void FUN_105fa39a0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_6;
  func_0x00010bf529e0();
  puVar4 = PTR_PTR_1126ae6b8;
  if (param_7 < puVar1) {
    puVar1 = param_6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bf5d3c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (puVar2 == (undefined *)0x0) {
      func_0x00010bdf6440(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = puVar2;
      func_0x00010beed220(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_initWeak(auStack_68,param_1);
      _objc_copyWeak(auStack_78,auStack_68);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_retain(param_6);
      param_1 = puVar3;
      puStack_70 = param_7;
      func_0x00010bfb26a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    puVar4 = param_1;
  }
  else {
    puVar1 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105fa3c38; end: 105fa3d67;  */

void FUN_105fa3c38(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar3 = (undefined *)(param_1 + 0x50);
    _objc_loadWeakRetained(puVar3);
    puVar4 = puVar3;
    func_0x00010bdf6440();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126c6a20;
    _objc_alloc(PTR_PTR_1126c6a20);
    lVar1 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101d20(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c037600(puVar3);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126ae6b8;
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c2468a0(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105fa3d68; end: 105fa3f37; -[SCMessageAccessoryPluginManager _registerPlugins:] */

void FUN_105fa3d68(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_3);
      }
      lVar8 = *(long *)(lVar9 * 8);
      lVar4 = lVar8;
      func_0x00010c101d20();
      puVar5 = puVar1;
      if ((lVar4 - 1U < 2) || (puVar5 = puVar2, lVar4 == 0)) {
        func_0x00010bfe5ec0(lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(lVar8);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c1866e0(param_1);
  _objc_release(puVar5);
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c16fe20(param_1);
  _objc_release(puVar5);
  func_0x00010bea35a0(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = param_3;
  func_0x00010bf5d3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    lVar6 = param_3;
    func_0x00010bf194a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf529e0();
    _objc_release(lVar6);
    _objc_release(lVar3);
    if (lVar7 == 0) {
      return;
    }
  }
  else {
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010bf5d3c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea35c0(param_3);
  _objc_release(lVar6);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bf194a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea35c0(param_3);
  _objc_release(lVar6);
  _objc_release(lVar3);
  if ((*(long *)(param_3 + 0x48) != 0) && (*(long *)(param_3 + 0x50) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 0x28),PTR_s_next__112614028,PTR____kCFBooleanTrue_11034ab68
              );
    return;
  }
  return;
}



/* Entry: 105fa3f38; end: 105fa405b; -[SCMessageAccessoryPluginManager _setDependenciesForPlugins] */

void FUN_105fa3f38(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf5d3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bf194a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      return;
    }
  }
  else {
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010bf5d3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea35c0(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf194a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea35c0(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((*(long *)(param_1 + 0x48) != 0) && (*(long *)(param_1 + 0x50) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_next__112614028,PTR____kCFBooleanTrue_11034ab68
              );
    return;
  }
  return;
}



/* Entry: 105fa405c; end: 105fa4263; -[SCMessageAccessoryPluginManager _setDependenciesForPlugins:] */

void FUN_105fa405c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar10 = &uStack_130;
  lVar5 = param_3;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar15 = *plStack_120;
    do {
      puVar3 = PTR_s_presentingViewController_112621960;
      puVar2 = PTR_s_messageRenderingPluginManager_112610818;
      puVar1 = PTR_s_chatScrollHandler_11252e3f8;
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(param_3);
        }
        uVar13 = *(ulong *)(lStack_128 + lVar11 * 8);
        uVar6 = uVar13;
        _objc_opt_respondsToSelector(uVar13,puVar2);
        if ((uVar6 & 1) != 0) {
          func_0x00010c1c7000(uVar13);
        }
        uVar6 = uVar13;
        _objc_opt_respondsToSelector(uVar13,puVar1);
        if ((uVar6 & 1) != 0) {
          func_0x00010c17bd60(uVar13);
        }
        puVar4 = PTR_DAT_1126a5270;
        _objc_retain(uVar13);
        uVar7 = uVar13;
        func_0x00010010fab4(uVar13,puVar4);
        uVar6 = uVar13;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar13);
        if (uVar6 != 0) {
          func_0x00010c21b220(uVar13);
          uVar7 = uVar13;
          _objc_opt_respondsToSelector(uVar13,puVar3);
          if ((uVar7 & 1) != 0) {
            lVar8 = param_1 + 0x60;
            _objc_loadWeakRetained(lVar8);
            func_0x00010c1e1580(uVar13);
            _objc_release(lVar8);
          }
        }
        _objc_release(uVar6);
        lVar11 = lVar11 + 1;
      } while (lVar5 != lVar11);
      puVar10 = &uStack_130;
      lVar5 = param_3;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar10);
  puVar9 = puVar10;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (puVar9 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(puVar10);
      }
      puVar1 = PTR_DAT_1126a5270;
      lVar12 = *(long *)((long)puVar14 * 8);
      _objc_retain(lVar12);
      lVar8 = lVar12;
      func_0x00010010fab4(lVar12,puVar1);
      lVar11 = lVar12;
      if ((int)lVar8 == 0) {
        lVar11 = 0;
      }
      _objc_retain(lVar11);
      _objc_release(lVar12);
      if (lVar11 != 0) {
        func_0x00010bf841c0(lVar12);
      }
      _objc_release(lVar11);
      puVar14 = (undefined8 *)((long)puVar14 + 1);
    } while (puVar9 != puVar14);
    puVar9 = puVar10;
    func_0x00010bf52a60();
  }
  _objc_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)();
  return;
}



/* Entry: 105fa4264; end: 105fa439f; -[SCMessageAccessoryPluginManager _dismissPresentedViewsForPlugins:] */

void FUN_105fa4264(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      puVar3 = PTR_DAT_1126a5270;
      lVar7 = *(long *)(lVar8 * 8);
      _objc_retain(lVar7);
      lVar5 = lVar7;
      func_0x00010010fab4(lVar7,puVar3);
      lVar1 = lVar7;
      if ((int)lVar5 == 0) {
        lVar1 = 0;
      }
      _objc_retain(lVar1);
      _objc_release(lVar7);
      if (lVar1 != 0) {
        func_0x00010bf841c0(lVar7);
      }
      _objc_release(lVar1);
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)();
  return;
}



/* Entry: 105fa43a0; end: 105fa43ab; -[SCMessageAccessoryPluginManager ctaPlugins] */

void FUN_105fa43a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x78,1);
  return;
}



/* Entry: 105fa43ac; end: 105fa43b3; -[SCMessageAccessoryPluginManager setCtaPlugins:] */

void FUN_105fa43ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105fa43b4; end: 105fa43bf; -[SCMessageAccessoryPluginManager belowMessagePlugins] */

void FUN_105fa43b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x80,1);
  return;
}



/* Entry: 105fa43c0; end: 105fa43c7; -[SCMessageAccessoryPluginManager setBelowMessagePlugins:] */

void FUN_105fa43c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105fa43c8; end: 105fa449b; -[SCMessageAccessoryPluginManager .cxx_destruct] */

void FUN_105fa43c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
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



/* Entry: 105fa449c; end: 105fa44a7; +[SCCChatBotResponsePreviewView componentPath] */

undefined ** FUN_105fa449c(void)

{
  return &PTR____CFConstantStringClassReference_110e34a58;
}



/* Entry: 105fa44a8; end: 105fa44c7; -[SCCChatBotResponsePreviewView initWithViewModel:componentContext:runtime:] */

void FUN_105fa44a8(void)

{
  FUN_105fa46fc(PTR_PTR_1126ee950);
  return;
}



/* Entry: 105fa44c8; end: 105fa44fb; -[SCCChatBotResponsePreviewView setViewModel:] */

void FUN_105fa44c8(void)

{
  func_0x000105fa4710();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fa4720();
  func_0x000105fa4738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fa44fc; end: 105fa4533; -[SCCChatBotResponsePreviewView viewModel] */

void FUN_105fa44fc(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fa472c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fa4534; end: 105fa453f; +[SCCChatBotResponseShareView componentPath] */

undefined ** FUN_105fa4534(void)

{
  return &PTR____CFConstantStringClassReference_110e34a78;
}



/* Entry: 105fa4540; end: 105fa455f; -[SCCChatBotResponseShareView initWithViewModel:componentContext:runtime:] */

void FUN_105fa4540(void)

{
  FUN_105fa46fc(PTR_PTR_1126ee958);
  return;
}



/* Entry: 105fa4560; end: 105fa4593; -[SCCChatBotResponseShareView setViewModel:] */

void FUN_105fa4560(void)

{
  func_0x000105fa4710();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fa4720();
  func_0x000105fa4738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fa4594; end: 105fa45cb; -[SCCChatBotResponseShareView viewModel] */

void FUN_105fa4594(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fa472c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fa45cc; end: 105fa45d7; +[SCCChatBotResponseView componentPath] */

undefined ** FUN_105fa45cc(void)

{
  return &PTR____CFConstantStringClassReference_110e34a98;
}



/* Entry: 105fa45d8; end: 105fa45f7; -[SCCChatBotResponseView initWithViewModel:componentContext:runtime:] */

void FUN_105fa45d8(void)

{
  FUN_105fa46fc(PTR_PTR_1126ee960);
  return;
}



/* Entry: 105fa45f8; end: 105fa462b; -[SCCChatBotResponseView setViewModel:] */

void FUN_105fa45f8(void)

{
  func_0x000105fa4710();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fa4720();
  func_0x000105fa4738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fa462c; end: 105fa4663; -[SCCChatBotResponseView viewModel] */

void FUN_105fa462c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fa472c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fa4664; end: 105fa466f; +[SCCChatCancelledBotResponseView componentPath] */

undefined ** FUN_105fa4664(void)

{
  return &PTR____CFConstantStringClassReference_110e34ab8;
}



/* Entry: 105fa4670; end: 105fa468f; -[SCCChatCancelledBotResponseView initWithViewModel:componentContext:runtime:] */

void FUN_105fa4670(void)

{
  FUN_105fa46fc(PTR_PTR_1126ee968);
  return;
}



/* Entry: 105fa4690; end: 105fa46c3; -[SCCChatCancelledBotResponseView setViewModel:] */

void FUN_105fa4690(void)

{
  func_0x000105fa4710();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fa4720();
  func_0x000105fa4738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fa46c4; end: 105fa46fb; -[SCCChatCancelledBotResponseView viewModel] */

void FUN_105fa46c4(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fa472c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fa46fc; end: 105fa4757;  */

void FUN_105fa46fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 105fa4758; end: 105fa4763; +[SCCChatProxyImageView componentPath] */

undefined ** FUN_105fa4758(void)

{
  return &PTR____CFConstantStringClassReference_110e34ad8;
}



/* Entry: 105fa4764; end: 105fa4797; -[SCCChatProxyImageView initWithViewModel:componentContext:runtime:] */

void FUN_105fa4764(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee970;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105fa4798; end: 105fa47e7; -[SCCChatProxyImageView setViewModel:] */

void FUN_105fa4798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fa47e8; end: 105fa482b; -[SCCChatProxyImageView viewModel] */

void FUN_105fa47e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fa482c; end: 105fa486b; -[SCCChatBotResponseContext initWithContent:] */

void FUN_105fa482c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee978;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105fa486c; end: 105fa487f; +[SCCChatBotResponseContext valdiMarshallableObjectDescriptor] */

void FUN_105fa486c(undefined8 *param_1)

{
  *param_1 = &PTR_s_content_1109022c0;
  param_1[1] = &PTR_s_SCBridgeObservable_110902338;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa4880; end: 105fa48a7; -[SCCChatBotResponsePreviewViewModel initWithContentBytes:messageSenderUserId:] */

void FUN_105fa4880(void)

{
  func_0x000105fa49c0(PTR_PTR_1126ee980);
  func_0x000105fa49a8();
  return;
}



/* Entry: 105fa48a8; end: 105fa48b7; +[SCCChatBotResponsePreviewViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fa48a8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110902358;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa48b8; end: 105fa48df; -[SCCChatBotResponseShareContext initWithBotResponseContext:] */

void FUN_105fa48b8(void)

{
  func_0x000105fa49c0(PTR_PTR_1126ee988);
  func_0x000105fa49a8();
  return;
}



/* Entry: 105fa48e0; end: 105fa48f3; +[SCCChatBotResponseShareContext valdiMarshallableObjectDescriptor] */

void FUN_105fa48e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109023a0;
  param_1[1] = &PTR_DAT_1109023e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa48f4; end: 105fa491b; -[SCCChatBotResponseShareViewModel initWithOriginalSenderUserId:] */

void FUN_105fa48f4(void)

{
  func_0x000105fa49c0(PTR_PTR_1126ee990);
  func_0x000105fa49a8();
  return;
}



/* Entry: 105fa491c; end: 105fa492b; +[SCCChatBotResponseShareViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fa491c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109023f8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa492c; end: 105fa4953; -[SCCChatBotResponseViewModel initWithMessageSenderUserId:] */

void FUN_105fa492c(void)

{
  func_0x000105fa49c0(PTR_PTR_1126ee998);
  func_0x000105fa49a8();
  return;
}



/* Entry: 105fa4954; end: 105fa4963; +[SCCChatBotResponseViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fa4954(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110902428;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa4964; end: 105fa4997; -[SCCChatCancelledBotResponseViewModel init] */

void FUN_105fa4964(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee9a0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105fa4998; end: 105fa49e7; +[SCCChatCancelledBotResponseViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fa4998(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddd1c60;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa49e8; end: 105fa4a93; -[SCCImageFormat__Enum init] */

undefined ** FUN_105fa49e8(undefined **param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110de1538;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110df9e38;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110dc1398;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_40,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_105fa4a94;
  puStack_58 = PTR_PTR_1126ee9a8;
  ppuVar2 = &puStack_60;
  puStack_60 = puVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(ppuVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  return ppuVar2;
}



/* Entry: 105fa4a94; end: 105fa4acf; -[SCCApsPadDimensions initWithWidth:height:] */

void FUN_105fa4a94(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee9a8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105fa4ad0; end: 105fa4adf; +[SCCApsPadDimensions valdiMarshallableObjectDescriptor] */

void FUN_105fa4ad0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_width_110902458;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa4ae0; end: 105fa4b03; -[SCCApsParams init] */

void FUN_105fa4ae0(void)

{
  func_0x000105fa4bac(PTR_PTR_1126ee9b0);
  return;
}



/* Entry: 105fa4b04; end: 105fa4b17; +[SCCApsParams valdiMarshallableObjectDescriptor] */

void FUN_105fa4b04(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109024a0;
  param_1[1] = &PTR_DAT_110902560;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa4b18; end: 105fa4b3b; -[SCCChatProxyImageContext init] */

void FUN_105fa4b18(void)

{
  func_0x000105fa4bac(PTR_PTR_1126ee9b8);
  return;
}



/* Entry: 105fa4b3c; end: 105fa4b4b; +[SCCChatProxyImageContext valdiMarshallableObjectDescriptor] */

void FUN_105fa4b3c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110902578;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa4b4c; end: 105fa4b97; -[SCCChatProxyImageViewModel initWithThumbnailUrl:imageViewMaxWidth:imageViewMaxHeight:placeholderWidth:placeholderHeight:apsParams:] */

void FUN_105fa4b4c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee9c0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105fa4b98; end: 105fa4bdb; +[SCCChatProxyImageViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fa4b98(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109025c0;
  param_1[1] = &PTR_DAT_110902698;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa4bdc; end: 105fa4de3;  */

void FUN_105fa4bdc(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  if (param_2 == 0) {
    uVar8 = 0;
  }
  else {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_2 == 0) {
      uVar8 = 0;
    }
    else {
      _objc_retain(param_3);
      lVar1 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c08fa60();
      if (lVar2 == 0) {
        uVar8 = 0;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_alloc();
        func_0x00010bff6b20();
        if (puVar3 == (undefined *)0x0) {
          uVar8 = 0;
        }
        else {
          puVar4 = PTR_PTR_1126afeb0;
          _objc_alloc();
          func_0x00010c04e0a0();
          puVar5 = puVar4;
          func_0x00010011df08();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126afeb8;
          _objc_alloc(PTR_PTR_1126afeb8);
          func_0x00010bf604c0(PTR_PTR_1126afec0);
          func_0x00010bff1c00(0,0,0,0,0,param_1,puVar6);
          uVar7 = param_3;
          func_0x00010c269d40(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c0f3e00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
        _objc_release(puVar3);
      }
      _objc_release(lVar1);
      _objc_release(param_3);
    }
    _objc_release(param_2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 105fa4de4; end: 105fa4def; +[SCCChatAdShareView componentPath] */

undefined ** FUN_105fa4de4(void)

{
  return &PTR____CFConstantStringClassReference_110e34b38;
}



/* Entry: 105fa4df0; end: 105fa4e23; -[SCCChatAdShareView initWithViewModel:componentContext:runtime:] */

void FUN_105fa4df0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee9c8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105fa4e24; end: 105fa4e73; -[SCCChatAdShareView setViewModel:] */

void FUN_105fa4e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fa4e74; end: 105fa4eb7; -[SCCChatAdShareView viewModel] */

void FUN_105fa4e74(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fa4eb8; end: 105fa4ebf; -[SCCChatAdMediaType__Enum init] */

void FUN_105fa4eb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 105fa4ec0; end: 105fa4eff; -[SCCChatAdShareMediaData initWithThumbnailMediaType:] */

void FUN_105fa4ec0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee9d0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105fa4f00; end: 105fa4f13; +[SCCChatAdShareMediaData valdiMarshallableObjectDescriptor] */

void FUN_105fa4f00(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109026a8;
  param_1[1] = &PTR_DAT_110902708;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa4f14; end: 105fa4f37; -[SCCChatAdShareViewContext init] */

void FUN_105fa4f14(void)

{
  func_0x000105fa4f88(PTR_PTR_1126ee9d8);
  return;
}



/* Entry: 105fa4f38; end: 105fa4f4b; +[SCCChatAdShareViewContext valdiMarshallableObjectDescriptor] */

void FUN_105fa4f38(undefined8 *param_1)

{
  *param_1 = &PTR_s_mediaData_110902720;
  param_1[1] = &PTR_s_SCBridgeObservable_1109027b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa4f4c; end: 105fa4f6f; -[SCCChatAdShareViewModel init] */

void FUN_105fa4f4c(void)

{
  func_0x000105fa4f88(PTR_PTR_1126ee9e0);
  return;
}



/* Entry: 105fa4f70; end: 105fa4fab; +[SCCChatAdShareViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fa4f70(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddd1c78;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa4fac; end: 105fa4fb7; +[SCCChatFriendingCard componentPath] */

undefined ** FUN_105fa4fac(void)

{
  return &PTR____CFConstantStringClassReference_110e34b58;
}



/* Entry: 105fa4fb8; end: 105fa4feb; -[SCCChatFriendingCard initWithViewModel:componentContext:runtime:] */

void FUN_105fa4fb8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee9e8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105fa4fec; end: 105fa503b; -[SCCChatFriendingCard setViewModel:] */

void FUN_105fa4fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fa503c; end: 105fa507f; -[SCCChatFriendingCard viewModel] */

void FUN_105fa503c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fa5080; end: 105fa5087; -[SCCChatFriendingCardSource__Enum init] */

void FUN_105fa5080(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,1);
  return;
}



/* Entry: 105fa5088; end: 105fa511f; -[SCCChatFriendingCardContext initWithUserProvider:openGroupProfile:] */

undefined8 *
FUN_105fa5088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126ee9f0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105fa5120; end: 105fa5133; +[SCCChatFriendingCardContext valdiMarshallableObjectDescriptor] */

void FUN_105fa5120(undefined8 *param_1)

{
  *param_1 = &PTR_s_userProvider_1109027e0;
  param_1[1] = &PTR_s_SCComposerPeopleUserProviding_1109028d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa5134; end: 105fa516f; -[SCCChatFriendingCardViewModel initWithUserIds:source:] */

void FUN_105fa5134(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee9f8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105fa5170; end: 105fa5193; +[SCCChatFriendingCardViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fa5170(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110902918;
  param_1[1] = &PTR_DAT_110902960;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa5194; end: 105fa54b3; -[SCChatMediaMessagePlugin initWithCurrentUserId:conversationActionHandler:chatContentDelivery:chatMediaFetcher:valdiRuntimeProvider:playerProvider:drawerMediaSender:composerChatMediaVideoProvider:chatMessageDisplayStateLogger:messagingExperimentService:messagingMessageProvider:configProvider:scwStateManager:] */

undefined8 *
FUN_105fa5194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126eea00;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0x12) = 0;
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105fa54b4; end: 105fa5c5f; -[SCChatMediaMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

undefined * FUN_105fa54b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined **ppuVar17;
  ulong uVar18;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined1 auStack_250 [8];
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined1 auStack_220 [8];
  undefined1 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined1 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 uStack_150;
  undefined1 auStack_148 [8];
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
  _objc_retain(param_4);
  puVar15 = PTR_PTR_1126c6a30;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  FUN_1065c2f88();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010c205000(puVar15);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221d20(puVar15);
  _objc_release(uVar3);
  lVar14 = *(long *)(param_1 + 0x58);
  _objc_retain(lVar14);
  lVar4 = lVar14;
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ba150;
  func_0x00010c22e480();
  lVar6 = lVar4;
  func_0x00010bf490e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010be21140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  func_0x00010c0d9840(lVar7);
  _objc_initWeak(auStack_148,param_1);
  _objc_retain(lVar4);
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar6 = lVar4;
  func_0x00010c0c72c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar13 = *plStack_130;
    do {
      lVar16 = 0;
      do {
        if (*plStack_130 != lVar13) {
          _objc_enumerationMutation(lVar6);
        }
        uVar18 = *(ulong *)(lStack_138 + lVar16 * 8);
        uVar10 = uVar18;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c08fa60();
        if ((uVar11 != 0) &&
           ((uVar11 = uVar18, func_0x00010c0c6c20(), uVar11 - 7 < 0xf || (uVar11 < 6 && uVar11 != 3)
            ))) {
          _objc_release(uVar10);
          func_0x00010c0c5180(uVar18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar8);
          uVar10 = uVar18;
        }
        _objc_release(uVar10);
        lVar16 = lVar16 + 1;
      } while (lVar9 != lVar16);
      lVar9 = lVar6;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(lVar6);
  _objc_release(lVar4);
  lVar6 = lVar4;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  FUN_105fa5c60();
  if ((int)lVar9 == 0) {
    ppuVar17 = (undefined **)0x0;
  }
  else {
    puVar12 = puVar8;
    func_0x00010bf529e0();
    ppuVar17 = (undefined **)(ulong)(puVar12 != (undefined *)0x0);
  }
  _objc_release(lVar6);
  puVar12 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  uStack_168 = 0x105fa5cec;
  puStack_160 = &UNK_1109029a0;
  _objc_retain(lVar14);
  uStack_150 = SUB81(puVar5,0);
  lVar6 = lVar7;
  lStack_158 = lVar14;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010bf870a0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar9;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5760(puVar15);
  _objc_release(lVar13);
  _objc_release(lVar9);
  puStack_1a0 = puVar12;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_105fa5e90;
  puStack_188 = &UNK_1109029d0;
  _objc_retain(lVar14);
  lVar9 = lVar7;
  lStack_180 = lVar14;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar9;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = lVar13;
  func_0x00010c272120(lVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c70a0(puVar15);
  _objc_release(lVar9);
  uVar3 = param_4;
  func_0x0001070b1c70();
  puStack_1d8 = puVar12;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_105fa5ef0;
  puStack_1c0 = &UNK_110902a00;
  _objc_copyWeak(auStack_1a8,auStack_148);
  _objc_retain(param_3);
  uStack_1b8 = param_3;
  _objc_retain(param_4);
  uStack_1b0 = param_4;
  func_0x00010c1d3960(puVar15);
  puStack_210 = puVar12;
  uStack_208 = 0xc2000000;
  pcStack_200 = FUN_105fa5f58;
  puStack_1f8 = &UNK_1108488f8;
  _objc_copyWeak(auStack_1e8,auStack_148);
  _objc_retain(lVar4);
  lStack_1f0 = lVar4;
  uStack_1e0 = (char)uVar3;
  func_0x00010c1e15c0(puVar15);
  puStack_248 = puVar12;
  uStack_240 = 0xc2000000;
  uStack_238 = 0x105fa5fd8;
  puStack_230 = &UNK_1108488f8;
  _objc_copyWeak(auStack_220,auStack_148);
  _objc_retain(lVar4);
  lStack_228 = lVar4;
  uStack_218 = (char)uVar3;
  func_0x00010c21be80(puVar15);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18ff00(puVar15);
  _objc_release(uVar3);
  lVar9 = lVar4;
  func_0x00010bf490e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010beea000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c7240(puVar15);
  _objc_release(lVar16);
  _objc_release(lVar9);
  if ((int)ppuVar17 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    puStack_270 = puVar12;
    uStack_268 = 0xc2000000;
    pcStack_260 = FUN_105fa6058;
    puStack_258 = &UNK_110845cb0;
    ppuVar17 = &puStack_270;
    _objc_copyWeak(auStack_250,auStack_148);
    func_0x00010bf1a500(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f7fe0(puVar15);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_250);
  }
  func_0x00010be21300();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c67d8;
  _objc_alloc(PTR_PTR_1126c67d8);
  puVar12 = PTR_PTR_1126c6a38;
  func_0x00010bf44480(PTR_PTR_1126c6a38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000660(puVar5);
  _objc_release(puVar12);
  _objc_release(param_1);
  _objc_release(lStack_228);
  _objc_destroyWeak(auStack_220);
  _objc_release(lStack_1f0);
  _objc_destroyWeak(auStack_1e8);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1b8);
  _objc_destroyWeak(auStack_1a8);
  _objc_release(lVar13);
  _objc_release(lStack_180);
  _objc_release(lVar6);
  _objc_release(lStack_158);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_148);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar14);
  _objc_release(uVar2);
  _objc_release(puVar15);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar17 + 4);
  _objc_destroyWeak(auStack_220);
  _objc_destroyWeak(auStack_1e8);
  _objc_destroyWeak(auStack_1a8);
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  _objc_retain();
  uVar3 = param_3;
  func_0x00010bf4ce20();
  if ((int)uVar3 == 3) {
    puVar15 = (undefined *)0x1;
  }
  else {
    uVar3 = param_3;
    func_0x00010bf4ce20();
    if ((int)uVar3 == 7) {
      uVar3 = param_3;
      func_0x00010c242c40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c131be0();
      puVar15 = (undefined *)(ulong)((int)uVar2 == 0xc);
      _objc_release(uVar3);
    }
    else {
      puVar15 = (undefined *)0x0;
    }
  }
  _objc_release(param_3);
  return puVar15;
}



/* Entry: 105fa5c60; end: 105fa5dab;  */

bool FUN_105fa5c60(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf4ce20();
  if ((int)uVar2 == 3) {
    bVar1 = true;
  }
  else {
    uVar2 = param_1;
    func_0x00010bf4ce20();
    if ((int)uVar2 == 7) {
      uVar2 = param_1;
      func_0x00010c242c40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c131be0();
      bVar1 = (int)uVar3 == 0xc;
      _objc_release(uVar2);
    }
    else {
      bVar1 = false;
    }
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 105fa5dac; end: 105fa5e8f;  */

void FUN_105fa5dac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf490e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf026e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf50280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c271b60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((*(char *)(param_1 + 0x28) == '\x01') &&
     (uVar1 = param_2, func_0x00010c22e460(), (int)uVar1 != 0)) {
    func_0x00010c1b0880(uVar4);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105fa5e90; end: 105fa5eef;  */

void FUN_105fa5e90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cbe00(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15dfc0();
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105fa5ef0; end: 105fa5f57;  */

void FUN_105fa5ef0(undefined8 param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_2 = param_2 + 0x30;
  _objc_loadWeakRetained(param_2);
  func_0x00010bec1040(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105fa5f58; end: 105fa6057;  */

void FUN_105fa5f58(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf490e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf50280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2dd40(lVar1,param_2,uVar2,uVar3,*(undefined1 *)(param_1 + 0x30));
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fa6058; end: 105fa6097;  */

void FUN_105fa6058(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105fa6098; end: 105fa61b3; -[SCChatMediaMessagePlugin setActiveConversationIdObservable:] */

void FUN_105fa6098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf870a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105fa61b4; end: 105fa62a3;  */

void FUN_105fa61b4(long param_1,undefined8 param_2)

{
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
  pcStack_38 = FUN_105fa62a4;
  uStack_30 = 0x105fa62b4;
  uStack_28 = 0;
  func_0x00010c0bf0a0(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27860();
  _objc_release(param_1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 105fa62a4; end: 105fa62bb;  */

void FUN_105fa62a4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105fa62bc; end: 105fa62f3;  */

void FUN_105fa62bc(long param_1,undefined8 param_2)

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



/* Entry: 105fa62f4; end: 105fa6323; -[SCChatMediaMessagePlugin identifier] */

void FUN_105fa62f4(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eeb9d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eeb9d8);
  return;
}



/* Entry: 105fa6324; end: 105fa632b; -[SCChatMediaMessagePlugin pluginType] */

undefined8 FUN_105fa6324(void)

{
  return 0;
}



/* Entry: 105fa632c; end: 105fa6333; -[SCChatMediaMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:] */

void FUN_105fa632c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee7610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__valdiContextParamsForQuotedMess_112597728,param_3,param_4,0);
  return;
}



/* Entry: 105fa6334; end: 105fa633b; -[SCChatMediaMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:] */

void FUN_105fa6334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee7610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__valdiContextParamsForQuotedMess_112597728,param_3,param_4,1);
  return;
}



/* Entry: 105fa633c; end: 105fa6353; -[SCChatMediaMessagePlugin quotedRenderingStyleForMessage:] */

ulong FUN_105fa633c(ulong param_1)

{
  func_0x00010c22f500();
  return param_1 & 0xffffffff;
}



/* Entry: 105fa6354; end: 105fa6447; -[SCChatMediaMessagePlugin shouldDisplayContextualHeaderForMessage:] */

bool FUN_105fa6354(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c11ec40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x58);
  func_0x00010c0cbe00(lVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar2 != 0) {
    lVar2 = lVar3;
    func_0x00010c11ec20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar4 == 1) {
      lVar2 = lVar3;
      func_0x00010c11ec00(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf44960();
      _objc_release(lVar2);
      bVar1 = (int)lVar4 - 1U < 2;
      goto LAB_105fa642c;
    }
  }
  bVar1 = false;
LAB_105fa642c:
  _objc_release(lVar3);
  return bVar1;
}



/* Entry: 105fa6448; end: 105fa6713; -[SCChatMediaMessagePlugin contextualHeaderForMessage:conversationParticipants:] */

void FUN_105fa6448(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c22f500();
  if ((int)lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x58);
    func_0x00010c0cbe00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c11ec00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010bf44960();
    _objc_release(puVar6);
    iVar7 = (int)puVar3;
    if (iVar7 - 1U < 2) {
      puVar3 = puVar2;
      func_0x00010bf374c0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      if ((int)puVar6 == 0) {
        puVar8 = puVar2;
        func_0x00010bf374c0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_4;
        func_0x0001070b2c1c(param_4,puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (iVar7 == 2) {
          if (lVar1 == 0) {
            func_0x000105fa832c();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar8;
          }
          else {
            func_0x000105fa8314();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar1;
            func_0x00010bcbeb70();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00(puVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar4);
            _objc_release(puVar8);
          }
          func_0x000105fa832c();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          if (lVar1 == 0) {
            func_0x000105fa82e4();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar8;
          }
          else {
            func_0x000105fa82cc();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar1;
            func_0x00010bcbeb70();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00(puVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar4);
            _objc_release(puVar8);
          }
          func_0x000105fa82e4();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(lVar1);
      }
      else {
        if (iVar7 == 2) {
          func_0x000105fa82fc();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x000105fa82b4();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar8 = (undefined *)0x0;
      }
      puVar6 = PTR_PTR_1126c68c0;
      _objc_alloc(PTR_PTR_1126c68c0);
      puVar5 = PTR_PTR_1126c68c8;
      func_0x00010c131980(PTR_PTR_1126c68c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c051540(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar8);
      _objc_release(puVar3);
    }
    else {
      puVar6 = (undefined *)0x0;
    }
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105fa6714; end: 105fa671b; -[SCChatMediaMessagePlugin dismissPresentedView] */

void FUN_105fa6714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x68),PTR_s_dismiss_1125be578);
  return;
}



/* Entry: 105fa671c; end: 105fa67d3; -[SCChatMediaMessagePlugin savableDataModelsForMessage:] */

void FUN_105fa671c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c72c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105fa67d4;
    puStack_40 = &UNK_110902a30;
    lVar1 = lVar2;
    lStack_38 = param_1;
    func_0x00010bf43280(lVar2,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105fa67d4; end: 105fa68b7;  */

void FUN_105fa67d4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  puVar3 = PTR_PTR_1126c6a40;
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_2;
    func_0x00010c0c5180(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07d000();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (((ulong)puVar3 & 1) != 0) {
      uVar5 = 0;
      goto LAB_105fa6898;
    }
  }
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c14b760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
LAB_105fa6898:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105fa68b8; end: 105fa6a3f; -[SCChatMediaMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:] */

uint FUN_105fa68b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0cbe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c0cb8c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x000105fa6970(uVar1);
  uVar5 = uVar1;
  func_0x00010c07fd80(uVar1);
  _objc_release(uVar1);
  return ((uint)uVar3 | (uint)uVar4) & (uint)uVar2 & ((uint)uVar5 ^ 1);
}



/* Entry: 105fa6a40; end: 105fa6af7; -[SCChatMediaMessagePlugin canForwardMessageFromCTA:] */

uint FUN_105fa6a40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0cbe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c0cb8c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x000105fa6970(uVar1);
  uVar5 = uVar1;
  func_0x00010c07fd80(uVar1);
  _objc_release(uVar1);
  return ((uint)uVar3 | (uint)uVar4) & (uint)uVar2 & ((uint)uVar5 ^ 1);
}



/* Entry: 105fa6af8; end: 105fa6ca7; -[SCChatMediaMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:] */

void FUN_105fa6af8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c0cbe00(uVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c2a5040(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar3 = uVar2;
  dVar7 = param_1;
  func_0x00010bfe0640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  param_1 = param_1 / dVar7;
  _objc_release(uVar3);
  _objc_release(uVar1);
  if (NAN(param_1)) {
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x00010becbc80(param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c6898;
    puVar4 = PTR_PTR_1126b0648;
    _objc_alloc(PTR_PTR_1126b0648);
    func_0x00010c01cb60();
    func_0x00010c08f300(puVar5,param_3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126c68a0;
    if (2.0 <= param_1) {
      func_0x00010bfbb860(param_1,PTR_PTR_1126c68a0,param_3,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2990e0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR_PTR_1126c68a8;
    _objc_alloc(PTR_PTR_1126c68a8);
    func_0x00010c039de0();
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(param_2);
  }
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105fa6ca8; end: 105fa6e77; -[SCChatMediaMessagePlugin _thumbnailObservableForMessage:] */

void FUN_105fa6ca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar3);
  func_0x00010c0cbe00(uVar4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126ae6b8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105fa6d88;
  puStack_48 = &UNK_11084f340;
  uStack_40 = uVar3;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x00010bf54280(puVar2,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


