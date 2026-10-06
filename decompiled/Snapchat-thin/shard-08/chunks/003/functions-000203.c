/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f8c39c; end: 105f8c3b3; -[SCFriendStorySharePlaybackDataProvider operaPresenterDelegate] */

void FUN_105f8c39c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f8c3b4; end: 105f8c3f3; -[SCFriendStorySharePlaybackDataProvider parentViewController] */

void FUN_105f8c3b4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f8c3f4; end: 105f8c4c3; -[SCFriendStorySharePlaybackDataProvider upNextConfig] */

void FUN_105f8c3f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  uVar3 = *(ulong *)(param_1 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf80be0();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    puVar6 = PTR_PTR_1126c6948;
    _objc_alloc(PTR_PTR_1126c6948);
    uVar1 = *(undefined8 *)(param_1 + 0x138);
    uVar2 = *(undefined8 *)(param_1 + 0x140);
    uVar7 = *(undefined8 *)(param_1 + 0x100);
    lVar5 = param_1;
    func_0x00010bf695c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0332c0(puVar6,param_2,uVar2,uVar1,uVar7,lVar5,*(undefined8 *)(param_1 + 0x108),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x150),2);
    _objc_release(lVar5);
  }
  else {
    puVar6 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105f8c4c4; end: 105f8c6eb; -[SCFriendStorySharePlaybackDataProvider contentProductPlaybackConfig] */

/* WARNING: Possible PIC construction at 0x000105f8cb28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105f8cd74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105f8cb2c) */
/* WARNING: Removing unreachable block (ram,0x000105f8cd78) */

void FUN_105f8c4c4(long param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  double dVar17;
  undefined1 auStack_488 [8];
  undefined1 uStack_480;
  undefined1 auStack_478 [8];
  undefined **ppuStack_470;
  undefined1 *puStack_468;
  undefined *puStack_460;
  undefined1 *puStack_458;
  undefined1 ****ppppuStack_450;
  code *pcStack_448;
  undefined1 *puStack_440;
  undefined1 *puStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_370;
  undefined1 ***pppuStack_2f0;
  undefined8 uStack_2e8;
  undefined1 *puStack_2e0;
  undefined1 *puStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_210;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined1 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined1 uStack_120;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  long lStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f41c18;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110dcad78;
  uVar14 = 5;
  if (*(long *)(param_1 + 0x138) == 0) {
    uVar14 = 1;
  }
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4168;
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4180;
  ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4198;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110eb5238;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110ea1ad8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f42758;
  ppuVar2 = *(undefined ***)(param_1 + 0x160);
  puStack_78 = puVar1;
  func_0x000107d04eec();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f42778;
  ppuStack_70 = ppuVar3;
  if (*(char *)(param_1 + 0x158) == '\x01') {
    puVar4 = *(undefined **)(param_1 + 0x160);
    func_0x000107d04f3c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f42798;
  puVar5 = *(undefined **)(param_1 + 0x160);
  puStack_68 = puVar4;
  func_0x000107d04fac();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar6;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (ppuVar2 == (undefined **)0x0) {
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126c6950;
  _objc_alloc();
  uVar14 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c01dd60();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_105f8c6ec;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(puVar7 + 0x108);
  uVar10 = uVar14;
  ppuStack_100 = ppuVar3;
  ppuStack_f8 = ppuVar2;
  puStack_f0 = puVar1;
  puStack_e8 = puVar4;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010c08fa60();
  uVar13 = (undefined1)uVar10;
  puVar9 = (undefined1 *)0x0;
  if (lVar8 == 0) {
LAB_105f8c8b4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
      return;
    }
  }
  else {
    puVar9 = *(undefined1 **)(puVar7 + 0x128);
    func_0x00010c08fa60();
    if (puVar9 == (undefined1 *)0x0) goto LAB_105f8c8b4;
    if (puVar7[0x130] == '\x01') {
      _objc_initWeak(auStack_118,puVar7);
      uVar10 = *(undefined8 *)(puVar7 + 0x58);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = (undefined1)*(undefined8 *)(puVar7 + 0x108);
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_140 = 0xc2000000;
      pcStack_138 = FUN_105f8c964;
      puStack_130 = &UNK_110900738;
      ppuVar3 = &puStack_148;
      param_2 = auStack_118;
      _objc_copyWeak(auStack_128);
      uStack_120 = (char)uVar14;
      func_0x00010c11d5e0(uVar10);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar10);
      _objc_destroyWeak(auStack_128);
      puVar9 = auStack_118;
      _objc_destroyWeak();
      goto LAB_105f8c8b4;
    }
    if (((int)uVar14 == 0) || (puVar7[0x131] == '\x01')) {
      _objc_initWeak(auStack_118,puVar7);
      uVar10 = *(undefined8 *)(puVar7 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_110 = *(undefined8 *)(puVar7 + 0x108);
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_170 = 0xc2000000;
      uStack_168 = 0x105f8cb8c;
      puStack_160 = &UNK_11086b670;
      ppuVar3 = &puStack_178;
      param_2 = auStack_118;
      _objc_copyWeak(auStack_158);
      puVar4 = puVar1;
      uStack_150 = (char)uVar14;
      func_0x00010c2589a0(uVar10);
      uVar13 = SUB81(puVar4,0);
      _objc_release(puVar1);
      _objc_release(uVar10);
      _objc_destroyWeak(auStack_158);
      puVar9 = auStack_118;
      _objc_destroyWeak();
      goto LAB_105f8c8b4;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
      uVar13 = 1;
      goto code_r0x00010be115a0;
    }
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar3 + 4);
  _objc_destroyWeak(auStack_118);
  __Unwind_Resume();
  pcStack_188 = FUN_105f8c964;
  lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_2;
  ppuStack_190 = &puStack_e0;
  _objc_retain(param_2);
  puVar7 = puVar9 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != (undefined1 *)0x0) && (puVar7 != (undefined *)0x0)) {
    puStack_2e0 = puVar9;
    puStack_2d8 = param_2;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    dVar17 = 0.0;
    lStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    plStack_2c0 = (long *)0x0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    puVar9 = param_2;
    func_0x00010bf52a60();
    if (puVar9 != (undefined1 *)0x0) {
      lVar8 = *plStack_2c0;
      do {
        puVar15 = (undefined1 *)0x0;
        do {
          if (*plStack_2c0 != lVar8) {
            _objc_enumerationMutation(param_2);
          }
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar10 = *(undefined8 *)(lStack_2c8 + (long)puVar15 * 8);
          uVar14 = uVar10;
          func_0x00010c26f2a0(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2709c0();
          func_0x00010c0df720(dVar17 * 1000.0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar14);
          puVar4 = puVar1;
          func_0x00010c0b4ca0();
          lVar11 = *(long *)(puVar7 + 0x118);
          func_0x00010c0b4ca0();
          dVar17 = ABS((double)(long)puVar4 - (double)lVar11);
          if (dVar17 < 1.0) {
            uVar14 = uVar10;
            func_0x00010c15f2e0();
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar14;
            func_0x00010c0720c0();
            _objc_release(uVar14);
            if ((int)uVar16 != 0) {
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              uVar14 = *(undefined8 *)(puVar7 + 0x120);
              *(undefined8 *)(puVar7 + 0x120) = uVar10;
              _objc_release(uVar14);
            }
          }
          _objc_release(puVar1);
          puVar15 = puVar15 + 1;
        } while (puVar9 != puVar15);
        puVar9 = param_2;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined1 *)0x0);
    }
    func_0x00010c08fa60(*(undefined8 *)(puVar7 + 0x120));
    uVar13 = puStack_2e0[0x28];
code_r0x00010be115a0:
                    /* WARNING: Could not recover jumptable at 0x00010be115b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar7,PTR_s__fetchFriendStoryData__112561f08,uVar13);
    return;
  }
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_210) {
    return;
  }
  ___stack_chk_fail();
  uStack_2e8 = 0x105f8cb8c;
  lStack_370 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_2f0 = &ppuStack_190;
  _objc_retain(puVar15);
  puVar7 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if ((puVar15 != (undefined1 *)0x0) && (puVar7 != (undefined *)0x0)) {
    uVar13 = (undefined1)*(undefined8 *)(puVar7 + 0x108);
    puVar9 = puVar15;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar9 != (undefined1 *)0x0) {
      dVar17 = 0.0;
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      lStack_428 = 0;
      uStack_430 = 0;
      uStack_418 = 0;
      plStack_420 = (long *)0x0;
      puVar12 = puVar9;
      puStack_440 = param_2;
      puStack_438 = puVar15;
      func_0x00010bf52a60();
      if (puVar12 != (undefined1 *)0x0) {
        lVar8 = *plStack_420;
        do {
          puVar15 = (undefined1 *)0x0;
          do {
            if (*plStack_420 != lVar8) {
              _objc_enumerationMutation(puVar9);
            }
            puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            uVar16 = *(undefined8 *)(lStack_428 + (long)puVar15 * 8);
            uVar14 = uVar16;
            func_0x00010c26f2a0(uVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar14;
            func_0x00010c1058a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f320();
            func_0x00010c0df720(dVar17 * 1000.0);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar10);
            _objc_release(uVar14);
            puVar4 = puVar1;
            func_0x00010c0b4ca0();
            lVar11 = *(long *)(puVar7 + 0x118);
            func_0x00010c0b4ca0();
            dVar17 = ABS((double)(long)puVar4 - (double)lVar11);
            if (dVar17 < 1.0) {
              uVar14 = uVar16;
              func_0x00010c15f2e0();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar14;
              func_0x00010c0720c0();
              _objc_release(uVar14);
              if ((int)uVar10 != 0) {
                func_0x00010bf3cf60();
                _objc_retainAutoreleasedReturnValue();
                uVar14 = *(undefined8 *)(puVar7 + 0x120);
                *(undefined8 *)(puVar7 + 0x120) = uVar16;
                _objc_release(uVar14);
              }
            }
            _objc_release(puVar1);
            puVar15 = puVar15 + 1;
          } while (puVar12 != puVar15);
          puVar12 = puVar9;
          func_0x00010bf52a60();
        } while (puVar12 != (undefined1 *)0x0);
      }
      func_0x00010c08fa60(*(undefined8 *)(puVar7 + 0x120));
      uVar13 = puStack_440[0x28];
      goto code_r0x00010be115a0;
    }
    _objc_release(0);
    ppuVar3 = (undefined **)0x0;
  }
  _objc_release(puVar7);
  puVar9 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_370) {
    return;
  }
  ___stack_chk_fail();
  pcStack_448 = FUN_105f8cdd8;
  ppuStack_470 = ppuVar3;
  puStack_468 = param_2;
  puStack_460 = puVar7;
  puStack_458 = puVar15;
  ppppuStack_450 = &pppuStack_2f0;
  _objc_initWeak(auStack_478,puVar9);
  uVar14 = *(undefined8 *)(puVar9 + 0x18);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uStack_480 = uVar13;
  _objc_copyWeak(auStack_488,auStack_478);
  func_0x00010bfa9a40(uVar14);
  _objc_release(uVar14);
  _objc_destroyWeak(auStack_488);
  _objc_destroyWeak(auStack_478);
  return;
}



/* Entry: 105f8c6ec; end: 105f8c963; -[SCFriendStorySharePlaybackDataProvider _fetchClientIdIfNeeded:] */

/* WARNING: Possible PIC construction at 0x000105f8cb28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105f8cd74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105f8cb2c) */
/* WARNING: Removing unreachable block (ram,0x000105f8cd78) */

void FUN_105f8c6ec(undefined1 *param_1,undefined1 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  undefined1 *puVar9;
  undefined **unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined1 auStack_3b8 [8];
  undefined1 uStack_3b0;
  undefined1 auStack_3a8 [8];
  undefined **ppuStack_3a0;
  undefined1 *puStack_398;
  undefined1 *puStack_390;
  undefined1 *puStack_388;
  undefined1 ***pppuStack_380;
  code *pcStack_378;
  undefined1 *puStack_370;
  undefined1 *puStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_2a0;
  undefined1 **ppuStack_220;
  undefined8 uStack_218;
  undefined1 *puStack_210;
  undefined1 *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_140;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x108);
  uVar3 = param_3;
  func_0x00010c08fa60();
  uVar8 = (undefined1)uVar3;
  puVar2 = (undefined1 *)0x0;
  if (lVar1 == 0) {
LAB_105f8c8b4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  }
  else {
    puVar2 = *(undefined1 **)(param_1 + 0x128);
    func_0x00010c08fa60();
    if (puVar2 == (undefined1 *)0x0) goto LAB_105f8c8b4;
    if (param_1[0x130] == '\x01') {
      _objc_initWeak(auStack_48,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = (undefined1)*(undefined8 *)(param_1 + 0x108);
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105f8c964;
      puStack_60 = &UNK_110900738;
      unaff_x22 = &puStack_78;
      param_2 = auStack_48;
      _objc_copyWeak(auStack_58);
      uStack_50 = (char)param_3;
      func_0x00010c11d5e0(uVar3);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_58);
      puVar2 = auStack_48;
      _objc_destroyWeak();
      goto LAB_105f8c8b4;
    }
    if (((int)param_3 == 0) || (param_1[0x131] == '\x01')) {
      _objc_initWeak(auStack_48,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_40 = *(undefined8 *)(param_1 + 0x108);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      uStack_98 = 0x105f8cb8c;
      puStack_90 = &UNK_11086b670;
      unaff_x22 = &puStack_a8;
      param_2 = auStack_48;
      _objc_copyWeak(auStack_88);
      puVar5 = puVar4;
      uStack_80 = (char)param_3;
      func_0x00010c2589a0(uVar3);
      uVar8 = SUB81(puVar5,0);
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_88);
      puVar2 = auStack_48;
      _objc_destroyWeak();
      goto LAB_105f8c8b4;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      uVar8 = 1;
      goto code_r0x00010be115a0;
    }
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x22 + 4);
  _objc_destroyWeak(auStack_48);
  __Unwind_Resume();
  pcStack_b8 = FUN_105f8c964;
  lStack_140 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_2;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  param_1 = puVar2 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != (undefined1 *)0x0) && (param_1 != (undefined1 *)0x0)) {
    puStack_210 = puVar2;
    puStack_208 = param_2;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    dVar12 = 0.0;
    lStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    puVar2 = param_2;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar1 = *plStack_1f0;
      do {
        puVar9 = (undefined1 *)0x0;
        do {
          if (*plStack_1f0 != lVar1) {
            _objc_enumerationMutation(param_2);
          }
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar10 = *(undefined8 *)(lStack_1f8 + (long)puVar9 * 8);
          uVar3 = uVar10;
          func_0x00010c26f2a0(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2709c0();
          func_0x00010c0df720(dVar12 * 1000.0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          puVar5 = puVar4;
          func_0x00010c0b4ca0();
          lVar6 = *(long *)(param_1 + 0x118);
          func_0x00010c0b4ca0();
          dVar12 = ABS((double)(long)puVar5 - (double)lVar6);
          if (dVar12 < 1.0) {
            uVar3 = uVar10;
            func_0x00010c15f2e0();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar3;
            func_0x00010c0720c0();
            _objc_release(uVar3);
            if ((int)uVar11 != 0) {
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = *(undefined8 *)(param_1 + 0x120);
              *(undefined8 *)(param_1 + 0x120) = uVar10;
              _objc_release(uVar3);
            }
          }
          _objc_release(puVar4);
          puVar9 = puVar9 + 1;
        } while (puVar2 != puVar9);
        puVar2 = param_2;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined1 *)0x0);
    }
    func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x120));
    uVar8 = puStack_210[0x28];
