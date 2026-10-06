/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c966b8; end: 106c966e7; -[SCSendToBlizzardLoggerImpl setContextualServerSessionId:] */

void FUN_106c966b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c966e8; end: 106c96717; -[SCSendToBlizzardLoggerImpl setRankingResultsId:] */

void FUN_106c966e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c96718; end: 106c9682f; -[SCSendToBlizzardLoggerImpl .cxx_destruct] */

void FUN_106c96718(long param_1)

{
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



/* Entry: 106c96830; end: 106c968bf; -[SCSendToGrapheneLoggerImpl initWithLoggerSource:] */

undefined1 * FUN_106c96830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6100;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d1e98;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c968c0; end: 106c968cb; -[SCSendToGrapheneLoggerImpl sessionDidStart] */

void FUN_106c968c0(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11096e528,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106c968cc; end: 106c975eb; -[SCSendToGrapheneLoggerImpl sessionDidEndWithLoggerDataModel:] */

void FUN_106c968cc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  undefined **ppuVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uStack_690;
  long lStack_688;
  long *plStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  long lStack_648;
  long *plStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  long lStack_608;
  long *plStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  long lStack_5c8;
  long *plStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  long lStack_588;
  long *plStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  long lStack_508;
  long *plStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c8;
  long *plStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c15cca0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if ((int)uVar2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df6498;
  }
  _objc_retain();
  uVar2 = param_3;
  func_0x00010c1598e0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010c1594e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar19);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4b8 = 0;
  plStack_4c0 = (long *)0x0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    lVar25 = *plStack_4c0;
    do {
      uVar19 = 0;
      do {
        if (*plStack_4c0 != lVar25) {
          _objc_enumerationMutation(uVar3);
        }
        lVar24 = *(long *)(lStack_4c8 + uVar19 * 8);
        func_0x00010c247520();
        _objc_retainAutoreleasedReturnValue();
        if (lVar24 != 0) {
          puVar5 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar5 == (undefined *)0x0) {
            puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
            _objc_release(puVar5);
          }
          puVar5 = puVar4;
          func_0x00010c0e00e0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar5);
        }
        _objc_release(lVar24);
        uVar19 = uVar19 + 1;
      } while (uVar2 != uVar19);
      uVar2 = uVar3;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
  }
  _objc_release(uVar3);
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  lStack_508 = 0;
  uStack_510 = 0;
  uStack_4f8 = 0;
  plStack_500 = (long *)0x0;
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar25 = *plStack_500;
    do {
      puVar20 = (undefined *)0x0;
      do {
        if (*plStack_500 != lVar25) {
          _objc_enumerationMutation(puVar4);
        }
        uVar23 = *(undefined8 *)(lStack_508 + (long)puVar20 * 8);
        puVar6 = puVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bf529e0();
        _objc_release(puVar6);
        if (0 < (long)puVar7) {
          uVar28 = *(undefined8 *)(param_1 + 0x10);
          uVar2 = param_3;
          func_0x00010bf0e960();
          _objc_retainAutoreleasedReturnValue();
          uVar19 = uVar2;
          func_0x00010c243400();
          FUN_106c97fd0();
          func_0x0001008cc2b4();
          _objc_retainAutoreleasedReturnValue();
          FUN_106c98f50(uVar28,ppuVar1,uVar23,uVar19,puVar7);
          _objc_release(uVar19);
          _objc_release(uVar2);
        }
        puVar20 = puVar20 + 1;
      } while (puVar5 != puVar20);
      puVar5 = puVar4;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  lStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  plStack_540 = (long *)0x0;
  uVar2 = param_3;
  func_0x00010c1566c0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010bf52a60();
  if (uVar19 != 0) {
    lVar25 = *plStack_540;
    do {
      uVar26 = 0;
      do {
        if (*plStack_540 != lVar25) {
          _objc_enumerationMutation(uVar2);
        }
        uVar23 = *(undefined8 *)(lStack_548 + uVar26 * 8);
        uVar8 = param_3;
        func_0x00010c1566c0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bf529e0();
        _objc_release(uVar9);
        _objc_release(uVar8);
        if (0 < (long)uVar10) {
          FUN_106c98ddc(*(undefined8 *)(param_1 + 0x10),uVar23,uVar10);
          uVar28 = *(undefined8 *)(param_1 + 8);
          func_0x00010c08a060(uVar28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0();
          _objc_release(uVar28);
          if ((int)uVar23 != 0) {
            uVar8 = param_3;
            func_0x00010bf0e960(param_3);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010c243400();
            FUN_106c97fd0();
            func_0x0001008cc2b4();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar8);
            uStack_568 = 0;
            uStack_570 = 0;
            uStack_558 = 0;
            uStack_560 = 0;
            lStack_588 = 0;
            uStack_590 = 0;
            uStack_578 = 0;
            plStack_580 = (long *)0x0;
            uVar8 = param_3;
            func_0x00010c08a040();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar8;
            func_0x00010bf52a60();
            if (uVar10 == 0) {
              lVar24 = 0;
            }
            else {
              lVar24 = 0;
              lVar21 = *plStack_580;
              do {
                uVar22 = 0;
                do {
                  if (*plStack_580 != lVar21) {
                    _objc_enumerationMutation(uVar8);
                  }
                  uVar23 = *(undefined8 *)(lStack_588 + uVar22 * 8);
                  uVar11 = param_3;
                  func_0x00010c08a040(param_3);
                  _objc_retainAutoreleasedReturnValue();
                  uVar12 = uVar11;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar13 = uVar12;
                  func_0x00010c067fc0();
                  _objc_release(uVar12);
                  _objc_release(uVar11);
                  lVar24 = uVar13 + lVar24;
                  FUN_106c9a1a4(*(undefined8 *)(param_1 + 0x10),uVar23,uVar9,uVar13);
                  uVar22 = uVar22 + 1;
                } while (uVar10 != uVar22);
                uVar10 = uVar8;
                func_0x00010bf52a60();
              } while (uVar10 != 0);
            }
            _objc_release(uVar8);
            FUN_106c9a1a4(*(undefined8 *)(param_1 + 0x10),
                          &PTR____CFConstantStringClassReference_110dbfff8,uVar9,lVar24);
            _objc_release(uVar9);
          }
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 != uVar19);
      uVar19 = uVar2;
      func_0x00010bf52a60();
    } while (uVar19 != 0);
  }
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c2921c0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010c067fc0();
  _objc_release(uVar2);
  if (0 < (long)uVar19) {
    uVar23 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = param_3;
    func_0x00010c2921c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar2;
    func_0x00010c067fc0();
    FUN_106c98ddc(uVar23,&PTR____CFConstantStringClassReference_110f12d98,uVar19);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010bf4f880();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010c067fc0();
  _objc_release(uVar2);
  if (0 < (long)uVar19) {
    uVar23 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = param_3;
    func_0x00010bf4f880(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar2;
    func_0x00010c067fc0();
    FUN_106c98ddc(uVar23,&PTR____CFConstantStringClassReference_110f12db8,uVar19);
    _objc_release(uVar2);
  }
  dVar30 = 0.0;
  uStack_5a8 = 0;
  uStack_5b0 = 0;
  uStack_598 = 0;
  uStack_5a0 = 0;
  lStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  plStack_5c0 = (long *)0x0;
  uVar2 = param_3;
  func_0x00010c1567a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010bf52a60();
  if (uVar19 != 0) {
    lVar25 = *plStack_5c0;
    do {
      uVar26 = 0;
      do {
        if (*plStack_5c0 != lVar25) {
          _objc_enumerationMutation(uVar2);
        }
        uVar23 = *(undefined8 *)(lStack_5c8 + uVar26 * 8);
        uVar8 = param_3;
        func_0x00010c1567a0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bf529e0();
        _objc_release(uVar9);
        _objc_release(uVar8);
        if (0 < (long)uVar10) {
          FUN_106c99210(*(undefined8 *)(param_1 + 0x10),uVar23,uVar10);
        }
        uVar26 = uVar26 + 1;
      } while (uVar19 != uVar26);
      uVar19 = uVar2;
      func_0x00010bf52a60();
    } while (uVar19 != 0);
  }
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf9a3a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar26 = param_3;
  dVar31 = dVar30;
  func_0x00010bf9a3a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar26;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar8);
  _objc_release(uVar26);
  _objc_release(uVar19);
  _objc_release(uVar2);
  FUN_106c99384(*(undefined8 *)(param_1 + 0x10),ppuVar1,(long)((dVar30 - dVar31) * 1000.0));
  uVar2 = param_3;
  func_0x00010c24a0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (uVar2 != 0) {
    uVar23 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = param_3;
    func_0x00010c24a0a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24a0e0();
    func_0x00010c0df760(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    FUN_106c99728(uVar23,puVar20,1);
    _objc_release(puVar20);
    _objc_release(puVar5);
    _objc_release(uVar2);
  }
  uVar23 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = param_3;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010c0cba00();
  if (uVar19 < 0x26) {
    ppuVar27 = (undefined **)(&PTR_PTR_11096e190)[uVar19];
  }
  else {
    ppuVar27 = &PTR____CFConstantStringClassReference_110dd2518;
  }
  uVar19 = param_3;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar19;
  func_0x00010c243400();
  FUN_106c97fd0();
  func_0x0001008cc2b4();
  _objc_retainAutoreleasedReturnValue();
  FUN_106c9989c(uVar23,ppuVar27,ppuVar1,uVar26,1);
  _objc_release(uVar26);
  _objc_release(uVar19);
  _objc_release(uVar2);
  func_0x00010be55180(param_1);
  dVar30 = 0.0;
  uStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5d8 = 0;
  uStack_5e0 = 0;
  lStack_608 = 0;
  uStack_610 = 0;
  uStack_5f8 = 0;
  plStack_600 = (long *)0x0;
  uVar2 = param_3;
  func_0x00010c156820();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar19;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    lVar25 = *plStack_600;
    do {
      uVar26 = 0;
      do {
        if (*plStack_600 != lVar25) {
          _objc_enumerationMutation(uVar19);
        }
        uVar23 = *(undefined8 *)(lStack_608 + uVar26 * 8);
        uVar8 = param_3;
        func_0x00010c156820();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c0b4ca0();
        _objc_release(uVar9);
        _objc_release(uVar8);
        if (0 < (long)uVar10) {
          FUN_106c99bd4(*(undefined8 *)(param_1 + 0x10),uVar23,uVar10);
        }
        uVar26 = uVar26 + 1;
      } while (uVar2 != uVar26);
      uVar2 = uVar19;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
  }
  _objc_release(uVar19);
  uVar2 = param_3;
  func_0x00010bf9a3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar31 = (double)NEON_ucvtf((long)(dVar30 * 1000.0));
  _objc_release(uVar19);
  _objc_release(uVar2);
  dVar30 = 0.0;
  uStack_628 = 0;
  uStack_630 = 0;
  uStack_618 = 0;
  uStack_620 = 0;
  lStack_648 = 0;
  uStack_650 = 0;
  uStack_638 = 0;
  plStack_640 = (long *)0x0;
  uVar2 = param_3;
  func_0x00010c156740();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010bf52a60();
  if (uVar19 != 0) {
    lVar25 = *plStack_640;
    do {
      uVar26 = 0;
      do {
        if (*plStack_640 != lVar25) {
          _objc_enumerationMutation(uVar2);
        }
        uVar28 = *(undefined8 *)(lStack_648 + uVar26 * 8);
        uVar8 = param_3;
        func_0x00010c156740();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        dVar30 = (double)(long)(dVar30 * 1000.0);
        dVar32 = (double)NEON_ucvtf(dVar30);
        _objc_release(uVar9);
        _objc_release(uVar8);
        uVar23 = *(undefined8 *)(param_1 + 0x10);
        if (dVar31 <= dVar32) {
          dVar30 = dVar32 - dVar31;
          lVar24 = (long)dVar30;
        }
        else {
          FUN_106c9a030(uVar23,uVar28,1);
          uVar23 = *(undefined8 *)(param_1 + 0x10);
          lVar24 = 0;
        }
        FUN_106c99d48(uVar23,uVar28,lVar24);
        uVar26 = uVar26 + 1;
      } while (uVar19 != uVar26);
      uVar19 = uVar2;
      func_0x00010bf52a60();
    } while (uVar19 != 0);
  }
  _objc_release(uVar2);
  dVar30 = 0.0;
  uStack_668 = 0;
  uStack_670 = 0;
  uStack_658 = 0;
  uStack_660 = 0;
  lStack_688 = 0;
  uStack_690 = 0;
  uStack_678 = 0;
  plStack_680 = (long *)0x0;
  uVar2 = param_3;
  func_0x00010c156720();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = &uStack_690;
  uVar19 = uVar2;
  func_0x00010bf52a60();
  if (uVar19 != 0) {
    lVar25 = *plStack_680;
    do {
      uVar26 = 0;
      do {
        if (*plStack_680 != lVar25) {
          _objc_enumerationMutation(uVar2);
        }
        uVar23 = *(undefined8 *)(lStack_688 + uVar26 * 8);
        uVar8 = param_3;
        func_0x00010c156720();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        dVar32 = (double)NEON_ucvtf((long)(dVar30 * 1000.0));
        _objc_release(uVar9);
        _objc_release(uVar8);
        dVar30 = dVar32 - dVar31;
        lVar24 = 0;
        if (dVar31 <= dVar32) {
          lVar24 = (long)dVar30;
        }
        FUN_106c99ebc(*(undefined8 *)(param_1 + 0x10),uVar23,lVar24);
        uVar26 = uVar26 + 1;
      } while (uVar19 != uVar26);
      puVar18 = &uStack_690;
      uVar19 = uVar2;
      func_0x00010bf52a60();
    } while (uVar19 != 0);
  }
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar18);
  puVar14 = puVar18;
  func_0x00010bf9a3a0(puVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(puVar15);
  _objc_release(puVar14);
  puVar14 = puVar18;
  func_0x00010bf9a3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010bf52a60();
  lVar25 = lRam0000000000000000;
  if (puVar15 != (undefined8 *)0x0) {
    dVar30 = (double)(long)(dVar30 * 1000.0);
    dVar31 = (double)NEON_ucvtf(dVar30);
    do {
      puVar29 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar25) {
          _objc_enumerationMutation(puVar14);
        }
        uVar23 = *(undefined8 *)((long)puVar29 * 8);
        puVar16 = puVar18;
        func_0x00010bf9a3a0(puVar18);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar16;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        dVar30 = (double)NEON_ucvtf((long)(dVar30 * 1000.0));
        _objc_release(puVar17);
        _objc_release(puVar16);
        uVar28 = *(undefined8 *)(param_3 + 0x10);
        puVar16 = puVar18;
        func_0x00010bf0e960(puVar18);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar16;
        func_0x00010c243400();
        FUN_106c97fd0();
        func_0x0001008cc2b4();
        _objc_retainAutoreleasedReturnValue();
        dVar30 = dVar30 - dVar31;
        FUN_106c994f8(uVar28,uVar23,puVar17,(long)dVar30);
        _objc_release(puVar17);
        _objc_release(puVar16);
        puVar29 = (undefined8 *)((long)puVar29 + 1);
      } while (puVar15 != puVar29);
      puVar15 = puVar14;
      func_0x00010bf52a60();
    } while (puVar15 != (undefined8 *)0x0);
  }
  _objc_release(puVar14);
  _objc_release(puVar18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar18 + 2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar18 + 1,0);
  return;
}



/* Entry: 106c975ec; end: 106c9780f; -[SCSendToGrapheneLoggerImpl _logLatencyMetricsWithLoggerDataModel:] */

void FUN_106c975ec(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf9a3a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = param_4;
  func_0x00010bf9a3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar3 != 0) {
    dVar10 = (double)(long)(param_1 * 1000.0);
    dVar11 = (double)NEON_ucvtf(dVar10);
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        uVar7 = *(undefined8 *)(lVar9 * 8);
        lVar4 = param_4;
        func_0x00010bf9a3a0(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        dVar10 = (double)NEON_ucvtf((long)(dVar10 * 1000.0));
        _objc_release(lVar5);
        _objc_release(lVar4);
        uVar8 = *(undefined8 *)(param_2 + 0x10);
        lVar4 = param_4;
        func_0x00010bf0e960(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c243400();
        FUN_106c97fd0();
        func_0x0001008cc2b4();
        _objc_retainAutoreleasedReturnValue();
        dVar10 = dVar10 - dVar11;
        FUN_106c994f8(uVar8,uVar7,lVar5,(long)dVar10);
        _objc_release(lVar5);
        _objc_release(lVar4);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + 8,0);
  return;
}



/* Entry: 106c97810; end: 106c97b7f; -[SCSendToGrapheneLoggerImpl .cxx_destruct] */

void FUN_106c97810(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c97b80; end: 106c97c83;  */

undefined ** FUN_106c97b80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110dbbaf8;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110dbb6d8;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e135d8;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110de8358;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e20db8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e20dd8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dbb718;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e20e38;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e20e18;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e20e78;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e20e58;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e20eb8;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e20e98;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e1cd58;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e20ed8;
  _objc_retain();
  func_0x00010bf0a140(puVar1,param_2,&ppuStack_b8,0x10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(ppuVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar4;
  func_0x00010bf4b900();
  _objc_release(param_1);
  _objc_release(ppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar3 = puVar1;
  func_0x00010c0720c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f52cd8);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = puVar1;
    func_0x00010c0720c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f52d18);
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = puVar1;
      func_0x00010c0720c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f52cf8);
      if (((ulong)puVar3 & 1) != 0) goto LAB_106c97cb0;
      puVar3 = puVar1;
      func_0x00010c0720c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f52d38);
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = puVar1;
        func_0x00010c0720c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f52d58);
        if (((ulong)puVar3 & 1) == 0) {
          puVar3 = puVar1;
          func_0x00010c0720c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f52df8);
          if (((ulong)puVar3 & 1) == 0) {
            puVar3 = puVar1;
            func_0x00010c0720c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f52d78);
            if (((ulong)puVar3 & 1) == 0) {
              puVar3 = puVar1;
              func_0x00010c0720c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f52ed8);
              if (((ulong)puVar3 & 1) == 0) {
                puVar3 = puVar1;
                func_0x00010c0720c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f52d98)
                ;
                if (((ulong)puVar3 & 1) == 0) {
                  puVar3 = puVar1;
                  func_0x00010c0720c0(puVar1,param_2,
                                      &PTR____CFConstantStringClassReference_110f52db8);
                  if (((ulong)puVar3 & 1) == 0) {
                    puVar3 = puVar1;
                    func_0x00010c0720c0(puVar1,param_2,
                                        &PTR____CFConstantStringClassReference_110f52dd8);
                    if (((ulong)puVar3 & 1) == 0) {
                      puVar3 = puVar1;
                      func_0x00010c0720c0(puVar1,param_2,
                                          &PTR____CFConstantStringClassReference_110f52f38);
                      if (((ulong)puVar3 & 1) == 0) {
                        puVar3 = puVar1;
                        func_0x00010c0720c0(puVar1,param_2,
                                            &PTR____CFConstantStringClassReference_110f52ef8);
                        if (((ulong)puVar3 & 1) == 0) {
                          puVar3 = puVar1;
                          func_0x00010c0720c0(puVar1,param_2,
                                              &PTR____CFConstantStringClassReference_110f52f18);
                          ppuVar4 = &PTR____CFConstantStringClassReference_110e819d8;
                          if ((int)puVar3 == 0) {
                            ppuVar4 = (undefined **)0x0;
                          }
                          goto LAB_106c97cdc;
                        }
                        ppuVar4 = (undefined **)0x2e;
                      }
                      else {
                        ppuVar4 = (undefined **)0x2f;
                      }
                    }
                    else {
                      ppuVar4 = (undefined **)0x28;
                    }
                  }
                  else {
                    ppuVar4 = (undefined **)0x21;
                  }
                }
                else {
                  ppuVar4 = (undefined **)0xd;
                }
              }
              else {
                ppuVar4 = (undefined **)0x2d;
              }
            }
            else {
              ppuVar4 = (undefined **)0x10;
            }
          }
          else {
            ppuVar4 = (undefined **)0x1d;
          }
        }
        else {
          ppuVar4 = (undefined **)0x6;
        }
      }
      else {
        ppuVar4 = (undefined **)0x3;
      }
    }
    else {
      ppuVar4 = (undefined **)0x12;
    }
  }
  else {
LAB_106c97cb0:
    ppuVar4 = (undefined **)0x4;
  }
  func_0x00010bb1577c(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
LAB_106c97cdc:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return ppuVar4;
}



