/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106db7068; end: 106db72af; -[SCMemoriesScreenshopCategoryDataSource _dedupeCoverItemsForFilledCategories] */

void FUN_106db7068(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  long in_x5;
  long in_x6;
  undefined8 *puVar12;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar13;
  undefined8 *unaff_x24;
  undefined8 *puVar14;
  undefined8 *unaff_x25;
  long lVar15;
  undefined8 *unaff_x26;
  undefined8 *puVar16;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 auStack_368 [128];
  long lStack_2e8;
  long lStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1b0;
  long lStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  long lStack_158;
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
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar12 = *(undefined8 **)(param_1 + 0x58);
  _objc_retain(puVar12);
  puVar2 = &uStack_130;
  puVar16 = auStack_f0;
  puVar14 = puVar12;
  puStack_138 = puVar12;
  func_0x00010bf52a60();
  if (puVar14 != (undefined8 *)0x0) {
    unaff_x28 = *plStack_120;
    do {
      puVar12 = (undefined8 *)0x0;
      do {
        if (*plStack_120 != unaff_x28) {
          _objc_enumerationMutation(puStack_138);
        }
        unaff_x24 = *(undefined8 **)(lStack_128 + (long)puVar12 * 8);
        puVar2 = unaff_x24;
        func_0x00010bf538a0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar2;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = puVar16;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = puVar1;
        func_0x00010bf4b900(puVar1,param_2,unaff_x26);
        _objc_release(unaff_x26);
        _objc_release(puVar16);
        _objc_release(puVar2);
        if ((int)unaff_x27 != 0) {
          lVar11 = param_1;
          func_0x00010be1e1c0(param_1,param_2,puVar1,unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = *(undefined8 **)(param_1 + 0x50);
          func_0x00010c0e00e0(puVar2,param_2,lVar11);
          _objc_retainAutoreleasedReturnValue();
          if (puVar2 != (undefined8 *)0x0) {
            unaff_x26 = puVar2;
            FUN_106dbda6c();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c184c20(unaff_x24,param_2,unaff_x26);
            _objc_release(unaff_x26);
          }
          _objc_release(puVar2);
          _objc_release(lVar11);
        }
        func_0x00010bf538a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = unaff_x25;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        if (unaff_x23 != (undefined8 *)0x0) {
          func_0x00010befa120(puVar1,param_2,unaff_x23);
        }
        _objc_release(unaff_x23);
        puVar12 = (undefined8 *)((long)puVar12 + 1);
      } while (puVar14 != puVar12);
      puVar2 = &uStack_130;
      puVar16 = auStack_f0;
      puVar14 = puStack_138;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (puVar14 != (undefined8 *)0x0);
  }
  _objc_release(puStack_138);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_106db72b0;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a0 = unaff_x28;
  puStack_198 = unaff_x27;
  puStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  uStack_170 = unaff_x22;
  puStack_168 = puVar12;
  puStack_160 = puVar1;
  lStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar16);
  puVar1 = puVar16;
  func_0x00010bf538a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar14;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar1);
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  puVar4 = puVar16;
  func_0x00010bf33500();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = &uStack_270;
  puVar5 = puVar4;
  func_0x00010bf52a60();
  if (puVar5 != (undefined8 *)0x0) {
    unaff_x28 = *plStack_260;
    puStack_278 = puVar3;
    do {
      puVar12 = (undefined8 *)0x0;
      do {
        if (*plStack_260 != unaff_x28) {
          _objc_enumerationMutation(puVar4);
        }
        puVar14 = *(undefined8 **)(lStack_268 + (long)puVar12 * 8);
        unaff_x25 = puVar14;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x25;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = puVar2;
        puVar1 = unaff_x26;
        func_0x00010bf4b900();
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        if (((ulong)unaff_x27 & 1) == 0) {
          func_0x00010c0844e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar14;
          func_0x00010c0844e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puStack_278);
          _objc_release(puVar14);
          goto LAB_106db7450;
        }
        puVar12 = (undefined8 *)((long)puVar12 + 1);
      } while (puVar5 != puVar12);
      puVar1 = &uStack_270;
      puVar5 = puVar4;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined8 *)0x0);
    puVar14 = (undefined8 *)0x0;
    puVar3 = puStack_278;
  }
LAB_106db7450:
  _objc_release(puVar4);
  _objc_release(puVar16);
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
    ___stack_chk_fail();
    puVar9 = &uStack_3b0;
    pcStack_288 = FUN_106db74a8;
    lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_2e0 = unaff_x28;
    puStack_2d8 = unaff_x27;
    puStack_2d0 = unaff_x26;
    puStack_2c8 = unaff_x25;
    puStack_2c0 = puVar3;
    puStack_2b8 = puVar14;
    puStack_2b0 = puVar4;
    puStack_2a8 = puVar12;
    puStack_2a0 = puVar16;
    puStack_298 = puVar2;
    ppuStack_290 = &puStack_150;
    _objc_retain(puVar1);
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    plStack_3a0 = (long *)0x0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    _objc_retain(puVar1);
    iVar10 = (int)auStack_368;
    lVar11 = 0x10;
    puVar2 = puVar1;
    func_0x00010bf52a60(puVar1,param_2,&uStack_3b0);
    if (puVar2 != (undefined8 *)0x0) {
      lVar15 = *plStack_3a0;
      do {
        puVar16 = (undefined8 *)0x0;
        do {
          if (*plStack_3a0 != lVar15) {
            _objc_enumerationMutation(puVar1);
          }
          lVar11 = puVar5[10];
          func_0x00010c0e00e0(lVar11,param_2,*(undefined8 *)(lStack_3a8 + (long)puVar16 * 8));
          _objc_retainAutoreleasedReturnValue();
          if (lVar11 != 0) {
            lVar6 = lVar11;
            FUN_106dbda6c();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3,param_2,lVar6);
            _objc_release(lVar6);
          }
          _objc_release(lVar11);
          puVar16 = (undefined8 *)((long)puVar16 + 1);
        } while (puVar2 != puVar16);
        iVar10 = (int)auStack_368;
        lVar11 = 0x10;
        puVar2 = puVar1;
        puVar9 = &uStack_3b0;
        func_0x00010bf52a60(puVar1,param_2,&uStack_3b0);
      } while (puVar2 != (undefined8 *)0x0);
    }
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
      ___stack_chk_fail();
      _objc_retain(puVar9);
      _objc_retain(lVar11);
      _objc_retain(in_x5);
      _objc_retain(in_x6);
      uVar7 = puVar1[0xb];
      func_0x00010bf529e0();
      puVar2 = puVar1 + 1;
      _objc_loadWeakRetained(puVar2);
      func_0x00010bf771e0();
      _objc_release(puVar2);
      if (iVar10 != 0) {
        func_0x00010befa120(puVar1[0xf],param_2,puVar9);
        lVar15 = lVar11;
        func_0x00010bf529e0();
        if (((lVar15 == 0) && (lVar15 = in_x5, func_0x00010bf529e0(), lVar15 == 0)) &&
           (lVar15 = in_x6, func_0x00010bf529e0(), lVar15 == 0)) {
          func_0x00010befa120(puVar1[0xe],param_2,puVar9);
        }
        func_0x00010be75bc0(puVar1,param_2,lVar11,puVar9,puVar1[7]);
        func_0x00010be75bc0(puVar1,param_2,in_x5,puVar9,puVar1[8]);
        func_0x00010be75bc0(puVar1,param_2,in_x6,puVar9,puVar1[9]);
        func_0x00010bdebdc0(puVar1);
        if (uVar7 < 2) {
          lVar15 = puVar1[0xb];
          func_0x00010bf529e0();
          if (lVar15 == 2) {
            uVar13 = puVar1[0x10];
            puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d9840(uVar13,param_2,puVar8);
            _objc_release(puVar8);
          }
        }
      }
      _objc_release(in_x6);
      _objc_release(in_x5);
      _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar9);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106db72b0; end: 106db74a7; -[SCMemoriesScreenshopCategoryDataSource _getCoverItemIdentifierWithCoverItemsSet:category:] */

void FUN_106db72b0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 *param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *unaff_x21;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *unaff_x25;
  long lVar11;
  undefined8 *unaff_x26;
  undefined8 *puVar12;
  ulong unaff_x27;
  long unaff_x28;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_228 [128];
  long lStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  ulong uStack_158;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010bf538a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar10;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  puVar12 = param_4;
  func_0x00010bf33500();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = &uStack_130;
  puVar3 = puVar12;
  func_0x00010bf52a60();
  if (puVar3 != (undefined8 *)0x0) {
    unaff_x28 = *plStack_120;
    puStack_138 = puVar2;
    do {
      unaff_x21 = (undefined8 *)0x0;
      do {
        if (*plStack_120 != unaff_x28) {
          _objc_enumerationMutation(puVar12);
        }
        puVar10 = *(undefined8 **)(lStack_128 + (long)unaff_x21 * 8);
        unaff_x25 = puVar10;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x25;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = param_3;
        puVar1 = unaff_x26;
        func_0x00010bf4b900();
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        if ((unaff_x27 & 1) == 0) {
          func_0x00010c0844e0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar10;
          func_0x00010c0844e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puStack_138);
          _objc_release(puVar10);
          goto LAB_106db7450;
        }
        unaff_x21 = (undefined8 *)((long)unaff_x21 + 1);
      } while (puVar3 != unaff_x21);
      puVar1 = &uStack_130;
      puVar3 = puVar12;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined8 *)0x0);
    puVar10 = (undefined8 *)0x0;
    puVar2 = puStack_138;
  }