code_r0x00010be115a0:
                    /* WARNING: Could not recover jumptable at 0x00010be115b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchFriendStoryData__112561f08,uVar8);
    return;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_140) {
    return;
  }
  ___stack_chk_fail();
  uStack_218 = 0x105f8cb8c;
  lStack_2a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_220 = &puStack_c0;
  _objc_retain(puVar9);
  param_1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if ((puVar9 != (undefined1 *)0x0) && (param_1 != (undefined1 *)0x0)) {
    uVar8 = (undefined1)*(undefined8 *)(param_1 + 0x108);
    puVar2 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined1 *)0x0) {
      dVar12 = 0.0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      lStack_358 = 0;
      uStack_360 = 0;
      uStack_348 = 0;
      plStack_350 = (long *)0x0;
      puVar7 = puVar2;
      puStack_370 = param_2;
      puStack_368 = puVar9;
      func_0x00010bf52a60();
      if (puVar7 != (undefined1 *)0x0) {
        lVar1 = *plStack_350;
        do {
          puVar9 = (undefined1 *)0x0;
          do {
            if (*plStack_350 != lVar1) {
              _objc_enumerationMutation(puVar2);
            }
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            uVar11 = *(undefined8 *)(lStack_358 + (long)puVar9 * 8);
            uVar3 = uVar11;
            func_0x00010c26f2a0(uVar11);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar3;
            func_0x00010c1058a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f320();
            func_0x00010c0df720(dVar12 * 1000.0);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar10);
            _objc_release(uVar3);
            puVar5 = puVar4;
            func_0x00010c0b4ca0();
            lVar6 = *(long *)(param_1 + 0x118);
            func_0x00010c0b4ca0();
            dVar12 = ABS((double)(long)puVar5 - (double)lVar6);
            if (dVar12 < 1.0) {
              uVar3 = uVar11;
              func_0x00010c15f2e0();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar3;
              func_0x00010c0720c0();
              _objc_release(uVar3);
              if ((int)uVar10 != 0) {
                func_0x00010bf3cf60();
                _objc_retainAutoreleasedReturnValue();
                uVar3 = *(undefined8 *)(param_1 + 0x120);
                *(undefined8 *)(param_1 + 0x120) = uVar11;
                _objc_release(uVar3);
              }
            }
            _objc_release(puVar4);
            puVar9 = puVar9 + 1;
          } while (puVar7 != puVar9);
          puVar7 = puVar2;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined1 *)0x0);
      }
      func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x120));
      uVar8 = puStack_370[0x28];
      goto code_r0x00010be115a0;
    }
    _objc_release(0);
    unaff_x22 = (undefined **)0x0;
  }
  _objc_release(param_1);
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_378 = FUN_105f8cdd8;
  ppuStack_3a0 = unaff_x22;
  puStack_398 = param_2;
  puStack_390 = param_1;
  puStack_388 = puVar9;
  pppuStack_380 = &ppuStack_220;
  _objc_initWeak(auStack_3a8,puVar2);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_3b0 = uVar8;
  _objc_copyWeak(auStack_3b8,auStack_3a8);
  func_0x00010bfa9a40(uVar3);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_3b8);
  _objc_destroyWeak(auStack_3a8);
  return;
}



/* Entry: 105f8c964; end: 105f8cdd7;  */

