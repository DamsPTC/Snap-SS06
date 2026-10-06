/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f6a62c; end: 106f6a637;  */

void FUN_106f6a62c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 106f6a638; end: 106f6a79b;  */

void FUN_106f6a638(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72060(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar4);
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    func_0x00010be85760();
    _objc_release(lVar4);
  }
  else {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    puVar1 = *(undefined **)(param_1 + 0x20);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar4 = *plStack_100;
      do {
        puVar5 = (undefined *)0x0;
        do {
          if (*plStack_100 != lVar4) {
            _objc_enumerationMutation(puVar1);
          }
          func_0x00010bf43ca0(*(undefined8 *)(lStack_108 + (long)puVar5 * 8));
          puVar5 = puVar5 + 1;
        } while (puVar2 != puVar5);
        puVar2 = puVar1;
        puVar3 = &uStack_110;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s_future_1125ccaa0);
    return;
  }
  return;
}



/* Entry: 106f6a79c; end: 106f6a7a3;  */

void FUN_106f6a79c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 106f6a7a4; end: 106f6a8db; -[SCAuxiliaryDataProcessorQueue _queueJobForProcessor:inputData:outputPromises:] */

void FUN_106f6a7a4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined *param_5)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_isExpensive_1125fa318);
  if (((uVar1 & 1) == 0) || (uVar1 = param_3, func_0x00010c072420(), (int)uVar1 == 0)) {
    _objc_retain(param_5);
    func_0x00010c142bc0(param_3);
    puVar2 = param_5;
  }
  else {
    puVar2 = PTR_PTR_1126d3780;
    _objc_alloc_init(PTR_PTR_1126d3780);
    func_0x00010c1e3a20();
    func_0x00010c1ad2c0(puVar2);
    func_0x00010c1d7100(puVar2);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
    func_0x00010be90760(param_1);
    func_0x00010be81940(param_1);
  }
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6a8dc; end: 106f6aae3;  */

void FUN_106f6a8dc(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [8];
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  long lStack_238;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_4 & 1) == 0) {
    if (param_3 == 0) {
      lVar3 = param_2;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar2 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_2);
          }
          uVar4 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c0e00e0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = param_2;
          func_0x00010c0e00e0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf43d60(uVar4);
          _objc_release(lVar8);
          _objc_release(uVar4);
          lVar2 = lVar2 + 1;
        } while (lVar3 != lVar2);
        lVar3 = param_2;
        func_0x00010bf52a60();
      }
    }
    else {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar2);
          }
          func_0x00010bf43ca0(*(undefined8 *)(lVar8 * 8));
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar2;
        func_0x00010bf52a60();
      }
      _objc_release(lVar2);
    }
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_2 + 0x20) == 0) {
    lVar5 = *(long *)(param_2 + 0x18);
    func_0x00010bf529e0();
    if (lVar5 != 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_250 = 0xc2000000;
      pcStack_248 = FUN_106f6ac98;
      puStack_240 = &UNK_110985c48;
      lStack_238 = param_2;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_2 + 0x20) = uVar4;
      _objc_release(uVar6);
      lVar5 = *(long *)(param_2 + 0x20);
      if (lVar5 == 0) {
        lVar5 = *(long *)(param_2 + 0x18);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(lVar5);
      }
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      *(long *)(param_2 + 0x20) = lVar5;
      _objc_release(uVar4);
      func_0x00010c12d360(*(undefined8 *)(param_2 + 0x18));
      uVar7 = *(undefined8 *)(param_2 + 8);
      _objc_retain(uVar7);
      _objc_initWeak(auStack_260,param_2);
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c115b00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c0658a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar7);
      _objc_copyWeak(auStack_268,auStack_260);
      func_0x00010c142bc0(uVar4);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_268);
      _objc_release(uVar7);
      _objc_destroyWeak(auStack_260);
      _objc_release(uVar7);
    }
  }
  return;
}



/* Entry: 106f6aae4; end: 106f6ac97; -[SCAuxiliaryDataProcessorQueue _processNextJobIfPossible] */

void FUN_106f6aae4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_106f6ac98;
      puStack_50 = &UNK_110985c48;
      lStack_48 = param_1;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      _objc_release(uVar3);
      lVar1 = *(long *)(param_1 + 0x20);
      if (lVar1 == 0) {
        lVar1 = *(long *)(param_1 + 0x18);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(lVar1);
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      *(long *)(param_1 + 0x20) = lVar1;
      _objc_release(uVar2);
      func_0x00010c12d360(*(undefined8 *)(param_1 + 0x18));
      uVar4 = *(undefined8 *)(param_1 + 8);
      _objc_retain(uVar4);
      _objc_initWeak(auStack_70,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c115b00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0658a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar4);
      _objc_copyWeak(auStack_78,auStack_70);
      func_0x00010c142bc0(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_78);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_70);
      _objc_release(uVar4);
    }
  }
  return;
}



