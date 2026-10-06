/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6d39e4; end: 10b6d3cab; -[SCGalleryEntryChangeRequest replaceEntryAssetsAtIndexes:withEntryAssets:] */

void FUN_10b6d39e4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *unaff_x25;
  ulong uVar15;
  undefined *unaff_x26;
  undefined *puVar16;
  undefined *unaff_x27;
  undefined *puVar17;
  long unaff_x28;
  undefined1 auStack_390 [128];
  long lStack_310;
  long lStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  long lStack_298;
  long lStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1c0;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
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
  lStack_150 = param_1;
  lStack_148 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
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
  _objc_retain(param_4);
  lStack_140 = param_4;
  func_0x00010bf52a60();
  if (param_4 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lStack_140);
        }
        unaff_x26 = *(undefined **)(lStack_128 + lVar12 * 8);
        puVar3 = PTR_PTR_1126e0520;
        _objc_opt_class(PTR_PTR_1126e0520);
        puVar10 = unaff_x26;
        _objc_opt_isKindOfClass(unaff_x26,puVar3);
        puVar3 = PTR_DAT_1126a5c78;
        unaff_x25 = unaff_x26;
        if (((ulong)puVar10 & 1) == 0) {
          _objc_retain(unaff_x26);
          puVar10 = unaff_x26;
          func_0x000107c318f8(unaff_x26,puVar3);
          if ((int)puVar10 == 0) {
            unaff_x25 = (undefined *)0x0;
          }
          _objc_retain(unaff_x25);
          _objc_release(unaff_x26);
          unaff_x26 = PTR_PTR_1126e0498;
          puVar3 = unaff_x25;
          func_0x00010c0e0160(unaff_x25);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          if (unaff_x26 == (undefined *)0x0) {
            unaff_x28 = 0;
            unaff_x27 = (undefined *)0x0;
          }
          else {
            lStack_138 = 0;
            unaff_x27 = puVar1;
            func_0x00010bf9b3a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = lStack_138;
            _objc_retain(lStack_138);
            if (unaff_x27 != (undefined *)0x0 && unaff_x28 == 0) {
              func_0x00010befa120(puVar2);
              unaff_x28 = 0;
            }
          }
          _objc_release(unaff_x27);
          _objc_release(unaff_x28);
          _objc_release(unaff_x26);
        }
        else {
          func_0x00010c0b7f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
        }
        _objc_release(unaff_x25);
        lVar12 = lVar12 + 1;
      } while (param_4 != lVar12);
      param_4 = lStack_140;
      func_0x00010bf52a60();
    } while (param_4 != 0);
  }
  lVar13 = lStack_140;
  _objc_release(lStack_140);
  uVar14 = *(undefined8 *)(lStack_150 + 8);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  lVar12 = lStack_148;
  lVar9 = lStack_148;
  func_0x00010c130e00(uVar14);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar13);
  lVar4 = lVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_170 = lVar13;
  lStack_168 = lVar12;
  pcStack_158 = FUN_10b6d3cac;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_298 = lVar4;
  lStack_1b0 = unaff_x28;
  puStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = puVar3;
  puStack_188 = puVar2;
  uStack_180 = uVar14;
  puStack_178 = puVar1;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(lVar9);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  _objc_retain(lVar9);
  lVar12 = lVar9;
  lStack_290 = lVar9;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar13 = *plStack_270;
    do {
      lVar9 = 0;
      do {
        if (*plStack_270 != lVar13) {
          _objc_enumerationMutation(lStack_290);
        }
        unaff_x25 = *(undefined **)(lStack_278 + lVar9 * 8);
        puVar3 = PTR_PTR_1126e0520;
        _objc_opt_class(PTR_PTR_1126e0520);
        puVar5 = unaff_x25;
        _objc_opt_isKindOfClass(unaff_x25,puVar3);
        puVar10 = PTR_DAT_1126a5228;
        puVar3 = unaff_x25;
        if (((ulong)puVar5 & 1) == 0) {
          _objc_retain(unaff_x25);
          puVar5 = unaff_x25;
          func_0x000107c318f8(unaff_x25,puVar10);
          if ((int)puVar5 == 0) {
            puVar3 = (undefined *)0x0;
          }
          _objc_retain(puVar3);
          _objc_release(unaff_x25);
          unaff_x25 = PTR_PTR_1126e0498;
          puVar10 = puVar3;
          func_0x00010c0e0160(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          if (unaff_x25 == (undefined *)0x0) {
            unaff_x27 = (undefined *)0x0;
            unaff_x26 = (undefined *)0x0;
          }
          else {
            puStack_288 = (undefined *)0x0;
            unaff_x26 = puVar1;
            func_0x00010bf9b3a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = puStack_288;
            _objc_retain(puStack_288);
            if (unaff_x26 != (undefined *)0x0 && unaff_x27 == (undefined *)0x0) {
              func_0x00010befa120(puVar2);
              unaff_x27 = (undefined *)0x0;
            }
          }
          _objc_release(unaff_x26);
          _objc_release(unaff_x27);
          _objc_release(unaff_x25);
        }
        else {
          func_0x00010c0b7f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
        }
        _objc_release(puVar3);
        lVar9 = lVar9 + 1;
      } while (lVar12 != lVar9);
      lVar12 = lStack_290;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  lVar12 = lStack_290;
  _objc_release(lStack_290);
  uVar14 = *(undefined8 *)(lStack_298 + 8);
  puVar10 = puVar2;
  func_0x00010bf51e00();
  puVar5 = puVar10;
  func_0x00010bef9160(uVar14);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar13 = lVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  lStack_300 = lVar12;
  pcStack_2a8 = FUN_10b6d3f58;
  lStack_310 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2f8 = unaff_x27;
  puStack_2f0 = unaff_x26;
  puStack_2e8 = unaff_x25;
  puStack_2e0 = puVar3;
  puStack_2d8 = puVar10;
  puStack_2d0 = puVar2;
  uStack_2c8 = uVar14;
  puStack_2c0 = puVar1;
  lStack_2b8 = lVar9;
  ppuStack_2b0 = &puStack_160;
  _objc_retain(puVar5);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  puVar8 = auStack_390;
  puVar1 = puVar5;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(puVar5);
      }
      uVar15 = *(ulong *)((long)puVar10 * 8);
      puVar11 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar15;
      _objc_opt_isKindOfClass(uVar15,puVar11);
      puVar11 = PTR_DAT_1126a5228;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar15);
        uVar7 = uVar15;
        func_0x000107c318f8(uVar15,puVar11);
        uVar6 = uVar15;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar15);
        puVar11 = PTR_PTR_1126e0498;
        uVar15 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        if (puVar11 == (undefined *)0x0) {
          puVar16 = (undefined *)0x0;
        }
        else {
          puVar16 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar16 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar16);
        _objc_release(0);
        _objc_release(puVar11);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar6 = uVar15;
      }
      _objc_release(uVar6);
      puVar10 = puVar10 + 1;
    } while (puVar1 != puVar10);
    puVar8 = auStack_390;
    puVar1 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  uVar14 = *(undefined8 *)(lVar13 + 8);
  puVar1 = puVar3;
  func_0x00010bf51e00();
  puVar10 = puVar1;
  func_0x00010c12caa0(uVar14);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_310) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar10);
  _objc_retain(puVar8);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar10);
  puVar1 = puVar10;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(puVar10);
      }
      uVar15 = *(ulong *)((long)puVar11 * 8);
      puVar16 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar15;
      _objc_opt_isKindOfClass(uVar15,puVar16);
      puVar16 = PTR_DAT_1126a5228;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar15);
        uVar7 = uVar15;
        func_0x000107c318f8(uVar15,puVar16);
        uVar6 = uVar15;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar15);
        puVar16 = PTR_PTR_1126e0498;
        uVar15 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        if (puVar16 == (undefined *)0x0) {
          puVar17 = (undefined *)0x0;
        }
        else {
          puVar17 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar17 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar17);
        _objc_release(0);
        _objc_release(puVar16);
      }
      else {
        func_0x00010c0b7f60(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar6 = uVar15;
      }
      _objc_release(uVar6);
      puVar11 = puVar11 + 1;
    } while (puVar1 != puVar11);
    puVar1 = puVar10;
    func_0x00010bf52a60();
  }
  _objc_release(puVar10);
  uVar14 = *(undefined8 *)(puVar5 + 8);
  puVar1 = puVar3;
  func_0x00010bf51e00(puVar3);
  puVar5 = puVar1;
  func_0x00010c066880(uVar14);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(puVar5);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cac0(*(undefined8 *)(puVar10 + 8));
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d3cac; end: 10b6d3f57; -[SCGalleryEntryChangeRequest addHighlightedSnaps:] */