void FUN_105f8c964(long param_1,undefined **param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **unaff_x22;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  undefined1 auStack_308 [8];
  undefined1 uStack_300;
  undefined1 auStack_2f8 [8];
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined1 **ppuStack_2d0;
  code *pcStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_1f0;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_2;
  _objc_retain(param_2);
  lVar14 = param_1 + 0x20;
  _objc_loadWeakRetained();
  ppuVar10 = param_2;
  if ((param_2 != (undefined **)0x0) && (lVar14 != 0)) {
    lStack_160 = param_1;
    ppuStack_158 = param_2;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    dVar15 = 0.0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    ppuVar10 = param_2;
    func_0x00010bf52a60();
    if (ppuVar10 != (undefined **)0x0) {
      lVar13 = *plStack_140;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          if (*plStack_140 != lVar13) {
            _objc_enumerationMutation(param_2);
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar11 = *(undefined8 *)(lStack_148 + (long)ppuVar8 * 8);
          uVar6 = uVar11;
          func_0x00010c26f2a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2709c0();
          func_0x00010c0df720(dVar15 * 1000.0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          puVar7 = puVar5;
          func_0x00010c0b4ca0();
          lVar1 = *(long *)(lVar14 + 0x118);
          func_0x00010c0b4ca0();
          dVar15 = ABS((double)(long)puVar7 - (double)lVar1);
          if (dVar15 < 1.0) {
            uVar6 = uVar11;
            func_0x00010c15f2e0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar6;
            func_0x00010c0720c0();
            _objc_release(uVar6);
            if ((int)uVar2 != 0) {
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = *(undefined8 *)(lVar14 + 0x120);
              *(undefined8 *)(lVar14 + 0x120) = uVar11;
              _objc_release(uVar6);
            }
          }
          _objc_release(puVar5);
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (ppuVar10 != ppuVar8);
        ppuVar10 = param_2;
        func_0x00010bf52a60();
      } while (ppuVar10 != (undefined **)0x0);
    }
    func_0x00010c08fa60(*(undefined8 *)(lVar14 + 0x120));
    param_3 = *(undefined1 *)(lStack_160 + 0x28);
    func_0x00010be115a0(lVar14);
    _objc_release(param_2);
    ppuVar10 = ppuStack_158;
    unaff_x22 = param_2;
  }
  _objc_release(lVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  uStack_168 = 0x105f8cb8c;
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar9);
  ppuVar8 = ppuVar10 + 4;
  _objc_loadWeakRetained();
  if ((ppuVar9 != (undefined **)0x0) && (ppuVar8 != (undefined **)0x0)) {
    param_3 = SUB81(ppuVar8[0x21],0);
    unaff_x22 = ppuVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x22 != (undefined **)0x0) {
      dVar15 = 0.0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      lStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      plStack_2a0 = (long *)0x0;
      ppuVar3 = unaff_x22;
      ppuStack_2c0 = ppuVar10;
      ppuStack_2b8 = ppuVar9;
      func_0x00010bf52a60();
      if (ppuVar3 != (undefined **)0x0) {
        lVar14 = *plStack_2a0;
        ppuVar10 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
        do {
          ppuVar9 = (undefined **)0x0;
          do {
            if (*plStack_2a0 != lVar14) {
              _objc_enumerationMutation(unaff_x22);
            }
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            puVar12 = *(undefined **)(lStack_2a8 + (long)ppuVar9 * 8);
            puVar7 = puVar12;
            func_0x00010c26f2a0(puVar12);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar7;
            func_0x00010c1058a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f320();
            func_0x00010c0df720(dVar15 * 1000.0);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
            _objc_release(puVar7);
            puVar7 = puVar5;
            func_0x00010c0b4ca0();
            puVar4 = ppuVar8[0x23];
            func_0x00010c0b4ca0();
            dVar15 = ABS((double)(long)puVar7 - (double)(long)puVar4);
            if (dVar15 < 1.0) {
              puVar7 = puVar12;
              func_0x00010c15f2e0();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar7;
              func_0x00010c0720c0();
              _objc_release(puVar7);
              if ((int)puVar4 != 0) {
                func_0x00010bf3cf60();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = ppuVar8[0x24];
                ppuVar8[0x24] = puVar12;
                _objc_release(puVar7);
              }
            }
            _objc_release(puVar5);
            ppuVar9 = (undefined **)((long)ppuVar9 + 1);
          } while (ppuVar3 != ppuVar9);
          ppuVar3 = unaff_x22;
          func_0x00010bf52a60();
        } while (ppuVar3 != (undefined **)0x0);
      }
      func_0x00010c08fa60(ppuVar8[0x24]);
      param_3 = *(undefined1 *)(ppuStack_2c0 + 5);
      func_0x00010be115a0(ppuVar8);
      ppuVar9 = ppuStack_2b8;
    }
    _objc_release(unaff_x22);
  }
  _objc_release(ppuVar8);
  ppuVar3 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2c8 = FUN_105f8cdd8;
  ppuStack_2f0 = unaff_x22;
  ppuStack_2e8 = ppuVar10;
  ppuStack_2e0 = ppuVar8;
  ppuStack_2d8 = ppuVar9;
  ppuStack_2d0 = &puStack_170;
  _objc_initWeak(auStack_2f8,ppuVar3);
  puVar5 = ppuVar3[3];
  func_0x00010c269d40(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uStack_300 = param_3;
  _objc_copyWeak(auStack_308,auStack_2f8);
  func_0x00010bfa9a40(puVar5);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_308);
  _objc_destroyWeak(auStack_2f8);
  return;
}



/* Entry: 105f8cdd8; end: 105f8ceb3; -[SCFriendStorySharePlaybackDataProvider _fetchFriendStoryData:] */

void FUN_105f8cdd8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_40 = param_3;
  _objc_copyWeak(auStack_48,auStack_38);
  func_0x00010bfa9a40(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105f8ceb4; end: 105f8d097;  */

void FUN_105f8ceb4(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  long lStack_148;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010bf52a60();
  if (lVar5 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = false;
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_2);
        }
        uVar6 = *(ulong *)(lStack_128 + lVar9 * 8);
        uVar2 = uVar6;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((uVar3 & 1) == 0) {
          func_0x00010c07fc80();
          if ((uVar6 & 1) == 0) {
            func_0x00010befa120(puVar1);
          }
        }
        else {
          bVar7 = true;
        }
        lVar9 = lVar9 + 1;
      } while (lVar5 != lVar9);
      lVar5 = param_2;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(param_2);
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(puVar1);
  uVar4 = *(undefined8 *)(lVar5 + 0xf8);
  *(undefined **)(lVar5 + 0xf8) = puVar1;
  _objc_release(uVar4);
  if (((bVar7) || (*(char *)(param_1 + 0x30) != '\x01')) ||
     ((*(byte *)(*(long *)(param_1 + 0x20) + 0x131) & 1) != 0)) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be5b400();
  }
  else {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be14980();
  }
  _objc_release(param_1);
  _objc_release(puVar1);
  lVar5 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_105f8d098;
    puStack_150 = puVar1;
    lStack_148 = param_2;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_158,lVar5);
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_105f8d140;
    puStack_168 = &UNK_1108434b0;
    _objc_copyWeak(auStack_160,auStack_158);
    func_0x0001000d76cc("APPSTORE",&puStack_180);
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_158);
    return;
  }
  return;
}



/* Entry: 105f8d098; end: 105f8d13f; -[SCFriendStorySharePlaybackDataProvider _mainThreadConstructOperaLaunchCandidates] */

