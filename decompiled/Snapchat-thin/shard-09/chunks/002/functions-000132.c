/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a73498; end: 106a7349f; -[SCSpotlightPlaybackManager resetPageRefreshCount] */

void FUN_106a73498(long param_1)

{
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  return;
}



/* Entry: 106a734a0; end: 106a734a7; -[SCSpotlightPlaybackManager pageRefreshCount] */

undefined8 FUN_106a734a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3d8);
}



/* Entry: 106a734a8; end: 106a736fb; -[SCSpotlightPlaybackManager _setCurrentItemToFirstGroupNotInSet:playlistItemController:] */

undefined1 * FUN_106a734a8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  undefined **ppuVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 *puVar27;
  undefined8 uStack_570;
  undefined8 *puStack_568;
  undefined8 uStack_560;
  code *pcStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined1 *puStack_460;
  undefined1 auStack_458 [8];
  undefined1 auStack_450 [8];
  undefined *puStack_448;
  undefined8 uStack_440;
  code *pcStack_438;
  undefined *puStack_430;
  ulong uStack_428;
  ulong uStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined1 *puStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_1b8;
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
  
  puVar18 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar2 = puVar1;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = auStack_f0;
  puVar16 = puVar2;
  func_0x00010bf52a60();
  if (puVar16 != (undefined1 *)0x0) {
    lVar26 = *plStack_120;
    do {
      puVar27 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar26) {
          _objc_enumerationMutation(puVar2);
        }
        puVar21 = *(undefined1 **)(lStack_128 + (long)puVar27 * 8);
        puVar3 = puVar21;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c08fa60();
        _objc_release(puVar3);
        if (puVar4 != (undefined1 *)0x0) {
          puVar3 = puVar21;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_3;
          puVar18 = (undefined8 *)puVar3;
          func_0x00010bf4b900();
          _objc_release(puVar3);
          if ((int)uVar5 == 0) {
            _objc_retain(puVar21);
            _objc_release(puVar2);
            if (puVar21 == (undefined1 *)0x0) {
              puVar16 = (undefined1 *)0x0;
              goto LAB_106a736a4;
            }
            puVar2 = puVar21;
            func_0x00010bf5f0a0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar2 == (undefined1 *)0x0) {
              puVar2 = param_4;
              puVar18 = (undefined8 *)puVar21;
              func_0x00010c064180();
              _objc_retainAutoreleasedReturnValue();
            }
            puVar27 = puVar2;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar27;
            func_0x00010c08fa60();
            puVar16 = (undefined1 *)(ulong)(puVar3 != (undefined1 *)0x0);
            _objc_release(puVar27);
            if (puVar3 != (undefined1 *)0x0) {
              puVar27 = puVar2;
              func_0x00010be36bc0();
              _objc_retainAutoreleasedReturnValue();
              puVar19 = (undefined1 *)0x0;
              puVar18 = (undefined8 *)puVar27;
              func_0x00010c1ddd60(param_4);
              _objc_release(puVar27);
            }
            _objc_release(puVar2);
            goto LAB_106a73694;
          }
        }
        puVar27 = puVar27 + 1;
      } while (puVar16 != puVar27);
      puVar19 = auStack_f0;
      puVar16 = puVar2;
      puVar18 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar16 != (undefined1 *)0x0);
  }
  puVar16 = (undefined1 *)0x0;
  puVar21 = puVar2;
LAB_106a73694:
  _objc_release(puVar21);
LAB_106a736a4:
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar16;
  }
  ___stack_chk_fail();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar18);
  _objc_retain(puVar19);
  puVar6 = &UNK_10f3ab1f4;
  func_0x0001000ba800();
  func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x88));
  lVar26 = *(long *)(param_3 + 0x60);
  func_0x00010c0d3c80();
  lVar7 = *(long *)(param_3 + 0x68);
  func_0x00010c0d3c80();
  func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x60));
  func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x68));
  uVar5 = param_3;
  func_0x00010bf5fae0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010c0d3c80();
  _objc_release(uVar5);
  puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar1 = puVar19;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  lStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  plStack_370 = (long *)0x0;
  puVar2 = puVar1;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar2;
  func_0x00010bf52a60();
  if (puVar16 != (undefined1 *)0x0) {
    lVar24 = *plStack_370;
    do {
      puVar27 = (undefined1 *)0x0;
      do {
        if (*plStack_370 != lVar24) {
          _objc_enumerationMutation(puVar2);
        }
        lVar22 = *(long *)(lStack_378 + (long)puVar27 * 8);
        lVar23 = lVar22;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        lVar25 = lVar23;
        func_0x00010c08fa60();
        _objc_release(lVar23);
        if (lVar25 != 0) {
          puVar3 = puVar19;
          func_0x00010bf63e80();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR_PTR_1126cff98;
          func_0x00010c06b8a0();
          if ((int)puVar13 != 0) {
            _objc_retain(puVar3);
            puVar13 = PTR_PTR_1126b8e08;
            _objc_opt_class(PTR_PTR_1126b8e08);
            puVar21 = puVar3;
            _objc_opt_isKindOfClass(puVar3,puVar13);
            puVar4 = puVar3;
            if (((ulong)puVar21 & 1) == 0) {
              puVar4 = (undefined1 *)0x0;
            }
            _objc_retain(puVar4);
            _objc_release(puVar3);
            puVar21 = puVar4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar21;
            func_0x00010c08fa60();
            if (puVar14 != (undefined1 *)0x0) {
              puVar13 = puVar12;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar13 == (undefined *)0x0) {
                puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                func_0x00010c1d0640(puVar12);
                _objc_release(puVar13);
              }
              puVar13 = puVar12;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar23 = lVar22;
              func_0x00010be36bc0(lVar22);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar13);
              _objc_release(lVar23);
              _objc_release(puVar13);
            }
            _objc_release(puVar21);
            _objc_release(puVar4);
          }
          puVar4 = puVar3;
          func_0x000107d005a8();
          if (puVar4 != (undefined1 *)0x0) {
            puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df880();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar11;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar15 == (undefined *)0x0) {
              puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
              func_0x00010c1d0640(puVar11);
              _objc_release(puVar15);
            }
            puVar15 = puVar11;
            func_0x00010c0e00e0(puVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be36bc0(lVar22);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar15);
            _objc_release(lVar22);
            _objc_release(puVar15);
            _objc_release(puVar13);
          }
          _objc_release(puVar3);
        }
        puVar27 = puVar27 + 1;
      } while (puVar16 != puVar27);
      puVar16 = puVar2;
      func_0x00010bf52a60();
    } while (puVar16 != (undefined1 *)0x0);
  }
  _objc_release(puVar2);
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  lStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  plStack_3b0 = (long *)0x0;
  _objc_retain(lVar26);
  lVar24 = lVar26;
  func_0x00010bf52a60();
  if (lVar24 != 0) {
    lVar23 = *plStack_3b0;
    do {
      lVar25 = 0;
      do {
        if (*plStack_3b0 != lVar23) {
          _objc_enumerationMutation(lVar26);
        }
        uVar20 = *(undefined8 *)(lStack_3b8 + lVar25 * 8);
        uVar5 = uVar8;
        func_0x00010bf4b900();
        if ((int)uVar5 != 0) {
          func_0x00010c12d360(uVar8);
          func_0x00010befa120(puVar10);
        }
        puVar13 = puVar11;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar13;
        func_0x00010bf529e0();
        if (puVar15 == (undefined *)0x0) {
          puVar2 = (undefined1 *)puVar18;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar2 == (undefined1 *)0x0) {
            puVar16 = *(undefined1 **)(param_3 + 0x50);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c282800(uVar20);
            puVar2 = puVar16;
            func_0x00010c25bac0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar16);
            if (puVar2 == (undefined1 *)0x0) goto LAB_106a73c20;
          }
          puVar16 = puVar2;
          FUN_106a73fe4();
          _objc_retainAutoreleasedReturnValue();
          if (puVar16 != (undefined1 *)0x0) {
            func_0x00010befa120(puVar9);
          }
          _objc_release(puVar16);
          _objc_release(puVar2);
        }
        else {
          func_0x00010befa160(puVar9);
        }
LAB_106a73c20:
        _objc_release(puVar13);
        lVar25 = lVar25 + 1;
      } while (lVar24 != lVar25);
      lVar24 = lVar26;
      func_0x00010bf52a60();
    } while (lVar24 != 0);
  }
  _objc_release(lVar26);
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  lStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  plStack_3f0 = (long *)0x0;
  _objc_retain(lVar7);
  lVar24 = lVar7;
  func_0x00010bf52a60();
  if (lVar24 != 0) {
    lVar23 = *plStack_3f0;
    do {
      lVar25 = 0;
      do {
        if (*plStack_3f0 != lVar23) {
          _objc_enumerationMutation(lVar7);
        }
        lVar22 = *(long *)(lStack_3f8 + lVar25 * 8);
        func_0x00010c08fa60();
        if (lVar22 != 0) {
          puVar13 = puVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar13;
          func_0x00010bf529e0();
          if (puVar15 == (undefined *)0x0) {
            func_0x00010befa120(puVar9);
          }
          else {
            func_0x00010befa160(puVar9);
          }
          _objc_release(puVar13);
        }
        lVar25 = lVar25 + 1;
      } while (lVar24 != lVar25);
      lVar24 = lVar7;
      func_0x00010bf52a60();
    } while (lVar24 != 0);
  }
  _objc_release(lVar7);
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_448 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_440 = 0xc2000000;
  pcStack_438 = FUN_106a741c8;
  puStack_430 = &UNK_1108475b0;
  _objc_retain(uVar8);
  uStack_428 = uVar8;
  uStack_420 = param_3;
  _objc_retain(puVar10);
  puStack_418 = puVar10;
  _objc_retain(puVar9);
  puStack_410 = puVar9;
  _objc_retain(puVar19);
  ppuVar17 = &puStack_448;
  puStack_408 = puVar19;
  _objc_retainBlock();
  puVar15 = puVar9;
  func_0x00010bf529e0();
  if (puVar15 != (undefined *)0x0) {
    uVar5 = param_3;
    func_0x00010bea3260();
    if ((uVar5 & 1) != 0) {
      func_0x00010c1878e0(param_3);
      func_0x00010be8d760(param_3);
      _objc_initWeak(auStack_450,param_3);
      puStack_488 = puVar13;
      uStack_480 = 0xc2000000;
      uStack_478 = 0x106a74388;
      puStack_470 = &UNK_110848218;
      _objc_copyWeak(auStack_458,auStack_450);
      _objc_retain(puVar9);
      puStack_468 = puVar9;
      _objc_retain(puVar19);
      puStack_460 = puVar19;
      func_0x000100162d98("APPSTORE",&puStack_488);
      _objc_release(puStack_460);
      _objc_release(puStack_468);
      _objc_destroyWeak(auStack_458);
      _objc_destroyWeak(auStack_450);
      goto LAB_106a73e88;
    }
  }
  (*(code *)ppuVar17[2])(ppuVar17);
LAB_106a73e88:
  _objc_release(ppuVar17);
  _objc_release(puStack_408);
  _objc_release(puStack_410);
  _objc_release(puStack_418);
  _objc_release(uStack_428);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar1);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar26);
  func_0x0001000e2a84(puVar6);
  _objc_release(puVar19);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return (undefined1 *)puVar18;
  }
  ___stack_chk_fail();
  func_0x0001000e2a84(puVar6);
  __Unwind_Resume();
  _objc_terminate();
  _objc_retain();
  puStack_568 = &uStack_570;
  uStack_570 = 0;
  uStack_560 = 0x3032000000;
  pcStack_558 = FUN_106a65534;
  uStack_550 = 0x106a65544;
  uStack_548 = 0;
  puVar19 = (undefined1 *)puVar18;
  func_0x00010c259560(puVar18);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar18);
  _objc_retain(puVar18);
  _objc_retain(puVar18);
  func_0x00010c0bf680(puVar19);
  _objc_release(puVar19);
  puVar19 = (undefined1 *)puStack_568[5];
  _objc_retain(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar18);
  _objc_release(puVar18);
  __Block_object_dispose(&uStack_570,8);
  _objc_release(uStack_548);
  _objc_release(puVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return puVar19;
}



/* Entry: 106a736fc; end: 106a73fe3; -[SCSpotlightPlaybackManager _purgeViewedContentFromCurrentPlaylist:playlistItemController:] */