void FUN_10b6d3cac(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *unaff_x24;
  undefined *unaff_x25;
  ulong uVar13;
  undefined *unaff_x26;
  undefined *puVar14;
  long unaff_x27;
  undefined *puVar15;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  long lStack_140;
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
  lStack_148 = param_1;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  lStack_140 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = *plStack_120;
    do {
      param_3 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lStack_140);
        }
        unaff_x25 = *(undefined **)(lStack_128 + param_3 * 8);
        puVar4 = PTR_PTR_1126e0520;
        _objc_opt_class(PTR_PTR_1126e0520);
        puVar5 = unaff_x25;
        _objc_opt_isKindOfClass(unaff_x25,puVar4);
        puVar4 = PTR_DAT_1126a5228;
        unaff_x24 = unaff_x25;
        if (((ulong)puVar5 & 1) == 0) {
          _objc_retain(unaff_x25);
          puVar5 = unaff_x25;
          func_0x000107c318f8(unaff_x25,puVar4);
          if ((int)puVar5 == 0) {
            unaff_x24 = (undefined *)0x0;
          }
          _objc_retain(unaff_x24);
          _objc_release(unaff_x25);
          unaff_x25 = PTR_PTR_1126e0498;
          puVar4 = unaff_x24;
          func_0x00010c0e0160(unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          if (unaff_x25 == (undefined *)0x0) {
            unaff_x27 = 0;
            unaff_x26 = (undefined *)0x0;
          }
          else {
            lStack_138 = 0;
            unaff_x26 = puVar1;
            func_0x00010bf9b3a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = lStack_138;
            _objc_retain(lStack_138);
            if (unaff_x26 != (undefined *)0x0 && unaff_x27 == 0) {
              func_0x00010befa120(puVar2);
              unaff_x27 = 0;
            }
          }
          _objc_release(unaff_x26);
          _objc_release(unaff_x27);
          _objc_release(unaff_x25);
        }
        else {
          func_0x00010c0b7f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
        }
        _objc_release(unaff_x24);
        param_3 = param_3 + 1;
      } while (lVar3 != param_3);
      lVar3 = lStack_140;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  lVar3 = lStack_140;
  _objc_release(lStack_140);
  uVar12 = *(undefined8 *)(lStack_148 + 8);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  puVar5 = puVar4;
  func_0x00010bef9160(uVar12);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar11 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_1b0 = lVar3;
  pcStack_158 = FUN_10b6d3f58;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  puStack_188 = puVar4;
  puStack_180 = puVar2;
  uStack_178 = uVar12;
  puStack_170 = puVar1;
  lStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  puVar8 = auStack_240;
  puVar1 = puVar5;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar5);
      }
      uVar13 = *(ulong *)((long)puVar9 * 8);
      puVar10 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar10);
      puVar10 = PTR_DAT_1126a5228;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar13);
        uVar7 = uVar13;
        func_0x000107c318f8(uVar13,puVar10);
        uVar6 = uVar13;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar13);
        puVar10 = PTR_PTR_1126e0498;
        uVar13 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar10 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar14 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
          }
        }
        _objc_release(puVar14);
        _objc_release(0);
        _objc_release(puVar10);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        uVar6 = uVar13;
      }
      _objc_release(uVar6);
      puVar9 = puVar9 + 1;
    } while (puVar1 != puVar9);
    puVar8 = auStack_240;
    puVar1 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  uVar12 = *(undefined8 *)(lVar11 + 8);
  puVar1 = puVar4;
  func_0x00010bf51e00();
  puVar9 = puVar1;
  func_0x00010c12caa0(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar9);
  _objc_retain(puVar8);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar9);
  puVar1 = puVar9;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar9);
      }
      uVar13 = *(ulong *)((long)puVar10 * 8);
      puVar14 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar14);
      puVar14 = PTR_DAT_1126a5228;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar13);
        uVar7 = uVar13;
        func_0x000107c318f8(uVar13,puVar14);
        uVar6 = uVar13;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar13);
        puVar14 = PTR_PTR_1126e0498;
        uVar13 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar14 == (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar15 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
          }
        }
        _objc_release(puVar15);
        _objc_release(0);
        _objc_release(puVar14);
      }
      else {
        func_0x00010c0b7f60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        uVar6 = uVar13;
      }
      _objc_release(uVar6);
      puVar10 = puVar10 + 1;
    } while (puVar1 != puVar10);
    puVar1 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  uVar12 = *(undefined8 *)(puVar5 + 8);
  puVar1 = puVar4;
  func_0x00010bf51e00(puVar4);
  puVar5 = puVar1;
  func_0x00010c066880(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(puVar5);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cac0(*(undefined8 *)(puVar9 + 8));
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d3f58; end: 10b6d4203; -[SCGalleryEntryChangeRequest removeHighlightedSnaps:] */

void FUN_10b6d3f58(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar8 = auStack_f0;
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(param_3);
      }
      uVar13 = *(ulong *)(lVar10 * 8);
      puVar4 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar5 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar4);
      puVar4 = PTR_DAT_1126a5228;
      if ((uVar5 & 1) == 0) {
        _objc_retain(uVar13);
        uVar6 = uVar13;
        func_0x000107c318f8(uVar13,puVar4);
        uVar5 = uVar13;
        if ((int)uVar6 == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar13);
        puVar4 = PTR_PTR_1126e0498;
        uVar13 = uVar5;
        func_0x00010c0e0160(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar4 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = puVar1;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar14 != (undefined *)0x0) {
            func_0x00010befa120(puVar2);
          }
        }
        _objc_release(puVar14);
        _objc_release(0);
        _objc_release(puVar4);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        uVar5 = uVar13;
      }
      _objc_release(uVar5);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    puVar8 = auStack_f0;
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar12 = *(undefined8 *)(param_1 + 8);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  puVar14 = puVar4;
  func_0x00010c12caa0(uVar12);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar14);
  _objc_retain(puVar8);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar14);
  puVar1 = puVar14;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar14);
      }
      uVar13 = *(ulong *)((long)puVar11 * 8);
      puVar7 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar5 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar7);
      puVar7 = PTR_DAT_1126a5228;
      if ((uVar5 & 1) == 0) {
        _objc_retain(uVar13);
        uVar6 = uVar13;
        func_0x000107c318f8(uVar13,puVar7);
        uVar5 = uVar13;
        if ((int)uVar6 == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar13);
        puVar7 = PTR_PTR_1126e0498;
        uVar13 = uVar5;
        func_0x00010c0e0160(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar7 == (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar15 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
          }
        }
        _objc_release(puVar15);
        _objc_release(0);
        _objc_release(puVar7);
      }
      else {
        func_0x00010c0b7f60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        uVar5 = uVar13;
      }
      _objc_release(uVar5);
      puVar11 = puVar11 + 1;
    } while (puVar1 != puVar11);
    puVar1 = puVar14;
    func_0x00010bf52a60();
  }
  _objc_release(puVar14);
  uVar12 = *(undefined8 *)(param_3 + 8);
  puVar1 = puVar4;
  func_0x00010bf51e00(puVar4);
  puVar11 = puVar1;
  func_0x00010c066880(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(puVar11);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cac0(*(undefined8 *)(puVar14 + 8));
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d4204; end: 10b6d44cf; -[SCGalleryEntryChangeRequest insertHighlightedSnaps:atIndexes:] */

void FUN_10b6d4204(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar11 = *(ulong *)(lVar9 * 8);
      puVar5 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar11;
      _objc_opt_isKindOfClass(uVar11,puVar5);
      puVar5 = PTR_DAT_1126a5228;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar11);
        uVar7 = uVar11;
        func_0x000107c318f8(uVar11,puVar5);
        uVar6 = uVar11;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar11);
        puVar5 = PTR_PTR_1126e0498;
        uVar11 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        if (puVar5 == (undefined *)0x0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar12 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar12 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar12);
        _objc_release(0);
        _objc_release(puVar5);
      }
      else {
        func_0x00010c0b7f60(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar6 = uVar11;
      }
      _objc_release(uVar6);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar10 = *(undefined8 *)(param_1 + 8);
  puVar5 = puVar3;
  func_0x00010bf51e00(puVar3);
  puVar12 = puVar5;
  func_0x00010c066880(uVar10);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126e0498;
    _objc_retain(puVar12);
    func_0x00010bf5f5e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cac0(*(undefined8 *)(param_3 + 8));
    _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10b6d44d0; end: 10b6d4533; -[SCGalleryEntryChangeRequest removeHighlightedSnapsAtIndexes:] */

void FUN_10b6d44d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cac0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d4534; end: 10b6d47fb; -[SCGalleryEntryChangeRequest replaceHighlightedSnapsAtIndexes:withHighlightedSnaps:] */

void FUN_10b6d4534(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar11 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      uVar12 = *(ulong *)(lVar9 * 8);
      puVar4 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar5 = uVar12;
      _objc_opt_isKindOfClass(uVar12,puVar4);
      puVar4 = PTR_DAT_1126a5228;
      if ((uVar5 & 1) == 0) {
        _objc_retain(uVar12);
        uVar6 = uVar12;
        func_0x000107c318f8(uVar12,puVar4);
        uVar5 = uVar12;
        if ((int)uVar6 == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar12);
        puVar4 = PTR_PTR_1126e0498;
        uVar12 = uVar5;
        func_0x00010c0e0160(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        if (puVar4 == (undefined *)0x0) {
          puVar13 = (undefined *)0x0;
        }
        else {
          puVar13 = puVar11;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar13 != (undefined *)0x0) {
            func_0x00010befa120(puVar2);
          }
        }
        _objc_release(puVar13);
        _objc_release(0);
        _objc_release(puVar4);
      }
      else {
        func_0x00010c0b7f60(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        uVar5 = uVar12;
      }
      _objc_release(uVar5);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  uVar10 = *(undefined8 *)(param_1 + 8);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  puVar13 = param_3;
  func_0x00010c130e80(uVar10);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar11);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar13);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar4 = puVar13;
  _objc_opt_isKindOfClass(puVar13,puVar11);
  puVar11 = PTR_DAT_1126a5c70;
  if (((ulong)puVar4 & 1) == 0) {
    if (puVar13 == (undefined *)0x0) {
      func_0x00010c1d7bc0(*(undefined8 *)(param_3 + 8));
      goto LAB_10b6d4970;
    }
    _objc_retain(puVar13);
    puVar4 = puVar13;
    func_0x000107c318f8(puVar13,puVar11);
    puVar11 = puVar13;
    if ((int)puVar4 == 0) {
      puVar11 = (undefined *)0x0;
    }
    _objc_retain(puVar11);
    _objc_release(puVar13);
    puVar4 = PTR_PTR_1126e0498;
    puVar7 = puVar11;
    func_0x00010c0e0160(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar4 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = puVar2;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar11 != (undefined *)0x0) {
        func_0x00010c1d7bc0(*(undefined8 *)(param_3 + 8));
      }
    }
    _objc_release(puVar11);
    _objc_release(0);
  }
  else {
    puVar4 = puVar13;
    func_0x00010c0b7f60(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7bc0(*(undefined8 *)(param_3 + 8));
  }
  _objc_release(puVar4);
LAB_10b6d4970:
  _objc_release(puVar2);
  _objc_release(puVar13);
  return;
}



/* Entry: 10b6d47fc; end: 10b6d4997; -[SCGalleryEntryChangeRequest setOwner:] */