void FUN_105f8d098(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105f8d140;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105f8d140; end: 105f8d18b;  */

void FUN_105f8d140(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bde6d60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x168);
    *(long *)(param_1 + 0x168) = lVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f8d18c; end: 105f8d52b; -[SCFriendStorySharePlaybackDataProvider _constructOperaLaunchCandidates] */

undefined * FUN_105f8d18c(undefined **param_1,undefined **param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1[0x21];
  func_0x00010c08fa60();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = param_1[0x2d];
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      if (param_1[0x27] == (undefined *)0x0) {
        puVar3 = PTR_PTR_1126b4d28;
        _objc_alloc(PTR_PTR_1126b4d28);
        func_0x00010c04dcc0();
        func_0x00010befa120(puVar2);
      }
      else {
        puVar1 = param_1[0x11];
        func_0x00010c269d40(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010c0fed80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar11 = param_1[6];
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066720(puVar11);
        _objc_release(puVar1);
        puVar11 = param_1[0x27];
        func_0x00010bf454e0(puVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar11;
        func_0x000108f51f98();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar1);
        _objc_release(puVar11);
      }
      puVar1 = param_1[9];
      func_0x00010c269d40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfef0c0();
      _objc_release(puVar1);
      puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      func_0x00010c0309a0();
      puVar4 = param_1[0x14];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar4;
      func_0x00010bf80be0();
      _objc_release(puVar4);
      puVar4 = param_1[0x1f];
      if (((ulong)puVar1 & 1) == 0) {
        _objc_retain(puVar4);
      }
      else {
        func_0x0001006372a4(puVar4,&PTR___NSConcreteGlobalBlock_110900798);
      }
      puVar5 = param_1[0x25];
      func_0x00010799b330(puVar5,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar11);
      param_2 = &PTR___NSConcreteGlobalBlock_1109007b8;
      puVar10 = puVar5;
      func_0x000100504554(puVar5,&PTR___NSConcreteGlobalBlock_1109007b8);
      func_0x00010befa160(puVar2);
      _objc_release(puVar10);
      if (((ulong)puVar1 & 1) == 0) {
        ppuVar6 = param_1;
        func_0x00010bf695c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar6;
        func_0x000100504554();
        func_0x00010befa160(puVar2);
        _objc_release(ppuVar7);
        func_0x00010c066720(param_1[6]);
        puVar1 = param_1[0x11];
        func_0x00010c269d40(puVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = 0;
        param_2 = ppuVar6;
        func_0x00010799ad20(0,ppuVar6,0,puVar1,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        func_0x00010befa160(puVar11);
        _objc_release(uVar8);
        _objc_release(ppuVar6);
      }
      puVar1 = puVar2;
      func_0x00010bf51e00();
      puVar10 = param_1[0x20];
      param_1[0x20] = puVar1;
      _objc_release(puVar10);
      puVar1 = puVar11;
      func_0x00010bf529e0();
      if (puVar1 == (undefined *)0x0) {
        puVar1 = (undefined *)0x0;
      }
      else {
        puVar1 = puVar11;
        func_0x00010bf529e0();
        puVar1 = puVar1 + -1;
      }
      param_1[0x2a] = puVar1;
      puVar1 = PTR_PTR_1126b23f8;
      _objc_alloc(PTR_PTR_1126b23f8);
      func_0x00010c0087a0();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar11);
      _objc_release(puVar2);
      _objc_release(puVar3);
    }
    else {
      _objc_retain(puVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010c07fde0(param_2);
  return (undefined *)(ulong)((uint)param_2 ^ 1);
}



/* Entry: 105f8d52c; end: 105f8d547;  */

uint FUN_105f8d52c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c07fde0(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 105f8d548; end: 105f8d54f;  */

void FUN_105f8d548(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storyId_112674158);
  return;
}



/* Entry: 105f8d550; end: 105f8d597;  */

void FUN_105f8d550(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f8d598; end: 105f8d75b; -[SCFriendStorySharePlaybackDataProvider _fetchStoryFromMixer] */

void FUN_105f8d598(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  func_0x000108f51ed0(uVar1,0x11,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x000108f51d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25baa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar2);
  if (lVar3 == 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105f8d75c;
    puStack_70 = &UNK_1109007f8;
    _objc_retain(uVar1);
    uStack_68 = uVar1;
    lStack_60 = param_1;
    _objc_retain(uVar1);
    _objc_copyWeak(auStack_90,auStack_58);
    func_0x00010bfa5340(uVar4);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_90);
    _objc_release(uVar1);
    _objc_release(uStack_68);
    _objc_destroyWeak(auStack_58);
  }
  else {
    func_0x00010bea7f80(param_1);
  }
  _objc_release(lVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 105f8d75c; end: 105f8d777;  */

/* WARNING: Removing unreachable block (ram,0x00010846e0ac) */

void FUN_105f8d75c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 200);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xd0);
  _objc_retain(0);
  puVar3 = PTR_PTR_1126d5c48;
  _objc_retain(uVar2);
  _objc_retain(uVar6);
  _objc_retain(uVar1);
  _objc_opt_new(puVar3);
  puVar4 = puVar3;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar3);
  _objc_release(puVar4);
  func_0x00010c1d64a0(puVar3);
  uVar5 = uVar6;
  func_0x000108f13840(uVar6,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar6);
  func_0x00010c17cd40(puVar3);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126c0dd8;
  _objc_opt_new(PTR_PTR_1126c0dd8);
  uVar6 = uVar1;
  func_0x00010846d990(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1805c0(puVar4);
  _objc_release(uVar6);
  puVar7 = PTR_PTR_1126d5c50;
  _objc_opt_new(PTR_PTR_1126d5c50);
  func_0x00010c19b200();
  func_0x00010c196c60(puVar4);
  lVar8 = 0;
  func_0x00010c08fa60();
  if (lVar8 != 0) {
    puVar9 = PTR_PTR_1126d9760;
    _objc_opt_new(PTR_PTR_1126d9760);
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204720(puVar9);
    _objc_release(puVar10);
    puVar10 = puVar9;
    func_0x00010c2414e0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar10);
    func_0x00010c2054a0(puVar4);
    _objc_release(puVar9);
  }
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebde0(puVar3);
  _objc_release(puVar9);
  puVar9 = puVar3;
  func_0x00010c1359c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f8d778; end: 105f8d833;  */

void FUN_105f8d778(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_4 != 0) {
    return;
  }
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bec4980(lVar1,param_2,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bea7f80();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105f8d834; end: 105f8d98b; -[SCFriendStorySharePlaybackDataProvider _storyFromStoryLookupResponse:responseTimestamp:] */

void FUN_105f8d834(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = param_3;
  func_0x00010c13b960();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2592e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar4);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    puVar3 = PTR_PTR_1126b0ef8;
    _objc_alloc(PTR_PTR_1126b0ef8);
    lVar4 = param_3;
    func_0x00010c135700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03ef40(puVar3);
    _objc_release(lVar4);
    lVar4 = lVar2;
    func_0x000108482f84(lVar2,puVar3,0,0,0,0,0,0,0,0,*(undefined8 *)(param_1 + 0x98),
                        *(undefined8 *)(param_1 + 0x188));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105f8d98c; end: 105f8dadf; -[SCFriendStorySharePlaybackDataProvider _setStory:] */

void FUN_105f8d98c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x138);
  *(long *)(param_1 + 0x138) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar6);
  lVar1 = param_3;
  func_0x00010c259560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf680();
  _objc_release(lVar1);
  func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x120));
  uVar6 = *(undefined8 *)(param_1 + 0x180);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a480(uVar6);
  _objc_release(puVar2);
  _objc_release(uVar6);
  func_0x00010be5b400(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  do {
    if (lVar1 == 0) {
LAB_105f8dbf8:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return;
      }
      ___stack_chk_fail();
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      _objc_retain(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(param_2);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      uVar6 = uVar7;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010c0720c0();
      _objc_release(uVar6);
      if ((int)uVar3 != 0) {
        func_0x00010c24cfc0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x120);
        *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x120) = uVar7;
        _objc_release(uVar6);
        goto LAB_105f8dbf8;
      }
      lVar8 = lVar8 + 1;
    } while (lVar1 != lVar8);
    lVar1 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105f8dae0; end: 105f8dc3b;  */

void FUN_105f8dae0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
LAB_105f8dbf8:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return;
      }
      ___stack_chk_fail();
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      _objc_retain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
      return;
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar6 = *(undefined8 *)(lVar7 * 8);
      uVar5 = uVar6;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c0720c0();
      _objc_release(uVar5);
      if ((int)uVar3 != 0) {
        func_0x00010c24cfc0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x120);
        *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x120) = uVar6;
        _objc_release(uVar5);
        goto LAB_105f8dbf8;
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105f8dc3c; end: 105f8dc63; -[SCFriendStorySharePlaybackDataProvider uiContainer] */

void FUN_105f8dc3c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f8dc64; end: 105f8de13; -[SCFriendStorySharePlaybackDataProvider constructOperaPlaybackDataForStoryResponse:isPublicStoryPostedByNonFriend:isMyStory:] */

void FUN_105f8dc64(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c08fa60();
  if (((uVar2 != 0) &&
      (uVar2 = uVar3, func_0x00010c0720c0(uVar3,param_2,*(undefined8 *)(param_1 + 0x108)),
      (uVar2 & 1) == 0)) &&
     (uVar2 = uVar3,
     func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110dbe8f8),
     (uVar2 & 1) == 0)) {
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x108);
    *(ulong *)(param_1 + 0x108) = uVar3;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010c11afe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x128);
    *(ulong *)(param_1 + 0x128) = uVar5;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x118);
    *(ulong *)(param_1 + 0x118) = uVar5;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bfe5e40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x110);
    *(ulong *)(param_1 + 0x110) = uVar5;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c261420();
    if (uVar2 == 0x77297f71) {
      bVar1 = true;
    }
    else {
      uVar2 = param_3;
      func_0x00010c261420();
      bVar1 = uVar2 == 0x180cb163;
    }
    *(bool *)(param_1 + 0x131) = bVar1;
    *(undefined1 *)(param_1 + 0x130) = param_5;
    func_0x00010be105a0(param_1,param_2,param_4);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f8de14; end: 105f8e013; -[SCFriendStorySharePlaybackDataProvider constructOperaPlaybackDataForStory:isPublicStoryPostedByNonFriend:isMyStory:] */

void FUN_105f8de14(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c25a520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c08fa60();
  if (((uVar1 != 0) &&
      (uVar1 = uVar3, func_0x00010c0720c0(uVar3,param_2,*(undefined8 *)(param_1 + 0x108)),
      (uVar1 & 1) == 0)) &&
     (uVar1 = uVar3,
     func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110dbe8f8),
     (uVar1 & 1) == 0)) {
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x108);
    *(ulong *)(param_1 + 0x108) = uVar3;
    _objc_release(uVar4);
    uVar1 = param_3;
    func_0x00010c105740();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x128);
    *(ulong *)(param_1 + 0x128) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar1);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = param_3;
    func_0x00010c105a80(param_3);
    func_0x00010c0df7c0(puVar5,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x118);
    *(undefined **)(param_1 + 0x118) = puVar5;
    _objc_release(uVar4);
    uVar1 = param_3;
    func_0x00010c25a520();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x110);
    *(ulong *)(param_1 + 0x110) = uVar6;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c25a520();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf626e0();
    if (uVar2 == 0) {
      *(undefined1 *)(param_1 + 0x131) = 0;
    }
    else {
      uVar2 = param_3;
      func_0x00010c25a520();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010bf626e0();
      *(bool *)(param_1 + 0x131) = uVar6 != 5;
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x130) = param_5;
    func_0x00010be105a0(param_1,param_2,param_4);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f8e014; end: 105f8e02b; -[SCFriendStorySharePlaybackDataProvider markStoryPlayable:] */