void FUN_106a736fc(ulong param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  long lVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  ulong uStack_330;
  undefined1 auStack_328 [8];
  undefined1 auStack_320 [8];
  undefined *puStack_318;
  undefined8 uStack_310;
  code *pcStack_308;
  undefined *puStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f3ab1f4;
  func_0x0001000ba800();
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x88));
  lVar2 = *(long *)(param_1 + 0x60);
  func_0x00010c0d3c80();
  lVar3 = *(long *)(param_1 + 0x68);
  func_0x00010c0d3c80();
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x60));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x68));
  uVar4 = param_1;
  func_0x00010bf5fae0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0d3c80();
  _objc_release(uVar4);
  puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar4 = param_4;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uVar10 = uVar4;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf52a60();
  if (uVar11 != 0) {
    lVar24 = *plStack_240;
    do {
      uVar22 = 0;
      do {
        if (*plStack_240 != lVar24) {
          _objc_enumerationMutation(uVar10);
        }
        lVar21 = *(long *)(lStack_248 + uVar22 * 8);
        lVar23 = lVar21;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        lVar25 = lVar23;
        func_0x00010c08fa60();
        _objc_release(lVar23);
        if (lVar25 != 0) {
          uVar12 = param_4;
          func_0x00010bf63e80();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR_PTR_1126cff98;
          func_0x00010c06b8a0();
          if ((int)puVar13 != 0) {
            _objc_retain(uVar12);
            puVar13 = PTR_PTR_1126b8e08;
            _objc_opt_class(PTR_PTR_1126b8e08);
            uVar14 = uVar12;
            _objc_opt_isKindOfClass(uVar12,puVar13);
            uVar16 = uVar12;
            if ((uVar14 & 1) == 0) {
              uVar16 = 0;
            }
            _objc_retain(uVar16);
            _objc_release(uVar12);
            uVar14 = uVar16;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar14;
            func_0x00010c08fa60();
            if (uVar15 != 0) {
              puVar13 = puVar9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar13 == (undefined *)0x0) {
                puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                func_0x00010c1d0640(puVar9);
                _objc_release(puVar13);
              }
              puVar13 = puVar9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar23 = lVar21;
              func_0x00010be36bc0(lVar21);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar13);
              _objc_release(lVar23);
              _objc_release(puVar13);
            }
            _objc_release(uVar14);
            _objc_release(uVar16);
          }
          uVar16 = uVar12;
          func_0x000107d005a8();
          if (uVar16 != 0) {
            puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df880();
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar8;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar17 == (undefined *)0x0) {
              puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
              func_0x00010c1d0640(puVar8);
              _objc_release(puVar17);
            }
            puVar17 = puVar8;
            func_0x00010c0e00e0(puVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be36bc0(lVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar17);
            _objc_release(lVar21);
            _objc_release(puVar17);
            _objc_release(puVar13);
          }
          _objc_release(uVar12);
        }
        uVar22 = uVar22 + 1;
      } while (uVar11 != uVar22);
      uVar11 = uVar10;
      func_0x00010bf52a60();
    } while (uVar11 != 0);
  }
  _objc_release(uVar10);
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  _objc_retain(lVar2);
  lVar24 = lVar2;
  func_0x00010bf52a60();
  if (lVar24 != 0) {
    lVar23 = *plStack_280;
    do {
      lVar25 = 0;
      do {
        if (*plStack_280 != lVar23) {
          _objc_enumerationMutation(lVar2);
        }
        uVar20 = *(undefined8 *)(lStack_288 + lVar25 * 8);
        uVar10 = uVar5;
        func_0x00010bf4b900();
        if ((int)uVar10 != 0) {
          func_0x00010c12d360(uVar5);
          func_0x00010befa120(puVar7);
        }
        puVar13 = puVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar13;
        func_0x00010bf529e0();
        if (puVar17 == (undefined *)0x0) {
          lVar21 = param_3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar21 == 0) {
            lVar18 = *(long *)(param_1 + 0x50);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c282800(uVar20);
            lVar21 = lVar18;
            func_0x00010c25bac0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar18);
            if (lVar21 == 0) goto LAB_106a73c20;
          }
          lVar18 = lVar21;
          FUN_106a73fe4();
          _objc_retainAutoreleasedReturnValue();
          if (lVar18 != 0) {
            func_0x00010befa120(puVar6);
          }
          _objc_release(lVar18);
          _objc_release(lVar21);
        }
        else {
          func_0x00010befa160(puVar6);
        }
LAB_106a73c20:
        _objc_release(puVar13);
        lVar25 = lVar25 + 1;
      } while (lVar24 != lVar25);
      lVar24 = lVar2;
      func_0x00010bf52a60();
    } while (lVar24 != 0);
  }
  _objc_release(lVar2);
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  lStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  plStack_2c0 = (long *)0x0;
  _objc_retain(lVar3);
  lVar24 = lVar3;
  func_0x00010bf52a60();
  if (lVar24 != 0) {
    lVar23 = *plStack_2c0;
    do {
      lVar25 = 0;
      do {
        if (*plStack_2c0 != lVar23) {
          _objc_enumerationMutation(lVar3);
        }
        lVar21 = *(long *)(lStack_2c8 + lVar25 * 8);
        func_0x00010c08fa60();
        if (lVar21 != 0) {
          puVar13 = puVar9;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar13;
          func_0x00010bf529e0();
          if (puVar17 == (undefined *)0x0) {
            func_0x00010befa120(puVar6);
          }
          else {
            func_0x00010befa160(puVar6);
          }
          _objc_release(puVar13);
        }
        lVar25 = lVar25 + 1;
      } while (lVar24 != lVar25);
      lVar24 = lVar3;
      func_0x00010bf52a60();
    } while (lVar24 != 0);
  }
  _objc_release(lVar3);
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_318 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_310 = 0xc2000000;
  pcStack_308 = FUN_106a741c8;
  puStack_300 = &UNK_1108475b0;
  _objc_retain(uVar5);
  uStack_2f8 = uVar5;
  uStack_2f0 = param_1;
  _objc_retain(puVar7);
  puStack_2e8 = puVar7;
  _objc_retain(puVar6);
  puStack_2e0 = puVar6;
  _objc_retain(param_4);
  ppuVar19 = &puStack_318;
  uStack_2d8 = param_4;
  _objc_retainBlock();
  puVar17 = puVar6;
  func_0x00010bf529e0();
  if (puVar17 != (undefined *)0x0) {
    uVar10 = param_1;
    func_0x00010bea3260();
    if ((uVar10 & 1) != 0) {
      func_0x00010c1878e0(param_1);
      func_0x00010be8d760(param_1);
      _objc_initWeak(auStack_320,param_1);
      puStack_358 = puVar13;
      uStack_350 = 0xc2000000;
      uStack_348 = 0x106a74388;
      puStack_340 = &UNK_110848218;
      _objc_copyWeak(auStack_328,auStack_320);
      _objc_retain(puVar6);
      puStack_338 = puVar6;
      _objc_retain(param_4);
      uStack_330 = param_4;
      func_0x000100162d98("APPSTORE",&puStack_358);
      _objc_release(uStack_330);
      _objc_release(puStack_338);
      _objc_destroyWeak(auStack_328);
      _objc_destroyWeak(auStack_320);
      goto LAB_106a73e88;
    }
  }
  (*(code *)ppuVar19[2])(ppuVar19);
LAB_106a73e88:
  _objc_release(ppuVar19);
  _objc_release(uStack_2d8);
  _objc_release(puStack_2e0);
  _objc_release(puStack_2e8);
  _objc_release(uStack_2f8);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001000e2a84(puVar1);
  __Unwind_Resume();
  _objc_terminate();
  _objc_retain();
  puStack_438 = &uStack_440;
  uStack_440 = 0;
  uStack_430 = 0x3032000000;
  pcStack_428 = FUN_106a65534;
  uStack_420 = 0x106a65544;
  uStack_418 = 0;
  lVar2 = param_3;
  func_0x00010c259560(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0bf680(lVar2);
  _objc_release(lVar2);
  uVar20 = puStack_438[5];
  _objc_retain(uVar20);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_440,8);
  _objc_release(uStack_418);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar20);
  return;
}



/* Entry: 106a73fe4; end: 106a741c7;  */

void FUN_106a73fe4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106a65534;
  uStack_60 = 0x106a65544;
  uStack_58 = 0;
  uVar1 = param_1;
  func_0x00010c259560(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_1);
  _objc_retain(param_1);
  func_0x00010c0bf680(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a741c8; end: 106a743e7;  */

void FUN_106a741c8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c1878e0(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010be8d760(*(undefined8 *)(param_1 + 0x28));
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010bea6b40();
    uVar2 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf6b020(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ff900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  else {
    *(undefined1 *)(*(long *)(param_1 + 0x28) + 0xb9) = 1;
    _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x28));
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x106a74328;
    puStack_58 = &UNK_110848218;
    _objc_copyWeak(auStack_40,auStack_38);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = uVar5;
    _objc_retain(uVar4);
    uStack_48 = uVar4;
    func_0x000100162d98("APPSTORE",&puStack_70);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 106a743e8; end: 106a74917; -[SCSpotlightPlaybackManager _removeAllStoriesFromCurrentPlaylist:creatorId:similarStoryIdFpArray:playlistItemController:] */

void FUN_106a743e8(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  bool bVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  puVar7 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar15 = &UNK_10f3ab229;
  func_0x0001000ba800();
  if (param_4 != (undefined *)0x0) {
    puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar5 = param_1;
    func_0x00010bf5fae0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = auStack_f0;
    lVar6 = lVar5;
    func_0x00010bf52a60();
    lVar16 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar19 = 0;
      do {
        if (lRam0000000000000000 != lVar16) {
          _objc_enumerationMutation(lVar5);
        }
        puVar7 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 != (undefined *)0x0) {
          puVar8 = puVar7;
          func_0x000108f4d8d4();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = param_5;
          func_0x00010bf4b900();
          if (((ulong)puVar9 & 1) == 0) {
            _objc_retain(param_5);
            puVar9 = param_5;
            func_0x00010bf52a60();
            lVar2 = lRam0000000000000000;
            while (puVar9 != (undefined *)0x0) {
              puVar18 = (undefined *)0x0;
              do {
                if (lRam0000000000000000 != lVar2) {
                  _objc_enumerationMutation(param_5);
                }
                puVar10 = puVar7;
                func_0x00010c23c720();
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar10;
                func_0x00010bf4b900();
                _objc_release(puVar10);
                if (((ulong)puVar11 & 1) != 0) {
                  bVar17 = true;
                  goto LAB_106a74604;
                }
                puVar18 = puVar18 + 1;
              } while (puVar9 != puVar18);
              puVar9 = param_5;
              func_0x00010bf52a60();
            }
            bVar17 = false;
LAB_106a74604:
            _objc_release(param_5);
          }
          else {
            bVar17 = true;
          }
          puVar18 = puVar8;
          func_0x00010bf4b900();
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (bVar17 || ((ulong)puVar18 & 1) != 0) {
            func_0x00010befa120(*(undefined8 *)(param_1 + 0x80));
            puVar9 = puVar7;
            FUN_106a73fe4();
            _objc_retainAutoreleasedReturnValue();
            if (puVar9 != (undefined *)0x0) {
              func_0x00010befa120(puVar4);
            }
            uVar12 = *(ulong *)(param_1 + 0x60);
            func_0x00010bf4b900();
            puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            if ((uVar12 & 1) == 0) {
              func_0x00010c259740(puVar7);
              func_0x00010c0df880(puVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar3);
              _objc_release(puVar18);
            }
          }
          else {
            func_0x00010c259740(puVar7);
            func_0x00010c0df880();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar20);
          }
          _objc_release(puVar9);
          _objc_release(puVar8);
        }
        _objc_release(puVar7);
        lVar19 = lVar19 + 1;
      } while (lVar19 != lVar6);
      puVar7 = auStack_f0;
      lVar6 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    puVar8 = puVar4;
    func_0x00010bf529e0();
    if (puVar8 != (undefined *)0x0) {
      puVar7 = puVar3;
      func_0x00010bf529e0();
      if (puVar7 != (undefined *)0x0) {
        func_0x00010be8d760(param_1);
      }
      func_0x00010c1878e0(param_1);
      puVar7 = puVar20;
      func_0x00010bf529e0();
      if (puVar7 == (undefined *)0x0) {
        *(undefined1 *)(param_1 + 0xb9) = 1;
      }
      puVar7 = param_6;
      func_0x00010be8d7c0(param_1);
    }
    uVar13 = *(undefined8 *)(param_1 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c0e00;
    func_0x00010c0d75a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    puVar8 = puVar9;
    func_0x00010bf1f320();
    _objc_release(puVar9);
    _objc_release(uVar13);
    if ((int)uVar14 != 0) {
      uVar14 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40(uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_4;
      puVar7 = param_5;
      func_0x00010c12e640(uVar14);
      _objc_release(puVar9);
      _objc_release(uVar14);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar20);
  }
  func_0x0001000e2a84(puVar15);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001000e2a84(puVar15);
  __Unwind_Resume();
  _objc_terminate();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  _objc_retain(puVar7);
  uVar14 = 0x10;
  puVar15 = puVar8;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar15 != (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar8);
      }
      func_0x00010c12dbc0(puVar7);
      puVar20 = puVar20 + 1;
    } while (puVar15 != puVar20);
    uVar14 = 0x10;
    puVar15 = puVar8;
    func_0x00010bf52a60();
  }
  cVar1 = param_3[0x3d0];
  puVar15 = (undefined *)0x0;
  func_0x00010bea6b40(param_3);
  if (cVar1 == '\x01') {
    puVar20 = param_3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar20;
    _objc_opt_respondsToSelector();
    _objc_release(puVar20);
    if (((ulong)puVar3 & 1) != 0) {
      puVar15 = param_3;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ff900();
      _objc_release(puVar15);
      puVar15 = param_3;
    }
  }
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar14);
  _objc_retain(puVar15);
  puVar7 = puVar8 + 0x108;
  _objc_loadWeakRetained(puVar7);
  func_0x00010be78780(puVar8);
  _objc_release(uVar14);
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 106a74918; end: 106a74a97; -[SCSpotlightPlaybackManager _removeStoriesWithPlaylistGroupIds:playlistItemController:] */

void FUN_106a74918(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar7 = 0x10;
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      func_0x00010c12dbc0(param_4);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    uVar7 = 0x10;
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  cVar1 = *(char *)(param_1 + 0x3d0);
  uVar6 = 0;
  func_0x00010bea6b40(param_1);
  if (cVar1 == '\x01') {
    uVar4 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    _objc_opt_respondsToSelector();
    _objc_release(uVar4);
    if ((uVar5 & 1) != 0) {
      uVar6 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ff900();
      _objc_release(uVar6);
      uVar6 = param_1;
    }
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar7);
  _objc_retain(uVar6);
  lVar3 = param_3 + 0x108;
  _objc_loadWeakRetained(lVar3);
  func_0x00010be78780(param_3);
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106a74a98; end: 106a74b37; -[SCSpotlightPlaybackManager _presentOperaWithStories:isCachedContent:notification:] */

void FUN_106a74a98(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x108;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be78780(param_1,param_2,param_3,uVar2,lVar1,*(undefined8 *)(param_1 + 200),
                      *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0x458),
                      *(undefined8 *)(param_1 + 0x248),param_4);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a74b38; end: 106a74c47; -[SCSpotlightPlaybackManager _resetStateWhenExit] */

/* WARNING: Possible PIC construction at 0x000106a74c2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106a74c30) */

void FUN_106a74b38(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c0d3c80(uVar1);
  lVar2 = param_1;
  func_0x00010bf60f80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8d660(param_1);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb3240();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ce808;
  func_0x00010c29d4c0();
  if ((int)puVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x130);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb31a0();
    _objc_release(uVar1);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x340),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 106a74c48; end: 106a74cf7; -[SCSpotlightPlaybackManager _loadAdditionalPaginationThreshold] */

void FUN_106a74c48(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x110);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  uVar4 = uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU);
  if (4 < (long)uVar4) {
    uVar4 = 5;
  }
  *(ulong *)(param_1 + 0x1b0) = uVar4;
  return;
}



/* Entry: 106a74cf8; end: 106a74d63; -[SCSpotlightPlaybackManager _saveAdditionalPaginationThreshold] */