void FUN_10b6d47fc(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  puVar4 = PTR_DAT_1126a5c70;
  if (((ulong)puVar2 & 1) == 0) {
    if (param_3 == (undefined *)0x0) {
      func_0x00010c1d7bc0(*(undefined8 *)(param_1 + 8));
      goto LAB_10b6d4970;
    }
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x000107c318f8(param_3,puVar4);
    puVar4 = param_3;
    if ((int)puVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126e0498;
    puVar3 = puVar4;
    func_0x00010c0e0160(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar4 != (undefined *)0x0) {
        func_0x00010c1d7bc0(*(undefined8 *)(param_1 + 8));
      }
    }
    _objc_release(puVar4);
    _objc_release(0);
  }
  else {
    puVar2 = param_3;
    func_0x00010c0b7f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7bc0(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(puVar2);
LAB_10b6d4970:
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b6d4998; end: 10b6d4b33; -[SCGalleryEntryChangeRequest setOwnerDeleted:] */

void FUN_10b6d4998(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  puVar4 = PTR_DAT_1126a5c70;
  if (((ulong)puVar2 & 1) == 0) {
    if (param_3 == (undefined *)0x0) {
      func_0x00010c1d7be0(*(undefined8 *)(param_1 + 8));
      goto LAB_10b6d4b0c;
    }
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x000107c318f8(param_3,puVar4);
    puVar4 = param_3;
    if ((int)puVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126e0498;
    puVar3 = puVar4;
    func_0x00010c0e0160(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar4 != (undefined *)0x0) {
        func_0x00010c1d7be0(*(undefined8 *)(param_1 + 8));
      }
    }
    _objc_release(puVar4);
    _objc_release(0);
  }
  else {
    puVar2 = param_3;
    func_0x00010c0b7f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7be0(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(puVar2);
LAB_10b6d4b0c:
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b6d4b34; end: 10b6d4ccf; -[SCGalleryEntryChangeRequest setOwnerFailed:] */

void FUN_10b6d4b34(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  puVar4 = PTR_DAT_1126a5c70;
  if (((ulong)puVar2 & 1) == 0) {
    if (param_3 == (undefined *)0x0) {
      func_0x00010c1d7c00(*(undefined8 *)(param_1 + 8));
      goto LAB_10b6d4ca8;
    }
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x000107c318f8(param_3,puVar4);
    puVar4 = param_3;
    if ((int)puVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126e0498;
    puVar3 = puVar4;
    func_0x00010c0e0160(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar4 != (undefined *)0x0) {
        func_0x00010c1d7c00(*(undefined8 *)(param_1 + 8));
      }
    }
    _objc_release(puVar4);
    _objc_release(0);
  }
  else {
    puVar2 = param_3;
    func_0x00010c0b7f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7c00(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(puVar2);
LAB_10b6d4ca8:
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b6d4cd0; end: 10b6d4e6b; -[SCGalleryEntryChangeRequest setSnapDoc:] */

void FUN_10b6d4cd0(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  puVar4 = PTR_DAT_1126a5c80;
  if (((ulong)puVar2 & 1) == 0) {
    if (param_3 == (undefined *)0x0) {
      func_0x00010c203f00(*(undefined8 *)(param_1 + 8));
      goto LAB_10b6d4e44;
    }
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x000107c318f8(param_3,puVar4);
    puVar4 = param_3;
    if ((int)puVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126e0498;
    puVar3 = puVar4;
    func_0x00010c0e0160(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar4 != (undefined *)0x0) {
        func_0x00010c203f00(*(undefined8 *)(param_1 + 8));
      }
    }
    _objc_release(puVar4);
    _objc_release(0);
  }
  else {
    puVar2 = param_3;
    func_0x00010c0b7f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203f00(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(puVar2);
LAB_10b6d4e44:
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b6d4e6c; end: 10b6d5117; -[SCGalleryEntryChangeRequest addSnaps:] */

void FUN_10b6d4e6c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *unaff_x24;
  undefined *unaff_x25;
  ulong uVar13;
  undefined *unaff_x26;
  undefined *puVar14;
  long unaff_x27;
  undefined *puVar15;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  long lStack_140;
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
  lStack_148 = param_1;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  lStack_140 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = *plStack_120;
    do {
      param_3 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lStack_140);
        }
        unaff_x25 = *(undefined **)(lStack_128 + param_3 * 8);
        puVar4 = PTR_PTR_1126e0520;
        _objc_opt_class(PTR_PTR_1126e0520);
        puVar5 = unaff_x25;
        _objc_opt_isKindOfClass(unaff_x25,puVar4);
        puVar4 = PTR_DAT_1126a5228;
        unaff_x24 = unaff_x25;
        if (((ulong)puVar5 & 1) == 0) {
          _objc_retain(unaff_x25);
          puVar5 = unaff_x25;
          func_0x000107c318f8(unaff_x25,puVar4);
          if ((int)puVar5 == 0) {
            unaff_x24 = (undefined *)0x0;
          }
          _objc_retain(unaff_x24);
          _objc_release(unaff_x25);
          unaff_x25 = PTR_PTR_1126e0498;
          puVar4 = unaff_x24;
          func_0x00010c0e0160(unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          if (unaff_x25 == (undefined *)0x0) {
            unaff_x27 = 0;
            unaff_x26 = (undefined *)0x0;
          }
          else {
            lStack_138 = 0;
            unaff_x26 = puVar1;
            func_0x00010bf9b3a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = lStack_138;
            _objc_retain(lStack_138);
            if (unaff_x26 != (undefined *)0x0 && unaff_x27 == 0) {
              func_0x00010befa120(puVar2);
              unaff_x27 = 0;
            }
          }
          _objc_release(unaff_x26);
          _objc_release(unaff_x27);
          _objc_release(unaff_x25);
        }
        else {
          func_0x00010c0b7f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
        }
        _objc_release(unaff_x24);
        param_3 = param_3 + 1;
      } while (lVar3 != param_3);
      lVar3 = lStack_140;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  lVar3 = lStack_140;
  _objc_release(lStack_140);
  uVar12 = *(undefined8 *)(lStack_148 + 8);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  puVar5 = puVar4;
  func_0x00010befb760(uVar12);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar11 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_1b0 = lVar3;
  pcStack_158 = FUN_10b6d5118;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  puStack_188 = puVar4;
  puStack_180 = puVar2;
  uStack_178 = uVar12;
  puStack_170 = puVar1;
  lStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  puVar8 = auStack_240;
  puVar1 = puVar5;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar5);
      }
      uVar13 = *(ulong *)((long)puVar9 * 8);
      puVar10 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar10);
      puVar10 = PTR_DAT_1126a5228;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar13);
        uVar7 = uVar13;
        func_0x000107c318f8(uVar13,puVar10);
        uVar6 = uVar13;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar13);
        puVar10 = PTR_PTR_1126e0498;
        uVar13 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar10 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar14 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
          }
        }
        _objc_release(puVar14);
        _objc_release(0);
        _objc_release(puVar10);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        uVar6 = uVar13;
      }
      _objc_release(uVar6);
      puVar9 = puVar9 + 1;
    } while (puVar1 != puVar9);
    puVar8 = auStack_240;
    puVar1 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  uVar12 = *(undefined8 *)(lVar11 + 8);
  puVar1 = puVar4;
  func_0x00010bf51e00();
  puVar9 = puVar1;
  func_0x00010c12e3a0(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar9);
  _objc_retain(puVar8);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar9);
  puVar1 = puVar9;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar9);
      }
      uVar13 = *(ulong *)((long)puVar10 * 8);
      puVar14 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar14);
      puVar14 = PTR_DAT_1126a5228;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar13);
        uVar7 = uVar13;
        func_0x000107c318f8(uVar13,puVar14);
        uVar6 = uVar13;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar13);
        puVar14 = PTR_PTR_1126e0498;
        uVar13 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar14 == (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar15 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
          }
        }
        _objc_release(puVar15);
        _objc_release(0);
        _objc_release(puVar14);
      }
      else {
        func_0x00010c0b7f60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        uVar6 = uVar13;
      }
      _objc_release(uVar6);
      puVar10 = puVar10 + 1;
    } while (puVar1 != puVar10);
    puVar1 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  uVar12 = *(undefined8 *)(puVar5 + 8);
  puVar1 = puVar4;
  func_0x00010bf51e00(puVar4);
  puVar5 = puVar1;
  func_0x00010c066e00(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(puVar5);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e3e0(*(undefined8 *)(puVar9 + 8));
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d5118; end: 10b6d53c3; -[SCGalleryEntryChangeRequest removeSnaps:] */

void FUN_10b6d5118(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar8 = auStack_f0;
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(param_3);
      }
      uVar13 = *(ulong *)(lVar10 * 8);
      puVar4 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar5 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar4);
      puVar4 = PTR_DAT_1126a5228;
      if ((uVar5 & 1) == 0) {
        _objc_retain(uVar13);
        uVar6 = uVar13;
        func_0x000107c318f8(uVar13,puVar4);
        uVar5 = uVar13;
        if ((int)uVar6 == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar13);
        puVar4 = PTR_PTR_1126e0498;
        uVar13 = uVar5;
        func_0x00010c0e0160(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar4 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = puVar1;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar14 != (undefined *)0x0) {
            func_0x00010befa120(puVar2);
          }
        }
        _objc_release(puVar14);
        _objc_release(0);
        _objc_release(puVar4);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        uVar5 = uVar13;
      }
      _objc_release(uVar5);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    puVar8 = auStack_f0;
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar12 = *(undefined8 *)(param_1 + 8);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  puVar14 = puVar4;
  func_0x00010c12e3a0(uVar12);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar14);
  _objc_retain(puVar8);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar14);
  puVar1 = puVar14;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar14);
      }
      uVar13 = *(ulong *)((long)puVar11 * 8);
      puVar7 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar5 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar7);
      puVar7 = PTR_DAT_1126a5228;
      if ((uVar5 & 1) == 0) {
        _objc_retain(uVar13);
        uVar6 = uVar13;
        func_0x000107c318f8(uVar13,puVar7);
        uVar5 = uVar13;
        if ((int)uVar6 == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar13);
        puVar7 = PTR_PTR_1126e0498;
        uVar13 = uVar5;
        func_0x00010c0e0160(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar7 == (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar15 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
          }
        }
        _objc_release(puVar15);
        _objc_release(0);
        _objc_release(puVar7);
      }
      else {
        func_0x00010c0b7f60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        uVar5 = uVar13;
      }
      _objc_release(uVar5);
      puVar11 = puVar11 + 1;
    } while (puVar1 != puVar11);
    puVar1 = puVar14;
    func_0x00010bf52a60();
  }
  _objc_release(puVar14);
  uVar12 = *(undefined8 *)(param_3 + 8);
  puVar1 = puVar4;
  func_0x00010bf51e00(puVar4);
  puVar11 = puVar1;
  func_0x00010c066e00(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(puVar11);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e3e0(*(undefined8 *)(puVar14 + 8));
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d53c4; end: 10b6d568f; -[SCGalleryEntryChangeRequest insertSnaps:atIndexes:] */

void FUN_10b6d53c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar11 = *(ulong *)(lVar9 * 8);
      puVar5 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar11;
      _objc_opt_isKindOfClass(uVar11,puVar5);
      puVar5 = PTR_DAT_1126a5228;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar11);
        uVar7 = uVar11;
        func_0x000107c318f8(uVar11,puVar5);
        uVar6 = uVar11;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar11);
        puVar5 = PTR_PTR_1126e0498;
        uVar11 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        if (puVar5 == (undefined *)0x0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar12 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar12 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar12);
        _objc_release(0);
        _objc_release(puVar5);
      }
      else {
        func_0x00010c0b7f60(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar6 = uVar11;
      }
      _objc_release(uVar6);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar10 = *(undefined8 *)(param_1 + 8);
  puVar5 = puVar3;
  func_0x00010bf51e00(puVar3);
  puVar12 = puVar5;
  func_0x00010c066e00(uVar10);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126e0498;
    _objc_retain(puVar12);
    func_0x00010bf5f5e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e3e0(*(undefined8 *)(param_3 + 8));
    _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10b6d5690; end: 10b6d56f3; -[SCGalleryEntryChangeRequest removeSnapsAtIndexes:] */

void FUN_10b6d5690(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e3e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d56f4; end: 10b6d59bb; -[SCGalleryEntryChangeRequest replaceSnapsAtIndexes:withSnaps:] */

void FUN_10b6d56f4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *unaff_x25;
  ulong uVar15;
  undefined *unaff_x26;
  undefined *puVar16;
  undefined *unaff_x27;
  undefined *puVar17;
  long unaff_x28;
  undefined1 auStack_390 [128];
  long lStack_310;
  long lStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  long lStack_298;
  long lStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1c0;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
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
  lStack_150 = param_1;
  lStack_148 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
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
  _objc_retain(param_4);
  lStack_140 = param_4;
  func_0x00010bf52a60();
  if (param_4 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lStack_140);
        }
        unaff_x26 = *(undefined **)(lStack_128 + lVar12 * 8);
        puVar3 = PTR_PTR_1126e0520;
        _objc_opt_class(PTR_PTR_1126e0520);
        puVar10 = unaff_x26;
        _objc_opt_isKindOfClass(unaff_x26,puVar3);
        puVar3 = PTR_DAT_1126a5228;
        unaff_x25 = unaff_x26;
        if (((ulong)puVar10 & 1) == 0) {
          _objc_retain(unaff_x26);
          puVar10 = unaff_x26;
          func_0x000107c318f8(unaff_x26,puVar3);
          if ((int)puVar10 == 0) {
            unaff_x25 = (undefined *)0x0;
          }
          _objc_retain(unaff_x25);
          _objc_release(unaff_x26);
          unaff_x26 = PTR_PTR_1126e0498;
          puVar3 = unaff_x25;
          func_0x00010c0e0160(unaff_x25);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          if (unaff_x26 == (undefined *)0x0) {
            unaff_x28 = 0;
            unaff_x27 = (undefined *)0x0;
          }
          else {
            lStack_138 = 0;
            unaff_x27 = puVar1;
            func_0x00010bf9b3a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = lStack_138;
            _objc_retain(lStack_138);
            if (unaff_x27 != (undefined *)0x0 && unaff_x28 == 0) {
              func_0x00010befa120(puVar2);
              unaff_x28 = 0;
            }
          }
          _objc_release(unaff_x27);
          _objc_release(unaff_x28);
          _objc_release(unaff_x26);
        }
        else {
          func_0x00010c0b7f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
        }
        _objc_release(unaff_x25);
        lVar12 = lVar12 + 1;
      } while (param_4 != lVar12);
      param_4 = lStack_140;
      func_0x00010bf52a60();
    } while (param_4 != 0);
  }
  lVar13 = lStack_140;
  _objc_release(lStack_140);
  uVar14 = *(undefined8 *)(lStack_150 + 8);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  lVar12 = lStack_148;
  lVar9 = lStack_148;
  func_0x00010c131100(uVar14);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar13);
  lVar4 = lVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_170 = lVar13;
  lStack_168 = lVar12;
  pcStack_158 = FUN_10b6d59bc;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_298 = lVar4;
  lStack_1b0 = unaff_x28;
  puStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = puVar3;
  puStack_188 = puVar2;
  uStack_180 = uVar14;
  puStack_178 = puVar1;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(lVar9);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  _objc_retain(lVar9);
  lVar12 = lVar9;
  lStack_290 = lVar9;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar13 = *plStack_270;
    do {
      lVar9 = 0;
      do {
        if (*plStack_270 != lVar13) {
          _objc_enumerationMutation(lStack_290);
        }
        unaff_x25 = *(undefined **)(lStack_278 + lVar9 * 8);
        puVar3 = PTR_PTR_1126e0520;
        _objc_opt_class(PTR_PTR_1126e0520);
        puVar5 = unaff_x25;
        _objc_opt_isKindOfClass(unaff_x25,puVar3);
        puVar10 = PTR_DAT_1126a5c78;
        puVar3 = unaff_x25;
        if (((ulong)puVar5 & 1) == 0) {
          _objc_retain(unaff_x25);
          puVar5 = unaff_x25;
          func_0x000107c318f8(unaff_x25,puVar10);
          if ((int)puVar5 == 0) {
            puVar3 = (undefined *)0x0;
          }
          _objc_retain(puVar3);
          _objc_release(unaff_x25);
          unaff_x25 = PTR_PTR_1126e0498;
          puVar10 = puVar3;
          func_0x00010c0e0160(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          if (unaff_x25 == (undefined *)0x0) {
            unaff_x27 = (undefined *)0x0;
            unaff_x26 = (undefined *)0x0;
          }
          else {
            puStack_288 = (undefined *)0x0;
            unaff_x26 = puVar1;
            func_0x00010bf9b3a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = puStack_288;
            _objc_retain(puStack_288);
            if (unaff_x26 != (undefined *)0x0 && unaff_x27 == (undefined *)0x0) {
              func_0x00010befa120(puVar2);
              unaff_x27 = (undefined *)0x0;
            }
          }
          _objc_release(unaff_x26);
          _objc_release(unaff_x27);
          _objc_release(unaff_x25);
        }
        else {
          func_0x00010c0b7f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
        }
        _objc_release(puVar3);
        lVar9 = lVar9 + 1;
      } while (lVar12 != lVar9);
      lVar12 = lStack_290;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  lVar12 = lStack_290;
  _objc_release(lStack_290);
  uVar14 = *(undefined8 *)(lStack_298 + 8);
  puVar10 = puVar2;
  func_0x00010bf51e00();
  puVar5 = puVar10;
  func_0x00010befbc40(uVar14);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar13 = lVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  lStack_300 = lVar12;
  pcStack_2a8 = FUN_10b6d5c68;
  lStack_310 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2f8 = unaff_x27;
  puStack_2f0 = unaff_x26;
  puStack_2e8 = unaff_x25;
  puStack_2e0 = puVar3;
  puStack_2d8 = puVar10;
  puStack_2d0 = puVar2;
  uStack_2c8 = uVar14;
  puStack_2c0 = puVar1;
  lStack_2b8 = lVar9;
  ppuStack_2b0 = &puStack_160;
  _objc_retain(puVar5);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  puVar8 = auStack_390;
  puVar1 = puVar5;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(puVar5);
      }
      uVar15 = *(ulong *)((long)puVar10 * 8);
      puVar11 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar15;
      _objc_opt_isKindOfClass(uVar15,puVar11);
      puVar11 = PTR_DAT_1126a5c78;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar15);
        uVar7 = uVar15;
        func_0x000107c318f8(uVar15,puVar11);
        uVar6 = uVar15;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar15);
        puVar11 = PTR_PTR_1126e0498;
        uVar15 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        if (puVar11 == (undefined *)0x0) {
          puVar16 = (undefined *)0x0;
        }
        else {
          puVar16 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar16 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar16);
        _objc_release(0);
        _objc_release(puVar11);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar6 = uVar15;
      }
      _objc_release(uVar6);
      puVar10 = puVar10 + 1;
    } while (puVar1 != puVar10);
    puVar8 = auStack_390;
    puVar1 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  uVar14 = *(undefined8 *)(lVar13 + 8);
  puVar1 = puVar3;
  func_0x00010bf51e00();
  puVar10 = puVar1;
  func_0x00010c12e7e0(uVar14);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_310) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar10);
  _objc_retain(puVar8);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar10);
  puVar1 = puVar10;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(puVar10);
      }
      uVar15 = *(ulong *)((long)puVar11 * 8);
      puVar16 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar15;
      _objc_opt_isKindOfClass(uVar15,puVar16);
      puVar16 = PTR_DAT_1126a5c78;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar15);
        uVar7 = uVar15;
        func_0x000107c318f8(uVar15,puVar16);
        uVar6 = uVar15;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar15);
        puVar16 = PTR_PTR_1126e0498;
        uVar15 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        if (puVar16 == (undefined *)0x0) {
          puVar17 = (undefined *)0x0;
        }
        else {
          puVar17 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar17 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar17);
        _objc_release(0);
        _objc_release(puVar16);
      }
      else {
        func_0x00010c0b7f60(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar6 = uVar15;
      }
      _objc_release(uVar6);
      puVar11 = puVar11 + 1;
    } while (puVar1 != puVar11);
    puVar1 = puVar10;
    func_0x00010bf52a60();
  }
  _objc_release(puVar10);
  uVar14 = *(undefined8 *)(puVar5 + 8);
  puVar1 = puVar3;
  func_0x00010bf51e00(puVar3);
  puVar5 = puVar1;
  func_0x00010c067060(uVar14);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(puVar5);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e800(*(undefined8 *)(puVar10 + 8));
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d59bc; end: 10b6d5c67; -[SCGalleryEntryChangeRequest addSyncedEntryAssets:] */

