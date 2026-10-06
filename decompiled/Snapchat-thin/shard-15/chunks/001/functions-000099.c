/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8685bc; end: 10b868637; +[SIGNavigationBarView defaultBarViewWithItems:navBarHeight:barHeightStyle:barStyle:] */

void FUN_10b8685bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df688;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c0204e0(param_1,0x3ff0000000000000);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b868638; end: 10b868653; -[SIGNavigationBarView initWithItems:] */

void FUN_10b868638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0204f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4048000000000000,0x3ff0000000000000,param_1,
             PTR_s_initWithItems_navBarHeight_barHe_1125e5b20,param_3,1,0,1);
  return;
}



/* Entry: 10b868654; end: 10b86878f; -[SIGNavigationBarView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b868654(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 *puVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_4a0;
  long lStack_498;
  long *plStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined1 auStack_460 [128];
  long lStack_3e0;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 auStack_328 [128];
  long lStack_2a8;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  long lStack_130;
  undefined *puStack_128;
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
  
  plVar3 = &lStack_130;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar17 = 0.0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar10 = *(long *)(param_1 + _DAT_1127950ec);
  _objc_retain(lVar10);
  uVar8 = (uint)&uStack_120;
  puVar16 = auStack_d8;
  lVar12 = lVar10;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar13 = *plStack_110;
    do {
      lVar15 = 0;
      do {
        if (*plStack_110 != lVar13) {
          _objc_enumerationMutation(lVar10);
        }
        uVar2 = *(undefined8 *)(lStack_118 + lVar15 * 8);
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d560();
        _objc_release(uVar2);
        lVar15 = lVar15 + 1;
      } while (lVar12 != lVar15);
      uVar8 = (uint)&uStack_120;
      puVar16 = auStack_d8;
      lVar12 = lVar10;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release(lVar10);
  puStack_128 = PTR_PTR_11270b640;
  lStack_130 = param_1;
  _objc_msgSendSuper2(&lStack_130,PTR_s_dealloc_112525b20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_1127950d4;
  puVar11 = (undefined1 *)plVar3;
  if (*(double *)((long)plVar3 + lVar12) != dVar17) {
    *(double *)((long)plVar3 + lVar12) = dVar17;
    dVar17 = 0.0;
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    puVar11 = *(undefined1 **)((long)plVar3 + (long)_DAT_1127950f4);
    _objc_retain(puVar11);
    puVar16 = auStack_208;
    puVar4 = puVar11;
    uVar8 = (uint)&uStack_250;
    func_0x00010bf52a60();
    if (puVar4 != (undefined1 *)0x0) {
      lVar10 = *plStack_240;
      do {
        puVar16 = (undefined1 *)0x0;
        do {
          if (*plStack_240 != lVar10) {
            _objc_enumerationMutation(puVar11);
          }
          dVar17 = *(double *)((long)plVar3 + lVar12);
          func_0x00010c181140(*(undefined8 *)(lStack_248 + (long)puVar16 * 8));
          puVar16 = puVar16 + 1;
        } while (puVar4 != puVar16);
        puVar16 = auStack_208;
        puVar4 = puVar11;
        uVar8 = (uint)&uStack_250;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined1 *)0x0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(double *)(puVar11 + _DAT_1127950e0) != dVar17) {
    *(double *)(puVar11 + _DAT_1127950e0) = dVar17;
    dVar18 = *(double *)(puVar11 + _DAT_1127950d8);
    lStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    plStack_360 = (long *)0x0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    puVar11 = *(undefined1 **)(puVar11 + _DAT_1127950ec);
    _objc_retain(puVar11);
    puVar16 = auStack_328;
    puVar4 = puVar11;
    uVar8 = (uint)&uStack_370;
    func_0x00010bf52a60();
    if (puVar4 != (undefined1 *)0x0) {
      lVar12 = *plStack_360;
      do {
        puVar16 = (undefined1 *)0x0;
        do {
          if (*plStack_360 != lVar12) {
            _objc_enumerationMutation(puVar11);
          }
          func_0x00010c1a97c0((long)(dVar17 * dVar18 * 24.0),
                              *(undefined8 *)(lStack_368 + (long)puVar16 * 8));
          puVar16 = puVar16 + 1;
        } while (puVar4 != puVar16);
        puVar16 = auStack_328;
        puVar4 = puVar11;
        uVar8 = (uint)&uStack_370;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined1 *)0x0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  lStack_3e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar11;
  uVar9 = uVar8;
  func_0x000107c30ac0();
  if (((int)puVar4 != 0) && ((byte)puVar11[_DAT_1127950f8] != uVar8)) {
    puVar11[_DAT_1127950f8] = (char)uVar8;
    lStack_498 = 0;
    uStack_4a0 = 0;
    uStack_488 = 0;
    plStack_490 = (long *)0x0;
    uStack_478 = 0;
    uStack_480 = 0;
    uStack_468 = 0;
    uStack_470 = 0;
    lVar10 = *(long *)(puVar11 + _DAT_1127950ec);
    _objc_retain(lVar10);
    puVar16 = auStack_460;
    lVar12 = lVar10;
    uVar9 = (uint)&uStack_4a0;
    func_0x00010bf52a60();
    if (lVar12 != 0) {
      lVar13 = *plStack_490;
      do {
        lVar15 = 0;
        do {
          if (*plStack_490 != lVar13) {
            _objc_enumerationMutation(lVar10);
          }
          uVar14 = *(ulong *)(lStack_498 + lVar15 * 8);
          uVar5 = uVar14;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          _objc_opt_respondsToSelector();
          _objc_release(uVar6);
          _objc_release(uVar5);
          if ((uVar7 & 1) != 0) {
            func_0x00010c0840e0(uVar14);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar14;
            func_0x00010c29bf00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a9de0();
            _objc_release(uVar5);
            _objc_release(uVar14);
          }
          lVar15 = lVar15 + 1;
        } while (lVar12 != lVar15);
        puVar16 = auStack_460;
        lVar12 = lVar10;
        uVar9 = (uint)&uStack_4a0;
        func_0x00010bf52a60();
      } while (lVar12 != 0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar16);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = 0x3fe0000000000000;
  if (uVar9 == 0) {
    uVar2 = 0;
  }
  _objc_retain(puVar16);
  func_0x00010bef95a0(uVar2,0x3fe0000000000000,puVar1);
  _objc_release(puVar16);
  _objc_release(puVar16);
  return;
}



/* Entry: 10b868790; end: 10b8688af; -[SIGNavigationBarView setButtonsVerticalPadding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b868790(double param_1,long param_2,undefined8 param_3,uint param_4,undefined1 *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 auStack_330 [128];
  long lStack_2b0;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_1127950d4;
  lVar6 = param_2;
  if (*(double *)(param_2 + lVar8) != param_1) {
    *(double *)(param_2 + lVar8) = param_1;
    param_1 = 0.0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lVar6 = *(long *)(param_2 + _DAT_1127950f4);
    _objc_retain(lVar6);
    param_5 = auStack_d8;
    lVar7 = lVar6;
    param_4 = (uint)&uStack_120;
    func_0x00010bf52a60();
    if (lVar7 != 0) {
      lVar9 = *plStack_110;
      do {
        lVar11 = 0;
        do {
          if (*plStack_110 != lVar9) {
            _objc_enumerationMutation(lVar6);
          }
          param_1 = *(double *)(param_2 + lVar8);
          func_0x00010c181140(*(undefined8 *)(lStack_118 + lVar11 * 8));
          lVar11 = lVar11 + 1;
        } while (lVar7 != lVar11);
        param_5 = auStack_d8;
        lVar7 = lVar6;
        param_4 = (uint)&uStack_120;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(double *)(lVar6 + _DAT_1127950e0) != param_1) {
    *(double *)(lVar6 + _DAT_1127950e0) = param_1;
    dVar13 = *(double *)(lVar6 + _DAT_1127950d8);
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    lVar6 = *(long *)(lVar6 + _DAT_1127950ec);
    _objc_retain(lVar6);
    param_5 = auStack_1f8;
    lVar8 = lVar6;
    param_4 = (uint)&uStack_240;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar7 = *plStack_230;
      do {
        lVar9 = 0;
        do {
          if (*plStack_230 != lVar7) {
            _objc_enumerationMutation(lVar6);
          }
          func_0x00010c1a97c0((long)(param_1 * dVar13 * 24.0),
                              *(undefined8 *)(lStack_238 + lVar9 * 8));
          lVar9 = lVar9 + 1;
        } while (lVar8 != lVar9);
        param_5 = auStack_1f8;
        lVar8 = lVar6;
        param_4 = (uint)&uStack_240;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  lStack_2b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = lVar6;
  uVar5 = param_4;
  func_0x000107c30ac0();
  if (((int)lVar8 != 0) && (*(byte *)(lVar6 + _DAT_1127950f8) != param_4)) {
    *(char *)(lVar6 + _DAT_1127950f8) = (char)param_4;
    lStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    plStack_360 = (long *)0x0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    lVar8 = *(long *)(lVar6 + _DAT_1127950ec);
    _objc_retain(lVar8);
    param_5 = auStack_330;
    lVar6 = lVar8;
    uVar5 = (uint)&uStack_370;
    func_0x00010bf52a60();
    if (lVar6 != 0) {
      lVar7 = *plStack_360;
      do {
        lVar9 = 0;
        do {
          if (*plStack_360 != lVar7) {
            _objc_enumerationMutation(lVar8);
          }
          uVar10 = *(ulong *)(lStack_368 + lVar9 * 8);
          uVar2 = uVar10;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          _objc_opt_respondsToSelector();
          _objc_release(uVar3);
          _objc_release(uVar2);
          if ((uVar4 & 1) != 0) {
            func_0x00010c0840e0(uVar10);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar10;
            func_0x00010c29bf00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a9de0();
            _objc_release(uVar2);
            _objc_release(uVar10);
          }
          lVar9 = lVar9 + 1;
        } while (lVar6 != lVar9);
        param_5 = auStack_330;
        lVar6 = lVar8;
        uVar5 = (uint)&uStack_370;
        func_0x00010bf52a60();
      } while (lVar6 != 0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar12 = 0x3fe0000000000000;
  if (uVar5 == 0) {
    uVar12 = 0;
  }
  _objc_retain(param_5);
  func_0x00010bef95a0(uVar12,0x3fe0000000000000,puVar1);
  _objc_release(param_5);
  _objc_release(param_5);
  return;
}



/* Entry: 10b8688b0; end: 10b8689eb; -[SIGNavigationBarView setButtonIconScaleFactor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8688b0(double param_1,long param_2,undefined8 param_3,uint param_4,undefined1 *param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [128];
  long lStack_190;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(double *)(param_2 + _DAT_1127950e0) != param_1) {
    *(double *)(param_2 + _DAT_1127950e0) = param_1;
    dVar12 = *(double *)(param_2 + _DAT_1127950d8);
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    param_2 = *(long *)(param_2 + _DAT_1127950ec);
    _objc_retain(param_2);
    param_5 = auStack_d8;
    lVar2 = param_2;
    param_4 = (uint)&uStack_120;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar7 = *plStack_110;
      do {
        lVar8 = 0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(param_2);
          }
          func_0x00010c1a97c0((long)(param_1 * dVar12 * 24.0),
                              *(undefined8 *)(lStack_118 + lVar8 * 8));
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        param_5 = auStack_d8;
        lVar2 = param_2;
        param_4 = (uint)&uStack_120;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  uVar6 = param_4;
  func_0x000107c30ac0();
  if (((int)lVar2 != 0) && (*(byte *)(param_2 + _DAT_1127950f8) != param_4)) {
    *(char *)(param_2 + _DAT_1127950f8) = (char)param_4;
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    lVar7 = *(long *)(param_2 + _DAT_1127950ec);
    _objc_retain(lVar7);
    param_5 = auStack_210;
    lVar2 = lVar7;
    uVar6 = (uint)&uStack_250;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar8 = *plStack_240;
      do {
        lVar10 = 0;
        do {
          if (*plStack_240 != lVar8) {
            _objc_enumerationMutation(lVar7);
          }
          uVar9 = *(ulong *)(lStack_248 + lVar10 * 8);
          uVar3 = uVar9;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          _objc_opt_respondsToSelector();
          _objc_release(uVar4);
          _objc_release(uVar3);
          if ((uVar5 & 1) != 0) {
            func_0x00010c0840e0(uVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar9;
            func_0x00010c29bf00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a9de0();
            _objc_release(uVar3);
            _objc_release(uVar9);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        param_5 = auStack_210;
        lVar2 = lVar7;
        uVar6 = (uint)&uStack_250;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar11 = 0x3fe0000000000000;
  if (uVar6 == 0) {
    uVar11 = 0;
  }
  _objc_retain(param_5);
  func_0x00010bef95a0(uVar11,0x3fe0000000000000,puVar1);
  _objc_release(param_5);
  _objc_release(param_5);
  return;
}



/* Entry: 10b8689ec; end: 10b868b9f; -[SIGNavigationBarView setIgnoreButtonThemeColors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8689ec(long param_1,undefined8 param_2,uint param_3,undefined1 *param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  uVar6 = param_3;
  func_0x000107c30ac0();
  if (((int)lVar2 != 0) && (*(byte *)(param_1 + _DAT_1127950f8) != param_3)) {
    *(char *)(param_1 + _DAT_1127950f8) = (char)param_3;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar7 = *(long *)(param_1 + _DAT_1127950ec);
    _objc_retain(lVar7);
    param_4 = auStack_f0;
    lVar2 = lVar7;
    uVar6 = (uint)&uStack_130;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar9 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(lVar7);
          }
          uVar8 = *(ulong *)(lStack_128 + lVar10 * 8);
          uVar3 = uVar8;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          _objc_opt_respondsToSelector();
          _objc_release(uVar4);
          _objc_release(uVar3);
          if ((uVar5 & 1) != 0) {
            func_0x00010c0840e0(uVar8);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar8;
            func_0x00010c29bf00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a9de0();
            _objc_release(uVar3);
            _objc_release(uVar8);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        param_4 = auStack_f0;
        lVar2 = lVar7;
        uVar6 = (uint)&uStack_130;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar11 = 0x3fe0000000000000;
  if (uVar6 == 0) {
    uVar11 = 0;
  }
  _objc_retain(param_4);
  func_0x00010bef95a0(uVar11,0x3fe0000000000000,puVar1);
  _objc_release(param_4);
  _objc_release(param_4);
  return;
}



/* Entry: 10b868ba0; end: 10b868c5b; -[SIGNavigationBarView _performButtonsTransitionKeyFrameAnimation:barViewContext:] */