LAB_106db7450:
  _objc_release(puVar12);
  _objc_release(param_4);
  uVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar3 = &uStack_270;
    pcStack_148 = FUN_106db74a8;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_1a0 = unaff_x28;
    uStack_198 = unaff_x27;
    puStack_190 = unaff_x26;
    puStack_188 = unaff_x25;
    puStack_180 = puVar2;
    puStack_178 = puVar10;
    puStack_170 = puVar12;
    puStack_168 = unaff_x21;
    puStack_160 = param_4;
    uStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(puVar1);
    puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    _objc_retain(puVar1);
    iVar7 = (int)auStack_228;
    lVar8 = 0x10;
    puVar10 = puVar1;
    func_0x00010bf52a60(puVar1,param_2,&uStack_270);
    if (puVar10 != (undefined8 *)0x0) {
      lVar11 = *plStack_260;
      do {
        puVar12 = (undefined8 *)0x0;
        do {
          if (*plStack_260 != lVar11) {
            _objc_enumerationMutation(puVar1);
          }
          lVar8 = *(long *)(uVar5 + 0x50);
          func_0x00010c0e00e0(lVar8,param_2,*(undefined8 *)(lStack_268 + (long)puVar12 * 8));
          _objc_retainAutoreleasedReturnValue();
          if (lVar8 != 0) {
            lVar4 = lVar8;
            FUN_106dbda6c();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2,param_2,lVar4);
            _objc_release(lVar4);
          }
          _objc_release(lVar8);
          puVar12 = (undefined8 *)((long)puVar12 + 1);
        } while (puVar10 != puVar12);
        iVar7 = (int)auStack_228;
        lVar8 = 0x10;
        puVar10 = puVar1;
        puVar3 = &uStack_270;
        func_0x00010bf52a60(puVar1,param_2,&uStack_270);
      } while (puVar10 != (undefined8 *)0x0);
    }
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_retain(puVar3);
      _objc_retain(lVar8);
      _objc_retain(param_6);
      _objc_retain(param_7);
      uVar5 = puVar1[0xb];
      func_0x00010bf529e0();
      puVar10 = puVar1 + 1;
      _objc_loadWeakRetained(puVar10);
      func_0x00010bf771e0();
      _objc_release(puVar10);
      if (iVar7 != 0) {
        func_0x00010befa120(puVar1[0xf],param_2,puVar3);
        lVar11 = lVar8;
        func_0x00010bf529e0();
        if (((lVar11 == 0) && (lVar11 = param_6, func_0x00010bf529e0(), lVar11 == 0)) &&
           (lVar11 = param_7, func_0x00010bf529e0(), lVar11 == 0)) {
          func_0x00010befa120(puVar1[0xe],param_2,puVar3);
        }
        func_0x00010be75bc0(puVar1,param_2,lVar8,puVar3,puVar1[7]);
        func_0x00010be75bc0(puVar1,param_2,param_6,puVar3,puVar1[8]);
        func_0x00010be75bc0(puVar1,param_2,param_7,puVar3,puVar1[9]);
        func_0x00010bdebdc0(puVar1);
        if (uVar5 < 2) {
          lVar11 = puVar1[0xb];
          func_0x00010bf529e0();
          if (lVar11 == 2) {
            uVar9 = puVar1[0x10];
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d9840(uVar9,param_2,puVar6);
            _objc_release(puVar6);
          }
        }
      }
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106db74a8; end: 106db761b; -[SCMemoriesScreenshopCategoryDataSource _createComposerItemsFromIdentifiers:] */

void FUN_106db74a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  _objc_retain(param_3);
  iVar7 = (int)auStack_e8;
  lVar8 = 0x10;
  lVar5 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130);
  if (lVar5 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = *(long *)(param_1 + 0x50);
        func_0x00010c0e00e0(lVar2,param_2,*(undefined8 *)(lStack_128 + lVar8 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          lVar3 = lVar2;
          FUN_106dbda6c();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,lVar3);
          _objc_release(lVar3);
        }
        _objc_release(lVar2);
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      iVar7 = (int)auStack_e8;
      lVar8 = 0x10;
      lVar5 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(param_3,param_2,&uStack_130);
    } while (lVar5 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(lVar8);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar4 = *(ulong *)(param_3 + 0x58);
  func_0x00010bf529e0();
  lVar5 = param_3 + 8;
  _objc_loadWeakRetained(lVar5);
  func_0x00010bf771e0();
  _objc_release(lVar5);
  if (iVar7 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_3 + 0x78),param_2,puVar6);
    lVar5 = lVar8;
    func_0x00010bf529e0();
    if (((lVar5 == 0) && (lVar5 = param_6, func_0x00010bf529e0(), lVar5 == 0)) &&
       (lVar5 = param_7, func_0x00010bf529e0(), lVar5 == 0)) {
      func_0x00010befa120(*(undefined8 *)(param_3 + 0x70),param_2,puVar6);
    }
    func_0x00010be75bc0(param_3,param_2,lVar8,puVar6,*(undefined8 *)(param_3 + 0x38));
    func_0x00010be75bc0(param_3,param_2,param_6,puVar6,*(undefined8 *)(param_3 + 0x40));
    func_0x00010be75bc0(param_3,param_2,param_7,puVar6,*(undefined8 *)(param_3 + 0x48));
    func_0x00010bdebdc0(param_3);
    if (uVar4 < 2) {
      lVar5 = *(long *)(param_3 + 0x58);
      func_0x00010bf529e0();
      if (lVar5 == 2) {
        uVar9 = *(undefined8 *)(param_3 + 0x80);
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar9,param_2,puVar1);
        _objc_release(puVar1);
      }
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 106db761c; end: 106db779b; -[SCMemoriesScreenshopCategoryDataSource didGetCategoryDataForItem:shoppable:withCategories:withColors:withPatterns:] */

void FUN_106db761c(long param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5,
                  long param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(ulong *)(param_1 + 0x58);
  func_0x00010bf529e0();
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf771e0();
  _objc_release(lVar2);
  if (param_4 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x78),param_2,param_3);
    lVar2 = param_5;
    func_0x00010bf529e0();
    if (((lVar2 == 0) && (lVar2 = param_6, func_0x00010bf529e0(), lVar2 == 0)) &&
       (lVar2 = param_7, func_0x00010bf529e0(), lVar2 == 0)) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
    }
    func_0x00010be75bc0(param_1,param_2,param_5,param_3,*(undefined8 *)(param_1 + 0x38));
    func_0x00010be75bc0(param_1,param_2,param_6,param_3,*(undefined8 *)(param_1 + 0x40));
    func_0x00010be75bc0(param_1,param_2,param_7,param_3,*(undefined8 *)(param_1 + 0x48));
    func_0x00010bdebdc0(param_1);
    if (uVar1 < 2) {
      lVar2 = *(long *)(param_1 + 0x58);
      func_0x00010bf529e0();
      if (lVar2 == 2) {
        uVar4 = *(undefined8 *)(param_1 + 0x80);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar4,param_2,puVar3);
        _objc_release(puVar3);
      }
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106db779c; end: 106db7ccf; -[SCMemoriesScreenshopCategoryDataSource getOrderedUncategorizedItems] */