void FUN_10b6d59bc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *unaff_x24;
  undefined *unaff_x25;
  ulong uVar13;
  undefined *unaff_x26;
  undefined *puVar14;
  long unaff_x27;
  undefined *puVar15;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  long lStack_140;
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
  lStack_148 = param_1;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  lStack_140 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = *plStack_120;
    do {
      param_3 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lStack_140);
        }
        unaff_x25 = *(undefined **)(lStack_128 + param_3 * 8);
        puVar4 = PTR_PTR_1126e0520;
        _objc_opt_class(PTR_PTR_1126e0520);
        puVar5 = unaff_x25;
        _objc_opt_isKindOfClass(unaff_x25,puVar4);
        puVar4 = PTR_DAT_1126a5c78;
        unaff_x24 = unaff_x25;
        if (((ulong)puVar5 & 1) == 0) {
          _objc_retain(unaff_x25);
          puVar5 = unaff_x25;
          func_0x000107c318f8(unaff_x25,puVar4);
          if ((int)puVar5 == 0) {
            unaff_x24 = (undefined *)0x0;
          }
          _objc_retain(unaff_x24);
          _objc_release(unaff_x25);
          unaff_x25 = PTR_PTR_1126e0498;
          puVar4 = unaff_x24;
          func_0x00010c0e0160(unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          if (unaff_x25 == (undefined *)0x0) {
            unaff_x27 = 0;
            unaff_x26 = (undefined *)0x0;
          }
          else {
            lStack_138 = 0;
            unaff_x26 = puVar1;
            func_0x00010bf9b3a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = lStack_138;
            _objc_retain(lStack_138);
            if (unaff_x26 != (undefined *)0x0 && unaff_x27 == 0) {
              func_0x00010befa120(puVar2);
              unaff_x27 = 0;
            }
          }
          _objc_release(unaff_x26);
          _objc_release(unaff_x27);
          _objc_release(unaff_x25);
        }
        else {
          func_0x00010c0b7f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
        }
        _objc_release(unaff_x24);
        param_3 = param_3 + 1;
      } while (lVar3 != param_3);
      lVar3 = lStack_140;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  lVar3 = lStack_140;
  _objc_release(lStack_140);
  uVar12 = *(undefined8 *)(lStack_148 + 8);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  puVar5 = puVar4;
  func_0x00010befbc40(uVar12);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar11 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_1b0 = lVar3;
  pcStack_158 = FUN_10b6d5c68;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  puStack_188 = puVar4;
  puStack_180 = puVar2;
  uStack_178 = uVar12;
  puStack_170 = puVar1;
  lStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  puVar8 = auStack_240;
  puVar1 = puVar5;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar5);
      }
      uVar13 = *(ulong *)((long)puVar9 * 8);
      puVar10 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar10);
      puVar10 = PTR_DAT_1126a5c78;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar13);
        uVar7 = uVar13;
        func_0x000107c318f8(uVar13,puVar10);
        uVar6 = uVar13;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar13);
        puVar10 = PTR_PTR_1126e0498;
        uVar13 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar10 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar14 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
          }
        }
        _objc_release(puVar14);
        _objc_release(0);
        _objc_release(puVar10);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        uVar6 = uVar13;
      }
      _objc_release(uVar6);
      puVar9 = puVar9 + 1;
    } while (puVar1 != puVar9);
    puVar8 = auStack_240;
    puVar1 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  uVar12 = *(undefined8 *)(lVar11 + 8);
  puVar1 = puVar4;
  func_0x00010bf51e00();
  puVar9 = puVar1;
  func_0x00010c12e7e0(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar9);
  _objc_retain(puVar8);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar9);
  puVar1 = puVar9;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar9);
      }
      uVar13 = *(ulong *)((long)puVar10 * 8);
      puVar14 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar14);
      puVar14 = PTR_DAT_1126a5c78;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar13);
        uVar7 = uVar13;
        func_0x000107c318f8(uVar13,puVar14);
        uVar6 = uVar13;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar13);
        puVar14 = PTR_PTR_1126e0498;
        uVar13 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar14 == (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar15 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
          }
        }
        _objc_release(puVar15);
        _objc_release(0);
        _objc_release(puVar14);
      }
      else {
        func_0x00010c0b7f60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        uVar6 = uVar13;
      }
      _objc_release(uVar6);
      puVar10 = puVar10 + 1;
    } while (puVar1 != puVar10);
    puVar1 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  uVar12 = *(undefined8 *)(puVar5 + 8);
  puVar1 = puVar4;
  func_0x00010bf51e00(puVar4);
  puVar5 = puVar1;
  func_0x00010c067060(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(puVar5);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e800(*(undefined8 *)(puVar9 + 8));
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d5c68; end: 10b6d5f13; -[SCGalleryEntryChangeRequest removeSyncedEntryAssets:] */

void FUN_10b6d5c68(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar8 = auStack_f0;
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(param_3);
      }
      uVar13 = *(ulong *)(lVar10 * 8);
      puVar4 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar5 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar4);
      puVar4 = PTR_DAT_1126a5c78;
      if ((uVar5 & 1) == 0) {
        _objc_retain(uVar13);
        uVar6 = uVar13;
        func_0x000107c318f8(uVar13,puVar4);
        uVar5 = uVar13;
        if ((int)uVar6 == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar13);
        puVar4 = PTR_PTR_1126e0498;
        uVar13 = uVar5;
        func_0x00010c0e0160(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar4 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = puVar1;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar14 != (undefined *)0x0) {
            func_0x00010befa120(puVar2);
          }
        }
        _objc_release(puVar14);
        _objc_release(0);
        _objc_release(puVar4);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        uVar5 = uVar13;
      }
      _objc_release(uVar5);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    puVar8 = auStack_f0;
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar12 = *(undefined8 *)(param_1 + 8);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  puVar14 = puVar4;
  func_0x00010c12e7e0(uVar12);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar14);
  _objc_retain(puVar8);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar14);
  puVar1 = puVar14;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar14);
      }
      uVar13 = *(ulong *)((long)puVar11 * 8);
      puVar7 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar5 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar7);
      puVar7 = PTR_DAT_1126a5c78;
      if ((uVar5 & 1) == 0) {
        _objc_retain(uVar13);
        uVar6 = uVar13;
        func_0x000107c318f8(uVar13,puVar7);
        uVar5 = uVar13;
        if ((int)uVar6 == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar13);
        puVar7 = PTR_PTR_1126e0498;
        uVar13 = uVar5;
        func_0x00010c0e0160(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar7 == (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar15 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
          }
        }
        _objc_release(puVar15);
        _objc_release(0);
        _objc_release(puVar7);
      }
      else {
        func_0x00010c0b7f60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        uVar5 = uVar13;
      }
      _objc_release(uVar5);
      puVar11 = puVar11 + 1;
    } while (puVar1 != puVar11);
    puVar1 = puVar14;
    func_0x00010bf52a60();
  }
  _objc_release(puVar14);
  uVar12 = *(undefined8 *)(param_3 + 8);
  puVar1 = puVar4;
  func_0x00010bf51e00(puVar4);
  puVar11 = puVar1;
  func_0x00010c067060(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(puVar11);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e800(*(undefined8 *)(puVar14 + 8));
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d5f14; end: 10b6d61df; -[SCGalleryEntryChangeRequest insertSyncedEntryAssets:atIndexes:] */

void FUN_10b6d5f14(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar11 = *(ulong *)(lVar9 * 8);
      puVar5 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar11;
      _objc_opt_isKindOfClass(uVar11,puVar5);
      puVar5 = PTR_DAT_1126a5c78;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar11);
        uVar7 = uVar11;
        func_0x000107c318f8(uVar11,puVar5);
        uVar6 = uVar11;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar11);
        puVar5 = PTR_PTR_1126e0498;
        uVar11 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        if (puVar5 == (undefined *)0x0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar12 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar12 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar12);
        _objc_release(0);
        _objc_release(puVar5);
      }
      else {
        func_0x00010c0b7f60(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar6 = uVar11;
      }
      _objc_release(uVar6);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar10 = *(undefined8 *)(param_1 + 8);
  puVar5 = puVar3;
  func_0x00010bf51e00(puVar3);
  puVar12 = puVar5;
  func_0x00010c067060(uVar10);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126e0498;
    _objc_retain(puVar12);
    func_0x00010bf5f5e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e800(*(undefined8 *)(param_3 + 8));
    _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10b6d61e0; end: 10b6d6243; -[SCGalleryEntryChangeRequest removeSyncedEntryAssetsAtIndexes:] */

void FUN_10b6d61e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e800(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d6244; end: 10b6d650b; -[SCGalleryEntryChangeRequest replaceSyncedEntryAssetsAtIndexes:withSyncedEntryAssets:] */

void FUN_10b6d6244(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *unaff_x25;
  ulong uVar15;
  undefined *unaff_x26;
  undefined *puVar16;
  undefined *unaff_x27;
  undefined *puVar17;
  long unaff_x28;
  undefined1 auStack_390 [128];
  long lStack_310;
  long lStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  long lStack_298;
  long lStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1c0;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
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
  lStack_150 = param_1;
  lStack_148 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
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
  _objc_retain(param_4);
  lStack_140 = param_4;
  func_0x00010bf52a60();
  if (param_4 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lStack_140);
        }
        unaff_x26 = *(undefined **)(lStack_128 + lVar12 * 8);
        puVar3 = PTR_PTR_1126e0520;
        _objc_opt_class(PTR_PTR_1126e0520);
        puVar10 = unaff_x26;
        _objc_opt_isKindOfClass(unaff_x26,puVar3);
        puVar3 = PTR_DAT_1126a5c78;
        unaff_x25 = unaff_x26;
        if (((ulong)puVar10 & 1) == 0) {
          _objc_retain(unaff_x26);
          puVar10 = unaff_x26;
          func_0x000107c318f8(unaff_x26,puVar3);
          if ((int)puVar10 == 0) {
            unaff_x25 = (undefined *)0x0;
          }
          _objc_retain(unaff_x25);
          _objc_release(unaff_x26);
          unaff_x26 = PTR_PTR_1126e0498;
          puVar3 = unaff_x25;
          func_0x00010c0e0160(unaff_x25);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          if (unaff_x26 == (undefined *)0x0) {
            unaff_x28 = 0;
            unaff_x27 = (undefined *)0x0;
          }
          else {
            lStack_138 = 0;
            unaff_x27 = puVar1;
            func_0x00010bf9b3a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = lStack_138;
            _objc_retain(lStack_138);
            if (unaff_x27 != (undefined *)0x0 && unaff_x28 == 0) {
              func_0x00010befa120(puVar2);
              unaff_x28 = 0;
            }
          }
          _objc_release(unaff_x27);
          _objc_release(unaff_x28);
          _objc_release(unaff_x26);
        }
        else {
          func_0x00010c0b7f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
        }
        _objc_release(unaff_x25);
        lVar12 = lVar12 + 1;
      } while (param_4 != lVar12);
      param_4 = lStack_140;
      func_0x00010bf52a60();
    } while (param_4 != 0);
  }
  lVar13 = lStack_140;
  _objc_release(lStack_140);
  uVar14 = *(undefined8 *)(lStack_150 + 8);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  lVar12 = lStack_148;
  lVar9 = lStack_148;
  func_0x00010c131180(uVar14);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar13);
  lVar4 = lVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_170 = lVar13;
  lStack_168 = lVar12;
  pcStack_158 = FUN_10b6d650c;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_298 = lVar4;
  lStack_1b0 = unaff_x28;
  puStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = puVar3;
  puStack_188 = puVar2;
  uStack_180 = uVar14;
  puStack_178 = puVar1;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(lVar9);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  _objc_retain(lVar9);
  lVar12 = lVar9;
  lStack_290 = lVar9;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar13 = *plStack_270;
    do {
      lVar9 = 0;
      do {
        if (*plStack_270 != lVar13) {
          _objc_enumerationMutation(lStack_290);
        }
        unaff_x25 = *(undefined **)(lStack_278 + lVar9 * 8);
        puVar3 = PTR_PTR_1126e0520;
        _objc_opt_class(PTR_PTR_1126e0520);
        puVar5 = unaff_x25;
        _objc_opt_isKindOfClass(unaff_x25,puVar3);
        puVar10 = PTR_DAT_1126a5228;
        puVar3 = unaff_x25;
        if (((ulong)puVar5 & 1) == 0) {
          _objc_retain(unaff_x25);
          puVar5 = unaff_x25;
          func_0x000107c318f8(unaff_x25,puVar10);
          if ((int)puVar5 == 0) {
            puVar3 = (undefined *)0x0;
          }
          _objc_retain(puVar3);
          _objc_release(unaff_x25);
          unaff_x25 = PTR_PTR_1126e0498;
          puVar10 = puVar3;
          func_0x00010c0e0160(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          if (unaff_x25 == (undefined *)0x0) {
            unaff_x27 = (undefined *)0x0;
            unaff_x26 = (undefined *)0x0;
          }
          else {
            puStack_288 = (undefined *)0x0;
            unaff_x26 = puVar1;
            func_0x00010bf9b3a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = puStack_288;
            _objc_retain(puStack_288);
            if (unaff_x26 != (undefined *)0x0 && unaff_x27 == (undefined *)0x0) {
              func_0x00010befa120(puVar2);
              unaff_x27 = (undefined *)0x0;
            }
          }
          _objc_release(unaff_x26);
          _objc_release(unaff_x27);
          _objc_release(unaff_x25);
        }
        else {
          func_0x00010c0b7f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
        }
        _objc_release(puVar3);
        lVar9 = lVar9 + 1;
      } while (lVar12 != lVar9);
      lVar12 = lStack_290;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  lVar12 = lStack_290;
  _objc_release(lStack_290);
  uVar14 = *(undefined8 *)(lStack_298 + 8);
  puVar10 = puVar2;
  func_0x00010bf51e00();
  puVar5 = puVar10;
  func_0x00010befbc60(uVar14);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar13 = lVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  lStack_300 = lVar12;
  pcStack_2a8 = FUN_10b6d67b8;
  lStack_310 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2f8 = unaff_x27;
  puStack_2f0 = unaff_x26;
  puStack_2e8 = unaff_x25;
  puStack_2e0 = puVar3;
  puStack_2d8 = puVar10;
  puStack_2d0 = puVar2;
  uStack_2c8 = uVar14;
  puStack_2c0 = puVar1;
  lStack_2b8 = lVar9;
  ppuStack_2b0 = &puStack_160;
  _objc_retain(puVar5);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  puVar8 = auStack_390;
  puVar1 = puVar5;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(puVar5);
      }
      uVar15 = *(ulong *)((long)puVar10 * 8);
      puVar11 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar15;
      _objc_opt_isKindOfClass(uVar15,puVar11);
      puVar11 = PTR_DAT_1126a5228;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar15);
        uVar7 = uVar15;
        func_0x000107c318f8(uVar15,puVar11);
        uVar6 = uVar15;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar15);
        puVar11 = PTR_PTR_1126e0498;
        uVar15 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        if (puVar11 == (undefined *)0x0) {
          puVar16 = (undefined *)0x0;
        }
        else {
          puVar16 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar16 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar16);
        _objc_release(0);
        _objc_release(puVar11);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar6 = uVar15;
      }
      _objc_release(uVar6);
      puVar10 = puVar10 + 1;
    } while (puVar1 != puVar10);
    puVar8 = auStack_390;
    puVar1 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  uVar14 = *(undefined8 *)(lVar13 + 8);
  puVar1 = puVar3;
  func_0x00010bf51e00();
  puVar10 = puVar1;
  func_0x00010c12e820(uVar14);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_310) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar10);
  _objc_retain(puVar8);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar10);
  puVar1 = puVar10;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(puVar10);
      }
      uVar15 = *(ulong *)((long)puVar11 * 8);
      puVar16 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar15;
      _objc_opt_isKindOfClass(uVar15,puVar16);
      puVar16 = PTR_DAT_1126a5228;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar15);
        uVar7 = uVar15;
        func_0x000107c318f8(uVar15,puVar16);
        uVar6 = uVar15;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar15);
        puVar16 = PTR_PTR_1126e0498;
        uVar15 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        if (puVar16 == (undefined *)0x0) {
          puVar17 = (undefined *)0x0;
        }
        else {
          puVar17 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar17 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar17);
        _objc_release(0);
        _objc_release(puVar16);
      }
      else {
        func_0x00010c0b7f60(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar6 = uVar15;
      }
      _objc_release(uVar6);
      puVar11 = puVar11 + 1;
    } while (puVar1 != puVar11);
    puVar1 = puVar10;
    func_0x00010bf52a60();
  }
  _objc_release(puVar10);
  uVar14 = *(undefined8 *)(puVar5 + 8);
  puVar1 = puVar3;
  func_0x00010bf51e00(puVar3);
  puVar5 = puVar1;
  func_0x00010c067080(uVar14);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(puVar5);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e840(*(undefined8 *)(puVar10 + 8));
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d650c; end: 10b6d67b7; -[SCGalleryEntryChangeRequest addSyncedHighlightedSnaps:] */

