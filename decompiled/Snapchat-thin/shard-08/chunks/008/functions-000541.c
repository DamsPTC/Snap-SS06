/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106637cf0; end: 106637d2f; +[SCGroupUnifiedProfileIdentityUpdateHelper performInitialStateUpdateWithProvider:] */

void FUN_106637cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c285380(param_3);
  func_0x00010c2885e0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106637d30; end: 106637eff; +[SCGroupUnifiedProfileIdentityUpdateHelper updateParticipantsWithProvider:] */

void FUN_106637d30(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar5 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_circumstanceEngine_1125abfe0);
  if ((uVar5 & 1) == 0) {
    uVar5 = 0;
LAB_106637d94:
    uVar1 = param_3;
    _objc_opt_respondsToSelector(param_3,PTR_s_legacyParticipantsForGroupAvatar_1126016c0);
    if ((uVar1 & 1) != 0) {
      param_1 = param_3;
      func_0x00010c08f2c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106637dd0;
    }
  }
  else {
    uVar5 = param_3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar5 == 0) || (uVar1 = uVar5, func_0x000108fab284(), (int)uVar1 == 0)) goto LAB_106637d94;
  }
  func_0x00010c0f4b60(param_1);
  _objc_retainAutoreleasedReturnValue();
LAB_106637dd0:
  uVar1 = param_3;
  func_0x00010bfcf4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcee40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uVar2 = param_3;
    func_0x00010c063ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    if (uVar3 != 0) {
      uVar2 = param_3;
      func_0x00010c063ea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(uVar2);
    }
  }
  uVar2 = param_3;
  func_0x00010c0f4b20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0f4b00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106637f00; end: 106638517; +[SCGroupUnifiedProfileIdentityUpdateHelper participantsWithProvider:] */

void FUN_106637f00(undefined8 ***param_1,undefined8 param_2,undefined8 ***param_3)

{
  undefined8 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  undefined8 ***pppuVar12;
  undefined8 ***pppuVar13;
  undefined8 uVar14;
  undefined8 ***pppuVar15;
  long lVar16;
  undefined8 **ppuStack_310;
  undefined8 **ppuStack_308;
  undefined8 **ppuStack_300;
  long lStack_2f8;
  undefined8 **ppuStack_2f0;
  undefined8 **ppuStack_2e8;
  undefined8 **ppuStack_2e0;
  undefined8 **ppuStack_2d8;
  undefined8 **ppuStack_2d0;
  undefined8 **ppuStack_2c8;
  undefined1 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined8 **ppuStack_2a8;
  undefined8 *puStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_1e0;
  undefined8 **ppuStack_1d0;
  undefined8 **ppuStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined8 **ppuStack_1a8;
  undefined8 **ppuStack_1a0;
  undefined8 **ppuStack_198;
  undefined8 **ppuStack_190;
  undefined8 **ppuStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 **ppuStack_168;
  undefined8 **ppuStack_160;
  undefined8 **ppuStack_158;
  undefined8 **ppuStack_150;
  undefined8 **ppuStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *apuStack_f8 [16];
  undefined8 **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  pppuVar2 = param_3;
  func_0x00010bfcf4a0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar12 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_circumstanceEngine_1125abfe0);
  if (((ulong)pppuVar12 & 1) == 0) {
    pppuVar12 = (undefined8 ***)0x0;
  }
  else {
    pppuVar12 = param_3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
  }
  pppuVar3 = pppuVar2;
  func_0x00010bfba020();
  _objc_retainAutoreleasedReturnValue();
  if (((pppuVar12 != (undefined8 ***)0x0) &&
      (pppuVar13 = pppuVar12, func_0x000108fab284(), (int)pppuVar13 != 0)) &&
     (pppuVar3 != (undefined8 ***)0x0)) {
    pppuVar13 = pppuVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar13;
    func_0x000107cf9e44();
    _objc_release(pppuVar13);
    if ((int)pppuVar15 != 0) {
      pppuVar13 = pppuVar3;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar15 = pppuVar13;
      func_0x000107cf9d2c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar13);
      pppuVar13 = pppuVar15;
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar11 = pppuVar13;
      func_0x00010bf529e0();
      if (pppuVar11 == (undefined8 ***)0x0) {
LAB_106638180:
        _objc_release(pppuVar13);
      }
      else {
        pppuVar11 = pppuVar15;
        func_0x00010c2925c0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar4 = pppuVar11;
        func_0x00010bf529e0();
        _objc_release(pppuVar11);
        _objc_release(pppuVar13);
        if (pppuVar4 != (undefined8 ***)0x0) {
          pppuVar11 = pppuVar15;
          func_0x00010c0f4aa0(pppuVar15);
          _objc_retainAutoreleasedReturnValue();
          pppuVar4 = pppuVar15;
          func_0x00010c2925c0(pppuVar15);
          _objc_retainAutoreleasedReturnValue();
          pppuVar13 = pppuVar3;
          FUN_10663f330(pppuVar3,pppuVar11,pppuVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(pppuVar4);
          _objc_release(pppuVar11);
          pppuVar11 = pppuVar13;
          func_0x00010bf529e0();
          if (pppuVar11 != (undefined8 ***)0x0) {
            pppuVar4 = param_3;
            ppuStack_148 = pppuVar3;
            func_0x00010c08f660();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_150 = pppuVar4;
            func_0x00010c2928c0();
            _objc_retainAutoreleasedReturnValue();
            pppuVar3 = pppuVar4;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            pppuVar5 = pppuVar3;
            func_0x00010c293a00();
            _objc_retainAutoreleasedReturnValue();
            pppuVar6 = param_1;
            pppuVar11 = pppuVar5;
            func_0x00010be70740();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(pppuVar5);
            _objc_release(pppuVar3);
            _objc_release(pppuVar4);
            _objc_release(ppuStack_150);
            pppuVar3 = pppuVar6;
            func_0x00010bf529e0();
            if (pppuVar3 != (undefined8 ***)0x0) {
              pppuVar10 = pppuVar6;
              func_0x00010be6e360();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(pppuVar6);
              _objc_release(pppuVar13);
              _objc_release(pppuVar15);
              pppuVar3 = (undefined8 ***)ppuStack_148;
              goto LAB_1066384b8;
            }
            _objc_release(pppuVar6);
            pppuVar3 = (undefined8 ***)ppuStack_148;
          }
          goto LAB_106638180;
        }
      }
      _objc_release(pppuVar15);
    }
  }
  pppuVar15 = param_1;
  func_0x00010bfcee80();
  _objc_retainAutoreleasedReturnValue();
  pppuVar13 = pppuVar15;
  func_0x00010bf529e0();
  if (pppuVar13 == (undefined8 ***)0x1) {
    pppuVar11 = pppuVar15;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar11;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar13 = pppuVar4;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar4);
    _objc_release(pppuVar11);
    pppuVar5 = (undefined8 ***)PTR_PTR_1126cc488;
    _objc_alloc();
    pppuVar11 = pppuVar15;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar11;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar5;
    func_0x00010c05ac00();
    _objc_release(pppuVar4);
    _objc_release(pppuVar11);
    func_0x00010c16da00(pppuVar6);
    pppuVar10 = &ppuStack_78;
    pppuVar11 = (undefined8 ***)0x1;
    param_1 = (undefined8 ***)PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_78 = pppuVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuStack_168 = param_1;
    ppuStack_160 = pppuVar12;
    ppuStack_158 = pppuVar2;
    ppuStack_150 = param_3;
    ppuStack_148 = pppuVar3;
    func_0x00010c08f660();
    _objc_retainAutoreleasedReturnValue();
    pppuVar2 = param_3;
    func_0x00010c2928c0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar13 = pppuVar4;
    func_0x00010c293a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar4);
    _objc_release(pppuVar2);
    _objc_release(param_3);
    pppuVar6 = (undefined8 ***)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(pppuVar15);
    pppuVar11 = (undefined8 ***)apuStack_f8;
    pppuVar2 = pppuVar15;
    func_0x00010bf52a60();
    if (pppuVar2 != (undefined8 ***)0x0) {
      lVar16 = *plStack_130;
      do {
        pppuVar12 = (undefined8 ***)0x0;
        do {
          if (*plStack_130 != lVar16) {
            _objc_enumerationMutation(pppuVar15);
          }
          uVar14 = *(undefined8 *)(lStack_138 + (long)pppuVar12 * 8);
          uVar7 = uVar14;
          func_0x00010c2923e0(uVar14);
          _objc_retainAutoreleasedReturnValue();
          pppuVar3 = pppuVar13;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          pppuVar4 = pppuVar3;
          func_0x00010c0720c0();
          _objc_release(pppuVar3);
          if (((ulong)pppuVar4 & 1) == 0) {
            func_0x00010bf1bae0(uVar14);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar14;
            func_0x00010bf1acc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar14);
            puVar9 = PTR_PTR_1126cc488;
            _objc_alloc(PTR_PTR_1126cc488);
            func_0x00010c05ac00();
            func_0x00010c16da00();
            func_0x00010befa120(pppuVar6);
            pppuVar3 = pppuVar6;
            func_0x00010bf529e0();
            _objc_release(puVar9);
            _objc_release(uVar8);
            if ((undefined8 ***)0x2 < pppuVar3) {
              _objc_release(uVar7);
              pppuVar4 = pppuVar2;
              goto LAB_106638454;
            }
          }
          _objc_release(uVar7);
          pppuVar12 = (undefined8 ***)((long)pppuVar12 + 1);
        } while (pppuVar2 != pppuVar12);
        pppuVar11 = (undefined8 ***)apuStack_f8;
        pppuVar2 = pppuVar15;
        func_0x00010bf52a60();
        pppuVar4 = pppuVar2;
      } while (pppuVar2 != (undefined8 ***)0x0);
    }
LAB_106638454:
    _objc_release(pppuVar15);
    pppuVar5 = (undefined8 ***)PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_alloc();
    func_0x00010bff4000();
    param_1 = (undefined8 ***)ppuStack_168;
    pppuVar10 = pppuVar5;
    func_0x00010be6e360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar5);
    param_3 = (undefined8 ***)ppuStack_150;
    pppuVar2 = (undefined8 ***)ppuStack_158;
    pppuVar12 = (undefined8 ***)ppuStack_160;
    pppuVar3 = (undefined8 ***)ppuStack_148;
  }
  _objc_release(pppuVar6);
  _objc_release(pppuVar13);
  _objc_release(pppuVar15);