void FUN_106db779c(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar1 = *(char *)(param_1 + 0x88);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  if (cVar1 == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c22cc20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaa220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(lVar2);
    puVar4 = *(undefined **)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c22cc20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bfa8f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bf00d20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_retain(lVar7);
    lVar2 = lVar7;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar7);
        }
        uVar5 = *(undefined8 *)(lVar13 * 8);
        lVar11 = *(long *)(param_1 + 0x50);
        func_0x00010c09da80(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        if (lVar11 != 0) {
          func_0x00010c12d360(puVar4);
        }
        _objc_release(lVar11);
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      lVar2 = lVar7;
      func_0x00010bf52a60();
    }
    _objc_release(lVar7);
    _objc_retain(puVar8);
    puVar9 = puVar8;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar9 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar8);
        }
        uVar5 = *(undefined8 *)((long)puVar14 * 8);
        lVar12 = *(long *)(param_1 + 0x50);
        func_0x00010c09da80(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        if (lVar12 != 0) {
          func_0x00010c12d360(puVar4);
        }
        _objc_release(lVar12);
        puVar14 = puVar14 + 1;
      } while (puVar9 != puVar14);
      puVar9 = puVar8;
      func_0x00010bf52a60();
    }
    _objc_release(puVar8);
    puVar9 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar4;
    func_0x00010c246cc0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  else {
    func_0x00010bfab1a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar7);
    lVar2 = lVar7;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar7);
        }
        uVar5 = *(undefined8 *)(lVar13 * 8);
        lVar11 = *(long *)(param_1 + 0x50);
        func_0x00010c09da80(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        if (lVar11 != 0) {
          func_0x00010befa120(puVar8);
        }
        _objc_release(lVar11);
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      lVar2 = lVar7;
      func_0x00010bf52a60();
    }
    _objc_release(lVar7);
    puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar8;
    func_0x00010c246cc0(puVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar8);
  _objc_release(lVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar7 + 0x80,0);
  _objc_storeStrong(lVar7 + 0x78,0);
  _objc_storeStrong(lVar7 + 0x70,0);
  _objc_storeStrong(lVar7 + 0x68,0);
  _objc_storeStrong(lVar7 + 0x60,0);
  _objc_storeStrong(lVar7 + 0x58,0);
  _objc_storeStrong(lVar7 + 0x50,0);
  _objc_storeStrong(lVar7 + 0x48,0);
  _objc_storeStrong(lVar7 + 0x40,0);
  _objc_storeStrong(lVar7 + 0x38,0);
  _objc_storeStrong(lVar7 + 0x30,0);
  _objc_storeStrong(lVar7 + 0x28,0);
  _objc_storeStrong(lVar7 + 0x20,0);
  _objc_storeStrong(lVar7 + 0x18,0);
  _objc_storeStrong(lVar7 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(lVar7 + 8);
  return;
}



/* Entry: 106db7cd0; end: 106db7da3; -[SCMemoriesScreenshopCategoryDataSource .cxx_destruct] */

void FUN_106db7cd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106db7da4; end: 106db7ea3; -[SCMemoriesScreenshopCategoryProcessor initWithDelegate:performer:screenshopPersistenceService:screenshopNetworkService:] */

undefined1 *
FUN_106db7da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f6e90;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 8) = 4;
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106db7ea4; end: 106db7ec7; -[SCMemoriesScreenshopCategoryProcessor processEvent:] */

void FUN_106db7ea4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 - 1U < 5) {
    uVar1 = *(undefined8 *)(&UNK_10ddee138 + (param_3 - 1U) * 8);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea5e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setNextState__112587138,uVar1);
  return;
}



/* Entry: 106db7ec8; end: 106db7ecf; -[SCMemoriesScreenshopCategoryProcessor getSessionTotalItemCount] */

undefined8 FUN_106db7ec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106db7ed0; end: 106db7f4b; -[SCMemoriesScreenshopCategoryProcessor _setNextState:] */

void FUN_106db7ed0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (param_3 != lVar1) {
    if (lVar1 < 2) {
      if (lVar1 == 0) {
        if (param_3 == 2) {
          *(undefined8 *)(param_1 + 8) = 2;
          return;
        }
        if (param_3 == 1) goto LAB_106db7f34;
      }
      else if (lVar1 == 1 && param_3 != 3) {
        *(long *)(param_1 + 8) = param_3;
        return;
      }
    }
    else {
      if (lVar1 != 2) {
        if (lVar1 != 4) {
          return;
        }
        if (param_3 == 5) goto LAB_106db7f34;
      }
      if (param_3 == 3) {
LAB_106db7f34:
        *(undefined8 *)(param_1 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be1dad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__getCategoryDataForNextItemIfAva_112565050);
        return;
      }
    }
  }
  return;
}



/* Entry: 106db7f4c; end: 106db80c3; -[SCMemoriesScreenshopCategoryProcessor _getCategoryDataForNextItemIfAvailable] */

void FUN_106db7f4c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(long *)(param_2 + 8) == 1) {
    lVar1 = param_2 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bfc8520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      *(undefined8 *)(param_2 + 8) = 0;
    }
    else {
      lVar1 = lVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c09da80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf331e0();
      _objc_release(uVar4);
      _objc_initWeak(auStack_58,param_2);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_106db80c4;
      puStack_70 = &UNK_110865e48;
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(lVar3);
      lStack_68 = lVar3;
      FUN_106dbdcec(param_1,lVar1,&puStack_88);
      _objc_release(lStack_68);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(lVar3);
      _objc_release(lVar1);
    }
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 106db80c4; end: 106db8223;  */

void FUN_106db80c4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010bddd5c0(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106db8224; end: 106db834f;  */

/* WARNING: Possible PIC construction at 0x000106db8314: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106db8318) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_106db8224(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c22cc60();
    func_0x00010be38820(uVar4);
    lVar1 = *(long *)(param_1 + 0x28) + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c22cc60(uVar2);
    uVar4 = uVar2;
    func_0x00010bf33060(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf416c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5ae0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf771a0(lVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be1dad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s__getCategoryDataForNextItemIfAva_112565050);
  return;
}



/* Entry: 106db8350; end: 106db8517; -[SCMemoriesScreenshopCategoryProcessor _checkCategoryPersistingResultFor:assetId:completion:] */

void FUN_106db8350(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_60 = param_3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = auStack_68;
  _objc_copyWeak(auStack_70);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010bf33200(uVar1);
  iVar11 = (int)puVar12;
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(puVar10);
  lVar4 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (((lVar4 == 0) || (iVar11 != 0)) ||
     (puVar5 = puVar10, func_0x00010bf529e0(), puVar5 == (undefined1 *)0x0)) {
    (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),0);
  }
  else {
    puVar5 = puVar10;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar4 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22cc60();
    puVar6 = puVar5;
    func_0x00010bf33060(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf416c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c0f5ae0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar4 + 0x28);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar9;
    func_0x00010c22cc20();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar13);
    uVar14 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(uVar14);
    _objc_retain(puVar10);
    func_0x00010c283740(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar3);
    _objc_release(puVar10);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(puVar5);
  }
  _objc_release(lVar4);
  _objc_release(puVar10);
  return;
}



/* Entry: 106db8518; end: 106db871b;  */

void FUN_106db8518(long param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (((lVar1 == 0) || (param_3 != 0)) || (lVar2 = param_2, func_0x00010bf529e0(), lVar2 == 0)) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  }
  else {
    lVar2 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22cc60();
    lVar4 = lVar2;
    func_0x00010bf33060(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf416c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c0f5ae0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c22cc20();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar10);
    _objc_retain(param_2);
    func_0x00010c283740(uVar3);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(param_2);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106db871c; end: 106db872b;  */

void FUN_106db871c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106db8728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106db872c; end: 106db874b; -[SCMemoriesScreenshopCategoryProcessor _incrementScanningSessionCounts:] */

void FUN_106db872c(long param_1,undefined8 param_2,int param_3)

{
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  if (param_3 != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
  }
  return;
}



/* Entry: 106db874c; end: 106db878f; -[SCMemoriesScreenshopCategoryProcessor .cxx_destruct] */

void FUN_106db874c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 106db8790; end: 106db88af; -[SCMemoriesScreenshopCatetoryStoreImpl initWithFeatureSettingsService:] */

undefined1 * FUN_106db8790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f6e98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d2920;
    _objc_alloc();
    func_0x00010c151680(*(undefined8 *)((long)puVar1 + 0x20));
    func_0x00010c042760(0,0,0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)((long)puVar1 + 8));
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)((long)puVar1 + 0x10));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106db88b0; end: 106db8933; -[SCMemoriesScreenshopCatetoryStoreImpl setCategoriesWithArray:withCategoriesMetadata:] */

void FUN_106db88b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106db8934; end: 106db8a8f; -[SCMemoriesScreenshopCatetoryStoreImpl shoppableScreenshotItemsForCategory:] */

void FUN_106db8934(long param_1,undefined **param_2,undefined1 *param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
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
  lVar7 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60();
  ppuVar8 = (undefined **)0x0;
  if (lVar1 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar7);
        }
        ppuVar8 = *(undefined ***)(lStack_128 + lVar11 * 8);
        ppuVar2 = ppuVar8;
        func_0x00010bf33560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        puVar6 = (undefined8 *)param_3;
        func_0x00010c071ae0();
        _objc_release(ppuVar2);
        if (((ulong)ppuVar3 & 1) != 0) {
          func_0x00010bf33500();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_106db8a40;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = lVar7;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    ppuVar8 = (undefined **)0x0;
  }
