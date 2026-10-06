/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10635ddc0; end: 10635def7; -[SCOperaPlaylistPluginsManager setOperaControlling:] */

undefined1 * FUN_10635ddc0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar10 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar10);
  lVar1 = lVar10;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  puVar6 = PTR_s_setOperaControlling__112652f18;
  while (PTR_s_setOperaControlling__112652f18 = puVar6, lVar1 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(lVar10);
      }
      uVar12 = *(ulong *)(lVar14 * 8);
      uVar2 = uVar12;
      _objc_opt_respondsToSelector(uVar12,puVar6);
      if ((uVar2 & 1) != 0) {
        func_0x00010c1d53c0(uVar12);
      }
      lVar14 = lVar14 + 1;
    } while (lVar1 != lVar14);
    lVar1 = lVar10;
    func_0x00010bf52a60();
    puVar6 = PTR_s_setOperaControlling__112652f18;
  }
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar11 = *(long *)(param_3 + 0x18);
  _objc_retain(lVar11);
  lVar1 = lVar11;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_250;
    do {
      puVar6 = PTR_s_teardown_112678538;
      lVar10 = 0;
      do {
        if (*plStack_250 != lVar9) {
          _objc_enumerationMutation(lVar11);
        }
        uVar12 = *(ulong *)(lStack_258 + lVar10 * 8);
        uVar2 = uVar12;
        _objc_opt_respondsToSelector(uVar12,puVar6);
        if ((uVar2 & 1) != 0) {
          func_0x00010c26ac40(uVar12);
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar11;
      puVar8 = &uStack_260;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar11);
  func_0x00010c0c6440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ac40();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  puVar3 = (undefined1 *)puVar8;
  func_0x00010bef9860(puVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(param_3 + 8);
  _objc_retain(lVar10);
  lVar1 = lVar10;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(lVar10);
      }
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar13 = *(long *)(lVar14 * 8);
      _objc_opt_class();
      lVar4 = lVar13;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar13;
      func_0x00010c101280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3580(puVar3);
      _objc_release(puVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      puVar6 = PTR_DAT_1126a53a0;
      _objc_retain(lVar13);
      lVar5 = lVar13;
      func_0x00010010fab4(lVar13,puVar6);
      lVar4 = lVar13;
      if ((int)lVar5 == 0) {
        lVar4 = 0;
      }
      _objc_retain(lVar4);
      _objc_release(lVar13);
      if (lVar4 != 0) {
        puVar7 = puVar3;
        func_0x00010bef9860(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0af5e0(lVar13);
        _objc_release(puVar7);
      }
      _objc_release(lVar4);
      lVar14 = lVar14 + 1;
    } while (lVar1 != lVar14);
    lVar1 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  puVar7 = (undefined1 *)puVar8;
  func_0x00010bef9860(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  lVar10 = *(long *)(param_3 + 0x10);
  _objc_retain(lVar10);
  lVar1 = lVar10;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(lVar10);
      }
      func_0x00010c0ab340(puVar7);
      lVar14 = lVar14 + 1;
    } while (lVar1 != lVar14);
    lVar1 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  puVar3 = (undefined1 *)puVar8;
  func_0x00010bef9860(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  lVar10 = *(long *)(param_3 + 0x30);
  _objc_retain(lVar10);
  lVar1 = lVar10;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(lVar10);
      }
      func_0x00010c0ab340(puVar3);
      lVar14 = lVar14 + 1;
    } while (lVar1 != lVar14);
    lVar1 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return (undefined1 *)puVar8;
  }
  ___stack_chk_fail();
  return *(undefined1 **)((long)puVar8 + 0x28);
}



/* Entry: 10635def8; end: 10635e037; -[SCOperaPlaylistPluginsManager teardown] */

undefined1 * FUN_10635def8(undefined1 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar9 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar9);
  lVar1 = lVar9;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar12 = *plStack_120;
    do {
      puVar6 = PTR_s_teardown_112678538;
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar9);
        }
        uVar11 = *(ulong *)(lStack_128 + lVar14 * 8);
        uVar2 = uVar11;
        _objc_opt_respondsToSelector(uVar11,puVar6);
        if ((uVar2 & 1) != 0) {
          func_0x00010c26ac40(uVar11);
        }
        lVar14 = lVar14 + 1;
      } while (lVar1 != lVar14);
      lVar1 = lVar9;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar9);
  func_0x00010c0c6440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ac40();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  puVar3 = (undefined1 *)puVar8;
  func_0x00010bef9860(puVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = *(long *)(param_1 + 8);
  _objc_retain(lVar14);
  lVar1 = lVar14;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar14);
      }
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar13 = *(long *)(lVar10 * 8);
      _objc_opt_class();
      lVar4 = lVar13;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar13;
      func_0x00010c101280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3580(puVar3);
      _objc_release(puVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      puVar6 = PTR_DAT_1126a53a0;
      _objc_retain(lVar13);
      lVar5 = lVar13;
      func_0x00010010fab4(lVar13,puVar6);
      lVar4 = lVar13;
      if ((int)lVar5 == 0) {
        lVar4 = 0;
      }
      _objc_retain(lVar4);
      _objc_release(lVar13);
      if (lVar4 != 0) {
        puVar7 = puVar3;
        func_0x00010bef9860(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0af5e0(lVar13);
        _objc_release(puVar7);
      }
      _objc_release(lVar4);
      lVar10 = lVar10 + 1;
    } while (lVar1 != lVar10);
    lVar1 = lVar14;
    func_0x00010bf52a60();
  }
  _objc_release(lVar14);
  puVar7 = (undefined1 *)puVar8;
  func_0x00010bef9860(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  lVar14 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar14);
  lVar1 = lVar14;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar14);
      }
      func_0x00010c0ab340(puVar7);
      lVar10 = lVar10 + 1;
    } while (lVar1 != lVar10);
    lVar1 = lVar14;
    func_0x00010bf52a60();
  }
  _objc_release(lVar14);
  puVar3 = (undefined1 *)puVar8;
  func_0x00010bef9860(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  lVar14 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar14);
  lVar1 = lVar14;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar14);
      }
      func_0x00010c0ab340(puVar3);
      lVar10 = lVar10 + 1;
    } while (lVar1 != lVar10);
    lVar1 = lVar14;
    func_0x00010bf52a60();
  }
  _objc_release(lVar14);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return (undefined1 *)puVar8;
  }
  ___stack_chk_fail();
  return *(undefined1 **)((long)puVar8 + 0x28);
}



/* Entry: 10635e038; end: 10635e3ef; -[SCOperaPlaylistPluginsManager logShakeToReportState:] */