void FUN_105f8e014(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if ((param_3 & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f8e02c; end: 105f8e11f; -[SCFriendStorySharePlaybackDataProvider defaultFallbackStories] */

void FUN_105f8e02c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x148);
  if (lVar5 == 0) {
    if (*(long *)(param_1 + 0x138) == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_40 = *(long *)(param_1 + 0x138);
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_40,1);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar1 = puVar6;
    func_0x000107d00a08(puVar6,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x90),
                        *(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x170));
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000107af933c();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x148);
    *(undefined **)(param_1 + 0x148) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar1);
    _objc_release(puVar6);
    lVar5 = *(long *)(param_1 + 0x148);
  }
  lVar3 = lVar5;
  _objc_retain(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar3 + 0x1f8,0);
  _objc_storeStrong(lVar3 + 0x1f0,0);
  _objc_storeStrong(lVar3 + 0x1e8,0);
  _objc_storeStrong(lVar3 + 0x1e0,0);
  _objc_storeStrong(lVar3 + 0x1d8,0);
  _objc_storeStrong(lVar3 + 0x1d0,0);
  _objc_storeStrong(lVar3 + 0x1c8,0);
  _objc_storeStrong(lVar3 + 0x1c0,0);
  _objc_storeStrong(lVar3 + 0x1b8,0);
  _objc_storeStrong(lVar3 + 0x1b0,0);
  _objc_storeStrong(lVar3 + 0x1a8,0);
  _objc_storeStrong(lVar3 + 0x1a0,0);
  _objc_storeStrong(lVar3 + 0x198,0);
  _objc_storeStrong(lVar3 + 400,0);
  _objc_storeStrong(lVar3 + 0x188,0);
  _objc_storeStrong(lVar3 + 0x180,0);
  _objc_storeStrong(lVar3 + 0x178,0);
  _objc_storeStrong(lVar3 + 0x170,0);
  _objc_storeStrong(lVar3 + 0x168,0);
  _objc_storeStrong(lVar3 + 0x160,0);
  _objc_storeStrong(lVar3 + 0x148,0);
  _objc_storeStrong(lVar3 + 0x140,0);
  _objc_storeStrong(lVar3 + 0x138,0);
  _objc_storeStrong(lVar3 + 0x128,0);
  _objc_storeStrong(lVar3 + 0x120,0);
  _objc_storeStrong(lVar3 + 0x118,0);
  _objc_storeStrong(lVar3 + 0x110,0);
  _objc_storeStrong(lVar3 + 0x108,0);
  _objc_storeStrong(lVar3 + 0x100,0);
  _objc_storeStrong(lVar3 + 0xf8,0);
  _objc_storeStrong(lVar3 + 0xf0,0);
  _objc_storeStrong(lVar3 + 0xe8,0);
  _objc_storeStrong(lVar3 + 0xe0,0);
  _objc_storeStrong(lVar3 + 0xd8,0);
  _objc_storeStrong(lVar3 + 0xd0,0);
  _objc_storeStrong(lVar3 + 200,0);
  _objc_storeStrong(lVar3 + 0xc0,0);
  _objc_storeStrong(lVar3 + 0xb8,0);
  _objc_storeStrong(lVar3 + 0xb0,0);
  _objc_storeStrong(lVar3 + 0xa8,0);
  _objc_storeStrong(lVar3 + 0xa0,0);
  _objc_storeStrong(lVar3 + 0x98,0);
  _objc_storeStrong(lVar3 + 0x90,0);
  _objc_storeStrong(lVar3 + 0x88,0);
  _objc_storeStrong(lVar3 + 0x80,0);
  _objc_storeStrong(lVar3 + 0x78,0);
  _objc_storeStrong(lVar3 + 0x70,0);
  _objc_storeStrong(lVar3 + 0x68,0);
  _objc_storeStrong(lVar3 + 0x60,0);
  _objc_storeStrong(lVar3 + 0x58,0);
  _objc_storeStrong(lVar3 + 0x50,0);
  _objc_storeStrong(lVar3 + 0x48,0);
  _objc_destroyWeak(lVar3 + 0x40);
  _objc_destroyWeak(lVar3 + 0x38);
  _objc_storeStrong(lVar3 + 0x30,0);
  _objc_storeStrong(lVar3 + 0x28,0);
  _objc_storeStrong(lVar3 + 0x20,0);
  _objc_storeStrong(lVar3 + 0x18,0);
  _objc_storeStrong(lVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + 8,0);
  return;
}



/* Entry: 105f8e120; end: 105f8e3ff; -[SCFriendStorySharePlaybackDataProvider .cxx_destruct] */

void FUN_105f8e120(long param_1)

{
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 105f8e400; end: 105f8eff3; -[SCFriendStoryShareMessagePlugin initWithStorySharingServices:sharedStorySnapManager:storyShareSender:friendProfileScopeExposer:operaPluginCreator:discoverFeedFriendStoriesDataCoordinator:playbackDataProvider:myStoriesPlaybackDataProvider:autoAdvancePlaybackDataProvider:optInDataProvider:userSessionScope:myStoriesDataCoordinator:contextOperaPluginProvider:storiesMediaCoordinator:snapchattersSynchronousDataFetcher:externalLinkSendingService:saveFriendStoryOperaPluginProvider:playableViewModelGenerator:discoverDataFetcher:circumstanceEngine:communitiesOnboardingScopeExposer:simpleContentFetcher:storiesConfigProvider:spotlightShareSender:spotlightPlatformAnalyticsCreator:storiesReadReceiptCoordinator:notificationOSSettingsRetriever:offPlatformShareServices:storiesNetworkRequester:networkConnectivityMonitor:locationProvider:discoverFeedDataMutator:snapVideoFilterFactory:previewURLVideoProvider:chatMediaFetcher:chatContentDelivery:adRenderDataParser:musicContentRestrictionServices:shareNotificationService:userBlizzardLogger:storiesUsageLogger:blizzardLogger:imageDownloader:discoverFeedEventsController:discoverFeedInteractionHistoryManager:remixOperaPluginProvider:unlockableViewTracker:snapchatterUserInfoProvider:playbackMediaResolver:playbackAssetRepositoryFactory:offPlatformLinkGenerationService:snapchatterObservableRepository:storiesGrapheneMetricsEmitter:grapheneRegistry:legacyStoriesTooltipsService:repostMentionScopeExposer:repostMentionScopeServices:messagingMessageProvider:] */

undefined8 *
FUN_105f8e400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  puStack_70 = PTR_PTR_1126ee768;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x30] = 0;
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
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
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_33;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[0x29];
    puVar1[0x29] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x31];
    puVar1[0x31] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_40;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0x38];
    puVar1[0x38] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_48;
    _objc_release(uVar2);
    _objc_retain(param_49);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_49;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_51;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_53;
    _objc_release(uVar2);
    _objc_retain(param_54);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_54;
    _objc_release(uVar2);
    _objc_retain(param_55);
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = param_55;
    _objc_release(uVar2);
    _objc_retain(param_56);
    uVar2 = puVar1[0x40];
    puVar1[0x40] = param_56;
    _objc_release(uVar2);
    _objc_retain(param_57);
    uVar2 = puVar1[0x41];
    puVar1[0x41] = param_57;
    _objc_release(uVar2);
    _objc_retain(param_58);
    uVar2 = puVar1[0x42];
    puVar1[0x42] = param_58;
    _objc_release(uVar2);
    _objc_retain(param_59);
    uVar2 = puVar1[0x43];
    puVar1[0x43] = param_59;
    _objc_release(uVar2);
    _objc_retain(param_60);
    uVar2 = puVar1[0x44];
    puVar1[0x44] = param_60;
    _objc_release(uVar2);
  }
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
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



/* Entry: 105f8eff4; end: 105f8f107; -[SCFriendStoryShareMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105f8eff4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x220);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bee75e0(param_1,param_2,param_3,lVar5,param_4,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f8f108; end: 105f8f487; -[SCFriendStoryShareMessagePlugin _valdiContextParamsForMessage:storyId:conversationParticipants:renderForQuotedMessage:renderForQuotedMessagePreview:] */

/* WARNING: Removing unreachable block (ram,0x000105f8f224) */