void FUN_10b6d650c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *unaff_x24;
  undefined *unaff_x25;
  ulong uVar13;
  undefined *unaff_x26;
  undefined *puVar14;
  long unaff_x27;
  undefined *puVar15;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  long lStack_140;
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
  lStack_148 = param_1;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  lStack_140 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = *plStack_120;
    do {
      param_3 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lStack_140);
        }
        unaff_x25 = *(undefined **)(lStack_128 + param_3 * 8);
        puVar4 = PTR_PTR_1126e0520;
        _objc_opt_class(PTR_PTR_1126e0520);
        puVar5 = unaff_x25;
        _objc_opt_isKindOfClass(unaff_x25,puVar4);
        puVar4 = PTR_DAT_1126a5228;
        unaff_x24 = unaff_x25;
        if (((ulong)puVar5 & 1) == 0) {
          _objc_retain(unaff_x25);
          puVar5 = unaff_x25;
          func_0x000107c318f8(unaff_x25,puVar4);
          if ((int)puVar5 == 0) {
            unaff_x24 = (undefined *)0x0;
          }
          _objc_retain(unaff_x24);
          _objc_release(unaff_x25);
          unaff_x25 = PTR_PTR_1126e0498;
          puVar4 = unaff_x24;
          func_0x00010c0e0160(unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          if (unaff_x25 == (undefined *)0x0) {
            unaff_x27 = 0;
            unaff_x26 = (undefined *)0x0;
          }
          else {
            lStack_138 = 0;
            unaff_x26 = puVar1;
            func_0x00010bf9b3a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = lStack_138;
            _objc_retain(lStack_138);
            if (unaff_x26 != (undefined *)0x0 && unaff_x27 == 0) {
              func_0x00010befa120(puVar2);
              unaff_x27 = 0;
            }
          }
          _objc_release(unaff_x26);
          _objc_release(unaff_x27);
          _objc_release(unaff_x25);
        }
        else {
          func_0x00010c0b7f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
        }
        _objc_release(unaff_x24);
        param_3 = param_3 + 1;
      } while (lVar3 != param_3);
      lVar3 = lStack_140;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  lVar3 = lStack_140;
  _objc_release(lStack_140);
  uVar12 = *(undefined8 *)(lStack_148 + 8);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  puVar5 = puVar4;
  func_0x00010befbc60(uVar12);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar11 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_1b0 = lVar3;
  pcStack_158 = FUN_10b6d67b8;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  puStack_188 = puVar4;
  puStack_180 = puVar2;
  uStack_178 = uVar12;
  puStack_170 = puVar1;
  lStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  puVar8 = auStack_240;
  puVar1 = puVar5;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar5);
      }
      uVar13 = *(ulong *)((long)puVar9 * 8);
      puVar10 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar10);
      puVar10 = PTR_DAT_1126a5228;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar13);
        uVar7 = uVar13;
        func_0x000107c318f8(uVar13,puVar10);
        uVar6 = uVar13;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar13);
        puVar10 = PTR_PTR_1126e0498;
        uVar13 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar10 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar14 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
          }
        }
        _objc_release(puVar14);
        _objc_release(0);
        _objc_release(puVar10);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        uVar6 = uVar13;
      }
      _objc_release(uVar6);
      puVar9 = puVar9 + 1;
    } while (puVar1 != puVar9);
    puVar8 = auStack_240;
    puVar1 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  uVar12 = *(undefined8 *)(lVar11 + 8);
  puVar1 = puVar4;
  func_0x00010bf51e00();
  puVar9 = puVar1;
  func_0x00010c12e820(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar9);
  _objc_retain(puVar8);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar9);
  puVar1 = puVar9;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar9);
      }
      uVar13 = *(ulong *)((long)puVar10 * 8);
      puVar14 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar14);
      puVar14 = PTR_DAT_1126a5228;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar13);
        uVar7 = uVar13;
        func_0x000107c318f8(uVar13,puVar14);
        uVar6 = uVar13;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar13);
        puVar14 = PTR_PTR_1126e0498;
        uVar13 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar14 == (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar15 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
          }
        }
        _objc_release(puVar15);
        _objc_release(0);
        _objc_release(puVar14);
      }
      else {
        func_0x00010c0b7f60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        uVar6 = uVar13;
      }
      _objc_release(uVar6);
      puVar10 = puVar10 + 1;
    } while (puVar1 != puVar10);
    puVar1 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  uVar12 = *(undefined8 *)(puVar5 + 8);
  puVar1 = puVar4;
  func_0x00010bf51e00(puVar4);
  puVar5 = puVar1;
  func_0x00010c067080(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(puVar5);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e840(*(undefined8 *)(puVar9 + 8));
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d67b8; end: 10b6d6a63; -[SCGalleryEntryChangeRequest removeSyncedHighlightedSnaps:] */

void FUN_10b6d67b8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar8 = auStack_f0;
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(param_3);
      }
      uVar13 = *(ulong *)(lVar10 * 8);
      puVar4 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar5 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar4);
      puVar4 = PTR_DAT_1126a5228;
      if ((uVar5 & 1) == 0) {
        _objc_retain(uVar13);
        uVar6 = uVar13;
        func_0x000107c318f8(uVar13,puVar4);
        uVar5 = uVar13;
        if ((int)uVar6 == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar13);
        puVar4 = PTR_PTR_1126e0498;
        uVar13 = uVar5;
        func_0x00010c0e0160(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar4 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = puVar1;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar14 != (undefined *)0x0) {
            func_0x00010befa120(puVar2);
          }
        }
        _objc_release(puVar14);
        _objc_release(0);
        _objc_release(puVar4);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        uVar5 = uVar13;
      }
      _objc_release(uVar5);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    puVar8 = auStack_f0;
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar12 = *(undefined8 *)(param_1 + 8);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  puVar14 = puVar4;
  func_0x00010c12e820(uVar12);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar14);
  _objc_retain(puVar8);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar14);
  puVar1 = puVar14;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar14);
      }
      uVar13 = *(ulong *)((long)puVar11 * 8);
      puVar7 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar5 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar7);
      puVar7 = PTR_DAT_1126a5228;
      if ((uVar5 & 1) == 0) {
        _objc_retain(uVar13);
        uVar6 = uVar13;
        func_0x000107c318f8(uVar13,puVar7);
        uVar5 = uVar13;
        if ((int)uVar6 == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar13);
        puVar7 = PTR_PTR_1126e0498;
        uVar13 = uVar5;
        func_0x00010c0e0160(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar7 == (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar15 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
          }
        }
        _objc_release(puVar15);
        _objc_release(0);
        _objc_release(puVar7);
      }
      else {
        func_0x00010c0b7f60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        uVar5 = uVar13;
      }
      _objc_release(uVar5);
      puVar11 = puVar11 + 1;
    } while (puVar1 != puVar11);
    puVar1 = puVar14;
    func_0x00010bf52a60();
  }
  _objc_release(puVar14);
  uVar12 = *(undefined8 *)(param_3 + 8);
  puVar1 = puVar4;
  func_0x00010bf51e00(puVar4);
  puVar11 = puVar1;
  func_0x00010c067080(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(puVar11);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e840(*(undefined8 *)(puVar14 + 8));
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d6a64; end: 10b6d6d2f; -[SCGalleryEntryChangeRequest insertSyncedHighlightedSnaps:atIndexes:] */

void FUN_10b6d6a64(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar11 = *(ulong *)(lVar9 * 8);
      puVar5 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar11;
      _objc_opt_isKindOfClass(uVar11,puVar5);
      puVar5 = PTR_DAT_1126a5228;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar11);
        uVar7 = uVar11;
        func_0x000107c318f8(uVar11,puVar5);
        uVar6 = uVar11;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar11);
        puVar5 = PTR_PTR_1126e0498;
        uVar11 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        if (puVar5 == (undefined *)0x0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar12 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar12 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar12);
        _objc_release(0);
        _objc_release(puVar5);
      }
      else {
        func_0x00010c0b7f60(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar6 = uVar11;
      }
      _objc_release(uVar6);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar10 = *(undefined8 *)(param_1 + 8);
  puVar5 = puVar3;
  func_0x00010bf51e00(puVar3);
  puVar12 = puVar5;
  func_0x00010c067080(uVar10);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126e0498;
    _objc_retain(puVar12);
    func_0x00010bf5f5e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e840(*(undefined8 *)(param_3 + 8));
    _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10b6d6d30; end: 10b6d6d93; -[SCGalleryEntryChangeRequest removeSyncedHighlightedSnapsAtIndexes:] */

void FUN_10b6d6d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e840(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d6d94; end: 10b6d705b; -[SCGalleryEntryChangeRequest replaceSyncedHighlightedSnapsAtIndexes:withSyncedHighlightedSnaps:] */

void FUN_10b6d6d94(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar11 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      uVar12 = *(ulong *)(lVar9 * 8);
      puVar4 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar5 = uVar12;
      _objc_opt_isKindOfClass(uVar12,puVar4);
      puVar4 = PTR_DAT_1126a5228;
      if ((uVar5 & 1) == 0) {
        _objc_retain(uVar12);
        uVar6 = uVar12;
        func_0x000107c318f8(uVar12,puVar4);
        uVar5 = uVar12;
        if ((int)uVar6 == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar12);
        puVar4 = PTR_PTR_1126e0498;
        uVar12 = uVar5;
        func_0x00010c0e0160(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        if (puVar4 == (undefined *)0x0) {
          puVar13 = (undefined *)0x0;
        }
        else {
          puVar13 = puVar11;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar13 != (undefined *)0x0) {
            func_0x00010befa120(puVar2);
          }
        }
        _objc_release(puVar13);
        _objc_release(0);
        _objc_release(puVar4);
      }
      else {
        func_0x00010c0b7f60(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        uVar5 = uVar12;
      }
      _objc_release(uVar5);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  uVar10 = *(undefined8 *)(param_1 + 8);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  puVar13 = param_3;
  func_0x00010c1311a0(uVar10);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar11);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar13);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar4 = puVar13;
  _objc_opt_isKindOfClass(puVar13,puVar11);
  puVar11 = PTR_DAT_1126a5c80;
  if (((ulong)puVar4 & 1) == 0) {
    if (puVar13 == (undefined *)0x0) {
      func_0x00010c210f20(*(undefined8 *)(param_3 + 8));
      goto LAB_10b6d71d0;
    }
    _objc_retain(puVar13);
    puVar4 = puVar13;
    func_0x000107c318f8(puVar13,puVar11);
    puVar11 = puVar13;
    if ((int)puVar4 == 0) {
      puVar11 = (undefined *)0x0;
    }
    _objc_retain(puVar11);
    _objc_release(puVar13);
    puVar4 = PTR_PTR_1126e0498;
    puVar7 = puVar11;
    func_0x00010c0e0160(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar4 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = puVar2;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar11 != (undefined *)0x0) {
        func_0x00010c210f20(*(undefined8 *)(param_3 + 8));
      }
    }
    _objc_release(puVar11);
    _objc_release(0);
  }
  else {
    puVar4 = puVar13;
    func_0x00010c0b7f60(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c210f20(*(undefined8 *)(param_3 + 8));
  }
  _objc_release(puVar4);
LAB_10b6d71d0:
  _objc_release(puVar2);
  _objc_release(puVar13);
  return;
}



/* Entry: 10b6d705c; end: 10b6d71f7; -[SCGalleryEntryChangeRequest setSyncedSnapDoc:] */

void FUN_10b6d705c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  puVar4 = PTR_DAT_1126a5c80;
  if (((ulong)puVar2 & 1) == 0) {
    if (param_3 == (undefined *)0x0) {
      func_0x00010c210f20(*(undefined8 *)(param_1 + 8));
      goto LAB_10b6d71d0;
    }
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x000107c318f8(param_3,puVar4);
    puVar4 = param_3;
    if ((int)puVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126e0498;
    puVar3 = puVar4;
    func_0x00010c0e0160(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar4 != (undefined *)0x0) {
        func_0x00010c210f20(*(undefined8 *)(param_1 + 8));
      }
    }
    _objc_release(puVar4);
    _objc_release(0);
  }
  else {
    puVar2 = param_3;
    func_0x00010c0b7f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c210f20(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(puVar2);
LAB_10b6d71d0:
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b6d71f8; end: 10b6d74a3; -[SCGalleryEntryChangeRequest addSyncedSnaps:] */

void FUN_10b6d71f8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *unaff_x24;
  undefined *unaff_x25;
  ulong uVar13;
  undefined *unaff_x26;
  undefined *puVar14;
  long unaff_x27;
  undefined *puVar15;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  long lStack_140;
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
  lStack_148 = param_1;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  lStack_140 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = *plStack_120;
    do {
      param_3 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lStack_140);
        }
        unaff_x25 = *(undefined **)(lStack_128 + param_3 * 8);
        puVar4 = PTR_PTR_1126e0520;
        _objc_opt_class(PTR_PTR_1126e0520);
        puVar5 = unaff_x25;
        _objc_opt_isKindOfClass(unaff_x25,puVar4);
        puVar4 = PTR_DAT_1126a5228;
        unaff_x24 = unaff_x25;
        if (((ulong)puVar5 & 1) == 0) {
          _objc_retain(unaff_x25);
          puVar5 = unaff_x25;
          func_0x000107c318f8(unaff_x25,puVar4);
          if ((int)puVar5 == 0) {
            unaff_x24 = (undefined *)0x0;
          }
          _objc_retain(unaff_x24);
          _objc_release(unaff_x25);
          unaff_x25 = PTR_PTR_1126e0498;
          puVar4 = unaff_x24;
          func_0x00010c0e0160(unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          if (unaff_x25 == (undefined *)0x0) {
            unaff_x27 = 0;
            unaff_x26 = (undefined *)0x0;
          }
          else {
            lStack_138 = 0;
            unaff_x26 = puVar1;
            func_0x00010bf9b3a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = lStack_138;
            _objc_retain(lStack_138);
            if (unaff_x26 != (undefined *)0x0 && unaff_x27 == 0) {
              func_0x00010befa120(puVar2);
              unaff_x27 = 0;
            }
          }
          _objc_release(unaff_x26);
          _objc_release(unaff_x27);
          _objc_release(unaff_x25);
        }
        else {
          func_0x00010c0b7f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
        }
        _objc_release(unaff_x24);
        param_3 = param_3 + 1;
      } while (lVar3 != param_3);
      lVar3 = lStack_140;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  lVar3 = lStack_140;
  _objc_release(lStack_140);
  uVar12 = *(undefined8 *)(lStack_148 + 8);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  puVar5 = puVar4;
  func_0x00010befbc80(uVar12);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar11 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_1b0 = lVar3;
  pcStack_158 = FUN_10b6d74a4;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  puStack_188 = puVar4;
  puStack_180 = puVar2;
  uStack_178 = uVar12;
  puStack_170 = puVar1;
  lStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  puVar8 = auStack_240;
  puVar1 = puVar5;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar5);
      }
      uVar13 = *(ulong *)((long)puVar9 * 8);
      puVar10 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar10);
      puVar10 = PTR_DAT_1126a5228;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar13);
        uVar7 = uVar13;
        func_0x000107c318f8(uVar13,puVar10);
        uVar6 = uVar13;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar13);
        puVar10 = PTR_PTR_1126e0498;
        uVar13 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar10 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar14 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
          }
        }
        _objc_release(puVar14);
        _objc_release(0);
        _objc_release(puVar10);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        uVar6 = uVar13;
      }
      _objc_release(uVar6);
      puVar9 = puVar9 + 1;
    } while (puVar1 != puVar9);
    puVar8 = auStack_240;
    puVar1 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  uVar12 = *(undefined8 *)(lVar11 + 8);
  puVar1 = puVar4;
  func_0x00010bf51e00();
  puVar9 = puVar1;
  func_0x00010c12e860(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar9);
  _objc_retain(puVar8);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar9);
  puVar1 = puVar9;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar9);
      }
      uVar13 = *(ulong *)((long)puVar10 * 8);
      puVar14 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar14);
      puVar14 = PTR_DAT_1126a5228;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar13);
        uVar7 = uVar13;
        func_0x000107c318f8(uVar13,puVar14);
        uVar6 = uVar13;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar13);
        puVar14 = PTR_PTR_1126e0498;
        uVar13 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar14 == (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar15 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
          }
        }
        _objc_release(puVar15);
        _objc_release(0);
        _objc_release(puVar14);
      }
      else {
        func_0x00010c0b7f60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        uVar6 = uVar13;
      }
      _objc_release(uVar6);
      puVar10 = puVar10 + 1;
    } while (puVar1 != puVar10);
    puVar1 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  uVar12 = *(undefined8 *)(puVar5 + 8);
  puVar1 = puVar4;
  func_0x00010bf51e00(puVar4);
  puVar5 = puVar1;
  func_0x00010c0670a0(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(puVar5);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e880(*(undefined8 *)(puVar9 + 8));
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d74a4; end: 10b6d774f; -[SCGalleryEntryChangeRequest removeSyncedSnaps:] */

void FUN_10b6d74a4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar8 = auStack_f0;
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(param_3);
      }
      uVar13 = *(ulong *)(lVar10 * 8);
      puVar4 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar5 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar4);
      puVar4 = PTR_DAT_1126a5228;
      if ((uVar5 & 1) == 0) {
        _objc_retain(uVar13);
        uVar6 = uVar13;
        func_0x000107c318f8(uVar13,puVar4);
        uVar5 = uVar13;
        if ((int)uVar6 == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar13);
        puVar4 = PTR_PTR_1126e0498;
        uVar13 = uVar5;
        func_0x00010c0e0160(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar4 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = puVar1;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar14 != (undefined *)0x0) {
            func_0x00010befa120(puVar2);
          }
        }
        _objc_release(puVar14);
        _objc_release(0);
        _objc_release(puVar4);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        uVar5 = uVar13;
      }
      _objc_release(uVar5);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    puVar8 = auStack_f0;
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar12 = *(undefined8 *)(param_1 + 8);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  puVar14 = puVar4;
  func_0x00010c12e860(uVar12);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar14);
  _objc_retain(puVar8);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar14);
  puVar1 = puVar14;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar14);
      }
      uVar13 = *(ulong *)((long)puVar11 * 8);
      puVar7 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar5 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar7);
      puVar7 = PTR_DAT_1126a5228;
      if ((uVar5 & 1) == 0) {
        _objc_retain(uVar13);
        uVar6 = uVar13;
        func_0x000107c318f8(uVar13,puVar7);
        uVar5 = uVar13;
        if ((int)uVar6 == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar13);
        puVar7 = PTR_PTR_1126e0498;
        uVar13 = uVar5;
        func_0x00010c0e0160(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar7 == (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar15 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
          }
        }
        _objc_release(puVar15);
        _objc_release(0);
        _objc_release(puVar7);
      }
      else {
        func_0x00010c0b7f60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        uVar5 = uVar13;
      }
      _objc_release(uVar5);
      puVar11 = puVar11 + 1;
    } while (puVar1 != puVar11);
    puVar1 = puVar14;
    func_0x00010bf52a60();
  }
  _objc_release(puVar14);
  uVar12 = *(undefined8 *)(param_3 + 8);
  puVar1 = puVar4;
  func_0x00010bf51e00(puVar4);
  puVar11 = puVar1;
  func_0x00010c0670a0(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(puVar11);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e880(*(undefined8 *)(puVar14 + 8));
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d7750; end: 10b6d7a1b; -[SCGalleryEntryChangeRequest insertSyncedSnaps:atIndexes:] */

void FUN_10b6d7750(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar11 = *(ulong *)(lVar9 * 8);
      puVar5 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar11;
      _objc_opt_isKindOfClass(uVar11,puVar5);
      puVar5 = PTR_DAT_1126a5228;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar11);
        uVar7 = uVar11;
        func_0x000107c318f8(uVar11,puVar5);
        uVar6 = uVar11;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar11);
        puVar5 = PTR_PTR_1126e0498;
        uVar11 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        if (puVar5 == (undefined *)0x0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar12 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar12 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar12);
        _objc_release(0);
        _objc_release(puVar5);
      }
      else {
        func_0x00010c0b7f60(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar6 = uVar11;
      }
      _objc_release(uVar6);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar10 = *(undefined8 *)(param_1 + 8);
  puVar5 = puVar3;
  func_0x00010bf51e00(puVar3);
  puVar12 = puVar5;
  func_0x00010c0670a0(uVar10);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126e0498;
    _objc_retain(puVar12);
    func_0x00010bf5f5e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e880(*(undefined8 *)(param_3 + 8));
    _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10b6d7a1c; end: 10b6d7a7f; -[SCGalleryEntryChangeRequest removeSyncedSnapsAtIndexes:] */

void FUN_10b6d7a1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e880(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6d7a80; end: 10b6d7d47; -[SCGalleryEntryChangeRequest replaceSyncedSnapsAtIndexes:withSyncedSnaps:] */

void FUN_10b6d7a80(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  lVar9 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      uVar11 = *(ulong *)(lVar8 * 8);
      puVar4 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar5 = uVar11;
      _objc_opt_isKindOfClass(uVar11,puVar4);
      puVar4 = PTR_DAT_1126a5228;
      if ((uVar5 & 1) == 0) {
        _objc_retain(uVar11);
        uVar6 = uVar11;
        func_0x000107c318f8(uVar11,puVar4);
        uVar5 = uVar11;
        if ((int)uVar6 == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar11);
        puVar4 = PTR_PTR_1126e0498;
        uVar11 = uVar5;
        func_0x00010c0e0160(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        if (puVar4 == (undefined *)0x0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar12 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar12 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar12);
        _objc_release(0);
        _objc_release(puVar4);
      }
      else {
        func_0x00010c0b7f60(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar5 = uVar11;
      }
      _objc_release(uVar5);
      lVar8 = lVar8 + 1;
    } while (lVar9 != lVar8);
    lVar9 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  uVar10 = *(undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c1311c0(uVar10);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126e0498;
    func_0x00010bf5f5e0(PTR_PTR_1126e0498);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(param_3 + 0x10);
    if (lVar9 == 0) {
      puVar3 = PTR_PTR_1126e0520;
      _objc_alloc();
      func_0x00010c028260();
      uVar10 = *(undefined8 *)(param_3 + 0x10);
      *(undefined **)(param_3 + 0x10) = puVar3;
      _objc_release(uVar10);
      lVar9 = *(long *)(param_3 + 0x10);
    }
    _objc_retain(lVar9);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
    return;
  }
  return;
}



/* Entry: 10b6d7d48; end: 10b6d7dc7; -[SCGalleryEntryChangeRequest placeholderForCreatedGalleryEntry] */

void FUN_10b6d7d48(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0(PTR_PTR_1126e0498);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    puVar2 = PTR_PTR_1126e0520;
    _objc_alloc();
    func_0x00010c028260();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b6d7dc8; end: 10b6d7e2f; -[SCGalleryEntryChangeRequest objectID] */

void FUN_10b6d7dc8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e0160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b6d7e30; end: 10b6d855b; -[SCGalleryEntryChangeRequest setWithGalleryEntry:] */

void FUN_10b6d7e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf12220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d500(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf1b100(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170c20(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf3cec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cca0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf3cf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ccc0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  func_0x00010bf3d240(param_3);
  func_0x00010c17cf00(*(undefined8 *)(param_1 + 8));
  func_0x00010bf3d2a0(param_3);
  func_0x00010c17cf80(*(undefined8 *)(param_1 + 8));
  uVar1 = param_3;
  func_0x00010bf3f9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e440(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf3fcc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e4e0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf59960(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185360(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf5bbc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185e60(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf64980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189960(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf8b0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192cc0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf8be20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193320(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf93d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195c20(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1968c0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  func_0x00010bf977c0(param_3);
  func_0x00010c196b40(*(undefined8 *)(param_1 + 8));
  func_0x00010bf9c1c0(param_3);
  func_0x00010c1988e0(*(undefined8 *)(param_1 + 8));
  uVar1 = param_3;
  func_0x00010bf9e140(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199560(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  func_0x00010bfa0420(param_3);
  func_0x00010c19a120(*(undefined8 *)(param_1 + 8));
  uVar1 = param_3;
  func_0x00010bfa3220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ada0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfa32e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ade0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfa3440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ae20(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfa34a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ae80(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfb3860(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e3a0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  func_0x00010bfbdda0(param_3);
  func_0x00010c1a1e20(*(undefined8 *)(param_1 + 8));
  func_0x00010c06cbe0(param_3);
  func_0x00010c1af540(*(undefined8 *)(param_1 + 8));
  func_0x00010c074c20(param_3);
  func_0x00010c1b1aa0(*(undefined8 *)(param_1 + 8));
  func_0x00010c07b240(param_3);
  func_0x00010c1b3980(*(undefined8 *)(param_1 + 8));
  func_0x00010c080ca0(param_3);
  func_0x00010c1b4f20(*(undefined8 *)(param_1 + 8));
  uVar1 = param_3;
  func_0x00010c08b1e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b94c0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0c7500(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5800(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  func_0x00010c0f7a20(param_3);
  func_0x00010c1da500(*(undefined8 *)(param_1 + 8));
  func_0x00010c113c80(param_3);
  func_0x00010c1e33e0(*(undefined8 *)(param_1 + 8));
  uVar1 = param_3;
  func_0x00010c13f6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eda60(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c14be80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5ce0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  func_0x00010c1577e0(param_3);
  func_0x00010c1f9ec0(*(undefined8 *)(param_1 + 8));
  func_0x00010c15e520(param_3);
  func_0x00010c1fce80(*(undefined8 *)(param_1 + 8));
  uVar1 = param_3;
  func_0x00010c241100(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2045e0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c245780(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206280(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2457c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2062c0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c245800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2062e0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  func_0x00010c245cc0(param_3);
  func_0x00010c206420(*(undefined8 *)(param_1 + 8));
  func_0x00010c247f00(param_3);
  func_0x00010c207360(*(undefined8 *)(param_1 + 8));
  uVar1 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f6c0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c266980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210e00(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  func_0x00010c266aa0(param_3);
  func_0x00010c210ee0(*(undefined8 *)(param_1 + 8));
  uVar1 = param_3;
  func_0x00010c266b20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210f40(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c26afc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212c20(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  func_0x00010c26daa0();
  func_0x00010c214020(*(undefined8 *)(param_1 + 8));
  uVar1 = param_3;
  func_0x00010c26e500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2144c0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  func_0x00010c26e540();
  func_0x00010c214500(*(undefined8 *)(param_1 + 8));
  uVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c271540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216480(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  func_0x00010c271560(param_3);
  func_0x00010c2164c0(*(undefined8 *)(param_1 + 8));
  uVar1 = param_3;
  func_0x00010c29e660(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c222df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setViewTypeValue__1126665a0,uVar1);
  return;
}



/* Entry: 10b6d855c; end: 10b6d8563; -[SCGalleryEntryChangeRequest autosaveTimeUtc] */

void FUN_10b6d855c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf12230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_autosaveTimeUtc_1125a2230);
  return;
}



/* Entry: 10b6d8564; end: 10b6d856b; -[SCGalleryEntryChangeRequest setAutosaveTimeUtc:] */

void FUN_10b6d8564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16d510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setAutosaveTimeUtc__112638f60);
  return;
}



/* Entry: 10b6d856c; end: 10b6d8573; -[SCGalleryEntryChangeRequest bitmojiComicId] */

void FUN_10b6d856c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1b110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_bitmojiComicId_1125a45e8);
  return;
}



/* Entry: 10b6d8574; end: 10b6d857b; -[SCGalleryEntryChangeRequest setBitmojiComicId:] */

void FUN_10b6d8574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c170c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setBitmojiComicId__112639d28);
  return;
}



/* Entry: 10b6d857c; end: 10b6d8583; -[SCGalleryEntryChangeRequest clientGenStoryItemOrders] */

void FUN_10b6d857c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3ced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_clientGenStoryItemOrders_1125acd58);
  return;
}



/* Entry: 10b6d8584; end: 10b6d858b; -[SCGalleryEntryChangeRequest setClientGenStoryItemOrders:] */

void FUN_10b6d8584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17ccb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setClientGenStoryItemOrders__11263cd48);
  return;
}



/* Entry: 10b6d858c; end: 10b6d8593; -[SCGalleryEntryChangeRequest clientGenStoryRetryCount] */

void FUN_10b6d858c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3cf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_clientGenStoryRetryCount_1125acd68);
  return;
}



/* Entry: 10b6d8594; end: 10b6d859b; -[SCGalleryEntryChangeRequest setClientGenStoryRetryCount:] */

void FUN_10b6d8594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17ccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setClientGenStoryRetryCount__11263cd50);
  return;
}



/* Entry: 10b6d859c; end: 10b6d85a3; -[SCGalleryEntryChangeRequest clientProcessingBitMaskType] */

void FUN_10b6d859c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_clientProcessingBitMaskTypeValue_1125ace40);
  return;
}



/* Entry: 10b6d85a4; end: 10b6d85ab; -[SCGalleryEntryChangeRequest setClientProcessingBitMaskType:] */

void FUN_10b6d85a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17cf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setClientProcessingBitMaskTypeVa_11263cde0);
  return;
}



/* Entry: 10b6d85ac; end: 10b6d85b3; -[SCGalleryEntryChangeRequest clientProcessingType] */

void FUN_10b6d85ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3d2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_clientProcessingTypeValue_1125ace58);
  return;
}



/* Entry: 10b6d85b4; end: 10b6d85bb; -[SCGalleryEntryChangeRequest setClientProcessingType:] */

void FUN_10b6d85b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setClientProcessingTypeValue__11263ce00);
  return;
}



/* Entry: 10b6d85bc; end: 10b6d85c3; -[SCGalleryEntryChangeRequest collageUCOLensId] */

void FUN_10b6d85bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3f9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_collageUCOLensId_1125ad820);
  return;
}



/* Entry: 10b6d85c4; end: 10b6d85cb; -[SCGalleryEntryChangeRequest setCollageUCOLensId:] */

void FUN_10b6d85c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setCollageUCOLensId__11263d330);
  return;
}



