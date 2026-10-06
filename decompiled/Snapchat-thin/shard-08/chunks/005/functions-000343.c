/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061e51ac; end: 1061e525b; -[SCCameraVerticalToolbar accessibilityElements] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e51ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112742b84);
  func_0x00010bf00d20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  if (*(long *)(param_1 + _DAT_112742bb0) != 0) {
    func_0x00010befa120(puVar1);
  }
  if (*(long *)(param_1 + _DAT_112742bb4) != 0) {
    func_0x00010befa120(puVar1);
  }
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061e525c; end: 1061e5263; -[SCCameraVerticalToolbar setToolbarItem:selected:] */

void FUN_1061e525c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c216f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setToolbarItem_selected_animated_112663600,param_3,param_4,0);
  return;
}



/* Entry: 1061e5264; end: 1061e530b; -[SCCameraVerticalToolbar tapToolbarItem:] */

void FUN_1061e5264(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdd7300(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c268e60();
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010c07d660();
  if ((int)lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c104260();
    if ((lVar2 != 1) && (lVar2 = param_3, func_0x00010c104260(), lVar2 != 2)) {
      func_0x00010bfe2c00(param_1,param_2,param_3,1);
    }
  }
  else {
    func_0x00010c23a840(param_1,param_2,param_3,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061e530c; end: 1061e5447; -[SCCameraVerticalToolbar setToolbarItemWithUIItem:selected:animatedScaling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e530c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long lVar16;
  undefined *unaff_x27;
  long unaff_x28;
  undefined8 *puVar17;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 auStack_360 [16];
  long lStack_2e0;
  long lStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  long lStack_2a0;
  undefined *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 auStack_220 [16];
  long lStack_1a0;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_e8 [16];
  long lStack_68;
  
  puVar17 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar2 = *(undefined **)(param_1 + _DAT_112742b84);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = auStack_e8;
  iVar13 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    unaff_x26 = (undefined *)*puStack_120;
    do {
      unaff_x27 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_120 != unaff_x26) {
          _objc_enumerationMutation(puVar2);
        }
        unaff_x25 = *(undefined **)(lStack_128 + (long)unaff_x27 * 8);
        puVar4 = unaff_x25;
        func_0x00010bf2b580();
        if (puVar4 == param_3) {
          func_0x00010c216f60(param_1,param_2,unaff_x25,param_4,param_5);
        }
        unaff_x27 = unaff_x27 + 1;
      } while (puVar3 != unaff_x27);
      puVar14 = auStack_e8;
      iVar13 = 0x10;
      puVar3 = puVar2;
      puVar17 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x24 = (undefined *)0x0;
    } while (puVar3 != (undefined *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1061e5448;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar17;
  puVar11 = puVar14;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar17);
  _objc_retain(puVar14);
  puVar5 = puVar17;
  func_0x00010bf529e0();
  puStack_268 = puVar14;
  if ((puVar14 != (undefined8 *)0x0) && (puVar5 != (undefined8 *)0x0)) {
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    _objc_retain(puVar17);
    puVar9 = &uStack_260;
    puVar11 = auStack_220;
    iVar13 = 0x10;
    puVar5 = puVar17;
    func_0x00010bf52a60();
    if (puVar5 == (undefined8 *)0x0) {
      _objc_release(puVar17);
    }
    else {
      unaff_x27 = (undefined *)0x0;
      unaff_x28 = *plStack_250;
      do {
        puVar14 = (undefined8 *)0x0;
        do {
          if (*plStack_250 != unaff_x28) {
            _objc_enumerationMutation(puVar17);
          }
          unaff_x25 = *(undefined **)(lStack_258 + (long)puVar14 * 8);
          func_0x00010c067fc0();
          puVar4 = unaff_x25;
          func_0x000100891fd4();
          if (puVar4 != (undefined *)0x0) {
            puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar4);
            _objc_retainAutoreleasedReturnValue();
            lVar16 = (long)_DAT_112742b58;
            unaff_x24 = *(undefined **)(puVar3 + lVar16);
            func_0x00010c0e00e0(unaff_x24,param_2,puVar2);
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x24 == (undefined *)0x0) {
              unaff_x24 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
              _objc_opt_new();
              func_0x00010c1d0640(*(undefined8 *)(puVar3 + lVar16),param_2,unaff_x24,puVar2);
            }
            unaff_x26 = unaff_x24;
            func_0x00010bf529e0();
            func_0x00010befa120(unaff_x24,param_2,puStack_268);
            if ((unaff_x26 == (undefined *)0x0) &&
               (puVar4 = unaff_x24, func_0x00010bf529e0(), puVar4 != (undefined *)0x0)) {
              unaff_x26 = *(undefined **)(puVar3 + _DAT_112742b88);
              puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,unaff_x25);
              _objc_retainAutoreleasedReturnValue();
              unaff_x25 = unaff_x26;
              func_0x00010c0e00e0(unaff_x26,param_2,puVar4);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar4);
              if (unaff_x25 != (undefined *)0x0) {
                unaff_x26 = puVar3;
                func_0x00010bdd7300(puVar3,param_2,unaff_x25);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1b0760();
                _objc_release(unaff_x26);
              }
              _objc_release(unaff_x25);
              unaff_x27 = (undefined *)0x1;
            }
            _objc_release(unaff_x24);
            _objc_release(puVar2);
          }
          puVar14 = (undefined8 *)((long)puVar14 + 1);
        } while (puVar5 != puVar14);
        puVar9 = &uStack_260;
        puVar11 = auStack_220;
        iVar13 = 0x10;
        puVar5 = puVar17;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined8 *)0x0);
      _objc_release(puVar17);
      param_1 = 0;
      if ((int)unaff_x27 != 0) {
        puVar9 = (undefined8 *)0x1;
        func_0x00010c129060(puVar3);
      }
    }
  }
  _objc_release(puStack_268);
  puVar5 = puVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_278 = FUN_1061e56c8;
  lStack_2e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar9;
  puVar12 = puVar11;
  lStack_2d0 = unaff_x28;
  puStack_2c8 = unaff_x27;
  puStack_2c0 = unaff_x26;
  puStack_2b8 = unaff_x25;
  puStack_2b0 = unaff_x24;
  puStack_2a8 = puVar2;
  lStack_2a0 = param_1;
  puStack_298 = puVar3;
  puStack_290 = puVar17;
  puStack_288 = puVar14;
  ppuStack_280 = &puStack_140;
  _objc_retain(puVar9);
  _objc_retain(puVar11);
  puVar14 = puVar9;
  func_0x00010bf529e0();
  if ((puVar11 != (undefined8 *)0x0) && (puVar14 != (undefined8 *)0x0)) {
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    lStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    plStack_390 = (long *)0x0;
    _objc_retain(puVar9);
    puVar10 = &uStack_3a0;
    puVar12 = auStack_360;
    iVar13 = 0x10;
    puVar14 = puVar9;
    func_0x00010bf52a60();
    if (puVar14 == (undefined8 *)0x0) {
      _objc_release(puVar9);
    }
    else {
      bVar1 = false;
      lVar16 = *plStack_390;
      do {
        puVar17 = (undefined8 *)0x0;
        do {
          if (*plStack_390 != lVar16) {
            _objc_enumerationMutation(puVar9);
          }
          lVar6 = *(long *)(lStack_398 + (long)puVar17 * 8);
          func_0x00010c067fc0();
          func_0x000100891fd4();
          if (lVar6 != 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar6);
            _objc_retainAutoreleasedReturnValue();
            lVar15 = (long)_DAT_112742b58;
            lVar6 = *(long *)((long)puVar5 + lVar15);
            func_0x00010c0e00e0(lVar6,param_2,puVar3);
            _objc_retainAutoreleasedReturnValue();
            if (lVar6 != 0) {
              lVar7 = lVar6;
              func_0x00010bf529e0();
              func_0x00010c12d360(lVar6,param_2,puVar11);
              lVar8 = lVar6;
              func_0x00010bf529e0();
              if (lVar8 == 0) {
                func_0x00010c12d3e0(*(undefined8 *)((long)puVar5 + lVar15),param_2,puVar3);
              }
              lVar15 = lVar6;
              func_0x00010bf529e0();
              bVar1 = (bool)((lVar7 != 0 && lVar15 == 0) | bVar1);
            }
            _objc_release(lVar6);
            _objc_release(puVar3);
          }
          puVar17 = (undefined8 *)((long)puVar17 + 1);
        } while (puVar14 != puVar17);
        puVar10 = &uStack_3a0;
        puVar12 = auStack_360;
        iVar13 = 0x10;
        puVar14 = puVar9;
        func_0x00010bf52a60();
      } while (puVar14 != (undefined8 *)0x0);
      _objc_release(puVar9);
      if (bVar1) {
        puVar10 = (undefined8 *)0x1;
        func_0x00010c129060(puVar5);
      }
    }
  }
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  puVar14 = puVar9;
  func_0x00010bdd7300(puVar9,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar14 == (undefined8 *)0x0) {
    func_0x00010bdc8c40(puVar9,param_2,puVar10);
  }
  puVar14 = puVar10;
  func_0x00010c06e880();
  if ((((ulong)puVar14 & 1) == 0) &&
     (puVar14 = puVar10, func_0x00010c07d660(), (int)puVar12 != (int)puVar14)) {
    func_0x00010c1b4280(puVar10,param_2,puVar12);
    if (((ulong)puVar12 & 1) == 0) {
      puVar14 = puVar10;
      func_0x00010bf38e40(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b4280();
      _objc_release(puVar14);
    }
    if (iVar13 != 0) {
      func_0x00010bdd7300(puVar9,param_2,puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf02ba0();
      _objc_release(puVar9);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 1061e5448; end: 1061e56c7; -[SCCameraVerticalToolbar pinToolbarItemsToTopFromFeatures:requester:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e5448(undefined *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  int param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long lVar12;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined8 *puVar13;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 auStack_230 [16];
  long lStack_1b0;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  puVar8 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = param_3;
  func_0x00010bf529e0();
  puStack_138 = param_4;
  if ((param_4 != (undefined8 *)0x0) && (puVar2 != (undefined8 *)0x0)) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    puVar9 = &uStack_130;
    puVar8 = auStack_f0;
    param_5 = 0x10;
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 == (undefined8 *)0x0) {
      _objc_release(param_3);
    }
    else {
      unaff_x27 = 0;
      unaff_x28 = *plStack_120;
      do {
        param_4 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != unaff_x28) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x25 = *(undefined **)(lStack_128 + (long)param_4 * 8);
          func_0x00010c067fc0();
          puVar3 = unaff_x25;
          func_0x000100891fd4();
          if (puVar3 != (undefined *)0x0) {
            unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar3);
            _objc_retainAutoreleasedReturnValue();
            lVar12 = (long)_DAT_112742b58;
            unaff_x24 = *(undefined **)(param_1 + lVar12);
            func_0x00010c0e00e0(unaff_x24,param_2,unaff_x23);
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x24 == (undefined *)0x0) {
              unaff_x24 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
              _objc_opt_new();
              func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar12),param_2,unaff_x24,unaff_x23);
            }
            unaff_x26 = unaff_x24;
            func_0x00010bf529e0();
            func_0x00010befa120(unaff_x24,param_2,puStack_138);
            if ((unaff_x26 == (undefined *)0x0) &&
               (puVar3 = unaff_x24, func_0x00010bf529e0(), puVar3 != (undefined *)0x0)) {
              unaff_x26 = *(undefined **)(param_1 + _DAT_112742b88);
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,unaff_x25);
              _objc_retainAutoreleasedReturnValue();
              unaff_x25 = unaff_x26;
              func_0x00010c0e00e0(unaff_x26,param_2,puVar3);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar3);
              if (unaff_x25 != (undefined *)0x0) {
                unaff_x26 = param_1;
                func_0x00010bdd7300(param_1,param_2,unaff_x25);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1b0760();
                _objc_release(unaff_x26);
              }
              _objc_release(unaff_x25);
              unaff_x27 = 1;
            }
            _objc_release(unaff_x24);
            _objc_release(unaff_x23);
          }
          param_4 = (undefined8 *)((long)param_4 + 1);
        } while (puVar2 != param_4);
        puVar9 = &uStack_130;
        puVar8 = auStack_f0;
        param_5 = 0x10;
        puVar2 = param_3;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined8 *)0x0);
      _objc_release(param_3);
      unaff_x22 = 0;
      if ((int)unaff_x27 != 0) {
        puVar9 = (undefined8 *)0x1;
        func_0x00010c129060(param_1);
      }
    }
  }
  _objc_release(puStack_138);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_1061e56c8;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar9;
  puVar10 = puVar8;
  lStack_1a0 = unaff_x28;
  uStack_198 = unaff_x27;
  puStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  uStack_170 = unaff_x22;
  puStack_168 = param_1;
  puStack_160 = param_3;
  puStack_158 = param_4;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_retain(puVar8);
  puVar4 = puVar9;
  func_0x00010bf529e0();
  if ((puVar8 != (undefined8 *)0x0) && (puVar4 != (undefined8 *)0x0)) {
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    _objc_retain(puVar9);
    puVar13 = &uStack_270;
    puVar10 = auStack_230;
    param_5 = 0x10;
    puVar4 = puVar9;
    func_0x00010bf52a60();
    if (puVar4 == (undefined8 *)0x0) {
      _objc_release(puVar9);
    }
    else {
      bVar1 = false;
      lVar12 = *plStack_260;
      do {
        puVar13 = (undefined8 *)0x0;
        do {
          if (*plStack_260 != lVar12) {
            _objc_enumerationMutation(puVar9);
          }
          lVar5 = *(long *)(lStack_268 + (long)puVar13 * 8);
          func_0x00010c067fc0();
          func_0x000100891fd4();
          if (lVar5 != 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar5);
            _objc_retainAutoreleasedReturnValue();
            lVar11 = (long)_DAT_112742b58;
            lVar5 = *(long *)((long)puVar2 + lVar11);
            func_0x00010c0e00e0(lVar5,param_2,puVar3);
            _objc_retainAutoreleasedReturnValue();
            if (lVar5 != 0) {
              lVar6 = lVar5;
              func_0x00010bf529e0();
              func_0x00010c12d360(lVar5,param_2,puVar8);
              lVar7 = lVar5;
              func_0x00010bf529e0();
              if (lVar7 == 0) {
                func_0x00010c12d3e0(*(undefined8 *)((long)puVar2 + lVar11),param_2,puVar3);
              }
              lVar11 = lVar5;
              func_0x00010bf529e0();
              bVar1 = (bool)((lVar6 != 0 && lVar11 == 0) | bVar1);
            }
            _objc_release(lVar5);
            _objc_release(puVar3);
          }
          puVar13 = (undefined8 *)((long)puVar13 + 1);
        } while (puVar4 != puVar13);
        puVar13 = &uStack_270;
        puVar10 = auStack_230;
        param_5 = 0x10;
        puVar4 = puVar9;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined8 *)0x0);
      _objc_release(puVar9);
      if (bVar1) {
        puVar13 = (undefined8 *)0x1;
        func_0x00010c129060(puVar2);
      }
    }
  }
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar13);
  puVar8 = puVar9;
  func_0x00010bdd7300(puVar9,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar8 == (undefined8 *)0x0) {
    func_0x00010bdc8c40(puVar9,param_2,puVar13);
  }
  puVar8 = puVar13;
  func_0x00010c06e880();
  if ((((ulong)puVar8 & 1) == 0) &&
     (puVar8 = puVar13, func_0x00010c07d660(), (int)puVar10 != (int)puVar8)) {
    func_0x00010c1b4280(puVar13,param_2,puVar10);
    if (((ulong)puVar10 & 1) == 0) {
      puVar8 = puVar13;
      func_0x00010bf38e40(puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b4280();
      _objc_release(puVar8);
    }
    if (param_5 != 0) {
      func_0x00010bdd7300(puVar9,param_2,puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf02ba0();
      _objc_release(puVar9);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar13);
  return;
}



/* Entry: 1061e56c8; end: 1061e58c3; -[SCCameraVerticalToolbar unpinToolbarItemsFromTopFromFeatures:requester:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e56c8(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  int param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
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
  puVar10 = param_3;
  puVar7 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = param_3;
  func_0x00010bf529e0();
  if ((param_4 != (undefined1 *)0x0) && (puVar2 != (undefined8 *)0x0)) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    puVar10 = &uStack_130;
    puVar7 = auStack_f0;
    param_5 = 0x10;
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 == (undefined8 *)0x0) {
      _objc_release(param_3);
    }
    else {
      bVar1 = false;
      lVar9 = *plStack_120;
      do {
        puVar10 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(param_3);
          }
          lVar3 = *(long *)(lStack_128 + (long)puVar10 * 8);
          func_0x00010c067fc0();
          func_0x000100891fd4();
          if (lVar3 != 0) {
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar3);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = (long)_DAT_112742b58;
            lVar3 = *(long *)(param_1 + lVar8);
            func_0x00010c0e00e0(lVar3,param_2,puVar4);
            _objc_retainAutoreleasedReturnValue();
            if (lVar3 != 0) {
              lVar5 = lVar3;
              func_0x00010bf529e0();
              func_0x00010c12d360(lVar3,param_2,param_4);
              lVar6 = lVar3;
              func_0x00010bf529e0();
              if (lVar6 == 0) {
                func_0x00010c12d3e0(*(undefined8 *)(param_1 + lVar8),param_2,puVar4);
              }
              lVar8 = lVar3;
              func_0x00010bf529e0();
              bVar1 = (bool)((lVar5 != 0 && lVar8 == 0) | bVar1);
            }
            _objc_release(lVar3);
            _objc_release(puVar4);
          }
          puVar10 = (undefined8 *)((long)puVar10 + 1);
        } while (puVar2 != puVar10);
        puVar10 = &uStack_130;
        puVar7 = auStack_f0;
        param_5 = 0x10;
        puVar2 = param_3;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined8 *)0x0);
      _objc_release(param_3);
      if (bVar1) {
        puVar10 = (undefined8 *)0x1;
        func_0x00010c129060(param_1);
      }
    }
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  puVar2 = param_3;
  func_0x00010bdd7300(param_3,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined8 *)0x0) {
    func_0x00010bdc8c40(param_3,param_2,puVar10);
  }
  puVar2 = puVar10;
  func_0x00010c06e880();
  if ((((ulong)puVar2 & 1) == 0) &&
     (puVar2 = puVar10, func_0x00010c07d660(), (int)puVar7 != (int)puVar2)) {
    func_0x00010c1b4280(puVar10,param_2,puVar7);
    if (((ulong)puVar7 & 1) == 0) {
      puVar2 = puVar10;
      func_0x00010bf38e40(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b4280();
      _objc_release(puVar2);
    }
    if (param_5 != 0) {
      func_0x00010bdd7300(param_3,param_2,puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf02ba0();
      _objc_release(param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 1061e58c4; end: 1061e59ab; -[SCCameraVerticalToolbar setToolbarItem:selected:animatedScaling:] */

void FUN_1061e58c4(long param_1,undefined8 param_2,ulong param_3,ulong param_4,int param_5)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdd7300(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bdc8c40(param_1,param_2,param_3);
  }
  uVar2 = param_3;
  func_0x00010c06e880();
  if (((uVar2 & 1) == 0) && (uVar2 = param_3, func_0x00010c07d660(), (int)param_4 != (int)uVar2)) {
    func_0x00010c1b4280(param_3,param_2,param_4);
    if ((param_4 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010bf38e40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b4280();
      _objc_release(uVar2);
    }
    if (param_5 != 0) {
      func_0x00010bdd7300(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf02ba0();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061e59ac; end: 1061e59b3; -[SCCameraVerticalToolbar isNewRecentSlotEnabled] */

undefined8 FUN_1061e59ac(void)

{
  return 1;
}



/* Entry: 1061e59b4; end: 1061e59f3; -[SCCameraVerticalToolbar handleLongPressGesture:] */

void FUN_1061e59b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c252440();
  if (param_3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3fb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_collapseToolbarAnimated__1125ad868,1);
    return;
  }
  return;
}



/* Entry: 1061e59f4; end: 1061e5a2f; -[SCCameraVerticalToolbar activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e59f4(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112742bc0) = 1;
  func_0x00010bde5400();
  func_0x00010bee2ea0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde4c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__configureButtonsAndTitlesIfNeed_112556ca0);
  return;
}



/* Entry: 1061e5a30; end: 1061e5a3f; -[SCCameraVerticalToolbar resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e5a30(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_112742bc8) = 0;
  return;
}



/* Entry: 1061e5a40; end: 1061e5b23; -[SCCameraVerticalToolbar usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1061e5a40(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_138 [128];
  long lStack_b8;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e44af8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,
                      *(undefined8 *)(param_3 + _DAT_112742bc8));
  _objc_retainAutoreleasedReturnValue();
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e44b18;
  puStack_48 = puVar1;
  func_0x00010bee6080();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_40 = param_3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_48,&ppuStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0;
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    lVar6 = *(long *)(puVar1 + _DAT_112742bcc);
    _objc_retain(lVar6);
    lVar2 = lVar6;
    func_0x00010bf52a60(lVar6,param_4,&uStack_180,auStack_138,0x10);
    if (lVar2 != 0) {
      lVar8 = *plStack_170;
      do {
        lVar9 = 0;
        do {
          if (*plStack_170 != lVar8) {
            _objc_enumerationMutation(lVar6);
          }
          lVar3 = *(long *)(lStack_178 + lVar9 * 8);
          func_0x00010c273a00();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bf2b580();
          if (lVar4 < 0xe) {
            if (lVar4 < 0xc) {
              if (lVar4 == 10) {
                uVar7 = 7;
              }
              else if (lVar4 == 0xb) {
                uVar7 = 1;
              }
              else {
LAB_1061e5c80:
                uVar7 = 0;
              }
            }
            else if (lVar4 == 0xc) {
              uVar7 = 2;
            }
            else {
              if (lVar4 != 0xd) goto LAB_1061e5c80;
              uVar7 = 3;
            }
          }
          else if (lVar4 < 0x1f) {
            if (lVar4 == 0xe) {
              uVar7 = 10;
            }
            else {
              if (lVar4 != 0x1e) goto LAB_1061e5c80;
              uVar7 = 0xd;
            }
          }
          else if (lVar4 == 0x1f) {
            uVar7 = 0xf;
          }
          else {
            if (lVar4 != 0x23) goto LAB_1061e5c80;
            uVar7 = 0x11;
          }
          _objc_release(lVar3);
          func_0x00010baee46c();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5,param_4,uVar7);
          _objc_release(uVar7);
          lVar9 = lVar9 + 1;
        } while (lVar2 != lVar9);
        lVar2 = lVar6;
        func_0x00010bf52a60(lVar6,param_4,&uStack_180,auStack_138,0x10);
      } while (lVar2 != 0);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      lVar2 = lVar6 + _DAT_112742bb8;
      _objc_loadWeakRetained(lVar2);
      lVar8 = (long)_DAT_112742bac;
      uVar7 = *(undefined8 *)(lVar6 + lVar8);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf512a0(uVar10,param_2,lVar2,param_4,uVar7);
      _objc_release(uVar7);
      _objc_release(lVar2);
      puVar5 = *(undefined **)(lVar6 + lVar8);
      func_0x00010c269d40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar5;
      func_0x00010bf4ba40(uVar10,param_2);
      _objc_release(puVar5);
      return puVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 1061e5b24; end: 1061e5d1f; -[SCCameraVerticalToolbar _upsellSlotContentForLogging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1061e5b24(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar6 = *(long *)(param_3 + _DAT_112742bcc);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60(lVar6,param_4,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        lVar3 = *(long *)(lStack_118 + lVar9 * 8);
        func_0x00010c273a00();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf2b580();
        if (lVar4 < 0xe) {
          if (lVar4 < 0xc) {
            if (lVar4 == 10) {
              uVar7 = 7;
            }
            else if (lVar4 == 0xb) {
              uVar7 = 1;
            }
            else {
LAB_1061e5c80:
              uVar7 = 0;
            }
          }
          else if (lVar4 == 0xc) {
            uVar7 = 2;
          }
          else {
            if (lVar4 != 0xd) goto LAB_1061e5c80;
            uVar7 = 3;
          }
        }
        else if (lVar4 < 0x1f) {
          if (lVar4 == 0xe) {
            uVar7 = 10;
          }
          else {
            if (lVar4 != 0x1e) goto LAB_1061e5c80;
            uVar7 = 0xd;
          }
        }
        else if (lVar4 == 0x1f) {
          uVar7 = 0xf;
        }
        else {
          if (lVar4 != 0x23) goto LAB_1061e5c80;
          uVar7 = 0x11;
        }
        _objc_release(lVar3);
        func_0x00010baee46c();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_4,uVar7);
        _objc_release(uVar7);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar6;
      func_0x00010bf52a60(lVar6,param_4,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  lVar2 = lVar6 + _DAT_112742bb8;
  _objc_loadWeakRetained(lVar2);
  lVar8 = (long)_DAT_112742bac;
  uVar7 = *(undefined8 *)(lVar6 + lVar8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf512a0(uVar10,param_2,lVar2,param_4,uVar7);
  _objc_release(uVar7);
  _objc_release(lVar2);
  puVar5 = *(undefined **)(lVar6 + lVar8);
  func_0x00010c269d40(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bf4ba40(uVar10,param_2);
  _objc_release(puVar5);
  return puVar1;
}



/* Entry: 1061e5d20; end: 1061e5ddf; -[SCCameraVerticalToolbar shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061e5d20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_3 + _DAT_112742bb8;
  _objc_loadWeakRetained(lVar1);
  lVar4 = (long)_DAT_112742bac;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf512a0(param_1,param_2,lVar1,param_4,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf4ba40(param_1,param_2);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 1061e5de0; end: 1061e5f7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e5de0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    puVar2 = PTR_PTR_1126c87c8;
    _objc_alloc(PTR_PTR_1126c87c8);
    func_0x00010c0540a0();
    func_0x00010c0d9840(*(undefined8 *)(uVar1 + (long)_DAT_112742b78));
    *(long *)(uVar1 + (long)_DAT_112742bc8) = *(long *)(uVar1 + (long)_DAT_112742bc8) + 1;
    uVar3 = uVar1;
    func_0x00010c072360();
    if ((uVar3 & 1) == 0) {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_1061e5f80;
      puStack_58 = &UNK_11084b7a0;
      puVar4 = auStack_48;
      _objc_copyWeak(puVar4,param_1 + 0x28);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar5);
      uStack_50 = uVar5;
      func_0x00010be0c3c0(uVar1);
      uVar5 = uStack_50;
    }
    else {
      puVar4 = auStack_78;
      _objc_copyWeak(puVar4,param_1 + 0x28);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar5);
      func_0x00010bde1c00(uVar1);
    }
    _objc_release(uVar5);
    _objc_destroyWeak(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1061e5f80; end: 1061e6077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e5f80(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c177460(*(undefined8 *)(param_1 + 0x20),param_2,7);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112742b28);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b740();
    _objc_release(uVar2);
    func_0x00010c177460(*(undefined8 *)(param_1 + 0x20),param_2,8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061e6078; end: 1061e610b; -[SCCameraVerticalToolbar _lazyLoadExpandedItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e6078(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010bde5400();
  if ((*(byte *)(param_1 + _DAT_112742b8c) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112742b8c) = 1;
    lVar1 = *(long *)(param_1 + _DAT_112742b90);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc2000000;
      pcStack_38 = FUN_1061e610c;
      puStack_30 = &UNK_110842e18;
      lStack_28 = param_1;
      func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48);
    }
  }
  return;
}



/* Entry: 1061e610c; end: 1061e621b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e610c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112742b90);
  func_0x00010bf51e00();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010befc4a0(*(undefined8 *)(param_1 + 0x20));
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar1;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  func_0x00010bed2fc0(*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010beda760();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010bf529e0();
  if (puVar3 != (undefined8 *)0x0) {
    func_0x00010befa120(*(undefined8 *)(lVar2 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061e621c; end: 1061e626b;  */

void FUN_1061e621c(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  func_0x00010bf529e0();
  if (param_3 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061e626c; end: 1061e63bb; -[SCCameraVerticalToolbar _updateVisiblityOfChildItemOfItem:] */

void FUN_1061e626c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf38e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf38e40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bdd7300(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befc4a0(param_1,param_2,lVar1);
    }
    puVar3 = PTR_PTR_1126c87c8;
    _objc_alloc();
    func_0x00010c0540a0();
    lVar2 = param_3;
    func_0x00010bf2d680(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(lVar2);
    puVar4 = puVar3;
    func_0x00010c233520();
    if ((int)puVar4 == 0) {
      func_0x00010bea2aa0(param_1,param_2,0,param_3);
      func_0x00010bfe2c00(param_1,param_2,lVar1,1);
    }
    else {
      func_0x00010bea2aa0(param_1,param_2,1,param_3);
      lVar2 = param_1;
      func_0x00010c075da0(param_1,param_2,lVar1);
      if ((int)lVar2 == 0) {
        func_0x00010beda760(param_1);
      }
      else {
        func_0x00010c23a840(param_1,param_2,lVar1,1);
      }
    }
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061e63bc; end: 1061e641f; -[SCCameraVerticalToolbar _setChildItemVisible:forItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e63bc(long param_1,undefined8 param_2,int param_3,long param_4)

{
  func_0x00010bf38e40();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    if (param_3 == 0) {
      func_0x00010c12d360(*(undefined8 *)(param_1 + _DAT_112742b64),param_2,param_4);
    }
    else {
      func_0x00010befa120();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061e6420; end: 1061e647f; -[SCCameraVerticalToolbar _isChildItemVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061e6420(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf38e40();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112742b64);
    func_0x00010bf4b900(uVar1,param_2,param_3);
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1061e6480; end: 1061e649f; -[SCCameraVerticalToolbar _actionTypeIsPositive:] */

bool FUN_1061e6480(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010c2827c0(param_3);
  return param_3 < 3;
}



/* Entry: 1061e64a0; end: 1061e64c3; -[SCCameraVerticalToolbar _willReturnToCamera:] */

bool FUN_1061e64a0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010c2827c0(param_3);
  return (param_3 & 0xfffffffffffffffe) == 2;
}



/* Entry: 1061e64c4; end: 1061e657b; -[SCCameraVerticalToolbar _onCameraToolbarButtonTap:] */

void FUN_1061e64c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdd7300(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be40960(param_1,param_2,param_3);
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c07d660();
    if ((int)uVar2 != 0) {
      func_0x00010bdfb100(param_1,param_2,param_3);
    }
    uVar2 = param_1;
    func_0x00010c072360();
    if ((int)uVar2 == 0) {
      func_0x00010c129060(param_1,param_2,1);
    }
    else {
      uVar2 = param_3;
      func_0x00010c231600();
      if ((uVar2 & 1) == 0) {
        func_0x00010bde1c00(param_1,param_2,1,1,0);
      }
    }
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061e657c; end: 1061e66ef; -[SCCameraVerticalToolbar _shouldDelesectSelectedButtonsForToolbarItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1061e657c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(param_1 + _DAT_112742b50);
  func_0x00010bf51e00();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        lVar4 = *(long *)(lStack_128 + lVar8 * 8);
        func_0x00010c273a00();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 == param_3) {
          _objc_release(lVar4);
          goto LAB_1061e6694;
        }
        puVar6 = *(undefined8 **)(param_1 + _DAT_112742b5c);
        lVar5 = lVar4;
        FUN_1061e82f0(lVar4,param_3);
        _objc_release(lVar4);
        if ((int)lVar5 == 0) {
          bVar1 = true;
          goto LAB_1061e66a0;
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
LAB_1061e6694:
  bVar1 = false;
LAB_1061e66a0:
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x00010bf2b580();
    bVar1 = true;
    if (((undefined1 *)0xc < puVar6) || ((1L << ((ulong)puVar6 & 0x3f) & 0x11f4U) == 0)) {
      bVar1 = puVar6 == (undefined8 *)0x4b;
    }
    return bVar1;
  }
  return bVar1;
}



/* Entry: 1061e66f0; end: 1061e66f7; -[SCCameraVerticalToolbar _isFreeToSelectToolbarItem:] */

bool FUN_1061e66f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  
  func_0x00010bf2b580();
  bVar1 = true;
  if ((0xc < param_3) || ((1L << (param_3 & 0x3f) & 0x11f4U) == 0)) {
    bVar1 = param_3 == 0x4b;
  }
  return bVar1;
}



/* Entry: 1061e66f8; end: 1061e67ff; -[SCCameraVerticalToolbar _cameraToolbarItemDidChangeSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e66f8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdd7300(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c07d660();
  func_0x00010c1fadc0(uVar1,param_2,uVar2);
  if ((int)uVar2 == 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + (long)_DAT_112742b50),param_2,uVar1);
    uVar3 = param_1;
    func_0x00010c072360();
    if ((uVar3 & 1) == 0) {
      func_0x00010bde1c00(param_1,param_2,1,1,0);
    }
  }
  else {
    func_0x00010befa120();
    func_0x00010c1b0760(uVar1,param_2,0);
    uVar2 = param_3;
    func_0x00010c06e880();
    if ((int)uVar2 != 0) {
      uVar3 = param_1;
      func_0x00010bdd7300(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0);
      func_0x00010beda760(param_1);
      _objc_release(uVar3);
    }
    func_0x00010c072360(param_1);
  }
  func_0x00010c129060(param_1,param_2,1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061e6800; end: 1061e688b; -[SCCameraVerticalToolbar _cameraToolbarItemDidChangeShowingWidget:] */

void FUN_1061e6800(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdd7300(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c07d660();
    if ((((int)uVar2 != 0) && (uVar2 = param_3, func_0x00010c07e020(), (uVar2 & 1) == 0)) &&
       (uVar2 = param_3, func_0x00010c234640(), (int)uVar2 != 0)) {
      func_0x00010bf031a0(lVar1);
    }
    func_0x00010bedc1e0(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061e688c; end: 1061e6a87; -[SCCameraVerticalToolbar _updateNewBadgeStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e688c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + _DAT_112742ba4);
  _objc_retain(lVar6);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      bVar1 = false;
LAB_1061e6994:
      _objc_release(lVar6);
      lVar9 = *(long *)(param_1 + _DAT_112742b84);
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar9;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar9);
          }
          if (bVar1) {
            func_0x00010bfb4c40();
          }
          else {
            func_0x00010c13c740(*(undefined8 *)(lVar8 * 8));
          }
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar9;
        func_0x00010bf52a60();
      }
      _objc_release(lVar9);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return;
      }
      ___stack_chk_fail();
      lVar3 = lVar6;
      func_0x00010beb5ce0();
      if ((int)lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bebb730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (0x4008000000000000,lVar6,PTR_s__showTitlesForTimer__11258c770);
        return;
      }
      return;
    }
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar6);
      }
      uVar7 = *(ulong *)(lVar9 * 8);
      uVar4 = uVar7;
      func_0x00010c07e020();
      if ((uVar4 & 1) != 0) {
LAB_1061e6990:
        bVar1 = true;
        goto LAB_1061e6994;
      }
      func_0x00010bf38e40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010c07e020();
      _objc_release(uVar7);
      if ((uVar4 & 1) != 0) goto LAB_1061e6990;
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar6;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1061e6a88; end: 1061e6abf; -[SCCameraVerticalToolbar _showTitlesAfterCaptureIfNecessary] */

void FUN_1061e6a88(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010beb5ce0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bebb730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0x4008000000000000,param_1,PTR_s__showTitlesForTimer__11258c770);
    return;
  }
  return;
}



/* Entry: 1061e6ac0; end: 1061e6b63; -[SCCameraVerticalToolbar _showTitlesForTimer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e6ac0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112742be0;
  lVar1 = param_2 + lVar3;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c069d00();
  _objc_release(lVar1);
  _objc_storeWeak(param_2 + lVar3,0);
  puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c1503c0(param_1,PTR__OBJC_CLASS___NSTimer_1126af1b0);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_2 + lVar3,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bee23d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateTitleVisibility_112596298);
  return;
}



/* Entry: 1061e6b64; end: 1061e6b6f;  */

void FUN_1061e6b64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001061e6b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1061e6b70; end: 1061e6bcf; -[SCCameraVerticalToolbar _resetTitleVisibilityTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e6b70(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112742be0;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c069d00();
  _objc_release(lVar1);
  _objc_storeWeak(param_1 + lVar2,0);
  *(undefined1 *)(param_1 + _DAT_112742b48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bee23d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTitleVisibility_112596298);
  return;
}



/* Entry: 1061e6bd0; end: 1061e6c33; -[SCCameraVerticalToolbar startAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e6bd0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742bac);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,uVar1,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061e6c34; end: 1061e6cff; -[SCCameraVerticalToolbar _isItemAvailableForUpsellSlot:] */

bool FUN_1061e6c34(ulong param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf2b580();
  func_0x00010be17ee0(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c084c40(param_3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf4b900(param_1,param_2,puVar4);
  _objc_release(puVar4);
  bVar1 = false;
  if (((uVar5 & 1) == 0) && (lVar2 != 3)) {
    lVar2 = param_3;
    func_0x00010c104260(param_3);
    bVar1 = lVar2 != 4;
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1061e6d00; end: 1061e6f1f; -[SCCameraVerticalToolbar _updateUpsellSlotCandidates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e6d00(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *unaff_x19;
  long lVar6;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  long unaff_x25;
  long lVar7;
  long unaff_x26;
  long lVar8;
  undefined8 uVar9;
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
  long lStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  lVar6 = (long)_DAT_112742b54;
  lVar2 = *(long *)(param_1 + lVar6);
  func_0x00010bf529e0();
  puVar3 = (undefined *)0x0;
  if (lVar2 != 0) {
    unaff_x19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
    lVar6 = *(long *)(param_1 + lVar6);
    _objc_retain(lVar6);
    lVar2 = lVar6;
    func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar2 != 0) {
      unaff_x26 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != unaff_x26) {
            _objc_enumerationMutation(lVar6);
          }
          unaff_x24 = *(undefined **)(lStack_128 + lVar8 * 8);
          puVar3 = unaff_x24;
          func_0x00010c273a00();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010bf2b580();
          _objc_release(puVar3);
          func_0x00010c273a00();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = param_1;
          func_0x00010be414c0(param_1,param_2,unaff_x24);
          _objc_release(unaff_x24);
          unaff_x23 = puVar4;
          if ((int)unaff_x25 != 0) {
            unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(unaff_x19,param_2,unaff_x23);
            _objc_release(unaff_x23);
          }
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        lVar2 = lVar6;
        func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_f0,0x10);
        unaff_x22 = (undefined *)0x0;
      } while (lVar2 != 0);
    }
    _objc_release(lVar6);
    puVar3 = unaff_x19;
    func_0x00010bf529e0();
    if (puVar3 != (undefined *)0x0) {
      param_1 = param_1 + _DAT_112742b60;
      _objc_loadWeakRetained();
      lVar6 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = unaff_x19;
      func_0x00010bf51e00();
      func_0x00010c1d0560(lVar6,param_2,unaff_x22,&PTR____CFConstantStringClassReference_110e44b38);
      _objc_release(unaff_x22);
      _objc_release(lVar6);
      _objc_release(param_1);
    }
    puVar3 = unaff_x19;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_250;
  pcStack_138 = FUN_1061e6f20;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_112742bcc;
  lVar2 = *(long *)(puVar3 + lVar8);
  lStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  lStack_158 = lVar6;
  lStack_150 = param_1;
  puStack_148 = unaff_x19;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea9de0(puVar3,param_2,puVar4);
    _objc_release(puVar4);
  }
  uVar9 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  lVar6 = *(long *)(puVar3 + lVar8);
  func_0x00010bf51e00();
  lVar2 = lVar6;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_240;
    do {
      lVar7 = 0;
      do {
        if (*plStack_240 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        iVar1 = (int)*(undefined8 *)(lStack_248 + lVar7 * 8);
        func_0x00010c159240();
        if (iVar1 != 0) {
          puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bea9de0(puVar3,param_2,puVar4);
          _objc_release(puVar4);
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar6;
      puVar5 = &uStack_250;
      func_0x00010bf52a60(lVar6,param_2,&uStack_250,auStack_208,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = (long)_DAT_112742b60;
  _objc_retain(puVar5);
  lVar6 = lVar6 + lVar2;
  _objc_loadWeakRetained(lVar6);
  lVar2 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320(puVar5);
  _objc_release(puVar5);
  func_0x00010c191020(uVar9,lVar2,param_2,&PTR____CFConstantStringClassReference_110e44b78);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 1061e6f20; end: 1061e7083; -[SCCameraVerticalToolbar _updateUpsellSlotLastUsedDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e6f20(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
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
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_112742bcc;
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea9de0(param_1,param_2,puVar3);
    _objc_release(puVar3);
  }
  uVar8 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010bf51e00();
  lVar5 = lVar2;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        iVar1 = (int)*(undefined8 *)(lStack_118 + lVar7 * 8);
        func_0x00010c159240();
        if (iVar1 != 0) {
          puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bea9de0(param_1,param_2,puVar3);
          _objc_release(puVar3);
        }
        lVar7 = lVar7 + 1;
      } while (lVar5 != lVar7);
      lVar5 = lVar2;
      puVar4 = &uStack_120;
      func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar5 != 0);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = (long)_DAT_112742b60;
  _objc_retain(puVar4);
  lVar2 = lVar2 + lVar5;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320(puVar4);
  _objc_release(puVar4);
  func_0x00010c191020(uVar8,lVar5,param_2,&PTR____CFConstantStringClassReference_110e44b78);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1061e7084; end: 1061e7113; -[SCCameraVerticalToolbar _setUpsellSlotLastUsedDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e7084(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112742b60;
  _objc_retain(param_4);
  param_2 = param_2 + lVar1;
  _objc_loadWeakRetained(param_2);
  lVar1 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320(param_4);
  _objc_release(param_4);
  func_0x00010c191020(param_1,lVar1,param_3,&PTR____CFConstantStringClassReference_110e44b78);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061e7114; end: 1061e7403; -[SCCameraVerticalToolbar _removeFromUpsellSlot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e7114(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_112742b84;
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar7 = &uStack_130;
  puVar8 = auStack_f0;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar1);
        }
        uVar11 = *(ulong *)(lStack_128 + lVar14 * 8);
        uVar3 = uVar11;
        func_0x00010c273a00();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c104260();
        _objc_release(uVar3);
        if (uVar4 == 2) {
          uVar3 = uVar11;
          func_0x00010c273a00(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be61520(param_1,param_2,uVar3,3);
          _objc_release(uVar3);
          uVar3 = uVar11;
          func_0x00010c273a00();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c06e880();
          if ((uVar4 & 1) == 0) {
            lVar12 = *(long *)(param_1 + lVar9);
            uVar4 = uVar11;
            func_0x00010c273a00(uVar11);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010bf38e40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0(lVar12,param_2,uVar5);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar5);
            _objc_release(uVar4);
            _objc_release(uVar3);
            if (lVar12 == 0) {
              uVar3 = uVar11;
              func_0x00010c273a00(uVar11);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x00010bf38e40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1dee80();
              _objc_release(uVar4);
              goto LAB_1061e72e8;
            }
          }
          else {
LAB_1061e72e8:
            _objc_release(uVar3);
          }
          puVar6 = PTR_PTR_1126c87c8;
          _objc_alloc(PTR_PTR_1126c87c8);
          uVar3 = uVar11;
          func_0x00010c273a00(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0540a0(puVar6,param_2,uVar3);
          _objc_release(uVar3);
          func_0x00010c273a00();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar11;
          func_0x00010bf734c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d9840();
          _objc_release(uVar3);
          _objc_release(uVar11);
          _objc_release(puVar6);
        }
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      puVar7 = &uStack_130;
      puVar8 = auStack_f0;
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,puVar7,puVar8,0x10);
    } while (lVar2 != 0);
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + _DAT_112742bcc);
  *(undefined **)(param_1 + _DAT_112742bcc) = puVar6;
  _objc_release(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  lVar2 = lVar1;
  func_0x00010bdd7300(lVar1,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010c1dee80(puVar7,param_2,puVar8);
  }
  else {
    func_0x00010bddcbc0(lVar1,param_2,puVar7,puVar8,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1061e7404; end: 1061e747f; -[SCCameraVerticalToolbar _moveToolbarItemOrChild:toPosition:] */

void FUN_1061e7404(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdd7300(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c1dee80(param_3,param_2,param_4);
  }
  else {
    func_0x00010bddcbc0(param_1,param_2,param_3,param_4,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061e7480; end: 1061e7493; -[SCCameraVerticalToolbar _isCameraModeExcludedFromUpsellSlot:] */

bool FUN_1061e7480(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return param_3 == 0x1a || (param_3 & 0xffffffffffffffdf) == 3;
}



/* Entry: 1061e7494; end: 1061e74ab; -[SCCameraVerticalToolbar _shouldShowCameraLabelsAfterCapture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1061e7494(long param_1)

{
  return *(long *)(param_1 + _DAT_112742b20) == 0;
}



/* Entry: 1061e74ac; end: 1061e764f;  */

void FUN_1061e74ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1061e7650;
  puStack_60 = &UNK_110872b00;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  func_0x00010c0e7bc0(param_2);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1061e7698;
  puStack_88 = &UNK_11090b590;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0e3ae0(param_2);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1061e7718;
  puStack_b0 = &UNK_11090b5c0;
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0e3ac0(param_2);
  _objc_copyWeak(auStack_d0,param_1 + 0x20);
  func_0x00010c0e3840(param_2);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1061e7650; end: 1061e7697;  */

void FUN_1061e7650(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeaf00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061e7698; end: 1061e77ff;  */

void FUN_1061e7698(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe340();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061e7800; end: 1061e7833; -[SCCameraVerticalToolbar stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e7800(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112742be4;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061e7834; end: 1061e7843; -[SCCameraVerticalToolbar _willBeginVideoRecording:] */

void FUN_1061e7834(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c166eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setAllItemsHidden_includingAlway_1126375c8,1,0,1);
  return;
}



/* Entry: 1061e7844; end: 1061e7853; -[SCCameraVerticalToolbar _didFinishRecording:session:recordedVideo:] */

void FUN_1061e7844(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c166eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setAllItemsHidden_includingAlway_1126375c8,0,1,1);
  return;
}



/* Entry: 1061e7854; end: 1061e7863; -[SCCameraVerticalToolbar _didFailRecording:session:error:] */

void FUN_1061e7854(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c166eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setAllItemsHidden_includingAlway_1126375c8,0,1,1);
  return;
}



/* Entry: 1061e7864; end: 1061e7873; -[SCCameraVerticalToolbar _didCancelRecording:session:] */

void FUN_1061e7864(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c166eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setAllItemsHidden_includingAlway_1126375c8,0,1,1);
  return;
}



/* Entry: 1061e7874; end: 1061e7adb; -[SCCameraVerticalToolbar cameraToolbarButtonCanChangeSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1061e7874(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *unaff_x22;
  ulong unaff_x23;
  undefined *unaff_x25;
  long lVar12;
  undefined *unaff_x26;
  long lVar13;
  long unaff_x27;
  long lVar14;
  undefined *unaff_x28;
  long lVar15;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1b0;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  ulong uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  ulong uStack_138;
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
  func_0x00010c273a00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010beb2fe0();
  if ((int)uVar1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puVar2 = *(undefined **)(param_1 + (long)_DAT_112742b50);
    func_0x00010bf51e00();
    puVar11 = puVar2;
    func_0x00010bf52a60();
    if (puVar11 != (undefined *)0x0) {
      unaff_x27 = *plStack_120;
      unaff_x28 = &DAT_112742000;
      unaff_x22 = puVar11;
      uStack_138 = param_1;
      do {
        unaff_x26 = (undefined *)0x0;
        do {
          if (*plStack_120 != unaff_x27) {
            _objc_enumerationMutation(puVar2);
          }
          unaff_x23 = *(ulong *)(lStack_128 + (long)unaff_x26 * 8);
          func_0x00010c273a00();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = unaff_x23;
          func_0x00010c07d660();
          if (((unaff_x23 == param_3 || (int)uVar1 == 0) ||
              (uVar1 = param_1, func_0x00010be40960(), (uVar1 & 1) != 0)) ||
             (uVar1 = unaff_x23,
             FUN_1061e82f0(unaff_x23,param_3,*(undefined8 *)(param_1 + (long)_DAT_112742b5c)),
             (int)uVar1 != 0)) {
            _objc_release(unaff_x23);
          }
          else {
            puVar11 = PTR_PTR_1126c87c8;
            _objc_alloc();
            func_0x00010c0540a0();
            func_0x00010c216f80();
            uVar1 = unaff_x23;
            func_0x00010bf2c660(unaff_x23);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar11;
            func_0x00010c0d9840();
            _objc_release(uVar1);
            unaff_x25 = puVar11;
            func_0x00010c22e400();
            param_1 = uStack_138;
            _objc_release(puVar11);
            _objc_release(unaff_x23);
            if (((ulong)unaff_x25 & 1) != 0) {
              puVar11 = (undefined *)0x0;
              goto LAB_1061e7a8c;
            }
          }
          unaff_x26 = unaff_x26 + 1;
        } while (unaff_x22 != unaff_x26);
        unaff_x22 = puVar2;
        func_0x00010bf52a60();
      } while (unaff_x22 != (undefined *)0x0);
    }
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126c87c8;
  _objc_alloc();
  func_0x00010c0540a0();
  uVar1 = param_3;
  func_0x00010bf2c660(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c0d9840();
  _objc_release(uVar1);
  puVar11 = puVar2;
  func_0x00010c22e400();
  puVar11 = (undefined *)(ulong)((uint)puVar11 ^ 1);
LAB_1061e7a8c:
  _objc_release(puVar2);
  uVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar11;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_270;
  ppuStack_180 = &PTR_PTR_1126c8000;
  pcStack_148 = FUN_1061e7adc;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  puStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  uStack_178 = unaff_x23;
  puStack_170 = unaff_x22;
  puStack_168 = puVar11;
  puStack_160 = puVar2;
  uStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puVar11 = puVar7;
  func_0x00010c273a00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  puVar2 = puVar11;
  func_0x00010be40960();
  _objc_release(puVar11);
  if ((uVar3 & 1) == 0) {
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    lVar4 = *(long *)(uVar1 + (long)_DAT_112742b50);
    func_0x00010bf51e00();
    lVar10 = lVar4;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      lVar14 = *plStack_260;
      do {
        lVar15 = 0;
        do {
          if (*plStack_260 != lVar14) {
            _objc_enumerationMutation(lVar4);
          }
          puVar11 = *(undefined **)(lStack_268 + lVar15 * 8);
          if (puVar11 != puVar7) {
            puVar2 = puVar11;
            func_0x00010c273a00();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar7;
            func_0x00010c273a00();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar2;
            FUN_1061e82f0(puVar2,puVar5,*(undefined8 *)(uVar1 + (long)_DAT_112742b5c));
            _objc_release(puVar5);
            _objc_release(puVar2);
            if (((ulong)puVar6 & 1) == 0) {
              func_0x00010c273a00();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c216f40(uVar1);
              _objc_release(puVar11);
            }
          }
          lVar15 = lVar15 + 1;
        } while (lVar10 != lVar15);
        lVar10 = lVar4;
        puVar9 = &uStack_270;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
    _objc_release(lVar4);
    puVar2 = (undefined *)puVar9;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return puVar7;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  lVar14 = *(long *)(puVar7 + _DAT_112742b50);
  func_0x00010bf51e00();
  lVar10 = lVar14;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar10 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar14);
      }
      puVar11 = *(undefined **)(lVar13 * 8);
      func_0x00010c273a00();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar11 != puVar2) &&
         (puVar5 = puVar11, FUN_1061e82f0(puVar11,puVar2,*(undefined8 *)(puVar7 + _DAT_112742b5c)),
         ((ulong)puVar5 & 1) == 0)) {
        func_0x00010c216f40(puVar7);
      }
      _objc_release(puVar11);
      lVar13 = lVar13 + 1;
    } while (lVar10 != lVar13);
    lVar10 = lVar14;
    func_0x00010bf52a60();
  }
  _objc_release(lVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = (long)_DAT_112742be8;
  if (*(long *)(puVar2 + lVar4) != 0) {
    func_0x00010bdd3ca0();
    lVar13 = *(long *)(puVar2 + lVar4);
    _objc_retain(lVar13);
    lVar14 = lVar13;
    func_0x00010bf52a60();
    lVar15 = lRam0000000000000000;
    while (lVar14 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar15) {
          _objc_enumerationMutation(lVar13);
        }
        uVar8 = *(undefined8 *)(lVar12 * 8);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf476c0();
        _objc_release(uVar8);
        lVar12 = lVar12 + 1;
      } while (lVar14 != lVar12);
      lVar14 = lVar13;
      func_0x00010bf52a60();
    }
    _objc_release(lVar13);
    uVar8 = *(undefined8 *)(puVar2 + lVar4);
    *(undefined8 *)(puVar2 + lVar4) = 0;
    _objc_release(uVar8);
    func_0x00010be09ee0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return puVar2;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar2 + _DAT_112742b80);
}



/* Entry: 1061e7adc; end: 1061e7caf; -[SCCameraVerticalToolbar cameraToolbarButtonDeselectCurrentButtonIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1061e7adc(ulong param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar9 = param_3;
  func_0x00010c273a00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  puVar3 = puVar9;
  func_0x00010be40960();
  _objc_release(puVar9);
  if ((uVar1 & 1) == 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar2 = *(long *)(param_1 + (long)_DAT_112742b50);
    func_0x00010bf51e00();
    lVar8 = lVar2;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar12 = *plStack_120;
      do {
        lVar13 = 0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(lVar2);
          }
          puVar9 = *(undefined1 **)(lStack_128 + lVar13 * 8);
          if (puVar9 != param_3) {
            puVar3 = puVar9;
            func_0x00010c273a00();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = param_3;
            func_0x00010c273a00();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            FUN_1061e82f0(puVar3,puVar4,*(undefined8 *)(param_1 + (long)_DAT_112742b5c));
            _objc_release(puVar4);
            _objc_release(puVar3);
            if (((ulong)puVar5 & 1) == 0) {
              func_0x00010c273a00();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c216f40(param_1);
              _objc_release(puVar9);
            }
          }
          lVar13 = lVar13 + 1;
        } while (lVar8 != lVar13);
        lVar8 = lVar2;
        puVar7 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    _objc_release(lVar2);
    puVar3 = (undefined1 *)puVar7;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  lVar12 = *(long *)(param_3 + _DAT_112742b50);
  func_0x00010bf51e00();
  lVar8 = lVar12;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar12);
      }
      puVar9 = *(undefined1 **)(lVar11 * 8);
      func_0x00010c273a00();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar9 != puVar3) &&
         (puVar4 = puVar9, FUN_1061e82f0(puVar9,puVar3,*(undefined8 *)(param_3 + _DAT_112742b5c)),
         ((ulong)puVar4 & 1) == 0)) {
        func_0x00010c216f40(param_3);
      }
      _objc_release(puVar9);
      lVar11 = lVar11 + 1;
    } while (lVar8 != lVar11);
    lVar8 = lVar12;
    func_0x00010bf52a60();
  }
  _objc_release(lVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = (long)_DAT_112742be8;
  if (*(long *)(puVar3 + lVar2) != 0) {
    func_0x00010bdd3ca0();
    lVar11 = *(long *)(puVar3 + lVar2);
    _objc_retain(lVar11);
    lVar12 = lVar11;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    while (lVar12 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(lVar11);
        }
        uVar6 = *(undefined8 *)(lVar10 * 8);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf476c0();
        _objc_release(uVar6);
        lVar10 = lVar10 + 1;
      } while (lVar12 != lVar10);
      lVar12 = lVar11;
      func_0x00010bf52a60();
    }
    _objc_release(lVar11);
    uVar6 = *(undefined8 *)(puVar3 + lVar2);
    *(undefined8 *)(puVar3 + lVar2) = 0;
    _objc_release(uVar6);
    func_0x00010be09ee0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar3;
  }
  ___stack_chk_fail();
  return *(undefined1 **)(puVar3 + _DAT_112742b80);
}



/* Entry: 1061e7cb0; end: 1061e7e13; -[SCCameraVerticalToolbar _deselectIncompatibleSelectedButtonsForItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1061e7cb0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_112742b50);
  func_0x00010bf51e00();
  lVar6 = lVar1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(lVar1);
      }
      uVar2 = *(ulong *)(lVar9 * 8);
      func_0x00010c273a00();
      _objc_retainAutoreleasedReturnValue();
      if ((uVar2 != param_3) &&
         (uVar3 = uVar2, FUN_1061e82f0(uVar2,param_3,*(undefined8 *)(param_1 + _DAT_112742b5c)),
         (uVar3 & 1) == 0)) {
        func_0x00010c216f40(param_1);
      }
      _objc_release(uVar2);
      lVar9 = lVar9 + 1;
    } while (lVar6 != lVar9);
    lVar6 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_112742be8;
  if (*(long *)(param_3 + lVar7) != 0) {
    func_0x00010bdd3ca0();
    lVar9 = *(long *)(param_3 + lVar7);
    _objc_retain(lVar9);
    lVar1 = lVar9;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar9);
        }
        uVar4 = *(undefined8 *)(lVar8 * 8);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf476c0();
        _objc_release(uVar4);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
    uVar4 = *(undefined8 *)(param_3 + lVar7);
    *(undefined8 *)(param_3 + lVar7) = 0;
    _objc_release(uVar4);
    func_0x00010be09ee0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(ulong *)(param_3 + (long)_DAT_112742b80);
}



/* Entry: 1061e7e14; end: 1061e7f53; -[SCCameraVerticalToolbar _configureNonStartupToolbarFeaturesIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061e7e14(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  lVar4 = (long)_DAT_112742be8;
  if (*(long *)(param_1 + lVar4) != 0) {
    func_0x00010bdd3ca0();
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar3 = *(long *)(param_1 + lVar4);
    _objc_retain(lVar3);
    lVar1 = lVar3;
    func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    if (lVar1 != 0) {
      lVar5 = *plStack_110;
      do {
        lVar6 = 0;
        do {
          if (*plStack_110 != lVar5) {
            _objc_enumerationMutation(lVar3);
          }
          uVar2 = *(undefined8 *)(lStack_118 + lVar6 * 8);
          func_0x00010c269d40(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf476c0();
          _objc_release(uVar2);
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        lVar1 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar2);
    func_0x00010be09ee0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  return *(long *)(param_1 + _DAT_112742b80);
}



/* Entry: 1061e7f54; end: 1061e7f63; -[SCCameraVerticalToolbar cameraToolbarVisibilityObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061e7f54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742b80);
}



/* Entry: 1061e7f64; end: 1061e7f73; -[SCCameraVerticalToolbar expandButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061e7f64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742bb0);
}



/* Entry: 1061e7f74; end: 1061e7fb3; -[SCCameraVerticalToolbar setExpandButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e7f74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112742bb0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061e7fb4; end: 1061e7fc3; -[SCCameraVerticalToolbar collapseButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061e7fb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742bb4);
}



/* Entry: 1061e7fc4; end: 1061e8003; -[SCCameraVerticalToolbar setCollapseButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e7fc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112742bb4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061e8004; end: 1061e8013; -[SCCameraVerticalToolbar expandAndCollapseButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061e8004(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742bd0);
}



/* Entry: 1061e8014; end: 1061e8053; -[SCCameraVerticalToolbar setExpandAndCollapseButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e8014(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112742bd0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061e8054; end: 1061e82ef; -[SCCameraVerticalToolbar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e8054(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742bd0,0);
  _objc_storeStrong(param_1 + _DAT_112742bb4,0);
  _objc_storeStrong(param_1 + _DAT_112742bb0,0);
  _objc_storeStrong(param_1 + _DAT_112742b6c,0);
  _objc_destroyWeak(param_1 + _DAT_112742b70);
  _objc_storeStrong(param_1 + _DAT_112742be8,0);
  _objc_storeStrong(param_1 + _DAT_112742b80,0);
  _objc_storeStrong(param_1 + _DAT_112742b3c,0);
  _objc_storeStrong(param_1 + _DAT_112742bd4,0);
  _objc_storeStrong(param_1 + _DAT_112742b38,0);
  _objc_storeStrong(param_1 + _DAT_112742b2c,0);
  _objc_storeStrong(param_1 + _DAT_112742b30,0);
  _objc_storeStrong(param_1 + _DAT_112742bc4,0);
  _objc_storeStrong(param_1 + _DAT_112742b4c,0);
  _objc_storeStrong(param_1 + _DAT_112742b7c,0);
  _objc_storeStrong(param_1 + _DAT_112742b78,0);
  _objc_storeStrong(param_1 + _DAT_112742b74,0);
  _objc_storeStrong(param_1 + _DAT_112742b5c,0);
  _objc_storeStrong(param_1 + _DAT_112742bdc,0);
  _objc_storeStrong(param_1 + _DAT_112742bac,0);
  _objc_storeStrong(param_1 + _DAT_112742bd8,0);
  _objc_destroyWeak(param_1 + _DAT_112742bbc);
  _objc_destroyWeak(param_1 + _DAT_112742bb8);
  _objc_storeStrong(param_1 + _DAT_112742b58,0);
  _objc_storeStrong(param_1 + _DAT_112742b54,0);
  _objc_storeStrong(param_1 + _DAT_112742b50,0);
  _objc_storeStrong(param_1 + _DAT_112742b68,0);
  _objc_storeStrong(param_1 + _DAT_112742be4,0);
  _objc_storeStrong(param_1 + _DAT_112742b34,0);
  _objc_destroyWeak(param_1 + _DAT_112742b60);
  _objc_storeStrong(param_1 + _DAT_112742b88,0);
  _objc_storeStrong(param_1 + _DAT_112742b64,0);
  _objc_storeStrong(param_1 + _DAT_112742ba0,0);
  _objc_storeStrong(param_1 + _DAT_112742b84,0);
  _objc_storeStrong(param_1 + _DAT_112742ba4,0);
  _objc_storeStrong(param_1 + _DAT_112742bcc,0);
  _objc_storeStrong(param_1 + _DAT_112742b94,0);
  _objc_storeStrong(param_1 + _DAT_112742b90,0);
  _objc_storeStrong(param_1 + _DAT_112742b28,0);
  _objc_storeStrong(param_1 + _DAT_112742b24,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112742be0);
  return;
}



/* Entry: 1061e82f0; end: 1061e8933;  */

uint FUN_1061e82f0(undefined *param_1,undefined *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar6 = 1;
  uVar1 = 1;
  if (((param_1 == (undefined *)0x0) || (param_2 == (undefined *)0x0)) ||
     (puVar2 = param_2, func_0x00010c06e880(), ((ulong)puVar2 & 1) != 0)) goto LAB_1061e83d4;
  puVar2 = param_1;
  func_0x00010c0f3c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_2;
    func_0x00010c0f3c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = param_2;
      func_0x00010c0f3c40(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      goto LAB_1061e83c0;
    }
    puVar2 = param_1;
    FUN_1061e8934();
    if ((((ulong)puVar2 & 1) != 0) || (puVar2 = param_2, FUN_1061e8934(), ((ulong)puVar2 & 1) != 0))
    goto LAB_1061e83d4;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010bf2b580();
    if ((puVar3 == (undefined *)0x5d) ||
       (puVar3 = param_2, func_0x00010bf2b580(), puVar3 == (undefined *)0x5d)) {
      puVar3 = puVar2;
      FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180278);
      puVar4 = puVar2;
      FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180290);
      uVar1 = ((uint)puVar3 | (uint)puVar4) ^ 1;
    }
    else {
      puVar3 = param_1;
      func_0x00010bf2b580();
      if ((puVar3 == (undefined *)0x23) ||
         (puVar3 = param_2, func_0x00010bf2b580(), puVar3 == (undefined *)0x23)) {
        puVar3 = puVar2;
        FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111802a8);
        uVar1 = (uint)puVar3 ^ 1;
      }
      else {
        puVar3 = puVar2;
        FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111802c0);
        uVar1 = uVar6;
        if ((((((((((((((ulong)puVar3 & 1) == 0) &&
                     (puVar3 = puVar2,
                     FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111802d8),
                     ((ulong)puVar3 & 1) == 0)) &&
                    (puVar3 = puVar2,
                    FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111802f0),
                    ((ulong)puVar3 & 1) == 0)) &&
                   ((puVar3 = puVar2,
                    FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180308),
                    ((ulong)puVar3 & 1) == 0 &&
                    (puVar3 = puVar2,
                    FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180320),
                    ((ulong)puVar3 & 1) == 0)))) &&
                  (puVar3 = puVar2,
                  FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180338),
                  ((ulong)puVar3 & 1) == 0)) &&
                 (((puVar3 = puVar2,
                   FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180350),
                   ((ulong)puVar3 & 1) == 0 &&
                   (puVar3 = puVar2,
                   FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180368),
                   ((ulong)puVar3 & 1) == 0)) &&
                  ((puVar3 = puVar2,
                   FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180380),
                   ((ulong)puVar3 & 1) == 0 &&
                   (((puVar3 = puVar2,
                     FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180398),
                     ((ulong)puVar3 & 1) == 0 &&
                     (puVar3 = puVar2,
                     FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111803b0),
                     ((ulong)puVar3 & 1) == 0)) &&
                    (puVar3 = puVar2,
                    FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111803c8),
                    ((ulong)puVar3 & 1) == 0)))))))) &&
                ((puVar3 = puVar2,
                 FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111803e0),
                 ((ulong)puVar3 & 1) == 0 &&
                 (puVar3 = puVar2,
                 FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111803f8),
                 ((ulong)puVar3 & 1) == 0)))) &&
               (puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180410),
               ((ulong)puVar3 & 1) == 0)) &&
              ((((puVar3 = puVar2,
                 FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180428),
                 ((ulong)puVar3 & 1) == 0 &&
                 (puVar3 = puVar2,
                 FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180440),
                 ((ulong)puVar3 & 1) == 0)) &&
                ((puVar3 = puVar2,
                 FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180458),
                 ((ulong)puVar3 & 1) == 0 &&
                 (((puVar3 = puVar2,
                   FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180470),
                   ((ulong)puVar3 & 1) == 0 &&
                   (puVar3 = puVar2,
                   FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180488),
                   ((ulong)puVar3 & 1) == 0)) &&
                  (puVar3 = puVar2,
                  FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111804a0),
                  ((ulong)puVar3 & 1) == 0)))))) &&
               ((puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111804b8)
                , ((ulong)puVar3 & 1) == 0 &&
                (puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111804d0)
                , ((ulong)puVar3 & 1) == 0)))))) &&
             ((puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111804e8),
              ((ulong)puVar3 & 1) == 0 &&
              (((puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180500)
                , ((ulong)puVar3 & 1) == 0 &&
                (puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180518)
                , ((ulong)puVar3 & 1) == 0)) &&
               ((puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180530)
                , ((ulong)puVar3 & 1) == 0 &&
                ((((puVar3 = puVar2,
                   FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180548),
                   ((ulong)puVar3 & 1) == 0 &&
                   (puVar3 = puVar2,
                   FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180560),
                   ((ulong)puVar3 & 1) == 0)) &&
                  (puVar3 = puVar2,
                  FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180578),
                  ((ulong)puVar3 & 1) == 0)) &&
                 ((puVar3 = puVar2,
                  FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180590),
                  ((ulong)puVar3 & 1) == 0 &&
                  (puVar3 = puVar2,
                  FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111805a8),
                  ((ulong)puVar3 & 1) == 0)))))))))))) &&
            ((puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111805c0),
             ((ulong)puVar3 & 1) == 0 &&
             (((puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111805d8),
               ((ulong)puVar3 & 1) == 0 &&
               (puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111805f0),
               ((ulong)puVar3 & 1) == 0)) &&
              (((puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180608)
                , ((ulong)puVar3 & 1) == 0 &&
                (((puVar3 = puVar2,
                  FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180620),
                  ((ulong)puVar3 & 1) == 0 &&
                  (puVar3 = puVar2,
                  FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180638),
                  ((ulong)puVar3 & 1) == 0)) &&
                 (puVar3 = puVar2,
                 FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180650),
                 ((ulong)puVar3 & 1) == 0)))) &&
               (((puVar3 = puVar2,
                 FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180668),
                 ((ulong)puVar3 & 1) == 0 &&
                 (puVar3 = puVar2,
                 FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180680),
                 ((ulong)puVar3 & 1) == 0)) &&
                (puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180698)
                , ((ulong)puVar3 & 1) == 0)))))))))) &&
           (((puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111806b0),
             ((ulong)puVar3 & 1) == 0 &&
             (puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111806c8),
             ((ulong)puVar3 & 1) == 0)) &&
            (((puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111806e0),
              ((ulong)puVar3 & 1) == 0 &&
              (((puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111806f8)
                , ((ulong)puVar3 & 1) == 0 &&
                (puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180710)
                , ((ulong)puVar3 & 1) == 0)) &&
               (puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180728),
               ((ulong)puVar3 & 1) == 0)))) &&
             (((puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180740),
               ((ulong)puVar3 & 1) == 0 &&
               (puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180758),
               ((ulong)puVar3 & 1) == 0)) &&
              ((puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180770),
               ((ulong)puVar3 & 1) == 0 &&
               (((puVar3 = puVar2,
                 FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_111180788),
                 ((ulong)puVar3 & 1) == 0 &&
                 (puVar3 = puVar2,
                 FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111807a0),
                 ((ulong)puVar3 & 1) == 0)) &&
                (puVar3 = puVar2, FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111807b8)
                , ((ulong)puVar3 & 1) == 0)))))))))))) {
          puVar3 = puVar2;
          FUN_1061e8974(puVar2,&PTR__OBJC_CLASS___NSConstantArray_1111807d0);
          uVar1 = (uint)puVar3;
        }
      }
    }
  }
  else {
    puVar2 = param_1;
    func_0x00010c0f3c40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
LAB_1061e83c0:
    uVar1 = (uint)puVar3;
    FUN_1061e82f0();
  }
  _objc_release(puVar2);
