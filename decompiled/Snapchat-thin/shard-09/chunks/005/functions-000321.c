/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106dedf74; end: 106dedf7b; -[SCMemoriesSendFactoryServices memoriesSendFactory] */

undefined8 FUN_106dedf74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106dedf7c; end: 106dedf87; -[SCMemoriesSendFactoryServices .cxx_destruct] */

void FUN_106dedf7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106dedf88; end: 106dedffb; -[SCMemoriesSendServices initWithMemoriesSendViewPresenter:] */

undefined1 * FUN_106dedf88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6f28;
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



/* Entry: 106dedffc; end: 106dee003; -[SCMemoriesSendServices memoriesSendViewPresenter] */

undefined8 FUN_106dedffc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106dee004; end: 106dee00f; -[SCMemoriesSendServices .cxx_destruct] */

void FUN_106dee004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106dee010; end: 106def593;  */

/* WARNING: Possible PIC construction at 0x000106defae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106df12bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106df134c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106df12c0) */
/* WARNING: Removing unreachable block (ram,0x000106df131c) */
/* WARNING: Removing unreachable block (ram,0x000106defae8) */
/* WARNING: Removing unreachable block (ram,0x000106defaf8) */
/* WARNING: Removing unreachable block (ram,0x000106defb04) */
/* WARNING: Removing unreachable block (ram,0x000106df1350) */
/* WARNING: Removing unreachable block (ram,0x000106df137c) */
/* WARNING: Removing unreachable block (ram,0x000106df1328) */
/* WARNING: Removing unreachable block (ram,0x000106df132c) */
/* WARNING: Removing unreachable block (ram,0x000106df133c) */
/* WARNING: Removing unreachable block (ram,0x000106df1344) */
/* WARNING: Removing unreachable block (ram,0x000106df1398) */
/* WARNING: Removing unreachable block (ram,0x000106df13bc) */
/* WARNING: Removing unreachable block (ram,0x000106df1428) */
/* WARNING: Removing unreachable block (ram,0x000106df1434) */
/* WARNING: Removing unreachable block (ram,0x000106df1438) */
/* WARNING: Removing unreachable block (ram,0x000106df144c) */
/* WARNING: Removing unreachable block (ram,0x000106df1454) */
/* WARNING: Removing unreachable block (ram,0x000106df149c) */
/* WARNING: Removing unreachable block (ram,0x000106df1504) */
/* WARNING: Removing unreachable block (ram,0x000106df1510) */
/* WARNING: Removing unreachable block (ram,0x000106df1514) */
/* WARNING: Removing unreachable block (ram,0x000106df1524) */
/* WARNING: Removing unreachable block (ram,0x000106df152c) */
/* WARNING: Removing unreachable block (ram,0x000106df1580) */
/* WARNING: Removing unreachable block (ram,0x000106df15d8) */
/* WARNING: Removing unreachable block (ram,0x000106df15e4) */
/* WARNING: Removing unreachable block (ram,0x000106df1600) */
/* WARNING: Removing unreachable block (ram,0x000106df1608) */
/* WARNING: Removing unreachable block (ram,0x000106df1618) */
/* WARNING: Removing unreachable block (ram,0x000106df1634) */
/* WARNING: Removing unreachable block (ram,0x000106df1648) */
/* WARNING: Removing unreachable block (ram,0x000106df1674) */

undefined **
FUN_106dee010(undefined8 param_1,double param_2,undefined **param_3,undefined **param_4)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined **unaff_x19;
  undefined **ppuVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined **unaff_x23;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **unaff_x24;
  undefined **unaff_x25;
  long lVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined **unaff_x27;
  long unaff_x28;
  long lVar22;
  undefined8 ****ppppuVar23;
  undefined8 uVar24;
  float fVar25;
  double dVar26;
  double unaff_d8;
  double unaff_d9;
  undefined **ppuStack_ac0;
  undefined **ppuStack_ab8;
  undefined *puStack_ab0;
  long lStack_aa8;
  long *plStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined *apuStack_a70 [16];
  long lStack_9f0;
  undefined **ppuStack_9e0;
  undefined **ppuStack_9d8;
  undefined **ppuStack_9d0;
  undefined **ppuStack_9c8;
  undefined **ppuStack_9c0;
  undefined *puStack_9b8;
  undefined **ppuStack_9b0;
  undefined **ppuStack_9a8;
  undefined **ppuStack_9a0;
  undefined **ppuStack_998;
  undefined8 ***pppuStack_990;
  undefined8 uStack_988;
  undefined **ppuStack_980;
  undefined **ppuStack_978;
  long lStack_970;
  undefined **ppuStack_968;
  undefined8 uStack_960;
  long lStack_958;
  undefined8 *puStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined *puStack_920;
  long lStack_918;
  long *plStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  long lStack_8d8;
  long *plStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  long lStack_898;
  long *plStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined *apuStack_7e0 [48];
  long lStack_660;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined **ppuStack_640;
  undefined **ppuStack_638;
  undefined **ppuStack_630;
  undefined **ppuStack_628;
  undefined **ppuStack_620;
  undefined **ppuStack_618;
  undefined **ppuStack_610;
  undefined **ppuStack_608;
  undefined1 ***pppuStack_600;
  undefined8 uStack_5f8;
  undefined **ppuStack_5e8;
  undefined8 uStack_5e0;
  long lStack_5d8;
  undefined8 *puStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  long lStack_598;
  long *plStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  long lStack_558;
  undefined8 *puStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  long lStack_3a0;
  long lStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined1 **ppuStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_268;
  long lStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined1 *puStack_210;
  undefined8 uStack_208;
  undefined **ppuStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar21 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar21;
  func_0x00010c297ca0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar17;
  func_0x00010bf1f3c0();
  _objc_release(ppuVar17);
  _objc_release(ppuVar21);
  if ((int)ppuVar13 == 0) {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    ppuStack_1f8 = param_3;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = param_3;
    func_0x00010bf52a60();
    if (ppuVar21 != (undefined **)0x0) {
      unaff_x28 = *plStack_1a0;
      do {
        unaff_x19 = (undefined **)0x0;
        do {
          if (*plStack_1a0 != unaff_x28) {
            _objc_enumerationMutation(param_3);
          }
          ppuVar13 = *(undefined ***)(lStack_1a8 + (long)unaff_x19 * 8);
          unaff_x23 = ppuVar13;
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          func_0x00010c297b40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x24;
          func_0x00010c297b40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = unaff_x25;
          func_0x00010c297e20();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = ppuVar17;
          func_0x00010c08fa60();
          _objc_release(ppuVar17);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
          if (unaff_x27 != (undefined **)0x0) {
            func_0x00010bfedfc0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = ppuVar13;
            func_0x00010c297b40();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = unaff_x23;
            func_0x00010c297b40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar17 = unaff_x24;
            func_0x00010c297e20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x24);
            _objc_release(unaff_x23);
            _objc_release(ppuVar13);
            _objc_release(param_3);
            ppuVar21 = ppuStack_1f8;
            goto LAB_106dee308;
          }
          unaff_x19 = (undefined **)((long)unaff_x19 + 1);
        } while (ppuVar21 != unaff_x19);
        ppuVar21 = param_3;
        func_0x00010bf52a60();
      } while (ppuVar21 != (undefined **)0x0);
    }
    _objc_release(param_3);
    ppuVar21 = ppuStack_1f8;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    puStack_1e0 = (undefined8 *)0x0;
    ppuVar11 = ppuStack_1f8;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar11;
    func_0x00010bf52a60();
    if (ppuVar17 != (undefined **)0x0) {
      unaff_x19 = (undefined **)*puStack_1e0;
      do {
        unaff_x25 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_1e0 != unaff_x19) {
            _objc_enumerationMutation(ppuVar11);
          }
          ppuVar9 = *(undefined ***)(lStack_1e8 + (long)unaff_x25 * 8);
          unaff_x23 = ppuVar9;
          func_0x00010c0fd620();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          func_0x00010bf529e0();
          _objc_release(unaff_x23);
          if (unaff_x24 != (undefined **)0x0) {
            func_0x00010c0fd620();
            _objc_retainAutoreleasedReturnValue();
            ppuVar13 = ppuVar9;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar9);
            ppuVar17 = ppuVar13;
            func_0x00010c0fd0e0();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106dee0b8;
          }
          unaff_x25 = (undefined **)((long)unaff_x25 + 1);
        } while (ppuVar17 != unaff_x25);
        ppuVar17 = ppuVar11;
        func_0x00010bf52a60();
        ppuVar13 = ppuVar9;
      } while (ppuVar17 != (undefined **)0x0);
    }
    _objc_release(ppuVar11);
    ppuVar17 = (undefined **)0x0;
    param_3 = ppuVar11;
  }
  else {
    ppuVar11 = param_3;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar11;
    func_0x00010c297c00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar13;
    func_0x00010c15a3e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = param_3;
LAB_106dee0b8:
    _objc_release(ppuVar13);
    _objc_release(ppuVar11);
    param_3 = ppuVar11;
  }
LAB_106dee308:
  ppuVar11 = ppuVar21;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uStack_208 = 0x106dee390;
    lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_260 = unaff_x28;
    ppuStack_258 = unaff_x27;
    ppuStack_250 = ppuVar21;
    ppuStack_248 = unaff_x25;
    ppuStack_240 = unaff_x24;
    ppuStack_238 = unaff_x23;
    ppuStack_230 = ppuVar13;
    ppuStack_228 = ppuVar17;
    ppuStack_220 = param_3;
    ppuStack_218 = unaff_x19;
    puStack_210 = &stack0xfffffffffffffff0;
    _objc_retain();
    ppuVar9 = ppuVar11;
    func_0x00010c08fa60();
    if (ppuVar9 == (undefined **)0x0) {
      ppuVar9 = ppuVar17;
      ppuVar17 = (undefined **)0x0;
    }
    else {
      param_3 = (undefined **)PTR_PTR_1126b25c0;
      _objc_alloc();
      func_0x00010c008360();
      ppuVar9 = param_3;
      func_0x00010bfd4420();
      ppuVar14 = (undefined **)0x0;
      ppuVar15 = unaff_x24;
      if ((int)ppuVar9 != 0) {
        uStack_308 = 0;
        uStack_310 = 0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        lStack_328 = 0;
        uStack_330 = 0;
        uStack_318 = 0;
        puStack_320 = (undefined8 *)0x0;
        ppuVar13 = param_3;
        func_0x00010bf0d7e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar13;
        func_0x00010bf0d800();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar13);
        ppuVar9 = ppuVar17;
        func_0x00010bf52a60();
        if (ppuVar9 != (undefined **)0x0) {
          unaff_x25 = (undefined **)*puStack_320;
          ppuVar13 = ppuVar9;
          do {
            ppuVar21 = (undefined **)0x0;
            do {
              if ((undefined **)*puStack_320 != unaff_x25) {
                _objc_enumerationMutation(ppuVar17);
              }
              ppuVar15 = *(undefined ***)(lStack_328 + (long)ppuVar21 * 8);
              ppuVar9 = ppuVar15;
              func_0x00010bf0d0a0();
              if ((int)ppuVar9 == 1) {
                func_0x00010bf4e080();
                _objc_retainAutoreleasedReturnValue();
                ppuVar14 = ppuVar15;
                func_0x00010c297e20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar15);
                ppuVar9 = ppuVar14;
                func_0x00010c08fa60();
                if (ppuVar9 != (undefined **)0x0) goto LAB_106dee4f8;
                _objc_release(ppuVar14);
                unaff_x24 = ppuVar15;
              }
              ppuVar21 = (undefined **)((long)ppuVar21 + 1);
            } while (ppuVar13 != ppuVar21);
            ppuVar13 = ppuVar17;
            func_0x00010bf52a60();
            ppuVar15 = unaff_x24;
          } while (ppuVar13 != (undefined **)0x0);
        }
        ppuVar14 = (undefined **)0x0;
LAB_106dee4f8:
        _objc_release(ppuVar17);
      }
      _objc_release(param_3);
      ppuVar9 = ppuVar17;
      ppuVar17 = ppuVar14;
      unaff_x24 = ppuVar15;
    }
    ppuVar14 = ppuVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_268) {
      ___stack_chk_fail();
      uStack_338 = 0x106dee558;
      lStack_3a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_390 = unaff_x28;
      ppuStack_388 = unaff_x27;
      ppuStack_380 = ppuVar21;
      ppuStack_378 = unaff_x25;
      ppuStack_370 = unaff_x24;
      ppuStack_368 = ppuVar17;
      ppuStack_360 = ppuVar13;
      ppuStack_358 = ppuVar9;
      ppuStack_350 = param_3;
      ppuStack_348 = ppuVar11;
      ppuStack_340 = &puStack_210;
      _objc_retain();
      ppuVar17 = ppuVar14;
      func_0x00010bfaebe0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar17;
      func_0x00010c297ca0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar9;
      func_0x00010bf1f3c0();
      _objc_release(ppuVar9);
      _objc_release(ppuVar17);
      if ((int)ppuVar13 != 0) {
        ppuVar17 = ppuVar14;
        func_0x00010bfaebe0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar17;
        func_0x00010c297c00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar17);
        ppuVar9 = ppuVar15;
        func_0x00010c15a3e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar9;
        func_0x00010c08fa60();
        _objc_release(ppuVar9);
        if (ppuVar13 != (undefined **)0x0) {
          uStack_538 = 0;
          uStack_540 = 0;
          uStack_528 = 0;
          uStack_530 = 0;
          lStack_558 = 0;
          uStack_560 = 0;
          uStack_548 = 0;
          puStack_550 = (undefined8 *)0x0;
          ppuVar9 = ppuVar15;
          func_0x00010c2981c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = ppuVar9;
          func_0x00010bf52a60();
          if (ppuVar17 != (undefined **)0x0) {
            unaff_x27 = (undefined **)*puStack_550;
            do {
              ppuVar11 = (undefined **)0x0;
              do {
                if ((undefined **)*puStack_550 != unaff_x27) {
                  _objc_enumerationMutation(ppuVar9);
                }
                ppuVar16 = *(undefined ***)(lStack_558 + (long)ppuVar11 * 8);
                unaff_x24 = ppuVar16;
                func_0x00010c297e20();
                _objc_retainAutoreleasedReturnValue();
                unaff_x25 = ppuVar15;
                func_0x00010c15a3e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar21 = unaff_x24;
                func_0x00010c0720c0();
                _objc_release(unaff_x25);
                _objc_release(unaff_x24);
                if (((ulong)ppuVar21 & 1) != 0) {
                  unaff_x24 = (undefined **)PTR_PTR_1126c0e50;
                  _objc_alloc();
                  ppuVar13 = ppuVar16;
                  func_0x00010c297e20();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c297f60();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar17 = unaff_x24;
                  func_0x00010c036540();
                  unaff_x25 = ppuVar16;
                  goto LAB_106deeb28;
                }
                ppuVar11 = (undefined **)((long)ppuVar11 + 1);
              } while (ppuVar17 != ppuVar11);
              ppuVar17 = ppuVar9;
              func_0x00010bf52a60();
              ppuVar13 = (undefined **)0x0;
            } while (ppuVar17 != (undefined **)0x0);
          }
          _objc_release(ppuVar9);
        }
        _objc_release(ppuVar15);
      }
      uStack_578 = 0;
      uStack_580 = 0;
      uStack_568 = 0;
      uStack_570 = 0;
      lStack_598 = 0;
      uStack_5a0 = 0;
      uStack_588 = 0;
      plStack_590 = (long *)0x0;
      ppuStack_5e8 = ppuVar14;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuVar14;
      func_0x00010bf52a60();
      if (ppuVar17 != (undefined **)0x0) {
        lVar22 = *plStack_590;
        do {
          ppuVar11 = (undefined **)0x0;
          do {
            if (*plStack_590 != lVar22) {
              _objc_enumerationMutation(ppuVar14);
            }
            ppuVar13 = *(undefined ***)(lStack_598 + (long)ppuVar11 * 8);
            ppuVar9 = ppuVar13;
            func_0x00010bfedfc0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = ppuVar9;
            func_0x00010c297b40();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = unaff_x24;
            func_0x00010c297b40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar21 = unaff_x25;
            func_0x00010c297e20();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = ppuVar21;
            func_0x00010c08fa60();
            _objc_release(ppuVar21);
            _objc_release(unaff_x25);
            _objc_release(unaff_x24);
            _objc_release(ppuVar9);
            if (unaff_x27 != (undefined **)0x0) {
              func_0x00010bfedfc0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar17 = ppuVar13;
              func_0x00010c297b40();
              _objc_retainAutoreleasedReturnValue();
              ppuVar9 = ppuVar17;
              func_0x00010c297b40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar17);
              _objc_release(ppuVar13);
              ppuVar17 = (undefined **)PTR_PTR_1126c0e50;
              _objc_alloc();
              ppuVar13 = ppuVar9;
              func_0x00010c297e20();
              _objc_retainAutoreleasedReturnValue();
              unaff_x24 = ppuVar9;
              func_0x00010c0d4f60();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c036540();
              _objc_release(unaff_x24);
              ppuVar15 = ppuVar14;
              ppuVar14 = ppuStack_5e8;
              goto LAB_106deeb2c;
            }
            ppuVar11 = (undefined **)((long)ppuVar11 + 1);
          } while (ppuVar17 != ppuVar11);
          ppuVar17 = ppuVar14;
          func_0x00010bf52a60();
          ppuVar9 = (undefined **)0x0;
        } while (ppuVar17 != (undefined **)0x0);
      }
      _objc_release(ppuVar14);
      ppuVar14 = ppuStack_5e8;
      uStack_5b8 = 0;
      uStack_5c0 = 0;
      uStack_5a8 = 0;
      uStack_5b0 = 0;
      lStack_5d8 = 0;
      uStack_5e0 = 0;
      uStack_5c8 = 0;
      puStack_5d0 = (undefined8 *)0x0;
      ppuVar15 = ppuStack_5e8;
      func_0x00010bf308c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuVar15;
      func_0x00010bf52a60();
      if (ppuVar17 != (undefined **)0x0) {
        ppuVar11 = (undefined **)*puStack_5d0;
LAB_106dee858:
        unaff_x25 = (undefined **)0x0;
LAB_106dee85c:
        if ((undefined **)*puStack_5d0 != ppuVar11) {
          _objc_enumerationMutation(ppuVar15);
        }
        ppuVar13 = *(undefined ***)(lStack_5d8 + (long)unaff_x25 * 8);
        ppuVar9 = ppuVar13;
        func_0x00010c0fd620();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar9;
        func_0x00010bf529e0();
        _objc_release(ppuVar9);
        if (ppuVar16 == (undefined **)0x0) goto code_r0x000106dee8a4;
        ppuVar17 = ppuVar13;
        func_0x00010c0fd620();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar17;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar17);
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        _objc_retain(ppuVar9);
        ppuVar17 = ppuVar9;
        func_0x00010bf950c0(ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        ppuVar16 = ppuVar9;
        func_0x00010c24ff00(ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        _objc_release(ppuVar16);
        _objc_release(ppuVar17);
        ppuVar17 = ppuVar9;
        func_0x00010c24ff00(ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2827c0();
        ppuVar16 = ppuVar13;
        func_0x00010c260c80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar13);
        _objc_release(ppuVar17);
        ppuVar17 = (undefined **)PTR_PTR_1126c0e50;
        _objc_alloc();
        unaff_x25 = ppuVar9;
        func_0x00010c0fd0e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar9);
        func_0x00010c036540();
        _objc_release(unaff_x25);
        unaff_x24 = ppuVar16;
LAB_106deeb28:
        _objc_release(ppuVar16);
LAB_106deeb2c:
        _objc_release(ppuVar13);
        _objc_release(ppuVar9);
        goto LAB_106deeb3c;
      }
LAB_106dee8cc:
      ppuVar17 = (undefined **)0x0;
LAB_106deeb3c:
      _objc_release(ppuVar15);
      ppuVar16 = ppuVar14;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a0) {
        ___stack_chk_fail();
        uStack_5f8 = 0x106deeb8c;
        lStack_660 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuVar7 = param_4;
        ppuStack_650 = ppuVar14;
        ppuStack_648 = unaff_x27;
        ppuStack_640 = ppuVar21;
        ppuStack_638 = unaff_x25;
        ppuStack_630 = unaff_x24;
        ppuStack_628 = ppuVar17;
        ppuStack_620 = ppuVar13;
        ppuStack_618 = ppuVar9;
        ppuStack_610 = ppuVar15;
        ppuStack_608 = ppuVar11;
        pppuStack_600 = &ppuStack_340;
        _objc_retain();
        _objc_retain(param_4);
        ppuVar13 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
        ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        lStack_898 = 0;
        uStack_8a0 = 0;
        uStack_888 = 0;
        plStack_890 = (long *)0x0;
        uStack_878 = 0;
        uStack_880 = 0;
        uStack_868 = 0;
        uStack_870 = 0;
        ppuStack_978 = ppuVar16;
        ppuStack_968 = ppuVar17;
        func_0x00010bf308c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar16;
        func_0x00010bf52a60();
        if (ppuVar17 != (undefined **)0x0) {
          lVar22 = *plStack_890;
          do {
            ppuVar15 = (undefined **)0x0;
            do {
              if (*plStack_890 != lVar22) {
                _objc_enumerationMutation(ppuVar16);
              }
              unaff_x24 = *(undefined ***)(lStack_898 + (long)ppuVar15 * 8);
              unaff_x25 = unaff_x24;
              func_0x00010c26b700();
              _objc_retainAutoreleasedReturnValue();
              ppuVar21 = unaff_x25;
              func_0x00010c08fa60();
              _objc_release(unaff_x25);
              if (ppuVar21 != (undefined **)0x0) {
                func_0x00010c26b700();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(ppuStack_968);
                _objc_release(unaff_x24);
              }
              ppuVar15 = (undefined **)((long)ppuVar15 + 1);
            } while (ppuVar17 != ppuVar15);
            ppuVar17 = ppuVar16;
            func_0x00010bf52a60();
          } while (ppuVar17 != (undefined **)0x0);
        }
        _objc_release(ppuVar16);
        if (param_4 != (undefined **)0x0) {
          ppuVar7 = (undefined **)0x0;
          ppuVar17 = param_4;
          func_0x000108020568();
          _objc_retainAutoreleasedReturnValue();
          lStack_8d8 = 0;
          uStack_8e0 = 0;
          uStack_8c8 = 0;
          plStack_8d0 = (long *)0x0;
          uStack_8b8 = 0;
          uStack_8c0 = 0;
          uStack_8a8 = 0;
          uStack_8b0 = 0;
          ppuVar11 = ppuVar17;
          func_0x000107e639a4();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar11;
          func_0x00010bf52a60();
          if (ppuVar9 != (undefined **)0x0) {
            lVar22 = *plStack_8d0;
            do {
              ppuVar15 = (undefined **)0x0;
              do {
                if (*plStack_8d0 != lVar22) {
                  _objc_enumerationMutation(ppuVar11);
                }
                ppuVar21 = *(undefined ***)(lStack_8d8 + (long)ppuVar15 * 8);
                func_0x00010c0cc0c0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x27 = ppuVar21;
                func_0x00010bf30500();
                _objc_retainAutoreleasedReturnValue();
                unaff_x25 = unaff_x27;
                func_0x00010c26b700();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x27);
                _objc_release(ppuVar21);
                ppuVar14 = unaff_x25;
                func_0x00010c08fa60();
                if (ppuVar14 != (undefined **)0x0) {
                  func_0x00010befa120(ppuStack_968);
                }
                _objc_release(unaff_x25);
                ppuVar15 = (undefined **)((long)ppuVar15 + 1);
              } while (ppuVar9 != ppuVar15);
              ppuVar9 = ppuVar11;
              func_0x00010bf52a60();
              unaff_x24 = (undefined **)0x0;
            } while (ppuVar9 != (undefined **)0x0);
          }
          _objc_release(ppuVar11);
          _objc_release(ppuVar17);
        }
        ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        ppuStack_980 = param_4;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuStack_968;
        dVar26 = 0.0;
        lStack_918 = 0;
        puStack_920 = (undefined *)0x0;
        uStack_908 = 0;
        plStack_910 = (long *)0x0;
        uStack_8f8 = 0;
        uStack_900 = 0;
        uStack_8e8 = 0;
        uStack_8f0 = 0;
        _objc_retain(ppuStack_968);
        ppuVar11 = &puStack_920;
        ppuVar9 = apuStack_7e0;
        func_0x00010bf52a60();
        if (ppuVar14 != (undefined **)0x0) {
          lStack_970 = *plStack_910;
          do {
            ppuVar15 = (undefined **)0x0;
            do {
              if (*plStack_910 != lStack_970) {
                _objc_enumerationMutation(ppuStack_968);
              }
              unaff_x25 = *(undefined ***)(lStack_918 + (long)ppuVar15 * 8);
              dVar26 = 0.0;
              lStack_958 = 0;
              uStack_960 = 0;
              uStack_948 = 0;
              puStack_950 = (undefined8 *)0x0;
              uStack_938 = 0;
              uStack_940 = 0;
              uStack_928 = 0;
              uStack_930 = 0;
              func_0x000108e227f4();
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = unaff_x25;
              func_0x00010bf52a60();
              if (ppuVar11 != (undefined **)0x0) {
                param_4 = (undefined **)*puStack_950;
                ppuVar21 = ppuVar11;
                do {
                  ppuVar11 = (undefined **)0x0;
                  do {
                    if ((undefined **)*puStack_950 != param_4) {
                      _objc_enumerationMutation(unaff_x25);
                    }
                    unaff_x27 = *(undefined ***)(lStack_958 + (long)ppuVar11 * 8);
                    ppuVar13 = unaff_x27;
                    func_0x00010c0b5ac0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar20 = puVar6;
                    func_0x00010bf4b900();
                    if (((ulong)puVar20 & 1) == 0) {
                      func_0x00010befa120(puVar6);
                      func_0x00010befa120(ppuVar17);
                    }
                    _objc_release(ppuVar13);
                    ppuVar11 = (undefined **)((long)ppuVar11 + 1);
                  } while (ppuVar21 != ppuVar11);
                  ppuVar21 = unaff_x25;
                  func_0x00010bf52a60();
                } while (ppuVar21 != (undefined **)0x0);
              }
              _objc_release(unaff_x25);
              ppuVar15 = (undefined **)((long)ppuVar15 + 1);
            } while (ppuVar15 != ppuVar14);
            ppuVar11 = &puStack_920;
            ppuVar9 = apuStack_7e0;
            ppuVar14 = ppuStack_968;
            func_0x00010bf52a60();
            unaff_x24 = (undefined **)0x0;
          } while (ppuVar14 != (undefined **)0x0);
        }
        ppuVar14 = ppuStack_968;
        _objc_release(ppuStack_968);
        _objc_release(puVar6);
        _objc_release(ppuVar14);
        _objc_release(ppuStack_980);
        ppuVar16 = ppuStack_978;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_660) {
          ___stack_chk_fail();
          ppuStack_998 = ppuVar14;
          uStack_988 = 0x106deefe4;
          ppppuVar23 = &pppuStack_990;
          lStack_9f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_9e0 = ppuVar13;
          ppuStack_9d8 = unaff_x27;
          ppuStack_9d0 = ppuVar21;
          ppuStack_9c8 = unaff_x25;
          ppuStack_9c0 = unaff_x24;
          puStack_9b8 = puVar6;
          ppuStack_9b0 = ppuVar17;
          ppuStack_9a8 = param_4;
          ppuStack_9a0 = ppuVar15;
          pppuStack_990 = &pppuStack_600;
          _objc_retain();
          if (ppuVar16 == (undefined **)0x0) {
            ppuVar3 = ppuVar16;
            ppuVar14 = ppuVar17;
            ppuVar17 = (undefined **)0x0;
          }
          else {
            ppuVar7 = (undefined **)0x0;
            ppuStack_ab8 = ppuVar16;
            func_0x000108020568();
            _objc_retainAutoreleasedReturnValue();
            dVar26 = 0.0;
            lStack_aa8 = 0;
            puStack_ab0 = (undefined *)0x0;
            uStack_a98 = 0;
            plStack_aa0 = (long *)0x0;
            uStack_a88 = 0;
            uStack_a90 = 0;
            uStack_a78 = 0;
            uStack_a80 = 0;
            ppuStack_ac0 = ppuVar16;
            func_0x000107e639a4();
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = &puStack_ab0;
            ppuVar9 = apuStack_a70;
            ppuVar17 = ppuVar16;
            func_0x00010bf52a60();
            if (ppuVar17 == (undefined **)0x0) {
              ppuVar14 = (undefined **)0x0;
            }
            else {
              ppuVar14 = (undefined **)0x0;
              lVar22 = *plStack_aa0;
              do {
                ppuVar15 = (undefined **)0x0;
                do {
                  if (*plStack_aa0 != lVar22) {
                    _objc_enumerationMutation(ppuVar16);
                  }
                  ppuVar21 = *(undefined ***)(lStack_aa8 + (long)ppuVar15 * 8);
                  ppuVar11 = ppuVar21;
                  func_0x00010c0cc0c0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar9 = ppuVar11;
                  func_0x00010bfae120();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x24 = ppuVar9;
                  func_0x00010bfadfa0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar9);
                  _objc_release(ppuVar11);
                  ppuVar11 = unaff_x24;
                  func_0x00010bfeddc0();
                  if ((int)ppuVar11 == 3) {
                    ppuVar18 = unaff_x24;
                    func_0x00010c297f00();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar11 = ppuVar18;
                    func_0x00010c297e20();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar13 = ppuVar11;
                    func_0x00010c08fa60();
                    _objc_release(ppuVar11);
                    if (ppuVar13 != (undefined **)0x0) {
                      ppuVar17 = (undefined **)PTR_PTR_1126c0e50;
                      _objc_alloc();
                      unaff_x25 = ppuVar18;
                      func_0x00010c297e20();
                      _objc_retainAutoreleasedReturnValue();
                      unaff_x27 = ppuVar18;
                      func_0x00010c297f60();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar9 = &PTR____CFConstantStringClassReference_110daafd8;
                      if (unaff_x27 != (undefined **)0x0) {
                        ppuVar9 = unaff_x27;
                      }
                      ppuVar11 = unaff_x25;
                      func_0x00010c036540();
                      _objc_release(unaff_x27);
                      _objc_release(unaff_x25);
                      _objc_release(ppuVar18);
                      _objc_release(unaff_x24);
                      _objc_release(ppuVar16);
                      goto LAB_106def348;
                    }
                    _objc_release(ppuVar18);
                  }
                  func_0x00010c0cc0c0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x27 = ppuVar21;
                  func_0x00010bfedf20();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x25 = unaff_x27;
                  func_0x00010c0fd520();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(unaff_x27);
                  _objc_release(ppuVar21);
                  ppuVar11 = unaff_x25;
                  func_0x00010bfda400();
                  if ((int)ppuVar11 != 0 && ppuVar14 == (undefined **)0x0) {
                    ppuVar11 = unaff_x25;
                    func_0x00010c0fd0e0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar21 = ppuVar11;
                    func_0x00010bfe2ee0();
                    unaff_x27 = unaff_x25;
                    func_0x00010c0fd0e0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar7 = unaff_x27;
                    func_0x00010c0b5940();
                    func_0x000100c4a928();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(unaff_x27);
                    _objc_release(ppuVar11);
                    ppuVar11 = ppuVar21;
                    func_0x00010c08fa60();
                    if (ppuVar11 == (undefined **)0x0) {
                      ppuVar14 = (undefined **)0x0;
                    }
                    else {
                      ppuVar14 = (undefined **)PTR_PTR_1126c0e50;
                      _objc_alloc();
                      unaff_x27 = unaff_x25;
                      func_0x00010c0d4f60();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c036540();
                      _objc_release(unaff_x27);
                    }
                    _objc_release(ppuVar21);
                  }
                  _objc_release(unaff_x25);
                  _objc_release(unaff_x24);
                  ppuVar15 = (undefined **)((long)ppuVar15 + 1);
                } while (ppuVar17 != ppuVar15);
                ppuVar11 = &puStack_ab0;
                ppuVar9 = apuStack_a70;
                ppuVar17 = ppuVar16;
                func_0x00010bf52a60();
              } while (ppuVar17 != (undefined **)0x0);
            }
            _objc_release(ppuVar16);
            _objc_retain(ppuVar14);
            ppuVar17 = ppuVar14;
            ppuVar18 = ppuVar21;
LAB_106def348:
            _objc_release(ppuVar14);
            _objc_release(ppuStack_ac0);
            ppuVar3 = ppuStack_ab8;
            param_4 = ppuVar16;
            ppuVar21 = ppuVar18;
          }
          ppuVar16 = ppuVar3;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_9f0) {
            uVar24 = 0x106def3a4;
            ___stack_chk_fail();
            pppuVar1 = &ppuStack_ac0;
            ppuVar18 = ppuVar17;
            do {
              fVar25 = SUB84(dVar26,0);
              ppuVar2 = (undefined **)((long)pppuVar1 + -0x130);
              *(undefined ***)((long)pppuVar1 + -0x60) = ppuVar13;
              *(undefined ***)((long)pppuVar1 + -0x58) = unaff_x27;
              *(undefined ***)((long)pppuVar1 + -0x50) = ppuVar21;
              *(undefined ***)((long)pppuVar1 + -0x48) = unaff_x25;
              *(undefined ***)((long)pppuVar1 + -0x40) = unaff_x24;
              *(undefined ***)((long)pppuVar1 + -0x38) = ppuVar18;
              *(undefined ***)((long)pppuVar1 + -0x30) = ppuVar14;
              *(undefined ***)((long)pppuVar1 + -0x28) = param_4;
              *(undefined ***)((long)pppuVar1 + -0x20) = ppuVar15;
              *(undefined ***)((long)pppuVar1 + -0x18) = ppuVar3;
              *(undefined8 *****)((long)pppuVar1 + -0x10) = ppppuVar23;
              *(undefined8 *)((long)pppuVar1 + -8) = uVar24;
              *(undefined8 *)((long)pppuVar1 + -0x68) =
                   *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              _objc_retain();
              if (ppuVar16 == (undefined **)0x0) {
                ppuVar17 = (undefined **)0x0;
              }
              else {
                ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x00010bf09f00();
                _objc_retainAutoreleasedReturnValue();
                uVar24 = 0;
                *(undefined8 *)((long)pppuVar1 + -0x128) = 0;
                *(undefined8 *)((long)pppuVar1 + -0x130) = 0;
                *(undefined8 *)((long)pppuVar1 + -0x118) = 0;
                *(undefined8 *)((long)pppuVar1 + -0x120) = 0;
                *(undefined8 *)((long)pppuVar1 + -0x108) = 0;
                *(undefined8 *)((long)pppuVar1 + -0x110) = 0;
                *(undefined8 *)((long)pppuVar1 + -0xf8) = 0;
                *(undefined8 *)((long)pppuVar1 + -0x100) = 0;
                ppuVar14 = ppuVar16;
                func_0x00010c0fee00();
                _objc_retainAutoreleasedReturnValue();
                ppuVar17 = ppuVar14;
                func_0x00010c0ff660();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar14);
                ppuVar9 = (undefined **)((long)pppuVar1 + -0xe8);
                ppuVar11 = ppuVar17;
                func_0x00010bf52a60();
                fVar25 = (float)uVar24;
                if (ppuVar11 != (undefined **)0x0) {
                  ppuVar21 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0x120);
                  do {
                    unaff_x27 = (undefined **)0x0;
                    do {
                      if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0x120) != ppuVar21) {
                        _objc_enumerationMutation(ppuVar17);
                      }
                      ppuVar18 = *(undefined ***)
                                  (*(long *)((long)pppuVar1 + -0x128) + (long)unaff_x27 * 8);
                      ppuVar9 = ppuVar18;
                      func_0x00010c08c3a0();
                      if ((int)ppuVar9 == 1) {
                        unaff_x24 = ppuVar18;
                        func_0x00010c0c3fe0();
                        _objc_retainAutoreleasedReturnValue();
                        unaff_x25 = unaff_x24;
                        func_0x00010bf0b760();
                        _objc_release(unaff_x24);
                        if ((int)unaff_x25 == 5) {
                          func_0x00010c0c3fe0();
                          _objc_retainAutoreleasedReturnValue();
                          unaff_x24 = ppuVar18;
                          func_0x00010853d324();
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010befa160(ppuVar15);
                          _objc_release(unaff_x24);
                          _objc_release(ppuVar18);
                        }
                      }
                      unaff_x27 = (undefined **)((long)unaff_x27 + 1);
                    } while (ppuVar11 != unaff_x27);
                    ppuVar9 = (undefined **)((long)pppuVar1 + -0xe8);
                    ppuVar11 = ppuVar17;
                    ppuVar2 = (undefined **)((long)pppuVar1 + -0x130);
                    func_0x00010bf52a60();
                    fVar25 = (float)uVar24;
                    ppuVar14 = (undefined **)0x0;
                  } while (ppuVar11 != (undefined **)0x0);
                }
                _objc_release(ppuVar17);
                ppuVar11 = ppuVar15;
                func_0x00010bf529e0();
                ppuVar17 = (undefined **)0x0;
                if (ppuVar11 != (undefined **)0x0) {
                  ppuVar17 = ppuVar15;
                }
                _objc_retain(ppuVar17);
                _objc_release(ppuVar15);
                ppuVar11 = ppuVar2;
              }
              ppuVar2 = ppuVar16;
              _objc_release();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar1 + -0x68))
              break;
              ___stack_chk_fail();
              *(double *)((long)pppuVar1 + -400) = unaff_d9;
              *(double *)((long)pppuVar1 + -0x188) = unaff_d8;
              *(undefined ***)((long)pppuVar1 + -0x180) = ppuVar21;
              *(undefined ***)((long)pppuVar1 + -0x178) = unaff_x25;
              *(undefined ***)((long)pppuVar1 + -0x170) = unaff_x24;
              *(undefined ***)((long)pppuVar1 + -0x168) = ppuVar18;
              *(undefined ***)((long)pppuVar1 + -0x160) = ppuVar14;
              *(undefined ***)((long)pppuVar1 + -0x158) = ppuVar17;
              *(undefined ***)((long)pppuVar1 + -0x150) = ppuVar15;
              *(undefined ***)((long)pppuVar1 + -0x148) = ppuVar16;
              *(undefined1 **)((long)pppuVar1 + -0x140) = (undefined1 *)((long)pppuVar1 + -0x10);
              *(code **)((long)pppuVar1 + -0x138) = FUN_106def594;
              *(undefined8 *)((long)pppuVar1 + -0x198) =
                   *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              ppuVar15 = ppuVar7;
              ppuVar16 = ppuVar11;
              _objc_retain();
              _objc_retain(ppuVar7);
              _objc_retain(ppuVar11);
              if (ppuVar2 != (undefined **)0x0) {
                ppuVar17 = ppuVar11;
                func_0x00010c23f480();
                _objc_retainAutoreleasedReturnValue();
                ppuVar14 = ppuVar17;
                func_0x00010bf529e0();
                _objc_release(ppuVar17);
                if (ppuVar14 != (undefined **)0x0) {
                  ppuVar17 = ppuVar11;
                  func_0x00010c23f480();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar14 = ppuVar17;
                  func_0x00010c0dfd40();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x24 = ppuVar14;
                  func_0x00010c2a2e80();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x25 = unaff_x24;
                  func_0x00010c2a2ea0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c2039e0(ppuVar2);
                  _objc_release(unaff_x25);
                  _objc_release(unaff_x24);
                  _objc_release(ppuVar14);
                  _objc_release(ppuVar17);
                }
                ppuVar17 = ppuVar11;
                FUN_106dee010(ppuVar11);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c2208c0(ppuVar2);
                _objc_release(ppuVar17);
                ppuVar15 = (undefined **)PTR_PTR_1126d2a00;
                _objc_retain(ppuVar2);
                _objc_opt_class();
                ppuVar17 = ppuVar2;
                _objc_opt_isKindOfClass();
                ppuVar14 = ppuVar2;
                if (((ulong)ppuVar17 & 1) == 0) {
                  ppuVar14 = (undefined **)0x0;
                }
                _objc_retain(ppuVar14);
                _objc_release(ppuVar2);
                if (((ulong)ppuVar17 & 1) != 0) {
                  ppuVar17 = ppuVar11;
                  func_0x00010bf0efa0(ppuVar11);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf1f3c0();
                  func_0x00010c1a6de0(ppuVar2);
                  _objc_release(ppuVar17);
                }
                func_0x00010bf8b160(ppuVar7);
                unaff_d8 = (double)fVar25;
                func_0x00010c1c4580(ppuVar2);
                func_0x00010bfed740(ppuVar7);
                func_0x00010c1c4920(ppuVar2);
                ppuVar17 = ppuVar7;
                func_0x00010b5fa088();
                if (ppuVar17 == (undefined **)0x9) {
                  func_0x000109023974(ppuVar7);
                  unaff_d9 = param_2;
                }
                else {
                  ppuVar17 = ppuVar7;
                  func_0x00010c2a5040();
                  unaff_d8 = (double)(int)ppuVar17;
                  ppuVar17 = ppuVar7;
                  func_0x00010bfe0640();
                  unaff_d9 = (double)(int)ppuVar17;
                }
                func_0x00010c1c56e0(ppuVar2);
                func_0x00010c1c4860(ppuVar2);
                ppuVar17 = ppuVar7;
                func_0x00010c0c5b00();
                ppuVar18 = (undefined **)PTR_PTR_1126c4550;
                if ((int)ppuVar17 < 1) {
                  ppuVar16 = ppuVar11;
                  func_0x00010c0c5b60();
                  func_0x00010c0c5ba0();
                  _objc_retainAutoreleasedReturnValue();
                  if (ppuVar18 != (undefined **)0x0) {
                    *(undefined ***)((long)pppuVar1 + -0x1a8) = ppuVar18;
                    goto LAB_106def81c;
                  }
                }
                else {
                  ppuVar18 = (undefined **)PTR_PTR_1126c4548;
                  _objc_alloc();
                  func_0x00010c0c5b00(ppuVar7);
                  func_0x00010c032420();
                  *(undefined ***)((long)pppuVar1 + -0x1a0) = ppuVar18;
LAB_106def81c:
                  ppuVar9 = (undefined **)0x1;
                  unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                  func_0x00010bf0a140();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar16 = unaff_x24;
                  func_0x00010c1c4de0(ppuVar2);
                  _objc_release(unaff_x24);
                }
                _objc_release(ppuVar18);
                _objc_release(ppuVar14);
              }
              _objc_release(ppuVar11);
              _objc_release(ppuVar7);
              ppuVar3 = ppuVar2;
              _objc_release();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar1 + -0x198)) {
                return ppuVar3;
              }
              ___stack_chk_fail();
              *(double *)((long)pppuVar1 + -0x220) = unaff_d9;
              *(double *)((long)pppuVar1 + -0x218) = unaff_d8;
              *(undefined ***)((long)pppuVar1 + -0x210) = ppuVar13;
              *(undefined ***)((long)pppuVar1 + -0x208) = unaff_x27;
              *(undefined ***)((long)pppuVar1 + -0x200) = ppuVar21;
              *(undefined ***)((long)pppuVar1 + -0x1f8) = unaff_x25;
              *(undefined ***)((long)pppuVar1 + -0x1f0) = unaff_x24;
              *(undefined ***)((long)pppuVar1 + -0x1e8) = ppuVar18;
              *(undefined ***)((long)pppuVar1 + -0x1e0) = ppuVar14;
              *(undefined ***)((long)pppuVar1 + -0x1d8) = ppuVar11;
              *(undefined ***)((long)pppuVar1 + -0x1d0) = ppuVar7;
              *(undefined ***)((long)pppuVar1 + -0x1c8) = ppuVar2;
              *(undefined1 **)((long)pppuVar1 + -0x1c0) = (undefined1 *)((long)pppuVar1 + -0x140);
              *(code **)((long)pppuVar1 + -0x1b8) = FUN_106def8b0;
              ppppuVar23 = (undefined8 ****)((long)pppuVar1 + -0x1c0);
              *(undefined8 *)((long)pppuVar1 + -0x228) =
                   *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              ppuVar17 = ppuVar15;
              ppuVar11 = ppuVar16;
              _objc_retain();
              _objc_retain(ppuVar15);
              _objc_retain(ppuVar16);
              if (ppuVar3 == (undefined **)0x0) goto LAB_106defb14;
              uVar24 = 0;
              *(undefined8 *)((long)pppuVar1 + -0x2c8) = 0;
              *(undefined8 *)((long)pppuVar1 + -0x2d0) = 0;
              *(undefined8 *)((long)pppuVar1 + -0x2b8) = 0;
              *(undefined8 *)((long)pppuVar1 + -0x2c0) = 0;
              *(undefined8 *)((long)pppuVar1 + -0x2e8) = 0;
              *(undefined8 *)((long)pppuVar1 + -0x2f0) = 0;
              *(undefined8 *)((long)pppuVar1 + -0x2d8) = 0;
              *(undefined8 *)((long)pppuVar1 + -0x2e0) = 0;
              ppuVar17 = ppuVar16;
              func_0x00010bf0d7e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = ppuVar17;
              func_0x00010bf0d800();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar17);
              ppuVar9 = (undefined **)((long)pppuVar1 + -0x2a8);
              ppuVar17 = ppuVar11;
              func_0x00010bf52a60();
              fVar25 = (float)uVar24;
              if (ppuVar17 != (undefined **)0x0) {
                unaff_x25 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0x2e0);
                do {
                  ppuVar21 = (undefined **)0x0;
                  do {
                    if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0x2e0) != unaff_x25) {
                      _objc_enumerationMutation(ppuVar11);
                    }
                    unaff_x24 = *(undefined ***)
                                 (*(long *)((long)pppuVar1 + -0x2e8) + (long)ppuVar21 * 8);
                    ppuVar14 = unaff_x24;
                    func_0x00010bf0d0a0();
                    fVar25 = (float)uVar24;
                    if ((int)ppuVar14 == 3) {
                      func_0x00010c2a3a80();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar17 = unaff_x24;
                      func_0x00010bdc2b80();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c2039e0(ppuVar3);
                      _objc_release(ppuVar17);
                      _objc_release(unaff_x24);
                      unaff_x24 = ppuVar17;
                      goto LAB_106defa04;
                    }
                    ppuVar21 = (undefined **)((long)ppuVar21 + 1);
                  } while (ppuVar17 != ppuVar21);
                  ppuVar9 = (undefined **)((long)pppuVar1 + -0x2a8);
                  ppuVar17 = ppuVar11;
                  func_0x00010bf52a60();
                  fVar25 = (float)uVar24;
                } while (ppuVar17 != (undefined **)0x0);
              }
LAB_106defa04:
              _objc_release(ppuVar11);
              ppuVar7 = (undefined **)PTR_PTR_1126d2a00;
              _objc_retain(ppuVar3);
              _objc_opt_class();
              ppuVar18 = ppuVar3;
              _objc_opt_isKindOfClass();
              ppuVar14 = ppuVar3;
              if (((ulong)ppuVar18 & 1) == 0) {
                ppuVar14 = (undefined **)0x0;
              }
              _objc_retain(ppuVar14);
              _objc_release(ppuVar3);
              if (((ulong)ppuVar18 & 1) != 0) {
                func_0x000107e629e4(ppuVar16);
                func_0x00010c1a6de0(ppuVar3);
              }
              func_0x00010bf8b160(ppuVar15);
              dVar26 = (double)fVar25;
              func_0x00010c1c4580(ppuVar3);
              func_0x00010bfed740(ppuVar15);
              func_0x00010c1c4920(ppuVar3);
              ppuVar17 = ppuVar15;
              func_0x00010b5fa088();
              if (ppuVar17 == (undefined **)0x9) {
                func_0x000109023974(ppuVar15);
                unaff_d8 = dVar26;
                unaff_d9 = param_2;
              }
              else {
                ppuVar17 = ppuVar15;
                func_0x00010c2a5040();
                unaff_d8 = (double)(int)ppuVar17;
                ppuVar17 = ppuVar15;
                func_0x00010bfe0640();
                unaff_d9 = (double)(int)ppuVar17;
              }
              func_0x00010c1c56e0(ppuVar3);
              ppuVar11 = (undefined **)(long)unaff_d9;
              func_0x00010c1c4860(ppuVar3);
              uVar24 = 0x106defae8;
              pppuVar1 = (undefined ***)((long)pppuVar1 + -0x2f0);
              param_4 = ppuVar16;
            } while( true );
          }
        }
      }
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar17);
  return ppuVar17;
code_r0x000106dee8a4:
  unaff_x25 = (undefined **)((long)unaff_x25 + 1);
  if (ppuVar17 == unaff_x25) goto code_r0x000106dee8b0;
  goto LAB_106dee85c;
code_r0x000106dee8b0:
  ppuVar17 = ppuVar15;
  func_0x00010bf52a60();
  unaff_x24 = (undefined **)0x0;
  ppuVar9 = (undefined **)0x0;
  if (ppuVar17 == (undefined **)0x0) goto LAB_106dee8cc;
  goto LAB_106dee858;
LAB_106defb14:
  _objc_release(ppuVar16);
  _objc_release(ppuVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar1 + -0x228)) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  *(undefined ***)((long)pppuVar1 + -0x350) = ppuVar13;
  *(undefined ***)((long)pppuVar1 + -0x348) = unaff_x27;
  *(undefined ***)((long)pppuVar1 + -0x340) = ppuVar21;
  *(undefined ***)((long)pppuVar1 + -0x338) = unaff_x25;
  *(undefined ***)((long)pppuVar1 + -0x330) = unaff_x24;
  *(undefined ***)((long)pppuVar1 + -0x328) = ppuVar18;
  *(undefined ***)((long)pppuVar1 + -800) = ppuVar14;
  *(undefined ***)((long)pppuVar1 + -0x318) = ppuVar16;
  *(undefined ***)((long)pppuVar1 + -0x310) = ppuVar15;
  *(undefined8 *)((long)pppuVar1 + -0x308) = 0;
  *(undefined8 *****)((long)pppuVar1 + -0x300) = ppppuVar23;
  *(code **)((long)pppuVar1 + -0x2f8) = FUN_106defb6c;
  *(undefined8 *)((long)pppuVar1 + -0x360) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = ppuVar17;
  _objc_retain();
  *(undefined ***)((long)pppuVar1 + -0x8b0) = ppuVar17;
  _objc_retain(ppuVar17);
  _objc_retain(ppuVar11);
  _objc_retain(ppuVar9);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  *(undefined **)((long)pppuVar1 + -0x8c0) = puVar6;
  puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  *(undefined **)((long)pppuVar1 + -0x8a8) = puVar6;
  *(undefined ***)((long)pppuVar1 + -0x918) = ppuVar3;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  *(undefined ***)((long)pppuVar1 + -0x908) = ppuVar11;
  *(undefined ***)((long)pppuVar1 + -0x8b8) = ppuVar9;
  if ((ppuVar11 != (undefined **)0x0) && (ppuVar3 == (undefined **)0x0)) {
    *(undefined8 *)((long)pppuVar1 + -0x6f8) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x700) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x6e8) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x6f0) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x718) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x720) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x708) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x710) = 0;
    lVar22 = *(long *)((long)pppuVar1 + -0x908);
    _objc_retain(lVar22);
    func_0x00010bf52a60();
    *(long *)((long)pppuVar1 + -0x8c8) = lVar22;
    if (lVar22 != 0) {
      *(undefined8 *)((long)pppuVar1 + -0x8d0) = **(undefined8 **)((long)pppuVar1 + -0x710);
      do {
        lVar22 = 0;
        do {
          if (**(long **)((long)pppuVar1 + -0x710) != *(long *)((long)pppuVar1 + -0x8d0)) {
            _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0x908));
          }
          ppuVar17 = *(undefined ***)(*(long *)((long)pppuVar1 + -0x718) + lVar22 * 8);
          ppuVar18 = ppuVar17;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar21 = ppuVar18;
          func_0x00010bf30500();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = ppuVar21;
          func_0x00010c0ca860();
          _objc_release(ppuVar21);
          _objc_release(ppuVar18);
          if (unaff_x27 != (undefined **)0x0) {
            *(undefined8 *)((long)pppuVar1 + -0x738) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x740) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x728) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x730) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x758) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x760) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x748) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x750) = 0;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar21 = ppuVar17;
            func_0x00010bf30500();
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = ppuVar21;
            func_0x00010c0ca840();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar21);
            _objc_release(ppuVar17);
            ppuVar9 = ppuVar11;
            func_0x00010bf52a60();
            if (ppuVar9 != (undefined **)0x0) {
              unaff_x24 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0x750);
              do {
                ppuVar21 = (undefined **)0x0;
                do {
                  if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0x750) != unaff_x24) {
                    _objc_enumerationMutation(ppuVar11);
                  }
                  ppuVar16 = *(undefined ***)
                              (*(long *)((long)pppuVar1 + -0x758) + (long)ppuVar21 * 8);
                  unaff_x27 = ppuVar16;
                  func_0x00010bf96da0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar13 = unaff_x27;
                  func_0x00010c290fa0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar15 = ppuVar13;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  _objc_release(ppuVar13);
                  _objc_release(unaff_x27);
                  ppuVar17 = ppuVar16;
                  if (ppuVar15 != (undefined **)0x0) {
                    ppuVar15 = *(undefined ***)((long)pppuVar1 + -0x8b8);
                    func_0x00010c269d40();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf96da0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar13 = ppuVar16;
                    func_0x00010c290fa0();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x25 = ppuVar13;
                    func_0x00010c2923e0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar17 = ppuVar15;
                    func_0x00010c0ee920();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(unaff_x25);
                    _objc_release(ppuVar13);
                    _objc_release(ppuVar16);
                    _objc_release(ppuVar15);
                    if (ppuVar17 != (undefined **)0x0) {
                      ppuVar16 = ppuVar17;
                      func_0x00010c2923e0();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar13 = ppuVar17;
                      func_0x00010c294420();
                      _objc_retainAutoreleasedReturnValue();
                      if (ppuVar16 != (undefined **)0x0) {
                        uVar4 = *(ulong *)((long)pppuVar1 + -0x8a8);
                        func_0x00010bf4b900();
                        if ((uVar4 & 1) == 0) {
                          uVar4 = *(ulong *)((long)pppuVar1 + -0x8b0);
                          func_0x00010bf4b900();
                          if ((uVar4 & 1) == 0) {
                            puVar6 = PTR_PTR_1126d2aa8;
                            _objc_alloc(PTR_PTR_1126d2aa8);
                            func_0x00010c05f760();
                            func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8c0));
                            func_0x00010befa120(*(undefined8 *)((long)pppuVar1 + -0x8a8));
                            _objc_release(puVar6);
                          }
                        }
                      }
                      _objc_release(ppuVar13);
                      _objc_release(ppuVar16);
                    }
                    _objc_release(ppuVar17);
                    unaff_x27 = ppuVar16;
                  }
                  ppuVar21 = (undefined **)((long)ppuVar21 + 1);
                } while (ppuVar9 != ppuVar21);
                ppuVar9 = ppuVar11;
                func_0x00010bf52a60();
                ppuVar21 = (undefined **)0x0;
              } while (ppuVar9 != (undefined **)0x0);
            }
            _objc_release(ppuVar11);
            ppuVar18 = ppuVar17;
          }
          lVar22 = lVar22 + 1;
        } while (lVar22 != *(long *)((long)pppuVar1 + -0x8c8));
        lVar22 = *(long *)((long)pppuVar1 + -0x908);
        func_0x00010bf52a60();
        *(long *)((long)pppuVar1 + -0x8c8) = lVar22;
      } while (lVar22 != 0);
    }
    _objc_release(*(undefined8 *)((long)pppuVar1 + -0x908));
    ppuVar9 = *(undefined ***)((long)pppuVar1 + -0x8b8);
  }
  *(undefined8 *)((long)pppuVar1 + -0x778) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x780) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x768) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x770) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x798) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x7a0) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x788) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x790) = 0;
  lVar22 = *(long *)((long)pppuVar1 + -0x918);
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)((long)pppuVar1 + -0x910) = lVar22;
  func_0x00010bf52a60();
  *(long *)((long)pppuVar1 + -0x8f0) = lVar22;
  if (lVar22 != 0) {
    uVar24 = **(undefined8 **)((long)pppuVar1 + -0x790);
    *(undefined ***)((long)pppuVar1 + -0x900) = &PTR____CFConstantStringClassReference_110efb658;
    *(undefined8 *)((long)pppuVar1 + -0x8f8) = uVar24;
    do {
      lVar22 = 0;
      do {
        if (**(long **)((long)pppuVar1 + -0x790) != *(long *)((long)pppuVar1 + -0x8f8)) {
          _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0x910));
        }
        *(long *)((long)pppuVar1 + -0x8e0) = lVar22;
        lVar12 = *(long *)(*(long *)((long)pppuVar1 + -0x798) + lVar22 * 8);
        puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)pppuVar1 + -0x8d0) = puVar6;
        *(undefined8 *)((long)pppuVar1 + -0x7d8) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7e0) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7c8) = 0;
        *(undefined8 *)((long)pppuVar1 + -2000) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7b8) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7c0) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7a8) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7b0) = 0;
        *(long *)((long)pppuVar1 + -0x8e8) = lVar12;
        func_0x00010c293dc0();
        _objc_retainAutoreleasedReturnValue();
        lVar22 = lVar12;
        func_0x00010bf52a60();
        if (lVar22 != 0) {
          unaff_x24 = (undefined **)**(undefined8 **)((long)pppuVar1 + -2000);
          *(long *)((long)pppuVar1 + -0x8d8) = lVar12;
          do {
            lVar19 = 0;
            do {
              if ((undefined **)**(undefined8 **)((long)pppuVar1 + -2000) != unaff_x24) {
                _objc_enumerationMutation(lVar12);
              }
              ppuVar18 = *(undefined ***)(*(long *)((long)pppuVar1 + -0x7d8) + lVar19 * 8);
              ppuVar21 = ppuVar9;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              ppuVar17 = ppuVar18;
              func_0x00010c2923e0(ppuVar18);
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = ppuVar21;
              func_0x00010c0ee920();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar17);
              _objc_release(ppuVar21);
              ppuVar21 = unaff_x27;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar13 = unaff_x27;
              func_0x00010c294420();
              _objc_retainAutoreleasedReturnValue();
              if (unaff_x27 != (undefined **)0x0 && ppuVar21 != (undefined **)0x0) {
                uVar4 = *(ulong *)((long)pppuVar1 + -0x8a8);
                func_0x00010bf4b900();
                if ((uVar4 & 1) == 0) {
                  uVar4 = *(ulong *)((long)pppuVar1 + -0x8b0);
                  func_0x00010bf4b900();
                  if ((uVar4 & 1) == 0) {
                    puVar6 = PTR_PTR_1126d2aa8;
                    _objc_alloc();
                    func_0x00010c05f760();
                    *(undefined **)((long)pppuVar1 + -0x8c8) = puVar6;
                    func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8c0));
                    puVar6 = PTR_PTR_1126d2ab0;
                    ppuVar17 = ppuVar18;
                    func_0x00010c24ff00(ppuVar18);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c067fc0();
                    func_0x00010c08fa60(ppuVar13);
                    func_0x00010bf51620(puVar6);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c24ff00();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8d0));
                    _objc_release(ppuVar18);
                    lVar12 = *(long *)((long)pppuVar1 + -0x8d8);
                    _objc_release(puVar6);
                    ppuVar9 = *(undefined ***)((long)pppuVar1 + -0x8b8);
                    _objc_release(ppuVar17);
                    func_0x00010befa120(*(undefined8 *)((long)pppuVar1 + -0x8a8));
                    _objc_release(*(undefined8 *)((long)pppuVar1 + -0x8c8));
                  }
                }
              }
              _objc_release(ppuVar13);
              _objc_release(ppuVar21);
              _objc_release(unaff_x27);
              lVar19 = lVar19 + 1;
            } while (lVar22 != lVar19);
            lVar22 = lVar12;
            func_0x00010bf52a60();
            ppuVar21 = (undefined **)0x0;
          } while (lVar22 != 0);
        }
        _objc_release(lVar12);
        ppuVar17 = (undefined **)PTR_PTR_1126d1320;
        uVar24 = *(undefined8 *)((long)pppuVar1 + -0x8e8);
        func_0x00010c26b700(uVar24);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)((long)pppuVar1 + -0x8d0);
        func_0x00010bf51e00(uVar5);
        func_0x00010bf9ef60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar24);
        *(undefined8 *)((long)pppuVar1 + -0x7f8) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x800) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7e8) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7f0) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x818) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x820) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x808) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x810) = 0;
        unaff_x25 = ppuVar17;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = unaff_x25;
        func_0x00010bf52a60();
        if (ppuVar11 != (undefined **)0x0) {
          lVar22 = **(long **)((long)pppuVar1 + -0x810);
          do {
            unaff_x24 = (undefined **)0x0;
            do {
              if (**(long **)((long)pppuVar1 + -0x810) != lVar22) {
                _objc_enumerationMutation(unaff_x25);
              }
              ppuVar9 = *(undefined ***)(*(long *)((long)pppuVar1 + -0x818) + (long)unaff_x24 * 8);
              ppuVar18 = ppuVar9;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar21 = ppuVar9;
              func_0x00010c294420(ppuVar9);
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar9 != (undefined **)0x0 && ppuVar18 != (undefined **)0x0) {
                uVar4 = *(ulong *)((long)pppuVar1 + -0x8a8);
                func_0x00010bf4b900();
                if ((uVar4 & 1) == 0) {
                  uVar4 = *(ulong *)((long)pppuVar1 + -0x8b0);
                  func_0x00010bf4b900();
                  if ((uVar4 & 1) == 0) {
                    puVar6 = PTR_PTR_1126d2aa8;
                    _objc_alloc(PTR_PTR_1126d2aa8);
                    func_0x00010c05f760();
                    func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8c0));
                    func_0x00010befa120(*(undefined8 *)((long)pppuVar1 + -0x8a8));
                    _objc_release(puVar6);
                  }
                }
              }
              _objc_release(ppuVar21);
              _objc_release(ppuVar18);
              unaff_x24 = (undefined **)((long)unaff_x24 + 1);
            } while (ppuVar11 != unaff_x24);
            ppuVar11 = unaff_x25;
            func_0x00010bf52a60();
            ppuVar21 = (undefined **)0x0;
          } while (ppuVar11 != (undefined **)0x0);
        }
        _objc_release(unaff_x25);
        _objc_release(ppuVar17);
        _objc_release(*(undefined8 *)((long)pppuVar1 + -0x8d0));
        lVar22 = *(long *)((long)pppuVar1 + -0x8e0) + 1;
        ppuVar9 = *(undefined ***)((long)pppuVar1 + -0x8b8);
      } while (lVar22 != *(long *)((long)pppuVar1 + -0x8f0));
      lVar22 = *(long *)((long)pppuVar1 + -0x910);
      func_0x00010bf52a60();
      *(long *)((long)pppuVar1 + -0x8f0) = lVar22;
    } while (lVar22 != 0);
  }
  _objc_release(*(undefined8 *)((long)pppuVar1 + -0x910));
  *(undefined8 *)((long)pppuVar1 + -0x838) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x840) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x828) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x830) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x858) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x860) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x848) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x850) = 0;
  lVar22 = *(long *)((long)pppuVar1 + -0x918);
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)((long)pppuVar1 + -0x8c8) = lVar22;
  func_0x00010bf52a60();
  if (lVar22 != 0) {
    unaff_x24 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0x850);
    do {
      lVar12 = 0;
      do {
        if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0x850) != unaff_x24) {
          _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0x8c8));
        }
        ppuVar11 = *(undefined ***)(*(long *)((long)pppuVar1 + -0x858) + lVar12 * 8);
        ppuVar21 = ppuVar11;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar21;
        func_0x00010c0ca400();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar17;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar17);
        _objc_release(ppuVar21);
        ppuVar21 = ppuVar11;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar21;
        func_0x00010c0ca400();
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = ppuVar17;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar17);
        _objc_release(ppuVar21);
        ppuVar21 = ppuVar13;
        func_0x00010c08fa60();
        if (ppuVar21 == (undefined **)0x0) {
LAB_106df0504:
          ppuVar21 = ppuVar11;
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = ppuVar21;
          func_0x00010c244f40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar15 = ppuVar17;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar13);
          _objc_release(ppuVar17);
          _objc_release(ppuVar21);
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar11;
          func_0x00010c244f40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = ppuVar9;
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar18);
          _objc_release(ppuVar9);
          _objc_release(ppuVar11);
          ppuVar21 = ppuVar15;
          func_0x00010c08fa60();
          if (ppuVar21 != (undefined **)0x0) {
            uVar4 = *(ulong *)((long)pppuVar1 + -0x8a8);
            func_0x00010bf4b900();
            if ((uVar4 & 1) == 0) {
              uVar4 = *(ulong *)((long)pppuVar1 + -0x8b0);
              func_0x00010bf4b900();
              if ((uVar4 & 1) == 0) {
                unaff_x27 = (undefined **)PTR_PTR_1126d2aa8;
                _objc_alloc();
                func_0x00010c05f760();
                func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8c0));
                goto LAB_106df0640;
              }
            }
          }
        }
        else {
          uVar4 = *(ulong *)((long)pppuVar1 + -0x8a8);
          func_0x00010bf4b900();
          if ((uVar4 & 1) != 0) goto LAB_106df0504;
          uVar4 = *(ulong *)((long)pppuVar1 + -0x8b0);
          func_0x00010bf4b900();
          if ((uVar4 & 1) != 0) goto LAB_106df0504;
          unaff_x27 = (undefined **)PTR_PTR_1126d2aa8;
          _objc_alloc();
          func_0x00010c05f760();
          func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8c0));
          unaff_x25 = ppuVar18;
          ppuVar15 = ppuVar13;
LAB_106df0640:
          func_0x00010befa120(*(undefined8 *)((long)pppuVar1 + -0x8a8));
          _objc_release(unaff_x27);
          ppuVar13 = ppuVar15;
        }
        _objc_release(unaff_x25);
        _objc_release(ppuVar15);
        lVar12 = lVar12 + 1;
      } while (lVar22 != lVar12);
      lVar22 = *(long *)((long)pppuVar1 + -0x8c8);
      func_0x00010bf52a60();
      ppuVar21 = (undefined **)0x0;
    } while (lVar22 != 0);
  }
  _objc_release(*(undefined8 *)((long)pppuVar1 + -0x8c8));
  *(undefined8 *)((long)pppuVar1 + -0x878) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x880) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x868) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x870) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x898) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x8a0) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x888) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x890) = 0;
  ppuVar17 = *(undefined ***)((long)pppuVar1 + -0x908);
  _objc_retain(ppuVar17);
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x27 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0x890);
    do {
      ppuVar13 = (undefined **)0x0;
      do {
        if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0x890) != unaff_x27) {
          _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0x908));
        }
        ppuVar18 = *(undefined ***)(*(long *)((long)pppuVar1 + -0x898) + (long)ppuVar13 * 8);
        ppuVar11 = ppuVar18;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar11;
        func_0x00010bfedf20();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = ppuVar9;
        func_0x00010bfedf40();
        _objc_release(ppuVar9);
        _objc_release(ppuVar11);
        if ((int)unaff_x24 == 6) {
          ppuVar11 = ppuVar18;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar11;
          func_0x00010bfedf20();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = ppuVar9;
          func_0x00010c0ca640();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar9);
          _objc_release(ppuVar11);
          ppuVar11 = unaff_x25;
          func_0x00010bfde100();
          if ((int)ppuVar11 != 0) {
            ppuVar21 = unaff_x25;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = ppuVar21;
            func_0x00010bfe2ee0();
            unaff_x24 = unaff_x25;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar14 = unaff_x24;
            func_0x00010c0b5940();
            ppuVar18 = ppuVar9;
            func_0x000100c4a928();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x24);
            _objc_release(ppuVar21);
            ppuVar21 = unaff_x25;
            func_0x00010c294420();
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = ppuVar18;
            func_0x00010c08fa60();
            if (ppuVar11 != (undefined **)0x0) {
              uVar4 = *(ulong *)((long)pppuVar1 + -0x8a8);
              func_0x00010bf4b900();
              if ((uVar4 & 1) == 0) {
                uVar4 = *(ulong *)((long)pppuVar1 + -0x8b0);
                func_0x00010bf4b900();
                if ((uVar4 & 1) == 0) {
                  puVar6 = PTR_PTR_1126d2aa8;
                  _objc_alloc(PTR_PTR_1126d2aa8);
                  func_0x00010c05f760();
                  func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8c0));
                  func_0x00010befa120(*(undefined8 *)((long)pppuVar1 + -0x8a8));
                  _objc_release(puVar6);
                }
              }
            }
            _objc_release(ppuVar21);
            _objc_release(ppuVar18);
          }
          _objc_release(unaff_x25);
        }
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      } while (ppuVar17 != ppuVar13);
      ppuVar17 = *(undefined ***)((long)pppuVar1 + -0x908);
      func_0x00010bf52a60();
    } while (ppuVar17 != (undefined **)0x0);
  }
  uVar24 = *(undefined8 *)((long)pppuVar1 + -0x908);
  _objc_release(uVar24);
  ppuVar11 = *(undefined ***)((long)pppuVar1 + -0x8c0);
  ppuVar17 = ppuVar11;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(*(undefined8 *)((long)pppuVar1 + -0x8a8));
  _objc_release(ppuVar11);
  _objc_release(*(undefined8 *)((long)pppuVar1 + -0x8b8));
  _objc_release(uVar24);
  _objc_release(*(undefined8 *)((long)pppuVar1 + -0x8b0));
  _objc_release(*(undefined8 *)((long)pppuVar1 + -0x918));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)pppuVar1 + -0x360)) {
    ___stack_chk_fail();
    *(undefined ***)((long)pppuVar1 + -0x980) = ppuVar13;
    *(undefined ***)((long)pppuVar1 + -0x978) = unaff_x27;
    *(undefined ***)((long)pppuVar1 + -0x970) = ppuVar21;
    *(undefined ***)((long)pppuVar1 + -0x968) = unaff_x25;
    *(undefined ***)((long)pppuVar1 + -0x960) = unaff_x24;
    *(undefined ***)((long)pppuVar1 + -0x958) = ppuVar18;
    *(undefined ***)((long)pppuVar1 + -0x950) = ppuVar9;
    *(undefined ***)((long)pppuVar1 + -0x948) = ppuVar11;
    *(undefined8 *)((long)pppuVar1 + -0x940) = uVar24;
    *(undefined ***)((long)pppuVar1 + -0x938) = ppuVar17;
    *(undefined1 **)((long)pppuVar1 + -0x930) = (undefined1 *)((long)pppuVar1 + -0x300);
    *(undefined8 *)((long)pppuVar1 + -0x928) = 0x106df0944;
    *(undefined8 *)((long)pppuVar1 + -0x990) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar17 = (undefined **)PTR_PTR_1126bc7b8;
    func_0x00010bfa7160();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar17;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar17);
    ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)((long)pppuVar1 + -0xa48) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa50) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa38) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa40) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa28) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa30) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa18) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa20) = 0;
    ppuVar17 = ppuVar11;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar17;
    func_0x00010bf52a60();
    if (ppuVar16 != (undefined **)0x0) {
      ppuVar21 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0xa40);
      unaff_x27 = &PTR_PTR_1126d2000;
      do {
        ppuVar13 = (undefined **)0x0;
        do {
          if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0xa40) != ppuVar21) {
            _objc_enumerationMutation(ppuVar17);
          }
          unaff_x24 = *(undefined ***)(*(long *)((long)pppuVar1 + -0xa48) + (long)ppuVar13 * 8);
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x24;
          func_0x00010c2751c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar18 = unaff_x25;
          func_0x00010c275660();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          if (ppuVar18 != (undefined **)0x0) {
            unaff_x24 = (undefined **)PTR_PTR_1126d2ab8;
            _objc_alloc();
            func_0x00010c054560();
            if (unaff_x24 != (undefined **)0x0) {
              func_0x00010befa120(ppuVar15);
            }
            _objc_release(unaff_x24);
          }
          _objc_release(ppuVar18);
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
        } while (ppuVar16 != ppuVar13);
        ppuVar16 = ppuVar17;
        func_0x00010bf52a60();
        ppuVar9 = (undefined **)0x0;
      } while (ppuVar16 != (undefined **)0x0);
    }
    _objc_release(ppuVar17);
    ppuVar17 = ppuVar15;
    func_0x00010bf51e00();
    _objc_release(ppuVar15);
    _objc_release(ppuVar11);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)pppuVar1 + -0x990)) {
      ___stack_chk_fail();
      *(undefined ***)((long)pppuVar1 + -0xaa0) = ppuVar21;
      *(undefined ***)((long)pppuVar1 + -0xa98) = unaff_x25;
      *(undefined ***)((long)pppuVar1 + -0xa90) = unaff_x24;
      *(undefined ***)((long)pppuVar1 + -0xa88) = ppuVar18;
      *(undefined ***)((long)pppuVar1 + -0xa80) = ppuVar9;
      *(undefined ***)((long)pppuVar1 + -0xa78) = ppuVar17;
      *(undefined ***)((long)pppuVar1 + -0xa70) = ppuVar15;
      *(undefined ***)((long)pppuVar1 + -0xa68) = ppuVar11;
      *(undefined1 **)((long)pppuVar1 + -0xa60) = (undefined1 *)((long)pppuVar1 + -0x930);
      *(code **)((long)pppuVar1 + -0xa58) = FUN_106df0b34;
      *(undefined8 *)((long)pppuVar1 + -0xaa8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      ppuVar11 = (undefined **)PTR_PTR_1126bc7b8;
      func_0x00010bfa7160();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar11;
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar11);
      *(undefined8 *)((long)pppuVar1 + -0xb48) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb50) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb38) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb40) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb68) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb70) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb58) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb60) = 0;
      ppuVar11 = ppuVar9;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar11;
      func_0x00010bf52a60();
      if (ppuVar15 != (undefined **)0x0) {
        unaff_x24 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0xb60);
        ppuVar17 = ppuVar15;
        do {
          unaff_x25 = (undefined **)0x0;
          do {
            if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0xb60) != unaff_x24) {
              _objc_enumerationMutation(ppuVar11);
            }
            ppuVar18 = *(undefined ***)(*(long *)((long)pppuVar1 + -0xb68) + (long)unaff_x25 * 8);
            func_0x00010bfedfc0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar16 = ppuVar18;
            func_0x00010c25bcc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar18);
            ppuVar15 = ppuVar17;
            if (ppuVar16 != (undefined **)0x0) goto LAB_106df0c58;
            unaff_x25 = (undefined **)((long)unaff_x25 + 1);
          } while (ppuVar17 != unaff_x25);
          ppuVar17 = ppuVar11;
          func_0x00010bf52a60();
        } while (ppuVar17 != (undefined **)0x0);
      }
      ppuVar15 = ppuVar17;
      ppuVar16 = (undefined **)0x0;
LAB_106df0c58:
      ppuVar17 = ppuVar16;
      _objc_release(ppuVar11);
      ppuVar16 = ppuVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)pppuVar1 + -0xaa8)) {
        ___stack_chk_fail();
        *(undefined ***)((long)pppuVar1 + -0xbb0) = ppuVar13;
        *(undefined ***)((long)pppuVar1 + -0xba8) = unaff_x27;
        *(undefined ***)((long)pppuVar1 + -0xba0) = ppuVar17;
        *(undefined ***)((long)pppuVar1 + -0xb98) = ppuVar15;
        *(undefined ***)((long)pppuVar1 + -0xb90) = ppuVar11;
        *(undefined ***)((long)pppuVar1 + -0xb88) = ppuVar9;
        *(undefined1 **)((long)pppuVar1 + -0xb80) = (undefined1 *)((long)pppuVar1 + -0xa60);
        *(code **)((long)pppuVar1 + -0xb78) = FUN_106df0ca4;
        *(undefined8 *)((long)pppuVar1 + -3000) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain();
        *(undefined8 *)((long)pppuVar1 + -0xc78) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc80) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc68) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc70) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc58) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc60) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc48) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc50) = 0;
        _objc_retain(ppuVar16);
        ppuVar11 = ppuVar16;
        func_0x00010bf52a60();
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar15 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0xc70);
          do {
            ppuVar17 = (undefined **)0x0;
            do {
              if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0xc70) != ppuVar15) {
                _objc_enumerationMutation(ppuVar16);
              }
              lVar22 = *(long *)(*(long *)((long)pppuVar1 + -0xc78) + (long)ppuVar17 * 8);
              func_0x00010b5fa088();
              if (lVar22 != 1) {
                ppuVar9 = (undefined **)0x0;
                ppuVar11 = ppuVar17;
                goto LAB_106df0d70;
              }
              ppuVar17 = (undefined **)((long)ppuVar17 + 1);
            } while (ppuVar11 != ppuVar17);
            ppuVar11 = ppuVar16;
            func_0x00010bf52a60();
          } while (ppuVar11 != (undefined **)0x0);
        }
        ppuVar9 = (undefined **)0x1;
        ppuVar11 = ppuVar17;
LAB_106df0d70:
        _objc_release(ppuVar16);
        ppuVar17 = ppuVar16;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar1 + -3000)) {
          return ppuVar9;
        }
        ___stack_chk_fail();
        *(undefined ***)((long)pppuVar1 + -0xce0) = ppuVar13;
        *(undefined ***)((long)pppuVar1 + -0xcd8) = unaff_x27;
        *(undefined ***)((long)pppuVar1 + -0xcd0) = ppuVar21;
        *(undefined ***)((long)pppuVar1 + -0xcc8) = unaff_x25;
        *(undefined ***)((long)pppuVar1 + -0xcc0) = unaff_x24;
        *(undefined ***)((long)pppuVar1 + -0xcb8) = ppuVar18;
        *(undefined ***)((long)pppuVar1 + -0xcb0) = ppuVar11;
        *(undefined ***)((long)pppuVar1 + -0xca8) = ppuVar15;
        *(undefined ***)((long)pppuVar1 + -0xca0) = ppuVar9;
        *(undefined ***)((long)pppuVar1 + -0xc98) = ppuVar16;
        *(undefined1 **)((long)pppuVar1 + -0xc90) = (undefined1 *)((long)pppuVar1 + -0xb80);
        *(undefined8 *)((long)pppuVar1 + -0xc88) = 0x106df0db8;
        *(undefined8 *)((long)pppuVar1 + -0xcf0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        *(undefined8 *)((long)pppuVar1 + -0xda8) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xdb0) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xd98) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xda0) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xd88) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xd90) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xd78) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xd80) = 0;
        func_0x00010c2553e0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined ***)((long)pppuVar1 + -0xdd0) = ppuVar17;
        func_0x00010bf52a60();
        *(undefined ***)((long)pppuVar1 + -0xdc0) = ppuVar17;
        if (ppuVar17 != (undefined **)0x0) {
          *(undefined8 *)((long)pppuVar1 + -0xdc8) = **(undefined8 **)((long)pppuVar1 + -0xda0);
          do {
            ppuVar15 = (undefined **)0x0;
            do {
              if (**(long **)((long)pppuVar1 + -0xda0) != *(long *)((long)pppuVar1 + -0xdc8)) {
                _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0xdd0));
              }
              unaff_x25 = *(undefined ***)(*(long *)((long)pppuVar1 + -0xda8) + (long)ppuVar15 * 8);
              ppuVar18 = unaff_x25;
              func_0x00010bf06320();
              _objc_retainAutoreleasedReturnValue();
              unaff_x24 = ppuVar18;
              func_0x00010c27dd80();
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = unaff_x24;
              func_0x00010b774bc4();
              _objc_release(unaff_x24);
              _objc_release(ppuVar18);
              if (ppuVar11 == (undefined **)0x3fa644c1 ||
                  ppuVar11 == (undefined **)0xfffffffff0575f4d) {
                *(undefined **)((long)pppuVar1 + -0xdb8) = PTR_PTR_1126c4978;
                ppuVar18 = unaff_x25;
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                unaff_x24 = ppuVar18;
                func_0x00010bf05ba0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar21 = unaff_x25;
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                unaff_x27 = ppuVar21;
                func_0x00010bf0d6a0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar13 = unaff_x25;
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                ppuVar17 = ppuVar13;
                func_0x00010c27dd80();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                ppuVar9 = unaff_x25;
                func_0x00010bf05300();
                _objc_retainAutoreleasedReturnValue();
                uVar24 = *(undefined8 *)((long)pppuVar1 + -0xdb8);
                func_0x00010c241c80();
                _objc_retainAutoreleasedReturnValue();
                *(undefined8 *)((long)pppuVar1 + -0xdb8) = uVar24;
                _objc_release(ppuVar9);
                _objc_release(unaff_x25);
                _objc_release(ppuVar17);
                _objc_release(ppuVar13);
                _objc_release(unaff_x27);
                _objc_release(ppuVar21);
                _objc_release(unaff_x24);
                _objc_release(ppuVar18);
              }
              ppuVar9 = (undefined **)0xfffffffff0575f4d;
              if (ppuVar11 == (undefined **)0xfffffffff0575f4d ||
                  ppuVar11 == (undefined **)0x3fa644c1) {
                ppuVar17 = *(undefined ***)((long)pppuVar1 + -0xdb8);
                goto LAB_106df0ffc;
              }
              ppuVar15 = (undefined **)((long)ppuVar15 + 1);
            } while (*(undefined ***)((long)pppuVar1 + -0xdc0) != ppuVar15);
            lVar22 = *(long *)((long)pppuVar1 + -0xdd0);
            func_0x00010bf52a60();
            *(long *)((long)pppuVar1 + -0xdc0) = lVar22;
          } while (lVar22 != 0);
        }
        ppuVar17 = (undefined **)0x0;
LAB_106df0ffc:
        lVar22 = *(long *)((long)pppuVar1 + -0xdd0);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)pppuVar1 + -0xcf0)) {
          ___stack_chk_fail();
          *(undefined ***)((long)pppuVar1 + -0xe30) = ppuVar13;
          *(undefined ***)((long)pppuVar1 + -0xe28) = unaff_x27;
          *(undefined ***)((long)pppuVar1 + -0xe20) = ppuVar21;
          *(undefined ***)((long)pppuVar1 + -0xe18) = unaff_x25;
          *(undefined ***)((long)pppuVar1 + -0xe10) = unaff_x24;
          *(undefined ***)((long)pppuVar1 + -0xe08) = ppuVar18;
          *(undefined ***)((long)pppuVar1 + -0xe00) = ppuVar11;
          *(undefined ***)((long)pppuVar1 + -0xdf8) = ppuVar15;
          *(undefined ***)((long)pppuVar1 + -0xdf0) = ppuVar9;
          *(undefined ***)((long)pppuVar1 + -0xde8) = ppuVar17;
          *(undefined1 **)((long)pppuVar1 + -0xde0) = (undefined1 *)((long)pppuVar1 + -0xc90);
          *(undefined8 *)((long)pppuVar1 + -0xdd8) = 0x106df1044;
          *(undefined8 *)((long)pppuVar1 + -0xe40) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
          ;
          _objc_retain();
          *(undefined ***)((long)pppuVar1 + -0x1248) = ppuVar14;
          _objc_retain(ppuVar14);
          ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)((long)pppuVar1 + -0x10f8) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1100) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x10e8) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x10f0) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x10d8) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x10e0) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x10c8) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x10d0) = 0;
          _objc_retain(lVar22);
          *(long *)((long)pppuVar1 + -0x1260) = lVar22;
          func_0x00010bf52a60();
          *(long *)((long)pppuVar1 + -0x1240) = lVar22;
          if (lVar22 == 0) {
            ppuVar15 = *(undefined ***)((long)pppuVar1 + -0x1260);
            _objc_release(ppuVar15);
            _objc_release(*(undefined8 *)((long)pppuVar1 + -0x1248));
            ppuVar9 = ppuVar15;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar1 + -0xe40))
            goto _objc_autoreleaseReturnValue;
            uVar24 = 0x106df16ec;
            ___stack_chk_fail();
          }
          else {
            *(undefined8 *)((long)pppuVar1 + -0x1250) = **(undefined8 **)((long)pppuVar1 + -0x10f0);
            if (**(long **)((long)pppuVar1 + -0x10f0) != *(long *)((long)pppuVar1 + -0x1250)) {
              _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0x1260));
            }
            puVar6 = PTR_PTR_1126bc7b8;
            *(undefined8 *)((long)pppuVar1 + -0x1230) = 0;
            ppuVar21 = (undefined **)**(long **)((long)pppuVar1 + -0x10f8);
            ppuVar14 = *(undefined ***)((long)pppuVar1 + -0x1248);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa7160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar14);
            *(undefined **)((long)pppuVar1 + -0x1238) = puVar6;
            func_0x00010c0ef4a0();
            _objc_retainAutoreleasedReturnValue();
            *(undefined **)((long)pppuVar1 + -0x1228) = puVar6;
            func_0x00010c2553e0();
            _objc_retainAutoreleasedReturnValue();
            *(undefined8 *)((long)pppuVar1 + -0x1138) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1140) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1128) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1130) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1118) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1120) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1108) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1110) = 0;
            *(undefined **)((long)pppuVar1 + -0x1208) = puVar6;
            func_0x00010bf52a60();
            if (puVar6 != (undefined *)0x0) {
              unaff_x24 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0x1130);
              do {
                puVar20 = (undefined *)0x0;
                do {
                  if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0x1130) != unaff_x24) {
                    _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0x1208));
                  }
                  ppuVar14 = *(undefined ***)
                              (*(long *)((long)pppuVar1 + -0x1138) + (long)puVar20 * 8);
                  ppuVar11 = ppuVar14;
                  func_0x00010bfedfc0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x27 = ppuVar11;
                  func_0x00010c0ca400();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar13 = unaff_x27;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar9 = ppuVar13;
                  func_0x00010c08fa60();
                  _objc_release(ppuVar13);
                  _objc_release(unaff_x27);
                  _objc_release(ppuVar11);
                  ppuVar18 = (undefined **)0x0;
                  if (ppuVar9 != (undefined **)0x0) {
                    func_0x00010bfedfc0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar11 = ppuVar14;
                    func_0x00010c0ca400();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar18 = ppuVar11;
                    func_0x00010c2923e0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(ppuVar17);
                    _objc_release(ppuVar18);
                    _objc_release(ppuVar11);
                    _objc_release(ppuVar14);
                  }
                  puVar20 = puVar20 + 1;
                } while (puVar6 != puVar20);
                puVar6 = *(undefined **)((long)pppuVar1 + -0x1208);
                func_0x00010bf52a60();
              } while (puVar6 != (undefined *)0x0);
            }
            unaff_x25 = *(undefined ***)((long)pppuVar1 + -0x1228);
            ppuVar9 = unaff_x25;
            func_0x00010bf2fba0();
            _objc_retainAutoreleasedReturnValue();
            uVar24 = 0x106df12c0;
            ppuVar15 = ppuVar9;
          }
          puVar8 = (undefined1 *)((long)pppuVar1 + -0x1390);
          *(undefined ***)((long)pppuVar1 + -0x12c0) = ppuVar13;
          *(undefined ***)((long)pppuVar1 + -0x12b8) = unaff_x27;
          *(undefined ***)((long)pppuVar1 + -0x12b0) = ppuVar21;
          *(undefined ***)((long)pppuVar1 + -0x12a8) = unaff_x25;
          *(undefined ***)((long)pppuVar1 + -0x12a0) = unaff_x24;
          *(undefined ***)((long)pppuVar1 + -0x1298) = ppuVar18;
          *(undefined ***)((long)pppuVar1 + -0x1290) = ppuVar11;
          *(undefined ***)((long)pppuVar1 + -0x1288) = ppuVar17;
          *(undefined ***)((long)pppuVar1 + -0x1280) = ppuVar14;
          *(undefined ***)((long)pppuVar1 + -0x1278) = ppuVar15;
          *(undefined1 **)((long)pppuVar1 + -0x1270) = (undefined1 *)((long)pppuVar1 + -0xde0);
          *(undefined8 *)((long)pppuVar1 + -0x1268) = uVar24;
          *(undefined8 *)((long)pppuVar1 + -0x12c8) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          _objc_retain();
          ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)((long)pppuVar1 + -5000) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1390) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1378) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1380) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1368) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1370) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1358) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1360) = 0;
          ppuVar21 = ppuVar9;
          func_0x00010c293dc0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = (undefined1 *)((long)pppuVar1 + -0x1348);
          ppuVar13 = ppuVar21;
          func_0x00010bf52a60();
          if (ppuVar13 != (undefined **)0x0) {
            lVar22 = **(long **)((long)pppuVar1 + -0x1380);
            do {
              ppuVar11 = (undefined **)0x0;
              do {
                if (**(long **)((long)pppuVar1 + -0x1380) != lVar22) {
                  _objc_enumerationMutation(ppuVar21);
                }
                ppuVar18 = *(undefined ***)(*(long *)((long)pppuVar1 + -5000) + (long)ppuVar11 * 8);
                unaff_x24 = ppuVar18;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar14 = unaff_x24;
                func_0x00010c08fa60();
                _objc_release(unaff_x24);
                if (ppuVar14 != (undefined **)0x0) {
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(ppuVar17);
                  _objc_release(ppuVar18);
                }
                ppuVar11 = (undefined **)((long)ppuVar11 + 1);
              } while (ppuVar13 != ppuVar11);
              puVar10 = (undefined1 *)((long)pppuVar1 + -0x1348);
              ppuVar13 = ppuVar21;
              puVar8 = (undefined1 *)((long)pppuVar1 + -0x1390);
              func_0x00010bf52a60();
              ppuVar11 = (undefined **)0x0;
            } while (ppuVar13 != (undefined **)0x0);
          }
          _objc_release(ppuVar21);
          ppuVar13 = ppuVar9;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)pppuVar1 + -0x12c8)) {
            ___stack_chk_fail();
            *(undefined ***)((long)pppuVar1 + -0x13d0) = unaff_x24;
            *(undefined ***)((long)pppuVar1 + -0x13c8) = ppuVar18;
            *(undefined ***)((long)pppuVar1 + -0x13c0) = ppuVar11;
            *(undefined ***)((long)pppuVar1 + -0x13b8) = ppuVar21;
            *(undefined ***)((long)pppuVar1 + -0x13b0) = ppuVar17;
            *(undefined ***)((long)pppuVar1 + -0x13a8) = ppuVar9;
            *(undefined1 **)((long)pppuVar1 + -0x13a0) = (undefined1 *)((long)pppuVar1 + -0x1270);
            *(code **)((long)pppuVar1 + -0x1398) = FUN_106df1868;
            _objc_retain(puVar8);
            _objc_retain(puVar10);
            *(undefined ***)((long)pppuVar1 + -0x13e0) = ppuVar13;
            *(undefined **)((long)pppuVar1 + -0x13d8) = PTR_PTR_1126f6f30;
            ppuVar21 = (undefined **)((long)pppuVar1 + -0x13e0);
            _objc_msgSendSuper2(ppuVar21,PTR_s_init_1125d9248);
            if (ppuVar21 != (undefined **)0x0) {
              _objc_retain(puVar8);
              puVar6 = ppuVar21[1];
              ppuVar21[1] = puVar8;
              _objc_release(puVar6);
              _objc_initWeak((undefined1 *)((long)pppuVar1 + -0x13e8),ppuVar21);
              puVar6 = PTR_PTR_1126ae720;
              *(undefined **)((long)pppuVar1 + -0x1418) = PTR___NSConcreteStackBlock_11034bd00;
              *(undefined8 *)((long)pppuVar1 + -0x1410) = 0xc2000000;
              *(code **)((long)pppuVar1 + -0x1408) = FUN_106df19b4;
              *(undefined **)((long)pppuVar1 + -0x1400) = &UNK_1108544e0;
              _objc_copyWeak((undefined1 *)((long)pppuVar1 + -0x13f0),
                             (undefined1 *)((long)pppuVar1 + -0x13e8));
              _objc_retain(puVar10);
              *(undefined1 **)((long)pppuVar1 + -0x13f8) = puVar10;
              func_0x00010bf11fe0();
              _objc_retainAutoreleasedReturnValue();
              puVar20 = ppuVar21[2];
              ppuVar21[2] = puVar6;
              _objc_release(puVar20);
              _objc_release(*(undefined8 *)((long)pppuVar1 + -0x13f8));
              _objc_destroyWeak((undefined1 *)((long)pppuVar1 + -0x13f0));
              _objc_destroyWeak((undefined1 *)((long)pppuVar1 + -0x13e8));
            }
            _objc_release(puVar10);
            _objc_release(puVar8);
            return ppuVar21;
          }
        }
      }
    }
  }
  goto _objc_autoreleaseReturnValue;
}



/* Entry: 106def594; end: 106def8af;  */

/* WARNING: Possible PIC construction at 0x000106df12bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106df134c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106df12c0) */
/* WARNING: Removing unreachable block (ram,0x000106df131c) */
/* WARNING: Removing unreachable block (ram,0x000106df1350) */
/* WARNING: Removing unreachable block (ram,0x000106df137c) */
/* WARNING: Removing unreachable block (ram,0x000106df1328) */
/* WARNING: Removing unreachable block (ram,0x000106df132c) */
/* WARNING: Removing unreachable block (ram,0x000106df133c) */
/* WARNING: Removing unreachable block (ram,0x000106df1344) */
/* WARNING: Removing unreachable block (ram,0x000106df1398) */
/* WARNING: Removing unreachable block (ram,0x000106df13bc) */
/* WARNING: Removing unreachable block (ram,0x000106df1428) */
/* WARNING: Removing unreachable block (ram,0x000106df1434) */
/* WARNING: Removing unreachable block (ram,0x000106df1438) */
/* WARNING: Removing unreachable block (ram,0x000106df144c) */
/* WARNING: Removing unreachable block (ram,0x000106df1454) */
/* WARNING: Removing unreachable block (ram,0x000106df149c) */
/* WARNING: Removing unreachable block (ram,0x000106df1504) */
/* WARNING: Removing unreachable block (ram,0x000106df1510) */
/* WARNING: Removing unreachable block (ram,0x000106df1514) */
/* WARNING: Removing unreachable block (ram,0x000106df1524) */
/* WARNING: Removing unreachable block (ram,0x000106df152c) */
/* WARNING: Removing unreachable block (ram,0x000106df1580) */
/* WARNING: Removing unreachable block (ram,0x000106df15d8) */
/* WARNING: Removing unreachable block (ram,0x000106df15e4) */
/* WARNING: Removing unreachable block (ram,0x000106df1600) */
/* WARNING: Removing unreachable block (ram,0x000106df1608) */
/* WARNING: Removing unreachable block (ram,0x000106df1618) */
/* WARNING: Removing unreachable block (ram,0x000106df1634) */
/* WARNING: Removing unreachable block (ram,0x000106df1648) */
/* WARNING: Removing unreachable block (ram,0x000106df1674) */

undefined8 ****
FUN_106def594(float param_1,double param_2,undefined8 ****param_3,undefined8 ****param_4,
             undefined8 ****param_5,undefined8 ****param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ***pppuVar5;
  undefined1 *puVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****unaff_x23;
  undefined8 ****ppppuVar14;
  undefined8 ****unaff_x24;
  undefined8 ****unaff_x25;
  long lVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****unaff_x26;
  undefined **unaff_x27;
  undefined8 ****unaff_x28;
  undefined8 uVar17;
  float fVar18;
  double unaff_d8;
  double unaff_d9;
  undefined1 auStack_12c0 [8];
  undefined1 auStack_12b8 [8];
  undefined8 ***pppuStack_12b0;
  undefined *puStack_12a8;
  undefined8 ***pppuStack_12a0;
  undefined8 ***pppuStack_1298;
  undefined8 ***pppuStack_1290;
  undefined8 ***pppuStack_1288;
  undefined8 ***pppuStack_1280;
  undefined8 ***pppuStack_1278;
  undefined8 ***pppuStack_1270;
  code *pcStack_1268;
  undefined8 *puStack_1260;
  long lStack_1258;
  long *plStack_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined1 auStack_1218 [128];
  long lStack_1198;
  undefined8 ***pppuStack_1190;
  undefined8 ***pppuStack_1188;
  undefined8 ***pppuStack_1180;
  undefined8 ***pppuStack_1178;
  undefined8 ***pppuStack_1170;
  undefined8 ***pppuStack_1168;
  undefined8 ***pppuStack_1160;
  undefined8 ***pppuStack_1158;
  undefined8 ***pppuStack_1150;
  undefined8 ***pppuStack_1148;
  undefined8 ***pppuStack_1140;
  undefined8 uStack_1138;
  undefined8 ***pppuStack_1130;
  long lStack_1120;
  undefined8 ***pppuStack_1118;
  undefined8 ***pppuStack_1110;
  undefined8 ***pppuStack_1108;
  undefined8 uStack_1100;
  undefined8 ***pppuStack_10f8;
  undefined8 ***pppuStack_10d8;
  undefined8 uStack_1010;
  long lStack_1008;
  undefined8 *puStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  long *plStack_fc8;
  long *plStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  long lStack_d10;
  undefined8 ***pppuStack_d00;
  undefined8 ***pppuStack_cf8;
  undefined8 ***pppuStack_cf0;
  undefined8 ***pppuStack_ce8;
  undefined8 ***pppuStack_ce0;
  undefined8 ***pppuStack_cd8;
  undefined8 ***pppuStack_cd0;
  undefined8 ***pppuStack_cc8;
  undefined8 ***pppuStack_cc0;
  undefined8 ***pppuStack_cb8;
  undefined8 ***pppuStack_cb0;
  undefined8 uStack_ca8;
  undefined8 ***pppuStack_ca0;
  long lStack_c98;
  undefined8 ***pppuStack_c90;
  undefined8 ***pppuStack_c88;
  undefined8 uStack_c80;
  long lStack_c78;
  long *plStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  long lStack_bc0;
  undefined8 ***pppuStack_bb0;
  undefined8 ***pppuStack_ba8;
  undefined8 ***pppuStack_ba0;
  undefined8 ***pppuStack_b98;
  undefined8 ***pppuStack_b90;
  undefined8 ***pppuStack_b88;
  undefined8 ***pppuStack_b80;
  undefined8 ***pppuStack_b78;
  undefined8 ***pppuStack_b70;
  undefined8 ***pppuStack_b68;
  undefined8 ***pppuStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  long lStack_b48;
  undefined8 *puStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  long lStack_a88;
  undefined8 ***pppuStack_a80;
  undefined8 ***pppuStack_a78;
  undefined8 ***pppuStack_a70;
  undefined8 ***pppuStack_a68;
  undefined8 ***pppuStack_a60;
  undefined8 ***pppuStack_a58;
  undefined8 ***pppuStack_a50;
  code *pcStack_a48;
  undefined8 uStack_a40;
  long lStack_a38;
  undefined8 *puStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  long lStack_978;
  undefined8 ***pppuStack_970;
  undefined8 ***pppuStack_968;
  undefined8 ***pppuStack_960;
  undefined8 ***pppuStack_958;
  undefined8 ***pppuStack_950;
  undefined8 ***pppuStack_948;
  undefined8 ***pppuStack_940;
  undefined8 ***pppuStack_938;
  undefined8 ***pppuStack_930;
  code *pcStack_928;
  undefined8 uStack_920;
  long lStack_918;
  undefined8 *puStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  long lStack_860;
  undefined8 ***pppuStack_850;
  undefined8 ***pppuStack_848;
  undefined8 ***pppuStack_840;
  undefined8 ***pppuStack_838;
  undefined8 ***pppuStack_830;
  undefined8 ***pppuStack_828;
  undefined8 ***pppuStack_820;
  undefined8 ***pppuStack_818;
  undefined8 ***pppuStack_810;
  undefined8 ***pppuStack_808;
  undefined1 ***pppuStack_800;
  undefined8 uStack_7f8;
  undefined8 ***pppuStack_7e8;
  undefined8 ***pppuStack_7e0;
  undefined8 ***pppuStack_7d8;
  undefined **ppuStack_7d0;
  long lStack_7c8;
  undefined8 ***pppuStack_7c0;
  long lStack_7b8;
  undefined8 ***pppuStack_7b0;
  long lStack_7a8;
  undefined *puStack_7a0;
  undefined8 ***pppuStack_798;
  undefined8 ***pppuStack_790;
  undefined8 ***pppuStack_788;
  undefined8 ***pppuStack_780;
  undefined *puStack_778;
  undefined8 uStack_770;
  long lStack_768;
  undefined8 *puStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  long lStack_728;
  undefined8 *puStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  long lStack_6e8;
  long *plStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  long lStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  long lStack_668;
  long *plStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  long lStack_628;
  undefined8 *puStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  long lStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_230;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 **appuStack_178 [16];
  long lStack_f8;
  double dStack_f0;
  double dStack_e8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar13 = param_4;
  ppppuVar11 = param_5;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != (undefined8 ****)0x0) {
    ppppuVar13 = param_5;
    func_0x00010c23f480();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar11 = ppppuVar13;
    func_0x00010bf529e0();
    _objc_release(ppppuVar13);
    if (ppppuVar11 != (undefined8 ****)0x0) {
      ppppuVar13 = param_5;
      func_0x00010c23f480();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar11 = ppppuVar13;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = ppppuVar11;
      func_0x00010c2a2e80();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = unaff_x24;
      func_0x00010c2a2ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2039e0(param_3);
      _objc_release(unaff_x25);
      _objc_release(unaff_x24);
      _objc_release(ppppuVar11);
      _objc_release(ppppuVar13);
    }
    ppppuVar13 = param_5;
    FUN_106dee010(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2208c0(param_3);
    _objc_release(ppppuVar13);
    ppppuVar13 = (undefined8 ****)PTR_PTR_1126d2a00;
    _objc_retain(param_3);
    _objc_opt_class();
    ppppuVar11 = param_3;
    _objc_opt_isKindOfClass();
    ppppuVar12 = param_3;
    if (((ulong)ppppuVar11 & 1) == 0) {
      ppppuVar12 = (undefined8 ****)0x0;
    }
    _objc_retain(ppppuVar12);
    _objc_release(param_3);
    if (((ulong)ppppuVar11 & 1) != 0) {
      ppppuVar11 = param_5;
      func_0x00010bf0efa0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c1a6de0(param_3);
      _objc_release(ppppuVar11);
    }
    func_0x00010bf8b160(param_4);
    unaff_d8 = (double)param_1;
    func_0x00010c1c4580(param_3);
    func_0x00010bfed740(param_4);
    func_0x00010c1c4920(param_3);
    ppppuVar11 = param_4;
    func_0x00010b5fa088();
    if (ppppuVar11 == (undefined8 ****)0x9) {
      func_0x000109023974(param_4);
      unaff_d9 = param_2;
    }
    else {
      ppppuVar11 = param_4;
      func_0x00010c2a5040();
      unaff_d8 = (double)(int)ppppuVar11;
      ppppuVar11 = param_4;
      func_0x00010bfe0640();
      unaff_d9 = (double)(int)ppppuVar11;
    }
    func_0x00010c1c56e0(param_3);
    func_0x00010c1c4860(param_3);
    ppppuVar11 = param_4;
    func_0x00010c0c5b00();
    unaff_x23 = (undefined8 ****)PTR_PTR_1126c4550;
    if ((int)ppppuVar11 < 1) {
      ppppuVar11 = param_5;
      func_0x00010c0c5b60();
      func_0x00010c0c5ba0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar4 = unaff_x23;
      if (unaff_x23 != (undefined8 ****)0x0) goto LAB_106def81c;
    }
    else {
      unaff_x23 = (undefined8 ****)PTR_PTR_1126c4548;
      _objc_alloc();
      func_0x00010c0c5b00(param_4);
      func_0x00010c032420();
      ppppuVar4 = (undefined8 ****)pppuStack_78;
      pppuStack_70 = unaff_x23;
LAB_106def81c:
      pppuStack_78 = ppppuVar4;
      param_6 = (undefined8 ****)0x1;
      unaff_x24 = (undefined8 ****)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar11 = unaff_x24;
      func_0x00010c1c4de0(param_3);
      _objc_release(unaff_x24);
    }
    _objc_release(unaff_x23);
    _objc_release(ppppuVar12);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_106def8b0;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar12 = ppppuVar13;
  ppppuVar4 = ppppuVar11;
  dStack_f0 = unaff_d9;
  dStack_e8 = unaff_d8;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(ppppuVar13);
  _objc_retain(ppppuVar11);
  if (param_3 != (undefined8 ****)0x0) {
    uVar17 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    puStack_1b0 = (undefined8 *)0x0;
    ppppuVar12 = ppppuVar11;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar4 = ppppuVar12;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar12);
    param_6 = (undefined8 ****)appuStack_178;
    ppppuVar12 = ppppuVar4;
    func_0x00010bf52a60();
    fVar18 = (float)uVar17;
    if (ppppuVar12 != (undefined8 ****)0x0) {
      unaff_x25 = (undefined8 ****)*puStack_1b0;
      do {
        unaff_x26 = (undefined8 ****)0x0;
        do {
          if ((undefined8 ****)*puStack_1b0 != unaff_x25) {
            _objc_enumerationMutation(ppppuVar4);
          }
          unaff_x24 = *(undefined8 *****)(lStack_1b8 + (long)unaff_x26 * 8);
          ppppuVar10 = unaff_x24;
          func_0x00010bf0d0a0();
          fVar18 = (float)uVar17;
          if ((int)ppppuVar10 == 3) {
            func_0x00010c2a3a80();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar12 = unaff_x24;
            func_0x00010bdc2b80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2039e0(param_3);
            _objc_release(ppppuVar12);
            _objc_release(unaff_x24);
            unaff_x24 = ppppuVar12;
            goto LAB_106defa04;
          }
          unaff_x26 = (undefined8 ****)((long)unaff_x26 + 1);
        } while (ppppuVar12 != unaff_x26);
        param_6 = (undefined8 ****)appuStack_178;
        ppppuVar12 = ppppuVar4;
        func_0x00010bf52a60();
        fVar18 = (float)uVar17;
      } while (ppppuVar12 != (undefined8 ****)0x0);
    }
LAB_106defa04:
    _objc_release(ppppuVar4);
    ppppuVar12 = (undefined8 ****)PTR_PTR_1126d2a00;
    _objc_retain(param_3);
    _objc_opt_class();
    ppppuVar4 = param_3;
    _objc_opt_isKindOfClass();
    ppppuVar10 = param_3;
    if (((ulong)ppppuVar4 & 1) == 0) {
      ppppuVar10 = (undefined8 ****)0x0;
    }
    _objc_retain(ppppuVar10);
    _objc_release(param_3);
    if (((ulong)ppppuVar4 & 1) != 0) {
      func_0x000107e629e4(ppppuVar11);
      func_0x00010c1a6de0(param_3);
    }
    func_0x00010bf8b160(ppppuVar13);
    func_0x00010c1c4580((double)fVar18,param_3);
    func_0x00010bfed740(ppppuVar13);
    func_0x00010c1c4920(param_3);
    ppppuVar4 = ppppuVar13;
    func_0x00010b5fa088();
    if (ppppuVar4 == (undefined8 ****)0x9) {
      func_0x000109023974(ppppuVar13);
    }
    else {
      func_0x00010c2a5040(ppppuVar13);
      ppppuVar4 = ppppuVar13;
      func_0x00010bfe0640();
      param_2 = (double)(int)ppppuVar4;
    }
    func_0x00010c1c56e0(param_3);
    ppppuVar4 = (undefined8 ****)(long)param_2;
    func_0x00010c1c4860(param_3);
    unaff_x23 = ppppuVar11;
    func_0x000106def3a4();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x23 != (undefined8 ****)0x0) {
      ppppuVar4 = unaff_x23;
      func_0x00010c1c4de0(param_3);
    }
    _objc_release(unaff_x23);
    _objc_release(ppppuVar10);
  }
  _objc_release(ppppuVar11);
  _objc_release(ppppuVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return param_3;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_106defb6c;
  lStack_230 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar11 = ppppuVar12;
  ppuStack_1d0 = &puStack_90;
  _objc_retain();
  pppuStack_780 = ppppuVar12;
  _objc_retain(ppppuVar12);
  _objc_retain(ppppuVar4);
  _objc_retain(param_6);
  ppppuVar13 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  pppuStack_790 = ppppuVar13;
  _objc_opt_new();
  pppuStack_7e8 = param_3;
  puStack_778 = puVar1;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  pppuStack_7d8 = ppppuVar4;
  pppuStack_788 = param_6;
  if ((ppppuVar4 != (undefined8 ****)0x0) && (param_3 == (undefined8 ****)0x0)) {
    uStack_5c8 = 0;
    uStack_5d0 = 0;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    lStack_5e8 = 0;
    uStack_5f0 = 0;
    uStack_5d8 = 0;
    puStack_5e0 = (undefined8 *)0x0;
    _objc_retain(ppppuVar4);
    func_0x00010bf52a60();
    pppuStack_798 = ppppuVar4;
    if (ppppuVar4 != (undefined8 ****)0x0) {
      puStack_7a0 = (undefined *)*puStack_5e0;
      do {
        ppppuVar13 = (undefined8 ****)0x0;
        do {
          if ((undefined *)*puStack_5e0 != puStack_7a0) {
            _objc_enumerationMutation(pppuStack_7d8);
          }
          ppppuVar12 = *(undefined8 *****)(lStack_5e8 + (long)ppppuVar13 * 8);
          unaff_x23 = ppppuVar12;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x23;
          func_0x00010bf30500();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = (undefined **)unaff_x26;
          func_0x00010c0ca860();
          _objc_release(unaff_x26);
          _objc_release(unaff_x23);
          if ((undefined8 ****)unaff_x27 != (undefined8 ****)0x0) {
            uStack_608 = 0;
            uStack_610 = 0;
            uStack_5f8 = 0;
            uStack_600 = 0;
            lStack_628 = 0;
            uStack_630 = 0;
            uStack_618 = 0;
            puStack_620 = (undefined8 *)0x0;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = ppppuVar12;
            func_0x00010bf30500();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar4 = unaff_x26;
            func_0x00010c0ca840();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x26);
            _objc_release(ppppuVar12);
            ppppuVar10 = ppppuVar4;
            func_0x00010bf52a60();
            if (ppppuVar10 != (undefined8 ****)0x0) {
              unaff_x24 = (undefined8 ****)*puStack_620;
              do {
                ppppuVar9 = (undefined8 ****)0x0;
                do {
                  if ((undefined8 ****)*puStack_620 != unaff_x24) {
                    _objc_enumerationMutation(ppppuVar4);
                  }
                  ppppuVar14 = *(undefined8 *****)(lStack_628 + (long)ppppuVar9 * 8);
                  unaff_x27 = (undefined **)ppppuVar14;
                  func_0x00010bf96da0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x28 = (undefined8 ****)unaff_x27;
                  func_0x00010c290fa0();
                  _objc_retainAutoreleasedReturnValue();
                  ppppuVar16 = unaff_x28;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  _objc_release(unaff_x28);
                  _objc_release(unaff_x27);
                  ppppuVar12 = ppppuVar14;
                  if (ppppuVar16 != (undefined8 ****)0x0) {
                    ppppuVar16 = (undefined8 ****)pppuStack_788;
                    func_0x00010c269d40();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf96da0();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x28 = ppppuVar14;
                    func_0x00010c290fa0();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x25 = unaff_x28;
                    func_0x00010c2923e0();
                    _objc_retainAutoreleasedReturnValue();
                    ppppuVar12 = ppppuVar16;
                    func_0x00010c0ee920();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(unaff_x25);
                    _objc_release(unaff_x28);
                    _objc_release(ppppuVar14);
                    _objc_release(ppppuVar16);
                    if (ppppuVar12 != (undefined8 ****)0x0) {
                      ppppuVar14 = ppppuVar12;
                      func_0x00010c2923e0();
                      _objc_retainAutoreleasedReturnValue();
                      unaff_x28 = ppppuVar12;
                      func_0x00010c294420();
                      _objc_retainAutoreleasedReturnValue();
                      if (((ppppuVar14 != (undefined8 ****)0x0) &&
                          (puVar1 = puStack_778, func_0x00010bf4b900(), ((ulong)puVar1 & 1) == 0))
                         && (ppppuVar16 = (undefined8 ****)pppuStack_780, func_0x00010bf4b900(),
                            ((ulong)ppppuVar16 & 1) == 0)) {
                        puVar1 = PTR_PTR_1126d2aa8;
                        _objc_alloc(PTR_PTR_1126d2aa8);
                        func_0x00010c05f760();
                        func_0x00010c1d0640(pppuStack_790);
                        func_0x00010befa120(puStack_778);
                        _objc_release(puVar1);
                      }
                      _objc_release(unaff_x28);
                      _objc_release(ppppuVar14);
                    }
                    _objc_release(ppppuVar12);
                    unaff_x27 = (undefined **)ppppuVar14;
                  }
                  ppppuVar9 = (undefined8 ****)((long)ppppuVar9 + 1);
                } while (ppppuVar10 != ppppuVar9);
                ppppuVar10 = ppppuVar4;
                func_0x00010bf52a60();
                unaff_x26 = (undefined8 ****)0x0;
              } while (ppppuVar10 != (undefined8 ****)0x0);
            }
            _objc_release(ppppuVar4);
            unaff_x23 = ppppuVar12;
          }
          ppppuVar13 = (undefined8 ****)((long)ppppuVar13 + 1);
        } while (ppppuVar13 != (undefined8 ****)pppuStack_798);
        ppppuVar13 = (undefined8 ****)pppuStack_7d8;
        func_0x00010bf52a60();
        pppuStack_798 = ppppuVar13;
      } while (ppppuVar13 != (undefined8 ****)0x0);
    }
    _objc_release(pppuStack_7d8);
  }
  ppppuVar13 = (undefined8 ****)pppuStack_788;
  uStack_648 = 0;
  uStack_650 = 0;
  uStack_638 = 0;
  uStack_640 = 0;
  lStack_668 = 0;
  uStack_670 = 0;
  uStack_658 = 0;
  plStack_660 = (long *)0x0;
  ppppuVar12 = (undefined8 ****)pppuStack_7e8;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  pppuStack_7e0 = ppppuVar12;
  func_0x00010bf52a60();
  pppuStack_7c0 = ppppuVar12;
  if (ppppuVar12 != (undefined8 ****)0x0) {
    lStack_7c8 = *plStack_660;
    ppuStack_7d0 = &PTR____CFConstantStringClassReference_110efb658;
    do {
      ppppuVar12 = (undefined8 ****)0x0;
      do {
        if (*plStack_660 != lStack_7c8) {
          _objc_enumerationMutation(pppuStack_7e0);
        }
        lVar8 = *(long *)(lStack_668 + (long)ppppuVar12 * 8);
        puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        pppuStack_7b0 = ppppuVar12;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        lStack_6a8 = 0;
        uStack_6b0 = 0;
        uStack_698 = 0;
        puStack_6a0 = (undefined8 *)0x0;
        uStack_688 = 0;
        uStack_690 = 0;
        uStack_678 = 0;
        uStack_680 = 0;
        lStack_7b8 = lVar8;
        puStack_7a0 = puVar1;
        func_0x00010c293dc0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar8;
        func_0x00010bf52a60();
        if (lVar2 != 0) {
          unaff_x24 = (undefined8 ****)*puStack_6a0;
          lStack_7a8 = lVar8;
          do {
            lVar15 = 0;
            do {
              if ((undefined8 ****)*puStack_6a0 != unaff_x24) {
                _objc_enumerationMutation(lVar8);
              }
              unaff_x23 = *(undefined8 *****)(lStack_6a8 + lVar15 * 8);
              ppppuVar12 = ppppuVar13;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              ppppuVar4 = unaff_x23;
              func_0x00010c2923e0(unaff_x23);
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = (undefined **)ppppuVar12;
              func_0x00010c0ee920();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppppuVar4);
              _objc_release(ppppuVar12);
              ppppuVar12 = (undefined8 ****)unaff_x27;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = (undefined8 ****)unaff_x27;
              func_0x00010c294420();
              _objc_retainAutoreleasedReturnValue();
              if ((((undefined8 ****)unaff_x27 != (undefined8 ****)0x0 &&
                    ppppuVar12 != (undefined8 ****)0x0) &&
                  (puVar1 = puStack_778, func_0x00010bf4b900(), ((ulong)puVar1 & 1) == 0)) &&
                 (ppppuVar4 = (undefined8 ****)pppuStack_780, func_0x00010bf4b900(),
                 ((ulong)ppppuVar4 & 1) == 0)) {
                ppppuVar13 = (undefined8 ****)PTR_PTR_1126d2aa8;
                _objc_alloc();
                func_0x00010c05f760();
                pppuStack_798 = ppppuVar13;
                func_0x00010c1d0640(pppuStack_790);
                puVar1 = PTR_PTR_1126d2ab0;
                ppppuVar4 = unaff_x23;
                func_0x00010c24ff00(unaff_x23);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c067fc0();
                func_0x00010c08fa60(unaff_x28);
                func_0x00010bf51620(puVar1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c24ff00();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puStack_7a0);
                _objc_release(unaff_x23);
                lVar8 = lStack_7a8;
                _objc_release(puVar1);
                ppppuVar13 = (undefined8 ****)pppuStack_788;
                _objc_release(ppppuVar4);
                func_0x00010befa120(puStack_778);
                _objc_release(pppuStack_798);
              }
              _objc_release(unaff_x28);
              _objc_release(ppppuVar12);
              _objc_release(unaff_x27);
              lVar15 = lVar15 + 1;
            } while (lVar2 != lVar15);
            lVar2 = lVar8;
            func_0x00010bf52a60();
            unaff_x26 = (undefined8 ****)0x0;
          } while (lVar2 != 0);
        }
        _objc_release(lVar8);
        ppppuVar13 = (undefined8 ****)PTR_PTR_1126d1320;
        lVar8 = lStack_7b8;
        func_0x00010c26b700(lStack_7b8);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puStack_7a0;
        func_0x00010bf51e00(puStack_7a0);
        func_0x00010bf9ef60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(lVar8);
        uStack_6c8 = 0;
        uStack_6d0 = 0;
        uStack_6b8 = 0;
        uStack_6c0 = 0;
        lStack_6e8 = 0;
        uStack_6f0 = 0;
        uStack_6d8 = 0;
        plStack_6e0 = (long *)0x0;
        unaff_x25 = ppppuVar13;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar12 = unaff_x25;
        func_0x00010bf52a60();
        if (ppppuVar12 != (undefined8 ****)0x0) {
          lVar8 = *plStack_6e0;
          do {
            unaff_x24 = (undefined8 ****)0x0;
            do {
              if (*plStack_6e0 != lVar8) {
                _objc_enumerationMutation(unaff_x25);
              }
              ppppuVar10 = *(undefined8 *****)(lStack_6e8 + (long)unaff_x24 * 8);
              unaff_x23 = ppppuVar10;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              ppppuVar4 = ppppuVar10;
              func_0x00010c294420(ppppuVar10);
              _objc_retainAutoreleasedReturnValue();
              if (((ppppuVar10 != (undefined8 ****)0x0 && unaff_x23 != (undefined8 ****)0x0) &&
                  (puVar1 = puStack_778, func_0x00010bf4b900(), ((ulong)puVar1 & 1) == 0)) &&
                 (ppppuVar10 = (undefined8 ****)pppuStack_780, func_0x00010bf4b900(),
                 ((ulong)ppppuVar10 & 1) == 0)) {
                puVar1 = PTR_PTR_1126d2aa8;
                _objc_alloc(PTR_PTR_1126d2aa8);
                func_0x00010c05f760();
                func_0x00010c1d0640(pppuStack_790);
                func_0x00010befa120(puStack_778);
                _objc_release(puVar1);
              }
              _objc_release(ppppuVar4);
              _objc_release(unaff_x23);
              unaff_x24 = (undefined8 ****)((long)unaff_x24 + 1);
            } while (ppppuVar12 != unaff_x24);
            ppppuVar12 = unaff_x25;
            func_0x00010bf52a60();
            unaff_x26 = (undefined8 ****)0x0;
          } while (ppppuVar12 != (undefined8 ****)0x0);
        }
        _objc_release(unaff_x25);
        _objc_release(ppppuVar13);
        _objc_release(puStack_7a0);
        ppppuVar13 = (undefined8 ****)pppuStack_788;
        ppppuVar12 = (undefined8 ****)((long)pppuStack_7b0 + 1);
      } while (ppppuVar12 != (undefined8 ****)pppuStack_7c0);
      ppppuVar12 = (undefined8 ****)pppuStack_7e0;
      func_0x00010bf52a60();
      pppuStack_7c0 = ppppuVar12;
    } while (ppppuVar12 != (undefined8 ****)0x0);
  }
  _objc_release(pppuStack_7e0);
  uStack_708 = 0;
  uStack_710 = 0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  lStack_728 = 0;
  uStack_730 = 0;
  uStack_718 = 0;
  puStack_720 = (undefined8 *)0x0;
  ppppuVar12 = (undefined8 ****)pppuStack_7e8;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  pppuStack_798 = ppppuVar12;
  func_0x00010bf52a60();
  if (ppppuVar12 != (undefined8 ****)0x0) {
    unaff_x24 = (undefined8 ****)*puStack_720;
    do {
      ppppuVar4 = (undefined8 ****)0x0;
      do {
        if ((undefined8 ****)*puStack_720 != unaff_x24) {
          _objc_enumerationMutation(pppuStack_798);
        }
        ppppuVar16 = *(undefined8 *****)(lStack_728 + (long)ppppuVar4 * 8);
        ppppuVar10 = ppppuVar16;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar9 = ppppuVar10;
        func_0x00010c0ca400();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = ppppuVar9;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppppuVar9);
        _objc_release(ppppuVar10);
        ppppuVar10 = ppppuVar16;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar9 = ppppuVar10;
        func_0x00010c0ca400();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = ppppuVar9;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppppuVar9);
        _objc_release(ppppuVar10);
        ppppuVar10 = unaff_x28;
        func_0x00010c08fa60();
        if (((ppppuVar10 == (undefined8 ****)0x0) ||
            (puVar1 = puStack_778, func_0x00010bf4b900(), ((ulong)puVar1 & 1) != 0)) ||
           (ppppuVar10 = (undefined8 ****)pppuStack_780, func_0x00010bf4b900(),
           ((ulong)ppppuVar10 & 1) != 0)) {
          ppppuVar13 = ppppuVar16;
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar10 = ppppuVar13;
          func_0x00010c244f40();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar9 = ppppuVar10;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x28);
          _objc_release(ppppuVar10);
          _objc_release(ppppuVar13);
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar13 = ppppuVar16;
          func_0x00010c244f40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = ppppuVar13;
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x23);
          _objc_release(ppppuVar13);
          _objc_release(ppppuVar16);
          ppppuVar10 = ppppuVar9;
          func_0x00010c08fa60();
          if (((ppppuVar10 != (undefined8 ****)0x0) &&
              (puVar1 = puStack_778, func_0x00010bf4b900(), ((ulong)puVar1 & 1) == 0)) &&
             (ppppuVar10 = (undefined8 ****)pppuStack_780, func_0x00010bf4b900(),
             ((ulong)ppppuVar10 & 1) == 0)) {
            unaff_x27 = (undefined **)PTR_PTR_1126d2aa8;
            _objc_alloc();
            func_0x00010c05f760();
            func_0x00010c1d0640(pppuStack_790);
            goto LAB_106df0640;
          }
        }
        else {
          unaff_x27 = (undefined **)PTR_PTR_1126d2aa8;
          _objc_alloc();
          func_0x00010c05f760();
          func_0x00010c1d0640(pppuStack_790);
          unaff_x25 = unaff_x23;
          ppppuVar9 = unaff_x28;
LAB_106df0640:
          func_0x00010befa120(puStack_778);
          _objc_release(unaff_x27);
          unaff_x28 = ppppuVar9;
        }
        _objc_release(unaff_x25);
        _objc_release(ppppuVar9);
        ppppuVar4 = (undefined8 ****)((long)ppppuVar4 + 1);
      } while (ppppuVar12 != ppppuVar4);
      ppppuVar12 = (undefined8 ****)pppuStack_798;
      func_0x00010bf52a60();
      unaff_x26 = (undefined8 ****)0x0;
    } while (ppppuVar12 != (undefined8 ****)0x0);
  }
  _objc_release(pppuStack_798);
  ppppuVar12 = (undefined8 ****)pppuStack_7d8;
  uStack_748 = 0;
  uStack_750 = 0;
  uStack_738 = 0;
  uStack_740 = 0;
  lStack_768 = 0;
  uStack_770 = 0;
  uStack_758 = 0;
  puStack_760 = (undefined8 *)0x0;
  _objc_retain(pppuStack_7d8);
  func_0x00010bf52a60();
  if (ppppuVar12 != (undefined8 ****)0x0) {
    unaff_x27 = (undefined **)*puStack_760;
    do {
      unaff_x28 = (undefined8 ****)0x0;
      do {
        if ((undefined8 ****)*puStack_760 != (undefined8 ****)unaff_x27) {
          _objc_enumerationMutation(pppuStack_7d8);
        }
        unaff_x23 = *(undefined8 *****)(lStack_768 + (long)unaff_x28 * 8);
        ppppuVar4 = unaff_x23;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar13 = ppppuVar4;
        func_0x00010bfedf20();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = ppppuVar13;
        func_0x00010bfedf40();
        _objc_release(ppppuVar13);
        _objc_release(ppppuVar4);
        if ((int)unaff_x24 == 6) {
          ppppuVar4 = unaff_x23;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar13 = ppppuVar4;
          func_0x00010bfedf20();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = ppppuVar13;
          func_0x00010c0ca640();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppppuVar13);
          _objc_release(ppppuVar4);
          ppppuVar4 = unaff_x25;
          func_0x00010bfde100();
          if ((int)ppppuVar4 != 0) {
            ppppuVar4 = unaff_x25;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar13 = ppppuVar4;
            func_0x00010bfe2ee0();
            unaff_x24 = unaff_x25;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar11 = unaff_x24;
            func_0x00010c0b5940();
            unaff_x23 = ppppuVar13;
            func_0x000100c4a928();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x24);
            _objc_release(ppppuVar4);
            unaff_x26 = unaff_x25;
            func_0x00010c294420();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar4 = unaff_x23;
            func_0x00010c08fa60();
            if (((ppppuVar4 != (undefined8 ****)0x0) &&
                (puVar1 = puStack_778, func_0x00010bf4b900(), ((ulong)puVar1 & 1) == 0)) &&
               (ppppuVar4 = (undefined8 ****)pppuStack_780, func_0x00010bf4b900(),
               ((ulong)ppppuVar4 & 1) == 0)) {
              puVar1 = PTR_PTR_1126d2aa8;
              _objc_alloc(PTR_PTR_1126d2aa8);
              func_0x00010c05f760();
              func_0x00010c1d0640(pppuStack_790);
              func_0x00010befa120(puStack_778);
              _objc_release(puVar1);
            }
            _objc_release(unaff_x26);
            _objc_release(unaff_x23);
          }
          _objc_release(unaff_x25);
        }
        unaff_x28 = (undefined8 ****)((long)unaff_x28 + 1);
      } while (ppppuVar12 != unaff_x28);
      ppppuVar12 = (undefined8 ****)pppuStack_7d8;
      func_0x00010bf52a60();
    } while (ppppuVar12 != (undefined8 ****)0x0);
  }
  pppuVar5 = pppuStack_7d8;
  _objc_release(pppuStack_7d8);
  pppuVar3 = pppuStack_790;
  ppppuVar12 = (undefined8 ****)pppuStack_790;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_778);
  _objc_release(pppuVar3);
  _objc_release(pppuStack_788);
  _objc_release(pppuVar5);
  _objc_release(pppuStack_780);
  _objc_release(pppuStack_7e8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_230) {
    ___stack_chk_fail();
    pppuStack_818 = pppuVar3;
    pppuStack_810 = pppuVar5;
    uStack_7f8 = 0x106df0944;
    lStack_860 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppuVar4 = (undefined8 ****)PTR_PTR_1126bc7b8;
    pppuStack_850 = unaff_x28;
    pppuStack_848 = (undefined8 ***)unaff_x27;
    pppuStack_840 = unaff_x26;
    pppuStack_838 = unaff_x25;
    pppuStack_830 = unaff_x24;
    pppuStack_828 = unaff_x23;
    pppuStack_820 = ppppuVar13;
    pppuStack_808 = ppppuVar12;
    pppuStack_800 = &ppuStack_1d0;
    func_0x00010bfa7160();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar10 = ppppuVar4;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar4);
    ppppuVar4 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_918 = 0;
    uStack_920 = 0;
    uStack_908 = 0;
    puStack_910 = (undefined8 *)0x0;
    uStack_8f8 = 0;
    uStack_900 = 0;
    uStack_8e8 = 0;
    uStack_8f0 = 0;
    ppppuVar12 = ppppuVar10;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar9 = ppppuVar12;
    func_0x00010bf52a60();
    if (ppppuVar9 != (undefined8 ****)0x0) {
      unaff_x26 = (undefined8 ****)*puStack_910;
      unaff_x27 = &PTR_PTR_1126d2000;
      do {
        unaff_x28 = (undefined8 ****)0x0;
        do {
          if ((undefined8 ****)*puStack_910 != unaff_x26) {
            _objc_enumerationMutation(ppppuVar12);
          }
          unaff_x24 = *(undefined8 *****)(lStack_918 + (long)unaff_x28 * 8);
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x24;
          func_0x00010c2751c0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = unaff_x25;
          func_0x00010c275660();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          if (unaff_x23 != (undefined8 ****)0x0) {
            unaff_x24 = (undefined8 ****)PTR_PTR_1126d2ab8;
            _objc_alloc();
            func_0x00010c054560();
            if (unaff_x24 != (undefined8 ****)0x0) {
              func_0x00010befa120(ppppuVar4);
            }
            _objc_release(unaff_x24);
          }
          _objc_release(unaff_x23);
          unaff_x28 = (undefined8 ****)((long)unaff_x28 + 1);
        } while (ppppuVar9 != unaff_x28);
        ppppuVar9 = ppppuVar12;
        func_0x00010bf52a60();
        ppppuVar13 = (undefined8 ****)0x0;
      } while (ppppuVar9 != (undefined8 ****)0x0);
    }
    _objc_release(ppppuVar12);
    ppppuVar12 = ppppuVar4;
    func_0x00010bf51e00();
    _objc_release(ppppuVar4);
    _objc_release(ppppuVar10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_860) {
      ___stack_chk_fail();
      pcStack_928 = FUN_106df0b34;
      lStack_978 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppppuVar9 = (undefined8 ****)PTR_PTR_1126bc7b8;
      pppuStack_970 = unaff_x26;
      pppuStack_968 = unaff_x25;
      pppuStack_960 = unaff_x24;
      pppuStack_958 = unaff_x23;
      pppuStack_950 = ppppuVar13;
      pppuStack_948 = ppppuVar12;
      pppuStack_940 = ppppuVar4;
      pppuStack_938 = ppppuVar10;
      pppuStack_930 = &pppuStack_800;
      func_0x00010bfa7160();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar13 = ppppuVar9;
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppppuVar9);
      uStack_a18 = 0;
      uStack_a20 = 0;
      uStack_a08 = 0;
      uStack_a10 = 0;
      lStack_a38 = 0;
      uStack_a40 = 0;
      uStack_a28 = 0;
      puStack_a30 = (undefined8 *)0x0;
      ppppuVar4 = ppppuVar13;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar10 = ppppuVar4;
      func_0x00010bf52a60();
      if (ppppuVar10 != (undefined8 ****)0x0) {
        unaff_x24 = (undefined8 ****)*puStack_a30;
        ppppuVar12 = ppppuVar10;
        do {
          unaff_x25 = (undefined8 ****)0x0;
          do {
            if ((undefined8 ****)*puStack_a30 != unaff_x24) {
              _objc_enumerationMutation(ppppuVar4);
            }
            unaff_x23 = *(undefined8 *****)(lStack_a38 + (long)unaff_x25 * 8);
            func_0x00010bfedfc0();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar9 = unaff_x23;
            func_0x00010c25bcc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x23);
            ppppuVar10 = ppppuVar12;
            if (ppppuVar9 != (undefined8 ****)0x0) goto LAB_106df0c58;
            unaff_x25 = (undefined8 ****)((long)unaff_x25 + 1);
          } while (ppppuVar12 != unaff_x25);
          ppppuVar12 = ppppuVar4;
          func_0x00010bf52a60();
        } while (ppppuVar12 != (undefined8 ****)0x0);
      }
      ppppuVar10 = ppppuVar12;
      ppppuVar9 = (undefined8 ****)0x0;
LAB_106df0c58:
      ppppuVar12 = ppppuVar9;
      _objc_release(ppppuVar4);
      ppppuVar9 = ppppuVar13;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_978) {
        ___stack_chk_fail();
        pcStack_a48 = FUN_106df0ca4;
        lStack_a88 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_a80 = unaff_x28;
        pppuStack_a78 = (undefined8 ***)unaff_x27;
        pppuStack_a70 = ppppuVar12;
        pppuStack_a68 = ppppuVar10;
        pppuStack_a60 = ppppuVar4;
        pppuStack_a58 = ppppuVar13;
        pppuStack_a50 = &pppuStack_930;
        _objc_retain();
        lStack_b48 = 0;
        uStack_b50 = 0;
        uStack_b38 = 0;
        puStack_b40 = (undefined8 *)0x0;
        uStack_b28 = 0;
        uStack_b30 = 0;
        uStack_b18 = 0;
        uStack_b20 = 0;
        _objc_retain(ppppuVar9);
        ppppuVar13 = ppppuVar9;
        func_0x00010bf52a60();
        if (ppppuVar13 != (undefined8 ****)0x0) {
          ppppuVar10 = (undefined8 ****)*puStack_b40;
          do {
            ppppuVar12 = (undefined8 ****)0x0;
            do {
              if ((undefined8 ****)*puStack_b40 != ppppuVar10) {
                _objc_enumerationMutation(ppppuVar9);
              }
              lVar8 = *(long *)(lStack_b48 + (long)ppppuVar12 * 8);
              func_0x00010b5fa088();
              if (lVar8 != 1) {
                ppppuVar4 = (undefined8 ****)0x0;
                ppppuVar13 = ppppuVar12;
                goto LAB_106df0d70;
              }
              ppppuVar12 = (undefined8 ****)((long)ppppuVar12 + 1);
            } while (ppppuVar13 != ppppuVar12);
            ppppuVar13 = ppppuVar9;
            func_0x00010bf52a60();
          } while (ppppuVar13 != (undefined8 ****)0x0);
        }
        ppppuVar4 = (undefined8 ****)0x1;
        ppppuVar13 = ppppuVar12;
LAB_106df0d70:
        _objc_release(ppppuVar9);
        ppppuVar12 = ppppuVar9;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a88) {
          return ppppuVar4;
        }
        ___stack_chk_fail();
        uStack_b58 = 0x106df0db8;
        lStack_bc0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_c78 = 0;
        uStack_c80 = 0;
        uStack_c68 = 0;
        plStack_c70 = (long *)0x0;
        uStack_c58 = 0;
        uStack_c60 = 0;
        uStack_c48 = 0;
        uStack_c50 = 0;
        pppuStack_bb0 = unaff_x28;
        pppuStack_ba8 = (undefined8 ***)unaff_x27;
        pppuStack_ba0 = unaff_x26;
        pppuStack_b98 = unaff_x25;
        pppuStack_b90 = unaff_x24;
        pppuStack_b88 = unaff_x23;
        pppuStack_b80 = ppppuVar13;
        pppuStack_b78 = ppppuVar10;
        pppuStack_b70 = ppppuVar4;
        pppuStack_b68 = ppppuVar9;
        pppuStack_b60 = &pppuStack_a50;
        func_0x00010c2553e0();
        _objc_retainAutoreleasedReturnValue();
        pppuStack_ca0 = ppppuVar12;
        func_0x00010bf52a60();
        pppuStack_c90 = ppppuVar12;
        if (ppppuVar12 != (undefined8 ****)0x0) {
          lStack_c98 = *plStack_c70;
          do {
            ppppuVar10 = (undefined8 ****)0x0;
            do {
              if (*plStack_c70 != lStack_c98) {
                _objc_enumerationMutation(pppuStack_ca0);
              }
              unaff_x25 = *(undefined8 *****)(lStack_c78 + (long)ppppuVar10 * 8);
              unaff_x23 = unaff_x25;
              func_0x00010bf06320();
              _objc_retainAutoreleasedReturnValue();
              unaff_x24 = unaff_x23;
              func_0x00010c27dd80();
              _objc_retainAutoreleasedReturnValue();
              ppppuVar13 = unaff_x24;
              func_0x00010b774bc4();
              _objc_release(unaff_x24);
              _objc_release(unaff_x23);
              if (ppppuVar13 == (undefined8 ****)0x3fa644c1 ||
                  ppppuVar13 == (undefined8 ****)0xfffffffff0575f4d) {
                pppuStack_c88 = (undefined8 ***)PTR_PTR_1126c4978;
                unaff_x23 = unaff_x25;
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                unaff_x24 = unaff_x23;
                func_0x00010bf05ba0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x26 = unaff_x25;
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                unaff_x27 = (undefined **)unaff_x26;
                func_0x00010bf0d6a0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = unaff_x25;
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                ppppuVar12 = unaff_x28;
                func_0x00010c27dd80();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                ppppuVar4 = unaff_x25;
                func_0x00010bf05300();
                _objc_retainAutoreleasedReturnValue();
                ppppuVar9 = (undefined8 ****)pppuStack_c88;
                func_0x00010c241c80();
                _objc_retainAutoreleasedReturnValue();
                pppuStack_c88 = ppppuVar9;
                _objc_release(ppppuVar4);
                _objc_release(unaff_x25);
                _objc_release(ppppuVar12);
                _objc_release(unaff_x28);
                _objc_release(unaff_x27);
                _objc_release(unaff_x26);
                _objc_release(unaff_x24);
                _objc_release(unaff_x23);
              }
              ppppuVar4 = (undefined8 ****)0xfffffffff0575f4d;
              ppppuVar12 = (undefined8 ****)pppuStack_c88;
              if (ppppuVar13 == (undefined8 ****)0xfffffffff0575f4d ||
                  ppppuVar13 == (undefined8 ****)0x3fa644c1) goto LAB_106df0ffc;
              ppppuVar10 = (undefined8 ****)((long)ppppuVar10 + 1);
            } while ((undefined8 ****)pppuStack_c90 != ppppuVar10);
            ppppuVar12 = (undefined8 ****)pppuStack_ca0;
            func_0x00010bf52a60();
            pppuStack_c90 = ppppuVar12;
          } while (ppppuVar12 != (undefined8 ****)0x0);
        }
        ppppuVar12 = (undefined8 ****)0x0;
LAB_106df0ffc:
        ppppuVar9 = (undefined8 ****)pppuStack_ca0;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_bc0) {
          ___stack_chk_fail();
          uStack_ca8 = 0x106df1044;
          lStack_d10 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pppuStack_d00 = unaff_x28;
          pppuStack_cf8 = (undefined8 ***)unaff_x27;
          pppuStack_cf0 = unaff_x26;
          pppuStack_ce8 = unaff_x25;
          pppuStack_ce0 = unaff_x24;
          pppuStack_cd8 = unaff_x23;
          pppuStack_cd0 = ppppuVar13;
          pppuStack_cc8 = ppppuVar10;
          pppuStack_cc0 = ppppuVar4;
          pppuStack_cb8 = ppppuVar12;
          pppuStack_cb0 = &pppuStack_b60;
          _objc_retain();
          pppuStack_1118 = ppppuVar11;
          _objc_retain(ppppuVar11);
          ppppuVar12 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          plStack_fc8 = (long *)0x0;
          uStack_fd0 = 0;
          uStack_fb8 = 0;
          plStack_fc0 = (long *)0x0;
          uStack_fa8 = 0;
          uStack_fb0 = 0;
          uStack_f98 = 0;
          uStack_fa0 = 0;
          _objc_retain(ppppuVar9);
          pppuStack_1130 = ppppuVar9;
          func_0x00010bf52a60();
          ppppuVar4 = (undefined8 ****)pppuStack_1130;
          pppuStack_1110 = ppppuVar9;
          if (ppppuVar9 == (undefined8 ****)0x0) {
            _objc_release(pppuStack_1130);
            _objc_release(pppuStack_1118);
            ppppuVar10 = ppppuVar4;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d10)
            goto _objc_autoreleaseReturnValue;
            uVar17 = 0x106df16ec;
            ___stack_chk_fail();
          }
          else {
            lStack_1120 = *plStack_fc0;
            if (*plStack_fc0 != lStack_1120) {
              _objc_enumerationMutation(pppuStack_1130);
            }
            ppppuVar4 = (undefined8 ****)PTR_PTR_1126bc7b8;
            uStack_1100 = 0;
            unaff_x26 = (undefined8 ****)*plStack_fc8;
            ppppuVar11 = (undefined8 ****)pppuStack_1118;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa7160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppppuVar11);
            pppuStack_1108 = ppppuVar4;
            func_0x00010c0ef4a0();
            _objc_retainAutoreleasedReturnValue();
            pppuStack_10f8 = ppppuVar4;
            func_0x00010c2553e0();
            _objc_retainAutoreleasedReturnValue();
            lStack_1008 = 0;
            uStack_1010 = 0;
            uStack_ff8 = 0;
            puStack_1000 = (undefined8 *)0x0;
            uStack_fe8 = 0;
            uStack_ff0 = 0;
            uStack_fd8 = 0;
            uStack_fe0 = 0;
            pppuStack_10d8 = ppppuVar4;
            func_0x00010bf52a60();
            if (ppppuVar4 != (undefined8 ****)0x0) {
              unaff_x24 = (undefined8 ****)*puStack_1000;
              do {
                ppppuVar10 = (undefined8 ****)0x0;
                do {
                  if ((undefined8 ****)*puStack_1000 != unaff_x24) {
                    _objc_enumerationMutation(pppuStack_10d8);
                  }
                  ppppuVar11 = *(undefined8 *****)(lStack_1008 + (long)ppppuVar10 * 8);
                  ppppuVar13 = ppppuVar11;
                  func_0x00010bfedfc0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x27 = (undefined **)ppppuVar13;
                  func_0x00010c0ca400();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x28 = (undefined8 ****)unaff_x27;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  ppppuVar9 = unaff_x28;
                  func_0x00010c08fa60();
                  _objc_release(unaff_x28);
                  _objc_release(unaff_x27);
                  _objc_release(ppppuVar13);
                  unaff_x23 = (undefined8 ****)0x0;
                  if (ppppuVar9 != (undefined8 ****)0x0) {
                    func_0x00010bfedfc0();
                    _objc_retainAutoreleasedReturnValue();
                    ppppuVar13 = ppppuVar11;
                    func_0x00010c0ca400();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x23 = ppppuVar13;
                    func_0x00010c2923e0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(ppppuVar12);
                    _objc_release(unaff_x23);
                    _objc_release(ppppuVar13);
                    _objc_release(ppppuVar11);
                  }
                  ppppuVar10 = (undefined8 ****)((long)ppppuVar10 + 1);
                } while (ppppuVar4 != ppppuVar10);
                ppppuVar4 = (undefined8 ****)pppuStack_10d8;
                func_0x00010bf52a60();
              } while (ppppuVar4 != (undefined8 ****)0x0);
            }
            unaff_x25 = (undefined8 ****)pppuStack_10f8;
            ppppuVar10 = (undefined8 ****)pppuStack_10f8;
            func_0x00010bf2fba0();
            _objc_retainAutoreleasedReturnValue();
            uVar17 = 0x106df12c0;
            ppppuVar4 = ppppuVar10;
          }
          pppuVar5 = (undefined8 ***)&puStack_1260;
          lStack_1198 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pppuStack_1190 = unaff_x28;
          pppuStack_1188 = (undefined8 ***)unaff_x27;
          pppuStack_1180 = unaff_x26;
          pppuStack_1178 = unaff_x25;
          pppuStack_1170 = unaff_x24;
          pppuStack_1168 = unaff_x23;
          pppuStack_1160 = ppppuVar13;
          pppuStack_1158 = ppppuVar12;
          pppuStack_1150 = ppppuVar11;
          pppuStack_1148 = ppppuVar4;
          pppuStack_1140 = &pppuStack_cb0;
          uStack_1138 = uVar17;
          _objc_retain();
          ppppuVar12 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          lStack_1258 = 0;
          puStack_1260 = (undefined8 **)0x0;
          uStack_1248 = 0;
          plStack_1250 = (long *)0x0;
          uStack_1238 = 0;
          uStack_1240 = 0;
          uStack_1228 = 0;
          uStack_1230 = 0;
          ppppuVar11 = ppppuVar10;
          func_0x00010c293dc0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = auStack_1218;
          ppppuVar4 = ppppuVar11;
          func_0x00010bf52a60();
          if (ppppuVar4 != (undefined8 ****)0x0) {
            lVar8 = *plStack_1250;
            do {
              ppppuVar13 = (undefined8 ****)0x0;
              do {
                if (*plStack_1250 != lVar8) {
                  _objc_enumerationMutation(ppppuVar11);
                }
                unaff_x23 = *(undefined8 *****)(lStack_1258 + (long)ppppuVar13 * 8);
                unaff_x24 = unaff_x23;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                ppppuVar9 = unaff_x24;
                func_0x00010c08fa60();
                _objc_release(unaff_x24);
                if (ppppuVar9 != (undefined8 ****)0x0) {
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(ppppuVar12);
                  _objc_release(unaff_x23);
                }
                ppppuVar13 = (undefined8 ****)((long)ppppuVar13 + 1);
              } while (ppppuVar4 != ppppuVar13);
              puVar6 = auStack_1218;
              ppppuVar4 = ppppuVar11;
              pppuVar5 = (undefined8 ***)&puStack_1260;
              func_0x00010bf52a60();
              ppppuVar13 = (undefined8 ****)0x0;
            } while (ppppuVar4 != (undefined8 ****)0x0);
          }
          _objc_release(ppppuVar11);
          ppppuVar4 = ppppuVar10;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1198) {
            ___stack_chk_fail();
            pcStack_1268 = FUN_106df1868;
            pppuStack_12a0 = unaff_x24;
            pppuStack_1298 = unaff_x23;
            pppuStack_1290 = ppppuVar13;
            pppuStack_1288 = ppppuVar11;
            pppuStack_1280 = ppppuVar12;
            pppuStack_1278 = ppppuVar10;
            pppuStack_1270 = &pppuStack_1140;
            _objc_retain(pppuVar5);
            _objc_retain(puVar6);
            puStack_12a8 = PTR_PTR_1126f6f30;
            ppppuVar13 = &pppuStack_12b0;
            pppuStack_12b0 = ppppuVar4;
            _objc_msgSendSuper2(ppppuVar13,PTR_s_init_1125d9248);
            if (ppppuVar13 != (undefined8 ****)0x0) {
              _objc_retain(pppuVar5);
              pppuVar3 = ppppuVar13[1];
              ppppuVar13[1] = pppuVar5;
              _objc_release(pppuVar3);
              _objc_initWeak(auStack_12b8,ppppuVar13);
              pppuVar3 = (undefined8 ***)PTR_PTR_1126ae720;
              _objc_copyWeak(auStack_12c0,auStack_12b8);
              _objc_retain(puVar6);
              func_0x00010bf11fe0();
              _objc_retainAutoreleasedReturnValue();
              pppuVar7 = ppppuVar13[2];
              ppppuVar13[2] = pppuVar3;
              _objc_release(pppuVar7);
              _objc_release(puVar6);
              _objc_destroyWeak(auStack_12c0);
              _objc_destroyWeak(auStack_12b8);
            }
            _objc_release(puVar6);
            _objc_release(pppuVar5);
            return ppppuVar13;
          }
        }
      }
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppuVar12);
  return ppppuVar12;
}



/* Entry: 106def8b0; end: 106defb6b;  */

/* WARNING: Possible PIC construction at 0x000106df12bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106df134c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106df12c0) */
/* WARNING: Removing unreachable block (ram,0x000106df131c) */
/* WARNING: Removing unreachable block (ram,0x000106df1350) */
/* WARNING: Removing unreachable block (ram,0x000106df137c) */
/* WARNING: Removing unreachable block (ram,0x000106df1328) */
/* WARNING: Removing unreachable block (ram,0x000106df132c) */
/* WARNING: Removing unreachable block (ram,0x000106df133c) */
/* WARNING: Removing unreachable block (ram,0x000106df1344) */
/* WARNING: Removing unreachable block (ram,0x000106df1398) */
/* WARNING: Removing unreachable block (ram,0x000106df13bc) */
/* WARNING: Removing unreachable block (ram,0x000106df1428) */
/* WARNING: Removing unreachable block (ram,0x000106df1434) */
/* WARNING: Removing unreachable block (ram,0x000106df1438) */
/* WARNING: Removing unreachable block (ram,0x000106df144c) */
/* WARNING: Removing unreachable block (ram,0x000106df1454) */
/* WARNING: Removing unreachable block (ram,0x000106df149c) */
/* WARNING: Removing unreachable block (ram,0x000106df1504) */
/* WARNING: Removing unreachable block (ram,0x000106df1510) */
/* WARNING: Removing unreachable block (ram,0x000106df1514) */
/* WARNING: Removing unreachable block (ram,0x000106df1524) */
/* WARNING: Removing unreachable block (ram,0x000106df152c) */
/* WARNING: Removing unreachable block (ram,0x000106df1580) */
/* WARNING: Removing unreachable block (ram,0x000106df15d8) */
/* WARNING: Removing unreachable block (ram,0x000106df15e4) */
/* WARNING: Removing unreachable block (ram,0x000106df1600) */
/* WARNING: Removing unreachable block (ram,0x000106df1608) */
/* WARNING: Removing unreachable block (ram,0x000106df1618) */
/* WARNING: Removing unreachable block (ram,0x000106df1634) */
/* WARNING: Removing unreachable block (ram,0x000106df1648) */
/* WARNING: Removing unreachable block (ram,0x000106df1674) */

undefined8 ****
FUN_106def8b0(undefined8 param_1,double param_2,undefined8 ****param_3,undefined8 ****param_4,
             undefined8 ****param_5,undefined8 ****param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ***pppuVar5;
  undefined1 *puVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****unaff_x23;
  undefined8 ****ppppuVar14;
  undefined8 ****unaff_x24;
  undefined8 ****unaff_x25;
  long lVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****unaff_x26;
  undefined **unaff_x27;
  undefined8 ****unaff_x28;
  undefined8 uVar17;
  float fVar18;
  undefined1 auStack_1240 [8];
  undefined1 auStack_1238 [8];
  undefined8 ***pppuStack_1230;
  undefined *puStack_1228;
  undefined8 ***pppuStack_1220;
  undefined8 ***pppuStack_1218;
  undefined8 ***pppuStack_1210;
  undefined8 ***pppuStack_1208;
  undefined8 ***pppuStack_1200;
  undefined8 ***pppuStack_11f8;
  undefined8 ***pppuStack_11f0;
  code *pcStack_11e8;
  undefined8 *puStack_11e0;
  long lStack_11d8;
  long *plStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined1 auStack_1198 [128];
  long lStack_1118;
  undefined8 ***pppuStack_1110;
  undefined8 ***pppuStack_1108;
  undefined8 ***pppuStack_1100;
  undefined8 ***pppuStack_10f8;
  undefined8 ***pppuStack_10f0;
  undefined8 ***pppuStack_10e8;
  undefined8 ***pppuStack_10e0;
  undefined8 ***pppuStack_10d8;
  undefined8 ***pppuStack_10d0;
  undefined8 ***pppuStack_10c8;
  undefined8 ***pppuStack_10c0;
  undefined8 uStack_10b8;
  undefined8 ***pppuStack_10b0;
  long lStack_10a0;
  undefined8 ***pppuStack_1098;
  undefined8 ***pppuStack_1090;
  undefined8 ***pppuStack_1088;
  undefined8 uStack_1080;
  undefined8 ***pppuStack_1078;
  undefined8 ***pppuStack_1058;
  undefined8 uStack_f90;
  long lStack_f88;
  undefined8 *puStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  long *plStack_f48;
  long *plStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  long lStack_c90;
  undefined8 ***pppuStack_c80;
  undefined8 ***pppuStack_c78;
  undefined8 ***pppuStack_c70;
  undefined8 ***pppuStack_c68;
  undefined8 ***pppuStack_c60;
  undefined8 ***pppuStack_c58;
  undefined8 ***pppuStack_c50;
  undefined8 ***pppuStack_c48;
  undefined8 ***pppuStack_c40;
  undefined8 ***pppuStack_c38;
  undefined8 ***pppuStack_c30;
  undefined8 uStack_c28;
  undefined8 ***pppuStack_c20;
  long lStack_c18;
  undefined8 ***pppuStack_c10;
  undefined8 ***pppuStack_c08;
  undefined8 uStack_c00;
  long lStack_bf8;
  long *plStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  long lStack_b40;
  undefined8 ***pppuStack_b30;
  undefined8 ***pppuStack_b28;
  undefined8 ***pppuStack_b20;
  undefined8 ***pppuStack_b18;
  undefined8 ***pppuStack_b10;
  undefined8 ***pppuStack_b08;
  undefined8 ***pppuStack_b00;
  undefined8 ***pppuStack_af8;
  undefined8 ***pppuStack_af0;
  undefined8 ***pppuStack_ae8;
  undefined8 ***pppuStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  long lStack_ac8;
  undefined8 *puStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  long lStack_a08;
  undefined8 ***pppuStack_a00;
  undefined8 ***pppuStack_9f8;
  undefined8 ***pppuStack_9f0;
  undefined8 ***pppuStack_9e8;
  undefined8 ***pppuStack_9e0;
  undefined8 ***pppuStack_9d8;
  undefined8 ***pppuStack_9d0;
  code *pcStack_9c8;
  undefined8 uStack_9c0;
  long lStack_9b8;
  undefined8 *puStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  long lStack_8f8;
  undefined8 ***pppuStack_8f0;
  undefined8 ***pppuStack_8e8;
  undefined8 ***pppuStack_8e0;
  undefined8 ***pppuStack_8d8;
  undefined8 ***pppuStack_8d0;
  undefined8 ***pppuStack_8c8;
  undefined8 ***pppuStack_8c0;
  undefined8 ***pppuStack_8b8;
  undefined1 ***pppuStack_8b0;
  code *pcStack_8a8;
  undefined8 uStack_8a0;
  long lStack_898;
  undefined8 *puStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  long lStack_7e0;
  undefined8 ***pppuStack_7d0;
  undefined8 ***pppuStack_7c8;
  undefined8 ***pppuStack_7c0;
  undefined8 ***pppuStack_7b8;
  undefined8 ***pppuStack_7b0;
  undefined8 ***pppuStack_7a8;
  undefined8 ***pppuStack_7a0;
  undefined8 ***pppuStack_798;
  undefined8 ***pppuStack_790;
  undefined8 ***pppuStack_788;
  undefined1 **ppuStack_780;
  undefined8 uStack_778;
  undefined8 ***pppuStack_768;
  undefined8 ***pppuStack_760;
  undefined8 ***pppuStack_758;
  undefined **ppuStack_750;
  long lStack_748;
  undefined8 ***pppuStack_740;
  long lStack_738;
  undefined8 ***pppuStack_730;
  long lStack_728;
  undefined *puStack_720;
  undefined8 ***pppuStack_718;
  undefined8 ***pppuStack_710;
  undefined8 ***pppuStack_708;
  undefined8 ***pppuStack_700;
  undefined *puStack_6f8;
  undefined8 uStack_6f0;
  long lStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  long lStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  long lStack_668;
  long *plStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  long lStack_628;
  undefined8 *puStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  long lStack_5e8;
  long *plStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long lStack_568;
  undefined8 *puStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long lStack_1b0;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 **appuStack_f8 [16];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar13 = param_4;
  ppppuVar4 = param_5;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != (undefined8 ****)0x0) {
    uVar17 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    puStack_130 = (undefined8 *)0x0;
    ppppuVar13 = param_5;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar4 = ppppuVar13;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar13);
    param_6 = (undefined8 ****)appuStack_f8;
    ppppuVar13 = ppppuVar4;
    func_0x00010bf52a60();
    fVar18 = (float)uVar17;
    if (ppppuVar13 != (undefined8 ****)0x0) {
      unaff_x25 = (undefined8 ****)*puStack_130;
      do {
        unaff_x26 = (undefined8 ****)0x0;
        do {
          if ((undefined8 ****)*puStack_130 != unaff_x25) {
            _objc_enumerationMutation(ppppuVar4);
          }
          unaff_x24 = *(undefined8 *****)(lStack_138 + (long)unaff_x26 * 8);
          ppppuVar12 = unaff_x24;
          func_0x00010bf0d0a0();
          fVar18 = (float)uVar17;
          if ((int)ppppuVar12 == 3) {
            func_0x00010c2a3a80();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar13 = unaff_x24;
            func_0x00010bdc2b80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2039e0(param_3);
            _objc_release(ppppuVar13);
            _objc_release(unaff_x24);
            unaff_x24 = ppppuVar13;
            goto LAB_106defa04;
          }
          unaff_x26 = (undefined8 ****)((long)unaff_x26 + 1);
        } while (ppppuVar13 != unaff_x26);
        param_6 = (undefined8 ****)appuStack_f8;
        ppppuVar13 = ppppuVar4;
        func_0x00010bf52a60();
        fVar18 = (float)uVar17;
      } while (ppppuVar13 != (undefined8 ****)0x0);
    }
LAB_106defa04:
    _objc_release(ppppuVar4);
    ppppuVar13 = (undefined8 ****)PTR_PTR_1126d2a00;
    _objc_retain(param_3);
    _objc_opt_class();
    ppppuVar4 = param_3;
    _objc_opt_isKindOfClass();
    ppppuVar12 = param_3;
    if (((ulong)ppppuVar4 & 1) == 0) {
      ppppuVar12 = (undefined8 ****)0x0;
    }
    _objc_retain(ppppuVar12);
    _objc_release(param_3);
    if (((ulong)ppppuVar4 & 1) != 0) {
      func_0x000107e629e4(param_5);
      func_0x00010c1a6de0(param_3);
    }
    func_0x00010bf8b160(param_4);
    func_0x00010c1c4580((double)fVar18,param_3);
    func_0x00010bfed740(param_4);
    func_0x00010c1c4920(param_3);
    ppppuVar4 = param_4;
    func_0x00010b5fa088();
    if (ppppuVar4 == (undefined8 ****)0x9) {
      func_0x000109023974(param_4);
    }
    else {
      func_0x00010c2a5040(param_4);
      ppppuVar4 = param_4;
      func_0x00010bfe0640();
      param_2 = (double)(int)ppppuVar4;
    }
    func_0x00010c1c56e0(param_3);
    ppppuVar4 = (undefined8 ****)(long)param_2;
    func_0x00010c1c4860(param_3);
    unaff_x23 = param_5;
    func_0x000106def3a4();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x23 != (undefined8 ****)0x0) {
      ppppuVar4 = unaff_x23;
      func_0x00010c1c4de0(param_3);
    }
    _objc_release(unaff_x23);
    _objc_release(ppppuVar12);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_3;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_106defb6c;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar12 = ppppuVar13;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain();
  pppuStack_700 = ppppuVar13;
  _objc_retain(ppppuVar13);
  _objc_retain(ppppuVar4);
  _objc_retain(param_6);
  ppppuVar13 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  pppuStack_710 = ppppuVar13;
  _objc_opt_new();
  pppuStack_768 = param_3;
  puStack_6f8 = puVar1;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  pppuStack_758 = ppppuVar4;
  pppuStack_708 = param_6;
  if ((ppppuVar4 != (undefined8 ****)0x0) && (param_3 == (undefined8 ****)0x0)) {
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    lStack_568 = 0;
    uStack_570 = 0;
    uStack_558 = 0;
    puStack_560 = (undefined8 *)0x0;
    _objc_retain(ppppuVar4);
    func_0x00010bf52a60();
    pppuStack_718 = ppppuVar4;
    if (ppppuVar4 != (undefined8 ****)0x0) {
      puStack_720 = (undefined *)*puStack_560;
      do {
        ppppuVar13 = (undefined8 ****)0x0;
        do {
          if ((undefined *)*puStack_560 != puStack_720) {
            _objc_enumerationMutation(pppuStack_758);
          }
          ppppuVar4 = *(undefined8 *****)(lStack_568 + (long)ppppuVar13 * 8);
          unaff_x23 = ppppuVar4;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x23;
          func_0x00010bf30500();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = (undefined **)unaff_x26;
          func_0x00010c0ca860();
          _objc_release(unaff_x26);
          _objc_release(unaff_x23);
          if ((undefined8 ****)unaff_x27 != (undefined8 ****)0x0) {
            uStack_588 = 0;
            uStack_590 = 0;
            uStack_578 = 0;
            uStack_580 = 0;
            lStack_5a8 = 0;
            uStack_5b0 = 0;
            uStack_598 = 0;
            puStack_5a0 = (undefined8 *)0x0;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = ppppuVar4;
            func_0x00010bf30500();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar9 = unaff_x26;
            func_0x00010c0ca840();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x26);
            _objc_release(ppppuVar4);
            ppppuVar11 = ppppuVar9;
            func_0x00010bf52a60();
            if (ppppuVar11 != (undefined8 ****)0x0) {
              unaff_x24 = (undefined8 ****)*puStack_5a0;
              do {
                ppppuVar10 = (undefined8 ****)0x0;
                do {
                  if ((undefined8 ****)*puStack_5a0 != unaff_x24) {
                    _objc_enumerationMutation(ppppuVar9);
                  }
                  ppppuVar14 = *(undefined8 *****)(lStack_5a8 + (long)ppppuVar10 * 8);
                  unaff_x27 = (undefined **)ppppuVar14;
                  func_0x00010bf96da0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x28 = (undefined8 ****)unaff_x27;
                  func_0x00010c290fa0();
                  _objc_retainAutoreleasedReturnValue();
                  ppppuVar16 = unaff_x28;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  _objc_release(unaff_x28);
                  _objc_release(unaff_x27);
                  ppppuVar4 = ppppuVar14;
                  if (ppppuVar16 != (undefined8 ****)0x0) {
                    ppppuVar16 = (undefined8 ****)pppuStack_708;
                    func_0x00010c269d40();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf96da0();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x28 = ppppuVar14;
                    func_0x00010c290fa0();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x25 = unaff_x28;
                    func_0x00010c2923e0();
                    _objc_retainAutoreleasedReturnValue();
                    ppppuVar4 = ppppuVar16;
                    func_0x00010c0ee920();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(unaff_x25);
                    _objc_release(unaff_x28);
                    _objc_release(ppppuVar14);
                    _objc_release(ppppuVar16);
                    if (ppppuVar4 != (undefined8 ****)0x0) {
                      ppppuVar14 = ppppuVar4;
                      func_0x00010c2923e0();
                      _objc_retainAutoreleasedReturnValue();
                      unaff_x28 = ppppuVar4;
                      func_0x00010c294420();
                      _objc_retainAutoreleasedReturnValue();
                      if (((ppppuVar14 != (undefined8 ****)0x0) &&
                          (puVar1 = puStack_6f8, func_0x00010bf4b900(), ((ulong)puVar1 & 1) == 0))
                         && (ppppuVar16 = (undefined8 ****)pppuStack_700, func_0x00010bf4b900(),
                            ((ulong)ppppuVar16 & 1) == 0)) {
                        puVar1 = PTR_PTR_1126d2aa8;
                        _objc_alloc(PTR_PTR_1126d2aa8);
                        func_0x00010c05f760();
                        func_0x00010c1d0640(pppuStack_710);
                        func_0x00010befa120(puStack_6f8);
                        _objc_release(puVar1);
                      }
                      _objc_release(unaff_x28);
                      _objc_release(ppppuVar14);
                    }
                    _objc_release(ppppuVar4);
                    unaff_x27 = (undefined **)ppppuVar14;
                  }
                  ppppuVar10 = (undefined8 ****)((long)ppppuVar10 + 1);
                } while (ppppuVar11 != ppppuVar10);
                ppppuVar11 = ppppuVar9;
                func_0x00010bf52a60();
                unaff_x26 = (undefined8 ****)0x0;
              } while (ppppuVar11 != (undefined8 ****)0x0);
            }
            _objc_release(ppppuVar9);
            unaff_x23 = ppppuVar4;
          }
          ppppuVar13 = (undefined8 ****)((long)ppppuVar13 + 1);
        } while (ppppuVar13 != (undefined8 ****)pppuStack_718);
        ppppuVar13 = (undefined8 ****)pppuStack_758;
        func_0x00010bf52a60();
        pppuStack_718 = ppppuVar13;
      } while (ppppuVar13 != (undefined8 ****)0x0);
    }
    _objc_release(pppuStack_758);
  }
  ppppuVar13 = (undefined8 ****)pppuStack_708;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  lStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5d8 = 0;
  plStack_5e0 = (long *)0x0;
  ppppuVar4 = (undefined8 ****)pppuStack_768;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  pppuStack_760 = ppppuVar4;
  func_0x00010bf52a60();
  pppuStack_740 = ppppuVar4;
  if (ppppuVar4 != (undefined8 ****)0x0) {
    lStack_748 = *plStack_5e0;
    ppuStack_750 = &PTR____CFConstantStringClassReference_110efb658;
    do {
      ppppuVar4 = (undefined8 ****)0x0;
      do {
        if (*plStack_5e0 != lStack_748) {
          _objc_enumerationMutation(pppuStack_760);
        }
        lVar8 = *(long *)(lStack_5e8 + (long)ppppuVar4 * 8);
        puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        pppuStack_730 = ppppuVar4;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        lStack_628 = 0;
        uStack_630 = 0;
        uStack_618 = 0;
        puStack_620 = (undefined8 *)0x0;
        uStack_608 = 0;
        uStack_610 = 0;
        uStack_5f8 = 0;
        uStack_600 = 0;
        lStack_738 = lVar8;
        puStack_720 = puVar1;
        func_0x00010c293dc0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar8;
        func_0x00010bf52a60();
        if (lVar2 != 0) {
          unaff_x24 = (undefined8 ****)*puStack_620;
          lStack_728 = lVar8;
          do {
            lVar15 = 0;
            do {
              if ((undefined8 ****)*puStack_620 != unaff_x24) {
                _objc_enumerationMutation(lVar8);
              }
              unaff_x23 = *(undefined8 *****)(lStack_628 + lVar15 * 8);
              ppppuVar4 = ppppuVar13;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              ppppuVar9 = unaff_x23;
              func_0x00010c2923e0(unaff_x23);
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = (undefined **)ppppuVar4;
              func_0x00010c0ee920();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppppuVar9);
              _objc_release(ppppuVar4);
              ppppuVar4 = (undefined8 ****)unaff_x27;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = (undefined8 ****)unaff_x27;
              func_0x00010c294420();
              _objc_retainAutoreleasedReturnValue();
              if ((((undefined8 ****)unaff_x27 != (undefined8 ****)0x0 &&
                    ppppuVar4 != (undefined8 ****)0x0) &&
                  (puVar1 = puStack_6f8, func_0x00010bf4b900(), ((ulong)puVar1 & 1) == 0)) &&
                 (ppppuVar9 = (undefined8 ****)pppuStack_700, func_0x00010bf4b900(),
                 ((ulong)ppppuVar9 & 1) == 0)) {
                ppppuVar13 = (undefined8 ****)PTR_PTR_1126d2aa8;
                _objc_alloc();
                func_0x00010c05f760();
                pppuStack_718 = ppppuVar13;
                func_0x00010c1d0640(pppuStack_710);
                puVar1 = PTR_PTR_1126d2ab0;
                ppppuVar9 = unaff_x23;
                func_0x00010c24ff00(unaff_x23);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c067fc0();
                func_0x00010c08fa60(unaff_x28);
                func_0x00010bf51620(puVar1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c24ff00();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puStack_720);
                _objc_release(unaff_x23);
                lVar8 = lStack_728;
                _objc_release(puVar1);
                ppppuVar13 = (undefined8 ****)pppuStack_708;
                _objc_release(ppppuVar9);
                func_0x00010befa120(puStack_6f8);
                _objc_release(pppuStack_718);
              }
              _objc_release(unaff_x28);
              _objc_release(ppppuVar4);
              _objc_release(unaff_x27);
              lVar15 = lVar15 + 1;
            } while (lVar2 != lVar15);
            lVar2 = lVar8;
            func_0x00010bf52a60();
            unaff_x26 = (undefined8 ****)0x0;
          } while (lVar2 != 0);
        }
        _objc_release(lVar8);
        ppppuVar13 = (undefined8 ****)PTR_PTR_1126d1320;
        lVar8 = lStack_738;
        func_0x00010c26b700(lStack_738);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puStack_720;
        func_0x00010bf51e00(puStack_720);
        func_0x00010bf9ef60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(lVar8);
        uStack_648 = 0;
        uStack_650 = 0;
        uStack_638 = 0;
        uStack_640 = 0;
        lStack_668 = 0;
        uStack_670 = 0;
        uStack_658 = 0;
        plStack_660 = (long *)0x0;
        unaff_x25 = ppppuVar13;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar4 = unaff_x25;
        func_0x00010bf52a60();
        if (ppppuVar4 != (undefined8 ****)0x0) {
          lVar8 = *plStack_660;
          do {
            unaff_x24 = (undefined8 ****)0x0;
            do {
              if (*plStack_660 != lVar8) {
                _objc_enumerationMutation(unaff_x25);
              }
              ppppuVar11 = *(undefined8 *****)(lStack_668 + (long)unaff_x24 * 8);
              unaff_x23 = ppppuVar11;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              ppppuVar9 = ppppuVar11;
              func_0x00010c294420(ppppuVar11);
              _objc_retainAutoreleasedReturnValue();
              if (((ppppuVar11 != (undefined8 ****)0x0 && unaff_x23 != (undefined8 ****)0x0) &&
                  (puVar1 = puStack_6f8, func_0x00010bf4b900(), ((ulong)puVar1 & 1) == 0)) &&
                 (ppppuVar11 = (undefined8 ****)pppuStack_700, func_0x00010bf4b900(),
                 ((ulong)ppppuVar11 & 1) == 0)) {
                puVar1 = PTR_PTR_1126d2aa8;
                _objc_alloc(PTR_PTR_1126d2aa8);
                func_0x00010c05f760();
                func_0x00010c1d0640(pppuStack_710);
                func_0x00010befa120(puStack_6f8);
                _objc_release(puVar1);
              }
              _objc_release(ppppuVar9);
              _objc_release(unaff_x23);
              unaff_x24 = (undefined8 ****)((long)unaff_x24 + 1);
            } while (ppppuVar4 != unaff_x24);
            ppppuVar4 = unaff_x25;
            func_0x00010bf52a60();
            unaff_x26 = (undefined8 ****)0x0;
          } while (ppppuVar4 != (undefined8 ****)0x0);
        }
        _objc_release(unaff_x25);
        _objc_release(ppppuVar13);
        _objc_release(puStack_720);
        ppppuVar13 = (undefined8 ****)pppuStack_708;
        ppppuVar4 = (undefined8 ****)((long)pppuStack_730 + 1);
      } while (ppppuVar4 != (undefined8 ****)pppuStack_740);
      ppppuVar4 = (undefined8 ****)pppuStack_760;
      func_0x00010bf52a60();
      pppuStack_740 = ppppuVar4;
    } while (ppppuVar4 != (undefined8 ****)0x0);
  }
  _objc_release(pppuStack_760);
  uStack_688 = 0;
  uStack_690 = 0;
  uStack_678 = 0;
  uStack_680 = 0;
  lStack_6a8 = 0;
  uStack_6b0 = 0;
  uStack_698 = 0;
  puStack_6a0 = (undefined8 *)0x0;
  ppppuVar4 = (undefined8 ****)pppuStack_768;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  pppuStack_718 = ppppuVar4;
  func_0x00010bf52a60();
  if (ppppuVar4 != (undefined8 ****)0x0) {
    unaff_x24 = (undefined8 ****)*puStack_6a0;
    do {
      ppppuVar9 = (undefined8 ****)0x0;
      do {
        if ((undefined8 ****)*puStack_6a0 != unaff_x24) {
          _objc_enumerationMutation(pppuStack_718);
        }
        ppppuVar16 = *(undefined8 *****)(lStack_6a8 + (long)ppppuVar9 * 8);
        ppppuVar11 = ppppuVar16;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar10 = ppppuVar11;
        func_0x00010c0ca400();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = ppppuVar10;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppppuVar10);
        _objc_release(ppppuVar11);
        ppppuVar11 = ppppuVar16;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar10 = ppppuVar11;
        func_0x00010c0ca400();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = ppppuVar10;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppppuVar10);
        _objc_release(ppppuVar11);
        ppppuVar11 = unaff_x28;
        func_0x00010c08fa60();
        if (((ppppuVar11 == (undefined8 ****)0x0) ||
            (puVar1 = puStack_6f8, func_0x00010bf4b900(), ((ulong)puVar1 & 1) != 0)) ||
           (ppppuVar11 = (undefined8 ****)pppuStack_700, func_0x00010bf4b900(),
           ((ulong)ppppuVar11 & 1) != 0)) {
          ppppuVar13 = ppppuVar16;
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar11 = ppppuVar13;
          func_0x00010c244f40();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar10 = ppppuVar11;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x28);
          _objc_release(ppppuVar11);
          _objc_release(ppppuVar13);
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar13 = ppppuVar16;
          func_0x00010c244f40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = ppppuVar13;
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x23);
          _objc_release(ppppuVar13);
          _objc_release(ppppuVar16);
          ppppuVar11 = ppppuVar10;
          func_0x00010c08fa60();
          if (((ppppuVar11 != (undefined8 ****)0x0) &&
              (puVar1 = puStack_6f8, func_0x00010bf4b900(), ((ulong)puVar1 & 1) == 0)) &&
             (ppppuVar11 = (undefined8 ****)pppuStack_700, func_0x00010bf4b900(),
             ((ulong)ppppuVar11 & 1) == 0)) {
            unaff_x27 = (undefined **)PTR_PTR_1126d2aa8;
            _objc_alloc();
            func_0x00010c05f760();
            func_0x00010c1d0640(pppuStack_710);
            goto LAB_106df0640;
          }
        }
        else {
          unaff_x27 = (undefined **)PTR_PTR_1126d2aa8;
          _objc_alloc();
          func_0x00010c05f760();
          func_0x00010c1d0640(pppuStack_710);
          unaff_x25 = unaff_x23;
          ppppuVar10 = unaff_x28;
LAB_106df0640:
          func_0x00010befa120(puStack_6f8);
          _objc_release(unaff_x27);
          unaff_x28 = ppppuVar10;
        }
        _objc_release(unaff_x25);
        _objc_release(ppppuVar10);
        ppppuVar9 = (undefined8 ****)((long)ppppuVar9 + 1);
      } while (ppppuVar4 != ppppuVar9);
      ppppuVar4 = (undefined8 ****)pppuStack_718;
      func_0x00010bf52a60();
      unaff_x26 = (undefined8 ****)0x0;
    } while (ppppuVar4 != (undefined8 ****)0x0);
  }
  _objc_release(pppuStack_718);
  ppppuVar4 = (undefined8 ****)pppuStack_758;
  uStack_6c8 = 0;
  uStack_6d0 = 0;
  uStack_6b8 = 0;
  uStack_6c0 = 0;
  lStack_6e8 = 0;
  uStack_6f0 = 0;
  uStack_6d8 = 0;
  puStack_6e0 = (undefined8 *)0x0;
  _objc_retain(pppuStack_758);
  func_0x00010bf52a60();
  if (ppppuVar4 != (undefined8 ****)0x0) {
    unaff_x27 = (undefined **)*puStack_6e0;
    do {
      unaff_x28 = (undefined8 ****)0x0;
      do {
        if ((undefined8 ****)*puStack_6e0 != (undefined8 ****)unaff_x27) {
          _objc_enumerationMutation(pppuStack_758);
        }
        unaff_x23 = *(undefined8 *****)(lStack_6e8 + (long)unaff_x28 * 8);
        ppppuVar9 = unaff_x23;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar13 = ppppuVar9;
        func_0x00010bfedf20();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = ppppuVar13;
        func_0x00010bfedf40();
        _objc_release(ppppuVar13);
        _objc_release(ppppuVar9);
        if ((int)unaff_x24 == 6) {
          ppppuVar9 = unaff_x23;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar13 = ppppuVar9;
          func_0x00010bfedf20();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = ppppuVar13;
          func_0x00010c0ca640();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppppuVar13);
          _objc_release(ppppuVar9);
          ppppuVar9 = unaff_x25;
          func_0x00010bfde100();
          if ((int)ppppuVar9 != 0) {
            ppppuVar9 = unaff_x25;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar13 = ppppuVar9;
            func_0x00010bfe2ee0();
            unaff_x24 = unaff_x25;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar12 = unaff_x24;
            func_0x00010c0b5940();
            unaff_x23 = ppppuVar13;
            func_0x000100c4a928();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x24);
            _objc_release(ppppuVar9);
            unaff_x26 = unaff_x25;
            func_0x00010c294420();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar9 = unaff_x23;
            func_0x00010c08fa60();
            if (((ppppuVar9 != (undefined8 ****)0x0) &&
                (puVar1 = puStack_6f8, func_0x00010bf4b900(), ((ulong)puVar1 & 1) == 0)) &&
               (ppppuVar9 = (undefined8 ****)pppuStack_700, func_0x00010bf4b900(),
               ((ulong)ppppuVar9 & 1) == 0)) {
              puVar1 = PTR_PTR_1126d2aa8;
              _objc_alloc(PTR_PTR_1126d2aa8);
              func_0x00010c05f760();
              func_0x00010c1d0640(pppuStack_710);
              func_0x00010befa120(puStack_6f8);
              _objc_release(puVar1);
            }
            _objc_release(unaff_x26);
            _objc_release(unaff_x23);
          }
          _objc_release(unaff_x25);
        }
        unaff_x28 = (undefined8 ****)((long)unaff_x28 + 1);
      } while (ppppuVar4 != unaff_x28);
      ppppuVar4 = (undefined8 ****)pppuStack_758;
      func_0x00010bf52a60();
    } while (ppppuVar4 != (undefined8 ****)0x0);
  }
  pppuVar5 = pppuStack_758;
  _objc_release(pppuStack_758);
  pppuVar3 = pppuStack_710;
  ppppuVar4 = (undefined8 ****)pppuStack_710;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_6f8);
  _objc_release(pppuVar3);
  _objc_release(pppuStack_708);
  _objc_release(pppuVar5);
  _objc_release(pppuStack_700);
  _objc_release(pppuStack_768);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
    ___stack_chk_fail();
    pppuStack_798 = pppuVar3;
    pppuStack_790 = pppuVar5;
    uStack_778 = 0x106df0944;
    lStack_7e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppuVar9 = (undefined8 ****)PTR_PTR_1126bc7b8;
    pppuStack_7d0 = unaff_x28;
    pppuStack_7c8 = (undefined8 ***)unaff_x27;
    pppuStack_7c0 = unaff_x26;
    pppuStack_7b8 = unaff_x25;
    pppuStack_7b0 = unaff_x24;
    pppuStack_7a8 = unaff_x23;
    pppuStack_7a0 = ppppuVar13;
    pppuStack_788 = ppppuVar4;
    ppuStack_780 = &puStack_150;
    func_0x00010bfa7160();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar11 = ppppuVar9;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar9);
    ppppuVar9 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_898 = 0;
    uStack_8a0 = 0;
    uStack_888 = 0;
    puStack_890 = (undefined8 *)0x0;
    uStack_878 = 0;
    uStack_880 = 0;
    uStack_868 = 0;
    uStack_870 = 0;
    ppppuVar4 = ppppuVar11;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar10 = ppppuVar4;
    func_0x00010bf52a60();
    if (ppppuVar10 != (undefined8 ****)0x0) {
      unaff_x26 = (undefined8 ****)*puStack_890;
      unaff_x27 = &PTR_PTR_1126d2000;
      do {
        unaff_x28 = (undefined8 ****)0x0;
        do {
          if ((undefined8 ****)*puStack_890 != unaff_x26) {
            _objc_enumerationMutation(ppppuVar4);
          }
          unaff_x24 = *(undefined8 *****)(lStack_898 + (long)unaff_x28 * 8);
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x24;
          func_0x00010c2751c0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = unaff_x25;
          func_0x00010c275660();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          if (unaff_x23 != (undefined8 ****)0x0) {
            unaff_x24 = (undefined8 ****)PTR_PTR_1126d2ab8;
            _objc_alloc();
            func_0x00010c054560();
            if (unaff_x24 != (undefined8 ****)0x0) {
              func_0x00010befa120(ppppuVar9);
            }
            _objc_release(unaff_x24);
          }
          _objc_release(unaff_x23);
          unaff_x28 = (undefined8 ****)((long)unaff_x28 + 1);
        } while (ppppuVar10 != unaff_x28);
        ppppuVar10 = ppppuVar4;
        func_0x00010bf52a60();
        ppppuVar13 = (undefined8 ****)0x0;
      } while (ppppuVar10 != (undefined8 ****)0x0);
    }
    _objc_release(ppppuVar4);
    ppppuVar4 = ppppuVar9;
    func_0x00010bf51e00();
    _objc_release(ppppuVar9);
    _objc_release(ppppuVar11);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7e0) {
      ___stack_chk_fail();
      pcStack_8a8 = FUN_106df0b34;
      lStack_8f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppppuVar10 = (undefined8 ****)PTR_PTR_1126bc7b8;
      pppuStack_8f0 = unaff_x26;
      pppuStack_8e8 = unaff_x25;
      pppuStack_8e0 = unaff_x24;
      pppuStack_8d8 = unaff_x23;
      pppuStack_8d0 = ppppuVar13;
      pppuStack_8c8 = ppppuVar4;
      pppuStack_8c0 = ppppuVar9;
      pppuStack_8b8 = ppppuVar11;
      pppuStack_8b0 = &ppuStack_780;
      func_0x00010bfa7160();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar13 = ppppuVar10;
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppppuVar10);
      uStack_998 = 0;
      uStack_9a0 = 0;
      uStack_988 = 0;
      uStack_990 = 0;
      lStack_9b8 = 0;
      uStack_9c0 = 0;
      uStack_9a8 = 0;
      puStack_9b0 = (undefined8 *)0x0;
      ppppuVar9 = ppppuVar13;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar11 = ppppuVar9;
      func_0x00010bf52a60();
      if (ppppuVar11 != (undefined8 ****)0x0) {
        unaff_x24 = (undefined8 ****)*puStack_9b0;
        ppppuVar4 = ppppuVar11;
        do {
          unaff_x25 = (undefined8 ****)0x0;
          do {
            if ((undefined8 ****)*puStack_9b0 != unaff_x24) {
              _objc_enumerationMutation(ppppuVar9);
            }
            unaff_x23 = *(undefined8 *****)(lStack_9b8 + (long)unaff_x25 * 8);
            func_0x00010bfedfc0();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar10 = unaff_x23;
            func_0x00010c25bcc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x23);
            ppppuVar11 = ppppuVar4;
            if (ppppuVar10 != (undefined8 ****)0x0) goto LAB_106df0c58;
            unaff_x25 = (undefined8 ****)((long)unaff_x25 + 1);
          } while (ppppuVar4 != unaff_x25);
          ppppuVar4 = ppppuVar9;
          func_0x00010bf52a60();
        } while (ppppuVar4 != (undefined8 ****)0x0);
      }
      ppppuVar11 = ppppuVar4;
      ppppuVar10 = (undefined8 ****)0x0;
LAB_106df0c58:
      ppppuVar4 = ppppuVar10;
      _objc_release(ppppuVar9);
      ppppuVar10 = ppppuVar13;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_8f8) {
        ___stack_chk_fail();
        pcStack_9c8 = FUN_106df0ca4;
        lStack_a08 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_a00 = unaff_x28;
        pppuStack_9f8 = (undefined8 ***)unaff_x27;
        pppuStack_9f0 = ppppuVar4;
        pppuStack_9e8 = ppppuVar11;
        pppuStack_9e0 = ppppuVar9;
        pppuStack_9d8 = ppppuVar13;
        pppuStack_9d0 = &pppuStack_8b0;
        _objc_retain();
        lStack_ac8 = 0;
        uStack_ad0 = 0;
        uStack_ab8 = 0;
        puStack_ac0 = (undefined8 *)0x0;
        uStack_aa8 = 0;
        uStack_ab0 = 0;
        uStack_a98 = 0;
        uStack_aa0 = 0;
        _objc_retain(ppppuVar10);
        ppppuVar13 = ppppuVar10;
        func_0x00010bf52a60();
        if (ppppuVar13 != (undefined8 ****)0x0) {
          ppppuVar11 = (undefined8 ****)*puStack_ac0;
          do {
            ppppuVar4 = (undefined8 ****)0x0;
            do {
              if ((undefined8 ****)*puStack_ac0 != ppppuVar11) {
                _objc_enumerationMutation(ppppuVar10);
              }
              lVar8 = *(long *)(lStack_ac8 + (long)ppppuVar4 * 8);
              func_0x00010b5fa088();
              if (lVar8 != 1) {
                ppppuVar9 = (undefined8 ****)0x0;
                ppppuVar13 = ppppuVar4;
                goto LAB_106df0d70;
              }
              ppppuVar4 = (undefined8 ****)((long)ppppuVar4 + 1);
            } while (ppppuVar13 != ppppuVar4);
            ppppuVar13 = ppppuVar10;
            func_0x00010bf52a60();
          } while (ppppuVar13 != (undefined8 ****)0x0);
        }
        ppppuVar9 = (undefined8 ****)0x1;
        ppppuVar13 = ppppuVar4;
LAB_106df0d70:
        _objc_release(ppppuVar10);
        ppppuVar4 = ppppuVar10;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a08) {
          return ppppuVar9;
        }
        ___stack_chk_fail();
        uStack_ad8 = 0x106df0db8;
        lStack_b40 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_bf8 = 0;
        uStack_c00 = 0;
        uStack_be8 = 0;
        plStack_bf0 = (long *)0x0;
        uStack_bd8 = 0;
        uStack_be0 = 0;
        uStack_bc8 = 0;
        uStack_bd0 = 0;
        pppuStack_b30 = unaff_x28;
        pppuStack_b28 = (undefined8 ***)unaff_x27;
        pppuStack_b20 = unaff_x26;
        pppuStack_b18 = unaff_x25;
        pppuStack_b10 = unaff_x24;
        pppuStack_b08 = unaff_x23;
        pppuStack_b00 = ppppuVar13;
        pppuStack_af8 = ppppuVar11;
        pppuStack_af0 = ppppuVar9;
        pppuStack_ae8 = ppppuVar10;
        pppuStack_ae0 = &pppuStack_9d0;
        func_0x00010c2553e0();
        _objc_retainAutoreleasedReturnValue();
        pppuStack_c20 = ppppuVar4;
        func_0x00010bf52a60();
        pppuStack_c10 = ppppuVar4;
        if (ppppuVar4 != (undefined8 ****)0x0) {
          lStack_c18 = *plStack_bf0;
          do {
            ppppuVar11 = (undefined8 ****)0x0;
            do {
              if (*plStack_bf0 != lStack_c18) {
                _objc_enumerationMutation(pppuStack_c20);
              }
              unaff_x25 = *(undefined8 *****)(lStack_bf8 + (long)ppppuVar11 * 8);
              unaff_x23 = unaff_x25;
              func_0x00010bf06320();
              _objc_retainAutoreleasedReturnValue();
              unaff_x24 = unaff_x23;
              func_0x00010c27dd80();
              _objc_retainAutoreleasedReturnValue();
              ppppuVar13 = unaff_x24;
              func_0x00010b774bc4();
              _objc_release(unaff_x24);
              _objc_release(unaff_x23);
              if (ppppuVar13 == (undefined8 ****)0x3fa644c1 ||
                  ppppuVar13 == (undefined8 ****)0xfffffffff0575f4d) {
                pppuStack_c08 = (undefined8 ***)PTR_PTR_1126c4978;
                unaff_x23 = unaff_x25;
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                unaff_x24 = unaff_x23;
                func_0x00010bf05ba0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x26 = unaff_x25;
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                unaff_x27 = (undefined **)unaff_x26;
                func_0x00010bf0d6a0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = unaff_x25;
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                ppppuVar4 = unaff_x28;
                func_0x00010c27dd80();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                ppppuVar9 = unaff_x25;
                func_0x00010bf05300();
                _objc_retainAutoreleasedReturnValue();
                ppppuVar10 = (undefined8 ****)pppuStack_c08;
                func_0x00010c241c80();
                _objc_retainAutoreleasedReturnValue();
                pppuStack_c08 = ppppuVar10;
                _objc_release(ppppuVar9);
                _objc_release(unaff_x25);
                _objc_release(ppppuVar4);
                _objc_release(unaff_x28);
                _objc_release(unaff_x27);
                _objc_release(unaff_x26);
                _objc_release(unaff_x24);
                _objc_release(unaff_x23);
              }
              ppppuVar9 = (undefined8 ****)0xfffffffff0575f4d;
              ppppuVar4 = (undefined8 ****)pppuStack_c08;
              if (ppppuVar13 == (undefined8 ****)0xfffffffff0575f4d ||
                  ppppuVar13 == (undefined8 ****)0x3fa644c1) goto LAB_106df0ffc;
              ppppuVar11 = (undefined8 ****)((long)ppppuVar11 + 1);
            } while ((undefined8 ****)pppuStack_c10 != ppppuVar11);
            ppppuVar4 = (undefined8 ****)pppuStack_c20;
            func_0x00010bf52a60();
            pppuStack_c10 = ppppuVar4;
          } while (ppppuVar4 != (undefined8 ****)0x0);
        }
        ppppuVar4 = (undefined8 ****)0x0;
LAB_106df0ffc:
        ppppuVar10 = (undefined8 ****)pppuStack_c20;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b40) {
          ___stack_chk_fail();
          uStack_c28 = 0x106df1044;
          lStack_c90 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pppuStack_c80 = unaff_x28;
          pppuStack_c78 = (undefined8 ***)unaff_x27;
          pppuStack_c70 = unaff_x26;
          pppuStack_c68 = unaff_x25;
          pppuStack_c60 = unaff_x24;
          pppuStack_c58 = unaff_x23;
          pppuStack_c50 = ppppuVar13;
          pppuStack_c48 = ppppuVar11;
          pppuStack_c40 = ppppuVar9;
          pppuStack_c38 = ppppuVar4;
          pppuStack_c30 = &pppuStack_ae0;
          _objc_retain();
          pppuStack_1098 = ppppuVar12;
          _objc_retain(ppppuVar12);
          ppppuVar4 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          plStack_f48 = (long *)0x0;
          uStack_f50 = 0;
          uStack_f38 = 0;
          plStack_f40 = (long *)0x0;
          uStack_f28 = 0;
          uStack_f30 = 0;
          uStack_f18 = 0;
          uStack_f20 = 0;
          _objc_retain(ppppuVar10);
          pppuStack_10b0 = ppppuVar10;
          func_0x00010bf52a60();
          ppppuVar9 = (undefined8 ****)pppuStack_10b0;
          pppuStack_1090 = ppppuVar10;
          if (ppppuVar10 == (undefined8 ****)0x0) {
            _objc_release(pppuStack_10b0);
            _objc_release(pppuStack_1098);
            ppppuVar11 = ppppuVar9;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c90)
            goto _objc_autoreleaseReturnValue;
            uVar17 = 0x106df16ec;
            ___stack_chk_fail();
          }
          else {
            lStack_10a0 = *plStack_f40;
            if (*plStack_f40 != lStack_10a0) {
              _objc_enumerationMutation(pppuStack_10b0);
            }
            ppppuVar9 = (undefined8 ****)PTR_PTR_1126bc7b8;
            uStack_1080 = 0;
            unaff_x26 = (undefined8 ****)*plStack_f48;
            ppppuVar12 = (undefined8 ****)pppuStack_1098;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa7160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppppuVar12);
            pppuStack_1088 = ppppuVar9;
            func_0x00010c0ef4a0();
            _objc_retainAutoreleasedReturnValue();
            pppuStack_1078 = ppppuVar9;
            func_0x00010c2553e0();
            _objc_retainAutoreleasedReturnValue();
            lStack_f88 = 0;
            uStack_f90 = 0;
            uStack_f78 = 0;
            puStack_f80 = (undefined8 *)0x0;
            uStack_f68 = 0;
            uStack_f70 = 0;
            uStack_f58 = 0;
            uStack_f60 = 0;
            pppuStack_1058 = ppppuVar9;
            func_0x00010bf52a60();
            if (ppppuVar9 != (undefined8 ****)0x0) {
              unaff_x24 = (undefined8 ****)*puStack_f80;
              do {
                ppppuVar11 = (undefined8 ****)0x0;
                do {
                  if ((undefined8 ****)*puStack_f80 != unaff_x24) {
                    _objc_enumerationMutation(pppuStack_1058);
                  }
                  ppppuVar12 = *(undefined8 *****)(lStack_f88 + (long)ppppuVar11 * 8);
                  ppppuVar13 = ppppuVar12;
                  func_0x00010bfedfc0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x27 = (undefined **)ppppuVar13;
                  func_0x00010c0ca400();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x28 = (undefined8 ****)unaff_x27;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  ppppuVar10 = unaff_x28;
                  func_0x00010c08fa60();
                  _objc_release(unaff_x28);
                  _objc_release(unaff_x27);
                  _objc_release(ppppuVar13);
                  unaff_x23 = (undefined8 ****)0x0;
                  if (ppppuVar10 != (undefined8 ****)0x0) {
                    func_0x00010bfedfc0();
                    _objc_retainAutoreleasedReturnValue();
                    ppppuVar13 = ppppuVar12;
                    func_0x00010c0ca400();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x23 = ppppuVar13;
                    func_0x00010c2923e0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(ppppuVar4);
                    _objc_release(unaff_x23);
                    _objc_release(ppppuVar13);
                    _objc_release(ppppuVar12);
                  }
                  ppppuVar11 = (undefined8 ****)((long)ppppuVar11 + 1);
                } while (ppppuVar9 != ppppuVar11);
                ppppuVar9 = (undefined8 ****)pppuStack_1058;
                func_0x00010bf52a60();
              } while (ppppuVar9 != (undefined8 ****)0x0);
            }
            unaff_x25 = (undefined8 ****)pppuStack_1078;
            ppppuVar11 = (undefined8 ****)pppuStack_1078;
            func_0x00010bf2fba0();
            _objc_retainAutoreleasedReturnValue();
            uVar17 = 0x106df12c0;
            ppppuVar9 = ppppuVar11;
          }
          pppuVar5 = (undefined8 ***)&puStack_11e0;
          lStack_1118 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pppuStack_1110 = unaff_x28;
          pppuStack_1108 = (undefined8 ***)unaff_x27;
          pppuStack_1100 = unaff_x26;
          pppuStack_10f8 = unaff_x25;
          pppuStack_10f0 = unaff_x24;
          pppuStack_10e8 = unaff_x23;
          pppuStack_10e0 = ppppuVar13;
          pppuStack_10d8 = ppppuVar4;
          pppuStack_10d0 = ppppuVar12;
          pppuStack_10c8 = ppppuVar9;
          pppuStack_10c0 = &pppuStack_c30;
          uStack_10b8 = uVar17;
          _objc_retain();
          ppppuVar4 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          lStack_11d8 = 0;
          puStack_11e0 = (undefined8 **)0x0;
          uStack_11c8 = 0;
          plStack_11d0 = (long *)0x0;
          uStack_11b8 = 0;
          uStack_11c0 = 0;
          uStack_11a8 = 0;
          uStack_11b0 = 0;
          ppppuVar12 = ppppuVar11;
          func_0x00010c293dc0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = auStack_1198;
          ppppuVar9 = ppppuVar12;
          func_0x00010bf52a60();
          if (ppppuVar9 != (undefined8 ****)0x0) {
            lVar8 = *plStack_11d0;
            do {
              ppppuVar13 = (undefined8 ****)0x0;
              do {
                if (*plStack_11d0 != lVar8) {
                  _objc_enumerationMutation(ppppuVar12);
                }
                unaff_x23 = *(undefined8 *****)(lStack_11d8 + (long)ppppuVar13 * 8);
                unaff_x24 = unaff_x23;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                ppppuVar10 = unaff_x24;
                func_0x00010c08fa60();
                _objc_release(unaff_x24);
                if (ppppuVar10 != (undefined8 ****)0x0) {
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(ppppuVar4);
                  _objc_release(unaff_x23);
                }
                ppppuVar13 = (undefined8 ****)((long)ppppuVar13 + 1);
              } while (ppppuVar9 != ppppuVar13);
              puVar6 = auStack_1198;
              ppppuVar9 = ppppuVar12;
              pppuVar5 = (undefined8 ***)&puStack_11e0;
              func_0x00010bf52a60();
              ppppuVar13 = (undefined8 ****)0x0;
            } while (ppppuVar9 != (undefined8 ****)0x0);
          }
          _objc_release(ppppuVar12);
          ppppuVar9 = ppppuVar11;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1118) {
            ___stack_chk_fail();
            pcStack_11e8 = FUN_106df1868;
            pppuStack_1220 = unaff_x24;
            pppuStack_1218 = unaff_x23;
            pppuStack_1210 = ppppuVar13;
            pppuStack_1208 = ppppuVar12;
            pppuStack_1200 = ppppuVar4;
            pppuStack_11f8 = ppppuVar11;
            pppuStack_11f0 = &pppuStack_10c0;
            _objc_retain(pppuVar5);
            _objc_retain(puVar6);
            puStack_1228 = PTR_PTR_1126f6f30;
            ppppuVar13 = &pppuStack_1230;
            pppuStack_1230 = ppppuVar9;
            _objc_msgSendSuper2(ppppuVar13,PTR_s_init_1125d9248);
            if (ppppuVar13 != (undefined8 ****)0x0) {
              _objc_retain(pppuVar5);
              pppuVar3 = ppppuVar13[1];
              ppppuVar13[1] = pppuVar5;
              _objc_release(pppuVar3);
              _objc_initWeak(auStack_1238,ppppuVar13);
              pppuVar3 = (undefined8 ***)PTR_PTR_1126ae720;
              _objc_copyWeak(auStack_1240,auStack_1238);
              _objc_retain(puVar6);
              func_0x00010bf11fe0();
              _objc_retainAutoreleasedReturnValue();
              pppuVar7 = ppppuVar13[2];
              ppppuVar13[2] = pppuVar3;
              _objc_release(pppuVar7);
              _objc_release(puVar6);
              _objc_destroyWeak(auStack_1240);
              _objc_destroyWeak(auStack_1238);
            }
            _objc_release(puVar6);
            _objc_release(pppuVar5);
            return ppppuVar13;
          }
        }
      }
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppuVar4);
  return ppppuVar4;
}



/* Entry: 106defb6c; end: 106df0b33;  */

/* WARNING: Possible PIC construction at 0x000106df12bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106df134c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106df12c0) */
/* WARNING: Removing unreachable block (ram,0x000106df131c) */
/* WARNING: Removing unreachable block (ram,0x000106df1350) */
/* WARNING: Removing unreachable block (ram,0x000106df137c) */
/* WARNING: Removing unreachable block (ram,0x000106df1328) */
/* WARNING: Removing unreachable block (ram,0x000106df132c) */
/* WARNING: Removing unreachable block (ram,0x000106df133c) */
/* WARNING: Removing unreachable block (ram,0x000106df1344) */
/* WARNING: Removing unreachable block (ram,0x000106df1398) */
/* WARNING: Removing unreachable block (ram,0x000106df13bc) */
/* WARNING: Removing unreachable block (ram,0x000106df1428) */
/* WARNING: Removing unreachable block (ram,0x000106df1434) */
/* WARNING: Removing unreachable block (ram,0x000106df1438) */
/* WARNING: Removing unreachable block (ram,0x000106df144c) */
/* WARNING: Removing unreachable block (ram,0x000106df1454) */
/* WARNING: Removing unreachable block (ram,0x000106df149c) */
/* WARNING: Removing unreachable block (ram,0x000106df1504) */
/* WARNING: Removing unreachable block (ram,0x000106df1510) */
/* WARNING: Removing unreachable block (ram,0x000106df1514) */
/* WARNING: Removing unreachable block (ram,0x000106df1524) */
/* WARNING: Removing unreachable block (ram,0x000106df152c) */
/* WARNING: Removing unreachable block (ram,0x000106df1580) */
/* WARNING: Removing unreachable block (ram,0x000106df15d8) */
/* WARNING: Removing unreachable block (ram,0x000106df15e4) */
/* WARNING: Removing unreachable block (ram,0x000106df1600) */
/* WARNING: Removing unreachable block (ram,0x000106df1608) */
/* WARNING: Removing unreachable block (ram,0x000106df1618) */
/* WARNING: Removing unreachable block (ram,0x000106df1634) */
/* WARNING: Removing unreachable block (ram,0x000106df1648) */
/* WARNING: Removing unreachable block (ram,0x000106df1674) */

undefined8 ****
FUN_106defb6c(long param_1,undefined8 ****param_2,undefined8 ****param_3,undefined8 ****param_4)

{
  undefined *puVar1;
  undefined8 ****ppppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined1 *puVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  long lVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****unaff_x23;
  undefined8 ****ppppuVar15;
  undefined8 ****unaff_x24;
  undefined8 ****unaff_x25;
  long lVar16;
  undefined8 ****unaff_x26;
  undefined **unaff_x27;
  undefined8 ****unaff_x28;
  undefined8 uVar17;
  undefined1 auStack_1100 [8];
  undefined1 auStack_10f8 [8];
  undefined8 ***pppuStack_10f0;
  undefined *puStack_10e8;
  undefined8 ***pppuStack_10e0;
  undefined8 ***pppuStack_10d8;
  undefined8 ***pppuStack_10d0;
  undefined8 ***pppuStack_10c8;
  undefined8 ***pppuStack_10c0;
  undefined8 ***pppuStack_10b8;
  undefined8 ***pppuStack_10b0;
  code *pcStack_10a8;
  undefined8 *puStack_10a0;
  long lStack_1098;
  long *plStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined1 auStack_1058 [128];
  long lStack_fd8;
  undefined8 ***pppuStack_fd0;
  undefined8 ***pppuStack_fc8;
  undefined8 ***pppuStack_fc0;
  undefined8 ***pppuStack_fb8;
  undefined8 ***pppuStack_fb0;
  undefined8 ***pppuStack_fa8;
  undefined8 ***pppuStack_fa0;
  undefined8 ***pppuStack_f98;
  undefined8 ***pppuStack_f90;
  undefined8 ***pppuStack_f88;
  undefined8 ***pppuStack_f80;
  undefined8 uStack_f78;
  undefined8 ***pppuStack_f70;
  long lStack_f60;
  undefined8 ***pppuStack_f58;
  undefined8 ***pppuStack_f50;
  undefined8 ***pppuStack_f48;
  undefined8 uStack_f40;
  undefined8 ***pppuStack_f38;
  undefined8 ***pppuStack_f18;
  undefined8 uStack_e50;
  long lStack_e48;
  undefined8 *puStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  long *plStack_e08;
  long *plStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  long lStack_b50;
  undefined8 ***pppuStack_b40;
  undefined8 ***pppuStack_b38;
  undefined8 ***pppuStack_b30;
  undefined8 ***pppuStack_b28;
  undefined8 ***pppuStack_b20;
  undefined8 ***pppuStack_b18;
  undefined8 ***pppuStack_b10;
  undefined8 ***pppuStack_b08;
  undefined8 ***pppuStack_b00;
  undefined8 ***pppuStack_af8;
  undefined8 ***pppuStack_af0;
  undefined8 uStack_ae8;
  undefined8 ***pppuStack_ae0;
  long lStack_ad8;
  undefined8 ***pppuStack_ad0;
  undefined8 ***pppuStack_ac8;
  undefined8 uStack_ac0;
  long lStack_ab8;
  long *plStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  long lStack_a00;
  undefined8 ***pppuStack_9f0;
  undefined8 ***pppuStack_9e8;
  undefined8 ***pppuStack_9e0;
  undefined8 ***pppuStack_9d8;
  undefined8 ***pppuStack_9d0;
  undefined8 ***pppuStack_9c8;
  undefined8 ***pppuStack_9c0;
  undefined8 ***pppuStack_9b8;
  undefined8 ***pppuStack_9b0;
  undefined8 ***pppuStack_9a8;
  undefined8 ***pppuStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  long lStack_988;
  undefined8 *puStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  long lStack_8c8;
  undefined8 ***pppuStack_8c0;
  undefined8 ***pppuStack_8b8;
  undefined8 ***pppuStack_8b0;
  undefined8 ***pppuStack_8a8;
  undefined8 ***pppuStack_8a0;
  undefined8 ***pppuStack_898;
  undefined1 ***pppuStack_890;
  code *pcStack_888;
  undefined8 uStack_880;
  long lStack_878;
  undefined8 *puStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  long lStack_7b8;
  undefined8 ***pppuStack_7b0;
  undefined8 ***pppuStack_7a8;
  undefined8 ***pppuStack_7a0;
  undefined8 ***pppuStack_798;
  undefined8 ***pppuStack_790;
  undefined8 ***pppuStack_788;
  undefined8 ***pppuStack_780;
  undefined8 ***pppuStack_778;
  undefined1 **ppuStack_770;
  code *pcStack_768;
  undefined8 uStack_760;
  long lStack_758;
  undefined8 *puStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  long lStack_6a0;
  undefined8 ***pppuStack_690;
  undefined8 ***pppuStack_688;
  undefined8 ***pppuStack_680;
  undefined8 ***pppuStack_678;
  undefined8 ***pppuStack_670;
  undefined8 ***pppuStack_668;
  undefined8 ***pppuStack_660;
  undefined8 ***pppuStack_658;
  undefined8 ***pppuStack_650;
  undefined8 ***pppuStack_648;
  undefined1 *puStack_640;
  undefined8 uStack_638;
  long lStack_628;
  long lStack_620;
  undefined8 ***pppuStack_618;
  undefined **ppuStack_610;
  long lStack_608;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  undefined *puStack_5e0;
  undefined8 ***pppuStack_5d8;
  undefined8 ***pppuStack_5d0;
  undefined8 ***pppuStack_5c8;
  undefined8 ***pppuStack_5c0;
  undefined *puStack_5b8;
  undefined8 uStack_5b0;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long lStack_568;
  undefined8 *puStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  long lStack_528;
  long *plStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  undefined8 *puStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar12 = param_2;
  _objc_retain();
  pppuStack_5c0 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppppuVar14 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  pppuStack_5d0 = ppppuVar14;
  _objc_opt_new();
  lStack_628 = param_1;
  puStack_5b8 = puVar1;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  pppuStack_618 = param_3;
  pppuStack_5c8 = param_4;
  if ((param_3 != (undefined8 ****)0x0) && (param_1 == 0)) {
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    lStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    puStack_420 = (undefined8 *)0x0;
    _objc_retain(param_3);
    func_0x00010bf52a60();
    pppuStack_5d8 = param_3;
    if (param_3 != (undefined8 ****)0x0) {
      puStack_5e0 = (undefined *)*puStack_420;
      pppuStack_5d8 = param_3;
      do {
        ppppuVar14 = (undefined8 ****)0x0;
        do {
          if ((undefined *)*puStack_420 != puStack_5e0) {
            _objc_enumerationMutation(pppuStack_618);
          }
          ppppuVar13 = *(undefined8 *****)(lStack_428 + (long)ppppuVar14 * 8);
          unaff_x23 = ppppuVar13;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x23;
          func_0x00010bf30500();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = (undefined **)unaff_x26;
          func_0x00010c0ca860();
          _objc_release(unaff_x26);
          _objc_release(unaff_x23);
          if ((undefined8 ****)unaff_x27 != (undefined8 ****)0x0) {
            uStack_448 = 0;
            uStack_450 = 0;
            uStack_438 = 0;
            uStack_440 = 0;
            lStack_468 = 0;
            uStack_470 = 0;
            uStack_458 = 0;
            puStack_460 = (undefined8 *)0x0;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = ppppuVar13;
            func_0x00010bf30500();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar11 = unaff_x26;
            func_0x00010c0ca840();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x26);
            _objc_release(ppppuVar13);
            ppppuVar10 = ppppuVar11;
            func_0x00010bf52a60();
            if (ppppuVar10 != (undefined8 ****)0x0) {
              unaff_x24 = (undefined8 ****)*puStack_460;
              do {
                ppppuVar9 = (undefined8 ****)0x0;
                do {
                  if ((undefined8 ****)*puStack_460 != unaff_x24) {
                    _objc_enumerationMutation(ppppuVar11);
                  }
                  ppppuVar15 = *(undefined8 *****)(lStack_468 + (long)ppppuVar9 * 8);
                  unaff_x27 = (undefined **)ppppuVar15;
                  func_0x00010bf96da0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x28 = (undefined8 ****)unaff_x27;
                  func_0x00010c290fa0();
                  _objc_retainAutoreleasedReturnValue();
                  ppppuVar2 = unaff_x28;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  _objc_release(unaff_x28);
                  _objc_release(unaff_x27);
                  ppppuVar13 = ppppuVar15;
                  if (ppppuVar2 != (undefined8 ****)0x0) {
                    ppppuVar2 = (undefined8 ****)pppuStack_5c8;
                    func_0x00010c269d40();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf96da0();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x28 = ppppuVar15;
                    func_0x00010c290fa0();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x25 = unaff_x28;
                    func_0x00010c2923e0();
                    _objc_retainAutoreleasedReturnValue();
                    ppppuVar13 = ppppuVar2;
                    func_0x00010c0ee920();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(unaff_x25);
                    _objc_release(unaff_x28);
                    _objc_release(ppppuVar15);
                    _objc_release(ppppuVar2);
                    if (ppppuVar13 != (undefined8 ****)0x0) {
                      ppppuVar15 = ppppuVar13;
                      func_0x00010c2923e0();
                      _objc_retainAutoreleasedReturnValue();
                      unaff_x28 = ppppuVar13;
                      func_0x00010c294420();
                      _objc_retainAutoreleasedReturnValue();
                      if (((ppppuVar15 != (undefined8 ****)0x0) &&
                          (puVar1 = puStack_5b8, func_0x00010bf4b900(), ((ulong)puVar1 & 1) == 0))
                         && (ppppuVar2 = (undefined8 ****)pppuStack_5c0, func_0x00010bf4b900(),
                            ((ulong)ppppuVar2 & 1) == 0)) {
                        puVar1 = PTR_PTR_1126d2aa8;
                        _objc_alloc(PTR_PTR_1126d2aa8);
                        func_0x00010c05f760();
                        func_0x00010c1d0640(pppuStack_5d0);
                        func_0x00010befa120(puStack_5b8);
                        _objc_release(puVar1);
                      }
                      _objc_release(unaff_x28);
                      _objc_release(ppppuVar15);
                    }
                    _objc_release(ppppuVar13);
                    unaff_x27 = (undefined **)ppppuVar15;
                  }
                  ppppuVar9 = (undefined8 ****)((long)ppppuVar9 + 1);
                } while (ppppuVar10 != ppppuVar9);
                ppppuVar10 = ppppuVar11;
                func_0x00010bf52a60();
                unaff_x26 = (undefined8 ****)0x0;
              } while (ppppuVar10 != (undefined8 ****)0x0);
            }
            _objc_release(ppppuVar11);
            unaff_x23 = ppppuVar13;
          }
          ppppuVar14 = (undefined8 ****)((long)ppppuVar14 + 1);
        } while (ppppuVar14 != (undefined8 ****)pppuStack_5d8);
        ppppuVar14 = (undefined8 ****)pppuStack_618;
        func_0x00010bf52a60();
        pppuStack_5d8 = ppppuVar14;
      } while (ppppuVar14 != (undefined8 ****)0x0);
    }
    _objc_release(pppuStack_618);
  }
  ppppuVar14 = (undefined8 ****)pppuStack_5c8;
  uStack_488 = 0;
  uStack_490 = 0;
  uStack_478 = 0;
  uStack_480 = 0;
  lStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_498 = 0;
  plStack_4a0 = (long *)0x0;
  lVar7 = lStack_628;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  lStack_620 = lVar7;
  func_0x00010bf52a60();
  lStack_600 = lVar7;
  if (lVar7 != 0) {
    lStack_608 = *plStack_4a0;
    ppuStack_610 = &PTR____CFConstantStringClassReference_110efb658;
    do {
      lVar7 = 0;
      do {
        if (*plStack_4a0 != lStack_608) {
          _objc_enumerationMutation(lStack_620);
        }
        lVar8 = *(long *)(lStack_4a8 + lVar7 * 8);
        puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        lStack_5f0 = lVar7;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        lStack_4e8 = 0;
        uStack_4f0 = 0;
        uStack_4d8 = 0;
        puStack_4e0 = (undefined8 *)0x0;
        uStack_4c8 = 0;
        uStack_4d0 = 0;
        uStack_4b8 = 0;
        uStack_4c0 = 0;
        lStack_5f8 = lVar8;
        puStack_5e0 = puVar1;
        func_0x00010c293dc0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar8;
        func_0x00010bf52a60();
        if (lVar7 != 0) {
          unaff_x24 = (undefined8 ****)*puStack_4e0;
          lStack_5e8 = lVar8;
          do {
            lVar16 = 0;
            do {
              if ((undefined8 ****)*puStack_4e0 != unaff_x24) {
                _objc_enumerationMutation(lVar8);
              }
              unaff_x23 = *(undefined8 *****)(lStack_4e8 + lVar16 * 8);
              ppppuVar13 = ppppuVar14;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              ppppuVar11 = unaff_x23;
              func_0x00010c2923e0(unaff_x23);
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = (undefined **)ppppuVar13;
              func_0x00010c0ee920();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppppuVar11);
              _objc_release(ppppuVar13);
              ppppuVar13 = (undefined8 ****)unaff_x27;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = (undefined8 ****)unaff_x27;
              func_0x00010c294420();
              _objc_retainAutoreleasedReturnValue();
              if ((((undefined8 ****)unaff_x27 != (undefined8 ****)0x0 &&
                    ppppuVar13 != (undefined8 ****)0x0) &&
                  (puVar1 = puStack_5b8, func_0x00010bf4b900(), ((ulong)puVar1 & 1) == 0)) &&
                 (ppppuVar11 = (undefined8 ****)pppuStack_5c0, func_0x00010bf4b900(),
                 ((ulong)ppppuVar11 & 1) == 0)) {
                ppppuVar14 = (undefined8 ****)PTR_PTR_1126d2aa8;
                _objc_alloc();
                func_0x00010c05f760();
                pppuStack_5d8 = ppppuVar14;
                func_0x00010c1d0640(pppuStack_5d0);
                puVar1 = PTR_PTR_1126d2ab0;
                ppppuVar11 = unaff_x23;
                func_0x00010c24ff00(unaff_x23);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c067fc0();
                func_0x00010c08fa60(unaff_x28);
                func_0x00010bf51620(puVar1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c24ff00();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puStack_5e0);
                _objc_release(unaff_x23);
                lVar8 = lStack_5e8;
                _objc_release(puVar1);
                ppppuVar14 = (undefined8 ****)pppuStack_5c8;
                _objc_release(ppppuVar11);
                func_0x00010befa120(puStack_5b8);
                _objc_release(pppuStack_5d8);
              }
              _objc_release(unaff_x28);
              _objc_release(ppppuVar13);
              _objc_release(unaff_x27);
              lVar16 = lVar16 + 1;
            } while (lVar7 != lVar16);
            lVar7 = lVar8;
            func_0x00010bf52a60();
            unaff_x26 = (undefined8 ****)0x0;
          } while (lVar7 != 0);
        }
        _objc_release(lVar8);
        ppppuVar14 = (undefined8 ****)PTR_PTR_1126d1320;
        lVar7 = lStack_5f8;
        func_0x00010c26b700(lStack_5f8);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puStack_5e0;
        func_0x00010bf51e00(puStack_5e0);
        func_0x00010bf9ef60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(lVar7);
        uStack_508 = 0;
        uStack_510 = 0;
        uStack_4f8 = 0;
        uStack_500 = 0;
        lStack_528 = 0;
        uStack_530 = 0;
        uStack_518 = 0;
        plStack_520 = (long *)0x0;
        unaff_x25 = ppppuVar14;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar13 = unaff_x25;
        func_0x00010bf52a60();
        if (ppppuVar13 != (undefined8 ****)0x0) {
          lVar7 = *plStack_520;
          do {
            unaff_x24 = (undefined8 ****)0x0;
            do {
              if (*plStack_520 != lVar7) {
                _objc_enumerationMutation(unaff_x25);
              }
              ppppuVar10 = *(undefined8 *****)(lStack_528 + (long)unaff_x24 * 8);
              unaff_x23 = ppppuVar10;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              ppppuVar11 = ppppuVar10;
              func_0x00010c294420(ppppuVar10);
              _objc_retainAutoreleasedReturnValue();
              if (((ppppuVar10 != (undefined8 ****)0x0 && unaff_x23 != (undefined8 ****)0x0) &&
                  (puVar1 = puStack_5b8, func_0x00010bf4b900(), ((ulong)puVar1 & 1) == 0)) &&
                 (ppppuVar10 = (undefined8 ****)pppuStack_5c0, func_0x00010bf4b900(),
                 ((ulong)ppppuVar10 & 1) == 0)) {
                puVar1 = PTR_PTR_1126d2aa8;
                _objc_alloc(PTR_PTR_1126d2aa8);
                func_0x00010c05f760();
                func_0x00010c1d0640(pppuStack_5d0);
                func_0x00010befa120(puStack_5b8);
                _objc_release(puVar1);
              }
              _objc_release(ppppuVar11);
              _objc_release(unaff_x23);
              unaff_x24 = (undefined8 ****)((long)unaff_x24 + 1);
            } while (ppppuVar13 != unaff_x24);
            ppppuVar13 = unaff_x25;
            func_0x00010bf52a60();
            unaff_x26 = (undefined8 ****)0x0;
          } while (ppppuVar13 != (undefined8 ****)0x0);
        }
        _objc_release(unaff_x25);
        _objc_release(ppppuVar14);
        _objc_release(puStack_5e0);
        ppppuVar14 = (undefined8 ****)pppuStack_5c8;
        lVar7 = lStack_5f0 + 1;
      } while (lVar7 != lStack_600);
      lVar7 = lStack_620;
      func_0x00010bf52a60();
      lStack_600 = lVar7;
    } while (lVar7 != 0);
  }
  _objc_release(lStack_620);
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  lStack_568 = 0;
  uStack_570 = 0;
  uStack_558 = 0;
  puStack_560 = (undefined8 *)0x0;
  pppuVar3 = (undefined8 ***)lStack_628;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  pppuStack_5d8 = pppuVar3;
  func_0x00010bf52a60();
  if (pppuVar3 != (undefined8 ***)0x0) {
    unaff_x24 = (undefined8 ****)*puStack_560;
    do {
      lVar7 = 0;
      do {
        if ((undefined8 ****)*puStack_560 != unaff_x24) {
          _objc_enumerationMutation(pppuStack_5d8);
        }
        ppppuVar10 = *(undefined8 *****)(lStack_568 + lVar7 * 8);
        ppppuVar13 = ppppuVar10;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar11 = ppppuVar13;
        func_0x00010c0ca400();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = ppppuVar11;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppppuVar11);
        _objc_release(ppppuVar13);
        ppppuVar13 = ppppuVar10;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar11 = ppppuVar13;
        func_0x00010c0ca400();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = ppppuVar11;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppppuVar11);
        _objc_release(ppppuVar13);
        ppppuVar13 = unaff_x28;
        func_0x00010c08fa60();
        if (((ppppuVar13 == (undefined8 ****)0x0) ||
            (puVar1 = puStack_5b8, func_0x00010bf4b900(), ((ulong)puVar1 & 1) != 0)) ||
           (ppppuVar13 = (undefined8 ****)pppuStack_5c0, func_0x00010bf4b900(),
           ((ulong)ppppuVar13 & 1) != 0)) {
          ppppuVar14 = ppppuVar10;
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar13 = ppppuVar14;
          func_0x00010c244f40();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar11 = ppppuVar13;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x28);
          _objc_release(ppppuVar13);
          _objc_release(ppppuVar14);
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar14 = ppppuVar10;
          func_0x00010c244f40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = ppppuVar14;
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x23);
          _objc_release(ppppuVar14);
          _objc_release(ppppuVar10);
          ppppuVar13 = ppppuVar11;
          func_0x00010c08fa60();
          if (((ppppuVar13 != (undefined8 ****)0x0) &&
              (puVar1 = puStack_5b8, func_0x00010bf4b900(), ((ulong)puVar1 & 1) == 0)) &&
             (ppppuVar13 = (undefined8 ****)pppuStack_5c0, func_0x00010bf4b900(),
             ((ulong)ppppuVar13 & 1) == 0)) {
            unaff_x27 = (undefined **)PTR_PTR_1126d2aa8;
            _objc_alloc();
            func_0x00010c05f760();
            func_0x00010c1d0640(pppuStack_5d0);
            goto LAB_106df0640;
          }
        }
        else {
          unaff_x27 = (undefined **)PTR_PTR_1126d2aa8;
          _objc_alloc();
          func_0x00010c05f760();
          func_0x00010c1d0640(pppuStack_5d0);
          unaff_x25 = unaff_x23;
          ppppuVar11 = unaff_x28;
LAB_106df0640:
          func_0x00010befa120(puStack_5b8);
          _objc_release(unaff_x27);
          unaff_x28 = ppppuVar11;
        }
        _objc_release(unaff_x25);
        _objc_release(ppppuVar11);
        lVar7 = lVar7 + 1;
      } while (pppuVar3 != (undefined8 ***)lVar7);
      pppuVar3 = pppuStack_5d8;
      func_0x00010bf52a60();
      unaff_x26 = (undefined8 ****)0x0;
    } while (pppuVar3 != (undefined8 ***)0x0);
  }
  _objc_release(pppuStack_5d8);
  ppppuVar13 = (undefined8 ****)pppuStack_618;
  uStack_588 = 0;
  uStack_590 = 0;
  uStack_578 = 0;
  uStack_580 = 0;
  lStack_5a8 = 0;
  uStack_5b0 = 0;
  uStack_598 = 0;
  puStack_5a0 = (undefined8 *)0x0;
  _objc_retain(pppuStack_618);
  func_0x00010bf52a60();
  if (ppppuVar13 != (undefined8 ****)0x0) {
    unaff_x27 = (undefined **)*puStack_5a0;
    do {
      unaff_x28 = (undefined8 ****)0x0;
      do {
        if ((undefined8 ****)*puStack_5a0 != (undefined8 ****)unaff_x27) {
          _objc_enumerationMutation(pppuStack_618);
        }
        unaff_x23 = *(undefined8 *****)(lStack_5a8 + (long)unaff_x28 * 8);
        ppppuVar11 = unaff_x23;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar14 = ppppuVar11;
        func_0x00010bfedf20();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = ppppuVar14;
        func_0x00010bfedf40();
        _objc_release(ppppuVar14);
        _objc_release(ppppuVar11);
        if ((int)unaff_x24 == 6) {
          ppppuVar11 = unaff_x23;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar14 = ppppuVar11;
          func_0x00010bfedf20();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = ppppuVar14;
          func_0x00010c0ca640();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppppuVar14);
          _objc_release(ppppuVar11);
          ppppuVar11 = unaff_x25;
          func_0x00010bfde100();
          if ((int)ppppuVar11 != 0) {
            ppppuVar11 = unaff_x25;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar14 = ppppuVar11;
            func_0x00010bfe2ee0();
            unaff_x24 = unaff_x25;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar12 = unaff_x24;
            func_0x00010c0b5940();
            unaff_x23 = ppppuVar14;
            func_0x000100c4a928();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x24);
            _objc_release(ppppuVar11);
            unaff_x26 = unaff_x25;
            func_0x00010c294420();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar11 = unaff_x23;
            func_0x00010c08fa60();
            if (((ppppuVar11 != (undefined8 ****)0x0) &&
                (puVar1 = puStack_5b8, func_0x00010bf4b900(), ((ulong)puVar1 & 1) == 0)) &&
               (ppppuVar11 = (undefined8 ****)pppuStack_5c0, func_0x00010bf4b900(),
               ((ulong)ppppuVar11 & 1) == 0)) {
              puVar1 = PTR_PTR_1126d2aa8;
              _objc_alloc(PTR_PTR_1126d2aa8);
              func_0x00010c05f760();
              func_0x00010c1d0640(pppuStack_5d0);
              func_0x00010befa120(puStack_5b8);
              _objc_release(puVar1);
            }
            _objc_release(unaff_x26);
            _objc_release(unaff_x23);
          }
          _objc_release(unaff_x25);
        }
        unaff_x28 = (undefined8 ****)((long)unaff_x28 + 1);
      } while (ppppuVar13 != unaff_x28);
      ppppuVar13 = (undefined8 ****)pppuStack_618;
      func_0x00010bf52a60();
    } while (ppppuVar13 != (undefined8 ****)0x0);
  }
  pppuVar3 = pppuStack_618;
  _objc_release(pppuStack_618);
  pppuVar4 = pppuStack_5d0;
  ppppuVar13 = (undefined8 ****)pppuStack_5d0;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_5b8);
  _objc_release(pppuVar4);
  _objc_release(pppuStack_5c8);
  _objc_release(pppuVar3);
  _objc_release(pppuStack_5c0);
  _objc_release(lStack_628);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pppuStack_658 = pppuVar4;
    pppuStack_650 = pppuVar3;
    uStack_638 = 0x106df0944;
    lStack_6a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppuVar11 = (undefined8 ****)PTR_PTR_1126bc7b8;
    pppuStack_690 = unaff_x28;
    pppuStack_688 = (undefined8 ***)unaff_x27;
    pppuStack_680 = unaff_x26;
    pppuStack_678 = unaff_x25;
    pppuStack_670 = unaff_x24;
    pppuStack_668 = unaff_x23;
    pppuStack_660 = ppppuVar14;
    pppuStack_648 = ppppuVar13;
    puStack_640 = &stack0xfffffffffffffff0;
    func_0x00010bfa7160();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar10 = ppppuVar11;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar11);
    ppppuVar11 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_758 = 0;
    uStack_760 = 0;
    uStack_748 = 0;
    puStack_750 = (undefined8 *)0x0;
    uStack_738 = 0;
    uStack_740 = 0;
    uStack_728 = 0;
    uStack_730 = 0;
    ppppuVar13 = ppppuVar10;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar9 = ppppuVar13;
    func_0x00010bf52a60();
    if (ppppuVar9 != (undefined8 ****)0x0) {
      unaff_x26 = (undefined8 ****)*puStack_750;
      unaff_x27 = &PTR_PTR_1126d2000;
      do {
        unaff_x28 = (undefined8 ****)0x0;
        do {
          if ((undefined8 ****)*puStack_750 != unaff_x26) {
            _objc_enumerationMutation(ppppuVar13);
          }
          unaff_x24 = *(undefined8 *****)(lStack_758 + (long)unaff_x28 * 8);
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x24;
          func_0x00010c2751c0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = unaff_x25;
          func_0x00010c275660();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          if (unaff_x23 != (undefined8 ****)0x0) {
            unaff_x24 = (undefined8 ****)PTR_PTR_1126d2ab8;
            _objc_alloc();
            func_0x00010c054560();
            if (unaff_x24 != (undefined8 ****)0x0) {
              func_0x00010befa120(ppppuVar11);
            }
            _objc_release(unaff_x24);
          }
          _objc_release(unaff_x23);
          unaff_x28 = (undefined8 ****)((long)unaff_x28 + 1);
        } while (ppppuVar9 != unaff_x28);
        ppppuVar9 = ppppuVar13;
        func_0x00010bf52a60();
        ppppuVar14 = (undefined8 ****)0x0;
      } while (ppppuVar9 != (undefined8 ****)0x0);
    }
    _objc_release(ppppuVar13);
    ppppuVar13 = ppppuVar11;
    func_0x00010bf51e00();
    _objc_release(ppppuVar11);
    _objc_release(ppppuVar10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6a0) {
      ___stack_chk_fail();
      pcStack_768 = FUN_106df0b34;
      lStack_7b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppppuVar9 = (undefined8 ****)PTR_PTR_1126bc7b8;
      pppuStack_7b0 = unaff_x26;
      pppuStack_7a8 = unaff_x25;
      pppuStack_7a0 = unaff_x24;
      pppuStack_798 = unaff_x23;
      pppuStack_790 = ppppuVar14;
      pppuStack_788 = ppppuVar13;
      pppuStack_780 = ppppuVar11;
      pppuStack_778 = ppppuVar10;
      ppuStack_770 = &puStack_640;
      func_0x00010bfa7160();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar14 = ppppuVar9;
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppppuVar9);
      uStack_858 = 0;
      uStack_860 = 0;
      uStack_848 = 0;
      uStack_850 = 0;
      lStack_878 = 0;
      uStack_880 = 0;
      uStack_868 = 0;
      puStack_870 = (undefined8 *)0x0;
      ppppuVar11 = ppppuVar14;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar10 = ppppuVar11;
      func_0x00010bf52a60();
      if (ppppuVar10 != (undefined8 ****)0x0) {
        unaff_x24 = (undefined8 ****)*puStack_870;
        ppppuVar13 = ppppuVar10;
        do {
          unaff_x25 = (undefined8 ****)0x0;
          do {
            if ((undefined8 ****)*puStack_870 != unaff_x24) {
              _objc_enumerationMutation(ppppuVar11);
            }
            unaff_x23 = *(undefined8 *****)(lStack_878 + (long)unaff_x25 * 8);
            func_0x00010bfedfc0();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar9 = unaff_x23;
            func_0x00010c25bcc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x23);
            ppppuVar10 = ppppuVar13;
            if (ppppuVar9 != (undefined8 ****)0x0) goto LAB_106df0c58;
            unaff_x25 = (undefined8 ****)((long)unaff_x25 + 1);
          } while (ppppuVar13 != unaff_x25);
          ppppuVar13 = ppppuVar11;
          func_0x00010bf52a60();
        } while (ppppuVar13 != (undefined8 ****)0x0);
      }
      ppppuVar10 = ppppuVar13;
      ppppuVar9 = (undefined8 ****)0x0;
LAB_106df0c58:
      ppppuVar13 = ppppuVar9;
      _objc_release(ppppuVar11);
      ppppuVar9 = ppppuVar14;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7b8) {
        ___stack_chk_fail();
        pcStack_888 = FUN_106df0ca4;
        lStack_8c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_8c0 = unaff_x28;
        pppuStack_8b8 = (undefined8 ***)unaff_x27;
        pppuStack_8b0 = ppppuVar13;
        pppuStack_8a8 = ppppuVar10;
        pppuStack_8a0 = ppppuVar11;
        pppuStack_898 = ppppuVar14;
        pppuStack_890 = &ppuStack_770;
        _objc_retain();
        lStack_988 = 0;
        uStack_990 = 0;
        uStack_978 = 0;
        puStack_980 = (undefined8 *)0x0;
        uStack_968 = 0;
        uStack_970 = 0;
        uStack_958 = 0;
        uStack_960 = 0;
        _objc_retain(ppppuVar9);
        ppppuVar14 = ppppuVar9;
        func_0x00010bf52a60();
        if (ppppuVar14 != (undefined8 ****)0x0) {
          ppppuVar10 = (undefined8 ****)*puStack_980;
          do {
            ppppuVar13 = (undefined8 ****)0x0;
            do {
              if ((undefined8 ****)*puStack_980 != ppppuVar10) {
                _objc_enumerationMutation(ppppuVar9);
              }
              lVar7 = *(long *)(lStack_988 + (long)ppppuVar13 * 8);
              func_0x00010b5fa088();
              if (lVar7 != 1) {
                ppppuVar11 = (undefined8 ****)0x0;
                ppppuVar14 = ppppuVar13;
                goto LAB_106df0d70;
              }
              ppppuVar13 = (undefined8 ****)((long)ppppuVar13 + 1);
            } while (ppppuVar14 != ppppuVar13);
            ppppuVar14 = ppppuVar9;
            func_0x00010bf52a60();
          } while (ppppuVar14 != (undefined8 ****)0x0);
        }
        ppppuVar11 = (undefined8 ****)0x1;
        ppppuVar14 = ppppuVar13;
LAB_106df0d70:
        _objc_release(ppppuVar9);
        ppppuVar13 = ppppuVar9;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8c8) {
          return ppppuVar11;
        }
        ___stack_chk_fail();
        uStack_998 = 0x106df0db8;
        lStack_a00 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_ab8 = 0;
        uStack_ac0 = 0;
        uStack_aa8 = 0;
        plStack_ab0 = (long *)0x0;
        uStack_a98 = 0;
        uStack_aa0 = 0;
        uStack_a88 = 0;
        uStack_a90 = 0;
        pppuStack_9f0 = unaff_x28;
        pppuStack_9e8 = (undefined8 ***)unaff_x27;
        pppuStack_9e0 = unaff_x26;
        pppuStack_9d8 = unaff_x25;
        pppuStack_9d0 = unaff_x24;
        pppuStack_9c8 = unaff_x23;
        pppuStack_9c0 = ppppuVar14;
        pppuStack_9b8 = ppppuVar10;
        pppuStack_9b0 = ppppuVar11;
        pppuStack_9a8 = ppppuVar9;
        pppuStack_9a0 = &pppuStack_890;
        func_0x00010c2553e0();
        _objc_retainAutoreleasedReturnValue();
        pppuStack_ae0 = ppppuVar13;
        func_0x00010bf52a60();
        pppuStack_ad0 = ppppuVar13;
        if (ppppuVar13 != (undefined8 ****)0x0) {
          lStack_ad8 = *plStack_ab0;
          do {
            ppppuVar10 = (undefined8 ****)0x0;
            do {
              if (*plStack_ab0 != lStack_ad8) {
                _objc_enumerationMutation(pppuStack_ae0);
              }
              unaff_x25 = *(undefined8 *****)(lStack_ab8 + (long)ppppuVar10 * 8);
              unaff_x23 = unaff_x25;
              func_0x00010bf06320();
              _objc_retainAutoreleasedReturnValue();
              unaff_x24 = unaff_x23;
              func_0x00010c27dd80();
              _objc_retainAutoreleasedReturnValue();
              ppppuVar14 = unaff_x24;
              func_0x00010b774bc4();
              _objc_release(unaff_x24);
              _objc_release(unaff_x23);
              if (ppppuVar14 == (undefined8 ****)0x3fa644c1 ||
                  ppppuVar14 == (undefined8 ****)0xfffffffff0575f4d) {
                pppuStack_ac8 = (undefined8 ***)PTR_PTR_1126c4978;
                unaff_x23 = unaff_x25;
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                unaff_x24 = unaff_x23;
                func_0x00010bf05ba0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x26 = unaff_x25;
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                unaff_x27 = (undefined **)unaff_x26;
                func_0x00010bf0d6a0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = unaff_x25;
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                ppppuVar13 = unaff_x28;
                func_0x00010c27dd80();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                ppppuVar11 = unaff_x25;
                func_0x00010bf05300();
                _objc_retainAutoreleasedReturnValue();
                ppppuVar9 = (undefined8 ****)pppuStack_ac8;
                func_0x00010c241c80();
                _objc_retainAutoreleasedReturnValue();
                pppuStack_ac8 = ppppuVar9;
                _objc_release(ppppuVar11);
                _objc_release(unaff_x25);
                _objc_release(ppppuVar13);
                _objc_release(unaff_x28);
                _objc_release(unaff_x27);
                _objc_release(unaff_x26);
                _objc_release(unaff_x24);
                _objc_release(unaff_x23);
              }
              ppppuVar11 = (undefined8 ****)0xfffffffff0575f4d;
              ppppuVar13 = (undefined8 ****)pppuStack_ac8;
              if (ppppuVar14 == (undefined8 ****)0xfffffffff0575f4d ||
                  ppppuVar14 == (undefined8 ****)0x3fa644c1) goto LAB_106df0ffc;
              ppppuVar10 = (undefined8 ****)((long)ppppuVar10 + 1);
            } while ((undefined8 ****)pppuStack_ad0 != ppppuVar10);
            ppppuVar13 = (undefined8 ****)pppuStack_ae0;
            func_0x00010bf52a60();
            pppuStack_ad0 = ppppuVar13;
          } while (ppppuVar13 != (undefined8 ****)0x0);
        }
        ppppuVar13 = (undefined8 ****)0x0;
LAB_106df0ffc:
        ppppuVar9 = (undefined8 ****)pppuStack_ae0;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a00) {
          ___stack_chk_fail();
          uStack_ae8 = 0x106df1044;
          lStack_b50 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pppuStack_b40 = unaff_x28;
          pppuStack_b38 = (undefined8 ***)unaff_x27;
          pppuStack_b30 = unaff_x26;
          pppuStack_b28 = unaff_x25;
          pppuStack_b20 = unaff_x24;
          pppuStack_b18 = unaff_x23;
          pppuStack_b10 = ppppuVar14;
          pppuStack_b08 = ppppuVar10;
          pppuStack_b00 = ppppuVar11;
          pppuStack_af8 = ppppuVar13;
          pppuStack_af0 = &pppuStack_9a0;
          _objc_retain();
          pppuStack_f58 = ppppuVar12;
          _objc_retain(ppppuVar12);
          ppppuVar13 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          plStack_e08 = (long *)0x0;
          uStack_e10 = 0;
          uStack_df8 = 0;
          plStack_e00 = (long *)0x0;
          uStack_de8 = 0;
          uStack_df0 = 0;
          uStack_dd8 = 0;
          uStack_de0 = 0;
          _objc_retain(ppppuVar9);
          pppuStack_f70 = ppppuVar9;
          func_0x00010bf52a60();
          ppppuVar11 = (undefined8 ****)pppuStack_f70;
          pppuStack_f50 = ppppuVar9;
          if (ppppuVar9 == (undefined8 ****)0x0) {
            _objc_release(pppuStack_f70);
            _objc_release(pppuStack_f58);
            ppppuVar10 = ppppuVar11;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b50)
            goto _objc_autoreleaseReturnValue;
            uVar17 = 0x106df16ec;
            ___stack_chk_fail();
          }
          else {
            lStack_f60 = *plStack_e00;
            if (*plStack_e00 != lStack_f60) {
              _objc_enumerationMutation(pppuStack_f70);
            }
            ppppuVar11 = (undefined8 ****)PTR_PTR_1126bc7b8;
            uStack_f40 = 0;
            unaff_x26 = (undefined8 ****)*plStack_e08;
            ppppuVar12 = (undefined8 ****)pppuStack_f58;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa7160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppppuVar12);
            pppuStack_f48 = ppppuVar11;
            func_0x00010c0ef4a0();
            _objc_retainAutoreleasedReturnValue();
            pppuStack_f38 = ppppuVar11;
            func_0x00010c2553e0();
            _objc_retainAutoreleasedReturnValue();
            lStack_e48 = 0;
            uStack_e50 = 0;
            uStack_e38 = 0;
            puStack_e40 = (undefined8 *)0x0;
            uStack_e28 = 0;
            uStack_e30 = 0;
            uStack_e18 = 0;
            uStack_e20 = 0;
            pppuStack_f18 = ppppuVar11;
            func_0x00010bf52a60();
            if (ppppuVar11 != (undefined8 ****)0x0) {
              unaff_x24 = (undefined8 ****)*puStack_e40;
              do {
                ppppuVar10 = (undefined8 ****)0x0;
                do {
                  if ((undefined8 ****)*puStack_e40 != unaff_x24) {
                    _objc_enumerationMutation(pppuStack_f18);
                  }
                  ppppuVar12 = *(undefined8 *****)(lStack_e48 + (long)ppppuVar10 * 8);
                  ppppuVar14 = ppppuVar12;
                  func_0x00010bfedfc0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x27 = (undefined **)ppppuVar14;
                  func_0x00010c0ca400();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x28 = (undefined8 ****)unaff_x27;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  ppppuVar9 = unaff_x28;
                  func_0x00010c08fa60();
                  _objc_release(unaff_x28);
                  _objc_release(unaff_x27);
                  _objc_release(ppppuVar14);
                  unaff_x23 = (undefined8 ****)0x0;
                  if (ppppuVar9 != (undefined8 ****)0x0) {
                    func_0x00010bfedfc0();
                    _objc_retainAutoreleasedReturnValue();
                    ppppuVar14 = ppppuVar12;
                    func_0x00010c0ca400();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x23 = ppppuVar14;
                    func_0x00010c2923e0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(ppppuVar13);
                    _objc_release(unaff_x23);
                    _objc_release(ppppuVar14);
                    _objc_release(ppppuVar12);
                  }
                  ppppuVar10 = (undefined8 ****)((long)ppppuVar10 + 1);
                } while (ppppuVar11 != ppppuVar10);
                ppppuVar11 = (undefined8 ****)pppuStack_f18;
                func_0x00010bf52a60();
              } while (ppppuVar11 != (undefined8 ****)0x0);
            }
            unaff_x25 = (undefined8 ****)pppuStack_f38;
            ppppuVar10 = (undefined8 ****)pppuStack_f38;
            func_0x00010bf2fba0();
            _objc_retainAutoreleasedReturnValue();
            uVar17 = 0x106df12c0;
            ppppuVar11 = ppppuVar10;
          }
          pppuVar3 = (undefined8 ***)&puStack_10a0;
          lStack_fd8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pppuStack_fd0 = unaff_x28;
          pppuStack_fc8 = (undefined8 ***)unaff_x27;
          pppuStack_fc0 = unaff_x26;
          pppuStack_fb8 = unaff_x25;
          pppuStack_fb0 = unaff_x24;
          pppuStack_fa8 = unaff_x23;
          pppuStack_fa0 = ppppuVar14;
          pppuStack_f98 = ppppuVar13;
          pppuStack_f90 = ppppuVar12;
          pppuStack_f88 = ppppuVar11;
          pppuStack_f80 = &pppuStack_af0;
          uStack_f78 = uVar17;
          _objc_retain();
          ppppuVar13 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          lStack_1098 = 0;
          puStack_10a0 = (undefined8 **)0x0;
          uStack_1088 = 0;
          plStack_1090 = (long *)0x0;
          uStack_1078 = 0;
          uStack_1080 = 0;
          uStack_1068 = 0;
          uStack_1070 = 0;
          ppppuVar12 = ppppuVar10;
          func_0x00010c293dc0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = auStack_1058;
          ppppuVar11 = ppppuVar12;
          func_0x00010bf52a60();
          if (ppppuVar11 != (undefined8 ****)0x0) {
            lVar7 = *plStack_1090;
            do {
              ppppuVar14 = (undefined8 ****)0x0;
              do {
                if (*plStack_1090 != lVar7) {
                  _objc_enumerationMutation(ppppuVar12);
                }
                unaff_x23 = *(undefined8 *****)(lStack_1098 + (long)ppppuVar14 * 8);
                unaff_x24 = unaff_x23;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                ppppuVar9 = unaff_x24;
                func_0x00010c08fa60();
                _objc_release(unaff_x24);
                if (ppppuVar9 != (undefined8 ****)0x0) {
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(ppppuVar13);
                  _objc_release(unaff_x23);
                }
                ppppuVar14 = (undefined8 ****)((long)ppppuVar14 + 1);
              } while (ppppuVar11 != ppppuVar14);
              puVar5 = auStack_1058;
              ppppuVar11 = ppppuVar12;
              pppuVar3 = (undefined8 ***)&puStack_10a0;
              func_0x00010bf52a60();
              ppppuVar14 = (undefined8 ****)0x0;
            } while (ppppuVar11 != (undefined8 ****)0x0);
          }
          _objc_release(ppppuVar12);
          ppppuVar11 = ppppuVar10;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_fd8) {
            ___stack_chk_fail();
            pcStack_10a8 = FUN_106df1868;
            pppuStack_10e0 = unaff_x24;
            pppuStack_10d8 = unaff_x23;
            pppuStack_10d0 = ppppuVar14;
            pppuStack_10c8 = ppppuVar12;
            pppuStack_10c0 = ppppuVar13;
            pppuStack_10b8 = ppppuVar10;
            pppuStack_10b0 = &pppuStack_f80;
            _objc_retain(pppuVar3);
            _objc_retain(puVar5);
            puStack_10e8 = PTR_PTR_1126f6f30;
            ppppuVar14 = &pppuStack_10f0;
            pppuStack_10f0 = ppppuVar11;
            _objc_msgSendSuper2(ppppuVar14,PTR_s_init_1125d9248);
            if (ppppuVar14 != (undefined8 ****)0x0) {
              _objc_retain(pppuVar3);
              pppuVar4 = ppppuVar14[1];
              ppppuVar14[1] = pppuVar3;
              _objc_release(pppuVar4);
              _objc_initWeak(auStack_10f8,ppppuVar14);
              pppuVar4 = (undefined8 ***)PTR_PTR_1126ae720;
              _objc_copyWeak(auStack_1100,auStack_10f8);
              _objc_retain(puVar5);
              func_0x00010bf11fe0();
              _objc_retainAutoreleasedReturnValue();
              pppuVar6 = ppppuVar14[2];
              ppppuVar14[2] = pppuVar4;
              _objc_release(pppuVar6);
              _objc_release(puVar5);
              _objc_destroyWeak(auStack_1100);
              _objc_destroyWeak(auStack_10f8);
            }
            _objc_release(puVar5);
            _objc_release(pppuVar3);
            return ppppuVar14;
          }
        }
      }
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppuVar13);
  return ppppuVar13;
}



/* Entry: 106df0b34; end: 106df0ca3;  */

/* WARNING: Possible PIC construction at 0x000106df12bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106df134c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106df12c0) */
/* WARNING: Removing unreachable block (ram,0x000106df131c) */
/* WARNING: Removing unreachable block (ram,0x000106df1350) */
/* WARNING: Removing unreachable block (ram,0x000106df137c) */
/* WARNING: Removing unreachable block (ram,0x000106df1328) */
/* WARNING: Removing unreachable block (ram,0x000106df132c) */
/* WARNING: Removing unreachable block (ram,0x000106df133c) */
/* WARNING: Removing unreachable block (ram,0x000106df1344) */
/* WARNING: Removing unreachable block (ram,0x000106df1398) */
/* WARNING: Removing unreachable block (ram,0x000106df13bc) */
/* WARNING: Removing unreachable block (ram,0x000106df1428) */
/* WARNING: Removing unreachable block (ram,0x000106df1434) */
/* WARNING: Removing unreachable block (ram,0x000106df1438) */
/* WARNING: Removing unreachable block (ram,0x000106df144c) */
/* WARNING: Removing unreachable block (ram,0x000106df1454) */
/* WARNING: Removing unreachable block (ram,0x000106df149c) */
/* WARNING: Removing unreachable block (ram,0x000106df1504) */
/* WARNING: Removing unreachable block (ram,0x000106df1510) */
/* WARNING: Removing unreachable block (ram,0x000106df1514) */
/* WARNING: Removing unreachable block (ram,0x000106df1524) */
/* WARNING: Removing unreachable block (ram,0x000106df152c) */
/* WARNING: Removing unreachable block (ram,0x000106df1580) */
/* WARNING: Removing unreachable block (ram,0x000106df15d8) */
/* WARNING: Removing unreachable block (ram,0x000106df15e4) */
/* WARNING: Removing unreachable block (ram,0x000106df1600) */
/* WARNING: Removing unreachable block (ram,0x000106df1608) */
/* WARNING: Removing unreachable block (ram,0x000106df1618) */
/* WARNING: Removing unreachable block (ram,0x000106df1634) */
/* WARNING: Removing unreachable block (ram,0x000106df1648) */
/* WARNING: Removing unreachable block (ram,0x000106df1674) */

undefined8 **** FUN_106df0b34(undefined8 param_1,undefined8 ****param_2)

{
  undefined8 ****ppppuVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined1 *puVar7;
  undefined8 ***pppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****unaff_x21;
  undefined8 ****ppppuVar10;
  undefined8 ****unaff_x23;
  undefined8 ****unaff_x24;
  undefined8 ****unaff_x25;
  undefined8 ****unaff_x26;
  undefined8 ****unaff_x27;
  undefined8 ****ppppuVar11;
  undefined8 ****unaff_x28;
  undefined8 uVar12;
  undefined1 auStack_9a0 [8];
  undefined1 auStack_998 [8];
  undefined8 ***pppuStack_990;
  undefined *puStack_988;
  undefined8 ***pppuStack_980;
  undefined8 ***pppuStack_978;
  undefined8 ***pppuStack_970;
  undefined8 ***pppuStack_968;
  undefined8 ***pppuStack_960;
  undefined8 ***pppuStack_958;
  undefined8 ***pppuStack_950;
  code *pcStack_948;
  undefined8 *puStack_940;
  long lStack_938;
  long *plStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined1 auStack_8f8 [128];
  long lStack_878;
  undefined8 ***pppuStack_870;
  undefined8 ***pppuStack_868;
  undefined8 ***pppuStack_860;
  undefined8 ***pppuStack_858;
  undefined8 ***pppuStack_850;
  undefined8 ***pppuStack_848;
  undefined8 ***pppuStack_840;
  undefined8 ***pppuStack_838;
  undefined8 ***pppuStack_830;
  undefined8 ***pppuStack_828;
  undefined8 ***pppuStack_820;
  undefined8 uStack_818;
  undefined8 ***pppuStack_810;
  long lStack_800;
  undefined8 ***pppuStack_7f8;
  undefined8 ***pppuStack_7f0;
  undefined8 ***pppuStack_7e8;
  undefined8 uStack_7e0;
  undefined8 ***pppuStack_7d8;
  undefined8 ***pppuStack_7b8;
  undefined8 uStack_6f0;
  long lStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  long *plStack_6a8;
  long *plStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  long lStack_3f0;
  undefined8 ***pppuStack_3e0;
  undefined8 ***pppuStack_3d8;
  undefined8 ***pppuStack_3d0;
  undefined8 ***pppuStack_3c8;
  undefined8 ***pppuStack_3c0;
  undefined8 ***pppuStack_3b8;
  undefined8 ***pppuStack_3b0;
  undefined8 ***pppuStack_3a8;
  undefined8 ***pppuStack_3a0;
  undefined8 ***pppuStack_398;
  undefined1 ***pppuStack_390;
  undefined8 uStack_388;
  undefined8 ***pppuStack_380;
  long lStack_378;
  undefined8 ***pppuStack_370;
  undefined8 ***pppuStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_2a0;
  undefined1 **ppuStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_168;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar11 = (undefined8 ****)PTR_PTR_1126bc7b8;
  func_0x00010bfa7160(PTR_PTR_1126bc7b8,param_2,param_1,0,param_2);
  _objc_retainAutoreleasedReturnValue();
  ppppuVar1 = ppppuVar11;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppppuVar11);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (undefined8 *)0x0;
  ppppuVar11 = ppppuVar1;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar10 = ppppuVar11;
  func_0x00010bf52a60();
  if (ppppuVar10 != (undefined8 ****)0x0) {
    unaff_x24 = (undefined8 ****)*puStack_110;
    unaff_x21 = ppppuVar10;
    do {
      unaff_x25 = (undefined8 ****)0x0;
      do {
        if ((undefined8 ****)*puStack_110 != unaff_x24) {
          _objc_enumerationMutation(ppppuVar11);
        }
        unaff_x23 = *(undefined8 *****)(lStack_118 + (long)unaff_x25 * 8);
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar10 = unaff_x23;
        func_0x00010c25bcc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x23);
        if (ppppuVar10 != (undefined8 ****)0x0) goto LAB_106df0c58;
        unaff_x25 = (undefined8 ****)((long)unaff_x25 + 1);
      } while (unaff_x21 != unaff_x25);
      unaff_x21 = ppppuVar11;
      func_0x00010bf52a60();
    } while (unaff_x21 != (undefined8 ****)0x0);
  }
  ppppuVar10 = (undefined8 ****)0x0;
LAB_106df0c58:
  _objc_release(ppppuVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_106df0ca4;
    lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain();
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    puStack_220 = (undefined8 *)0x0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    _objc_retain(ppppuVar1);
    ppppuVar11 = ppppuVar1;
    func_0x00010bf52a60();
    if (ppppuVar11 != (undefined8 ****)0x0) {
      unaff_x21 = (undefined8 ****)*puStack_220;
      do {
        ppppuVar10 = (undefined8 ****)0x0;
        do {
          if ((undefined8 ****)*puStack_220 != unaff_x21) {
            _objc_enumerationMutation(ppppuVar1);
          }
          lVar2 = *(long *)(lStack_228 + (long)ppppuVar10 * 8);
          func_0x00010b5fa088();
          if (lVar2 != 1) {
            ppppuVar9 = (undefined8 ****)0x0;
            ppppuVar11 = ppppuVar10;
            goto LAB_106df0d70;
          }
          ppppuVar10 = (undefined8 ****)((long)ppppuVar10 + 1);
        } while (ppppuVar11 != ppppuVar10);
        ppppuVar11 = ppppuVar1;
        func_0x00010bf52a60();
      } while (ppppuVar11 != (undefined8 ****)0x0);
    }
    ppppuVar9 = (undefined8 ****)0x1;
    ppppuVar11 = ppppuVar10;
LAB_106df0d70:
    _objc_release(ppppuVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
      return ppppuVar9;
    }
    ___stack_chk_fail();
    uStack_238 = 0x106df0db8;
    lStack_2a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    plStack_350 = (long *)0x0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    ppuStack_240 = &puStack_130;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_380 = ppppuVar1;
    func_0x00010bf52a60();
    pppuStack_370 = ppppuVar1;
    if (ppppuVar1 != (undefined8 ****)0x0) {
      lStack_378 = *plStack_350;
      do {
        unaff_x21 = (undefined8 ****)0x0;
        do {
          if (*plStack_350 != lStack_378) {
            _objc_enumerationMutation(pppuStack_380);
          }
          unaff_x25 = *(undefined8 *****)(lStack_358 + (long)unaff_x21 * 8);
          unaff_x23 = unaff_x25;
          func_0x00010bf06320();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar11 = unaff_x24;
          func_0x00010b774bc4();
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
          if (ppppuVar11 == (undefined8 ****)0x3fa644c1 ||
              ppppuVar11 == (undefined8 ****)0xfffffffff0575f4d) {
            pppuStack_368 = (undefined8 ***)PTR_PTR_1126c4978;
            unaff_x23 = unaff_x25;
            func_0x00010bf06320();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = unaff_x23;
            func_0x00010bf05ba0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010bf06320();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x26;
            func_0x00010bf0d6a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = unaff_x25;
            func_0x00010bf06320();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar1 = unaff_x28;
            func_0x00010c27dd80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf06320();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar10 = unaff_x25;
            func_0x00010bf05300();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar9 = (undefined8 ****)pppuStack_368;
            func_0x00010c241c80();
            _objc_retainAutoreleasedReturnValue();
            pppuStack_368 = ppppuVar9;
            _objc_release(ppppuVar10);
            _objc_release(unaff_x25);
            _objc_release(ppppuVar1);
            _objc_release(unaff_x28);
            _objc_release(unaff_x27);
            _objc_release(unaff_x26);
            _objc_release(unaff_x24);
            _objc_release(unaff_x23);
          }
          ppppuVar9 = (undefined8 ****)0xfffffffff0575f4d;
          ppppuVar10 = (undefined8 ****)pppuStack_368;
          if (ppppuVar11 == (undefined8 ****)0xfffffffff0575f4d ||
              ppppuVar11 == (undefined8 ****)0x3fa644c1) goto LAB_106df0ffc;
          unaff_x21 = (undefined8 ****)((long)unaff_x21 + 1);
        } while ((undefined8 ****)pppuStack_370 != unaff_x21);
        ppppuVar1 = (undefined8 ****)pppuStack_380;
        func_0x00010bf52a60();
        pppuStack_370 = ppppuVar1;
      } while (ppppuVar1 != (undefined8 ****)0x0);
    }
    ppppuVar10 = (undefined8 ****)0x0;
LAB_106df0ffc:
    ppppuVar1 = (undefined8 ****)pppuStack_380;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2a0) {
      ___stack_chk_fail();
      uStack_388 = 0x106df1044;
      lStack_3f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_3e0 = unaff_x28;
      pppuStack_3d8 = unaff_x27;
      pppuStack_3d0 = unaff_x26;
      pppuStack_3c8 = unaff_x25;
      pppuStack_3c0 = unaff_x24;
      pppuStack_3b8 = unaff_x23;
      pppuStack_3b0 = ppppuVar11;
      pppuStack_3a8 = unaff_x21;
      pppuStack_3a0 = ppppuVar9;
      pppuStack_398 = ppppuVar10;
      pppuStack_390 = &ppuStack_240;
      _objc_retain();
      pppuStack_7f8 = param_2;
      _objc_retain(param_2);
      ppppuVar10 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      plStack_6a8 = (long *)0x0;
      uStack_6b0 = 0;
      uStack_698 = 0;
      plStack_6a0 = (long *)0x0;
      uStack_688 = 0;
      uStack_690 = 0;
      uStack_678 = 0;
      uStack_680 = 0;
      _objc_retain(ppppuVar1);
      pppuStack_810 = ppppuVar1;
      func_0x00010bf52a60();
      ppppuVar9 = (undefined8 ****)pppuStack_810;
      pppuStack_7f0 = ppppuVar1;
      if (ppppuVar1 == (undefined8 ****)0x0) {
        _objc_release(pppuStack_810);
        _objc_release(pppuStack_7f8);
        ppppuVar1 = ppppuVar9;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f0)
        goto _objc_autoreleaseReturnValue;
        uVar12 = 0x106df16ec;
        ___stack_chk_fail();
      }
      else {
        lStack_800 = *plStack_6a0;
        if (*plStack_6a0 != lStack_800) {
          _objc_enumerationMutation(pppuStack_810);
        }
        ppppuVar1 = (undefined8 ****)PTR_PTR_1126bc7b8;
        uStack_7e0 = 0;
        unaff_x26 = (undefined8 ****)*plStack_6a8;
        param_2 = (undefined8 ****)pppuStack_7f8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
        pppuStack_7e8 = ppppuVar1;
        func_0x00010c0ef4a0();
        _objc_retainAutoreleasedReturnValue();
        pppuStack_7d8 = ppppuVar1;
        func_0x00010c2553e0();
        _objc_retainAutoreleasedReturnValue();
        lStack_6e8 = 0;
        uStack_6f0 = 0;
        uStack_6d8 = 0;
        puStack_6e0 = (undefined8 *)0x0;
        uStack_6c8 = 0;
        uStack_6d0 = 0;
        uStack_6b8 = 0;
        uStack_6c0 = 0;
        pppuStack_7b8 = ppppuVar1;
        func_0x00010bf52a60();
        if (ppppuVar1 != (undefined8 ****)0x0) {
          unaff_x24 = (undefined8 ****)*puStack_6e0;
          do {
            ppppuVar9 = (undefined8 ****)0x0;
            do {
              if ((undefined8 ****)*puStack_6e0 != unaff_x24) {
                _objc_enumerationMutation(pppuStack_7b8);
              }
              param_2 = *(undefined8 *****)(lStack_6e8 + (long)ppppuVar9 * 8);
              ppppuVar11 = param_2;
              func_0x00010bfedfc0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = ppppuVar11;
              func_0x00010c0ca400();
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = unaff_x27;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              ppppuVar3 = unaff_x28;
              func_0x00010c08fa60();
              _objc_release(unaff_x28);
              _objc_release(unaff_x27);
              _objc_release(ppppuVar11);
              unaff_x23 = (undefined8 ****)0x0;
              if (ppppuVar3 != (undefined8 ****)0x0) {
                func_0x00010bfedfc0();
                _objc_retainAutoreleasedReturnValue();
                ppppuVar11 = param_2;
                func_0x00010c0ca400();
                _objc_retainAutoreleasedReturnValue();
                unaff_x23 = ppppuVar11;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(ppppuVar10);
                _objc_release(unaff_x23);
                _objc_release(ppppuVar11);
                _objc_release(param_2);
              }
              ppppuVar9 = (undefined8 ****)((long)ppppuVar9 + 1);
            } while (ppppuVar1 != ppppuVar9);
            ppppuVar1 = (undefined8 ****)pppuStack_7b8;
            func_0x00010bf52a60();
          } while (ppppuVar1 != (undefined8 ****)0x0);
        }
        unaff_x25 = (undefined8 ****)pppuStack_7d8;
        ppppuVar1 = (undefined8 ****)pppuStack_7d8;
        func_0x00010bf2fba0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = 0x106df12c0;
        ppppuVar9 = ppppuVar1;
      }
      pppuVar6 = (undefined8 ***)&puStack_940;
      lStack_878 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_870 = unaff_x28;
      pppuStack_868 = unaff_x27;
      pppuStack_860 = unaff_x26;
      pppuStack_858 = unaff_x25;
      pppuStack_850 = unaff_x24;
      pppuStack_848 = unaff_x23;
      pppuStack_840 = ppppuVar11;
      pppuStack_838 = ppppuVar10;
      pppuStack_830 = param_2;
      pppuStack_828 = ppppuVar9;
      pppuStack_820 = &pppuStack_390;
      uStack_818 = uVar12;
      _objc_retain();
      ppppuVar10 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_938 = 0;
      puStack_940 = (undefined8 **)0x0;
      uStack_928 = 0;
      plStack_930 = (long *)0x0;
      uStack_918 = 0;
      uStack_920 = 0;
      uStack_908 = 0;
      uStack_910 = 0;
      ppppuVar9 = ppppuVar1;
      func_0x00010c293dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = auStack_8f8;
      ppppuVar3 = ppppuVar9;
      func_0x00010bf52a60();
      if (ppppuVar3 != (undefined8 ****)0x0) {
        lVar2 = *plStack_930;
        do {
          ppppuVar11 = (undefined8 ****)0x0;
          do {
            if (*plStack_930 != lVar2) {
              _objc_enumerationMutation(ppppuVar9);
            }
            unaff_x23 = *(undefined8 *****)(lStack_938 + (long)ppppuVar11 * 8);
            unaff_x24 = unaff_x23;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar4 = unaff_x24;
            func_0x00010c08fa60();
            _objc_release(unaff_x24);
            if (ppppuVar4 != (undefined8 ****)0x0) {
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(ppppuVar10);
              _objc_release(unaff_x23);
            }
            ppppuVar11 = (undefined8 ****)((long)ppppuVar11 + 1);
          } while (ppppuVar3 != ppppuVar11);
          puVar7 = auStack_8f8;
          ppppuVar3 = ppppuVar9;
          pppuVar6 = (undefined8 ***)&puStack_940;
          func_0x00010bf52a60();
          ppppuVar11 = (undefined8 ****)0x0;
        } while (ppppuVar3 != (undefined8 ****)0x0);
      }
      _objc_release(ppppuVar9);
      ppppuVar3 = ppppuVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_878) {
        ___stack_chk_fail();
        pcStack_948 = FUN_106df1868;
        pppuStack_980 = unaff_x24;
        pppuStack_978 = unaff_x23;
        pppuStack_970 = ppppuVar11;
        pppuStack_968 = ppppuVar9;
        pppuStack_960 = ppppuVar10;
        pppuStack_958 = ppppuVar1;
        pppuStack_950 = &pppuStack_820;
        _objc_retain(pppuVar6);
        _objc_retain(puVar7);
        puStack_988 = PTR_PTR_1126f6f30;
        ppppuVar11 = &pppuStack_990;
        pppuStack_990 = ppppuVar3;
        _objc_msgSendSuper2(ppppuVar11,PTR_s_init_1125d9248);
        if (ppppuVar11 != (undefined8 ****)0x0) {
          _objc_retain(pppuVar6);
          pppuVar5 = ppppuVar11[1];
          ppppuVar11[1] = pppuVar6;
          _objc_release(pppuVar5);
          _objc_initWeak(auStack_998,ppppuVar11);
          pppuVar5 = (undefined8 ***)PTR_PTR_1126ae720;
          _objc_copyWeak(auStack_9a0,auStack_998);
          _objc_retain(puVar7);
          func_0x00010bf11fe0();
          _objc_retainAutoreleasedReturnValue();
          pppuVar8 = ppppuVar11[2];
          ppppuVar11[2] = pppuVar5;
          _objc_release(pppuVar8);
          _objc_release(puVar7);
          _objc_destroyWeak(auStack_9a0);
          _objc_destroyWeak(auStack_998);
        }
        _objc_release(puVar7);
        _objc_release(pppuVar6);
        return ppppuVar11;
      }
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppuVar10);
  return ppppuVar10;
}



/* Entry: 106df0ca4; end: 106df0db7;  */

/* WARNING: Possible PIC construction at 0x000106df12bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106df134c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106df12c0) */
/* WARNING: Removing unreachable block (ram,0x000106df131c) */
/* WARNING: Removing unreachable block (ram,0x000106df1350) */
/* WARNING: Removing unreachable block (ram,0x000106df137c) */
/* WARNING: Removing unreachable block (ram,0x000106df1328) */
/* WARNING: Removing unreachable block (ram,0x000106df132c) */
/* WARNING: Removing unreachable block (ram,0x000106df133c) */
/* WARNING: Removing unreachable block (ram,0x000106df1344) */
/* WARNING: Removing unreachable block (ram,0x000106df1398) */
/* WARNING: Removing unreachable block (ram,0x000106df13bc) */
/* WARNING: Removing unreachable block (ram,0x000106df1428) */
/* WARNING: Removing unreachable block (ram,0x000106df1434) */
/* WARNING: Removing unreachable block (ram,0x000106df1438) */
/* WARNING: Removing unreachable block (ram,0x000106df144c) */
/* WARNING: Removing unreachable block (ram,0x000106df1454) */
/* WARNING: Removing unreachable block (ram,0x000106df149c) */
/* WARNING: Removing unreachable block (ram,0x000106df1504) */
/* WARNING: Removing unreachable block (ram,0x000106df1510) */
/* WARNING: Removing unreachable block (ram,0x000106df1514) */
/* WARNING: Removing unreachable block (ram,0x000106df1524) */
/* WARNING: Removing unreachable block (ram,0x000106df152c) */
/* WARNING: Removing unreachable block (ram,0x000106df1580) */
/* WARNING: Removing unreachable block (ram,0x000106df15d8) */
/* WARNING: Removing unreachable block (ram,0x000106df15e4) */
/* WARNING: Removing unreachable block (ram,0x000106df1600) */
/* WARNING: Removing unreachable block (ram,0x000106df1608) */
/* WARNING: Removing unreachable block (ram,0x000106df1618) */
/* WARNING: Removing unreachable block (ram,0x000106df1634) */
/* WARNING: Removing unreachable block (ram,0x000106df1648) */
/* WARNING: Removing unreachable block (ram,0x000106df1674) */

undefined ** FUN_106df0ca4(undefined *param_1,undefined *param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *puVar9;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *puVar10;
  undefined *unaff_x28;
  undefined8 uVar11;
  undefined1 auStack_880 [8];
  undefined1 auStack_878 [8];
  undefined *puStack_870;
  undefined *puStack_868;
  undefined *puStack_860;
  undefined *puStack_858;
  undefined *puStack_850;
  undefined *puStack_848;
  undefined **ppuStack_840;
  undefined *puStack_838;
  undefined8 ***pppuStack_830;
  code *pcStack_828;
  undefined8 uStack_820;
  long lStack_818;
  long *plStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined1 auStack_7d8 [128];
  long lStack_758;
  undefined *puStack_750;
  undefined *puStack_748;
  undefined *puStack_740;
  undefined *puStack_738;
  undefined *puStack_730;
  undefined *puStack_728;
  undefined *puStack_720;
  undefined **ppuStack_718;
  undefined *puStack_710;
  undefined *puStack_708;
  undefined1 ***pppuStack_700;
  undefined8 uStack_6f8;
  undefined *puStack_6f0;
  long lStack_6e0;
  undefined *puStack_6d8;
  undefined *puStack_6d0;
  undefined *puStack_6c8;
  undefined8 uStack_6c0;
  undefined *puStack_6b8;
  undefined *puStack_698;
  undefined8 uStack_5d0;
  long lStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  long *plStack_588;
  long *plStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long lStack_2d0;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined1 **ppuStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined *puStack_250;
  undefined **ppuStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_180;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  puStack_100 = (undefined8 *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_1);
  puVar5 = param_1;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    unaff_x21 = (undefined *)*puStack_100;
    do {
      unaff_x22 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_100 != unaff_x21) {
          _objc_enumerationMutation(param_1);
        }
        lVar1 = *(long *)(lStack_108 + (long)unaff_x22 * 8);
        func_0x00010b5fa088();
        if (lVar1 != 1) {
          ppuVar8 = (undefined **)0x0;
          goto LAB_106df0d70;
        }
        unaff_x22 = unaff_x22 + 1;
      } while (puVar5 != unaff_x22);
      puVar5 = param_1;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  ppuVar8 = (undefined **)0x1;
LAB_106df0d70:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  uStack_118 = 0x106df0db8;
  lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_260 = param_1;
  func_0x00010bf52a60();
  puStack_250 = param_1;
  if (param_1 != (undefined *)0x0) {
    lStack_258 = *plStack_230;
    puStack_250 = param_1;
    do {
      unaff_x21 = (undefined *)0x0;
      do {
        if (*plStack_230 != lStack_258) {
          _objc_enumerationMutation(puStack_260);
        }
        unaff_x25 = *(undefined **)(lStack_238 + (long)unaff_x21 * 8);
        unaff_x23 = unaff_x25;
        func_0x00010bf06320();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010c27dd80();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = unaff_x24;
        func_0x00010b774bc4();
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        if (unaff_x22 == (undefined *)0x3fa644c1 || unaff_x22 == (undefined *)0xfffffffff0575f4d) {
          ppuStack_248 = (undefined **)PTR_PTR_1126c4978;
          unaff_x23 = unaff_x25;
          func_0x00010bf06320();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          func_0x00010bf05ba0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010bf06320();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010bf0d6a0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = unaff_x25;
          func_0x00010bf06320();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = unaff_x28;
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf06320();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = unaff_x25;
          func_0x00010bf05300();
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuStack_248;
          func_0x00010c241c80();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_248 = ppuVar8;
          _objc_release(puVar9);
          _objc_release(unaff_x25);
          _objc_release(puVar5);
          _objc_release(unaff_x28);
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
        }
        ppuVar8 = (undefined **)0xfffffffff0575f4d;
        ppuVar2 = ppuStack_248;
        if (unaff_x22 == (undefined *)0xfffffffff0575f4d || unaff_x22 == (undefined *)0x3fa644c1)
        goto LAB_106df0ffc;
        unaff_x21 = unaff_x21 + 1;
      } while (puStack_250 != unaff_x21);
      puVar5 = puStack_260;
      func_0x00010bf52a60();
      puStack_250 = puVar5;
    } while (puVar5 != (undefined *)0x0);
  }
  ppuVar2 = (undefined **)0x0;
LAB_106df0ffc:
  puVar5 = puStack_260;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_180) {
    ___stack_chk_fail();
    uStack_268 = 0x106df1044;
    lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_2c0 = unaff_x28;
    puStack_2b8 = unaff_x27;
    puStack_2b0 = unaff_x26;
    puStack_2a8 = unaff_x25;
    puStack_2a0 = unaff_x24;
    puStack_298 = unaff_x23;
    puStack_290 = unaff_x22;
    puStack_288 = unaff_x21;
    ppuStack_280 = ppuVar8;
    ppuStack_278 = ppuVar2;
    ppuStack_270 = &puStack_120;
    _objc_retain();
    puStack_6d8 = param_2;
    _objc_retain(param_2);
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    plStack_588 = (long *)0x0;
    uStack_590 = 0;
    uStack_578 = 0;
    plStack_580 = (long *)0x0;
    uStack_568 = 0;
    uStack_570 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    _objc_retain(puVar5);
    puStack_6f0 = puVar5;
    func_0x00010bf52a60();
    puVar9 = puStack_6f0;
    puStack_6d0 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      _objc_release(puStack_6f0);
      _objc_release(puStack_6d8);
      puVar5 = puVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0)
      goto _objc_autoreleaseReturnValue;
      uVar11 = 0x106df16ec;
      ___stack_chk_fail();
    }
    else {
      lStack_6e0 = *plStack_580;
      if (*plStack_580 != lStack_6e0) {
        _objc_enumerationMutation(puStack_6f0);
      }
      puVar5 = PTR_PTR_1126bc7b8;
      uStack_6c0 = 0;
      unaff_x26 = (undefined *)*plStack_588;
      param_2 = puStack_6d8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      puStack_6c8 = puVar5;
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_6b8 = puVar5;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      lStack_5c8 = 0;
      uStack_5d0 = 0;
      uStack_5b8 = 0;
      puStack_5c0 = (undefined8 *)0x0;
      uStack_5a8 = 0;
      uStack_5b0 = 0;
      uStack_598 = 0;
      uStack_5a0 = 0;
      puStack_698 = puVar5;
      func_0x00010bf52a60();
      if (puVar5 != (undefined *)0x0) {
        unaff_x24 = (undefined *)*puStack_5c0;
        do {
          puVar9 = (undefined *)0x0;
          do {
            if ((undefined *)*puStack_5c0 != unaff_x24) {
              _objc_enumerationMutation(puStack_698);
            }
            param_2 = *(undefined **)(lStack_5c8 + (long)puVar9 * 8);
            unaff_x22 = param_2;
            func_0x00010bfedfc0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x22;
            func_0x00010c0ca400();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = unaff_x27;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = unaff_x28;
            func_0x00010c08fa60();
            _objc_release(unaff_x28);
            _objc_release(unaff_x27);
            _objc_release(unaff_x22);
            unaff_x23 = (undefined *)0x0;
            if (puVar3 != (undefined *)0x0) {
              func_0x00010bfedfc0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x22 = param_2;
              func_0x00010c0ca400();
              _objc_retainAutoreleasedReturnValue();
              unaff_x23 = unaff_x22;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(ppuVar2);
              _objc_release(unaff_x23);
              _objc_release(unaff_x22);
              _objc_release(param_2);
            }
            puVar9 = puVar9 + 1;
          } while (puVar5 != puVar9);
          puVar5 = puStack_698;
          func_0x00010bf52a60();
        } while (puVar5 != (undefined *)0x0);
      }
      unaff_x25 = puStack_6b8;
      puVar5 = puStack_6b8;
      func_0x00010bf2fba0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = 0x106df12c0;
      puVar9 = puVar5;
    }
    puVar6 = &uStack_820;
    lStack_758 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_750 = unaff_x28;
    puStack_748 = unaff_x27;
    puStack_740 = unaff_x26;
    puStack_738 = unaff_x25;
    puStack_730 = unaff_x24;
    puStack_728 = unaff_x23;
    puStack_720 = unaff_x22;
    ppuStack_718 = ppuVar2;
    puStack_710 = param_2;
    puStack_708 = puVar9;
    pppuStack_700 = &ppuStack_270;
    uStack_6f8 = uVar11;
    _objc_retain();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_818 = 0;
    uStack_820 = 0;
    uStack_808 = 0;
    plStack_810 = (long *)0x0;
    uStack_7f8 = 0;
    uStack_800 = 0;
    uStack_7e8 = 0;
    uStack_7f0 = 0;
    puVar9 = puVar5;
    func_0x00010c293dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = auStack_7d8;
    puVar3 = puVar9;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar1 = *plStack_810;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_810 != lVar1) {
            _objc_enumerationMutation(puVar9);
          }
          unaff_x23 = *(undefined **)(lStack_818 + (long)puVar10 * 8);
          unaff_x24 = unaff_x23;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = unaff_x24;
          func_0x00010c08fa60();
          _objc_release(unaff_x24);
          if (puVar4 != (undefined *)0x0) {
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuVar2);
            _objc_release(unaff_x23);
          }
          puVar10 = puVar10 + 1;
        } while (puVar3 != puVar10);
        puVar7 = auStack_7d8;
        puVar3 = puVar9;
        puVar6 = &uStack_820;
        func_0x00010bf52a60();
        unaff_x22 = (undefined *)0x0;
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar9);
    puVar3 = puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_758) {
      ___stack_chk_fail();
      pcStack_828 = FUN_106df1868;
      puStack_860 = unaff_x24;
      puStack_858 = unaff_x23;
      puStack_850 = unaff_x22;
      puStack_848 = puVar9;
      ppuStack_840 = ppuVar2;
      puStack_838 = puVar5;
      pppuStack_830 = &pppuStack_700;
      _objc_retain(puVar6);
      _objc_retain(puVar7);
      puStack_868 = PTR_PTR_1126f6f30;
      ppuVar8 = &puStack_870;
      puStack_870 = puVar3;
      _objc_msgSendSuper2(ppuVar8,PTR_s_init_1125d9248);
      if (ppuVar8 != (undefined **)0x0) {
        _objc_retain(puVar6);
        puVar5 = ppuVar8[1];
        ppuVar8[1] = (undefined *)puVar6;
        _objc_release(puVar5);
        _objc_initWeak(auStack_878,ppuVar8);
        puVar5 = PTR_PTR_1126ae720;
        _objc_copyWeak(auStack_880,auStack_878);
        _objc_retain(puVar7);
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = ppuVar8[2];
        ppuVar8[2] = puVar5;
        _objc_release(puVar9);
        _objc_release(puVar7);
        _objc_destroyWeak(auStack_880);
        _objc_destroyWeak(auStack_878);
      }
      _objc_release(puVar7);
      _objc_release(puVar6);
      return ppuVar8;
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return ppuVar2;
}



/* Entry: 106df0db8; end: 106df1867;  */

/* WARNING: Possible PIC construction at 0x000106df12bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106df134c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106df12c0) */
/* WARNING: Removing unreachable block (ram,0x000106df131c) */
/* WARNING: Removing unreachable block (ram,0x000106df1350) */
/* WARNING: Removing unreachable block (ram,0x000106df137c) */
/* WARNING: Removing unreachable block (ram,0x000106df1328) */
/* WARNING: Removing unreachable block (ram,0x000106df132c) */
/* WARNING: Removing unreachable block (ram,0x000106df133c) */
/* WARNING: Removing unreachable block (ram,0x000106df1344) */
/* WARNING: Removing unreachable block (ram,0x000106df1398) */
/* WARNING: Removing unreachable block (ram,0x000106df13bc) */
/* WARNING: Removing unreachable block (ram,0x000106df1428) */
/* WARNING: Removing unreachable block (ram,0x000106df1434) */
/* WARNING: Removing unreachable block (ram,0x000106df1438) */
/* WARNING: Removing unreachable block (ram,0x000106df144c) */
/* WARNING: Removing unreachable block (ram,0x000106df1454) */
/* WARNING: Removing unreachable block (ram,0x000106df149c) */
/* WARNING: Removing unreachable block (ram,0x000106df1504) */
/* WARNING: Removing unreachable block (ram,0x000106df1510) */
/* WARNING: Removing unreachable block (ram,0x000106df1514) */
/* WARNING: Removing unreachable block (ram,0x000106df1524) */
/* WARNING: Removing unreachable block (ram,0x000106df152c) */
/* WARNING: Removing unreachable block (ram,0x000106df1580) */
/* WARNING: Removing unreachable block (ram,0x000106df15d8) */
/* WARNING: Removing unreachable block (ram,0x000106df15e4) */
/* WARNING: Removing unreachable block (ram,0x000106df1600) */
/* WARNING: Removing unreachable block (ram,0x000106df1608) */
/* WARNING: Removing unreachable block (ram,0x000106df1618) */
/* WARNING: Removing unreachable block (ram,0x000106df1634) */
/* WARNING: Removing unreachable block (ram,0x000106df1648) */
/* WARNING: Removing unreachable block (ram,0x000106df1674) */

undefined ** FUN_106df0db8(undefined *param_1,undefined *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *puVar7;
  undefined *unaff_x26;
  long lVar8;
  undefined *unaff_x27;
  undefined *puVar9;
  undefined *unaff_x28;
  undefined8 uVar10;
  undefined1 auStack_770 [8];
  undefined1 auStack_768 [8];
  undefined *puStack_760;
  undefined *puStack_758;
  undefined *puStack_750;
  undefined *puStack_748;
  undefined *puStack_740;
  undefined *puStack_738;
  undefined **ppuStack_730;
  undefined *puStack_728;
  undefined1 ***pppuStack_720;
  code *pcStack_718;
  undefined8 uStack_710;
  long lStack_708;
  long *plStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined1 auStack_6c8 [128];
  long lStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined *puStack_630;
  undefined *puStack_628;
  undefined *puStack_620;
  undefined *puStack_618;
  undefined *puStack_610;
  undefined **ppuStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined1 **ppuStack_5f0;
  undefined8 uStack_5e8;
  undefined *puStack_5e0;
  long lStack_5d0;
  undefined *puStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined8 uStack_5b0;
  undefined *puStack_5a8;
  undefined *puStack_588;
  undefined8 uStack_4c0;
  long lStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 *puStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_1c0;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined **ppuStack_138;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = param_1;
  func_0x00010bf52a60();
  puStack_140 = param_1;
  if (param_1 != (undefined *)0x0) {
    lStack_148 = *plStack_120;
    puStack_140 = param_1;
    do {
      unaff_x21 = (undefined *)0x0;
      do {
        if (*plStack_120 != lStack_148) {
          _objc_enumerationMutation(puStack_150);
        }
        unaff_x25 = *(undefined **)(lStack_128 + (long)unaff_x21 * 8);
        unaff_x23 = unaff_x25;
        func_0x00010bf06320();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010c27dd80();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = unaff_x24;
        func_0x00010b774bc4();
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        if (unaff_x22 == (undefined *)0x3fa644c1 || unaff_x22 == (undefined *)0xfffffffff0575f4d) {
          ppuStack_138 = (undefined **)PTR_PTR_1126c4978;
          unaff_x23 = unaff_x25;
          func_0x00010bf06320();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          func_0x00010bf05ba0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010bf06320();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010bf0d6a0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = unaff_x25;
          func_0x00010bf06320();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = unaff_x28;
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf06320();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = unaff_x25;
          func_0x00010bf05300();
          _objc_retainAutoreleasedReturnValue();
          ppuVar1 = ppuStack_138;
          func_0x00010c241c80();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_138 = ppuVar1;
          _objc_release(puVar7);
          _objc_release(unaff_x25);
          _objc_release(puVar4);
          _objc_release(unaff_x28);
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
        }
        unaff_x20 = 0xfffffffff0575f4d;
        ppuVar1 = ppuStack_138;
        if (unaff_x22 == (undefined *)0xfffffffff0575f4d || unaff_x22 == (undefined *)0x3fa644c1)
        goto LAB_106df0ffc;
        unaff_x21 = unaff_x21 + 1;
      } while (puStack_140 != unaff_x21);
      puVar4 = puStack_150;
      func_0x00010bf52a60();
      puStack_140 = puVar4;
    } while (puVar4 != (undefined *)0x0);
  }
  ppuVar1 = (undefined **)0x0;
LAB_106df0ffc:
  puVar4 = puStack_150;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uStack_158 = 0x106df1044;
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_1b0 = unaff_x28;
    puStack_1a8 = unaff_x27;
    puStack_1a0 = unaff_x26;
    puStack_198 = unaff_x25;
    puStack_190 = unaff_x24;
    puStack_188 = unaff_x23;
    puStack_180 = unaff_x22;
    puStack_178 = unaff_x21;
    uStack_170 = unaff_x20;
    ppuStack_168 = ppuVar1;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain();
    puStack_5c8 = param_2;
    _objc_retain(param_2);
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puStack_478 = (undefined8 *)0x0;
    uStack_480 = 0;
    uStack_468 = 0;
    plStack_470 = (long *)0x0;
    uStack_458 = 0;
    uStack_460 = 0;
    uStack_448 = 0;
    uStack_450 = 0;
    _objc_retain(puVar4);
    puStack_5e0 = puVar4;
    func_0x00010bf52a60();
    puVar7 = puStack_5e0;
    puStack_5c0 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      _objc_release(puStack_5e0);
      _objc_release(puStack_5c8);
      puVar4 = puVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0)
      goto _objc_autoreleaseReturnValue;
      uVar10 = 0x106df16ec;
      ___stack_chk_fail();
    }
    else {
      lStack_5d0 = *plStack_470;
      if (*plStack_470 != lStack_5d0) {
        _objc_enumerationMutation(puStack_5e0);
      }
      puVar4 = PTR_PTR_1126bc7b8;
      uStack_5b0 = 0;
      unaff_x26 = (undefined *)*puStack_478;
      param_2 = puStack_5c8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      puStack_5b8 = puVar4;
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_5a8 = puVar4;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      lStack_4b8 = 0;
      uStack_4c0 = 0;
      uStack_4a8 = 0;
      puStack_4b0 = (undefined8 *)0x0;
      uStack_498 = 0;
      uStack_4a0 = 0;
      uStack_488 = 0;
      uStack_490 = 0;
      puStack_588 = puVar4;
      func_0x00010bf52a60();
      if (puVar4 != (undefined *)0x0) {
        unaff_x24 = (undefined *)*puStack_4b0;
        do {
          puVar7 = (undefined *)0x0;
          do {
            if ((undefined *)*puStack_4b0 != unaff_x24) {
              _objc_enumerationMutation(puStack_588);
            }
            param_2 = *(undefined **)(lStack_4b8 + (long)puVar7 * 8);
            unaff_x22 = param_2;
            func_0x00010bfedfc0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x22;
            func_0x00010c0ca400();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = unaff_x27;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = unaff_x28;
            func_0x00010c08fa60();
            _objc_release(unaff_x28);
            _objc_release(unaff_x27);
            _objc_release(unaff_x22);
            unaff_x23 = (undefined *)0x0;
            if (puVar2 != (undefined *)0x0) {
              func_0x00010bfedfc0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x22 = param_2;
              func_0x00010c0ca400();
              _objc_retainAutoreleasedReturnValue();
              unaff_x23 = unaff_x22;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(ppuVar1);
              _objc_release(unaff_x23);
              _objc_release(unaff_x22);
              _objc_release(param_2);
            }
            puVar7 = puVar7 + 1;
          } while (puVar4 != puVar7);
          puVar4 = puStack_588;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined *)0x0);
      }
      unaff_x25 = puStack_5a8;
      puVar4 = puStack_5a8;
      func_0x00010bf2fba0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = 0x106df12c0;
      puVar7 = puVar4;
    }
    puVar5 = &uStack_710;
    lStack_648 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_640 = unaff_x28;
    puStack_638 = unaff_x27;
    puStack_630 = unaff_x26;
    puStack_628 = unaff_x25;
    puStack_620 = unaff_x24;
    puStack_618 = unaff_x23;
    puStack_610 = unaff_x22;
    ppuStack_608 = ppuVar1;
    puStack_600 = param_2;
    puStack_5f8 = puVar7;
    ppuStack_5f0 = &puStack_160;
    uStack_5e8 = uVar10;
    _objc_retain();
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_708 = 0;
    uStack_710 = 0;
    uStack_6f8 = 0;
    plStack_700 = (long *)0x0;
    uStack_6e8 = 0;
    uStack_6f0 = 0;
    uStack_6d8 = 0;
    uStack_6e0 = 0;
    puVar7 = puVar4;
    func_0x00010c293dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = auStack_6c8;
    puVar2 = puVar7;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar8 = *plStack_700;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_700 != lVar8) {
            _objc_enumerationMutation(puVar7);
          }
          unaff_x23 = *(undefined **)(lStack_708 + (long)puVar9 * 8);
          unaff_x24 = unaff_x23;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = unaff_x24;
          func_0x00010c08fa60();
          _objc_release(unaff_x24);
          if (puVar3 != (undefined *)0x0) {
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuVar1);
            _objc_release(unaff_x23);
          }
          puVar9 = puVar9 + 1;
        } while (puVar2 != puVar9);
        puVar6 = auStack_6c8;
        puVar2 = puVar7;
        puVar5 = &uStack_710;
        func_0x00010bf52a60();
        unaff_x22 = (undefined *)0x0;
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar7);
    puVar2 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_648) {
      ___stack_chk_fail();
      pcStack_718 = FUN_106df1868;
      puStack_750 = unaff_x24;
      puStack_748 = unaff_x23;
      puStack_740 = unaff_x22;
      puStack_738 = puVar7;
      ppuStack_730 = ppuVar1;
      puStack_728 = puVar4;
      pppuStack_720 = &ppuStack_5f0;
      _objc_retain(puVar5);
      _objc_retain(puVar6);
      puStack_758 = PTR_PTR_1126f6f30;
      ppuVar1 = &puStack_760;
      puStack_760 = puVar2;
      _objc_msgSendSuper2(ppuVar1,PTR_s_init_1125d9248);
      if (ppuVar1 != (undefined **)0x0) {
        _objc_retain(puVar5);
        puVar4 = ppuVar1[1];
        ppuVar1[1] = (undefined *)puVar5;
        _objc_release(puVar4);
        _objc_initWeak(auStack_768,ppuVar1);
        puVar4 = PTR_PTR_1126ae720;
        _objc_copyWeak(auStack_770,auStack_768);
        _objc_retain(puVar6);
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = ppuVar1[2];
        ppuVar1[2] = puVar4;
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_destroyWeak(auStack_770);
        _objc_destroyWeak(auStack_768);
      }
      _objc_release(puVar6);
      _objc_release(puVar5);
      return ppuVar1;
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return ppuVar1;
}



/* Entry: 106df1868; end: 106df19b3; -[SCSendToMemoriesThumbnailGenerator initWithCachingMediaManager:performerProvider:] */

undefined8 *
FUN_106df1868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f6f30;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106df19b4; end: 106df19fb;  */

void FUN_106df19b4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf12a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106df19fc; end: 106df1c63; -[SCSendToMemoriesThumbnailGenerator generateSendToContentForGalleryMedia:scaleFactor:thumbnailWidth:] */

void FUN_106df19fc(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  if ((float)param_1 <= 0.0) {
LAB_106df1c3c:
    puVar3 = (undefined *)0x0;
    goto LAB_106df1c40;
  }
  uVar1 = param_4;
  func_0x00010010fab4(param_4,PTR_DAT_1126a5228);
  uVar2 = param_4;
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  if (uVar2 == 0) {
    puVar3 = PTR_PTR_1126d29a8;
    _objc_opt_class(PTR_PTR_1126d29a8);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar3);
    if ((uVar2 & 1) != 0) goto LAB_106df1a80;
    puVar3 = PTR_PTR_1126c4650;
    _objc_opt_class(PTR_PTR_1126c4650);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar3);
    if ((uVar2 & 1) == 0) goto LAB_106df1c3c;
    _objc_retain(param_4);
    func_0x00010bfc0480(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010bf0af00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6c20();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d2ac0;
    _objc_alloc(PTR_PTR_1126d2ac0);
    uVar2 = param_4;
    func_0x00010bf0af00(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010bf8b160(uVar2);
    uVar1 = param_2;
LAB_106df1b6c:
    func_0x00010c051d80(puVar3);
    _objc_release(uVar2);
  }
  else {
    _objc_release(param_4);
LAB_106df1a80:
    puVar3 = PTR_DAT_1126a5228;
    _objc_retain(param_4);
    uVar1 = param_4;
    func_0x00010010fab4(param_4,puVar3);
    uVar2 = param_4;
    if ((int)uVar1 == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_4);
    uVar1 = param_4;
    if (uVar2 == 0) {
      uVar2 = param_4;
      func_0x00010bfbd940();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
    puVar3 = (undefined *)0x0;
    if ((0.0 < (float)param_1) && (uVar1 != 0)) {
      func_0x00010bfc0460(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010b5fa088();
      func_0x00010b5fa4c8();
      if ((uVar2 & 1) == 0) {
        func_0x00010b5fa088();
      }
      puVar3 = PTR_PTR_1126d2ac0;
      _objc_alloc(PTR_PTR_1126d2ac0);
      func_0x00010bf8b160(uVar1);
      uVar2 = param_2;
      goto LAB_106df1b6c;
    }
  }
  _objc_release(uVar1);
LAB_106df1c40:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106df1c64; end: 106df1e57; -[SCSendToMemoriesThumbnailGenerator generateThumbnailForGallerySnap:scaleFactor:] */

void FUN_106df1c64(float param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar8 = puVar1;
  if (param_1 <= 0.0) {
    _objc_opt_class(param_2);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar7,param_3,param_2,&PTR____CFConstantStringClassReference_110e86eb8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(puVar1,param_3,puVar7);
    _objc_release(puVar7);
    _objc_release(param_2);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c2a5040(param_4);
    uVar4 = param_4;
    func_0x00010bfe0640(param_4);
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106df1e58;
    puStack_68 = &UNK_1108e3fc8;
    _objc_retain(puVar1);
    puStack_60 = puVar1;
    lStack_58 = param_2;
    func_0x00010c134d00((double)((float)(int)uVar3 / param_1),(double)((float)(int)uVar4 / param_1),
                        uVar2,param_3,param_4,1,1,1,0,uVar6,0,&puStack_80);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_60);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106df1e58; end: 106df1ef3;  */

void FUN_106df1e58(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_completeWithValue__1125ae900,param_2);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_opt_class(uVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99260(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106df1ef4; end: 106df2133; -[SCSendToMemoriesThumbnailGenerator generateThumbnailForMemoriesAsset:scaleFactor:thumbnailWidth:] */

void FUN_106df1ef4(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4,int param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar8 = puVar1;
  if (param_1 <= 0.0) {
    _objc_opt_class(param_2);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar7,param_3,param_2,&PTR____CFConstantStringClassReference_110e86eb8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(puVar1,param_3,puVar7);
    _objc_release(puVar7);
    _objc_release(param_2);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_4;
    func_0x00010bf0af00(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0fce40();
    uVar4 = uVar2;
    func_0x00010c0fcaa0(uVar2);
    dVar9 = (double)(ulong)(uint)(float)uVar4;
    puVar7 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
    _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
    func_0x00010c1ec960();
    func_0x00010c18ba80(puVar7,param_3,1);
    func_0x00010c1cc000(puVar7,param_3,1);
    puVar5 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106df2134;
    puStack_88 = &UNK_11097d620;
    _objc_retain(puVar1);
    puStack_80 = puVar1;
    uStack_78 = param_2;
    func_0x00010c1357a0(dVar9 * (double)param_5,
                        dVar9 * (double)(((float)param_5 / (float)uVar3) * (float)uVar4),puVar5,
                        param_3,uVar2,0,puVar7,&puStack_a0);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_80);
    _objc_release(puVar7);
    _objc_release(uVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106df2134; end: 106df21cf;  */

void FUN_106df2134(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_completeWithValue__1125ae900,param_2);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_opt_class(uVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99260(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106df21d0; end: 106df222b; -[SCSendToMemoriesThumbnailGenerator _createPerformerWithPerformerProvider:] */

void FUN_106df21d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106df222c; end: 106df225b; -[SCSendToMemoriesThumbnailGenerator .cxx_destruct] */

void FUN_106df222c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106df225c; end: 106df2317; -[SCUserNavigationScopedMemoriesSendServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106df225c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d2ac8;
  _objc_alloc(PTR_PTR_1126d2ac8);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11275eb50;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0c9780(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0b7420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02acc0(puVar1,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106df2318; end: 106df234f; -[SCUserNavigationScopedMemoriesSendServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106df2318(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275eb50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275eb4c);
  return;
}



/* Entry: 106df2350; end: 106df23c3; -[SCUserNavigationScopedMemoriesSendServices initWithMemoriesSendServices:] */

undefined1 * FUN_106df2350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6f38;
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



/* Entry: 106df23c4; end: 106df23cb; -[SCUserNavigationScopedMemoriesSendServices memoriesSendServices] */

undefined8 FUN_106df23c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106df23cc; end: 106df23d7; -[SCUserNavigationScopedMemoriesSendServices .cxx_destruct] */

void FUN_106df23cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106df23d8; end: 106df244b; -[SCGrapheneMemoriesSendControllerMetric2 init] */

undefined1 * FUN_106df23d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6f40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106df244c; end: 106df24c3;  */

void FUN_106df244c(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_11097d650,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106df24c4; end: 106df259b; -[SCMemoriesMentionedUserInfo initWithUsername:userId:source:] */

undefined1 *
FUN_106df24c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f6f48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106df259c; end: 106df25bf; -[SCMemoriesMentionedUserInfo copyWithZone:] */

undefined8 FUN_106df259c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106df25c0; end: 106df263f; -[SCMemoriesMentionedUserInfo hash] */

undefined8 * FUN_106df25c0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106df26d8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106df26e4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106df26e4;
          }
          goto LAB_106df26d8;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106df26e4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106df2640; end: 106df26ff; -[SCMemoriesMentionedUserInfo isEqual:] */

long FUN_106df2640(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106df26d8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106df26e4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106df26e4;
          }
          goto LAB_106df26d8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106df26e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106df2700; end: 106df2707; -[SCMemoriesMentionedUserInfo username] */

undefined8 FUN_106df2700(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106df2708; end: 106df270f; -[SCMemoriesMentionedUserInfo userId] */

undefined8 FUN_106df2708(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106df2710; end: 106df2717; -[SCMemoriesMentionedUserInfo source] */

undefined8 FUN_106df2710(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106df2718; end: 106df2753; -[SCMemoriesMentionedUserInfo .cxx_destruct] */

void FUN_106df2718(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106df2754; end: 106df27bf; -[SCCContentPostSendUpsellContentPostSendUpsellPluginContentType__Enum init] */

void FUN_106df2754(void)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 **ppuStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000106df2a58();
  puStack_38 = PTR_PTR_113187350;
  puStack_30 = PTR_PTR_113187358;
  uStack_28 = extraout_x8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106df2a34();
  func_0x000106df2a6c();
  func_0x000106df2a44(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106df27c0;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x000106df2a58();
    puStack_88 = PTR_PTR_113187360;
    puStack_80 = PTR_PTR_113187368;
    puStack_78 = PTR_PTR_113187370;
    puStack_70 = PTR_PTR_113187378;
    uStack_68 = extraout_x8_00;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106df2a34();
    func_0x000106df2a6c();
    func_0x000106df2a44(uStack_68);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    pcStack_98 = FUN_106df2848;
    ppuStack_a0 = &puStack_50;
    func_0x000106df2a58();
    puStack_d0 = PTR_PTR_113187380;
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110e86f98;
    puStack_c0 = PTR_PTR_113187388;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b8 = extraout_x8_01;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106df2a34();
    func_0x000106df2a6c();
    func_0x000106df2a44(uStack_b8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      pcStack_d8 = FUN_106df28c0;
      puStack_e8 = PTR_PTR_1126f6f50;
      puStack_f0 = puVar1;
      ppuStack_e0 = &ppuStack_a0;
      func_0x000106df2a84(&puStack_f0,PTR_s_initWithFieldValues__1125e24b8);
      return;
    }
  }
  return;
}



/* Entry: 106df27c0; end: 106df2847; -[SCCContentPostSendUpsellContentPostSendUpsellPluginSource__Enum init] */

void FUN_106df27c0(void)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000106df2a58();
  puStack_48 = PTR_PTR_113187360;
  puStack_40 = PTR_PTR_113187368;
  puStack_38 = PTR_PTR_113187370;
  puStack_30 = PTR_PTR_113187378;
  uStack_28 = extraout_x8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106df2a34();
  func_0x000106df2a6c();
  func_0x000106df2a44(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_106df2848;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x000106df2a58();
  puStack_90 = PTR_PTR_113187380;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e86f98;
  puStack_80 = PTR_PTR_113187388;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = extraout_x8_00;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106df2a34();
  func_0x000106df2a6c();
  func_0x000106df2a44(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_106df28c0;
  puStack_a8 = PTR_PTR_1126f6f50;
  puStack_b0 = puVar1;
  ppuStack_a0 = &puStack_60;
  func_0x000106df2a84(&puStack_b0,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 106df2848; end: 106df28bf; -[SCCContentPostSendUpsellContentPostSendUpsellPluginType__Enum init] */

void FUN_106df2848(void)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined **ppuStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000106df2a58();
  puStack_40 = PTR_PTR_113187380;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e86f98;
  puStack_30 = PTR_PTR_113187388;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_28 = extraout_x8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106df2a34();
  func_0x000106df2a6c();
  func_0x000106df2a44(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_106df28c0;
  puStack_58 = PTR_PTR_1126f6f50;
  puStack_60 = puVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x000106df2a84(&puStack_60,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 106df28c0; end: 106df28f7; -[SCCContentPostSendUpsellContentPostSendUpsellPluginApplyParams initWithContext:] */

void FUN_106df28c0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f6f50;
  uStack_20 = param_1;
  func_0x000106df2a84(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 106df28f8; end: 106df290b; +[SCCContentPostSendUpsellContentPostSendUpsellPluginApplyParams valdiMarshallableObjectDescriptor] */

void FUN_106df28f8(undefined8 *param_1)

{
  *param_1 = &PTR_s_context_11097d6a0;
  param_1[1] = &PTR_DAT_11097d6e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106df290c; end: 106df29c3; -[SCCContentPostSendUpsellContentPostSendUpsellPluginContext initWithSource:contentType:snapId:onWorkflowComplete:] */

undefined8 *
FUN_106df290c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_48 = PTR_PTR_1126f6f58;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000106df2a84(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  return puVar1;
}



/* Entry: 106df29c4; end: 106df29d7; +[SCCContentPostSendUpsellContentPostSendUpsellPluginContext valdiMarshallableObjectDescriptor] */

void FUN_106df29c4(undefined8 *param_1)

{
  *param_1 = &PTR_s_source_11097d6f8;
  param_1[1] = &PTR_DAT_11097d788;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106df29d8; end: 106df2a0f; -[SCCContentPostSendUpsellStartContentPostSendUpsellWorkflowProps initWithUpsellPlugins:context:] */

void FUN_106df29d8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f6f60;
  uStack_20 = param_1;
  func_0x000106df2a84(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 106df2a10; end: 106df2a8b; +[SCCContentPostSendUpsellStartContentPostSendUpsellWorkflowProps valdiMarshallableObjectDescriptor] */

void FUN_106df2a10(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11097d7a0;
  param_1[1] = &PTR_DAT_11097d7e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106df2a8c; end: 106df2ebf; -[SCMemoriesExternalShareAdaptor initWithScope:memoriesSnapTranscoder:dataObjectContext:performerProvider:notificationPool:galleryExportLogger:standardExternalContentShareScopeExposer:spectaclesAppLogger:userTrackedLogger:grapheneRegistry:offPlatformLinkGenerationService:memoriesActivityItemProviderBuilder:memoriesTranscodingHelper:galleryLogger:circumstanceEngine:watermarkGenerator:] */

undefined8 *
FUN_106df2a8c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
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
  lVar1 = param_3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    _objc_release();
  }
  puStack_70 = PTR_PTR_1126f6f68;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar3 = puVar2[1];
    puVar2[1] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[3];
    puVar2[3] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[10];
    puVar2[10] = param_7;
    _objc_release(uVar3);
    lVar1 = param_3;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0xc];
    puVar2[0xc] = lVar1;
    _objc_release(uVar3);
    puVar2[0xb] = param_8;
    lVar1 = param_3;
    func_0x00010bf4e140();
    puVar2[0xf] = lVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0xd];
    puVar2[0xd] = lVar1;
    _objc_release(uVar3);
    uVar3 = puVar2[0x10];
    puVar2[0x10] = 0;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[2];
    puVar2[2] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[0x16];
    puVar2[0x16] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[0x14];
    puVar2[0x14] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[0x15];
    puVar2[0x15] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[0x17];
    puVar2[0x17] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar2[0x18];
    puVar2[0x18] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar2[0x19];
    puVar2[0x19] = param_15;
    _objc_release(uVar3);
    lVar1 = param_3;
    func_0x00010bf53c00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[8];
    puVar2[8] = lVar1;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar2[0x1a];
    puVar2[0x1a] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar2[0x1b];
    puVar2[0x1b] = param_17;
    _objc_release(uVar3);
    _objc_retain(param_18);
    uVar3 = puVar2[0x1c];
    puVar2[0x1c] = param_18;
    _objc_release(uVar3);
    _objc_initWeak(auStack_80,puVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_6);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[5];
    puVar2[5] = puVar4;
    _objc_release(uVar3);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
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
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 106df2ec0; end: 106df2f07;  */

void FUN_106df2ec0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf12a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106df2f08; end: 106df3117; -[SCMemoriesExternalShareAdaptor presentExternalShareSheetWithScope:] */

void FUN_106df2f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf6fca0();
  uVar5 = param_3;
  uVar6 = param_3;
  uVar7 = param_3;
  uVar9 = param_3;
  if ((int)uVar1 == 1) {
    func_0x00010bfbd940(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0c9e80(param_3);
    uVar2 = param_3;
    func_0x00010c0c7580(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3fd20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cfc40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c2917c0(param_3);
    func_0x00010bf43fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7b460(param_1,param_2,uVar5,uVar1,uVar2,uVar6,uVar7,uVar8,uVar9);
  }
  else {
    if ((int)uVar1 != 0) goto LAB_106df30f4;
    func_0x00010bfbd140(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0c9e80();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c2917c0(param_3);
    func_0x00010c0c7580(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3fd20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf53c00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0cfc40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf43fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7b440(param_1,param_2,uVar5,uVar1,uVar2,uVar8,uVar6,uVar7,uVar9,uVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
LAB_106df30f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106df3118; end: 106df35c3; -[SCMemoriesExternalShareAdaptor _presentExternalShareSheetWithGallerySnaps:currentMemoriesTab:memSessionId:collectionCategory:uiContainer:userContext:completion:] */

void FUN_106df3118(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_7;
  _objc_release(uVar1);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  *(undefined4 *)(param_1 + 0xe8) = 0xffffd8f1;
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_5;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x88) = param_4;
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_6;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x78) = param_8;
  uVar1 = param_9;
  _objc_retainBlock();
  uVar11 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  _objc_release(uVar11);
  _objc_initWeak(auStack_80,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  FUN_106df7d90(param_3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = auStack_80;
  _objc_loadWeakRetained();
  puVar4 = puVar3;
  func_0x00010be1bca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126ae720;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106df35c4;
  puStack_98 = &UNK_11085a9b8;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(lVar2);
  lStack_90 = lVar2;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar8;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106df360c;
  puStack_d0 = &UNK_11097d860;
  _objc_copyWeak(auStack_b8,auStack_80);
  _objc_retain(uVar11);
  uStack_c8 = uVar11;
  _objc_retain(uVar1);
  lVar6 = lVar2;
  uStack_c0 = uVar1;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf43280(lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2478;
  _objc_alloc();
  func_0x00010c021e80();
  uVar12 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar12);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar13);
  lVar9 = lVar2;
  func_0x00010b5f8c3c();
  _objc_retainAutoreleasedReturnValue();
  uStack_f0 = 4;
  if (lVar9 != 0) {
    uStack_f0 = 0x12;
  }
  _objc_retain(puVar5);
  _objc_retain(lVar2);
  _objc_retain(lVar9);
  _objc_retain(param_7);
  _objc_copyWeak(auStack_f8,auStack_80);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar4);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_f8);
  _objc_release(param_7);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(puVar5);
  _objc_release(lVar9);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_destroyWeak(auStack_b8);
  _objc_release(puVar5);
  _objc_release(lStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106df35c4; end: 106df360b;  */

void FUN_106df35c4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1bdc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106df360c; end: 106df3713;  */

void FUN_106df360c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b2470;
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010c2adce0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106df3714; end: 106df387f;  */

void FUN_106df3714(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  ppuVar2 = &puStack_80;
  _objc_retain(param_2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106df3880;
  puStack_68 = &UNK_11097d800;
  _objc_copyWeak(auStack_58,param_1 + 0x38);
  _objc_retain(param_2);
  uStack_60 = param_2;
  _objc_retainBlock(&puStack_80);
  puVar3 = PTR_PTR_1126af4c0;
  func_0x00010bfa9840();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf977c0();
  uVar1 = (int)puVar4 - 0x39;
  if (uVar1 < 0x16 && (1 << (ulong)(uVar1 & 0x1f) & 0x3dd3c1U) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfbeb40(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar5 = 0;
  }
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1bd00();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(uVar5);
  _objc_release(ppuVar2);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106df3880; end: 106df3913;  */

void FUN_106df3880(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_2);
  }
  else {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(lVar1 + 0x80);
      *(long *)(lVar1 + 0x80) = param_3;
      _objc_release(uVar2);
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3,0);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106df3914; end: 106df391b;  */

void FUN_106df3914(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 106df391c; end: 106df3b07;  */

void FUN_106df391c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae720;
  _objc_retain(param_2);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2490;
  _objc_alloc(PTR_PTR_1126b2490);
  func_0x000106df748c(*(undefined8 *)(param_1 + 0x30));
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  FUN_106df75f8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028f20(puVar2);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b24a0;
  _objc_alloc(PTR_PTR_1126b24a0);
  lVar5 = param_1 + 0x58;
  _objc_loadWeakRetained();
  func_0x00010c0574a0(puVar4);
  _objc_release(lVar5);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x50));
  lVar5 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar5);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010be52e80(lVar5);
  _objc_release(lVar5);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010be53f20();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 106df3b08; end: 106df3b2f;  */

void FUN_106df3b08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106df3b30; end: 106df3b3b; -[SCMemoriesExternalShareAdaptor _getLensIdWithGallerySnaps:] */

undefined ** FUN_106df3b30(long param_1,undefined8 param_2,undefined **param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined **unaff_x21;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long lVar18;
  bool bVar19;
  undefined **unaff_x23;
  undefined1 *puVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined **unaff_x24;
  ulong uVar23;
  undefined **unaff_x25;
  long lVar24;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined8 uStack_5e0;
  long lStack_5d8;
  long *plStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  long lStack_520;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined **ppuStack_4d8;
  undefined **ppuStack_4d0;
  undefined **ppuStack_4c8;
  undefined8 ***pppuStack_4c0;
  code *pcStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long lStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined1 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  undefined8 *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_2e0;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_288;
  undefined1 **ppuStack_280;
  undefined8 uStack_278;
  undefined **ppuStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_1a0;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = uVar10;
  _objc_retain();
  _objc_retain(uVar10);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  ppuVar16 = param_3;
  func_0x00010bf52a60();
  if (ppuVar16 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_120;
    unaff_x27 = &PTR_PTR_1126bc000;
    unaff_x21 = ppuVar16;
    do {
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x26) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x23 = (undefined **)PTR_PTR_1126bc7b8;
        unaff_x24 = *(undefined ***)(lStack_128 + (long)unaff_x28 * 8);
        uVar4 = uVar10;
        func_0x00010c269d40(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        unaff_x25 = unaff_x23;
        func_0x00010c0ef4a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = unaff_x25;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x25);
        ppuVar15 = ppuVar16;
        func_0x00010c08fa60();
        if (ppuVar15 == (undefined **)0x0) {
          func_0x00010b5f869c();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar16);
          ppuVar16 = unaff_x24;
        }
        ppuVar15 = ppuVar16;
        func_0x00010c08fa60();
        if (ppuVar15 != (undefined **)0x0) {
          _objc_release(unaff_x23);
          goto LAB_106df7234;
        }
        _objc_release(ppuVar16);
        _objc_release(unaff_x23);
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (unaff_x21 != unaff_x28);
      unaff_x21 = param_3;
      func_0x00010bf52a60();
    } while (unaff_x21 != (undefined **)0x0);
  }
  ppuVar16 = (undefined **)0x0;
LAB_106df7234:
  _objc_release(param_3);
  _objc_release(uVar10);
  ppuVar15 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uStack_138 = 0x106df728c;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = uVar11;
    ppuStack_190 = unaff_x28;
    ppuStack_188 = unaff_x27;
    ppuStack_180 = unaff_x26;
    ppuStack_178 = unaff_x25;
    ppuStack_170 = unaff_x24;
    ppuStack_168 = unaff_x23;
    ppuStack_160 = ppuVar16;
    ppuStack_158 = unaff_x21;
    uStack_150 = uVar10;
    ppuStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(uVar11);
    ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    ppuStack_268 = ppuVar14;
    _objc_retain(ppuVar15);
    ppuVar5 = ppuVar15;
    func_0x00010bf52a60();
    ppuVar14 = ppuVar15;
    ppuVar17 = ppuVar16;
    if (ppuVar5 != (undefined **)0x0) {
      unaff_x27 = (undefined **)*plStack_250;
      unaff_x28 = &PTR_PTR_1126bc000;
      do {
        ppuVar14 = (undefined **)0x0;
        do {
          if ((undefined **)*plStack_250 != unaff_x27) {
            _objc_enumerationMutation(ppuVar15);
          }
          unaff_x23 = (undefined **)PTR_PTR_1126bc7b8;
          unaff_x24 = *(undefined ***)(lStack_258 + (long)ppuVar14 * 8);
          uVar10 = uVar11;
          func_0x00010c269d40(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7160();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar10);
          unaff_x26 = unaff_x23;
          func_0x00010c0ef4a0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x26;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x26);
          ppuVar16 = unaff_x25;
          func_0x00010c08fa60();
          if (ppuVar16 == (undefined **)0x0) {
            func_0x00010b5f869c();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x25);
            unaff_x25 = unaff_x24;
          }
          ppuVar16 = unaff_x25;
          func_0x00010c08fa60();
          if (ppuVar16 != (undefined **)0x0) {
            func_0x00010befa120(ppuStack_268);
          }
          _objc_release(unaff_x25);
          _objc_release(unaff_x23);
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
        } while (ppuVar5 != ppuVar14);
        ppuVar5 = ppuVar15;
        func_0x00010bf52a60();
        ppuVar17 = (undefined **)0x0;
      } while (ppuVar5 != (undefined **)0x0);
    }
    _objc_release(ppuVar15);
    _objc_release(uVar11);
    ppuVar5 = ppuVar15;
    _objc_release();
    ppuVar16 = ppuStack_268;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      uStack_278 = 0x106df748c;
      lStack_2e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_2d0 = unaff_x28;
      ppuStack_2c8 = unaff_x27;
      ppuStack_2c0 = unaff_x26;
      ppuStack_2b8 = unaff_x25;
      ppuStack_2b0 = unaff_x24;
      ppuStack_2a8 = unaff_x23;
      ppuStack_2a0 = ppuVar17;
      ppuStack_298 = ppuVar15;
      uStack_290 = uVar11;
      ppuStack_288 = ppuVar14;
      ppuStack_280 = &puStack_140;
      _objc_retain();
      lStack_398 = 0;
      uStack_3a0 = 0;
      uStack_388 = 0;
      puStack_390 = (undefined8 *)0x0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      _objc_retain(ppuVar5);
      ppuVar14 = ppuVar5;
      func_0x00010bf52a60();
      if (ppuVar14 == (undefined **)0x0) {
        ppuVar16 = (undefined **)0x0;
        ppuVar14 = ppuVar15;
      }
      else {
        unaff_x24 = (undefined **)0x0;
        unaff_x23 = (undefined **)0x0;
        unaff_x25 = (undefined **)*puStack_390;
        unaff_x26 = (undefined **)0x1;
        unaff_x27 = (undefined **)0x1566;
        do {
          unaff_x28 = (undefined **)0x0;
          do {
            if ((undefined **)*puStack_390 != unaff_x25) {
              _objc_enumerationMutation(ppuVar5);
            }
            ppuVar17 = *(undefined ***)(lStack_398 + (long)unaff_x28 * 8);
            ppuVar16 = ppuVar17;
            func_0x00010b5fa088();
            func_0x00010b5fa4c8();
            if (((ulong)ppuVar16 & 1) == 0) {
              ppuVar16 = ppuVar17;
              func_0x00010b5fa088();
              if (ppuVar16 < (undefined **)0xd && (1L << ((ulong)ppuVar16 & 0x3f) & 0x1566U) != 0) {
                unaff_x23 = (undefined **)0x1;
              }
            }
            else {
              unaff_x24 = (undefined **)0x1;
            }
            if (((int)unaff_x24 != 0) && (ppuVar16 = (undefined **)0x2, (int)unaff_x23 != 0))
            goto LAB_106df75a8;
            unaff_x28 = (undefined **)((long)unaff_x28 + 1);
          } while (ppuVar14 != unaff_x28);
          ppuVar14 = ppuVar5;
          func_0x00010bf52a60();
          ppuVar16 = unaff_x23;
        } while (ppuVar14 != (undefined **)0x0);
      }
LAB_106df75a8:
      _objc_release(ppuVar5);
      ppuVar15 = ppuVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e0) {
        return ppuVar16;
      }
      ___stack_chk_fail();
      pcStack_3a8 = FUN_106df75f8;
      lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_3e0 = unaff_x28;
      ppuStack_3d8 = unaff_x27;
      ppuStack_3d0 = ppuVar17;
      ppuStack_3c8 = ppuVar14;
      ppuStack_3c0 = ppuVar16;
      ppuStack_3b8 = ppuVar5;
      pppuStack_3b0 = &ppuStack_280;
      _objc_retain();
      lStack_4a8 = 0;
      uStack_4b0 = 0;
      uStack_498 = 0;
      puStack_4a0 = (undefined8 *)0x0;
      uStack_488 = 0;
      uStack_490 = 0;
      uStack_478 = 0;
      uStack_480 = 0;
      _objc_retain(ppuVar15);
      ppuVar5 = ppuVar15;
      func_0x00010bf52a60();
      ppuVar16 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar14 = (undefined **)*puStack_4a0;
        do {
          ppuVar17 = (undefined **)0x0;
          do {
            if ((undefined **)*puStack_4a0 != ppuVar14) {
              _objc_enumerationMutation(ppuVar15);
            }
            iVar3 = (int)*(undefined8 *)(lStack_4a8 + (long)ppuVar17 * 8);
            func_0x00010b5fa760();
            if (iVar3 != 0) {
              ppuVar16 = (undefined **)PTR_PTR_1126b2480;
              _objc_alloc();
              func_0x00010c03a960();
              goto LAB_106df76d0;
            }
            ppuVar17 = (undefined **)((long)ppuVar17 + 1);
          } while (ppuVar5 != ppuVar17);
          ppuVar5 = ppuVar15;
          func_0x00010bf52a60();
        } while (ppuVar5 != (undefined **)0x0);
        ppuVar16 = (undefined **)0x0;
      }
LAB_106df76d0:
      _objc_release(ppuVar15);
      ppuVar5 = ppuVar15;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3e8) {
        ___stack_chk_fail();
        puVar12 = &uStack_5e0;
        pcStack_4b8 = FUN_106df7718;
        lStack_520 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar11 = uVar4;
        ppuStack_510 = unaff_x28;
        ppuStack_508 = unaff_x27;
        ppuStack_500 = unaff_x26;
        ppuStack_4f8 = unaff_x25;
        ppuStack_4f0 = unaff_x24;
        ppuStack_4e8 = unaff_x23;
        ppuStack_4e0 = ppuVar17;
        ppuStack_4d8 = ppuVar14;
        ppuStack_4d0 = ppuVar16;
        ppuStack_4c8 = ppuVar15;
        pppuStack_4c0 = &pppuStack_3b0;
        _objc_retain();
        _objc_retain(uVar4);
        lStack_5d8 = 0;
        uStack_5e0 = 0;
        uStack_5c8 = 0;
        plStack_5d0 = (long *)0x0;
        uStack_5b8 = 0;
        uStack_5c0 = 0;
        uStack_5a8 = 0;
        uStack_5b0 = 0;
        _objc_retain(ppuVar5);
        ppuVar15 = ppuVar5;
        func_0x00010bf52a60();
        ppuVar16 = (undefined **)0x0;
        if (ppuVar15 != (undefined **)0x0) {
          lVar24 = *plStack_5d0;
          do {
            ppuVar16 = (undefined **)0x0;
            do {
              if (*plStack_5d0 != lVar24) {
                _objc_enumerationMutation(ppuVar5);
              }
              puVar20 = *(undefined1 **)(lStack_5d8 + (long)ppuVar16 * 8);
              puVar6 = PTR_PTR_1126af4c0;
              puVar12 = (undefined8 *)puVar20;
              func_0x00010bfaad20();
              _objc_retainAutoreleasedReturnValue();
              if ((puVar6 != (undefined *)0x0) &&
                 (puVar7 = puVar6, func_0x00010bf3d240(), ((ulong)puVar7 & 0xffe0) != 0)) {
LAB_106df7888:
                _objc_release(puVar6);
LAB_106df7890:
                ppuVar16 = (undefined **)0x1;
                goto LAB_106df7894;
              }
              puVar7 = PTR_PTR_1126af4c0;
              puVar12 = (undefined8 *)puVar20;
              func_0x00010bfa9840();
              _objc_retainAutoreleasedReturnValue();
              puVar21 = puVar7;
              func_0x00010bf977c0();
              uVar1 = (int)puVar21 - 0x39;
              if (uVar1 < 0x16 && (1 << (ulong)(uVar1 & 0x1f) & 0x3dd3c1U) != 0) {
                _objc_release(puVar7);
                goto LAB_106df7888;
              }
              func_0x00010c0c5b00();
              _objc_release(puVar7);
              _objc_release(puVar6);
              if ((int)puVar20 == 5) goto LAB_106df7890;
              ppuVar16 = (undefined **)((long)ppuVar16 + 1);
            } while (ppuVar15 != ppuVar16);
            ppuVar15 = ppuVar5;
            puVar12 = &uStack_5e0;
            func_0x00010bf52a60();
          } while (ppuVar15 != (undefined **)0x0);
          ppuVar16 = (undefined **)0x0;
        }
LAB_106df7894:
        _objc_release(ppuVar5);
        _objc_release(uVar4);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_520) {
          return ppuVar16;
        }
        ___stack_chk_fail();
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain();
        _objc_retain(uVar11);
        _objc_retain(puVar12);
        _objc_retain(ppuVar5);
        ppuVar16 = ppuVar5;
        func_0x00010bf52a60();
        lVar24 = lRam0000000000000000;
        iVar3 = 0;
        if (ppuVar16 != (undefined **)0x0) {
          iVar3 = 0;
          bVar2 = false;
          do {
            ppuVar15 = (undefined **)0x0;
            do {
              if (lRam0000000000000000 != lVar24) {
                _objc_enumerationMutation(ppuVar5);
              }
              uVar23 = *(ulong *)((long)ppuVar15 * 8);
              uVar8 = uVar23;
              func_0x00010bfbd100();
              puVar6 = PTR__OBJC_CLASS___PHAsset_1126bd898;
              uVar22 = uVar23;
              if (uVar8 == 2) {
                _objc_retain(uVar23);
                _objc_opt_class(puVar6);
                uVar8 = uVar23;
                _objc_opt_isKindOfClass(uVar23,puVar6);
                if ((uVar8 & 1) == 0) {
                  uVar22 = 0;
                }
                _objc_retain(uVar22);
                _objc_release(uVar23);
                uVar8 = uVar22;
                func_0x00010c0c6c20();
                if (uVar8 == 2) {
                  iVar3 = 1;
                }
                else {
                  uVar8 = uVar22;
                  func_0x00010c0c6c20();
                  bVar2 = (bool)(bVar2 | uVar8 == 1);
                }
LAB_106df7b60:
                _objc_release(uVar22);
              }
              else {
                uVar8 = uVar23;
                func_0x00010bfbd100();
                puVar6 = PTR_DAT_1126a4ec8;
                if (uVar8 == 1) {
                  _objc_retain(uVar23);
                  uVar8 = uVar23;
                  func_0x00010010fab4(uVar23,puVar6);
                  if ((int)uVar8 == 0) {
                    uVar22 = 0;
                  }
                  _objc_retain(uVar22);
                  _objc_release(uVar23);
                  puVar7 = PTR_PTR_1126af4d0;
                  func_0x00010bfa7380();
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = puVar7;
                  func_0x00010bf52a60();
                  lVar9 = lRam0000000000000000;
                  while (puVar6 != (undefined *)0x0) {
                    puVar21 = (undefined *)0x0;
                    do {
                      if (lRam0000000000000000 != lVar9) {
                        _objc_enumerationMutation(puVar7);
                      }
                      uVar23 = *(ulong *)((long)puVar21 * 8);
                      uVar8 = uVar23;
                      func_0x00010b5fa088();
                      func_0x00010b5fa4c8();
                      if ((uVar8 & 1) == 0) {
                        func_0x00010b5fa088();
                        if (uVar23 < 0xd && (1L << (uVar23 & 0x3f) & 0x1566U) != 0) {
                          iVar3 = 1;
                        }
                      }
                      else {
                        bVar2 = true;
                      }
                      puVar21 = puVar21 + 1;
                    } while (puVar6 != puVar21);
                    puVar6 = puVar7;
                    func_0x00010bf52a60();
                  }
                  _objc_release(puVar7);
                  goto LAB_106df7b60;
                }
              }
              if ((bVar2) && (iVar3 != 0)) {
                (**(code **)((long)puVar12 + 0x10))(puVar12,2,0);
                _objc_release(ppuVar5);
                goto LAB_106df7be0;
              }
              ppuVar15 = (undefined **)((long)ppuVar15 + 1);
            } while (ppuVar15 != ppuVar16);
            ppuVar16 = ppuVar5;
            func_0x00010bf52a60();
          } while (ppuVar16 != (undefined **)0x0);
        }
        _objc_release(ppuVar5);
        (**(code **)((long)puVar12 + 0x10))(puVar12,iVar3,0);
LAB_106df7be0:
        _objc_release(puVar12);
        _objc_release(uVar11);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
          return ppuVar5;
        }
        ___stack_chk_fail();
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain();
        _objc_retain(ppuVar5);
        ppuVar16 = ppuVar5;
        func_0x00010bf52a60();
        lVar24 = lRam0000000000000000;
        if (ppuVar16 == (undefined **)0x0) {
          ppuVar15 = (undefined **)0x0;
        }
        else {
          bVar2 = false;
          bVar19 = false;
          ppuVar15 = (undefined **)0x2;
          do {
            ppuVar14 = (undefined **)0x0;
            do {
              if (lRam0000000000000000 != lVar24) {
                _objc_enumerationMutation(ppuVar5);
              }
              lVar18 = *(long *)((long)ppuVar14 * 8);
              lVar9 = lVar18;
              func_0x00010c0c6c20();
              if (lVar9 == 2) {
                bVar19 = true;
                if (bVar2) {
LAB_106df7d08:
                  if (bVar19) goto LAB_106df7d40;
                }
              }
              else {
                func_0x00010c0c6c20();
                bVar2 = (bool)(bVar2 | lVar18 == 1);
                if (bVar2) goto LAB_106df7d08;
              }
              ppuVar14 = (undefined **)((long)ppuVar14 + 1);
            } while (ppuVar16 != ppuVar14);
            ppuVar16 = ppuVar5;
            func_0x00010bf52a60();
          } while (ppuVar16 != (undefined **)0x0);
          ppuVar15 = (undefined **)(ulong)bVar19;
        }
LAB_106df7d40:
        _objc_release(ppuVar5);
        _objc_release(ppuVar5);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
          return ppuVar15;
        }
        ___stack_chk_fail();
        func_0x00010c246ca0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar5;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return ppuVar16;
}



/* Entry: 106df3b3c; end: 106df4177; -[SCMemoriesExternalShareAdaptor _presentExternalShareSheetWithGalleryItems:currentMemoriesTab:dataObjectContext:userContext:memSessionId:collectionCategory:crFeaturedStory:uiContainer:completion:] */

void FUN_106df3b3c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_10;
  _objc_release(uVar3);
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  *(long *)(param_1 + 0x98) = param_3;
  _objc_release(uVar3);
  *(undefined4 *)(param_1 + 0xe8) = 0xffffd8f1;
  *(undefined8 *)(param_1 + 0x88) = param_4;
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_5;
  _objc_release(uVar3);
  *(undefined8 *)(param_1 + 0x78) = param_6;
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_7;
  _objc_release(uVar3);
  *(undefined8 *)(param_1 + 0x88) = param_4;
  _objc_retain(param_8);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_8;
  _objc_release(uVar3);
  uVar3 = param_11;
  _objc_retainBlock();
  uVar12 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  _objc_release(uVar12);
  _objc_initWeak(auStack_108,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain();
  lVar4 = param_3;
  FUN_106df7ea4(param_3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_106df4178;
  puStack_120 = &UNK_11097d8e0;
  _objc_copyWeak(auStack_110,auStack_108);
  _objc_retain(lVar4);
  lStack_118 = lVar4;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae720;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x106df41c0;
  puStack_150 = &UNK_11085a9b8;
  _objc_copyWeak(auStack_140,auStack_108);
  _objc_retain(lVar4);
  lStack_148 = lVar4;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_170,auStack_108);
  lVar7 = lVar4;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  iVar2 = (int)*(undefined8 *)(param_1 + 0xd8);
  func_0x000108ec1954();
  if (iVar2 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    lVar8 = lVar4;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar8);
    lVar10 = lVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar10 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar8);
        }
        uVar12 = *(undefined8 *)(lVar13 * 8);
        func_0x00010c09da80(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar9);
        _objc_release(uVar12);
        lVar13 = lVar13 + 1;
      } while (lVar10 != lVar13);
      lVar10 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    puVar14 = PTR_PTR_1126b2498;
    _objc_alloc();
    puVar11 = puVar9;
    func_0x00010bf51e00(puVar9);
    func_0x00010c037ea0();
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(lVar8);
  }
  lVar10 = lVar4;
  func_0x00010bf43280(lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2478;
  _objc_alloc();
  func_0x00010c021e80();
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar4);
  _objc_retain(param_5);
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  _objc_retain(puVar14);
  func_0x00010c0f7fc0(uVar12);
  _objc_release(uVar12);
  _objc_release(puVar14);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release(lVar4);
  _objc_release(puVar9);
  _objc_release(lVar10);
  _objc_release(puVar14);
  _objc_release(lVar7);
  _objc_destroyWeak(auStack_170);
  _objc_release(puVar6);
  _objc_release(lStack_148);
  _objc_destroyWeak(auStack_140);
  _objc_release(puVar5);
  _objc_release(lStack_118);
  _objc_destroyWeak(auStack_110);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_108);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  lVar4 = param_3;
  func_0x00010be1bc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106df4178; end: 106df4207;  */

void FUN_106df4178(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1bc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106df4208; end: 106df4483;  */

void FUN_106df4208(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 *unaff_x20;
  ulong uVar9;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_2;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bfbd100();
  puVar4 = PTR_PTR_1126b2470;
  if (lVar2 == 2) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106df4484;
    puStack_70 = &UNK_11097d910;
    unaff_x20 = auStack_58;
    lVar3 = param_1 + 0x30;
    _objc_copyWeak(unaff_x20);
    _objc_retain(param_2);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    lStack_68 = param_2;
    func_0x00010c2adce0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lStack_68);
    _objc_destroyWeak(unaff_x20);
  }
  else {
    lVar2 = param_2;
    func_0x00010bfbd100();
    puVar4 = PTR_DAT_1126a4ec8;
    if (lVar2 == 1) {
      _objc_retain(param_2);
      lVar3 = param_2;
      func_0x00010010fab4(param_2,puVar4);
      lVar2 = param_2;
      if ((int)lVar3 == 0) {
        lVar2 = 0;
      }
      _objc_retain(lVar2);
      _objc_release(param_2);
      lVar3 = lVar2;
      func_0x00010bfbdda0();
      *(int *)(*(long *)(param_1 + 0x28) + 0xe8) = (int)lVar3;
      puVar4 = PTR_PTR_1126af4d0;
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      unaff_x20 = auStack_90;
      lVar3 = param_1 + 0x30;
      _objc_copyWeak(unaff_x20);
      _objc_retain(lVar2);
      puVar5 = puVar4;
      func_0x00010bf43280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_destroyWeak(unaff_x20);
      _objc_release(puVar4);
      _objc_release(lVar2);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x20);
  __Unwind_Resume();
  ppuVar6 = &puStack_130;
  _objc_retain(lVar3);
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_106df45d4;
  puStack_118 = &UNK_11097d800;
  _objc_copyWeak(auStack_108,param_2 + 0x30);
  _objc_retain(lVar3);
  lStack_110 = lVar3;
  _objc_retainBlock(&puStack_130);
  uVar9 = *(ulong *)(param_2 + 0x20);
  _objc_retain(uVar9);
  puVar4 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  _objc_opt_class(PTR__OBJC_CLASS___PHAsset_1126bd898);
  uVar7 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar4);
  uVar1 = uVar9;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar9);
  uVar7 = uVar1;
  func_0x00010c0c6c20();
  if (uVar7 != 3) {
    func_0x00010c0c6c20(uVar1);
  }
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc00a0();
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_release(ppuVar6);
  _objc_release(lStack_110);
  _objc_destroyWeak(auStack_108);
  _objc_release(lVar3);
  return;
}



/* Entry: 106df4484; end: 106df45d3;  */

void FUN_106df4484(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  ppuVar2 = &puStack_70;
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106df45d4;
  puStack_58 = &UNK_11097d800;
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  _objc_retain(param_2);
  uStack_50 = param_2;
  _objc_retainBlock(&puStack_70);
  uVar6 = *(ulong *)(param_1 + 0x20);
  _objc_retain(uVar6);
  puVar3 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  _objc_opt_class(PTR__OBJC_CLASS___PHAsset_1126bd898);
  uVar4 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  uVar1 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  uVar4 = uVar1;
  func_0x00010c0c6c20();
  if (uVar4 != 3) {
    func_0x00010c0c6c20(uVar1);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc00a0();
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(ppuVar2);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 106df45d4; end: 106df4667;  */

void FUN_106df45d4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_2);
  }
  else {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(lVar1 + 0x80);
      *(long *)(lVar1 + 0x80) = param_3;
      _objc_release(uVar2);
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3,0);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106df4668; end: 106df475b;  */

void FUN_106df4668(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b2470;
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c2adce0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106df475c; end: 106df4873;  */

void FUN_106df475c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106df4874;
  puStack_58 = &UNK_11097d800;
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  _objc_retain(param_2);
  uStack_50 = param_2;
  _objc_retainBlock(&puStack_70);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010b5fa088();
  func_0x00010b5fa4c8();
  if ((uVar2 & 1) == 0) {
    func_0x00010b5fa088(*(undefined8 *)(param_1 + 0x20));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc00c0();
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 106df4874; end: 106df4907;  */

void FUN_106df4874(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_2);
  }
  else {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(lVar1 + 0x80);
      *(long *)(lVar1 + 0x80) = param_3;
      _objc_release(uVar2);
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3,0);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106df4908; end: 106df4963;  */

void FUN_106df4908(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  _objc_retain(param_2);
  _objc_opt_class(puVar2);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106df4964; end: 106df496b;  */

void FUN_106df4964(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbd0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_galleryItemIdentifier_1125ccde0);
  return;
}



/* Entry: 106df496c; end: 106df4b1b;  */

void FUN_106df496c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x106df4a40;
  puStack_68 = &UNK_11097d9b0;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar3;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = uVar4;
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar5;
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  func_0x000106df78ec(uVar1,uVar2,&puStack_80);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_60);
  return;
}



/* Entry: 106df4b1c; end: 106df4d23; -[SCMemoriesExternalShareAdaptor handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_106df4b1c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *in_stack_ffffffffffffff78;
  
  _objc_retain(param_4);
  if (param_3 == 1) {
    func_0x00010beb9c00(param_1);
  }
  lVar3 = *(long *)(param_1 + 0x98);
  func_0x00010bf529e0();
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  lVar9 = 0x30;
  if (lVar3 != 0) {
    lVar9 = 0x98;
  }
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf529e0();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined4 *)(param_1 + 0xe8);
  lVar9 = *(long *)(param_1 + 0x80);
  if (lVar9 == 0) {
    puVar10 = (undefined *)0x0;
    bVar2 = true;
  }
  else {
    lVar3 = lVar9;
    func_0x00010bf3ec40(lVar9);
    func_0x00010c0df780(puVar8,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    in_stack_ffffffffffffff78 = puVar8;
    func_0x00010c14de00(puVar10,param_2,&PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    bVar2 = *(long *)(param_1 + 0x80) == 0;
  }
  lVar3 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (bVar2) {
    puVar8 = (undefined *)0x0;
  }
  else {
    _objc_retain(lVar3);
    lVar5 = param_3;
    func_0x000108f94918();
    _objc_retainAutoreleasedReturnValue();
    in_stack_ffffffffffffff78 = &UNK_10f3d91dc;
    func_0x00010c14de00(puVar8,param_2,&PTR____CFConstantStringClassReference_110dbab58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar5);
  }
  func_0x00010bdfccc0(param_1,param_2,uVar7,uVar6,uVar4,uVar1,param_3 != 0 && lVar9 == 0,puVar10,
                      puVar8,CONCAT71(CONCAT61((int6)((ulong)in_stack_ffffffffffffff78 >> 0x10),
                                               param_3 == 1),param_3 == 0));
  _objc_release(puVar8);
  _objc_release(lVar3);
  _objc_release(puVar10);
  _objc_release(param_4);
  return 0;
}



/* Entry: 106df4d24; end: 106df4da3; -[SCMemoriesExternalShareAdaptor _didCompleteExportWithSessionId:contextActionSource:numberOfSnaps:galleryEntryType:success:errorType:errorSource:cancelled:saveToCameraRoll:] */

void FUN_106df4d24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  
  func_0x00010bf73d60(*(undefined8 *)(param_1 + 0x58),param_2,param_3,
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x88),param_4,
                      param_5,param_7,param_8,param_9,param_10,param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106df4da4; end: 106df4deb; -[SCMemoriesExternalShareAdaptor shareSheetDismissedWithShareDestination:] */

void FUN_106df4da4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010be03600();
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106df4ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3 != 0,param_3 == 0);
    return;
  }
  return;
}



/* Entry: 106df4dec; end: 106df4ea3; -[SCMemoriesExternalShareAdaptor _showLowDiskErrorAlertIfNeeded] */

void FUN_106df4dec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106df4ea4;
  puStack_48 = &UNK_110849200;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x000107e003a4(uVar2,uVar1,&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106df4ea4; end: 106df4f37;  */

void FUN_106df4ea4(long param_1,ulong param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  if ((param_2 & 1) == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106df4f38;
    puStack_30 = &UNK_1108434b0;
    _objc_copyWeak(auStack_28,param_1 + 0x20);
    func_0x0001000d76cc("APPSTORE",&puStack_48);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 106df4f38; end: 106df4f63;  */

void FUN_106df4f38(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be55920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106df4f64; end: 106df4f73; -[SCMemoriesExternalShareAdaptor _logLowDiskSpaceError] */

void FUN_106df4f64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a5dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_logExportLowDiskSpaceErrorWithGr_112607180,
             *(undefined8 *)(param_1 + 0xa8));
  return;
}



/* Entry: 106df4f74; end: 106df4f93; -[SCMemoriesExternalShareAdaptor _dismissShareSheet] */

void FUN_106df4f74(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106df4f94; end: 106df4faf; -[SCMemoriesExternalShareAdaptor _logExportStartWithSnapCount:] */

void FUN_106df4f94(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0bb570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_markExportStart_exportSessionId__11260c770,
             *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x68),param_3,
             *(undefined8 *)(param_1 + 0xa8));
  return;
}



/* Entry: 106df4fb0; end: 106df5127; -[SCMemoriesExternalShareAdaptor _generateShareableMediaWithGallerySnaps:] */

void FUN_106df4fb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106df5128;
  puStack_78 = &UNK_11084fd28;
  _objc_copyWeak(auStack_70,auStack_68);
  ppuVar2 = &puStack_90;
  _objc_retainBlock(ppuVar2);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x106df5180;
  puStack_a0 = &UNK_110850658;
  _objc_copyWeak(auStack_98,auStack_68);
  ppuVar3 = &puStack_b8;
  _objc_retainBlock(ppuVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfc0100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_98);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106df5128; end: 106df51b7;  */

void FUN_106df5128(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106df51b8; end: 106df52e7; -[SCMemoriesExternalShareAdaptor _generateShareableAsyncMediaWithGallerySnap:watermarkProfile:completionHandler:] */

void FUN_106df51b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106df52e8;
  puStack_58 = &UNK_110850658;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc00c0();
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106df52e8; end: 106df531f;  */

void FUN_106df52e8(long param_1,undefined4 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(int *)(param_1 + 0xe8) != 8)) {
    *(undefined4 *)(param_1 + 0xe8) = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106df5320; end: 106df5beb; -[SCMemoriesExternalShareAdaptor _generateShareableMediaWithGalleryItems:] */

void FUN_106df5320(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined1 auStack_528 [8];
  undefined *puStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  long lStack_4f0;
  undefined8 *puStack_4e8;
  long lStack_4e0;
  undefined *puStack_4d8;
  undefined8 uStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  long lStack_498;
  undefined *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined1 auStack_468 [8];
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 auStack_418 [8];
  undefined *puStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined *puStack_3f8;
  long lStack_3f0;
  undefined1 auStack_3e8 [8];
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined *puStack_3c8;
  long lStack_3c0;
  undefined8 *puStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  code *pcStack_3a0;
  undefined *puStack_398;
  long lStack_390;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined1 auStack_338 [8];
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
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
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_2a8 = &uStack_2b0;
  uStack_2b0 = 0;
  uStack_2a0 = 0x3032000000;
  pcStack_298 = FUN_106df5bec;
  uStack_290 = 0x106df5bfc;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  puStack_288 = puVar1;
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar10 = *plStack_2e0;
    do {
      lVar15 = 0;
      do {
        if (*plStack_2e0 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        uVar12 = *(ulong *)(lStack_2e8 + lVar15 * 8);
        uVar2 = uVar12;
        func_0x00010bfbd100();
        uVar11 = uVar12;
        if (uVar2 == 2) {
          _objc_retain(uVar12);
          puVar1 = PTR__OBJC_CLASS___PHAsset_1126bd898;
          _objc_opt_class(PTR__OBJC_CLASS___PHAsset_1126bd898);
          uVar2 = uVar12;
          _objc_opt_isKindOfClass(uVar12,puVar1);
          if ((uVar2 & 1) == 0) {
            uVar11 = 0;
          }
          _objc_retain(uVar11);
          _objc_release(uVar12);
          uVar2 = uVar11;
          func_0x00010c0c6c20();
          if (uVar2 != 3) {
            func_0x00010c0c6c20(uVar11);
          }
LAB_106df5584:
          _objc_release(uVar11);
        }
        else {
          uVar2 = uVar12;
          func_0x00010bfbd100();
          if (uVar2 == 1) {
            _objc_retain(uVar12);
            uVar2 = uVar12;
            func_0x00010010fab4(uVar12,PTR_DAT_1126a4ec8);
            if ((int)uVar2 == 0) {
              uVar11 = 0;
            }
            _objc_retain(uVar11);
            _objc_release(uVar12);
            puVar1 = PTR_PTR_1126af4d0;
            func_0x00010bfa7380();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf529e0();
            uStack_308 = 0;
            uStack_310 = 0;
            uStack_2f8 = 0;
            uStack_300 = 0;
            lStack_328 = 0;
            uStack_330 = 0;
            uStack_318 = 0;
            plStack_320 = (long *)0x0;
            _objc_retain(puVar1);
            puVar3 = puVar1;
            func_0x00010bf52a60();
            if (puVar3 != (undefined *)0x0) {
              lVar16 = *plStack_320;
              do {
                puVar17 = (undefined *)0x0;
                do {
                  if (*plStack_320 != lVar16) {
                    _objc_enumerationMutation(puVar1);
                  }
                  uVar12 = *(ulong *)(lStack_328 + (long)puVar17 * 8);
                  uVar2 = uVar12;
                  func_0x00010b5fa088();
                  func_0x00010b5fa4c8();
                  if ((uVar2 & 1) == 0) {
                    func_0x00010b5fa088(uVar12);
                  }
                  puVar17 = puVar17 + 1;
                } while (puVar3 != puVar17);
                puVar3 = puVar1;
                func_0x00010bf52a60();
              } while (puVar3 != (undefined *)0x0);
            }
            _objc_release(puVar1);
            _objc_release(puVar1);
            goto LAB_106df5584;
          }
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 != lVar8);
      lVar8 = param_3;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(param_3);
  _objc_initWeak(auStack_338,param_1);
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  lStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  plStack_370 = (long *)0x0;
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00010bf52a60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar8 != 0) {
    lVar10 = *plStack_370;
    do {
      lVar15 = 0;
      do {
        if (*plStack_370 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        lVar14 = *(long *)(lStack_378 + lVar15 * 8);
        lVar4 = 0;
        _dispatch_semaphore_create();
        lVar16 = lVar14;
        func_0x00010bfbd100();
        if (lVar16 == 2) {
          uVar5 = *(undefined8 *)(param_1 + 8);
          func_0x00010c269d40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          puStack_3b0 = puVar1;
          uStack_3a8 = 0xc2000000;
          pcStack_3a0 = FUN_106df5c04;
          puStack_398 = &UNK_11088cc20;
          puStack_388 = &uStack_2b0;
          _objc_retain(lVar4);
          puStack_3e0 = puVar1;
          uStack_3d8 = 0xc2000000;
          uStack_3d0 = 0x106df5c70;
          puStack_3c8 = &UNK_11097d9e0;
          puStack_3b8 = &uStack_2b0;
          lStack_390 = lVar4;
          _objc_retain(lVar4);
          puStack_410 = puVar1;
          uStack_408 = 0xc2000000;
          uStack_400 = 0x106df5cdc;
          puStack_3f8 = &UNK_11085aad8;
          lStack_3c0 = lVar4;
          _objc_copyWeak(auStack_3e8,auStack_338);
          _objc_retain(lVar4);
          lStack_3f0 = lVar4;
          func_0x00010c279b20(uVar5);
          _objc_release(uVar5);
          _objc_release(lStack_3f0);
          _objc_destroyWeak(auStack_3e8);
          _objc_release(lStack_3c0);
          lVar16 = lStack_390;
LAB_106df5a54:
          _objc_release(lVar16);
        }
        else {
          lVar16 = lVar14;
          func_0x00010bfbd100();
          if (lVar16 == 1) {
            _objc_retain(lVar14);
            lVar9 = lVar14;
            func_0x00010010fab4(lVar14,PTR_DAT_1126a4ec8);
            lVar16 = lVar14;
            if ((int)lVar9 == 0) {
              lVar16 = 0;
            }
            _objc_retain();
            _objc_release(lVar14);
            lVar14 = lVar16;
            func_0x00010bfbdda0();
            *(int *)(param_1 + 0xe8) = (int)lVar14;
            puVar3 = PTR_PTR_1126af4d0;
            func_0x00010bfa7380();
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar3;
            func_0x00010b5fb44c();
            _objc_retainAutoreleasedReturnValue();
            _objc_initWeak(auStack_418,param_1);
            uStack_438 = 0;
            uStack_440 = 0;
            uStack_428 = 0;
            uStack_430 = 0;
            lStack_458 = 0;
            uStack_460 = 0;
            uStack_448 = 0;
            plStack_450 = (long *)0x0;
            _objc_retain(puVar3);
            puVar6 = puVar3;
            func_0x00010bf52a60();
            if (puVar6 != (undefined *)0x0) {
              lVar14 = 0;
              lVar9 = *plStack_450;
              do {
                puVar13 = (undefined *)0x0;
                do {
                  if (*plStack_450 != lVar9) {
                    _objc_enumerationMutation(puVar3);
                  }
                  puVar7 = PTR_PTR_1126ae720;
                  uVar5 = *(undefined8 *)(lStack_458 + (long)puVar13 * 8);
                  puStack_490 = puVar1;
                  uStack_488 = 0xc2000000;
                  uStack_480 = 0x106df5d44;
                  puStack_478 = &UNK_11097da10;
                  _objc_copyWeak(auStack_468,auStack_418);
                  uStack_470 = uVar5;
                  func_0x00010bf11fe0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = *(undefined8 *)(param_1 + 8);
                  func_0x00010c269d40(uVar5);
                  _objc_retainAutoreleasedReturnValue();
                  puStack_4d8 = puVar1;
                  uStack_4d0 = 0xc2000000;
                  pcStack_4c8 = FUN_106df5e08;
                  puStack_4c0 = &UNK_11097da40;
                  puStack_4a0 = &uStack_2b0;
                  _objc_retain(puVar17);
                  puStack_4b8 = puVar17;
                  lStack_498 = lVar14;
                  _objc_retain(puVar7);
                  puStack_4b0 = puVar7;
                  _objc_retain(lVar4);
                  puStack_520 = puVar1;
                  uStack_518 = 0xc2000000;
                  uStack_510 = 0x106df5eb8;
                  puStack_508 = &UNK_11097da70;
                  puStack_4e8 = &uStack_2b0;
                  lStack_4a8 = lVar4;
                  _objc_retain(puVar17);
                  puStack_500 = puVar17;
                  lStack_4e0 = lVar14;
                  _objc_retain(puVar7);
                  puStack_4f8 = puVar7;
                  _objc_retain(lVar4);
                  lStack_4f0 = lVar4;
                  _objc_copyWeak(auStack_528,auStack_418);
                  _objc_retain(lVar4);
                  func_0x00010c279b60(uVar5);
                  _objc_release(uVar5);
                  _objc_release(lVar4);
                  _objc_destroyWeak(auStack_528);
                  _objc_release(lStack_4f0);
                  _objc_release(puStack_4f8);
                  _objc_release(puStack_500);
                  _objc_release(lStack_4a8);
                  _objc_release(puStack_4b0);
                  _objc_release(puStack_4b8);
                  _objc_release(puVar7);
                  _objc_destroyWeak(auStack_468);
                  lVar14 = lVar14 + 1;
                  puVar13 = puVar13 + 1;
                } while (puVar6 != puVar13);
                puVar6 = puVar3;
                func_0x00010bf52a60();
              } while (puVar6 != (undefined *)0x0);
            }
            _objc_release(puVar3);
            _objc_destroyWeak(auStack_418);
            _objc_release(puVar17);
            _objc_release(puVar3);
            goto LAB_106df5a54;
          }
        }
        _dispatch_semaphore_wait(lVar4,0xffffffffffffffff);
        _objc_release(lVar4);
        lVar15 = lVar15 + 1;
      } while (lVar15 != lVar8);
      lVar8 = param_3;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(param_3);
  uVar5 = puStack_2a8[5];
  _objc_retain(uVar5);
  _objc_destroyWeak(auStack_338);
  __Block_object_dispose(&uStack_2b0,8);
  _objc_release(puStack_288);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_338);
  lVar8 = 8;
  __Block_object_dispose(&uStack_2b0);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = 0;
  return;
}



/* Entry: 106df5bec; end: 106df5c03;  */

void FUN_106df5bec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106df5c04; end: 106df5e07;  */

void FUN_106df5c04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  puVar1 = PTR_PTR_1126b1c68;
  func_0x00010bfe94e0(PTR_PTR_1126b1c68,param_2,param_2,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106df5e08; end: 106df5f67;  */

void FUN_106df5e08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b1c68;
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0dfd40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe94e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010befa120(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106df5f68; end: 106df5f6b;  */

void FUN_106df5f68(void)

{
  return;
}



/* Entry: 106df5f6c; end: 106df5fd3;  */

void FUN_106df5f6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)(lVar1 + 0x80) = param_2;
    _objc_release(uVar2);
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106df5fd4; end: 106df60df; -[SCMemoriesExternalShareAdaptor _generateShareTextConfigurationWithGallerySnaps:] */

void FUN_106df5fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106df60e0;
  puStack_70 = &UNK_1108475b0;
  lStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = uVar3;
  puStack_50 = puVar1;
  uStack_48 = uVar4;
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar4,param_2,&puStack_88);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_50);
  _objc_release(uStack_60);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106df60e0; end: 106df6187;  */

void FUN_106df60e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be17cc0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106df6188;
  puStack_40 = &UNK_11097dac0;
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x38));
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x00010c297260(uVar1,param_2,&puStack_58,*(undefined8 *)(param_1 + 0x40));
  _objc_release(uVar1);
  _objc_release(uStack_28);
  return;
}



/* Entry: 106df6188; end: 106df63a7;  */

void FUN_106df6188(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010c097b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar2 = param_2;
      func_0x00010c097b80(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2;
      func_0x00010c097b80();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar1;
      func_0x00010842d1cc();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106df6264;
    }
  }
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bdc6d80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + 0x28);
  lVar1 = lVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010842d260(lVar8,lVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_106df6264:
  _objc_release(lVar1);
  if (lVar8 == 0) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    puVar3 = PTR_PTR_1126b24a8;
    _objc_alloc(PTR_PTR_1126b24a8);
    lVar1 = param_2;
    func_0x00010c0922e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c024300(puVar3);
    _objc_release(lVar4);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126b24b0;
    _objc_alloc(PTR_PTR_1126b24b0);
    lVar1 = param_2;
    func_0x00010c0922e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c027880(puVar5);
    _objc_release(lVar1);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    puVar6 = PTR_PTR_1126b0800;
    _objc_alloc(PTR_PTR_1126b0800);
    func_0x00010c051840();
    func_0x00010bf43d60(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106df63a8; end: 106df644f; -[SCMemoriesExternalShareAdaptor _generateShareTextConfigurationWithGalleryItems:] */

void FUN_106df63a8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010bdc6d80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  lVar2 = lVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010842d260(uVar4,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  func_0x00010c051840();
  _objc_release(uVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106df6450; end: 106df64a3; -[SCMemoriesExternalShareAdaptor _firstLensLinkFromGallerySnaps:] */

void FUN_106df6450(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_106df70a4(param_3,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_106df7030();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106df64a4; end: 106df64f3; -[SCMemoriesExternalShareAdaptor _addFriendLink] */

void FUN_106df64a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbf720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106df64f4; end: 106df654f; -[SCMemoriesExternalShareAdaptor _createPerformerWithPerformerProvider:] */

void FUN_106df64f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106df6550; end: 106df6733; -[SCMemoriesExternalShareAdaptor _logGallerySnapShareWithSnaps:shareChannel:] */

void FUN_106df6550(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = *(long *)(param_1 + 0xc0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010bef18c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar2);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(lVar7);
    puVar6 = &uStack_130;
    lVar2 = lVar7;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar10 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(lVar7);
          }
          puVar4 = PTR_PTR_1126b2460;
          uVar3 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9d0a0(puVar4);
          _objc_release(uVar3);
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        puVar6 = &uStack_130;
        lVar2 = lVar7;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar7);
    _objc_release(lVar7);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  if ((puVar6 != (undefined8 *)0x0) &&
     (puVar1 = puVar6, func_0x00010bf529e0(), puVar1 != (undefined8 *)0x0)) {
    puVar1 = puVar6;
    func_0x00010bf529e0();
    puVar4 = (undefined *)param_3[0x18];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined8 *)0x1) {
      puVar1 = puVar6;
      func_0x00010bfb1920(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      func_0x00010bef1780();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar4);
      if (puVar9 == (undefined *)0x0) goto LAB_106df6914;
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar9;
    }
    else {
      puVar9 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
      func_0x00010c0ecd40(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bef18c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
    }
    _objc_release(puVar4);
    _objc_retain(puVar5);
    puVar4 = puVar5;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar5);
        }
        func_0x00010bf9d0a0(PTR_PTR_1126b2460);
        puVar9 = puVar9 + 1;
      } while (puVar4 != puVar9);
      puVar4 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    _objc_release(puVar5);
  }
LAB_106df6914:
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar6 + 0x1c,0);
  _objc_storeStrong(puVar6 + 0x1b,0);
  _objc_storeStrong(puVar6 + 0x1a,0);
  _objc_storeStrong(puVar6 + 0x19,0);
  _objc_storeStrong(puVar6 + 0x18,0);
  _objc_storeStrong(puVar6 + 0x17,0);
  _objc_storeStrong(puVar6 + 0x16,0);
  _objc_storeStrong(puVar6 + 0x15,0);
  _objc_storeStrong(puVar6 + 0x14,0);
  _objc_storeStrong(puVar6 + 0x13,0);
  _objc_storeStrong(puVar6 + 0x12,0);
  _objc_storeStrong(puVar6 + 0x10,0);
  _objc_storeStrong(puVar6 + 0xe,0);
  _objc_storeStrong(puVar6 + 0xd,0);
  _objc_storeStrong(puVar6 + 0xc,0);
  _objc_storeStrong(puVar6 + 10,0);
  _objc_storeStrong(puVar6 + 9,0);
  _objc_storeStrong(puVar6 + 8,0);
  _objc_storeStrong(puVar6 + 7,0);
  _objc_storeStrong(puVar6 + 6,0);
  _objc_storeStrong(puVar6 + 5,0);
  _objc_storeStrong(puVar6 + 4,0);
  _objc_storeStrong(puVar6 + 3,0);
  _objc_storeStrong(puVar6 + 2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar6 + 1,0);
  return;
}



/* Entry: 106df6734; end: 106df6953; -[SCMemoriesExternalShareAdaptor _logGallerySnapShareWithItems:] */

void FUN_106df6734(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar1 = param_3, func_0x00010bf529e0(), lVar1 != 0)) {
    lVar1 = param_3;
    func_0x00010bf529e0();
    puVar2 = *(undefined **)(param_1 + 0xc0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 1) {
      lVar1 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010bef1780();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(puVar2);
      if (puVar5 == (undefined *)0x0) goto LAB_106df6914;
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
      func_0x00010c0ecd40(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bef18c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    _objc_release(puVar2);
    _objc_retain(puVar3);
    puVar2 = puVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010bf9d0a0(PTR_PTR_1126b2460);
        puVar5 = puVar5 + 1;
      } while (puVar2 != puVar5);
      puVar2 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    _objc_release(puVar3);
  }
LAB_106df6914:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0xe0,0);
  _objc_storeStrong(param_3 + 0xd8,0);
  _objc_storeStrong(param_3 + 0xd0,0);
  _objc_storeStrong(param_3 + 200,0);
  _objc_storeStrong(param_3 + 0xc0,0);
  _objc_storeStrong(param_3 + 0xb8,0);
  _objc_storeStrong(param_3 + 0xb0,0);
  _objc_storeStrong(param_3 + 0xa8,0);
  _objc_storeStrong(param_3 + 0xa0,0);
  _objc_storeStrong(param_3 + 0x98,0);
  _objc_storeStrong(param_3 + 0x90,0);
  _objc_storeStrong(param_3 + 0x80,0);
  _objc_storeStrong(param_3 + 0x70,0);
  _objc_storeStrong(param_3 + 0x68,0);
  _objc_storeStrong(param_3 + 0x60,0);
  _objc_storeStrong(param_3 + 0x50,0);
  _objc_storeStrong(param_3 + 0x48,0);
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106df6954; end: 106df6a97; -[SCMemoriesExternalShareAdaptor .cxx_destruct] */

void FUN_106df6954(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 106df6a98; end: 106df6f13; -[SCMemoriesExternalShareAdaptorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106df6a98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  undefined8 uStack_f8;
  undefined8 uStack_90;
  
  puVar1 = PTR_PTR_1126d2ad0;
  _objc_alloc();
  if (param_1 == 0) {
    uStack_90 = 0;
    lVar17 = 0;
  }
  else {
    uStack_90 = param_1 + _DAT_11275ebe0;
    _objc_loadWeakRetained();
    lVar17 = param_1 + _DAT_11275ec04;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar17;
  func_0x00010c0c9c00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11275ebe4;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar18;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11275ebe8;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar19;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11275ebec;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar20;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2460;
  _objc_opt_class();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_f8 = 0;
    lVar21 = 0;
  }
  else {
    uStack_f8 = *(undefined8 *)(param_1 + _DAT_11275ec18);
    _objc_retain();
    lVar21 = param_1 + _DAT_11275ebf0;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar21;
  func_0x00010bf027a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_11275ebf4;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar22;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_11275ebf8;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar23;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_11275ebfc;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar24;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_11275ec00;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar25;
  func_0x00010c0c7ce0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_11275ec08;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar26;
  func_0x00010c0c9f60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_11275ec0c;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar27;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf39940();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_11275ec10;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar30;
  func_0x00010c2a29c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041de0(puVar1,param_2,uStack_90,lVar2,lVar3,lVar4,lVar5,puVar6,uStack_f8,lVar7,lVar8,
                      lVar9,lVar10,lVar11,lVar12,lVar13,lVar15,lVar16);
  lVar29 = (long)_DAT_11275ebdc;
  uVar28 = *(undefined8 *)(param_1 + lVar29);
  *(undefined **)(param_1 + lVar29) = puVar1;
  _objc_release(uVar28);
  _objc_release(uStack_f8);
  _objc_release(lVar16);
  _objc_release(lVar30);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar27);
  _objc_release(lVar12);
  _objc_release(lVar26);
  _objc_release(lVar11);
  _objc_release(lVar25);
  _objc_release(lVar10);
  _objc_release(lVar24);
  _objc_release(lVar9);
  _objc_release(lVar23);
  _objc_release(lVar8);
  _objc_release(lVar22);
  _objc_release(lVar7);
  _objc_release(lVar21);
  _objc_release(lVar5);
  _objc_release(lVar20);
  _objc_release(lVar4);
  _objc_release(lVar19);
  _objc_release(lVar3);
  _objc_release(lVar18);
  _objc_release(lVar2);
  _objc_release(lVar17);
  _objc_release(uStack_90);
  uVar28 = *(undefined8 *)(param_1 + lVar29);
  param_1 = param_1 + _DAT_11275ebe0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10c020(uVar28,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106df6f14; end: 106df6f33; -[SCMemoriesExternalShareAdaptorEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106df6f14(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275ec14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106df6f34; end: 106df6f47; -[SCMemoriesExternalShareAdaptorEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106df6f34(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275ec14,param_3);
  return;
}