/* Entry: 10b6d85cc; end: 10b6d85d3; -[SCGalleryEntryChangeRequest collectionAttributes] */

void FUN_10b6d85cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3fcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_collectionAttributes_1125ad8d8);
  return;
}



/* Entry: 10b6d85d4; end: 10b6d85db; -[SCGalleryEntryChangeRequest setCollectionAttributes:] */

void FUN_10b6d85d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17e4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setCollectionAttributes__11263d358);
  return;
}



/* Entry: 10b6d85dc; end: 10b6d85e3; -[SCGalleryEntryChangeRequest createTimeUtc] */

void FUN_10b6d85dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_createTimeUtc_1125b4000)
  ;
  return;
}



/* Entry: 10b6d85e4; end: 10b6d85eb; -[SCGalleryEntryChangeRequest setCreateTimeUtc:] */

void FUN_10b6d85e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c185370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setCreateTimeUtc__11263eef8);
  return;
}



/* Entry: 10b6d85ec; end: 10b6d85f3; -[SCGalleryEntryChangeRequest creatorUserId] */

void FUN_10b6d85ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5bbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_creatorUserId_1125b4898)
  ;
  return;
}



/* Entry: 10b6d85f4; end: 10b6d85fb; -[SCGalleryEntryChangeRequest setCreatorUserId:] */