void FUN_106a74cf8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x1b0))
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e68d58);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a74d64; end: 106a74e4b; -[SCSpotlightPlaybackManager _updateAdditionalPaginationThreshold] */

void FUN_106a74d64(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(ulong *)(param_1 + 0x488);
  lVar2 = param_1;
  func_0x00010bf60f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c259740();
  func_0x00010c0df880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  _objc_release(puVar1);
  _objc_release(lVar2);
  if (uVar3 == 0x7fffffffffffffff) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x488);
  func_0x00010bf529e0();
  if ((uVar3 < lVar2 - 3U) || (4 < *(long *)(param_1 + 0x1b0))) {
    lVar2 = *(long *)(param_1 + 0x488);
    func_0x00010bf529e0();
    if (lVar2 - 5U <= uVar3) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x1b0) + -1;
    if (*(long *)(param_1 + 0x1b0) < 1) {
      return;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x1b0) + 1;
  }
  *(long *)(param_1 + 0x1b0) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010be98a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__saveAdditionalPaginationThresho_112583c20);
  return;
}



/* Entry: 106a74e4c; end: 106a75113; -[SCSpotlightPlaybackManager _handleSpotlightNotificationsAndGetStoryIdsIfNeeded:] */

/* WARNING: Possible PIC construction at 0x000106a75250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106a75008: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106a75254) */
/* WARNING: Removing unreachable block (ram,0x000106a752d0) */
/* WARNING: Removing unreachable block (ram,0x000106a75340) */
/* WARNING: Removing unreachable block (ram,0x000106a75324) */
/* WARNING: Removing unreachable block (ram,0x000106a752b4) */
/* WARNING: Removing unreachable block (ram,0x000106a7534c) */
/* WARNING: Removing unreachable block (ram,0x000106a75360) */
/* WARNING: Removing unreachable block (ram,0x000106a7500c) */

void FUN_106a74e4c(ulong param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined **unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined1 *puVar19;
  undefined *puStack_438;
  undefined8 uStack_430;
  code *pcStack_428;
  undefined *puStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  long lStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_348;
  ulong uStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined **ppuStack_320;
  undefined8 *puStack_318;
  undefined **ppuStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  undefined8 *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 *puStack_298;
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  undefined8 uStack_280;
  undefined8 uStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1c0;
  ulong uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined **ppuStack_190;
  undefined8 *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  undefined *puStack_140;
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
  puVar1 = *(undefined **)(param_1 + 0x168);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = (undefined8 *)PTR_PTR_1126c2470;
  func_0x00010c0de760();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  puVar8 = puVar17;
  func_0x00010c067e20();
  _objc_release(puVar17);
  _objc_release(puVar1);
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (0 < (long)puVar2) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puStack_148 = puVar3;
    _objc_retain(param_3);
    puVar8 = &uStack_130;
    puVar4 = param_3;
    func_0x00010bf52a60();
    puStack_138 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      puVar1 = (undefined *)0x0;
      lVar15 = *plStack_120;
      unaff_x24 = &PTR____CFConstantStringClassReference_110f9ebb8;
      do {
        puVar17 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar15) {
            _objc_enumerationMutation(param_3);
          }
          if ((long)puVar2 <= (long)puVar1) goto LAB_106a750a0;
          unaff_x25 = *(undefined8 **)(lStack_128 + (long)puVar17 * 8);
          puVar4 = unaff_x25;
          func_0x00010c07cda0();
          if ((int)puVar4 == 0) {
            func_0x00010c292820(unaff_x25);
            _objc_retainAutoreleasedReturnValue();
            goto code_r0x00010c0e00e0;
          }
          unaff_x27 = unaff_x25;
          func_0x00010c153100();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = unaff_x27;
          func_0x00010bfa2960();
          if ((int)puVar4 == 1) {
            puVar4 = unaff_x27;
            func_0x00010c24b3c0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = puVar4;
            puStack_140 = puVar1;
            func_0x00010bf454e0();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = puStack_140;
            _objc_release(puVar4);
            _objc_release(unaff_x27);
            puVar4 = unaff_x26;
            func_0x00010c08fa60();
            if (puVar4 != (undefined8 *)0x0) {
              uVar5 = param_1;
              puVar8 = unaff_x25;
              func_0x00010be30ae0();
              if (((uVar5 & 1) == 0) &&
                 (puVar4 = unaff_x26, func_0x00010c08fa60(), puVar4 != (undefined8 *)0x0)) {
                puVar8 = unaff_x26;
                func_0x00010befa120(puStack_148);
              }
              puVar1 = puVar1 + 1;
            }
          }
          else {
            _objc_release(unaff_x27);
            unaff_x26 = (undefined8 *)0x0;
          }
          _objc_release(unaff_x26);
          puVar17 = (undefined8 *)((long)puVar17 + 1);
        } while (puStack_138 != puVar17);
        puVar8 = &uStack_130;
        puVar4 = param_3;
        func_0x00010bf52a60();
        puStack_138 = puVar4;
      } while (puVar4 != (undefined8 *)0x0);
    }
LAB_106a750a0:
    _objc_release(param_3);
    puVar2 = puStack_148;
    puVar3 = puStack_148;
    func_0x00010bf51e00();
    _objc_release(puVar2);
  }
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_106a75114;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1b0 = param_1;
  puStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  ppuStack_190 = unaff_x24;
  puStack_188 = puVar17;
  puStack_180 = puVar1;
  puStack_178 = puVar2;
  puStack_170 = puVar3;
  puStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  ppuVar6 = (undefined **)puVar4[0x2d];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = (undefined8 *)PTR_PTR_1126c2470;
  func_0x00010c0de760();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c067e20();
  _objc_release(puVar17);
  _objc_release(ppuVar6);
  if ((long)ppuVar7 < 1) {
    func_0x00010be79a00(puVar4);
  }
  else {
    puVar17 = puVar4;
    puStack_2d8 = puVar8;
    func_0x00010be23080();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_2c8 = puVar1;
    _objc_alloc_init();
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    puStack_2d0 = puVar2;
    _objc_retain(puVar17);
    puVar8 = puVar17;
    func_0x00010bf52a60();
    if (puVar8 != (undefined8 *)0x0) {
      if (*plStack_270 != *plStack_270) {
        _objc_enumerationMutation(puVar17);
      }
      goto code_r0x00010c0e00e0;
    }
    _objc_release(puVar17);
    func_0x00010bddfa60(puVar4);
    _objc_initWeak(auStack_288,puVar4);
    puStack_2c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2b8 = 0xc2000000;
    pcStack_2b0 = FUN_106a754b8;
    puStack_2a8 = &UNK_1108576a8;
    ppuVar7 = &puStack_2c0;
    param_2 = auStack_288;
    _objc_copyWeak(auStack_290);
    puVar1 = puStack_2c8;
    _objc_retain(puStack_2c8);
    puStack_2a0 = puVar1;
    _objc_retain(puVar17);
    puStack_298 = puVar17;
    func_0x00010be145c0(puVar4);
    _objc_release(puStack_298);
    _objc_release(puStack_2a0);
    _objc_destroyWeak(auStack_290);
    _objc_destroyWeak(auStack_288);
    _objc_release(puStack_2d0);
    _objc_release(puStack_2c8);
    _objc_release(puVar17);
    unaff_x24 = (undefined **)0x0;
    puVar8 = puStack_2d8;
  }
  puVar9 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar7 + 6);
  _objc_destroyWeak(auStack_288);
  puVar10 = puVar9;
  __Unwind_Resume();
  pcStack_2e8 = FUN_106a754b8;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_340 = param_1;
  puStack_338 = unaff_x27;
  puStack_330 = unaff_x26;
  puStack_328 = unaff_x25;
  ppuStack_320 = unaff_x24;
  puStack_318 = puVar8;
  ppuStack_310 = ppuVar7;
  puStack_308 = puVar4;
  puStack_300 = puVar17;
  puStack_2f8 = puVar9;
  ppuStack_2f0 = &puStack_160;
  _objc_retain(param_2);
  puVar8 = puVar10 + 6;
  _objc_loadWeakRetained();
  if (puVar8 != (undefined8 *)0x0) {
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    lStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    plStack_400 = (long *)0x0;
    _objc_retain(param_2);
    puVar11 = param_2;
    func_0x00010bf52a60();
    if (puVar11 != (undefined1 *)0x0) {
      lVar15 = *plStack_400;
      do {
        puVar19 = (undefined1 *)0x0;
        do {
          if (*plStack_400 != lVar15) {
            _objc_enumerationMutation(param_2);
          }
          lVar18 = *(long *)(lStack_408 + (long)puVar19 * 8);
          func_0x00010bf454e0();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar18;
          func_0x000108f51f98();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar18);
          lVar18 = lVar12;
          func_0x00010c08fa60();
          if (lVar18 != 0) {
            func_0x00010c1d0640(puVar10[4]);
          }
          _objc_release(lVar12);
          puVar19 = puVar19 + 1;
        } while (puVar11 != puVar19);
        puVar11 = param_2;
        func_0x00010bf52a60();
      } while (puVar11 != (undefined1 *)0x0);
    }
    _objc_release(param_2);
    uVar13 = puVar10[5];
    func_0x00010bf002e0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    puStack_438 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_430 = 0xc2000000;
    pcStack_428 = FUN_106a756b4;
    puStack_420 = &UNK_110959168;
    uVar16 = puVar10[4];
    _objc_retain(uVar16);
    uVar14 = uVar13;
    uStack_418 = uVar16;
    func_0x000100504554(uVar13,&puStack_438);
    _objc_release(uVar13);
    func_0x00010be79a00(puVar8);
    _objc_release(uVar14);
    _objc_release(uStack_418);
  }
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
code_r0x00010c0e00e0:
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106a75114; end: 106a754b7; -[SCSpotlightPlaybackManager _handlePrependingSpotlightNotifications:] */

/* WARNING: Possible PIC construction at 0x000106a75250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106a75254) */
/* WARNING: Removing unreachable block (ram,0x000106a752d0) */
/* WARNING: Removing unreachable block (ram,0x000106a75340) */
/* WARNING: Removing unreachable block (ram,0x000106a75324) */
/* WARNING: Removing unreachable block (ram,0x000106a752b4) */
/* WARNING: Removing unreachable block (ram,0x000106a7534c) */
/* WARNING: Removing unreachable block (ram,0x000106a75360) */

void FUN_106a75114(undefined *param_1,undefined **param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_1f8;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = *(undefined ***)(param_1 + 0x168);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c2470;
  func_0x00010c0de760();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar1;
  func_0x00010c067e20();
  _objc_release(puVar9);
  _objc_release(ppuVar1);
  if ((long)ppuVar12 < 1) {
    func_0x00010be79a00(param_1);
  }
  else {
    puVar9 = param_1;
    func_0x00010be23080();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    plStack_128 = (long *)0x0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(puVar9);
    puVar4 = puVar9;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      if (*plStack_120 != *plStack_120) {
        _objc_enumerationMutation(puVar9);
      }
      ppuVar12 = (undefined **)*plStack_128;
      goto code_r0x00010c0e00e0;
    }
    _objc_release(puVar9);
    func_0x00010bddfa60(param_1);
    _objc_initWeak(&puStack_138,param_1);
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_106a754b8;
    puStack_158 = &UNK_1108576a8;
    ppuVar12 = &puStack_170;
    param_2 = &puStack_138;
    _objc_copyWeak(auStack_140);
    _objc_retain(puVar2);
    puStack_150 = puVar2;
    _objc_retain(puVar9);
    puStack_148 = puVar9;
    func_0x00010be145c0(param_1);
    _objc_release(puStack_148);
    _objc_release(puStack_150);
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(&puStack_138);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar9);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar12 + 6);
  _objc_destroyWeak(&puStack_138);
  __Unwind_Resume();
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = param_2;
  _objc_retain(param_2);
  lVar5 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (lVar5 != 0) {
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    lStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    plStack_2b0 = (long *)0x0;
    _objc_retain(param_2);
    ppuVar12 = param_2;
    func_0x00010bf52a60();
    if (ppuVar12 != (undefined **)0x0) {
      lVar13 = *plStack_2b0;
      do {
        ppuVar1 = (undefined **)0x0;
        do {
          if (*plStack_2b0 != lVar13) {
            _objc_enumerationMutation(param_2);
          }
          lVar11 = *(long *)(lStack_2b8 + (long)ppuVar1 * 8);
          func_0x00010bf454e0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar11;
          func_0x000108f51f98();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar11);
          lVar11 = lVar6;
          func_0x00010c08fa60();
          if (lVar11 != 0) {
            func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x20));
          }
          _objc_release(lVar6);
          ppuVar1 = (undefined **)((long)ppuVar1 + 1);
        } while (ppuVar12 != ppuVar1);
        ppuVar12 = param_2;
        func_0x00010bf52a60();
      } while (ppuVar12 != (undefined **)0x0);
    }
    _objc_release(param_2);
    uVar7 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010bf002e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2e0 = 0xc2000000;
    pcStack_2d8 = FUN_106a756b4;
    puStack_2d0 = &UNK_110959168;
    uVar10 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar10);
    ppuVar12 = &puStack_2e8;
    uVar8 = uVar7;
    uStack_2c8 = uVar10;
    func_0x000100504554(uVar7,ppuVar12);
    _objc_release(uVar7);
    func_0x00010be79a00(lVar5);
    _objc_release(uVar8);
    _objc_release(uStack_2c8);
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = param_2[4];
code_r0x00010c0e00e0:
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar9,PTR_s_objectForKeyedSubscript__112615a50,ppuVar12);
  return;
}



/* Entry: 106a754b8; end: 106a756b3;  */

void FUN_106a754b8(long param_1,undefined **param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_2;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_2);
    ppuVar2 = param_2;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      lVar8 = *plStack_120;
      do {
        ppuVar9 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_2);
          }
          lVar7 = *(long *)(lStack_128 + (long)ppuVar9 * 8);
          func_0x00010bf454e0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar7;
          func_0x000108f51f98();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          lVar7 = lVar3;
          func_0x00010c08fa60();
          if (lVar7 != 0) {
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
          }
          _objc_release(lVar3);
          ppuVar9 = (undefined **)((long)ppuVar9 + 1);
        } while (ppuVar2 != ppuVar9);
        ppuVar2 = param_2;
        func_0x00010bf52a60();
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf002e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_106a756b4;
    puStack_140 = &UNK_110959168;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    ppuVar2 = &puStack_158;
    uVar5 = uVar4;
    uStack_138 = uVar6;
    func_0x000100504554(uVar4,ppuVar2);
    _objc_release(uVar4);
    func_0x00010be79a00(lVar1);
    _objc_release(uVar5);
    _objc_release(uStack_138);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2[4],PTR_s_objectForKeyedSubscript__112615a50,ppuVar2);
  return;
}