/* Entry: 106f6ac98; end: 106f6ace7;  */

undefined8 FUN_106f6ac98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c115b00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106f6ace8; end: 106f6addb;  */

void FUN_106f6ace8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_50,param_1 + 0x28);
  _objc_retain(param_2);
  _objc_retain(param_3);
  uStack_48 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106f6addc; end: 106f6ae13;  */

void FUN_106f6addc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be16dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f6ae14; end: 106f6b06f; -[SCAuxiliaryDataProcessorQueue _finishCurrentJobWithOutputData:error:suspended:] */

void FUN_106f6ae14(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  long lStack_68;
  
  puVar5 = &uStack_1f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((int)param_5 == 0) {
    if (param_4 == 0) {
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      plStack_1e0 = (long *)0x0;
      lVar1 = param_3;
      func_0x00010bf52a60();
      if (lVar1 != 0) {
        lVar6 = *plStack_1e0;
        do {
          lVar7 = 0;
          do {
            if (*plStack_1e0 != lVar6) {
              _objc_enumerationMutation(param_3);
            }
            uVar2 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010c0ef020(uVar2);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = param_3;
            func_0x00010c0e00e0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf43d60(uVar4);
            _objc_release(lVar3);
            _objc_release(uVar4);
            _objc_release(uVar2);
            lVar7 = lVar7 + 1;
          } while (lVar1 != lVar7);
          lVar1 = param_3;
          puVar5 = &uStack_1f0;
          func_0x00010bf52a60();
          param_5 = 0;
        } while (lVar1 != 0);
      }
    }
    else {
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      lStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      plStack_1a0 = (long *)0x0;
      lVar1 = *(long *)(param_1 + 0x20);
      func_0x00010c0ef020();
      _objc_retainAutoreleasedReturnValue();
      param_5 = lVar1;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar5 = &uStack_1b0;
      lVar1 = param_5;
      func_0x00010bf52a60();
      if (lVar1 != 0) {
        lVar6 = *plStack_1a0;
        do {
          lVar7 = 0;
          do {
            if (*plStack_1a0 != lVar6) {
              _objc_enumerationMutation(param_5);
            }
            func_0x00010bf43ca0(*(undefined8 *)(lStack_1a8 + lVar7 * 8));
            lVar7 = lVar7 + 1;
          } while (lVar1 != lVar7);
          puVar5 = &uStack_1b0;
          lVar1 = param_5;
          func_0x00010bf52a60();
        } while (lVar1 != 0);
      }
      _objc_release(param_5);
    }
  }
  else {
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar4);
  func_0x00010be81940(param_1);
  _objc_release(param_4);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_106f6b070;
  lStack_220 = param_5;
  lStack_218 = param_1;
  lStack_210 = param_4;
  lStack_208 = param_3;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_initWeak(auStack_228,lVar1);
  uVar4 = *(undefined8 *)(lVar1 + 8);
  _objc_copyWeak(auStack_230,auStack_228);
  _objc_retain(puVar5);
  func_0x00010c0f7fc0(uVar4);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_230);
  _objc_destroyWeak(auStack_228);
  _objc_release(puVar5);
  return;
}



/* Entry: 106f6b070; end: 106f6b147; -[SCAuxiliaryDataProcessorQueue prioritizeJobsForProcessors:] */

void FUN_106f6b070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6b148; end: 106f6b17b;  */