void FUN_10b6d85f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c185e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setCreatorUserId__11263f1b8);
  return;
}



/* Entry: 10b6d85fc; end: 10b6d8603; -[SCGalleryEntryChangeRequest dataVaultEncryption] */

void FUN_10b6d85fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf64990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_dataVaultEncryption_1125b6c08);
  return;
}



/* Entry: 10b6d8604; end: 10b6d860b; -[SCGalleryEntryChangeRequest setDataVaultEncryption:] */

void FUN_10b6d8604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c189970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setDataVaultEncryption__112640078);
  return;
}



/* Entry: 10b6d860c; end: 10b6d8613; -[SCGalleryEntryChangeRequest duplicateTimeUtc] */

void FUN_10b6d860c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8b0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_duplicateTimeUtc_1125c05d0);
  return;
}



/* Entry: 10b6d8614; end: 10b6d861b; -[SCGalleryEntryChangeRequest setDuplicateTimeUtc:] */

void FUN_10b6d8614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c192cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setDuplicateTimeUtc__112642550);
  return;
}



/* Entry: 10b6d861c; end: 10b6d8623; -[SCGalleryEntryChangeRequest earliestSnapCreateTimeUtc] */

void FUN_10b6d861c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8be30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_earliestSnapCreateTimeUtc_1125c0930);
  return;
}