/* Entry: 106c97c84; end: 106c97fcf;  */

void FUN_106c97c84(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f52cd8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f52d18);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f52cf8);
      if ((uVar1 & 1) != 0) goto LAB_106c97cb0;
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f52d38);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_1;
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f52d58);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_1;
          func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f52df8);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_1;
            func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f52d78);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_1;
              func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f52ed8);
              if ((uVar1 & 1) == 0) {
                uVar1 = param_1;
                func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f52d98
                                   );
                if ((uVar1 & 1) == 0) {
                  uVar1 = param_1;
                  func_0x00010c0720c0(param_1,param_2,
                                      &PTR____CFConstantStringClassReference_110f52db8);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = param_1;
                    func_0x00010c0720c0(param_1,param_2,
                                        &PTR____CFConstantStringClassReference_110f52dd8);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = param_1;
                      func_0x00010c0720c0(param_1,param_2,
                                          &PTR____CFConstantStringClassReference_110f52f38);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = param_1;
                        func_0x00010c0720c0(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110f52ef8);
                        if ((uVar1 & 1) == 0) {
                          uVar1 = param_1;
                          func_0x00010c0720c0(param_1,param_2,
                                              &PTR____CFConstantStringClassReference_110f52f18);
                          ppuVar2 = &PTR____CFConstantStringClassReference_110e819d8;
                          if ((int)uVar1 == 0) {
                            ppuVar2 = (undefined **)0x0;
                          }
                          goto LAB_106c97cdc;
                        }
                        ppuVar2 = (undefined **)0x2e;
                      }
                      else {
                        ppuVar2 = (undefined **)0x2f;
                      }
                    }
                    else {
                      ppuVar2 = (undefined **)0x28;
                    }
                  }
                  else {
                    ppuVar2 = (undefined **)0x21;
                  }
                }
                else {
                  ppuVar2 = (undefined **)0xd;
                }
              }
              else {
                ppuVar2 = (undefined **)0x2d;
              }
            }
            else {
              ppuVar2 = (undefined **)0x10;
            }
          }
          else {
            ppuVar2 = (undefined **)0x1d;
          }
        }
        else {
          ppuVar2 = (undefined **)0x6;
        }
      }
      else {
        ppuVar2 = (undefined **)0x3;
      }
    }
    else {
      ppuVar2 = (undefined **)0x12;
    }
  }
  else {
LAB_106c97cb0:
    ppuVar2 = (undefined **)0x4;
  }
  func_0x00010bb1577c(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
LAB_106c97cdc:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106c97fd0; end: 106c9802f;  */

undefined8 FUN_106c97fd0(ulong param_1)

{
  if (param_1 < 0x30) {
    return *(undefined8 *)(&UNK_10ddecf98 + param_1 * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 106c98030; end: 106c98103;  */

void FUN_106c98030(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  _objc_retain();
  ppuVar3 = &PTR____CFConstantStringClassReference_110f12db8;
  ppuVar1 = param_1;
  func_0x00010bfda7c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f12db8);
  if ((int)ppuVar1 == 0) {
    ppuVar1 = param_1;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110f12db8);
    ppuVar2 = param_1;
    func_0x00010c260c00(param_1,param_2,(long)ppuVar3 + 1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar2;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
  }
  ppuVar3 = ppuVar1;
  func_0x00010c0720c0(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e20eb8);
  if (((ulong)ppuVar3 & 1) == 0) {
    _objc_retain(ppuVar1);
    ppuVar3 = ppuVar1;
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e20d98;
  }
  _objc_release(ppuVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106c98104; end: 106c98207; -[SCSendToLoggingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c98104(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275bb24);
  puVar2 = PTR_PTR_1126d1ea0;
  _objc_alloc(PTR_PTR_1126d1ea0);
  func_0x00010c044440();
  func_0x00010bf9d660(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106c98208; end: 106c98247;  */

void FUN_106c98208(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bea0b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106c98248; end: 106c984ef; -[SCSendToLoggingServicesEntryPoint _sendToLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c98248(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  
  lVar1 = param_1 + _DAT_11275bb28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11275bb2c;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11275bb30;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126d1ea8;
  _objc_alloc(PTR_PTR_1126d1ea8);
  func_0x00010c0380e0();
  lVar1 = param_1 + _DAT_11275bb34;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11275bb38;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010c122ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2312a0();
  _objc_release(lVar7);
  _objc_release(lVar1);
  puVar9 = PTR_PTR_1126d1eb0;
  _objc_alloc(PTR_PTR_1126d1eb0);
  func_0x00010c027760();
  puVar10 = PTR_PTR_1126d1eb8;
  _objc_alloc(PTR_PTR_1126d1eb8);
  func_0x00010c027740();
  lVar1 = param_1 + _DAT_11275bb3c;
  _objc_loadWeakRetained(lVar1);
  lVar7 = lVar1;
  func_0x00010c06a600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar11 = PTR_PTR_1126d1ec0;
  _objc_alloc();
  lVar13 = (long)_DAT_11275bb40;
  lVar1 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar12 = lVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar13 = param_1;
  func_0x00010c27eea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007160(puVar11,param_2,lVar2,puVar9,puVar10,lVar7,puVar6,lVar4,lVar12,lVar13,
                      (char)lVar8);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar4);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106c984f0; end: 106c98573; -[SCSendToLoggingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c984f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275bb24,0);
  _objc_destroyWeak(param_1 + _DAT_11275bb40);
  _objc_destroyWeak(param_1 + _DAT_11275bb3c);
  _objc_destroyWeak(param_1 + _DAT_11275bb34);
  _objc_destroyWeak(param_1 + _DAT_11275bb2c);
  _objc_destroyWeak(param_1 + _DAT_11275bb28);
  _objc_destroyWeak(param_1 + _DAT_11275bb30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275bb38);
  return;
}



/* Entry: 106c98574; end: 106c98bdf;  */

undefined1 * FUN_106c98574(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined *in_x5;
  ulong in_x6;
  ulong in_x7;
  long lVar18;
  undefined **unaff_x21;
  ulong uVar19;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  ulong unaff_x26;
  ulong uVar20;
  ulong uStack_2c0;
  undefined *puStack_2b8;
  ulong uStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_288;
  undefined *puStack_280;
  ulong uStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  long lStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uStack_218 = param_2;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uVar2 = param_1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = &uStack_1b0;
  puVar16 = auStack_f0;
  uVar17 = 0x10;
  uStack_248 = uVar2;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    unaff_x23 = *plStack_1a0;
    lStack_260 = unaff_x23;
    uStack_258 = param_1;
    puStack_238 = puVar1;
    do {
      unaff_x26 = 0;
      uStack_250 = uVar2;
      do {
        if (*plStack_1a0 != unaff_x23) {
          _objc_enumerationMutation(uStack_248);
        }
        uStack_210 = *(undefined8 *)(lStack_1a8 + unaff_x26 * 8);
        uVar3 = param_1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
        _objc_opt_class(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
        uVar20 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar4);
        if ((uVar20 & 1) != 0) {
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          uStack_240 = unaff_x26;
          _objc_retain(uVar3);
          uVar2 = uVar3;
          func_0x00010bf52a60();
          if (uVar2 != 0) {
            lVar18 = *plStack_1e0;
            lStack_208 = lVar18;
            uStack_200 = uVar3;
            do {
              uVar20 = 0;
              uStack_1f8 = uVar2;
              do {
                if (*plStack_1e0 != lVar18) {
                  _objc_enumerationMutation(uVar3);
                }
                uVar19 = *(ulong *)(lStack_1e8 + uVar20 * 8);
                puVar1 = PTR_PTR_1126b52c0;
                _objc_opt_class(PTR_PTR_1126b52c0);
                uVar5 = uVar19;
                _objc_opt_isKindOfClass(uVar19,puVar1);
                if ((uVar5 & 1) != 0) {
                  uVar2 = uVar19;
                  func_0x00010c23cf00();
                  _objc_retainAutoreleasedReturnValue();
                  uVar3 = uVar2;
                  func_0x00010beee2e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar2);
                  puVar1 = PTR_PTR_1126b5658;
                  _objc_opt_class(PTR_PTR_1126b5658);
                  uVar5 = uVar3;
                  _objc_opt_isKindOfClass(uVar3,puVar1);
                  uVar2 = uVar3;
                  if ((uVar5 & 1) == 0) {
                    uVar2 = 0;
                  }
                  _objc_retain(uVar2);
                  _objc_release(uVar3);
                  uVar3 = uVar2;
                  func_0x00010c15a7c0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar2);
                  uVar2 = uVar3;
                  func_0x00010bfb1920();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar3);
                  uVar3 = uVar2;
                  func_0x00010c247520();
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = uVar2;
                  func_0x00010c15a7a0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar6 = uVar5;
                  func_0x00010c122a80();
                  _objc_retainAutoreleasedReturnValue();
                  uVar7 = uVar6;
                  func_0x00010bfe5ec0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar8 = uVar7;
                  func_0x00010c122b80();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar7);
                  _objc_release(uVar6);
                  _objc_release(uVar5);
                  if (uVar3 != 0 && uVar8 != 0) {
                    uVar5 = uVar19;
                    func_0x00010bfecc60();
                    _objc_retainAutoreleasedReturnValue();
                    uVar6 = uVar5;
                    func_0x00010c15a7a0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar7 = uVar6;
                    func_0x00010c122a80();
                    _objc_retainAutoreleasedReturnValue();
                    uVar9 = uVar7;
                    func_0x00010bfe5ec0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar10 = uVar9;
                    func_0x00010c15ab60();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar9);
                    _objc_release(uVar7);
                    _objc_release(uVar6);
                    _objc_release(uVar5);
                    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    func_0x00010bfecc60(uVar19);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c142240();
                    func_0x00010c0df780(puVar1);
                    _objc_retainAutoreleasedReturnValue();
                    puVar4 = puVar1;
                    func_0x00010c25d700();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar1);
                    _objc_release(uVar19);
                    uVar5 = uStack_218;
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    if (uVar5 != 0) {
                      puVar1 = PTR_PTR_1126d1ec8;
                      _objc_opt_class(PTR_PTR_1126d1ec8);
                      uVar19 = uVar5;
                      _objc_opt_isKindOfClass(uVar5,puVar1);
                      if ((uVar19 & 1) != 0) {
                        uVar19 = uVar5;
                        func_0x00010bf9e840();
                        _objc_retainAutoreleasedReturnValue();
                        puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                        _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                        uVar6 = uVar19;
                        _objc_opt_isKindOfClass(uVar19,puVar1);
                        _objc_release(uVar19);
                        if ((uVar6 & 1) != 0) {
                          uVar19 = uVar5;
                          func_0x00010bf9e840();
                          _objc_retainAutoreleasedReturnValue();
                          uVar6 = uVar19;
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(uVar19);
                          if (uVar6 != 0) {
                            puVar1 = PTR_PTR_1126d1ed0;
                            _objc_opt_class(PTR_PTR_1126d1ed0);
                            uVar19 = uVar6;
                            _objc_opt_isKindOfClass(uVar6,puVar1);
                            if ((uVar19 & 1) != 0) {
                              uVar19 = uVar6;
                              func_0x00010bfecf20();
                              _objc_retainAutoreleasedReturnValue();
                              uVar7 = uVar19;
                              func_0x00010c1554e0();
                              puStack_228 = (undefined *)uVar7;
                              _objc_release(uVar19);
                              uVar19 = uVar6;
                              func_0x00010c13cd60();
                              puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                              uVar7 = uVar6;
                              puStack_230 = (undefined *)uVar19;
                              func_0x00010bfecf20();
                              _objc_retainAutoreleasedReturnValue();
                              puStack_220 = (undefined *)uVar7;
                              func_0x00010c0840e0();
                              func_0x00010c0df780();
                              _objc_retainAutoreleasedReturnValue();
                              puVar11 = puVar1;
                              func_0x00010c25d700();
                              _objc_retainAutoreleasedReturnValue();
                              _objc_release(puVar1);
                              _objc_release(puStack_220);
                              puVar12 = PTR_PTR_1126d1ed8;
                              _objc_alloc();
                              in_x5 = puStack_230;
                              in_x6 = uVar10;
                              in_x7 = uVar8;
                              puStack_220 = puVar11;
                              func_0x00010c03fde0();
                              puVar1 = puStack_238;
                              puVar11 = puStack_238;
                              puStack_228 = puVar12;
                              func_0x00010c0e00e0();
                              _objc_retainAutoreleasedReturnValue();
                              puStack_230 = puVar11;
                              if (puVar11 == (undefined *)0x0) {
                                puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                                _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                                func_0x00010c1d0640(puVar1);
                                _objc_release(puVar11);
                              }
                              func_0x00010c0e00e0(puVar1);
                              _objc_retainAutoreleasedReturnValue();
                              puVar11 = puStack_228;
                              func_0x00010befa120();
                              _objc_release(puVar1);
                              _objc_release(puStack_230);
                              _objc_release(puVar11);
                              _objc_release(puStack_220);
                            }
                          }
                          _objc_release(uVar6);
                        }
                      }
                    }
                    _objc_release(uVar5);
                    _objc_release(puVar4);
                    _objc_release(uVar10);
                  }
                  _objc_release(uVar8);
                  _objc_release(uVar3);
                  _objc_release(uVar2);
                  lVar18 = lStack_208;
                  uVar2 = uStack_1f8;
                  uVar3 = uStack_200;
                }
                uVar20 = uVar20 + 1;
              } while (uVar2 != uVar20);
              uVar2 = uVar3;
              func_0x00010bf52a60();
            } while (uVar2 != 0);
          }
          _objc_release(uVar3);
          param_1 = uStack_258;
          puVar1 = puStack_238;
          uVar2 = uStack_250;
          unaff_x23 = lStack_260;
          unaff_x26 = uStack_240;
        }
        unaff_x25 = &PTR_PTR_1126b5000;
        unaff_x24 = &PTR_PTR_1126b5000;
        unaff_x21 = &PTR_PTR_1126b7000;
        _objc_release(uVar3);
        unaff_x26 = unaff_x26 + 1;
      } while (unaff_x26 != uVar2);
      puVar15 = &uStack_1b0;
      puVar16 = auStack_f0;
      uVar17 = 0x10;
      uVar2 = uStack_248;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (uVar2 != 0);
  }
  _objc_release(uStack_248);
  _objc_release(uStack_218);
  uVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  puVar13 = &uStack_2c0;
  pcStack_268 = FUN_106c98be0;
  uStack_2b0 = unaff_x26;
  ppuStack_2a8 = unaff_x25;
  ppuStack_2a0 = unaff_x24;
  lStack_298 = unaff_x23;
  uStack_290 = unaff_x22;
  ppuStack_288 = unaff_x21;
  puStack_280 = puVar1;
  uStack_278 = param_1;
  puStack_270 = &stack0xfffffffffffffff0;
  _objc_retain(puVar15);
  _objc_retain(puVar16);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  puStack_2b8 = PTR_PTR_1126f6108;
  uStack_2c0 = uVar2;
  _objc_msgSendSuper2(&uStack_2c0,PTR_s_init_1125d9248);
  if (puVar13 != (ulong *)0x0) {
    _objc_retain(puVar15);
    uVar14 = *(undefined8 *)((long)puVar13 + 8);
    *(undefined8 **)((long)puVar13 + 8) = puVar15;
    _objc_release(uVar14);
    _objc_retain(puVar16);
    uVar14 = *(undefined8 *)((long)puVar13 + 0x10);
    *(undefined1 **)((long)puVar13 + 0x10) = puVar16;
    _objc_release(uVar14);
    *(undefined8 *)((long)puVar13 + 0x18) = uVar17;
    *(undefined **)((long)puVar13 + 0x20) = in_x5;
    _objc_retain(in_x6);
    uVar17 = *(undefined8 *)((long)puVar13 + 0x28);
    *(ulong *)((long)puVar13 + 0x28) = in_x6;
    _objc_release(uVar17);
    _objc_retain(in_x7);
    uVar17 = *(undefined8 *)((long)puVar13 + 0x30);
    *(ulong *)((long)puVar13 + 0x30) = in_x7;
    _objc_release(uVar17);
  }
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(puVar16);
  _objc_release(puVar15);
  return (undefined1 *)puVar13;
}



/* Entry: 106c98be0; end: 106c98cef; -[SCSendToVisibilityExtractedData initWithResultSection:resultRankingID:resultSectionIndex:resultShowingReason:resultType:resultIdentifier:] */

undefined1 *
FUN_106c98be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f6108;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
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
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c98cf0; end: 106c98cf7; -[SCSendToVisibilityExtractedData resultSection] */

undefined8 FUN_106c98cf0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106c98cf8; end: 106c98cff; -[SCSendToVisibilityExtractedData resultRankingID] */

undefined8 FUN_106c98cf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106c98d00; end: 106c98d07; -[SCSendToVisibilityExtractedData resultSectionIndex] */

undefined8 FUN_106c98d00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c98d08; end: 106c98d0f; -[SCSendToVisibilityExtractedData resultShowingReason] */

undefined8 FUN_106c98d08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106c98d10; end: 106c98d17; -[SCSendToVisibilityExtractedData resultType] */

undefined8 FUN_106c98d10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106c98d18; end: 106c98d1f; -[SCSendToVisibilityExtractedData resultIdentifier] */

undefined8 FUN_106c98d18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106c98d20; end: 106c98d67; -[SCSendToVisibilityExtractedData .cxx_destruct] */

void FUN_106c98d20(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c98d68; end: 106c98ddb; -[SCGrapheneSendToMatchaMetric2 init] */

undefined1 * FUN_106c98d68(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6110;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106c98ddc; end: 106c98f4f;  */

/* WARNING: Removing unreachable block (ram,0x000106c991d8) */
/* WARNING: Removing unreachable block (ram,0x000106c99b24) */

void FUN_106c98ddc(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *unaff_x24;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 *puStack_448;
  undefined8 *puStack_440;
  undefined *puStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined8 auStack_400 [3];
  undefined1 auStack_3e8 [24];
  undefined8 auStack_3d0 [2];
  char cStack_3b9;
  long lStack_3b8;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined *puStack_308;
  undefined8 *puStack_300;
  undefined *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined *puStack_270;
  long *plStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  long *plStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [3];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc1c5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11096e2f8;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar4 = &uStack_140;
  pcStack_88 = FUN_106c98f50;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar3 = puVar7;
  puVar11 = param_4;
  puVar12 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  _objc_retain(param_4);
  if (puVar2 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3cc1c5;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_120,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_108,puVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_f0,puVar3);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_d8,3);
    puVar8 = &UNK_11096e348;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x00010007e5dc(&puStack_128);
    lVar14 = 0;
    puVar3 = puVar4;
    puVar11 = param_5;
    do {
      if ((&cStack_d9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_140;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(puVar7);
  puVar4 = (undefined8 *)puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar15 = auStack_120;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar15);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar5 = (undefined *)puVar4;
  __Unwind_Resume();
  puVar10 = &uStack_1c0;
  pcStack_148 = FUN_106c99210;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar8;
  puVar9 = puVar3;
  puStack_180 = unaff_x24;
  puStack_178 = puVar15;
  puStack_170 = (undefined *)puVar4;
  puStack_168 = param_4;
  puStack_160 = puVar7;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_90;
  _objc_retain(puVar8);
  plVar13 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc1c5;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    puVar15 = auStack_1a0;
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar2 = &UNK_11096e398;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    puVar9 = puVar10;
    puVar11 = puVar3;
    puVar4 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar9 = puVar10;
      puVar11 = puVar3;
      puVar4 = &uStack_1c0;
    }
  }
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar3 = &uStack_240;
  pcStack_1c8 = FUN_106c99384;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puVar7 = puVar9;
  puStack_200 = unaff_x24;
  puStack_1f8 = puVar15;
  puStack_1f0 = (undefined *)puVar4;
  plStack_1e8 = plVar13;
  puStack_1e0 = puVar1;
  puStack_1d8 = puVar8;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(puVar2);
  plVar13 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc1c5;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    puVar15 = auStack_220;
    func_0x00010002b838(auStack_220,puVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_208,1);
    puVar5 = &UNK_11096e3e8;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    puVar7 = puVar3;
    puVar11 = puVar9;
    puVar4 = &uStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar7 = puVar3;
      puVar11 = puVar9;
      puVar4 = &uStack_240;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_208) {
    ___stack_chk_fail();
    _objc_release(puVar2);
    _objc_release(puVar2);
    puVar6 = puVar1;
    __Unwind_Resume();
    pcStack_248 = FUN_106c994f8;
    lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar5;
    puVar3 = puVar7;
    puVar9 = puVar11;
    puStack_280 = unaff_x24;
    puStack_278 = puVar15;
    puStack_270 = (undefined *)puVar4;
    plStack_268 = plVar13;
    puStack_260 = puVar1;
    puStack_258 = puVar2;
    pppuStack_250 = &pppuStack_1d0;
    _objc_retain(puVar5);
    _objc_retain(puVar7);
    puVar4 = (undefined8 *)0x0;
    if (puVar6 != (undefined *)0x0) {
      plVar13 = *(long **)(puVar6 + 8);
      _objc_retain(puVar5);
      if (puVar5 == (undefined *)0x0) {
        puVar1 = &UNK_10f3cc1c5;
      }
      else {
        puVar1 = puVar5;
        _objc_retainAutorelease(puVar5);
        func_0x00010bdc3520();
      }
      _objc_release(puVar5);
      unaff_x24 = auStack_2b8;
      func_0x00010002b838(auStack_2b8,puVar1);
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3cc1c5;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar3 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_2a0,puVar3);
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      func_0x00010007e1e8(&uStack_2d8,auStack_2b8,&lStack_288,2);
      puVar8 = &UNK_11096e438;
      puVar15 = &uStack_2d8;
      puVar3 = &uStack_2d8;
      (**(code **)(*plVar13 + 0x18))(plVar13);
      puStack_2c0 = puVar15;
      func_0x00010007e5dc(&puStack_2c0);
      lVar14 = 0;
      puVar4 = auStack_2b8;
      puVar9 = puVar11;
      do {
        if ((&cStack_289)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(puVar7);
    puVar1 = puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar7);
    if (cStack_2a1 < '\0') {
      __ZdlPv(auStack_2b8[0]);
    }
    _objc_release(puVar7);
    _objc_release(puVar5);
    puVar6 = puVar1;
    __Unwind_Resume();
    puVar10 = &uStack_360;
    pcStack_2e8 = FUN_106c99728;
    lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = puVar8;
    puVar11 = puVar3;
    puStack_320 = unaff_x24;
    puStack_318 = puVar15;
    puStack_310 = puVar4;
    puStack_308 = puVar1;
    puStack_300 = puVar7;
    puStack_2f8 = puVar5;
    pppuStack_2f0 = &pppuStack_250;
    _objc_retain(puVar8);
    if (puVar6 != (undefined *)0x0) {
      plVar13 = *(long **)(puVar6 + 8);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar1 = &UNK_10f3cc1c5;
      }
      else {
        puVar1 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_340,puVar1);
      uStack_360 = 0;
      uStack_358 = 0;
      uStack_350 = 0;
      func_0x00010007e1e8(&uStack_360,auStack_340,&lStack_328,1);
      puVar2 = &UNK_11096e488;
      (**(code **)(*plVar13 + 0x18))(plVar13);
      puStack_348 = (undefined1 *)&uStack_360;
      func_0x00010007e5dc(&puStack_348);
      puVar11 = puVar10;
      puVar9 = puVar3;
      if (cStack_329 < '\0') {
        __ZdlPv(auStack_340[0]);
        puVar11 = puVar10;
        puVar9 = puVar3;
      }
    }
    puVar1 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar8);
    _objc_release(puVar8);
    __Unwind_Resume();
    pcStack_368 = FUN_106c9989c;
    lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar2;
    pppuStack_370 = &pppuStack_2f0;
    _objc_retain(puVar2);
    _objc_retain(puVar11);
    _objc_retain(puVar9);
    if (puVar1 != (undefined *)0x0) {
      plVar13 = *(long **)(puVar1 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar1 = &UNK_10f3cc1c5;
      }
      else {
        puVar1 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_400,puVar1);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f3cc1c5;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar7 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_3e8,puVar7);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f3cc1c5;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar7 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_3d0,puVar7);
      uStack_420 = 0;
      uStack_418 = 0;
      uStack_410 = 0;
      func_0x00010007e1e8(&uStack_420,auStack_400,&lStack_3b8,3);
      puVar8 = &UNK_11096e4d8;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11096e4d8,&uStack_420,puVar12);
      puStack_408 = (undefined1 *)&uStack_420;
      func_0x00010007e5dc(&puStack_408);
      lVar14 = 0;
      do {
        if ((&cStack_3b9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3d0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        unaff_x24 = &uStack_420;
      } while (lVar14 != -0x48);
    }
    _objc_release(puVar9);
    _objc_release(puVar11);
    puVar1 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3b8) {
      ___stack_chk_fail();
      _objc_release(puVar9);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != auStack_400);
      _objc_release(puVar9);
      _objc_release(puVar11);
      _objc_release(puVar2);
      __Unwind_Resume();
      puStack_448 = (undefined1 *)&uStack_460;
      pcStack_428 = FUN_106c99b5c;
      if (puVar1 != (undefined *)0x0) {
        uStack_460 = 0;
        uStack_458 = 0;
        uStack_450 = 0;
        puStack_440 = puVar11;
        puStack_438 = puVar2;
        pppuStack_430 = &pppuStack_370;
        (**(code **)(**(long **)(puVar1 + 8) + 0x18))
                  (*(long **)(puVar1 + 8),&UNK_11096e528,&uStack_460,puVar8);
        func_0x00010007e5dc(&puStack_448);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 106c98f50; end: 106c9920f;  */

/* WARNING: Removing unreachable block (ram,0x000106c991d8) */
/* WARNING: Removing unreachable block (ram,0x000106c99b24) */

void FUN_106c98f50(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *unaff_x24;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [3];
  undefined1 auStack_368 [24];
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  long *plStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  long *plStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar3 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar10 = param_4;
  puVar12 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc1c5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar2);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_11096e348;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar13 = 0;
    puVar2 = puVar3;
    puVar10 = param_5;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = (undefined8 *)param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar15 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar15);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = (undefined *)puVar3;
  __Unwind_Resume();
  puVar9 = &uStack_140;
  pcStack_c8 = FUN_106c99210;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar8 = puVar2;
  puStack_100 = unaff_x24;
  puStack_f8 = puVar15;
  puStack_f0 = (undefined *)puVar3;
  puStack_e8 = param_4;
  puStack_e0 = param_3;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar14 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar5 = &UNK_10f3cc1c5;
    }
    else {
      puVar5 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    puVar15 = auStack_120;
    func_0x00010002b838(auStack_120,puVar5);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_108,1);
    puVar5 = &UNK_11096e398;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x00010007e5dc(&puStack_128);
    puVar8 = puVar9;
    puVar10 = puVar2;
    puVar3 = &uStack_140;
    if (cStack_109 < '\0') {
      __ZdlPv(auStack_120[0]);
      puVar8 = puVar9;
      puVar10 = puVar2;
      puVar3 = &uStack_140;
    }
  }
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar6 = puVar4;
  __Unwind_Resume();
  puVar9 = &uStack_1c0;
  pcStack_148 = FUN_106c99384;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar5;
  puVar2 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = puVar15;
  puStack_170 = (undefined *)puVar3;
  plStack_168 = plVar14;
  puStack_160 = puVar4;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_d0;
  _objc_retain(puVar5);
  plVar14 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc1c5;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    puVar15 = auStack_1a0;
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar7 = &UNK_11096e3e8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    puVar2 = puVar9;
    puVar10 = puVar8;
    puVar3 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar2 = puVar9;
      puVar10 = puVar8;
      puVar3 = &uStack_1c0;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_1c8 = FUN_106c994f8;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar8 = puVar2;
  puVar9 = puVar10;
  puStack_200 = unaff_x24;
  puStack_1f8 = puVar15;
  puStack_1f0 = (undefined *)puVar3;
  plStack_1e8 = plVar14;
  puStack_1e0 = puVar1;
  puStack_1d8 = puVar5;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(puVar7);
  _objc_retain(puVar2);
  puVar3 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc1c5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_238;
    func_0x00010002b838(auStack_238,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar3 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_220,puVar3);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010007e1e8(&uStack_258,auStack_238,&lStack_208,2);
    puVar4 = &UNK_11096e438;
    puVar15 = &uStack_258;
    puVar8 = &uStack_258;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_240 = puVar15;
    func_0x00010007e5dc(&puStack_240);
    lVar13 = 0;
    puVar3 = auStack_238;
    puVar9 = puVar10;
    do {
      if ((&cStack_209)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar2);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar11 = &uStack_2e0;
  pcStack_268 = FUN_106c99728;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  puVar10 = puVar8;
  puStack_2a0 = unaff_x24;
  puStack_298 = puVar15;
  puStack_290 = puVar3;
  puStack_288 = puVar1;
  puStack_280 = puVar2;
  puStack_278 = puVar7;
  pppuStack_270 = &pppuStack_1d0;
  _objc_retain(puVar4);
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc1c5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_2c0,puVar1);
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    func_0x00010007e1e8(&uStack_2e0,auStack_2c0,&lStack_2a8,1);
    puVar5 = &UNK_11096e488;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_2c8 = (undefined1 *)&uStack_2e0;
    func_0x00010007e5dc(&puStack_2c8);
    puVar10 = puVar11;
    puVar9 = puVar8;
    if (cStack_2a9 < '\0') {
      __ZdlPv(auStack_2c0[0]);
      puVar10 = puVar11;
      puVar9 = puVar8;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  pcStack_2e8 = FUN_106c9989c;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  pppuStack_2f0 = &pppuStack_270;
  _objc_retain(puVar5);
  _objc_retain(puVar10);
  _objc_retain(puVar9);
  if (puVar1 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar1 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc1c5;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_380,puVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar2 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_368,puVar2);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_350,puVar2);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x00010007e1e8(&uStack_3a0,auStack_380,&lStack_338,3);
    puVar4 = &UNK_11096e4d8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11096e4d8,&uStack_3a0,puVar12);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x00010007e5dc(&puStack_388);
    lVar13 = 0;
    do {
      if ((&cStack_339)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_350 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &uStack_3a0;
    } while (lVar13 != -0x48);
  }
  _objc_release(puVar9);
  _objc_release(puVar10);
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_338) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != auStack_380);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(puVar5);
    __Unwind_Resume();
    puStack_3c8 = (undefined1 *)&uStack_3e0;
    pcStack_3a8 = FUN_106c99b5c;
    if (puVar1 != (undefined *)0x0) {
      uStack_3e0 = 0;
      uStack_3d8 = 0;
      uStack_3d0 = 0;
      puStack_3c0 = puVar10;
      puStack_3b8 = puVar5;
      pppuStack_3b0 = &pppuStack_2f0;
      (**(code **)(**(long **)(puVar1 + 8) + 0x18))
                (*(long **)(puVar1 + 8),&UNK_11096e528,&uStack_3e0,puVar4);
      func_0x00010007e5dc(&puStack_3c8);
    }
    return;
  }
  return;
}