void FUN_106f6b148(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be90760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f6b17c; end: 106f6b29b; -[SCAuxiliaryDataProcessorQueue _reprioritizeJobsWithProcessors:] */

void FUN_106f6b17c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    iVar6 = 1;
  }
  else {
    iVar6 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c115b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(lVar3);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010bf04920();
  if ((iVar1 != 0) && (iVar6 != 0)) {
    uVar4 = *(ulong *)(param_1 + 0x20);
    func_0x00010c115b00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    _objc_opt_respondsToSelector();
    _objc_release(uVar4);
    if ((uVar5 & 1) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c115b00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c264060();
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f6b29c; end: 106f6b2eb;  */

undefined8 FUN_106f6b29c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c115b00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106f6b2ec; end: 106f6b333; -[SCAuxiliaryDataProcessorQueue .cxx_destruct] */

void FUN_106f6b2ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f6b334; end: 106f6b42b; -[SCAuxiliaryDataRepository initWithPerformer:directory:maxRepoSize:] */

undefined1 *
FUN_106f6b334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7fe8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c25de20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f6b42c; end: 106f6b583; -[SCAuxiliaryDataRepository writeData:ofType:graphId:completion:] */

void FUN_106f6b42c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6b584; end: 106f6b5bb;  */

void FUN_106f6b584(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeb8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f6b5bc; end: 106f6b78f; -[SCAuxiliaryDataRepository _writeData:ofType:graphId:completion:] */

void FUN_106f6b5bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(lVar1);
  func_0x00010be876a0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR_DAT_1126a57e8;
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010010fab4(param_4,puVar5);
  lVar1 = param_4;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(param_4);
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c25ce00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c12cc40();
    _objc_retain(0);
    _objc_release(puVar5);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x00010bf3ec40(0);
    }
    func_0x00010c0f9fe0(param_4);
    func_0x00010bed00e0(param_1);
    _objc_release(0);
    _objc_release(uVar4);
  }
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6);
  }
  _objc_release(lVar1);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6b790; end: 106f6b8e7; -[SCAuxiliaryDataRepository fetchDataOfType:graphId:completion:] */

void FUN_106f6b790(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar1);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6b8e8; end: 106f6ba47;  */

void FUN_106f6b8e8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  _objc_copyWeak(auStack_48,param_1 + 0x40);
  _objc_retain(puVar2);
  func_0x00010be10d40(lVar3);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 106f6ba48; end: 106f6bb4b;  */

void FUN_106f6ba48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  _objc_copyWeak(auStack_38,param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 106f6bb4c; end: 106f6bbc7;  */

void FUN_106f6bb4c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010be876a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106f6bbc8; end: 106f6bd73; -[SCAuxiliaryDataRepository _fetchDataOfType:filename:completion:] */

void FUN_106f6bbc8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_DAT_1126a57e8;
  if (lVar1 == 0) {
    _objc_retain(param_3);
    lVar6 = param_3;
    func_0x00010010fab4(param_3,puVar4);
    _objc_release(param_3);
    puVar4 = PTR_DAT_1126a57e8;
    if ((param_3 != 0) && ((int)lVar6 != 0)) {
      _objc_retain(param_3);
      lVar2 = param_3;
      func_0x00010010fab4(param_3,puVar4);
      lVar6 = param_3;
      if ((int)lVar2 == 0) {
        lVar6 = 0;
      }
      _objc_retain(lVar6);
      _objc_release(param_3);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c25ce00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bfacbe0();
      _objc_release(puVar4);
      if ((int)puVar5 != 0) {
        lVar2 = lVar6;
        func_0x00010bf64bc0(lVar6);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_5 + 0x10))(param_5,lVar2);
        _objc_release(lVar2);
        _objc_release(uVar3);
        _objc_release(lVar6);
        goto LAB_106f6bd40;
      }
      _objc_release(uVar3);
      _objc_release(lVar6);
    }
    pcVar7 = *(code **)(param_5 + 0x10);
    lVar6 = 0;
  }
  else {
    pcVar7 = *(code **)(param_5 + 0x10);
    lVar6 = lVar1;
  }
  (*pcVar7)(param_5,lVar6);
LAB_106f6bd40:
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f6bd74; end: 106f6be1b; -[SCAuxiliaryDataRepository _recordDataUsage:filename:] */