/* Entry: 106a756b4; end: 106a756bf;  */

void FUN_106a756b4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 106a756c0; end: 106a7596b; -[SCSpotlightPlaybackManager _getStoryIdsFromNotificationsToPrepend:] */

void FUN_106a756c0(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **unaff_x23;
  undefined **ppuVar9;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined *puVar10;
  undefined **unaff_x26;
  int iVar11;
  undefined **unaff_x27;
  undefined *puVar12;
  long unaff_x28;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined1 uStack_1a8;
  long lStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x168);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = (undefined **)PTR_PTR_1126c2470;
  func_0x00010c0de760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  ppuVar7 = ppuVar8;
  func_0x00010c067e20();
  _objc_release(ppuVar8);
  _objc_release(lVar1);
  if (lVar2 < 1) {
    ppuVar9 = (undefined **)0x0;
  }
  else {
    unaff_x27 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    ppuVar7 = &puStack_130;
    param_4 = apuStack_f0;
    param_5 = 0x10;
    ppuVar9 = param_3;
    func_0x00010bf52a60();
    ppuStack_138 = ppuVar9;
    if (ppuVar9 != (undefined **)0x0) {
      unaff_x28 = 0;
      lVar1 = *plStack_120;
      unaff_x23 = &PTR____CFConstantStringClassReference_110f9ebb8;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar1) {
            _objc_enumerationMutation(param_3);
          }
          if (lVar2 <= unaff_x28) goto LAB_106a75900;
          unaff_x24 = *(undefined ***)(lStack_128 + (long)ppuVar8 * 8);
          ppuVar9 = unaff_x24;
          func_0x00010c07cda0();
          unaff_x26 = unaff_x24;
          if ((int)ppuVar9 == 0) {
            func_0x00010c292820();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = unaff_x26;
            ppuVar7 = unaff_x23;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
LAB_106a75894:
            _objc_release(unaff_x26);
            ppuVar9 = unaff_x25;
            func_0x00010c08fa60();
            if (ppuVar9 != (undefined **)0x0) {
              ppuVar7 = unaff_x24;
              param_4 = unaff_x25;
              func_0x00010c1d0640(unaff_x27);
              unaff_x28 = unaff_x28 + 1;
            }
          }
          else {
            func_0x00010c153100();
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = unaff_x26;
            func_0x00010bfa2960();
            if ((int)ppuVar9 == 1) {
              ppuVar9 = unaff_x26;
              func_0x00010c24b3c0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x25 = ppuVar9;
              lStack_140 = unaff_x28;
              func_0x00010bf454e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = lStack_140;
              _objc_release(ppuVar9);
              goto LAB_106a75894;
            }
            _objc_release(unaff_x26);
            unaff_x25 = (undefined **)0x0;
          }
          _objc_release(unaff_x25);
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (ppuStack_138 != ppuVar8);
        ppuVar7 = &puStack_130;
        param_4 = apuStack_f0;
        param_5 = 0x10;
        ppuVar9 = param_3;
        func_0x00010bf52a60();
        ppuStack_138 = ppuVar9;
      } while (ppuVar9 != (undefined **)0x0);
    }
LAB_106a75900:
    _objc_release(param_3);
    ppuVar9 = unaff_x27;
    func_0x00010bf51e00();
    _objc_release(unaff_x27);
  }
  ppuVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_148 = FUN_106a7596c;
    lStack_1a0 = unaff_x28;
    ppuStack_198 = unaff_x27;
    ppuStack_190 = unaff_x26;
    ppuStack_188 = unaff_x25;
    ppuStack_180 = unaff_x24;
    ppuStack_178 = unaff_x23;
    ppuStack_170 = ppuVar8;
    lStack_168 = lVar1;
    ppuStack_160 = ppuVar9;
    ppuStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar7);
    _objc_retain(param_4);
    ppuVar8 = ppuVar7;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar8;
    func_0x00010bf52680();
    _objc_release(ppuVar8);
    puVar5 = ppuVar3[0x2d];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126c2470;
    func_0x00010c24b7c0(PTR_PTR_1126c2470);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf1f320(puVar5,param_2,puVar10);
    if (((ulong)puVar6 & 1) == 0) {
      puVar12 = ppuVar3[0x72];
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(puVar12,param_2,puVar6);
      iVar11 = (int)puVar12;
      _objc_release(puVar6);
    }
    else {
      iVar11 = 1;
    }
    _objc_release(puVar10);
    _objc_release(puVar5);
    ppuVar9 = (undefined **)0x0;
    if (((int)ppuVar4 == 0x23) && (iVar11 != 0)) {
      ppuVar9 = ppuVar3;
      func_0x00010be4d1c0(ppuVar3,param_2,ppuVar7,param_4,param_6);
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar9 != (undefined **)0x0) {
        ppuVar8 = ppuVar3;
        func_0x00010bec4480(ppuVar3,param_2,ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar8 == (undefined **)0x0) {
          _objc_retain(ppuVar9);
        }
        else {
          puVar10 = ppuVar3[0x79];
          puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1e0 = 0xc2000000;
          pcStack_1d8 = FUN_106a75b88;
          puStack_1d0 = &UNK_110878f70;
          ppuStack_1c8 = ppuVar3;
          _objc_retain(ppuVar8);
          ppuStack_1c0 = ppuVar8;
          _objc_retain(ppuVar7);
          ppuStack_1b8 = ppuVar7;
          _objc_retain(param_4);
          uStack_1a8 = (undefined1)param_6;
          ppuStack_1b0 = param_4;
          func_0x00010c0f7fc0(puVar10,param_2,&puStack_1e8);
          _objc_retain(ppuVar9);
          _objc_release(ppuStack_1b0);
          _objc_release(ppuStack_1b8);
          _objc_release(ppuStack_1c0);
        }
        _objc_release(ppuVar8);
      }
      _objc_release(ppuVar9);
    }
    _objc_release(param_4);
    _objc_release(ppuVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return;
}



/* Entry: 106a7596c; end: 106a75b87; -[SCSpotlightPlaybackManager _loadSpotlightFromNotificationPrefetchWithCompositeStoryId:pushTypeName:pushType:isSdn:] */

void FUN_106a7596c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar8 = param_3;
  func_0x000108f51d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010bf52680();
  _objc_release(uVar8);
  uVar2 = *(ulong *)(param_1 + 0x168);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2470;
  func_0x00010c24b7c0(PTR_PTR_1126c2470);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf1f320(uVar2,param_2,puVar3);
  if ((uVar4 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x390);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar8,param_2,puVar5);
    iVar9 = (int)uVar8;
    _objc_release(puVar5);
  }
  else {
    iVar9 = 1;
  }
  _objc_release(puVar3);
  _objc_release(uVar2);
  lVar7 = 0;
  if (((int)uVar1 == 0x23) && (iVar9 != 0)) {
    lVar7 = param_1;
    func_0x00010be4d1c0(param_1,param_2,param_3,param_4,param_6);
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      lVar6 = param_1;
      func_0x00010bec4480(param_1,param_2,lVar7);
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        _objc_retain(lVar7);
      }
      else {
        uVar8 = *(undefined8 *)(param_1 + 0x3c8);
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_106a75b88;
        puStack_90 = &UNK_110878f70;
        lStack_88 = param_1;
        _objc_retain(lVar6);
        lStack_80 = lVar6;
        _objc_retain(param_3);
        uStack_78 = param_3;
        _objc_retain(param_4);
        uStack_68 = (undefined1)param_6;
        uStack_70 = param_4;
        func_0x00010c0f7fc0(uVar8,param_2,&puStack_a8);
        _objc_retain(lVar7);
        _objc_release(uStack_70);
        _objc_release(uStack_78);
        _objc_release(lStack_80);
      }
      _objc_release(lVar6);
    }
    _objc_release(lVar7);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 106a75b88; end: 106a75b9b;  */

void FUN_106a75b88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be99810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__savePrefetchedMediaToCacheWithM_112583fa0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x40));
  return;
}



/* Entry: 106a75b9c; end: 106a75ce7; -[SCSpotlightPlaybackManager _fetchSpotlightNotificationsToPrependFromMixer:completion:] */

void FUN_106a75b9c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x180);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x238);
    uVar4 = *(undefined8 *)(param_1 + 0x240);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106a75ce8;
    puStack_58 = &UNK_110854320;
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x00010846e82c(uVar2,5,&PTR____CFConstantStringClassReference_110e68fd8,uVar3,uVar4,param_3
                        ,0,PTR___dispatch_main_q_11034be20,&puStack_70,
                        *(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x150),
                        *(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x2e0),
                        *(undefined8 *)(param_1 + 0x2e8),*(undefined8 *)(param_1 + 0x140),
                        *(undefined8 *)(param_1 + 0x3c0));
    _objc_release(uVar2);
    _objc_release(lStack_48);
    _objc_release(lStack_50);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a75ce8; end: 106a75cf3;  */

void FUN_106a75ce8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106a75cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 106a75cf4; end: 106a75e53; -[SCSpotlightPlaybackManager _cleanupSpotlightNotificationPrefetchDirectoryForNotifs:] */

long FUN_106a75cf4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
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
  
  puVar9 = &uStack_130;
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
  puVar2 = auStack_e8;
  lVar12 = param_3;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar14 = *plStack_120;
    do {
      lVar15 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(param_3);
        }
        uVar11 = *(undefined8 *)(lStack_128 + lVar15 * 8);
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c11c460();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar1;
        FUN_106a7f1bc(uVar1,uVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        _objc_release(uVar1);
        func_0x00010c12a900(uVar10);
        _objc_release(uVar10);
        lVar15 = lVar15 + 1;
      } while (lVar12 != lVar15);
      puVar2 = auStack_e8;
      lVar12 = param_3;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  func_0x00010c260c20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_3 + 0x168);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c2470;
  func_0x00010c24b7c0(PTR_PTR_1126c2470);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf1f320();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uVar5 & 1) == 0) {
    iVar13 = (int)*(undefined8 *)(param_3 + 0x390);
    func_0x00010c11c420(puVar9);
    func_0x00010c0df780(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(puVar6);
  }
  else {
    iVar13 = 1;
  }
  _objc_release(puVar4);
  _objc_release(uVar3);
  ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7e10;
  func_0x00010c25d700(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7e10);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c0720c0();
  _objc_release(ppuVar7);
  lVar12 = param_3;
  func_0x00010be79a60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_3 + 800);
  *(long *)(param_3 + 800) = lVar12;
  _objc_release(uVar10);
  lVar12 = 0;
  if (((int)puVar8 != 0) && (iVar13 != 0)) {
    lVar12 = param_3;
    func_0x00010be799a0(param_3);
    uVar1 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c2923e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined1 *)puVar9;
    func_0x00010c11c460(puVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar1;
    FUN_106a7f1bc(uVar1,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(uVar1);
    func_0x00010c12a900(uVar10);
    _objc_release(uVar10);
  }
  _objc_release(puVar2);
  _objc_release(puVar9);
  return lVar12;
}



/* Entry: 106a75e54; end: 106a7602b; -[SCSpotlightPlaybackManager _handleSpotlightNotification:compositeStoryId:] */