LAB_106db8a40:
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar6);
    lVar11 = *(long *)(param_3 + 0x28);
    _objc_retain(lVar11);
    lVar7 = lVar11;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    ppuVar8 = (undefined **)0x0;
    if (lVar7 != 0) {
      do {
        lVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar11);
          }
          uVar9 = *(ulong *)(lVar12 * 8);
          uVar4 = uVar9;
          func_0x00010bf33560();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c071ae0();
          _objc_release(uVar4);
          if ((uVar5 & 1) != 0) {
            ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
            _objc_alloc(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
            func_0x00010bf33500(uVar9);
            _objc_retainAutoreleasedReturnValue();
            param_2 = &PTR___NSConcreteGlobalBlock_11097bc48;
            uVar4 = uVar9;
            func_0x000100504554();
            func_0x00010bff4000(ppuVar2);
            _objc_release(uVar4);
            _objc_release(uVar9);
            ppuVar8 = ppuVar2;
            func_0x00010bf09f00(ppuVar2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar2);
            goto LAB_106db8bf8;
          }
          lVar12 = lVar12 + 1;
        } while (lVar7 != lVar12);
        lVar7 = lVar11;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
      ppuVar8 = (undefined **)0x0;
    }
LAB_106db8bf8:
    _objc_release(lVar11);
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
      func_0x00010c0844e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = param_2;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 106db8a90; end: 106db8c47; -[SCMemoriesScreenshopCatetoryStoreImpl shoppableScreenshotItemIdsForCategory:] */

void FUN_106db8a90(long param_1,undefined **param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar8 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar8);
  lVar2 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  ppuVar6 = (undefined **)0x0;
  if (lVar2 != 0) {
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar8);
        }
        uVar9 = *(ulong *)(lVar10 * 8);
        uVar3 = uVar9;
        func_0x00010bf33560();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c071ae0();
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) {
          ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
          _objc_alloc(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
          func_0x00010bf33500(uVar9);
          _objc_retainAutoreleasedReturnValue();
          param_2 = &PTR___NSConcreteGlobalBlock_11097bc48;
          uVar3 = uVar9;
          func_0x000100504554();
          func_0x00010bff4000(ppuVar5);
          _objc_release(uVar3);
          _objc_release(uVar9);
          ppuVar6 = ppuVar5;
          func_0x00010bf09f00(ppuVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar5);
          goto LAB_106db8bf8;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar8;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    ppuVar6 = (undefined **)0x0;
  }
LAB_106db8bf8:
  _objc_release(lVar8);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    func_0x00010c0844e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = param_2;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 106db8c48; end: 106db8c8f;  */

void FUN_106db8c48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0844e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106db8c90; end: 106db8cb7; -[SCMemoriesScreenshopCatetoryStoreImpl getCategoriesForLogging] */

void FUN_106db8c90(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106db8cb8; end: 106db8d2f; -[SCMemoriesScreenshopCatetoryStoreImpl getShoppableProgress] */

void FUN_106db8cb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e60(uVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106db8d30; end: 106db8d37; -[SCMemoriesScreenshopCatetoryStoreImpl getShoppableItemsThreshold] */

undefined8 FUN_106db8d30(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 106db8d38; end: 106db8daf; -[SCMemoriesScreenshopCatetoryStoreImpl getShoppableCategories] */

void FUN_106db8d38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e60(uVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106db8db0; end: 106db8db7; -[SCMemoriesScreenshopCatetoryStoreImpl getShoppableCategoryThreshold] */

undefined8 FUN_106db8db0(void)

{
  return 0x4000000000000000;
}



/* Entry: 106db8db8; end: 106db8dbf; -[SCMemoriesScreenshopCatetoryStoreImpl shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_106db8db8(void)

{
  return 0;
}



/* Entry: 106db8dc0; end: 106db8dcb; -[SCMemoriesScreenshopCatetoryStoreImpl pushToValdiMarshaller:] */

void FUN_106db8dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af954f8(param_3,param_1);
  func_0x00010af954c0();
  func_0x00010af954b8();
  func_0x00010af953dc();
  func_0x00010af953ec();
  return;
}



/* Entry: 106db8dcc; end: 106db8eeb; -[SCMemoriesScreenshopCatetoryStoreImpl progressDidUpdateWithScreenshotsToProcess:screenshotsTotal:shoppableScreenshots:finished:onboarded:] */

void FUN_106db8dcc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf885a0(param_3);
    func_0x00010c1f78c0(uVar2);
  }
  if (param_4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf885a0(param_4);
    func_0x00010c1f78e0(uVar2);
  }
  if (param_5 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf885a0(param_5);
    func_0x00010c1f7900(uVar2);
  }
  if (param_6 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = param_6;
    func_0x00010bf1f3c0(param_6);
    func_0x00010c19cd00(uVar2,param_2,lVar1);
  }
  if (param_7 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = param_7;
    func_0x00010bf1f3c0(param_7);
    func_0x00010c1d4520(uVar2,param_2,lVar1);
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106db8eec; end: 106db8f4b; -[SCMemoriesScreenshopCatetoryStoreImpl .cxx_destruct] */

void FUN_106db8eec(long param_1)

{
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



/* Entry: 106db8f4c; end: 106db93bb; -[SCMemoriesScreenshopDataSource initWithScreenshopPersistenceService:screenshopModelService:photoPermissionServices:featureSettingsService:userTrackedLogger:myBitmojiAvatarIdProvider:configProvider:screenshopNetworkService:fetchLimit:] */

undefined8 *
FUN_106db8f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
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
  puStack_68 = PTR_PTR_1126f6ea0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[2];
    puVar1[2] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126d2928;
    _objc_alloc_init();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d2928;
    _objc_alloc_init();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d2930;
    _objc_alloc();
    func_0x00010c151680(puVar1[3]);
    func_0x00010c045d40();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c1514e0(param_6);
    func_0x00010c0df6e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1661c0(puVar1[0x12]);
    _objc_release(puVar3);
    uVar2 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16da00(puVar1[0x12]);
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2011c0(puVar1[0x12]);
    _objc_release(puVar3);
    uVar2 = puVar1[0x12];
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126d2938;
    _objc_alloc();
    func_0x00010c011c80();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 8,puVar1[0x13]);
    puVar1[0x17] = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x18) = 1;
    uVar2 = puVar1[0x19];
    puVar1[0x19] = 0;
    _objc_release(uVar2);
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf91ae0();
    *(char *)((long)puVar1 + 0xc1) = (char)uVar5;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
  }
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



/* Entry: 106db93bc; end: 106db9423; -[SCMemoriesScreenshopDataSource dealloc] */

void FUN_106db93bc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281fa0();
  _objc_release(puVar1);
  puStack_28 = PTR_PTR_1126f6ea0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106db9424; end: 106db9507; -[SCMemoriesScreenshopDataSource allScreenshotsAssets] */

void FUN_106db9424(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  puVar7 = puVar3;
  func_0x00010c246cc0();
  uVar6 = SUB81(puVar7,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar5 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_106db9508;
  puStack_70 = puVar3;
  puStack_68 = puVar2;
  lStack_60 = lVar1;
  lStack_58 = lVar4;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_78,lVar5);
  uVar8 = *(undefined8 *)(lVar5 + 0x38);
  _objc_copyWeak(auStack_88,auStack_78);
  uStack_80 = uVar6;
  func_0x00010c0f7fc0(uVar8);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 106db9508; end: 106db95bf; -[SCMemoriesScreenshopDataSource setDataSourceProcessingEnabled:] */

void FUN_106db9508(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106db95c0; end: 106db961b;  */

void FUN_106db95c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0xc1) & 1) == 0) {
      uVar1 = 2;
      if (*(char *)(param_1 + 0x28) != '\0') {
        uVar1 = 3;
      }
      func_0x00010c114980(*(undefined8 *)(lVar2 + 0xa8),param_2,uVar1);
    }
    func_0x00010c189880(*(undefined8 *)(lVar2 + 0xb0),param_2,*(undefined1 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106db961c; end: 106db9643; -[SCMemoriesScreenshopDataSource screenshopCategoryGridViewModel] */

void FUN_106db961c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106db9644; end: 106db964f; -[SCMemoriesScreenshopDataSource setScreenshopCategoryGrid:] */

void FUN_106db9644(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 106db9650; end: 106db9837; -[SCMemoriesScreenshopDataSource handleShoppingPermissionGranted] */

void FUN_106db9650(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c1f7780(*(undefined8 *)(param_1 + 0x18),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf91960();
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    func_0x00010c1f7680(*(undefined8 *)(param_1 + 0x18));
  }
  puVar2 = PTR_PTR_1126d2930;
  _objc_alloc();
  func_0x00010c045d40();
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar2;
  _objc_release(uVar4);
  func_0x00010c16da00(*(undefined8 *)(param_1 + 0x90));
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2011c0(*(undefined8 *)(param_1 + 0x90));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1661c0(*(undefined8 *)(param_1 + 0x90));
  _objc_release(puVar2);
  lVar3 = param_1 + 0x88;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c2226c0();
  _objc_release(lVar3);
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c117880(lVar3);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_initWeak(auStack_38,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106db9838; end: 106db986b;  */

void FUN_106db9838(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be39440(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106db986c; end: 106db999b; -[SCMemoriesScreenshopDataSource handleAdsPermissionGranted] */

void FUN_106db986c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010c1f7780(*(undefined8 *)(param_1 + 0x18),param_2,1);
  func_0x00010c1f7680(*(undefined8 *)(param_1 + 0x18),param_2,1);
  puVar1 = PTR_PTR_1126d2930;
  _objc_alloc();
  func_0x00010c045d40();
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar1;
  _objc_release(uVar3);
  func_0x00010c16da00(*(undefined8 *)(param_1 + 0x90),param_2,*(undefined8 *)(param_1 + 0xa0));
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2011c0(*(undefined8 *)(param_1 + 0x90),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1661c0(*(undefined8 *)(param_1 + 0x90),param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1 + 0x88;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c2226c0();
  _objc_release(lVar2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c117880(param_1,param_2,0,0,0,0,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106db999c; end: 106db9a8f; -[SCMemoriesScreenshopDataSource initializeDataSource] */

void FUN_106db999c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0fb4c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf37c20(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106db9a90; end: 106db9b3b;  */

void FUN_106db9a90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106db9b3c; end: 106db9bb3;  */

void FUN_106db9b3c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125f60();
    _objc_release(puVar2);
    func_0x00010be65b00(param_1);
    func_0x00010bdd63e0(param_1);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x00010c151680();
    if (iVar1 != 0) {
      func_0x00010be3a3c0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106db9bb4; end: 106db9bb7;  */

void FUN_106db9bb4(void)

{
  return;
}



/* Entry: 106db9bb8; end: 106db9de3; -[SCMemoriesScreenshopDataSource shoppableScreenshotItems] */

void FUN_106db9bb8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x60);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar5 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      if ((int)uVar6 != 0) {
        lVar7 = *(long *)(param_1 + 0x68);
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 != 0) {
          lVar8 = lVar7;
          FUN_106dbda6c(lVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(lVar8);
        }
        _objc_release(lVar7);
      }
      lVar13 = lVar13 + 1;
    } while (lVar4 != lVar13);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar9 = puVar2;
  func_0x00010bf529e0();
  *(undefined **)(param_1 + 0xb8) = puVar9;
  puVar9 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010c246cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    func_0x00010c22cd20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x000100504554();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
    func_0x00010bff4000();
    puVar11 = puVar2;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106db9de4; end: 106db9e67; -[SCMemoriesScreenshopDataSource shoppableScreenshotItemIds] */

void FUN_106db9de4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010c22cd20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000100504554();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
  func_0x00010bff4000();
  puVar3 = puVar2;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106db9e68; end: 106db9eaf;  */

void FUN_106db9e68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0844e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106db9eb0; end: 106db9eb7; -[SCMemoriesScreenshopDataSource shoppableScreenshotItemsForCategory:] */

void FUN_106db9eb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22cd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_shoppableScreenshotItemsForCateg_112668d78);
  return;
}



/* Entry: 106db9eb8; end: 106db9ebf; -[SCMemoriesScreenshopDataSource shoppableScreenshotItemIdsForCategory:] */

void FUN_106db9eb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22cd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_shoppableScreenshotItemIdsForCat_112668d68);
  return;
}



/* Entry: 106db9ec0; end: 106db9ec7; -[SCMemoriesScreenshopDataSource getCategoriesForLogging] */

void FUN_106db9ec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc3870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_getCategoriesForLogging_1125ce7c0);
  return;
}



/* Entry: 106db9ec8; end: 106db9f0f; -[SCMemoriesScreenshopDataSource getDownloadModelLatency] */

void FUN_106db9ec8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc4f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106db9f10; end: 106db9f4f; -[SCMemoriesScreenshopDataSource getDownloadModelStatus] */

undefined8 FUN_106db9f10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc4f60();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106db9f50; end: 106db9f57; -[SCMemoriesScreenshopDataSource getUnprocessedScreenshotsCountInSession] */

undefined8 FUN_106db9f50(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 106db9f58; end: 106db9f73; -[SCMemoriesScreenshopDataSource getProcessedScreenshotsCountInSession] */

void FUN_106db9f58(long param_1)

{
  long lVar1;
  
  lVar1 = 0xb0;
  if (*(char *)(param_1 + 0xc1) == '\0') {
    lVar1 = 0xa8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfca230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_getSessionTotalItemCount_1125d0230);
  return;
}



/* Entry: 106db9f74; end: 106db9f7b; -[SCMemoriesScreenshopDataSource getScannedCountBeforeFirstShoppable] */

undefined8 FUN_106db9f74(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 106db9f7c; end: 106db9f87; -[SCMemoriesScreenshopDataSource getFetchScreenshotsLatency] */

undefined8 FUN_106db9f7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  return uVar1;
}



/* Entry: 106db9f88; end: 106db9f8f; -[SCMemoriesScreenshopDataSource getTotalScreenshotsCount] */

void FUN_106db9f88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x58),PTR_s_count_1125b2420);
  return;
}



/* Entry: 106db9f90; end: 106db9f97; -[SCMemoriesScreenshopDataSource getScanStartedDate] */

void FUN_106db9f90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc9c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa8),PTR_s_getScanStartedDate_1125d00c8);
  return;
}



/* Entry: 106db9f98; end: 106db9f9f; -[SCMemoriesScreenshopDataSource getScanFinishedDate] */

void FUN_106db9f98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc9c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa8),PTR_s_getScanFinishedDate_1125d00c0);
  return;
}