void FUN_106f6bd74(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0dff20(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  if (lVar1 == 0) {
    if (param_3 == 0) {
      lVar2 = 0;
      goto LAB_106f6bde4;
    }
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4);
    lVar2 = param_3;
  }
  _objc_retain(lVar2);
LAB_106f6bde4:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106f6be1c; end: 106f6becf; -[SCAuxiliaryDataRepository retainDataForGraphId:] */

void FUN_106f6be1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106f6bed0;
  puStack_48 = &UNK_110841f80;
  uStack_40 = uVar2;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6bed0; end: 106f6bedb;  */

void FUN_106f6bed0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106f6bedc; end: 106f6bfeb; -[SCAuxiliaryDataRepository releaseDataForGraphId:] */

void FUN_106f6bedc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = uVar3;
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6bfec; end: 106f6c02b;  */

void FUN_106f6bfec(long param_1,undefined8 param_2)

{
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed00e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f6c02c; end: 106f6c19b; -[SCAuxiliaryDataRepository totalSizeOfCacheFilesWithQueue:handler:] */

void FUN_106f6c02c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106f6c108;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = uVar2;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6c19c; end: 106f6c1ab;  */

void FUN_106f6c19c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106f6c1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106f6c1ac; end: 106f6c2ab; -[SCAuxiliaryDataRepository cleanUpCacheWithQueue:block:] */

void FUN_106f6c1ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6c2ac; end: 106f6c2e7;  */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_106f6c2ac(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  
  lVar5 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar5);
  func_0x00010bed00e0();
  _objc_release(lVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  if ((bRam0000000113817cd8 & 1) == 0) {
    iVar2 = 0x13817cd8;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      pcVar4 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_async");
      pcRam0000000113817cd0 = pcVar4;
      func_0x000107c60e4c(0x113817cd8);
    }
  }
  pcVar4 = pcRam0000000113817cd0;
  func_0x00010002a3a8(uVar3);
  func_0x000107c61180();
  (*pcVar4)(uVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106f6c2e8; end: 106f6c3a7; -[SCAuxiliaryDataRepository _canEvictFilename:] */

uint FUN_106f6c2e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = param_3;
    func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110dad1f8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010bf4b900(uVar5,param_2,uVar3);
    uVar4 = (uint)uVar5 ^ 1;
    _objc_release(uVar3);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106f6c3a8; end: 106f6c487; -[SCAuxiliaryDataRepository _sizeOfItemAtPath:] */

undefined * FUN_106f6c3a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_31;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfacc00();
  _objc_release(puVar1);
  if (uStack_31 == '\x01') {
    puVar1 = PTR_PTR_1126b24e8;
    func_0x00010bf278a0(PTR_PTR_1126b24e8,param_2,param_3,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf0e880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010bfad040(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106f6c488; end: 106f6c807; -[SCAuxiliaryDataRepository _trimToSize:] */

long FUN_106f6c488(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf4dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    puVar3 = puVar2;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    if (puVar3 == (undefined *)0x0) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar9) {
            _objc_enumerationMutation(puVar2);
          }
          uVar4 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c25ce00(uVar4);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = param_1;
          func_0x00010bebc500();
          lVar6 = param_1;
          func_0x00010bdd9a80();
          if ((int)lVar6 != 0) {
            puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar1);
            _objc_release(puVar13);
          }
          lVar11 = lVar5 + lVar11;
          _objc_release(uVar4);
          puVar12 = puVar12 + 1;
        } while (puVar3 != puVar12);
        puVar3 = puVar2;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    puVar12 = puVar3;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_retain(puVar12);
    puVar3 = puVar12;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(puVar12);
        }
        if (lVar11 <= param_3) goto LAB_106f6c794;
        puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12cc40();
        _objc_release(puVar7);
        puVar7 = puVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c0b4ca0();
        lVar11 = lVar11 - (long)puVar8;
        _objc_release(puVar7);
        puVar13 = puVar13 + 1;
      } while (puVar3 != puVar13);
      puVar3 = puVar12;
      func_0x00010bf52a60();
    }
LAB_106f6c794:
    _objc_release(puVar12);
    _objc_release(puVar12);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  lVar9 = 0;
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return lVar9;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)(lVar9 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0e00e0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar9 + 0x20);
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar10 = lVar11;
  func_0x00010bf433a0(lVar11);
  _objc_release(uVar4);
  _objc_release(lVar11);
  return lVar10;
}



/* Entry: 106f6c808; end: 106f6c89b;  */

undefined8 FUN_106f6c808(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010bf433a0(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 106f6c89c; end: 106f6c8e3; -[SCAuxiliaryDataRepository .cxx_destruct] */

void FUN_106f6c89c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f6c8e4; end: 106f6c98b; -[SCAuxiliaryDataSubgraph initWithGraph:outputDataKeys:] */

undefined1 *
FUN_106f6c8e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7ff0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f6c98c; end: 106f6c993; -[SCAuxiliaryDataSubgraph graph] */

undefined8 FUN_106f6c98c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f6c994; end: 106f6c99b; -[SCAuxiliaryDataSubgraph outputDataKeys] */

undefined8 FUN_106f6c994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f6c99c; end: 106f6c9cb; -[SCAuxiliaryDataSubgraph .cxx_destruct] */

void FUN_106f6c99c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f6c9cc; end: 106f6d033; -[SCSpectaclesBLEClientController initWithDevice:peripheralResponseHandler:connectionHub:delegate:centralManager:] */

undefined8 *
FUN_106f6c9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_3);
  _objc_initWeak(auStack_78,param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_80,param_6);
  _objc_retain(param_7);
  puStack_88 = PTR_PTR_1126f7ff8;
  puVar1 = &uStack_90;
  uStack_90 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_70;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 1,puVar2);
    _objc_release(puVar2);
    puVar2 = auStack_78;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 2,puVar2);
    _objc_release(puVar2);
    _objc_retain(param_5);
    uVar3 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar3);
    puVar2 = auStack_80;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 4,puVar2);
    _objc_release(puVar2);
    puVar4 = PTR_PTR_1126d3788;
    _objc_alloc();
    func_0x00010bffd580();
    uVar3 = puVar1[5];
    puVar1[5] = puVar4;
    _objc_release(uVar3);
    puVar1[0xe] = 0;
    puVar1[0xc] = 0;
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = puVar1[9];
    puVar1[9] = puVar4;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126d3790;
    _objc_alloc();
    puVar6 = PTR_PTR_1126c7878;
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_retain(puVar1);
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c226900(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010c0554c0();
    uVar3 = puVar1[10];
    puVar1[10] = puVar5;
    _objc_release(uVar3);
    _objc_release(puVar4);
  }
  _objc_release(param_7);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  return puVar1;
}