long FUN_106a75e54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  
  _objc_retain(param_3);
  func_0x00010c260c20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(ulong *)(param_1 + 0x168);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2470;
  func_0x00010c24b7c0(PTR_PTR_1126c2470);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uVar3 & 1) == 0) {
    iVar10 = (int)*(undefined8 *)(param_1 + 0x390);
    func_0x00010c11c420(param_3);
    func_0x00010c0df780(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(puVar4);
  }
  else {
    iVar10 = 1;
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7e10;
  func_0x00010c25d700(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7e10);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c0720c0();
  _objc_release(ppuVar5);
  lVar9 = param_1;
  func_0x00010be79a60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 800);
  *(long *)(param_1 + 800) = lVar9;
  _objc_release(uVar8);
  lVar9 = 0;
  if (((int)uVar6 != 0) && (iVar10 != 0)) {
    lVar9 = param_1;
    func_0x00010be799a0(param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2923e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c11c460(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    FUN_106a7f1bc(uVar7,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar7);
    func_0x00010c12a900(uVar8);
    _objc_release(uVar8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar9;
}



/* Entry: 106a7602c; end: 106a761df; -[SCSpotlightPlaybackManager _prependSavedStoryToPlaylistWithNotification:] */

bool FUN_106a7602c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c07cda0();
  _objc_initWeak(auStack_58,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106a761e0;
  puStack_80 = &UNK_110959198;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(uVar2);
  uStack_78 = uVar2;
  _objc_retain(param_3);
  uStack_60 = (undefined1)uVar1;
  ppuVar3 = &puStack_98;
  uStack_70 = param_3;
  _objc_retainBlock();
  uVar1 = param_3;
  func_0x00010c11c460(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4d1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_1 != 0) {
    (*(code *)ppuVar3[2])(ppuVar3,param_1);
  }
  _objc_release(param_1);
  _objc_release(ppuVar3);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(param_3);
  return param_1 != 0;
}



/* Entry: 106a761e0; end: 106a763d7;  */

void FUN_106a761e0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar1 + 0x1b8);
    *(undefined **)(lVar1 + 0x1b8) = puVar3;
    _objc_release(uVar6);
    _objc_release(puVar2);
    lVar4 = lVar1;
    func_0x00010bec4480();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      uVar6 = *(undefined8 *)(lVar1 + 0x3c8);
      _objc_retain(lVar4);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar7);
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar8);
      func_0x00010c0f7fc0(uVar6);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(lVar4);
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c11c460(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be99800(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 106a763d8; end: 106a76493; -[SCSpotlightPlaybackManager _storiesMediaInfoFromDiscoverFeedStory:] */

void FUN_106a763d8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x000107d020b4(param_3,0,0,*(undefined8 *)(param_1 + 0x1f0),*(undefined8 *)(param_1 + 0x1f8))
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf529e0();
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126c3390;
    _objc_opt_class(PTR_PTR_1126c3390);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar4 = uVar1;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106a76494; end: 106a765cb; -[SCSpotlightPlaybackManager _loadDiscoverFeedStoryFromFileWithCompositeStoryId:pushTypeName:isSdn:] */

void FUN_106a76494(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = param_3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2923e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_106a7f0d4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    lVar3 = param_1;
    func_0x00010be4d080();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = param_1;
      func_0x00010be020e0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be544e0(param_1);
    func_0x00010bf6bde0(uVar2);
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106a765cc; end: 106a768eb; -[SCSpotlightPlaybackManager _savePrefetchedMediaToCacheWithMediaInfo:compositeStoryId:pushTypeName:isSdn:] */

void FUN_106a765cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b08b8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bf267e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b720();
  func_0x00010c0295e0();
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_106a7f0d4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010c121280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf93e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf93e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c156c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar2);
  if (lVar7 == 0) {
    func_0x00010be544e0(param_1);
    func_0x00010bf6bde0(lVar4);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar8 = *(undefined8 *)(param_1 + 0x268);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf9c720(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    uStack_70 = param_6;
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(lVar4);
    func_0x00010c14a860(uVar8);
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_release(lVar4);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a768ec; end: 106a76957;  */

void FUN_106a768ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be544e0(lVar1);
    func_0x00010bf6bde0(*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a76958; end: 106a7697b; -[SCSpotlightPlaybackManager _logGrapheneNotifNsePrefetchStatus:isSdn:] */

void FUN_106a76958(long param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  ppuVar5 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_4 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dad398;
  }
  lVar1 = *(long *)(param_1 + 0x318);
  uVar8 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar5;
  puVar3 = param_3;
  _objc_retain(ppuVar5);
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar9 = *(long **)(lVar1 + 8);
    _objc_retain(ppuVar5);
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar2 = (undefined **)&UNK_10f3ab4b5;
    }
    else {
      ppuVar2 = ppuVar5;
      _objc_retainAutorelease(ppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar5);
    func_0x00010002b838(auStack_78,ppuVar2);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar3 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar3);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    ppuVar2 = (undefined **)&UNK_110959928;
    puVar3 = &uStack_98;
    uVar8 = 1;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110959928,puVar3,1);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar1 = 0;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(param_3);
  ppuVar4 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(ppuVar5);
  __Unwind_Resume(ppuVar4);
  _objc_retain(uVar8);
  _objc_retain(puVar3);
  _objc_retain(ppuVar4);
  func_0x00010c0b5ac0(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  FUN_106a7f1bc(ppuVar4,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  puVar6 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar3);
  puVar7 = puVar6;
  func_0x00010c22b9e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106a7697c; end: 106a76b8b; -[SCSpotlightPlaybackManager _logMediaStateForFirstStory:] */

void FUN_106a7697c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  if (param_3 != 0) {
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010afef86c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar2 = lVar1;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar1;
      func_0x00010c245680(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar3;
      func_0x000107d03060(lVar3,0);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(param_1 + 600);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0c6980();
      _objc_release(lVar4);
      uVar6 = *(undefined8 *)(param_1 + 0x450);
      func_0x00010baf83bc(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126d0028;
      if (lVar5 == 0) {
        func_0x00010bfb1d40(PTR_PTR_1126d0028);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (lVar5 == 1) {
        func_0x00010bfb1d00(PTR_PTR_1126d0028);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar8 = (undefined *)0x0;
        if (lVar5 == 2) {
          puVar8 = PTR_PTR_1126d0028;
          func_0x00010bfb1ce0(PTR_PTR_1126d0028);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      puVar7 = puVar8;
      func_0x00010c2ac460(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      lVar5 = param_1;
      func_0x00010bee9720(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c2ac460(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(lVar5);
      func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x260));
      _objc_release(uVar6);
      _objc_release(puVar8);
      _objc_release(lVar2);
      _objc_release(lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106a76b8c; end: 106a76c47; -[SCSpotlightPlaybackManager _loadDataFromExtensionSharedFile:] */

void FUN_106a76b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c121280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfeea60(puVar1,param_2,uVar2,0);
  _objc_release(uVar2);
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c1ec620(puVar1,param_2,0);
    puVar3 = puVar1;
    func_0x00010bf67000(puVar1,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106a76c48; end: 106a76e33; -[SCSpotlightPlaybackManager _discoverFeedStoryFromStoredData:] */

void FUN_106a76c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126b7618;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b7618;
  _objc_retain(puVar1);
  _objc_opt_class(puVar2);
  puVar8 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar8 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar1;
    func_0x00010846e4c8();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126b0ef8;
      _objc_alloc(PTR_PTR_1126b0ef8);
      puVar8 = puVar1;
      func_0x00010c135700(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03ef40(puVar4);
      _objc_release(puVar8);
      uVar5 = *(undefined8 *)(param_1 + 0x240);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x238);
      uVar7 = *(undefined8 *)(param_1 + 0x138);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x000108482f84(puVar3,puVar4,0,uVar6,0,uVar9,0,0xf0,0,uVar7,
                          *(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x140));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106a76e34; end: 106a76edf; -[SCSpotlightPlaybackManager _logReceivedStoriesForDisplay:] */

void FUN_106a76e34(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bee9720(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be0ef00(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_106a7ce34(*(undefined8 *)(param_1 + 0x318),lVar2,lVar1,1);
  lVar3 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  if (lVar3 == 0) {
    FUN_106a7d064(*(undefined8 *)(param_1 + 0x318),lVar2,lVar1,1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a76ee0; end: 106a76f8b; -[SCSpotlightPlaybackManager _logReachedEndOfPlaylistWithShouldPaginate:] */

void FUN_106a76ee0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010be0ef00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  FUN_106a7c9d4(*(undefined8 *)(param_1 + 0x318),lVar1,puVar3,1);
  if ((param_3 & 1) == 0) {
    FUN_106a7cc04(*(undefined8 *)(param_1 + 0x318),lVar1,puVar3,1);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a76f8c; end: 106a76fd3; -[SCSpotlightPlaybackManager muteSwitchPlugin:didSetInitialSoundState:] */

void FUN_106a76f8c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ff7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a76fd4; end: 106a771eb; -[SCSpotlightPlaybackManager _removeStoriesFromDataStoreThatAreNotGettingPlayed:] */

void FUN_106a76fd4(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (*(long *)(param_1 + 0x220) == 0x16) {
    lVar1 = param_1;
    func_0x00010bf5fae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_3);
    puVar4 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar10 = *(undefined8 *)((long)puVar9 * 8);
        func_0x00010c259740(uVar10);
        func_0x00010c0df880();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010bf4b900();
        _objc_release(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (((ulong)puVar6 & 1) == 0) {
          func_0x00010c259740(uVar10);
          func_0x00010c0df880();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(puVar5);
        }
        puVar9 = puVar9 + 1;
      } while (puVar4 != puVar9);
      puVar4 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar9 = puVar3;
    func_0x00010bf51e00();
    puVar4 = puVar9;
    func_0x00010be8d760(param_1);
    _objc_release(puVar9);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar2 = param_3;
  func_0x00010bf5ff00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010c282800();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar4;
  if (puVar9 != (undefined *)0x0) {
    uVar10 = *(undefined8 *)(param_3 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c0e00;
    func_0x00010c11a0a0(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f320();
    _objc_release(puVar3);
    _objc_release(uVar10);
    lVar8 = *(long *)(param_3 + 0x1b8);
    func_0x00010bf529e0();
    if (lVar8 != 0) {
      uVar7 = *(undefined8 *)(param_3 + 0x168);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c11f8;
      func_0x00010bf81ba0(PTR_PTR_1126c11f8);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar7;
      func_0x00010bf1f320();
      _objc_release(puVar3);
      _objc_release(uVar7);
      puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      if ((int)uVar10 != 0) {
        uVar10 = *(undefined8 *)(param_3 + 0x1b8);
        func_0x000100504554(uVar10,&PTR___NSConcreteGlobalBlock_1109591c8);
        func_0x00010c0ecd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        func_0x00010befa160(puVar3);
        puVar2 = puVar3;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar3);
      }
    }
    uVar10 = *(undefined8 *)(param_3 + 0x58);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    func_0x00010beecc80(uVar10);
    _objc_release(uVar10);
    _objc_release(puVar2);
  }
  _objc_release(puVar2);
  return;
}



/* Entry: 106a771ec; end: 106a77413; -[SCSpotlightPlaybackManager _maybeUpdateDataStoreOrderingToMatch:allowPruning:] */

void FUN_106a771ec(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  lVar5 = param_1;
  func_0x00010bf5ff00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c282800();
  _objc_release(lVar1);
  _objc_release(lVar5);
  puVar7 = param_3;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c0e00;
    func_0x00010c11a0a0(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f320();
    _objc_release(puVar4);
    _objc_release(uVar3);
    lVar5 = *(long *)(param_1 + 0x1b8);
    func_0x00010bf529e0();
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x168);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c11f8;
      func_0x00010bf81ba0(PTR_PTR_1126c11f8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010bf1f320();
      _objc_release(puVar4);
      _objc_release(uVar6);
      puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      if ((int)uVar3 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x1b8);
        func_0x000100504554(uVar3,&PTR___NSConcreteGlobalBlock_1109591c8);
        func_0x00010c0ecd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        func_0x00010befa160(puVar4);
        puVar7 = puVar4;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
        _objc_release(puVar4);
      }
    }
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar7);
    func_0x00010beecc80(uVar3);
    _objc_release(uVar3);
    _objc_release(puVar7);
  }
  _objc_release(puVar7);
  return;
}



/* Entry: 106a77414; end: 106a77443;  */

void FUN_106a77414(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 106a77444; end: 106a775af;  */

void FUN_106a77444(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf00a40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010050471c();
  lVar3 = lVar2;
  func_0x00010c0d3c80();
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106a77608;
  puStack_60 = &UNK_1109488b0;
  _objc_retain(lVar3);
  lStack_58 = lVar3;
  func_0x000100504554(uVar5,&puStack_78);
  lVar2 = lVar3;
  func_0x00010bf529e0();
  uVar4 = uVar5;
  if ((lVar2 != 0) &&
     ((*(char *)(param_1 + 0x30) != '\x01' || ((*(byte *)(param_1 + 0x31) & 1) == 0)))) {
    lVar2 = lVar3;
    func_0x00010bf00d20(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(lVar2);
  }
  func_0x00010c28a4e0(param_2);
  _objc_release(uVar4);
  _objc_release(lStack_58);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a775b0; end: 106a77607;  */

void FUN_106a775b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 106a77608; end: 106a7766b;  */

void FUN_106a77608(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a7766c; end: 106a77807; -[SCSpotlightPlaybackManager _fixStoryItemPositionForAllStoriesInPlaylist:] */

void FUN_106a7766c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar7 = param_3;
  func_0x00010bf529e0();
  if (uVar7 != 0) {
    uVar7 = 0;
    do {
      uVar2 = param_3;
      func_0x00010c0dfd20(param_3,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c6d78;
      func_0x00010bf82080(PTR_PTR_1126c6d78,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c2140;
      uVar4 = uVar2;
      func_0x00010c25a160(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf82100(puVar5,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b1b20(puVar5,param_2,puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = puVar5;
      func_0x00010bf21f60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ba4e0(puVar3,param_2,puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = puVar3;
      func_0x00010bf21f60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(uVar2);
      uVar7 = uVar7 + 1;
      uVar2 = param_3;
      func_0x00010bf529e0();
    } while (uVar7 < uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a77808; end: 106a77abf; -[SCSpotlightPlaybackManager _maybeRemoveContentAlreadyInAnotherFeed:] */

void FUN_106a77808(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *unaff_x22;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  long lStack_140;
  undefined *puStack_138;
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
  puVar1 = param_3;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x370) == 0) {
    _objc_retain(param_3);
    puVar3 = param_3;
  }
  else {
    unaff_x22 = *(undefined8 **)(param_1 + 0x460);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = unaff_x22;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x22);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_160 = puVar1;
    puStack_150 = puVar1;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_138 = puVar2;
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
    puVar1 = &uStack_130;
    puVar4 = param_3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined8 *)0x0) {
      lVar8 = *plStack_120;
      puStack_148 = puVar3;
      lStack_140 = lVar8;
      do {
        unaff_x22 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar9 = *(undefined8 *)(lStack_128 + (long)unaff_x22 * 8);
          func_0x00010c259740(uVar9);
          func_0x00010c0df880(puVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(ulong *)(param_1 + 0x370);
          func_0x00010c1278a0();
          _objc_retainAutoreleasedReturnValue();
          if ((uVar5 == 0) ||
             (uVar6 = uVar5, func_0x00010c0720c0(),
             puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570,
             puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0, (uVar6 & 1) != 0)) {
            func_0x00010c1262e0(*(undefined8 *)(param_1 + 0x370));
            func_0x00010befa120(puVar3);
          }
          else {
            func_0x00010c25b720(uVar9);
            func_0x00010c0df780();
            _objc_retainAutoreleasedReturnValue();
            puStack_160 = puVar1;
            func_0x00010c14de00(puVar7);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar1);
            func_0x00010be5e060(param_1);
            lVar8 = lStack_140;
            puVar3 = puStack_148;
            _objc_release(puVar7);
          }
          _objc_release(uVar5);
          _objc_release(puVar2);
          unaff_x22 = (undefined8 *)((long)unaff_x22 + 1);
        } while (puVar4 != unaff_x22);
        puVar1 = &uStack_130;
        puVar4 = param_3;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
    _objc_release(puStack_138);
    _objc_release(puStack_150);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    pcStack_168 = FUN_106a77ac0;
    puStack_190 = unaff_x22;
    puStack_188 = param_3;
    lStack_180 = param_1;
    puStack_178 = puVar3;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_retain(puVar1);
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc2000000;
    uStack_1a8 = 0x106a77b70;
    puStack_1a0 = &UNK_11094c5d8;
    puStack_198 = puVar2;
    _objc_retain();
    puVar3 = puVar1;
    func_0x000100504554(puVar1,&puStack_1b8);
    _objc_release(puVar1);
    _objc_release(puStack_198);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106a77ac0; end: 106a77c93; -[SCSpotlightPlaybackManager _maybeRemoveContentWithExpiredSnaps:] */

void FUN_106a77ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_3);
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106a77b70;
  puStack_40 = &UNK_11094c5d8;
  puStack_38 = puVar1;
  _objc_retain();
  uVar2 = param_3;
  func_0x000100504554(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106a77c94; end: 106a77d43;  */

bool FUN_106a77c94(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf9c800(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(uVar2);
  if (param_1 <= 1.0) {
    bVar1 = true;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x20);
    uVar2 = param_3;
    func_0x00010bf9c800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf433a0(lVar3);
    bVar1 = lVar3 == -1;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106a77d44; end: 106a77d6b; -[SCSpotlightPlaybackManager storiesToPrependInPlaylist] */

void FUN_106a77d44(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a77d6c; end: 106a77f87; -[SCSpotlightPlaybackManager _maybeActivateExplorationFirstPositionProtection:] */

void FUN_106a77d6c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010bf529e0();
  if (1 < uVar5) {
    func_0x00010be46f00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c2827c0();
    _objc_release(param_1);
    if (uVar5 != 0) {
      uVar1 = param_3;
      func_0x00010c0dfd40(param_3,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c259740();
      _objc_release(uVar1);
      if (uVar2 == uVar5) goto LAB_106a77ed8;
    }
    uVar5 = param_3;
    func_0x00010c0dfd40(param_3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c11fd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0724e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar5);
    if (((int)uVar3 != 0) && (uVar5 = param_3, func_0x00010bf529e0(), 1 < uVar5)) {
      uVar5 = 1;
      do {
        uVar1 = param_3;
        func_0x00010c0dfd40(param_3,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c25a160();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c11fd40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0724e0();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar4 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010c0d3c80(param_3);
          uVar2 = param_3;
          func_0x00010c0dfd40(param_3,param_2,0);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar1;
          func_0x00010c0dfd40(uVar1,param_2,uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d04c0(uVar1,param_2,uVar3,0);
          _objc_release(uVar3);
          func_0x00010c1d04c0(uVar1,param_2,uVar2,uVar5);
          uVar5 = uVar1;
          func_0x00010bf51e00(uVar1);
          _objc_release(uVar2);
          _objc_release(uVar1);
          goto LAB_106a77ee4;
        }
        uVar5 = uVar5 + 1;
        uVar1 = param_3;
        func_0x00010bf529e0();
      } while (uVar5 < uVar1);
    }
  }
LAB_106a77ed8:
  _objc_retain(param_3);
  uVar5 = param_3;
LAB_106a77ee4:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106a77f88; end: 106a782bb; -[SCSpotlightPlaybackManager _insertPrependedStoriesToTopOfPlaylist:] */

undefined ** FUN_106a77f88(long param_1,undefined **param_2,undefined **param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar7 = *(undefined ***)(param_1 + 0x1b8);
  _objc_retain(ppuVar7);
  ppuVar3 = ppuVar7;
  if (*(long *)(param_1 + 0x248) == 0x1e) {
    uVar2 = *(undefined8 *)(param_1 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c2a20;
    func_0x00010c24b800(PTR_PTR_1126c2a20);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f320();
    _objc_release(puVar8);
    _objc_release(uVar2);
    if ((int)uVar4 != 0) {
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (ppuVar3 == (undefined **)0x0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        ppuVar9 = ppuVar7;
        func_0x00010bfb1920(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c259740();
        func_0x00010c0df880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar9);
      }
      _objc_release(ppuVar3);
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar8;
      param_2 = ppuVar7;
      func_0x000108f4c3f0(puVar8,ppuVar7,uVar4,0,1,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a0c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(puVar8);
    }
  }
  _objc_retain(ppuVar3);
  ppuVar7 = ppuVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (ppuVar7 != (undefined **)0x0) {
    ppuVar9 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(ppuVar3);
      }
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar4 = *(undefined8 *)(param_1 + 0x330);
      func_0x00010c259740(*(undefined8 *)((long)ppuVar9 * 8));
      func_0x00010c0df880(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar4);
      _objc_release(puVar8);
      ppuVar9 = (undefined **)((long)ppuVar9 + 1);
    } while (ppuVar7 != ppuVar9);
    ppuVar7 = ppuVar3;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar3);
  ppuVar7 = ppuVar3;
  func_0x00010bf529e0();
  if (ppuVar7 == (undefined **)0x0) {
    _objc_retain(param_3);
    ppuVar7 = param_3;
  }
  else {
    ppuVar7 = param_3;
    func_0x00010bf529e0();
    if (ppuVar7 == (undefined **)0x0) {
      _objc_retain(ppuVar3);
      ppuVar7 = ppuVar3;
    }
    else {
      ppuVar9 = ppuVar3;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar3;
      func_0x0001006372a4(ppuVar3,&PTR___NSConcreteGlobalBlock_110959258);
      uVar4 = *(undefined8 *)(param_1 + 0x1b8);
      *(undefined ***)(param_1 + 0x1b8) = ppuVar7;
      _objc_release(uVar4);
      param_2 = &PTR___NSConcreteGlobalBlock_110959278;
      ppuVar7 = ppuVar9;
      func_0x00010bd86590(ppuVar9,&PTR___NSConcreteGlobalBlock_110959278);
      _objc_release(ppuVar9);
    }
  }
  _objc_release(ppuVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
    return ppuVar7;
  }
  ___stack_chk_fail();
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar3;
  func_0x000108ea60b8();
  _objc_release(ppuVar3);
  _objc_release(param_2);
  return (undefined **)(ulong)((uint)ppuVar7 ^ 1);
}



/* Entry: 106a782bc; end: 106a7831b;  */

uint FUN_106a782bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108ea60b8();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (uint)uVar2 ^ 1;
}



/* Entry: 106a7831c; end: 106a7834b;  */

void FUN_106a7831c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 106a7834c; end: 106a787eb; -[SCSpotlightPlaybackManager _preserveMostRecentStoryAndFilterOutAllPreviouslyWatchedStories:] */

void FUN_106a7834c(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  puVar1 = *(undefined **)(param_2 + 0x168);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0e00;
  func_0x00010bf66140(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = puVar3;
  func_0x00010c08fa60();
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar3;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08fa60();
    if (puVar5 != (undefined *)0x0) {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      param_1 = 1.60807493534087e-314;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_106a787ec;
      puStack_70 = &UNK_110959328;
      _objc_retain(puVar1);
      puVar5 = param_4;
      puStack_68 = puVar1;
      func_0x00010bfece40();
      _objc_release(puVar4);
      puVar4 = puStack_68;
      if (puVar5 != (undefined *)0x7fffffffffffffff) {
        puVar2 = param_4;
        func_0x00010c0d3c80(param_4);
        puVar4 = param_4;
        func_0x00010c0dfd40(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3c0(puVar2);
        func_0x00010c066b00(puVar2);
        puVar5 = puVar2;
        func_0x00010bf51e00(puVar2);
        _objc_release(puVar4);
        _objc_release(puVar2);
        _objc_release(puStack_68);
        goto LAB_106a787b0;
      }
    }
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  _objc_retain(param_4);
  lVar11 = *(long *)(param_2 + 0x248);
  puVar5 = param_4;
  if (lVar11 == 0x1e) {
    uVar6 = *(ulong *)(param_2 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c2a20;
    func_0x00010c24b800(PTR_PTR_1126c2a20);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf1f320();
    _objc_release(puVar1);
    _objc_release(uVar6);
    if ((uVar7 & 1) == 0) {
      lVar11 = *(long *)(param_2 + 0x248);
      goto LAB_106a784e4;
    }
LAB_106a784ec:
    puVar1 = (undefined *)0x0;
  }
  else {
LAB_106a784e4:
    if (lVar11 == 0x1d) goto LAB_106a784ec;
    puVar4 = param_2;
    func_0x00010be46f20();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar4 == (undefined *)0x0) ||
       (func_0x00010c26f3a0(puVar4), *(double *)(param_2 + 0x2f0) <= -param_1)) {
      puVar1 = param_2;
      func_0x00010be46f00();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010c282800();
      _objc_release(puVar1);
      puVar1 = (undefined *)0x0;
      if ((puVar2 == (undefined *)0x0) && (puVar9 != (undefined *)0x0)) {
        puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d0 = 0xc0000000;
        uStack_c8 = 0x106a788fc;
        puStack_c0 = &UNK_11094a000;
        puStack_b8 = puVar9;
        func_0x0001006372a4(param_4,&puStack_d8);
        puVar1 = (undefined *)0x0;
        puVar9 = param_4;
        goto LAB_106a78678;
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010be46f00();
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_106a788c4;
      puStack_98 = &UNK_110959328;
      _objc_retain();
      puVar8 = param_4;
      puStack_90 = puVar1;
      func_0x00010bfece40();
      puVar9 = puStack_90;
      if (puVar8 != (undefined *)0x7fffffffffffffff) {
        puVar9 = param_4;
        func_0x00010c0d3c80(param_4);
        puVar8 = param_4;
        func_0x00010c0dfd40(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3c0(puVar9);
        func_0x00010c066b00(puVar9);
        puVar5 = puVar9;
        func_0x00010bf51e00(puVar9);
        _objc_release(param_4);
        _objc_release(puVar8);
        _objc_release(puVar9);
        puVar9 = puStack_90;
      }
LAB_106a78678:
      _objc_release(puVar9);
    }
    _objc_release(puVar4);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(long *)(param_2 + 0x1c0) != 0) {
    func_0x00010c259740();
    func_0x00010c0df880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar4;
  }
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  if (puVar2 == (undefined *)0x0) {
    uVar10 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000108f4c3f0(puVar1,puVar5,uVar10,0,1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(uVar10);
    puVar5 = puVar4;
  }
  if (puVar1 != (undefined *)0x0) {
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x330));
  }
LAB_106a787b0:
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106a787ec; end: 106a788c3;  */

bool FUN_106a787ec(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf52680();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf52680();
  if (lVar2 == lVar3) {
    lVar2 = param_2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe5ec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    if ((int)lVar3 == 0) {
      bVar1 = false;
    }
    else {
      lVar3 = param_2;
      func_0x00010c298be0(param_2);
      lVar5 = *(long *)(param_1 + 0x20);
      func_0x00010c298be0(lVar5);
      bVar1 = lVar3 == lVar5;
    }
    _objc_release(uVar4);
    _objc_release(lVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106a788c4; end: 106a7892b;  */

bool FUN_106a788c4(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c259740(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c282800(lVar1);
  return param_2 == lVar1;
}



/* Entry: 106a7892c; end: 106a78aef; -[SCSpotlightPlaybackManager _removeSensitiveContentFromSpotlightIfPresentedOutsideFifthTab:] */

void FUN_106a7892c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
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
  _objc_retain(param_3);
  uVar4 = *(long *)(param_1 + 0x248) - 0x57;
  uVar2 = uVar4 >> 1;
  if ((uVar2 | uVar4 << 0x3f) < 8 && (1L << (uVar2 & 0x3f) & 0xb1U) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
    puVar3 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    puVar7 = param_3;
    if (puVar3 != (undefined *)0x0) {
      lVar5 = 0;
      lVar6 = *plStack_120;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(param_3);
          }
          uVar4 = *(ulong *)(lStack_128 + (long)puVar7 * 8);
          uVar2 = uVar4;
          func_0x00010c0820e0();
          if ((uVar2 & 1) == 0) {
            func_0x00010befa120(puVar1,param_2,uVar4);
          }
          else {
            lVar5 = lVar5 + 1;
          }
          puVar7 = puVar7 + 1;
        } while (puVar3 != puVar7);
        puVar3 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
      } while (puVar3 != (undefined *)0x0);
      _objc_release(param_3);
      if (lVar5 < 1) goto LAB_106a78aa8;
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110e690d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf66440(param_1,param_2,puVar7);
    }
    _objc_release(puVar7);
  }
  else {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
LAB_106a78aa8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar3 = *(undefined **)(param_3 + 0x248);
    func_0x000108534a80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a78af0; end: 106a78b37; -[SCSpotlightPlaybackManager _viewLocation] */

void FUN_106a78af0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x248);
  func_0x000108534a80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106a78b38; end: 106a78b9b; -[SCSpotlightPlaybackManager _feedTypeString] */

void FUN_106a78b38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5ff00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106a78b9c; end: 106a78bdf; -[SCSpotlightPlaybackManager _lockInDedupeFpOrder:] */

void FUN_106a78b9c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010befa160(*(undefined8 *)(param_1 + 0x88),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a78be0; end: 106a78c07; -[SCSpotlightPlaybackManager debugSpotlightPostNotificationToastMessage:] */

void FUN_106a78be0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a78c08; end: 106a78c23; -[SCSpotlightPlaybackManager createWidgetPlugin] */

void FUN_106a78c08(void)

{
  _objc_alloc_init(PTR_PTR_1126d0030);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a78c24; end: 106a78d33; -[SCSpotlightPlaybackManager injectSpotlightPreviewToPlaylist:] */

void FUN_106a78c24(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x1d8);
    *(long *)(param_1 + 0x1d8) = param_3;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066720(uVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = *(undefined8 *)(param_1 + 0x310);
    func_0x00010c259740(param_3);
    func_0x00010c0df880(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar1);
    _objc_release(puVar2);
    func_0x00010c065120(*(undefined8 *)(param_1 + 0x308));
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010befe3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x308),PTR_s_advanceToNextStory_11259d290);
  return;
}



/* Entry: 106a78d34; end: 106a78d3b; -[SCSpotlightPlaybackManager advanceToNextStory] */

void FUN_106a78d34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befe3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x308),PTR_s_advanceToNextStory_11259d290);
  return;
}



/* Entry: 106a78d3c; end: 106a78dc7; -[SCSpotlightPlaybackManager removeSpotlightWidgetPreviewFromPlaylist] */

void FUN_106a78d3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x1d8);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x310);
    func_0x00010c259740();
    func_0x00010c0df880(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c12e4e0(*(undefined8 *)(param_1 + 0x308),param_2,*(undefined8 *)(param_1 + 0x1d8));
    uVar3 = *(undefined8 *)(param_1 + 0x1d8);
    *(undefined8 *)(param_1 + 0x1d8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 106a78dc8; end: 106a79163; -[SCSpotlightPlaybackManager _viewStateFlagForStory:] */

void FUN_106a78dc8(double param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010c0741a0();
  if (((ulong)puVar1 & 1) != 0) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110e690f8;
    goto LAB_106a78f80;
  }
  puVar1 = param_4;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar4;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_4;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010afefbe8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) {
      ppuVar9 = &PTR____CFConstantStringClassReference_110e69158;
    }
    else {
      puVar1 = puVar2;
      func_0x00010c2a2900();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c29ae20();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = puVar2;
        func_0x00010c2a2900();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c08ac00();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c08fa60();
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(puVar1);
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuVar9 = &PTR____CFConstantStringClassReference_110e69138;
        if (puVar6 == (undefined *)0x0) {
          puVar3 = puVar2;
          func_0x00010bf8c980(puVar2);
          func_0x00010c0df7c0(puVar1,param_3,puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          uVar7 = *(undefined8 *)(param_2 + 0x48);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_68 = puVar3;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_68,1);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c121860(uVar7,param_3,puVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          _objc_release(uVar7);
          uVar7 = uVar8;
          func_0x00010c0e00e0(uVar8,param_3,puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c270aa0();
          if (param_1 == 0.0) {
            ppuVar9 = &PTR____CFConstantStringClassReference_110dafe18;
          }
          _objc_release(uVar7);
          _objc_release(uVar8);
          goto LAB_106a78f6c;
        }
      }
      else {
        _objc_release(puVar1);
        ppuVar9 = &PTR____CFConstantStringClassReference_110e69138;
      }
    }
  }
  else {
    puVar5 = *(undefined **)(param_2 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c121820(puVar5,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar5);
    puVar3 = puVar4;
    func_0x00010c241220(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c0e00e0(puVar2,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c29ea60();
    ppuVar9 = &PTR____CFConstantStringClassReference_110e69118;
    if ((int)puVar5 == 0) {
      ppuVar9 = &PTR____CFConstantStringClassReference_110dafe18;
    }
    _objc_retain(ppuVar9);
    _objc_release(puVar1);
LAB_106a78f6c:
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
LAB_106a78f80:
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 106a79164; end: 106a79167; -[SCSpotlightPlaybackManager _outputFinalPlaylist:originalPlaylist:] */

void FUN_106a79164(void)

{
  return;
}



/* Entry: 106a79168; end: 106a791c3; -[SCSpotlightPlaybackManager _triggeringSectionWithBroadcastViewLocation:notification:] */

undefined8 FUN_106a79168(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    func_0x000107b01540();
    uVar1 = 0x45;
    if ((int)param_4 != 0) {
      uVar1 = 0x46;
    }
    return uVar1;
  }
  if (param_3 != 0x1d) {
    if ((param_3 == 0x65) && (*(long *)(param_1 + 0x220) == 0x12)) {
      return 1;
    }
    return 0x1c;
  }
  return 0x39;
}



/* Entry: 106a791c4; end: 106a793ef; -[SCSpotlightPlaybackManager _prependedCommentIdsForNotification:] */

void FUN_106a791c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c11c460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c11c460();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((uVar3 & 1) != 0) {
LAB_106a79258:
      _objc_release(uVar2);
      goto LAB_106a79260;
    }
    uVar3 = param_3;
    func_0x00010c11c460();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((int)uVar4 != 0) {
      _objc_release(uVar3);
      goto LAB_106a79258;
    }
    uVar4 = param_3;
    func_0x00010c11c460();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar5 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      goto LAB_106a79380;
    }
  }
  else {
LAB_106a79260:
    _objc_release(uVar1);
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  if (uVar2 != 0) {
    uVar1 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  if (uVar2 != 0) {
    uVar1 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
LAB_106a79380:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106a793f0; end: 106a793fb; -[SCSpotlightPlaybackManager _dedupeFpEligibleForLastStoryExit:] */

bool FUN_106a793f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 106a793fc; end: 106a797e7; -[SCSpotlightPlaybackManager _emitFreshnessLogsForPlayingStory:dedupeFp:itemGroupModel:] */

void FUN_106a793fc(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c13bd00();
  _objc_retainAutoreleasedReturnValue();
  if ((param_4 != 0) && (lVar1 != 0)) {
    uVar2 = *(ulong *)(param_1 + 0x330);
    func_0x00010bf4b900();
    _objc_release(lVar1);
    if ((uVar2 & 1) != 0) goto LAB_106a79778;
    puStack_b0 = &uStack_b8;
    uStack_b8 = 0;
    dVar7 = 1.02270250269256e-312;
    uStack_a8 = 0x3032000000;
    pcStack_a0 = FUN_106a65534;
    uStack_98 = 0x106a65544;
    lStack_90 = 0;
    lVar1 = param_3;
    func_0x00010c259560(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    func_0x00010c0bf680(lVar1);
    _objc_release(lVar1);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x330));
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puStack_b0[5] != 0) {
      lVar1 = param_1;
      func_0x00010bf5ff00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bfa4340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar1);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25b720();
      func_0x00010c14de00(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c13bd00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(puVar6);
      dVar8 = dVar7;
      _objc_release(lVar1);
      func_0x00010c26f380(puVar6);
      lVar1 = param_3;
      dVar9 = dVar8;
      func_0x00010c13bd00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      _objc_release(lVar1);
      FUN_106a7d4c4(*(undefined8 *)(param_1 + 0x318),puVar4,puVar5,(long)dVar7);
      FUN_106a7d714(*(undefined8 *)(param_1 + 0x318),puVar4,puVar5,(long)dVar8);
      FUN_106a7d964(*(undefined8 *)(param_1 + 0x318),puVar4,puVar5,(long)dVar9);
      if ((*(byte *)(param_1 + 0x338) & 1) == 0) {
        *(undefined1 *)(param_1 + 0x338) = 1;
        FUN_106a7dbb4(*(undefined8 *)(param_1 + 0x318),puVar4,puVar5,(long)dVar7);
        FUN_106a7dde4(*(undefined8 *)(param_1 + 0x318),puVar4,puVar5,(long)dVar8);
        FUN_106a7e014(*(undefined8 *)(param_1 + 0x318),puVar4,puVar5,(long)dVar9);
      }
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(param_5);
    __Block_object_dispose(&uStack_b8,8);
    lVar1 = lStack_90;
  }
  _objc_release(lVar1);
LAB_106a79778:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a797e8; end: 106a799cf;  */

void FUN_106a797e8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar3 = PTR_PTR_1126b5bc0;
  uVar13 = *(ulong *)(param_1 + 0x20);
  _objc_retain(uVar13);
  _objc_opt_class();
  uVar4 = uVar13;
  _objc_opt_isKindOfClass();
  uVar1 = uVar13;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar13);
  if (uVar1 != 0) {
    lVar5 = param_2;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar5;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar11 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar5);
        }
        uVar14 = *(undefined8 *)(lVar12 * 8);
        uVar10 = uVar14;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar13;
        func_0x00010c15f2e0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar10;
        func_0x00010c071ae0();
        _objc_release(uVar4);
        _objc_release(uVar10);
        if ((int)uVar6 != 0) {
          func_0x00010bf5aac0();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 8);
          uVar10 = *(undefined8 *)(lVar11 + 0x28);
          *(undefined8 *)(lVar11 + 0x28) = uVar14;
          _objc_release(uVar10);
          goto LAB_106a79978;
        }
        lVar12 = lVar12 + 1;
      } while (lVar11 != lVar12);
      lVar11 = lVar5;
      func_0x00010bf52a60();
    }
LAB_106a79978:
    _objc_release(lVar5);
  }
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf5aac0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar10 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined **)(lVar9 + 0x28) = puVar8;
  _objc_release(uVar10);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106a799d0; end: 106a79a47;  */

void FUN_106a799d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5aac0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a79a48; end: 106a79b27;  */

void FUN_106a79a48(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c11b6a0(param_2);
  func_0x00010bf655e0((double)(param_2 / 1000));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106a79b28; end: 106a79dbf; -[SCSpotlightPlaybackManager _batchFetchCompositeStoryIdsFromTweak] */

void FUN_106a79b28(undefined *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined **unaff_x23;
  undefined8 unaff_x24;
  undefined **unaff_x25;
  undefined *puVar14;
  long unaff_x27;
  undefined **unaff_x28;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined **ppuStack_260;
  long lStack_258;
  undefined *puStack_250;
  undefined **ppuStack_248;
  undefined8 uStack_240;
  undefined **ppuStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined *puStack_200;
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
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = *(undefined **)(param_1 + 0x360);
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  puStack_1a0 = (undefined8 *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(puVar3);
  puVar6 = puVar3;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    unaff_x25 = (undefined **)*puStack_1a0;
    do {
      param_1 = (undefined *)0x0;
      do {
        if ((undefined **)*puStack_1a0 != unaff_x25) {
          _objc_enumerationMutation(puVar3);
        }
        unaff_x24 = *(undefined8 *)(lStack_1a8 + (long)param_1 * 8);
        func_0x00010c25d0a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(unaff_x24);
        param_1 = param_1 + 1;
      } while (puVar6 != param_1);
      puVar6 = puVar3;
      func_0x00010bf52a60();
      unaff_x23 = (undefined **)0x0;
    } while (puVar6 != (undefined *)0x0);
  }
  puStack_1f8 = puVar3;
  _objc_release(puVar3);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(puVar4);
  puVar12 = &uStack_1f0;
  puVar13 = auStack_170;
  puVar6 = puVar4;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    unaff_x27 = *plStack_1e0;
    unaff_x23 = &PTR____CFConstantStringClassReference_110e610f8;
    unaff_x28 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    unaff_x25 = &PTR____CFConstantStringClassReference_110e45c38;
    do {
      param_1 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != unaff_x27) {
          _objc_enumerationMutation(puVar4);
        }
        puVar14 = *(undefined **)(lStack_1e8 + (long)param_1 * 8);
        puVar3 = puVar14;
        func_0x00010bf4bb00();
        if ((int)puVar3 == 0) {
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puStack_200 = puVar14;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(puVar3);
        }
        else {
          func_0x00010befa120(puVar2);
          puVar3 = puVar14;
        }
        param_1 = param_1 + 1;
      } while (puVar6 != param_1);
      puVar12 = &uStack_1f0;
      puVar13 = auStack_170;
      puVar6 = puVar4;
      func_0x00010bf52a60();
      unaff_x24 = 0;
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar6 = puStack_1f8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_106a79dc0;
  ppuStack_260 = unaff_x28;
  lStack_258 = unaff_x27;
  puStack_250 = puVar3;
  ppuStack_248 = unaff_x25;
  uStack_240 = unaff_x24;
  ppuStack_238 = unaff_x23;
  puStack_230 = puVar5;
  puStack_228 = puVar4;
  puStack_220 = param_1;
  puStack_218 = puVar2;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(puVar12);
  _objc_retain(puVar13);
  puVar4 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  puVar7 = puVar12;
  _objc_opt_isKindOfClass(puVar12,puVar4);
  puVar1 = puVar12;
  if (((ulong)puVar7 & 1) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  _objc_retain(puVar1);
  puVar4 = PTR_PTR_1126c9a80;
  _objc_retain(puVar12);
  _objc_opt_class(puVar4);
  puVar8 = puVar12;
  _objc_opt_isKindOfClass(puVar12,puVar4);
  puVar7 = puVar12;
  if (((ulong)puVar8 & 1) == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  _objc_retain(puVar7);
  _objc_release(puVar12);
  puVar4 = PTR_PTR_1126c9870;
  _objc_retain(puVar12);
  _objc_opt_class(puVar4);
  puVar9 = puVar12;
  _objc_opt_isKindOfClass(puVar12,puVar4);
  puVar8 = puVar12;
  if (((ulong)puVar9 & 1) == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  _objc_retain(puVar8);
  _objc_release(puVar12);
  func_0x00010bfecde0(*(undefined8 *)(puVar6 + 0x488));
  puVar4 = puVar6;
  func_0x00010bf5ff00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar9 = puVar12;
  if (puVar1 == (undefined8 *)0x0) {
LAB_106a79f64:
    if (puVar7 == (undefined8 *)0x0) {
      if (puVar8 == (undefined8 *)0x0) goto LAB_106a7a064;
      puVar10 = puVar12;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar10 == (undefined8 *)0x0) goto LAB_106a7a064;
      uVar11 = *(undefined8 *)(puVar6 + 0x368);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe5ec0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106a79f1c;
    }
    puStack_288 = &uStack_290;
    uStack_290 = 0;
    uStack_280 = 0x3032000000;
    pcStack_278 = FUN_106a65534;
    uStack_270 = 0x106a65544;
    uStack_268 = 0;
    func_0x00010c0bebc0(puVar12);
    if (puStack_288[5] != 0) {
      uVar11 = *(undefined8 *)(puVar6 + 0x368);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0(puVar2);
      func_0x00010c243ec0(uVar11);
      _objc_release(uVar11);
    }
    __Block_object_dispose(&uStack_290,8);
    uVar11 = uStack_268;
  }
  else {
    puVar10 = puVar12;
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar10 == (undefined8 *)0x0) goto LAB_106a79f64;
    uVar11 = *(undefined8 *)(puVar6 + 0x368);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15f2e0(puVar12);
    _objc_retainAutoreleasedReturnValue();
LAB_106a79f1c:
    func_0x00010c067fc0(puVar2);
    func_0x00010c243ec0(uVar11);
    _objc_release(puVar9);
  }
  _objc_release(uVar11);
LAB_106a7a064:
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(puVar13);
  _objc_release(puVar12);
  return;
}



/* Entry: 106a79dc0; end: 106a7a113; -[SCSpotlightPlaybackManager _recordPlaylistItemDataModel:dedupeFp:] */

void FUN_106a79dc0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126c9a80;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar3 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126c9870;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar4 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(param_3);
  func_0x00010bfecde0(*(undefined8 *)(param_1 + 0x488));
  lVar6 = param_1;
  func_0x00010bf5ff00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  uVar5 = param_3;
  if (uVar1 == 0) {
LAB_106a79f64:
    if (uVar3 == 0) {
      if (uVar4 == 0) goto LAB_106a7a064;
      uVar8 = param_3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar8 == 0) goto LAB_106a7a064;
      uVar9 = *(undefined8 *)(param_1 + 0x368);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106a79f1c;
    }
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_106a65534;
    uStack_70 = 0x106a65544;
    uStack_68 = 0;
    func_0x00010c0bebc0(param_3);
    if (puStack_88[5] != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x368);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0(lVar7);
      func_0x00010c243ec0(uVar9);
      _objc_release(uVar9);
    }
    __Block_object_dispose(&uStack_90,8);
    uVar9 = uStack_68;
  }
  else {
    uVar8 = param_3;
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar8 == 0) goto LAB_106a79f64;
    uVar9 = *(undefined8 *)(param_1 + 0x368);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15f2e0(param_3);
    _objc_retainAutoreleasedReturnValue();
LAB_106a79f1c:
    func_0x00010c067fc0(lVar7);
    func_0x00010c243ec0(uVar9);
    _objc_release(uVar5);
  }
  _objc_release(uVar9);
LAB_106a7a064:
  _objc_release(lVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a7a114; end: 106a7a193;  */

void FUN_106a7a114(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c29a460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a7a194; end: 106a7a26b; -[SCSpotlightPlaybackManager _feedPageSectionFromSubfeedPageTypeString:] */

undefined8 FUN_106a7a194(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ce7b8;
  func_0x00010bfb39e0(PTR_PTR_1126ce7b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126ce7b8;
    func_0x00010bf81400(PTR_PTR_1126ce7b8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126ce7b8;
      func_0x00010bfb4880(PTR_PTR_1126ce7b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(param_3,param_2,puVar1);
      _objc_release(puVar1);
      uVar3 = 0x1c;
    }
    else {
      uVar3 = 4;
    }
  }
  else {
    uVar3 = 2;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106a7a26c; end: 106a7a31f; -[SCSpotlightPlaybackManager didTapSpotlightNotification:] */

void FUN_106a7a26c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + 0x398) = param_1;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_2 + 0x3a0);
    *(long *)(param_2 + 0x3a0) = param_4;
    _objc_release(uVar1);
    lVar2 = param_4;
    func_0x00010c0dc140();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(param_2 + 0x3b8);
    *(long *)(param_2 + 0x3b8) = lVar3;
    _objc_release(uVar1);
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_2 + 0x318);
    lVar2 = param_4;
    func_0x00010c11c460(param_4);
    _objc_retainAutoreleasedReturnValue();
    FUN_106a7e818(uVar1,lVar2,1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a7a320; end: 106a7a34f; -[SCSpotlightPlaybackManager setPendingNotificationIdForLogging:] */

void FUN_106a7a320(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x3b8);
  *(undefined8 *)(param_1 + 0x3b8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a7a350; end: 106a7a50f; -[SCSpotlightPlaybackManager _logNotificationPlaybackStartIfApplicable] */

void FUN_106a7a350(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  
  dVar9 = *(double *)(param_1 + 0x398);
  if (dVar9 == 0.0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x3a0);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x3a8);
    if (lVar1 == 0) goto LAB_106a7a400;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    _objc_release(lVar1);
    uVar8 = *(ulong *)(param_1 + 0x3a8);
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar8 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar8 = 0;
    }
    _objc_retain(uVar8);
    _objc_release(uVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x3a8);
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    _objc_release(uVar6);
    if (((int)lVar2 == 0) || (uVar3 = uVar8, func_0x00010c08fa60(), uVar3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar8);
      return;
    }
    _CACurrentMediaTime();
    FUN_106a7eb00(*(undefined8 *)(param_1 + 0x318),uVar8,
                  (long)((dVar9 - *(double *)(param_1 + 0x398)) * 1000.0));
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x318);
    func_0x00010c11c460();
    _objc_retainAutoreleasedReturnValue();
    FUN_106a7e98c(uVar6,lVar1,1);
    _objc_release(lVar1);
    _CACurrentMediaTime();
    dVar10 = *(double *)(param_1 + 0x398);
    uVar7 = *(undefined8 *)(param_1 + 0x318);
    uVar6 = *(undefined8 *)(param_1 + 0x3a0);
    func_0x00010c11c460(uVar6);
    _objc_retainAutoreleasedReturnValue();
    FUN_106a7eb00(uVar7,uVar6,(long)((dVar9 - dVar10) * 1000.0));
    _objc_release(uVar6);
    uVar8 = *(ulong *)(param_1 + 0x3a0);
    *(undefined8 *)(param_1 + 0x3a0) = 0;
  }
  _objc_release(uVar8);
LAB_106a7a400:
  *(undefined8 *)(param_1 + 0x398) = 0;
  return;
}



/* Entry: 106a7a510; end: 106a7a66f; -[SCSpotlightPlaybackManager _logNotificationPlaybackErrorIfApplicable:] */

void FUN_106a7a510(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x3a0);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x3a8);
    if (lVar1 != 0) {
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0720c0();
      _objc_release(lVar1);
      uVar7 = *(ulong *)(param_1 + 0x3a8);
      func_0x00010c11d6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar7 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar3);
      uVar6 = *(undefined8 *)(param_1 + 0x3a8);
      *(undefined8 *)(param_1 + 0x3a8) = 0;
      _objc_release(uVar6);
      if (((int)lVar2 == 0) || (uVar3 = uVar7, func_0x00010c08fa60(), uVar3 == 0)) {
        _objc_release(uVar7);
        goto LAB_106a7a580;
      }
      FUN_106a7ec74(*(undefined8 *)(param_1 + 0x318),param_3,uVar7,1);
      goto LAB_106a7a574;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x318);
    func_0x00010c11c460();
    _objc_retainAutoreleasedReturnValue();
    FUN_106a7ec74(uVar6,param_3,lVar1,1);
    _objc_release(lVar1);
    uVar7 = *(ulong *)(param_1 + 0x3a0);
    *(undefined8 *)(param_1 + 0x3a0) = 0;
LAB_106a7a574:
    _objc_release(uVar7);
  }
  *(undefined8 *)(param_1 + 0x398) = 0;
LAB_106a7a580:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a7a670; end: 106a7a77f; -[SCSpotlightPlaybackManager didTapSpotlightDeeplink:] */

void FUN_106a7a670(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_2 + 0x3a8);
    *(ulong *)(param_2 + 0x3a8) = param_4;
    _objc_release(uVar1);
    uVar2 = param_4;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar2 = param_4;
      func_0x00010c11d6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar2 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar3);
      uVar3 = uVar2;
      func_0x00010c08fa60();
      if (uVar3 != 0) {
        _CACurrentMediaTime();
        *(undefined8 *)(param_2 + 0x398) = param_1;
        FUN_106a7e818(*(undefined8 *)(param_2 + 0x318),uVar2,1);
      }
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a7a780; end: 106a7ac27; -[SCSpotlightPlaybackManager _handleSpotlightDeepLink:] */

void FUN_106a7a780(undefined **param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **unaff_x27;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110e62198;
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar12);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c08fa60();
  if (uVar2 == 0) goto LAB_106a7abb0;
  uVar2 = param_3;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar12);
  uVar2 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c08fa60();
  unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  if (uVar3 != 0) {
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_1[100];
    param_1[100] = puVar10;
    _objc_release(puVar13);
  }
  puVar5 = param_1[0x2d];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c2470;
  func_0x00010c290560(PTR_PTR_1126c2470);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar5;
  func_0x00010bf1f320();
  _objc_release(puVar10);
  _objc_release(puVar5);
  uVar3 = param_3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if (((uint)puVar13 & (uint)uVar4) == 1) {
    uVar3 = param_3;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar12);
    uVar3 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    func_0x000107fd3b4c(uVar3);
    ppuVar7 = param_1;
    func_0x00010be4e7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (ppuVar7 == (undefined **)0x0) goto LAB_106a7a9f0;
LAB_106a7aa44:
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_78 = ppuVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar9;
    func_0x00010be79a00(param_1);
    _objc_release(ppuVar9);
  }
  else {
LAB_106a7a9f0:
    ppuVar8 = (undefined **)param_1[10];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x000108f51d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar8;
    func_0x00010c25ba80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(ppuVar8);
    if (ppuVar7 != (undefined **)0x0) goto LAB_106a7aa44;
    uVar3 = param_3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    ppuVar7 = &PTR____CFConstantStringClassReference_110e1c6f8;
    if ((int)uVar4 == 0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110e68df8;
    }
    _objc_retain(ppuVar7);
    _objc_release(uVar3);
    _objc_initWeak(auStack_80,param_1);
    puVar10 = param_1[0x30];
    func_0x00010c269d40(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_1[0x47];
    puVar5 = param_1[0x48];
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106a7ac28;
    puStack_90 = &UNK_110959298;
    unaff_x27 = &puStack_a8;
    _objc_copyWeak(auStack_88,auStack_80);
    puVar12 = (undefined *)0x5;
    ppuVar8 = ppuVar7;
    func_0x00010846f16c(puVar10,5,ppuVar7,puVar13,puVar5,uVar1,0,PTR___dispatch_main_q_11034be20,
                        unaff_x27,param_1[0x27],param_1[0x2a],param_1[0x34],param_1[0x5c],
                        param_1[0x5d],param_1[0x28]);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar10);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(ppuVar7);
  _objc_release(uVar2);
LAB_106a7abb0:
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 4);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  _objc_retain(puVar12);
  _objc_retain(ppuVar8);
  lVar11 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (lVar11 != 0) {
    func_0x00010be30ac0(lVar11);
  }
  _objc_release(lVar11);
  _objc_release(ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 106a7ac28; end: 106a7ac97;  */

void FUN_106a7ac28(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be30ac0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a7ac98; end: 106a7ae87; -[SCSpotlightPlaybackManager _handleSpotlightLookUpStory:error:] */

void FUN_106a7ac98(long param_1,undefined1 *param_2,long param_3,long param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == 0) || (param_4 != 0)) {
    if (param_4 == 0) {
      func_0x00010be56760(param_1);
    }
    else {
      lVar1 = param_4;
      func_0x00010bf6e340(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be56760(param_1);
      _objc_release(lVar1);
    }
    ppuVar2 = *(undefined ***)(param_1 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c0e00;
    func_0x00010bf682e0(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)ppuVar2;
    func_0x00010bf1f320();
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    if ((int)puVar4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 800);
      *(undefined8 *)(param_1 + 800) = 0;
      _objc_release(uVar5);
      _objc_initWeak(auStack_58,param_1);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_106a7ae88;
      puStack_68 = &UNK_110842c58;
      param_2 = auStack_58;
      _objc_copyWeak(auStack_60,param_2);
      func_0x00010be1e580(param_1);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      ppuVar2 = &puStack_80;
    }
  }
  else {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be79a00(param_1);
    _objc_release(ppuVar2);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined *)((long)ppuVar2 + 0x20));
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    func_0x00010bee08e0(param_3);
    func_0x00010be7d0e0(param_3);
    func_0x00010be7ec40(param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a7ae88; end: 106a7aef3;  */

void FUN_106a7ae88(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee08e0(param_1);
    func_0x00010be7d0e0(param_1);
    func_0x00010be7ec40(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a7aef4; end: 106a7afa7; -[SCSpotlightPlaybackManager _presentStoryUnavailableNotification] */

void FUN_106a7aef4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_PTR_1126afde0;
  lVar3 = *(long *)(param_1 + 0x250);
  if (lVar3 != 0) {
    lVar1 = lVar3;
    _objc_retain(lVar3);
    FUN_106a8f984();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf57f80(puVar2,param_2,lVar1,&PTR____CFConstantStringClassReference_110e691f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010c25f340(lVar1,param_2,puVar2);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106a7afa8; end: 106a7b17b; -[SCSpotlightPlaybackManager _prependStoriesToPlaylistAndPresent:] */

void FUN_106a7afa8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c11f8;
    func_0x00010bf81ba0(PTR_PTR_1126c11f8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f320();
    _objc_release(puVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010bf5ff00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010bfa4340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c10a660(uVar5);
      _objc_release(lVar6);
      _objc_release(lVar1);
      _objc_release(uVar5);
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x1b8) != 0) {
      func_0x00010befa160(puVar3);
    }
    puVar7 = puVar3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_1 + 0x1b8);
    *(undefined **)(param_1 + 0x1b8) = puVar7;
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010be1e580(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106a7b17c; end: 106a7b1df;  */

void FUN_106a7b17c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee08e0(param_1);
    func_0x00010be7d0e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a7b1e0; end: 106a7b26b; -[SCSpotlightPlaybackManager _shouldShowTiledInterstitial] */

undefined8 FUN_106a7b1e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if ((*(long *)(param_1 + 0x248) != 0x62) && (*(long *)(param_1 + 0x248) != 0x49)) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0010;
  func_0x00010c26ef40(PTR_PTR_1126d0010);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 106a7b26c; end: 106a7b3fb; -[SCSpotlightPlaybackManager _resetInterstitialImpressionCountIfTTLExpired] */

void FUN_106a7b26c(double param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  
  uVar1 = *(ulong *)(param_2 + 0x168);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0010;
  func_0x00010c069900(PTR_PTR_1126d0010);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c067e20(uVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((long)uVar3 < 1) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar7 = param_1;
  _objc_release(puVar2);
  lVar4 = *(long *)(param_2 + 0x110);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    func_0x00010bf885a0(lVar5);
    if ((param_1 - dVar7 < (double)uVar3) && (0.0 <= param_1 - dVar7)) goto LAB_106a7b3d0;
    uVar6 = *(undefined8 *)(param_2 + 0x3e0);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2087c0();
    _objc_release(uVar6);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x110);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar6,param_3,puVar2,&PTR____CFConstantStringClassReference_110e68d78);
  _objc_release(puVar2);
  _objc_release(uVar6);
LAB_106a7b3d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 106a7b3fc; end: 106a7b403; -[SCSpotlightPlaybackManager feedPageEntryType] */

undefined8 FUN_106a7b3fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x450);
}



/* Entry: 106a7b404; end: 106a7b40b; -[SCSpotlightPlaybackManager setFeedPageEntryType:] */

void FUN_106a7b404(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x450) = param_3;
  return;
}



/* Entry: 106a7b40c; end: 106a7b413; -[SCSpotlightPlaybackManager currentPageSessionId] */

undefined8 FUN_106a7b40c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x458);
}



/* Entry: 106a7b414; end: 106a7b41b; -[SCSpotlightPlaybackManager setCurrentPageSessionId:] */

void FUN_106a7b414(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106a7b41c; end: 106a7b423; -[SCSpotlightPlaybackManager sectionKeys] */

undefined8 FUN_106a7b41c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x460);
}



/* Entry: 106a7b424; end: 106a7b43b; -[SCSpotlightPlaybackManager delegate] */

void FUN_106a7b424(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x468);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a7b43c; end: 106a7b447; -[SCSpotlightPlaybackManager setDelegate:] */

void FUN_106a7b43c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x468,param_3);
  return;
}



/* Entry: 106a7b448; end: 106a7b44f; -[SCSpotlightPlaybackManager metadataAvailableAtStartCount] */

undefined8 FUN_106a7b448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x470);
}



/* Entry: 106a7b450; end: 106a7b457; -[SCSpotlightPlaybackManager mediaAvailableAtStartCount] */

undefined8 FUN_106a7b450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x478);
}