void FUN_10b868ba0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uStack_70 = 0xc2000000;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = 0x3fe0000000000000;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  pcStack_68 = FUN_10b868c5c;
  puStack_60 = &UNK_11084d5f8;
  uStack_48 = (undefined1)param_3;
  uStack_58 = param_4;
  uStack_50 = param_1;
  _objc_retain(param_4);
  func_0x00010bef95a0(uVar2,0x3fe0000000000000,puVar1,param_2,&puStack_78);
  _objc_release(uStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 10b868c5c; end: 10b868d9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b868c5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  iVar3 = (int)&uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = 0;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c27aaa0();
    uVar7 = 0xc024000000000000;
    if (lVar1 != 2) {
      uVar7 = 0;
    }
    uVar2 = 0x4024000000000000;
    if (lVar1 != 1) {
      uVar2 = uVar7;
    }
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + (long)_DAT_1127950f4);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c181140(uVar2,*(undefined8 *)(lStack_118 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar4;
      iVar3 = (int)&uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c08cdc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10b868da0;
  uVar7 = 0x3fe0000000000000;
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_10b868e18;
  puStack_148 = &UNK_110845ce0;
  uStack_138 = (undefined1)iVar3;
  uStack_140 = uVar2;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010bef95a0(uVar7,0x3fd3333340000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,
                      &puStack_160);
  return;
}



/* Entry: 10b868da0; end: 10b868e17; -[SIGNavigationBarView _performButtonsAlphaKeyFrameAnimation:] */

void FUN_10b868da0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  uVar1 = 0x3fe0000000000000;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10b868e18;
  puStack_28 = &UNK_110845ce0;
  uStack_18 = (undefined1)param_3;
  uStack_20 = param_1;
  func_0x00010bef95a0(uVar1,0x3fd3333340000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,
                      &puStack_40);
  return;
}