void FUN_105f8f108(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,uint param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x180);
  uVar2 = *(undefined8 *)(param_1 + 0x220);
  func_0x00010c0cbe00(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar4 = *(long *)(param_1 + 0x160);
  func_0x00010c0e00e0(lVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x168);
  func_0x00010c0e00e0(lVar5,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c6880;
  if ((param_6 == 0) || (param_7 != 0)) {
    func_0x00010c0cbae0(PTR_PTR_1126c6880,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if ((param_7 & 1) == 0) goto LAB_105f8f244;
  }
  else {
    uVar2 = param_3;
    func_0x00010c0cb340(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c11ec40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11eda0(puVar7,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar2);
LAB_105f8f244:
    if (((param_6 & 1) == 0) && (lVar4 != 0)) {
      lVar8 = lVar4;
      func_0x00010bf4ece0(lVar4,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105f8f280;
    }
  }
  if (lVar5 == 0) {
    uVar2 = param_5;
    func_0x0001070b1c70(param_5);
    param_6 = param_6 | param_7;
    lVar9 = param_1;
    func_0x00010bdf7e60(param_1,param_2,param_4,param_3,uVar2,param_6);
    _objc_retainAutoreleasedReturnValue();
    if ((param_6 & 1) == 0) {
      lStack_78 = param_1;
      func_0x00010bdc43a0(param_1,param_2,param_3,lVar9);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lStack_78 = 0;
    }
    if ((param_7 & 1) == 0) {
      uVar2 = param_5;
      func_0x0001070b1c70(param_5);
      lStack_80 = param_1;
      func_0x00010be74c40(param_1,param_2,param_4,param_3,uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lStack_80 = 0;
    }
    lVar10 = *(long *)(param_1 + 8);
    func_0x00010c295300(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c08f720(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar8;
    func_0x00010bf4ef00(lVar8,param_2,lVar9,lStack_80,uVar2,lStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(lVar8);
    _objc_release(lVar10);
    puVar1 = (undefined8 *)(param_1 + 0x168);
    if (param_6 == 0) {
      puVar1 = (undefined8 *)(param_1 + 0x160);
    }
    func_0x00010c1d0640(*puVar1,param_2,lVar11,uVar3);
    lVar8 = lVar11;
    func_0x00010bf4ece0(lVar11,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    _objc_release(lStack_80);
    _objc_release(lStack_78);
    _objc_release(lVar9);
  }
  else {
    lVar8 = lVar5;
    func_0x00010bf4ece0(lVar5,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_105f8f280:
  _objc_release(puVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _os_unfair_lock_unlock(param_1 + 0x180);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 105f8f488; end: 105f8f60b; -[SCFriendStoryShareMessagePlugin _dataProviderForStoryId:message:isGroup:renderForQuotedMessage:] */

void FUN_105f8f488(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_assert_owner(param_1 + 0x180);
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  func_0x00010c0cbe00(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = *(undefined **)(param_1 + 0x170);
  func_0x00010c0e00e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (((param_6 & 1) != 0) || (puVar4 = puVar3, puVar3 == (undefined *)0x0)) {
    puVar4 = PTR_PTR_1126c6958;
    _objc_alloc(PTR_PTR_1126c6958);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    lVar5 = param_1;
    func_0x00010be74c40(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b4c0(puVar4,param_2,param_4,param_3,param_6,uVar1,lVar5,param_1,
                        *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x58),
                        *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0xf0),
                        *(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x220));
    _objc_release(puVar3);
    _objc_release(lVar5);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x170),param_2,puVar4,uVar2);
  }
  _objc_retain(puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f8f60c; end: 105f8f6c7; -[SCFriendStoryShareMessagePlugin _actionHandlerWithMessage:dataProvider:] */

void FUN_105f8f60c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c6960;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0x238;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c058600(puVar1,param_2,lVar2,param_3,param_4,*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0xa8),
                      *(undefined8 *)(param_1 + 0x210),*(undefined8 *)(param_1 + 0x218),
                      *(undefined8 *)(param_1 + 0x220));
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f8f6c8; end: 105f8f8df; -[SCFriendStoryShareMessagePlugin _playbackDataProviderForStoryId:message:isGroup:] */

void FUN_105f8f6c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  _os_unfair_lock_assert_owner(param_1 + 0x180);
  uVar4 = *(undefined8 *)(param_1 + 0x220);
  func_0x00010c0cbe00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = *(undefined **)(param_1 + 0x178);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = PTR_PTR_1126c6968;
    _objc_alloc();
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    lVar7 = param_1 + 0x238;
    _objc_loadWeakRetained();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    lVar8 = param_1 + 0x248;
    _objc_loadWeakRetained();
    func_0x00010c00d040(puVar6,*(undefined8 *)(param_1 + 0x1c8),uVar9,lVar7,uVar4,uVar2,uVar1,uVar3,
                        param_1,lVar8,*(undefined8 *)(param_1 + 0x50),
                        *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                        *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                        *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                        *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                        *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
                        *(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198),
                        *(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x1a8),
                        *(undefined8 *)(param_1 + 0x1b0),*(undefined8 *)(param_1 + 0x1b8),
                        *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                        *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0),param_5);
    _objc_release(lVar8);
    _objc_release(lVar7);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x178));
  }
  _objc_retain(puVar6);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105f8f8e0; end: 105f8f90f; -[SCFriendStoryShareMessagePlugin identifier] */

void FUN_105f8f8e0(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eebb38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eebb38);
  return;
}



/* Entry: 105f8f910; end: 105f8f917; -[SCFriendStoryShareMessagePlugin pluginType] */

undefined8 FUN_105f8f910(void)

{
  return 0;
}



/* Entry: 105f8f918; end: 105f8fa33; -[SCFriendStoryShareMessagePlugin setActiveConversationIdObservable:] */

void FUN_105f8f918(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x228) = param_3;
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



/* Entry: 105f8fa34; end: 105f8fa5f;  */

void FUN_105f8fa34(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f8fa60; end: 105f8fae3; -[SCFriendStoryShareMessagePlugin _handleConversationChange] */

void FUN_105f8fa60(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x180);
  _os_unfair_lock_lock(param_1 + 0x184);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x148));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x150));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x158));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x160));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x168));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x170));
  _os_unfair_lock_unlock(param_1 + 0x184);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x180);
  return;
}



/* Entry: 105f8fae4; end: 105f8fc0f; -[SCFriendStoryShareMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:] */

uint FUN_105f8fae4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x184);
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x148);
  func_0x00010bf4b900(uVar5,param_2,uVar4);
  if ((int)uVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x150);
    func_0x00010bf4b900(uVar5,param_2,uVar4);
    uVar6 = (uint)uVar5 ^ 1;
  }
  _objc_release(uVar4);
  _os_unfair_lock_unlock(param_1 + 0x184);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 105f8fc10; end: 105f8fd27; -[SCFriendStoryShareMessagePlugin canForwardMessageFromCTA:] */

uint FUN_105f8fc10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x184);
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x148);
  func_0x00010bf4b900(uVar5,param_2,uVar4);
  if ((int)uVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x150);
    func_0x00010bf4b900(uVar5,param_2,uVar4);
    uVar6 = (uint)uVar5 ^ 1;
  }
  _objc_release(uVar4);
  _os_unfair_lock_unlock(param_1 + 0x184);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 105f8fd28; end: 105f8ff73; -[SCFriendStoryShareMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:] */