/* Entry: 106f6d034; end: 106f6d0a3; -[SCSpectaclesBLEClientController _unpairReasonFromConnectionFailure] */

undefined8 FUN_106f6d034(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0887a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar3 < 0xb) {
    uVar4 = *(undefined8 *)(&UNK_10de18f58 + uVar3 * 8);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 106f6d0a4; end: 106f6d0ab; -[SCSpectaclesBLEClientController transferChannel] */

undefined8 FUN_106f6d0a4(void)

{
  return 2;
}



/* Entry: 106f6d0ac; end: 106f6d0e3; -[SCSpectaclesBLEClientController state] */

undefined8 FUN_106f6d0ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c252440();
  if (lVar1 - 1U < 7) {
    uVar2 = *(undefined8 *)(&UNK_10de18fb0 + (lVar1 - 1U) * 8);
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}



/* Entry: 106f6d0e4; end: 106f6d18b; -[SCSpectaclesBLEClientController connect] */

void FUN_106f6d0e4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f6d18c; end: 106f6d1e7;  */

void FUN_106f6d18c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    *(undefined **)(param_1 + 0x78) = puVar1;
    _objc_release(uVar2);
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x50),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f6d1e8; end: 106f6d28f; -[SCSpectaclesBLEClientController reConnectClient] */

void FUN_106f6d1e8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f6d290; end: 106f6d2f7;  */

void FUN_106f6d290(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(undefined **)(param_1 + 0x78) = puVar2;
    _objc_release(uVar1);
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x50),param_2,7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f6d2f8; end: 106f6d39f; -[SCSpectaclesBLEClientController disconnect] */

void FUN_106f6d2f8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f6d3a0; end: 106f6d3f3;  */

void FUN_106f6d3a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = 1;
    *(undefined8 *)(param_1 + 0x68) = 0;
    _objc_release(uVar1);
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x50),param_2,9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f6d3f4; end: 106f6d41b; -[SCSpectaclesBLEClientController client] */

void FUN_106f6d3f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f6d41c; end: 106f6d41f; -[SCSpectaclesBLEClientController bleMonitor:didFindPeripheral:] */

void FUN_106f6d41c(void)

{
  return;
}



/* Entry: 106f6d420; end: 106f6d51f; -[SCSpectaclesBLEClientController bleMonitor:didConnectPeripheral:] */

void FUN_106f6d420(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6d520; end: 106f6d583;  */

void FUN_106f6d520(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + 0x28))) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = uVar3;
    _objc_release(uVar2);
    func_0x00010bfd10a0(*(undefined8 *)(lVar1 + 0x50),param_2,2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f6d584; end: 106f6d67f; -[SCSpectaclesBLEClientController bleMonitor:didDisconnectPeripheral:reason:] */

void FUN_106f6d584(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_5;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6d680; end: 106f6d797;  */

void FUN_106f6d680(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (*(long *)(param_2 + 0x20) != *(long *)(lVar1 + 0x28))) goto LAB_106f6d780;
  lVar4 = *(long *)(param_2 + 0x30);
  if (lVar4 < 2) {
    if (lVar4 != 0) {
      if (lVar4 != 1) goto LAB_106f6d780;
      goto LAB_106f6d770;
    }
  }
  else if (lVar4 == 2) {
    lVar4 = *(long *)(lVar1 + 0x38);
    func_0x00010bdc1f00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x38);
      func_0x00010bdc1f00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      _objc_release(uVar3);
      _objc_release(lVar4);
      if (-80.0 <= param_1) goto LAB_106f6d774;
    }
LAB_106f6d770:
    *(undefined8 *)(lVar1 + 0x70) = 0;
  }
  else {
    if (lVar4 != 3) goto LAB_106f6d780;
    lVar4 = lVar1 + 8;
    _objc_loadWeakRetained(lVar4);
    lVar2 = lVar4;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286e60();
    _objc_release(lVar2);
    _objc_release(lVar4);
  }