/* Entry: 10b868e18; end: 10b868e27;  */

void FUN_10b868e18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = NEON_ucvtf((ulong)*(byte *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10b868e28; end: 10b868e9f; -[SIGNavigationBarView _safeActiveConstraints:] */

void FUN_10b868e28(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b868ea0; end: 10b868ea3;  */

void FUN_10b868ea0(void)

{
  return;
}



/* Entry: 10b868ea4; end: 10b869227; -[SIGNavigationBarView endInternalInteraction:enableDarkModeAlways:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b868ea4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126ce598;
  _objc_opt_class(PTR_PTR_1126ce598);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar17 = 0;
    func_0x00010bf03440(0x3fb999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20);
    lVar11 = *(long *)(param_1 + _DAT_1127950ec);
    _objc_retain(lVar11);
    lVar5 = lVar11;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar11);
        }
        uVar12 = *(ulong *)(lVar10 * 8);
        uVar4 = uVar12;
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_3;
        func_0x00010c1598c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar4);
        if (uVar4 == uVar6) {
          func_0x00010c07d660();
          lVar13 = (long)_DAT_1127950f0;
          uVar7 = *(undefined8 *)(param_1 + lVar13);
          if ((uVar12 & 1) == 0) {
            dVar14 = 0.0;
            func_0x00010c1677c0(uVar7);
            puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
            uVar4 = param_3;
            func_0x00010c1598c0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe3340();
            func_0x00010c23ba80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c216160(*(undefined8 *)(param_1 + lVar13));
            _objc_release(puVar3);
            _objc_release(uVar4);
            func_0x00010bdd84c0(param_1);
            dVar15 = dVar14;
            func_0x00010bf345e0(*(undefined8 *)(param_1 + lVar13));
            dVar16 = -14.0;
            if (dVar14 <= dVar15) {
              dVar16 = 14.0;
            }
            func_0x00010c17a6a0(dVar14 + dVar16,uVar17,*(undefined8 *)(param_1 + lVar13));
          }
          else {
            func_0x00010c08c0e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12aaa0();
            _objc_release(uVar7);
            uVar8 = *(undefined8 *)(param_1 + lVar13);
            func_0x00010c08c0e0(uVar8);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar8;
            func_0x00010c10f4e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c104260();
            func_0x00010c17a6a0(*(undefined8 *)(param_1 + lVar13));
            _objc_release(uVar7);
            _objc_release(uVar8);
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar5 != lVar10);
      lVar5 = lVar11;
      func_0x00010bf52a60();
    }
    _objc_release(lVar11);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_retain(param_3);
    func_0x00010bf03400(0x3fb999999999999a,puVar3);
    *(undefined1 *)(param_1 + _DAT_112795118) = 1;
    _objc_release(uVar1);
  }
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bed46d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s__updateButtonsWithEnableDarkMode_112592b58,
             *(undefined1 *)(param_3 + 0x28));
  return;
}



/* Entry: 10b869228; end: 10b869237;  */

void FUN_10b869228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed46d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateButtonsWithEnableDarkMode_112592b58,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b869238; end: 10b86928f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b869238(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1677c0(0x3ff0000000000000,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127950f0));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1598c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed45a0(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b869290; end: 10b869387; -[SIGNavigationBarView presentTooltips] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b869290(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + _DAT_1127950ec);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010c10e980(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar4 + _DAT_112795104) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b86939c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar4 + _DAT_112795104) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b869388; end: 10b8693a3; -[SIGNavigationBarView _handleSwipeUp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b869388(long param_1)

{
  if (*(long *)(param_1 + _DAT_112795104) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b86939c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + _DAT_112795104) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b8693a4; end: 10b8693b3; -[SIGNavigationBarView dimUnselectedIcons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b8693a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112795100);
}



/* Entry: 10b8693b4; end: 10b8693c3; -[SIGNavigationBarView ignoreButtonThemeColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b8693b4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127950f8);
}



/* Entry: 10b8693c4; end: 10b86947f; -[SIGNavigationBarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8693c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127950fc,0);
  _objc_storeStrong(param_1 + _DAT_112795104,0);
  _objc_storeStrong(param_1 + _DAT_1127950e8,0);
  _objc_destroyWeak(param_1 + _DAT_11279510c);
  _objc_storeStrong(param_1 + _DAT_1127950f0,0);
  _objc_storeStrong(param_1 + _DAT_1127950f4,0);
  _objc_storeStrong(param_1 + _DAT_112795114,0);
  _objc_storeStrong(param_1 + _DAT_112795110,0);
  _objc_storeStrong(param_1 + _DAT_1127950ec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127950e4,0);
  return;
}



/* Entry: 10b869480; end: 10b8695a7; -[SIGAvatarView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b869480(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270b648;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar2);
    func_0x00010c182220(puVar1);
    func_0x00010c16d480(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010bdd1d80(puVar1);
    func_0x00010c013de0();
    func_0x00010c219b60();
    func_0x00010c182220(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279511c);
    *(undefined **)((long)puVar1 + (long)_DAT_11279511c) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b8695a8; end: 10b86961f; -[SIGAvatarView setFrame:] */

void FUN_10b8695a8(undefined8 param_1)

{
  double in_d3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270b648;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setFrame__112645658);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(in_d3 * 0.5);
  _objc_release(param_1);
  return;
}



/* Entry: 10b869620; end: 10b869677; -[SIGAvatarView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b869620(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b648;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bdd1d80(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11279511c));
  return;
}



/* Entry: 10b869678; end: 10b869687; -[SIGAvatarView avatarImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b869678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279511c),PTR_s_image_1125d7478);
  return;
}



/* Entry: 10b869688; end: 10b869697; -[SIGAvatarView setAvatarImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b869688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279511c),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 10b869698; end: 10b8697a7; -[SIGAvatarView _avatarImageViewFrame] */

void FUN_10b869698(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5)

{
  double dVar1;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010bf20c00();
  func_0x00010bf20c00(param_5);
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  dVar1 = param_3 / 52.0;
  if (param_3 / 52.0 <= param_4 / 52.0) {
    dVar1 = param_4 / 52.0;
  }
  uStack_60 = uStack_90;
  uStack_58 = uStack_88;
  uStack_50 = uStack_80;
  uStack_48 = uStack_78;
  uStack_40 = uStack_70;
  uStack_38 = uStack_68;
  _CGAffineTransformScale(&uStack_60,dVar1,dVar1,&uStack_90);
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  uStack_98 = uStack_38;
  uStack_a0 = uStack_40;
  _CGAffineTransformTranslate(&uStack_90,0xc040800000000000,0xc041000000000000,&uStack_c0);
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  uStack_38 = uStack_68;
  uStack_40 = uStack_70;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  _CGAffineTransformTranslate(&uStack_90,0x403a000000000000,0x403a000000000000,&uStack_c0);
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  uStack_38 = uStack_68;
  uStack_40 = uStack_70;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  _CGRectApplyAffineTransform(0,0,0x4050800000000000,0x4054400000000000,&uStack_90);
  return;
}



/* Entry: 10b8697a8; end: 10b8697bb; -[SIGAvatarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8697a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11279511c,0);
  return;
}



/* Entry: 10b8697bc; end: 10b86981f; -[SIGBadgeView initWithStyle:color:] */

undefined8
FUN_10b8697bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ece0(param_1,param_2,param_3,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10b869820; end: 10b86988f; -[SIGBadgeView initWithStyle:color:disableShadow:] */

undefined8
FUN_10b869820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ed00(0x3ff0000000000000,param_1,param_2,param_3,puVar1,param_5);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10b869890; end: 10b86989b; -[SIGBadgeView initWithStyle:uiColor:] */

void FUN_10b869890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04ed10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,param_1,PTR_s_initWithStyle_uiColor_disableSha_1125f1548,param_3,
             param_4,0);
  return;
}



/* Entry: 10b86989c; end: 10b869947; +[SIGBadgeView newBadgeWithStyle:color:] */

undefined * FUN_10b86989c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c51b8;
  _objc_alloc(PTR_PTR_1126c51b8);
  func_0x00010c04eae0();
  func_0x00010c212f20();
  return puVar1;
}



/* Entry: 10b869948; end: 10b869983;  */

void FUN_10b869948(long param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  uStack_20 = *(undefined8 *)(param_1 + 0x20);
  puStack_18 = PTR_PTR_11270b650;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setHidden__1126479f8,*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b869984; end: 10b8699f3; -[SIGBadgeView invalidateIntrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b869984(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b650;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  func_0x00010beeae80(param_1);
  func_0x00010c181140(*(undefined8 *)(param_1 + _DAT_11279513c));
  func_0x00010be35080(param_1);
  func_0x00010c181140(*(undefined8 *)(param_1 + _DAT_112795140));
  return;
}



/* Entry: 10b8699f4; end: 10b869a9b; -[SIGBadgeView _additionalVerticalOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b8699f4(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  double dVar3;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112795144);
  func_0x00010bfb3a80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ab40();
  dVar3 = param_1;
  func_0x00010bf2f960(uVar1);
  dVar3 = dVar3 * 0.5;
  param_1 = param_1 - dVar3;
  func_0x00010c099280(uVar1);
  dVar3 = dVar3 * 0.5;
  param_1 = dVar3 - param_1;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar2);
  _objc_release(uVar1);
  return (double)(long)(param_1 * dVar3) / dVar3;
}



/* Entry: 10b869a9c; end: 10b869cf7; -[SIGBadgeView _activateTextConstraintsForRectangleShape] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b869a9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = (long)_DAT_11279514c;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar18));
  lVar17 = (long)_DAT_112795144;
  uVar1 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc91e0(param_1);
  uVar3 = uVar1;
  func_0x00010bf493c0(uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar17);
  uStack_88 = uVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_112795134;
  uVar7 = *(undefined8 *)(param_1 + lVar16);
  uStack_80 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493c0(0xc010000000000000,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar16);
  uStack_78 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2793a0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493c0(0x4010000000000000,uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar13;
  _objc_release(uVar15);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar18));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar14 = PTR_PTR_1126aea58;
  _objc_alloc(PTR_PTR_1126aea58);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c213040(puVar14,param_2,1);
  func_0x00010c213180(puVar14,param_2,*(undefined8 *)(puVar13 + _DAT_112795138));
  func_0x00010bed0a20(puVar13);
  func_0x00010c21ad00(puVar14,param_2,puVar13);
  func_0x00010c165e00(puVar14,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 10b869cf8; end: 10b869d83; -[SIGBadgeView _createBadgeLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b869cf8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc(PTR_PTR_1126aea58);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c213180(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_112795138));
  func_0x00010bed0a20(param_1);
  func_0x00010c21ad00(puVar1,param_2,param_1);
  func_0x00010c165e00(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b869d84; end: 10b869da7; -[SIGBadgeView _setupViewForBigOvalShape] */

void FUN_10b869d84(undefined8 param_1)

{
  func_0x00010bdd41c0();
                    /* WARNING: Could not recover jumptable at 0x00010beb12b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupViewForOvalShapeWithDimens_112589e50);
  return;
}



/* Entry: 10b869da8; end: 10b869df3; -[SIGBadgeView _setupViewForRectangleShape] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b869da8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112795134);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4010000000000000);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be5df30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__maybeAddShadowToContainerView_112575168);
  return;
}



/* Entry: 10b869df4; end: 10b869e17; -[SIGBadgeView _setupViewForTinyOvalShape] */

void FUN_10b869df4(undefined8 param_1)

{
  func_0x00010becc380();
                    /* WARNING: Could not recover jumptable at 0x00010beb12b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupViewForOvalShapeWithDimens_112589e50);
  return;
}



/* Entry: 10b869e18; end: 10b869e3b; -[SIGBadgeView _setupViewForTwoDigitOval] */

void FUN_10b869e18(undefined8 param_1)

{
  func_0x00010bed08e0();
                    /* WARNING: Could not recover jumptable at 0x00010beb12b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupViewForOvalShapeWithDimens_112589e50);
  return;
}



/* Entry: 10b869e3c; end: 10b869e5f; -[SIGBadgeView _setupViewForThreeDigitOval] */

void FUN_10b869e3c(undefined8 param_1)

{
  func_0x00010becb9a0();
                    /* WARNING: Could not recover jumptable at 0x00010beb12b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupViewForOvalShapeWithDimens_112589e50);
  return;
}



/* Entry: 10b869e60; end: 10b869e83; -[SIGBadgeView _setupViewForMediumOval] */

void FUN_10b869e60(undefined8 param_1)

{
  func_0x00010be5eee0();
                    /* WARNING: Could not recover jumptable at 0x00010beb12b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupViewForOvalShapeWithDimens_112589e50);
  return;
}



/* Entry: 10b869e84; end: 10b869eaf; -[SIGBadgeView _setupLineBreakMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b869e84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 4;
  if (*(long *)(param_1 + _DAT_112795120) != 1) {
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1bdb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795144),PTR_s_setLineBreakMode__11264d0e8,uVar1);
  return;
}



/* Entry: 10b869eb0; end: 10b869fcb; -[SIGBadgeView _animate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b869eb0(long param_1,undefined8 param_2)

{
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _CGAffineTransformMakeScale(&uStack_50,0x3fd0000000000000,0x3fb999999999999a);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + _DAT_112795134),param_2,&uStack_80);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x10b869f54;
  puStack_90 = &UNK_110842e18;
  lStack_88 = param_1;
  func_0x00010bf03400(0x3fd0a3d70a3d70a4,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_a8);
  return;
}



/* Entry: 10b869fcc; end: 10b869fe3; -[SIGBadgeView _tinyOvalDimension] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b869fcc(long param_1)

{
  return *(double *)(param_1 + _DAT_112795130) * 6.0;
}



/* Entry: 10b869fe4; end: 10b869ffb; -[SIGBadgeView _bigOvalDimension] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b869fe4(long param_1)

{
  return *(double *)(param_1 + _DAT_112795130) * 18.0;
}



/* Entry: 10b869ffc; end: 10b86a013; -[SIGBadgeView _mediumOvalDimension] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b869ffc(long param_1)

{
  return *(double *)(param_1 + _DAT_112795130) * 11.0;
}



/* Entry: 10b86a014; end: 10b86a02b; -[SIGBadgeView _twoDigitOvalBadgeHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b86a014(long param_1)

{
  return *(double *)(param_1 + _DAT_112795130) * 16.0;
}



/* Entry: 10b86a02c; end: 10b86a043; -[SIGBadgeView _twoDigitOvalBadgeWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b86a02c(long param_1)

{
  return *(double *)(param_1 + _DAT_112795130) * 24.0;
}



/* Entry: 10b86a044; end: 10b86a05b; -[SIGBadgeView _bigTwoDigitOvalBadgeWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b86a044(long param_1)

{
  return *(double *)(param_1 + _DAT_112795130) * 26.0;
}



/* Entry: 10b86a05c; end: 10b86a073; -[SIGBadgeView _threeDigitOvalBadgeHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b86a05c(long param_1)

{
  return *(double *)(param_1 + _DAT_112795130) * 16.0;
}



/* Entry: 10b86a074; end: 10b86a08f; -[SIGBadgeView _threeDigitOvalBadgeWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b86a074(long param_1)

{
  return *(double *)(param_1 + _DAT_112795130) * 32.0;
}



/* Entry: 10b86a090; end: 10b86a0ab; -[SIGBadgeView _bigThreeDigitOvalBadgeWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b86a090(long param_1)

{
  return *(double *)(param_1 + _DAT_112795130) * 36.0;
}



/* Entry: 10b86a0ac; end: 10b86a0c3; -[SIGBadgeView _rectangleBadgeHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b86a0ac(long param_1)

{
  return *(double *)(param_1 + _DAT_112795130) * 20.0;
}



/* Entry: 10b86a0c4; end: 10b86a0db; -[SIGBadgeView _minRectangleBadgeWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b86a0c4(long param_1)

{
  return *(double *)(param_1 + _DAT_112795130) * 24.0;
}



/* Entry: 10b86a0dc; end: 10b86a0eb; -[SIGBadgeView text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86a0dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795148);
}



/* Entry: 10b86a0ec; end: 10b86a0fb; -[SIGBadgeView color] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86a0ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795128);
}



/* Entry: 10b86a0fc; end: 10b86a10b; -[SIGBadgeView style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86a0fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795120);
}



/* Entry: 10b86a10c; end: 10b86a11b; -[SIGBadgeView animationStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86a10c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795124);
}



/* Entry: 10b86a11c; end: 10b86a12b; -[SIGBadgeView textColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86a11c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795138);
}



/* Entry: 10b86a12c; end: 10b86a1cb; -[SIGBadgeView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86a12c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112795138,0);
  _objc_storeStrong(param_1 + _DAT_112795128,0);
  _objc_storeStrong(param_1 + _DAT_112795148,0);
  _objc_storeStrong(param_1 + _DAT_112795140,0);
  _objc_storeStrong(param_1 + _DAT_11279513c,0);
  _objc_storeStrong(param_1 + _DAT_11279514c,0);
  _objc_storeStrong(param_1 + _DAT_112795134,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795144,0);
  return;
}



/* Entry: 10b86a1cc; end: 10b86a423; -[SIGCaret init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b86a1cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_11270b658;
  puVar12 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar12,
                      PTR_s_initWithFrame__1125e2948);
  puVar1 = (undefined *)0x0;
  if (puVar12 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar3 = *(undefined8 *)((long)puVar12 + (long)_DAT_112795150);
    *(undefined **)((long)puVar12 + (long)_DAT_112795150) = puVar2;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_retain(puVar2);
    func_0x00010c23ba80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar2);
    _objc_release(puVar4);
    func_0x00010c182220(puVar2);
    func_0x00010befbb60(puVar12);
    func_0x00010c219b60(puVar2);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    func_0x00010bf34860(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    puStack_78 = puVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar12;
    func_0x00010bf348e0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar12;
  }
  ___stack_chk_fail();
  puVar12 = *(undefined8 **)(puVar1 + _DAT_112795150);
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar12,PTR_s_intrinsicContentSize_1125f8080);
  return puVar12;
}



/* Entry: 10b86a424; end: 10b86a433; -[SIGCaret intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86a424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795150),PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 10b86a434; end: 10b86a4b3; -[SIGCaret willMoveToSuperview:] */

void FUN_10b86a434(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != param_3) {
    puStack_38 = PTR_PTR_11270b658;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_willMoveToSuperview__112528100,param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b86a4b4; end: 10b86a71f; -[SIGCaret didMoveToSuperview] */

/* WARNING: Possible PIC construction at 0x00010b86a5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b86a5cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b86a5bc) */
/* WARNING: Removing unreachable block (ram,0x00010b86a5d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86a4b4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  _objc_release();
  if (lVar1 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return;
    }
    ___stack_chk_fail();
    param_1 = *(long *)(lVar2 + _DAT_112795154);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112795154);
    *(undefined **)(param_1 + _DAT_112795154) = puVar3;
    _objc_release(uVar4);
    _objc_retain(puVar3);
    lVar1 = param_1;
    func_0x00010c262ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9680();
    _objc_release(lVar1);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf49420(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf49420(0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf34870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_centerXAnchor_1125aabc0);
  return;
}



/* Entry: 10b86a720; end: 10b86a72f; -[SIGCaret caretTipXAnchor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86a720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf34870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795154),PTR_s_centerXAnchor_1125aabc0);
  return;
}



/* Entry: 10b86a730; end: 10b86a73f; -[SIGCaret caretTipYAnchor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86a730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf348f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795154),PTR_s_centerYAnchor_1125aabe0);
  return;
}



/* Entry: 10b86a740; end: 10b86a77f; -[SIGCaret .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86a740(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112795154,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795150,0);
  return;
}



/* Entry: 10b86a780; end: 10b86a96b;  */

undefined8 FUN_10b86a780(long param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  if (param_3 == 1) {
    lVar1 = 8;
    if (param_1 != 9) {
      lVar1 = param_1;
    }
    lVar2 = 9;
    if (param_1 != 8) {
      lVar2 = lVar1;
    }
    if (lVar2 - 4U < 3) {
      param_1 = *(long *)(&UNK_10e5f33c0 + (lVar2 - 4U) * 8);
    }
    else {
      param_1 = 6;
      if (lVar2 != 7) {
        param_1 = lVar2;
      }
    }
  }
  uVar3 = 0x4030000000000000;
  if ((param_2 & 8) == 0) {
    uVar3 = 0;
  }
  if (param_4 == 0) {
    uVar3 = 0x4024000000000000;
  }
  else {
    func_0x00010bdc26c0(param_4);
    func_0x00010bdc2680(param_4);
    func_0x00010bdc26a0(param_4);
  }
  uVar4 = 0;
  if ((param_2 & 1) != 0) {
    uVar4 = uVar3;
  }
  if (param_1 < 5) {
    if ((param_1 - 1U < 3) || (param_1 != 4)) goto LAB_10b86a938;
LAB_10b86a91c:
    uVar4 = 0;
  }
  else {
    if (param_1 < 7) {
      if (param_1 != 5) goto LAB_10b86a938;
    }
    else {
      if (param_1 == 7) goto LAB_10b86a938;
      if (param_1 == 8) goto LAB_10b86a91c;
      if (param_1 != 9) goto LAB_10b86a938;
    }
    uVar4 = 0;
  }
LAB_10b86a938:
  _objc_release(param_4);
  return uVar4;
}



/* Entry: 10b86a96c; end: 10b86a9ab;  */

void FUN_10b86a96c(void)

{
  return;
}



/* Entry: 10b86a9ac; end: 10b86b62f; -[SIGContainer initWithContentView:] */

/* WARNING: Possible PIC construction at 0x00010b86b674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b86b694: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b86b678) */
/* WARNING: Removing unreachable block (ram,0x00010b86b698) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b86a9ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined *puVar41;
  undefined8 uVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined8 *puVar45;
  undefined8 uVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_138 = PTR_PTR_11270b660;
  uVar52 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar53 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar54 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar55 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar45 = &uStack_140;
  uVar4 = uVar52;
  uVar6 = uVar53;
  uVar7 = uVar54;
  uVar8 = uVar55;
  uStack_140 = param_1;
  _objc_msgSendSuper2(puVar45,PTR_s_initWithFrame__1125e2948);
  if (puVar45 != (undefined8 *)0x0) {
    if ((*(byte *)((long)puVar45 + (long)_DAT_11279515c) & 1) == 0) {
      puVar1 = puVar45;
      func_0x00010c08c0e0(puVar45);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe7a0(0,0x3ff0000000000000);
      _objc_release(puVar1);
      puVar1 = puVar45;
      func_0x00010c08c0e0(puVar45);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe800(0x3d8f5c29);
      _objc_release(puVar1);
      puVar1 = puVar45;
      func_0x00010c08c0e0(puVar45);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe840(0x4018000000000000);
      _objc_release(puVar1);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar1 = puVar45;
      func_0x00010c08c0e0(puVar45);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe740();
      _objc_release(puVar1);
      _objc_release(puVar2);
    }
    func_0x00010c1ad9a0(puVar45);
    puVar3 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    lVar50 = (long)_DAT_112795160;
    uVar4 = *(undefined8 *)((long)puVar45 + lVar50);
    *(undefined **)((long)puVar45 + lVar50) = puVar3;
    _objc_release(uVar4);
    _objc_retain(puVar3);
    func_0x00010bef9680(puVar45);
    puVar5 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    func_0x00010bef9680(puVar45);
    uVar4 = *(undefined8 *)((long)puVar45 + lVar50);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar45;
    func_0x00010c274200(puVar45);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar45 + (long)_DAT_112795164);
    *(undefined8 *)((long)puVar45 + (long)_DAT_112795164) = uVar6;
    _objc_release(uVar7);
    _objc_retain(uVar6);
    _objc_release(puVar1);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar45 + lVar50);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar45;
    func_0x00010bf1ff80(puVar45);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar45 + (long)_DAT_112795168);
    *(undefined8 *)((long)puVar45 + (long)_DAT_112795168) = uVar7;
    _objc_release(uVar8);
    _objc_retain(uVar7);
    _objc_release(puVar1);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar45 + lVar50);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar45;
    func_0x00010c08e400(puVar45);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar45 + (long)_DAT_11279516c);
    *(undefined8 *)((long)puVar45 + (long)_DAT_11279516c) = uVar8;
    _objc_release(uVar9);
    _objc_retain(uVar8);
    _objc_release(puVar1);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar45 + lVar50);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar45;
    func_0x00010c1408a0(puVar45);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar45 + (long)_DAT_112795170);
    *(undefined8 *)((long)puVar45 + (long)_DAT_112795170) = uVar9;
    _objc_release(uVar10);
    _objc_retain(uVar9);
    _objc_release(puVar1);
    _objc_release(uVar4);
    puVar2 = puVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010c274200(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar45 + (long)_DAT_112795174);
    *(undefined **)((long)puVar45 + (long)_DAT_112795174) = puVar12;
    _objc_release(uVar4);
    _objc_retain(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar2);
    puVar2 = puVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010bf1ff80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar45 + (long)_DAT_112795178);
    *(undefined **)((long)puVar45 + (long)_DAT_112795178) = puVar13;
    _objc_release(uVar4);
    _objc_retain(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar2);
    puVar2 = puVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010c08e400(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar45 + (long)_DAT_11279517c);
    *(undefined **)((long)puVar45 + (long)_DAT_11279517c) = puVar14;
    _objc_release(uVar4);
    _objc_retain(puVar14);
    _objc_release(puVar11);
    _objc_release(puVar2);
    puVar2 = puVar5;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010c1408a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar45 + (long)_DAT_112795180);
    *(undefined **)((long)puVar45 + (long)_DAT_112795180) = puVar15;
    _objc_release(uVar4);
    _objc_retain(puVar15);
    _objc_release(puVar11);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_d0 = uVar6;
    uStack_c8 = uVar7;
    uStack_c0 = uVar8;
    uStack_b8 = uVar9;
    puStack_b0 = puVar12;
    puStack_a8 = puVar13;
    puStack_a0 = puVar14;
    puStack_98 = puVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar11);
    puVar11 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar52,uVar53,uVar54,uVar55);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar11);
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)((long)puVar45 + (long)_DAT_112795184);
    *(undefined **)((long)puVar45 + (long)_DAT_112795184) = puVar11;
    _objc_retain(puVar11);
    _objc_release(uVar4);
    puVar16 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar52,uVar53,uVar54,uVar55);
    lVar47 = (long)_DAT_112795188;
    uVar4 = *(undefined8 *)((long)puVar45 + lVar47);
    *(undefined **)((long)puVar45 + lVar47) = puVar16;
    _objc_release(uVar4);
    _objc_retain(puVar16);
    func_0x00010c219b60(puVar16);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar16);
    _objc_release(puVar2);
    puVar17 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar52);
    lVar51 = (long)_DAT_11279518c;
    uVar4 = *(undefined8 *)((long)puVar45 + lVar51);
    *(undefined **)((long)puVar45 + lVar51) = puVar17;
    _objc_release(uVar4);
    _objc_retain(puVar17);
    func_0x00010c219b60(puVar17);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar17);
    _objc_release(puVar2);
    lVar50 = (long)_DAT_112795190;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar45 + lVar50);
    *(long *)((long)puVar45 + lVar50) = param_3;
    _objc_release(uVar4);
    func_0x00010c219b60(param_3);
    func_0x00010befbb60(puVar45);
    func_0x00010befbb60(puVar45);
    func_0x00010befbb60(puVar45);
    func_0x00010befbb60(puVar45);
    uVar52 = *(undefined8 *)((long)puVar45 + lVar47);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar52;
    func_0x00010bf49420(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar49 = (long)_DAT_112795194;
    uVar10 = *(undefined8 *)((long)puVar45 + lVar49);
    *(undefined8 *)((long)puVar45 + lVar49) = uVar4;
    _objc_release(uVar10);
    _objc_release(uVar52);
    uVar10 = *(undefined8 *)((long)puVar45 + lVar51);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3ff0000000000000;
    uVar52 = uVar10;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    lVar48 = (long)_DAT_112795198;
    uVar46 = *(undefined8 *)((long)puVar45 + lVar48);
    *(undefined8 *)((long)puVar45 + lVar48) = uVar52;
    _objc_release(uVar46);
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar18 = param_3;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_3;
    lStack_130 = lVar20;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar5;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = param_3;
    lStack_128 = lVar23;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar24;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = param_3;
    lStack_120 = lVar26;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar50 = lVar27;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = lVar50;
    uVar29 = *(undefined8 *)((long)puVar45 + lVar47);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = uVar29;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = uVar31;
    uVar32 = *(undefined8 *)((long)puVar45 + lVar47);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar46 = uVar32;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = uVar46;
    uVar34 = *(undefined8 *)((long)puVar45 + lVar47);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar35 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = uVar34;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar36;
    uStack_f8 = *(undefined8 *)((long)puVar45 + lVar49);
    uVar37 = *(undefined8 *)((long)puVar45 + lVar51);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar38 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = uVar37;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar39;
    uVar40 = *(undefined8 *)((long)puVar45 + lVar51);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar41 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar52 = uVar40;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar52;
    uVar42 = *(undefined8 *)((long)puVar45 + lVar51);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar43 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar42;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar10;
    uStack_d8 = *(undefined8 *)((long)puVar45 + lVar48);
    puVar44 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar11);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(puVar44);
    _objc_release(uVar10);
    _objc_release(puVar43);
    _objc_release(uVar42);
    _objc_release(uVar52);
    _objc_release(puVar41);
    _objc_release(uVar40);
    _objc_release(uVar39);
    _objc_release(puVar38);
    _objc_release(uVar37);
    _objc_release(uVar36);
    _objc_release(puVar35);
    _objc_release(uVar34);
    _objc_release(uVar46);
    _objc_release(puVar33);
    _objc_release(uVar32);
    _objc_release(uVar31);
    _objc_release(puVar30);
    _objc_release(uVar29);
    _objc_release(lVar50);
    _objc_release(puVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(puVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(puVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(puVar19);
    _objc_release(lVar18);
    _objc_release(puVar5);
    uVar6 = uVar53;
    uVar7 = uVar54;
    uVar8 = uVar55;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar45;
  }
  ___stack_chk_fail();
  puVar45 = (undefined8 *)(param_3 + _DAT_11279519c);
  *puVar45 = uVar4;
  puVar45[1] = uVar6;
  puVar45[2] = uVar7;
  puVar45[3] = uVar8;
  puVar45 = *(undefined8 **)(param_3 + _DAT_112795174);
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar45,PTR_s_setConstant__11263de70);
  return puVar45;
}



/* Entry: 10b86b630; end: 10b86b6b7; -[SIGContainer setContentViewInsets:] */

/* WARNING: Possible PIC construction at 0x00010b86b674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b86b694: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b86b678) */
/* WARNING: Removing unreachable block (ram,0x00010b86b698) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86b630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11279519c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + _DAT_112795174),PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 10b86b6b8; end: 10b86b71b; -[SIGContainer intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10b86b6b8(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_112795190));
  dVar2 = *(double *)(param_2 + _DAT_1127951a0 + 8) + *(double *)(param_2 + _DAT_1127951a0 + 0x18);
  dVar1 = param_1 + dVar2;
  return (ulong)dVar1 ^
         ((ulong)dVar1 ^ (ulong)dVar2) &
         -(ulong)(param_1 == *(double *)PTR__UIViewNoIntrinsicMetric_110345e70);
}



/* Entry: 10b86b71c; end: 10b86ba0b; -[SIGContainer layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86b71c(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  long lStack_70;
  undefined *puStack_68;
  
  lVar8 = (long)_DAT_1127951a4;
  if (*(long *)(param_5 + lVar8) == 0) {
    param_1 = 10.0;
  }
  else {
    func_0x00010bdc26c0();
  }
  plVar1 = (long *)(param_5 + _DAT_1127951a8);
  dVar9 = -param_1;
  dVar12 = param_1;
  if ((plVar1[1] & 1U) != 0) {
    dVar12 = dVar9;
  }
  dVar11 = param_1;
  if ((plVar1[1] & 4U) != 0) {
    dVar11 = dVar9;
  }
  if (*plVar1 - 4U < 6) {
    if (*(long *)(param_5 + lVar8) == 0) {
      dVar11 = -5.0;
      dVar12 = -5.0;
    }
    else {
      func_0x00010bdc26e0();
      dVar11 = param_1;
      dVar12 = param_1;
    }
  }
  func_0x00010bf20c00(param_5);
  dVar10 = *(double *)(param_5 + _DAT_1127951a0 + 8);
  param_1 = param_1 + dVar10;
  lVar8 = (long)_DAT_112795184;
  func_0x00010c19f0e0(param_1,dVar9 - dVar12,
                      param_3 - (dVar10 + *(double *)(param_5 + _DAT_1127951a0 + 0x18)),
                      dVar11 + dVar12 + param_4,*(undefined8 *)(param_5 + lVar8));
  func_0x00010bf20c00(param_5);
  _CGRectIntersection();
  func_0x00010c0699c0(*(undefined8 *)(param_5 + _DAT_112795190));
  if (*plVar1 == 0) {
LAB_10b86b940:
    uVar6 = *(undefined8 *)(param_5 + lVar8);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0);
    _objc_release(uVar6);
    puVar7 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    if ((*(byte *)(param_5 + _DAT_11279515c) & 1) != 0) goto LAB_10b86b9d0;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar8));
    func_0x00010bf199c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = ~*(uint *)(plVar1 + 1);
    bVar5 = (uVar4 & 3) == 0;
    bVar2 = 2;
    if (bVar5) {
      bVar2 = 3;
    }
    if ((uVar4 & 9) != 0) {
      bVar2 = bVar5;
    }
    bVar3 = bVar2 | 4;
    if ((uVar4 & 6) != 0) {
      bVar3 = bVar2;
    }
    if (((uVar4 & 0xc) != 0) && (bVar3 == 0)) goto LAB_10b86b940;
    uVar6 = *(undefined8 *)(param_5 + lVar8);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_5 + lVar8);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2ce0();
    _objc_release(uVar6);
    func_0x00010bf13e40(param_5);
    dVar12 = 10.0;
    if (param_1 != 0.0) {
      func_0x00010bf13e40(param_5);
      dVar12 = param_1;
    }
    uVar6 = *(undefined8 *)(param_5 + lVar8);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar12);
    _objc_release(uVar6);
    puVar7 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    if ((*(byte *)(param_5 + _DAT_11279515c) & 1) != 0) goto LAB_10b86b9d0;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar8));
    func_0x00010bf199e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  lVar8 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(lVar8);
  _objc_release(puVar7);
LAB_10b86b9d0:
  puStack_68 = PTR_PTR_11270b660;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  return;
}



/* Entry: 10b86ba0c; end: 10b86bb4b; -[SIGContainer setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86ba0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,ulong param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar1 = (long *)(param_5 + _DAT_1127951a8);
  if (plVar1[1] == param_8 && *plVar1 == param_7) {
    return;
  }
  *plVar1 = param_7;
  plVar1[1] = param_8;
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_112795188),param_6,param_8 >> 3 & 1);
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_11279518c));
  puVar2 = (undefined8 *)(param_5 + _DAT_1127951a0);
  lVar3 = param_5;
  func_0x00010bf8d060();
  FUN_10b86a780(param_7,param_8,lVar3,*(undefined8 *)(param_5 + _DAT_1127951a4));
  uVar4 = param_2;
  if (lVar3 != 1 || 0xfffffffffffffffd < param_7 - 8U) {
    uVar4 = param_4;
    param_4 = param_2;
  }
  *puVar2 = param_1;
  puVar2[1] = param_4;
  puVar2[2] = param_3;
  puVar2[3] = uVar4;
  func_0x00010c181140(*(undefined8 *)(param_5 + _DAT_112795164));
  func_0x00010c181140(-(double)puVar2[2],*(undefined8 *)(param_5 + _DAT_112795168));
  func_0x00010c181140(puVar2[1],*(undefined8 *)(param_5 + _DAT_11279516c));
  func_0x00010c181140(-(double)puVar2[3],*(undefined8 *)(param_5 + _DAT_112795170));
  func_0x00010c069fa0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b86bb4c; end: 10b86bb93; -[SIGContainer backgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86bb4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112795184);
  func_0x00010bf13d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b86bb94; end: 10b86bc23; -[SIGContainer setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86bb94(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112795184;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b86bc24; end: 10b86bc33; -[SIGContainer setShadowDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86bc24(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11279515c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b86bc34; end: 10b86bcc7; -[SIGContainer setUseScreenScaledBorderWidth:] */

/* WARNING: Possible PIC construction at 0x00010b86bc90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b86bc94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86bc34(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  *(char *)(param_1 + _DAT_1127951ac) = (char)param_3;
  if (lRam00000001137fbc48 != -1) {
    func_0x000107c27d9c(0x1137fbc48,&PTR___NSConcreteGlobalBlock_110d62d40);
  }
  uVar1 = uRam00000001137fbc40;
  if (param_3 == 0) {
    uVar1 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + _DAT_112795194),PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 10b86bcc8; end: 10b86bd0f;  */

void FUN_10b86bcc8(double param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  dRam00000001137fbc40 = 1.0 / param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b86bd10; end: 10b86bdbb; -[SIGContainer traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86bd10(long param_1)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270b660;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_traitCollectionDidChange__11267bf88);
  if ((*(byte *)(param_1 + _DAT_11279515c) & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(param_1);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 10b86bdbc; end: 10b86bdcf; -[SIGContainer style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b86bdbc(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_1127951a8);
}



/* Entry: 10b86bdd0; end: 10b86bddf; -[SIGContainer contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86bdd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795190);
}



/* Entry: 10b86bde0; end: 10b86bdf7; -[SIGContainer contentViewInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86bde0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279519c);
}



/* Entry: 10b86bdf8; end: 10b86be07; -[SIGContainer backgroundCornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86bdf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795158);
}



/* Entry: 10b86be08; end: 10b86be17; -[SIGContainer setBackgroundCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86be08(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112795158) = param_1;
  return;
}



/* Entry: 10b86be18; end: 10b86be27; -[SIGContainer specOverride] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86be18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127951a4);
}



/* Entry: 10b86be28; end: 10b86be67; -[SIGContainer setSpecOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86be28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127951a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b86be68; end: 10b86be77; -[SIGContainer shadowDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b86be68(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11279515c);
}



/* Entry: 10b86be78; end: 10b86be87; -[SIGContainer useScreenScaledBorderWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b86be78(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127951ac);
}



/* Entry: 10b86be88; end: 10b86bfa7; -[SIGContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86be88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127951a4,0);
  _objc_storeStrong(param_1 + _DAT_112795190,0);
  _objc_storeStrong(param_1 + _DAT_112795198,0);
  _objc_storeStrong(param_1 + _DAT_112795194,0);
  _objc_storeStrong(param_1 + _DAT_112795180,0);
  _objc_storeStrong(param_1 + _DAT_11279517c,0);
  _objc_storeStrong(param_1 + _DAT_112795178,0);
  _objc_storeStrong(param_1 + _DAT_112795174,0);
  _objc_storeStrong(param_1 + _DAT_112795170,0);
  _objc_storeStrong(param_1 + _DAT_11279516c,0);
  _objc_storeStrong(param_1 + _DAT_112795168,0);
  _objc_storeStrong(param_1 + _DAT_112795164,0);
  _objc_storeStrong(param_1 + _DAT_112795160,0);
  _objc_storeStrong(param_1 + _DAT_11279518c,0);
  _objc_storeStrong(param_1 + _DAT_112795188,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795184,0);
  return;
}



/* Entry: 10b86bfa8; end: 10b86bfff; -[SIGLabel setTypeStyleModifiers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86bfa8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_1127951b8) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_1127951b8) = param_3;
  lVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea85a0(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b86c000; end: 10b86c097; -[SIGLabel setLineBreakStrategy:] */

void FUN_10b86c000(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270b668;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_lineBreakStrategy_112603e78);
  if (puVar1 != param_3) {
    puStack_48 = PTR_PTR_11270b668;
    uStack_50 = param_1;
    _objc_msgSendSuper2(&uStack_50,PTR_s_setLineBreakStrategy__11264d0f0,param_3);
    uVar2 = param_1;
    func_0x00010c26b700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea85a0(param_1);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 10b86c098; end: 10b86c0ef; -[SIGLabel setignoreAccessibilityBoldSupport:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86c098(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if (*(byte *)(param_1 + _DAT_1127951b0) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_1127951b0) = (char)param_3;
  lVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea85a0(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b86c0f0; end: 10b86c0ff; -[SIGLabel typeStyleModifiers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86c0f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127951b8);
}



/* Entry: 10b86c100; end: 10b86c10f; -[SIGLabel maximumFontSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86c100(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127951bc);
}



/* Entry: 10b86c110; end: 10b86c11f; -[SIGLabel ignoreAccessibilityBoldSupport] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b86c110(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127951b0);
}



/* Entry: 10b86c120; end: 10b86c12f; -[SIGLabel setIgnoreAccessibilityBoldSupport:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86c120(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127951b0) = param_3;
  return;
}



/* Entry: 10b86c130; end: 10b86c1a7; -[SIGSeparatorView initWithFrame:] */

undefined1 * FUN_10b86c130(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b670;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b86c1a8; end: 10b86c313; -[SIGSubscreenView updateContentViewConstraintsRelativeToSectionHeader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10b86c1a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_1127951dc;
  uStack_60 = *(undefined8 *)(param_1 + lVar8);
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1,param_2,&uStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65be0(puVar5,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127951c8);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf1ff80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = uVar4;
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_68 = *(undefined8 *)(param_1 + lVar8);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010beef8c0(puVar1,param_2,puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  if (puVar5 != (undefined *)0x0) {
    func_0x00010c1f7d00(puVar5,param_2,puVar6);
  }
  _objc_release(puVar6);
  return puVar5;
}