LAB_1061e83d4:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar1 & 1;
  }
  ___stack_chk_fail();
  func_0x00010bf2b580();
  uVar1 = 1;
  if (((undefined *)0xc < param_1) || ((1L << ((ulong)param_1 & 0x3f) & 0x11f4U) == 0)) {
    uVar1 = (uint)(param_1 == (undefined *)0x4b);
  }
  return uVar1;
}



/* Entry: 1061e8934; end: 1061e8973;  */

bool FUN_1061e8934(ulong param_1)

{
  bool bVar1;
  
  func_0x00010bf2b580();
  bVar1 = true;
  if ((0xc < param_1) || ((1L << (param_1 & 0x3f) & 0x11f4U) == 0)) {
    bVar1 = param_1 == 0x4b;
  }
  return bVar1;
}



/* Entry: 1061e8974; end: 1061e8a3b;  */

bool FUN_1061e8974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain(param_2);
  func_0x00010c0b8600(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0ce860(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf529e0(puVar1);
  _objc_release(puVar1);
  return puVar2 == (undefined *)0x0;
}



/* Entry: 1061e8a3c; end: 1061e8b87;  */

void FUN_1061e8a3c(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR__OBJC_CLASS___CASpringAnimation_1126b5720;
  _objc_retain(param_2);
  func_0x00010bf04040(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0;
  if (param_1 == 0) {
    uVar1 = 0x40490fdb;
  }
  uVar2 = 0x40490fdb;
  if (param_1 == 0) {
    uVar2 = 0x80000000;
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(uVar1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(uVar2,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar3);
  _objc_release(puVar4);
  func_0x00010c1c2d40(0x3fd999999999999a,puVar3);
  func_0x00010c1893a0(0x4034000000000000,puVar3);
  func_0x00010c20be40(0x406e000000000000,puVar3);
  func_0x00010c192d40(0x3fdccccccccccccd,puVar3);
  func_0x00010c19bc40(puVar3);
  func_0x00010c1ea580(puVar3);
  func_0x00010bef6c20(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1061e8b88; end: 1061e8bb7;  */

void FUN_1061e8b88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf2b580(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_2);
  return;
}



/* Entry: 1061e8bb8; end: 1061e8bcf;  */

void FUN_1061e8bb8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e44bb8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e44bb8,
                      &PTR____CFConstantStringClassReference_110e44bf8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1061e8bd0; end: 1061e8d1b; -[SCVerticalSwipeHintArrowView initWithDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1061e8bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_80 [48];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f04c0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_112742bf0;
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar5 = (long)_DAT_112742bf4;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742bf8);
    *(undefined **)((long)puVar1 + (long)_DAT_112742bf8) = puVar2;
    _objc_release(uVar4);
    func_0x00010c17d4c0(puVar1);
    if (*(long *)((long)puVar1 + lVar6) == 0) {
      _CGAffineTransformMakeScale(auStack_80,0x3ff0000000000000,0xbff0000000000000);
      func_0x00010c219960(*(undefined8 *)((long)puVar1 + lVar5));
    }
  }
  return puVar1;
}



/* Entry: 1061e8d1c; end: 1061e8d43; -[SCVerticalSwipeHintArrowView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1061e8d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined1 auVar1 [16];
  
  func_0x00010bf20c00(*(undefined8 *)(param_5 + _DAT_112742bf4));
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 1061e8d44; end: 1061e8d8f; -[SCVerticalSwipeHintArrowView sizeToFit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e8d44(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bfb68e0();
  func_0x00010bf20c00(*(undefined8 *)(param_3 + _DAT_112742bf4));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,param_3,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 1061e8d90; end: 1061e8dc3; -[SCVerticalSwipeHintArrowView _addArrowAnimation] */

/* WARNING: Possible PIC construction at 0x0001061e8da8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001061e8dac) */

void FUN_1061e8d90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc5e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fc999999999999a,param_1,PTR_s__addArrowAnimationWithDelay__11254f130);
  return;
}



/* Entry: 1061e8dc4; end: 1061e8f77; -[SCVerticalSwipeHintArrowView _addArrowAnimationWithDelay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e8dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  double dStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  lVar4 = (long)_DAT_112742bf4;
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010bfe6ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar2,param_6,uVar3);
  _objc_release(uVar3);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  func_0x00010c19f0e0(puVar2);
  if (*(long *)(param_5 + lVar4) == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_a0);
  }
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uVar3 = uStack_80;
  func_0x00010c219960(puVar2,param_6,&uStack_d0);
  uStack_f0 = 0x4034000000000000;
  dVar5 = -20.0;
  dVar6 = -20.0;
  if (*(long *)(param_5 + _DAT_112742bf0) != 0) {
    dVar6 = 20.0;
  }
  func_0x00010bfb68e0(puVar2);
  func_0x00010c066fa0(param_5,param_6,puVar2,0);
  func_0x00010befa120(*(undefined8 *)(param_5 + _DAT_112742bf8),param_6,puVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_1061e8f78;
  puStack_100 = &UNK_110870f70;
  puStack_f8 = puVar2;
  dStack_e8 = dVar6 + dVar5;
  uStack_e0 = uVar3;
  uStack_d8 = param_4;
  _objc_retain(puVar2);
  func_0x00010bf03440(0x3fe999999999999a,param_1,puVar1,param_6,10,&puStack_118,0);
  _objc_release(puStack_f8);
  _objc_release(puVar2);
  return;
}



/* Entry: 1061e8f78; end: 1061e8fab;  */

void FUN_1061e8f78(long param_1)

{
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x20),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 1061e8fac; end: 1061e906f; -[SCVerticalSwipeHintArrowView setAnimating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e8fac(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c06c0e0();
  if (param_3 == (int)lVar2) {
    return;
  }
  *(char *)(param_1 + _DAT_112742bfc) = (char)param_3;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc5e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addArrowAnimation_11254f128);
    return;
  }
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c25ec40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7520();
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar2 = (long)_DAT_112742bf8;
  func_0x00010c0b7520(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 1061e9070; end: 1061e907f; -[SCVerticalSwipeHintArrowView isAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061e9070(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112742bfc);
}



/* Entry: 1061e9080; end: 1061e90bf; -[SCVerticalSwipeHintArrowView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e9080(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742bf8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742bf4,0);
  return;
}



/* Entry: 1061e90c0; end: 1061e916b; -[SCVerticalSwipeHintView initWithDirection:arrowVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1061e90c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f04c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112742c00) = param_3;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112742c04) = param_4;
    func_0x00010c17d4c0(puVar1);
    func_0x00010be3bc80(puVar1);
    func_0x00010c1af000(puVar1);
    func_0x00010c1a7f60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1061e916c; end: 1061e91d3; -[SCVerticalSwipeHintView intrinsicContentSize] */

undefined1  [16]
FUN_1061e916c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c23d5a0(param_3,param_4,param_5);
  _objc_release(puVar1);
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 1061e91d4; end: 1061e92a7; -[SCVerticalSwipeHintView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e91d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c23d5a0(*(undefined8 *)(param_3 + _DAT_112742c08));
  func_0x00010c23d5a0(param_1,param_2,*(undefined8 *)(param_3 + _DAT_112742c0c));
  if (*(char *)(param_3 + _DAT_112742c04) == '\x01') {
    func_0x00010c23d5a0(param_1,param_2,*(undefined8 *)(param_3 + _DAT_112742c10));
  }
  return;
}



/* Entry: 1061e92a8; end: 1061e930f; -[SCVerticalSwipeHintView sizeToFit] */

void FUN_1061e92a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010bfb68e0();
  func_0x00010bfb68e0(param_4);
  uVar1 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(param_3,0x7fefffffffffffff,param_4);
  func_0x00010c19f0e0(param_1,param_2,param_3,uVar1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1061e9310; end: 1061e9567; -[SCVerticalSwipeHintView layoutSubviews] */

/* WARNING: Possible PIC construction at 0x0001061e93f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001061e942c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001061e947c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001061e94b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001061e9480) */
/* WARNING: Removing unreachable block (ram,0x0001061e9430) */
/* WARNING: Removing unreachable block (ram,0x0001061e93f8) */
/* WARNING: Removing unreachable block (ram,0x0001061e94bc) */
/* WARNING: Removing unreachable block (ram,0x0001061e94d0) */
/* WARNING: Removing unreachable block (ram,0x0001061e9514) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e9310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  lVar3 = (long)_DAT_112742c08;
  uVar4 = 0x7fefffffffffffff;
  uVar2 = param_1;
  func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar3));
  func_0x00010c23d5a0(param_1,0x7fefffffffffffff,*(undefined8 *)(param_5 + _DAT_112742c0c));
  puVar1 = (undefined8 *)(param_5 + _DAT_112742c10);
  func_0x00010c23d620(*puVar1);
  if (*(long *)(param_5 + _DAT_112742c00) == 1) {
    func_0x00010be6e600(uVar2,uVar4,param_5);
    uVar2 = *(undefined8 *)(param_5 + lVar3);
  }
  else {
    if (*(long *)(param_5 + _DAT_112742c00) != 0) {
      return;
    }
    if (*(char *)(param_5 + _DAT_112742c04) == '\x01') {
      func_0x00010bfb68e0(*puVar1);
      func_0x00010be6e600(param_3,param_4,param_5);
      func_0x00010bfb68e0(*puVar1);
      uVar2 = *puVar1;
    }
    else {
      func_0x00010be6e600(uVar2,uVar4,param_5);
      uVar2 = *(undefined8 *)(param_5 + lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 1061e9568; end: 1061e982b; -[SCVerticalSwipeHintView _initializeSubviews] */

/* WARNING: Possible PIC construction at 0x0001061e96b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001061e97c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001061e96b8) */
/* WARNING: Removing unreachable block (ram,0x0001061e97c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e9568(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar3 = (long)_DAT_112742c08;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3f000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x4000000000000000);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar5 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(uVar4,uVar5);
  _objc_release(uVar2);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 1061e982c; end: 1061e9857; -[SCVerticalSwipeHintView _originXForViewWithSize:] */

double FUN_1061e982c(double param_1,undefined8 param_2,double param_3)

{
  func_0x00010bf20c00();
  return (param_3 - param_1) * 0.5;
}



/* Entry: 1061e9858; end: 1061e9997; -[SCVerticalSwipeHintView _animateWithDuration:options:overlap:animations:completion:] */

void FUN_1061e9858(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  double dStack_70;
  double dStack_68;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar3 = param_6;
  func_0x00010bf529e0();
  if (uVar3 != 0) {
    uVar3 = param_6;
    func_0x00010bf529e0();
    uVar4 = param_6;
    func_0x00010bf529e0();
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1061e9998;
    puStack_80 = &UNK_110858dc0;
    _objc_retain(param_6);
    puStack_c0 = puVar1;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x1061e9a1c;
    puStack_a8 = &UNK_110842508;
    uStack_78 = param_6;
    dStack_70 = 1.0 / ((double)uVar3 - (double)(uVar4 - 1) * param_2);
    dStack_68 = param_2;
    _objc_retain(param_7);
    uStack_a0 = param_7;
    func_0x00010bf02ee0(param_1,0,puVar2,param_4,param_5,&puStack_98,&puStack_c0);
    _objc_release(uStack_a0);
    _objc_release(uStack_78);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 1061e9998; end: 1061e99f3;  */

void FUN_1061e9998(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc0000000;
  pcStack_30 = FUN_1061e99f4;
  puStack_28 = &UNK_110915348;
  uStack_18 = *(undefined8 *)(param_1 + 0x30);
  uStack_20 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf97e80(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_40);
  return;
}



/* Entry: 1061e99f4; end: 1061e9a2f;  */

void FUN_1061e99f4(long param_1,undefined8 param_2,ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef95b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(double *)(param_1 + 0x20) * (double)param_3 * (1.0 - *(double *)(param_1 + 0x28)),
             PTR__OBJC_CLASS___UIView_1126aec20,PTR_s_addKeyframeWithRelativeStartTime_11259bf10,
             param_2);
  return;
}



/* Entry: 1061e9a30; end: 1061e9a87; -[SCVerticalSwipeHintView _makeTransformOffsetForView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e9a30(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  double dVar1;
  
  _objc_retain(param_7);
  func_0x00010bfb68e0(param_7);
  dVar1 = -param_4;
  if (*(long *)(param_5 + _DAT_112742c00) != 1) {
    dVar1 = param_4;
  }
  func_0x00010c19f0e0(param_1,param_2 + dVar1,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1061e9a88; end: 1061e9dbf; -[SCVerticalSwipeHintView presentAnimated:completion:] */

/* WARNING: Possible PIC construction at 0x0001061e9b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001061e9b44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001061e9c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001061e9c70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001061e9c54) */
/* WARNING: Removing unreachable block (ram,0x0001061e9b48) */
/* WARNING: Removing unreachable block (ram,0x0001061e9c88) */
/* WARNING: Removing unreachable block (ram,0x0001061e9c40) */
/* WARNING: Removing unreachable block (ram,0x0001061e9cf8) */
/* WARNING: Removing unreachable block (ram,0x0001061e9c44) */
/* WARNING: Removing unreachable block (ram,0x0001061e9c8c) */
/* WARNING: Removing unreachable block (ram,0x0001061e9cfc) */
/* WARNING: Removing unreachable block (ram,0x0001061e9b24) */
/* WARNING: Removing unreachable block (ram,0x0001061e9c74) */
/* WARNING: Removing unreachable block (ram,0x0001061e9c78) */
/* WARNING: Removing unreachable block (ram,0x0001061e9d6c) */
/* WARNING: Removing unreachable block (ram,0x0001061e9dbc) */
/* WARNING: Removing unreachable block (ram,0x0001061e9de0) */
/* WARNING: Removing unreachable block (ram,0x0001061e9de4) */
/* WARNING: Removing unreachable block (ram,0x0001061e9d8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e9a88(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c1cbe20(param_1);
  func_0x00010c08cdc0(param_1);
  func_0x00010c1a7f60(param_1);
  func_0x00010c167fc0(*(undefined8 *)(param_1 + _DAT_112742c10));
  if ((param_3 & 1) == 0) {
    uVar1 = 0x3ff0000000000000;
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + _DAT_112742c08),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1061e9dc0; end: 1061e9def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e9dc0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (*(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_112742c04) == '\0') {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112742c10),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1061e9df0; end: 1061e9e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e9df0(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112742c08;
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1061e9e78; end: 1061e9e8b;  */

void FUN_1061e9e78(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001061e9e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1061e9e8c; end: 1061ea11b; -[SCVerticalSwipeHintView dismissAnimated:completion:] */

/* WARNING: Possible PIC construction at 0x0001061e9fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001061e9fd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001061e9fb8) */
/* WARNING: Removing unreachable block (ram,0x0001061e9fd4) */
/* WARNING: Removing unreachable block (ram,0x0001061e9fd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e9e8c(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c08cdc0(param_1);
  func_0x00010c167fc0(*(undefined8 *)(param_1 + _DAT_112742c10));
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  if ((param_3 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + _DAT_112742c08);
    goto code_r0x00010c1677c0;
  }
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1061ea11c;
  puStack_c0 = &UNK_110842e18;
  ppuVar2 = &puStack_d8;
  lStack_b8 = param_1;
  _objc_retainBlock();
  puStack_100 = puVar9;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1061ea134;
  puStack_e8 = &UNK_110842e18;
  ppuVar3 = &puStack_100;
  lStack_e0 = param_1;
  _objc_retainBlock();
  puStack_128 = puVar9;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x1061ea178;
  puStack_110 = &UNK_110842e18;
  ppuVar4 = &puStack_128;
  lStack_108 = param_1;
  _objc_retainBlock();
  if (*(long *)(param_1 + _DAT_112742c00) == 1) {
    lVar1 = -0x88;
    ppuVar5 = ppuVar3;
    ppuVar6 = ppuVar4;
LAB_1061e9ff4:
    _objc_retainBlock();
    *(undefined ***)(&stack0xfffffffffffffff0 + lVar1) = ppuVar5;
    _objc_retainBlock();
    *(undefined ***)(&stack0xfffffffffffffff8 + lVar1) = ppuVar6;
    ppuVar7 = ppuVar2;
    _objc_retainBlock();
    *(undefined ***)(&stack0x00000000 + lVar1) = ppuVar7;
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
  }
  else {
    if (*(long *)(param_1 + _DAT_112742c00) == 0) {
      lVar1 = -0xa0;
      ppuVar5 = ppuVar4;
      ppuVar6 = ppuVar3;
      goto LAB_1061e9ff4;
    }
    puVar9 = (undefined *)0x0;
  }
  _objc_retain(param_4);
  func_0x00010bdcb440(0x3fd999999999999a,0x3fd999999999999a,param_1);
  _objc_release(param_4);
  _objc_release(puVar9);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(*(long *)(param_4 + 0x20) + (long)_DAT_112742c10);
code_r0x00010c1677c0:
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,uVar8,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1061ea11c; end: 1061ea133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ea11c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112742c10),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1061ea134; end: 1061ea1f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ea134(long param_1,undefined8 param_2)

{
  func_0x00010be5c520(*(long *)(param_1 + 0x20),param_2,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112742c0c));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112742c08),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1061ea1f8; end: 1061ea22f; -[SCVerticalSwipeHintView setTitleText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ea1f8(long param_1)

{
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112742c08));
  func_0x00010c069fa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1061ea230; end: 1061ea267; -[SCVerticalSwipeHintView setTitleAttributedText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ea230(long param_1)

{
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_112742c08));
  func_0x00010c069fa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1061ea268; end: 1061ea29f; -[SCVerticalSwipeHintView setSubtitleText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ea268(long param_1)

{
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112742c0c));
  func_0x00010c069fa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1061ea2a0; end: 1061ea2d7; -[SCVerticalSwipeHintView setSubtitleAttributedText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ea2a0(long param_1)

{
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_112742c0c));
  func_0x00010c069fa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}