LAB_106f6d774:
  func_0x00010bfd10a0(*(undefined8 *)(lVar1 + 0x50),param_3,9);
LAB_106f6d780:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f6d798; end: 106f6d86f; -[SCSpectaclesBLEClientController peripheralRequiresEncryptionSetup:] */

void FUN_106f6d798(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6d870; end: 106f6d91b;  */

void FUN_106f6d870(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + 0x38))) {
    func_0x00010bebfe00(lVar1);
    uVar5 = *(undefined8 *)(lVar1 + 0x38);
    lVar2 = lVar1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c228900(uVar5,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f6d91c; end: 106f6d9f3; -[SCSpectaclesBLEClientController peripheralDidOpenStream:] */

void FUN_106f6d91c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6d9f4; end: 106f6da63;  */

void FUN_106f6d9f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + 0x38))) {
    puVar2 = PTR_PTR_1126b6718;
    func_0x00010c15e760();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x80);
    *(undefined **)(lVar1 + 0x80) = puVar2;
    _objc_release(uVar3);
    func_0x00010c15c6e0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(lVar1 + 0x80));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f6da64; end: 106f6db63; -[SCSpectaclesBLEClientController peripheral:didReceiveResponse:] */

void FUN_106f6da64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6db64; end: 106f6dc9b;  */

void FUN_106f6db64(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + 0x38))) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar2 == 0) || (lVar2 = *(long *)(lVar1 + 0x80), _objc_release(), lVar2 == 0)) {
      lVar2 = lVar1 + 0x10;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bfd1e20();
      _objc_release(lVar2);
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x80);
      *(undefined8 *)(lVar1 + 0x80) = 0;
      _objc_release(uVar3);
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010c13bcc0();
      if (lVar2 == 4) {
        *(undefined8 *)(lVar1 + 0x70) = 0;
        func_0x00010bec2f60(lVar1);
        lVar2 = lVar1 + 8;
        _objc_loadWeakRetained(lVar2);
        lVar4 = lVar2;
        func_0x00010c0692a0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
        puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f260(puVar6,param_2,puVar5);
        func_0x00010c286e40(lVar4,param_2,puVar6);
        _objc_release(puVar5);
        _objc_release(lVar4);
        _objc_release(lVar2);
        uVar3 = *(undefined8 *)(lVar1 + 0x50);
        uVar7 = 4;
      }
      else {
        uVar3 = *(undefined8 *)(lVar1 + 0x50);
        uVar7 = 9;
      }
      func_0x00010bfd10a0(uVar3,param_2,uVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f6dc9c; end: 106f6dc9f; -[SCSpectaclesBLEClientController peripheral:didReceiveEncryptionResponse:] */

void FUN_106f6dc9c(void)

{
  return;
}



/* Entry: 106f6dca0; end: 106f6dd9f; -[SCSpectaclesBLEClientController peripheral:didFailWithError:] */

void FUN_106f6dca0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6dda0; end: 106f6de47;  */

void FUN_106f6dda0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + 0x38))) {
    lVar2 = lVar1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286e60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)(lVar1 + 0x68) = uVar5;
    _objc_release(uVar4);
    *(undefined8 *)(lVar1 + 0x60) = 5;
    func_0x00010bfd10a0(*(undefined8 *)(lVar1 + 0x50),param_2,9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f6de48; end: 106f6df1f; -[SCSpectaclesBLEClientController communicationClientDidBecomeActive:] */

void FUN_106f6de48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6df20; end: 106f6df6b;  */

void FUN_106f6df20(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + 0x40))) {
    func_0x00010bfd10a0(*(undefined8 *)(lVar1 + 0x50),param_2,6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f6df6c; end: 106f6e06b; -[SCSpectaclesBLEClientController communicationClient:didError:] */

void FUN_106f6df6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6e06c; end: 106f6e0d7;  */

void FUN_106f6e06c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + 0x40))) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)(lVar1 + 0x68) = uVar3;
    _objc_release(uVar2);
    *(undefined8 *)(lVar1 + 0x60) = 5;
    func_0x00010bfd10a0(*(undefined8 *)(lVar1 + 0x50),param_2,9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f6e0d8; end: 106f6e31f; -[SCSpectaclesBLEClientController _checkForExistingConnection] */

void FUN_106f6e0d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar1 = lVar5;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_release(lVar5);
  }
  else {
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar5);
    if (lVar4 != 0) {
      lVar5 = *(long *)(param_1 + 0x18);
      func_0x00010c0f99c0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c0f99c0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c07bd00();
        _objc_release(uVar6);
        _objc_release(lVar5);
        if ((int)uVar7 != 0) {
          uVar6 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c0f99c0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c0f99c0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)(param_1 + 0x30) = uVar7;
          _objc_release(uVar8);
          _objc_release(uVar6);
          uVar7 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c0f99c0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 *)(param_1 + 0x38) = uVar7;
          _objc_release(uVar6);
          func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x38));
          func_0x00010c229b20(*(undefined8 *)(param_1 + 0x28));
          uVar7 = 5;
          goto LAB_106f6e308;
        }
      }
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0f99c0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      _objc_release(uVar7);
      func_0x00010c1daac0(*(undefined8 *)(param_1 + 0x18));
      func_0x00010bf2df80(*(undefined8 *)(param_1 + 0x28));
      uVar7 = 1;
      goto LAB_106f6e308;
    }
  }
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar1 = lVar5;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  if (lVar1 != 0) {
    lVar5 = param_1 + 8;
    _objc_loadWeakRetained(lVar5);
    lVar1 = lVar5;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    _objc_release(lVar5);
  }
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained(lVar5);
  lVar1 = lVar5;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281d00();
  _objc_release(lVar1);
  _objc_release(lVar5);
  uVar7 = 9;