void FUN_105f8fd28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x180);
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = param_5;
  func_0x0001070b1c70(param_5);
  lVar6 = param_1;
  func_0x00010bdf7e60(param_1,param_2,uVar5,param_3,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c26da40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    puVar11 = (undefined *)0x0;
    puVar10 = (undefined *)0x0;
  }
  else {
    lVar7 = lVar6;
    func_0x00010c26da40(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010becbca0(param_1,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    puVar9 = PTR_PTR_1126b0648;
    _objc_alloc(PTR_PTR_1126b0648);
    func_0x00010c01cb60();
    puVar10 = PTR_PTR_1126c6898;
    func_0x00010c08f300(PTR_PTR_1126c6898,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126c68a0;
    func_0x00010c2990e0(0x3fe3aa03e88cb3c9,PTR_PTR_1126c68a0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(lVar8);
  }
  puVar9 = PTR_PTR_1126c68a8;
  _objc_alloc(PTR_PTR_1126c68a8);
  func_0x00010c039de0();
  _objc_release(lVar6);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar5);
  _os_unfair_lock_unlock(param_1 + 0x180);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105f8ff74; end: 105f9021f; -[SCFriendStoryShareMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:] */

void FUN_105f8ff74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_5;
  func_0x00010bf026a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001086063f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010be195e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x220);
  func_0x00010c0cbe00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar4;
  func_0x00010bf4df40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010bf4df40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c0c6c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar1);
  puVar8 = PTR_PTR_1126c2810;
  _objc_alloc(PTR_PTR_1126c2810);
  func_0x00010b67af60(uVar7);
  func_0x00010c04e240(puVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010bf50b20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_retain(param_7);
  func_0x00010c15d8c0(uVar9);
  _objc_release(uVar1);
  _objc_release(uVar9);
  _objc_release(param_7);
  _objc_release(param_7);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 105f90220; end: 105f90233;  */

void FUN_105f90220(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105f90230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 == 0);
  return;
}



/* Entry: 105f90234; end: 105f9063f; -[SCFriendStoryShareMessagePlugin remixConfigurationForMessage:conversationParticipants:] */

void FUN_105f90234(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x220);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0c6c20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010b67af60();
  func_0x0001085439b8();
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _os_unfair_lock_lock(param_1 + 0x180);
  func_0x0001070b1c70(param_4);
  lVar8 = param_1;
  func_0x00010bdf7e60();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x180);
  lVar9 = lVar8;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar9 == 0) {
    func_0x00010bfa6240(lVar8);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar10;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  uVar12 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar12);
  _objc_initWeak(auStack_80,param_1);
  uVar11 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x00010c2519e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105f90640;
  puStack_b0 = &UNK_110900888;
  uStack_a8 = uVar5;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(lVar8);
  uVar10 = uVar11;
  lStack_a0 = lVar8;
  uStack_98 = uVar3;
  uStack_90 = uVar12;
  func_0x00010bfad7a0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x105f906d0;
  puStack_e0 = &UNK_1109008b8;
  _objc_copyWeak(auStack_d0,auStack_80);
  _objc_retain(lVar8);
  uVar4 = uVar10;
  lStack_d8 = lVar8;
  func_0x00010bfb2660(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_108,auStack_80);
  _objc_retain(lVar8);
  uVar6 = uVar4;
  uStack_100 = uVar7;
  func_0x00010c0b8600(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_destroyWeak(auStack_108);
  _objc_release(uVar4);
  _objc_release(lStack_d8);
  _objc_destroyWeak(auStack_d0);
  _objc_release(uVar10);
  _objc_release(lStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar11);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(lVar8);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 105f90640; end: 105f9073f;  */

undefined8 FUN_105f90640(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c0720c0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  if ((int)param_2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010be44520();
    if ((int)lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf4e840(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x0001070c07f0();
      _objc_release(uVar3);
    }
    _objc_release(lVar1);
  }
  return uVar4;
}



/* Entry: 105f90740; end: 105f90857;  */

void FUN_105f90740(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  func_0x00010bf1f3c0();
  puVar6 = PTR_PTR_1126ae750;
  if ((param_2 & 1) == 0) {
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0c5180(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf4e840(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010be8afe0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2468a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105f90858; end: 105f90a3b; -[SCFriendStoryShareMessagePlugin _isMediaAvailableForRemix:] */

void FUN_105f90858(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae6b8;
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105f90910;
  puStack_48 = &UNK_11084f340;
  uStack_40 = uVar2;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar2);
  func_0x00010bf54280(puVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f90a3c; end: 105f90c1b; -[SCFriendStoryShareMessagePlugin _remixConfigurationForStoryId:posterUserId:mediaId:mediaType:contextHint:] */

void FUN_105f90a3c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c293740(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x0001070c0874(param_3,param_7,uVar1,param_4,*(undefined8 *)(param_1 + 0xa0));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar7);
  lVar3 = lVar2;
  func_0x00010c247d00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c277e80();
  uVar7 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  FUN_105f92360(param_5,param_6,lVar4 != 0,uVar7,*(undefined8 *)(param_1 + 0xe0),
                *(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xe8));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar7);
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126b23b8;
  func_0x00010c258f40(PTR_PTR_1126b23b8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c6970;
  _objc_alloc(PTR_PTR_1126c6970);
  lVar3 = lVar2;
  func_0x00010c247d00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1298a0(lVar2);
  func_0x00010c011360(puVar6);
  _objc_release(lVar3);
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105f90c1c; end: 105f90d77; -[SCFriendStoryShareMessagePlugin userIdForAddFriendCta:] */

void FUN_105f90c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x220);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x180);
    lVar2 = param_1;
    func_0x00010bdf7e60(param_1,param_2,lVar4,param_3,0,0);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_unlock(param_1 + 0x180);
    lVar3 = lVar2;
    func_0x00010c292440(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105f90d78; end: 105f90d87;  */

void FUN_105f90d78(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ec810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae750,PTR_s_optionalWithValue__112618c18,param_2);
  return;
}



/* Entry: 105f90d88; end: 105f90eaf; -[SCFriendStoryShareMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:] */

void FUN_105f90d88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x220);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11ebc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010c22ac80();
  if ((int)lVar2 == 5) {
    lVar2 = lVar3;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010bee75e0(param_1,param_2,param_3,lVar1,param_4,1,0);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
  else {
    param_1 = 0;
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f90eb0; end: 105f90fd7; -[SCFriendStoryShareMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:] */

void FUN_105f90eb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x220);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010c22ac80();
  if ((int)lVar2 == 5) {
    lVar2 = lVar3;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010bee75e0(param_1,param_2,param_3,lVar1,param_4,0,1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
  else {
    param_1 = 0;
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f90fd8; end: 105f90fdf; -[SCFriendStoryShareMessagePlugin quotedRenderingStyleForMessage:] */

undefined8 FUN_105f90fd8(void)

{
  return 1;
}



/* Entry: 105f90fe0; end: 105f9112b; -[SCFriendStoryShareMessagePlugin shouldDisplayContextualHeaderForMessage:] */

ulong FUN_105f90fe0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x220);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11ebc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bf4df40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c22ac80();
  if ((int)lVar2 == 5) {
    lVar2 = lVar3;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    _objc_release(lVar2);
    if (lVar6 == 0) goto LAB_105f910c4;
  }
  else {
LAB_105f910c4:
    uVar7 = param_1;
    func_0x00010beb34c0(param_1,param_2,param_3,lVar4);
    if ((uVar7 & 1) == 0) {
      func_0x00010beb3380(param_1,param_2,lVar4);
      goto LAB_105f910f0;
    }
  }
  param_1 = 1;
LAB_105f910f0:
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105f9112c; end: 105f9135b; -[SCFriendStoryShareMessagePlugin contextualHeaderForMessage:conversationParticipants:] */

void FUN_105f9112c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11ebc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22ac80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar4 == 5) {
    puVar6 = PTR_PTR_1126c68c0;
    _objc_alloc(PTR_PTR_1126c68c0);
    param_1 = puVar6;
    func_0x000108f59464();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c68c8;
    func_0x00010c131980(PTR_PTR_1126c68c8);
    _objc_retainAutoreleasedReturnValue();
LAB_105f911dc:
    func_0x00010c051540(puVar6,param_2,param_1,0,puVar5);
    _objc_release(puVar5);
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf4df40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010beb34c0(param_1,param_2,param_3,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)puVar6 == 0) {
      uVar2 = uVar1;
      func_0x00010bf4df40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c22a700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb3380(param_1,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((int)param_1 == 0) {
        puVar6 = (undefined *)0x0;
        goto LAB_105f9132c;
      }
      puVar6 = PTR_PTR_1126c68c0;
      _objc_alloc(PTR_PTR_1126c68c0);
      param_1 = puVar6;
      func_0x000108f594ac();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c68c8;
      func_0x00010c23b7e0(PTR_PTR_1126c68c8,param_2,0x1d1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105f911dc;
    }
    func_0x00010be41e00(param_1,param_2,param_3);
    if (((ulong)param_1 & 1) == 0) {
      func_0x000108f5947c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108f59494();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR_PTR_1126c68c0;
    _objc_alloc(PTR_PTR_1126c68c0);
    func_0x00010c051540();
  }
  _objc_release(param_1);
LAB_105f9132c:
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105f9135c; end: 105f9148f; -[SCFriendStoryShareMessagePlugin _shouldDisplayStoryMentionHeaderForMessage:shareContent:] */

ulong FUN_105f9135c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = param_4;
  func_0x00010c22ac80();
  if ((int)uVar5 == 5) {
    uVar1 = param_4;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c0828e0();
    _objc_release(uVar1);
    if ((int)uVar5 != 0) {
      lVar2 = *(long *)(param_1 + 0x58);
      func_0x00010c293740();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar4 = *(long *)(param_1 + 0x220);
      func_0x00010c0cbe00(lVar4,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010c0cb8c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = lVar3;
      func_0x00010c08fa60();
      if ((lVar4 == 0) || (lVar4 = lVar2, func_0x00010c08fa60(), lVar4 == 0)) {
        uVar5 = 1;
      }
      else {
        lVar4 = lVar2;
        func_0x00010c0720c0(lVar2,param_2,lVar3);
        uVar5 = (ulong)((uint)lVar4 ^ 1);
      }
      _objc_release(lVar2);
      _objc_release(lVar3);
    }
  }
  else {
    uVar5 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 105f91490; end: 105f91533; -[SCFriendStoryShareMessagePlugin _shouldDisplayGroupStoryHeaderForShareContent:] */

undefined8 FUN_105f91490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c22ac80();
  if ((int)uVar3 == 5) {
    uVar1 = param_3;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c25b820();
    if ((int)uVar3 == 2) {
      uVar2 = param_3;
      func_0x00010c258f40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfd9ee0();
      _objc_release(uVar2);
    }
    else {
      uVar3 = 0;
    }
    _objc_release(uVar1);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105f91534; end: 105f915fb; -[SCFriendStoryShareMessagePlugin _isMentionRepostForMessage:] */

undefined8 FUN_105f91534(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x180);
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010c0e00e0(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c077b60();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x180);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105f915fc; end: 105f91787; -[SCFriendStoryShareMessagePlugin _isMentionRepostForStoryId:] */

undefined * FUN_105f915fc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x180);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar1 = *(long *)(param_1 + 0x170);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  puVar6 = (undefined *)0x0;
  if (lVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        puVar6 = *(undefined **)(lStack_128 + lVar8 * 8);
        puVar3 = puVar6;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        puVar5 = (undefined8 *)param_3;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        if ((int)puVar4 != 0) {
          func_0x00010c077b60();
          goto LAB_105f9170c;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      puVar5 = &uStack_130;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
    puVar6 = (undefined *)0x0;
  }
LAB_105f9170c:
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x180);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar6;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x180);
  __Unwind_Resume(param_3);
  _objc_retain(puVar5);
  puVar6 = PTR_PTR_1126b1a40;
  _objc_opt_new(PTR_PTR_1126b1a40);
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar6,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar6;
  func_0x00010c2ac2e0(puVar6,param_2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar6,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c2b0820(puVar6,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar6,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 105f91788; end: 105f91897; -[SCFriendStoryShareMessagePlugin _friendStorySharePlatformAnalyticsForDestinationInfo:] */

void FUN_105f91788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1a40;
  _objc_opt_new(PTR_PTR_1126b1a40);
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac2e0(puVar1,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c2b0820(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f91898; end: 105f9193b; -[SCFriendStoryShareMessagePlugin _thumbnailObservableWithThumbnailDownloadInfo:] */

void FUN_105f91898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105f9193c;
  puStack_48 = &UNK_11084f340;
  uStack_40 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f9193c; end: 105f91b0f;  */

void FUN_105f9193c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b08b0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26e3a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf93e00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf93e00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195d00(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xb0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c13e600(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105f91b10; end: 105f91b83;  */

void FUN_105f91b10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010b7f5374(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f91b84; end: 105f91cbb; -[SCFriendStoryShareMessagePlugin didUpdateStoryVisibilityForStoryId:isForwardable:] */

void FUN_105f91b84(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x184);
  uVar1 = *(undefined8 *)(param_1 + 0x148);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x148);
  if (((param_4 & 1) == 0) && ((((uint)uVar1 ^ 1) & 1) == 0)) {
    func_0x00010c12d360(uVar2,param_2,param_3);
  }
  else {
    func_0x00010bf4b900(uVar2,param_2,param_3);
    uVar6 = 0;
    if ((param_4 == 0) || ((int)uVar2 == 1)) goto LAB_105f91c04;
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x148),param_2,param_3);
  }
  uVar6 = 1;
LAB_105f91c04:
  _os_unfair_lock_unlock(param_1 + 0x184);
  lVar3 = param_1;
  func_0x00010be41e20(param_1,param_2,param_3);
  if ((int)lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x184);
    uVar4 = *(ulong *)(param_1 + 0x158);
    func_0x00010bf4b900(uVar4,param_2,param_3);
    if ((uVar4 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x158),param_2,param_3);
    }
    uVar5 = (uint)uVar4 ^ 1;
    _os_unfair_lock_unlock(param_1 + 0x184);
  }
  if ((uVar6 | uVar5) == 1) {
    lVar3 = param_1 + 0x250;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c101c40();
    _objc_release(lVar3);
    if (uVar6 != 0) {
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x1c0),param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f91cbc; end: 105f91d2b; -[SCFriendStoryShareMessagePlugin _isStoryViewable:] */

undefined8 FUN_105f91cbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x184);
  uVar1 = *(undefined8 *)(param_1 + 0x148);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x184);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105f91d2c; end: 105f91d73; -[SCFriendStoryShareMessagePlugin freezeForwardButtonUpdatesForStoryId:] */

void FUN_105f91d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x150);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x150),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f91d74; end: 105f91f1b; -[SCFriendStoryShareMessagePlugin dismissPresentedView] */

long FUN_105f91d74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x180);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar5 = *(long *)(param_1 + 0x170);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        lVar2 = *(long *)(param_1 + 0x170);
        func_0x00010c0e00e0(lVar2,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c25b080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar2);
        if (lVar3 != 0) {
          uVar4 = *(undefined8 *)(param_1 + 0x170);
          func_0x00010c0e00e0(uVar4,param_2,uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010c25b080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf376e0();
          _objc_release(uVar6);
          _objc_release(uVar4);
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar5);
  lVar1 = param_1 + 0x180;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar1;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x180);
  __Unwind_Resume();
  return *(long *)(lVar1 + 0x228);
}



/* Entry: 105f91f1c; end: 105f91f23; -[SCFriendStoryShareMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105f91f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x228);
}



/* Entry: 105f91f24; end: 105f91f2b; -[SCFriendStoryShareMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105f91f24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x230);
}



/* Entry: 105f91f2c; end: 105f91f5b; -[SCFriendStoryShareMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105f91f2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x230) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f91f5c; end: 105f91f73; -[SCFriendStoryShareMessagePlugin uiContainer] */

void FUN_105f91f5c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x238);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f91f74; end: 105f91f7f; -[SCFriendStoryShareMessagePlugin setUiContainer:] */

void FUN_105f91f74(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x238,param_3);
  return;
}



/* Entry: 105f91f80; end: 105f91f97; -[SCFriendStoryShareMessagePlugin presentingViewController] */

void FUN_105f91f80(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f91f98; end: 105f91fa3; -[SCFriendStoryShareMessagePlugin setPresentingViewController:] */

void FUN_105f91f98(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x240,param_3);
  return;
}



/* Entry: 105f91fa4; end: 105f91fbb; -[SCFriendStoryShareMessagePlugin operaPresenterDelegate] */

void FUN_105f91fa4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f91fbc; end: 105f91fc7; -[SCFriendStoryShareMessagePlugin setOperaPresenterDelegate:] */

void FUN_105f91fbc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x248,param_3);
  return;
}



/* Entry: 105f91fc8; end: 105f91fdf; -[SCFriendStoryShareMessagePlugin forwardingDelegate] */

void FUN_105f91fc8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x250);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f91fe0; end: 105f91feb; -[SCFriendStoryShareMessagePlugin setForwardingDelegate:] */

void FUN_105f91fe0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x250,param_3);
  return;
}