/* Entry: 106db9fa0; end: 106db9fc7; -[SCMemoriesScreenshopDataSource getBadgeObervable] */

void FUN_106db9fa0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106db9fc8; end: 106db9fef; -[SCMemoriesScreenshopDataSource getShoppableScreenshotsAssetObervable] */

void FUN_106db9fc8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106db9ff0; end: 106dba08b; -[SCMemoriesScreenshopDataSource _observeAppStateChanges] */

void FUN_106db9ff0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106dba08c; end: 106dba893; -[SCMemoriesScreenshopDataSource _buildInitialState] */

void FUN_106dba08c(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined **ppuStack_390;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_278;
  undefined1 auStack_270 [128];
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010c2827c0();
  _objc_release(uVar3);
  FUN_106dbdbdc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar10;
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  *(ulong *)(param_1 + 0xd8) =
       CONCAT17(in_register_00005007,
                CONCAT16(in_register_00005006,
                         CONCAT15(in_register_00005005,
                                  CONCAT14(in_register_00005004,
                                           CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
                                 )));
  _objc_release(puVar4);
  bVar1 = *(byte *)(param_1 + 0xc1);
  lVar5 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar5;
  if ((bVar1 & 1) == 0) {
    func_0x00010bfab180();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010c22cc20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaa220(lVar5,param_2,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar3);
  }
  _objc_release(lVar5);
  bVar1 = *(byte *)(param_1 + 0xc1);
  lVar6 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  if ((bVar1 & 1) == 0) {
    func_0x00010bfa8ec0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010c22cc20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa8f00(lVar6,param_2,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar3);
  }
  _objc_release(lVar6);
  bVar1 = *(byte *)(param_1 + 0xc1);
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  if ((bVar1 & 1) == 0) {
    func_0x00010bfa8ee0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010c22cc20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa8f00(lVar7,param_2,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar3);
  }
  _objc_release(lVar7);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  _objc_retain(lVar15);
  lVar7 = lVar15;
  func_0x00010bf52a60(lVar15,param_2,&uStack_2c0,auStack_f0,0x10);
  if (lVar7 != 0) {
    lVar20 = *plStack_2b0;
    do {
      lVar21 = 0;
      do {
        if (*plStack_2b0 != lVar20) {
          _objc_enumerationMutation(lVar15);
        }
        uVar10 = *(undefined8 *)(lStack_2b8 + lVar21 * 8);
        func_0x00010c09da80(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4,param_2,uVar10);
        _objc_release(uVar10);
        lVar21 = lVar21 + 1;
      } while (lVar7 != lVar21);
      lVar7 = lVar15;
      func_0x00010bf52a60(lVar15,param_2,&uStack_2c0,auStack_f0,0x10);
    } while (lVar7 != 0);
  }
  _objc_release(lVar15);
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  lStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  plStack_2f0 = (long *)0x0;
  _objc_retain(lVar5);
  lVar7 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_300,auStack_170,0x10);
  if (lVar7 != 0) {
    lVar20 = *plStack_2f0;
    do {
      lVar21 = 0;
      do {
        if (*plStack_2f0 != lVar20) {
          _objc_enumerationMutation(lVar5);
        }
        uVar10 = *(undefined8 *)(lStack_2f8 + lVar21 * 8);
        func_0x00010c09da80(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar8,param_2,uVar10);
        _objc_release(uVar10);
        lVar21 = lVar21 + 1;
      } while (lVar7 != lVar21);
      lVar7 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_300,auStack_170,0x10);
    } while (lVar7 != 0);
  }
  _objc_release(lVar5);
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  _objc_retain(lVar6);
  lVar7 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_340,auStack_1f0,0x10);
  if (lVar7 != 0) {
    lVar20 = *plStack_330;
    do {
      lVar21 = 0;
      do {
        if (*plStack_330 != lVar20) {
          _objc_enumerationMutation(lVar6);
        }
        uVar10 = *(undefined8 *)(lStack_338 + lVar21 * 8);
        func_0x00010c09da80(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar8,param_2,uVar10);
        _objc_release(uVar10);
        lVar21 = lVar21 + 1;
      } while (lVar7 != lVar21);
      lVar7 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_340,auStack_1f0,0x10);
    } while (lVar7 != 0);
  }
  _objc_release(lVar6);
  lVar7 = lVar15;
  func_0x00010bf529e0();
  if (lVar7 != 0) {
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  lStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  plStack_370 = (long *)0x0;
  lVar20 = *(long *)(param_1 + 0x58);
  _objc_retain(lVar20);
  lVar7 = lVar20;
  func_0x00010bf52a60(lVar20,param_2,&uStack_380,auStack_270,0x10);
  if (lVar7 != 0) {
    lVar21 = *plStack_370;
    ppuStack_390 = &PTR____CFConstantStringClassReference_110dfe338;
    do {
      lVar19 = 0;
      do {
        if (*plStack_370 != lVar21) {
          _objc_enumerationMutation(lVar20);
        }
        uVar3 = *(undefined8 *)(lStack_378 + lVar19 * 8);
        uVar10 = uVar3;
        func_0x00010c09da80(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar4;
        func_0x00010bf4b900(puVar4,param_2,uVar10);
        _objc_release(uVar10);
        uVar10 = uVar3;
        if ((int)puVar11 == 0) {
          uVar18 = uVar3;
          func_0x00010c09da80(uVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar8;
          func_0x00010bf4b900(puVar8,param_2,uVar18);
          _objc_release(uVar18);
          uVar18 = *(undefined8 *)(param_1 + 0x60);
          func_0x00010c09da80(uVar3);
          _objc_retainAutoreleasedReturnValue();
          if ((int)puVar11 != 0) {
            ppuVar16 = &PTR____CFConstantStringClassReference_110e86a58;
            goto LAB_106dba650;
          }
          func_0x00010c220220(uVar18,param_2,&PTR____CFConstantStringClassReference_110e86a38,uVar10
                             );
          _objc_release(uVar10);
          uVar18 = *(undefined8 *)(param_1 + 0x70);
          uVar10 = uVar3;
          func_0x00010c09da80(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar18,param_2,uVar10);
        }
        else {
          uVar18 = *(undefined8 *)(param_1 + 0x60);
          func_0x00010c09da80(uVar3);
          _objc_retainAutoreleasedReturnValue();
          ppuVar16 = ppuStack_390;
LAB_106dba650:
          func_0x00010c220220(uVar18,param_2,ppuVar16,uVar10);
        }
        _objc_release(uVar10);
        uVar18 = *(undefined8 *)(param_1 + 0x68);
        uVar10 = uVar3;
        func_0x00010c09da80(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(uVar18,param_2,uVar3,uVar10);
        _objc_release(uVar10);
        lVar19 = lVar19 + 1;
      } while (lVar7 != lVar19);
      lVar7 = lVar20;
      func_0x00010bf52a60(lVar20,param_2,&uStack_380,auStack_270,0x10);
    } while (lVar7 != 0);
  }
  _objc_release(lVar20);
  uVar10 = *(undefined8 *)(param_1 + 0xf0);
  puVar11 = puVar9;
  func_0x00010bf00560(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                      &PTR____CFConstantStringClassReference_110e61838,1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_278 = puVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_278,1);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010c246cc0(puVar11,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar10,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  lVar7 = param_1;
  func_0x00010be22500();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010c22cd20();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010bdc9fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar20;
  func_0x00010be64fe0(param_1,param_2,lVar21,lVar20);
  func_0x00010c283620(*(undefined8 *)(param_1 + 0x78),param_2,lVar7);
  lVar19 = lVar21;
  func_0x00010c283620(*(undefined8 *)(param_1 + 0x80),param_2,lVar21);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(lVar17);
  func_0x00010bf529e0(lVar19);
  func_0x00010c0df860(puVar4,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar15 = lVar17;
  func_0x00010bf529e0(lVar17);
  _objc_release(lVar17);
  func_0x00010c0df860(puVar8,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar10 = *(undefined8 *)(puVar2 + 0x70);
  func_0x00010bf529e0(uVar10);
  func_0x00010c0df860(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar15 = *(long *)(puVar2 + 0x70);
  func_0x00010bf529e0(lVar15);
  func_0x00010c0df6e0(puVar11,param_2,lVar15 == 0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar2 + 0x40;
  _objc_loadWeakRetained(puVar2);
  func_0x00010c117880();
  _objc_release(puVar2);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106dba894; end: 106dba9bb; -[SCMemoriesScreenshopDataSource _notifyScreenshopCategoryStoreWithAllItems:shoppableItems:] */

void FUN_106dba894(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  func_0x00010bf529e0(param_3);
  func_0x00010c0df860(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_4;
  func_0x00010bf529e0(param_4);
  _objc_release(param_4);
  func_0x00010c0df860(puVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf529e0(uVar3);
  func_0x00010c0df860(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar5 = *(long *)(param_1 + 0x70);
  func_0x00010bf529e0(lVar5);
  func_0x00010c0df6e0(puVar6,param_2,lVar5 == 0);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c117880();
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106dba9bc; end: 106dbaa2f; -[SCMemoriesScreenshopDataSource _initAndStartScreenshopProcess] */

void FUN_106dba9bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d2940;
  _objc_alloc();
  func_0x00010c00aae0();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined **)(param_1 + 0xa8) = puVar1;
  _objc_release(uVar2);
  if ((*(byte *)(param_1 + 0xc1) & 1) == 0) {
    func_0x00010c114980(*(undefined8 *)(param_1 + 0xa8));
  }
  else {
    func_0x00010c189880(*(undefined8 *)(param_1 + 0xb0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010be39750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__initCategoryDataSourceAndStartC_11256bf70);
  return;
}



/* Entry: 106dbaa30; end: 106dbaa7f; -[SCMemoriesScreenshopDataSource _initScreenshopProcess] */

void FUN_106dbaa30(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d2940;
  _objc_alloc();
  func_0x00010c00aae0();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined **)(param_1 + 0xa8) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be39730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__initCategoryDataSource_11256bf68);
  return;
}



/* Entry: 106dbaa80; end: 106dbab3b; -[SCMemoriesScreenshopDataSource _initCategoryDataSourceAndStartCategorizing] */

void FUN_106dbaa80(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d2948;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010be1ef20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00aac0();
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined **)(param_1 + 0xb0) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c24e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xb0),PTR_s_startCategoryExtractionProcess_112671338);
  return;
}



/* Entry: 106dbab3c; end: 106dbabef; -[SCMemoriesScreenshopDataSource _initCategoryDataSource] */

void FUN_106dbab3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126d2948;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  lVar2 = param_1;
  func_0x00010be1ef20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00aac0(puVar1,param_2,param_1,uVar3,uVar4,uVar5,uVar6,lVar2,
                      *(undefined8 *)(param_1 + 0xe8),*(undefined1 *)(param_1 + 0xc1));
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined **)(param_1 + 0xb0) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106dbabf0; end: 106dbadff; -[SCMemoriesScreenshopDataSource _orderedUnprocessedItems] */

void FUN_106dbabf0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar16 = 0.0;
  lVar3 = *(long *)(param_3 + 0x60);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar14 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar4 = *(undefined8 *)(param_3 + 0x60);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c071ae0();
      _objc_release(uVar4);
      if ((int)uVar5 != 0) {
        lVar6 = *(long *)(param_3 + 0x68);
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 != 0) {
          func_0x00010befa120(puVar2);
        }
        _objc_release(lVar6);
      }
      lVar15 = lVar15 + 1;
    } while (lVar14 != lVar15);
    lVar14 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar9 = puVar2;
  func_0x00010bf529e0();
  *(undefined **)(param_3 + 0xe0) = puVar9;
  puVar9 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c246cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = *(undefined **)(puVar2 + 0x68);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c246cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
      ___stack_chk_fail();
      puVar2 = PTR_PTR_1126c6608;
      _objc_retain();
      _objc_alloc(puVar2);
      uVar10 = param_4;
      func_0x00010c09da80(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0200c0(puVar2);
      _objc_release(uVar10);
      func_0x000107fe9894(param_4);
      puVar8 = PTR_PTR_1126c6610;
      dVar17 = dVar16;
      _objc_alloc(PTR_PTR_1126c6610);
      uVar10 = param_4;
      func_0x00010c0fce40(param_4);
      uVar11 = param_4;
      func_0x00010c0fcaa0(param_4);
      uVar12 = param_4;
      func_0x00010bf5a700(param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      func_0x00010c26f320(uVar12);
      func_0x00010c0200e0((double)uVar10,(double)uVar11,0,dVar17 * 1000.0,puVar8);
      _objc_release(uVar12);
      puVar9 = PTR_PTR_1126c6618;
      puVar7 = puVar2;
      func_0x00010c0844e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe8f40(dVar16,param_2,puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2144a0(puVar8);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106dbae00; end: 106dbaf03; -[SCMemoriesScreenshopDataSource _allScreenshotItems] */

void FUN_106dbae00(double param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_3 + 0x68);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c246cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126c6608;
    _objc_retain();
    _objc_alloc(puVar2);
    uVar5 = param_4;
    func_0x00010c09da80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0200c0(puVar2);
    _objc_release(uVar5);
    func_0x000107fe9894(param_4);
    puVar4 = PTR_PTR_1126c6610;
    dVar9 = param_1;
    _objc_alloc(PTR_PTR_1126c6610);
    uVar5 = param_4;
    func_0x00010c0fce40(param_4);
    uVar6 = param_4;
    func_0x00010c0fcaa0(param_4);
    uVar7 = param_4;
    func_0x00010bf5a700(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010c26f320(uVar7);
    func_0x00010c0200e0((double)uVar5,(double)uVar6,0,dVar9 * 1000.0,puVar4);
    _objc_release(uVar7);
    puVar1 = PTR_PTR_1126c6618;
    puVar3 = puVar2;
    func_0x00010c0844e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe8f40(param_1,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2144a0(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106dbaf04; end: 106dbaf0b;  */

void FUN_106dbaf04(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  
  puVar1 = PTR_PTR_1126c6608;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010c09da80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0200c0(puVar1);
  _objc_release(uVar2);
  func_0x000107fe9894(param_4);
  puVar3 = PTR_PTR_1126c6610;
  dVar8 = param_1;
  _objc_alloc(PTR_PTR_1126c6610);
  uVar2 = param_4;
  func_0x00010c0fce40(param_4);
  uVar4 = param_4;
  func_0x00010c0fcaa0(param_4);
  uVar5 = param_4;
  func_0x00010bf5a700(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c26f320(uVar5);
  func_0x00010c0200e0((double)uVar2,(double)uVar4,0,dVar8 * 1000.0,puVar3);
  _objc_release(uVar5);
  puVar7 = PTR_PTR_1126c6618;
  puVar6 = puVar1;
  func_0x00010c0844e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8f40(param_1,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2144a0(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106dbaf0c; end: 106dbafb3; -[SCMemoriesScreenshopDataSource _willEnterForeground] */

void FUN_106dbaf0c(long param_1)

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



/* Entry: 106dbafb4; end: 106dbb007;  */

void FUN_106dbafb4(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0xc1) == '\x01') {
      func_0x00010c189880(*(undefined8 *)(param_1 + 0xb0),param_2,1);
    }
    else {
      func_0x00010c114980(*(undefined8 *)(param_1 + 0xa8),param_2,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106dbb008; end: 106dbb0af; -[SCMemoriesScreenshopDataSource _didEnterBackground] */

void FUN_106dbb008(long param_1)

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



/* Entry: 106dbb0b0; end: 106dbb103;  */

void FUN_106dbb0b0(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0xc1) == '\x01') {
      func_0x00010c189880(*(undefined8 *)(param_1 + 0xb0),param_2,1);
    }
    else {
      func_0x00010c114980(*(undefined8 *)(param_1 + 0xa8),param_2,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106dbb104; end: 106dbb63f; -[SCMemoriesScreenshopDataSource _updateDataSource:deleted:changed:] */

undefined *
FUN_106dbb104(long param_1,undefined8 param_2,undefined *param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = param_3;
  func_0x00010bf529e0();
  if (puVar3 != (undefined *)0x0) {
    _objc_retain(param_3);
    puVar3 = param_3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(undefined8 *)((long)puVar6 * 8);
        uVar10 = *(undefined8 *)(param_1 + 0x68);
        uVar11 = uVar8;
        func_0x00010c09da80(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar10);
        _objc_release(uVar11);
        uVar10 = *(undefined8 *)(param_1 + 0x60);
        uVar11 = uVar8;
        func_0x00010c09da80(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar10);
        _objc_release(uVar11);
        uVar11 = *(undefined8 *)(param_1 + 0x70);
        func_0x00010c09da80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar11);
        _objc_release(uVar8);
        puVar6 = puVar6 + 1;
      } while (puVar3 != puVar6);
      puVar3 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    uVar11 = *(undefined8 *)(param_1 + 0xe8);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar11);
    _objc_release(puVar3);
  }
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    _objc_retain(param_4);
    lVar2 = param_4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_4);
        }
        uVar9 = *(undefined8 *)(lVar7 * 8);
        uVar10 = *(undefined8 *)(param_1 + 0x60);
        uVar11 = uVar9;
        func_0x00010c09da80(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar10;
        func_0x00010c071ae0();
        _objc_release(uVar10);
        _objc_release(uVar11);
        if ((int)uVar8 != 0) {
          uVar8 = *(undefined8 *)(param_1 + 0x70);
          uVar11 = uVar9;
          func_0x00010c09da80(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d360(uVar8);
          _objc_release(uVar11);
        }
        uVar8 = *(undefined8 *)(param_1 + 0x68);
        uVar11 = uVar9;
        func_0x00010c09da80(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar8);
        _objc_release(uVar11);
        uVar11 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c09da80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar11);
        _objc_release(uVar9);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_4;
      func_0x00010bf52a60();
    }
    _objc_release(param_4);
  }
  lVar2 = param_5;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    _objc_retain(param_5);
    lVar2 = param_5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_5);
        }
        uVar11 = *(undefined8 *)(lVar7 * 8);
        uVar8 = *(undefined8 *)(param_1 + 0x68);
        func_0x00010c09da80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar8);
        _objc_release(uVar11);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_5;
      func_0x00010bf52a60();
    }
    _objc_release(param_5);
  }
  puVar3 = param_3;
  func_0x00010bf529e0();
  if ((puVar3 != (undefined *)0x0) || (lVar2 = param_4, func_0x00010bf529e0(), lVar2 != 0)) {
    uVar11 = *(undefined8 *)(param_1 + 0xb0);
    lVar2 = param_1;
    func_0x00010be1ef20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c284f20(uVar11);
    _objc_release(lVar2);
    uVar11 = *(undefined8 *)(param_1 + 0x78);
    lVar2 = param_1;
    func_0x00010c22cd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c283620(uVar11);
    _objc_release(lVar2);
    if (*(char *)(param_1 + 0xc1) == '\x01') {
      func_0x00010c189880(*(undefined8 *)(param_1 + 0xb0));
    }
    else {
      func_0x00010c114980(*(undefined8 *)(param_1 + 0xa8));
    }
  }
  uVar11 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bdc9fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c283620(uVar11);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3[0xc1] == '\x01') {
    puVar6 = *(undefined **)(param_3 + 0x68);
    puVar4 = puVar6;
    _objc_retain();
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar3 = *(undefined **)(param_3 + 0x68);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x0001006372a4();
    _objc_release(puVar3);
    _objc_retain(puVar4);
    puVar3 = puVar4;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar4);
        }
        uVar11 = *(undefined8 *)(param_3 + 0x68);
        func_0x00010c0e00e0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6);
        _objc_release(uVar11);
        puVar12 = puVar12 + 1;
      } while (puVar3 != puVar12);
      puVar3 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  puVar6 = *(undefined **)(*(long *)(puVar4 + 0x20) + 0x60);
  func_0x00010c0e00e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar6;
  func_0x00010c071ae0();
  _objc_release(puVar6);
  return puVar3;
}



/* Entry: 106dbb640; end: 106dbb7fb; -[SCMemoriesScreenshopDataSource _getFasionAssetMap] */

undefined * FUN_106dbb640(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0xc1) == '\x01') {
    puVar6 = *(undefined **)(param_1 + 0x68);
    puVar3 = puVar6;
    _objc_retain();
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar2 = *(undefined **)(param_1 + 0x68);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x0001006372a4();
    _objc_release(puVar2);
    _objc_retain(puVar3);
    puVar2 = puVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        uVar4 = *(undefined8 *)(param_1 + 0x68);
        func_0x00010c0e00e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6);
        _objc_release(uVar4);
        puVar7 = puVar7 + 1;
      } while (puVar2 != puVar7);
      puVar2 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  puVar6 = *(undefined **)(*(long *)(puVar3 + 0x20) + 0x60);
  func_0x00010c0e00e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x00010c071ae0();
  _objc_release(puVar6);
  return puVar2;
}