/* Entry: 106c99210; end: 106c99383;  */

/* WARNING: Removing unreachable block (ram,0x000106c99b24) */

void FUN_106c99210(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 *puStack_300;
  undefined *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [3];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc1c5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11096e398;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = puVar7;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = puVar7;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_106c99384;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar7 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3cc1c5;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_e0;
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar5 = &UNK_11096e3e8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = puVar8;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = puVar8;
      param_4 = puVar3;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_106c994f8;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar5;
  puVar3 = puVar7;
  puVar11 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar5);
  _objc_retain(puVar7);
  puVar8 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc1c5;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_178;
    func_0x00010002b838(auStack_178,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_160,puVar3);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010007e1e8(&uStack_198,auStack_178,&lStack_148,2);
    puVar1 = &UNK_11096e438;
    unaff_x23 = &uStack_198;
    puVar3 = &uStack_198;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_180 = unaff_x23;
    func_0x00010007e5dc(&puStack_180);
    lVar13 = 0;
    puVar8 = auStack_178;
    puVar11 = param_4;
    do {
      if ((&cStack_149)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar7);
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_220;
  pcStack_1a8 = FUN_106c99728;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar9 = puVar3;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar8;
  puStack_1c8 = puVar2;
  puStack_1c0 = puVar7;
  puStack_1b8 = puVar5;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(puVar1);
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3cc1c5;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_200,puVar2);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar6 = &UNK_11096e488;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    puVar9 = puVar10;
    puVar11 = puVar3;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar9 = puVar10;
      puVar11 = puVar3;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
    ___stack_chk_fail();
    _objc_release(puVar1);
    _objc_release(puVar1);
    __Unwind_Resume();
    pcStack_228 = FUN_106c9989c;
    lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = puVar6;
    pppuStack_230 = &pppuStack_1b0;
    _objc_retain(puVar6);
    _objc_retain(puVar9);
    _objc_retain(puVar11);
    if (puVar2 != (undefined *)0x0) {
      plVar12 = *(long **)(puVar2 + 8);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar1 = &UNK_10f3cc1c5;
      }
      else {
        puVar1 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_2c0,puVar1);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3cc1c5;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar3 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_2a8,puVar3);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3cc1c5;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar3 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_290,puVar3);
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      func_0x00010007e1e8(&uStack_2e0,auStack_2c0,&lStack_278,3);
      puVar1 = &UNK_11096e4d8;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11096e4d8,&uStack_2e0,param_5);
      puStack_2c8 = (undefined1 *)&uStack_2e0;
      func_0x00010007e5dc(&puStack_2c8);
      lVar13 = 0;
      do {
        if ((&cStack_279)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
        unaff_x24 = &uStack_2e0;
      } while (lVar13 != -0x48);
    }
    _objc_release(puVar11);
    _objc_release(puVar9);
    puVar2 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
      ___stack_chk_fail();
      _objc_release(puVar11);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != auStack_2c0);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar6);
      __Unwind_Resume();
      puStack_308 = (undefined1 *)&uStack_320;
      pcStack_2e8 = FUN_106c99b5c;
      if (puVar2 != (undefined *)0x0) {
        uStack_320 = 0;
        uStack_318 = 0;
        uStack_310 = 0;
        puStack_300 = puVar9;
        puStack_2f8 = puVar6;
        pppuStack_2f0 = &pppuStack_230;
        (**(code **)(**(long **)(puVar2 + 8) + 0x18))
                  (*(long **)(puVar2 + 8),&UNK_11096e528,&uStack_320,puVar1);
        func_0x00010007e5dc(&puStack_308);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 106c99384; end: 106c994f7;  */

/* WARNING: Removing unreachable block (ram,0x000106c99b24) */

void FUN_106c99384(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined8 auStack_240 [3];
  undefined1 auStack_228 [24];
  undefined8 auStack_210 [2];
  char cStack_1f9;
  long lStack_1f8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc1c5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11096e3e8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_106c994f8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar5;
  puVar10 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar13 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3cc1c5;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = &UNK_11096e438;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar12 = 0;
    puVar13 = auStack_f8;
    puVar10 = param_4;
    do {
      if ((&cStack_c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_1a0;
  pcStack_128 = FUN_106c99728;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar8 = puVar3;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar13;
  puStack_148 = puVar2;
  puStack_140 = puVar5;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar6);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc1c5;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar7 = &UNK_11096e488;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar8 = puVar9;
    puVar10 = puVar3;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar8 = puVar9;
      puVar10 = puVar3;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  __Unwind_Resume();
  pcStack_1a8 = FUN_106c9989c;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_retain(puVar10);
  if (puVar1 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar1 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc1c5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_240,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar5 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_228,puVar5);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar5 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_210,puVar5);
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    func_0x00010007e1e8(&uStack_260,auStack_240,&lStack_1f8,3);
    puVar2 = &UNK_11096e4d8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11096e4d8,&uStack_260,param_5);
    puStack_248 = (undefined1 *)&uStack_260;
    func_0x00010007e5dc(&puStack_248);
    lVar12 = 0;
    do {
      if ((&cStack_1f9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_210 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &uStack_260;
    } while (lVar12 != -0x48);
  }
  _objc_release(puVar10);
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
    ___stack_chk_fail();
    _objc_release(puVar10);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != auStack_240);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    __Unwind_Resume();
    puStack_288 = (undefined1 *)&uStack_2a0;
    pcStack_268 = FUN_106c99b5c;
    if (puVar1 != (undefined *)0x0) {
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_290 = 0;
      puStack_280 = puVar8;
      puStack_278 = puVar7;
      pppuStack_270 = &pppuStack_1b0;
      (**(code **)(**(long **)(puVar1 + 8) + 0x18))
                (*(long **)(puVar1 + 8),&UNK_11096e528,&uStack_2a0,puVar2);
      func_0x00010007e5dc(&puStack_288);
    }
    return;
  }
  return;
}



