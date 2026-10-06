/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106df6f48; end: 106df702f; -[SCMemoriesExternalShareAdaptorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106df6f48(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275ec18,0);
  _objc_destroyWeak(param_1 + _DAT_11275ec14);
  _objc_destroyWeak(param_1 + _DAT_11275ec10);
  _objc_destroyWeak(param_1 + _DAT_11275ec0c);
  _objc_destroyWeak(param_1 + _DAT_11275ec08);
  _objc_destroyWeak(param_1 + _DAT_11275ec04);
  _objc_destroyWeak(param_1 + _DAT_11275ec00);
  _objc_destroyWeak(param_1 + _DAT_11275ebfc);
  _objc_destroyWeak(param_1 + _DAT_11275ebf8);
  _objc_destroyWeak(param_1 + _DAT_11275ebf4);
  _objc_destroyWeak(param_1 + _DAT_11275ebf0);
  _objc_destroyWeak(param_1 + _DAT_11275ebec);
  _objc_destroyWeak(param_1 + _DAT_11275ebe8);
  _objc_destroyWeak(param_1 + _DAT_11275ebe4);
  _objc_destroyWeak(param_1 + _DAT_11275ebe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275ebdc,0);
  return;
}



/* Entry: 106df7030; end: 106df70a3;  */

void FUN_106df7030(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain();
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010bfbf7c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106df70a4; end: 106df75f7;  */

undefined ** FUN_106df70a4(undefined **param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  ppuVar16 = param_1;
  func_0x00010bf52a60();
  if (ppuVar16 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_120;
    unaff_x27 = &PTR_PTR_1126bc000;
    unaff_x21 = ppuVar16;
    do {
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x26) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x23 = (undefined **)PTR_PTR_1126bc7b8;
        unaff_x24 = *(undefined ***)(lStack_128 + (long)unaff_x28 * 8);
        uVar4 = param_2;
        func_0x00010c269d40(param_2);
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
      unaff_x21 = param_1;
      func_0x00010bf52a60();
    } while (unaff_x21 != (undefined **)0x0);
  }
  ppuVar16 = (undefined **)0x0;
LAB_106df7234:
  _objc_release(param_1);
  _objc_release(param_2);
  ppuVar15 = param_1;
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
    uStack_150 = param_2;
    ppuStack_148 = param_1;
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
          uVar6 = uVar11;
          func_0x00010c269d40(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7160();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
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
              puVar7 = PTR_PTR_1126af4c0;
              puVar12 = (undefined8 *)puVar20;
              func_0x00010bfaad20();
              _objc_retainAutoreleasedReturnValue();
              if ((puVar7 != (undefined *)0x0) &&
                 (puVar8 = puVar7, func_0x00010bf3d240(), ((ulong)puVar8 & 0xffe0) != 0)) {
LAB_106df7888:
                _objc_release(puVar7);
LAB_106df7890:
                ppuVar16 = (undefined **)0x1;
                goto LAB_106df7894;
              }
              puVar8 = PTR_PTR_1126af4c0;
              puVar12 = (undefined8 *)puVar20;
              func_0x00010bfa9840();
              _objc_retainAutoreleasedReturnValue();
              puVar21 = puVar8;
              func_0x00010bf977c0();
              uVar1 = (int)puVar21 - 0x39;
              if (uVar1 < 0x16 && (1 << (ulong)(uVar1 & 0x1f) & 0x3dd3c1U) != 0) {
                _objc_release(puVar8);
                goto LAB_106df7888;
              }
              func_0x00010c0c5b00();
              _objc_release(puVar8);
              _objc_release(puVar7);
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
              uVar9 = uVar23;
              func_0x00010bfbd100();
              puVar7 = PTR__OBJC_CLASS___PHAsset_1126bd898;
              uVar22 = uVar23;
              if (uVar9 == 2) {
                _objc_retain(uVar23);
                _objc_opt_class(puVar7);
                uVar9 = uVar23;
                _objc_opt_isKindOfClass(uVar23,puVar7);
                if ((uVar9 & 1) == 0) {
                  uVar22 = 0;
                }
                _objc_retain(uVar22);
                _objc_release(uVar23);
                uVar9 = uVar22;
                func_0x00010c0c6c20();
                if (uVar9 == 2) {
                  iVar3 = 1;
                }
                else {
                  uVar9 = uVar22;
                  func_0x00010c0c6c20();
                  bVar2 = (bool)(bVar2 | uVar9 == 1);
                }
LAB_106df7b60:
                _objc_release(uVar22);
              }
              else {
                uVar9 = uVar23;
                func_0x00010bfbd100();
                puVar7 = PTR_DAT_1126a4ec8;
                if (uVar9 == 1) {
                  _objc_retain(uVar23);
                  uVar9 = uVar23;
                  func_0x00010010fab4(uVar23,puVar7);
                  if ((int)uVar9 == 0) {
                    uVar22 = 0;
                  }
                  _objc_retain(uVar22);
                  _objc_release(uVar23);
                  puVar8 = PTR_PTR_1126af4d0;
                  func_0x00010bfa7380();
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = puVar8;
                  func_0x00010bf52a60();
                  lVar10 = lRam0000000000000000;
                  while (puVar7 != (undefined *)0x0) {
                    puVar21 = (undefined *)0x0;
                    do {
                      if (lRam0000000000000000 != lVar10) {
                        _objc_enumerationMutation(puVar8);
                      }
                      uVar23 = *(ulong *)((long)puVar21 * 8);
                      uVar9 = uVar23;
                      func_0x00010b5fa088();
                      func_0x00010b5fa4c8();
                      if ((uVar9 & 1) == 0) {
                        func_0x00010b5fa088();
                        if (uVar23 < 0xd && (1L << (uVar23 & 0x3f) & 0x1566U) != 0) {
                          iVar3 = 1;
                        }
                      }
                      else {
                        bVar2 = true;
                      }
                      puVar21 = puVar21 + 1;
                    } while (puVar7 != puVar21);
                    puVar7 = puVar8;
                    func_0x00010bf52a60();
                  }
                  _objc_release(puVar8);
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
              lVar10 = lVar18;
              func_0x00010c0c6c20();
              if (lVar10 == 2) {
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



/* Entry: 106df75f8; end: 106df7717;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000106df765c */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined * FUN_106df75f8(undefined *param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  bool bVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_180;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_1);
  puVar10 = param_1;
  func_0x00010bf52a60();
  lVar18 = lRam0000000000000000;
  puVar11 = (undefined *)0x0;
  if (puVar10 != (undefined *)0x0) {
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar18) {
          _objc_enumerationMutation(param_1);
        }
        iVar3 = (int)*(undefined8 *)((long)puVar11 * 8);
        func_0x00010b5fa760();
        if (iVar3 != 0) {
          puVar11 = PTR_PTR_1126b2480;
          _objc_alloc();
          func_0x00010c03a960();
          goto LAB_106df76d0;
        }
        puVar11 = puVar11 + 1;
      } while (puVar10 != puVar11);
      puVar10 = param_1;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined *)0x0);
    puVar11 = (undefined *)0x0;
  }
LAB_106df76d0:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    puVar8 = &uStack_240;
    lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar7 = param_2;
    _objc_retain();
    _objc_retain(param_2);
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    _objc_retain(param_1);
    puVar10 = param_1;
    func_0x00010bf52a60();
    puVar11 = (undefined *)0x0;
    if (puVar10 != (undefined *)0x0) {
      lVar18 = *plStack_230;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_230 != lVar18) {
            _objc_enumerationMutation(param_1);
          }
          puVar14 = *(undefined1 **)(lStack_238 + (long)puVar11 * 8);
          puVar19 = PTR_PTR_1126af4c0;
          puVar8 = (undefined8 *)puVar14;
          func_0x00010bfaad20();
          _objc_retainAutoreleasedReturnValue();
          if ((puVar19 != (undefined *)0x0) &&
             (puVar4 = puVar19, func_0x00010bf3d240(), ((ulong)puVar4 & 0xffe0) != 0)) {
LAB_106df7888:
            _objc_release(puVar19);
LAB_106df7890:
            puVar11 = (undefined *)((long)&lRam0000000000000000 + 1);
            goto LAB_106df7894;
          }
          puVar4 = PTR_PTR_1126af4c0;
          puVar8 = (undefined8 *)puVar14;
          func_0x00010bfa9840();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar4;
          func_0x00010bf977c0();
          uVar1 = (int)puVar15 - 0x39;
          if (uVar1 < 0x16 && (1 << (ulong)(uVar1 & 0x1f) & 0x3dd3c1U) != 0) {
            _objc_release(puVar4);
            goto LAB_106df7888;
          }
          func_0x00010c0c5b00();
          _objc_release(puVar4);
          _objc_release(puVar19);
          if ((int)puVar14 == 5) goto LAB_106df7890;
          puVar11 = puVar11 + 1;
        } while (puVar10 != puVar11);
        puVar10 = param_1;
        puVar8 = &uStack_240;
        func_0x00010bf52a60();
      } while (puVar10 != (undefined *)0x0);
      puVar11 = (undefined *)0x0;
    }
LAB_106df7894:
    _objc_release(param_1);
    _objc_release(param_2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
      return puVar11;
    }
    ___stack_chk_fail();
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(uVar7);
    _objc_retain(puVar8);
    _objc_retain(param_1);
    puVar11 = param_1;
    func_0x00010bf52a60();
    lVar18 = lRam0000000000000000;
    iVar3 = 0;
    if (puVar11 != (undefined *)0x0) {
      iVar3 = 0;
      bVar2 = false;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar18) {
            _objc_enumerationMutation(param_1);
          }
          uVar17 = *(ulong *)((long)puVar10 * 8);
          uVar5 = uVar17;
          func_0x00010bfbd100();
          puVar19 = PTR__OBJC_CLASS___PHAsset_1126bd898;
          uVar16 = uVar17;
          if (uVar5 == 2) {
            _objc_retain(uVar17);
            _objc_opt_class(puVar19);
            uVar5 = uVar17;
            _objc_opt_isKindOfClass(uVar17,puVar19);
            if ((uVar5 & 1) == 0) {
              uVar16 = 0;
            }
            _objc_retain(uVar16);
            _objc_release(uVar17);
            uVar5 = uVar16;
            func_0x00010c0c6c20();
            if (uVar5 == 2) {
              iVar3 = 1;
            }
            else {
              uVar5 = uVar16;
              func_0x00010c0c6c20();
              bVar2 = (bool)(bVar2 | uVar5 == 1);
            }
LAB_106df7b60:
            _objc_release(uVar16);
          }
          else {
            uVar5 = uVar17;
            func_0x00010bfbd100();
            puVar19 = PTR_DAT_1126a4ec8;
            if (uVar5 == 1) {
              _objc_retain(uVar17);
              uVar5 = uVar17;
              func_0x00010010fab4(uVar17,puVar19);
              if ((int)uVar5 == 0) {
                uVar16 = 0;
              }
              _objc_retain(uVar16);
              _objc_release(uVar17);
              puVar4 = PTR_PTR_1126af4d0;
              func_0x00010bfa7380();
              _objc_retainAutoreleasedReturnValue();
              puVar19 = puVar4;
              func_0x00010bf52a60();
              lVar6 = lRam0000000000000000;
              while (puVar19 != (undefined *)0x0) {
                puVar15 = (undefined *)0x0;
                do {
                  if (lRam0000000000000000 != lVar6) {
                    _objc_enumerationMutation(puVar4);
                  }
                  uVar17 = *(ulong *)((long)puVar15 * 8);
                  uVar5 = uVar17;
                  func_0x00010b5fa088();
                  func_0x00010b5fa4c8();
                  if ((uVar5 & 1) == 0) {
                    func_0x00010b5fa088();
                    if (uVar17 < 0xd && (1L << (uVar17 & 0x3f) & 0x1566U) != 0) {
                      iVar3 = 1;
                    }
                  }
                  else {
                    bVar2 = true;
                  }
                  puVar15 = puVar15 + 1;
                } while (puVar19 != puVar15);
                puVar19 = puVar4;
                func_0x00010bf52a60();
              }
              _objc_release(puVar4);
              goto LAB_106df7b60;
            }
          }
          if ((bVar2) && (iVar3 != 0)) {
            (**(code **)((long)puVar8 + 0x10))(puVar8,2,0);
            _objc_release(param_1);
            goto LAB_106df7be0;
          }
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar11);
        puVar11 = param_1;
        func_0x00010bf52a60();
      } while (puVar11 != (undefined *)0x0);
    }
    _objc_release(param_1);
    (**(code **)((long)puVar8 + 0x10))(puVar8,iVar3,0);