/* Entry: 106dbb7fc; end: 106dbb84f;  */

undefined8 FUN_106dbb7fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010c0e00e0(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106dbb850; end: 106dbbab3; -[SCMemoriesScreenshopDataSource _shufflableScreenshotItems] */

void FUN_106dbb850(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x60);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar5 = *(ulong *)(param_1 + 0x60);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c071ae0();
      if ((uVar6 & 1) == 0) {
        lVar7 = *(long *)(param_1 + 0x68);
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 != 0) {
          lVar8 = lVar7;
          FUN_106dbda6c();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c071ae0(uVar5);
          func_0x00010c0df6e0(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c18ec60(lVar8);
          _objc_release(puVar9);
          func_0x00010befa120(puVar2);
          _objc_release(lVar8);
          _objc_release(lVar7);
        }
      }
      _objc_release(uVar5);
      lVar13 = lVar13 + 1;
    } while (lVar4 != lVar13);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar9 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010c246cc0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bebbf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106dbbab4; end: 106dbbab7; -[SCMemoriesScreenshopDataSource _getScreenshopItems] */

void FUN_106dbbab4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebbf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shufflableScreenshotItems_11258c970);
  return;
}



/* Entry: 106dbbab8; end: 106dbbbb7; -[SCMemoriesScreenshopDataSource photoLibraryDidChange:] */