/* Entry: 10b6d8624; end: 10b6d862b; -[SCGalleryEntryChangeRequest setEarliestSnapCreateTimeUtc:] */

void FUN_10b6d8624(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c193330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setEarliestSnapCreateTimeUtc__1126426e8);
  return;
}



/* Entry: 10b6d862c; end: 10b6d8633; -[SCGalleryEntryChangeRequest encryption] */

void FUN_10b6d862c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf93d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_encryption_1125c28f0);
  return;
}



/* Entry: 10b6d8634; end: 10b6d863b; -[SCGalleryEntryChangeRequest setEncryption:] */

void FUN_10b6d8634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setEncryption__112643128);
  return;
}



/* Entry: 10b6d863c; end: 10b6d8643; -[SCGalleryEntryChangeRequest entryId] */

void FUN_10b6d863c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_entryId_1125c3628);
  return;
}



/* Entry: 10b6d8644; end: 10b6d864b; -[SCGalleryEntryChangeRequest setEntryId:] */

void FUN_10b6d8644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1968d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setEntryId__112643450);
  return;
}



/* Entry: 10b6d864c; end: 10b6d8653; -[SCGalleryEntryChangeRequest entrySource] */

void FUN_10b6d864c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf977f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_entrySourceValue_1125c37a0);
  return;
}



/* Entry: 10b6d8654; end: 10b6d865b; -[SCGalleryEntryChangeRequest setEntrySource:] */

void FUN_10b6d8654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c196b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setEntrySourceValue__1126434f0);
  return;
}



/* Entry: 10b6d865c; end: 10b6d8663; -[SCGalleryEntryChangeRequest expectedClientGenSnapsCount] */

void FUN_10b6d865c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_expectedClientGenSnapsCountValue_1125c4a20);
  return;
}



/* Entry: 10b6d8664; end: 10b6d866b; -[SCGalleryEntryChangeRequest setExpectedClientGenSnapsCount:] */

void FUN_10b6d8664(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1988f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setExpectedClientGenSnapsCountVa_112643c58);
  return;
}



/* Entry: 10b6d866c; end: 10b6d8673; -[SCGalleryEntryChangeRequest externalId] */

void FUN_10b6d866c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9e150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_externalId_1125c51f8);
  return;
}



/* Entry: 10b6d8674; end: 10b6d867b; -[SCGalleryEntryChangeRequest setExternalId:] */

void FUN_10b6d8674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c199570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setExternalId__112643f78);
  return;
}



/* Entry: 10b6d867c; end: 10b6d8683; -[SCGalleryEntryChangeRequest fallbackFeaturedStoryCategory] */

void FUN_10b6d867c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa0450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_fallbackFeaturedStoryCategoryVal_1125c5ab8);
  return;
}



/* Entry: 10b6d8684; end: 10b6d868b; -[SCGalleryEntryChangeRequest setFallbackFeaturedStoryCategory:] */

void FUN_10b6d8684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19a130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setFallbackFeaturedStoryCategory_112644268);
  return;
}



/* Entry: 10b6d868c; end: 10b6d8693; -[SCGalleryEntryChangeRequest featuredExpirationTimeUtc] */

void FUN_10b6d868c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa3230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_featuredExpirationTimeUtc_1125c6630);
  return;
}



/* Entry: 10b6d8694; end: 10b6d869b; -[SCGalleryEntryChangeRequest setFeaturedExpirationTimeUtc:] */

void FUN_10b6d8694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19adb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setFeaturedExpirationTimeUtc__112644588);
  return;
}



/* Entry: 10b6d869c; end: 10b6d86a3; -[SCGalleryEntryChangeRequest featuredStoryActivationDateUtc] */

void FUN_10b6d869c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa32f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_featuredStoryActivationDateUtc_1125c6660);
  return;
}



/* Entry: 10b6d86a4; end: 10b6d86ab; -[SCGalleryEntryChangeRequest setFeaturedStoryActivationDateUtc:] */

void FUN_10b6d86a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19adf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setFeaturedStoryActivationDateUt_112644598);
  return;
}



/* Entry: 10b6d86ac; end: 10b6d86b3; -[SCGalleryEntryChangeRequest featuredStoryLoggingInfo] */

void FUN_10b6d86ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa3450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_featuredStoryLoggingInfo_1125c66b8);
  return;
}



/* Entry: 10b6d86b4; end: 10b6d86bb; -[SCGalleryEntryChangeRequest setFeaturedStoryLoggingInfo:] */

void FUN_10b6d86b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19ae30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setFeaturedStoryLoggingInfo__1126445a8);
  return;
}



/* Entry: 10b6d86bc; end: 10b6d86c3; -[SCGalleryEntryChangeRequest featuredStoryTemplateName] */

void FUN_10b6d86bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa34b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_featuredStoryTemplateName_1125c66d0);
  return;
}



/* Entry: 10b6d86c4; end: 10b6d86cb; -[SCGalleryEntryChangeRequest setFeaturedStoryTemplateName:] */

void FUN_10b6d86c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19ae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setFeaturedStoryTemplateName__1126445c0);
  return;
}



/* Entry: 10b6d86cc; end: 10b6d86d3; -[SCGalleryEntryChangeRequest folderType] */

void FUN_10b6d86cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_folderType_1125ca7c0);
  return;
}



/* Entry: 10b6d86d4; end: 10b6d86db; -[SCGalleryEntryChangeRequest setFolderType:] */

void FUN_10b6d86d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19e3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setFolderType__112645308);
  return;
}



/* Entry: 10b6d86dc; end: 10b6d86e3; -[SCGalleryEntryChangeRequest galleryType] */

void FUN_10b6d86dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_galleryTypeValue_1125cd118);
  return;
}



/* Entry: 10b6d86e4; end: 10b6d86eb; -[SCGalleryEntryChangeRequest setGalleryType:] */

void FUN_10b6d86e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a1e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setGalleryTypeValue__1126461a8);
  return;
}



/* Entry: 10b6d86ec; end: 10b6d86f3; -[SCGalleryEntryChangeRequest isAutoClusterPrototype] */

void FUN_10b6d86ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06cc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isAutoClusterPrototypeValue_1125f8d10);
  return;
}



/* Entry: 10b6d86f4; end: 10b6d86fb; -[SCGalleryEntryChangeRequest setIsAutoClusterPrototype:] */

void FUN_10b6d86f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1af550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setIsAutoClusterPrototypeValue__112649778);
  return;
}



/* Entry: 10b6d86fc; end: 10b6d8703; -[SCGalleryEntryChangeRequest isHidden] */

void FUN_10b6d86fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c074c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isHiddenValue_1125fad20)
  ;
  return;
}



/* Entry: 10b6d8704; end: 10b6d870b; -[SCGalleryEntryChangeRequest setIsHidden:] */

void FUN_10b6d8704(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b1ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setIsHiddenValue__11264a0d0);
  return;
}



/* Entry: 10b6d870c; end: 10b6d8713; -[SCGalleryEntryChangeRequest isPrivate] */

void FUN_10b6d870c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07b2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isPrivateValue_1125fc6c8);
  return;
}



/* Entry: 10b6d8714; end: 10b6d871b; -[SCGalleryEntryChangeRequest setIsPrivate:] */

void FUN_10b6d8714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b3990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setIsPrivateValue__11264a888);
  return;
}



/* Entry: 10b6d871c; end: 10b6d8723; -[SCGalleryEntryChangeRequest isTemporary] */

void FUN_10b6d871c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c080d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isTemporaryValue_1125fdd58);
  return;
}



/* Entry: 10b6d8724; end: 10b6d872b; -[SCGalleryEntryChangeRequest setIsTemporary:] */

void FUN_10b6d8724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b4f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setIsTemporaryValue__11264adf0);
  return;
}



/* Entry: 10b6d872c; end: 10b6d8733; -[SCGalleryEntryChangeRequest latestSnapCaptureTimeUtc] */

void FUN_10b6d872c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08b1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_latestSnapCaptureTimeUtc_112600688);
  return;
}



/* Entry: 10b6d8734; end: 10b6d873b; -[SCGalleryEntryChangeRequest setLatestSnapCaptureTimeUtc:] */

void FUN_10b6d8734(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b94d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setLatestSnapCaptureTimeUtc__11264bf58);
  return;
}



/* Entry: 10b6d873c; end: 10b6d8743; -[SCGalleryEntryChangeRequest memDataId] */

void FUN_10b6d873c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_memDataId_11260f758);
  return;
}



/* Entry: 10b6d8744; end: 10b6d874b; -[SCGalleryEntryChangeRequest setMemDataId:] */

void FUN_10b6d8744(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c5810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setMemDataId__11264f028)
  ;
  return;
}



/* Entry: 10b6d874c; end: 10b6d8753; -[SCGalleryEntryChangeRequest pendingSyncs] */

void FUN_10b6d874c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_pendingSyncsValue_11261b8b0);
  return;
}



/* Entry: 10b6d8754; end: 10b6d875b; -[SCGalleryEntryChangeRequest setPendingSyncs:] */

void FUN_10b6d8754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1da510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setPendingSyncsValue__112654368);
  return;
}



/* Entry: 10b6d875c; end: 10b6d8763; -[SCGalleryEntryChangeRequest priority] */

void FUN_10b6d875c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c113e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_priorityValue_1126229a8)
  ;
  return;
}



/* Entry: 10b6d8764; end: 10b6d876b; -[SCGalleryEntryChangeRequest setPriority:] */

void FUN_10b6d8764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e33f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setPriorityValue__112656720);
  return;
}