LAB_106df7be0:
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return param_1;
    }
    ___stack_chk_fail();
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(param_1);
    puVar11 = param_1;
    func_0x00010bf52a60();
    lVar18 = lRam0000000000000000;
    if (puVar11 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      bVar2 = false;
      bVar13 = false;
      puVar10 = (undefined *)((long)&lRam0000000000000000 + 2);
      do {
        puVar19 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar18) {
            _objc_enumerationMutation(param_1);
          }
          lVar12 = *(long *)((long)puVar19 * 8);
          lVar6 = lVar12;
          func_0x00010c0c6c20();
          if (lVar6 == 2) {
            bVar13 = true;
            if (bVar2) {
LAB_106df7d08:
              if (bVar13) goto LAB_106df7d40;
            }
          }
          else {
            func_0x00010c0c6c20();
            bVar2 = (bool)(bVar2 | lVar12 == 1);
            if (bVar2) goto LAB_106df7d08;
          }
          puVar19 = puVar19 + 1;
        } while (puVar11 != puVar19);
        puVar11 = param_1;
        func_0x00010bf52a60();
      } while (puVar11 != (undefined *)0x0);
      puVar10 = (undefined *)(ulong)bVar13;
    }
LAB_106df7d40:
    _objc_release(param_1);
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return puVar10;
    }
    ___stack_chk_fail();
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar11;
}



/* Entry: 106df7718; end: 106df7d8f;  */

ulong FUN_106df7718(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  bool bVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar8 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  uVar10 = param_1;
  func_0x00010bf52a60();
  uVar19 = 0;
  if (uVar10 != 0) {
    lVar16 = *plStack_120;
    do {
      uVar19 = 0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(param_1);
        }
        puVar13 = *(undefined1 **)(lStack_128 + uVar19 * 8);
        puVar3 = PTR_PTR_1126af4c0;
        puVar8 = (undefined8 *)puVar13;
        func_0x00010bfaad20();
        _objc_retainAutoreleasedReturnValue();
        if ((puVar3 != (undefined *)0x0) &&
           (puVar4 = puVar3, func_0x00010bf3d240(), ((ulong)puVar4 & 0xffe0) != 0)) {
LAB_106df7888:
          _objc_release(puVar3);
LAB_106df7890:
          uVar19 = 1;
          goto LAB_106df7894;
        }
        puVar4 = PTR_PTR_1126af4c0;
        puVar8 = (undefined8 *)puVar13;
        func_0x00010bfa9840();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar4;
        func_0x00010bf977c0();
        uVar1 = (int)puVar14 - 0x39;
        if (uVar1 < 0x16 && (1 << (ulong)(uVar1 & 0x1f) & 0x3dd3c1U) != 0) {
          _objc_release(puVar4);
          goto LAB_106df7888;
        }
        func_0x00010c0c5b00();
        _objc_release(puVar4);
        _objc_release(puVar3);
        if ((int)puVar13 == 5) goto LAB_106df7890;
        uVar19 = uVar19 + 1;
      } while (uVar10 != uVar19);
      uVar10 = param_1;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
    } while (uVar10 != 0);
    uVar19 = 0;
  }
LAB_106df7894:
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar19;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(uVar7);
  _objc_retain(puVar8);
  _objc_retain(param_1);
  uVar19 = param_1;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  iVar18 = 0;
  if (uVar19 != 0) {
    iVar18 = 0;
    bVar2 = false;
    do {
      uVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar16) {
          _objc_enumerationMutation(param_1);
        }
        uVar15 = *(ulong *)(uVar10 * 8);
        uVar5 = uVar15;
        func_0x00010bfbd100();
        puVar3 = PTR__OBJC_CLASS___PHAsset_1126bd898;
        uVar17 = uVar15;
        if (uVar5 == 2) {
          _objc_retain(uVar15);
          _objc_opt_class(puVar3);
          uVar5 = uVar15;
          _objc_opt_isKindOfClass(uVar15,puVar3);
          if ((uVar5 & 1) == 0) {
            uVar17 = 0;
          }
          _objc_retain(uVar17);
          _objc_release(uVar15);
          uVar5 = uVar17;
          func_0x00010c0c6c20();
          if (uVar5 == 2) {
            iVar18 = 1;
          }
          else {
            uVar5 = uVar17;
            func_0x00010c0c6c20();
            bVar2 = (bool)(bVar2 | uVar5 == 1);
          }
LAB_106df7b60:
          _objc_release(uVar17);
        }
        else {
          uVar5 = uVar15;
          func_0x00010bfbd100();
          puVar3 = PTR_DAT_1126a4ec8;
          if (uVar5 == 1) {
            _objc_retain(uVar15);
            uVar5 = uVar15;
            func_0x00010010fab4(uVar15,puVar3);
            if ((int)uVar5 == 0) {
              uVar17 = 0;
            }
            _objc_retain(uVar17);
            _objc_release(uVar15);
            puVar4 = PTR_PTR_1126af4d0;
            func_0x00010bfa7380();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar4;
            func_0x00010bf52a60();
            lVar6 = lRam0000000000000000;
            while (puVar3 != (undefined *)0x0) {
              puVar14 = (undefined *)0x0;
              do {
                if (lRam0000000000000000 != lVar6) {
                  _objc_enumerationMutation(puVar4);
                }
                uVar15 = *(ulong *)((long)puVar14 * 8);
                uVar5 = uVar15;
                func_0x00010b5fa088();
                func_0x00010b5fa4c8();
                if ((uVar5 & 1) == 0) {
                  func_0x00010b5fa088();
                  if (uVar15 < 0xd && (1L << (uVar15 & 0x3f) & 0x1566U) != 0) {
                    iVar18 = 1;
                  }
                }
                else {
                  bVar2 = true;
                }
                puVar14 = puVar14 + 1;
              } while (puVar3 != puVar14);
              puVar3 = puVar4;
              func_0x00010bf52a60();
            }
            _objc_release(puVar4);
            goto LAB_106df7b60;
          }
        }
        if ((bVar2) && (iVar18 != 0)) {
          (**(code **)((long)puVar8 + 0x10))(puVar8,2,0);
          _objc_release(param_1);
          goto LAB_106df7be0;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar19);
      uVar19 = param_1;
      func_0x00010bf52a60();
    } while (uVar19 != 0);
  }
  _objc_release(param_1);
  (**(code **)((long)puVar8 + 0x10))(puVar8,iVar18,0);
LAB_106df7be0:
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_1);
  uVar19 = param_1;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  if (uVar19 == 0) {
    uVar10 = 0;
  }
  else {
    bVar2 = false;
    bVar12 = false;
    uVar10 = 2;
    do {
      uVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar16) {
          _objc_enumerationMutation(param_1);
        }
        lVar11 = *(long *)(uVar17 * 8);
        lVar6 = lVar11;
        func_0x00010c0c6c20();
        if (lVar6 == 2) {
          bVar12 = true;
          if (bVar2) {
LAB_106df7d08:
            if (bVar12) goto LAB_106df7d40;
          }
        }
        else {
          func_0x00010c0c6c20();
          bVar2 = (bool)(bVar2 | lVar11 == 1);
          if (bVar2) goto LAB_106df7d08;
        }
        uVar17 = uVar17 + 1;
      } while (uVar19 != uVar17);
      uVar19 = param_1;
      func_0x00010bf52a60();
    } while (uVar19 != 0);
    uVar10 = (ulong)bVar12;
  }
LAB_106df7d40:
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return uVar10;
  }
  ___stack_chk_fail();
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return param_1;
}



/* Entry: 106df7d90; end: 106df7de7;  */