/* Entry: 106c994f8; end: 106c99727;  */

/* WARNING: Removing unreachable block (ram,0x000106c99b24) */

void FUN_106c994f8(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 auStack_1c0 [3];
  undefined1 auStack_1a8 [24];
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
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
  puVar1 = param_2;
  puVar2 = param_3;
  puVar8 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc1c5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11096e438;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    puVar8 = param_4;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
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
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar7 = &uStack_120;
  pcStack_a8 = FUN_106c99728;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar6 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3cc1c5;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar5 = &UNK_11096e488;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar6 = puVar7;
    puVar8 = puVar2;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar6 = puVar7;
      puVar8 = puVar2;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_128 = FUN_106c9989c;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar5;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _objc_retain(puVar8);
  if (puVar3 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar3 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc1c5;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_1c0,puVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar2 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_1a8,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_190,puVar2);
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    func_0x00010007e1e8(&uStack_1e0,auStack_1c0,&lStack_178,3);
    puVar1 = &UNK_11096e4d8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11096e4d8,&uStack_1e0,param_5);
    puStack_1c8 = (undefined1 *)&uStack_1e0;
    func_0x00010007e5dc(&puStack_1c8);
    lVar9 = 0;
    do {
      if ((&cStack_179)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
      unaff_x24 = &uStack_1e0;
    } while (lVar9 != -0x48);
  }
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar3 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
    ___stack_chk_fail();
    _objc_release(puVar8);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != auStack_1c0);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    __Unwind_Resume();
    puStack_208 = (undefined1 *)&uStack_220;
    pcStack_1e8 = FUN_106c99b5c;
    if (puVar3 != (undefined *)0x0) {
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      puStack_200 = puVar6;
      puStack_1f8 = puVar5;
      pppuStack_1f0 = &ppuStack_130;
      (**(code **)(**(long **)(puVar3 + 8) + 0x18))
                (*(long **)(puVar3 + 8),&UNK_11096e528,&uStack_220,puVar1);
      func_0x00010007e5dc(&puStack_208);
    }
    return;
  }
  return;
}



/* Entry: 106c99728; end: 106c9989b;  */

/* WARNING: Removing unreachable block (ram,0x000106c99b24) */

void FUN_106c99728(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *unaff_x24;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc1c5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11096e488;
    (**(code **)(*plVar6 + 0x18))(plVar6);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined *)puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_2);
    __Unwind_Resume();
    pcStack_88 = FUN_106c9989c;
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar1;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(puVar1);
    _objc_retain(puVar4);
    _objc_retain(param_4);
    if (puVar2 != (undefined *)0x0) {
      plVar6 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f3cc1c5;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_120,puVar2);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f3cc1c5;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar2 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_108,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f3cc1c5;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_f0,puVar2);
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_d8,3);
      puVar3 = &UNK_11096e4d8;
      (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_11096e4d8,&uStack_140,param_5);
      puStack_128 = (undefined1 *)&uStack_140;
      func_0x00010007e5dc(&puStack_128);
      lVar7 = 0;
      do {
        if ((&cStack_d9)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
        unaff_x24 = &uStack_140;
      } while (lVar7 != -0x48);
    }
    _objc_release(param_4);
    _objc_release(puVar4);
    puVar2 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      _objc_release(param_4);
      do {
        unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
      } while (unaff_x24 != (undefined8 *)auStack_120);
      _objc_release(param_4);
      _objc_release(puVar4);
      _objc_release(puVar1);
      __Unwind_Resume();
      puStack_168 = (undefined1 *)&uStack_180;
      pcStack_148 = FUN_106c99b5c;
      if (puVar2 != (undefined *)0x0) {
        uStack_180 = 0;
        uStack_178 = 0;
        uStack_170 = 0;
        puStack_160 = puVar4;
        puStack_158 = puVar1;
        ppuStack_150 = &puStack_90;
        (**(code **)(**(long **)(puVar2 + 8) + 0x18))
                  (*(long **)(puVar2 + 8),&UNK_11096e528,&uStack_180,puVar3);
        func_0x00010007e5dc(&puStack_168);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 106c9989c; end: 106c99b5b;  */

/* WARNING: Removing unreachable block (ram,0x000106c99b24) */

void FUN_106c9989c(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x24;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc1c5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_11096e4d8;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11096e4d8,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar3 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    puStack_e8 = (undefined1 *)&uStack_100;
    pcStack_c8 = FUN_106c99b5c;
    if (puVar2 != (undefined *)0x0) {
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      puStack_e0 = param_3;
      puStack_d8 = param_2;
      puStack_d0 = &stack0xfffffffffffffff0;
      (**(code **)(**(long **)(puVar2 + 8) + 0x18))
                (*(long **)(puVar2 + 8),&UNK_11096e528,&uStack_100,puVar1);
      func_0x00010007e5dc(&puStack_e8);
    }
    return;
  }
  return;
}



/* Entry: 106c99b5c; end: 106c99bd3;  */

void FUN_106c99b5c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11096e528,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106c99bd4; end: 106c99d47;  */

undefined8 *****
FUN_106c99bd4(long param_1,undefined8 *****param_2,undefined8 *****param_3,undefined8 *****param_4,
             long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  undefined8 ****ppppuVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 *****pppppuVar18;
  undefined8 ****ppppuVar19;
  undefined8 *****pppppuVar20;
  undefined *puVar21;
  undefined8 ****ppppuVar22;
  long lVar23;
  long *plVar24;
  undefined8 ****ppppuVar25;
  long lVar26;
  undefined8 ****ppppuVar27;
  undefined8 *****pppppuVar28;
  long lVar29;
  long lStack_700;
  undefined8 uStack_560;
  undefined8 *puStack_558;
  undefined8 uStack_550;
  code *pcStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 ****ppppuStack_530;
  undefined *puStack_528;
  long lStack_320;
  undefined8 ***pppuStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 ***pppuStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 ***pppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pppppuVar4 = (undefined8 *****)&pppuStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar3 = param_2;
  pppppuVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar24 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pppppuVar3 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      pppppuVar3 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pppppuVar3);
    pppuStack_80 = (undefined8 ****)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&pppuStack_80,auStack_60,&lStack_48,1);
    pppppuVar3 = (undefined8 *****)&UNK_11096e578;
    (**(code **)(*plVar24 + 0x18))(plVar24);
    puStack_68 = (undefined1 *)&pppuStack_80;
    func_0x00010007e5dc(&puStack_68);
    pppppuVar5 = pppppuVar4;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pppppuVar5 = pppppuVar4;
      param_4 = param_3;
    }
  }
  pppppuVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pppppuVar20 = (undefined8 *****)&pppuStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar6 = pppppuVar3;
  pppppuVar18 = pppppuVar5;
  _objc_retain(pppppuVar3);
  if (pppppuVar4 != (undefined8 *****)0x0) {
    ppppuVar25 = pppppuVar4[1];
    _objc_retain(pppppuVar3);
    if (pppppuVar3 == (undefined8 *****)0x0) {
      pppppuVar4 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      pppppuVar4 = pppppuVar3;
      _objc_retainAutorelease(pppppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar3);
    func_0x00010002b838(auStack_e0,pppppuVar4);
    pppuStack_100 = (undefined8 ****)0x0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&pppuStack_100,auStack_e0,&lStack_c8,1);
    pppppuVar6 = (undefined8 *****)&UNK_11096e5c8;
    (*(code *)(*ppppuVar25)[3])(ppppuVar25);
    puStack_e8 = (undefined1 *)&pppuStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pppppuVar18 = pppppuVar20;
    param_4 = pppppuVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pppppuVar18 = pppppuVar20;
      param_4 = pppppuVar5;
    }
  }
  pppppuVar5 = pppppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppppuVar5;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar3);
  _objc_release(pppppuVar3);
  __Unwind_Resume();
  pppppuVar20 = (undefined8 *****)&pppuStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar3 = pppppuVar6;
  pppppuVar4 = pppppuVar18;
  _objc_retain(pppppuVar6);
  if (pppppuVar5 != (undefined8 *****)0x0) {
    ppppuVar25 = pppppuVar5[1];
    _objc_retain(pppppuVar6);
    if (pppppuVar6 == (undefined8 *****)0x0) {
      pppppuVar3 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      pppppuVar3 = pppppuVar6;
      _objc_retainAutorelease(pppppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar6);
    func_0x00010002b838(auStack_160,pppppuVar3);
    pppuStack_180 = (undefined8 ****)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&pppuStack_180,auStack_160,&lStack_148,1);
    pppppuVar3 = (undefined8 *****)&UNK_11096e618;
    (*(code *)(*ppppuVar25)[3])(ppppuVar25);
    puStack_168 = (undefined1 *)&pppuStack_180;
    func_0x00010007e5dc(&puStack_168);
    pppppuVar4 = pppppuVar20;
    param_4 = pppppuVar18;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      pppppuVar4 = pppppuVar20;
      param_4 = pppppuVar18;
    }
  }
  pppppuVar5 = pppppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pppppuVar5;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar6);
  _objc_release(pppppuVar6);
  __Unwind_Resume();
  pppppuVar20 = (undefined8 *****)&pppuStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar6 = pppppuVar3;
  pppppuVar18 = pppppuVar4;
  _objc_retain(pppppuVar3);
  if (pppppuVar5 != (undefined8 *****)0x0) {
    ppppuVar25 = pppppuVar5[1];
    _objc_retain(pppppuVar3);
    if (pppppuVar3 == (undefined8 *****)0x0) {
      pppppuVar5 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      pppppuVar5 = pppppuVar3;
      _objc_retainAutorelease(pppppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar3);
    func_0x00010002b838(auStack_1e0,pppppuVar5);
    pppuStack_200 = (undefined8 ****)0x0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&pppuStack_200,auStack_1e0,&lStack_1c8,1);
    pppppuVar6 = (undefined8 *****)&UNK_11096e668;
    (*(code *)(*ppppuVar25)[3])(ppppuVar25);
    puStack_1e8 = (undefined1 *)&pppuStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    pppppuVar18 = pppppuVar20;
    param_4 = pppppuVar4;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      pppppuVar18 = pppppuVar20;
      param_4 = pppppuVar4;
    }
  }
  pppppuVar5 = pppppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return pppppuVar5;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar3);
  _objc_release(pppppuVar3);
  __Unwind_Resume();
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar3 = pppppuVar18;
  pppppuVar4 = param_4;
  _objc_retain(pppppuVar6);
  _objc_retain(pppppuVar18);
  if (pppppuVar5 != (undefined8 *****)0x0) {
    ppppuVar25 = pppppuVar5[1];
    _objc_retain(pppppuVar6);
    if (pppppuVar6 == (undefined8 *****)0x0) {
      pppppuVar3 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      pppppuVar3 = pppppuVar6;
      _objc_retainAutorelease(pppppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar6);
    func_0x00010002b838(auStack_278,pppppuVar3);
    _objc_retain(pppppuVar18);
    if (pppppuVar18 == (undefined8 *****)0x0) {
      pppppuVar3 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(pppppuVar18);
      pppppuVar3 = pppppuVar18;
      func_0x00010bdc3520(pppppuVar18);
    }
    _objc_release(pppppuVar18);
    func_0x00010002b838(auStack_260,pppppuVar3);
    pppuStack_298 = (undefined8 ****)0x0;
    uStack_290 = 0;
    uStack_288 = 0;
    func_0x00010007e1e8(&pppuStack_298,auStack_278,&lStack_248,2);
    pppppuVar3 = (undefined8 *****)&pppuStack_298;
    (*(code *)(*ppppuVar25)[3])(ppppuVar25,&UNK_11096e6b8);
    pppuStack_280 = &pppuStack_298;
    func_0x00010007e5dc(&pppuStack_280);
    lVar26 = 0;
    pppppuVar4 = param_4;
    do {
      if ((&cStack_249)[lVar26] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar26));
      }
      lVar26 = lVar26 + -0x18;
    } while (lVar26 != -0x30);
  }
  _objc_release(pppppuVar18);
  pppppuVar5 = pppppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return pppppuVar5;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar18);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(pppppuVar18);
  _objc_release(pppppuVar6);
  __Unwind_Resume();
  lStack_320 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pppppuVar3);
  _objc_retain(pppppuVar4);
  _objc_retain(param_5);
  puStack_528 = PTR_PTR_1126f6118;
  pppppuVar6 = &ppppuStack_530;
  ppppuStack_530 = pppppuVar5;
  _objc_msgSendSuper2(pppppuVar6,PTR_s_init_1125d9248);
  if (pppppuVar6 != (undefined8 *****)0x0) {
    ppppuVar25 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar7 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar8 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar9 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puStack_558 = &uStack_560;
    uStack_560 = 0;
    uStack_550 = 0x3032000000;
    pcStack_548 = FUN_106c9ac7c;
    uStack_540 = 0x106c9ac8c;
    uStack_538 = 0;
    ppppuVar11 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    lVar26 = param_5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar26 != 0) {
      lStack_700 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_5);
        }
        lVar23 = *(long *)(lStack_700 * 8);
        lVar12 = lVar23;
        func_0x00010c155fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar13 != 0) {
          lVar29 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar12);
            }
            lVar14 = lVar23;
            func_0x00010c155900(lVar23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppppuVar25);
            _objc_release(lVar14);
            lVar14 = lVar23;
            func_0x00010c155b40(lVar23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppppuVar7);
            _objc_release(lVar14);
            func_0x00010befa120(ppppuVar8);
            lVar14 = lVar23;
            func_0x00010c1560e0();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lVar14;
            func_0x00010bfed4a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar14);
            if (lVar15 != 0) {
              _objc_retain(ppppuVar9);
              _objc_retain(ppppuVar11);
              _objc_retain(puVar10);
              func_0x00010c0c01c0(lVar15);
              _objc_release(puVar10);
              _objc_release(ppppuVar11);
              _objc_release(ppppuVar9);
            }
            _objc_release(lVar15);
            lVar29 = lVar29 + 1;
          } while (lVar13 != lVar29);
          lVar13 = lVar12;
          func_0x00010bf52a60();
        }
        _objc_release(lVar12);
        lStack_700 = lStack_700 + 1;
      } while (lStack_700 != lVar26);
      lVar26 = param_5;
      func_0x00010bf52a60();
    }
    _objc_release(param_5);
    ppppuVar16 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar17 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar18 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar19 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar20 = pppppuVar4;
    func_0x00010c106120();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar5 = pppppuVar20;
    func_0x00010bf52a60();
    lVar26 = lRam0000000000000000;
    while (pppppuVar5 != (undefined8 *****)0x0) {
      pppppuVar28 = (undefined8 *****)0x0;
      do {
        if (lRam0000000000000000 != lVar26) {
          _objc_enumerationMutation(pppppuVar20);
        }
        ppppuVar22 = ppppuVar8;
        func_0x00010bf4b900();
        if ((int)ppppuVar22 != 0) {
          func_0x00010befa120(ppppuVar16);
          puVar21 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar21 != (undefined *)0x0) {
            func_0x00010befa120(pppppuVar18);
          }
          _objc_release(puVar21);
        }
        pppppuVar28 = (undefined8 *****)((long)pppppuVar28 + 1);
      } while (pppppuVar5 != pppppuVar28);
      pppppuVar5 = pppppuVar20;
      func_0x00010bf52a60();
    }
    _objc_release(pppppuVar20);
    pppppuVar20 = pppppuVar4;
    func_0x00010c260b40();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar5 = pppppuVar20;
    func_0x00010bf52a60();
    lVar26 = lRam0000000000000000;
    while (pppppuVar5 != (undefined8 *****)0x0) {
      pppppuVar28 = (undefined8 *****)0x0;
      do {
        if (lRam0000000000000000 != lVar26) {
          _objc_enumerationMutation(pppppuVar20);
        }
        ppppuVar22 = ppppuVar8;
        func_0x00010bf4b900();
        if ((int)ppppuVar22 != 0) {
          func_0x00010befa120(ppppuVar17);
          puVar21 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar21 != (undefined *)0x0) {
            func_0x00010befa120(ppppuVar19);
          }
          _objc_release(puVar21);
        }
        pppppuVar28 = (undefined8 *****)((long)pppppuVar28 + 1);
      } while (pppppuVar5 != pppppuVar28);
      pppppuVar5 = pppppuVar20;
      func_0x00010bf52a60();
    }
    _objc_release(pppppuVar20);
    ppppuVar22 = ppppuVar16;
    func_0x00010bf529e0();
    if (ppppuVar22 != (undefined8 ****)0x0) {
      pppppuVar5 = pppppuVar18;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (pppppuVar5 == (undefined8 *****)0x0) {
        pppppuVar20 = pppppuVar3;
        func_0x00010bfb1920(pppppuVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(pppppuVar5);
        pppppuVar20 = pppppuVar5;
      }
      _objc_release(pppppuVar5);
      ppppuVar22 = ppppuVar16;
      func_0x00010bfb1920(ppppuVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppppuVar9);
      _objc_release(ppppuVar22);
      _objc_release(pppppuVar20);
    }
    _objc_retain(pppppuVar4);
    ppppuVar22 = pppppuVar6[1];
    pppppuVar6[1] = pppppuVar4;
    _objc_release(ppppuVar22);
    ppppuVar22 = pppppuVar6[9];
    pppppuVar6[9] = ppppuVar25;
    _objc_retain();
    _objc_release(ppppuVar22);
    ppppuVar22 = pppppuVar6[10];
    pppppuVar6[10] = ppppuVar7;
    _objc_retain();
    _objc_release(ppppuVar22);
    ppppuVar22 = pppppuVar6[2];
    pppppuVar6[2] = ppppuVar8;
    _objc_retain();
    _objc_release(ppppuVar22);
    ppppuVar22 = pppppuVar6[3];
    pppppuVar6[3] = ppppuVar9;
    _objc_retain();
    _objc_release(ppppuVar22);
    ppppuVar27 = (undefined8 ****)puStack_558[5];
    _objc_retain(ppppuVar27);
    ppppuVar22 = pppppuVar6[4];
    pppppuVar6[4] = ppppuVar27;
    _objc_release(ppppuVar22);
    ppppuVar22 = pppppuVar6[5];
    pppppuVar6[5] = ppppuVar11;
    _objc_retain(ppppuVar11);
    _objc_release(ppppuVar22);
    ppppuVar22 = pppppuVar6[6];
    pppppuVar6[6] = ppppuVar16;
    _objc_retain(ppppuVar16);
    _objc_release(ppppuVar22);
    ppppuVar22 = pppppuVar6[7];
    pppppuVar6[7] = ppppuVar17;
    _objc_retain(ppppuVar17);
    _objc_release(ppppuVar22);
    ppppuVar22 = pppppuVar6[0xb];
    pppppuVar6[0xb] = pppppuVar18;
    _objc_retain(pppppuVar18);
    _objc_release(ppppuVar22);
    ppppuVar22 = pppppuVar6[0xc];
    pppppuVar6[0xc] = ppppuVar19;
    _objc_release(ppppuVar22);
    _objc_release(pppppuVar18);
    _objc_release(ppppuVar17);
    _objc_release(ppppuVar16);
    _objc_release(ppppuVar11);
    __Block_object_dispose(&uStack_560,8);
    _objc_release(uStack_538);
    _objc_release(ppppuVar9);
    _objc_release(ppppuVar8);
    _objc_release(ppppuVar7);
    _objc_release(ppppuVar25);
    _objc_release(puVar10);
  }
  _objc_release(param_5);
  _objc_release(pppppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_320) {
    return pppppuVar6;
  }
  ___stack_chk_fail();
  lVar26 = 8;
  __Block_object_dispose(&uStack_560);
  __Unwind_Resume();
  pppppuVar3[5] = *(undefined8 *****)(lVar26 + 0x28);
  *(undefined8 *)(lVar26 + 0x28) = 0;
  return pppppuVar3;
}