LAB_106f6e308:
                    /* WARNING: Could not recover jumptable at 0x00010bfd10b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_handleEvent__1125d1dd0,uVar7);
  return;
}



/* Entry: 106f6e320; end: 106f6e3ff; -[SCSpectaclesBLEClientController _connectCoreBluetoothPeripheral] */

void FUN_106f6e320(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar2 + 1;
  if (3 < lVar2) {
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar1 = lVar2;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed1be0(param_1);
    func_0x00010c281d00(lVar1);
    _objc_release(lVar1);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bfd10b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x50),PTR_s_handleEvent__1125d1dd0,9);
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48300(uVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f6e400; end: 106f6e42f; -[SCSpectaclesBLEClientController _setupConnectedCoreBluetoothPeripheral] */

void FUN_106f6e400(long param_1,undefined8 param_2)

{
  func_0x00010c229b20(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bfd10b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_handleEvent__1125d1dd0,3);
  return;
}



/* Entry: 106f6e430; end: 106f6e4b7; -[SCSpectaclesBLEClientController _createSpectaclesPeripheralAndOpenStream] */

void FUN_106f6e430(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126d3238;
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f9aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0e98f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_openStream_112618050)
  ;
  return;
}



/* Entry: 106f6e4b8; end: 106f6e5e7; -[SCSpectaclesBLEClientController _connectClient] */

void FUN_106f6e4b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c262ee0();
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126d3238;
  if ((int)lVar2 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d7900(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar6;
    _objc_release(uVar7);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_start_112671080);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfd10b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_handleEvent__1125d1dd0,6);
  return;
}



/* Entry: 106f6e5e8; end: 106f6e6a7; -[SCSpectaclesBLEClientController _clientConnected] */

void FUN_106f6e5e8(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_2 + 0x18);
  func_0x00010c0f99c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_2 + 0x38);
  _objc_release();
  if (lVar1 != lVar4) {
    func_0x00010c1daac0(*(undefined8 *)(param_2 + 0x18),param_3,*(undefined8 *)(param_2 + 0x38));
  }
  func_0x00010c250480(*(undefined8 *)(param_2 + 0x28));
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26f3a0(*(undefined8 *)(param_2 + 0x78));
  func_0x00010c0df720(param_1 * -1000.0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3cc20(lVar1,param_3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106f6e6a8; end: 106f6e767; -[SCSpectaclesBLEClientController _interrupt] */

void FUN_106f6e6a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar1);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf3cc60();
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  func_0x00010bec2f60(param_1);
  func_0x00010bfcfec0(*(undefined8 *)(param_1 + 0x40));
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  func_0x00010c1daac0(*(undefined8 *)(param_1 + 0x18),param_2,0);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x38),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  func_0x00010bf2df80(*(undefined8 *)(param_1 + 0x28));
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf3cc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f6e768; end: 106f6e7cf; -[SCSpectaclesBLEClientController _startEncryptionSetupTimer] */

