/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107fb29a4; end: 107fb2a33;  */

void FUN_107fb29a4(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126d8a70;
    _objc_alloc(PTR_PTR_1126d8a70);
    func_0x00010c055b00();
  }
  else {
    puVar1 = param_1;
    func_0x000109018844(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fb2a34; end: 107fb2e47;  */

long * FUN_107fb2a34(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined *unaff_x25;
  undefined **ppuVar11;
  long unaff_x26;
  undefined **ppuVar12;
  undefined *unaff_x27;
  undefined *unaff_x28;
  long lVar13;
  long lVar14;
  undefined *puStack_4c0;
  long lStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3a8;
  undefined *puStack_3a0;
  long lStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  long lStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  long *plStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_1e0 = puVar2;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_1f8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_200 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_208 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_220 = param_1;
  puStack_1e8 = puVar3;
  uStack_120 = uStack_200;
  uStack_118 = uStack_1f8;
  uStack_110 = uStack_208;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_218 = param_1;
  func_0x00010bf52a60();
  lStack_1d8 = param_1;
  if (param_1 != 0) {
    lStack_210 = *plStack_150;
    lStack_1d8 = param_1;
    do {
      lVar9 = 0;
      do {
        if (*plStack_150 != lStack_210) {
          _objc_enumerationMutation(lStack_218);
        }
        puVar2 = PTR_PTR_1126bf698;
        unaff_x26 = *(long *)(lStack_158 + lVar9 * 8);
        lVar13 = unaff_x26;
        func_0x00010bf0b7e0(unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b920(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        uStack_188 = uStack_1f8;
        uStack_190 = uStack_200;
        uStack_180 = uStack_208;
        unaff_x25 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297200();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        if (unaff_x26 == 0) {
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
        }
        else {
          func_0x00010bf4d840(&uStack_190,unaff_x26);
        }
        uStack_1a8 = uStack_170;
        uStack_1b0 = uStack_178;
        uStack_1a0 = uStack_168;
        func_0x00010c297200();
        _objc_retainAutoreleasedReturnValue();
        uStack_188 = uStack_118;
        uStack_190 = uStack_120;
        uStack_180 = uStack_110;
        unaff_x28 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297200();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126bf6a0;
        _objc_alloc(PTR_PTR_1126bf6a0);
        uStack_230 = 0;
        func_0x00010b7425e0(0x3ff0000000000000);
        puVar4 = PTR_PTR_1126bf6a0;
        _objc_alloc(PTR_PTR_1126bf6a0);
        uStack_230 = 0;
        func_0x00010b7425e0(0x3ff0000000000000);
        func_0x00010befa120(puStack_1e0);
        func_0x00010befa120(puStack_1e8);
        if (unaff_x26 == 0) {
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
        }
        else {
          func_0x00010bf4d840(&uStack_190,unaff_x26);
        }
        uStack_1a8 = uStack_118;
        uStack_1b0 = uStack_120;
        uStack_1a0 = uStack_110;
        uStack_1c8 = uStack_170;
        uStack_1d0 = uStack_178;
        uStack_1c0 = uStack_168;
        _CMTimeAdd(&uStack_120,&uStack_1b0,&uStack_1d0);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(unaff_x28);
        _objc_release(unaff_x27);
        _objc_release(unaff_x25);
        _objc_release(puVar2);
        lVar9 = lVar9 + 1;
      } while (lStack_1d8 != lVar9);
      lVar9 = lStack_218;
      func_0x00010bf52a60();
      lStack_1d8 = lVar9;
    } while (lVar9 != 0);
  }
  _objc_release(lStack_218);
  puVar4 = PTR_PTR_1126bf6a8;
  _objc_alloc();
  puVar3 = puStack_1e0;
  func_0x00010b742360();
  puVar5 = PTR_PTR_1126bf6a8;
  _objc_alloc();
  puVar2 = puStack_1e8;
  func_0x00010b742360();
  plVar6 = (long *)PTR_PTR_1126bf6b0;
  _objc_alloc();
  ppuVar8 = &puStack_100;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_100 = puVar4;
  puStack_f8 = puVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b742210(plVar6,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  lVar9 = lStack_220;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puStack_258 = puVar2;
    puStack_250 = puVar3;
    pcStack_238 = FUN_107fb2e48;
    lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar11 = ppuVar8;
    puStack_290 = unaff_x28;
    puStack_288 = unaff_x27;
    lStack_280 = unaff_x26;
    puStack_278 = unaff_x25;
    puStack_270 = puVar7;
    puStack_268 = puVar5;
    puStack_260 = puVar4;
    plStack_248 = plVar6;
    puStack_240 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar8);
    puStack_3a0 = PTR_PTR_1126fbf50;
    plVar6 = &lStack_3a8;
    lStack_3a8 = lVar9;
    _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
    if (plVar6 != (long *)0x0) {
      ppuVar11 = ppuVar8;
      func_0x00010bf51e00();
      lVar9 = plVar6[1];
      plVar6[1] = (long)ppuVar11;
      _objc_release(lVar9);
      puVar2 = PTR__kCMTimeZero_110348670;
      lVar14 = *(long *)(PTR__kCMTimeZero_110348670 + 8);
      lVar13 = *(long *)PTR__kCMTimeZero_110348670;
      plVar6[0x15] = lVar14;
      plVar6[0x14] = lVar13;
      lVar9 = *(long *)(puVar2 + 0x10);
      plVar6[0x16] = lVar9;
      lStack_3e8 = 0;
      uStack_3f0 = 0;
      uStack_3d8 = 0;
      plStack_3e0 = (long *)0x0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      _objc_retain(ppuVar8);
      ppuVar11 = ppuVar8;
      func_0x00010bf52a60();
      if (ppuVar11 != (undefined **)0x0) {
        lVar10 = *plStack_3e0;
        do {
          ppuVar12 = (undefined **)0x0;
          do {
            if (*plStack_3e0 != lVar10) {
              _objc_enumerationMutation(ppuVar8);
            }
            if (*(long *)(lStack_3e8 + (long)ppuVar12 * 8) == 0) {
              uStack_428 = 0;
              uStack_430 = 0;
              uStack_418 = 0;
              uStack_420 = 0;
              uStack_438 = 0;
              uStack_440 = 0;
            }
            else {
              func_0x00010c27c900(&uStack_440);
            }
            lStack_458 = plVar6[0x15];
            lStack_460 = plVar6[0x14];
            lStack_450 = plVar6[0x16];
            uStack_478 = uStack_420;
            uStack_480 = uStack_428;
            uStack_470 = uStack_418;
            _CMTimeAdd(&lStack_408,&lStack_460,&uStack_480);
            lVar1 = lStack_408;
            plVar6[0x15] = lStack_400;
            plVar6[0x14] = lVar1;
            plVar6[0x16] = lStack_3f8;
            ppuVar12 = (undefined **)((long)ppuVar12 + 1);
          } while (ppuVar11 != ppuVar12);
          ppuVar11 = ppuVar8;
          func_0x00010bf52a60();
        } while (ppuVar11 != (undefined **)0x0);
      }
      _objc_release(ppuVar8);
      plVar6[0x12] = lVar14;
      plVar6[0x11] = lVar13;
      plVar6[0x13] = lVar9;
      lStack_4b8 = 0;
      puStack_4c0 = (undefined *)0x0;
      uStack_4a8 = 0;
      plStack_4b0 = (long *)0x0;
      uStack_498 = 0;
      uStack_4a0 = 0;
      uStack_488 = 0;
      uStack_490 = 0;
      _objc_retain(ppuVar8);
      ppuVar11 = &puStack_4c0;
      ppuVar12 = ppuVar8;
      func_0x00010bf52a60();
      if (ppuVar12 != (undefined **)0x0) {
        lVar9 = *plStack_4b0;
        do {
          ppuVar11 = (undefined **)0x0;
          do {
            if (*plStack_4b0 != lVar9) {
              _objc_enumerationMutation(ppuVar8);
            }
            if (*(long *)(lStack_4b8 + (long)ppuVar11 * 8) == 0) {
              uStack_428 = 0;
              uStack_430 = 0;
              uStack_418 = 0;
              uStack_420 = 0;
              uStack_438 = 0;
              uStack_440 = 0;
            }
            else {
              func_0x00010bf4d840(&uStack_440);
            }
            lStack_458 = plVar6[0x12];
            lStack_460 = plVar6[0x11];
            lStack_450 = plVar6[0x13];
            uStack_478 = uStack_420;
            uStack_480 = uStack_428;
            uStack_470 = uStack_418;
            _CMTimeAdd(&lStack_408,&lStack_460,&uStack_480);
            lVar13 = lStack_408;
            plVar6[0x12] = lStack_400;
            plVar6[0x11] = lVar13;
            plVar6[0x13] = lStack_3f8;
            ppuVar11 = (undefined **)((long)ppuVar11 + 1);
          } while (ppuVar12 != ppuVar11);
          ppuVar11 = &puStack_4c0;
          ppuVar12 = ppuVar8;
          func_0x00010bf52a60();
        } while (ppuVar12 != (undefined **)0x0);
      }
      _objc_release(ppuVar8);
      *(undefined1 *)((long)plVar6 + 0x11) = 0;
    }
    _objc_release(ppuVar8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
      return plVar6;
    }
    ___stack_chk_fail();
    plVar6 = (long *)PTR_PTR_1126bf600;
    _objc_retain(ppuVar11);
    _objc_alloc(plVar6);
    ppuVar8 = ppuVar11;
    func_0x00010c1585e0(ppuVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    func_0x00010c043a60(plVar6);
    _objc_release(ppuVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar6);
  return plVar6;
}



/* Entry: 107fb2e48; end: 107fb3113; -[SCTimelineVideoImmutablePlaybackConfiguration initWithSegments:] */

undefined8 * FUN_107fb2e48(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_3);
  puStack_170 = PTR_PTR_1126fbf50;
  puVar3 = &uStack_178;
  uStack_178 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    puVar6 = param_3;
    func_0x00010bf51e00();
    uVar4 = puVar3[1];
    puVar3[1] = puVar6;
    _objc_release(uVar4);
    puVar1 = PTR__kCMTimeZero_110348670;
    uVar9 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar8 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    puVar3[0x15] = uVar9;
    puVar3[0x14] = uVar8;
    uVar4 = *(undefined8 *)(puVar1 + 0x10);
    puVar3[0x16] = uVar4;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    _objc_retain(param_3);
    puVar6 = param_3;
    func_0x00010bf52a60();
    if (puVar6 != (undefined8 *)0x0) {
      lVar5 = *plStack_1b0;
      do {
        puVar7 = (undefined8 *)0x0;
        do {
          if (*plStack_1b0 != lVar5) {
            _objc_enumerationMutation(param_3);
          }
          if (*(long *)(lStack_1b8 + (long)puVar7 * 8) == 0) {
            uStack_1f8 = 0;
            uStack_200 = 0;
            uStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_208 = 0;
            uStack_210 = 0;
          }
          else {
            func_0x00010c27c900(&uStack_210);
          }
          uStack_228 = puVar3[0x15];
          uStack_230 = puVar3[0x14];
          uStack_220 = puVar3[0x16];
          uStack_248 = uStack_1f0;
          uStack_250 = uStack_1f8;
          uStack_240 = uStack_1e8;
          _CMTimeAdd(&uStack_1d8,&uStack_230,&uStack_250);
          uVar2 = uStack_1d8;
          puVar3[0x15] = uStack_1d0;
          puVar3[0x14] = uVar2;
          puVar3[0x16] = uStack_1c8;
          puVar7 = (undefined8 *)((long)puVar7 + 1);
        } while (puVar6 != puVar7);
        puVar6 = param_3;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
    puVar3[0x12] = uVar9;
    puVar3[0x11] = uVar8;
    puVar3[0x13] = uVar4;
    lStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    plStack_280 = (long *)0x0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    _objc_retain(param_3);
    puVar6 = &uStack_290;
    puVar7 = param_3;
    func_0x00010bf52a60();
    if (puVar7 != (undefined8 *)0x0) {
      lVar5 = *plStack_280;
      do {
        puVar6 = (undefined8 *)0x0;
        do {
          if (*plStack_280 != lVar5) {
            _objc_enumerationMutation(param_3);
          }
          if (*(long *)(lStack_288 + (long)puVar6 * 8) == 0) {
            uStack_1f8 = 0;
            uStack_200 = 0;
            uStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_208 = 0;
            uStack_210 = 0;
          }
          else {
            func_0x00010bf4d840(&uStack_210);
          }
          uStack_228 = puVar3[0x12];
          uStack_230 = puVar3[0x11];
          uStack_220 = puVar3[0x13];
          uStack_248 = uStack_1f0;
          uStack_250 = uStack_1f8;
          uStack_240 = uStack_1e8;
          _CMTimeAdd(&uStack_1d8,&uStack_230,&uStack_250);
          uVar4 = uStack_1d8;
          puVar3[0x12] = uStack_1d0;
          puVar3[0x11] = uVar4;
          puVar3[0x13] = uStack_1c8;
          puVar6 = (undefined8 *)((long)puVar6 + 1);
        } while (puVar7 != puVar6);
        puVar6 = &uStack_290;
        puVar7 = param_3;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
    *(undefined1 *)((long)puVar3 + 0x11) = 0;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = (undefined8 *)PTR_PTR_1126bf600;
  _objc_retain(puVar6);
  _objc_alloc(puVar3);
  puVar7 = puVar6;
  func_0x00010c1585e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010c043a60(puVar3);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 107fb3114; end: 107fb318b; +[SCTimelineVideoImmutablePlaybackConfiguration immutablePlaybackOnlyConfigurationFromConfiguration:] */

void FUN_107fb3114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bf600;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c1585e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c043a60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fb318c; end: 107fb31b3; -[SCTimelineVideoImmutablePlaybackConfiguration segments] */

void FUN_107fb318c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fb31b4; end: 107fb31bb; -[SCTimelineVideoImmutablePlaybackConfiguration newVideoSegmentWithAssetURL:duration:frameImage:snapSource:activeLensID:externalMediaSource:] */

undefined8 FUN_107fb31b4(void)

{
  return 0;
}



/* Entry: 107fb31bc; end: 107fb31c3; -[SCTimelineVideoImmutablePlaybackConfiguration newImageSegmentWithAssetURL:frameImage:snapSource:isFromSnapEditor:activeLensID:] */

undefined8 FUN_107fb31bc(void)

{
  return 0;
}



/* Entry: 107fb31c4; end: 107fb31c7; -[SCTimelineVideoImmutablePlaybackConfiguration addSegment:] */

void FUN_107fb31c4(void)

{
  return;
}



/* Entry: 107fb31c8; end: 107fb31cb; -[SCTimelineVideoImmutablePlaybackConfiguration addSegments:] */

void FUN_107fb31c8(void)

{
  return;
}



/* Entry: 107fb31cc; end: 107fb31cf; -[SCTimelineVideoImmutablePlaybackConfiguration deleteLastSegment] */

void FUN_107fb31cc(void)

{
  return;
}



/* Entry: 107fb31d0; end: 107fb31d3; -[SCTimelineVideoImmutablePlaybackConfiguration deleteSegmentAtIndex:] */

void FUN_107fb31d0(void)

{
  return;
}



/* Entry: 107fb31d4; end: 107fb31d7; -[SCTimelineVideoImmutablePlaybackConfiguration deleteAllSegments] */

void FUN_107fb31d4(void)

{
  return;
}



/* Entry: 107fb31d8; end: 107fb321f; -[SCTimelineVideoImmutablePlaybackConfiguration firstFrameImage] */

void FUN_107fb31d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb6cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107fb3220; end: 107fb3233; -[SCTimelineVideoImmutablePlaybackConfiguration totalContentDuration] */

void FUN_107fb3220(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  param_1[1] = *(undefined8 *)(param_2 + 0x90);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x98);
  return;
}



/* Entry: 107fb3234; end: 107fb3247; -[SCTimelineVideoImmutablePlaybackConfiguration totalDuration] */

void FUN_107fb3234(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  param_1[1] = *(undefined8 *)(param_2 + 0xa8);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0xb0);
  return;
}



/* Entry: 107fb3248; end: 107fb3347; -[SCTimelineVideoImmutablePlaybackConfiguration containsImportedContent] */

long FUN_107fb3248(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar3 = *(long *)(param_1 + 8);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
  lVar4 = 0;
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        uVar2 = *(ulong *)(lStack_108 + lVar5 * 8);
        func_0x00010c075240();
        if ((uVar2 & 1) != 0) {
          lVar4 = 1;
          goto LAB_107fb3308;
        }
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
    lVar4 = 0;
  }
LAB_107fb3308:
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar4;
  }
  ___stack_chk_fail();
  return lVar3;
}



/* Entry: 107fb3348; end: 107fb334b; -[SCTimelineVideoImmutablePlaybackConfiguration addListener:] */

void FUN_107fb3348(void)

{
  return;
}



/* Entry: 107fb334c; end: 107fb334f; -[SCTimelineVideoImmutablePlaybackConfiguration removeListener:] */

void FUN_107fb334c(void)

{
  return;
}



/* Entry: 107fb3350; end: 107fb33c3; -[SCTimelineVideoImmutablePlaybackConfiguration videoCodecType] */

long FUN_107fb3350(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010010fab4();
  lVar1 = lVar2;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010c2997e0(lVar2);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 107fb33c4; end: 107fb33cb; -[SCTimelineVideoImmutablePlaybackConfiguration segmentTimeRangesObservable] */

undefined8 FUN_107fb33c4(void)

{
  return 0;
}



/* Entry: 107fb33cc; end: 107fb33cf; -[SCTimelineVideoImmutablePlaybackConfiguration updateFirstFrameImageIfNeededWithPlayerHandler:] */

void FUN_107fb33cc(void)

{
  return;
}



/* Entry: 107fb33d0; end: 107fb343b; -[SCTimelineVideoImmutablePlaybackConfiguration uniqueSnapCreationCount] */

long FUN_107fb33d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  func_0x00010bf6cf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  _objc_release(lVar1);
  return lVar3 + lVar2;
}



/* Entry: 107fb343c; end: 107fb3443; -[SCTimelineVideoImmutablePlaybackConfiguration deletedSegmentCaptureSessionIDs] */

undefined8 FUN_107fb343c(void)

{
  return 0;
}



/* Entry: 107fb3444; end: 107fb3447; -[SCTimelineVideoImmutablePlaybackConfiguration setEditedThumbnails:] */

void FUN_107fb3444(void)

{
  return;
}



/* Entry: 107fb3448; end: 107fb344b; -[SCTimelineVideoImmutablePlaybackConfiguration setEditedThumbnails:forSegment:] */

void FUN_107fb3448(void)

{
  return;
}



/* Entry: 107fb344c; end: 107fb3453; -[SCTimelineVideoImmutablePlaybackConfiguration segmentCount] */

void FUN_107fb344c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107fb3454; end: 107fb3457; -[SCTimelineVideoImmutablePlaybackConfiguration moveSegmentAtIndex:toDestinationIndex:] */

void FUN_107fb3454(void)

{
  return;
}



/* Entry: 107fb3458; end: 107fb3823; -[SCTimelineVideoImmutablePlaybackConfiguration playbackTimeForFrameTime:] */

void FUN_107fb3458(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 **ppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
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
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_228;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar2 = PTR__kCMTimeZero_110348670;
  puVar5 = &uStack_1c0;
  puVar7 = &uStack_1c0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  param_1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  *param_1 = uVar12;
  param_1[2] = *(undefined8 *)(puVar2 + 0x10);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar9 = *(long *)(param_2 + 8);
  _objc_retain(lVar9);
  puVar6 = &uStack_130;
  lVar4 = lVar9;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        lVar8 = *(long *)(lStack_128 + lVar11 * 8);
        if (lVar8 == 0) {
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
        }
        else {
          func_0x00010bf4d840(&uStack_160,lVar8);
        }
        uStack_178 = param_4[1];
        uStack_180 = *param_4;
        uStack_170 = param_4[2];
        puVar3 = &uStack_160;
        _CMTimeRangeContainsTime(puVar3,&uStack_180);
        if ((int)puVar3 != 0) {
          _objc_retain(lVar8);
          _objc_release(lVar9);
          if (lVar8 == 0) goto LAB_107fb35e8;
          goto LAB_107fb3680;
        }
        if (lVar8 == 0) {
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
        }
        else {
          func_0x00010c27c900(&uStack_160,lVar8);
        }
        uStack_178 = param_1[1];
        uStack_180 = *param_1;
        uStack_170 = param_1[2];
        uStack_198 = uStack_140;
        uStack_1a0 = uStack_148;
        uStack_190 = uStack_138;
        _CMTimeAdd(param_1,&uStack_180,&uStack_1a0);
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      puVar6 = &uStack_130;
      lVar4 = lVar9;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar9);
LAB_107fb35e8:
  lVar4 = *(long *)(param_2 + 8);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
  }
  else {
    func_0x00010bf4d840(&uStack_160,lVar4);
  }
  _CMTimeRangeGetEnd(&uStack_180,&uStack_160);
  uStack_158 = param_4[1];
  uStack_160 = *param_4;
  uStack_150 = param_4[2];
  puVar3 = &uStack_160;
  _CMTimeCompare(puVar3,&uStack_180);
  _objc_release(lVar4);
  lVar8 = *(long *)(param_2 + 8);
  if ((int)puVar3 < 1) {
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
  }
  if (lVar8 == 0) {
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    bVar1 = true;
  }
  else {
LAB_107fb3680:
    func_0x00010c27c9c0(&uStack_160,lVar8);
    bVar1 = false;
  }
  uStack_178 = param_4[1];
  uStack_180 = *param_4;
  uStack_170 = param_4[2];
  puVar3 = &uStack_160;
  _CMTimeRangeContainsTime(puVar3,&uStack_180);
  if ((int)puVar3 == 0) {
    if (bVar1) {
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
    }
    else {
      func_0x00010c27c9c0(&uStack_160,lVar8);
    }
    _CMTimeRangeGetEnd(&uStack_180,&uStack_160);
    uStack_158 = param_4[1];
    uStack_160 = *param_4;
    uStack_150 = param_4[2];
    puVar5 = &uStack_160;
    _CMTimeCompare(puVar5,&uStack_180);
    if ((int)puVar5 < 0) goto LAB_107fb37e0;
    if (bVar1) {
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
    }
    else {
      func_0x00010c27c9c0(&uStack_160,lVar8);
    }
    uStack_198 = param_1[1];
    uStack_1a0 = *param_1;
    uStack_190 = param_1[2];
    uStack_1b8 = uStack_140;
    uStack_1c0 = uStack_148;
    uStack_1b0 = uStack_138;
    puVar5 = &uStack_1a0;
  }
  else {
    if (bVar1) {
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
    }
    else {
      func_0x00010c27c9c0(&uStack_160,lVar8);
    }
    uStack_178 = param_4[1];
    uStack_180 = *param_4;
    uStack_170 = param_4[2];
    uStack_1b8 = uStack_158;
    uStack_1c0 = uStack_160;
    uStack_1b0 = uStack_150;
    _CMTimeSubtract(&uStack_1a0,&uStack_180,&uStack_1c0);
    uStack_1b8 = param_1[1];
    uStack_1c0 = *param_1;
    uStack_1b0 = param_1[2];
    puVar7 = &uStack_1a0;
  }
  _CMTimeAdd(&uStack_180,puVar5,puVar7);
  param_1[1] = uStack_178;
  *param_1 = uStack_180;
  param_1[2] = uStack_170;
LAB_107fb37e0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_107fb3824;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2b8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_2c0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_2b0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  plStack_2f0 = (long *)0x0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  lVar9 = *(long *)(lVar8 + 8);
  puStack_1d0 = &stack0xfffffffffffffff0;
  _objc_retain(lVar9);
  puVar7 = &uStack_300;
  lVar4 = lVar9;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar10 = *plStack_2f0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_2f0 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        lVar8 = *(long *)(lStack_2f8 + lVar11 * 8);
        if (lVar8 == 0) {
          uStack_348 = 0;
          uStack_350 = 0;
          uStack_338 = 0;
          uStack_340 = 0;
          uStack_358 = 0;
          uStack_360 = 0;
        }
        else {
          func_0x00010c27c900(&uStack_360,lVar8);
        }
        uStack_378 = uStack_2b8;
        uStack_380 = uStack_2c0;
        uStack_370 = uStack_2b0;
        uStack_398 = uStack_340;
        uStack_3a0 = uStack_348;
        uStack_390 = uStack_338;
        _CMTimeRangeMake(&uStack_330,&uStack_380,&uStack_3a0);
        uStack_358 = uStack_328;
        uStack_360 = uStack_330;
        uStack_348 = uStack_318;
        uStack_350 = uStack_320;
        uStack_338 = uStack_308;
        uStack_340 = uStack_310;
        uStack_378 = puVar6[1];
        uStack_380 = *puVar6;
        uStack_370 = puVar6[2];
        puVar5 = &uStack_360;
        _CMTimeRangeContainsTime(puVar5,&uStack_380);
        if ((int)puVar5 != 0) {
          _objc_retain(lVar8);
          _objc_release(lVar9);
          if (lVar8 == 0) goto LAB_107fb3a08;
          func_0x00010c27c900(&uStack_330,lVar8);
          _objc_release(lVar8);
          goto LAB_107fb3a14;
        }
        if (lVar8 == 0) {
          uStack_348 = 0;
          uStack_350 = 0;
          uStack_338 = 0;
          uStack_340 = 0;
          uStack_358 = 0;
          uStack_360 = 0;
        }
        else {
          func_0x00010c27c900(&uStack_360,lVar8);
        }
        uStack_378 = uStack_2b8;
        uStack_380 = uStack_2c0;
        uStack_370 = uStack_2b0;
        uStack_398 = uStack_340;
        uStack_3a0 = uStack_348;
        uStack_390 = uStack_338;
        _CMTimeAdd(&uStack_2c0,&uStack_380,&uStack_3a0);
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      puVar7 = &uStack_300;
      lVar4 = lVar9;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar9);
LAB_107fb3a08:
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
LAB_107fb3a14:
  uStack_378 = puVar6[1];
  uStack_380 = *puVar6;
  uStack_370 = puVar6[2];
  uStack_398 = uStack_2b8;
  uStack_3a0 = uStack_2c0;
  uStack_390 = uStack_2b0;
  _CMTimeSubtract(&uStack_360,&uStack_380,&uStack_3a0);
  uStack_378 = uStack_328;
  uStack_380 = uStack_330;
  uStack_370 = uStack_320;
  puVar6 = &uStack_380;
  _CMTimeAdd(extraout_x8,puVar6,&uStack_360);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  pcStack_3a8 = FUN_107fb3aa0;
  uStack_3c8 = puVar7[1];
  uStack_3d0 = *puVar7;
  uStack_3c0 = puVar7[2];
  ppuStack_3b0 = &puStack_1d0;
  FUN_107fb2658(puVar6[1],&uStack_3d0);
  return;
}



/* Entry: 107fb3824; end: 107fb3a9f; -[SCTimelineVideoImmutablePlaybackConfiguration frameTimeForPlaybackTime:] */

void FUN_107fb3824(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_100 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_f0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar4 = *(long *)(param_2 + 8);
  _objc_retain(lVar4);
  puVar3 = &uStack_140;
  lVar1 = lVar4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_130;
    do {
      lVar7 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        lVar5 = *(long *)(lStack_138 + lVar7 * 8);
        if (lVar5 == 0) {
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
        }
        else {
          func_0x00010c27c900(&uStack_1a0,lVar5);
        }
        uStack_1b8 = uStack_f8;
        uStack_1c0 = uStack_100;
        uStack_1b0 = uStack_f0;
        uStack_1d8 = uStack_180;
        uStack_1e0 = uStack_188;
        uStack_1d0 = uStack_178;
        _CMTimeRangeMake(&uStack_170,&uStack_1c0,&uStack_1e0);
        uStack_198 = uStack_168;
        uStack_1a0 = uStack_170;
        uStack_188 = uStack_158;
        uStack_190 = uStack_160;
        uStack_178 = uStack_148;
        uStack_180 = uStack_150;
        uStack_1b8 = param_4[1];
        uStack_1c0 = *param_4;
        uStack_1b0 = param_4[2];
        puVar2 = &uStack_1a0;
        _CMTimeRangeContainsTime(puVar2,&uStack_1c0);
        if ((int)puVar2 != 0) {
          _objc_retain(lVar5);
          _objc_release(lVar4);
          if (lVar5 == 0) goto LAB_107fb3a08;
          func_0x00010c27c900(&uStack_170,lVar5);
          _objc_release(lVar5);
          goto LAB_107fb3a14;
        }
        if (lVar5 == 0) {
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
        }
        else {
          func_0x00010c27c900(&uStack_1a0,lVar5);
        }
        uStack_1b8 = uStack_f8;
        uStack_1c0 = uStack_100;
        uStack_1b0 = uStack_f0;
        uStack_1d8 = uStack_180;
        uStack_1e0 = uStack_188;
        uStack_1d0 = uStack_178;
        _CMTimeAdd(&uStack_100,&uStack_1c0,&uStack_1e0);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      puVar3 = &uStack_140;
      lVar1 = lVar4;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar4);
LAB_107fb3a08:
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
LAB_107fb3a14:
  uStack_1b8 = param_4[1];
  uStack_1c0 = *param_4;
  uStack_1b0 = param_4[2];
  uStack_1d8 = uStack_f8;
  uStack_1e0 = uStack_100;
  uStack_1d0 = uStack_f0;
  _CMTimeSubtract(&uStack_1a0,&uStack_1c0,&uStack_1e0);
  uStack_1b8 = uStack_168;
  uStack_1c0 = uStack_170;
  uStack_1b0 = uStack_160;
  puVar2 = &uStack_1c0;
  _CMTimeAdd(param_1,puVar2,&uStack_1a0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1e8 = FUN_107fb3aa0;
  uStack_208 = puVar3[1];
  uStack_210 = *puVar3;
  uStack_200 = puVar3[2];
  puStack_1f0 = &stack0xfffffffffffffff0;
  FUN_107fb2658(puVar2[1],&uStack_210);
  return;
}



/* Entry: 107fb3aa0; end: 107fb3ad3; -[SCTimelineVideoImmutablePlaybackConfiguration frameTimeForClipLevelRatesAppliedPlaybackTime:] */

void FUN_107fb3aa0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  FUN_107fb2658(*(undefined8 *)(param_1 + 8),&uStack_30);
  return;
}



/* Entry: 107fb3ad4; end: 107fb3ad7; -[SCTimelineVideoImmutablePlaybackConfiguration clearDirectSnapDiscard] */

void FUN_107fb3ad4(void)

{
  return;
}



/* Entry: 107fb3ad8; end: 107fb3cb7; -[SCTimelineVideoImmutablePlaybackConfiguration cumulativeContentEndTimes] */

undefined * FUN_107fb3ad8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_218;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_100 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_f0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_130;
    do {
      lVar7 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        if (*(long *)(lStack_138 + lVar7 * 8) == 0) {
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
        }
        else {
          func_0x00010bf4d840(&uStack_170);
        }
        uStack_188 = uStack_f8;
        uStack_190 = uStack_100;
        uStack_180 = uStack_f0;
        uStack_1a8 = uStack_150;
        uStack_1b0 = uStack_158;
        uStack_1a0 = uStack_148;
        _CMTimeAdd(&uStack_100,&uStack_190,&uStack_1b0);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uStack_168 = uStack_f8;
        uStack_170 = uStack_100;
        uStack_160 = uStack_f0;
        _CMTimeGetSeconds(&uStack_170);
        func_0x00010c0df720();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar4);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar5;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar5);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_2a8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_2b0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_2a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    lStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    plStack_2e0 = (long *)0x0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    lVar5 = *(long *)(puVar1 + 8);
    _objc_retain(lVar5);
    lVar2 = lVar5;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar6 = *plStack_2e0;
      do {
        lVar7 = 0;
        do {
          if (*plStack_2e0 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          if (*(long *)(lStack_2e8 + lVar7 * 8) == 0) {
            uStack_308 = 0;
            uStack_310 = 0;
            uStack_2f8 = 0;
            uStack_300 = 0;
            uStack_318 = 0;
            uStack_320 = 0;
          }
          else {
            func_0x00010c27c900(&uStack_320);
          }
          uStack_338 = uStack_2a8;
          uStack_340 = uStack_2b0;
          uStack_330 = uStack_2a0;
          uStack_358 = uStack_300;
          uStack_360 = uStack_308;
          uStack_350 = uStack_2f8;
          _CMTimeAdd(&uStack_2b0,&uStack_340,&uStack_360);
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uStack_318 = uStack_2a8;
          uStack_320 = uStack_2b0;
          uStack_310 = uStack_2a0;
          _CMTimeGetSeconds(&uStack_320);
          func_0x00010c0df720(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(puVar1);
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar5);
    puVar4 = puVar3;
    func_0x00010bf51e00();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
      ___stack_chk_fail();
      puVar4 = *(undefined **)(puVar3 + 8);
      func_0x00010c089820(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar4;
      func_0x00010c280560();
      _objc_release(puVar4);
      return puVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 107fb3cb8; end: 107fb3e97; -[SCTimelineVideoImmutablePlaybackConfiguration cumulativeSegmentEndTimes] */

undefined * FUN_107fb3cb8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_100 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_f0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_130;
    do {
      lVar6 = 0;
      do {
        if (*plStack_130 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        if (*(long *)(lStack_138 + lVar6 * 8) == 0) {
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
        }
        else {
          func_0x00010c27c900(&uStack_170);
        }
        uStack_188 = uStack_f8;
        uStack_190 = uStack_100;
        uStack_180 = uStack_f0;
        uStack_1a8 = uStack_150;
        uStack_1b0 = uStack_158;
        uStack_1a0 = uStack_148;
        _CMTimeAdd(&uStack_100,&uStack_190,&uStack_1b0);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uStack_168 = uStack_f8;
        uStack_170 = uStack_100;
        uStack_160 = uStack_f0;
        _CMTimeGetSeconds(&uStack_170);
        func_0x00010c0df720(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar4);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = *(undefined **)(puVar1 + 8);
  func_0x00010c089820(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c280560();
  _objc_release(puVar3);
  return puVar1;
}



/* Entry: 107fb3e98; end: 107fb3ed7; -[SCTimelineVideoImmutablePlaybackConfiguration lastSegmentUniqueId] */

undefined8 FUN_107fb3e98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c280560();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107fb3ed8; end: 107fb3edb; -[SCTimelineVideoImmutablePlaybackConfiguration updateWithTimelineVideoSegments:] */

void FUN_107fb3ed8(void)

{
  return;
}



/* Entry: 107fb3edc; end: 107fb3ee3; -[SCTimelineVideoImmutablePlaybackConfiguration hasSameTimelineVideoSegments:] */

undefined8 FUN_107fb3edc(void)

{
  return 0;
}



/* Entry: 107fb3ee4; end: 107fb3eeb; -[SCTimelineVideoImmutablePlaybackConfiguration allSegmentsHaveSamePlaybackRate] */

undefined8 FUN_107fb3ee4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  _objc_retain();
  uVar1 = uVar2;
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fff40();
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  pcStack_48 = FUN_107fb2608;
  puStack_40 = &UNK_1108e9870;
  uVar1 = uVar2;
  uStack_38 = param_1;
  func_0x00010c0bc7a0(uVar2,param_3,&puStack_58);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 107fb3eec; end: 107fb3ef7; -[SCTimelineVideoImmutablePlaybackConfiguration snapSegmentLoggingParams] */

undefined * FUN_107fb3eec(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 107fb3ef8; end: 107fb3efb; -[SCTimelineVideoImmutablePlaybackConfiguration addPendingMemoriesImportSnapDoc:segmentUniqueId:] */

void FUN_107fb3ef8(void)

{
  return;
}



/* Entry: 107fb3efc; end: 107fb3f03; -[SCTimelineVideoImmutablePlaybackConfiguration getThenRemovePendingMemoriesImportSnapDocForSegmentUniqueId:] */

undefined8 FUN_107fb3efc(void)

{
  return 0;
}



/* Entry: 107fb3f04; end: 107fb3f07; -[SCTimelineVideoImmutablePlaybackConfiguration transferDataFrom:] */

void FUN_107fb3f04(void)

{
  return;
}



/* Entry: 107fb3f08; end: 107fb3f0b; -[SCTimelineVideoImmutablePlaybackConfiguration restoreToSegmentsBeforeReordering] */

void FUN_107fb3f08(void)

{
  return;
}



/* Entry: 107fb3f0c; end: 107fb3f0f; -[SCTimelineVideoImmutablePlaybackConfiguration didEnterReorderMode] */

void FUN_107fb3f0c(void)

{
  return;
}



/* Entry: 107fb3f10; end: 107fb3f13; -[SCTimelineVideoImmutablePlaybackConfiguration didExitReorderMode] */

void FUN_107fb3f10(void)

{
  return;
}



/* Entry: 107fb3f14; end: 107fb3f1b; -[SCTimelineVideoImmutablePlaybackConfiguration previewExitType] */

undefined8 FUN_107fb3f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107fb3f1c; end: 107fb3f23; -[SCTimelineVideoImmutablePlaybackConfiguration setPreviewExitType:] */

void FUN_107fb3f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 107fb3f24; end: 107fb3f2b; -[SCTimelineVideoImmutablePlaybackConfiguration previewEdits] */

undefined8 FUN_107fb3f24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107fb3f2c; end: 107fb3f5b; -[SCTimelineVideoImmutablePlaybackConfiguration setPreviewEdits:] */

void FUN_107fb3f2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fb3f5c; end: 107fb3f63; -[SCTimelineVideoImmutablePlaybackConfiguration thumbnailGenerationOverlayState] */

undefined8 FUN_107fb3f5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107fb3f64; end: 107fb3f93; -[SCTimelineVideoImmutablePlaybackConfiguration setThumbnailGenerationOverlayState:] */

void FUN_107fb3f64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fb3f94; end: 107fb3f9b; -[SCTimelineVideoImmutablePlaybackConfiguration musicPickerSelection] */

undefined8 FUN_107fb3f94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107fb3f9c; end: 107fb3fcb; -[SCTimelineVideoImmutablePlaybackConfiguration setMusicPickerSelection:] */

void FUN_107fb3f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fb3fcc; end: 107fb3fd3; -[SCTimelineVideoImmutablePlaybackConfiguration timelineSessionID] */

undefined8 FUN_107fb3fcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107fb3fd4; end: 107fb3fdb; -[SCTimelineVideoImmutablePlaybackConfiguration setTimelineSessionID:] */

void FUN_107fb3fd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107fb3fdc; end: 107fb3fe3; -[SCTimelineVideoImmutablePlaybackConfiguration containsOnlyImportedContent] */

undefined1 FUN_107fb3fdc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 107fb3fe4; end: 107fb3feb; -[SCTimelineVideoImmutablePlaybackConfiguration editedThumbnails] */

undefined8 FUN_107fb3fe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107fb3fec; end: 107fb3ff3; -[SCTimelineVideoImmutablePlaybackConfiguration areSegmentsEditable] */

undefined1 FUN_107fb3fec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 107fb3ff4; end: 107fb3ffb; -[SCTimelineVideoImmutablePlaybackConfiguration isAudioEnabled] */

undefined1 FUN_107fb3ff4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 107fb3ffc; end: 107fb4003; -[SCTimelineVideoImmutablePlaybackConfiguration isProminentThumbnailEnabled] */

undefined1 FUN_107fb3ffc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 107fb4004; end: 107fb400b; -[SCTimelineVideoImmutablePlaybackConfiguration setProminentThumbnailEnabled:] */

void FUN_107fb4004(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x13) = param_3;
  return;
}



/* Entry: 107fb400c; end: 107fb4013; -[SCTimelineVideoImmutablePlaybackConfiguration useNGSMEPlayback] */

undefined1 FUN_107fb400c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 107fb4014; end: 107fb401b; -[SCTimelineVideoImmutablePlaybackConfiguration suppressTimelineContextInfo] */

undefined1 FUN_107fb4014(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 107fb401c; end: 107fb4023; -[SCTimelineVideoImmutablePlaybackConfiguration setSuppressTimelineContextInfo:] */

void FUN_107fb401c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x15) = param_3;
  return;
}



/* Entry: 107fb4024; end: 107fb402b; -[SCTimelineVideoImmutablePlaybackConfiguration usageType] */

undefined8 FUN_107fb4024(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107fb402c; end: 107fb4033; -[SCTimelineVideoImmutablePlaybackConfiguration renderSizeOverride] */

undefined1  [16] FUN_107fb402c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x78);
}



/* Entry: 107fb4034; end: 107fb403b; -[SCTimelineVideoImmutablePlaybackConfiguration setRenderSizeOverride:] */

void FUN_107fb4034(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x78) = param_1;
  *(undefined8 *)(param_3 + 0x80) = param_2;
  return;
}



/* Entry: 107fb403c; end: 107fb4043; -[SCTimelineVideoImmutablePlaybackConfiguration timelineConfigurationStatusObservable] */

undefined8 FUN_107fb403c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107fb4044; end: 107fb404b; -[SCTimelineVideoImmutablePlaybackConfiguration shouldPreGenerateImagePixelBuffers] */

undefined1 FUN_107fb4044(long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}



/* Entry: 107fb404c; end: 107fb4053; -[SCTimelineVideoImmutablePlaybackConfiguration setShouldPreGenerateImagePixelBuffers:] */

void FUN_107fb404c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x16) = param_3;
  return;
}



/* Entry: 107fb4054; end: 107fb40d7; -[SCTimelineVideoImmutablePlaybackConfiguration .cxx_destruct] */

void FUN_107fb4054(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107fb40d8; end: 107fb41cb; -[SCTimelineVideoSegmentImpl initWithAssetURL:frameImage:snapSource:externalMediaSource:uniqueId:activeLensID:blizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107fb40d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126fbf58;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithUniqueId_blizzardLogger__112539ed8,param_7,param_9,
                      param_5,param_8,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112772aac;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112772ab0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772ab4) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107fb41cc; end: 107fb428f; -[SCTimelineVideoSegmentImpl initWithVideoAsset:frameImage:snapSource:externalMediaSource:uniqueId:activeLensID:blizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107fb41cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010bff4640(param_1,param_2,0,param_4,param_5,param_6,param_7,param_8,param_9);
  if (param_1 != 0) {
    lVar2 = (long)_DAT_112772ab8;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + _DAT_112772abc) = 1;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107fb4290; end: 107fb42eb; -[SCTimelineVideoSegmentImpl videoCodecType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107fb4290(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112772ab4;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c2991a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c299760();
    *(long *)(param_1 + lVar3) = lVar2;
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + lVar3);
  }
  return lVar1;
}



/* Entry: 107fb42ec; end: 107fb431b; -[SCTimelineVideoSegmentImpl assetURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb42ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772aac);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fb431c; end: 107fb437b; -[SCTimelineVideoSegmentImpl videoAsset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb431c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + _DAT_112772ab8);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_2,
                        *(undefined8 *)(param_1 + _DAT_112772aac));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fb437c; end: 107fb4393; -[SCTimelineVideoSegmentImpl hasAssetURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107fb437c(long param_1)

{
  return (*(byte *)(param_1 + _DAT_112772abc) ^ 0xff) & 1;
}



/* Entry: 107fb4394; end: 107fb4443; -[SCTimelineVideoSegmentImpl hasAudioTrack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107fb4394(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + _DAT_112772aac) == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c2991a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_38 = 0;
    func_0x00010c266c80(PTR_PTR_1126b0010,param_2,&PTR__OBJC_CLASS___NSConstantArray_111181fd0,
                        param_1,&uStack_38);
    lVar2 = param_1;
    func_0x00010c279200(param_1,param_2,*(undefined8 *)PTR__AVMediaTypeAudio_110348070);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    bVar1 = lVar3 != 0;
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  return bVar1;
}



/* Entry: 107fb4444; end: 107fb45fb; -[SCTimelineVideoSegmentImpl updateFirstFrameWithOriginalAsset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb4444(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c27c900(&uStack_80,param_1);
  func_0x00010c250fe0(&uStack_a0,param_1);
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_b0 = uStack_70;
  _CMTimeSubtract(&uStack_48,&uStack_c0,&uStack_a0);
  if (*(long *)(param_1 + _DAT_112772ab0) != 0) {
    func_0x00010c09d960(&uStack_80,param_1);
    uStack_98 = uStack_40;
    uStack_a0 = uStack_48;
    uStack_90 = uStack_38;
    puVar1 = &uStack_a0;
    _CMTimeCompare(puVar1,&uStack_80);
    if ((int)puVar1 == 0) {
      (**(code **)(param_3 + 0x10))(param_3);
      goto LAB_107fb45bc;
    }
  }
  uStack_78 = uStack_40;
  uStack_80 = uStack_48;
  uStack_70 = uStack_38;
  func_0x00010c1bf140(param_1);
  _objc_initWeak(&uStack_80,param_1);
  puVar2 = PTR_PTR_1126ae790;
  func_0x00010bfcd0e0(PTR_PTR_1126ae790);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_e0,&uStack_80);
  _objc_retain(param_3);
  uStack_d0 = uStack_40;
  uStack_d8 = uStack_48;
  uStack_c8 = uStack_38;
  func_0x00010c0f7fc0(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_e0);
  _objc_release(puVar2);
  _objc_destroyWeak(&uStack_80);
LAB_107fb45bc:
  _objc_release(param_3);
  return;
}



/* Entry: 107fb45fc; end: 107fb476f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb45fc(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126d4260;
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  else {
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    uStack_70 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    unaff_x22 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = unaff_x22;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c2991a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar2;
    func_0x00010bf598e0(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(unaff_x22);
    puVar2 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar1 + _DAT_112772ab0);
    *(undefined **)(lVar1 + _DAT_112772ab0) = puVar2;
    _objc_release(uVar6);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    _objc_release(puVar4);
    unaff_x21 = puVar4;
  }
  lVar3 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_107fb4770;
  puStack_a0 = unaff_x22;
  puStack_98 = unaff_x21;
  lStack_90 = param_1;
  lStack_88 = lVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  func_0x00010c27c900(&uStack_f0,lVar3);
  func_0x00010c250fe0(&uStack_110,lVar3);
  uStack_128 = uStack_e8;
  uStack_130 = uStack_f0;
  uStack_120 = uStack_e0;
  _CMTimeSubtract(&uStack_b8,&uStack_130,&uStack_110);
  if (*(long *)(lVar3 + _DAT_112772ab0) != 0) {
    func_0x00010c09d960(&uStack_f0,lVar3);
    uStack_108 = uStack_b0;
    uStack_110 = uStack_b8;
    uStack_100 = uStack_a8;
    puVar5 = &uStack_110;
    _CMTimeCompare(puVar5,&uStack_f0);
    if ((int)puVar5 == 0) goto LAB_107fb48e4;
  }
  uStack_e8 = uStack_b0;
  uStack_f0 = uStack_b8;
  uStack_e0 = uStack_a8;
  func_0x00010c1bf140(lVar3);
  _objc_initWeak(&uStack_f0,lVar3);
  puVar4 = PTR_PTR_1126ae790;
  func_0x00010bfcd0e0(PTR_PTR_1126ae790);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010bf605c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_138,&uStack_f0);
  _objc_retain(puVar2);
  func_0x00010c0f7fc0(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_destroyWeak(&uStack_f0);
LAB_107fb48e4:
  _objc_release(param_3);
  return;
}



/* Entry: 107fb4770; end: 107fb4927; -[SCTimelineVideoSegmentImpl updateFirstFrameImageIfNeededWithPlayerHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb4770(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c27c900(&uStack_80,param_1);
  func_0x00010c250fe0(&uStack_a0,param_1);
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_b0 = uStack_70;
  _CMTimeSubtract(&uStack_48,&uStack_c0,&uStack_a0);
  if (*(long *)(param_1 + _DAT_112772ab0) != 0) {
    func_0x00010c09d960(&uStack_80,param_1);
    uStack_98 = uStack_40;
    uStack_a0 = uStack_48;
    uStack_90 = uStack_38;
    puVar1 = &uStack_a0;
    _CMTimeCompare(puVar1,&uStack_80);
    if ((int)puVar1 == 0) goto LAB_107fb48e4;
  }
  uStack_78 = uStack_40;
  uStack_80 = uStack_48;
  uStack_70 = uStack_38;
  func_0x00010c1bf140(param_1);
  _objc_initWeak(&uStack_80,param_1);
  puVar2 = PTR_PTR_1126ae790;
  func_0x00010bfcd0e0(PTR_PTR_1126ae790);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf605c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c8,&uStack_80);
  _objc_retain(uVar3);
  func_0x00010c0f7fc0(puVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_c8);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(&uStack_80);
LAB_107fb48e4:
  _objc_release(param_3);
  return;
}



/* Entry: 107fb4928; end: 107fb4a63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107fb4928(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126d4260;
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (lVar1 != 0) {
    func_0x00010bfb13e0(auStack_68,lVar1);
    func_0x00010c297200(puVar2,param_2,auStack_68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf598e0(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar4,param_2,puVar3,
                        *(undefined8 *)(param_1 + 0x20),0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112772ab0);
    *(undefined **)(lVar1 + _DAT_112772ab0) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar1;
  }
  ___stack_chk_fail();
  return *(long *)(lVar1 + _DAT_112772ab0);
}



/* Entry: 107fb4a64; end: 107fb4a73; -[SCTimelineVideoSegmentImpl frameImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fb4a64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772ab0);
}



/* Entry: 107fb4a74; end: 107fb4a83; -[SCTimelineVideoSegmentImpl videoFuture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fb4a74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772ac0);
}



/* Entry: 107fb4a84; end: 107fb4ac3; -[SCTimelineVideoSegmentImpl setVideoFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb4a84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112772ac0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fb4ac4; end: 107fb4b23; -[SCTimelineVideoSegmentImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb4ac4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112772ac0,0);
  _objc_storeStrong(param_1 + _DAT_112772ab0,0);
  _objc_storeStrong(param_1 + _DAT_112772aac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112772ab8,0);
  return;
}



/* Entry: 107fb4b24; end: 107fb4ec3;  */

void FUN_107fb4b24(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010bfae0e0(param_1);
  func_0x00010c19c260(param_1);
  lVar1 = param_3;
  if (param_2 == 1) {
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c297dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c2209a0(param_1);
  }
  else {
    if (param_2 != 0) goto LAB_107fb4d04;
    func_0x00010bfc1280(param_1);
    func_0x00010c1a2c00(param_1);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x00010c07f200();
      if ((int)lVar2 == 0) {
        func_0x00010c0ed040(param_1);
        func_0x00010c1d63a0(param_1);
      }
      else {
        func_0x00010c24a600(param_1);
        func_0x00010c208200(param_1);
      }
      lVar2 = lVar1;
      func_0x00010c06d3a0();
      if ((int)lVar2 == 0) {
        lVar2 = lVar1;
        func_0x00010c073640();
        if ((int)lVar2 != 0) {
          func_0x00010bfb6de0(param_1);
          func_0x00010c19f3a0(param_1);
        }
      }
      else {
        func_0x00010bf1bd20(param_1);
        func_0x00010c171200(param_1);
      }
    }
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfadea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126c02c0;
      _objc_alloc(PTR_PTR_1126c02c0);
      puVar5 = PTR_PTR_1126c02b8;
      func_0x00010bdc2120(PTR_PTR_1126c02b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c111d20(param_1);
      func_0x00010c028e80(puVar4);
      func_0x00010c255780();
      _objc_release(puVar4);
      _objc_release(puVar5);
    }
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_107fb4d04:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fb4ec4; end: 107fb4eff; -[SCUnlockablesAutoMeasureEvent initWithEventName:sampleRate:measureType:sliceNames:loggingTypes:] */

void FUN_107fb4ec4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fbf60;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithEventName_sampleRate_mea_11252da20);
  return;
}



/* Entry: 107fb4f00; end: 107fb4f3f; +[SCUnlockablesAutoMeasureEvent SCAutoEventUnlockablesApplicablePersistenceCacheHit] */

void FUN_107fb4f00(void)

{
  _objc_alloc(PTR_PTR_1126c02b8);
  func_0x00010c010d20(0x4024000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fb4f40; end: 107fb4f7f; +[SCUnlockablesAutoMeasureEvent SCAutoEventUnlockablesApplicablePersistenceCacheMiss] */

void FUN_107fb4f40(void)

{
  _objc_alloc(PTR_PTR_1126c02b8);
  func_0x00010c010d20(0x4024000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fb4f80; end: 107fb4fc3; +[SCUnlockablesAutoMeasureEvent SCAutoEventUnlockablesApplicablePersistenceDisabled] */

void FUN_107fb4f80(void)

{
  _objc_alloc(PTR_PTR_1126c02b8);
  func_0x00010c010d20(0x4059000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fb4fc4; end: 107fb5003; +[SCUnlockablesAutoMeasureEvent SCAutoEventUnlockablesAssetCacheFail] */

void FUN_107fb4fc4(void)

{
  _objc_alloc(PTR_PTR_1126c02b8);
  func_0x00010c010d20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fb5004; end: 107fb5043; +[SCUnlockablesAutoMeasureEvent SCAutoEventUnlockablesAssetCacheHit] */

void FUN_107fb5004(void)

{
  _objc_alloc(PTR_PTR_1126c02b8);
  func_0x00010c010d20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fb5044; end: 107fb5083; +[SCUnlockablesAutoMeasureEvent SCAutoEventUnlockablesAssetCacheMiss] */

void FUN_107fb5044(void)

{
  _objc_alloc(PTR_PTR_1126c02b8);
  func_0x00010c010d20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fb5084; end: 107fb50c3; +[SCUnlockablesAutoMeasureEvent SCAutoEventUnlockablesAssetDownload] */

void FUN_107fb5084(void)

{
  _objc_alloc(PTR_PTR_1126c02b8);
  func_0x00010c010d20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fb50c4; end: 107fb5103; +[SCUnlockablesAutoMeasureEvent SCAutoEventUnlockablesAssetDownloadFail] */

void FUN_107fb50c4(void)

{
  _objc_alloc(PTR_PTR_1126c02b8);
  func_0x00010c010d20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fb5104; end: 107fb5143; +[SCUnlockablesAutoMeasureEvent SCAutoEventUnlockablesAssetDownloadReload] */

void FUN_107fb5104(void)

{
  _objc_alloc(PTR_PTR_1126c02b8);
  func_0x00010c010d20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fb5144; end: 107fb5187; +[SCUnlockablesAutoMeasureEvent SCAutoEventUnlockablesBitmapRecycleCrash] */

void FUN_107fb5144(void)

{
  _objc_alloc(PTR_PTR_1126c02b8);
  func_0x00010c010d20(0x4059000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fb5188; end: 107fb51c7; +[SCUnlockablesAutoMeasureEvent SCAutoEventUnlockablesBitmapRecycleOnTrim] */

void FUN_107fb5188(void)

{
  _objc_alloc(PTR_PTR_1126c02b8);
  func_0x00010c010d20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fb51c8; end: 107fb520b; +[SCUnlockablesAutoMeasureEvent SCAutoEventUnlockablesBrandSafetyNameBlacklisted] */

void FUN_107fb51c8(void)

{
  _objc_alloc(PTR_PTR_1126c02b8);
  func_0x00010c010d20(0x4059000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fb520c; end: 107fb524f; +[SCUnlockablesAutoMeasureEvent SCAutoEventUnlockablesBrandSafetyOnDemandResourceLoadFail] */

void FUN_107fb520c(void)

{
  _objc_alloc(PTR_PTR_1126c02b8);
  func_0x00010c010d20(0x4059000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