void FUN_106df7d90(undefined8 param_1,undefined4 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined1 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_106df7de8;
  puStack_20 = &UNK_11097daf0;
  uStack_18 = (undefined1)param_2;
  func_0x00010c246ca0(param_1,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106df7de8; end: 106df7ea3;  */

ulong FUN_106df7de8(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  func_0x00010bf59960();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf59960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = (ulong)(param_2 != 0 || uVar1 != 0);
  if ((param_2 != 0) && (uVar2 = 0xffffffffffffffff, uVar1 != 0)) {
    uVar2 = uVar1;
    if (*(char *)(param_1 + 0x20) == '\x01') {
      uVar2 = param_2;
    }
    func_0x00010bf433a0(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106df7ea4; end: 106df7efb;  */

void FUN_106df7ea4(undefined8 param_1,undefined4 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined1 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_106df7efc;
  puStack_20 = &UNK_11097db10;
  uStack_18 = (undefined1)param_2;
  func_0x00010c246ca0(param_1,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106df7efc; end: 106df7fb7;  */

ulong FUN_106df7efc(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  func_0x00010bfbd080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfbd080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = (ulong)(param_2 != 0 || uVar1 != 0);
  if ((param_2 != 0) && (uVar2 = 0xffffffffffffffff, uVar1 != 0)) {
    uVar2 = uVar1;
    if (*(char *)(param_1 + 0x20) == '\x01') {
      uVar2 = param_2;
    }
    func_0x00010bf433a0(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106df7fb8; end: 106df8153; -[SCMemoriesExternalShareAdaptorScope initWithGalleryItems:memoriesTabType:username:contextActionSource:modalUIContainer:userContext:memSessionId:collectionCategory:crFeaturedStory:completion:] */

undefined8 *
FUN_106df7fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f6f70;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[9];
    puVar1[9] = param_3;
    _objc_release(uVar2);
    puVar1[8] = param_4;
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    puVar1[2] = param_6;
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    puVar1[4] = param_8;
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    uVar2 = param_12;
    _objc_retainBlock();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106df8154; end: 106df82c7; -[SCMemoriesExternalShareAdaptorScope initWithGallerySnaps:username:contextActionSource:modalUIContainer:userContext:memSessionId:memoriesTabType:collectionCategory:completion:] */

undefined1 *
FUN_106df8154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f6f70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    _objc_release(uVar2);
    uVar2 = param_11;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106df82c8; end: 106df82d7; -[SCMemoriesExternalShareAdaptorScope determinePresentationPath] */

bool FUN_106df82c8(long param_1)

{
  return *(long *)(param_1 + 0x48) == 0;
}



/* Entry: 106df82d8; end: 106df82df; -[SCMemoriesExternalShareAdaptorScope username] */

undefined8 FUN_106df82d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106df82e0; end: 106df82e7; -[SCMemoriesExternalShareAdaptorScope contextActionSource] */

undefined8 FUN_106df82e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106df82e8; end: 106df82ef; -[SCMemoriesExternalShareAdaptorScope modalUIContainer] */

undefined8 FUN_106df82e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106df82f0; end: 106df82f7; -[SCMemoriesExternalShareAdaptorScope userContext] */

undefined8 FUN_106df82f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106df82f8; end: 106df82ff; -[SCMemoriesExternalShareAdaptorScope memSessionId] */

undefined8 FUN_106df82f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106df8300; end: 106df8307; -[SCMemoriesExternalShareAdaptorScope collectionCategory] */

undefined8 FUN_106df8300(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106df8308; end: 106df830f; -[SCMemoriesExternalShareAdaptorScope completion] */

undefined8 FUN_106df8308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106df8310; end: 106df8317; -[SCMemoriesExternalShareAdaptorScope memoriesTabType] */

undefined8 FUN_106df8310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106df8318; end: 106df831f; -[SCMemoriesExternalShareAdaptorScope galleryItems] */

undefined8 FUN_106df8318(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106df8320; end: 106df8327; -[SCMemoriesExternalShareAdaptorScope crFeaturedStory] */

undefined8 FUN_106df8320(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106df8328; end: 106df832f; -[SCMemoriesExternalShareAdaptorScope gallerySnaps] */

undefined8 FUN_106df8328(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106df8330; end: 106df83a7; -[SCMemoriesExternalShareAdaptorScope .cxx_destruct] */

void FUN_106df8330(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106df83a8; end: 106df841b; -[MemoriesCoreDataShareableMediaProvider initWithMemoriesSnapTranscoder:] */

undefined1 * FUN_106df83a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6f78;
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



/* Entry: 106df841c; end: 106df84f3; -[MemoriesCoreDataShareableMediaProvider generateShareableMediaWithSnaps:errorHandler:completion:] */

void FUN_106df841c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11097db50);
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfc0120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  (**(code **)(param_5 + 0x10))(param_5,puVar1);
  _objc_release(param_5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106df84f4; end: 106df84fb;  */

void FUN_106df84f4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 106df84fc; end: 106df8507; -[MemoriesCoreDataShareableMediaProvider .cxx_destruct] */

void FUN_106df84fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106df8508; end: 106df8697;  */

void FUN_106df8508(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c0f58c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  lVar5 = param_2;
  if (lVar2 == 0) {
    _objc_retain(param_2);
    goto LAB_106df8664;
  }
  lVar2 = param_2;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 1) {
    lVar3 = param_2;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      lVar3 = param_1;
      func_0x00010c0f58c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ce20(param_2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106df8654;
    }
LAB_106df860c:
    lVar5 = param_1;
    func_0x00010c0899c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 == 0) goto LAB_106df860c;
    lVar3 = lVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    if ((lVar4 == 0) || (lVar4 = lVar3, func_0x00010c0720c0(), (int)lVar4 != 0)) {
      _objc_retain(param_2);
    }
    else {
      lVar4 = param_2;
      func_0x00010c25cea0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c25ce20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
LAB_106df8654:
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
LAB_106df8664:
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 106df8698; end: 106df8b57; -[SCMemoriesSnapTranscoder initWithDataObjectContext:memoriesCloudFS:userSession:spectaclesAuxiliaryContentServices:previewAssetVideoProviderFactory:targetTrajectoryFactory:musicMediaLoader:imageToVideoWriterScopeExposer:imageToVideoWriterScopeServices:snapVideoFilterScopeExposer:encryptedContentManager:memoriesCachingMediaManager:memoriesTranscodingHelper:contentDelivery:musicSelectionLoader:grapheneRegistry:circumstanceEngine:watermarkGenerator:shouldWatermarkStaticImages:watermarkType:performer:snapDocDownloadingService:memoriesExperimentService:memoriesSnapDocTranscodingManager:] */

undefined8 *
FUN_106df8698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined1 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  puStack_70 = PTR_PTR_1126f6f80;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[5];
    puVar1[5] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[6];
    puVar1[6] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[7];
    puVar1[7] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_12);
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
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x12) = param_21;
    puVar1[0x13] = param_23;
    _objc_retain(param_24);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_27;
    _objc_release(uVar2);
    uVar2 = param_19;
    func_0x000108ec16c0();
    *(byte *)(puVar1 + 0x18) = (byte)uVar2 ^ 1;
  }
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
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



/* Entry: 106df8b58; end: 106df8c7b; -[SCMemoriesSnapTranscoder _transcodeSnapDoc:snap:watermarkProfile:videoCompletion:imageCompletion:errorCompletion:] */

void FUN_106df8b58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106df8c7c;
  puStack_58 = &UNK_11097dbd0;
  uStack_50 = param_7;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c279aa0(uVar1,param_2,param_3,param_5,0xc,&puStack_70,param_8);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_6);
  _objc_release(param_7);
  return;
}



/* Entry: 106df8c7c; end: 106df8d57;  */

void FUN_106df8c7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010c0bed00(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106df8d58; end: 106df8daf;  */

void FUN_106df8d58(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf3a090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_cleanUpMedia_1125ac1c8);
  return;
}



/* Entry: 106df8db0; end: 106df8df7;  */

void FUN_106df8db0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c29bb40(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106df8df8; end: 106df9093; -[SCMemoriesSnapTranscoder transcodeGallerySnap:watermarkProfile:imageCompletion:videoCompletion:videoTranscodeProgressCompletion:errorCompletion:] */

void FUN_106df8df8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  undefined *puVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar2 = param_3;
  func_0x00010b5fa088();
  iVar1 = (int)uVar2;
  func_0x00010b5fa4c8();
  if (iVar1 == 0) {
    uVar2 = param_3;
    func_0x00010b5fa088();
    if ((uVar2 < 0xd) && ((1L << (uVar2 & 0x3f) & 0x1566U) != 0)) {
      _objc_initWeak(auStack_68,param_1);
      puVar3 = PTR_PTR_1126bf788;
      _objc_alloc(PTR_PTR_1126bf788);
      func_0x00010c017ba0();
      _objc_retain(param_8);
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(param_6);
      _objc_retain(param_7);
      func_0x00010be05da0(param_1);
      _objc_release(puVar3);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_70);
      _objc_release(param_8);
      _objc_destroyWeak(auStack_68);
    }
    else {
      func_0x00010b5fa088();
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_8 + 0x10))(param_8,puVar3);
      _objc_release(puVar3);
    }
  }
  else {
    func_0x00010bece620(param_1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106df9094; end: 106df910b;  */

void FUN_106df9094(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  if (param_3 == 0) {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010bece960();
    _objc_release(param_1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106df910c; end: 106df92ab; -[SCMemoriesSnapTranscoder transcodeGalleryItem:imageCompletion:videoCompletion:errorCompletion:] */

void FUN_106df910c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_3;
  func_0x00010bfbd100();
  puVar2 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  if (puVar1 == (undefined *)0x2) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    puVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    puVar2 = param_3;
    if (((ulong)puVar1 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(param_3);
    puVar1 = puVar2;
    func_0x00010c0c6c20();
    if (puVar1 == (undefined *)0x2) {
      func_0x00010bece920(param_1);
    }
    else {
      puVar1 = puVar2;
      func_0x00010c0c6c20();
      if (puVar1 == (undefined *)0x1) {
        func_0x00010bece5e0(param_1);
      }
      else {
        puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_6 + 0x10))(param_6,puVar1);
        _objc_release(puVar1);
      }
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106df92ac; end: 106df943b; -[SCMemoriesSnapTranscoder transcodeStoriesToVideoWithGallerySnap:videoTranscodeProgressCompletion:videoCompletion:errorCompletion:] */

void FUN_106df92ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bece8a0(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_6);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00010be78b00(param_1);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106df943c; end: 106df975f;  */

void FUN_106df943c(long param_1,undefined **param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = param_2;
  ppuVar8 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar6 = *(long *)(param_1 + 0x28);
    ppuVar8 = &PTR____CFConstantStringClassReference_110e872f8;
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar2;
    (**(code **)(lVar6 + 0x10))(lVar6,ppuVar2);
LAB_106df94f8:
    _objc_release(ppuVar2);
  }
  else if (param_3 == (undefined **)0x0) {
    if (param_2 != (undefined **)0x0) {
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      ppuVar8 = param_2;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar8;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      ppuVar8 = ppuVar2;
      func_0x00010bf52a60();
      if (ppuVar8 != (undefined **)0x0) {
        lVar6 = *plStack_130;
        do {
          ppuVar7 = (undefined **)0x0;
          do {
            if (*plStack_130 != lVar6) {
              _objc_enumerationMutation(ppuVar2);
            }
            uVar10 = *(undefined8 *)(lStack_138 + (long)ppuVar7 * 8);
            uVar9 = uVar10;
            func_0x00010c08c3a0();
            if ((int)uVar9 == 4) {
              func_0x00010bf5cc00();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar10;
              func_0x00010c0840e0();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar9;
              func_0x00010bf96da0();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x00010bf96ee0();
              _objc_release(uVar3);
              _objc_release(uVar9);
              _objc_release(uVar10);
              if ((int)uVar4 == 7) {
                _objc_release(ppuVar2);
                puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_168 = 0xc2000000;
                pcStack_160 = FUN_106df9760;
                puStack_158 = &UNK_11097dc30;
                ppuVar8 = *(undefined ***)(param_1 + 0x30);
                _objc_retain(ppuVar8);
                uVar9 = *(undefined8 *)(param_1 + 0x38);
                ppuStack_150 = ppuVar8;
                _objc_retain(uVar9);
                ppuVar2 = &puStack_170;
                uStack_148 = uVar9;
                _objc_retainBlock(ppuVar2);
                uVar9 = *(undefined8 *)(param_1 + 0x28);
                _objc_retain(uVar9);
                ppuVar8 = param_2;
                func_0x00010bece820(lVar1);
                _objc_release(uVar9);
                _objc_release(ppuVar2);
                _objc_release(uStack_148);
                ppuVar2 = ppuStack_150;
                goto LAB_106df94f8;
              }
            }
            ppuVar7 = (undefined **)((long)ppuVar7 + 1);
          } while (ppuVar8 != ppuVar7);
          ppuVar8 = ppuVar2;
          func_0x00010bf52a60();
        } while (ppuVar8 != (undefined **)0x0);
      }
      _objc_release(ppuVar2);
    }
    ppuVar8 = *(undefined ***)(param_1 + 0x20);
    func_0x00010bece8a0(lVar1);
  }
  else {
    ppuVar5 = param_3;
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  _objc_retain(ppuVar8);
  if (param_2[4] != (undefined *)0x0) {
    (**(code **)(param_2[4] + 0x10))();
  }
  (**(code **)(param_2[5] + 0x10))(param_2[5],ppuVar5,ppuVar8);
  _objc_release(ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 106df9760; end: 106df97cf;  */

void FUN_106df9760(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(0x3f800000);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106df97d0; end: 106df982b;  */

void FUN_106df97d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e872f8,
                      &PTR____CFConstantStringClassReference_110e87098,200);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106df982c; end: 106df9a0f; -[SCMemoriesSnapTranscoder _transcodeStoriesLegacyForSnap:videoTranscodeProgressCompletion:videoCompletion:errorCompletion:] */

void FUN_106df982c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_3;
  func_0x00010b5fa088();
  iVar1 = (int)uVar2;
  func_0x00010b5fa4c8();
  if (iVar1 == 0) {
    uVar2 = param_3;
    func_0x00010b5fa088();
    if ((uVar2 < 0xd) && ((1L << (uVar2 & 0x3f) & 0x1566U) != 0)) {
      _objc_initWeak(auStack_58,param_1);
      puVar3 = PTR_PTR_1126bf788;
      _objc_alloc(PTR_PTR_1126bf788);
      func_0x00010c017ba0();
      _objc_retain(param_6);
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_3);
      _objc_retain(param_5);
      _objc_retain(param_4);
      func_0x00010be05da0(param_1);
      _objc_release(puVar3);
      _objc_release(param_4);
      _objc_release(param_5);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_60);
      _objc_release(param_6);
      _objc_destroyWeak(auStack_58);
    }
  }
  else {
    func_0x00010be0c900(param_1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106df9a10; end: 106df9a87;  */

void FUN_106df9a10(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  if (param_3 == 0) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010bece960();
    _objc_release(param_1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106df9a88; end: 106df9d9b; -[SCMemoriesSnapTranscoder _transcodeImageSnap:watermarkProfile:imageCompletion:videoCompletion:videoTranscodeProgressCompletion:errorCompletion:] */

void FUN_106df9a88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126bc7b8;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_70,param_1);
  puVar4 = PTR_PTR_1126bfb98;
  puVar3 = puVar2;
  func_0x00010c0ef4a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c230420();
  _objc_release(puVar3);
  if ((int)puVar4 == 0) {
    if (*(char *)(param_1 + 0x90) == '\x01') {
      _objc_copyWeak(auStack_d0,auStack_70);
      _objc_retain(param_5);
      _objc_retain(param_8);
      func_0x00010bece880(param_1);
      _objc_release(param_8);
      _objc_release(param_5);
      _objc_destroyWeak(auStack_d0);
    }
    else {
      func_0x00010bece880(param_1);
    }
  }
  else {
    puVar4 = PTR_PTR_1126bf788;
    _objc_alloc(PTR_PTR_1126bf788);
    func_0x00010c017ba0();
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_106df9d9c;
    puStack_b0 = &UNK_11097dcc0;
    _objc_retain(param_8);
    uStack_90 = param_8;
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(param_3);
    uStack_a8 = param_3;
    puStack_a0 = puVar2;
    _objc_retain(param_4);
    uStack_98 = param_4;
    _objc_retain(param_6);
    uStack_88 = param_6;
    _objc_retain(param_7);
    uStack_80 = param_7;
    func_0x00010be05da0(param_1);
    _objc_release(puVar4);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_98);
    _objc_release(uStack_a8);
    _objc_destroyWeak(auStack_78);
    _objc_release(uStack_90);
  }
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106df9d9c; end: 106df9e73;  */

void FUN_106df9d9c(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  if (param_3 == 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010bece540();
    _objc_release(param_1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106df9e74; end: 106dfa07f; -[SCMemoriesSnapTranscoder _transcodeImageItem:imageCompletion:errorCompletion:] */

void FUN_106df9e74(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  double dVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  _objc_opt_class(PTR__OBJC_CLASS___PHAsset_1126bd898);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,puVar2);
  }
  else {
    uVar3 = param_3;
    func_0x00010c0fce40();
    uVar4 = param_3;
    func_0x00010c0fcaa0();
    if (uVar3 <= uVar4) {
      uVar3 = uVar4;
    }
    dVar6 = 1.0;
    if (0x9c4 < uVar3) {
      dVar6 = 2500.0 / (double)uVar3;
    }
    uVar3 = param_3;
    func_0x00010c0fce40(param_3);
    uVar4 = param_3;
    func_0x00010c0fcaa0(param_3);
    puVar2 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
    _objc_opt_new(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
    func_0x00010c1ec960();
    func_0x00010c18ba80(puVar2);
    func_0x00010c1cc000(puVar2);
    puVar5 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_retain(param_4);
    func_0x00010c1357a0(dVar6 * (double)uVar3,dVar6 * (double)uVar4,puVar5);
    _objc_release(puVar5);
    _objc_release(param_4);
    _objc_release(param_5);
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dfa080; end: 106dfa14b;  */

void FUN_106dfa080(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_2);
      goto LAB_106dfa130;
    }
    lVar1 = *(long *)(param_1 + 0x20);
  }
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,puVar2);
  _objc_release(puVar2);
LAB_106dfa130:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dfa14c; end: 106dfa3cb; -[SCMemoriesSnapTranscoder _transcodeAnimatedImageSnap:snapDetail:watermarkProfile:cloudFSFile:videoCompletion:videoTranscodeProgressCompletion:errorCompletion:] */

void FUN_106dfa14c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_6;
  func_0x00010c06cde0();
  if ((uVar1 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_9 + 0x10))(param_9,puVar5);
    _objc_release(puVar5);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0ef4a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 200);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_8);
    _objc_retain(param_5);
    _objc_retain(param_9);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_7);
    func_0x00010bfe8be0(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_7);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_release(param_9);
    _objc_release(param_5);
    _objc_release(param_8);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dfa3cc; end: 106dfa513;  */

void FUN_106dfa3cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf51e00(uVar1);
  func_0x00010c1e4740(param_3);
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c224ac0(param_3);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  _objc_copyWeak(auStack_48,param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
  func_0x00010bfae7c0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106dfa514; end: 106dfa677;  */

void FUN_106dfa514(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  if (param_4 == 0) {
    lVar3 = param_2;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
    }
    else {
      puVar2 = (undefined *)(param_1 + 0x38);
      _objc_loadWeakRetained();
      if (puVar2 == (undefined *)0x0) {
        lVar3 = *(long *)(param_1 + 0x28);
        puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar3 + 0x10))(lVar3,puVar1);
      }
      else {
        puVar1 = *(undefined **)(param_1 + 0x20);
        func_0x00010c241220(puVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_2;
        func_0x00010c28f340(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be209a0(puVar2);
        _objc_release(lVar3);
      }
      _objc_release(puVar1);
    }
    _objc_release(puVar2);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dfa678; end: 106dfa7e7; -[SCMemoriesSnapTranscoder _transcodeStaticImageSnap:imageCompletion:errorCompletion:] */

void FUN_106dfa678(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bfbc8;
  func_0x00010bf586e0(PTR_PTR_1126bfbc8,param_2,1,1,*(undefined1 *)(param_1 + 0xc0));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 200);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106dfa7e8;
  puStack_68 = &UNK_11097ddb0;
  uVar4 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar5 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  uStack_60 = param_5;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c134cc0(uVar4,uVar5,uVar1,param_2,param_3,0,0,0,puVar2,uVar3,0,&puStack_80);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106dfa7e8; end: 106dfa853;  */

void FUN_106dfa7e8(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106dfa7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,0,
                      &PTR____CFConstantStringClassReference_110e872f8,
                      &PTR____CFConstantStringClassReference_110e870d8,200);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106dfa854; end: 106dfa957; -[SCMemoriesSnapTranscoder _watermarkStaticImage:imageCompletion:errorCompletion:] */

void FUN_106dfa854(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106dfa958;
  puStack_58 = &UNK_1108b2448;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bfc0720(uVar2,param_2,param_3,&PTR____CFConstantStringClassReference_110daafd8,1,uVar1
                      ,&puStack_70);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106dfa958; end: 106dfaa13;  */

void FUN_106dfa958(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106dfaa14; end: 106dfaa2b;  */

void FUN_106dfaa14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106dfaa1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106dfaa2c; end: 106dfab63; -[SCMemoriesSnapTranscoder _getMusicSelectionInSnap:url:videoCompletion:] */

void FUN_106dfaa2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 200);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106dfab64;
  puStack_58 = &UNK_1108e8020;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135240(uVar2,param_2,param_3,0,uVar1,&puStack_70,param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 106dfab64; end: 106dfab77;  */

void FUN_106dfab64(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000106dfab74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),param_2);
  return;
}



/* Entry: 106dfab78; end: 106dfaf97; -[SCMemoriesSnapTranscoder _transcodeVideoSnap:watermarkProfile:cloudFSFile:videoCompletion:videoTranscodeProgressCompletion:errorCompletion:] */

void FUN_106dfab78(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126ba150;
  func_0x00010bf66c00();
  puVar2 = PTR_PTR_1126ba150;
  func_0x00010bf12420();
  if (((int)puVar1 == 0) || (((ulong)puVar2 & 1) == 0)) {
    puVar2 = param_5;
    func_0x00010bfad280();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ba150;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      func_0x00010c057ae0();
      func_0x00010c22e440();
      _objc_release(puVar3);
      if ((int)puVar1 != 0) {
        func_0x00010c10ae00(PTR_PTR_1126d2ad8);
        puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_8 + 0x10))(param_8,puVar1);
        goto LAB_106dfaf0c;
      }
    }
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126c4288;
  func_0x00010b68eef4();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    puVar2[0x1b] = 1;
    _objc_retain(puVar2);
  }
  _objc_release(puVar2);
  puVar4 = *(undefined **)(param_1 + 0x38);
  func_0x00010c269d40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5fa088();
  puVar3 = puVar2;
  func_0x00010b68f1bc(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c0c9fa0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  func_0x00010c1e4740(puVar1);
  lVar5 = param_1;
  func_0x00010be4a760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb2c0(puVar1);
  _objc_release(lVar5);
  if (param_4 != 0) {
    func_0x00010c224ac0(puVar1);
  }
  puVar3 = PTR_PTR_1126cf9c0;
  _objc_alloc(PTR_PTR_1126cf9c0);
  uVar6 = *(undefined8 *)(param_1 + 200);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048b00(puVar3);
  _objc_release(uVar6);
  _objc_initWeak(auStack_68,param_1);
  _objc_initWeak(auStack_70,puVar3);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_8);
  _objc_copyWeak(auStack_78,auStack_70);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c17fb20(puVar3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar3);
LAB_106dfaf0c:
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dfaf98; end: 106dfb103;  */

void FUN_106dfaf98(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar4 = *(long *)(param_1 + 0x30);
LAB_106dfb060:
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,puVar3);
  }
  else {
    lVar4 = param_1 + 0x48;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = *(long *)(param_1 + 0x20) + 0x20;
      _objc_loadWeakRetained(lVar4);
      lVar2 = param_1 + 0x48;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c12e1e0(lVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar4);
    }
    if (param_4 != 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_4);
      goto LAB_106dfb0bc;
    }
    if (param_3 == 0) {
      lVar4 = *(long *)(param_1 + 0x30);
      goto LAB_106dfb060;
    }
    puVar3 = *(undefined **)(param_1 + 0x28);
    func_0x00010c241220(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be209a0(lVar1);
  }
  _objc_release(puVar3);
LAB_106dfb0bc:
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dfb104; end: 106dfb213; -[SCMemoriesSnapTranscoder _lensCommandMetadataForSnap:] */

void FUN_106dfb104(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010b5fa088();
  if (puVar1 + -2 < (undefined *)0xb) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c1307e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 1;
    uVar8 = uVar3;
    puVar6 = puVar1;
    func_0x00010c0950a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar8 = 0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  _objc_opt_class(PTR__OBJC_CLASS___PHAsset_1126bd898);
  puVar4 = puVar6;
  _objc_opt_isKindOfClass(puVar6,puVar1);
  puVar1 = puVar6;
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  if (puVar1 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,puVar4);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___PHVideoRequestOptions_1126d2ae0;
    _objc_opt_new(PTR__OBJC_CLASS___PHVideoRequestOptions_1126d2ae0);
    func_0x00010c18ba80();
    func_0x00010c1cc000(puVar4);
    uVar8 = *(undefined8 *)(param_3 + 0xa0);
    _objc_retain(uVar8);
    puVar5 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(uVar8);
    func_0x00010c134700(puVar5);
    _objc_release(puVar5);
    _objc_release(uVar8);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_release(uVar8);
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar6);
  return;
}



/* Entry: 106dfb214; end: 106dfb3db; -[SCMemoriesSnapTranscoder _transcodeVideoItem:videoCompletion:errorCompletion:] */

void FUN_106dfb214(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  _objc_opt_class(PTR__OBJC_CLASS___PHAsset_1126bd898);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,puVar2);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___PHVideoRequestOptions_1126d2ae0;
    _objc_opt_new(PTR__OBJC_CLASS___PHVideoRequestOptions_1126d2ae0);
    func_0x00010c18ba80();
    func_0x00010c1cc000(puVar2);
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    _objc_retain(uVar5);
    puVar4 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(uVar5);
    func_0x00010c134700(puVar4);
    _objc_release(puVar4);
    _objc_release(uVar5);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_release(uVar5);
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dfb3dc; end: 106dfb60b;  */

void FUN_106dfb3dc(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 == (undefined *)0x0) {
    lVar6 = *(long *)(param_1 + 0x28);
  }
  else if (*(long *)(param_1 + 0x30) == 0) {
    lVar6 = *(long *)(param_1 + 0x28);
  }
  else {
    puVar1 = PTR_PTR_1126ba150;
    func_0x00010c22e420();
    if ((int)puVar1 == 0) {
      puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      puVar2 = param_2;
      _objc_opt_isKindOfClass(param_2,puVar1);
      if (((ulong)puVar2 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___AVComposition_1126cfa20;
        _objc_opt_class(PTR__OBJC_CLASS___AVComposition_1126cfa20);
        puVar2 = param_2;
        _objc_opt_isKindOfClass(param_2,puVar1);
        if (((ulong)puVar2 & 1) != 0) {
          puVar2 = param_2;
          func_0x00010c2791a0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c1585e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar5;
          func_0x00010c247d80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar2);
          goto joined_r0x000106dfb578;
        }
      }
      else {
        puVar1 = param_2;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
joined_r0x000106dfb578:
        if (puVar1 != (undefined *)0x0) {
          (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar1,0);
          goto LAB_106dfb5d4;
        }
      }
      lVar6 = *(long *)(param_1 + 0x28);
    }
    else {
      func_0x00010c10ae00(PTR_PTR_1126d2ad8);
      lVar6 = *(long *)(param_1 + 0x28);
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,puVar1);
LAB_106dfb5d4:
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dfb60c; end: 106dfb7ab; -[SCMemoriesSnapTranscoder _downloadCloudFileIfNeededForSnap:memoriesGrapheneContext:videoTranscodeProgressCompletion:cloudFSCompletion:] */

void FUN_106dfb60c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c13a8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 200);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106dfb7ac;
  puStack_70 = &UNK_110853170;
  uVar4 = *(undefined8 *)(param_1 + 200);
  uStack_68 = param_5;
  _objc_retain(param_5);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106dfb7c4;
  puStack_a0 = &UNK_1108bbcf8;
  uStack_98 = uVar2;
  uStack_90 = param_6;
  _objc_retain(param_6);
  func_0x00010bf89240(uVar2,param_2,uVar3,param_4,&puStack_88,uVar4,&puStack_b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 106dfb7ac; end: 106dfb7c3;  */

void FUN_106dfb7ac(double param_1,long param_2)

{
  if (*(long *)(param_2 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106dfb7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))((float)param_1);
    return;
  }
  return;
}



/* Entry: 106dfb7c4; end: 106dfb87f;  */

void FUN_106dfb7c4(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 != 0) {
    if (param_2 == 0) {
      if (param_3 == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        pcVar4 = *(code **)(lVar5 + 0x10);
        lVar3 = 0;
      }
      else {
        pcVar4 = *(code **)(lVar5 + 0x10);
        uVar2 = 0;
        lVar3 = param_3;
      }
      (*pcVar4)(lVar5,uVar2,lVar3);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,0,puVar1);
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dfb880; end: 106dfbbf3; -[SCMemoriesSnapTranscoder _exportStoriesImageToVideoForSnap:videoCompletion:videoTranscodeProgressCompletion:errorCompletion:] */

void FUN_106dfb880(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126bc7b8;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126bfb98;
  puVar3 = puVar2;
  func_0x00010c0ef4a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c230420();
  _objc_release(puVar3);
  _objc_initWeak(auStack_68,param_1);
  if (((ulong)puVar4 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bfbc8;
    func_0x00010bf586e0(PTR_PTR_1126bfbc8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 200);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106dfbbf4;
    puStack_98 = &UNK_11097de40;
    _objc_retain(param_6);
    uStack_88 = param_6;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    uStack_90 = param_3;
    _objc_retain(param_4);
    uStack_80 = param_4;
    _objc_retain(param_5);
    uStack_78 = param_5;
    func_0x00010c134cc0(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar1);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_70);
    uVar1 = uStack_88;
  }
  else {
    puVar4 = PTR_PTR_1126bf788;
    _objc_alloc(PTR_PTR_1126bf788);
    func_0x00010c017ba0();
    _objc_retain(param_6);
    _objc_copyWeak(auStack_b8,auStack_68);
    _objc_retain(param_3);
    _objc_retain(puVar2);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010be05da0(param_1);
    _objc_release(puVar4);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_b8);
    uVar1 = param_6;
  }
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dfbbf4; end: 106dfbd1b;  */

void FUN_106dfbbf4(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  }
  else {
    puVar1 = (undefined *)(param_1 + 0x40);
    _objc_loadWeakRetained(puVar1);
    func_0x00010be0c680();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dfbd1c; end: 106dfbf57; -[SCMemoriesSnapTranscoder _exportAnimatedStoriesImageToVideoForSnap:image:videoCompletion:videoTranscodeProgressCompletion:errorCompletion:] */

double FUN_106dfbd1c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  double dVar9;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c2a5040();
  dVar9 = (double)(int)uVar2;
  uVar3 = param_4;
  func_0x00010bfe0640();
  func_0x00010be06ae0(param_2,param_3,param_4);
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  uVar7 = *(ulong *)(param_2 + 0x68);
  _objc_retain(uVar2);
  _objc_retain(param_6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106dff598;
  puStack_a0 = &UNK_110857fa0;
  uStack_98 = param_6;
  _objc_retain(uVar7);
  _objc_retain(param_5);
  ppuVar4 = &puStack_b8;
  _objc_retainBlock();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = param_5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_90,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x106dff5a8;
  puStack_c8 = &UNK_110857fa0;
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_106dff5b4;
  puStack_f0 = &UNK_11097dff0;
  uStack_e8 = uVar2;
  ppuStack_c0 = ppuVar4;
  _objc_retain(ppuVar4);
  _objc_retain(uVar2);
  uVar6 = uVar7;
  func_0x00010bf23240(dVar9,(double)(int)uVar3,(double)(float)param_1,uVar7,param_3,puVar5,0,0,
                      &puStack_e0,&puStack_108);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar5);
  uVar7 = uVar6;
  func_0x00010bf9d620(uVar2);
  _objc_release(uVar6);
  _objc_release(uStack_e8);
  _objc_release(ppuStack_c0);
  _objc_release(ppuVar4);
  _objc_release(uStack_98);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return dVar9;
  }
  ___stack_chk_fail();
  fVar8 = SUB84(dVar9,0);
  _objc_retain(uVar7);
  uVar6 = uVar7;
  func_0x00010bfed740();
  dVar9 = 3.0;
  if (((uVar6 & 1) == 0) && (func_0x00010bf8b160(uVar7), 0.0 < fVar8)) {
    func_0x00010bf8b160(uVar7);
    dVar9 = (double)fVar8;
  }
  _objc_release(uVar7);
  return dVar9;
}



/* Entry: 106dfbf58; end: 106dfbfbb; -[SCMemoriesSnapTranscoder _durationForSnap:] */

double FUN_106dfbf58(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  double dVar2;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfed740();
  dVar2 = 3.0;
  if (((uVar1 & 1) == 0) && (func_0x00010bf8b160(param_4), 0.0 < param_1)) {
    func_0x00010bf8b160(param_4);
    dVar2 = (double)param_1;
  }
  _objc_release(param_4);
  return dVar2;
}



/* Entry: 106dfbfbc; end: 106dfbffb; -[SCMemoriesSnapTranscoder generateShareableMediaWithGallerySnaps:isStory:cameraActiveVideoPaths:watermarkProfile:errorHandler:loggingHandler:] */

void FUN_106dfbfbc(void)

{
  int in_w3;
  
  if (in_w3 == 0) {
    func_0x00010be1bd40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be1bd60();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106dfbffc; end: 106dfc367; -[SCMemoriesSnapTranscoder generateShareableMediaWithSnapIds:isStory:cameraActiveVideoPaths:watermarkProfile:errorHandler:loggingHandler:] */

void FUN_106dfbffc(long param_1,undefined8 param_2,long param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  undefined *puStack_580;
  long lStack_550;
  undefined1 auStack_4f0 [8];
  undefined *puStack_4e8;
  undefined8 uStack_4e0;
  code *pcStack_4d8;
  undefined *puStack_4d0;
  undefined8 uStack_4c8;
  long lStack_4c0;
  ulong uStack_4b8;
  undefined **ppuStack_4b0;
  undefined **ppuStack_4a8;
  undefined **ppuStack_4a0;
  undefined1 auStack_498 [8];
  undefined1 auStack_490 [8];
  undefined *puStack_488;
  undefined8 uStack_480;
  code *pcStack_478;
  undefined *puStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 *puStack_410;
  long lStack_408;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  code *pcStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 *puStack_3c8;
  long lStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  long lStack_398;
  undefined1 auStack_390 [8];
  undefined1 auStack_388 [8];
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  long lStack_290;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126af4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7580();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar4 = puVar2;
  }
  _objc_retain(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(puVar4);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  puVar2 = puVar4;
  func_0x00010bf52a60();
  lVar23 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar23) {
        _objc_enumerationMutation(puVar4);
      }
      lVar21 = *(long *)((long)puVar20 * 8);
      lVar7 = lVar21;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar7 != 0) {
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(lVar21);
      }
      puVar20 = puVar20 + 1;
    } while (puVar2 != puVar20);
    puVar2 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar23 = param_3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar23 != 0) {
    lVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_3);
      }
      puVar20 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar20 != (undefined *)0x0) {
        func_0x00010befa120(puVar2);
      }
      _objc_release(puVar20);
      lVar21 = lVar21 + 1;
    } while (lVar23 != lVar21);
    lVar23 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar16 = (ulong)param_4;
  puVar20 = puVar2;
  uVar1 = param_5;
  uVar17 = param_6;
  func_0x00010bfc0100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
    ___stack_chk_fail();
    lStack_290 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar20);
    _objc_retain(uVar16);
    _objc_retain(uVar1);
    _objc_retain(uVar17);
    puVar4 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b60();
    _objc_release(puVar4);
    puStack_338 = &uStack_340;
    uStack_340 = 0;
    uStack_330 = 0x3032000000;
    pcStack_328 = FUN_106dfcca4;
    uStack_320 = 0x106dfccb4;
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar20;
    puStack_318 = puVar4;
    func_0x00010b5fb44c();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(ulong *)(param_3 + 0xa0);
    func_0x000108ec0158();
    puStack_580 = PTR_PTR_1126af4c0;
    if ((int)uVar5 == 0) {
      puStack_580 = (undefined *)0x0;
    }
    else {
      uVar6 = *(undefined8 *)(param_3 + 0x10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa6e80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
    }
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    lStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    plStack_370 = (long *)0x0;
    _objc_retain(puVar20);
    puVar3 = puVar20;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar18 = *plStack_370;
      lStack_550 = 0;
      uVar19 = uVar5;
      do {
        puVar22 = (undefined *)0x0;
        do {
          if (*plStack_370 != lVar18) {
            _objc_enumerationMutation(puVar20);
          }
          puVar8 = PTR_PTR_1126af4c0;
          lVar23 = *(long *)(lStack_378 + (long)puVar22 * 8);
          if ((int)uVar19 == 0) {
            lVar7 = *(long *)(param_3 + 0x10);
            func_0x00010c269d40(lVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa7060();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            lVar7 = lVar23;
            func_0x00010c241220(lVar23);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puStack_580;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(lVar7);
          if (puVar8 != (undefined *)0x0) {
            uVar9 = *(undefined8 *)(param_3 + 0xb0);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar9;
            func_0x00010c290de0();
            _objc_release(uVar9);
            puVar12 = puVar8;
            if ((int)uVar6 == 0) {
              puVar10 = puVar8;
              func_0x00010bf97200(puVar8);
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar4;
              func_0x00010bf4b900();
              _objc_release(puVar10);
              if (((ulong)puVar11 & 1) == 0) {
                func_0x00010bf97200(puVar8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar4);
LAB_106dfc6b8:
                _objc_release(puVar12);
                goto LAB_106dfc6c0;
              }
            }
            else {
              puVar10 = puVar8;
              func_0x00010bfbdda0();
              func_0x00010b5fa33c();
              if (puVar10 == (undefined *)0x8) {
                puVar10 = puVar8;
                func_0x00010bf97200(puVar8);
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar4;
                func_0x00010bf4b900();
                _objc_release(puVar10);
                if (((ulong)puVar11 & 1) == 0) {
                  func_0x00010bf97200(puVar8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar4);
                  goto LAB_106dfc6b8;
                }
              }
              else {
LAB_106dfc6c0:
                uVar6 = 0;
                _dispatch_semaphore_create();
                _objc_initWeak(auStack_388,param_3);
                puVar12 = PTR_PTR_1126ae720;
                puStack_3b8 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_3b0 = 0xc2000000;
                pcStack_3a8 = FUN_106dfccbc;
                puStack_3a0 = &UNK_11097da10;
                _objc_copyWeak(auStack_390,auStack_388);
                lStack_398 = lVar23;
                func_0x00010bf11fe0();
                _objc_retainAutoreleasedReturnValue();
                puStack_400 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_3f8 = 0xc2000000;
                pcStack_3f0 = FUN_106dfcd80;
                puStack_3e8 = &UNK_11097da40;
                puStack_3c8 = &uStack_340;
                _objc_retain(puVar2);
                lStack_3c0 = lStack_550;
                puStack_3e0 = puVar2;
                _objc_retain(puVar12);
                puStack_3d8 = puVar12;
                _objc_retain(uVar6);
                ppuVar13 = &puStack_400;
                uStack_3d0 = uVar6;
                _objc_retainBlock();
                puStack_458 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_450 = 0xc2000000;
                uStack_448 = 0x106dfce30;
                puStack_440 = &UNK_11097de70;
                _objc_retain(puVar2);
                puStack_410 = &uStack_340;
                lStack_408 = lStack_550;
                puStack_438 = puVar2;
                _objc_retain(puVar12);
                puStack_430 = puVar12;
                _objc_retain(uVar17);
                uStack_418 = uVar17;
                _objc_retain(puVar8);
                puStack_428 = puVar8;
                _objc_retain(uVar6);
                ppuVar14 = &puStack_458;
                uStack_420 = uVar6;
                _objc_retainBlock();
                puStack_488 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_480 = 0xc2000000;
                pcStack_478 = FUN_106dfcf20;
                puStack_470 = &UNK_1108538b0;
                _objc_retain(uVar1);
                uStack_460 = uVar1;
                _objc_retain(uVar6);
                ppuVar15 = &puStack_488;
                uStack_468 = uVar6;
                _objc_retainBlock();
                lVar7 = lVar23;
                func_0x00010c23ff80();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (lVar7 == 0) {
                  puVar10 = puVar8;
                  func_0x00010bfbdda0();
                  func_0x00010b5fa33c();
                  if (puVar10 == (undefined *)0x8) {
                    _objc_initWeak(auStack_490,param_3);
                    _objc_copyWeak(auStack_4f0,auStack_490);
                    _objc_retain(uVar6);
                    _objc_retain(ppuVar15);
                    _objc_retain(uVar16);
                    _objc_retain(ppuVar14);
                    _objc_retain(ppuVar13);
                    func_0x00010be78b60(param_3);
                    _objc_release(ppuVar13);
                    _objc_release(ppuVar14);
                    _objc_release(uVar16);
                    _objc_release(ppuVar15);
                    _objc_release(uVar6);
                    _objc_destroyWeak(auStack_4f0);
                    _objc_destroyWeak(auStack_490);
                  }
                  else {
                    func_0x00010c279b60(param_3);
                  }
                }
                else {
                  _objc_initWeak(auStack_490,param_3);
                  puStack_4e8 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_4e0 = 0xc2000000;
                  pcStack_4d8 = FUN_106dfcf50;
                  puStack_4d0 = &UNK_11097dea0;
                  _objc_copyWeak(auStack_498,auStack_490);
                  _objc_retain(uVar6);
                  uStack_4c8 = uVar6;
                  _objc_retain(ppuVar15);
                  lStack_4c0 = lVar23;
                  ppuStack_4b0 = ppuVar15;
                  _objc_retain(uVar16);
                  uStack_4b8 = uVar16;
                  _objc_retain(ppuVar14);
                  ppuStack_4a8 = ppuVar14;
                  _objc_retain(ppuVar13);
                  ppuStack_4a0 = ppuVar13;
                  func_0x00010be78b00(param_3);
                  _objc_release(ppuStack_4a0);
                  _objc_release(ppuStack_4a8);
                  _objc_release(uStack_4b8);
                  _objc_release(ppuStack_4b0);
                  _objc_release(uStack_4c8);
                  _objc_destroyWeak(auStack_498);
                  _objc_destroyWeak(auStack_490);
                }
                _dispatch_semaphore_wait(uVar6,0xffffffffffffffff);
                _objc_release(ppuVar15);
                _objc_release(uStack_468);
                _objc_release(uStack_460);
                _objc_release(ppuVar14);
                _objc_release(uStack_420);
                _objc_release(puStack_428);
                _objc_release(uStack_418);
                _objc_release(puStack_430);
                _objc_release(puStack_438);
                _objc_release(ppuVar13);
                _objc_release(uStack_3d0);
                _objc_release(puStack_3d8);
                _objc_release(puStack_3e0);
                _objc_release(puVar12);
                _objc_destroyWeak(auStack_390);
                _objc_destroyWeak(auStack_388);
                _objc_release(uVar6);
                lStack_550 = lStack_550 + 1;
              }
            }
          }
          _objc_release(puVar8);
          puVar22 = puVar22 + 1;
          uVar19 = uVar5 & 0xffffffff;
        } while (puVar3 != puVar22);
        puVar3 = puVar20;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar20);
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar3);
    param_1 = puStack_338[5];
    func_0x00010bf51e00(param_1);
    _objc_release(puStack_580);
    _objc_release(puVar4);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_340,8);
    _objc_release(puStack_318);
    _objc_release(uVar17);
    _objc_release(uVar1);
    _objc_release(uVar16);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_290) {
      ___stack_chk_fail();
      lVar18 = 8;
      __Block_object_dispose(&uStack_340);
      __Unwind_Resume();
      *(undefined8 *)(puVar20 + 0x28) = *(undefined8 *)(lVar18 + 0x28);
      *(undefined8 *)(lVar18 + 0x28) = 0;
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106dfc368; end: 106dfcca3; -[SCMemoriesSnapTranscoder _generateShareableMediaForSnapsWithGallerySnaps:watermarkProfile:errorHandler:loggingHandler:] */

void FUN_106dfc368(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_370;
  long lStack_340;
  undefined1 auStack_2e0 [8];
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined1 auStack_288 [8];
  undefined1 auStack_280 [8];
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar1);
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_106dfcca4;
  uStack_110 = 0x106dfccb4;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_3;
  puStack_108 = puVar1;
  func_0x00010b5fb44c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0xa0);
  func_0x000108ec0158();
  puStack_370 = PTR_PTR_1126af4c0;
  if ((int)uVar2 == 0) {
    puStack_370 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa6e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar15 = *plStack_160;
    lStack_340 = 0;
    uVar16 = uVar2;
    do {
      lVar17 = 0;
      do {
        if (*plStack_160 != lVar15) {
          _objc_enumerationMutation(param_3);
        }
        puVar6 = PTR_PTR_1126af4c0;
        lVar18 = *(long *)(lStack_168 + lVar17 * 8);
        if ((int)uVar16 == 0) {
          lVar5 = *(long *)(param_1 + 0x10);
          func_0x00010c269d40(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7060();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          lVar5 = lVar18;
          func_0x00010c241220(lVar18);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puStack_370;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(lVar5);
        if (puVar6 != (undefined *)0x0) {
          uVar7 = *(undefined8 *)(param_1 + 0xb0);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar7;
          func_0x00010c290de0();
          _objc_release(uVar7);
          puVar10 = puVar6;
          if ((int)uVar3 == 0) {
            puVar8 = puVar6;
            func_0x00010bf97200(puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar1;
            func_0x00010bf4b900();
            _objc_release(puVar8);
            if (((ulong)puVar9 & 1) == 0) {
              func_0x00010bf97200(puVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar1);
LAB_106dfc6b8:
              _objc_release(puVar10);
              goto LAB_106dfc6c0;
            }
          }
          else {
            puVar8 = puVar6;
            func_0x00010bfbdda0();
            func_0x00010b5fa33c();
            if (puVar8 == (undefined *)0x8) {
              puVar8 = puVar6;
              func_0x00010bf97200(puVar6);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar1;
              func_0x00010bf4b900();
              _objc_release(puVar8);
              if (((ulong)puVar9 & 1) == 0) {
                func_0x00010bf97200(puVar6);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar1);
                goto LAB_106dfc6b8;
              }
            }
            else {
LAB_106dfc6c0:
              uVar3 = 0;
              _dispatch_semaphore_create();
              _objc_initWeak(auStack_178,param_1);
              puVar10 = PTR_PTR_1126ae720;
              puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_1a0 = 0xc2000000;
              pcStack_198 = FUN_106dfccbc;
              puStack_190 = &UNK_11097da10;
              _objc_copyWeak(auStack_180,auStack_178);
              lStack_188 = lVar18;
              func_0x00010bf11fe0();
              _objc_retainAutoreleasedReturnValue();
              puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_1e8 = 0xc2000000;
              pcStack_1e0 = FUN_106dfcd80;
              puStack_1d8 = &UNK_11097da40;
              puStack_1b8 = &uStack_130;
              _objc_retain(lVar14);
              lStack_1b0 = lStack_340;
              lStack_1d0 = lVar14;
              _objc_retain(puVar10);
              puStack_1c8 = puVar10;
              _objc_retain(uVar3);
              ppuVar11 = &puStack_1f0;
              uStack_1c0 = uVar3;
              _objc_retainBlock();
              puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_240 = 0xc2000000;
              uStack_238 = 0x106dfce30;
              puStack_230 = &UNK_11097de70;
              _objc_retain(lVar14);
              puStack_200 = &uStack_130;
              lStack_1f8 = lStack_340;
              lStack_228 = lVar14;
              _objc_retain(puVar10);
              puStack_220 = puVar10;
              _objc_retain(param_6);
              uStack_208 = param_6;
              _objc_retain(puVar6);
              puStack_218 = puVar6;
              _objc_retain(uVar3);
              ppuVar12 = &puStack_248;
              uStack_210 = uVar3;
              _objc_retainBlock();
              puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_270 = 0xc2000000;
              pcStack_268 = FUN_106dfcf20;
              puStack_260 = &UNK_1108538b0;
              _objc_retain(param_5);
              uStack_250 = param_5;
              _objc_retain(uVar3);
              ppuVar13 = &puStack_278;
              uStack_258 = uVar3;
              _objc_retainBlock();
              lVar5 = lVar18;
              func_0x00010c23ff80();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar5 == 0) {
                puVar8 = puVar6;
                func_0x00010bfbdda0();
                func_0x00010b5fa33c();
                if (puVar8 == (undefined *)0x8) {
                  _objc_initWeak(auStack_280,param_1);
                  _objc_copyWeak(auStack_2e0,auStack_280);
                  _objc_retain(uVar3);
                  _objc_retain(ppuVar13);
                  _objc_retain(param_4);
                  _objc_retain(ppuVar12);
                  _objc_retain(ppuVar11);
                  func_0x00010be78b60(param_1);
                  _objc_release(ppuVar11);
                  _objc_release(ppuVar12);
                  _objc_release(param_4);
                  _objc_release(ppuVar13);
                  _objc_release(uVar3);
                  _objc_destroyWeak(auStack_2e0);
                  _objc_destroyWeak(auStack_280);
                }
                else {
                  func_0x00010c279b60(param_1);
                }
              }
              else {
                _objc_initWeak(auStack_280,param_1);
                puStack_2d8 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_2d0 = 0xc2000000;
                pcStack_2c8 = FUN_106dfcf50;
                puStack_2c0 = &UNK_11097dea0;
                _objc_copyWeak(auStack_288,auStack_280);
                _objc_retain(uVar3);
                uStack_2b8 = uVar3;
                _objc_retain(ppuVar13);
                lStack_2b0 = lVar18;
                ppuStack_2a0 = ppuVar13;
                _objc_retain(param_4);
                uStack_2a8 = param_4;
                _objc_retain(ppuVar12);
                ppuStack_298 = ppuVar12;
                _objc_retain(ppuVar11);
                ppuStack_290 = ppuVar11;
                func_0x00010be78b00(param_1);
                _objc_release(ppuStack_290);
                _objc_release(ppuStack_298);
                _objc_release(uStack_2a8);
                _objc_release(ppuStack_2a0);
                _objc_release(uStack_2b8);
                _objc_destroyWeak(auStack_288);
                _objc_destroyWeak(auStack_280);
              }
              _dispatch_semaphore_wait(uVar3,0xffffffffffffffff);
              _objc_release(ppuVar13);
              _objc_release(uStack_258);
              _objc_release(uStack_250);
              _objc_release(ppuVar12);
              _objc_release(uStack_210);
              _objc_release(puStack_218);
              _objc_release(uStack_208);
              _objc_release(puStack_220);
              _objc_release(lStack_228);
              _objc_release(ppuVar11);
              _objc_release(uStack_1c0);
              _objc_release(puStack_1c8);
              _objc_release(lStack_1d0);
              _objc_release(puVar10);
              _objc_destroyWeak(auStack_180);
              _objc_destroyWeak(auStack_178);
              _objc_release(uVar3);
              lStack_340 = lStack_340 + 1;
            }
          }
        }
        _objc_release(puVar6);
        lVar17 = lVar17 + 1;
        uVar16 = uVar2 & 0xffffffff;
      } while (lVar4 != lVar17);
      lVar4 = param_3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar6);
  uVar3 = puStack_128[5];
  func_0x00010bf51e00(uVar3);
  _objc_release(puStack_370);
  _objc_release(puVar1);
  _objc_release(lVar14);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(puStack_108);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
    return;
  }
  ___stack_chk_fail();
  lVar14 = 8;
  __Block_object_dispose(&uStack_130);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar14 + 0x28);
  *(undefined8 *)(lVar14 + 0x28) = 0;
  return;
}



/* Entry: 106dfcca4; end: 106dfccbb;  */

void FUN_106dfcca4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106dfccbc; end: 106dfcd7f;  */

void FUN_106dfccbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be1b480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b1c68;
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0dfd40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe94e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010befa120(uVar4);
  _objc_release(puVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106dfcd80; end: 106dfcf1f;  */

void FUN_106dfcd80(long param_1,undefined8 param_2)

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



/* Entry: 106dfcf20; end: 106dfcf4f;  */

void FUN_106dfcf20(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106dfcf50; end: 106dfd087;  */

void FUN_106dfcf50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
  }
  else if (param_3 == 0) {
    func_0x00010bece820(lVar1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),param_3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dfd088; end: 106dfd0a7; -[SCMemoriesSnapTranscoder generateShareableAsyncMediaWithGallerySnap:isStory:cameraActiveVideoPaths:watermarkProfile:completionHandler:loggingHandler:] */

void FUN_106dfd088(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be1bcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__generateShareableAsyncMediaForS_1125648d8,param_3,param_5,param_7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be1bcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__generateShareableAsyncMediaForS_1125648d0,param_3,param_6,param_7,
             param_8);
  return;
}



/* Entry: 106dfd0a8; end: 106dfd6ef; -[SCMemoriesSnapTranscoder _generateShareableAsyncMediaForSnapWithGallerySnap:watermarkProfile:completionHandler:loggingHandler:] */

void FUN_106dfd0a8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010b5fa088(param_3);
  uVar3 = param_3;
  func_0x00010b5fb3bc(param_3,0,(uint)(uVar2 < 0xd) & 0x1566U >> (ulong)((uint)uVar2 & 0x1f));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126af4c0;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (puVar1 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,0,puVar9);
    _objc_release(puVar9);
    goto LAB_106dfd63c;
  }
  uVar4 = 0;
  _dispatch_semaphore_create();
  _objc_initWeak(auStack_80,param_1);
  puVar5 = PTR_PTR_1126ae720;
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106dfd6f0;
  puStack_98 = &UNK_11097da10;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  uStack_90 = param_3;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar9;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x106dfd738;
  puStack_d8 = &UNK_11097ded0;
  _objc_retain(uVar3);
  uStack_d0 = uVar3;
  _objc_retain(puVar5);
  puStack_c8 = puVar5;
  _objc_retain(param_5);
  lStack_b8 = param_5;
  _objc_retain(uVar4);
  ppuVar6 = &puStack_f0;
  uStack_c0 = uVar4;
  _objc_retainBlock();
  puStack_140 = puVar9;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_106dfd794;
  puStack_128 = &UNK_11097df00;
  _objc_retain(uVar3);
  uStack_120 = uVar3;
  _objc_retain(puVar5);
  puStack_118 = puVar5;
  _objc_retain(param_6);
  uStack_100 = param_6;
  _objc_retain(puVar1);
  puStack_110 = puVar1;
  _objc_retain(param_5);
  lStack_f8 = param_5;
  _objc_retain(uVar4);
  ppuVar7 = &puStack_140;
  uStack_108 = uVar4;
  _objc_retainBlock();
  puStack_170 = puVar9;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_106dfd854;
  puStack_158 = &UNK_1108538b0;
  _objc_retain(param_5);
  lStack_148 = param_5;
  _objc_retain(uVar4);
  ppuVar8 = &puStack_170;
  uStack_150 = uVar4;
  _objc_retainBlock();
  uVar2 = param_3;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 == 0) {
    puVar10 = puVar1;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (puVar10 == (undefined *)0x8) {
      _objc_initWeak(auStack_178,param_1);
      puStack_228 = puVar9;
      uStack_220 = 0xc2000000;
      uStack_218 = 0x106dfd924;
      puStack_210 = &UNK_11097dea0;
      ppuVar12 = &puStack_228;
      _objc_copyWeak(auStack_1d8,auStack_178);
      _objc_retain(uVar4);
      uStack_208 = uVar4;
      _objc_retain(ppuVar8);
      ppuStack_1f0 = ppuVar8;
      _objc_retain(param_3);
      uStack_200 = param_3;
      _objc_retain(param_4);
      uStack_1f8 = param_4;
      _objc_retain(ppuVar7);
      ppuStack_1e8 = ppuVar7;
      _objc_retain(ppuVar6);
      ppuStack_1e0 = ppuVar6;
      func_0x00010be78b60(param_1);
      _objc_release(ppuStack_1e0);
      _objc_release(ppuStack_1e8);
      _objc_release(uStack_1f8);
      _objc_release(uStack_200);
      _objc_release(ppuStack_1f0);
      uVar11 = uStack_208;
      goto LAB_106dfd54c;
    }
    func_0x00010c279b60(param_1);
  }
  else {
    _objc_initWeak(auStack_178,param_1);
    puStack_1d0 = puVar9;
    uStack_1c8 = 0xc2000000;
    pcStack_1c0 = FUN_106dfd888;
    puStack_1b8 = &UNK_11097dea0;
    ppuVar12 = &puStack_1d0;
    _objc_copyWeak(auStack_180,auStack_178);
    _objc_retain(uVar4);
    uStack_1b0 = uVar4;
    _objc_retain(ppuVar8);
    ppuStack_198 = ppuVar8;
    _objc_retain(param_3);
    uStack_1a8 = param_3;
    _objc_retain(param_4);
    uStack_1a0 = param_4;
    _objc_retain(ppuVar7);
    ppuStack_190 = ppuVar7;
    _objc_retain(ppuVar6);
    ppuStack_188 = ppuVar6;
    func_0x00010be78b00(param_1);
    _objc_release(ppuStack_188);
    _objc_release(ppuStack_190);
    _objc_release(uStack_1a0);
    _objc_release(uStack_1a8);
    _objc_release(ppuStack_198);
    uVar11 = uStack_1b0;
LAB_106dfd54c:
    _objc_release(uVar11);
    _objc_destroyWeak(ppuVar12 + 10);
    _objc_destroyWeak(auStack_178);
  }
  _dispatch_semaphore_wait(uVar4,0xffffffffffffffff);
  puVar9 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar9);
  _objc_release(ppuVar8);
  _objc_release(uStack_150);
  _objc_release(lStack_148);
  _objc_release(ppuVar7);
  _objc_release(uStack_108);
  _objc_release(lStack_f8);
  _objc_release(puStack_110);
  _objc_release(uStack_100);
  _objc_release(puStack_118);
  _objc_release(uStack_120);
  _objc_release(ppuVar6);
  _objc_release(uStack_c0);
  _objc_release(lStack_b8);
  _objc_release(puStack_c8);
  _objc_release(uStack_d0);
  _objc_release(puVar5);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar4);
LAB_106dfd63c:
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dfd6f0; end: 106dfd793;  */

void FUN_106dfd6f0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1b460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106dfd794; end: 106dfd853;  */

void FUN_106dfd794(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_106df8508(param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1c68;
  func_0x00010c29be00(PTR_PTR_1126b1c68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfbdda0(uVar3);
    (**(code **)(lVar4 + 0x10))(lVar4,(long)(int)uVar3);
  }
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),puVar2,0);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x38));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106dfd854; end: 106dfd887;  */

void FUN_106dfd854(long param_1,undefined8 param_2)

{
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106dfd888; end: 106dfd9bf;  */

void FUN_106dfd888(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
  }
  else if (param_3 == 0) {
    func_0x00010bece820(lVar1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),param_3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dfd9c0; end: 106dfdb3b; -[SCMemoriesSnapTranscoder _prepareMediaForSnapDocBasedSnap:completion:] */

void FUN_106dfd9c0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b24c8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 1;
  lVar11 = 0;
  func_0x00010c017280();
  _objc_release(puVar2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106dfdb3c;
  puStack_68 = &UNK_11097df30;
  uStack_60 = param_3;
  uStack_58 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar7 = &puStack_80;
  uVar6 = 0;
  func_0x00010c142c20(puVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  _objc_retain(ppuVar7);
  _objc_retain(uVar8);
  _objc_retain(uVar9);
  _objc_retain(uVar10);
  _objc_retain(lVar11);
  if (param_2 == 0) {
    if (lVar11 == 0) {
      lVar4 = *(long *)(puVar1 + 0x20);
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        uVar13 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(puVar1 + 0x20);
        func_0x00010c241220(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar10;
        func_0x00010c0e00e0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
      }
      _objc_release(lVar4);
      (**(code **)(*(long *)(puVar1 + 0x28) + 0x10))(*(long *)(puVar1 + 0x28),uVar13,0);
      _objc_release(uVar13);
      goto LAB_106dfdbd8;
    }
    lVar3 = *(long *)(puVar1 + 0x28);
    pcVar12 = *(code **)(lVar3 + 0x10);
    lVar4 = lVar11;
  }
  else {
    lVar3 = *(long *)(puVar1 + 0x28);
    pcVar12 = *(code **)(lVar3 + 0x10);
    lVar4 = 0;
  }
  (*pcVar12)(lVar3,0,lVar4);
LAB_106dfdbd8:
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 106dfdb3c; end: 106dfdc9b;  */

void FUN_106dfdb3c(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_2 == 0) {
    if (param_8 == 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c241220(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_7;
        func_0x00010c0e00e0(param_7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
      }
      _objc_release(lVar2);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar5,0);
      _objc_release(uVar5);
      goto LAB_106dfdbd8;
    }
    lVar1 = *(long *)(param_1 + 0x28);
    pcVar4 = *(code **)(lVar1 + 0x10);
    lVar2 = param_8;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    pcVar4 = *(code **)(lVar1 + 0x10);
    lVar2 = 0;
  }
  (*pcVar4)(lVar1,0,lVar2);
LAB_106dfdbd8:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dfdc9c; end: 106dfe0a7; -[SCMemoriesSnapTranscoder _prepareMediaForTimelineDraftEntry:completion:] */

void FUN_106dfdc9c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126af4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar8 = param_3;
  puVar3 = puVar2;
  func_0x000107da0750();
  iVar10 = (int)puVar3;
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (lVar8 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = lVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar16 = puVar3;
  func_0x00010bf529e0();
  if (puVar16 == (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = param_3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar4;
    uVar1 = uVar5;
    func_0x000107da0820();
    iVar10 = (int)uVar1;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  puVar4 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010b5fa088();
  func_0x000106e1d104();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b24c8;
  _objc_alloc();
  uVar5 = 0;
  uVar13 = 1;
  lVar14 = 0;
  puVar12 = puVar3;
  func_0x00010c017280();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x106dfdf48;
  puStack_90 = &UNK_11097df30;
  lStack_88 = param_3;
  uStack_80 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar11 = &puStack_a8;
  uVar1 = 0;
  func_0x00010c142c20(puVar4);
  _objc_release(lStack_88);
  _objc_release(uStack_80);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar16);
  _objc_release(puVar3);
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar1);
  _objc_retain(ppuVar11);
  _objc_retain(puVar12);
  _objc_retain(uVar5);
  _objc_retain(uVar13);
  _objc_retain(lVar14);
  if (iVar10 == 0) {
    if (lVar14 == 0) {
      lVar8 = *(long *)(puVar2 + 0x20);
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 == 0) {
        uVar17 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(puVar2 + 0x20);
        func_0x00010bf97200(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar5;
        func_0x00010c0e00e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
      }
      _objc_release(lVar8);
      (**(code **)(*(long *)(puVar2 + 0x28) + 0x10))(*(long *)(puVar2 + 0x28),uVar17,0);
      _objc_release(uVar17);
      goto LAB_106dfdfe4;
    }
    lVar7 = *(long *)(puVar2 + 0x28);
    pcVar15 = *(code **)(lVar7 + 0x10);
    lVar8 = lVar14;
  }
  else {
    lVar7 = *(long *)(puVar2 + 0x28);
    pcVar15 = *(code **)(lVar7 + 0x10);
    lVar8 = 0;
  }
  (*pcVar15)(lVar7,0,lVar8);
LAB_106dfdfe4:
  _objc_release(lVar14);
  _objc_release(uVar13);
  _objc_release(uVar5);
  _objc_release(puVar12);
  _objc_release(ppuVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106dfe0a8; end: 106dfe5b7; -[SCMemoriesSnapTranscoder _generateShareableMediaForStoriesWithGallerySnaps:cameraActiveVideoPaths:] */

void FUN_106dfe0a8(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuStack_130;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  ppuVar4 = param_3;
  func_0x00010bf529e0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar11 = ppuVar4;
  ppuStack_130 = param_3;
  if ((long)ppuVar4 < 1) {
    func_0x00010b5fb44c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    do {
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_alloc_init(PTR__OBJC_CLASS___NSURL_1126ae598);
      func_0x00010befa120(ppuVar3);
      _objc_release(puVar5);
      ppuVar11 = (undefined **)((long)ppuVar11 + -1);
    } while (ppuVar11 != (undefined **)0x0);
    func_0x00010b5fb44c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = (undefined **)0x0;
    do {
      ppuVar6 = param_3;
      func_0x00010c0dfd40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 0;
      _dispatch_semaphore_create();
      puStack_b8 = puVar1;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_106dfe5b8;
      puStack_a0 = &UNK_11097df60;
      _objc_retain(ppuVar3);
      ppuStack_98 = ppuVar3;
      ppuStack_80 = ppuVar11;
      _objc_retain(param_4);
      uStack_90 = param_4;
      _objc_retain(uVar7);
      puStack_e0 = puVar1;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_106dfe650;
      puStack_c8 = &UNK_110849810;
      uStack_c0 = uVar7;
      uStack_88 = uVar7;
      _objc_retain(uVar7);
      func_0x00010c279d60(param_1);
      uVar8 = 0;
      _dispatch_time(0,5000000000);
      _dispatch_semaphore_wait(uVar7,uVar8);
      _objc_release(uStack_c0);
      _objc_release(uStack_88);
      _objc_release(uStack_90);
      _objc_release(ppuStack_98);
      _objc_release(uVar7);
      _objc_release(ppuVar6);
      ppuVar11 = (undefined **)((long)ppuVar11 + 1);
    } while (ppuVar4 != ppuVar11);
  }
  _objc_initWeak(auStack_e8,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_f0,auStack_e8);
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar3;
  func_0x00010bf529e0();
  ppuVar4 = ppuVar3;
  if (ppuVar11 == (undefined **)0x0) {
LAB_106dfe424:
    ppuVar11 = ppuVar3;
    func_0x00010bf529e0();
    if (ppuVar11 == (undefined **)0x0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8;
      goto LAB_106dfe480;
    }
    func_0x00010c0dfd40(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar4;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar11 = ppuVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar11;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar6;
    func_0x00010c08fa60();
    if ((ppuVar9 == (undefined **)0x0) ||
       (ppuVar9 = ppuStack_130, func_0x00010bf529e0(), ppuVar9 == (undefined **)0x0)) {
      _objc_release(ppuVar6);
      _objc_release(ppuVar11);
      goto LAB_106dfe424;
    }
    ppuVar9 = ppuStack_130;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar9;
    func_0x00010c08fa60();
    _objc_release(ppuVar9);
    _objc_release(ppuVar6);
    _objc_release(ppuVar11);
    if (ppuVar10 == (undefined **)0x0) goto LAB_106dfe424;
    func_0x00010c0dfd40(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuStack_130;
    func_0x00010c0dfd40(ppuStack_130);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar4;
    FUN_106df8508(ppuVar4,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar6);
  _objc_release(ppuVar4);
LAB_106dfe480:
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010c0c9f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar5 = PTR_PTR_1126b1c68;
  func_0x00010c29be00(PTR_PTR_1126b1c68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar5);
  _objc_release(uVar7);
  _objc_release(ppuVar11);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_e8);
  _objc_release(ppuStack_130);
  _objc_release(ppuVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106dfe5b8; end: 106dfe64f;  */

void FUN_106dfe5b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c1d04c0(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0899c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010befc900(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106dfe650; end: 106dfe657;  */

void FUN_106dfe650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106dfe658; end: 106dfe6af;  */

void FUN_106dfe658(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010be1b480(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106dfe6b0; end: 106dfeafb; -[SCMemoriesSnapTranscoder _generateShareableAsyncMediaForStoryWithGallerySnap:cameraActiveVideoPaths:completionHandler:] */

void FUN_106dfe6b0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar1);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_106dfcca4;
  uStack_88 = 0x106dfccb4;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc_init();
  uVar2 = param_3;
  puStack_80 = puVar1;
  func_0x00010b5fa088(param_3);
  uVar3 = param_3;
  func_0x00010b5fb3bc(param_3,0,(uint)(uVar2 < 0xd) & 0x1566U >> (ulong)((uint)uVar2 & 0x1f));
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  _dispatch_semaphore_create();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106dfeafc;
  puStack_c8 = &UNK_11097df90;
  puStack_b0 = &uStack_a8;
  _objc_retain(param_4);
  uStack_c0 = param_4;
  _objc_retain(uVar4);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_106dfeba4;
  puStack_f0 = &UNK_110849810;
  uStack_b8 = uVar4;
  _objc_retain(uVar4);
  uStack_e8 = uVar4;
  func_0x00010c279d60(param_1);
  uVar5 = 0;
  _dispatch_time(0,5000000000);
  _dispatch_semaphore_wait(uVar4,uVar5);
  _objc_initWeak(auStack_110,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_118,auStack_110);
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = puStack_a0[5];
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  if (lVar7 == 0) {
    _objc_release(lVar6);
  }
  else {
    uVar2 = uVar3;
    func_0x00010c08fa60();
    _objc_release(lVar6);
    if (uVar2 != 0) {
      ppuVar8 = (undefined **)puStack_a0[5];
      FUN_106df8508(ppuVar8,uVar3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106dfe948;
    }
  }
  uVar5 = puStack_a0[5];
  func_0x00010beec820(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(uVar5);
  ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_106dfe948:
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010c0c9f40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(uVar9);
  puVar10 = PTR_PTR_1126b1c68;
  func_0x00010c29be00(PTR_PTR_1126b1c68);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar11);
  (**(code **)(param_5 + 0x10))(param_5,puVar10,0);
  _objc_release(puVar10);
  _objc_release(uVar5);
  _objc_release(ppuVar8);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_110);
  _objc_release(uStack_e8);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(puStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dfeafc; end: 106dfeba3;  */

void FUN_106dfeafc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  func_0x00010c0899c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc900(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dfeba4; end: 106dfebab;  */

void FUN_106dfeba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106dfebac; end: 106dfec03;  */

void FUN_106dfebac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010be1b460(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106dfec04; end: 106dfeef3; -[SCMemoriesSnapTranscoder generateShareableMediaWithGalleryItems:] */

void FUN_106dfec04(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar2);
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_106dfcca4;
  uStack_118 = 0x106dfccb4;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar2;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar4 = 0;
      _dispatch_semaphore_create();
      _objc_retain();
      _objc_retain(uVar4);
      _objc_retain(uVar4);
      func_0x00010c279b20(param_1);
      _dispatch_semaphore_wait(uVar4,0xffffffffffffffff);
      _objc_release(uVar4);
      _objc_release(uVar4);
      _objc_release(uVar4);
      _objc_release(uVar4);
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar2);
  uVar4 = puStack_130[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(puStack_110);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_138,8);
  __Unwind_Resume();
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x28);
  puVar2 = PTR_PTR_1126b1c68;
  func_0x00010bfe94e0(PTR_PTR_1126b1c68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 106dfeef4; end: 106dfefcb;  */

void FUN_106dfeef4(long param_1,undefined8 param_2)

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



/* Entry: 106dfefcc; end: 106dfefd3;  */

void FUN_106dfefcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106dfefd4; end: 106dff1a7; -[SCMemoriesSnapTranscoder generateShareableAsyncMediaWithGalleryItem:completionHandler:] */

void FUN_106dfefd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar1);
  uVar2 = 0;
  _dispatch_semaphore_create();
  _objc_retain(param_4);
  _objc_retain(uVar2);
  _objc_retain(param_4);
  _objc_retain(uVar2);
  _objc_retain(uVar2);
  _objc_retain(param_4);
  func_0x00010c279b20(param_1);
  _objc_release(param_3);
  _dispatch_semaphore_wait(uVar2,0xffffffffffffffff);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 106dff1a8; end: 106dff29b;  */

void FUN_106dff1a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1c68;
  func_0x00010bfe94e0(PTR_PTR_1126b1c68,param_2,param_2,0,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1,0);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106dff29c; end: 106dff3c7; -[SCMemoriesSnapTranscoder _generateLensIdWithGallerySnaps:] */

void FUN_106dff29c(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
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
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        puVar4 = *(undefined8 **)(lStack_118 + lVar8 * 8);
        puVar6 = param_1;
        func_0x00010be1b460(param_1,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 != (undefined *)0x0) goto LAB_106dff37c;
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_3;
      puVar4 = &uStack_120;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  puVar6 = (undefined *)0x0;
LAB_106dff37c:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126bc7b8;
    uVar5 = *(undefined8 *)(param_3 + 0x10);
    _objc_retain(puVar4);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7160(puVar2,param_2,puVar4,0,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar5);
    puVar3 = puVar2;
    func_0x00010c0ef4a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}