void FUN_106dbbab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2827c0();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = uVar2;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106dbbbb8; end: 106dbbd27;  */

void FUN_106dbbbb8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_106dbbcd0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf34e60(lVar2,param_2,*(undefined8 *)(lVar1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067300();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    lVar4 = lVar2;
    func_0x00010c12f480();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    if (lVar5 != 0) {
      _objc_release(lVar4);
      goto LAB_106dbbc38;
    }
    lVar5 = lVar2;
    func_0x00010bf35440();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf529e0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar7 != 0) goto LAB_106dbbc40;
  }
  else {
LAB_106dbbc38:
    _objc_release(lVar3);
LAB_106dbbc40:
    lVar3 = lVar2;
    func_0x00010c067300(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c12f480(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf35440(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed6a80(lVar1,param_2,lVar3,lVar4,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    FUN_106dbdbdc();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar1 + 0x58);
    *(undefined8 *)(lVar1 + 0x58) = uVar6;
    _objc_release(uVar8);
  }
  _objc_release(lVar2);
LAB_106dbbcd0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106dbbd28; end: 106dbbd2f; -[SCMemoriesScreenshopDataSource shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_106dbbd28(void)

{
  return 0;
}



/* Entry: 106dbbd30; end: 106dbbd3b; -[SCMemoriesScreenshopDataSource pushToValdiMarshaller:] */

void FUN_106dbbd30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af954f8(param_3,param_1);
  func_0x00010af954c0();
  func_0x00010af954b8();
  func_0x00010af953dc();
  func_0x00010af953ec();
  return;
}



/* Entry: 106dbbd3c; end: 106dbbfdb; -[SCMemoriesScreenshopDataSource didScanCompleteForItem:containsFashion:] */

void FUN_106dbbd3c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = 8;
  if (param_4 == 0) {
    lVar1 = 0x10;
  }
  uVar10 = *(undefined8 *)((long)&PTR_PTR_11097bcf8 + lVar1);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_3);
  func_0x00010c220220(uVar11,param_2,uVar10,param_3);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010be22500(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c22cd20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c283620(*(undefined8 *)(param_1 + 0x78),param_2,lVar1);
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 1) {
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 200);
    *(undefined **)(param_1 + 200) = puVar4;
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010bfca220();
    *(undefined8 *)(param_1 + 0xd0) = uVar11;
  }
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 5) {
    uVar11 = *(undefined8 *)(param_1 + 0xe8);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar11,param_2,puVar4);
    _objc_release(puVar4);
  }
  lVar5 = param_1;
  func_0x00010bdc9fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar11 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf529e0(uVar11);
  func_0x00010c0df860(puVar4,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar8 = lVar5;
  func_0x00010bf529e0(lVar5);
  func_0x00010c0df860(puVar6,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar8 = lVar2;
  func_0x00010bf529e0(lVar2);
  func_0x00010c0df860(puVar7,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar8 = *(long *)(param_1 + 0x70);
  func_0x00010bf529e0(lVar8);
  func_0x00010c0df6e0(puVar9,param_2,lVar8 == 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c117880(lVar3,param_2,puVar4,puVar6,puVar7,puVar9,0);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(lVar3);
  if (param_4 != 0) {
    uVar11 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010be1ef20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c284f20(uVar11,param_2,param_1);
    _objc_release(param_1);
  }
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 106dbbfdc; end: 106dbbfdf; -[SCMemoriesScreenshopDataSource getOrderedUnprocessedItems] */

void FUN_106dbbfdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__orderedUnprocessedItems_1125792e0);
  return;
}



/* Entry: 106dbbfe0; end: 106dbc29f; -[SCMemoriesScreenshopDataSource didGetShoppableDataForItem:shoppable:] */

void FUN_106dbbfe0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  lVar10 = 8;
  if (param_4 == 0) {
    lVar10 = 0x10;
  }
  uVar12 = *(undefined8 *)((long)&PTR_PTR_11097bcf8 + lVar10);
  _objc_retain(uVar12);
  func_0x00010c220220(*(undefined8 *)(param_1 + 0x60),param_2,uVar12,param_3);
  lVar10 = param_1;
  if (*(char *)(param_1 + 0xc1) == '\x01') {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
    func_0x00010be22500(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c22cd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c283620(*(undefined8 *)(param_1 + 0x78),param_2,lVar10);
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 1) {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 200);
      *(undefined **)(param_1 + 200) = puVar3;
      _objc_release(uVar11);
      uVar11 = *(undefined8 *)(param_1 + 0xa8);
      func_0x00010bfca220();
      *(undefined8 *)(param_1 + 0xd0) = uVar11;
    }
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 5) {
      uVar11 = *(undefined8 *)(param_1 + 0xe8);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar11,param_2,puVar3);
      _objc_release(puVar3);
    }
    lVar4 = param_1;
    func_0x00010bdc9fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010bfc8520(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    func_0x00010bf529e0();
    func_0x00010c0df860(puVar3,param_2,uVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar8 = lVar4;
    func_0x00010bf529e0(lVar4);
    func_0x00010c0df860(puVar6,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar8 = lVar1;
    func_0x00010bf529e0(lVar1);
    func_0x00010c0df860(puVar7,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar8 = *(long *)(param_1 + 0x70);
    func_0x00010bf529e0(lVar8);
    func_0x00010c0df6e0(puVar9,param_2,lVar8 == 0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c117880(lVar2,param_2,puVar3,puVar6,puVar7,puVar9,0);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  else {
    func_0x00010be22500(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c283620(*(undefined8 *)(param_1 + 0x78),param_2,lVar10);
  }
  _objc_release(lVar10);
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dbc2a0; end: 106dbc2a7; -[SCMemoriesScreenshopDataSource shoppableScreenshotsProvider] */

undefined8 FUN_106dbc2a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106dbc2a8; end: 106dbc2d7; -[SCMemoriesScreenshopDataSource setShoppableScreenshotsProvider:] */

void FUN_106dbc2a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106dbc2d8; end: 106dbc2df; -[SCMemoriesScreenshopDataSource screenshotsProvider] */

undefined8 FUN_106dbc2d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106dbc2e0; end: 106dbc30f; -[SCMemoriesScreenshopDataSource setScreenshotsProvider:] */

void FUN_106dbc2e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106dbc310; end: 106dbc317; -[SCMemoriesScreenshopDataSource shoppableScreenshotCount] */

undefined8 FUN_106dbc310(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 106dbc318; end: 106dbc31f; -[SCMemoriesScreenshopDataSource setShoppableScreenshotCount:] */

void FUN_106dbc318(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 106dbc320; end: 106dbc327; -[SCMemoriesScreenshopDataSource isLogLatencyNecessary] */

undefined1 FUN_106dbc320(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc0);
}



/* Entry: 106dbc328; end: 106dbc32f; -[SCMemoriesScreenshopDataSource setIsLogLatencyNecessary:] */

void FUN_106dbc328(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc0) = param_3;
  return;
}



/* Entry: 106dbc330; end: 106dbc337; -[SCMemoriesScreenshopDataSource firstShoppableProcessedDate] */

undefined8 FUN_106dbc330(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 106dbc338; end: 106dbc367; -[SCMemoriesScreenshopDataSource setFirstShoppableProcessedDate:] */

void FUN_106dbc338(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106dbc368; end: 106dbc36f; -[SCMemoriesScreenshopDataSource screenshopCatetoryStore] */

undefined8 FUN_106dbc368(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}