void FUN_106f6e768(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bec2f60();
  if (*(long *)(param_1 + 0x58) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126bc890;
  func_0x00010c150380(0x4014000000000000,PTR_PTR_1126bc890,param_2,param_1,
                      PTR_s__encryptionSetupDidTimeout_112536310,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106f6e7d0; end: 106f6e7fb; -[SCSpectaclesBLEClientController _stopEncryptionSetupTimer] */

void FUN_106f6e7d0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f6e7fc; end: 106f6e8a3; -[SCSpectaclesBLEClientController _encryptionSetupDidTimeout] */

void FUN_106f6e7fc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f6e8a4; end: 106f6e8e3;  */

void FUN_106f6e8a4(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bec2f60(param_1);
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x50),param_2,8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f6e8e4; end: 106f6e8eb; -[SCSpectaclesBLEClientController timeout] */

undefined8 FUN_106f6e8e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106f6e8ec; end: 106f6e8f3; -[SCSpectaclesBLEClientController setTimeout:] */

void FUN_106f6e8ec(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x88) = param_1;
  return;
}



/* Entry: 106f6e8f4; end: 106f6e9a7; -[SCSpectaclesBLEClientController .cxx_destruct] */

void FUN_106f6e8f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106f6e9a8; end: 106f6ee7f; -[SCSpectaclesBTCMFIClientController initWithDevice:connectionHub:delegate:] */

undefined8 *
FUN_106f6e9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_78,param_5);
  puStack_80 = PTR_PTR_1126f8000;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_70;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 2,puVar2);
    _objc_release(puVar2);
    _objc_retain(param_4);
    uVar3 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar3);
    puVar2 = auStack_78;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 3,puVar2);
    _objc_release(puVar2);
    puVar1[0xd] = 0x4024000000000000;
    puVar1[10] = 0;
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = puVar1[7];
    puVar1[7] = puVar4;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126d3790;
    _objc_alloc();
    puVar6 = PTR_PTR_1126c7878;
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_retain(puVar1);
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR_PTR_1126c7878;
    func_0x00010c27ac40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c226900(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010c0554c0();
    uVar3 = puVar1[9];
    puVar1[9] = puVar5;
    _objc_release(uVar3);
    _objc_release(puVar4);
  }
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  return puVar1;
}



/* Entry: 106f6ee80; end: 106f6ee87; -[SCSpectaclesBTCMFIClientController transferChannel] */

undefined8 FUN_106f6ee80(void)

{
  return 0;
}



/* Entry: 106f6ee88; end: 106f6eebf; -[SCSpectaclesBTCMFIClientController state] */

undefined8 FUN_106f6ee88(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c252440();
  if (lVar1 - 1U < 5) {
    uVar2 = *(undefined8 *)(&UNK_10de18fe8 + (lVar1 - 1U) * 8);
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}



/* Entry: 106f6eec0; end: 106f6ef67; -[SCSpectaclesBTCMFIClientController connect] */

void FUN_106f6eec0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f6ef68; end: 106f6efc3;  */

void FUN_106f6ef68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar1;
    _objc_release(uVar2);
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x48),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f6efc4; end: 106f6f06b; -[SCSpectaclesBTCMFIClientController reConnectClient] */

void FUN_106f6efc4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f6f06c; end: 106f6f0e3;  */

void FUN_106f6f06c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x48);
    func_0x00010c252440();
    if (lVar1 == 4) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = 0;
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      *(undefined **)(param_1 + 0x60) = puVar3;
      _objc_release(uVar2);
      func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x48),param_2,7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f6f0e4; end: 106f6f18b; -[SCSpectaclesBTCMFIClientController disconnect] */

void FUN_106f6f0e4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f6f18c; end: 106f6f1df;  */

void FUN_106f6f18c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = 1;
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar1);
    func_0x00010bfd10a0(*(undefined8 *)(param_1 + 0x48),param_2,4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f6f1e0; end: 106f6f207; -[SCSpectaclesBTCMFIClientController client] */

void FUN_106f6f1e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f6f208; end: 106f6f2df; -[SCSpectaclesBTCMFIClientController communicationClientDidBecomeActive:] */

void FUN_106f6f208(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6f2e0; end: 106f6f32b;  */

void FUN_106f6f2e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + 0x30))) {
    func_0x00010bfd10a0(*(undefined8 *)(lVar1 + 0x48),param_2,3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f6f32c; end: 106f6f42b; -[SCSpectaclesBTCMFIClientController communicationClient:didError:] */

void FUN_106f6f32c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6f42c; end: 106f6f497;  */

void FUN_106f6f42c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + 0x30))) {
    *(undefined8 *)(lVar1 + 0x50) = 5;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x58);
    *(undefined8 *)(lVar1 + 0x58) = uVar3;
    _objc_release(uVar2);
    func_0x00010bfd10a0(*(undefined8 *)(lVar1 + 0x48),param_2,4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f6f498; end: 106f6f55b; -[SCSpectaclesBTCMFIClientController bluetoothDidConnect:] */

void FUN_106f6f498(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}