/* Entry: 106c99d48; end: 106c99ebb;  */

undefined8 *****
FUN_106c99d48(long param_1,undefined8 *****param_2,undefined8 *****param_3,undefined8 *****param_4,
             long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined *puVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 *****pppppuVar18;
  undefined *puVar19;
  undefined8 ****ppppuVar20;
  undefined8 *****pppppuVar21;
  undefined8 *****pppppuVar22;
  long lVar23;
  long *plVar24;
  undefined8 ****ppppuVar25;
  long lVar26;
  undefined8 ****ppppuVar27;
  undefined8 *****pppppuVar28;
  long lVar29;
  long lStack_680;
  undefined8 uStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 uStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 ****ppppuStack_4b0;
  undefined *puStack_4a8;
  long lStack_2a0;
  undefined8 ***pppuStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 ***pppuStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 ***pppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pppppuVar4 = (undefined8 *****)&pppuStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar3 = param_2;
  pppppuVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar24 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pppppuVar3 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      pppppuVar3 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pppppuVar3);
    pppuStack_80 = (undefined8 ****)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&pppuStack_80,auStack_60,&lStack_48,1);
    pppppuVar3 = (undefined8 *****)&UNK_11096e5c8;
    (**(code **)(*plVar24 + 0x18))(plVar24);
    puStack_68 = (undefined1 *)&pppuStack_80;
    func_0x00010007e5dc(&puStack_68);
    pppppuVar5 = pppppuVar4;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pppppuVar5 = pppppuVar4;
      param_4 = param_3;
    }
  }
  pppppuVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pppppuVar18 = (undefined8 *****)&pppuStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar21 = pppppuVar3;
  pppppuVar22 = pppppuVar5;
  _objc_retain(pppppuVar3);
  if (pppppuVar4 != (undefined8 *****)0x0) {
    ppppuVar25 = pppppuVar4[1];
    _objc_retain(pppppuVar3);
    if (pppppuVar3 == (undefined8 *****)0x0) {
      pppppuVar4 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      pppppuVar4 = pppppuVar3;
      _objc_retainAutorelease(pppppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar3);
    func_0x00010002b838(auStack_e0,pppppuVar4);
    pppuStack_100 = (undefined8 ****)0x0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&pppuStack_100,auStack_e0,&lStack_c8,1);
    pppppuVar21 = (undefined8 *****)&UNK_11096e618;
    (*(code *)(*ppppuVar25)[3])(ppppuVar25);
    puStack_e8 = (undefined1 *)&pppuStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pppppuVar22 = pppppuVar18;
    param_4 = pppppuVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pppppuVar22 = pppppuVar18;
      param_4 = pppppuVar5;
    }
  }
  pppppuVar5 = pppppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppppuVar5;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar3);
  _objc_release(pppppuVar3);
  __Unwind_Resume();
  pppppuVar18 = (undefined8 *****)&pppuStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar3 = pppppuVar21;
  pppppuVar4 = pppppuVar22;
  _objc_retain(pppppuVar21);
  if (pppppuVar5 != (undefined8 *****)0x0) {
    ppppuVar25 = pppppuVar5[1];
    _objc_retain(pppppuVar21);
    if (pppppuVar21 == (undefined8 *****)0x0) {
      pppppuVar3 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      pppppuVar3 = pppppuVar21;
      _objc_retainAutorelease(pppppuVar21);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar21);
    func_0x00010002b838(auStack_160,pppppuVar3);
    pppuStack_180 = (undefined8 ****)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&pppuStack_180,auStack_160,&lStack_148,1);
    pppppuVar3 = (undefined8 *****)&UNK_11096e668;
    (*(code *)(*ppppuVar25)[3])(ppppuVar25);
    puStack_168 = (undefined1 *)&pppuStack_180;
    func_0x00010007e5dc(&puStack_168);
    pppppuVar4 = pppppuVar18;
    param_4 = pppppuVar22;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      pppppuVar4 = pppppuVar18;
      param_4 = pppppuVar22;
    }
  }
  pppppuVar5 = pppppuVar21;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pppppuVar5;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar21);
  _objc_release(pppppuVar21);
  __Unwind_Resume();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar21 = pppppuVar4;
  pppppuVar22 = param_4;
  _objc_retain(pppppuVar3);
  _objc_retain(pppppuVar4);
  if (pppppuVar5 != (undefined8 *****)0x0) {
    ppppuVar25 = pppppuVar5[1];
    _objc_retain(pppppuVar3);
    if (pppppuVar3 == (undefined8 *****)0x0) {
      pppppuVar5 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      pppppuVar5 = pppppuVar3;
      _objc_retainAutorelease(pppppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar3);
    func_0x00010002b838(auStack_1f8,pppppuVar5);
    _objc_retain(pppppuVar4);
    if (pppppuVar4 == (undefined8 *****)0x0) {
      pppppuVar5 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(pppppuVar4);
      pppppuVar5 = pppppuVar4;
      func_0x00010bdc3520(pppppuVar4);
    }
    _objc_release(pppppuVar4);
    func_0x00010002b838(auStack_1e0,pppppuVar5);
    pppuStack_218 = (undefined8 ****)0x0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x00010007e1e8(&pppuStack_218,auStack_1f8,&lStack_1c8,2);
    pppppuVar21 = (undefined8 *****)&pppuStack_218;
    (*(code *)(*ppppuVar25)[3])(ppppuVar25,&UNK_11096e6b8);
    pppuStack_200 = &pppuStack_218;
    func_0x00010007e5dc(&pppuStack_200);
    lVar26 = 0;
    pppppuVar22 = param_4;
    do {
      if ((&cStack_1c9)[lVar26] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar26));
      }
      lVar26 = lVar26 + -0x18;
    } while (lVar26 != -0x30);
  }
  _objc_release(pppppuVar4);
  pppppuVar5 = pppppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return pppppuVar5;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar4);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(pppppuVar4);
  _objc_release(pppppuVar3);
  __Unwind_Resume();
  lStack_2a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pppppuVar21);
  _objc_retain(pppppuVar22);
  _objc_retain(param_5);
  puStack_4a8 = PTR_PTR_1126f6118;
  pppppuVar3 = &ppppuStack_4b0;
  ppppuStack_4b0 = pppppuVar5;
  _objc_msgSendSuper2(pppppuVar3,PTR_s_init_1125d9248);
  if (pppppuVar3 != (undefined8 *****)0x0) {
    ppppuVar25 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar6 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar7 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar8 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puStack_4d8 = &uStack_4e0;
    uStack_4e0 = 0;
    uStack_4d0 = 0x3032000000;
    pcStack_4c8 = FUN_106c9ac7c;
    uStack_4c0 = 0x106c9ac8c;
    uStack_4b8 = 0;
    ppppuVar10 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    lVar26 = param_5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar26 != 0) {
      lStack_680 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_5);
        }
        lVar23 = *(long *)(lStack_680 * 8);
        lVar11 = lVar23;
        func_0x00010c155fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar12 != 0) {
          lVar29 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar11);
            }
            lVar13 = lVar23;
            func_0x00010c155900(lVar23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppppuVar25);
            _objc_release(lVar13);
            lVar13 = lVar23;
            func_0x00010c155b40(lVar23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppppuVar6);
            _objc_release(lVar13);
            func_0x00010befa120(ppppuVar7);
            lVar13 = lVar23;
            func_0x00010c1560e0();
            _objc_retainAutoreleasedReturnValue();
            lVar14 = lVar13;
            func_0x00010bfed4a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar13);
            if (lVar14 != 0) {
              _objc_retain(ppppuVar8);
              _objc_retain(ppppuVar10);
              _objc_retain(puVar9);
              func_0x00010c0c01c0(lVar14);
              _objc_release(puVar9);
              _objc_release(ppppuVar10);
              _objc_release(ppppuVar8);
            }
            _objc_release(lVar14);
            lVar29 = lVar29 + 1;
          } while (lVar12 != lVar29);
          lVar12 = lVar11;
          func_0x00010bf52a60();
        }
        _objc_release(lVar11);
        lStack_680 = lStack_680 + 1;
      } while (lStack_680 != lVar26);
      lVar26 = param_5;
      func_0x00010bf52a60();
    }
    _objc_release(param_5);
    ppppuVar15 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar16 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar4 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar17 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar18 = pppppuVar22;
    func_0x00010c106120();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar5 = pppppuVar18;
    func_0x00010bf52a60();
    lVar26 = lRam0000000000000000;
    while (pppppuVar5 != (undefined8 *****)0x0) {
      pppppuVar28 = (undefined8 *****)0x0;
      do {
        if (lRam0000000000000000 != lVar26) {
          _objc_enumerationMutation(pppppuVar18);
        }
        ppppuVar20 = ppppuVar7;
        func_0x00010bf4b900();
        if ((int)ppppuVar20 != 0) {
          func_0x00010befa120(ppppuVar15);
          puVar19 = puVar9;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar19 != (undefined *)0x0) {
            func_0x00010befa120(pppppuVar4);
          }
          _objc_release(puVar19);
        }
        pppppuVar28 = (undefined8 *****)((long)pppppuVar28 + 1);
      } while (pppppuVar5 != pppppuVar28);
      pppppuVar5 = pppppuVar18;
      func_0x00010bf52a60();
    }
    _objc_release(pppppuVar18);
    pppppuVar18 = pppppuVar22;
    func_0x00010c260b40();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar5 = pppppuVar18;
    func_0x00010bf52a60();
    lVar26 = lRam0000000000000000;
    while (pppppuVar5 != (undefined8 *****)0x0) {
      pppppuVar28 = (undefined8 *****)0x0;
      do {
        if (lRam0000000000000000 != lVar26) {
          _objc_enumerationMutation(pppppuVar18);
        }
        ppppuVar20 = ppppuVar7;
        func_0x00010bf4b900();
        if ((int)ppppuVar20 != 0) {
          func_0x00010befa120(ppppuVar16);
          puVar19 = puVar9;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar19 != (undefined *)0x0) {
            func_0x00010befa120(ppppuVar17);
          }
          _objc_release(puVar19);
        }
        pppppuVar28 = (undefined8 *****)((long)pppppuVar28 + 1);
      } while (pppppuVar5 != pppppuVar28);
      pppppuVar5 = pppppuVar18;
      func_0x00010bf52a60();
    }
    _objc_release(pppppuVar18);
    ppppuVar20 = ppppuVar15;
    func_0x00010bf529e0();
    if (ppppuVar20 != (undefined8 ****)0x0) {
      pppppuVar5 = pppppuVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (pppppuVar5 == (undefined8 *****)0x0) {
        pppppuVar18 = pppppuVar21;
        func_0x00010bfb1920(pppppuVar21);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(pppppuVar5);
        pppppuVar18 = pppppuVar5;
      }
      _objc_release(pppppuVar5);
      ppppuVar20 = ppppuVar15;
      func_0x00010bfb1920(ppppuVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppppuVar8);
      _objc_release(ppppuVar20);
      _objc_release(pppppuVar18);
    }
    _objc_retain(pppppuVar22);
    ppppuVar20 = pppppuVar3[1];
    pppppuVar3[1] = pppppuVar22;
    _objc_release(ppppuVar20);
    ppppuVar20 = pppppuVar3[9];
    pppppuVar3[9] = ppppuVar25;
    _objc_retain();
    _objc_release(ppppuVar20);
    ppppuVar20 = pppppuVar3[10];
    pppppuVar3[10] = ppppuVar6;
    _objc_retain();
    _objc_release(ppppuVar20);
    ppppuVar20 = pppppuVar3[2];
    pppppuVar3[2] = ppppuVar7;
    _objc_retain();
    _objc_release(ppppuVar20);
    ppppuVar20 = pppppuVar3[3];
    pppppuVar3[3] = ppppuVar8;
    _objc_retain();
    _objc_release(ppppuVar20);
    ppppuVar27 = (undefined8 ****)puStack_4d8[5];
    _objc_retain(ppppuVar27);
    ppppuVar20 = pppppuVar3[4];
    pppppuVar3[4] = ppppuVar27;
    _objc_release(ppppuVar20);
    ppppuVar20 = pppppuVar3[5];
    pppppuVar3[5] = ppppuVar10;
    _objc_retain(ppppuVar10);
    _objc_release(ppppuVar20);
    ppppuVar20 = pppppuVar3[6];
    pppppuVar3[6] = ppppuVar15;
    _objc_retain(ppppuVar15);
    _objc_release(ppppuVar20);
    ppppuVar20 = pppppuVar3[7];
    pppppuVar3[7] = ppppuVar16;
    _objc_retain(ppppuVar16);
    _objc_release(ppppuVar20);
    ppppuVar20 = pppppuVar3[0xb];
    pppppuVar3[0xb] = pppppuVar4;
    _objc_retain(pppppuVar4);
    _objc_release(ppppuVar20);
    ppppuVar20 = pppppuVar3[0xc];
    pppppuVar3[0xc] = ppppuVar17;
    _objc_release(ppppuVar20);
    _objc_release(pppppuVar4);
    _objc_release(ppppuVar16);
    _objc_release(ppppuVar15);
    _objc_release(ppppuVar10);
    __Block_object_dispose(&uStack_4e0,8);
    _objc_release(uStack_4b8);
    _objc_release(ppppuVar8);
    _objc_release(ppppuVar7);
    _objc_release(ppppuVar6);
    _objc_release(ppppuVar25);
    _objc_release(puVar9);
  }
  _objc_release(param_5);
  _objc_release(pppppuVar22);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a0) {
    return pppppuVar3;
  }
  ___stack_chk_fail();
  lVar26 = 8;
  __Block_object_dispose(&uStack_4e0);
  __Unwind_Resume();
  pppppuVar21[5] = *(undefined8 *****)(lVar26 + 0x28);
  *(undefined8 *)(lVar26 + 0x28) = 0;
  return pppppuVar21;
}



/* Entry: 106c99ebc; end: 106c9a02f;  */