/* Entry: 105f91fec; end: 105f9235f; -[SCFriendStoryShareMessagePlugin .cxx_destruct] */

void FUN_105f91fec(long param_1)

{
  _objc_destroyWeak(param_1 + 0x250);
  _objc_destroyWeak(param_1 + 0x248);
  _objc_destroyWeak(param_1 + 0x240);
  _objc_destroyWeak(param_1 + 0x238);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f92360; end: 105f92adf;  */

void FUN_105f92360(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b4c0();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126c6978;
  puVar3 = PTR_PTR_1126ae790;
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1;
    if ((param_2 < 0x16) && ((1L << (param_2 & 0x3f) & 0x363f36U) != 0)) {
      func_0x000105f92564(param_1,0,0,param_4,param_5,param_6,param_7,0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29be60(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_1);
      _objc_retain(param_7);
      func_0x00010bfcd0e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      FUN_105f934a4(param_1,0,0,param_2,param_7,puVar3,0,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(param_7);
      _objc_release(puVar3);
      func_0x00010bfe95c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f92ae0; end: 105f92c9f; +[SCRemixChatMediaUtilities repostImageFromRepostMentionMetadata:contentDelivery:chatMediaFetcher:sharedStorySnapManager:repostedSnapUsername:] */

void FUN_105f92ae0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf4b4c0();
  _objc_release(uVar1);
  _objc_release(param_4);
  if (((int)uVar2 == 0) ||
     (uVar1 = param_3, func_0x00010c0830a0(), puVar3 = PTR_PTR_1126ae790, (uVar1 & 1) != 0)) {
    uVar5 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    func_0x00010bfcd0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar5 = uVar1;
    FUN_105f934a4(uVar1,uVar4,param_7,0,param_5,puVar3,param_6,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(param_6);
    _objc_release(param_7);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105f92ca0; end: 105f92def; +[SCRemixChatMediaUtilities repostVideoURLFromRepostMentionMetadata:snapVideoFilterFactory:previewURLVideoProvider:contentDelivery:chatMediaFetcher:sharedStorySnapManager:repostedSnapUsername:] */

void FUN_105f92ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar3 = param_3;
  func_0x00010c0830a0();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x000105f92564(uVar1,uVar2,param_9,param_4,param_5,param_6,param_7,param_8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105f92df0; end: 105f9301f;  */

void FUN_105f92df0(undefined *param_1,ulong param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  lVar2 = param_4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = puVar1;
  if (((param_5 & 1) == 0) && (lVar2 != 0)) {
    lVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010bfa8620(lVar2);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(lVar2);
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bf43d60(puVar1);
    _objc_release(puVar4);
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  func_0x00010bf1f3c0();
  if ((uVar5 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    puVar6 = *(undefined **)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar6;
    func_0x00010c29bc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar8);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar11);
    uVar12 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar12);
    uVar13 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar13);
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar10);
    _objc_retain(puVar1);
    func_0x00010c25a660(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar10);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(puVar1);
    _objc_release(uVar11);
    _objc_release(puVar8);
  }
  _objc_release(puVar1);
  _objc_release(puVar8);
  return;
}



/* Entry: 105f93020; end: 105f93367;  */

void FUN_105f93020(long param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  func_0x00010bf1f3c0();
  if ((param_2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c29bc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar7);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar4);
    _objc_retain(puVar3);
    func_0x00010c25a660(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(param_3);
  }
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 105f93368; end: 105f9343b;  */

void FUN_105f93368(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e345b8;
  func_0x00010c00e2e0(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  if (ppuVar3 != (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(puVar2 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar2 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 105f9343c; end: 105f9344f;  */

void FUN_105f9343c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 105f93450; end: 105f934a3;  */

void FUN_105f93450(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3 == 0x4da97dc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f934a4; end: 105f93647;  */

void FUN_105f934a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new();
  uVar2 = param_1;
  FUN_105f92df0(param_1,param_2,param_3,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_retain(param_6);
  _objc_retain(param_1);
  _objc_retain(param_5);
  _objc_retain(puVar1);
  func_0x00010c297260(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f93648; end: 105f9395f;  */

void FUN_105f93648(long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  func_0x00010bf1f3c0();
  if ((param_2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    func_0x00010c25b580(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 105f93960; end: 105f93b47;  */

/* WARNING: Possible PIC construction at 0x000105f93a14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105f93a18) */

void FUN_105f93960(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar1 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = puVar1;
    puStack_60 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    puVar4 = puVar3;
    FUN_1065efadc();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105f93b48;
    puStack_78 = &UNK_11086dbb8;
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar7);
    ppuVar6 = &puStack_90;
    uStack_70 = uVar7;
    func_0x00010c297260(puVar4);
    _objc_release(uStack_70);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    if (ppuVar6 == (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_completeWithValue__1125ae900,uVar5);
      return;
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    FUN_105f93368(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_completeWithError__1125ae8d0);
  return;
}



/* Entry: 105f93b48; end: 105f93b67;  */

void FUN_105f93b48(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 105f93b68; end: 105f93cd7;  */

void FUN_105f93b68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126ae558;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c5180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c29bc40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar4 = puVar2;
  FUN_1065f0140(puVar2,puVar3,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar6);
  func_0x00010c297260(puVar4);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 105f93cd8; end: 105f93ceb;  */

void FUN_105f93cd8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 105f93cec; end: 105f93e3f; -[SCPremiumStoryShareActionHandler initWithPremiumStoryShareDataProviding:uiContainer:unifiedPublicProfilesPresenterScopeExposer:spotlightScopeExposer:spotlightScopeServices:multiDirectionUIContainer:] */

undefined1 *
FUN_105f93cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ee770;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f93e40; end: 105f93f7f; -[SCPremiumStoryShareActionHandler handleHeaderTap] */

void FUN_105f93e40(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar3 = PTR_PTR_1126b0f10;
      _objc_alloc(PTR_PTR_1126b0f10);
      func_0x00010c033440();
      puVar4 = PTR_PTR_1126b0f18;
      _objc_alloc(PTR_PTR_1126b0f18);
      func_0x00010bff9da0();
      func_0x00010c1cd960();
      func_0x00010c1cd9a0(puVar4,param_2,0x4a68a6a6);
      puVar5 = PTR_PTR_1126b0f20;
      _objc_alloc(PTR_PTR_1126b0f20);
      func_0x00010c056680();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105f93f80; end: 105f93f93; -[SCPremiumStoryShareActionHandler handleActionButtonTapFor:] */

void FUN_105f93f80(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010c25fd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_subscribe_112675968);
    return;
  }
  return;
}



/* Entry: 105f93f94; end: 105f9412f; -[SCPremiumStoryShareActionHandler handleStoryTap:] */

void FUN_105f93f94(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf81fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c68b8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d0ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105f94130;
  puStack_70 = &UNK_110841fb0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar3);
  puStack_68 = puVar3;
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_release(puStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010bf241c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    func_0x00010bf9d620(*(undefined8 *)(param_3 + 0x20));
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f94130; end: 105f941b7;  */

void FUN_105f94130(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010bf241c0(uVar2,param_2,*(undefined8 *)(lVar1 + 0x30),0,0,0,
                        *(undefined8 *)(param_1 + 0x20),0x16,0x57,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x20),param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f941b8; end: 105f941ff; -[SCPremiumStoryShareActionHandler unifiedPublicProfilesPresenterScopeDidComplete] */

void FUN_105f941b8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105f94200; end: 105f94247; -[SCPremiumStoryShareActionHandler removeSpotlightScope:] */

void FUN_105f94200(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105f94248; end: 105f9424f; -[SCPremiumStoryShareActionHandler ignoreCallingHandleStoryTap] */

undefined8 FUN_105f94248(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