LAB_1066384b8:
  _objc_release(pppuVar3);
  _objc_release(pppuVar12);
  _objc_release(pppuVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_178 = FUN_106638518;
    lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_1d0 = pppuVar3;
    ppuStack_1c8 = pppuVar4;
    ppuStack_1c0 = pppuVar6;
    ppuStack_1b8 = pppuVar13;
    ppuStack_1b0 = pppuVar15;
    ppuStack_1a8 = param_1;
    ppuStack_1a0 = pppuVar12;
    ppuStack_198 = pppuVar2;
    ppuStack_190 = pppuVar5;
    ppuStack_188 = param_3;
    puStack_180 = &stack0xfffffffffffffff0;
    _objc_retain(pppuVar10);
    _objc_retain(pppuVar11);
    pppuVar12 = (undefined8 ***)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_298 = 0;
    puStack_2a0 = (undefined8 **)0x0;
    uStack_288 = 0;
    plStack_290 = (long *)0x0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    _objc_retain(pppuVar10);
    pppuVar2 = (undefined8 ***)&puStack_2a0;
    ppuStack_2a8 = pppuVar10;
    func_0x00010bf52a60();
    pppuVar3 = param_1;
    if (pppuVar10 != (undefined8 ***)0x0) {
      lVar16 = *plStack_290;
      do {
        pppuVar13 = (undefined8 ***)0x0;
        do {
          if (*plStack_290 != lVar16) {
            _objc_enumerationMutation(ppuStack_2a8);
          }
          pppuVar15 = *(undefined8 ****)(lStack_298 + (long)pppuVar13 * 8);
          pppuVar2 = pppuVar15;
          func_0x00010c244340();
          _objc_retainAutoreleasedReturnValue();
          pppuVar3 = pppuVar2;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(pppuVar2);
          pppuVar2 = pppuVar11;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          pppuVar4 = pppuVar2;
          func_0x00010c0720c0();
          _objc_release(pppuVar2);
          if (((ulong)pppuVar4 & 1) == 0) {
            pppuVar4 = (undefined8 ***)PTR_PTR_1126cc488;
            _objc_alloc();
            func_0x00010c05ac00();
            func_0x00010c244340(pppuVar15);
            _objc_retainAutoreleasedReturnValue();
            pppuVar2 = pppuVar15;
            func_0x00010bf1bae0();
            _objc_retainAutoreleasedReturnValue();
            pppuVar5 = pppuVar2;
            func_0x00010bf1acc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c16da00(pppuVar4);
            _objc_release(pppuVar5);
            _objc_release(pppuVar2);
            _objc_release(pppuVar15);
            pppuVar2 = pppuVar4;
            func_0x00010befa120(pppuVar12);
            pppuVar15 = pppuVar12;
            func_0x00010bf529e0();
            _objc_release(pppuVar4);
            if ((undefined8 ***)0x2 < pppuVar15) {
              _objc_release(pppuVar3);
              goto LAB_1066386fc;
            }
          }
          _objc_release(pppuVar3);
          pppuVar13 = (undefined8 ***)((long)pppuVar13 + 1);
        } while (pppuVar10 != pppuVar13);
        pppuVar2 = (undefined8 ***)&puStack_2a0;
        pppuVar10 = (undefined8 ***)ppuStack_2a8;
        func_0x00010bf52a60();
      } while (pppuVar10 != (undefined8 ***)0x0);
    }
LAB_1066386fc:
    ppuVar1 = ppuStack_2a8;
    _objc_release(ppuStack_2a8);
    param_1 = pppuVar12;
    func_0x00010bf51e00();
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(ppuVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e0) {
      ___stack_chk_fail();
      pppuVar4 = &ppuStack_310;
      ppuStack_2c8 = ppuVar1;
      pcStack_2b8 = FUN_10663876c;
      lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuVar13 = pppuVar2;
      ppuStack_2f0 = pppuVar15;
      ppuStack_2e8 = pppuVar3;
      ppuStack_2e0 = param_1;
      ppuStack_2d8 = pppuVar12;
      ppuStack_2d0 = pppuVar11;
      ppuStack_2c0 = &puStack_180;
      _objc_retain(pppuVar2);
      pppuVar12 = pppuVar2;
      func_0x00010bf529e0();
      if (pppuVar12 < (undefined8 ***)0x3) {
        _objc_retain(pppuVar2);
        pppuVar4 = pppuVar13;
        param_1 = pppuVar2;
      }
      else {
        pppuVar12 = pppuVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        pppuVar3 = pppuVar2;
        ppuStack_310 = pppuVar12;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        pppuVar13 = pppuVar2;
        ppuStack_308 = pppuVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        param_1 = (undefined8 ***)PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_300 = pppuVar13;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppuVar13);
        _objc_release(pppuVar3);
        _objc_release(pppuVar12);
      }
      _objc_release(pppuVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
        ___stack_chk_fail();
        _objc_retain(pppuVar4);
        pppuVar2 = pppuVar4;
        func_0x00010bfcf4a0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar12 = pppuVar2;
        func_0x00010bfcee40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppuVar2);
        pppuVar2 = pppuVar12;
        func_0x00010bf43280();
        _objc_retainAutoreleasedReturnValue();
        pppuVar3 = pppuVar2;
        func_0x00010bf529e0();
        if (pppuVar3 == (undefined8 ***)0x0) {
          param_1 = pppuVar4;
          func_0x00010c063ea0(pppuVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(pppuVar2);
          param_1 = pppuVar2;
        }
        _objc_release(pppuVar2);
        _objc_release(pppuVar12);
        _objc_release(pppuVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106638518; end: 10663876b; +[SCGroupUnifiedProfileIdentityUpdateHelper _participantIdsFromFFParticipants:userSnapchatter:] */

void FUN_106638518(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long lVar10;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
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
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar2 = &uStack_130;
  lStack_138 = param_3;
  func_0x00010bf52a60();
  if (param_3 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lStack_138);
        }
        unaff_x24 = *(undefined8 **)(lStack_128 + lVar9 * 8);
        puVar2 = unaff_x24;
        func_0x00010c244340();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = puVar2;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        uVar3 = param_4;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((uVar4 & 1) == 0) {
          puVar5 = (undefined8 *)PTR_PTR_1126cc488;
          _objc_alloc();
          func_0x00010c05ac00();
          func_0x00010c244340(unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = unaff_x24;
          func_0x00010bf1bae0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar2;
          func_0x00010bf1acc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16da00(puVar5,param_2,puVar6);
          _objc_release(puVar6);
          _objc_release(puVar2);
          _objc_release(unaff_x24);
          puVar2 = puVar5;
          func_0x00010befa120(puVar1);
          unaff_x24 = puVar1;
          func_0x00010bf529e0();
          _objc_release(puVar5);
          if ((undefined8 *)0x2 < unaff_x24) {
            _objc_release(unaff_x23);
            goto LAB_1066386fc;
          }
        }
        _objc_release(unaff_x23);
        lVar9 = lVar9 + 1;
      } while (param_3 != lVar9);
      puVar2 = &uStack_130;
      param_3 = lStack_138;
      func_0x00010bf52a60();
    } while (param_3 != 0);
  }
LAB_1066386fc:
  lVar10 = lStack_138;
  _objc_release(lStack_138);
  puVar5 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(lVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar8 = &puStack_1a0;
    lStack_158 = lVar10;
    pcStack_148 = FUN_10663876c;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = puVar2;
    puStack_180 = unaff_x24;
    puStack_178 = unaff_x23;
    puStack_170 = puVar5;
    puStack_168 = puVar1;
    uStack_160 = param_4;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(puVar2);
    puVar1 = puVar2;
    func_0x00010bf529e0();
    if (puVar1 < (undefined8 *)0x3) {
      _objc_retain(puVar2);
      ppuVar8 = (undefined8 **)puVar6;
      puVar5 = puVar2;
    }
    else {
      puVar1 = puVar2;
      func_0x00010c0dfd40(puVar2,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      puStack_1a0 = puVar1;
      func_0x00010c0dfd40(puVar2,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      puStack_198 = puVar6;
      func_0x00010c0dfd40(puVar2,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_190 = puVar7;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar1);
    }
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      _objc_retain(ppuVar8);
      puVar2 = ppuVar8;
      func_0x00010bfcf4a0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010bfcee40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = puVar1;
      func_0x00010bf43280(puVar1,param_2,&PTR___NSConcreteGlobalBlock_110930888);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010bf529e0();
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = ppuVar8;
        func_0x00010c063ea0(ppuVar8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar2);
        puVar5 = puVar2;
      }
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(ppuVar8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10663876c; end: 10663888b; +[SCGroupUnifiedProfileIdentityUpdateHelper _orderParticipantIdsForGroupAvatar:] */

void FUN_10663876c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  ppuVar5 = &puStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 < (undefined *)0x3) {
    _objc_retain(param_3);
    ppuVar5 = (undefined **)puVar2;
    puVar4 = param_3;
  }
  else {
    puVar1 = param_3;
    func_0x00010c0dfd40(param_3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    puStack_60 = puVar1;
    func_0x00010c0dfd40(param_3,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    puStack_58 = puVar2;
    func_0x00010c0dfd40(param_3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(ppuVar5);
    puVar1 = (undefined *)ppuVar5;
    func_0x00010bfcf4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfcee40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010bf43280(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110930888);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf529e0();
    if (puVar3 == (undefined *)0x0) {
      puVar4 = (undefined *)ppuVar5;
      func_0x00010c063ea0(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar1);
      puVar4 = puVar1;
    }
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10663888c; end: 106638947; +[SCGroupUnifiedProfileIdentityUpdateHelper groupMembersWithProvider:] */

void FUN_10663888c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfcf4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfcee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf43280(lVar2,param_2,&PTR___NSConcreteGlobalBlock_110930888);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = param_3;
    func_0x00010c063ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar3 = lVar1;
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106638948; end: 10663894f;  */

void FUN_106638948(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapchatter_11266eac8);
  return;
}



/* Entry: 106638950; end: 106638a7b; -[SCProfileCharmsSectionButtonAccessoryHeaderSupplementaryViewProvider initWithSectionHeaderViewModel:] */

undefined8 * FUN_106638950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_70 = PTR_PTR_1126f22d8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uStack_58 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
    ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6610;
    uVar2 = param_3;
    func_0x00010bf51e00();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_60 = uVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[3];
    puVar1[3] = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined8 *)0x1;
}



/* Entry: 106638a7c; end: 106638a83; -[SCProfileCharmsSectionButtonAccessoryHeaderSupplementaryViewProvider sectionHeaderDisplayStrategy] */

undefined8 FUN_106638a7c(void)

{
  return 1;
}



/* Entry: 106638a84; end: 106638b73; -[SCProfileCharmsSectionButtonAccessoryHeaderSupplementaryViewProvider referenceSizeForSupplementaryElementOfKind:atIndexInSection:withWidth:] */

undefined1  [16]
FUN_106638a84(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  func_0x00010c0720c0(param_4,param_3,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00);
  if ((int)param_4 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar5 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x18);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126cc4a0;
    _objc_opt_class(PTR_PTR_1126cc4a0);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar5 = 0x7fefffffffffffff;
    func_0x00010c23d6e0(param_1,0x7fefffffffffffff,PTR_PTR_1126cc4a8);
    _objc_release(uVar1);
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 106638b74; end: 106638c3f; -[SCProfileCharmsSectionButtonAccessoryHeaderSupplementaryViewProvider viewClassesForSupplementaryViewsByElementKind] */

void FUN_106638b74(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &puStack_30;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_retain(ppuVar8);
    ppuVar2 = ppuVar8;
    func_0x00010c0720c0();
    if ((int)ppuVar2 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = puVar1 + 0x10;
      _objc_loadWeakRetained();
      puVar3 = puVar9;
      func_0x00010c1565c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126cc4a8;
      _objc_retain(puVar3);
      _objc_opt_class(puVar9);
      puVar4 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar9);
      puVar9 = puVar3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar9 = (undefined *)0x0;
      }
      _objc_retain(puVar9);
      _objc_release(puVar3);
      uVar5 = *(ulong *)(puVar1 + 0x18);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar1 = PTR_PTR_1126cc4a0;
      _objc_opt_class(PTR_PTR_1126cc4a0);
      uVar7 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar1);
      uVar5 = uVar6;
      if ((uVar7 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar6);
      func_0x00010c2226c0(puVar9);
      _objc_release(uVar5);
      func_0x00010c161980(puVar9);
      _objc_release(puVar3);
    }
    _objc_release(ppuVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106638c40; end: 106638daf; -[SCProfileCharmsSectionButtonAccessoryHeaderSupplementaryViewProvider viewForSupplementaryElementOfKind:atIndexInSection:] */

void FUN_106638c40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = param_1 + 0x10;
    _objc_loadWeakRetained();
    uVar2 = uVar7;
    func_0x00010c1565c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126cc4a8;
    _objc_retain(uVar2);
    _objc_opt_class(puVar3);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar7 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar2);
    uVar4 = *(ulong *)(param_1 + 0x18);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126cc4a0;
    _objc_opt_class(PTR_PTR_1126cc4a0);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    func_0x00010c2226c0(uVar7);
    _objc_release(uVar4);
    func_0x00010c161980(uVar7);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 106638db0; end: 106638db7; -[SCProfileCharmsSectionButtonAccessoryHeaderSupplementaryViewProvider actionHandler] */

undefined8 FUN_106638db0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106638db8; end: 106638de7; -[SCProfileCharmsSectionButtonAccessoryHeaderSupplementaryViewProvider setActionHandler:] */

void FUN_106638db8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106638de8; end: 106638dff; -[SCProfileCharmsSectionButtonAccessoryHeaderSupplementaryViewProvider supplementaryViewProviderDelegate] */

void FUN_106638de8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106638e00; end: 106638e0b; -[SCProfileCharmsSectionButtonAccessoryHeaderSupplementaryViewProvider setSupplementaryViewProviderDelegate:] */

void FUN_106638e00(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106638e0c; end: 106638e13; -[SCProfileCharmsSectionButtonAccessoryHeaderSupplementaryViewProvider supplementaryViewModels] */

undefined8 FUN_106638e0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106638e14; end: 106638e1b; -[SCProfileCharmsSectionButtonAccessoryHeaderSupplementaryViewProvider setSupplementaryViewModels:] */

void FUN_106638e14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106638e1c; end: 106638e53; -[SCProfileCharmsSectionButtonAccessoryHeaderSupplementaryViewProvider .cxx_destruct] */

void FUN_106638e1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106638e54; end: 106638ec7; -[SCProfileSectionButtonAccessoryHeaderSupplementaryViewProvider initWithSectionHeaderViewModel:] */

undefined1 * FUN_106638e54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f22e0;
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



/* Entry: 106638ec8; end: 106638ecf; -[SCProfileSectionButtonAccessoryHeaderSupplementaryViewProvider sectionHeaderDisplayStrategy] */

undefined8 FUN_106638ec8(void)

{
  return 1;
}



/* Entry: 106638ed0; end: 106638f47; -[SCProfileSectionButtonAccessoryHeaderSupplementaryViewProvider referenceSizeForSupplementaryElementOfKind:atIndexInSection:withWidth:] */

undefined1  [16]
FUN_106638ed0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  func_0x00010c0720c0(param_4,param_3,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00);
  if ((int)param_4 != 0) {
    uVar1 = 0x7fefffffffffffff;
                    /* WARNING: Could not recover jumptable at 0x00010c23d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,0x7fefffffffffffff,PTR_PTR_1126cc4a8,
               PTR_s_sizeWithViewModel_constrainedToS_11266cfe0,*(undefined8 *)(param_2 + 8));
    auVar2._8_8_ = uVar1;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 106638f48; end: 106639013; -[SCProfileSectionButtonAccessoryHeaderSupplementaryViewProvider viewClassesForSupplementaryViewsByElementKind] */

void FUN_106638f48(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_30;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_retain(ppuVar6);
    ppuVar2 = ppuVar6;
    func_0x00010c0720c0();
    if ((int)ppuVar2 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar1 + 0x20;
      _objc_loadWeakRetained();
      puVar3 = puVar7;
      func_0x00010c1565c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126cc4a8;
      _objc_retain(puVar3);
      _objc_opt_class(puVar7);
      puVar4 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar7);
      puVar7 = puVar3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
      _objc_retain(puVar7);
      _objc_release(puVar3);
      func_0x00010c2226c0(puVar7);
      func_0x00010c161980(puVar7);
      _objc_retain(puVar7);
      uVar5 = *(undefined8 *)(puVar1 + 0x10);
      *(undefined **)(puVar1 + 0x10) = puVar7;
      _objc_release(uVar5);
      _objc_release(puVar3);
    }
    _objc_release(ppuVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106639014; end: 106639123; -[SCProfileSectionButtonAccessoryHeaderSupplementaryViewProvider viewForSupplementaryElementOfKind:atIndexInSection:] */

void FUN_106639014(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + 0x20;
    _objc_loadWeakRetained();
    uVar1 = uVar5;
    func_0x00010c1565c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126cc4a8;
    _objc_retain(uVar1);
    _objc_opt_class(puVar2);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar5 = uVar1;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar1);
    func_0x00010c2226c0(uVar5);
    func_0x00010c161980(uVar5);
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x10) = uVar5;
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106639124; end: 10663915f; -[SCProfileSectionButtonAccessoryHeaderSupplementaryViewProvider updateHeaderViewModel:] */

void FUN_106639124(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c2226c0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106639160; end: 106639167; -[SCProfileSectionButtonAccessoryHeaderSupplementaryViewProvider actionHandler] */

undefined8 FUN_106639160(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106639168; end: 106639197; -[SCProfileSectionButtonAccessoryHeaderSupplementaryViewProvider setActionHandler:] */

void FUN_106639168(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106639198; end: 1066391af; -[SCProfileSectionButtonAccessoryHeaderSupplementaryViewProvider supplementaryViewProviderDelegate] */

void FUN_106639198(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066391b0; end: 1066391bb; -[SCProfileSectionButtonAccessoryHeaderSupplementaryViewProvider setSupplementaryViewProviderDelegate:] */

void FUN_1066391b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1066391bc; end: 1066391c3; -[SCProfileSectionButtonAccessoryHeaderSupplementaryViewProvider supplementaryViewModels] */

undefined8 FUN_1066391bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1066391c4; end: 1066391cb; -[SCProfileSectionButtonAccessoryHeaderSupplementaryViewProvider setSupplementaryViewModels:] */

void FUN_1066391c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1066391cc; end: 10663921b; -[SCProfileSectionButtonAccessoryHeaderSupplementaryViewProvider .cxx_destruct] */

void FUN_1066391cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10663921c; end: 1066392e7; -[SCUnifiedProfileCollectionViewListSectionViewMoreProvider initWithShowMoreText:showLessText:viewMoreLoadingStateProvider:] */

undefined1 *
FUN_10663921c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f22e8;
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



/* Entry: 1066392e8; end: 1066392f3; +[SCUnifiedProfileCollectionViewListSectionViewMoreProvider viewMoreCellClass] */

void FUN_1066392e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126b4678);
  return;
}



/* Entry: 1066392f4; end: 1066392ff; +[SCUnifiedProfileCollectionViewListSectionViewMoreProvider viewMoreCellReuseIdentifier] */

undefined ** FUN_1066392f4(void)

{
  return &PTR____CFConstantStringClassReference_110e577b8;
}



/* Entry: 106639300; end: 1066393ab; -[SCUnifiedProfileCollectionViewListSectionViewMoreProvider viewModelForNumberOfItemsCollapsed:numberOfItemsTotal:] */

void FUN_106639300(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  if (param_3 < 1) {
    uVar1 = *(ulong *)(param_1 + 0x18);
    func_0x00010c233ae0();
    if ((uVar1 & 1) != 0) {
      ppuVar3 = (undefined **)0x0;
      goto LAB_106639378;
    }
    ppuVar3 = *(undefined ***)(param_1 + 0x10);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e577f8;
      goto LAB_106639360;
    }
  }
  else {
    ppuVar3 = *(undefined ***)(param_1 + 8);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e577d8;
LAB_106639360:
      func_0x00010bcbeaa8(ppuVar3,0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106639378;
    }
  }
  _objc_retain(ppuVar3);
LAB_106639378:
  puVar2 = PTR_PTR_1126b4670;
  _objc_alloc(PTR_PTR_1126b4670);
  func_0x00010c021580();
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066393ac; end: 1066393b3; -[SCUnifiedProfileCollectionViewListSectionViewMoreProvider shouldRoundLastCellInList] */

undefined8 FUN_1066393ac(void)

{
  return 1;
}



/* Entry: 1066393b4; end: 1066393cb; -[SCUnifiedProfileCollectionViewListSectionViewMoreProvider viewMoreProviderDelegate] */

void FUN_1066393b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066393cc; end: 1066393d7; -[SCUnifiedProfileCollectionViewListSectionViewMoreProvider setViewMoreProviderDelegate:] */

void FUN_1066393cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1066393d8; end: 10663941b; -[SCUnifiedProfileCollectionViewListSectionViewMoreProvider .cxx_destruct] */

void FUN_1066393d8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10663941c; end: 10663944b;  */

void FUN_10663941c(void)

{
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10663944c; end: 106639467;  */

void FUN_10663944c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,0x4038000000000000,0,PTR__OBJC_CLASS___NSValue_1126afdf8,
             PTR_s_valueWithUIEdgeInsets__1126836f8);
  return;
}



/* Entry: 106639468; end: 10663964f;  */

void FUN_106639468(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _objc_retain();
  FUN_10663941c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001066394d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106639650; end: 10663970b;  */

void FUN_106639650(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b4890;
  uVar3 = 0x4024000000000000;
  if (param_2 == 0) {
    uVar3 = 0x4038000000000000;
  }
  _objc_retain();
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(0,0x4030000000000000,uVar3,0x4030000000000000,
                      PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0435a0(0,0x4024000000000000,puVar1);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10663970c; end: 10663984f;  */

void FUN_10663970c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_2);
      }
      lVar6 = *(long *)(lVar8 * 8);
      uVar3 = param_1;
      FUN_106639850(param_1,lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(uVar3);
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    puVar4 = PTR_PTR_1126b1220;
    _objc_retain(lVar6);
    _objc_alloc(puVar4);
    lVar2 = lVar6;
    func_0x00010bf46560(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0322a0(puVar4);
    _objc_release(lVar2);
    puVar1 = PTR_PTR_1126b1260;
    _objc_alloc(PTR_PTR_1126b1260);
    lVar2 = lVar6;
    func_0x00010c27dd80(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010bfe5ec0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86240(lVar6);
    _objc_release(lVar6);
    func_0x00010c055bc0(puVar1);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106639850; end: 10663994f;  */

void FUN_106639850(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b1220;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf46560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0322a0(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b1260;
  _objc_alloc(PTR_PTR_1126b1260);
  uVar2 = param_2;
  func_0x00010c27dd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86240(param_2);
  _objc_release(param_2);
  func_0x00010c055bc0(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106639950; end: 106639acb; -[SCUnifiedProfileViewControllerLifecycleListenerAnnouncer description] */

void FUN_106639950(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_106639acc(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106639acc; end: 106639b2b;  */

void FUN_106639acc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 106639b2c; end: 106639dd7; -[SCUnifiedProfileViewControllerLifecycleListenerAnnouncer addListener:] */

undefined8 FUN_106639b2c(long param_1,undefined8 param_2,long param_3)

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
  *plVar3 = (long)&PTR_FUN_1109309b0;
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
    FUN_106639dd8(plVar10,auStack_90);
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
    FUN_106639f18(puVar8,&plStack_a0);
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
LAB_106639ce0:
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
      goto LAB_106639d00;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_106639dd8(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_106639dd8(plVar10,auStack_78);
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
    FUN_106639f18(puVar8,&plStack_88);
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
      goto LAB_106639ce0;
    }
  }
  uVar9 = 1;
LAB_106639d00:
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



/* Entry: 106639dd8; end: 106639f17;  */

void FUN_106639dd8(long *param_1,long *param_2)

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
      FUN_10663a378();
LAB_106639f14:
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
      if (uVar7 >> 0x3d != 0) goto LAB_106639f14;
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



/* Entry: 106639f18; end: 106639f5f;  */

void FUN_106639f18(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 106639f60; end: 10663a18f; -[SCUnifiedProfileViewControllerLifecycleListenerAnnouncer removeListener:] */

void FUN_106639f60(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_10663a114;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_106639fc8;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_106639f18(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10663a114;
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
LAB_106639fc8:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_1109309b0;
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
          FUN_106639dd8(plVar9,lVar7);
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
    FUN_106639f18(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_10663a114;
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
LAB_10663a114:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10663a190; end: 10663a25f; -[SCUnifiedProfileViewControllerLifecycleListenerAnnouncer unifiedProfileWillAppear] */

void FUN_10663a190(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  FUN_106639acc(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c2800c0();
      _objc_release(lVar5);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 10663a260; end: 10663a32f; -[SCUnifiedProfileViewControllerLifecycleListenerAnnouncer unifiedProfileDidDisappear] */

void FUN_10663a260(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  FUN_106639acc(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c27ffe0();
      _objc_release(lVar5);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 10663a330; end: 10663a357; -[SCUnifiedProfileViewControllerLifecycleListenerAnnouncer .cxx_destruct] */

void FUN_10663a330(long param_1)

{
  FUN_10663a38c(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10663a358; end: 10663a377; -[SCUnifiedProfileViewControllerLifecycleListenerAnnouncer .cxx_construct] */

void FUN_10663a358(long param_1)

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



/* Entry: 10663a378; end: 10663a38b;  */

undefined * FUN_10663a378(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 10663a38c; end: 10663a3e3;  */

long FUN_10663a38c(long param_1)

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



/* Entry: 10663a3e4; end: 10663a3f3;  */

void FUN_10663a3e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109309b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10663a3f4; end: 10663a413;  */

void FUN_10663a3f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109309b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10663a414; end: 10663a47b;  */

void FUN_10663a414(long param_1)

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



/* Entry: 10663a47c; end: 10663a47f;  */

void FUN_10663a47c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10663a480; end: 10663a4f3; -[SCGrapheneScProfileFlatlandErrorsMetric2 init] */

undefined1 * FUN_10663a480(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f22f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10663a4f4; end: 10663a723;  */

char * FUN_10663a4f4(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  long *plVar4;
  char *pcStack_d0;
  undefined *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110930a58,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppcVar2 = &pcStack_d0;
  pcStack_a8 = FUN_10663a724;
  puStack_c8 = PTR_PTR_1126f22f8;
  pcStack_d0 = pcVar1;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_d0,PTR_s_init_1125d9248);
  if (ppcVar2 != (char **)0x0) {
    pcVar1 = (char *)ppcVar2;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar2 + 8) = pcVar1;
  }
  return (char *)ppcVar2;
}



/* Entry: 10663a724; end: 10663a797; -[SCGrapheneThinBridgeMetric2 init] */

undefined1 * FUN_10663a724(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f22f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10663a798; end: 10663a9c7;  */

/* WARNING: Removing unreachable block (ram,0x00010663be84) */
/* WARNING: Removing unreachable block (ram,0x00010663b860) */
/* WARNING: Removing unreachable block (ram,0x00010663ae80) */
/* WARNING: Removing unreachable block (ram,0x00010663b140) */
/* WARNING: Removing unreachable block (ram,0x00010663bb8c) */
/* WARNING: Removing unreachable block (ram,0x00010663c174) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_10663a798(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char **ppcVar8;
  undefined *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  char *unaff_x23;
  char *unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uVar23;
  undefined8 uVar24;
  char *pcStack_7a0;
  undefined *puStack_798;
  char *pcStack_790;
  char *pcStack_788;
  char *pcStack_780;
  char *pcStack_778;
  undefined8 ****ppppuStack_770;
  code *pcStack_768;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 *puStack_740;
  char acStack_738 [24];
  undefined1 auStack_720 [24];
  undefined1 auStack_708 [24];
  undefined8 auStack_6f0 [2];
  char cStack_6d9;
  long lStack_6d8;
  char *pcStack_6d0;
  char *pcStack_6c8;
  char *pcStack_6c0;
  char *pcStack_6b8;
  char *pcStack_6b0;
  char *pcStack_6a8;
  char *pcStack_6a0;
  char *pcStack_698;
  undefined8 ****ppppuStack_690;
  code *pcStack_688;
  char acStack_678 [24];
  char *pcStack_660;
  char acStack_658 [24];
  undefined1 auStack_640 [24];
  undefined1 auStack_628 [24];
  undefined8 auStack_610 [2];
  char cStack_5f9;
  long lStack_5f8;
  char *pcStack_5f0;
  char *pcStack_5e8;
  char *pcStack_5e0;
  char *pcStack_5d8;
  char *pcStack_5d0;
  char *pcStack_5c8;
  char *pcStack_5c0;
  char *pcStack_5b8;
  undefined8 ****ppppuStack_5b0;
  code *pcStack_5a8;
  char acStack_598 [24];
  char *pcStack_580;
  char acStack_578 [24];
  undefined1 auStack_560 [24];
  undefined1 auStack_548 [24];
  undefined8 auStack_530 [2];
  char cStack_519;
  long lStack_518;
  undefined8 ****ppppuStack_4d0;
  code *pcStack_4c8;
  char acStack_4c0 [24];
  undefined1 *puStack_4a8;
  char acStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined8 auStack_470 [2];
  char cStack_459;
  long lStack_458;
  undefined8 ****ppppuStack_410;
  code *pcStack_408;
  char acStack_3f8 [24];
  char *pcStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  undefined8 *puStack_390;
  char *pcStack_388;
  char *pcStack_380;
  char *pcStack_378;
  undefined8 ****ppppuStack_370;
  code *pcStack_368;
  char acStack_358 [24];
  char *pcStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  char *pcStack_2f0;
  char *pcStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined1 ****ppppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2c0 [24];
  undefined1 *puStack_2a8;
  char acStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined8 auStack_270 [2];
  char cStack_259;
  long lStack_258;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_200 [24];
  undefined1 *puStack_1e8;
  char acStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar22 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar21 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = (char *)auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "\x01";
    unaff_x23 = acStack_98;
    pcVar7 = acStack_98;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar20 = 0;
    puVar22 = auStack_78;
    pcVar4 = param_4;
    do {
      if ((&cStack_49)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_10663a9c8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar1;
  pcVar13 = pcVar7;
  pcVar15 = pcVar4;
  pcStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar22;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  if (pcVar3 != (char *)0x0) {
    plVar21 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (char *)auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar10 = "\x02";
    pcVar13 = acStack_138;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    pcStack_120 = acStack_138;
    func_0x00010007e5dc(&pcStack_120);
    lVar20 = 0;
    pcVar15 = pcVar4;
    do {
      if ((&cStack_e9)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar14 = acStack_200;
  pcStack_148 = FUN_10663abf8;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar10;
  pcVar7 = pcVar13;
  pcVar2 = pcVar15;
  pcVar3 = param_5;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar10);
  _objc_retain(pcVar13);
  _objc_retain(pcVar15);
  if (pcVar4 != (char *)0x0) {
    plVar21 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar10;
      _objc_retainAutorelease(pcVar10);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x00010002b838(acStack_1e0,pcVar1);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar1 = pcVar13;
      func_0x00010bdc3520(pcVar13);
    }
    _objc_release(pcVar13);
    func_0x00010002b838(auStack_1c8,pcVar1);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      unaff_x25 = pcVar15;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar15);
    func_0x00010002b838(auStack_1b0,unaff_x25);
    acStack_200[0] = '\0';
    acStack_200[1] = '\0';
    acStack_200[2] = '\0';
    acStack_200[3] = '\0';
    acStack_200[4] = '\0';
    acStack_200[5] = '\0';
    acStack_200[6] = '\0';
    acStack_200[7] = '\0';
    acStack_200[8] = '\0';
    acStack_200[9] = '\0';
    acStack_200[10] = '\0';
    acStack_200[0xb] = '\0';
    acStack_200[0xc] = '\0';
    acStack_200[0xd] = '\0';
    acStack_200[0xe] = '\0';
    acStack_200[0xf] = '\0';
    acStack_200[0x10] = '\0';
    acStack_200[0x11] = '\0';
    acStack_200[0x12] = '\0';
    acStack_200[0x13] = '\0';
    acStack_200[0x14] = '\0';
    acStack_200[0x15] = '\0';
    acStack_200[0x16] = '\0';
    acStack_200[0x17] = '\0';
    func_0x00010007e1e8(acStack_200,acStack_1e0,&lStack_198,3);
    pcVar1 = "";
    (**(code **)(*plVar21 + 0x18))(plVar21);
    puStack_1e8 = acStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    lVar20 = 0;
    pcVar7 = pcVar14;
    pcVar2 = param_5;
    do {
      if ((&cStack_199)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
      unaff_x24 = acStack_200;
    } while (lVar20 != -0x48);
  }
  _objc_release(pcVar15);
  _objc_release(pcVar13);
  pcVar4 = pcVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar15);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_1e0);
  _objc_release(pcVar15);
  _objc_release(pcVar13);
  _objc_release(pcVar10);
  __Unwind_Resume();
  pcVar11 = acStack_2c0;
  pcStack_208 = FUN_10663aeb8;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar1;
  pcVar13 = pcVar7;
  pcVar15 = pcVar2;
  pcVar14 = pcVar3;
  pppuStack_210 = &ppuStack_150;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  _objc_retain(pcVar2);
  if (pcVar4 != (char *)0x0) {
    plVar21 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_2a0,pcVar4);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar4 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_288,pcVar4);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      unaff_x25 = pcVar2;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_270,unaff_x25);
    acStack_2c0[0] = '\0';
    acStack_2c0[1] = '\0';
    acStack_2c0[2] = '\0';
    acStack_2c0[3] = '\0';
    acStack_2c0[4] = '\0';
    acStack_2c0[5] = '\0';
    acStack_2c0[6] = '\0';
    acStack_2c0[7] = '\0';
    acStack_2c0[8] = '\0';
    acStack_2c0[9] = '\0';
    acStack_2c0[10] = '\0';
    acStack_2c0[0xb] = '\0';
    acStack_2c0[0xc] = '\0';
    acStack_2c0[0xd] = '\0';
    acStack_2c0[0xe] = '\0';
    acStack_2c0[0xf] = '\0';
    acStack_2c0[0x10] = '\0';
    acStack_2c0[0x11] = '\0';
    acStack_2c0[0x12] = '\0';
    acStack_2c0[0x13] = '\0';
    acStack_2c0[0x14] = '\0';
    acStack_2c0[0x15] = '\0';
    acStack_2c0[0x16] = '\0';
    acStack_2c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2c0,acStack_2a0,&lStack_258,3);
    pcVar10 = "";
    (**(code **)(*plVar21 + 0x18))(plVar21);
    puStack_2a8 = acStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    lVar20 = 0;
    pcVar13 = pcVar11;
    pcVar15 = pcVar3;
    do {
      if ((&cStack_259)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
      unaff_x24 = acStack_2c0;
    } while (lVar20 != -0x48);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar7);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_258) {
    ___stack_chk_fail();
    _objc_release(pcVar2);
    pcVar3 = acStack_2a0;
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != pcVar3);
    _objc_release(pcVar2);
    _objc_release(pcVar7);
    _objc_release(pcVar1);
    pcVar5 = pcVar4;
    __Unwind_Resume();
    pcStack_2c8 = FUN_10663b178;
    lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar11 = pcVar10;
    pcVar12 = pcVar13;
    pcVar6 = pcVar15;
    pcStack_300 = unaff_x24;
    pcStack_2f8 = pcVar3;
    pcStack_2f0 = pcVar4;
    pcStack_2e8 = pcVar2;
    pcStack_2e0 = pcVar7;
    pcStack_2d8 = pcVar1;
    ppppuStack_2d0 = &pppuStack_210;
    _objc_retain(pcVar10);
    _objc_retain(pcVar13);
    puVar22 = (undefined8 *)0x0;
    if (pcVar5 != (char *)0x0) {
      plVar21 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar10;
        _objc_retainAutorelease(pcVar10);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar10);
      unaff_x24 = (char *)auStack_338;
      func_0x00010002b838(auStack_338,pcVar1);
      _objc_retain(pcVar13);
      if (pcVar13 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar13);
        pcVar1 = pcVar13;
        func_0x00010bdc3520(pcVar13);
      }
      _objc_release(pcVar13);
      func_0x00010002b838(auStack_320,pcVar1);
      acStack_358[0] = '\0';
      acStack_358[1] = '\0';
      acStack_358[2] = '\0';
      acStack_358[3] = '\0';
      acStack_358[4] = '\0';
      acStack_358[5] = '\0';
      acStack_358[6] = '\0';
      acStack_358[7] = '\0';
      acStack_358[8] = '\0';
      acStack_358[9] = '\0';
      acStack_358[10] = '\0';
      acStack_358[0xb] = '\0';
      acStack_358[0xc] = '\0';
      acStack_358[0xd] = '\0';
      acStack_358[0xe] = '\0';
      acStack_358[0xf] = '\0';
      acStack_358[0x10] = '\0';
      acStack_358[0x11] = '\0';
      acStack_358[0x12] = '\0';
      acStack_358[0x13] = '\0';
      acStack_358[0x14] = '\0';
      acStack_358[0x15] = '\0';
      acStack_358[0x16] = '\0';
      acStack_358[0x17] = '\0';
      func_0x00010007e1e8(acStack_358,auStack_338,&lStack_308,2);
      pcVar11 = "";
      pcVar3 = acStack_358;
      pcVar12 = acStack_358;
      (**(code **)(*plVar21 + 0x18))(plVar21);
      pcStack_340 = pcVar3;
      func_0x00010007e5dc(&pcStack_340);
      lVar20 = 0;
      puVar22 = auStack_338;
      pcVar6 = pcVar15;
      do {
        if ((&cStack_309)[lVar20] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar20));
        }
        lVar20 = lVar20 + -0x18;
      } while (lVar20 != -0x30);
    }
    _objc_release(pcVar13);
    pcVar1 = pcVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
      return pcVar1;
    }
    ___stack_chk_fail();
    _objc_release(pcVar13);
    if (cStack_321 < '\0') {
      __ZdlPv(auStack_338[0]);
    }
    _objc_release(pcVar13);
    _objc_release(pcVar10);
    pcVar2 = pcVar1;
    __Unwind_Resume();
    pcStack_368 = FUN_10663b3a8;
    lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar11;
    pcVar4 = pcVar12;
    pcVar15 = pcVar6;
    pcStack_3a0 = unaff_x24;
    pcStack_398 = pcVar3;
    puStack_390 = puVar22;
    pcStack_388 = pcVar1;
    pcStack_380 = pcVar13;
    pcStack_378 = pcVar10;
    ppppuStack_370 = &ppppuStack_2d0;
    _objc_retain(pcVar11);
    _objc_retain(pcVar12);
    if (pcVar2 != (char *)0x0) {
      plVar21 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar11;
        _objc_retainAutorelease(pcVar11);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar11);
      unaff_x24 = (char *)auStack_3d8;
      func_0x00010002b838(auStack_3d8,pcVar1);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar12);
        pcVar1 = pcVar12;
        func_0x00010bdc3520(pcVar12);
      }
      _objc_release(pcVar12);
      func_0x00010002b838(auStack_3c0,pcVar1);
      acStack_3f8[0] = '\0';
      acStack_3f8[1] = '\0';
      acStack_3f8[2] = '\0';
      acStack_3f8[3] = '\0';
      acStack_3f8[4] = '\0';
      acStack_3f8[5] = '\0';
      acStack_3f8[6] = '\0';
      acStack_3f8[7] = '\0';
      acStack_3f8[8] = '\0';
      acStack_3f8[9] = '\0';
      acStack_3f8[10] = '\0';
      acStack_3f8[0xb] = '\0';
      acStack_3f8[0xc] = '\0';
      acStack_3f8[0xd] = '\0';
      acStack_3f8[0xe] = '\0';
      acStack_3f8[0xf] = '\0';
      acStack_3f8[0x10] = '\0';
      acStack_3f8[0x11] = '\0';
      acStack_3f8[0x12] = '\0';
      acStack_3f8[0x13] = '\0';
      acStack_3f8[0x14] = '\0';
      acStack_3f8[0x15] = '\0';
      acStack_3f8[0x16] = '\0';
      acStack_3f8[0x17] = '\0';
      func_0x00010007e1e8(acStack_3f8,auStack_3d8,&lStack_3a8,2);
      pcVar7 = "\x01";
      pcVar4 = acStack_3f8;
      (**(code **)(*plVar21 + 0x18))(plVar21);
      pcStack_3e0 = acStack_3f8;
      func_0x00010007e5dc(&pcStack_3e0);
      lVar20 = 0;
      pcVar15 = pcVar6;
      do {
        if ((&cStack_3a9)[lVar20] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar20));
        }
        lVar20 = lVar20 + -0x18;
      } while (lVar20 != -0x30);
    }
    _objc_release(pcVar12);
    pcVar1 = pcVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
      return pcVar1;
    }
    ___stack_chk_fail();
    _objc_release(pcVar12);
    if (cStack_3c1 < '\0') {
      __ZdlPv(auStack_3d8[0]);
    }
    _objc_release(pcVar12);
    _objc_release(pcVar11);
    __Unwind_Resume();
    pcVar11 = acStack_4c0;
    pcStack_408 = FUN_10663b5d8;
    lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar7;
    pcVar10 = pcVar4;
    pcVar13 = pcVar15;
    pcVar3 = pcVar14;
    ppppuStack_410 = &ppppuStack_370;
    _objc_retain(pcVar7);
    _objc_retain(pcVar4);
    _objc_retain(pcVar15);
    if (pcVar1 != (char *)0x0) {
      plVar21 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      func_0x00010002b838(acStack_4a0,pcVar1);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar1 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_488,pcVar1);
      _objc_retain(pcVar15);
      if (pcVar15 == (char *)0x0) {
        unaff_x25 = "";
      }
      else {
        _objc_retainAutorelease(pcVar15);
        unaff_x25 = pcVar15;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar15);
      func_0x00010002b838(auStack_470,unaff_x25);
      acStack_4c0[0] = '\0';
      acStack_4c0[1] = '\0';
      acStack_4c0[2] = '\0';
      acStack_4c0[3] = '\0';
      acStack_4c0[4] = '\0';
      acStack_4c0[5] = '\0';
      acStack_4c0[6] = '\0';
      acStack_4c0[7] = '\0';
      acStack_4c0[8] = '\0';
      acStack_4c0[9] = '\0';
      acStack_4c0[10] = '\0';
      acStack_4c0[0xb] = '\0';
      acStack_4c0[0xc] = '\0';
      acStack_4c0[0xd] = '\0';
      acStack_4c0[0xe] = '\0';
      acStack_4c0[0xf] = '\0';
      acStack_4c0[0x10] = '\0';
      acStack_4c0[0x11] = '\0';
      acStack_4c0[0x12] = '\0';
      acStack_4c0[0x13] = '\0';
      acStack_4c0[0x14] = '\0';
      acStack_4c0[0x15] = '\0';
      acStack_4c0[0x16] = '\0';
      acStack_4c0[0x17] = '\0';
      func_0x00010007e1e8(acStack_4c0,acStack_4a0,&lStack_458,3);
      pcVar2 = "";
      (**(code **)(*plVar21 + 0x18))(plVar21);
      puStack_4a8 = acStack_4c0;
      func_0x00010007e5dc(&puStack_4a8);
      lVar20 = 0;
      pcVar10 = pcVar11;
      pcVar13 = pcVar14;
      do {
        if ((&cStack_459)[lVar20] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_470 + lVar20));
        }
        lVar20 = lVar20 + -0x18;
        unaff_x24 = acStack_4c0;
      } while (lVar20 != -0x48);
    }
    _objc_release(pcVar15);
    _objc_release(pcVar4);
    pcVar1 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_458) {
      ___stack_chk_fail();
      _objc_release(pcVar15);
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != acStack_4a0);
      _objc_release(pcVar15);
      _objc_release(pcVar4);
      _objc_release(pcVar7);
      __Unwind_Resume();
      pcStack_4c8 = FUN_10663b898;
      lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar7 = pcVar2;
      pcVar4 = pcVar10;
      pcVar15 = pcVar13;
      pcVar14 = pcVar3;
      pcVar11 = param_6;
      ppppuStack_4d0 = &ppppuStack_410;
      _objc_retain(pcVar2);
      _objc_retain(pcVar10);
      _objc_retain(pcVar13);
      _objc_retain(pcVar3);
      if (pcVar1 != (char *)0x0) {
        plVar21 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar2;
          _objc_retainAutorelease(pcVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x00010002b838(acStack_578,pcVar1);
        _objc_retain(pcVar10);
        if (pcVar10 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar10);
          pcVar1 = pcVar10;
          func_0x00010bdc3520(pcVar10);
        }
        _objc_release(pcVar10);
        func_0x00010002b838(auStack_560,pcVar1);
        _objc_retain(pcVar13);
        if (pcVar13 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar13);
          pcVar1 = pcVar13;
          func_0x00010bdc3520(pcVar13);
        }
        _objc_release(pcVar13);
        func_0x00010002b838(auStack_548,pcVar1);
        _objc_retain(pcVar3);
        if (pcVar3 == (char *)0x0) {
          unaff_x26 = "";
        }
        else {
          _objc_retainAutorelease(pcVar3);
          unaff_x26 = pcVar3;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar3);
        func_0x00010002b838(auStack_530,unaff_x26);
        acStack_598[0] = '\0';
        acStack_598[1] = '\0';
        acStack_598[2] = '\0';
        acStack_598[3] = '\0';
        acStack_598[4] = '\0';
        acStack_598[5] = '\0';
        acStack_598[6] = '\0';
        acStack_598[7] = '\0';
        acStack_598[8] = '\0';
        acStack_598[9] = '\0';
        acStack_598[10] = '\0';
        acStack_598[0xb] = '\0';
        acStack_598[0xc] = '\0';
        acStack_598[0xd] = '\0';
        acStack_598[0xe] = '\0';
        acStack_598[0xf] = '\0';
        acStack_598[0x10] = '\0';
        acStack_598[0x11] = '\0';
        acStack_598[0x12] = '\0';
        acStack_598[0x13] = '\0';
        acStack_598[0x14] = '\0';
        acStack_598[0x15] = '\0';
        acStack_598[0x16] = '\0';
        acStack_598[0x17] = '\0';
        func_0x00010007e1e8(acStack_598,acStack_578,&lStack_518,4);
        pcVar7 = "";
        unaff_x25 = acStack_598;
        pcVar4 = acStack_598;
        (**(code **)(*plVar21 + 0x18))(plVar21);
        pcStack_580 = unaff_x25;
        func_0x00010007e5dc(&pcStack_580);
        lVar20 = 0;
        pcVar15 = param_6;
        do {
          if ((&cStack_519)[lVar20] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_530 + lVar20));
          }
          lVar20 = lVar20 + -0x18;
        } while (lVar20 != -0x60);
      }
      _objc_release(pcVar3);
      _objc_release(pcVar13);
      _objc_release(pcVar10);
      pcVar1 = pcVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_518) {
        return pcVar1;
      }
      ___stack_chk_fail();
      _objc_release(pcVar3);
      pcStack_5e0 = acStack_578;
      do {
        unaff_x25 = unaff_x25 + -0x18;
      } while (unaff_x25 != pcStack_5e0);
      _objc_release(pcVar3);
      _objc_release(pcVar13);
      _objc_release(pcVar10);
      _objc_release(pcVar2);
      pcVar6 = pcVar1;
      __Unwind_Resume();
      pcStack_5a8 = FUN_10663bbcc;
      lStack_5f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar12 = pcVar7;
      pcVar5 = pcVar4;
      pcVar16 = pcVar15;
      pcVar17 = pcVar14;
      pcVar18 = pcVar11;
      pcStack_5f0 = unaff_x26;
      pcStack_5e8 = unaff_x25;
      pcStack_5d8 = pcVar1;
      pcStack_5d0 = pcVar3;
      pcStack_5c8 = pcVar13;
      pcStack_5c0 = pcVar10;
      pcStack_5b8 = pcVar2;
      ppppuStack_5b0 = &ppppuStack_4d0;
      _objc_retain(pcVar4);
      _objc_retain(pcVar15);
      _objc_retain(pcVar14);
      if (pcVar6 != (char *)0x0) {
        plVar21 = *(long **)(pcVar6 + 8);
        pcVar1 = "true";
        if ((int)pcVar7 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(acStack_658,pcVar1);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar1 = pcVar4;
          func_0x00010bdc3520(pcVar4);
        }
        _objc_release(pcVar4);
        func_0x00010002b838(auStack_640,pcVar1);
        _objc_retain(pcVar15);
        if (pcVar15 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar15);
          pcVar1 = pcVar15;
          func_0x00010bdc3520(pcVar15);
        }
        _objc_release(pcVar15);
        func_0x00010002b838(auStack_628,pcVar1);
        _objc_retain(pcVar14);
        if (pcVar14 == (char *)0x0) {
          unaff_x25 = "";
        }
        else {
          _objc_retainAutorelease(pcVar14);
          unaff_x25 = pcVar14;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar14);
        func_0x00010002b838(auStack_610,unaff_x25);
        acStack_678[0] = '\0';
        acStack_678[1] = '\0';
        acStack_678[2] = '\0';
        acStack_678[3] = '\0';
        acStack_678[4] = '\0';
        acStack_678[5] = '\0';
        acStack_678[6] = '\0';
        acStack_678[7] = '\0';
        acStack_678[8] = '\0';
        acStack_678[9] = '\0';
        acStack_678[10] = '\0';
        acStack_678[0xb] = '\0';
        acStack_678[0xc] = '\0';
        acStack_678[0xd] = '\0';
        acStack_678[0xe] = '\0';
        acStack_678[0xf] = '\0';
        acStack_678[0x10] = '\0';
        acStack_678[0x11] = '\0';
        acStack_678[0x12] = '\0';
        acStack_678[0x13] = '\0';
        acStack_678[0x14] = '\0';
        acStack_678[0x15] = '\0';
        acStack_678[0x16] = '\0';
        acStack_678[0x17] = '\0';
        func_0x00010007e1e8(acStack_678,acStack_658,&lStack_5f8,4);
        pcVar12 = "\x01";
        pcVar5 = acStack_678;
        (**(code **)(*plVar21 + 0x18))(plVar21);
        pcStack_660 = acStack_678;
        func_0x00010007e5dc(&pcStack_660);
        lVar20 = 0;
        pcVar7 = acStack_658;
        pcVar16 = pcVar11;
        do {
          if ((&cStack_5f9)[lVar20] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_610 + lVar20));
          }
          lVar20 = lVar20 + -0x18;
        } while (lVar20 != -0x60);
      }
      _objc_release(pcVar14);
      _objc_release(pcVar15);
      pcVar1 = pcVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5f8) {
        ___stack_chk_fail();
        _objc_release(pcVar14);
        pcStack_6c0 = acStack_658;
        do {
          pcVar7 = pcVar7 + -0x18;
        } while (pcVar7 != pcStack_6c0);
        _objc_release(pcVar14);
        _objc_release(pcVar15);
        _objc_release(pcVar4);
        pcVar2 = pcVar1;
        __Unwind_Resume();
        pcStack_688 = FUN_10663bebc;
        lStack_6d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcStack_6d0 = unaff_x26;
        pcStack_6c8 = unaff_x25;
        pcStack_6b8 = pcVar7;
        pcStack_6b0 = pcVar1;
        pcStack_6a8 = pcVar14;
        pcStack_6a0 = pcVar15;
        pcStack_698 = pcVar4;
        ppppuStack_690 = &ppppuStack_5b0;
        _objc_retain(pcVar5);
        _objc_retain(pcVar16);
        _objc_retain(pcVar17);
        if (pcVar2 != (char *)0x0) {
          plVar21 = *(long **)(pcVar2 + 8);
          pcVar1 = "true";
          if ((int)pcVar12 == 0) {
            pcVar1 = "false";
          }
          func_0x00010002b838(acStack_738,pcVar1);
          _objc_retain(pcVar5);
          if (pcVar5 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            _objc_retainAutorelease(pcVar5);
            pcVar1 = pcVar5;
            func_0x00010bdc3520(pcVar5);
          }
          _objc_release(pcVar5);
          func_0x00010002b838(auStack_720,pcVar1);
          _objc_retain(pcVar16);
          if (pcVar16 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            _objc_retainAutorelease(pcVar16);
            pcVar1 = pcVar16;
            func_0x00010bdc3520(pcVar16);
          }
          _objc_release(pcVar16);
          func_0x00010002b838(auStack_708,pcVar1);
          _objc_retain(pcVar17);
          if (pcVar17 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            _objc_retainAutorelease(pcVar17);
            pcVar1 = pcVar17;
            func_0x00010bdc3520(pcVar17);
          }
          _objc_release(pcVar17);
          func_0x00010002b838(auStack_6f0,pcVar1);
          uStack_758 = 0;
          uStack_750 = 0;
          uStack_748 = 0;
          func_0x00010007e1e8(&uStack_758,acStack_738,&lStack_6d8,4);
          (**(code **)(*plVar21 + 0x18))(plVar21,&UNK_110930d98,&uStack_758,pcVar18);
          puStack_740 = &uStack_758;
          func_0x00010007e5dc(&puStack_740);
          lVar20 = 0;
          pcVar12 = acStack_738;
          do {
            if ((&cStack_6d9)[lVar20] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_6f0 + lVar20));
            }
            lVar20 = lVar20 + -0x18;
          } while (lVar20 != -0x60);
        }
        _objc_release(pcVar17);
        _objc_release(pcVar16);
        pcVar1 = pcVar5;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6d8) {
          ___stack_chk_fail();
          _objc_release(pcVar17);
          do {
            pcVar12 = pcVar12 + -0x18;
          } while (pcVar12 != acStack_738);
          _objc_release(pcVar17);
          _objc_release(pcVar16);
          _objc_release(pcVar5);
          pcVar7 = pcVar1;
          __Unwind_Resume();
          ppcVar8 = &pcStack_7a0;
          pcStack_768 = FUN_10663c1ac;
          puStack_798 = PTR_PTR_1126f2300;
          pcStack_7a0 = pcVar7;
          pcStack_790 = pcVar1;
          pcStack_788 = pcVar17;
          pcStack_780 = pcVar16;
          pcStack_778 = pcVar5;
          ppppuStack_770 = &ppppuStack_690;
          _objc_msgSendSuper2(&pcStack_7a0,PTR_s_initWithFrame__1125e2948);
          if (ppcVar8 != (char **)0x0) {
            puVar9 = PTR_PTR_1126b1870;
            _objc_alloc();
            func_0x00010c0639c0();
            lVar20 = (long)_DAT_11274c928;
            uVar19 = *(undefined8 *)((long)ppcVar8 + lVar20);
            *(undefined **)((long)ppcVar8 + lVar20) = puVar9;
            _objc_release(uVar19);
            uVar19 = *(undefined8 *)((long)ppcVar8 + lVar20);
            func_0x00010bf20c00(ppcVar8);
            func_0x00010c19f0e0(uVar19);
            func_0x00010befbb60(ppcVar8);
            pcVar1 = (char *)((long)ppcVar8 + (long)_DAT_11274c92c);
            uVar19 = *(undefined8 *)PTR__CGRectNull_1103475e8;
            uVar24 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
            uVar23 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
            *(undefined8 *)(pcVar1 + 8) = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
            *(undefined8 *)pcVar1 = uVar19;
            *(undefined8 *)(pcVar1 + 0x18) = uVar24;
            *(undefined8 *)(pcVar1 + 0x10) = uVar23;
          }
          return (char *)ppcVar8;
        }
        return pcVar1;
      }
      return pcVar1;
    }
    return pcVar1;
  }
  return pcVar4;
}



/* Entry: 10663a9c8; end: 10663abf7;  */

/* WARNING: Removing unreachable block (ram,0x00010663be84) */
/* WARNING: Removing unreachable block (ram,0x00010663b860) */
/* WARNING: Removing unreachable block (ram,0x00010663ae80) */
/* WARNING: Removing unreachable block (ram,0x00010663b140) */
/* WARNING: Removing unreachable block (ram,0x00010663bb8c) */
/* WARNING: Removing unreachable block (ram,0x00010663c174) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_10663a9c8(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char **ppcVar8;
  undefined *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  char *unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uVar23;
  undefined8 uVar24;
  char *pcStack_700;
  undefined *puStack_6f8;
  char *pcStack_6f0;
  char *pcStack_6e8;
  char *pcStack_6e0;
  char *pcStack_6d8;
  undefined8 ****ppppuStack_6d0;
  code *pcStack_6c8;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 *puStack_6a0;
  char acStack_698 [24];
  undefined1 auStack_680 [24];
  undefined1 auStack_668 [24];
  undefined8 auStack_650 [2];
  char cStack_639;
  long lStack_638;
  char *pcStack_630;
  char *pcStack_628;
  char *pcStack_620;
  char *pcStack_618;
  char *pcStack_610;
  char *pcStack_608;
  char *pcStack_600;
  char *pcStack_5f8;
  undefined8 ****ppppuStack_5f0;
  code *pcStack_5e8;
  char acStack_5d8 [24];
  char *pcStack_5c0;
  char acStack_5b8 [24];
  undefined1 auStack_5a0 [24];
  undefined1 auStack_588 [24];
  undefined8 auStack_570 [2];
  char cStack_559;
  long lStack_558;
  char *pcStack_550;
  char *pcStack_548;
  char *pcStack_540;
  char *pcStack_538;
  char *pcStack_530;
  char *pcStack_528;
  char *pcStack_520;
  char *pcStack_518;
  undefined8 ****ppppuStack_510;
  code *pcStack_508;
  char acStack_4f8 [24];
  char *pcStack_4e0;
  char acStack_4d8 [24];
  undefined1 auStack_4c0 [24];
  undefined1 auStack_4a8 [24];
  undefined8 auStack_490 [2];
  char cStack_479;
  long lStack_478;
  undefined8 ****ppppuStack_430;
  code *pcStack_428;
  char acStack_420 [24];
  undefined1 *puStack_408;
  char acStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined8 auStack_3d0 [2];
  char cStack_3b9;
  long lStack_3b8;
  undefined8 ****ppppuStack_370;
  code *pcStack_368;
  char acStack_358 [24];
  char *pcStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  undefined8 *puStack_2f0;
  char *pcStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined1 ****ppppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2b8 [24];
  char *pcStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  char *pcStack_260;
  char *pcStack_258;
  char *pcStack_250;
  char *pcStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  char acStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_160 [24];
  undefined1 *puStack_148;
  char acStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar21 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = (char *)auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "\x02";
    pcVar7 = acStack_98;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar20 = 0;
    pcVar4 = param_4;
    do {
      if ((&cStack_49)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar13 = acStack_160;
  pcStack_a8 = FUN_10663abf8;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar1;
  pcVar5 = pcVar7;
  pcVar14 = pcVar4;
  pcVar15 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar21 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_140,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_128,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      unaff_x25 = pcVar4;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_110,unaff_x25);
    acStack_160[0] = '\0';
    acStack_160[1] = '\0';
    acStack_160[2] = '\0';
    acStack_160[3] = '\0';
    acStack_160[4] = '\0';
    acStack_160[5] = '\0';
    acStack_160[6] = '\0';
    acStack_160[7] = '\0';
    acStack_160[8] = '\0';
    acStack_160[9] = '\0';
    acStack_160[10] = '\0';
    acStack_160[0xb] = '\0';
    acStack_160[0xc] = '\0';
    acStack_160[0xd] = '\0';
    acStack_160[0xe] = '\0';
    acStack_160[0xf] = '\0';
    acStack_160[0x10] = '\0';
    acStack_160[0x11] = '\0';
    acStack_160[0x12] = '\0';
    acStack_160[0x13] = '\0';
    acStack_160[0x14] = '\0';
    acStack_160[0x15] = '\0';
    acStack_160[0x16] = '\0';
    acStack_160[0x17] = '\0';
    func_0x00010007e1e8(acStack_160,acStack_140,&lStack_f8,3);
    pcVar10 = "";
    (**(code **)(*plVar21 + 0x18))(plVar21);
    puStack_148 = acStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar20 = 0;
    pcVar5 = pcVar13;
    pcVar14 = param_5;
    do {
      if ((&cStack_f9)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
      unaff_x24 = acStack_160;
    } while (lVar20 != -0x48);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar7);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_140);
  _objc_release(pcVar4);
  _objc_release(pcVar7);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar11 = acStack_220;
  pcStack_168 = FUN_10663aeb8;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar10;
  pcVar7 = pcVar5;
  pcVar4 = pcVar14;
  pcVar13 = pcVar15;
  ppuStack_170 = &puStack_b0;
  _objc_retain(pcVar10);
  _objc_retain(pcVar5);
  _objc_retain(pcVar14);
  if (pcVar2 != (char *)0x0) {
    plVar21 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar10;
      _objc_retainAutorelease(pcVar10);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x00010002b838(acStack_200,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_1e8,pcVar1);
    _objc_retain(pcVar14);
    if (pcVar14 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar14);
      unaff_x25 = pcVar14;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar14);
    func_0x00010002b838(auStack_1d0,unaff_x25);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    func_0x00010007e1e8(acStack_220,acStack_200,&lStack_1b8,3);
    pcVar1 = "";
    (**(code **)(*plVar21 + 0x18))(plVar21);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    lVar20 = 0;
    pcVar7 = pcVar11;
    pcVar4 = pcVar15;
    do {
      if ((&cStack_1b9)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
      unaff_x24 = acStack_220;
    } while (lVar20 != -0x48);
  }
  _objc_release(pcVar14);
  _objc_release(pcVar5);
  pcVar2 = pcVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar14);
  pcVar15 = acStack_200;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar15);
  _objc_release(pcVar14);
  _objc_release(pcVar5);
  _objc_release(pcVar10);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_228 = FUN_10663b178;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar1;
  pcVar12 = pcVar7;
  pcVar6 = pcVar4;
  pcStack_260 = unaff_x24;
  pcStack_258 = pcVar15;
  pcStack_250 = pcVar2;
  pcStack_248 = pcVar14;
  pcStack_240 = pcVar5;
  pcStack_238 = pcVar10;
  pppuStack_230 = &ppuStack_170;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  puVar22 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar21 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (char *)auStack_298;
    func_0x00010002b838(auStack_298,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_280,pcVar2);
    acStack_2b8[0] = '\0';
    acStack_2b8[1] = '\0';
    acStack_2b8[2] = '\0';
    acStack_2b8[3] = '\0';
    acStack_2b8[4] = '\0';
    acStack_2b8[5] = '\0';
    acStack_2b8[6] = '\0';
    acStack_2b8[7] = '\0';
    acStack_2b8[8] = '\0';
    acStack_2b8[9] = '\0';
    acStack_2b8[10] = '\0';
    acStack_2b8[0xb] = '\0';
    acStack_2b8[0xc] = '\0';
    acStack_2b8[0xd] = '\0';
    acStack_2b8[0xe] = '\0';
    acStack_2b8[0xf] = '\0';
    acStack_2b8[0x10] = '\0';
    acStack_2b8[0x11] = '\0';
    acStack_2b8[0x12] = '\0';
    acStack_2b8[0x13] = '\0';
    acStack_2b8[0x14] = '\0';
    acStack_2b8[0x15] = '\0';
    acStack_2b8[0x16] = '\0';
    acStack_2b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2b8,auStack_298,&lStack_268,2);
    pcVar11 = "";
    pcVar15 = acStack_2b8;
    pcVar12 = acStack_2b8;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    pcStack_2a0 = pcVar15;
    func_0x00010007e5dc(&pcStack_2a0);
    lVar20 = 0;
    puVar22 = auStack_298;
    pcVar6 = pcVar4;
    do {
      if ((&cStack_269)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar1);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcStack_2c8 = FUN_10663b3a8;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar11;
  pcVar10 = pcVar12;
  pcVar14 = pcVar6;
  pcStack_300 = unaff_x24;
  pcStack_2f8 = pcVar15;
  puStack_2f0 = puVar22;
  pcStack_2e8 = pcVar4;
  pcStack_2e0 = pcVar7;
  pcStack_2d8 = pcVar1;
  ppppuStack_2d0 = &pppuStack_230;
  _objc_retain(pcVar11);
  _objc_retain(pcVar12);
  if (pcVar5 != (char *)0x0) {
    plVar21 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar11;
      _objc_retainAutorelease(pcVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    unaff_x24 = (char *)auStack_338;
    func_0x00010002b838(auStack_338,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar1 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_320,pcVar1);
    acStack_358[0] = '\0';
    acStack_358[1] = '\0';
    acStack_358[2] = '\0';
    acStack_358[3] = '\0';
    acStack_358[4] = '\0';
    acStack_358[5] = '\0';
    acStack_358[6] = '\0';
    acStack_358[7] = '\0';
    acStack_358[8] = '\0';
    acStack_358[9] = '\0';
    acStack_358[10] = '\0';
    acStack_358[0xb] = '\0';
    acStack_358[0xc] = '\0';
    acStack_358[0xd] = '\0';
    acStack_358[0xe] = '\0';
    acStack_358[0xf] = '\0';
    acStack_358[0x10] = '\0';
    acStack_358[0x11] = '\0';
    acStack_358[0x12] = '\0';
    acStack_358[0x13] = '\0';
    acStack_358[0x14] = '\0';
    acStack_358[0x15] = '\0';
    acStack_358[0x16] = '\0';
    acStack_358[0x17] = '\0';
    func_0x00010007e1e8(acStack_358,auStack_338,&lStack_308,2);
    pcVar2 = "\x01";
    pcVar10 = acStack_358;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    pcStack_340 = acStack_358;
    func_0x00010007e5dc(&pcStack_340);
    lVar20 = 0;
    pcVar14 = pcVar6;
    do {
      if ((&cStack_309)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  _objc_release(pcVar12);
  pcVar1 = pcVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
    ___stack_chk_fail();
    _objc_release(pcVar12);
    if (cStack_321 < '\0') {
      __ZdlPv(auStack_338[0]);
    }
    _objc_release(pcVar12);
    _objc_release(pcVar11);
    __Unwind_Resume();
    pcVar11 = acStack_420;
    pcStack_368 = FUN_10663b5d8;
    lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar2;
    pcVar4 = pcVar10;
    pcVar5 = pcVar14;
    pcVar15 = pcVar13;
    ppppuStack_370 = &ppppuStack_2d0;
    _objc_retain(pcVar2);
    _objc_retain(pcVar10);
    _objc_retain(pcVar14);
    if (pcVar1 != (char *)0x0) {
      plVar21 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(acStack_400,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_3e8,pcVar1);
      _objc_retain(pcVar14);
      if (pcVar14 == (char *)0x0) {
        unaff_x25 = "";
      }
      else {
        _objc_retainAutorelease(pcVar14);
        unaff_x25 = pcVar14;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar14);
      func_0x00010002b838(auStack_3d0,unaff_x25);
      acStack_420[0] = '\0';
      acStack_420[1] = '\0';
      acStack_420[2] = '\0';
      acStack_420[3] = '\0';
      acStack_420[4] = '\0';
      acStack_420[5] = '\0';
      acStack_420[6] = '\0';
      acStack_420[7] = '\0';
      acStack_420[8] = '\0';
      acStack_420[9] = '\0';
      acStack_420[10] = '\0';
      acStack_420[0xb] = '\0';
      acStack_420[0xc] = '\0';
      acStack_420[0xd] = '\0';
      acStack_420[0xe] = '\0';
      acStack_420[0xf] = '\0';
      acStack_420[0x10] = '\0';
      acStack_420[0x11] = '\0';
      acStack_420[0x12] = '\0';
      acStack_420[0x13] = '\0';
      acStack_420[0x14] = '\0';
      acStack_420[0x15] = '\0';
      acStack_420[0x16] = '\0';
      acStack_420[0x17] = '\0';
      func_0x00010007e1e8(acStack_420,acStack_400,&lStack_3b8,3);
      pcVar7 = "";
      (**(code **)(*plVar21 + 0x18))(plVar21);
      puStack_408 = acStack_420;
      func_0x00010007e5dc(&puStack_408);
      lVar20 = 0;
      pcVar4 = pcVar11;
      pcVar5 = pcVar13;
      do {
        if ((&cStack_3b9)[lVar20] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3d0 + lVar20));
        }
        lVar20 = lVar20 + -0x18;
        unaff_x24 = acStack_420;
      } while (lVar20 != -0x48);
    }
    _objc_release(pcVar14);
    _objc_release(pcVar10);
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3b8) {
      ___stack_chk_fail();
      _objc_release(pcVar14);
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != acStack_400);
      _objc_release(pcVar14);
      _objc_release(pcVar10);
      _objc_release(pcVar2);
      __Unwind_Resume();
      pcStack_428 = FUN_10663b898;
      lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar2 = pcVar7;
      pcVar10 = pcVar4;
      pcVar14 = pcVar5;
      pcVar13 = pcVar15;
      pcVar11 = param_6;
      ppppuStack_430 = &ppppuStack_370;
      _objc_retain(pcVar7);
      _objc_retain(pcVar4);
      _objc_retain(pcVar5);
      _objc_retain(pcVar15);
      if (pcVar1 != (char *)0x0) {
        plVar21 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar7;
          _objc_retainAutorelease(pcVar7);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        func_0x00010002b838(acStack_4d8,pcVar1);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar1 = pcVar4;
          func_0x00010bdc3520(pcVar4);
        }
        _objc_release(pcVar4);
        func_0x00010002b838(auStack_4c0,pcVar1);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar5);
          pcVar1 = pcVar5;
          func_0x00010bdc3520(pcVar5);
        }
        _objc_release(pcVar5);
        func_0x00010002b838(auStack_4a8,pcVar1);
        _objc_retain(pcVar15);
        if (pcVar15 == (char *)0x0) {
          unaff_x26 = "";
        }
        else {
          _objc_retainAutorelease(pcVar15);
          unaff_x26 = pcVar15;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar15);
        func_0x00010002b838(auStack_490,unaff_x26);
        acStack_4f8[0] = '\0';
        acStack_4f8[1] = '\0';
        acStack_4f8[2] = '\0';
        acStack_4f8[3] = '\0';
        acStack_4f8[4] = '\0';
        acStack_4f8[5] = '\0';
        acStack_4f8[6] = '\0';
        acStack_4f8[7] = '\0';
        acStack_4f8[8] = '\0';
        acStack_4f8[9] = '\0';
        acStack_4f8[10] = '\0';
        acStack_4f8[0xb] = '\0';
        acStack_4f8[0xc] = '\0';
        acStack_4f8[0xd] = '\0';
        acStack_4f8[0xe] = '\0';
        acStack_4f8[0xf] = '\0';
        acStack_4f8[0x10] = '\0';
        acStack_4f8[0x11] = '\0';
        acStack_4f8[0x12] = '\0';
        acStack_4f8[0x13] = '\0';
        acStack_4f8[0x14] = '\0';
        acStack_4f8[0x15] = '\0';
        acStack_4f8[0x16] = '\0';
        acStack_4f8[0x17] = '\0';
        func_0x00010007e1e8(acStack_4f8,acStack_4d8,&lStack_478,4);
        pcVar2 = "";
        unaff_x25 = acStack_4f8;
        pcVar10 = acStack_4f8;
        (**(code **)(*plVar21 + 0x18))(plVar21);
        pcStack_4e0 = unaff_x25;
        func_0x00010007e5dc(&pcStack_4e0);
        lVar20 = 0;
        pcVar14 = param_6;
        do {
          if ((&cStack_479)[lVar20] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_490 + lVar20));
          }
          lVar20 = lVar20 + -0x18;
        } while (lVar20 != -0x60);
      }
      _objc_release(pcVar15);
      _objc_release(pcVar5);
      _objc_release(pcVar4);
      pcVar1 = pcVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_478) {
        ___stack_chk_fail();
        _objc_release(pcVar15);
        pcStack_540 = acStack_4d8;
        do {
          unaff_x25 = unaff_x25 + -0x18;
        } while (unaff_x25 != pcStack_540);
        _objc_release(pcVar15);
        _objc_release(pcVar5);
        _objc_release(pcVar4);
        _objc_release(pcVar7);
        pcVar6 = pcVar1;
        __Unwind_Resume();
        pcStack_508 = FUN_10663bbcc;
        lStack_558 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar12 = pcVar2;
        pcVar3 = pcVar10;
        pcVar16 = pcVar14;
        pcVar17 = pcVar13;
        pcVar18 = pcVar11;
        pcStack_550 = unaff_x26;
        pcStack_548 = unaff_x25;
        pcStack_538 = pcVar1;
        pcStack_530 = pcVar15;
        pcStack_528 = pcVar5;
        pcStack_520 = pcVar4;
        pcStack_518 = pcVar7;
        ppppuStack_510 = &ppppuStack_430;
        _objc_retain(pcVar10);
        _objc_retain(pcVar14);
        _objc_retain(pcVar13);
        if (pcVar6 != (char *)0x0) {
          plVar21 = *(long **)(pcVar6 + 8);
          pcVar1 = "true";
          if ((int)pcVar2 == 0) {
            pcVar1 = "false";
          }
          func_0x00010002b838(acStack_5b8,pcVar1);
          _objc_retain(pcVar10);
          if (pcVar10 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            _objc_retainAutorelease(pcVar10);
            pcVar1 = pcVar10;
            func_0x00010bdc3520(pcVar10);
          }
          _objc_release(pcVar10);
          func_0x00010002b838(auStack_5a0,pcVar1);
          _objc_retain(pcVar14);
          if (pcVar14 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            _objc_retainAutorelease(pcVar14);
            pcVar1 = pcVar14;
            func_0x00010bdc3520(pcVar14);
          }
          _objc_release(pcVar14);
          func_0x00010002b838(auStack_588,pcVar1);
          _objc_retain(pcVar13);
          if (pcVar13 == (char *)0x0) {
            unaff_x25 = "";
          }
          else {
            _objc_retainAutorelease(pcVar13);
            unaff_x25 = pcVar13;
            func_0x00010bdc3520();
          }
          _objc_release(pcVar13);
          func_0x00010002b838(auStack_570,unaff_x25);
          acStack_5d8[0] = '\0';
          acStack_5d8[1] = '\0';
          acStack_5d8[2] = '\0';
          acStack_5d8[3] = '\0';
          acStack_5d8[4] = '\0';
          acStack_5d8[5] = '\0';
          acStack_5d8[6] = '\0';
          acStack_5d8[7] = '\0';
          acStack_5d8[8] = '\0';
          acStack_5d8[9] = '\0';
          acStack_5d8[10] = '\0';
          acStack_5d8[0xb] = '\0';
          acStack_5d8[0xc] = '\0';
          acStack_5d8[0xd] = '\0';
          acStack_5d8[0xe] = '\0';
          acStack_5d8[0xf] = '\0';
          acStack_5d8[0x10] = '\0';
          acStack_5d8[0x11] = '\0';
          acStack_5d8[0x12] = '\0';
          acStack_5d8[0x13] = '\0';
          acStack_5d8[0x14] = '\0';
          acStack_5d8[0x15] = '\0';
          acStack_5d8[0x16] = '\0';
          acStack_5d8[0x17] = '\0';
          func_0x00010007e1e8(acStack_5d8,acStack_5b8,&lStack_558,4);
          pcVar12 = "\x01";
          pcVar3 = acStack_5d8;
          (**(code **)(*plVar21 + 0x18))(plVar21);
          pcStack_5c0 = acStack_5d8;
          func_0x00010007e5dc(&pcStack_5c0);
          lVar20 = 0;
          pcVar2 = acStack_5b8;
          pcVar16 = pcVar11;
          do {
            if ((&cStack_559)[lVar20] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_570 + lVar20));
            }
            lVar20 = lVar20 + -0x18;
          } while (lVar20 != -0x60);
        }
        _objc_release(pcVar13);
        _objc_release(pcVar14);
        pcVar1 = pcVar10;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_558) {
          ___stack_chk_fail();
          _objc_release(pcVar13);
          pcStack_620 = acStack_5b8;
          do {
            pcVar2 = pcVar2 + -0x18;
          } while (pcVar2 != pcStack_620);
          _objc_release(pcVar13);
          _objc_release(pcVar14);
          _objc_release(pcVar10);
          pcVar7 = pcVar1;
          __Unwind_Resume();
          pcStack_5e8 = FUN_10663bebc;
          lStack_638 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pcStack_630 = unaff_x26;
          pcStack_628 = unaff_x25;
          pcStack_618 = pcVar2;
          pcStack_610 = pcVar1;
          pcStack_608 = pcVar13;
          pcStack_600 = pcVar14;
          pcStack_5f8 = pcVar10;
          ppppuStack_5f0 = &ppppuStack_510;
          _objc_retain(pcVar3);
          _objc_retain(pcVar16);
          _objc_retain(pcVar17);
          if (pcVar7 != (char *)0x0) {
            plVar21 = *(long **)(pcVar7 + 8);
            pcVar1 = "true";
            if ((int)pcVar12 == 0) {
              pcVar1 = "false";
            }
            func_0x00010002b838(acStack_698,pcVar1);
            _objc_retain(pcVar3);
            if (pcVar3 == (char *)0x0) {
              pcVar1 = "";
            }
            else {
              _objc_retainAutorelease(pcVar3);
              pcVar1 = pcVar3;
              func_0x00010bdc3520(pcVar3);
            }
            _objc_release(pcVar3);
            func_0x00010002b838(auStack_680,pcVar1);
            _objc_retain(pcVar16);
            if (pcVar16 == (char *)0x0) {
              pcVar1 = "";
            }
            else {
              _objc_retainAutorelease(pcVar16);
              pcVar1 = pcVar16;
              func_0x00010bdc3520(pcVar16);
            }
            _objc_release(pcVar16);
            func_0x00010002b838(auStack_668,pcVar1);
            _objc_retain(pcVar17);
            if (pcVar17 == (char *)0x0) {
              pcVar1 = "";
            }
            else {
              _objc_retainAutorelease(pcVar17);
              pcVar1 = pcVar17;
              func_0x00010bdc3520(pcVar17);
            }
            _objc_release(pcVar17);
            func_0x00010002b838(auStack_650,pcVar1);
            uStack_6b8 = 0;
            uStack_6b0 = 0;
            uStack_6a8 = 0;
            func_0x00010007e1e8(&uStack_6b8,acStack_698,&lStack_638,4);
            (**(code **)(*plVar21 + 0x18))(plVar21,&UNK_110930d98,&uStack_6b8,pcVar18);
            puStack_6a0 = &uStack_6b8;
            func_0x00010007e5dc(&puStack_6a0);
            lVar20 = 0;
            pcVar12 = acStack_698;
            do {
              if ((&cStack_639)[lVar20] < '\0') {
                __ZdlPv(*(undefined8 *)((long)auStack_650 + lVar20));
              }
              lVar20 = lVar20 + -0x18;
            } while (lVar20 != -0x60);
          }
          _objc_release(pcVar17);
          _objc_release(pcVar16);
          pcVar1 = pcVar3;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_638) {
            ___stack_chk_fail();
            _objc_release(pcVar17);
            do {
              pcVar12 = pcVar12 + -0x18;
            } while (pcVar12 != acStack_698);
            _objc_release(pcVar17);
            _objc_release(pcVar16);
            _objc_release(pcVar3);
            pcVar7 = pcVar1;
            __Unwind_Resume();
            ppcVar8 = &pcStack_700;
            pcStack_6c8 = FUN_10663c1ac;
            puStack_6f8 = PTR_PTR_1126f2300;
            pcStack_700 = pcVar7;
            pcStack_6f0 = pcVar1;
            pcStack_6e8 = pcVar17;
            pcStack_6e0 = pcVar16;
            pcStack_6d8 = pcVar3;
            ppppuStack_6d0 = &ppppuStack_5f0;
            _objc_msgSendSuper2(&pcStack_700,PTR_s_initWithFrame__1125e2948);
            if (ppcVar8 != (char **)0x0) {
              puVar9 = PTR_PTR_1126b1870;
              _objc_alloc();
              func_0x00010c0639c0();
              lVar20 = (long)_DAT_11274c928;
              uVar19 = *(undefined8 *)((long)ppcVar8 + lVar20);
              *(undefined **)((long)ppcVar8 + lVar20) = puVar9;
              _objc_release(uVar19);
              uVar19 = *(undefined8 *)((long)ppcVar8 + lVar20);
              func_0x00010bf20c00(ppcVar8);
              func_0x00010c19f0e0(uVar19);
              func_0x00010befbb60(ppcVar8);
              pcVar1 = (char *)((long)ppcVar8 + (long)_DAT_11274c92c);
              uVar19 = *(undefined8 *)PTR__CGRectNull_1103475e8;
              uVar24 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
              uVar23 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
              *(undefined8 *)(pcVar1 + 8) = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
              *(undefined8 *)pcVar1 = uVar19;
              *(undefined8 *)(pcVar1 + 0x18) = uVar24;
              *(undefined8 *)(pcVar1 + 0x10) = uVar23;
            }
            return (char *)ppcVar8;
          }
          return pcVar1;
        }
        return pcVar1;
      }
      return pcVar1;
    }
    return pcVar1;
  }
  return pcVar1;
}



/* Entry: 10663abf8; end: 10663aeb7;  */

/* WARNING: Removing unreachable block (ram,0x00010663be84) */
/* WARNING: Removing unreachable block (ram,0x00010663b860) */
/* WARNING: Removing unreachable block (ram,0x00010663ae80) */
/* WARNING: Removing unreachable block (ram,0x00010663b140) */
/* WARNING: Removing unreachable block (ram,0x00010663bb8c) */
/* WARNING: Removing unreachable block (ram,0x00010663c174) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_10663abf8(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  char *unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uVar23;
  undefined8 uVar24;
  char *pcStack_660;
  undefined *puStack_658;
  char *pcStack_650;
  char *pcStack_648;
  char *pcStack_640;
  char *pcStack_638;
  undefined8 ****ppppuStack_630;
  code *pcStack_628;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 *puStack_600;
  char acStack_5f8 [24];
  undefined1 auStack_5e0 [24];
  undefined1 auStack_5c8 [24];
  undefined8 auStack_5b0 [2];
  char cStack_599;
  long lStack_598;
  char *pcStack_590;
  char *pcStack_588;
  char *pcStack_580;
  char *pcStack_578;
  char *pcStack_570;
  char *pcStack_568;
  char *pcStack_560;
  char *pcStack_558;
  undefined8 ****ppppuStack_550;
  code *pcStack_548;
  char acStack_538 [24];
  char *pcStack_520;
  char acStack_518 [24];
  undefined1 auStack_500 [24];
  undefined1 auStack_4e8 [24];
  undefined8 auStack_4d0 [2];
  char cStack_4b9;
  long lStack_4b8;
  char *pcStack_4b0;
  char *pcStack_4a8;
  char *pcStack_4a0;
  char *pcStack_498;
  char *pcStack_490;
  char *pcStack_488;
  char *pcStack_480;
  char *pcStack_478;
  undefined8 ****ppppuStack_470;
  code *pcStack_468;
  char acStack_458 [24];
  char *pcStack_440;
  char acStack_438 [24];
  undefined1 auStack_420 [24];
  undefined1 auStack_408 [24];
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  long lStack_3d8;
  undefined8 ****ppppuStack_390;
  code *pcStack_388;
  char acStack_380 [24];
  undefined1 *puStack_368;
  char acStack_360 [24];
  undefined1 auStack_348 [24];
  undefined8 auStack_330 [2];
  char cStack_319;
  long lStack_318;
  undefined1 ****ppppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2b8 [24];
  char *pcStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  char *pcStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  char acStack_218 [24];
  char *pcStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  char *pcStack_1b0;
  char *pcStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  char acStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  pcVar13 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar22 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      unaff_x25 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,unaff_x25);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar20 = 0;
    pcVar6 = pcVar2;
    pcVar13 = param_5;
    do {
      if ((&cStack_59)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar20 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar10 = acStack_180;
  pcStack_c8 = FUN_10663aeb8;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  pcVar12 = pcVar6;
  pcVar14 = pcVar13;
  pcVar15 = pcVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  _objc_retain(pcVar13);
  if (pcVar2 != (char *)0x0) {
    plVar22 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_160,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      unaff_x25 = pcVar13;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar13);
    func_0x00010002b838(auStack_130,unaff_x25);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,acStack_160,&lStack_118,3);
    pcVar9 = "";
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar20 = 0;
    pcVar12 = pcVar10;
    pcVar14 = pcVar3;
    do {
      if ((&cStack_119)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar20 != -0x48);
  }
  _objc_release(pcVar13);
  _objc_release(pcVar6);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar13);
  pcVar2 = acStack_160;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar2);
  _objc_release(pcVar13);
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_188 = FUN_10663b178;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar9;
  pcVar11 = pcVar12;
  pcVar5 = pcVar14;
  pcStack_1c0 = unaff_x24;
  pcStack_1b8 = pcVar2;
  pcStack_1b0 = pcVar3;
  pcStack_1a8 = pcVar13;
  pcStack_1a0 = pcVar6;
  pcStack_198 = pcVar1;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar9);
  _objc_retain(pcVar12);
  puVar21 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar22 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    unaff_x24 = (char *)auStack_1f8;
    func_0x00010002b838(auStack_1f8,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar1 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_1e0,pcVar1);
    acStack_218[0] = '\0';
    acStack_218[1] = '\0';
    acStack_218[2] = '\0';
    acStack_218[3] = '\0';
    acStack_218[4] = '\0';
    acStack_218[5] = '\0';
    acStack_218[6] = '\0';
    acStack_218[7] = '\0';
    acStack_218[8] = '\0';
    acStack_218[9] = '\0';
    acStack_218[10] = '\0';
    acStack_218[0xb] = '\0';
    acStack_218[0xc] = '\0';
    acStack_218[0xd] = '\0';
    acStack_218[0xe] = '\0';
    acStack_218[0xf] = '\0';
    acStack_218[0x10] = '\0';
    acStack_218[0x11] = '\0';
    acStack_218[0x12] = '\0';
    acStack_218[0x13] = '\0';
    acStack_218[0x14] = '\0';
    acStack_218[0x15] = '\0';
    acStack_218[0x16] = '\0';
    acStack_218[0x17] = '\0';
    func_0x00010007e1e8(acStack_218,auStack_1f8,&lStack_1c8,2);
    pcVar10 = "";
    pcVar2 = acStack_218;
    pcVar11 = acStack_218;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    pcStack_200 = pcVar2;
    func_0x00010007e5dc(&pcStack_200);
    lVar20 = 0;
    puVar21 = auStack_1f8;
    pcVar5 = pcVar14;
    do {
      if ((&cStack_1c9)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  _objc_release(pcVar12);
  pcVar1 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar9);
  pcVar3 = pcVar1;
  __Unwind_Resume();
  pcStack_228 = FUN_10663b3a8;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar10;
  pcVar13 = pcVar11;
  pcVar14 = pcVar5;
  pcStack_260 = unaff_x24;
  pcStack_258 = pcVar2;
  puStack_250 = puVar21;
  pcStack_248 = pcVar1;
  pcStack_240 = pcVar12;
  pcStack_238 = pcVar9;
  pppuStack_230 = &ppuStack_190;
  _objc_retain(pcVar10);
  _objc_retain(pcVar11);
  if (pcVar3 != (char *)0x0) {
    plVar22 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar10;
      _objc_retainAutorelease(pcVar10);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    unaff_x24 = (char *)auStack_298;
    func_0x00010002b838(auStack_298,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_280,pcVar1);
    acStack_2b8[0] = '\0';
    acStack_2b8[1] = '\0';
    acStack_2b8[2] = '\0';
    acStack_2b8[3] = '\0';
    acStack_2b8[4] = '\0';
    acStack_2b8[5] = '\0';
    acStack_2b8[6] = '\0';
    acStack_2b8[7] = '\0';
    acStack_2b8[8] = '\0';
    acStack_2b8[9] = '\0';
    acStack_2b8[10] = '\0';
    acStack_2b8[0xb] = '\0';
    acStack_2b8[0xc] = '\0';
    acStack_2b8[0xd] = '\0';
    acStack_2b8[0xe] = '\0';
    acStack_2b8[0xf] = '\0';
    acStack_2b8[0x10] = '\0';
    acStack_2b8[0x11] = '\0';
    acStack_2b8[0x12] = '\0';
    acStack_2b8[0x13] = '\0';
    acStack_2b8[0x14] = '\0';
    acStack_2b8[0x15] = '\0';
    acStack_2b8[0x16] = '\0';
    acStack_2b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2b8,auStack_298,&lStack_268,2);
    pcVar6 = "\x01";
    pcVar13 = acStack_2b8;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    pcStack_2a0 = acStack_2b8;
    func_0x00010007e5dc(&pcStack_2a0);
    lVar20 = 0;
    pcVar14 = pcVar5;
    do {
      if ((&cStack_269)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  _objc_release(pcVar11);
  pcVar1 = pcVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar10);
  __Unwind_Resume();
  pcVar10 = acStack_380;
  pcStack_2c8 = FUN_10663b5d8;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar6;
  pcVar2 = pcVar13;
  pcVar9 = pcVar14;
  pcVar12 = pcVar15;
  ppppuStack_2d0 = &pppuStack_230;
  _objc_retain(pcVar6);
  _objc_retain(pcVar13);
  _objc_retain(pcVar14);
  if (pcVar1 != (char *)0x0) {
    plVar22 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(acStack_360,pcVar1);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar1 = pcVar13;
      func_0x00010bdc3520(pcVar13);
    }
    _objc_release(pcVar13);
    func_0x00010002b838(auStack_348,pcVar1);
    _objc_retain(pcVar14);
    if (pcVar14 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar14);
      unaff_x25 = pcVar14;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar14);
    func_0x00010002b838(auStack_330,unaff_x25);
    acStack_380[0] = '\0';
    acStack_380[1] = '\0';
    acStack_380[2] = '\0';
    acStack_380[3] = '\0';
    acStack_380[4] = '\0';
    acStack_380[5] = '\0';
    acStack_380[6] = '\0';
    acStack_380[7] = '\0';
    acStack_380[8] = '\0';
    acStack_380[9] = '\0';
    acStack_380[10] = '\0';
    acStack_380[0xb] = '\0';
    acStack_380[0xc] = '\0';
    acStack_380[0xd] = '\0';
    acStack_380[0xe] = '\0';
    acStack_380[0xf] = '\0';
    acStack_380[0x10] = '\0';
    acStack_380[0x11] = '\0';
    acStack_380[0x12] = '\0';
    acStack_380[0x13] = '\0';
    acStack_380[0x14] = '\0';
    acStack_380[0x15] = '\0';
    acStack_380[0x16] = '\0';
    acStack_380[0x17] = '\0';
    func_0x00010007e1e8(acStack_380,acStack_360,&lStack_318,3);
    pcVar3 = "";
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_368 = acStack_380;
    func_0x00010007e5dc(&puStack_368);
    lVar20 = 0;
    pcVar2 = pcVar10;
    pcVar9 = pcVar15;
    do {
      if ((&cStack_319)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_330 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
      unaff_x24 = acStack_380;
    } while (lVar20 != -0x48);
  }
  _objc_release(pcVar14);
  _objc_release(pcVar13);
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_318) {
    ___stack_chk_fail();
    _objc_release(pcVar14);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != acStack_360);
    _objc_release(pcVar14);
    _objc_release(pcVar13);
    _objc_release(pcVar6);
    __Unwind_Resume();
    pcStack_388 = FUN_10663b898;
    lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar6 = pcVar3;
    pcVar13 = pcVar2;
    pcVar14 = pcVar9;
    pcVar15 = pcVar12;
    pcVar10 = param_6;
    ppppuStack_390 = &ppppuStack_2d0;
    _objc_retain(pcVar3);
    _objc_retain(pcVar2);
    _objc_retain(pcVar9);
    _objc_retain(pcVar12);
    if (pcVar1 != (char *)0x0) {
      plVar22 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      func_0x00010002b838(acStack_438,pcVar1);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar2);
        pcVar1 = pcVar2;
        func_0x00010bdc3520(pcVar2);
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_420,pcVar1);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar1 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_408,pcVar1);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        unaff_x26 = "";
      }
      else {
        _objc_retainAutorelease(pcVar12);
        unaff_x26 = pcVar12;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar12);
      func_0x00010002b838(auStack_3f0,unaff_x26);
      acStack_458[0] = '\0';
      acStack_458[1] = '\0';
      acStack_458[2] = '\0';
      acStack_458[3] = '\0';
      acStack_458[4] = '\0';
      acStack_458[5] = '\0';
      acStack_458[6] = '\0';
      acStack_458[7] = '\0';
      acStack_458[8] = '\0';
      acStack_458[9] = '\0';
      acStack_458[10] = '\0';
      acStack_458[0xb] = '\0';
      acStack_458[0xc] = '\0';
      acStack_458[0xd] = '\0';
      acStack_458[0xe] = '\0';
      acStack_458[0xf] = '\0';
      acStack_458[0x10] = '\0';
      acStack_458[0x11] = '\0';
      acStack_458[0x12] = '\0';
      acStack_458[0x13] = '\0';
      acStack_458[0x14] = '\0';
      acStack_458[0x15] = '\0';
      acStack_458[0x16] = '\0';
      acStack_458[0x17] = '\0';
      func_0x00010007e1e8(acStack_458,acStack_438,&lStack_3d8,4);
      pcVar6 = "";
      unaff_x25 = acStack_458;
      pcVar13 = acStack_458;
      (**(code **)(*plVar22 + 0x18))(plVar22);
      pcStack_440 = unaff_x25;
      func_0x00010007e5dc(&pcStack_440);
      lVar20 = 0;
      pcVar14 = param_6;
      do {
        if ((&cStack_3d9)[lVar20] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3f0 + lVar20));
        }
        lVar20 = lVar20 + -0x18;
      } while (lVar20 != -0x60);
    }
    _objc_release(pcVar12);
    _objc_release(pcVar9);
    _objc_release(pcVar2);
    pcVar1 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
      return pcVar1;
    }
    ___stack_chk_fail();
    _objc_release(pcVar12);
    pcStack_4a0 = acStack_438;
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != pcStack_4a0);
    _objc_release(pcVar12);
    _objc_release(pcVar9);
    _objc_release(pcVar2);
    _objc_release(pcVar3);
    pcVar5 = pcVar1;
    __Unwind_Resume();
    pcStack_468 = FUN_10663bbcc;
    lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar11 = pcVar6;
    pcVar4 = pcVar13;
    pcVar16 = pcVar14;
    pcVar17 = pcVar15;
    pcVar18 = pcVar10;
    pcStack_4b0 = unaff_x26;
    pcStack_4a8 = unaff_x25;
    pcStack_498 = pcVar1;
    pcStack_490 = pcVar12;
    pcStack_488 = pcVar9;
    pcStack_480 = pcVar2;
    pcStack_478 = pcVar3;
    ppppuStack_470 = &ppppuStack_390;
    _objc_retain(pcVar13);
    _objc_retain(pcVar14);
    _objc_retain(pcVar15);
    if (pcVar5 != (char *)0x0) {
      plVar22 = *(long **)(pcVar5 + 8);
      pcVar1 = "true";
      if ((int)pcVar6 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(acStack_518,pcVar1);
      _objc_retain(pcVar13);
      if (pcVar13 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar13);
        pcVar1 = pcVar13;
        func_0x00010bdc3520(pcVar13);
      }
      _objc_release(pcVar13);
      func_0x00010002b838(auStack_500,pcVar1);
      _objc_retain(pcVar14);
      if (pcVar14 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar14);
        pcVar1 = pcVar14;
        func_0x00010bdc3520(pcVar14);
      }
      _objc_release(pcVar14);
      func_0x00010002b838(auStack_4e8,pcVar1);
      _objc_retain(pcVar15);
      if (pcVar15 == (char *)0x0) {
        unaff_x25 = "";
      }
      else {
        _objc_retainAutorelease(pcVar15);
        unaff_x25 = pcVar15;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar15);
      func_0x00010002b838(auStack_4d0,unaff_x25);
      acStack_538[0] = '\0';
      acStack_538[1] = '\0';
      acStack_538[2] = '\0';
      acStack_538[3] = '\0';
      acStack_538[4] = '\0';
      acStack_538[5] = '\0';
      acStack_538[6] = '\0';
      acStack_538[7] = '\0';
      acStack_538[8] = '\0';
      acStack_538[9] = '\0';
      acStack_538[10] = '\0';
      acStack_538[0xb] = '\0';
      acStack_538[0xc] = '\0';
      acStack_538[0xd] = '\0';
      acStack_538[0xe] = '\0';
      acStack_538[0xf] = '\0';
      acStack_538[0x10] = '\0';
      acStack_538[0x11] = '\0';
      acStack_538[0x12] = '\0';
      acStack_538[0x13] = '\0';
      acStack_538[0x14] = '\0';
      acStack_538[0x15] = '\0';
      acStack_538[0x16] = '\0';
      acStack_538[0x17] = '\0';
      func_0x00010007e1e8(acStack_538,acStack_518,&lStack_4b8,4);
      pcVar11 = "\x01";
      pcVar4 = acStack_538;
      (**(code **)(*plVar22 + 0x18))(plVar22);
      pcStack_520 = acStack_538;
      func_0x00010007e5dc(&pcStack_520);
      lVar20 = 0;
      pcVar6 = acStack_518;
      pcVar16 = pcVar10;
      do {
        if ((&cStack_4b9)[lVar20] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4d0 + lVar20));
        }
        lVar20 = lVar20 + -0x18;
      } while (lVar20 != -0x60);
    }
    _objc_release(pcVar15);
    _objc_release(pcVar14);
    pcVar1 = pcVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b8) {
      return pcVar1;
    }
    ___stack_chk_fail();
    _objc_release(pcVar15);
    pcStack_580 = acStack_518;
    do {
      pcVar6 = pcVar6 + -0x18;
    } while (pcVar6 != pcStack_580);
    _objc_release(pcVar15);
    _objc_release(pcVar14);
    _objc_release(pcVar13);
    pcVar3 = pcVar1;
    __Unwind_Resume();
    pcStack_548 = FUN_10663bebc;
    lStack_598 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcStack_590 = unaff_x26;
    pcStack_588 = unaff_x25;
    pcStack_578 = pcVar6;
    pcStack_570 = pcVar1;
    pcStack_568 = pcVar15;
    pcStack_560 = pcVar14;
    pcStack_558 = pcVar13;
    ppppuStack_550 = &ppppuStack_470;
    _objc_retain(pcVar4);
    _objc_retain(pcVar16);
    _objc_retain(pcVar17);
    if (pcVar3 != (char *)0x0) {
      plVar22 = *(long **)(pcVar3 + 8);
      pcVar1 = "true";
      if ((int)pcVar11 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(acStack_5f8,pcVar1);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar1 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_5e0,pcVar1);
      _objc_retain(pcVar16);
      if (pcVar16 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar16);
        pcVar1 = pcVar16;
        func_0x00010bdc3520(pcVar16);
      }
      _objc_release(pcVar16);
      func_0x00010002b838(auStack_5c8,pcVar1);
      _objc_retain(pcVar17);
      if (pcVar17 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar17);
        pcVar1 = pcVar17;
        func_0x00010bdc3520(pcVar17);
      }
      _objc_release(pcVar17);
      func_0x00010002b838(auStack_5b0,pcVar1);
      uStack_618 = 0;
      uStack_610 = 0;
      uStack_608 = 0;
      func_0x00010007e1e8(&uStack_618,acStack_5f8,&lStack_598,4);
      (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_110930d98,&uStack_618,pcVar18);
      puStack_600 = &uStack_618;
      func_0x00010007e5dc(&puStack_600);
      lVar20 = 0;
      pcVar11 = acStack_5f8;
      do {
        if ((&cStack_599)[lVar20] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_5b0 + lVar20));
        }
        lVar20 = lVar20 + -0x18;
      } while (lVar20 != -0x60);
    }
    _objc_release(pcVar17);
    _objc_release(pcVar16);
    pcVar1 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_598) {
      ___stack_chk_fail();
      _objc_release(pcVar17);
      do {
        pcVar11 = pcVar11 + -0x18;
      } while (pcVar11 != acStack_5f8);
      _objc_release(pcVar17);
      _objc_release(pcVar16);
      _objc_release(pcVar4);
      pcVar6 = pcVar1;
      __Unwind_Resume();
      ppcVar7 = &pcStack_660;
      pcStack_628 = FUN_10663c1ac;
      puStack_658 = PTR_PTR_1126f2300;
      pcStack_660 = pcVar6;
      pcStack_650 = pcVar1;
      pcStack_648 = pcVar17;
      pcStack_640 = pcVar16;
      pcStack_638 = pcVar4;
      ppppuStack_630 = &ppppuStack_550;
      _objc_msgSendSuper2(&pcStack_660,PTR_s_initWithFrame__1125e2948);
      if (ppcVar7 != (char **)0x0) {
        puVar8 = PTR_PTR_1126b1870;
        _objc_alloc();
        func_0x00010c0639c0();
        lVar20 = (long)_DAT_11274c928;
        uVar19 = *(undefined8 *)((long)ppcVar7 + lVar20);
        *(undefined **)((long)ppcVar7 + lVar20) = puVar8;
        _objc_release(uVar19);
        uVar19 = *(undefined8 *)((long)ppcVar7 + lVar20);
        func_0x00010bf20c00(ppcVar7);
        func_0x00010c19f0e0(uVar19);
        func_0x00010befbb60(ppcVar7);
        pcVar1 = (char *)((long)ppcVar7 + (long)_DAT_11274c92c);
        uVar19 = *(undefined8 *)PTR__CGRectNull_1103475e8;
        uVar24 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
        uVar23 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
        *(undefined8 *)(pcVar1 + 8) = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
        *(undefined8 *)pcVar1 = uVar19;
        *(undefined8 *)(pcVar1 + 0x18) = uVar24;
        *(undefined8 *)(pcVar1 + 0x10) = uVar23;
      }
      return (char *)ppcVar7;
    }
    return pcVar1;
  }
  return pcVar1;
}



/* Entry: 10663aeb8; end: 10663b177;  */

/* WARNING: Removing unreachable block (ram,0x00010663be84) */
/* WARNING: Removing unreachable block (ram,0x00010663b860) */
/* WARNING: Removing unreachable block (ram,0x00010663b140) */
/* WARNING: Removing unreachable block (ram,0x00010663bb8c) */
/* WARNING: Removing unreachable block (ram,0x00010663c174) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_10663aeb8(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char **ppcVar8;
  undefined *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  char *unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uVar23;
  undefined8 uVar24;
  char *pcStack_5a0;
  undefined *puStack_598;
  char *pcStack_590;
  char *pcStack_588;
  char *pcStack_580;
  char *pcStack_578;
  undefined8 ****ppppuStack_570;
  code *pcStack_568;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 *puStack_540;
  char acStack_538 [24];
  undefined1 auStack_520 [24];
  undefined1 auStack_508 [24];
  undefined8 auStack_4f0 [2];
  char cStack_4d9;
  long lStack_4d8;
  char *pcStack_4d0;
  char *pcStack_4c8;
  char *pcStack_4c0;
  char *pcStack_4b8;
  char *pcStack_4b0;
  char *pcStack_4a8;
  char *pcStack_4a0;
  char *pcStack_498;
  undefined8 ****ppppuStack_490;
  code *pcStack_488;
  char acStack_478 [24];
  char *pcStack_460;
  char acStack_458 [24];
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined8 auStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  char *pcStack_3f0;
  char *pcStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  char *pcStack_3d0;
  char *pcStack_3c8;
  char *pcStack_3c0;
  char *pcStack_3b8;
  undefined8 ****ppppuStack_3b0;
  code *pcStack_3a8;
  char acStack_398 [24];
  char *pcStack_380;
  char acStack_378 [24];
  undefined1 auStack_360 [24];
  undefined1 auStack_348 [24];
  undefined8 auStack_330 [2];
  char cStack_319;
  long lStack_318;
  undefined1 ****ppppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2c0 [24];
  undefined1 *puStack_2a8;
  char acStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined8 auStack_270 [2];
  char cStack_259;
  long lStack_258;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_1f8 [24];
  char *pcStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined8 *puStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  pcVar4 = param_4;
  pcVar11 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar22 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      unaff_x25 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,unaff_x25);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar20 = 0;
    pcVar7 = pcVar2;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar20 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  pcVar15 = acStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar15);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_10663b178;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar1;
  pcVar12 = pcVar7;
  pcVar14 = pcVar4;
  pcStack_100 = unaff_x24;
  pcStack_f8 = pcVar15;
  pcStack_f0 = pcVar2;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  puVar21 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar22 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (char *)auStack_138;
    func_0x00010002b838(auStack_138,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_120,pcVar2);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x00010007e1e8(acStack_158,auStack_138,&lStack_108,2);
    pcVar10 = "";
    pcVar15 = acStack_158;
    pcVar12 = acStack_158;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    pcStack_140 = pcVar15;
    func_0x00010007e5dc(&pcStack_140);
    lVar20 = 0;
    puVar21 = auStack_138;
    pcVar14 = pcVar4;
    do {
      if ((&cStack_109)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar1);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcStack_168 = FUN_10663b3a8;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar10;
  pcVar3 = pcVar12;
  pcVar13 = pcVar14;
  pcStack_1a0 = unaff_x24;
  pcStack_198 = pcVar15;
  puStack_190 = puVar21;
  pcStack_188 = pcVar4;
  pcStack_180 = pcVar7;
  pcStack_178 = pcVar1;
  ppuStack_170 = &puStack_d0;
  _objc_retain(pcVar10);
  _objc_retain(pcVar12);
  if (pcVar5 != (char *)0x0) {
    plVar22 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar10;
      _objc_retainAutorelease(pcVar10);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    unaff_x24 = (char *)auStack_1d8;
    func_0x00010002b838(auStack_1d8,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar1 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_1c0,pcVar1);
    acStack_1f8[0] = '\0';
    acStack_1f8[1] = '\0';
    acStack_1f8[2] = '\0';
    acStack_1f8[3] = '\0';
    acStack_1f8[4] = '\0';
    acStack_1f8[5] = '\0';
    acStack_1f8[6] = '\0';
    acStack_1f8[7] = '\0';
    acStack_1f8[8] = '\0';
    acStack_1f8[9] = '\0';
    acStack_1f8[10] = '\0';
    acStack_1f8[0xb] = '\0';
    acStack_1f8[0xc] = '\0';
    acStack_1f8[0xd] = '\0';
    acStack_1f8[0xe] = '\0';
    acStack_1f8[0xf] = '\0';
    acStack_1f8[0x10] = '\0';
    acStack_1f8[0x11] = '\0';
    acStack_1f8[0x12] = '\0';
    acStack_1f8[0x13] = '\0';
    acStack_1f8[0x14] = '\0';
    acStack_1f8[0x15] = '\0';
    acStack_1f8[0x16] = '\0';
    acStack_1f8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1f8,auStack_1d8,&lStack_1a8,2);
    pcVar2 = "\x01";
    pcVar3 = acStack_1f8;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    pcStack_1e0 = acStack_1f8;
    func_0x00010007e5dc(&pcStack_1e0);
    lVar20 = 0;
    pcVar13 = pcVar14;
    do {
      if ((&cStack_1a9)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  _objc_release(pcVar12);
  pcVar1 = pcVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar10);
  __Unwind_Resume();
  pcVar12 = acStack_2c0;
  pcStack_208 = FUN_10663b5d8;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar2;
  pcVar4 = pcVar3;
  pcVar15 = pcVar13;
  pcVar10 = pcVar11;
  pppuStack_210 = &ppuStack_170;
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  _objc_retain(pcVar13);
  if (pcVar1 != (char *)0x0) {
    plVar22 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(acStack_2a0,pcVar1);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar1 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_288,pcVar1);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      unaff_x25 = pcVar13;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar13);
    func_0x00010002b838(auStack_270,unaff_x25);
    acStack_2c0[0] = '\0';
    acStack_2c0[1] = '\0';
    acStack_2c0[2] = '\0';
    acStack_2c0[3] = '\0';
    acStack_2c0[4] = '\0';
    acStack_2c0[5] = '\0';
    acStack_2c0[6] = '\0';
    acStack_2c0[7] = '\0';
    acStack_2c0[8] = '\0';
    acStack_2c0[9] = '\0';
    acStack_2c0[10] = '\0';
    acStack_2c0[0xb] = '\0';
    acStack_2c0[0xc] = '\0';
    acStack_2c0[0xd] = '\0';
    acStack_2c0[0xe] = '\0';
    acStack_2c0[0xf] = '\0';
    acStack_2c0[0x10] = '\0';
    acStack_2c0[0x11] = '\0';
    acStack_2c0[0x12] = '\0';
    acStack_2c0[0x13] = '\0';
    acStack_2c0[0x14] = '\0';
    acStack_2c0[0x15] = '\0';
    acStack_2c0[0x16] = '\0';
    acStack_2c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2c0,acStack_2a0,&lStack_258,3);
    pcVar7 = "";
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_2a8 = acStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    lVar20 = 0;
    pcVar4 = pcVar12;
    pcVar15 = pcVar11;
    do {
      if ((&cStack_259)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
      unaff_x24 = acStack_2c0;
    } while (lVar20 != -0x48);
  }
  _objc_release(pcVar13);
  _objc_release(pcVar3);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar13);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_2a0);
  _objc_release(pcVar13);
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  __Unwind_Resume();
  pcStack_2c8 = FUN_10663b898;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar7;
  pcVar2 = pcVar4;
  pcVar12 = pcVar15;
  pcVar3 = pcVar10;
  pcVar14 = param_6;
  ppppuStack_2d0 = &pppuStack_210;
  _objc_retain(pcVar7);
  _objc_retain(pcVar4);
  _objc_retain(pcVar15);
  _objc_retain(pcVar10);
  if (pcVar1 != (char *)0x0) {
    plVar22 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(acStack_378,pcVar1);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar1 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_360,pcVar1);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      pcVar1 = pcVar15;
      func_0x00010bdc3520(pcVar15);
    }
    _objc_release(pcVar15);
    func_0x00010002b838(auStack_348,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      unaff_x26 = pcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_330,unaff_x26);
    acStack_398[0] = '\0';
    acStack_398[1] = '\0';
    acStack_398[2] = '\0';
    acStack_398[3] = '\0';
    acStack_398[4] = '\0';
    acStack_398[5] = '\0';
    acStack_398[6] = '\0';
    acStack_398[7] = '\0';
    acStack_398[8] = '\0';
    acStack_398[9] = '\0';
    acStack_398[10] = '\0';
    acStack_398[0xb] = '\0';
    acStack_398[0xc] = '\0';
    acStack_398[0xd] = '\0';
    acStack_398[0xe] = '\0';
    acStack_398[0xf] = '\0';
    acStack_398[0x10] = '\0';
    acStack_398[0x11] = '\0';
    acStack_398[0x12] = '\0';
    acStack_398[0x13] = '\0';
    acStack_398[0x14] = '\0';
    acStack_398[0x15] = '\0';
    acStack_398[0x16] = '\0';
    acStack_398[0x17] = '\0';
    func_0x00010007e1e8(acStack_398,acStack_378,&lStack_318,4);
    pcVar11 = "";
    unaff_x25 = acStack_398;
    pcVar2 = acStack_398;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    pcStack_380 = unaff_x25;
    func_0x00010007e5dc(&pcStack_380);
    lVar20 = 0;
    pcVar12 = param_6;
    do {
      if ((&cStack_319)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_330 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x60);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar15);
  _objc_release(pcVar4);
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  pcStack_3e0 = acStack_378;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_3e0);
  _objc_release(pcVar10);
  _objc_release(pcVar15);
  _objc_release(pcVar4);
  _objc_release(pcVar7);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_3a8 = FUN_10663bbcc;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar11;
  pcVar13 = pcVar2;
  pcVar16 = pcVar12;
  pcVar17 = pcVar3;
  pcVar18 = pcVar14;
  pcStack_3f0 = unaff_x26;
  pcStack_3e8 = unaff_x25;
  pcStack_3d8 = pcVar1;
  pcStack_3d0 = pcVar10;
  pcStack_3c8 = pcVar15;
  pcStack_3c0 = pcVar4;
  pcStack_3b8 = pcVar7;
  ppppuStack_3b0 = &ppppuStack_2d0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar12);
  _objc_retain(pcVar3);
  if (pcVar6 != (char *)0x0) {
    plVar22 = *(long **)(pcVar6 + 8);
    pcVar1 = "true";
    if ((int)pcVar11 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(acStack_458,pcVar1);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar1 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_440,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar1 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_428,pcVar1);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      unaff_x25 = pcVar3;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_410,unaff_x25);
    acStack_478[0] = '\0';
    acStack_478[1] = '\0';
    acStack_478[2] = '\0';
    acStack_478[3] = '\0';
    acStack_478[4] = '\0';
    acStack_478[5] = '\0';
    acStack_478[6] = '\0';
    acStack_478[7] = '\0';
    acStack_478[8] = '\0';
    acStack_478[9] = '\0';
    acStack_478[10] = '\0';
    acStack_478[0xb] = '\0';
    acStack_478[0xc] = '\0';
    acStack_478[0xd] = '\0';
    acStack_478[0xe] = '\0';
    acStack_478[0xf] = '\0';
    acStack_478[0x10] = '\0';
    acStack_478[0x11] = '\0';
    acStack_478[0x12] = '\0';
    acStack_478[0x13] = '\0';
    acStack_478[0x14] = '\0';
    acStack_478[0x15] = '\0';
    acStack_478[0x16] = '\0';
    acStack_478[0x17] = '\0';
    func_0x00010007e1e8(acStack_478,acStack_458,&lStack_3f8,4);
    pcVar5 = "\x01";
    pcVar13 = acStack_478;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    pcStack_460 = acStack_478;
    func_0x00010007e5dc(&pcStack_460);
    lVar20 = 0;
    pcVar11 = acStack_458;
    pcVar16 = pcVar14;
    do {
      if ((&cStack_3f9)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_410 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x60);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar12);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  pcStack_4c0 = acStack_458;
  do {
    pcVar11 = pcVar11 + -0x18;
  } while (pcVar11 != pcStack_4c0);
  _objc_release(pcVar3);
  _objc_release(pcVar12);
  _objc_release(pcVar2);
  pcVar7 = pcVar1;
  __Unwind_Resume();
  pcStack_488 = FUN_10663bebc;
  lStack_4d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_4d0 = unaff_x26;
  pcStack_4c8 = unaff_x25;
  pcStack_4b8 = pcVar11;
  pcStack_4b0 = pcVar1;
  pcStack_4a8 = pcVar3;
  pcStack_4a0 = pcVar12;
  pcStack_498 = pcVar2;
  ppppuStack_490 = &ppppuStack_3b0;
  _objc_retain(pcVar13);
  _objc_retain(pcVar16);
  _objc_retain(pcVar17);
  if (pcVar7 != (char *)0x0) {
    plVar22 = *(long **)(pcVar7 + 8);
    pcVar1 = "true";
    if ((int)pcVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(acStack_538,pcVar1);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar1 = pcVar13;
      func_0x00010bdc3520(pcVar13);
    }
    _objc_release(pcVar13);
    func_0x00010002b838(auStack_520,pcVar1);
    _objc_retain(pcVar16);
    if (pcVar16 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar16);
      pcVar1 = pcVar16;
      func_0x00010bdc3520(pcVar16);
    }
    _objc_release(pcVar16);
    func_0x00010002b838(auStack_508,pcVar1);
    _objc_retain(pcVar17);
    if (pcVar17 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar17);
      pcVar1 = pcVar17;
      func_0x00010bdc3520(pcVar17);
    }
    _objc_release(pcVar17);
    func_0x00010002b838(auStack_4f0,pcVar1);
    uStack_558 = 0;
    uStack_550 = 0;
    uStack_548 = 0;
    func_0x00010007e1e8(&uStack_558,acStack_538,&lStack_4d8,4);
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_110930d98,&uStack_558,pcVar18);
    puStack_540 = &uStack_558;
    func_0x00010007e5dc(&puStack_540);
    lVar20 = 0;
    pcVar5 = acStack_538;
    do {
      if ((&cStack_4d9)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4f0 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x60);
  }
  _objc_release(pcVar17);
  _objc_release(pcVar16);
  pcVar1 = pcVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4d8) {
    ___stack_chk_fail();
    _objc_release(pcVar17);
    do {
      pcVar5 = pcVar5 + -0x18;
    } while (pcVar5 != acStack_538);
    _objc_release(pcVar17);
    _objc_release(pcVar16);
    _objc_release(pcVar13);
    pcVar7 = pcVar1;
    __Unwind_Resume();
    ppcVar8 = &pcStack_5a0;
    pcStack_568 = FUN_10663c1ac;
    puStack_598 = PTR_PTR_1126f2300;
    pcStack_5a0 = pcVar7;
    pcStack_590 = pcVar1;
    pcStack_588 = pcVar17;
    pcStack_580 = pcVar16;
    pcStack_578 = pcVar13;
    ppppuStack_570 = &ppppuStack_490;
    _objc_msgSendSuper2(&pcStack_5a0,PTR_s_initWithFrame__1125e2948);
    if (ppcVar8 != (char **)0x0) {
      puVar9 = PTR_PTR_1126b1870;
      _objc_alloc();
      func_0x00010c0639c0();
      lVar20 = (long)_DAT_11274c928;
      uVar19 = *(undefined8 *)((long)ppcVar8 + lVar20);
      *(undefined **)((long)ppcVar8 + lVar20) = puVar9;
      _objc_release(uVar19);
      uVar19 = *(undefined8 *)((long)ppcVar8 + lVar20);
      func_0x00010bf20c00(ppcVar8);
      func_0x00010c19f0e0(uVar19);
      func_0x00010befbb60(ppcVar8);
      pcVar1 = (char *)((long)ppcVar8 + (long)_DAT_11274c92c);
      uVar19 = *(undefined8 *)PTR__CGRectNull_1103475e8;
      uVar24 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
      uVar23 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
      *(undefined8 *)(pcVar1 + 8) = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
      *(undefined8 *)pcVar1 = uVar19;
      *(undefined8 *)(pcVar1 + 0x18) = uVar24;
      *(undefined8 *)(pcVar1 + 0x10) = uVar23;
    }
    return (char *)ppcVar8;
  }
  return pcVar1;
}



/* Entry: 10663b178; end: 10663b3a7;  */

/* WARNING: Removing unreachable block (ram,0x00010663be84) */
/* WARNING: Removing unreachable block (ram,0x00010663b860) */
/* WARNING: Removing unreachable block (ram,0x00010663bb8c) */
/* WARNING: Removing unreachable block (ram,0x00010663c174) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_10663b178(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  char *unaff_x23;
  char *unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uVar23;
  undefined8 uVar24;
  char *pcStack_4e0;
  undefined *puStack_4d8;
  char *pcStack_4d0;
  char *pcStack_4c8;
  char *pcStack_4c0;
  char *pcStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 *puStack_480;
  char acStack_478 [24];
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  undefined8 auStack_430 [2];
  char cStack_419;
  long lStack_418;
  char *pcStack_410;
  char *pcStack_408;
  char *pcStack_400;
  char *pcStack_3f8;
  char *pcStack_3f0;
  char *pcStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  char acStack_3b8 [24];
  char *pcStack_3a0;
  char acStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  char *pcStack_330;
  char *pcStack_328;
  char *pcStack_320;
  char *pcStack_318;
  char *pcStack_310;
  char *pcStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  char acStack_2d8 [24];
  char *pcStack_2c0;
  char acStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined8 auStack_270 [2];
  char cStack_259;
  long lStack_258;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_200 [24];
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [3];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar22 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar21 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = (char *)auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar6 = acStack_98;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar20 = 0;
    puVar22 = auStack_78;
    pcVar4 = param_4;
    do {
      if ((&cStack_49)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_10663b3a8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  pcVar11 = pcVar6;
  pcVar14 = pcVar4;
  puStack_e0 = (undefined8 *)unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar22;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar21 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (char *)auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar9 = "\x01";
    pcVar11 = acStack_138;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    pcStack_120 = acStack_138;
    func_0x00010007e5dc(&pcStack_120);
    lVar20 = 0;
    pcVar14 = pcVar4;
    do {
      if ((&cStack_e9)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar12 = acStack_200;
  pcStack_148 = FUN_10663b5d8;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar9;
  pcVar6 = pcVar11;
  pcVar2 = pcVar14;
  pcVar3 = param_5;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar9);
  _objc_retain(pcVar11);
  _objc_retain(pcVar14);
  if (pcVar4 != (char *)0x0) {
    plVar21 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_1e0,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_1c8,pcVar1);
    _objc_retain(pcVar14);
    if (pcVar14 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar14);
      unaff_x25 = pcVar14;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar14);
    func_0x00010002b838(auStack_1b0,unaff_x25);
    acStack_200[0] = '\0';
    acStack_200[1] = '\0';
    acStack_200[2] = '\0';
    acStack_200[3] = '\0';
    acStack_200[4] = '\0';
    acStack_200[5] = '\0';
    acStack_200[6] = '\0';
    acStack_200[7] = '\0';
    acStack_200[8] = '\0';
    acStack_200[9] = '\0';
    acStack_200[10] = '\0';
    acStack_200[0xb] = '\0';
    acStack_200[0xc] = '\0';
    acStack_200[0xd] = '\0';
    acStack_200[0xe] = '\0';
    acStack_200[0xf] = '\0';
    acStack_200[0x10] = '\0';
    acStack_200[0x11] = '\0';
    acStack_200[0x12] = '\0';
    acStack_200[0x13] = '\0';
    acStack_200[0x14] = '\0';
    acStack_200[0x15] = '\0';
    acStack_200[0x16] = '\0';
    acStack_200[0x17] = '\0';
    func_0x00010007e1e8(acStack_200,auStack_1e0,&lStack_198,3);
    pcVar1 = "";
    (**(code **)(*plVar21 + 0x18))(plVar21);
    puStack_1e8 = acStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    lVar20 = 0;
    pcVar6 = pcVar12;
    pcVar2 = param_5;
    do {
      if ((&cStack_199)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
      unaff_x24 = acStack_200;
    } while (lVar20 != -0x48);
  }
  _objc_release(pcVar14);
  _objc_release(pcVar11);
  pcVar4 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar14);
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)auStack_1e0);
  _objc_release(pcVar14);
  _objc_release(pcVar11);
  _objc_release(pcVar9);
  __Unwind_Resume();
  pcStack_208 = FUN_10663b898;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  pcVar11 = pcVar6;
  pcVar14 = pcVar2;
  pcVar12 = pcVar3;
  pcVar16 = param_6;
  pppuStack_210 = &ppuStack_150;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  if (pcVar4 != (char *)0x0) {
    plVar21 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_2b8,pcVar4);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar4 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_2a0,pcVar4);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar4 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_288,pcVar4);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      unaff_x26 = pcVar3;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_270,unaff_x26);
    acStack_2d8[0] = '\0';
    acStack_2d8[1] = '\0';
    acStack_2d8[2] = '\0';
    acStack_2d8[3] = '\0';
    acStack_2d8[4] = '\0';
    acStack_2d8[5] = '\0';
    acStack_2d8[6] = '\0';
    acStack_2d8[7] = '\0';
    acStack_2d8[8] = '\0';
    acStack_2d8[9] = '\0';
    acStack_2d8[10] = '\0';
    acStack_2d8[0xb] = '\0';
    acStack_2d8[0xc] = '\0';
    acStack_2d8[0xd] = '\0';
    acStack_2d8[0xe] = '\0';
    acStack_2d8[0xf] = '\0';
    acStack_2d8[0x10] = '\0';
    acStack_2d8[0x11] = '\0';
    acStack_2d8[0x12] = '\0';
    acStack_2d8[0x13] = '\0';
    acStack_2d8[0x14] = '\0';
    acStack_2d8[0x15] = '\0';
    acStack_2d8[0x16] = '\0';
    acStack_2d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2d8,acStack_2b8,&lStack_258,4);
    pcVar9 = "";
    unaff_x25 = acStack_2d8;
    pcVar11 = acStack_2d8;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    pcStack_2c0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_2c0);
    lVar20 = 0;
    pcVar14 = param_6;
    do {
      if ((&cStack_259)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x60);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  pcStack_320 = acStack_2b8;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_320);
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcStack_2e8 = FUN_10663bbcc;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar9;
  pcVar13 = pcVar11;
  pcVar15 = pcVar14;
  pcVar17 = pcVar12;
  pcVar18 = pcVar16;
  pcStack_330 = unaff_x26;
  pcStack_328 = unaff_x25;
  pcStack_318 = pcVar4;
  pcStack_310 = pcVar3;
  pcStack_308 = pcVar2;
  pcStack_300 = pcVar6;
  pcStack_2f8 = pcVar1;
  pppuStack_2f0 = &pppuStack_210;
  _objc_retain(pcVar11);
  _objc_retain(pcVar14);
  _objc_retain(pcVar12);
  if (pcVar5 != (char *)0x0) {
    plVar21 = *(long **)(pcVar5 + 8);
    pcVar1 = "true";
    if ((int)pcVar9 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(acStack_398,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_380,pcVar1);
    _objc_retain(pcVar14);
    if (pcVar14 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar14);
      pcVar1 = pcVar14;
      func_0x00010bdc3520(pcVar14);
    }
    _objc_release(pcVar14);
    func_0x00010002b838(auStack_368,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      unaff_x25 = pcVar12;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_350,unaff_x25);
    acStack_3b8[0] = '\0';
    acStack_3b8[1] = '\0';
    acStack_3b8[2] = '\0';
    acStack_3b8[3] = '\0';
    acStack_3b8[4] = '\0';
    acStack_3b8[5] = '\0';
    acStack_3b8[6] = '\0';
    acStack_3b8[7] = '\0';
    acStack_3b8[8] = '\0';
    acStack_3b8[9] = '\0';
    acStack_3b8[10] = '\0';
    acStack_3b8[0xb] = '\0';
    acStack_3b8[0xc] = '\0';
    acStack_3b8[0xd] = '\0';
    acStack_3b8[0xe] = '\0';
    acStack_3b8[0xf] = '\0';
    acStack_3b8[0x10] = '\0';
    acStack_3b8[0x11] = '\0';
    acStack_3b8[0x12] = '\0';
    acStack_3b8[0x13] = '\0';
    acStack_3b8[0x14] = '\0';
    acStack_3b8[0x15] = '\0';
    acStack_3b8[0x16] = '\0';
    acStack_3b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_3b8,acStack_398,&lStack_338,4);
    pcVar10 = "\x01";
    pcVar13 = acStack_3b8;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    pcStack_3a0 = acStack_3b8;
    func_0x00010007e5dc(&pcStack_3a0);
    lVar20 = 0;
    pcVar9 = acStack_398;
    pcVar15 = pcVar16;
    do {
      if ((&cStack_339)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_350 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x60);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar14);
  pcVar1 = pcVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  pcStack_400 = acStack_398;
  do {
    pcVar9 = pcVar9 + -0x18;
  } while (pcVar9 != pcStack_400);
  _objc_release(pcVar12);
  _objc_release(pcVar14);
  _objc_release(pcVar11);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_3c8 = FUN_10663bebc;
  lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_410 = unaff_x26;
  pcStack_408 = unaff_x25;
  pcStack_3f8 = pcVar9;
  pcStack_3f0 = pcVar1;
  pcStack_3e8 = pcVar12;
  pcStack_3e0 = pcVar14;
  pcStack_3d8 = pcVar11;
  pppuStack_3d0 = &pppuStack_2f0;
  _objc_retain(pcVar13);
  _objc_retain(pcVar15);
  _objc_retain(pcVar17);
  if (pcVar6 != (char *)0x0) {
    plVar21 = *(long **)(pcVar6 + 8);
    pcVar1 = "true";
    if ((int)pcVar10 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(acStack_478,pcVar1);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar1 = pcVar13;
      func_0x00010bdc3520(pcVar13);
    }
    _objc_release(pcVar13);
    func_0x00010002b838(auStack_460,pcVar1);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      pcVar1 = pcVar15;
      func_0x00010bdc3520(pcVar15);
    }
    _objc_release(pcVar15);
    func_0x00010002b838(auStack_448,pcVar1);
    _objc_retain(pcVar17);
    if (pcVar17 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar17);
      pcVar1 = pcVar17;
      func_0x00010bdc3520(pcVar17);
    }
    _objc_release(pcVar17);
    func_0x00010002b838(auStack_430,pcVar1);
    uStack_498 = 0;
    uStack_490 = 0;
    uStack_488 = 0;
    func_0x00010007e1e8(&uStack_498,acStack_478,&lStack_418,4);
    (**(code **)(*plVar21 + 0x18))(plVar21,&UNK_110930d98,&uStack_498,pcVar18);
    puStack_480 = &uStack_498;
    func_0x00010007e5dc(&puStack_480);
    lVar20 = 0;
    pcVar10 = acStack_478;
    do {
      if ((&cStack_419)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_430 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x60);
  }
  _objc_release(pcVar17);
  _objc_release(pcVar15);
  pcVar1 = pcVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_418) {
    ___stack_chk_fail();
    _objc_release(pcVar17);
    do {
      pcVar10 = pcVar10 + -0x18;
    } while (pcVar10 != acStack_478);
    _objc_release(pcVar17);
    _objc_release(pcVar15);
    _objc_release(pcVar13);
    pcVar6 = pcVar1;
    __Unwind_Resume();
    ppcVar7 = &pcStack_4e0;
    pcStack_4a8 = FUN_10663c1ac;
    puStack_4d8 = PTR_PTR_1126f2300;
    pcStack_4e0 = pcVar6;
    pcStack_4d0 = pcVar1;
    pcStack_4c8 = pcVar17;
    pcStack_4c0 = pcVar15;
    pcStack_4b8 = pcVar13;
    pppuStack_4b0 = &pppuStack_3d0;
    _objc_msgSendSuper2(&pcStack_4e0,PTR_s_initWithFrame__1125e2948);
    if (ppcVar7 != (char **)0x0) {
      puVar8 = PTR_PTR_1126b1870;
      _objc_alloc();
      func_0x00010c0639c0();
      lVar20 = (long)_DAT_11274c928;
      uVar19 = *(undefined8 *)((long)ppcVar7 + lVar20);
      *(undefined **)((long)ppcVar7 + lVar20) = puVar8;
      _objc_release(uVar19);
      uVar19 = *(undefined8 *)((long)ppcVar7 + lVar20);
      func_0x00010bf20c00(ppcVar7);
      func_0x00010c19f0e0(uVar19);
      func_0x00010befbb60(ppcVar7);
      pcVar1 = (char *)((long)ppcVar7 + (long)_DAT_11274c92c);
      uVar19 = *(undefined8 *)PTR__CGRectNull_1103475e8;
      uVar24 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
      uVar23 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
      *(undefined8 *)(pcVar1 + 8) = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
      *(undefined8 *)pcVar1 = uVar19;
      *(undefined8 *)(pcVar1 + 0x18) = uVar24;
      *(undefined8 *)(pcVar1 + 0x10) = uVar23;
    }
    return (char *)ppcVar7;
  }
  return pcVar1;
}



/* Entry: 10663b3a8; end: 10663b5d7;  */

/* WARNING: Removing unreachable block (ram,0x00010663be84) */
/* WARNING: Removing unreachable block (ram,0x00010663b860) */
/* WARNING: Removing unreachable block (ram,0x00010663bb8c) */
/* WARNING: Removing unreachable block (ram,0x00010663c174) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_10663b3a8(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  undefined *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  char *unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uVar22;
  undefined8 uVar23;
  char *pcStack_440;
  undefined *puStack_438;
  char *pcStack_430;
  char *pcStack_428;
  char *pcStack_420;
  char *pcStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  char acStack_3d8 [24];
  undefined1 auStack_3c0 [24];
  undefined1 auStack_3a8 [24];
  undefined8 auStack_390 [2];
  char cStack_379;
  long lStack_378;
  char *pcStack_370;
  char *pcStack_368;
  char *pcStack_360;
  char *pcStack_358;
  char *pcStack_350;
  char *pcStack_348;
  char *pcStack_340;
  char *pcStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_318 [24];
  char *pcStack_300;
  char acStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  char *pcStack_290;
  char *pcStack_288;
  char *pcStack_280;
  char *pcStack_278;
  char *pcStack_270;
  char *pcStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  char acStack_238 [24];
  char *pcStack_220;
  char acStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_160 [24];
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar12 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar21 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = (char *)auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "\x01";
    pcVar5 = acStack_98;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar20 = 0;
    pcVar12 = param_4;
    do {
      if ((&cStack_49)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar10 = acStack_160;
  pcStack_a8 = FUN_10663b5d8;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar9 = pcVar5;
  pcVar13 = pcVar12;
  pcVar16 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  _objc_retain(pcVar12);
  if (pcVar2 != (char *)0x0) {
    plVar21 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_140,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_128,pcVar2);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      unaff_x25 = pcVar12;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_110,unaff_x25);
    acStack_160[0] = '\0';
    acStack_160[1] = '\0';
    acStack_160[2] = '\0';
    acStack_160[3] = '\0';
    acStack_160[4] = '\0';
    acStack_160[5] = '\0';
    acStack_160[6] = '\0';
    acStack_160[7] = '\0';
    acStack_160[8] = '\0';
    acStack_160[9] = '\0';
    acStack_160[10] = '\0';
    acStack_160[0xb] = '\0';
    acStack_160[0xc] = '\0';
    acStack_160[0xd] = '\0';
    acStack_160[0xe] = '\0';
    acStack_160[0xf] = '\0';
    acStack_160[0x10] = '\0';
    acStack_160[0x11] = '\0';
    acStack_160[0x12] = '\0';
    acStack_160[0x13] = '\0';
    acStack_160[0x14] = '\0';
    acStack_160[0x15] = '\0';
    acStack_160[0x16] = '\0';
    acStack_160[0x17] = '\0';
    func_0x00010007e1e8(acStack_160,auStack_140,&lStack_f8,3);
    pcVar4 = "";
    (**(code **)(*plVar21 + 0x18))(plVar21);
    puStack_148 = acStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar20 = 0;
    pcVar9 = pcVar10;
    pcVar13 = param_5;
    do {
      if ((&cStack_f9)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
      unaff_x24 = acStack_160;
    } while (lVar20 != -0x48);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)auStack_140);
  _objc_release(pcVar12);
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_168 = FUN_10663b898;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar4;
  pcVar5 = pcVar9;
  pcVar12 = pcVar13;
  pcVar10 = pcVar16;
  pcVar15 = param_6;
  ppuStack_170 = &puStack_b0;
  _objc_retain(pcVar4);
  _objc_retain(pcVar9);
  _objc_retain(pcVar13);
  _objc_retain(pcVar16);
  if (pcVar2 != (char *)0x0) {
    plVar21 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(acStack_218,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_200,pcVar1);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar1 = pcVar13;
      func_0x00010bdc3520(pcVar13);
    }
    _objc_release(pcVar13);
    func_0x00010002b838(auStack_1e8,pcVar1);
    _objc_retain(pcVar16);
    if (pcVar16 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar16);
      unaff_x26 = pcVar16;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar16);
    func_0x00010002b838(auStack_1d0,unaff_x26);
    acStack_238[0] = '\0';
    acStack_238[1] = '\0';
    acStack_238[2] = '\0';
    acStack_238[3] = '\0';
    acStack_238[4] = '\0';
    acStack_238[5] = '\0';
    acStack_238[6] = '\0';
    acStack_238[7] = '\0';
    acStack_238[8] = '\0';
    acStack_238[9] = '\0';
    acStack_238[10] = '\0';
    acStack_238[0xb] = '\0';
    acStack_238[0xc] = '\0';
    acStack_238[0xd] = '\0';
    acStack_238[0xe] = '\0';
    acStack_238[0xf] = '\0';
    acStack_238[0x10] = '\0';
    acStack_238[0x11] = '\0';
    acStack_238[0x12] = '\0';
    acStack_238[0x13] = '\0';
    acStack_238[0x14] = '\0';
    acStack_238[0x15] = '\0';
    acStack_238[0x16] = '\0';
    acStack_238[0x17] = '\0';
    func_0x00010007e1e8(acStack_238,acStack_218,&lStack_1b8,4);
    pcVar1 = "";
    unaff_x25 = acStack_238;
    pcVar5 = acStack_238;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    pcStack_220 = unaff_x25;
    func_0x00010007e5dc(&pcStack_220);
    lVar20 = 0;
    pcVar12 = param_6;
    do {
      if ((&cStack_1b9)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x60);
  }
  _objc_release(pcVar16);
  _objc_release(pcVar13);
  _objc_release(pcVar9);
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
    ___stack_chk_fail();
    _objc_release(pcVar16);
    pcStack_280 = acStack_218;
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != pcStack_280);
    _objc_release(pcVar16);
    _objc_release(pcVar13);
    _objc_release(pcVar9);
    _objc_release(pcVar4);
    pcVar3 = pcVar2;
    __Unwind_Resume();
    pcStack_248 = FUN_10663bbcc;
    lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = pcVar1;
    pcVar11 = pcVar5;
    pcVar14 = pcVar12;
    pcVar17 = pcVar10;
    pcVar18 = pcVar15;
    pcStack_290 = unaff_x26;
    pcStack_288 = unaff_x25;
    pcStack_278 = pcVar2;
    pcStack_270 = pcVar16;
    pcStack_268 = pcVar13;
    pcStack_260 = pcVar9;
    pcStack_258 = pcVar4;
    pppuStack_250 = &ppuStack_170;
    _objc_retain(pcVar5);
    _objc_retain(pcVar12);
    _objc_retain(pcVar10);
    if (pcVar3 != (char *)0x0) {
      plVar21 = *(long **)(pcVar3 + 8);
      pcVar2 = "true";
      if ((int)pcVar1 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(acStack_2f8,pcVar2);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar1 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_2e0,pcVar1);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar12);
        pcVar1 = pcVar12;
        func_0x00010bdc3520(pcVar12);
      }
      _objc_release(pcVar12);
      func_0x00010002b838(auStack_2c8,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        unaff_x25 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        unaff_x25 = pcVar10;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_2b0,unaff_x25);
      acStack_318[0] = '\0';
      acStack_318[1] = '\0';
      acStack_318[2] = '\0';
      acStack_318[3] = '\0';
      acStack_318[4] = '\0';
      acStack_318[5] = '\0';
      acStack_318[6] = '\0';
      acStack_318[7] = '\0';
      acStack_318[8] = '\0';
      acStack_318[9] = '\0';
      acStack_318[10] = '\0';
      acStack_318[0xb] = '\0';
      acStack_318[0xc] = '\0';
      acStack_318[0xd] = '\0';
      acStack_318[0xe] = '\0';
      acStack_318[0xf] = '\0';
      acStack_318[0x10] = '\0';
      acStack_318[0x11] = '\0';
      acStack_318[0x12] = '\0';
      acStack_318[0x13] = '\0';
      acStack_318[0x14] = '\0';
      acStack_318[0x15] = '\0';
      acStack_318[0x16] = '\0';
      acStack_318[0x17] = '\0';
      func_0x00010007e1e8(acStack_318,acStack_2f8,&lStack_298,4);
      pcVar8 = "\x01";
      pcVar11 = acStack_318;
      (**(code **)(*plVar21 + 0x18))(plVar21);
      pcStack_300 = acStack_318;
      func_0x00010007e5dc(&pcStack_300);
      lVar20 = 0;
      pcVar1 = acStack_2f8;
      pcVar14 = pcVar15;
      do {
        if ((&cStack_299)[lVar20] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar20));
        }
        lVar20 = lVar20 + -0x18;
      } while (lVar20 != -0x60);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar12);
    pcVar2 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
      ___stack_chk_fail();
      _objc_release(pcVar10);
      pcStack_360 = acStack_2f8;
      do {
        pcVar1 = pcVar1 + -0x18;
      } while (pcVar1 != pcStack_360);
      _objc_release(pcVar10);
      _objc_release(pcVar12);
      _objc_release(pcVar5);
      pcVar4 = pcVar2;
      __Unwind_Resume();
      pcStack_328 = FUN_10663bebc;
      lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcStack_370 = unaff_x26;
      pcStack_368 = unaff_x25;
      pcStack_358 = pcVar1;
      pcStack_350 = pcVar2;
      pcStack_348 = pcVar10;
      pcStack_340 = pcVar12;
      pcStack_338 = pcVar5;
      pppuStack_330 = &pppuStack_250;
      _objc_retain(pcVar11);
      _objc_retain(pcVar14);
      _objc_retain(pcVar17);
      if (pcVar4 != (char *)0x0) {
        plVar21 = *(long **)(pcVar4 + 8);
        pcVar1 = "true";
        if ((int)pcVar8 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(acStack_3d8,pcVar1);
        _objc_retain(pcVar11);
        if (pcVar11 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar11);
          pcVar1 = pcVar11;
          func_0x00010bdc3520(pcVar11);
        }
        _objc_release(pcVar11);
        func_0x00010002b838(auStack_3c0,pcVar1);
        _objc_retain(pcVar14);
        if (pcVar14 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar14);
          pcVar1 = pcVar14;
          func_0x00010bdc3520(pcVar14);
        }
        _objc_release(pcVar14);
        func_0x00010002b838(auStack_3a8,pcVar1);
        _objc_retain(pcVar17);
        if (pcVar17 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar17);
          pcVar1 = pcVar17;
          func_0x00010bdc3520(pcVar17);
        }
        _objc_release(pcVar17);
        func_0x00010002b838(auStack_390,pcVar1);
        uStack_3f8 = 0;
        uStack_3f0 = 0;
        uStack_3e8 = 0;
        func_0x00010007e1e8(&uStack_3f8,acStack_3d8,&lStack_378,4);
        (**(code **)(*plVar21 + 0x18))(plVar21,&UNK_110930d98,&uStack_3f8,pcVar18);
        puStack_3e0 = &uStack_3f8;
        func_0x00010007e5dc(&puStack_3e0);
        lVar20 = 0;
        pcVar8 = acStack_3d8;
        do {
          if ((&cStack_379)[lVar20] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_390 + lVar20));
          }
          lVar20 = lVar20 + -0x18;
        } while (lVar20 != -0x60);
      }
      _objc_release(pcVar17);
      _objc_release(pcVar14);
      pcVar1 = pcVar11;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_378) {
        ___stack_chk_fail();
        _objc_release(pcVar17);
        do {
          pcVar8 = pcVar8 + -0x18;
        } while (pcVar8 != acStack_3d8);
        _objc_release(pcVar17);
        _objc_release(pcVar14);
        _objc_release(pcVar11);
        pcVar5 = pcVar1;
        __Unwind_Resume();
        ppcVar6 = &pcStack_440;
        pcStack_408 = FUN_10663c1ac;
        puStack_438 = PTR_PTR_1126f2300;
        pcStack_440 = pcVar5;
        pcStack_430 = pcVar1;
        pcStack_428 = pcVar17;
        pcStack_420 = pcVar14;
        pcStack_418 = pcVar11;
        pppuStack_410 = &pppuStack_330;
        _objc_msgSendSuper2(&pcStack_440,PTR_s_initWithFrame__1125e2948);
        if (ppcVar6 != (char **)0x0) {
          puVar7 = PTR_PTR_1126b1870;
          _objc_alloc();
          func_0x00010c0639c0();
          lVar20 = (long)_DAT_11274c928;
          uVar19 = *(undefined8 *)((long)ppcVar6 + lVar20);
          *(undefined **)((long)ppcVar6 + lVar20) = puVar7;
          _objc_release(uVar19);
          uVar19 = *(undefined8 *)((long)ppcVar6 + lVar20);
          func_0x00010bf20c00(ppcVar6);
          func_0x00010c19f0e0(uVar19);
          func_0x00010befbb60(ppcVar6);
          pcVar1 = (char *)((long)ppcVar6 + (long)_DAT_11274c92c);
          uVar19 = *(undefined8 *)PTR__CGRectNull_1103475e8;
          uVar23 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
          uVar22 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
          *(undefined8 *)(pcVar1 + 8) = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
          *(undefined8 *)pcVar1 = uVar19;
          *(undefined8 *)(pcVar1 + 0x18) = uVar23;
          *(undefined8 *)(pcVar1 + 0x10) = uVar22;
        }
        return (char *)ppcVar6;
      }
      return pcVar1;
    }
    return pcVar2;
  }
  return pcVar2;
}



/* Entry: 10663b5d8; end: 10663b897;  */

/* WARNING: Removing unreachable block (ram,0x00010663be84) */
/* WARNING: Removing unreachable block (ram,0x00010663b860) */
/* WARNING: Removing unreachable block (ram,0x00010663bb8c) */
/* WARNING: Removing unreachable block (ram,0x00010663c174) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_10663b5d8(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  char *unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uVar22;
  undefined8 uVar23;
  char *pcStack_3a0;
  undefined *puStack_398;
  char *pcStack_390;
  char *pcStack_388;
  char *pcStack_380;
  char *pcStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  char acStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  char *pcStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  char *pcStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  char acStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined8 auStack_210 [2];
  char cStack_1f9;
  long lStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  char acStack_198 [24];
  char *pcStack_180;
  char acStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  pcVar11 = param_4;
  pcVar15 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar21 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      unaff_x25 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,unaff_x25);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar21 + 0x18))(plVar21);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar20 = 0;
    pcVar4 = pcVar2;
    pcVar11 = param_5;
    do {
      if ((&cStack_59)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar20 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_c8 = FUN_10663b898;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar9 = pcVar4;
  pcVar12 = pcVar11;
  pcVar16 = pcVar15;
  pcVar14 = param_6;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  _objc_retain(pcVar11);
  _objc_retain(pcVar15);
  if (pcVar2 != (char *)0x0) {
    plVar21 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_178,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_160,pcVar2);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar2 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      unaff_x26 = pcVar15;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar15);
    func_0x00010002b838(auStack_130,unaff_x26);
    acStack_198[0] = '\0';
    acStack_198[1] = '\0';
    acStack_198[2] = '\0';
    acStack_198[3] = '\0';
    acStack_198[4] = '\0';
    acStack_198[5] = '\0';
    acStack_198[6] = '\0';
    acStack_198[7] = '\0';
    acStack_198[8] = '\0';
    acStack_198[9] = '\0';
    acStack_198[10] = '\0';
    acStack_198[0xb] = '\0';
    acStack_198[0xc] = '\0';
    acStack_198[0xd] = '\0';
    acStack_198[0xe] = '\0';
    acStack_198[0xf] = '\0';
    acStack_198[0x10] = '\0';
    acStack_198[0x11] = '\0';
    acStack_198[0x12] = '\0';
    acStack_198[0x13] = '\0';
    acStack_198[0x14] = '\0';
    acStack_198[0x15] = '\0';
    acStack_198[0x16] = '\0';
    acStack_198[0x17] = '\0';
    func_0x00010007e1e8(acStack_198,acStack_178,&lStack_118,4);
    pcVar7 = "";
    unaff_x25 = acStack_198;
    pcVar9 = acStack_198;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    pcStack_180 = unaff_x25;
    func_0x00010007e5dc(&pcStack_180);
    lVar20 = 0;
    pcVar12 = param_6;
    do {
      if ((&cStack_119)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x60);
  }
  _objc_release(pcVar15);
  _objc_release(pcVar11);
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(pcVar15);
    pcStack_1e0 = acStack_178;
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != pcStack_1e0);
    _objc_release(pcVar15);
    _objc_release(pcVar11);
    _objc_release(pcVar4);
    _objc_release(pcVar1);
    pcVar3 = pcVar2;
    __Unwind_Resume();
    pcStack_1a8 = FUN_10663bbcc;
    lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = pcVar7;
    pcVar10 = pcVar9;
    pcVar13 = pcVar12;
    pcVar17 = pcVar16;
    pcVar18 = pcVar14;
    pcStack_1f0 = unaff_x26;
    pcStack_1e8 = unaff_x25;
    pcStack_1d8 = pcVar2;
    pcStack_1d0 = pcVar15;
    pcStack_1c8 = pcVar11;
    pcStack_1c0 = pcVar4;
    pcStack_1b8 = pcVar1;
    ppuStack_1b0 = &puStack_d0;
    _objc_retain(pcVar9);
    _objc_retain(pcVar12);
    _objc_retain(pcVar16);
    if (pcVar3 != (char *)0x0) {
      plVar21 = *(long **)(pcVar3 + 8);
      pcVar1 = "true";
      if ((int)pcVar7 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(acStack_258,pcVar1);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar1 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_240,pcVar1);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar12);
        pcVar1 = pcVar12;
        func_0x00010bdc3520(pcVar12);
      }
      _objc_release(pcVar12);
      func_0x00010002b838(auStack_228,pcVar1);
      _objc_retain(pcVar16);
      if (pcVar16 == (char *)0x0) {
        unaff_x25 = "";
      }
      else {
        _objc_retainAutorelease(pcVar16);
        unaff_x25 = pcVar16;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar16);
      func_0x00010002b838(auStack_210,unaff_x25);
      acStack_278[0] = '\0';
      acStack_278[1] = '\0';
      acStack_278[2] = '\0';
      acStack_278[3] = '\0';
      acStack_278[4] = '\0';
      acStack_278[5] = '\0';
      acStack_278[6] = '\0';
      acStack_278[7] = '\0';
      acStack_278[8] = '\0';
      acStack_278[9] = '\0';
      acStack_278[10] = '\0';
      acStack_278[0xb] = '\0';
      acStack_278[0xc] = '\0';
      acStack_278[0xd] = '\0';
      acStack_278[0xe] = '\0';
      acStack_278[0xf] = '\0';
      acStack_278[0x10] = '\0';
      acStack_278[0x11] = '\0';
      acStack_278[0x12] = '\0';
      acStack_278[0x13] = '\0';
      acStack_278[0x14] = '\0';
      acStack_278[0x15] = '\0';
      acStack_278[0x16] = '\0';
      acStack_278[0x17] = '\0';
      func_0x00010007e1e8(acStack_278,acStack_258,&lStack_1f8,4);
      pcVar8 = "\x01";
      pcVar10 = acStack_278;
      (**(code **)(*plVar21 + 0x18))(plVar21);
      pcStack_260 = acStack_278;
      func_0x00010007e5dc(&pcStack_260);
      lVar20 = 0;
      pcVar7 = acStack_258;
      pcVar13 = pcVar14;
      do {
        if ((&cStack_1f9)[lVar20] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_210 + lVar20));
        }
        lVar20 = lVar20 + -0x18;
      } while (lVar20 != -0x60);
    }
    _objc_release(pcVar16);
    _objc_release(pcVar12);
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
      ___stack_chk_fail();
      _objc_release(pcVar16);
      pcStack_2c0 = acStack_258;
      do {
        pcVar7 = pcVar7 + -0x18;
      } while (pcVar7 != pcStack_2c0);
      _objc_release(pcVar16);
      _objc_release(pcVar12);
      _objc_release(pcVar9);
      pcVar4 = pcVar1;
      __Unwind_Resume();
      pcStack_288 = FUN_10663bebc;
      lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcStack_2d0 = unaff_x26;
      pcStack_2c8 = unaff_x25;
      pcStack_2b8 = pcVar7;
      pcStack_2b0 = pcVar1;
      pcStack_2a8 = pcVar16;
      pcStack_2a0 = pcVar12;
      pcStack_298 = pcVar9;
      pppuStack_290 = &ppuStack_1b0;
      _objc_retain(pcVar10);
      _objc_retain(pcVar13);
      _objc_retain(pcVar17);
      if (pcVar4 != (char *)0x0) {
        plVar21 = *(long **)(pcVar4 + 8);
        pcVar1 = "true";
        if ((int)pcVar8 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(acStack_338,pcVar1);
        _objc_retain(pcVar10);
        if (pcVar10 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar10);
          pcVar1 = pcVar10;
          func_0x00010bdc3520(pcVar10);
        }
        _objc_release(pcVar10);
        func_0x00010002b838(auStack_320,pcVar1);
        _objc_retain(pcVar13);
        if (pcVar13 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar13);
          pcVar1 = pcVar13;
          func_0x00010bdc3520(pcVar13);
        }
        _objc_release(pcVar13);
        func_0x00010002b838(auStack_308,pcVar1);
        _objc_retain(pcVar17);
        if (pcVar17 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar17);
          pcVar1 = pcVar17;
          func_0x00010bdc3520(pcVar17);
        }
        _objc_release(pcVar17);
        func_0x00010002b838(auStack_2f0,pcVar1);
        uStack_358 = 0;
        uStack_350 = 0;
        uStack_348 = 0;
        func_0x00010007e1e8(&uStack_358,acStack_338,&lStack_2d8,4);
        (**(code **)(*plVar21 + 0x18))(plVar21,&UNK_110930d98,&uStack_358,pcVar18);
        puStack_340 = &uStack_358;
        func_0x00010007e5dc(&puStack_340);
        lVar20 = 0;
        pcVar8 = acStack_338;
        do {
          if ((&cStack_2d9)[lVar20] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar20));
          }
          lVar20 = lVar20 + -0x18;
        } while (lVar20 != -0x60);
      }
      _objc_release(pcVar17);
      _objc_release(pcVar13);
      pcVar1 = pcVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d8) {
        ___stack_chk_fail();
        _objc_release(pcVar17);
        do {
          pcVar8 = pcVar8 + -0x18;
        } while (pcVar8 != acStack_338);
        _objc_release(pcVar17);
        _objc_release(pcVar13);
        _objc_release(pcVar10);
        pcVar4 = pcVar1;
        __Unwind_Resume();
        ppcVar5 = &pcStack_3a0;
        pcStack_368 = FUN_10663c1ac;
        puStack_398 = PTR_PTR_1126f2300;
        pcStack_3a0 = pcVar4;
        pcStack_390 = pcVar1;
        pcStack_388 = pcVar17;
        pcStack_380 = pcVar13;
        pcStack_378 = pcVar10;
        pppuStack_370 = &pppuStack_290;
        _objc_msgSendSuper2(&pcStack_3a0,PTR_s_initWithFrame__1125e2948);
        if (ppcVar5 != (char **)0x0) {
          puVar6 = PTR_PTR_1126b1870;
          _objc_alloc();
          func_0x00010c0639c0();
          lVar20 = (long)_DAT_11274c928;
          uVar19 = *(undefined8 *)((long)ppcVar5 + lVar20);
          *(undefined **)((long)ppcVar5 + lVar20) = puVar6;
          _objc_release(uVar19);
          uVar19 = *(undefined8 *)((long)ppcVar5 + lVar20);
          func_0x00010bf20c00(ppcVar5);
          func_0x00010c19f0e0(uVar19);
          func_0x00010befbb60(ppcVar5);
          pcVar1 = (char *)((long)ppcVar5 + (long)_DAT_11274c92c);
          uVar19 = *(undefined8 *)PTR__CGRectNull_1103475e8;
          uVar23 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
          uVar22 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
          *(undefined8 *)(pcVar1 + 8) = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
          *(undefined8 *)pcVar1 = uVar19;
          *(undefined8 *)(pcVar1 + 0x18) = uVar23;
          *(undefined8 *)(pcVar1 + 0x10) = uVar22;
        }
        return (char *)ppcVar5;
      }
      return pcVar1;
    }
    return pcVar1;
  }
  return pcVar2;
}



/* Entry: 10663b898; end: 10663bbcb;  */

/* WARNING: Removing unreachable block (ram,0x00010663be84) */
/* WARNING: Removing unreachable block (ram,0x00010663bb8c) */
/* WARNING: Removing unreachable block (ram,0x00010663c174) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_10663b898(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  undefined *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uVar18;
  undefined8 uVar19;
  char *pcStack_2e0;
  undefined *puStack_2d8;
  char *pcStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined1 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  char acStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  char *pcStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  char acStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar10 = param_4;
  pcVar12 = param_5;
  pcVar4 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      unaff_x26 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,unaff_x26);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar1 = "";
    unaff_x25 = acStack_d8;
    pcVar5 = acStack_d8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    pcStack_c0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_c0);
    lVar16 = 0;
    pcVar10 = param_6;
    do {
      if ((&cStack_59)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  pcStack_120 = acStack_b8;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_120);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_e8 = FUN_10663bbcc;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar9 = pcVar5;
  pcVar11 = pcVar10;
  pcVar13 = pcVar12;
  pcVar14 = pcVar4;
  pcStack_130 = unaff_x26;
  pcStack_128 = unaff_x25;
  pcStack_118 = pcVar2;
  pcStack_110 = param_5;
  pcStack_108 = param_4;
  pcStack_100 = param_3;
  pcStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar5);
  _objc_retain(pcVar10);
  _objc_retain(pcVar12);
  if (pcVar3 != (char *)0x0) {
    plVar17 = *(long **)(pcVar3 + 8);
    pcVar2 = "true";
    if ((int)pcVar1 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(acStack_198,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_180,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_168,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      unaff_x25 = pcVar12;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_150,unaff_x25);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1b8,acStack_198,&lStack_138,4);
    pcVar8 = "\x01";
    pcVar9 = acStack_1b8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    pcStack_1a0 = acStack_1b8;
    func_0x00010007e5dc(&pcStack_1a0);
    lVar16 = 0;
    pcVar1 = acStack_198;
    pcVar11 = pcVar4;
    do {
      if ((&cStack_139)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x60);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar10);
  pcVar4 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    _objc_release(pcVar12);
    pcStack_200 = acStack_198;
    do {
      pcVar1 = pcVar1 + -0x18;
    } while (pcVar1 != pcStack_200);
    _objc_release(pcVar12);
    _objc_release(pcVar10);
    _objc_release(pcVar5);
    pcVar2 = pcVar4;
    __Unwind_Resume();
    pcStack_1c8 = FUN_10663bebc;
    lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcStack_210 = unaff_x26;
    pcStack_208 = unaff_x25;
    pcStack_1f8 = pcVar1;
    pcStack_1f0 = pcVar4;
    pcStack_1e8 = pcVar12;
    pcStack_1e0 = pcVar10;
    pcStack_1d8 = pcVar5;
    ppuStack_1d0 = &puStack_f0;
    _objc_retain(pcVar9);
    _objc_retain(pcVar11);
    _objc_retain(pcVar13);
    if (pcVar2 != (char *)0x0) {
      plVar17 = *(long **)(pcVar2 + 8);
      pcVar1 = "true";
      if ((int)pcVar8 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(acStack_278,pcVar1);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar1 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_260,pcVar1);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar11);
        pcVar1 = pcVar11;
        func_0x00010bdc3520(pcVar11);
      }
      _objc_release(pcVar11);
      func_0x00010002b838(auStack_248,pcVar1);
      _objc_retain(pcVar13);
      if (pcVar13 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar13);
        pcVar1 = pcVar13;
        func_0x00010bdc3520(pcVar13);
      }
      _objc_release(pcVar13);
      func_0x00010002b838(auStack_230,pcVar1);
      uStack_298 = 0;
      uStack_290 = 0;
      uStack_288 = 0;
      func_0x00010007e1e8(&uStack_298,acStack_278,&lStack_218,4);
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110930d98,&uStack_298,pcVar14);
      puStack_280 = &uStack_298;
      func_0x00010007e5dc(&puStack_280);
      lVar16 = 0;
      pcVar8 = acStack_278;
      do {
        if ((&cStack_219)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
      } while (lVar16 != -0x60);
    }
    _objc_release(pcVar13);
    _objc_release(pcVar11);
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
      ___stack_chk_fail();
      _objc_release(pcVar13);
      do {
        pcVar8 = pcVar8 + -0x18;
      } while (pcVar8 != acStack_278);
      _objc_release(pcVar13);
      _objc_release(pcVar11);
      _objc_release(pcVar9);
      pcVar5 = pcVar1;
      __Unwind_Resume();
      ppcVar6 = &pcStack_2e0;
      pcStack_2a8 = FUN_10663c1ac;
      puStack_2d8 = PTR_PTR_1126f2300;
      pcStack_2e0 = pcVar5;
      pcStack_2d0 = pcVar1;
      pcStack_2c8 = pcVar13;
      pcStack_2c0 = pcVar11;
      pcStack_2b8 = pcVar9;
      pppuStack_2b0 = &ppuStack_1d0;
      _objc_msgSendSuper2(&pcStack_2e0,PTR_s_initWithFrame__1125e2948);
      if (ppcVar6 != (char **)0x0) {
        puVar7 = PTR_PTR_1126b1870;
        _objc_alloc();
        func_0x00010c0639c0();
        lVar16 = (long)_DAT_11274c928;
        uVar15 = *(undefined8 *)((long)ppcVar6 + lVar16);
        *(undefined **)((long)ppcVar6 + lVar16) = puVar7;
        _objc_release(uVar15);
        uVar15 = *(undefined8 *)((long)ppcVar6 + lVar16);
        func_0x00010bf20c00(ppcVar6);
        func_0x00010c19f0e0(uVar15);
        func_0x00010befbb60(ppcVar6);
        pcVar1 = (char *)((long)ppcVar6 + (long)_DAT_11274c92c);
        uVar15 = *(undefined8 *)PTR__CGRectNull_1103475e8;
        uVar19 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
        uVar18 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
        *(undefined8 *)(pcVar1 + 8) = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
        *(undefined8 *)pcVar1 = uVar15;
        *(undefined8 *)(pcVar1 + 0x18) = uVar19;
        *(undefined8 *)(pcVar1 + 0x10) = uVar18;
      }
      return (char *)ppcVar6;
    }
    return pcVar1;
  }
  return pcVar4;
}



/* Entry: 10663bbcc; end: 10663bebb;  */

/* WARNING: Removing unreachable block (ram,0x00010663be84) */
/* WARNING: Removing unreachable block (ram,0x00010663c174) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_10663bbcc(long param_1,undefined *param_2,char *param_3,char *param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcStack_200;
  undefined *puStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_2;
  pcVar1 = param_3;
  pcVar5 = param_4;
  pcVar6 = param_5;
  pcVar3 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_d8,auStack_b8,&lStack_58,4);
    puVar9 = &UNK_110930d48;
    pcVar1 = acStack_d8;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pcStack_c0 = acStack_d8;
    func_0x00010007e5dc(&pcStack_c0);
    lVar8 = 0;
    param_2 = auStack_b8;
    pcVar5 = param_6;
    do {
      if ((&cStack_59)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    param_2 = param_2 + -0x18;
  } while (param_2 != auStack_b8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_e8 = FUN_10663bebc;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  _objc_retain(pcVar6);
  if (pcVar2 != (char *)0x0) {
    plVar10 = *(long **)(pcVar2 + 8);
    pcVar2 = "true";
    if ((int)puVar9 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_198,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_180,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_168,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_150,pcVar2);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_138,4);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110930d98,&uStack_1b8,pcVar3);
    puStack_1a0 = &uStack_1b8;
    func_0x00010007e5dc(&puStack_1a0);
    lVar8 = 0;
    puVar9 = auStack_198;
    do {
      if ((&cStack_139)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x60);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    do {
      puVar9 = puVar9 + -0x18;
    } while (puVar9 != auStack_198);
    _objc_release(pcVar6);
    _objc_release(pcVar5);
    _objc_release(pcVar1);
    pcVar2 = pcVar3;
    __Unwind_Resume();
    ppcVar4 = &pcStack_200;
    pcStack_1c8 = FUN_10663c1ac;
    puStack_1f8 = PTR_PTR_1126f2300;
    pcStack_200 = pcVar2;
    pcStack_1f0 = pcVar3;
    pcStack_1e8 = pcVar6;
    pcStack_1e0 = pcVar5;
    pcStack_1d8 = pcVar1;
    ppuStack_1d0 = &puStack_f0;
    _objc_msgSendSuper2(&pcStack_200,PTR_s_initWithFrame__1125e2948);
    if (ppcVar4 != (char **)0x0) {
      puVar9 = PTR_PTR_1126b1870;
      _objc_alloc();
      func_0x00010c0639c0();
      lVar8 = (long)_DAT_11274c928;
      uVar7 = *(undefined8 *)((long)ppcVar4 + lVar8);
      *(undefined **)((long)ppcVar4 + lVar8) = puVar9;
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)((long)ppcVar4 + lVar8);
      func_0x00010bf20c00(ppcVar4);
      func_0x00010c19f0e0(uVar7);
      func_0x00010befbb60(ppcVar4);
      pcVar1 = (char *)((long)ppcVar4 + (long)_DAT_11274c92c);
      uVar7 = *(undefined8 *)PTR__CGRectNull_1103475e8;
      uVar12 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
      uVar11 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
      *(undefined8 *)(pcVar1 + 8) = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
      *(undefined8 *)pcVar1 = uVar7;
      *(undefined8 *)(pcVar1 + 0x18) = uVar12;
      *(undefined8 *)(pcVar1 + 0x10) = uVar11;
    }
    return (char *)ppcVar4;
  }
  return pcVar3;
}



/* Entry: 10663bebc; end: 10663c1ab;  */

/* WARNING: Removing unreachable block (ram,0x00010663c174) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_10663bebc(long param_1,undefined1 *param_2,char *param_3,char *param_4,char *param_5,
                    undefined8 param_6)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcStack_120;
  undefined *puStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,pcVar1);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x00010007e1e8(&uStack_d8,auStack_b8,&lStack_58,4);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110930d98,&uStack_d8,param_6);
    puStack_c0 = &uStack_d8;
    func_0x00010007e5dc(&puStack_c0);
    lVar6 = 0;
    param_2 = auStack_b8;
    do {
      if ((&cStack_59)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      param_2 = param_2 + -0x18;
    } while (param_2 != auStack_b8);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    pcVar2 = pcVar1;
    __Unwind_Resume();
    ppcVar3 = &pcStack_120;
    pcStack_e8 = FUN_10663c1ac;
    puStack_118 = PTR_PTR_1126f2300;
    pcStack_120 = pcVar2;
    pcStack_110 = pcVar1;
    pcStack_108 = param_5;
    pcStack_100 = param_4;
    pcStack_f8 = param_3;
    puStack_f0 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&pcStack_120,PTR_s_initWithFrame__1125e2948);
    if (ppcVar3 != (char **)0x0) {
      puVar4 = PTR_PTR_1126b1870;
      _objc_alloc();
      func_0x00010c0639c0();
      lVar6 = (long)_DAT_11274c928;
      uVar5 = *(undefined8 *)((long)ppcVar3 + lVar6);
      *(undefined **)((long)ppcVar3 + lVar6) = puVar4;
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)((long)ppcVar3 + lVar6);
      func_0x00010bf20c00(ppcVar3);
      func_0x00010c19f0e0(uVar5);
      func_0x00010befbb60(ppcVar3);
      pcVar1 = (char *)((long)ppcVar3 + (long)_DAT_11274c92c);
      uVar5 = *(undefined8 *)PTR__CGRectNull_1103475e8;
      uVar9 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
      uVar8 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
      *(undefined8 *)(pcVar1 + 8) = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
      *(undefined8 *)pcVar1 = uVar5;
      *(undefined8 *)(pcVar1 + 0x18) = uVar9;
      *(undefined8 *)(pcVar1 + 0x10) = uVar8;
    }
    return (char *)ppcVar3;
  }
  return pcVar1;
}



/* Entry: 10663c1ac; end: 10663c25f; -[SCCollectionViewSingleComposerCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10663c1ac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_1126f2300;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126b1870;
    _objc_alloc();
    func_0x00010c0639c0();
    lVar5 = (long)_DAT_11274c928;
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined **)((long)puVar2 + lVar5) = puVar3;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    func_0x00010bf20c00(puVar2);
    func_0x00010c19f0e0(uVar4);
    func_0x00010befbb60(puVar2);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11274c92c);
    uVar4 = *(undefined8 *)PTR__CGRectNull_1103475e8;
    uVar7 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
    uVar6 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
    *puVar1 = uVar4;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
  }
  return (undefined1 *)puVar2;
}



/* Entry: 10663c260; end: 10663c353; -[SCCollectionViewSingleComposerCell applyLayoutAttributes:] */

void FUN_10663c260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2300;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_applyLayoutAttributes__112527ed0,param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10663c320;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10663c354; end: 10663c41f; -[SCCollectionViewSingleComposerCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10663c354(long param_1)

{
  long lVar1;
  double in_d3;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2300;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  if (((*(byte *)(param_1 + _DAT_11274c930) & 1) == 0) ||
     (lVar1 = (long)_DAT_11274c934, *(char *)(param_1 + lVar1) != '\0')) {
    func_0x00010be48fe0(param_1);
  }
  else {
    func_0x00010bf20c00(param_1);
    *(bool *)(param_1 + lVar1) = 1.0 < in_d3;
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010bee41a0(param_1);
  }
  return;
}



/* Entry: 10663c420; end: 10663c427;  */

void FUN_10663c420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be48fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__layoutComposerViewHost_11256fd90);
  return;
}



/* Entry: 10663c428; end: 10663c4ff; -[SCCollectionViewSingleComposerCell populateUIWithComposerContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10663c428(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11274c938;
  lVar1 = *(long *)(param_1 + lVar3);
  lVar2 = lVar1;
  if (lVar1 != param_3) {
    func_0x00010c141780();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + _DAT_11274c928);
    _objc_release();
    lVar2 = *(long *)(param_1 + lVar3);
    if (lVar1 == lVar4) {
      func_0x00010bed20a0(param_1);
      func_0x00010c1ee6c0(*(undefined8 *)(param_1 + lVar3));
      lVar2 = *(long *)(param_1 + lVar3);
    }
  }
  *(long *)(param_1 + lVar3) = param_3;
  _objc_retain(param_3);
  _objc_release(lVar2);
  func_0x00010c1ee6c0(*(undefined8 *)(param_1 + lVar3));
  _objc_release(param_3);
  *(undefined1 *)(param_1 + _DAT_11274c934) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bee41b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateVisibleViewport_112596a10);
  return;
}



/* Entry: 10663c500; end: 10663c5c7; -[SCCollectionViewSingleComposerCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10663c500(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f2300;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  lVar4 = (long)_DAT_11274c938;
  lVar2 = *(long *)(param_1 + lVar4);
  func_0x00010c141780();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + _DAT_11274c928);
  _objc_release();
  if (lVar2 == lVar5) {
    func_0x00010bed20a0(param_1);
    func_0x00010c1ee6c0(*(undefined8 *)(param_1 + lVar4));
  }
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_11274c92c);
  uVar3 = *(undefined8 *)PTR__CGRectNull_1103475e8;
  uVar7 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
  uVar6 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
  puVar1[1] = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
  *puVar1 = uVar3;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  *(undefined1 *)(param_1 + _DAT_11274c934) = 0;
  return;
}



/* Entry: 10663c5c8; end: 10663c5cb; +[SCCollectionViewSingleComposerCell reuseIdentifier] */

void FUN_10663c5c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 10663c5cc; end: 10663c5e3; -[SCCollectionViewSingleComposerCell viewportDidUpdateViewportFrame:dragging:decelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10663c5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11274c92c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bee41b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__updateVisibleViewport_112596a10);
  return;
}



/* Entry: 10663c5e4; end: 10663c617; -[SCCollectionViewSingleComposerCell _layoutComposerViewHost] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10663c5e4(long param_1)

{
  long lVar1;
  
  func_0x00010bf20c00();
  lVar1 = (long)_DAT_11274c928;
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c08d150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_layoutSubviews_112600e60);
  return;
}



/* Entry: 10663c618; end: 10663c63b; -[SCCollectionViewSingleComposerCell _layoutComposerViewHostAndUpdateVisibleViewport] */

void FUN_10663c618(undefined8 param_1)

{
  func_0x00010be48fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bee41b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateVisibleViewport_112596a10);
  return;
}



/* Entry: 10663c63c; end: 10663c7e3; -[SCCollectionViewSingleComposerCell _updateVisibleViewport] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10663c63c(ulong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (*(long *)(param_1 + (long)_DAT_11274c938) == 0) {
    return;
  }
  uVar4 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  _objc_release();
  if (uVar4 == 0) {
    return;
  }
  puVar1 = (undefined8 *)(param_1 + (long)_DAT_11274c92c);
  uVar7 = *puVar1;
  uVar8 = puVar1[1];
  uVar10 = puVar1[2];
  uVar12 = puVar1[3];
  _CGRectIsNull(uVar7,uVar8,uVar10,uVar12);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar4 = param_1;
  func_0x00010bfb68e0();
  _CGRectIntersection();
  _CGRectIsNull();
  iVar2 = (int)uVar4;
  if (((uVar4 & 1) == 0) && (_CGRectIsEmpty(uVar7,uVar8,uVar10,uVar12), iVar2 == 0)) {
    lVar6 = (long)_DAT_11274c928;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    uVar4 = param_1;
    func_0x00010c262ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf513e0(uVar7,uVar8,uVar10,uVar12,uVar5);
    uVar5 = uVar7;
    uVar9 = uVar8;
    uVar11 = uVar10;
    uVar13 = uVar12;
    _objc_release(uVar4);
    uVar4 = *(ulong *)(param_1 + lVar6);
    func_0x00010bf20c00();
    _CGRectIntersection(uVar7,uVar8,uVar10,uVar12,uVar5,uVar9,uVar11,uVar13);
    _CGRectIsNull();
    iVar2 = (int)uVar4;
    if (((uVar4 & 1) == 0) && (_CGRectIsEmpty(uVar7,uVar8,uVar10,uVar12), iVar2 == 0))
    goto LAB_10663c7b8;
  }
  uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
LAB_10663c7b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdcee50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar7,uVar8,uVar10,uVar12,param_1,PTR_s__applyVisibleViewport__112551530);
  return;
}



/* Entry: 10663c7e4; end: 10663c7f3; -[SCCollectionViewSingleComposerCell _applyVisibleViewport:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10663c7e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c223d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274c938),PTR_s_setVisibleViewportWithFrame__112666988)
  ;
  return;
}



/* Entry: 10663c7f4; end: 10663c803; -[SCCollectionViewSingleComposerCell _unsetVisibleViewportForContext:] */

void FUN_10663c7f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c282750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_unsetVisibleViewport_11267e3f8);
    return;
  }
  return;
}



/* Entry: 10663c804; end: 10663c81b; -[SCCollectionViewSingleComposerCell viewportFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10663c804(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274c92c);
}



/* Entry: 10663c81c; end: 10663c833; -[SCCollectionViewSingleComposerCell setViewportFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10663c81c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11274c92c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 10663c834; end: 10663c843; -[SCCollectionViewSingleComposerCell updateLayoutingForComposerCells] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10663c834(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274c930);
}



/* Entry: 10663c844; end: 10663c853; -[SCCollectionViewSingleComposerCell setUpdateLayoutingForComposerCells:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10663c844(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274c930) = param_3;
  return;
}



/* Entry: 10663c854; end: 10663c893; -[SCCollectionViewSingleComposerCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10663c854(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274c938,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274c928,0);
  return;
}



/* Entry: 10663c894; end: 10663c8ab; -[SCCollectionViewSingleComposerCellSection initWithComposerContextProvider:supplementaryViewProvider:sectionInfo:performer:] */

void FUN_10663c894(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c000730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0x4030000000000000,0x4038000000000000,0x4030000000000000,param_1,
             PTR_s_initWithComposerContextProvider__1125ddb90);
  return;
}



/* Entry: 10663c8ac; end: 10663ca0b; -[SCCollectionViewSingleComposerCellSection initWithComposerContextProvider:supplementaryViewProvider:sectionInfo:performer:sectionEdgeInsets:isCompactCell:] */

undefined1 *
FUN_10663c8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,int param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f2308;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_9;
    _objc_release(uVar2);
    *(char *)((long)puVar1 + 0x58) = (char)param_11;
    if (param_11 == 0) {
      *(undefined8 *)((long)puVar1 + 0x28) = param_1;
      *(undefined8 *)((long)puVar1 + 0x30) = param_2;
      *(undefined8 *)((long)puVar1 + 0x38) = param_3;
      *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    }
    else {
      *(undefined8 *)((long)puVar1 + 0x30) = 0x4030000000000000;
      *(undefined8 *)((long)puVar1 + 0x28) = 0;
      *(undefined8 *)((long)puVar1 + 0x40) = 0x4030000000000000;
      *(undefined8 *)((long)puVar1 + 0x38) = 0;
    }
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    func_0x00010c21c740(*(undefined8 *)((long)puVar1 + 8));
    func_0x00010c183360(*(undefined8 *)((long)puVar1 + 8));
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10663ca0c; end: 10663ca8f; -[SCCollectionViewSingleComposerCellSection _populateUIForCell:atIndexInSection:] */

void FUN_10663ca0c(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    puVar2 = PTR_PTR_1126cc4b0;
    _objc_opt_class(PTR_PTR_1126cc4b0);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    func_0x00010c21c600(uVar1);
    func_0x00010c103d40(uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10663ca90; end: 10663cb1b; -[SCCollectionViewSingleComposerCellSection setUp] */

void FUN_10663ca90(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_setUp_112664a70);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 10663cb1c; end: 10663cb23;  */

void FUN_10663cb1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21c130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_setUp_112664a70);
  return;
}



/* Entry: 10663cb24; end: 10663cbaf; -[SCCollectionViewSingleComposerCellSection tearDown] */

void FUN_10663cb24(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_tearDown_112678508);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 10663cbb0; end: 10663cbb7;  */

void FUN_10663cbb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_tearDown_112678508);
  return;
}