undefined8 *****
FUN_106c99ebc(long param_1,undefined8 *****param_2,undefined8 *****param_3,undefined8 *****param_4,
             long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  undefined8 ****ppppuVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 *****pppppuVar18;
  undefined8 ****ppppuVar19;
  undefined8 *****pppppuVar20;
  undefined *puVar21;
  undefined8 ****ppppuVar22;
  long lVar23;
  long *plVar24;
  undefined8 ****ppppuVar25;
  long lVar26;
  undefined8 ****ppppuVar27;
  undefined8 *****pppppuVar28;
  long lVar29;
  long lStack_600;
  undefined8 uStack_460;
  undefined8 *puStack_458;
  undefined8 uStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 ****ppppuStack_430;
  undefined *puStack_428;
  long lStack_220;
  undefined8 ***pppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 ***pppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pppppuVar4 = (undefined8 *****)&pppuStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar3 = param_2;
  pppppuVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar24 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pppppuVar3 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      pppppuVar3 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pppppuVar3);
    pppuStack_80 = (undefined8 ****)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&pppuStack_80,auStack_60,&lStack_48,1);
    pppppuVar3 = (undefined8 *****)&UNK_11096e618;
    (**(code **)(*plVar24 + 0x18))(plVar24);
    puStack_68 = (undefined1 *)&pppuStack_80;
    func_0x00010007e5dc(&puStack_68);
    pppppuVar5 = pppppuVar4;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pppppuVar5 = pppppuVar4;
      param_4 = param_3;
    }
  }
  pppppuVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pppppuVar20 = (undefined8 *****)&pppuStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar6 = pppppuVar3;
  pppppuVar18 = pppppuVar5;
  _objc_retain(pppppuVar3);
  if (pppppuVar4 != (undefined8 *****)0x0) {
    ppppuVar25 = pppppuVar4[1];
    _objc_retain(pppppuVar3);
    if (pppppuVar3 == (undefined8 *****)0x0) {
      pppppuVar4 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      pppppuVar4 = pppppuVar3;
      _objc_retainAutorelease(pppppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar3);
    func_0x00010002b838(auStack_e0,pppppuVar4);
    pppuStack_100 = (undefined8 ****)0x0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&pppuStack_100,auStack_e0,&lStack_c8,1);
    pppppuVar6 = (undefined8 *****)&UNK_11096e668;
    (*(code *)(*ppppuVar25)[3])(ppppuVar25);
    puStack_e8 = (undefined1 *)&pppuStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pppppuVar18 = pppppuVar20;
    param_4 = pppppuVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pppppuVar18 = pppppuVar20;
      param_4 = pppppuVar5;
    }
  }
  pppppuVar5 = pppppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppppuVar5;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar3);
  _objc_release(pppppuVar3);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar3 = pppppuVar18;
  pppppuVar4 = param_4;
  _objc_retain(pppppuVar6);
  _objc_retain(pppppuVar18);
  if (pppppuVar5 != (undefined8 *****)0x0) {
    ppppuVar25 = pppppuVar5[1];
    _objc_retain(pppppuVar6);
    if (pppppuVar6 == (undefined8 *****)0x0) {
      pppppuVar3 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      pppppuVar3 = pppppuVar6;
      _objc_retainAutorelease(pppppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar6);
    func_0x00010002b838(auStack_178,pppppuVar3);
    _objc_retain(pppppuVar18);
    if (pppppuVar18 == (undefined8 *****)0x0) {
      pppppuVar3 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(pppppuVar18);
      pppppuVar3 = pppppuVar18;
      func_0x00010bdc3520(pppppuVar18);
    }
    _objc_release(pppppuVar18);
    func_0x00010002b838(auStack_160,pppppuVar3);
    pppuStack_198 = (undefined8 ****)0x0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010007e1e8(&pppuStack_198,auStack_178,&lStack_148,2);
    pppppuVar3 = (undefined8 *****)&pppuStack_198;
    (*(code *)(*ppppuVar25)[3])(ppppuVar25,&UNK_11096e6b8);
    pppuStack_180 = &pppuStack_198;
    func_0x00010007e5dc(&pppuStack_180);
    lVar26 = 0;
    pppppuVar4 = param_4;
    do {
      if ((&cStack_149)[lVar26] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar26));
      }
      lVar26 = lVar26 + -0x18;
    } while (lVar26 != -0x30);
  }
  _objc_release(pppppuVar18);
  pppppuVar5 = pppppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pppppuVar5;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar18);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(pppppuVar18);
  _objc_release(pppppuVar6);
  __Unwind_Resume();
  lStack_220 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pppppuVar3);
  _objc_retain(pppppuVar4);
  _objc_retain(param_5);
  puStack_428 = PTR_PTR_1126f6118;
  pppppuVar6 = &ppppuStack_430;
  ppppuStack_430 = pppppuVar5;
  _objc_msgSendSuper2(pppppuVar6,PTR_s_init_1125d9248);
  if (pppppuVar6 != (undefined8 *****)0x0) {
    ppppuVar25 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar7 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar8 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar9 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puStack_458 = &uStack_460;
    uStack_460 = 0;
    uStack_450 = 0x3032000000;
    pcStack_448 = FUN_106c9ac7c;
    uStack_440 = 0x106c9ac8c;
    uStack_438 = 0;
    ppppuVar11 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    lVar26 = param_5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar26 != 0) {
      lStack_600 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_5);
        }
        lVar23 = *(long *)(lStack_600 * 8);
        lVar12 = lVar23;
        func_0x00010c155fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar13 != 0) {
          lVar29 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar12);
            }
            lVar14 = lVar23;
            func_0x00010c155900(lVar23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppppuVar25);
            _objc_release(lVar14);
            lVar14 = lVar23;
            func_0x00010c155b40(lVar23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppppuVar7);
            _objc_release(lVar14);
            func_0x00010befa120(ppppuVar8);
            lVar14 = lVar23;
            func_0x00010c1560e0();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lVar14;
            func_0x00010bfed4a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar14);
            if (lVar15 != 0) {
              _objc_retain(ppppuVar9);
              _objc_retain(ppppuVar11);
              _objc_retain(puVar10);
              func_0x00010c0c01c0(lVar15);
              _objc_release(puVar10);
              _objc_release(ppppuVar11);
              _objc_release(ppppuVar9);
            }
            _objc_release(lVar15);
            lVar29 = lVar29 + 1;
          } while (lVar13 != lVar29);
          lVar13 = lVar12;
          func_0x00010bf52a60();
        }
        _objc_release(lVar12);
        lStack_600 = lStack_600 + 1;
      } while (lStack_600 != lVar26);
      lVar26 = param_5;
      func_0x00010bf52a60();
    }
    _objc_release(param_5);
    ppppuVar16 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar17 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar18 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar19 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar20 = pppppuVar4;
    func_0x00010c106120();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar5 = pppppuVar20;
    func_0x00010bf52a60();
    lVar26 = lRam0000000000000000;
    while (pppppuVar5 != (undefined8 *****)0x0) {
      pppppuVar28 = (undefined8 *****)0x0;
      do {
        if (lRam0000000000000000 != lVar26) {
          _objc_enumerationMutation(pppppuVar20);
        }
        ppppuVar22 = ppppuVar8;
        func_0x00010bf4b900();
        if ((int)ppppuVar22 != 0) {
          func_0x00010befa120(ppppuVar16);
          puVar21 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar21 != (undefined *)0x0) {
            func_0x00010befa120(pppppuVar18);
          }
          _objc_release(puVar21);
        }
        pppppuVar28 = (undefined8 *****)((long)pppppuVar28 + 1);
      } while (pppppuVar5 != pppppuVar28);
      pppppuVar5 = pppppuVar20;
      func_0x00010bf52a60();
    }
    _objc_release(pppppuVar20);
    pppppuVar20 = pppppuVar4;
    func_0x00010c260b40();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar5 = pppppuVar20;
    func_0x00010bf52a60();
    lVar26 = lRam0000000000000000;
    while (pppppuVar5 != (undefined8 *****)0x0) {
      pppppuVar28 = (undefined8 *****)0x0;
      do {
        if (lRam0000000000000000 != lVar26) {
          _objc_enumerationMutation(pppppuVar20);
        }
        ppppuVar22 = ppppuVar8;
        func_0x00010bf4b900();
        if ((int)ppppuVar22 != 0) {
          func_0x00010befa120(ppppuVar17);
          puVar21 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar21 != (undefined *)0x0) {
            func_0x00010befa120(ppppuVar19);
          }
          _objc_release(puVar21);
        }
        pppppuVar28 = (undefined8 *****)((long)pppppuVar28 + 1);
      } while (pppppuVar5 != pppppuVar28);
      pppppuVar5 = pppppuVar20;
      func_0x00010bf52a60();
    }
    _objc_release(pppppuVar20);
    ppppuVar22 = ppppuVar16;
    func_0x00010bf529e0();
    if (ppppuVar22 != (undefined8 ****)0x0) {
      pppppuVar5 = pppppuVar18;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (pppppuVar5 == (undefined8 *****)0x0) {
        pppppuVar20 = pppppuVar3;
        func_0x00010bfb1920(pppppuVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(pppppuVar5);
        pppppuVar20 = pppppuVar5;
      }
      _objc_release(pppppuVar5);
      ppppuVar22 = ppppuVar16;
      func_0x00010bfb1920(ppppuVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppppuVar9);
      _objc_release(ppppuVar22);
      _objc_release(pppppuVar20);
    }
    _objc_retain(pppppuVar4);
    ppppuVar22 = pppppuVar6[1];
    pppppuVar6[1] = pppppuVar4;
    _objc_release(ppppuVar22);
    ppppuVar22 = pppppuVar6[9];
    pppppuVar6[9] = ppppuVar25;
    _objc_retain();
    _objc_release(ppppuVar22);
    ppppuVar22 = pppppuVar6[10];
    pppppuVar6[10] = ppppuVar7;
    _objc_retain();
    _objc_release(ppppuVar22);
    ppppuVar22 = pppppuVar6[2];
    pppppuVar6[2] = ppppuVar8;
    _objc_retain();
    _objc_release(ppppuVar22);
    ppppuVar22 = pppppuVar6[3];
    pppppuVar6[3] = ppppuVar9;
    _objc_retain();
    _objc_release(ppppuVar22);
    ppppuVar27 = (undefined8 ****)puStack_458[5];
    _objc_retain(ppppuVar27);
    ppppuVar22 = pppppuVar6[4];
    pppppuVar6[4] = ppppuVar27;
    _objc_release(ppppuVar22);
    ppppuVar22 = pppppuVar6[5];
    pppppuVar6[5] = ppppuVar11;
    _objc_retain(ppppuVar11);
    _objc_release(ppppuVar22);
    ppppuVar22 = pppppuVar6[6];
    pppppuVar6[6] = ppppuVar16;
    _objc_retain(ppppuVar16);
    _objc_release(ppppuVar22);
    ppppuVar22 = pppppuVar6[7];
    pppppuVar6[7] = ppppuVar17;
    _objc_retain(ppppuVar17);
    _objc_release(ppppuVar22);
    ppppuVar22 = pppppuVar6[0xb];
    pppppuVar6[0xb] = pppppuVar18;
    _objc_retain(pppppuVar18);
    _objc_release(ppppuVar22);
    ppppuVar22 = pppppuVar6[0xc];
    pppppuVar6[0xc] = ppppuVar19;
    _objc_release(ppppuVar22);
    _objc_release(pppppuVar18);
    _objc_release(ppppuVar17);
    _objc_release(ppppuVar16);
    _objc_release(ppppuVar11);
    __Block_object_dispose(&uStack_460,8);
    _objc_release(uStack_438);
    _objc_release(ppppuVar9);
    _objc_release(ppppuVar8);
    _objc_release(ppppuVar7);
    _objc_release(ppppuVar25);
    _objc_release(puVar10);
  }
  _objc_release(param_5);
  _objc_release(pppppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_220) {
    return pppppuVar6;
  }
  ___stack_chk_fail();
  lVar26 = 8;
  __Block_object_dispose(&uStack_460);
  __Unwind_Resume();
  pppppuVar3[5] = *(undefined8 *****)(lVar26 + 0x28);
  *(undefined8 *)(lVar26 + 0x28) = 0;
  return pppppuVar3;
}



/* Entry: 106c9a030; end: 106c9a1a3;  */

undefined8 *****
FUN_106c9a030(long param_1,undefined8 *****param_2,undefined8 *****param_3,undefined8 *****param_4,
             long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined *puVar8;
  undefined8 ****ppppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 *****pppppuVar18;
  undefined *puVar19;
  undefined8 ****ppppuVar20;
  undefined8 *****pppppuVar21;
  undefined8 *****pppppuVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  undefined8 ****ppppuVar26;
  undefined8 ****ppppuVar27;
  undefined8 *****pppppuVar28;
  long lVar29;
  long lStack_580;
  undefined8 uStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 ****ppppuStack_3b0;
  undefined *puStack_3a8;
  long lStack_1a0;
  undefined8 ***pppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 ***pppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pppppuVar4 = (undefined8 *****)&pppuStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar3 = param_2;
  pppppuVar18 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar24 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pppppuVar3 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      pppppuVar3 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pppppuVar3);
    pppuStack_80 = (undefined8 ****)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&pppuStack_80,auStack_60,&lStack_48,1);
    pppppuVar3 = (undefined8 *****)&UNK_11096e668;
    (**(code **)(*plVar24 + 0x18))(plVar24);
    puStack_68 = (undefined1 *)&pppuStack_80;
    func_0x00010007e5dc(&puStack_68);
    pppppuVar18 = pppppuVar4;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pppppuVar18 = pppppuVar4;
      param_4 = param_3;
    }
  }
  pppppuVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar21 = pppppuVar18;
  pppppuVar22 = param_4;
  _objc_retain(pppppuVar3);
  _objc_retain(pppppuVar18);
  if (pppppuVar4 != (undefined8 *****)0x0) {
    ppppuVar27 = pppppuVar4[1];
    _objc_retain(pppppuVar3);
    if (pppppuVar3 == (undefined8 *****)0x0) {
      pppppuVar4 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      pppppuVar4 = pppppuVar3;
      _objc_retainAutorelease(pppppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar3);
    func_0x00010002b838(auStack_f8,pppppuVar4);
    _objc_retain(pppppuVar18);
    if (pppppuVar18 == (undefined8 *****)0x0) {
      pppppuVar4 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(pppppuVar18);
      pppppuVar4 = pppppuVar18;
      func_0x00010bdc3520(pppppuVar18);
    }
    _objc_release(pppppuVar18);
    func_0x00010002b838(auStack_e0,pppppuVar4);
    pppuStack_118 = (undefined8 ****)0x0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&pppuStack_118,auStack_f8,&lStack_c8,2);
    pppppuVar21 = (undefined8 *****)&pppuStack_118;
    (*(code *)(*ppppuVar27)[3])(ppppuVar27,&UNK_11096e6b8);
    pppuStack_100 = &pppuStack_118;
    func_0x00010007e5dc(&pppuStack_100);
    lVar25 = 0;
    pppppuVar22 = param_4;
    do {
      if ((&cStack_c9)[lVar25] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar25));
      }
      lVar25 = lVar25 + -0x18;
    } while (lVar25 != -0x30);
  }
  _objc_release(pppppuVar18);
  pppppuVar4 = pppppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    _objc_release(pppppuVar18);
    if (cStack_e1 < '\0') {
      __ZdlPv(auStack_f8[0]);
    }
    _objc_release(pppppuVar18);
    _objc_release(pppppuVar3);
    __Unwind_Resume();
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(pppppuVar21);
    _objc_retain(pppppuVar22);
    _objc_retain(param_5);
    puStack_3a8 = PTR_PTR_1126f6118;
    pppppuVar3 = &ppppuStack_3b0;
    ppppuStack_3b0 = pppppuVar4;
    _objc_msgSendSuper2(pppppuVar3,PTR_s_init_1125d9248);
    if (pppppuVar3 != (undefined8 *****)0x0) {
      ppppuVar27 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar5 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar6 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar7 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puStack_3d8 = &uStack_3e0;
      uStack_3e0 = 0;
      uStack_3d0 = 0x3032000000;
      pcStack_3c8 = FUN_106c9ac7c;
      uStack_3c0 = 0x106c9ac8c;
      uStack_3b8 = 0;
      ppppuVar9 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_5);
      lVar25 = param_5;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar25 != 0) {
        lStack_580 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_5);
          }
          lVar23 = *(long *)(lStack_580 * 8);
          lVar10 = lVar23;
          func_0x00010c155fe0();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar11 != 0) {
            lVar29 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar10);
              }
              lVar12 = lVar23;
              func_0x00010c155900(lVar23);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(ppppuVar27);
              _objc_release(lVar12);
              lVar12 = lVar23;
              func_0x00010c155b40(lVar23);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(ppppuVar5);
              _objc_release(lVar12);
              func_0x00010befa120(ppppuVar6);
              lVar12 = lVar23;
              func_0x00010c1560e0();
              _objc_retainAutoreleasedReturnValue();
              lVar13 = lVar12;
              func_0x00010bfed4a0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar12);
              if (lVar13 != 0) {
                _objc_retain(ppppuVar7);
                _objc_retain(ppppuVar9);
                _objc_retain(puVar8);
                func_0x00010c0c01c0(lVar13);
                _objc_release(puVar8);
                _objc_release(ppppuVar9);
                _objc_release(ppppuVar7);
              }
              _objc_release(lVar13);
              lVar29 = lVar29 + 1;
            } while (lVar11 != lVar29);
            lVar11 = lVar10;
            func_0x00010bf52a60();
          }
          _objc_release(lVar10);
          lStack_580 = lStack_580 + 1;
        } while (lStack_580 != lVar25);
        lVar25 = param_5;
        func_0x00010bf52a60();
      }
      _objc_release(param_5);
      ppppuVar14 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      func_0x00010c0ecd20();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar15 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      func_0x00010c0ecd20();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar4 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      func_0x00010c0ecd20();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar16 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      func_0x00010c0ecd20();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar17 = pppppuVar22;
      func_0x00010c106120();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar18 = pppppuVar17;
      func_0x00010bf52a60();
      lVar25 = lRam0000000000000000;
      while (pppppuVar18 != (undefined8 *****)0x0) {
        pppppuVar28 = (undefined8 *****)0x0;
        do {
          if (lRam0000000000000000 != lVar25) {
            _objc_enumerationMutation(pppppuVar17);
          }
          ppppuVar20 = ppppuVar6;
          func_0x00010bf4b900();
          if ((int)ppppuVar20 != 0) {
            func_0x00010befa120(ppppuVar14);
            puVar19 = puVar8;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar19 != (undefined *)0x0) {
              func_0x00010befa120(pppppuVar4);
            }
            _objc_release(puVar19);
          }
          pppppuVar28 = (undefined8 *****)((long)pppppuVar28 + 1);
        } while (pppppuVar18 != pppppuVar28);
        pppppuVar18 = pppppuVar17;
        func_0x00010bf52a60();
      }
      _objc_release(pppppuVar17);
      pppppuVar17 = pppppuVar22;
      func_0x00010c260b40();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar18 = pppppuVar17;
      func_0x00010bf52a60();
      lVar25 = lRam0000000000000000;
      while (pppppuVar18 != (undefined8 *****)0x0) {
        pppppuVar28 = (undefined8 *****)0x0;
        do {
          if (lRam0000000000000000 != lVar25) {
            _objc_enumerationMutation(pppppuVar17);
          }
          ppppuVar20 = ppppuVar6;
          func_0x00010bf4b900();
          if ((int)ppppuVar20 != 0) {
            func_0x00010befa120(ppppuVar15);
            puVar19 = puVar8;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar19 != (undefined *)0x0) {
              func_0x00010befa120(ppppuVar16);
            }
            _objc_release(puVar19);
          }
          pppppuVar28 = (undefined8 *****)((long)pppppuVar28 + 1);
        } while (pppppuVar18 != pppppuVar28);
        pppppuVar18 = pppppuVar17;
        func_0x00010bf52a60();
      }
      _objc_release(pppppuVar17);
      ppppuVar20 = ppppuVar14;
      func_0x00010bf529e0();
      if (ppppuVar20 != (undefined8 ****)0x0) {
        pppppuVar18 = pppppuVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (pppppuVar18 == (undefined8 *****)0x0) {
          pppppuVar17 = pppppuVar21;
          func_0x00010bfb1920(pppppuVar21);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(pppppuVar18);
          pppppuVar17 = pppppuVar18;
        }
        _objc_release(pppppuVar18);
        ppppuVar20 = ppppuVar14;
        func_0x00010bfb1920(ppppuVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppppuVar7);
        _objc_release(ppppuVar20);
        _objc_release(pppppuVar17);
      }
      _objc_retain(pppppuVar22);
      ppppuVar20 = pppppuVar3[1];
      pppppuVar3[1] = pppppuVar22;
      _objc_release(ppppuVar20);
      ppppuVar20 = pppppuVar3[9];
      pppppuVar3[9] = ppppuVar27;
      _objc_retain();
      _objc_release(ppppuVar20);
      ppppuVar20 = pppppuVar3[10];
      pppppuVar3[10] = ppppuVar5;
      _objc_retain();
      _objc_release(ppppuVar20);
      ppppuVar20 = pppppuVar3[2];
      pppppuVar3[2] = ppppuVar6;
      _objc_retain();
      _objc_release(ppppuVar20);
      ppppuVar20 = pppppuVar3[3];
      pppppuVar3[3] = ppppuVar7;
      _objc_retain();
      _objc_release(ppppuVar20);
      ppppuVar26 = (undefined8 ****)puStack_3d8[5];
      _objc_retain(ppppuVar26);
      ppppuVar20 = pppppuVar3[4];
      pppppuVar3[4] = ppppuVar26;
      _objc_release(ppppuVar20);
      ppppuVar20 = pppppuVar3[5];
      pppppuVar3[5] = ppppuVar9;
      _objc_retain(ppppuVar9);
      _objc_release(ppppuVar20);
      ppppuVar20 = pppppuVar3[6];
      pppppuVar3[6] = ppppuVar14;
      _objc_retain(ppppuVar14);
      _objc_release(ppppuVar20);
      ppppuVar20 = pppppuVar3[7];
      pppppuVar3[7] = ppppuVar15;
      _objc_retain(ppppuVar15);
      _objc_release(ppppuVar20);
      ppppuVar20 = pppppuVar3[0xb];
      pppppuVar3[0xb] = pppppuVar4;
      _objc_retain(pppppuVar4);
      _objc_release(ppppuVar20);
      ppppuVar20 = pppppuVar3[0xc];
      pppppuVar3[0xc] = ppppuVar16;
      _objc_release(ppppuVar20);
      _objc_release(pppppuVar4);
      _objc_release(ppppuVar15);
      _objc_release(ppppuVar14);
      _objc_release(ppppuVar9);
      __Block_object_dispose(&uStack_3e0,8);
      _objc_release(uStack_3b8);
      _objc_release(ppppuVar7);
      _objc_release(ppppuVar6);
      _objc_release(ppppuVar5);
      _objc_release(ppppuVar27);
      _objc_release(puVar8);
    }
    _objc_release(param_5);
    _objc_release(pppppuVar22);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
      return pppppuVar3;
    }
    ___stack_chk_fail();
    lVar25 = 8;
    __Block_object_dispose(&uStack_3e0);
    __Unwind_Resume();
    pppppuVar21[5] = *(undefined8 *****)(lVar25 + 0x28);
    *(undefined8 *)(lVar25 + 0x28) = 0;
    return pppppuVar21;
  }
  return pppppuVar4;
}