long FUN_10635e038(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00010bef9860(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 8);
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar10 = *(long *)(lVar9 * 8);
      _objc_opt_class();
      lVar3 = lVar10;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar10;
      func_0x00010c101280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3580(lVar8);
      _objc_release(puVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      puVar5 = PTR_DAT_1126a53a0;
      _objc_retain(lVar10);
      lVar4 = lVar10;
      func_0x00010010fab4(lVar10,puVar5);
      lVar3 = lVar10;
      if ((int)lVar4 == 0) {
        lVar3 = 0;
      }
      _objc_retain(lVar3);
      _objc_release(lVar10);
      if (lVar3 != 0) {
        lVar4 = lVar8;
        func_0x00010bef9860(lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0af5e0(lVar10);
        _objc_release(lVar4);
      }
      _objc_release(lVar3);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  lVar7 = param_3;
  func_0x00010bef9860(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar8);
  lVar2 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      func_0x00010c0ab340(lVar7);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  lVar8 = param_3;
  func_0x00010bef9860(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      func_0x00010c0ab340(lVar8);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(long *)(param_3 + 0x28);
}



/* Entry: 10635e3f0; end: 10635e3f7; -[SCOperaPlaylistPluginsManager mediaTypeConfigurations] */

undefined8 FUN_10635e3f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10635e3f8; end: 10635e3ff; -[SCOperaPlaylistPluginsManager extraPropertiesProviders] */

undefined8 FUN_10635e3f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10635e400; end: 10635e407; -[SCOperaPlaylistPluginsManager mediaResolver] */

undefined8 FUN_10635e400(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10635e408; end: 10635e473; -[SCOperaPlaylistPluginsManager .cxx_destruct] */

void FUN_10635e408(long param_1)

{
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



/* Entry: 10635e474; end: 10635e603; -[SCOperaPlaylistViewModelsManipulator manipulateWithPreviousNode:currentNode:] */

void FUN_10635e474(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c0d9820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == param_4) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010c1125e0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != param_4;
    _objc_release();
  }
  _objc_release(lVar2);
  if ((param_4 != param_3) && (!bVar1)) {
    lVar2 = param_3;
    func_0x00010c0d9ae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cd3a0(param_4,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010c1cd3a0(param_3,param_2,0);
    lVar2 = param_3;
    func_0x00010c1126e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e25c0(param_4,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010c1e25c0(param_3,param_2,0);
    lVar2 = param_4;
    func_0x00010c1126e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cd3a0();
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c1126e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cd3a0();
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c0d9ae0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e25c0();
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0d9ae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e25c0();
    _objc_release(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10635e604; end: 10635e697; -[SCOperaPlaybackProgressStateMachineImpl init] */

undefined1 * FUN_10635e604(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0f40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 2;
    puVar2 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar3);
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 10635e698; end: 10635e6ff; -[SCOperaPlaybackProgressStateMachineImpl didChangeState:] */

void FUN_10635e698(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010be455a0();
  if ((int)lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_3;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10635e700; end: 10635e71b; -[SCOperaPlaybackProgressStateMachineImpl _isValidUpdateWithNewState:] */

bool FUN_10635e700(long param_1,undefined8 param_2,long param_3)

{
  return param_3 != *(long *)(param_1 + 8) && (param_3 != 1 || *(long *)(param_1 + 8) != 2);
}



/* Entry: 10635e71c; end: 10635e723; -[SCOperaPlaybackProgressStateMachineImpl currentStateObservable] */

undefined8 FUN_10635e71c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10635e724; end: 10635e753; -[SCOperaPlaybackProgressStateMachineImpl .cxx_destruct] */

void FUN_10635e724(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10635e754; end: 10635e7ef; -[SCAssetCreatorWithTimeout initWithMetricLogger:] */

undefined1 * FUN_10635e754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0f48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    uVar2 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10635e7f0; end: 10635e91f; -[SCAssetCreatorWithTimeout createAssetWithTimeoutInSecs:url:options:] */

void FUN_10635e7f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c077480();
  if ((int)puVar3 == 0) {
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    func_0x00010c057ae0();
    _objc_release(param_5);
  }
  else {
    func_0x00010028941c();
    uVar1 = 0;
    _dispatch_semaphore_create(0);
    func_0x00010bdeae20(param_1);
    _objc_release(param_5);
    _objc_release(param_4);
    uVar2 = 0;
    _dispatch_time(0,param_3 * 1000000000);
    _dispatch_semaphore_wait(uVar1,uVar2);
    func_0x00010028941c();
    _os_unfair_lock_lock(param_1 + 8);
    puVar3 = *(undefined **)(param_1 + 0x20);
    if (puVar3 == (undefined *)0x0) {
      func_0x00010b29736c(*(undefined8 *)(param_1 + 0x18),
                          &PTR____CFConstantStringClassReference_110e4c1d8,0,
                          &PTR____CFConstantStringClassReference_110daafd8,1);
      puVar3 = *(undefined **)(param_1 + 0x20);
    }
    _objc_retain(puVar3);
    _os_unfair_lock_unlock(param_1 + 8);
    param_4 = uVar1;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10635e920; end: 10635ea2f; -[SCAssetCreatorWithTimeout _createAssetInBackgroundQueueWithUrl:options:sema:] */

void FUN_10635e920(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10635ea30;
  puStack_70 = &UNK_110850cf8;
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10635ea30; end: 10635eab7;  */

void FUN_10635ea30(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc();
    func_0x00010c057ae0();
    _os_unfair_lock_lock(lVar1 + 8);
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined **)(lVar1 + 0x20) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar3);
    _os_unfair_lock_unlock(lVar1 + 8);
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10635eab8; end: 10635eaf3; -[SCAssetCreatorWithTimeout .cxx_destruct] */

void FUN_10635eab8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10635eaf4; end: 10635ebc7; -[SCOperaAttachmentInteractionController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_10635eaf4(double param_1,double param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong in_x3;
  undefined8 uVar5;
  
  _objc_retain(in_x3);
  uVar1 = in_x3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_class();
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4bb00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar1 = in_x3;
    _objc_opt_isKindOfClass(in_x3,puVar4);
    if ((((uVar1 & 1) != 0) && (func_0x00010c297a00(in_x3), param_1 == 0.0)) && (param_2 == 0.0)) {
      uVar5 = 1;
      goto LAB_10635eba8;
    }
  }
  uVar5 = 0;
LAB_10635eba8:
  _objc_release(in_x3);
  return uVar5;
}



/* Entry: 10635ebc8; end: 10635ec63; -[SCOperaAttachmentInteractionController gestureRecognizerShouldBegin:] */

long FUN_10635ebc8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (param_3 == uVar1) {
    func_0x00010c2647a0(0x402e000000000000,uVar1,param_2,*(undefined8 *)(param_1 + 8));
    if ((uVar1 & 0xfffffffffffffffd) == 1) {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      lVar2 = param_1;
      func_0x00010bf0cfa0();
      _objc_release(param_1);
    }
    else {
      lVar2 = 0;
    }
  }
  else {
    lVar2 = 1;
  }
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 10635ec64; end: 10635ee5b; -[SCOperaAttachmentInteractionController didPan:] */

void FUN_10635ec64(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  double dStack_60;
  double dStack_58;
  
  _objc_retain(param_5);
  func_0x00010c27adc0(param_5,param_4,*(undefined8 *)(param_3 + 8));
  lVar2 = param_5;
  dVar5 = param_1;
  dVar6 = param_2;
  func_0x00010c252440();
  if (lVar2 < 3) {
    if (lVar2 == 1) {
      func_0x00010c09ef00(param_5,param_4,*(undefined8 *)(param_3 + 8));
      func_0x00010bf20c00(*(undefined8 *)(param_3 + 8));
      _CGRectGetHeight();
      dVar7 = dVar5;
      func_0x00010bfb68e0(*(undefined8 *)(param_3 + 8));
      _CGRectGetMinY();
      func_0x00010c14c740(*(undefined8 *)(param_3 + 8));
      func_0x00010c1f5ea0(*(undefined8 *)(param_3 + 8));
      func_0x00010c14d880(*(undefined8 *)(param_3 + 8));
      dVar7 = dVar7 + dVar5 * (dVar6 / dVar5 + 2.0);
      func_0x00010c1f5f20(*(undefined8 *)(param_3 + 8));
      lVar2 = param_3 + 0x20;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c14c740(*(undefined8 *)(param_3 + 8));
      func_0x00010bf0cf60(dVar7,lVar2,param_4,param_3);
      _objc_release(lVar2);
      goto LAB_10635ee38;
    }
    if (lVar2 != 2) goto LAB_10635ee38;
    func_0x00010bf20c00(*(undefined8 *)(param_3 + 8));
    _CGRectGetWidth();
    dVar5 = param_1 / dVar5;
    uVar3 = 0;
    ppuVar4 = (undefined **)0x0;
LAB_10635ee34:
    func_0x00010bed34a0(dVar5,param_3,param_4,uVar3,ppuVar4);
  }
  else {
    if (lVar2 == 3) {
      func_0x00010c297a00(param_5,param_4,*(undefined8 *)(param_3 + 8));
      if ((0.0 <= dVar5) || (0.0 <= param_1)) {
        bVar1 = 0.0 < param_1 && 0.0 < dVar5;
      }
      else {
        bVar1 = true;
      }
      if (ABS(dVar6) < ABS(dVar5) && bVar1) {
        uStack_80 = 0xc2000000;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        dVar5 = 1.0;
        if (param_1 <= 0.0) {
          dVar5 = -1.0;
        }
        pcStack_78 = FUN_10635ee5c;
        puStack_70 = &UNK_110858dc0;
        ppuVar4 = &puStack_88;
        uVar3 = 1;
        lStack_68 = param_3;
        dStack_60 = param_1;
        dStack_58 = param_2;
        goto LAB_10635ee34;
      }
    }
    else if (lVar2 != 4) goto LAB_10635ee38;
    func_0x00010be92300(param_3,param_4,1);
  }
LAB_10635ee38:
  _objc_release(param_5);
  return;
}



/* Entry: 10635ee5c; end: 10635eea7;  */

void FUN_10635ee5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0cfc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10635eea8; end: 10635efb3; -[SCOperaAttachmentInteractionController _updateAttachmentViewWithPercentDismissed:animated:completion:] */

void FUN_10635eea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10635efb4;
  puStack_58 = &UNK_110848c48;
  ppuVar3 = &puStack_70;
  uStack_50 = param_2;
  uStack_48 = param_1;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (param_4 == 0) {
    (*(code *)ppuVar3[2])(ppuVar3);
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else {
    puStack_98 = puVar1;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10635f0f8;
    puStack_80 = &UNK_110842508;
    _objc_retain(param_5);
    lStack_78 = param_5;
    func_0x00010bf03420(0x3fc99999a0000000,puVar2,param_3,ppuVar3,&puStack_98);
    _objc_release(lStack_78);
  }
  _objc_release(ppuVar3);
  _objc_release(param_5);
  return;
}



/* Entry: 10635efb4; end: 10635f0f7;  */

void FUN_10635efb4(long param_1,undefined8 param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  dVar2 = *(double *)(param_1 + 0x28);
  dVar3 = 0.1308996938995747;
  dVar4 = dVar2 * 0.1308996938995747;
  func_0x00010c14c740(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  dVar4 = dVar4 * dVar3;
  func_0x00010bf20c00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  _CGRectGetWidth();
  _CGAffineTransformMakeRotation(&uStack_70,dVar4);
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,&uStack_a0);
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar1 + 8) == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_a0);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  dVar3 = ABS(dVar4);
  _tan(dVar3);
  _CGAffineTransformTranslate(&uStack_d0,0,dVar3 * dVar2 * 0.6666666865348816,&uStack_a0);
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  func_0x00010c219960(*(undefined8 *)(lVar1 + 8),param_2,&uStack_a0);
  func_0x00010c1677c0(1.0 - ABS(*(double *)(param_1 + 0x28)),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  lVar1 = *(long *)(param_1 + 0x20) + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf0cf80(-dVar4,-(dVar3 * dVar2 * 0.6666666865348816));
  _objc_release(lVar1);
  return;
}



/* Entry: 10635f0f8; end: 10635f10b;  */

void FUN_10635f0f8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010635f104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10635f10c; end: 10635f15f; -[SCOperaAttachmentInteractionController _resetAttachmentView:] */

void FUN_10635f10c(void)

{
  func_0x00010bed34a0(0);
  return;
}



/* Entry: 10635f160; end: 10635f1c7;  */

void FUN_10635f160(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010c14d880(*(undefined8 *)(*(long *)(param_2 + 0x20) + 8));
  uVar1 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 8));
  _CGRectGetMidY();
  func_0x00010c1f5f20(param_1,uVar1,*(undefined8 *)(*(long *)(param_2 + 0x20) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c1f5eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe0000000000000,0x3fe0000000000000,*(undefined8 *)(*(long *)(param_2 + 0x20) + 8),
             PTR_s_setSc_anchorPoint__11265b1d0);
  return;
}



/* Entry: 10635f1c8; end: 10635f2a3; -[SCOperaAttachmentInteractionController startTrackingWithAttachmentView:backgroundView:] */

void FUN_10635f1c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) != param_3) {
    func_0x00010c256ce0(param_1);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_4;
    _objc_release(uVar1);
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x18));
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
      _objc_alloc();
      func_0x00010c050900();
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar2;
      _objc_release(uVar1);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x10),param_2,param_1);
      lVar3 = *(long *)(param_1 + 0x10);
    }
    func_0x00010bef9040(*(undefined8 *)(param_1 + 8),param_2,lVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10635f2a4; end: 10635f2fb; -[SCOperaAttachmentInteractionController stopTracking] */

void FUN_10635f2a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010be92300(param_1,param_2,0);
    func_0x00010c12c9c0(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10));
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar1);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x18));
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10635f2fc; end: 10635f313; -[SCOperaAttachmentInteractionController delegate] */

void FUN_10635f2fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10635f314; end: 10635f31f; -[SCOperaAttachmentInteractionController setDelegate:] */

void FUN_10635f314(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10635f320; end: 10635f363; -[SCOperaAttachmentInteractionController .cxx_destruct] */

void FUN_10635f320(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10635f364; end: 10635f3fb; -[SCOperaLayerViewControllerCacheManager initWithSharedResourceManager:] */

undefined1 * FUN_10635f364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0f50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10635f3fc; end: 10635f553; -[SCOperaLayerViewControllerCacheManager teardownLayerViewController:] */

void FUN_10635f3fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c07bfc0();
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010635f4d4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 == 0) goto LAB_10635f4c0;
    puVar3 = *(undefined **)(param_1 + 8);
    func_0x00010c0e00e0(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar3,lVar2);
    }
    func_0x00010befa120(puVar3,param_2,param_3);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  func_0x00010c26ac40(param_3);
LAB_10635f4c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10635f554; end: 10635f903; -[SCOperaLayerViewControllerCacheManager layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_10635f554(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_3;
  func_0x00010635f4d4(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar9 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 != 0) {
      func_0x00010c12d360(lVar2);
      goto LAB_10635f88c;
    }
  }
  uVar3 = param_4;
  func_0x00010bf61820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf69a60();
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(uVar8);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_10635f904;
  uStack_78 = 0x10635f914;
  uStack_70 = 0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(uVar8);
  _objc_retain(uVar3);
  func_0x00010bf97e80(uVar3);
  lVar9 = puStack_90[5];
  if (lVar9 == 0) {
    uVar5 = param_3;
    _objc_opt_respondsToSelector(param_3,PTR_s_layerViewControllerClass_112600b50);
    if ((uVar5 & 1) != 0) {
      uVar5 = param_3;
      func_0x00010c08c500();
      _objc_opt_class(PTR_PTR_1126c9e60);
      uVar6 = uVar5;
      func_0x00010c080080();
      if ((int)uVar6 != 0) {
        _objc_alloc();
        func_0x00010c0019a0();
        uVar7 = puStack_90[5];
        puStack_90[5] = uVar5;
        _objc_release(uVar7);
      }
    }
    lVar9 = puStack_90[5];
    if (lVar9 == 0) {
      FUN_10635fc70(uVar4,param_3,param_4,param_5,param_6,param_7,uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = puStack_90[5];
      puStack_90[5] = uVar4;
      _objc_release(uVar7);
      lVar9 = puStack_90[5];
    }
  }
  _objc_retain(lVar9);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(uVar8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(uVar3);
LAB_10635f88c:
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return;
}



/* Entry: 10635f904; end: 10635f91b;  */

void FUN_10635f904(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10635f91c; end: 10635fc0b;  */

void FUN_10635f91c(long param_1,ulong param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  
  _objc_retain(param_2);
  uVar7 = param_2;
  _objc_opt_class();
  puVar6 = PTR_DAT_1126a53a8;
  if (uVar7 == *(ulong *)(param_1 + 0x60)) goto LAB_10635fbe8;
  _objc_retain(param_2);
  uVar11 = param_2;
  func_0x00010010fab4(param_2,puVar6);
  uVar7 = param_2;
  if ((int)uVar11 == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(param_2);
  puVar6 = PTR_DAT_1126a53b0;
  if (uVar7 == 0) {
    _objc_retain(param_2);
    uVar7 = param_2;
    func_0x00010010fab4(param_2,puVar6);
    _objc_release(param_2);
    if ((param_2 == 0) || ((int)uVar7 == 0)) goto LAB_10635fbe8;
  }
  else {
    _objc_release(param_2);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_2);
  _objc_retain(uVar9);
  _objc_retain(uVar3);
  _objc_retain(uVar1);
  _objc_retain(uVar4);
  _objc_retain(uVar2);
  _objc_retain(uVar5);
  uVar7 = param_2;
  _object_isClass();
  puVar6 = PTR_DAT_1126a53b0;
  uVar11 = param_2;
  if ((uVar7 & 1) == 0) {
    _objc_retain(param_2);
    uVar8 = param_2;
    func_0x00010010fab4(param_2,puVar6);
    uVar7 = param_2;
    if ((int)uVar8 == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(param_2);
    if (uVar7 == 0) goto LAB_10635fb00;
    _objc_retain(param_2);
    _objc_retain(uVar9);
    _objc_retain(uVar3);
    _objc_retain(uVar1);
    _objc_retain(uVar4);
    _objc_retain(uVar2);
    uVar7 = param_2;
    func_0x00010c2631e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(uVar9);
    uVar8 = uVar7;
    func_0x00010bf4b900();
    _objc_release(uVar7);
    if ((int)uVar8 == 0) {
      uVar11 = 0;
    }
    else {
      func_0x00010c08c640();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(param_2);
    _objc_release(param_2);
  }
  else {
LAB_10635fb00:
    _objc_opt_class();
    FUN_10635fc70();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(param_2);
  lVar10 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  uVar9 = *(undefined8 *)(lVar10 + 0x28);
  *(ulong *)(lVar10 + 0x28) = uVar11;
  _objc_release(uVar9);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28) != 0) {
    if (*(undefined8 **)(param_1 + 0x68) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x68) = param_3;
    }
    *param_4 = 1;
  }
LAB_10635fbe8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10635fc0c; end: 10635fc6f;  */

void FUN_10635fc0c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  return;
}



/* Entry: 10635fc70; end: 10635fda3;  */

void FUN_10635fc70(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_1;
  func_0x00010c08c640();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar1 = param_1;
    _objc_opt_respondsToSelector(param_1,PTR_s_legacyLayerViewControllerWithLay_112601618);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      func_0x00010c08f020(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
    }
  }
  _objc_retain(uVar1);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10635fda4; end: 10635fdd3; -[SCOperaLayerViewControllerCacheManager .cxx_destruct] */

void FUN_10635fda4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10635fdd4; end: 10635fddb; -[SCOperaLegacySessionStateContainer keepMuteOverrideOnDismiss] */

undefined8 FUN_10635fdd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10635fddc; end: 10635fe0b; -[SCOperaLegacySessionStateContainer setKeepMuteOverrideOnDismiss:] */

void FUN_10635fddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10635fe0c; end: 10635fe13; -[SCOperaLegacySessionStateContainer userHasPinched] */

undefined1 FUN_10635fe0c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10635fe14; end: 10635fe1b; -[SCOperaLegacySessionStateContainer setUserHasPinched:] */

void FUN_10635fe14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10635fe1c; end: 10635fe23; -[SCOperaLegacySessionStateContainer disableTapLeftGoToPreviousPage] */

undefined1 FUN_10635fe1c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10635fe24; end: 10635fe2b; -[SCOperaLegacySessionStateContainer setDisableTapLeftGoToPreviousPage:] */

void FUN_10635fe24(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10635fe2c; end: 10635fe33; -[SCOperaLegacySessionStateContainer actionMenuStyleVersion] */

undefined8 FUN_10635fe2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10635fe34; end: 10635fe3b; -[SCOperaLegacySessionStateContainer setActionMenuStyleVersion:] */

void FUN_10635fe34(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10635fe3c; end: 10635fe43; -[SCOperaLegacySessionStateContainer dismissalAnimationDisabled] */

undefined1 FUN_10635fe3c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10635fe44; end: 10635fe4b; -[SCOperaLegacySessionStateContainer setDismissalAnimationDisabled:] */

void FUN_10635fe44(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 10635fe4c; end: 10635fe57; -[SCOperaLegacySessionStateContainer .cxx_destruct] */

void FUN_10635fe4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10635fe58; end: 10635fe63; -[SCOperaPageViewModelsManager initWithStartingViewModel:modelManipulator:configProvider:] */

void FUN_10635fe58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04bd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithStartingViewModel_modelM_1125f0948,param_3,param_4,0,param_5);
  return;
}



/* Entry: 10635fe64; end: 106360007; -[SCOperaPageViewModelsManager initWithStartingViewModel:modelManipulator:kvoController:configProvider:] */

undefined1 *
FUN_10635fe64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f0f58;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_5 == 0) {
      puVar3 = PTR_PTR_1126b44c8;
      _objc_alloc();
      func_0x00010c030dc0();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
      *(undefined **)((long)puVar1 + 0x10) = puVar3;
    }
    else {
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
      *(long *)((long)puVar1 + 0x10) = param_5;
    }
    _objc_release(uVar2);
    func_0x00010c188040(puVar1);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bfe67a0();
    *(char *)((long)puVar1 + 0x31) = (char)uVar2;
    uVar2 = param_6;
    func_0x00010bf3eb60();
    *(char *)((long)puVar1 + 0x32) = (char)uVar2;
    uVar2 = param_6;
    func_0x00010bf3eb80();
    *(char *)((long)puVar1 + 0x33) = (char)uVar2;
    func_0x00010c2229e0(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106360008; end: 10636004f; -[SCOperaPageViewModelsManager dealloc] */

void FUN_106360008(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281b20(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_1126f0f58;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106360050; end: 106360303; -[SCOperaPageViewModelsManager setViewModelsToPreload:] */

void FUN_106360050(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar5 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar1;
  _objc_release(uVar6);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar7 = *(long *)(lStack_128 + lVar10 * 8);
        lVar8 = *(long *)(param_1 + 0x28);
        lVar2 = lVar7;
        func_0x00010c0f0be0(lVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(lVar8,param_2,lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar3);
        _objc_release(lVar2);
        if (lVar8 == 0) {
          lVar2 = lVar7;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar3;
          func_0x00010c08fa60();
          _objc_release(lVar3);
          _objc_release(lVar2);
          if (lVar8 != 0) {
            uVar6 = *(undefined8 *)(param_1 + 0x20);
            lVar2 = lVar7;
            func_0x00010c0f0be0(lVar7);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar2;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar6,param_2,lVar7,lVar3);
            _objc_release(lVar3);
            _objc_release(lVar2);
            puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
            func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = *(undefined8 *)(param_1 + 0x28);
            lVar2 = lVar7;
            func_0x00010c0f0be0(lVar7);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar2;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar6,param_2,puVar4,lVar3);
            _objc_release(lVar3);
            _objc_release(lVar2);
            if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
              lVar2 = lVar7;
              func_0x00010c0f0be0(lVar7);
              _objc_retainAutoreleasedReturnValue();
              lVar3 = lVar2;
              func_0x00010c1086c0();
              func_0x00010bee9ae0(param_1,param_2,puVar4,lVar3,lVar7);
              _objc_release(lVar2);
            }
            _objc_release(puVar4);
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = param_3;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  func_0x00010bedad20(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  if ((undefined8 *)*(undefined1 **)(param_3 + 0x40) != puVar5) {
    func_0x00010c281a80(*(undefined8 *)(param_3 + 0x10));
    _objc_retain(puVar5);
    uVar6 = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 **)(param_3 + 0x40) = puVar5;
    _objc_release(uVar6);
    lVar1 = param_3 + 0x38;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c29dc60();
    _objc_release(lVar1);
    func_0x00010be670e0(param_3,param_2,*(undefined8 *)(param_3 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106360304; end: 106360383; -[SCOperaPageViewModelsManager setCurrentViewModel:] */

void FUN_106360304(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x40) != param_3) {
    func_0x00010c281a80(*(undefined8 *)(param_1 + 0x10));
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = param_3;
    _objc_release(uVar1);
    lVar2 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c29dc60();
    _objc_release(lVar2);
    func_0x00010be670e0(param_1,param_2,*(undefined8 *)(param_1 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106360384; end: 10636044f; -[SCOperaPageViewModelsManager preloadedNeighbourSnapshotsOfViewModel:preloadDistance:] */

void FUN_106360384(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    FUN_106314a08(param_3,param_4,puVar3);
    puVar4 = puVar3;
    func_0x00010bf00560(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106360450; end: 1063605eb; -[SCOperaPageViewModelsManager _viewModels:withinDistance:ofViewModel:] */

void FUN_106360450(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (((-1 < param_4) && (param_5 != 0)) &&
     (uVar1 = param_3, func_0x00010bf4b900(param_3,param_2,param_5), (uVar1 & 1) == 0)) {
    func_0x00010befa120(param_3,param_2,param_5);
    param_4 = param_4 + -1;
    lVar2 = param_5;
    func_0x00010c0f3aa0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee9ae0(param_1,param_2,param_3,param_4,lVar2);
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010c1126e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee9ae0(param_1,param_2,param_3,param_4,lVar2);
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010bf0cb60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee9ae0(param_1,param_2,param_3,param_4,lVar2);
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010c0d9ae0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee9ae0(param_1,param_2,param_3,param_4,lVar2);
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010c1125e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee9ae0(param_1,param_2,param_3,param_4,lVar2);
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010c0d9820(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee9ae0(param_1,param_2,param_3,param_4,lVar2);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063605ec; end: 1063607b3; -[SCOperaPageViewModelsManager _observeViewModel:] */

void FUN_1063605ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1063607b4;
  puStack_60 = &UNK_110842e18;
  _objc_retain(param_3);
  uStack_58 = param_3;
  if (lRam00000001136c3838 != -1) {
    func_0x00010002a2fc(0x1136c3838,&puStack_78);
  }
  _objc_initWeak(auStack_80,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x106360934;
  puStack_90 = &UNK_11086ffc8;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c0e07c0(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c0e0780(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1063607b4; end: 1063609f3;  */

void FUN_1063607b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f378223);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_78 = puVar2;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f378231);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_70 = puVar3;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f378238);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_68 = puVar4;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f2dacf1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_60 = puVar5;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f325b3d);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_58 = puVar6;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"next");
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 6;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3830;
  puRam00000001136c3830 = puVar8;
  _objc_release(uVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar12);
  puVar2 = puVar2 + 0x20;
  _objc_loadWeakRetained();
  if (puVar2 != (undefined *)0x0) {
    uVar9 = uVar12;
    func_0x00010c0e00e0(uVar12,param_2,*(undefined8 *)PTR__NSKeyValueChangeOldKey_110345510);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar12;
    func_0x00010c0e00e0(uVar12,param_2,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010c071ae0(uVar9,param_2,uVar10);
    _objc_release(uVar10);
    _objc_release(uVar9);
    if ((uVar11 & 1) == 0) {
      func_0x00010bee97e0(puVar2);
    }
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar12);
  return;
}



/* Entry: 1063609f4; end: 106360a43;  */

void FUN_1063609f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdfc9e0(param_1,param_2,param_3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106360a44; end: 106360b87; -[SCOperaPageViewModelsManager _viewModelConnectionDidChange] */

void FUN_106360a44(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x32) & 1) == 0) {
      func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x28));
      func_0x00010c2229e0(param_1);
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29dce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    if ((*(byte *)(param_1 + 0x34) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x34) = 1;
      if (*(char *)(param_1 + 0x33) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be9b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__schedulePendingPreloadRebuildFl_1125846d8);
        return;
      }
      _objc_initWeak(auStack_28,param_1);
      puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_48 = 0xc2000000;
      uStack_40 = 0x106360b54;
      puStack_38 = &UNK_1108434b0;
      _objc_copyWeak(auStack_30,auStack_28);
      func_0x000100162d98("APPSTORE",&puStack_50);
      _objc_destroyWeak(auStack_30);
      _objc_destroyWeak(auStack_28);
    }
  }
  return;
}



/* Entry: 106360b88; end: 106360c6f; -[SCOperaPageViewModelsManager _schedulePendingPreloadRebuildFlushAtEndOfTurn] */

void FUN_106360b88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106360c70;
  puStack_38 = &UNK_11086fc48;
  _objc_copyWeak(auStack_30,auStack_28);
  _CFRunLoopObserverCreateWithHandler(uVar1,0xa0,0,0,&puStack_50);
  _CFRunLoopGetMain();
  _CFRunLoopAddObserver();
  _CFRelease(uVar1);
  _CFRunLoopGetMain();
  _CFRunLoopWakeUp();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106360c70; end: 106360ca3;  */

void FUN_106360c70(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be182a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106360ca4; end: 106360cff; -[SCOperaPageViewModelsManager _flushPendingPreloadRebuild] */

void FUN_106360ca4(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x34) = 0;
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return;
  }
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c2229e0(param_1,param_2,*(undefined8 *)(param_1 + 0x58));
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29dce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106360d00; end: 106360e83; -[SCOperaPageViewModelsManager _didChangePageForPageViewModel:] */

void FUN_106360d00(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 != (undefined *)0x0) goto LAB_106360e6c;
  puVar1 = *(undefined **)(param_1 + 0x40);
  if (puVar1 == param_3) {
    func_0x00010c0d9820();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = *(undefined **)(param_1 + 0x40);
      func_0x00010c0d9ae0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 != (undefined *)0x0) goto LAB_106360d70;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29dca0();
    }
    else {
LAB_106360d70:
      puVar2 = PTR_PTR_1126c9ba0;
      func_0x00010bf84be0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != puVar2) {
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        _objc_retain(uVar3);
        func_0x00010c188040(param_1,param_2,puVar1);
        puVar2 = param_1 + 0x38;
        _objc_loadWeakRetained(puVar2);
        func_0x00010c29dd00();
        _objc_release(puVar2);
        func_0x00010c0b8400(*(undefined8 *)(param_1 + 8),param_2,uVar3,puVar1);
        _objc_release(uVar3);
        _objc_release(puVar1);
        goto LAB_106360df0;
      }
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29dc80();
      _objc_release(param_1);
      param_1 = puVar1;
    }
  }
  else {
LAB_106360df0:
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c2229e0(param_1,param_2,*(undefined8 *)(param_1 + 0x58));
    if ((param_1[0x30] & 1) != 0) goto LAB_106360e6c;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29dce0();
  }
  _objc_release(param_1);
LAB_106360e6c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106360e84; end: 106360f1f; -[SCOperaPageViewModelsManager didLandOnViewModel:] */

void FUN_106360e84(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x30) = 1;
  if (param_3 != 0) {
    _objc_retain(uVar1);
    _objc_retain(param_3);
    func_0x00010c188040(param_1,param_2,param_3);
    func_0x00010c0b8400(*(undefined8 *)(param_1 + 8),param_2,uVar1,param_3);
    _objc_release(uVar1);
    _objc_release(param_3);
  }
  func_0x00010bedad20(param_1);
  *(undefined1 *)(param_1 + 0x30) = 0;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29dce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106360f20; end: 106360f77; -[SCOperaPageViewModelsManager loadedViewModelsForDimension:] */

void FUN_106360f20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106360f78; end: 1063610bb; -[SCOperaPageViewModelsManager _updateLoadedViewModelsBasedOnCurrentViewModel] */

void FUN_106360f78(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      uVar6 = uVar7;
      func_0x00010c0f0be0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,uVar7,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar6);
      func_0x00010bedad40(param_1,param_2,puVar3);
      func_0x00010bedad60(param_1,param_2,puVar3);
      puVar5 = puVar3;
      func_0x00010bf51e00();
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      *(undefined **)(param_1 + 0x48) = puVar5;
      _objc_release(uVar6);
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29dcc0();
      _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
  return;
}



/* Entry: 1063610bc; end: 106361183; -[SCOperaPageViewModelsManager _loadedViewModelsForDimension:] */

void FUN_1063610bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be4efc0(param_1,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,lVar2);
  func_0x00010befa120(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010be4efc0(param_1,param_2,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,param_1);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106361184; end: 10636126f; -[SCOperaPageViewModelsManager _loadedViewModelsForDimension:direction:] */

void FUN_106361184(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc0000000;
  pcStack_60 = FUN_106361270;
  puStack_58 = &UNK_11091d2c8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10636137c;
  puStack_88 = &UNK_11091d2e8;
  puStack_80 = puVar1;
  uStack_78 = param_4;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain();
  func_0x00010bdc9000(param_1,param_2,uVar3,1,&puStack_70,&puStack_a0);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_80);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106361270; end: 10636137b;  */

void FUN_106361270(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain(param_2);
  uVar3 = param_2;
  if (lVar1 == 3) {
    if (lVar2 == 1) {
      func_0x00010c0d9820(param_2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106361358;
    }
    if (lVar2 == 0) {
      func_0x00010c1125e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106361358;
    }
  }
  else if (lVar1 == 2) {
    if (lVar2 == 1) {
      func_0x00010bf0cb60(param_2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106361358;
    }
    if (lVar2 == 0) {
      func_0x00010c0f3aa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106361358;
    }
  }
  else if (lVar1 == 1) {
    if (lVar2 == 1) {
      func_0x00010c0d9ae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106361358;
    }
    if (lVar2 == 0) {
      func_0x00010c1126e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106361358;
    }
  }
  uVar3 = 0;
LAB_106361358:
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10636137c; end: 1063613d7;  */

void FUN_10636137c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x28) == 1) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  }
  else if (*(long *)(param_1 + 0x28) == 0) {
    func_0x00010c066b00(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1063613d8; end: 10636165f; -[SCOperaPageViewModelsManager _updateLoadedViewModelsForAllDimensions:] */

void FUN_1063613d8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *unaff_x21;
  long unaff_x22;
  undefined8 uVar11;
  long unaff_x23;
  undefined8 unaff_x24;
  long lVar12;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long lStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined *puStack_218;
  long lStack_210;
  undefined *puStack_208;
  long lStack_200;
  undefined *puStack_1f8;
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
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_200 = param_1;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puStack_208 = puVar2;
  FUN_106314348();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = &uStack_1b0;
  puStack_218 = puVar2;
  func_0x00010bf52a60();
  puStack_1f8 = puVar2;
  if (puVar2 != (undefined *)0x0) {
    lStack_210 = *plStack_1a0;
    do {
      unaff_x21 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lStack_210) {
          _objc_enumerationMutation(puStack_218);
        }
        unaff_x24 = *(undefined8 *)(lStack_1a8 + (long)unaff_x21 * 8);
        uVar9 = unaff_x24;
        func_0x00010c067fc0(unaff_x24);
        lVar3 = lStack_200;
        func_0x00010be4efa0(lStack_200,param_2,uVar9);
        _objc_retainAutoreleasedReturnValue();
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lVar4 = lVar3;
        func_0x00010bf52a60();
        if (lVar4 != 0) {
          lVar10 = *plStack_1e0;
          do {
            unaff_x23 = 0;
            do {
              if (*plStack_1e0 != lVar10) {
                _objc_enumerationMutation(lVar3);
              }
              lVar12 = *(long *)(lStack_1e8 + unaff_x23 * 8);
              lVar5 = lVar12;
              func_0x00010c0f0be0();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar5;
              func_0x00010be36bc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(lVar5);
              unaff_x22 = 0;
              if (lVar6 != 0) {
                unaff_x22 = lVar12;
                func_0x00010c0f0be0();
                _objc_retainAutoreleasedReturnValue();
                lVar5 = unaff_x22;
                func_0x00010be36bc0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(param_3,param_2,lVar12,lVar5);
                _objc_release(lVar5);
                _objc_release(unaff_x22);
              }
              unaff_x23 = unaff_x23 + 1;
            } while (lVar4 != unaff_x23);
            lVar4 = lVar3;
            func_0x00010bf52a60(lVar3,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar4 != 0);
        }
        func_0x00010c1d0640(puStack_208,param_2,lVar3,unaff_x24);
        _objc_release(lVar3);
        unaff_x21 = unaff_x21 + 1;
      } while (unaff_x21 != puStack_1f8);
      puVar8 = &uStack_1b0;
      puVar2 = puStack_218;
      func_0x00010bf52a60();
      puStack_1f8 = puVar2;
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puStack_218);
  puVar2 = puStack_208;
  puVar7 = puStack_208;
  func_0x00010bf51e00();
  uVar9 = *(undefined8 *)(lStack_200 + 0x18);
  *(undefined **)(lStack_200 + 0x18) = puVar7;
  _objc_release(uVar9);
  _objc_release(puVar2);
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_240 = puVar2;
  pcStack_228 = FUN_106361660;
  uStack_260 = unaff_x24;
  lStack_258 = unaff_x23;
  lStack_250 = unaff_x22;
  puStack_248 = unaff_x21;
  lStack_238 = param_3;
  puStack_230 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar3 + 0x40);
  uVar9 = *(undefined8 *)(lVar3 + 0x20);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  puStack_290 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_288 = 0xc2000000;
  uStack_280 = 0x10636174c;
  puStack_278 = &UNK_11091d318;
  puStack_270 = puVar8;
  puStack_268 = puVar2;
  _objc_retain();
  _objc_retain(puVar8);
  func_0x00010bdc9020(lVar3,param_2,uVar11,uVar9,uVar1,&puStack_290);
  puVar7 = puVar2;
  func_0x00010bf51e00();
  uVar9 = *(undefined8 *)(lVar3 + 0x50);
  *(undefined **)(lVar3 + 0x50) = puVar7;
  _objc_release(uVar9);
  _objc_release(puStack_268);
  _objc_release(puStack_270);
  _objc_release(puVar2);
  _objc_release(puVar8);
  return;
}



/* Entry: 106361660; end: 106361813; -[SCOperaPageViewModelsManager _updateLoadedViewModelsForViewModelsToPreload:] */

void FUN_106361660(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10636174c;
  puStack_58 = &UNK_11091d318;
  uStack_50 = param_3;
  puStack_48 = puVar2;
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010bdc9020(param_1,param_2,uVar5,uVar4,uVar1,&puStack_70);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar3;
  _objc_release(uVar4);
  _objc_release(puStack_48);
  _objc_release(uStack_50);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106361814; end: 106361943; -[SCOperaPageViewModelsManager _addViewModelsWithInitialModel:maxModelsToAdd:nextModelGenerator:callback:] */

void FUN_106361814(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined *param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_5;
  (**(code **)(param_5 + 0x10))(param_5,param_3);
  _objc_retainAutoreleasedReturnValue();
  if ((0 < param_4) && (puVar1 != (undefined *)0x0)) {
    iVar4 = 1;
    puVar3 = puVar1;
    while( true ) {
      puVar2 = PTR_PTR_1126c9ba0;
      func_0x00010bf84be0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar1 = puVar3;
      if (puVar3 == puVar2) break;
      puVar2 = puVar3;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar2 == (undefined *)0x0) break;
      (**(code **)(param_6 + 0x10))(param_6,puVar3);
      puVar1 = param_5;
      (**(code **)(param_5 + 0x10))(param_5,param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if ((param_4 <= iVar4) || (iVar4 = iVar4 + 1, puVar3 = puVar1, puVar1 == (undefined *)0x0))
      break;
    }
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106361944; end: 106361a8f; -[SCOperaPageViewModelsManager _addViewModelsWithInitialModel:pageIDToViewModelToPreload:pageIDToViewModelsWithinPreloadDistance:callback:] */

void FUN_106361944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106361a18;
  puStack_50 = &UNK_11091d348;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf97ce0(param_5,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106361a90; end: 106361aa7; -[SCOperaPageViewModelsManager delegate] */

void FUN_106361a90(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106361aa8; end: 106361ab3; -[SCOperaPageViewModelsManager setDelegate:] */

void FUN_106361aa8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 106361ab4; end: 106361abb; -[SCOperaPageViewModelsManager currentViewModel] */

undefined8 FUN_106361ab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106361abc; end: 106361ac3; -[SCOperaPageViewModelsManager loadedPageIDToModelMap] */

undefined8 FUN_106361abc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106361ac4; end: 106361acb; -[SCOperaPageViewModelsManager preloadedViewModels] */

undefined8 FUN_106361ac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106361acc; end: 106361ad3; -[SCOperaPageViewModelsManager viewModelsToPreload] */

undefined8 FUN_106361acc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106361ad4; end: 106361b5f; -[SCOperaPageViewModelsManager .cxx_destruct] */

void FUN_106361ad4(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106361b60; end: 106361c63; -[SCOperaScrollContentView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106361b60(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0f60;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  lVar2 = (long)_DAT_112746024;
  if ((*(long *)(param_1 + lVar2) < 1) && (*(char *)(param_1 + _DAT_112746028) == '\x01')) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274602c);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c134d80();
    *(undefined8 *)(param_1 + lVar2) = uVar1;
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 106361c64; end: 106361c97;  */

void FUN_106361c64(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be04820(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106361c98; end: 106361d07; -[SCOperaScrollContentView _displayLinkDidFire] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106361c98(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112746024;
  if (0 < *(long *)(param_1 + lVar1)) {
    func_0x00010c1284c0(*(undefined8 *)(param_1 + _DAT_11274602c));
    *(undefined8 *)(param_1 + lVar1) = 0;
  }
  *(undefined1 *)(param_1 + _DAT_112746028) = 0;
  param_1 = param_1 + _DAT_112746030;
  _objc_loadWeakRetained(param_1);
  func_0x00010c151f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106361d08; end: 106361d67; -[SCOperaScrollContentView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106361d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined *puStack_18;
  
  if ((*(byte *)(param_1 + _DAT_112746020) & 1) == 0) {
    puStack_18 = PTR_PTR_1126f0f60;
    lStack_20 = param_1;
    _objc_msgSendSuper2(&lStack_20,PTR_s_hitTest_withEvent__1125d6850);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_1063669a0(param_1,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106361d68; end: 106361d87; -[SCOperaScrollContentView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106361d68(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112746030);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106361d88; end: 106361d9b; -[SCOperaScrollContentView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106361d88(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112746030,param_3);
  return;
}



/* Entry: 106361d9c; end: 106361dab; -[SCOperaScrollContentView displayLinkProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106361d9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274602c);
}



/* Entry: 106361dac; end: 106361deb; -[SCOperaScrollContentView setDisplayLinkProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106361dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274602c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106361dec; end: 106361dfb; -[SCOperaScrollContentView shouldSendRefreshDisplayUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106361dec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112746028);
}



/* Entry: 106361dfc; end: 106361e0b; -[SCOperaScrollContentView setShouldSendRefreshDisplayUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106361dfc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112746028) = param_3;
  return;
}



/* Entry: 106361e0c; end: 106361e1b; -[SCOperaScrollContentView noClipViewHitTestEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106361e0c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112746020);
}



/* Entry: 106361e1c; end: 106361e2b; -[SCOperaScrollContentView setNoClipViewHitTestEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106361e1c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112746020) = param_3;
  return;
}



/* Entry: 106361e2c; end: 106361e67; -[SCOperaScrollContentView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106361e2c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274602c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112746030);
  return;
}



/* Entry: 106361e68; end: 106361f6b; -[SCOperaSharedResourceManager initWithConfiguration:networkBandwidthEstimator:proxyController:configProvider:internalConfigProvider:operaDebugServices:] */

undefined8
FUN_106361e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf68fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020a00(param_1,param_2,0,param_3,puVar1,param_4,param_5,param_6,param_7,param_8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106361f6c; end: 10636223f; -[SCOperaSharedResourceManager initWithKVOController:configuration:notificationCenter:networkBandwidthEstimator:proxyController:configProvider:internalConfigProvider:operaDebugServices:] */

undefined1 *
FUN_106361f6c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
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
  puStack_68 = PTR_PTR_1126f0f68;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(ulong *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    if (param_3 == 0) {
      puVar3 = PTR_PTR_1126b44c8;
      _objc_alloc();
      func_0x00010c030dc0();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
      *(undefined **)((long)puVar1 + 0x20) = puVar3;
    }
    else {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
      *(long *)((long)puVar1 + 0x20) = param_3;
    }
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    func_0x00010befa240(*(undefined8 *)((long)puVar1 + 0x28));
    func_0x00010befa240(*(undefined8 *)((long)puVar1 + 0x28));
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c9a90;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_10;
    _objc_release(uVar2);
    func_0x00010beaee80(puVar1);
    func_0x00010be66920(puVar1);
    _objc_retain(param_8);
    uVar4 = param_4;
    func_0x00010bf91ec0();
    if (((uVar4 & 1) == 0) && (uVar2 = param_8, func_0x00010c0ffc80(), (int)uVar2 == 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    _objc_release(param_8);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    uVar2 = param_8;
    func_0x00010bf8f060();
    *(char *)((long)puVar1 + 0x58) = (char)uVar2;
    uVar2 = param_9;
    func_0x00010c0eabe0();
    *(char *)((long)puVar1 + 0x59) = (char)uVar2;
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



/* Entry: 106362240; end: 1063622ef; -[SCOperaSharedResourceManager dealloc] */

void FUN_106362240(long param_1)

{
  undefined8 uVar1;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1063622f0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  func_0x00010c12d560(*(undefined8 *)(param_1 + 0x28));
  _objc_release(uStack_28);
  _objc_release(uVar1);
  puStack_50 = PTR_PTR_1126f0f68;
  lStack_58 = param_1;
  _objc_msgSendSuper2(&lStack_58,PTR_s_dealloc_112525b20);
  return;
}