/* Entry: 106c9a1a4; end: 106c9a3d3;  */

undefined8 *****
FUN_106c9a1a4(long param_1,undefined8 *****param_2,undefined8 *****param_3,undefined8 ****param_4,
             long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  undefined8 ****ppppuVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 ****ppppuVar19;
  undefined *puVar20;
  undefined8 *****pppppuVar21;
  undefined8 *****pppppuVar22;
  undefined8 ****ppppuVar23;
  undefined8 ****ppppuVar24;
  long lVar25;
  long lVar26;
  undefined8 ****ppppuVar27;
  long *plVar28;
  undefined8 ****ppppuVar29;
  long lVar30;
  long lStack_500;
  undefined8 uStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 ****ppppuStack_330;
  undefined *puStack_328;
  long lStack_120;
  undefined8 ***pppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 ***pppuStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar3 = param_3;
  ppppuVar24 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar28 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pppppuVar3 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      pppppuVar3 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pppppuVar3);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *****)0x0) {
      pppppuVar3 = (undefined8 *****)&UNK_10f3cc1c5;
    }
    else {
      _objc_retainAutorelease(param_3);
      pppppuVar3 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pppppuVar3);
    pppuStack_98 = (undefined8 ****)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&pppuStack_98,auStack_78,&lStack_48,2);
    pppppuVar3 = (undefined8 *****)&pppuStack_98;
    (**(code **)(*plVar28 + 0x18))(plVar28,&UNK_11096e6b8);
    pppuStack_80 = &pppuStack_98;
    func_0x00010007e5dc(&pppuStack_80);
    lVar26 = 0;
    ppppuVar24 = param_4;
    do {
      if ((&cStack_49)[lVar26] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar26));
      }
      lVar26 = lVar26 + -0x18;
    } while (lVar26 != -0x30);
  }
  _objc_release(param_3);
  pppppuVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pppppuVar3);
  _objc_retain(ppppuVar24);
  _objc_retain(param_5);
  puStack_328 = PTR_PTR_1126f6118;
  pppppuVar5 = &ppppuStack_330;
  ppppuStack_330 = pppppuVar4;
  _objc_msgSendSuper2(pppppuVar5,PTR_s_init_1125d9248);
  if (pppppuVar5 != (undefined8 *****)0x0) {
    ppppuVar6 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar7 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar8 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar9 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puStack_358 = &uStack_360;
    uStack_360 = 0;
    uStack_350 = 0x3032000000;
    pcStack_348 = FUN_106c9ac7c;
    uStack_340 = 0x106c9ac8c;
    uStack_338 = 0;
    ppppuVar11 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    lVar26 = param_5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar26 != 0) {
      lStack_500 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_5);
        }
        lVar25 = *(long *)(lStack_500 * 8);
        lVar12 = lVar25;
        func_0x00010c155fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar13 != 0) {
          lVar30 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar12);
            }
            lVar14 = lVar25;
            func_0x00010c155900(lVar25);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppppuVar6);
            _objc_release(lVar14);
            lVar14 = lVar25;
            func_0x00010c155b40(lVar25);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppppuVar7);
            _objc_release(lVar14);
            func_0x00010befa120(ppppuVar8);
            lVar14 = lVar25;
            func_0x00010c1560e0();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lVar14;
            func_0x00010bfed4a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar14);
            if (lVar15 != 0) {
              _objc_retain(ppppuVar9);
              _objc_retain(ppppuVar11);
              _objc_retain(puVar10);
              func_0x00010c0c01c0(lVar15);
              _objc_release(puVar10);
              _objc_release(ppppuVar11);
              _objc_release(ppppuVar9);
            }
            _objc_release(lVar15);
            lVar30 = lVar30 + 1;
          } while (lVar13 != lVar30);
          lVar13 = lVar12;
          func_0x00010bf52a60();
        }
        _objc_release(lVar12);
        lStack_500 = lStack_500 + 1;
      } while (lStack_500 != lVar26);
      lVar26 = param_5;
      func_0x00010bf52a60();
    }
    _objc_release(param_5);
    ppppuVar16 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar17 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar4 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar18 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar27 = ppppuVar24;
    func_0x00010c106120();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar23 = ppppuVar27;
    func_0x00010bf52a60();
    lVar26 = lRam0000000000000000;
    while (ppppuVar23 != (undefined8 ****)0x0) {
      ppppuVar29 = (undefined8 ****)0x0;
      do {
        if (lRam0000000000000000 != lVar26) {
          _objc_enumerationMutation(ppppuVar27);
        }
        ppppuVar19 = ppppuVar8;
        func_0x00010bf4b900();
        if ((int)ppppuVar19 != 0) {
          func_0x00010befa120(ppppuVar16);
          puVar20 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar20 != (undefined *)0x0) {
            func_0x00010befa120(pppppuVar4);
          }
          _objc_release(puVar20);
        }
        ppppuVar29 = (undefined8 ****)((long)ppppuVar29 + 1);
      } while (ppppuVar23 != ppppuVar29);
      ppppuVar23 = ppppuVar27;
      func_0x00010bf52a60();
    }
    _objc_release(ppppuVar27);
    ppppuVar27 = ppppuVar24;
    func_0x00010c260b40();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar23 = ppppuVar27;
    func_0x00010bf52a60();
    lVar26 = lRam0000000000000000;
    while (ppppuVar23 != (undefined8 ****)0x0) {
      ppppuVar29 = (undefined8 ****)0x0;
      do {
        if (lRam0000000000000000 != lVar26) {
          _objc_enumerationMutation(ppppuVar27);
        }
        ppppuVar19 = ppppuVar8;
        func_0x00010bf4b900();
        if ((int)ppppuVar19 != 0) {
          func_0x00010befa120(ppppuVar17);
          puVar20 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar20 != (undefined *)0x0) {
            func_0x00010befa120(ppppuVar18);
          }
          _objc_release(puVar20);
        }
        ppppuVar29 = (undefined8 ****)((long)ppppuVar29 + 1);
      } while (ppppuVar23 != ppppuVar29);
      ppppuVar23 = ppppuVar27;
      func_0x00010bf52a60();
    }
    _objc_release(ppppuVar27);
    ppppuVar23 = ppppuVar16;
    func_0x00010bf529e0();
    if (ppppuVar23 != (undefined8 ****)0x0) {
      pppppuVar21 = pppppuVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (pppppuVar21 == (undefined8 *****)0x0) {
        pppppuVar22 = pppppuVar3;
        func_0x00010bfb1920(pppppuVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(pppppuVar21);
        pppppuVar22 = pppppuVar21;
      }
      _objc_release(pppppuVar21);
      ppppuVar23 = ppppuVar16;
      func_0x00010bfb1920(ppppuVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppppuVar9);
      _objc_release(ppppuVar23);
      _objc_release(pppppuVar22);
    }
    _objc_retain(ppppuVar24);
    ppppuVar23 = pppppuVar5[1];
    pppppuVar5[1] = ppppuVar24;
    _objc_release(ppppuVar23);
    ppppuVar23 = pppppuVar5[9];
    pppppuVar5[9] = ppppuVar6;
    _objc_retain();
    _objc_release(ppppuVar23);
    ppppuVar23 = pppppuVar5[10];
    pppppuVar5[10] = ppppuVar7;
    _objc_retain();
    _objc_release(ppppuVar23);
    ppppuVar23 = pppppuVar5[2];
    pppppuVar5[2] = ppppuVar8;
    _objc_retain();
    _objc_release(ppppuVar23);
    ppppuVar23 = pppppuVar5[3];
    pppppuVar5[3] = ppppuVar9;
    _objc_retain();
    _objc_release(ppppuVar23);
    ppppuVar27 = (undefined8 ****)puStack_358[5];
    _objc_retain(ppppuVar27);
    ppppuVar23 = pppppuVar5[4];
    pppppuVar5[4] = ppppuVar27;
    _objc_release(ppppuVar23);
    ppppuVar23 = pppppuVar5[5];
    pppppuVar5[5] = ppppuVar11;
    _objc_retain(ppppuVar11);
    _objc_release(ppppuVar23);
    ppppuVar23 = pppppuVar5[6];
    pppppuVar5[6] = ppppuVar16;
    _objc_retain(ppppuVar16);
    _objc_release(ppppuVar23);
    ppppuVar23 = pppppuVar5[7];
    pppppuVar5[7] = ppppuVar17;
    _objc_retain(ppppuVar17);
    _objc_release(ppppuVar23);
    ppppuVar23 = pppppuVar5[0xb];
    pppppuVar5[0xb] = pppppuVar4;
    _objc_retain(pppppuVar4);
    _objc_release(ppppuVar23);
    ppppuVar23 = pppppuVar5[0xc];
    pppppuVar5[0xc] = ppppuVar18;
    _objc_release(ppppuVar23);
    _objc_release(pppppuVar4);
    _objc_release(ppppuVar17);
    _objc_release(ppppuVar16);
    _objc_release(ppppuVar11);
    __Block_object_dispose(&uStack_360,8);
    _objc_release(uStack_338);
    _objc_release(ppppuVar9);
    _objc_release(ppppuVar8);
    _objc_release(ppppuVar7);
    _objc_release(ppppuVar6);
    _objc_release(puVar10);
  }
  _objc_release(param_5);
  _objc_release(ppppuVar24);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
    return pppppuVar5;
  }
  ___stack_chk_fail();
  lVar26 = 8;
  __Block_object_dispose(&uStack_360);
  __Unwind_Resume();
  pppppuVar3[5] = *(undefined8 *****)(lVar26 + 0x28);
  *(undefined8 *)(lVar26 + 0x28) = 0;
  return pppppuVar3;
}



/* Entry: 106c9a3d4; end: 106c9ac7b; -[SCSelectionSectionExtensionsProvider initWithAlphabeticalIndexes:configuration:sectionExtensions:] */

undefined8 *
FUN_106c9a3d4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lStack_460;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_288 = PTR_PTR_1126f6118;
  puVar2 = &uStack_290;
  uStack_290 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puStack_2b8 = &uStack_2c0;
    uStack_2c0 = 0;
    uStack_2b0 = 0x3032000000;
    pcStack_2a8 = FUN_106c9ac7c;
    uStack_2a0 = 0x106c9ac8c;
    uStack_298 = 0;
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    lVar21 = param_5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar21 != 0) {
      lStack_460 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_5);
        }
        lVar22 = *(long *)(lStack_460 * 8);
        lVar9 = lVar22;
        func_0x00010c155fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010bf52a60();
        lVar24 = lRam0000000000000000;
        while (lVar10 != 0) {
          lVar25 = 0;
          do {
            if (lRam0000000000000000 != lVar24) {
              _objc_enumerationMutation(lVar9);
            }
            lVar11 = lVar22;
            func_0x00010c155900(lVar22);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3);
            _objc_release(lVar11);
            lVar11 = lVar22;
            func_0x00010c155b40(lVar22);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
            _objc_release(lVar11);
            func_0x00010befa120(puVar5);
            lVar11 = lVar22;
            func_0x00010c1560e0();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar11;
            func_0x00010bfed4a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar11);
            if (lVar12 != 0) {
              _objc_retain(puVar6);
              _objc_retain(puVar8);
              _objc_retain(puVar7);
              func_0x00010c0c01c0(lVar12);
              _objc_release(puVar7);
              _objc_release(puVar8);
              _objc_release(puVar6);
            }
            _objc_release(lVar12);
            lVar25 = lVar25 + 1;
          } while (lVar10 != lVar25);
          lVar10 = lVar9;
          func_0x00010bf52a60();
        }
        _objc_release(lVar9);
        lStack_460 = lStack_460 + 1;
      } while (lStack_460 != lVar21);
      lVar21 = param_5;
      func_0x00010bf52a60();
    }
    _objc_release(param_5);
    puVar13 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = (undefined8 *)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_4;
    func_0x00010c106120();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar10;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar21 != 0) {
      lVar24 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar10);
        }
        puVar17 = puVar5;
        func_0x00010bf4b900();
        if ((int)puVar17 != 0) {
          func_0x00010befa120(puVar13);
          puVar17 = puVar7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar17 != (undefined *)0x0) {
            func_0x00010befa120(puVar15);
          }
          _objc_release(puVar17);
        }
        lVar24 = lVar24 + 1;
      } while (lVar21 != lVar24);
      lVar21 = lVar10;
      func_0x00010bf52a60();
    }
    _objc_release(lVar10);
    lVar10 = param_4;
    func_0x00010c260b40();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar10;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar21 != 0) {
      lVar24 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar10);
        }
        puVar17 = puVar5;
        func_0x00010bf4b900();
        if ((int)puVar17 != 0) {
          func_0x00010befa120(puVar14);
          puVar17 = puVar7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar17 != (undefined *)0x0) {
            func_0x00010befa120(puVar16);
          }
          _objc_release(puVar17);
        }
        lVar24 = lVar24 + 1;
      } while (lVar21 != lVar24);
      lVar21 = lVar10;
      func_0x00010bf52a60();
    }
    _objc_release(lVar10);
    puVar17 = puVar13;
    func_0x00010bf529e0();
    if (puVar17 != (undefined *)0x0) {
      puVar18 = puVar15;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (puVar18 == (undefined8 *)0x0) {
        puVar19 = param_3;
        func_0x00010bfb1920(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar18);
        puVar19 = puVar18;
      }
      _objc_release(puVar18);
      puVar17 = puVar13;
      func_0x00010bfb1920(puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar6);
      _objc_release(puVar17);
      _objc_release(puVar19);
    }
    _objc_retain(param_4);
    uVar20 = puVar2[1];
    puVar2[1] = param_4;
    _objc_release(uVar20);
    uVar20 = puVar2[9];
    puVar2[9] = puVar3;
    _objc_retain();
    _objc_release(uVar20);
    uVar20 = puVar2[10];
    puVar2[10] = puVar4;
    _objc_retain();
    _objc_release(uVar20);
    uVar20 = puVar2[2];
    puVar2[2] = puVar5;
    _objc_retain();
    _objc_release(uVar20);
    uVar20 = puVar2[3];
    puVar2[3] = puVar6;
    _objc_retain();
    _objc_release(uVar20);
    uVar23 = puStack_2b8[5];
    _objc_retain(uVar23);
    uVar20 = puVar2[4];
    puVar2[4] = uVar23;
    _objc_release(uVar20);
    uVar20 = puVar2[5];
    puVar2[5] = puVar8;
    _objc_retain(puVar8);
    _objc_release(uVar20);
    uVar20 = puVar2[6];
    puVar2[6] = puVar13;
    _objc_retain(puVar13);
    _objc_release(uVar20);
    uVar20 = puVar2[7];
    puVar2[7] = puVar14;
    _objc_retain(puVar14);
    _objc_release(uVar20);
    uVar20 = puVar2[0xb];
    puVar2[0xb] = puVar15;
    _objc_retain(puVar15);
    _objc_release(uVar20);
    uVar20 = puVar2[0xc];
    puVar2[0xc] = puVar16;
    _objc_release(uVar20);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar8);
    __Block_object_dispose(&uStack_2c0,8);
    _objc_release(uStack_298);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar7);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar21 = 8;
  __Block_object_dispose(&uStack_2c0);
  __Unwind_Resume();
  param_3[5] = *(undefined8 *)(lVar21 + 0x28);
  *(undefined8 *)(lVar21 + 0x28) = 0;
  return param_3;
}



/* Entry: 106c9ac7c; end: 106c9ac93;  */

void FUN_106c9ac7c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c9ac94; end: 106c9ace3;  */

void FUN_106c9ac94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (*(long *)(lVar2 + 0x28) == 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c9ace4; end: 106c9ad77;  */

void FUN_106c9ace4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38));
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c9ad78; end: 106c9adf7; -[SCSelectionSectionExtensionsProvider sectionIdentifiersForQueryText:querySource:] */

void FUN_106c9ad78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c156020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001006372a4();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c9adf8; end: 106c9ae07;  */

void FUN_106c9adf8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_containsObject__1125b07e8,
             param_2);
  return;
}



/* Entry: 106c9ae08; end: 106c9ae0f; -[SCSelectionSectionExtensionsProvider sectionIdentifierForIndexKey:] */

void FUN_106c9ae08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 106c9ae10; end: 106c9ae17; -[SCSelectionSectionExtensionsProvider sortedEntitiesObservable] */

void FUN_106c9ae10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c246df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_sortedEntitiesObservable_11266f5a0);
  return;
}



/* Entry: 106c9ae18; end: 106c9ae5f; -[SCSelectionSectionExtensionsProvider entityCountObservableForIndexKey:] */

void FUN_106c9ae18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c122c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c9ae60; end: 106c9ae67; -[SCSelectionSectionExtensionsProvider precedingSections] */

undefined8 FUN_106c9ae60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106c9ae68; end: 106c9ae6f; -[SCSelectionSectionExtensionsProvider subsequentSections] */

undefined8 FUN_106c9ae68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106c9ae70; end: 106c9ae77; -[SCSelectionSectionExtensionsProvider sectionCreators] */

undefined8 FUN_106c9ae70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106c9ae78; end: 106c9ae7f; -[SCSelectionSectionExtensionsProvider sectionDescriptors] */

undefined8 FUN_106c9ae78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106c9ae80; end: 106c9ae87; -[SCSelectionSectionExtensionsProvider precedingIndexes] */

undefined8 FUN_106c9ae80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106c9ae88; end: 106c9ae8f; -[SCSelectionSectionExtensionsProvider subsequentIndexes] */

undefined8 FUN_106c9ae88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106c9ae90; end: 106c9af37; -[SCSelectionSectionExtensionsProvider .cxx_destruct] */

void FUN_106c9ae90(long param_1)

{
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



/* Entry: 106c9af38; end: 106c9af9f; -[SCSelectionSectionCoordinator init] */

undefined1 * FUN_106c9af38(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6120;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106c9afa0; end: 106c9afa7; -[SCSelectionSectionCoordinator canPerformQuery:] */

undefined8 FUN_106c9afa0(void)

{
  return 1;
}



/* Entry: 106c9afa8; end: 106c9b2eb; -[SCSelectionSectionCoordinator resultsForQuery:updatingBlock:] */

void FUN_106c9afa8(undefined1 *param_1,undefined1 *param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c071ae0();
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = param_3;
    _objc_release(uVar2);
    func_0x00010bf86d80(*(undefined8 *)(param_1 + 8));
    lVar7 = *(long *)(param_1 + 0x38);
    lVar3 = param_3;
    func_0x00010c11da20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_3;
    func_0x00010c11d960(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c156020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar3);
    _os_unfair_lock_lock(param_1 + 0x20);
    _objc_retain(lVar7);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar7;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar4;
    _objc_release(uVar2);
    _os_unfair_lock_unlock(param_1 + 0x20);
    param_2 = param_1;
    _objc_initWeak(auStack_108,param_1);
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    _objc_retain(lVar7);
    lVar3 = lVar7;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar9 = *plStack_140;
      do {
        lVar8 = 0;
        do {
          if (*plStack_140 != lVar9) {
            _objc_enumerationMutation(lVar7);
          }
          uVar5 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c155be0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          uVar5 = uVar2;
          func_0x00010c155b60(uVar2);
          _objc_retainAutoreleasedReturnValue();
          param_2 = auStack_108;
          _objc_copyWeak(auStack_158,param_2);
          _objc_retain(param_3);
          _objc_retain(param_4);
          uVar6 = uVar5;
          func_0x00010c25ff60(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1a3e0();
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(param_4);
          _objc_release(param_3);
          _objc_destroyWeak(auStack_158);
          _objc_release(uVar2);
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar7;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar7);
    _objc_destroyWeak(auStack_108);
    _objc_release(lVar7);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x38;
  _objc_loadWeakRetained(param_3);
  func_0x00010be6a580();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c9b2ec; end: 106c9b343;  */

void FUN_106c9b2ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a580();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c9b344; end: 106c9b4ab; -[SCSelectionSectionCoordinator _onNextSectionDescriptor:query:sectionIdentifier:updatingBlock:] */

void FUN_106c9b344(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18));
  _objc_release(param_5);
  _objc_release(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar1 == lVar2) {
    lVar1 = *(long *)(param_1 + 0x10);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106c9b4ac;
    puStack_50 = &UNK_11094c668;
    lStack_48 = param_1;
    func_0x000100504554(lVar1,&puStack_68);
  }
  else {
    lVar1 = 0;
  }
  _os_unfair_lock_unlock(param_1 + 0x20);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b16f0;
    _objc_alloc();
    func_0x00010c042a40();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar3;
    _objc_retain();
    _objc_release(uVar4);
    (**(code **)(param_6 + 0x10))(param_6,puVar3,0);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c9b4ac; end: 106c9b4bb;  */

void FUN_106c9b4ac(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
             PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 106c9b4bc; end: 106c9b4c3; -[SCSelectionSectionCoordinator currentQuery] */

undefined8 FUN_106c9b4bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106c9b4c4; end: 106c9b4cb; -[SCSelectionSectionCoordinator setCurrentQuery:] */

void FUN_106c9b4c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106c9b4cc; end: 106c9b4d3; -[SCSelectionSectionCoordinator isLoading] */

undefined1 FUN_106c9b4cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x24);
}



/* Entry: 106c9b4d4; end: 106c9b4db; -[SCSelectionSectionCoordinator currentQueryResult] */

undefined8 FUN_106c9b4d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106c9b4dc; end: 106c9b4e3; -[SCSelectionSectionCoordinator sectionExtensionsProvider] */

undefined8 FUN_106c9b4dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106c9b4e4; end: 106c9b513; -[SCSelectionSectionCoordinator setSectionExtensionsProvider:] */

void FUN_106c9b4e4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106c9b514; end: 106c9b573; -[SCSelectionSectionCoordinator .cxx_destruct] */

void FUN_106c9b514(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c9b574; end: 106c9b617; -[SCSelectionSectionCreator initWithActionHandler:selectionTracker:] */

undefined1 *
FUN_106c9b574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6128;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c9b618; end: 106c9b727; -[SCSelectionSectionCreator sectionForDescriptor:] */

void FUN_106c9b618(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x18);
  func_0x00010c155960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar3;
    _objc_opt_respondsToSelector(uVar3,PTR_s_setUiContainer__1126646b0);
    if ((uVar2 & 1) != 0) {
      func_0x00010c21b220(uVar3);
    }
    uVar2 = uVar3;
    _objc_opt_respondsToSelector(uVar3,PTR_s_setPresentingViewController__112655f88);
    if ((uVar2 & 1) != 0) {
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010c1e1580(uVar3);
      _objc_release(param_1);
    }
    uVar2 = uVar3;
    func_0x00010c155ce0(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c9b728; end: 106c9b72f; -[SCSelectionSectionCreator sectionExtensionsProvider] */

undefined8 FUN_106c9b728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c9b730; end: 106c9b75f; -[SCSelectionSectionCreator setSectionExtensionsProvider:] */

void FUN_106c9b730(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106c9b760; end: 106c9b767; -[SCSelectionSectionCreator uiContainer] */

undefined8 FUN_106c9b760(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106c9b768; end: 106c9b797; -[SCSelectionSectionCreator setUiContainer:] */

void FUN_106c9b768(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c9b798; end: 106c9b7af; -[SCSelectionSectionCreator viewController] */

void FUN_106c9b798(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c9b7b0; end: 106c9b7bb; -[SCSelectionSectionCreator setViewController:] */

void FUN_106c9b7b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 106c9b7bc; end: 106c9b80b; -[SCSelectionSectionCreator .cxx_destruct] */

void FUN_106c9b7bc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c9b80c; end: 106c9b92f; -[SCSelectionSectionDataProvider initWithSelectionTracker:selectionStateViewModelGenerator:sendToExperimentConfiguration:] */

undefined1 *
FUN_106c9b80c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f6130;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c5268;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c9b930; end: 106c9b93b; +[SCSelectionSectionDataProvider announcerIdentifier] */

undefined ** FUN_106c9b930(void)

{
  return &PTR____CFConstantStringClassReference_110e819f8;
}



/* Entry: 106c9b93c; end: 106c9b943; -[SCSelectionSectionDataProvider addListener:] */

void FUN_106c9b93c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106c9b944; end: 106c9b94b; -[SCSelectionSectionDataProvider removeListener:] */

void FUN_106c9b944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106c9b94c; end: 106c9b9bf; -[SCSelectionSectionDataProvider setUpdateQueuePerformer:] */

void FUN_106c9b94c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b4a0(*(undefined8 *)(param_1 + 0x50),param_2,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c9b9c0; end: 106c9bacf; -[SCSelectionSectionDataProvider setUp] */

void FUN_106c9b9c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf6d420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106c9bad0; end: 106c9bb17;  */

void FUN_106c9bad0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea4fa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c9bb18; end: 106c9bb1f; -[SCSelectionSectionDataProvider tearDown] */

void FUN_106c9bb18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x58),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 106c9bb20; end: 106c9bb27; -[SCSelectionSectionDataProvider numberOfItemsInSection:] */

void FUN_106c9bb20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x60),PTR_s_count_1125b2420);
  return;
}



/* Entry: 106c9bb28; end: 106c9bc97; -[SCSelectionSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_106c9bb28(ulong param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf529e0();
  puVar3 = *(undefined **)(param_1 + 0x60);
  func_0x00010bf529e0();
  if (puVar3 < puVar2) {
    uVar5 = param_1;
    func_0x00010c1559c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b5240;
    _objc_opt_class(PTR_PTR_1126b5240);
    uVar4 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar1 = uVar5;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010c155f60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010be53060(param_1);
    func_0x00010bf64120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c155aa0();
    _objc_release(param_1);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x60);
    _objc_retain(uVar5);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106c9bc98;
    puStack_40 = &UNK_110845ab0;
    uStack_38 = uVar5;
    _objc_retain(uVar5);
    puVar2 = param_3;
    func_0x000100504554(param_3,&puStack_58);
    _objc_release(uStack_38);
  }
  _objc_release(uVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c9bc98; end: 106c9bcc3;  */

void FUN_106c9bc98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return;
}



/* Entry: 106c9bcc4; end: 106c9bccb; -[SCSelectionSectionDataProvider contentCellClassesByReuseIdentifier] */

undefined8 FUN_106c9bcc4(void)

{
  return 0;
}



/* Entry: 106c9bccc; end: 106c9bccf; -[SCSelectionSectionDataProvider setSectionDataModel:] */

void FUN_106c9bccc(void)

{
  return;
}



/* Entry: 106c9bcd0; end: 106c9bcd7; -[SCSelectionSectionDataProvider configurationBlocksByReuseIdentifier] */

undefined8 FUN_106c9bcd0(void)

{
  return 0;
}



/* Entry: 106c9bcd8; end: 106c9bd07; -[SCSelectionSectionDataProvider setSelectionIdentifierToIndexMap:] */

void FUN_106c9bcd8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106c9bd08; end: 106c9bf13; -[SCSelectionSectionDataProvider _setItemToSelectionStateMap:] */

void FUN_106c9bd08(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x21;
  long *plVar7;
  undefined8 *puVar8;
  undefined *unaff_x22;
  undefined8 *puVar9;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined1 uStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_3;
  func_0x000108425790(param_3,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    *(undefined8 *)(param_1 + 0x68) = 1;
    unaff_x21 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c0d3c80();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    puVar1 = param_3;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar11 = *plStack_120;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x23 = *(undefined8 *)(lStack_128 + (long)puVar12 * 8);
          func_0x00010c2827c0(unaff_x23);
          unaff_x24 = unaff_x21;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = *(long *)(param_1 + 8);
          puVar2 = param_3;
          func_0x00010c0e00e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010bf1f3c0();
          (**(code **)(lVar10 + 0x10))(lVar10,unaff_x24,puVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          func_0x00010c2827c0(unaff_x23);
          func_0x00010c1d04c0(unaff_x21);
          _objc_release(lVar10);
          _objc_release(unaff_x24);
          puVar12 = puVar12 + 1;
        } while (puVar1 != puVar12);
        puVar1 = param_3;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(param_3);
    uVar4 = unaff_x21;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    _objc_release(uVar6);
    *(undefined8 *)(param_1 + 0x68) = 2;
    unaff_x22 = param_1 + 0x40;
    _objc_loadWeakRetained();
    puVar12 = param_1;
    func_0x00010c155aa0();
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar11 = *(long *)(puVar1 + 0x28);
    uVar5 = 0;
    pcStack_138 = FUN_106c9bf14;
    puVar9 = (undefined8 *)0x0;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_170 = unaff_x24;
    uStack_168 = unaff_x23;
    puStack_160 = unaff_x22;
    uStack_158 = unaff_x21;
    puStack_150 = param_1;
    puStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar12);
    puVar8 = (undefined8 *)0x0;
    if (lVar11 != 0) {
      plVar7 = *(long **)(lVar11 + 8);
      func_0x00010002b838(auStack_1a8,&UNK_10f3cc40f);
      _objc_retain(puVar12);
      if (puVar12 == (undefined *)0x0) {
        puVar1 = &UNK_10f3cc415;
      }
      else {
        _objc_retainAutorelease(puVar12);
        puVar1 = puVar12;
        func_0x00010bdc3520(puVar12);
      }
      _objc_release(puVar12);
      func_0x00010002b838(auStack_190,puVar1);
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      func_0x00010007e1e8(&uStack_1c8,auStack_1a8,&lStack_178,2);
      puVar1 = &UNK_11096e968;
      puVar9 = &uStack_1c8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11096e968,&uStack_1c8,1);
      puStack_1b0 = puVar9;
      func_0x00010007e5dc(&puStack_1b0);
      lVar11 = 0;
      puVar8 = auStack_1a8;
      do {
        if ((&cStack_179)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar11));
        }
        uVar5 = SUB81(puVar1,0);
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x30);
    }
    puVar1 = puVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      _objc_release(puVar12);
      if (cStack_191 < '\0') {
        __ZdlPv(auStack_1a8[0]);
      }
      _objc_release(puVar12);
      puVar2 = puVar1;
      __Unwind_Resume();
      pcStack_1d8 = FUN_106c9cf14;
      puStack_200 = puVar9;
      puStack_1f8 = puVar8;
      puStack_1f0 = puVar1;
      puStack_1e8 = puVar12;
      ppuStack_1e0 = &puStack_140;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126b5658;
      _objc_opt_class(PTR_PTR_1126b5658);
      puVar12 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar1);
      puVar1 = puVar2;
      if (((ulong)puVar12 & 1) == 0) {
        puVar1 = (undefined *)0x0;
      }
      _objc_retain(puVar1);
      _objc_release(puVar2);
      puVar12 = puVar1;
      func_0x00010c15a7c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_220 = 0xc0000000;
      pcStack_218 = FUN_106c9d02c;
      puStack_210 = &UNK_1108ec870;
      puVar1 = puVar12;
      uStack_208 = uVar5;
      func_0x000100504554(puVar12,&puStack_228);
      _objc_release(puVar12);
      puVar12 = PTR_PTR_1126b5658;
      _objc_alloc(PTR_PTR_1126b5658);
      func_0x00010c043e40();
      puVar2 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      _objc_release(puVar12);
      _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
      return;
    }
    return;
  }
  return;
}



/* Entry: 106c9bf14; end: 106c9bf23; -[SCSelectionSectionDataProvider _logFailureForSectionId:] */

void FUN_106c9bf14(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
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
  
  lVar1 = *(long *)(param_1 + 0x28);
  uVar5 = 0;
  puVar8 = (undefined8 *)0x0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar7 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    plVar6 = *(long **)(lVar1 + 8);
    func_0x00010002b838(auStack_78,&UNK_10f3cc40f);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f3cc415;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = &UNK_11096e968;
    puVar8 = &uStack_98;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_11096e968,&uStack_98,1);
    puStack_80 = puVar8;
    func_0x00010007e5dc(&puStack_80);
    lVar1 = 0;
    puVar7 = auStack_78;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      uVar5 = SUB81(puVar2,0);
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_3);
    puVar3 = puVar2;
    __Unwind_Resume();
    pcStack_a8 = FUN_106c9cf14;
    puStack_d0 = puVar8;
    puStack_c8 = puVar7;
    puStack_c0 = puVar2;
    puStack_b8 = param_3;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b5658;
    _objc_opt_class(PTR_PTR_1126b5658);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar2);
    puVar2 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c15a7c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc0000000;
    pcStack_e8 = FUN_106c9d02c;
    puStack_e0 = &UNK_1108ec870;
    puVar2 = puVar3;
    uStack_d8 = uVar5;
    func_0x000100504554(puVar3,&puStack_f8);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b5658;
    _objc_alloc(PTR_PTR_1126b5658);
    func_0x00010c043e40();
    puVar4 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    _objc_release(puVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  return;
}



/* Entry: 106c9bf24; end: 106c9bf2b; -[SCSelectionSectionDataProvider sectionDataModel] */

undefined8 FUN_106c9bf24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106c9bf2c; end: 106c9bf33; -[SCSelectionSectionDataProvider updateQueuePerformer] */

undefined8 FUN_106c9bf2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106c9bf34; end: 106c9bf4b; -[SCSelectionSectionDataProvider dataProviderDelegate] */

void FUN_106c9bf34(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c9bf4c; end: 106c9bf57; -[SCSelectionSectionDataProvider setDataProviderDelegate:] */

void FUN_106c9bf4c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 106c9bf58; end: 106c9bf5f; -[SCSelectionSectionDataProvider selectionTracker] */

undefined8 FUN_106c9bf58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106c9bf60; end: 106c9bf67; -[SCSelectionSectionDataProvider observationQueue] */

undefined8 FUN_106c9bf60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


