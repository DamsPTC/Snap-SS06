/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b0aa78; end: 105b0aa8b; -[SCStoriesGrapheneMetricsEmitter logSpotlightSubsFeedEmptyStateShownInViewLocation:] */

/* WARNING: Possible PIC construction at 0x000107ca3894: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ca2da0) */

void FUN_105b0aa78(double param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x23;
  undefined **unaff_x24;
  undefined1 ****ppppuVar15;
  undefined *puVar16;
  double dVar17;
  double unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_280 [8];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined *apuStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined **ppuStack_220;
  undefined8 *puStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined8 *puStack_200;
  undefined **ppuStack_1f8;
  undefined1 ***pppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined *apuStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined **ppuStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined **ppuStack_168;
  undefined8 *puStack_160;
  undefined **ppuStack_158;
  undefined1 **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined *apuStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined **ppuStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined *apuStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_2 + 8);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e1dfb8;
  lVar12 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar5;
  puVar4 = param_4;
  _objc_retain(&PTR____CFConstantStringClassReference_110e1dfb8);
  _objc_retain(param_4);
  ppuVar8 = (undefined **)0x0;
  if (lVar2 != 0) {
    plVar14 = *(long **)(lVar2 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e1dfb8);
    ppuVar3 = ppuVar5;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e1dfb8);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e1dfb8);
    unaff_x24 = apuStack_78;
    func_0x00010002b838(apuStack_78,ppuVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar4 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar4);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,apuStack_78,&lStack_48,2);
    ppuVar3 = (undefined **)&UNK_110a02958;
    unaff_x23 = &uStack_98;
    puVar4 = &uStack_98;
    lVar12 = 1;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02958,puVar4,1);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar2 = 0;
    ppuVar8 = apuStack_78;
    do {
      if ((&cStack_49)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_4);
    if (cStack_61 < '\0') {
      __ZdlPv(apuStack_78[0]);
    }
    _objc_release(param_4);
    _objc_release(&PTR____CFConstantStringClassReference_110e1dfb8);
    ppuVar6 = ppuVar5;
    __Unwind_Resume();
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110e1dfb8;
    puStack_a8 = &SUB_107ca2f60;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar10 = ppuVar3;
    puVar7 = puVar4;
    lVar2 = lVar12;
    ppuStack_e0 = unaff_x24;
    puStack_d8 = unaff_x23;
    puStack_d0 = ppuVar8;
    ppuStack_c8 = ppuVar5;
    puStack_c0 = param_4;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar3);
    _objc_retain(puVar4);
    ppuVar5 = (undefined **)0x0;
    if (ppuVar6 != (undefined **)0x0) {
      plVar14 = (long *)ppuVar6[1];
      _objc_retain(ppuVar3);
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar5 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar5 = ppuVar3;
        _objc_retainAutorelease(ppuVar3);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar3);
      unaff_x24 = apuStack_118;
      func_0x00010002b838(apuStack_118,ppuVar5);
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f44f7d9;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar7 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_100,puVar7);
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      func_0x00010007e1e8(&uStack_138,apuStack_118,&lStack_e8,2);
      ppuVar10 = (undefined **)&UNK_110a029a8;
      unaff_x23 = &uStack_138;
      puVar7 = &uStack_138;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a029a8,puVar7,lVar12);
      puStack_120 = unaff_x23;
      func_0x00010007e5dc(&puStack_120);
      lVar13 = 0;
      ppuVar5 = apuStack_118;
      lVar2 = lVar12;
      do {
        if ((&cStack_e9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(puVar4);
    ppuVar8 = ppuVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
      ___stack_chk_fail();
      _objc_release(puVar4);
      if (cStack_101 < '\0') {
        __ZdlPv(apuStack_118[0]);
      }
      _objc_release(puVar4);
      _objc_release(ppuVar3);
      ppuVar9 = ppuVar8;
      __Unwind_Resume();
      puStack_148 = &SUB_107ca3190;
      lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar6 = ppuVar10;
      puVar11 = puVar7;
      lVar12 = lVar2;
      ppuStack_180 = unaff_x24;
      puStack_178 = unaff_x23;
      puStack_170 = ppuVar5;
      ppuStack_168 = ppuVar8;
      puStack_160 = puVar4;
      ppuStack_158 = ppuVar3;
      ppuStack_150 = &puStack_b0;
      _objc_retain(ppuVar10);
      _objc_retain(puVar7);
      if (ppuVar9 != (undefined **)0x0) {
        plVar14 = (long *)ppuVar9[1];
        ppuVar6 = (undefined **)&UNK_110a029f8;
        (**(code **)(*plVar14 + 0x28))();
        if ((int)plVar14 != 0) {
          plVar14 = (long *)ppuVar9[1];
          _objc_retain(ppuVar10);
          if (ppuVar10 == (undefined **)0x0) {
            ppuVar5 = (undefined **)&UNK_10f44f7d9;
          }
          else {
            ppuVar5 = ppuVar10;
            _objc_retainAutorelease(ppuVar10);
            func_0x00010bdc3520();
          }
          _objc_release(ppuVar10);
          unaff_x24 = apuStack_1b8;
          func_0x00010002b838(apuStack_1b8,ppuVar5);
          _objc_retain(puVar7);
          if (puVar7 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)&UNK_10f44f7d9;
          }
          else {
            _objc_retainAutorelease(puVar7);
            puVar4 = puVar7;
            func_0x00010bdc3520(puVar7);
          }
          _objc_release(puVar7);
          func_0x00010002b838(auStack_1a0,puVar4);
          uStack_1d8 = 0;
          uStack_1d0 = 0;
          uStack_1c8 = 0;
          func_0x00010007e1e8(&uStack_1d8,apuStack_1b8,&lStack_188,2);
          ppuVar6 = (undefined **)&UNK_110a029f8;
          unaff_x23 = &uStack_1d8;
          puVar11 = &uStack_1d8;
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a029f8,puVar11,lVar2);
          puStack_1c0 = unaff_x23;
          func_0x00010007e5dc(&puStack_1c0);
          lVar13 = 0;
          ppuVar9 = apuStack_1b8;
          lVar12 = lVar2;
          do {
            if ((&cStack_189)[lVar13] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar13));
            }
            lVar13 = lVar13 + -0x18;
          } while (lVar13 != -0x30);
        }
      }
      _objc_release(puVar7);
      ppuVar5 = ppuVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
        ___stack_chk_fail();
        _objc_release(puVar7);
        if (cStack_1a1 < '\0') {
          __ZdlPv(apuStack_1b8[0]);
        }
        _objc_release(puVar7);
        _objc_release(ppuVar10);
        ppuVar8 = ppuVar5;
        __Unwind_Resume();
        puStack_1e8 = &SUB_107ca33e0;
        ppppuVar15 = &pppuStack_1f0;
        lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuVar3 = ppuVar6;
        puVar4 = puVar11;
        lVar2 = lVar12;
        ppuStack_220 = unaff_x24;
        puStack_218 = unaff_x23;
        ppuStack_210 = ppuVar9;
        ppuStack_208 = ppuVar5;
        puStack_200 = puVar7;
        ppuStack_1f8 = ppuVar10;
        pppuStack_1f0 = &ppuStack_150;
        _objc_retain(ppuVar6);
        _objc_retain(puVar11);
        ppuVar5 = (undefined **)0x0;
        if (ppuVar8 != (undefined **)0x0) {
          plVar14 = (long *)ppuVar8[1];
          _objc_retain(ppuVar6);
          if (ppuVar6 == (undefined **)0x0) {
            ppuVar5 = (undefined **)&UNK_10f44f7d9;
          }
          else {
            ppuVar5 = ppuVar6;
            _objc_retainAutorelease(ppuVar6);
            func_0x00010bdc3520();
          }
          _objc_release(ppuVar6);
          unaff_x24 = apuStack_258;
          func_0x00010002b838(apuStack_258,ppuVar5);
          _objc_retain(puVar11);
          if (puVar11 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)&UNK_10f44f7d9;
          }
          else {
            _objc_retainAutorelease(puVar11);
            puVar4 = puVar11;
            func_0x00010bdc3520(puVar11);
          }
          _objc_release(puVar11);
          func_0x00010002b838(auStack_240,puVar4);
          uStack_278 = 0;
          uStack_270 = 0;
          uStack_268 = 0;
          func_0x00010007e1e8(&uStack_278,apuStack_258,&lStack_228,2);
          ppuVar3 = (undefined **)&UNK_110a02a48;
          unaff_x23 = &uStack_278;
          puVar4 = &uStack_278;
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02a48,puVar4,lVar12);
          puStack_260 = unaff_x23;
          func_0x00010007e5dc(&puStack_260);
          lVar13 = 0;
          ppuVar5 = apuStack_258;
          lVar2 = lVar12;
          do {
            if ((&cStack_229)[lVar13] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar13));
            }
            lVar13 = lVar13 + -0x18;
          } while (lVar13 != -0x30);
        }
        _objc_release(puVar11);
        ppuVar8 = ppuVar6;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
          ___stack_chk_fail();
          _objc_release(puVar11);
          if (cStack_241 < '\0') {
            __ZdlPv(apuStack_258[0]);
          }
          _objc_release(puVar11);
          _objc_release(ppuVar6);
          puVar16 = &UNK_107ca3610;
          ppuVar10 = ppuVar8;
          __Unwind_Resume();
          puVar1 = auStack_280;
          while( true ) {
            *(undefined ***)(puVar1 + -0x40) = unaff_x24;
            *(undefined8 **)(puVar1 + -0x38) = unaff_x23;
            *(undefined ***)(puVar1 + -0x30) = ppuVar5;
            *(undefined ***)(puVar1 + -0x28) = ppuVar8;
            *(undefined8 **)(puVar1 + -0x20) = puVar11;
            *(undefined ***)(puVar1 + -0x18) = ppuVar6;
            *(undefined1 *****)(puVar1 + -0x10) = ppppuVar15;
            *(undefined **)(puVar1 + -8) = puVar16;
            *(undefined8 *)(puVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            ppuVar6 = ppuVar3;
            puVar11 = puVar4;
            _objc_retain(ppuVar3);
            _objc_retain(puVar4);
            ppuVar5 = (undefined **)0x0;
            if (ppuVar10 != (undefined **)0x0) {
              plVar14 = (long *)ppuVar10[1];
              _objc_retain(ppuVar3);
              if (ppuVar3 == (undefined **)0x0) {
                ppuVar5 = (undefined **)&UNK_10f44f7d9;
              }
              else {
                ppuVar5 = ppuVar3;
                _objc_retainAutorelease(ppuVar3);
                func_0x00010bdc3520();
              }
              _objc_release(ppuVar3);
              unaff_x24 = (undefined **)(puVar1 + -0x78);
              func_0x00010002b838(puVar1 + -0x78,ppuVar5);
              _objc_retain(puVar4);
              if (puVar4 == (undefined8 *)0x0) {
                puVar7 = (undefined8 *)&UNK_10f44f7d9;
              }
              else {
                _objc_retainAutorelease(puVar4);
                puVar7 = puVar4;
                func_0x00010bdc3520(puVar4);
              }
              _objc_release(puVar4);
              func_0x00010002b838(puVar1 + -0x60,puVar7);
              *(undefined8 *)(puVar1 + -0x98) = 0;
              *(undefined8 *)(puVar1 + -0x90) = 0;
              *(undefined8 *)(puVar1 + -0x88) = 0;
              func_0x00010007e1e8(puVar1 + -0x98,puVar1 + -0x78,puVar1 + -0x48,2);
              ppuVar6 = (undefined **)&UNK_110a02a98;
              unaff_x23 = (undefined8 *)(puVar1 + -0x98);
              puVar11 = (undefined8 *)(puVar1 + -0x98);
              (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02a98,puVar11,lVar2);
              *(undefined8 **)(puVar1 + -0x80) = unaff_x23;
              func_0x00010007e5dc(puVar1 + -0x80);
              lVar2 = 0;
              ppuVar5 = (undefined **)(puVar1 + -0x78);
              do {
                if (*(char *)((long)ppuVar5 + lVar2 + 0x2f) < '\0') {
                  __ZdlPv(*(undefined8 *)((long)ppuVar5 + lVar2 + 0x18));
                }
                lVar2 = lVar2 + -0x18;
              } while (lVar2 != -0x30);
            }
            _objc_release(puVar4);
            ppuVar8 = ppuVar3;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -0x48)) break;
            ___stack_chk_fail();
            _objc_release(puVar4);
            dVar17 = param_1;
            if ((char)puVar1[-0x61] < '\0') {
              __ZdlPv(*(undefined8 *)(puVar1 + -0x78));
              dVar17 = param_1;
            }
            _objc_release(puVar4);
            _objc_release(ppuVar3);
            ppuVar10 = ppuVar8;
            __Unwind_Resume();
            *(undefined8 *)(puVar1 + -0xe0) = unaff_d9;
            *(double *)(puVar1 + -0xd8) = unaff_d8;
            *(undefined ***)(puVar1 + -0xd0) = ppuVar5;
            *(undefined ***)(puVar1 + -200) = ppuVar8;
            *(undefined8 **)(puVar1 + -0xc0) = puVar4;
            *(undefined ***)(puVar1 + -0xb8) = ppuVar3;
            *(undefined1 **)(puVar1 + -0xb0) = puVar1 + -0x10;
            *(undefined **)(puVar1 + -0xa8) = &SUB_107ca3840;
            ppppuVar15 = (undefined1 ****)(puVar1 + -0xb0);
            _objc_retain(ppuVar6);
            _objc_retain(puVar11);
            if (ppuVar10 == (undefined **)0x0) {
              _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
              return;
            }
            param_1 = dVar17 * 1000.0;
            lVar2 = (long)param_1;
            puVar16 = &UNK_107ca3898;
            puVar1 = puVar1 + -0xe0;
            ppuVar3 = ppuVar6;
            puVar4 = puVar11;
            ppuVar8 = ppuVar10;
            unaff_d8 = dVar17;
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105b0aa8c; end: 105b0aa9f; -[SCStoriesGrapheneMetricsEmitter logSpotlightSubsFeedBadgeShownWithViewLocation:] */

/* WARNING: Possible PIC construction at 0x000107ca3894: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ca2da0) */

void FUN_105b0aa8c(double param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x23;
  undefined **unaff_x24;
  undefined1 ****ppppuVar15;
  undefined *puVar16;
  double dVar17;
  double unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_280 [8];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined *apuStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined **ppuStack_220;
  undefined8 *puStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined8 *puStack_200;
  undefined **ppuStack_1f8;
  undefined1 ***pppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined *apuStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined **ppuStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined **ppuStack_168;
  undefined8 *puStack_160;
  undefined **ppuStack_158;
  undefined1 **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined *apuStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined **ppuStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined *apuStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_2 + 8);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e1dfd8;
  lVar12 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar5;
  puVar4 = param_4;
  _objc_retain(&PTR____CFConstantStringClassReference_110e1dfd8);
  _objc_retain(param_4);
  ppuVar8 = (undefined **)0x0;
  if (lVar2 != 0) {
    plVar14 = *(long **)(lVar2 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e1dfd8);
    ppuVar3 = ppuVar5;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e1dfd8);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e1dfd8);
    unaff_x24 = apuStack_78;
    func_0x00010002b838(apuStack_78,ppuVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar4 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar4);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,apuStack_78,&lStack_48,2);
    ppuVar3 = (undefined **)&UNK_110a02958;
    unaff_x23 = &uStack_98;
    puVar4 = &uStack_98;
    lVar12 = 1;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02958,puVar4,1);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar2 = 0;
    ppuVar8 = apuStack_78;
    do {
      if ((&cStack_49)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_4);
    if (cStack_61 < '\0') {
      __ZdlPv(apuStack_78[0]);
    }
    _objc_release(param_4);
    _objc_release(&PTR____CFConstantStringClassReference_110e1dfd8);
    ppuVar6 = ppuVar5;
    __Unwind_Resume();
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110e1dfd8;
    puStack_a8 = &SUB_107ca2f60;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar10 = ppuVar3;
    puVar7 = puVar4;
    lVar2 = lVar12;
    ppuStack_e0 = unaff_x24;
    puStack_d8 = unaff_x23;
    puStack_d0 = ppuVar8;
    ppuStack_c8 = ppuVar5;
    puStack_c0 = param_4;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar3);
    _objc_retain(puVar4);
    ppuVar5 = (undefined **)0x0;
    if (ppuVar6 != (undefined **)0x0) {
      plVar14 = (long *)ppuVar6[1];
      _objc_retain(ppuVar3);
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar5 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar5 = ppuVar3;
        _objc_retainAutorelease(ppuVar3);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar3);
      unaff_x24 = apuStack_118;
      func_0x00010002b838(apuStack_118,ppuVar5);
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f44f7d9;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar7 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_100,puVar7);
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      func_0x00010007e1e8(&uStack_138,apuStack_118,&lStack_e8,2);
      ppuVar10 = (undefined **)&UNK_110a029a8;
      unaff_x23 = &uStack_138;
      puVar7 = &uStack_138;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a029a8,puVar7,lVar12);
      puStack_120 = unaff_x23;
      func_0x00010007e5dc(&puStack_120);
      lVar13 = 0;
      ppuVar5 = apuStack_118;
      lVar2 = lVar12;
      do {
        if ((&cStack_e9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(puVar4);
    ppuVar8 = ppuVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
      ___stack_chk_fail();
      _objc_release(puVar4);
      if (cStack_101 < '\0') {
        __ZdlPv(apuStack_118[0]);
      }
      _objc_release(puVar4);
      _objc_release(ppuVar3);
      ppuVar9 = ppuVar8;
      __Unwind_Resume();
      puStack_148 = &SUB_107ca3190;
      lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar6 = ppuVar10;
      puVar11 = puVar7;
      lVar12 = lVar2;
      ppuStack_180 = unaff_x24;
      puStack_178 = unaff_x23;
      puStack_170 = ppuVar5;
      ppuStack_168 = ppuVar8;
      puStack_160 = puVar4;
      ppuStack_158 = ppuVar3;
      ppuStack_150 = &puStack_b0;
      _objc_retain(ppuVar10);
      _objc_retain(puVar7);
      if (ppuVar9 != (undefined **)0x0) {
        plVar14 = (long *)ppuVar9[1];
        ppuVar6 = (undefined **)&UNK_110a029f8;
        (**(code **)(*plVar14 + 0x28))();
        if ((int)plVar14 != 0) {
          plVar14 = (long *)ppuVar9[1];
          _objc_retain(ppuVar10);
          if (ppuVar10 == (undefined **)0x0) {
            ppuVar5 = (undefined **)&UNK_10f44f7d9;
          }
          else {
            ppuVar5 = ppuVar10;
            _objc_retainAutorelease(ppuVar10);
            func_0x00010bdc3520();
          }
          _objc_release(ppuVar10);
          unaff_x24 = apuStack_1b8;
          func_0x00010002b838(apuStack_1b8,ppuVar5);
          _objc_retain(puVar7);
          if (puVar7 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)&UNK_10f44f7d9;
          }
          else {
            _objc_retainAutorelease(puVar7);
            puVar4 = puVar7;
            func_0x00010bdc3520(puVar7);
          }
          _objc_release(puVar7);
          func_0x00010002b838(auStack_1a0,puVar4);
          uStack_1d8 = 0;
          uStack_1d0 = 0;
          uStack_1c8 = 0;
          func_0x00010007e1e8(&uStack_1d8,apuStack_1b8,&lStack_188,2);
          ppuVar6 = (undefined **)&UNK_110a029f8;
          unaff_x23 = &uStack_1d8;
          puVar11 = &uStack_1d8;
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a029f8,puVar11,lVar2);
          puStack_1c0 = unaff_x23;
          func_0x00010007e5dc(&puStack_1c0);
          lVar13 = 0;
          ppuVar9 = apuStack_1b8;
          lVar12 = lVar2;
          do {
            if ((&cStack_189)[lVar13] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar13));
            }
            lVar13 = lVar13 + -0x18;
          } while (lVar13 != -0x30);
        }
      }
      _objc_release(puVar7);
      ppuVar5 = ppuVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
        ___stack_chk_fail();
        _objc_release(puVar7);
        if (cStack_1a1 < '\0') {
          __ZdlPv(apuStack_1b8[0]);
        }
        _objc_release(puVar7);
        _objc_release(ppuVar10);
        ppuVar8 = ppuVar5;
        __Unwind_Resume();
        puStack_1e8 = &SUB_107ca33e0;
        ppppuVar15 = &pppuStack_1f0;
        lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuVar3 = ppuVar6;
        puVar4 = puVar11;
        lVar2 = lVar12;
        ppuStack_220 = unaff_x24;
        puStack_218 = unaff_x23;
        ppuStack_210 = ppuVar9;
        ppuStack_208 = ppuVar5;
        puStack_200 = puVar7;
        ppuStack_1f8 = ppuVar10;
        pppuStack_1f0 = &ppuStack_150;
        _objc_retain(ppuVar6);
        _objc_retain(puVar11);
        ppuVar5 = (undefined **)0x0;
        if (ppuVar8 != (undefined **)0x0) {
          plVar14 = (long *)ppuVar8[1];
          _objc_retain(ppuVar6);
          if (ppuVar6 == (undefined **)0x0) {
            ppuVar5 = (undefined **)&UNK_10f44f7d9;
          }
          else {
            ppuVar5 = ppuVar6;
            _objc_retainAutorelease(ppuVar6);
            func_0x00010bdc3520();
          }
          _objc_release(ppuVar6);
          unaff_x24 = apuStack_258;
          func_0x00010002b838(apuStack_258,ppuVar5);
          _objc_retain(puVar11);
          if (puVar11 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)&UNK_10f44f7d9;
          }
          else {
            _objc_retainAutorelease(puVar11);
            puVar4 = puVar11;
            func_0x00010bdc3520(puVar11);
          }
          _objc_release(puVar11);
          func_0x00010002b838(auStack_240,puVar4);
          uStack_278 = 0;
          uStack_270 = 0;
          uStack_268 = 0;
          func_0x00010007e1e8(&uStack_278,apuStack_258,&lStack_228,2);
          ppuVar3 = (undefined **)&UNK_110a02a48;
          unaff_x23 = &uStack_278;
          puVar4 = &uStack_278;
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02a48,puVar4,lVar12);
          puStack_260 = unaff_x23;
          func_0x00010007e5dc(&puStack_260);
          lVar13 = 0;
          ppuVar5 = apuStack_258;
          lVar2 = lVar12;
          do {
            if ((&cStack_229)[lVar13] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar13));
            }
            lVar13 = lVar13 + -0x18;
          } while (lVar13 != -0x30);
        }
        _objc_release(puVar11);
        ppuVar8 = ppuVar6;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
          ___stack_chk_fail();
          _objc_release(puVar11);
          if (cStack_241 < '\0') {
            __ZdlPv(apuStack_258[0]);
          }
          _objc_release(puVar11);
          _objc_release(ppuVar6);
          puVar16 = &UNK_107ca3610;
          ppuVar10 = ppuVar8;
          __Unwind_Resume();
          puVar1 = auStack_280;
          while( true ) {
            *(undefined ***)(puVar1 + -0x40) = unaff_x24;
            *(undefined8 **)(puVar1 + -0x38) = unaff_x23;
            *(undefined ***)(puVar1 + -0x30) = ppuVar5;
            *(undefined ***)(puVar1 + -0x28) = ppuVar8;
            *(undefined8 **)(puVar1 + -0x20) = puVar11;
            *(undefined ***)(puVar1 + -0x18) = ppuVar6;
            *(undefined1 *****)(puVar1 + -0x10) = ppppuVar15;
            *(undefined **)(puVar1 + -8) = puVar16;
            *(undefined8 *)(puVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            ppuVar6 = ppuVar3;
            puVar11 = puVar4;
            _objc_retain(ppuVar3);
            _objc_retain(puVar4);
            ppuVar5 = (undefined **)0x0;
            if (ppuVar10 != (undefined **)0x0) {
              plVar14 = (long *)ppuVar10[1];
              _objc_retain(ppuVar3);
              if (ppuVar3 == (undefined **)0x0) {
                ppuVar5 = (undefined **)&UNK_10f44f7d9;
              }
              else {
                ppuVar5 = ppuVar3;
                _objc_retainAutorelease(ppuVar3);
                func_0x00010bdc3520();
              }
              _objc_release(ppuVar3);
              unaff_x24 = (undefined **)(puVar1 + -0x78);
              func_0x00010002b838(puVar1 + -0x78,ppuVar5);
              _objc_retain(puVar4);
              if (puVar4 == (undefined8 *)0x0) {
                puVar7 = (undefined8 *)&UNK_10f44f7d9;
              }
              else {
                _objc_retainAutorelease(puVar4);
                puVar7 = puVar4;
                func_0x00010bdc3520(puVar4);
              }
              _objc_release(puVar4);
              func_0x00010002b838(puVar1 + -0x60,puVar7);
              *(undefined8 *)(puVar1 + -0x98) = 0;
              *(undefined8 *)(puVar1 + -0x90) = 0;
              *(undefined8 *)(puVar1 + -0x88) = 0;
              func_0x00010007e1e8(puVar1 + -0x98,puVar1 + -0x78,puVar1 + -0x48,2);
              ppuVar6 = (undefined **)&UNK_110a02a98;
              unaff_x23 = (undefined8 *)(puVar1 + -0x98);
              puVar11 = (undefined8 *)(puVar1 + -0x98);
              (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02a98,puVar11,lVar2);
              *(undefined8 **)(puVar1 + -0x80) = unaff_x23;
              func_0x00010007e5dc(puVar1 + -0x80);
              lVar2 = 0;
              ppuVar5 = (undefined **)(puVar1 + -0x78);
              do {
                if (*(char *)((long)ppuVar5 + lVar2 + 0x2f) < '\0') {
                  __ZdlPv(*(undefined8 *)((long)ppuVar5 + lVar2 + 0x18));
                }
                lVar2 = lVar2 + -0x18;
              } while (lVar2 != -0x30);
            }
            _objc_release(puVar4);
            ppuVar8 = ppuVar3;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -0x48)) break;
            ___stack_chk_fail();
            _objc_release(puVar4);
            dVar17 = param_1;
            if ((char)puVar1[-0x61] < '\0') {
              __ZdlPv(*(undefined8 *)(puVar1 + -0x78));
              dVar17 = param_1;
            }
            _objc_release(puVar4);
            _objc_release(ppuVar3);
            ppuVar10 = ppuVar8;
            __Unwind_Resume();
            *(undefined8 *)(puVar1 + -0xe0) = unaff_d9;
            *(double *)(puVar1 + -0xd8) = unaff_d8;
            *(undefined ***)(puVar1 + -0xd0) = ppuVar5;
            *(undefined ***)(puVar1 + -200) = ppuVar8;
            *(undefined8 **)(puVar1 + -0xc0) = puVar4;
            *(undefined ***)(puVar1 + -0xb8) = ppuVar3;
            *(undefined1 **)(puVar1 + -0xb0) = puVar1 + -0x10;
            *(undefined **)(puVar1 + -0xa8) = &SUB_107ca3840;
            ppppuVar15 = (undefined1 ****)(puVar1 + -0xb0);
            _objc_retain(ppuVar6);
            _objc_retain(puVar11);
            if (ppuVar10 == (undefined **)0x0) {
              _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
              return;
            }
            param_1 = dVar17 * 1000.0;
            lVar2 = (long)param_1;
            puVar16 = &UNK_107ca3898;
            puVar1 = puVar1 + -0xe0;
            ppuVar3 = ppuVar6;
            puVar4 = puVar11;
            ppuVar8 = ppuVar10;
            unaff_d8 = dVar17;
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105b0aaa0; end: 105b0aab3; -[SCStoriesGrapheneMetricsEmitter logSpotlightSubsFeedTapOnBadgeWithViewLocation:] */

/* WARNING: Possible PIC construction at 0x000107ca3894: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ca2da0) */

void FUN_105b0aaa0(double param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x23;
  undefined **unaff_x24;
  undefined1 ****ppppuVar15;
  undefined *puVar16;
  double dVar17;
  double unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_280 [8];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined *apuStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined **ppuStack_220;
  undefined8 *puStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined8 *puStack_200;
  undefined **ppuStack_1f8;
  undefined1 ***pppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined *apuStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined **ppuStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined **ppuStack_168;
  undefined8 *puStack_160;
  undefined **ppuStack_158;
  undefined1 **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined *apuStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined **ppuStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined *apuStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_2 + 8);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e1dff8;
  lVar12 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar5;
  puVar4 = param_4;
  _objc_retain(&PTR____CFConstantStringClassReference_110e1dff8);
  _objc_retain(param_4);
  ppuVar8 = (undefined **)0x0;
  if (lVar2 != 0) {
    plVar14 = *(long **)(lVar2 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e1dff8);
    ppuVar3 = ppuVar5;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e1dff8);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e1dff8);
    unaff_x24 = apuStack_78;
    func_0x00010002b838(apuStack_78,ppuVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar4 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar4);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,apuStack_78,&lStack_48,2);
    ppuVar3 = (undefined **)&UNK_110a02958;
    unaff_x23 = &uStack_98;
    puVar4 = &uStack_98;
    lVar12 = 1;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02958,puVar4,1);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar2 = 0;
    ppuVar8 = apuStack_78;
    do {
      if ((&cStack_49)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_4);
    if (cStack_61 < '\0') {
      __ZdlPv(apuStack_78[0]);
    }
    _objc_release(param_4);
    _objc_release(&PTR____CFConstantStringClassReference_110e1dff8);
    ppuVar6 = ppuVar5;
    __Unwind_Resume();
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110e1dff8;
    puStack_a8 = &SUB_107ca2f60;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar10 = ppuVar3;
    puVar7 = puVar4;
    lVar2 = lVar12;
    ppuStack_e0 = unaff_x24;
    puStack_d8 = unaff_x23;
    puStack_d0 = ppuVar8;
    ppuStack_c8 = ppuVar5;
    puStack_c0 = param_4;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar3);
    _objc_retain(puVar4);
    ppuVar5 = (undefined **)0x0;
    if (ppuVar6 != (undefined **)0x0) {
      plVar14 = (long *)ppuVar6[1];
      _objc_retain(ppuVar3);
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar5 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar5 = ppuVar3;
        _objc_retainAutorelease(ppuVar3);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar3);
      unaff_x24 = apuStack_118;
      func_0x00010002b838(apuStack_118,ppuVar5);
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f44f7d9;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar7 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_100,puVar7);
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      func_0x00010007e1e8(&uStack_138,apuStack_118,&lStack_e8,2);
      ppuVar10 = (undefined **)&UNK_110a029a8;
      unaff_x23 = &uStack_138;
      puVar7 = &uStack_138;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a029a8,puVar7,lVar12);
      puStack_120 = unaff_x23;
      func_0x00010007e5dc(&puStack_120);
      lVar13 = 0;
      ppuVar5 = apuStack_118;
      lVar2 = lVar12;
      do {
        if ((&cStack_e9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(puVar4);
    ppuVar8 = ppuVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
      ___stack_chk_fail();
      _objc_release(puVar4);
      if (cStack_101 < '\0') {
        __ZdlPv(apuStack_118[0]);
      }
      _objc_release(puVar4);
      _objc_release(ppuVar3);
      ppuVar9 = ppuVar8;
      __Unwind_Resume();
      puStack_148 = &SUB_107ca3190;
      lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar6 = ppuVar10;
      puVar11 = puVar7;
      lVar12 = lVar2;
      ppuStack_180 = unaff_x24;
      puStack_178 = unaff_x23;
      puStack_170 = ppuVar5;
      ppuStack_168 = ppuVar8;
      puStack_160 = puVar4;
      ppuStack_158 = ppuVar3;
      ppuStack_150 = &puStack_b0;
      _objc_retain(ppuVar10);
      _objc_retain(puVar7);
      if (ppuVar9 != (undefined **)0x0) {
        plVar14 = (long *)ppuVar9[1];
        ppuVar6 = (undefined **)&UNK_110a029f8;
        (**(code **)(*plVar14 + 0x28))();
        if ((int)plVar14 != 0) {
          plVar14 = (long *)ppuVar9[1];
          _objc_retain(ppuVar10);
          if (ppuVar10 == (undefined **)0x0) {
            ppuVar5 = (undefined **)&UNK_10f44f7d9;
          }
          else {
            ppuVar5 = ppuVar10;
            _objc_retainAutorelease(ppuVar10);
            func_0x00010bdc3520();
          }
          _objc_release(ppuVar10);
          unaff_x24 = apuStack_1b8;
          func_0x00010002b838(apuStack_1b8,ppuVar5);
          _objc_retain(puVar7);
          if (puVar7 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)&UNK_10f44f7d9;
          }
          else {
            _objc_retainAutorelease(puVar7);
            puVar4 = puVar7;
            func_0x00010bdc3520(puVar7);
          }
          _objc_release(puVar7);
          func_0x00010002b838(auStack_1a0,puVar4);
          uStack_1d8 = 0;
          uStack_1d0 = 0;
          uStack_1c8 = 0;
          func_0x00010007e1e8(&uStack_1d8,apuStack_1b8,&lStack_188,2);
          ppuVar6 = (undefined **)&UNK_110a029f8;
          unaff_x23 = &uStack_1d8;
          puVar11 = &uStack_1d8;
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a029f8,puVar11,lVar2);
          puStack_1c0 = unaff_x23;
          func_0x00010007e5dc(&puStack_1c0);
          lVar13 = 0;
          ppuVar9 = apuStack_1b8;
          lVar12 = lVar2;
          do {
            if ((&cStack_189)[lVar13] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar13));
            }
            lVar13 = lVar13 + -0x18;
          } while (lVar13 != -0x30);
        }
      }
      _objc_release(puVar7);
      ppuVar5 = ppuVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
        ___stack_chk_fail();
        _objc_release(puVar7);
        if (cStack_1a1 < '\0') {
          __ZdlPv(apuStack_1b8[0]);
        }
        _objc_release(puVar7);
        _objc_release(ppuVar10);
        ppuVar8 = ppuVar5;
        __Unwind_Resume();
        puStack_1e8 = &SUB_107ca33e0;
        ppppuVar15 = &pppuStack_1f0;
        lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuVar3 = ppuVar6;
        puVar4 = puVar11;
        lVar2 = lVar12;
        ppuStack_220 = unaff_x24;
        puStack_218 = unaff_x23;
        ppuStack_210 = ppuVar9;
        ppuStack_208 = ppuVar5;
        puStack_200 = puVar7;
        ppuStack_1f8 = ppuVar10;
        pppuStack_1f0 = &ppuStack_150;
        _objc_retain(ppuVar6);
        _objc_retain(puVar11);
        ppuVar5 = (undefined **)0x0;
        if (ppuVar8 != (undefined **)0x0) {
          plVar14 = (long *)ppuVar8[1];
          _objc_retain(ppuVar6);
          if (ppuVar6 == (undefined **)0x0) {
            ppuVar5 = (undefined **)&UNK_10f44f7d9;
          }
          else {
            ppuVar5 = ppuVar6;
            _objc_retainAutorelease(ppuVar6);
            func_0x00010bdc3520();
          }
          _objc_release(ppuVar6);
          unaff_x24 = apuStack_258;
          func_0x00010002b838(apuStack_258,ppuVar5);
          _objc_retain(puVar11);
          if (puVar11 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)&UNK_10f44f7d9;
          }
          else {
            _objc_retainAutorelease(puVar11);
            puVar4 = puVar11;
            func_0x00010bdc3520(puVar11);
          }
          _objc_release(puVar11);
          func_0x00010002b838(auStack_240,puVar4);
          uStack_278 = 0;
          uStack_270 = 0;
          uStack_268 = 0;
          func_0x00010007e1e8(&uStack_278,apuStack_258,&lStack_228,2);
          ppuVar3 = (undefined **)&UNK_110a02a48;
          unaff_x23 = &uStack_278;
          puVar4 = &uStack_278;
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02a48,puVar4,lVar12);
          puStack_260 = unaff_x23;
          func_0x00010007e5dc(&puStack_260);
          lVar13 = 0;
          ppuVar5 = apuStack_258;
          lVar2 = lVar12;
          do {
            if ((&cStack_229)[lVar13] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar13));
            }
            lVar13 = lVar13 + -0x18;
          } while (lVar13 != -0x30);
        }
        _objc_release(puVar11);
        ppuVar8 = ppuVar6;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
          ___stack_chk_fail();
          _objc_release(puVar11);
          if (cStack_241 < '\0') {
            __ZdlPv(apuStack_258[0]);
          }
          _objc_release(puVar11);
          _objc_release(ppuVar6);
          puVar16 = &UNK_107ca3610;
          ppuVar10 = ppuVar8;
          __Unwind_Resume();
          puVar1 = auStack_280;
          while( true ) {
            *(undefined ***)(puVar1 + -0x40) = unaff_x24;
            *(undefined8 **)(puVar1 + -0x38) = unaff_x23;
            *(undefined ***)(puVar1 + -0x30) = ppuVar5;
            *(undefined ***)(puVar1 + -0x28) = ppuVar8;
            *(undefined8 **)(puVar1 + -0x20) = puVar11;
            *(undefined ***)(puVar1 + -0x18) = ppuVar6;
            *(undefined1 *****)(puVar1 + -0x10) = ppppuVar15;
            *(undefined **)(puVar1 + -8) = puVar16;
            *(undefined8 *)(puVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            ppuVar6 = ppuVar3;
            puVar11 = puVar4;
            _objc_retain(ppuVar3);
            _objc_retain(puVar4);
            ppuVar5 = (undefined **)0x0;
            if (ppuVar10 != (undefined **)0x0) {
              plVar14 = (long *)ppuVar10[1];
              _objc_retain(ppuVar3);
              if (ppuVar3 == (undefined **)0x0) {
                ppuVar5 = (undefined **)&UNK_10f44f7d9;
              }
              else {
                ppuVar5 = ppuVar3;
                _objc_retainAutorelease(ppuVar3);
                func_0x00010bdc3520();
              }
              _objc_release(ppuVar3);
              unaff_x24 = (undefined **)(puVar1 + -0x78);
              func_0x00010002b838(puVar1 + -0x78,ppuVar5);
              _objc_retain(puVar4);
              if (puVar4 == (undefined8 *)0x0) {
                puVar7 = (undefined8 *)&UNK_10f44f7d9;
              }
              else {
                _objc_retainAutorelease(puVar4);
                puVar7 = puVar4;
                func_0x00010bdc3520(puVar4);
              }
              _objc_release(puVar4);
              func_0x00010002b838(puVar1 + -0x60,puVar7);
              *(undefined8 *)(puVar1 + -0x98) = 0;
              *(undefined8 *)(puVar1 + -0x90) = 0;
              *(undefined8 *)(puVar1 + -0x88) = 0;
              func_0x00010007e1e8(puVar1 + -0x98,puVar1 + -0x78,puVar1 + -0x48,2);
              ppuVar6 = (undefined **)&UNK_110a02a98;
              unaff_x23 = (undefined8 *)(puVar1 + -0x98);
              puVar11 = (undefined8 *)(puVar1 + -0x98);
              (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02a98,puVar11,lVar2);
              *(undefined8 **)(puVar1 + -0x80) = unaff_x23;
              func_0x00010007e5dc(puVar1 + -0x80);
              lVar2 = 0;
              ppuVar5 = (undefined **)(puVar1 + -0x78);
              do {
                if (*(char *)((long)ppuVar5 + lVar2 + 0x2f) < '\0') {
                  __ZdlPv(*(undefined8 *)((long)ppuVar5 + lVar2 + 0x18));
                }
                lVar2 = lVar2 + -0x18;
              } while (lVar2 != -0x30);
            }
            _objc_release(puVar4);
            ppuVar8 = ppuVar3;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -0x48)) break;
            ___stack_chk_fail();
            _objc_release(puVar4);
            dVar17 = param_1;
            if ((char)puVar1[-0x61] < '\0') {
              __ZdlPv(*(undefined8 *)(puVar1 + -0x78));
              dVar17 = param_1;
            }
            _objc_release(puVar4);
            _objc_release(ppuVar3);
            ppuVar10 = ppuVar8;
            __Unwind_Resume();
            *(undefined8 *)(puVar1 + -0xe0) = unaff_d9;
            *(double *)(puVar1 + -0xd8) = unaff_d8;
            *(undefined ***)(puVar1 + -0xd0) = ppuVar5;
            *(undefined ***)(puVar1 + -200) = ppuVar8;
            *(undefined8 **)(puVar1 + -0xc0) = puVar4;
            *(undefined ***)(puVar1 + -0xb8) = ppuVar3;
            *(undefined1 **)(puVar1 + -0xb0) = puVar1 + -0x10;
            *(undefined **)(puVar1 + -0xa8) = &SUB_107ca3840;
            ppppuVar15 = (undefined1 ****)(puVar1 + -0xb0);
            _objc_retain(ppuVar6);
            _objc_retain(puVar11);
            if (ppuVar10 == (undefined **)0x0) {
              _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
              return;
            }
            param_1 = dVar17 * 1000.0;
            lVar2 = (long)param_1;
            puVar16 = &UNK_107ca3898;
            puVar1 = puVar1 + -0xe0;
            ppuVar3 = ppuVar6;
            puVar4 = puVar11;
            ppuVar8 = ppuVar10;
            unaff_d8 = dVar17;
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105b0aab4; end: 105b0aac7; -[SCStoriesGrapheneMetricsEmitter logSpotlightSubsFeedTooltipShownWithViewLocation:] */

/* WARNING: Possible PIC construction at 0x000107ca3894: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ca2da0) */

void FUN_105b0aab4(double param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x23;
  undefined **unaff_x24;
  undefined1 ****ppppuVar15;
  undefined *puVar16;
  double dVar17;
  double unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_280 [8];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined *apuStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined **ppuStack_220;
  undefined8 *puStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined8 *puStack_200;
  undefined **ppuStack_1f8;
  undefined1 ***pppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined *apuStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined **ppuStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined **ppuStack_168;
  undefined8 *puStack_160;
  undefined **ppuStack_158;
  undefined1 **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined *apuStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined **ppuStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined *apuStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_2 + 8);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e1e018;
  lVar12 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar5;
  puVar4 = param_4;
  _objc_retain(&PTR____CFConstantStringClassReference_110e1e018);
  _objc_retain(param_4);
  ppuVar8 = (undefined **)0x0;
  if (lVar2 != 0) {
    plVar14 = *(long **)(lVar2 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e1e018);
    ppuVar3 = ppuVar5;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e1e018);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e1e018);
    unaff_x24 = apuStack_78;
    func_0x00010002b838(apuStack_78,ppuVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar4 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar4);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,apuStack_78,&lStack_48,2);
    ppuVar3 = (undefined **)&UNK_110a02958;
    unaff_x23 = &uStack_98;
    puVar4 = &uStack_98;
    lVar12 = 1;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02958,puVar4,1);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar2 = 0;
    ppuVar8 = apuStack_78;
    do {
      if ((&cStack_49)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_4);
    if (cStack_61 < '\0') {
      __ZdlPv(apuStack_78[0]);
    }
    _objc_release(param_4);
    _objc_release(&PTR____CFConstantStringClassReference_110e1e018);
    ppuVar6 = ppuVar5;
    __Unwind_Resume();
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110e1e018;
    puStack_a8 = &SUB_107ca2f60;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar10 = ppuVar3;
    puVar7 = puVar4;
    lVar2 = lVar12;
    ppuStack_e0 = unaff_x24;
    puStack_d8 = unaff_x23;
    puStack_d0 = ppuVar8;
    ppuStack_c8 = ppuVar5;
    puStack_c0 = param_4;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar3);
    _objc_retain(puVar4);
    ppuVar5 = (undefined **)0x0;
    if (ppuVar6 != (undefined **)0x0) {
      plVar14 = (long *)ppuVar6[1];
      _objc_retain(ppuVar3);
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar5 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar5 = ppuVar3;
        _objc_retainAutorelease(ppuVar3);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar3);
      unaff_x24 = apuStack_118;
      func_0x00010002b838(apuStack_118,ppuVar5);
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f44f7d9;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar7 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_100,puVar7);
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      func_0x00010007e1e8(&uStack_138,apuStack_118,&lStack_e8,2);
      ppuVar10 = (undefined **)&UNK_110a029a8;
      unaff_x23 = &uStack_138;
      puVar7 = &uStack_138;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a029a8,puVar7,lVar12);
      puStack_120 = unaff_x23;
      func_0x00010007e5dc(&puStack_120);
      lVar13 = 0;
      ppuVar5 = apuStack_118;
      lVar2 = lVar12;
      do {
        if ((&cStack_e9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(puVar4);
    ppuVar8 = ppuVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
      ___stack_chk_fail();
      _objc_release(puVar4);
      if (cStack_101 < '\0') {
        __ZdlPv(apuStack_118[0]);
      }
      _objc_release(puVar4);
      _objc_release(ppuVar3);
      ppuVar9 = ppuVar8;
      __Unwind_Resume();
      puStack_148 = &SUB_107ca3190;
      lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar6 = ppuVar10;
      puVar11 = puVar7;
      lVar12 = lVar2;
      ppuStack_180 = unaff_x24;
      puStack_178 = unaff_x23;
      puStack_170 = ppuVar5;
      ppuStack_168 = ppuVar8;
      puStack_160 = puVar4;
      ppuStack_158 = ppuVar3;
      ppuStack_150 = &puStack_b0;
      _objc_retain(ppuVar10);
      _objc_retain(puVar7);
      if (ppuVar9 != (undefined **)0x0) {
        plVar14 = (long *)ppuVar9[1];
        ppuVar6 = (undefined **)&UNK_110a029f8;
        (**(code **)(*plVar14 + 0x28))();
        if ((int)plVar14 != 0) {
          plVar14 = (long *)ppuVar9[1];
          _objc_retain(ppuVar10);
          if (ppuVar10 == (undefined **)0x0) {
            ppuVar5 = (undefined **)&UNK_10f44f7d9;
          }
          else {
            ppuVar5 = ppuVar10;
            _objc_retainAutorelease(ppuVar10);
            func_0x00010bdc3520();
          }
          _objc_release(ppuVar10);
          unaff_x24 = apuStack_1b8;
          func_0x00010002b838(apuStack_1b8,ppuVar5);
          _objc_retain(puVar7);
          if (puVar7 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)&UNK_10f44f7d9;
          }
          else {
            _objc_retainAutorelease(puVar7);
            puVar4 = puVar7;
            func_0x00010bdc3520(puVar7);
          }
          _objc_release(puVar7);
          func_0x00010002b838(auStack_1a0,puVar4);
          uStack_1d8 = 0;
          uStack_1d0 = 0;
          uStack_1c8 = 0;
          func_0x00010007e1e8(&uStack_1d8,apuStack_1b8,&lStack_188,2);
          ppuVar6 = (undefined **)&UNK_110a029f8;
          unaff_x23 = &uStack_1d8;
          puVar11 = &uStack_1d8;
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a029f8,puVar11,lVar2);
          puStack_1c0 = unaff_x23;
          func_0x00010007e5dc(&puStack_1c0);
          lVar13 = 0;
          ppuVar9 = apuStack_1b8;
          lVar12 = lVar2;
          do {
            if ((&cStack_189)[lVar13] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar13));
            }
            lVar13 = lVar13 + -0x18;
          } while (lVar13 != -0x30);
        }
      }
      _objc_release(puVar7);
      ppuVar5 = ppuVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
        ___stack_chk_fail();
        _objc_release(puVar7);
        if (cStack_1a1 < '\0') {
          __ZdlPv(apuStack_1b8[0]);
        }
        _objc_release(puVar7);
        _objc_release(ppuVar10);
        ppuVar8 = ppuVar5;
        __Unwind_Resume();
        puStack_1e8 = &SUB_107ca33e0;
        ppppuVar15 = &pppuStack_1f0;
        lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuVar3 = ppuVar6;
        puVar4 = puVar11;
        lVar2 = lVar12;
        ppuStack_220 = unaff_x24;
        puStack_218 = unaff_x23;
        ppuStack_210 = ppuVar9;
        ppuStack_208 = ppuVar5;
        puStack_200 = puVar7;
        ppuStack_1f8 = ppuVar10;
        pppuStack_1f0 = &ppuStack_150;
        _objc_retain(ppuVar6);
        _objc_retain(puVar11);
        ppuVar5 = (undefined **)0x0;
        if (ppuVar8 != (undefined **)0x0) {
          plVar14 = (long *)ppuVar8[1];
          _objc_retain(ppuVar6);
          if (ppuVar6 == (undefined **)0x0) {
            ppuVar5 = (undefined **)&UNK_10f44f7d9;
          }
          else {
            ppuVar5 = ppuVar6;
            _objc_retainAutorelease(ppuVar6);
            func_0x00010bdc3520();
          }
          _objc_release(ppuVar6);
          unaff_x24 = apuStack_258;
          func_0x00010002b838(apuStack_258,ppuVar5);
          _objc_retain(puVar11);
          if (puVar11 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)&UNK_10f44f7d9;
          }
          else {
            _objc_retainAutorelease(puVar11);
            puVar4 = puVar11;
            func_0x00010bdc3520(puVar11);
          }
          _objc_release(puVar11);
          func_0x00010002b838(auStack_240,puVar4);
          uStack_278 = 0;
          uStack_270 = 0;
          uStack_268 = 0;
          func_0x00010007e1e8(&uStack_278,apuStack_258,&lStack_228,2);
          ppuVar3 = (undefined **)&UNK_110a02a48;
          unaff_x23 = &uStack_278;
          puVar4 = &uStack_278;
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02a48,puVar4,lVar12);
          puStack_260 = unaff_x23;
          func_0x00010007e5dc(&puStack_260);
          lVar13 = 0;
          ppuVar5 = apuStack_258;
          lVar2 = lVar12;
          do {
            if ((&cStack_229)[lVar13] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar13));
            }
            lVar13 = lVar13 + -0x18;
          } while (lVar13 != -0x30);
        }
        _objc_release(puVar11);
        ppuVar8 = ppuVar6;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
          ___stack_chk_fail();
          _objc_release(puVar11);
          if (cStack_241 < '\0') {
            __ZdlPv(apuStack_258[0]);
          }
          _objc_release(puVar11);
          _objc_release(ppuVar6);
          puVar16 = &UNK_107ca3610;
          ppuVar10 = ppuVar8;
          __Unwind_Resume();
          puVar1 = auStack_280;
          while( true ) {
            *(undefined ***)(puVar1 + -0x40) = unaff_x24;
            *(undefined8 **)(puVar1 + -0x38) = unaff_x23;
            *(undefined ***)(puVar1 + -0x30) = ppuVar5;
            *(undefined ***)(puVar1 + -0x28) = ppuVar8;
            *(undefined8 **)(puVar1 + -0x20) = puVar11;
            *(undefined ***)(puVar1 + -0x18) = ppuVar6;
            *(undefined1 *****)(puVar1 + -0x10) = ppppuVar15;
            *(undefined **)(puVar1 + -8) = puVar16;
            *(undefined8 *)(puVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            ppuVar6 = ppuVar3;
            puVar11 = puVar4;
            _objc_retain(ppuVar3);
            _objc_retain(puVar4);
            ppuVar5 = (undefined **)0x0;
            if (ppuVar10 != (undefined **)0x0) {
              plVar14 = (long *)ppuVar10[1];
              _objc_retain(ppuVar3);
              if (ppuVar3 == (undefined **)0x0) {
                ppuVar5 = (undefined **)&UNK_10f44f7d9;
              }
              else {
                ppuVar5 = ppuVar3;
                _objc_retainAutorelease(ppuVar3);
                func_0x00010bdc3520();
              }
              _objc_release(ppuVar3);
              unaff_x24 = (undefined **)(puVar1 + -0x78);
              func_0x00010002b838(puVar1 + -0x78,ppuVar5);
              _objc_retain(puVar4);
              if (puVar4 == (undefined8 *)0x0) {
                puVar7 = (undefined8 *)&UNK_10f44f7d9;
              }
              else {
                _objc_retainAutorelease(puVar4);
                puVar7 = puVar4;
                func_0x00010bdc3520(puVar4);
              }
              _objc_release(puVar4);
              func_0x00010002b838(puVar1 + -0x60,puVar7);
              *(undefined8 *)(puVar1 + -0x98) = 0;
              *(undefined8 *)(puVar1 + -0x90) = 0;
              *(undefined8 *)(puVar1 + -0x88) = 0;
              func_0x00010007e1e8(puVar1 + -0x98,puVar1 + -0x78,puVar1 + -0x48,2);
              ppuVar6 = (undefined **)&UNK_110a02a98;
              unaff_x23 = (undefined8 *)(puVar1 + -0x98);
              puVar11 = (undefined8 *)(puVar1 + -0x98);
              (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02a98,puVar11,lVar2);
              *(undefined8 **)(puVar1 + -0x80) = unaff_x23;
              func_0x00010007e5dc(puVar1 + -0x80);
              lVar2 = 0;
              ppuVar5 = (undefined **)(puVar1 + -0x78);
              do {
                if (*(char *)((long)ppuVar5 + lVar2 + 0x2f) < '\0') {
                  __ZdlPv(*(undefined8 *)((long)ppuVar5 + lVar2 + 0x18));
                }
                lVar2 = lVar2 + -0x18;
              } while (lVar2 != -0x30);
            }
            _objc_release(puVar4);
            ppuVar8 = ppuVar3;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -0x48)) break;
            ___stack_chk_fail();
            _objc_release(puVar4);
            dVar17 = param_1;
            if ((char)puVar1[-0x61] < '\0') {
              __ZdlPv(*(undefined8 *)(puVar1 + -0x78));
              dVar17 = param_1;
            }
            _objc_release(puVar4);
            _objc_release(ppuVar3);
            ppuVar10 = ppuVar8;
            __Unwind_Resume();
            *(undefined8 *)(puVar1 + -0xe0) = unaff_d9;
            *(double *)(puVar1 + -0xd8) = unaff_d8;
            *(undefined ***)(puVar1 + -0xd0) = ppuVar5;
            *(undefined ***)(puVar1 + -200) = ppuVar8;
            *(undefined8 **)(puVar1 + -0xc0) = puVar4;
            *(undefined ***)(puVar1 + -0xb8) = ppuVar3;
            *(undefined1 **)(puVar1 + -0xb0) = puVar1 + -0x10;
            *(undefined **)(puVar1 + -0xa8) = &SUB_107ca3840;
            ppppuVar15 = (undefined1 ****)(puVar1 + -0xb0);
            _objc_retain(ppuVar6);
            _objc_retain(puVar11);
            if (ppuVar10 == (undefined **)0x0) {
              _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
              return;
            }
            param_1 = dVar17 * 1000.0;
            lVar2 = (long)param_1;
            puVar16 = &UNK_107ca3898;
            puVar1 = puVar1 + -0xe0;
            ppuVar3 = ppuVar6;
            puVar4 = puVar11;
            ppuVar8 = ppuVar10;
            unaff_d8 = dVar17;
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105b0aac8; end: 105b0ab37; -[SCStoriesGrapheneMetricsEmitter logFeedSwitchViaAdvancementToFeedType:viewLocation:] */

void FUN_105b0aac8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107ca33e0(uVar3,&PTR____CFConstantStringClassReference_110e1e038,puVar2,1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0ab38; end: 105b0ad07; -[SCStoriesGrapheneMetricsEmitter logSpotlightResponseStoryCount:feedType:singleSnapCount:publicUserStoryCount:publisherStoryCount:longformShowCount:isPaginationRequest:] */

void FUN_105b0ab38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cab1f8(uVar2,puVar1,param_9,param_8);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cab5c8(uVar2,puVar1,param_9,param_6);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cab010(uVar2,puVar1,param_9,param_5);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cab3e0(uVar2,puVar1,param_9,param_7);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107caac40(uVar2,puVar1,param_9,param_3);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107caae28(uVar2,puVar1,param_9,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0ad08; end: 105b0ae9f; -[SCStoriesGrapheneMetricsEmitter logSpotlightResponseSnapWithFeedType:singleStorySnapCount:publicUserStorySnapCount:publisherStorySnapCount:longformShowSnapCount:isPaginationRequest:] */

void FUN_105b0ad08(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cabb80(uVar2,puVar1,param_8,param_7);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cabf50(uVar2,puVar1,param_8,param_5);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cab998(uVar2,puVar1,param_8,param_4);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cabd68(uVar2,puVar1,param_8,param_6);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cab7b0(uVar2,puVar1,param_8,param_5 + param_4 + param_6 + param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0aea0; end: 105b0af57; -[SCStoriesGrapheneMetricsEmitter logSpotlightQueryCoordinatorDownloadDataSize:feedType:querySource:] */

void FUN_105b0aea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e1e058);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107ca3190(uVar4,puVar1,puVar3,param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0af58; end: 105b0b003; -[SCStoriesGrapheneMetricsEmitter logSpotlightQueryCoordinatorRequestSentForFeedType:querySource:] */

void FUN_105b0af58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e1e078);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107ca33e0(uVar4,puVar1,puVar3,1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b004; end: 105b0b0df; -[SCStoriesGrapheneMetricsEmitter logMetadataAvailableAtStartCount:feedType:] */

void FUN_105b0b004(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107ca38d4(uVar2,puVar1,param_3);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x000107ca3bbc(uVar2,0 < param_3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b0e0; end: 105b0b1bb; -[SCStoriesGrapheneMetricsEmitter logMediaAvailableAtStartCount:feedType:] */

void FUN_105b0b0e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107ca3a48(uVar2,puVar1,param_3);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x000107ca3da8(uVar2,0 < param_3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b1bc; end: 105b0b217; -[SCStoriesGrapheneMetricsEmitter logSpotlightAbandonDiskNotLoaded:] */

void FUN_105b0b1bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107caa80c(uVar2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b218; end: 105b0b2d3; -[SCStoriesGrapheneMetricsEmitter logSpotlightAbandonmentReason:feedType:viewLocation:] */

void FUN_105b0b218(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107caa980(uVar3,puVar1,param_3,puVar2,1);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b2d4; end: 105b0b33b; -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMetadataFetchedCount:feedType:] */

void FUN_105b0b2d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cac538(uVar2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b33c; end: 105b0b3a3; -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMetadataWatchedCount:feedType:] */

void FUN_105b0b33c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cac6ac(uVar2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b3a4; end: 105b0b40b; -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMetadataEvictedCount:feedType:] */

void FUN_105b0b3a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cac820(uVar2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b40c; end: 105b0b473; -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMediaFetchedCount:feedType:] */

void FUN_105b0b40c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cac994(uVar2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b474; end: 105b0b4db; -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMediaWatchedCount:feedType:] */

void FUN_105b0b474(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cacb08(uVar2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b4dc; end: 105b0b543; -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMediaEvictedCount:feedType:] */

void FUN_105b0b4dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cacc7c(uVar2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b544; end: 105b0b5ab; -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMetadataTimeFromFetchToWatch:feedType:] */

void FUN_105b0b544(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cacdf0(uVar2,puVar1,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b5ac; end: 105b0b613; -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMediaTimeFromFetchToWatch:feedType:] */

void FUN_105b0b5ac(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cad0d8(uVar2,puVar1,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b614; end: 105b0b67b; -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMetadataTimeFromFetchToEvict:feedType:] */

void FUN_105b0b614(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cacf64(uVar2,puVar1,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b67c; end: 105b0b6e3; -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMediaTimeFromFetchToEvict:feedType:] */

void FUN_105b0b67c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cad24c(uVar2,puVar1,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b6e4; end: 105b0b74b; -[SCStoriesGrapheneMetricsEmitter logSpotlightUsageTrackerMediaEvictedBeforeMetadataDuration:feedType:] */

void FUN_105b0b6e4(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cad3c0(uVar2,puVar1,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b74c; end: 105b0b773; -[SCStoriesGrapheneMetricsEmitter logSpotlightBadgeStatusChangeWithBadgeIsShown:badgeType:] */

/* WARNING: Removing unreachable block (ram,0x000107cada38) */

undefined *
FUN_105b0b74c(long param_1,undefined8 param_2,int param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *unaff_x24;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined1 ***pppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined1 auStack_1f8 [24];
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 auStack_158 [3];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  ppuVar6 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dad398;
  }
  lVar1 = *(long *)(param_1 + 8);
  uVar12 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_4;
  ppuVar4 = ppuVar6;
  _objc_retain(param_4);
  _objc_retain(ppuVar6);
  if (lVar1 != 0) {
    plVar2 = *(long **)(lVar1 + 8);
    puVar3 = &UNK_110a04bb8;
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(lVar1 + 8);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar3 = &UNK_10f44f7d9;
      }
      else {
        puVar3 = param_4;
        _objc_retainAutorelease(param_4);
        func_0x00010bdc3520();
      }
      _objc_release(param_4);
      unaff_x24 = auStack_78;
      func_0x00010002b838(auStack_78,puVar3);
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        _objc_retainAutorelease(ppuVar6);
        ppuVar4 = ppuVar6;
        func_0x00010bdc3520(ppuVar6);
      }
      _objc_release(ppuVar6);
      func_0x00010002b838(auStack_60,ppuVar4);
      puStack_98 = (undefined *)0x0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x00010007e1e8(&puStack_98,auStack_78,&lStack_48,2);
      uVar12 = 10;
      puVar3 = &UNK_110a04bb8;
      ppuVar4 = &puStack_98;
      (**(code **)(*plVar2 + 0x18))(plVar2);
      ppuStack_80 = &puStack_98;
      func_0x00010007e5dc(&ppuStack_80);
      lVar1 = 0;
      do {
        if ((&cStack_49)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
  }
  _objc_release(ppuVar6);
  puVar5 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(ppuVar6);
  _objc_release(param_4);
  __Unwind_Resume();
  puStack_a8 = &LAB_107cad788;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar3;
  ppuVar6 = ppuVar4;
  uVar13 = uVar12;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  iVar10 = (int)ppuVar6;
  _objc_retain(ppuVar4);
  _objc_retain(param_5);
  if (puVar5 != (undefined *)0x0) {
    plVar2 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar5 = &UNK_10f44f7d9;
    }
    else {
      puVar5 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_158,puVar5);
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar6 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(ppuVar4);
      ppuVar6 = ppuVar4;
      func_0x00010bdc3520(ppuVar4);
    }
    _objc_release(ppuVar4);
    func_0x00010002b838(auStack_140,ppuVar6);
    puVar5 = &UNK_10f44f9bb;
    if ((int)uVar12 == 0) {
      puVar5 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_128,puVar5);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar5 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar5 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_110,puVar5);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    func_0x00010007e1e8(&uStack_178,auStack_158,&lStack_f8,4);
    puVar9 = &UNK_110a04c08;
    unaff_x24 = &uStack_178;
    puVar11 = &uStack_178;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110a04c08,puVar11,param_6);
    puStack_160 = unaff_x24;
    func_0x00010007e5dc(&puStack_160);
    lVar1 = 0;
    uVar13 = param_6;
    do {
      if ((&cStack_f9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar1));
      }
      iVar10 = (int)puVar11;
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(ppuVar4);
  puVar5 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puStack_1b8 = auStack_158;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puStack_1b8);
  _objc_release(param_5);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  puVar7 = puVar5;
  __Unwind_Resume();
  puStack_188 = &LAB_107cada70;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1c0 = unaff_x24;
  puStack_1b0 = puVar5;
  puStack_1a8 = param_5;
  ppuStack_1a0 = ppuVar4;
  puStack_198 = puVar3;
  ppuStack_190 = &puStack_b0;
  _objc_retain(puVar9);
  if (puVar7 != (undefined *)0x0) {
    plVar2 = *(long **)(puVar7 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar3 = &UNK_10f44f7d9;
    }
    else {
      puVar3 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_1f8,puVar3);
    puVar3 = &UNK_10f44f9bb;
    if (iVar10 == 0) {
      puVar3 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_1e0,puVar3);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x00010007e1e8(&uStack_218,auStack_1f8,&lStack_1c8,2);
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110a04c58,&uStack_218,uVar13);
    puStack_200 = &uStack_218;
    func_0x00010007e5dc(&puStack_200);
    lVar1 = 0;
    do {
      if ((&cStack_1c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  puVar3 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    _objc_release(puVar9);
    puVar5 = puVar3;
    __Unwind_Resume();
    ppuVar6 = &puStack_250;
    puStack_228 = &UNK_107cadc58;
    puStack_248 = PTR_PTR_1126fa610;
    puStack_250 = puVar5;
    puStack_240 = puVar3;
    puStack_238 = puVar9;
    pppuStack_230 = &ppuStack_190;
    _objc_msgSendSuper2(&puStack_250,PTR_s_init_1125d9248);
    if (ppuVar6 != (undefined **)0x0) {
      puVar8 = (undefined1 *)ppuVar6;
      (*(code *)PTR_DAT_113403208)();
      *(undefined1 **)((long)ppuVar6 + 8) = puVar8;
    }
    return (undefined *)ppuVar6;
  }
  return puVar3;
}



/* Entry: 105b0b774; end: 105b0b7e7; -[SCStoriesGrapheneMetricsEmitter logMessagingStoryPlaybackUseDFOrderWithUseDFOrder:source:] */

void FUN_105b0b774(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e1e098);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107ca0f48(*(undefined8 *)(param_1 + 8),puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b7e8; end: 105b0b7fb; -[SCStoriesGrapheneMetricsEmitter logPostingAsyncFixPostTimestamp] */

/* WARNING: Possible PIC construction at 0x000107ca2514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ca1294) */
/* WARNING: Removing unreachable block (ram,0x000107ca1bfc) */

void FUN_105b0b7e8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  long **pplVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long **pplVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long *plVar12;
  long **pplVar13;
  long *plVar14;
  long **pplVar15;
  undefined8 *unaff_x24;
  undefined8 ****ppppuVar16;
  undefined *puVar17;
  double dVar18;
  double unaff_d8;
  undefined8 unaff_d9;
  long *plStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined1 *puStack_598;
  undefined8 auStack_590 [2];
  char cStack_579;
  long lStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  long **pplStack_560;
  long *plStack_558;
  long **pplStack_550;
  long **pplStack_548;
  undefined8 ***pppuStack_540;
  undefined *puStack_538;
  long alStack_530 [3];
  long *plStack_518;
  long **applStack_510 [2];
  char cStack_4f9;
  long lStack_4f8;
  long **pplStack_4f0;
  long *plStack_4e8;
  long **pplStack_4e0;
  long **pplStack_4d8;
  undefined8 ***pppuStack_4d0;
  undefined *puStack_4c8;
  long *plStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  long **pplStack_470;
  long *plStack_468;
  long **pplStack_460;
  long **pplStack_458;
  undefined8 ***pppuStack_450;
  undefined *puStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  long **pplStack_3f0;
  long *plStack_3e8;
  long **pplStack_3e0;
  long **pplStack_3d8;
  undefined8 ***pppuStack_3d0;
  undefined *puStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  long **pplStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  long **pplStack_358;
  undefined8 ***pppuStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [3];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined8 ***pppuStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_2 + 8);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e1e0b8;
  puVar9 = (undefined *)0x1;
  puVar10 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar13 = (long **)ppuVar4;
  _objc_retain(&PTR____CFConstantStringClassReference_110e1e0b8);
  if (lVar2 != 0) {
    plVar14 = *(long **)(lVar2 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e1e0b8);
    ppuVar3 = ppuVar4;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e1e0b8);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e1e0b8);
    func_0x00010002b838(auStack_60,ppuVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pplVar13 = (long **)&UNK_110a02408;
    param_5 = (undefined *)0x1;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar9 = (undefined *)puVar10;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar9 = (undefined *)puVar10;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110e1e0b8);
  _objc_release(&PTR____CFConstantStringClassReference_110e1e0b8);
  __Unwind_Resume();
  puVar10 = &uStack_100;
  puStack_88 = &SUB_107ca13a4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar13;
  puVar17 = puVar9;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pplVar13);
  if (ppuVar4 != (undefined **)0x0) {
    plVar14 = (long *)ppuVar4[1];
    _objc_retain(pplVar13);
    if (pplVar13 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar13;
      _objc_retainAutorelease(pplVar13);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar13);
    func_0x00010002b838(auStack_e0,pplVar5);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pplVar5 = (long **)&UNK_110a02458;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar17 = (undefined *)puVar10;
    param_5 = puVar9;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar17 = (undefined *)puVar10;
      param_5 = puVar9;
    }
  }
  pplVar6 = pplVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar13);
  _objc_release(pplVar13);
  __Unwind_Resume();
  puVar10 = &uStack_180;
  puStack_108 = &SUB_107ca1518;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar13 = pplVar5;
  puVar9 = puVar17;
  ppuStack_110 = &puStack_90;
  _objc_retain(pplVar5);
  if (pplVar6 != (long **)0x0) {
    plVar14 = pplVar6[1];
    _objc_retain(pplVar5);
    if (pplVar5 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar5;
      _objc_retainAutorelease(pplVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar5);
    func_0x00010002b838(auStack_160,pplVar13);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    pplVar13 = (long **)&UNK_110a024a8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar9 = (undefined *)puVar10;
    param_5 = puVar17;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar9 = (undefined *)puVar10;
      param_5 = puVar17;
    }
  }
  pplVar6 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar5);
  _objc_release(pplVar5);
  __Unwind_Resume();
  puVar10 = &uStack_200;
  puStack_188 = &LAB_107ca168c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar13;
  puVar17 = puVar9;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(pplVar13);
  if (pplVar6 != (long **)0x0) {
    plVar14 = pplVar6[1];
    _objc_retain(pplVar13);
    if (pplVar13 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar13;
      _objc_retainAutorelease(pplVar13);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar13);
    func_0x00010002b838(auStack_1e0,pplVar5);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    pplVar5 = (long **)&UNK_110a024f8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar17 = (undefined *)puVar10;
    param_5 = puVar9;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar17 = (undefined *)puVar10;
      param_5 = puVar9;
    }
  }
  pplVar6 = pplVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar13);
  _objc_release(pplVar13);
  __Unwind_Resume();
  puVar10 = &uStack_280;
  puStack_208 = &LAB_107ca1800;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar13 = pplVar5;
  puVar9 = puVar17;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(pplVar5);
  if (pplVar6 != (long **)0x0) {
    plVar14 = pplVar6[1];
    _objc_retain(pplVar5);
    if (pplVar5 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar5;
      _objc_retainAutorelease(pplVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar5);
    func_0x00010002b838(auStack_260,pplVar13);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    pplVar13 = (long **)&UNK_110a02548;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar9 = (undefined *)puVar10;
    param_5 = puVar17;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar9 = (undefined *)puVar10;
      param_5 = puVar17;
    }
  }
  pplVar6 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar5);
  _objc_release(pplVar5);
  __Unwind_Resume();
  puVar10 = &uStack_340;
  puStack_288 = &LAB_107ca1974;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar13;
  puVar17 = puVar9;
  pppuStack_290 = &pppuStack_210;
  _objc_retain(pplVar13);
  _objc_retain(puVar9);
  _objc_retain(param_5);
  if (pplVar6 != (long **)0x0) {
    plVar14 = pplVar6[1];
    _objc_retain(pplVar13);
    if (pplVar13 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar13;
      _objc_retainAutorelease(pplVar13);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar13);
    func_0x00010002b838(auStack_320,pplVar5);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar17 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar17 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_308,puVar17);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar17 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar17 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_2f0,puVar17);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_2d8,3);
    pplVar5 = (long **)&UNK_110a02598;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02598,&uStack_340,param_6);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x00010007e5dc(&puStack_328);
    lVar2 = 0;
    puVar17 = (undefined *)puVar10;
    do {
      if ((&cStack_2d9)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
      unaff_x24 = &uStack_340;
    } while (lVar2 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(puVar9);
  pplVar6 = pplVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puVar10 = auStack_320;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar10);
  _objc_release(param_5);
  _objc_release(puVar9);
  _objc_release(pplVar13);
  pplVar7 = pplVar6;
  __Unwind_Resume();
  pplVar15 = &plStack_3c0;
  puStack_348 = &LAB_107ca1c34;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar1 = pplVar5;
  puVar11 = puVar17;
  puStack_380 = unaff_x24;
  puStack_378 = puVar10;
  pplStack_370 = pplVar6;
  puStack_368 = param_5;
  puStack_360 = puVar9;
  pplStack_358 = pplVar13;
  pppuStack_350 = &pppuStack_290;
  _objc_retain(pplVar5);
  plVar14 = (long *)0x0;
  if (pplVar7 != (long **)0x0) {
    plVar14 = pplVar7[1];
    _objc_retain(pplVar5);
    if (pplVar5 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar5;
      _objc_retainAutorelease(pplVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar5);
    puVar10 = auStack_3a0;
    func_0x00010002b838(auStack_3a0,pplVar13);
    plStack_3c0 = (long *)0x0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x00010007e1e8(&plStack_3c0,auStack_3a0,&lStack_388,1);
    pplVar1 = (long **)&UNK_110a025e8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a025e8,&plStack_3c0,puVar17);
    puStack_3a8 = (undefined1 *)&plStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    puVar11 = (undefined *)pplVar15;
    pplVar6 = &plStack_3c0;
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
      puVar11 = (undefined *)pplVar15;
      pplVar6 = &plStack_3c0;
    }
  }
  pplVar13 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar5);
  _objc_release(pplVar5);
  pplVar15 = pplVar13;
  __Unwind_Resume();
  pplVar8 = &plStack_440;
  puStack_3c8 = &LAB_107ca1da8;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = pplVar1;
  puVar9 = puVar11;
  puStack_400 = unaff_x24;
  puStack_3f8 = puVar10;
  pplStack_3f0 = pplVar6;
  plStack_3e8 = plVar14;
  pplStack_3e0 = pplVar13;
  pplStack_3d8 = pplVar5;
  pppuStack_3d0 = &pppuStack_350;
  _objc_retain(pplVar1);
  plVar14 = (long *)0x0;
  if (pplVar15 != (long **)0x0) {
    plVar14 = pplVar15[1];
    _objc_retain(pplVar1);
    if (pplVar1 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar1;
      _objc_retainAutorelease(pplVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar1);
    puVar10 = auStack_420;
    func_0x00010002b838(auStack_420,pplVar13);
    plStack_440 = (long *)0x0;
    uStack_438 = 0;
    uStack_430 = 0;
    func_0x00010007e1e8(&plStack_440,auStack_420,&lStack_408,1);
    pplVar7 = (long **)&UNK_110a02638;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02638,&plStack_440,puVar11);
    puStack_428 = (undefined1 *)&plStack_440;
    func_0x00010007e5dc(&puStack_428);
    puVar9 = (undefined *)pplVar8;
    pplVar6 = &plStack_440;
    if (cStack_409 < '\0') {
      __ZdlPv(auStack_420[0]);
      puVar9 = (undefined *)pplVar8;
      pplVar6 = &plStack_440;
    }
  }
  pplVar13 = pplVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar1);
  _objc_release(pplVar1);
  pplVar15 = pplVar13;
  __Unwind_Resume();
  pplVar8 = &plStack_4c0;
  puStack_448 = &SUB_107ca1f1c;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar7;
  puVar17 = puVar9;
  puStack_480 = unaff_x24;
  puStack_478 = puVar10;
  pplStack_470 = pplVar6;
  plStack_468 = plVar14;
  pplStack_460 = pplVar13;
  pplStack_458 = pplVar1;
  pppuStack_450 = &pppuStack_3d0;
  _objc_retain(pplVar7);
  plVar14 = (long *)0x0;
  if (pplVar15 != (long **)0x0) {
    plVar14 = pplVar15[1];
    _objc_retain(pplVar7);
    if (pplVar7 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar7;
      _objc_retainAutorelease(pplVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar7);
    puVar10 = auStack_4a0;
    func_0x00010002b838(auStack_4a0,pplVar13);
    plStack_4c0 = (long *)0x0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    func_0x00010007e1e8(&plStack_4c0,auStack_4a0,&lStack_488,1);
    pplVar5 = (long **)&UNK_110a02688;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02688,&plStack_4c0,puVar9);
    puStack_4a8 = (undefined1 *)&plStack_4c0;
    func_0x00010007e5dc(&puStack_4a8);
    puVar17 = (undefined *)pplVar8;
    pplVar6 = &plStack_4c0;
    if (cStack_489 < '\0') {
      __ZdlPv(auStack_4a0[0]);
      puVar17 = (undefined *)pplVar8;
      pplVar6 = &plStack_4c0;
    }
  }
  pplVar13 = pplVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar7);
  _objc_release(pplVar7);
  pplVar15 = pplVar13;
  __Unwind_Resume();
  plVar12 = alStack_530;
  puStack_4c8 = &LAB_107ca2090;
  lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar1 = (long **)0x0;
  pplStack_4f0 = pplVar6;
  plStack_4e8 = plVar14;
  pplStack_4e0 = pplVar13;
  pplStack_4d8 = pplVar7;
  pppuStack_4d0 = &pppuStack_450;
  if (pplVar15 != (long **)0x0) {
    pplVar13 = (long **)pplVar15[1];
    puVar9 = &UNK_10f44f9bb;
    if ((int)pplVar5 == 0) {
      puVar9 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(applStack_510,puVar9);
    alStack_530[0] = 0;
    alStack_530[1] = 0;
    alStack_530[2] = 0;
    func_0x00010007e1e8(alStack_530,applStack_510,&lStack_4f8,1);
    pplVar5 = (long **)&UNK_110a026d8;
    (*(code *)(*pplVar13)[3])(pplVar13,&UNK_110a026d8,alStack_530,puVar17);
    pplVar1 = &plStack_518;
    plStack_518 = alStack_530;
    func_0x00010007e5dc();
    puVar17 = (undefined *)plVar12;
    plVar14 = alStack_530;
    if (cStack_4f9 < '\0') {
      pplVar1 = applStack_510[0];
      __ZdlPv();
      puVar17 = (undefined *)plVar12;
      plVar14 = alStack_530;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4f8) {
    return;
  }
  ___stack_chk_fail();
  plStack_518 = plVar14;
  func_0x00010007e5dc(&plStack_518);
  if (cStack_4f9 < '\0') {
    __ZdlPv(applStack_510[0]);
  }
  pplVar15 = pplVar1;
  __Unwind_Resume();
  pplVar8 = &plStack_5b0;
  puStack_538 = &SUB_107ca21a8;
  ppppuVar16 = &pppuStack_540;
  lStack_578 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = pplVar5;
  puVar9 = puVar17;
  puStack_570 = unaff_x24;
  puStack_568 = puVar10;
  pplStack_560 = pplVar6;
  plStack_558 = plVar14;
  pplStack_550 = pplVar13;
  pplStack_548 = pplVar1;
  pppuStack_540 = &pppuStack_4d0;
  _objc_retain(pplVar5);
  if (pplVar15 != (long **)0x0) {
    plVar14 = pplVar15[1];
    pplVar7 = (long **)&UNK_110a02728;
    (**(code **)(*plVar14 + 0x28))();
    if ((int)plVar14 != 0) {
      pplVar15 = (long **)pplVar15[1];
      _objc_retain(pplVar5);
      if (pplVar5 == (long **)0x0) {
        pplVar13 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar13 = pplVar5;
        _objc_retainAutorelease(pplVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar5);
      puVar10 = auStack_590;
      func_0x00010002b838(auStack_590,pplVar13);
      plStack_5b0 = (long *)0x0;
      uStack_5a8 = 0;
      uStack_5a0 = 0;
      func_0x00010007e1e8(&plStack_5b0,auStack_590,&lStack_578,1);
      pplVar7 = (long **)&UNK_110a02728;
      (*(code *)(*pplVar15)[3])(pplVar15,&UNK_110a02728,&plStack_5b0,(long)puVar17 * 10);
      puStack_598 = (undefined1 *)&plStack_5b0;
      func_0x00010007e5dc(&puStack_598);
      puVar9 = (undefined *)pplVar8;
      pplVar6 = &plStack_5b0;
      if (cStack_579 < '\0') {
        __ZdlPv(auStack_590[0]);
        puVar9 = (undefined *)pplVar8;
        pplVar6 = &plStack_5b0;
      }
    }
  }
  pplVar13 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_578) {
    ___stack_chk_fail();
    _objc_release(pplVar5);
    _objc_release(pplVar5);
    puVar17 = &UNK_107ca2340;
    pplVar8 = pplVar13;
    __Unwind_Resume();
    pplVar1 = &plStack_5b0;
    while( true ) {
      *(undefined8 **)((long)pplVar1 + -0x40) = unaff_x24;
      *(undefined8 **)((long)pplVar1 + -0x38) = puVar10;
      *(long ***)((long)pplVar1 + -0x30) = pplVar6;
      *(long ***)((long)pplVar1 + -0x28) = pplVar15;
      *(long ***)((long)pplVar1 + -0x20) = pplVar13;
      *(long ***)((long)pplVar1 + -0x18) = pplVar5;
      *(undefined8 *****)((long)pplVar1 + -0x10) = ppppuVar16;
      *(undefined **)((long)pplVar1 + -8) = puVar17;
      *(undefined8 *)((long)pplVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      pplVar5 = pplVar7;
      _objc_retain(pplVar7);
      pplVar15 = pplVar8;
      dVar18 = param_1;
      if (pplVar8 != (long **)0x0) {
        plVar14 = pplVar8[1];
        pplVar5 = (long **)&UNK_110a02778;
        (**(code **)(*plVar14 + 0x28))();
        dVar18 = param_1;
        if ((int)plVar14 != 0) {
          pplVar15 = (long **)pplVar8[1];
          _objc_retain(pplVar7);
          if (pplVar7 == (long **)0x0) {
            pplVar13 = (long **)&UNK_10f44f7d9;
            dVar18 = param_1;
          }
          else {
            pplVar13 = pplVar7;
            _objc_retainAutorelease(pplVar7);
            func_0x00010bdc3520();
            dVar18 = param_1;
          }
          _objc_release(pplVar7);
          puVar10 = (undefined8 *)((long)pplVar1 + -0x60);
          func_0x00010002b838((undefined1 *)((long)pplVar1 + -0x60),pplVar13);
          *(undefined8 *)((long)pplVar1 + -0x80) = 0;
          *(undefined8 *)((long)pplVar1 + -0x78) = 0;
          *(undefined8 *)((long)pplVar1 + -0x70) = 0;
          func_0x00010007e1e8((undefined1 *)((long)pplVar1 + -0x80),
                              (undefined1 *)((long)pplVar1 + -0x60),
                              (undefined1 *)((long)pplVar1 + -0x48),1);
          pplVar5 = (long **)&UNK_110a02778;
          (*(code *)(*pplVar15)[3])
                    (pplVar15,&UNK_110a02778,(undefined1 *)((long)pplVar1 + -0x80),puVar9);
          *(undefined1 **)((long)pplVar1 + -0x68) = (undefined1 *)((long)pplVar1 + -0x80);
          func_0x00010007e5dc((undefined1 *)((long)pplVar1 + -0x68));
          pplVar6 = (long **)((long)pplVar1 + -0x80);
          if (*(char *)((long)pplVar1 + -0x49) < '\0') {
            __ZdlPv(*(undefined8 *)((long)pplVar1 + -0x60));
            pplVar6 = (long **)((long)pplVar1 + -0x80);
          }
        }
      }
      pplVar13 = pplVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pplVar1 + -0x48)) break;
      ___stack_chk_fail();
      _objc_release(pplVar7);
      _objc_release(pplVar7);
      pplVar8 = pplVar13;
      __Unwind_Resume();
      *(undefined8 *)((long)pplVar1 + -0xb0) = unaff_d9;
      *(double *)((long)pplVar1 + -0xa8) = unaff_d8;
      *(long ***)((long)pplVar1 + -0xa0) = pplVar13;
      *(long ***)((long)pplVar1 + -0x98) = pplVar7;
      *(undefined1 **)((long)pplVar1 + -0x90) = (undefined1 *)((long)pplVar1 + -0x10);
      *(undefined **)((long)pplVar1 + -0x88) = &SUB_107ca24d4;
      ppppuVar16 = (undefined8 ****)((long)pplVar1 + -0x90);
      _objc_retain(pplVar5);
      if (pplVar8 == (long **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(pplVar5);
        return;
      }
      param_1 = dVar18 * 1000.0;
      puVar9 = (undefined *)(long)param_1;
      puVar17 = &UNK_107ca2518;
      pplVar1 = (long **)((long)pplVar1 + -0xb0);
      pplVar7 = pplVar5;
      pplVar13 = pplVar8;
      unaff_d8 = dVar18;
    }
    return;
  }
  return;
}



/* Entry: 105b0b7fc; end: 105b0b80b; -[SCStoriesGrapheneMetricsEmitter logPostingAsyncFailureWithIdentifier:] */

/* WARNING: Possible PIC construction at 0x000107ca2514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ca1bfc) */

void FUN_105b0b7fc(double param_1,long param_2,undefined8 param_3,long **param_4,undefined *param_5,
                  undefined8 param_6)

{
  long **pplVar1;
  long lVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long *plVar10;
  long **pplVar11;
  long *plVar12;
  long **pplVar13;
  undefined8 *unaff_x24;
  undefined8 ****ppppuVar14;
  undefined *puVar15;
  double dVar16;
  double unaff_d8;
  undefined8 unaff_d9;
  long *plStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined1 *puStack_618;
  undefined8 auStack_610 [2];
  char cStack_5f9;
  long lStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 *puStack_5e8;
  long **pplStack_5e0;
  long *plStack_5d8;
  long **pplStack_5d0;
  long **pplStack_5c8;
  undefined8 ***pppuStack_5c0;
  undefined *puStack_5b8;
  long alStack_5b0 [3];
  long *plStack_598;
  long **applStack_590 [2];
  char cStack_579;
  long lStack_578;
  long **pplStack_570;
  long *plStack_568;
  long **pplStack_560;
  long **pplStack_558;
  undefined8 ***pppuStack_550;
  undefined *puStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  long **pplStack_4f0;
  long *plStack_4e8;
  long **pplStack_4e0;
  long **pplStack_4d8;
  undefined8 ***pppuStack_4d0;
  undefined *puStack_4c8;
  long *plStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  long **pplStack_470;
  long *plStack_468;
  long **pplStack_460;
  long **pplStack_458;
  undefined8 ***pppuStack_450;
  undefined *puStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  long **pplStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  long **pplStack_3d8;
  undefined8 ***pppuStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [3];
  undefined1 auStack_388 [24];
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  undefined8 ***pppuStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 ***pppuStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_2 + 8);
  puVar7 = (undefined *)0x1;
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar11 = param_4;
  _objc_retain(param_4);
  if (lVar2 != 0) {
    plVar12 = *(long **)(lVar2 + 8);
    _objc_retain(param_4);
    if (param_4 == (long **)0x0) {
      pplVar11 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar11 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pplVar11);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pplVar11 = (long **)&UNK_110a023b8;
    param_5 = (undefined *)0x1;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined *)puVar8;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined *)puVar8;
    }
  }
  pplVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_4);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  puStack_88 = &LAB_107ca1230;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar11;
  puVar15 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pplVar11);
  if (pplVar3 != (long **)0x0) {
    plVar12 = pplVar3[1];
    _objc_retain(pplVar11);
    if (pplVar11 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = pplVar11;
      _objc_retainAutorelease(pplVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar11);
    func_0x00010002b838(auStack_e0,pplVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pplVar5 = (long **)&UNK_110a02408;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar15 = (undefined *)puVar8;
    param_5 = puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar15 = (undefined *)puVar8;
      param_5 = puVar7;
    }
  }
  pplVar3 = pplVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar11);
  _objc_release(pplVar11);
  __Unwind_Resume();
  puVar8 = &uStack_180;
  puStack_108 = &SUB_107ca13a4;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar11 = pplVar5;
  puVar7 = puVar15;
  ppuStack_110 = &puStack_90;
  _objc_retain(pplVar5);
  if (pplVar3 != (long **)0x0) {
    plVar12 = pplVar3[1];
    _objc_retain(pplVar5);
    if (pplVar5 == (long **)0x0) {
      pplVar11 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar11 = pplVar5;
      _objc_retainAutorelease(pplVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar5);
    func_0x00010002b838(auStack_160,pplVar11);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    pplVar11 = (long **)&UNK_110a02458;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar7 = (undefined *)puVar8;
    param_5 = puVar15;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar7 = (undefined *)puVar8;
      param_5 = puVar15;
    }
  }
  pplVar3 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar5);
  _objc_release(pplVar5);
  __Unwind_Resume();
  puVar8 = &uStack_200;
  puStack_188 = &SUB_107ca1518;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar11;
  puVar15 = puVar7;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(pplVar11);
  if (pplVar3 != (long **)0x0) {
    plVar12 = pplVar3[1];
    _objc_retain(pplVar11);
    if (pplVar11 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = pplVar11;
      _objc_retainAutorelease(pplVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar11);
    func_0x00010002b838(auStack_1e0,pplVar3);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    pplVar5 = (long **)&UNK_110a024a8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar15 = (undefined *)puVar8;
    param_5 = puVar7;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar15 = (undefined *)puVar8;
      param_5 = puVar7;
    }
  }
  pplVar3 = pplVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar11);
  _objc_release(pplVar11);
  __Unwind_Resume();
  puVar8 = &uStack_280;
  puStack_208 = &LAB_107ca168c;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar11 = pplVar5;
  puVar7 = puVar15;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(pplVar5);
  if (pplVar3 != (long **)0x0) {
    plVar12 = pplVar3[1];
    _objc_retain(pplVar5);
    if (pplVar5 == (long **)0x0) {
      pplVar11 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar11 = pplVar5;
      _objc_retainAutorelease(pplVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar5);
    func_0x00010002b838(auStack_260,pplVar11);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    pplVar11 = (long **)&UNK_110a024f8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar7 = (undefined *)puVar8;
    param_5 = puVar15;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar7 = (undefined *)puVar8;
      param_5 = puVar15;
    }
  }
  pplVar3 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar5);
  _objc_release(pplVar5);
  __Unwind_Resume();
  puVar8 = &uStack_300;
  puStack_288 = &LAB_107ca1800;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar11;
  puVar15 = puVar7;
  pppuStack_290 = &pppuStack_210;
  _objc_retain(pplVar11);
  if (pplVar3 != (long **)0x0) {
    plVar12 = pplVar3[1];
    _objc_retain(pplVar11);
    if (pplVar11 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = pplVar11;
      _objc_retainAutorelease(pplVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar11);
    func_0x00010002b838(auStack_2e0,pplVar3);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
    pplVar5 = (long **)&UNK_110a02548;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    puVar15 = (undefined *)puVar8;
    param_5 = puVar7;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar15 = (undefined *)puVar8;
      param_5 = puVar7;
    }
  }
  pplVar3 = pplVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar11);
  _objc_release(pplVar11);
  __Unwind_Resume();
  puVar8 = &uStack_3c0;
  puStack_308 = &LAB_107ca1974;
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar11 = pplVar5;
  puVar7 = puVar15;
  pppuStack_310 = &pppuStack_290;
  _objc_retain(pplVar5);
  _objc_retain(puVar15);
  _objc_retain(param_5);
  if (pplVar3 != (long **)0x0) {
    plVar12 = pplVar3[1];
    _objc_retain(pplVar5);
    if (pplVar5 == (long **)0x0) {
      pplVar11 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar11 = pplVar5;
      _objc_retainAutorelease(pplVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar5);
    func_0x00010002b838(auStack_3a0,pplVar11);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar7 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar15);
      puVar7 = puVar15;
      func_0x00010bdc3520(puVar15);
    }
    _objc_release(puVar15);
    func_0x00010002b838(auStack_388,puVar7);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar7 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar7 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_370,puVar7);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x00010007e1e8(&uStack_3c0,auStack_3a0,&lStack_358,3);
    pplVar11 = (long **)&UNK_110a02598;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a02598,&uStack_3c0,param_6);
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    lVar2 = 0;
    puVar7 = (undefined *)puVar8;
    do {
      if ((&cStack_359)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_370 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
      unaff_x24 = &uStack_3c0;
    } while (lVar2 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(puVar15);
  pplVar3 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_358) {
    ___stack_chk_fail();
    _objc_release(param_5);
    puVar8 = auStack_3a0;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != puVar8);
    _objc_release(param_5);
    _objc_release(puVar15);
    _objc_release(pplVar5);
    pplVar4 = pplVar3;
    __Unwind_Resume();
    pplVar13 = &plStack_440;
    puStack_3c8 = &LAB_107ca1c34;
    lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar1 = pplVar11;
    puVar9 = puVar7;
    puStack_400 = unaff_x24;
    puStack_3f8 = puVar8;
    pplStack_3f0 = pplVar3;
    puStack_3e8 = param_5;
    puStack_3e0 = puVar15;
    pplStack_3d8 = pplVar5;
    pppuStack_3d0 = &pppuStack_310;
    _objc_retain(pplVar11);
    plVar12 = (long *)0x0;
    if (pplVar4 != (long **)0x0) {
      plVar12 = pplVar4[1];
      _objc_retain(pplVar11);
      if (pplVar11 == (long **)0x0) {
        pplVar3 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar3 = pplVar11;
        _objc_retainAutorelease(pplVar11);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar11);
      puVar8 = auStack_420;
      func_0x00010002b838(auStack_420,pplVar3);
      plStack_440 = (long *)0x0;
      uStack_438 = 0;
      uStack_430 = 0;
      func_0x00010007e1e8(&plStack_440,auStack_420,&lStack_408,1);
      pplVar1 = (long **)&UNK_110a025e8;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a025e8,&plStack_440,puVar7);
      puStack_428 = (undefined1 *)&plStack_440;
      func_0x00010007e5dc(&puStack_428);
      puVar9 = (undefined *)pplVar13;
      pplVar3 = &plStack_440;
      if (cStack_409 < '\0') {
        __ZdlPv(auStack_420[0]);
        puVar9 = (undefined *)pplVar13;
        pplVar3 = &plStack_440;
      }
    }
    pplVar5 = pplVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pplVar11);
    _objc_release(pplVar11);
    pplVar13 = pplVar5;
    __Unwind_Resume();
    pplVar6 = &plStack_4c0;
    puStack_448 = &LAB_107ca1da8;
    lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar4 = pplVar1;
    puVar7 = puVar9;
    puStack_480 = unaff_x24;
    puStack_478 = puVar8;
    pplStack_470 = pplVar3;
    plStack_468 = plVar12;
    pplStack_460 = pplVar5;
    pplStack_458 = pplVar11;
    pppuStack_450 = &pppuStack_3d0;
    _objc_retain(pplVar1);
    plVar12 = (long *)0x0;
    if (pplVar13 != (long **)0x0) {
      plVar12 = pplVar13[1];
      _objc_retain(pplVar1);
      if (pplVar1 == (long **)0x0) {
        pplVar11 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar11 = pplVar1;
        _objc_retainAutorelease(pplVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar1);
      puVar8 = auStack_4a0;
      func_0x00010002b838(auStack_4a0,pplVar11);
      plStack_4c0 = (long *)0x0;
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      func_0x00010007e1e8(&plStack_4c0,auStack_4a0,&lStack_488,1);
      pplVar4 = (long **)&UNK_110a02638;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a02638,&plStack_4c0,puVar9);
      puStack_4a8 = (undefined1 *)&plStack_4c0;
      func_0x00010007e5dc(&puStack_4a8);
      puVar7 = (undefined *)pplVar6;
      pplVar3 = &plStack_4c0;
      if (cStack_489 < '\0') {
        __ZdlPv(auStack_4a0[0]);
        puVar7 = (undefined *)pplVar6;
        pplVar3 = &plStack_4c0;
      }
    }
    pplVar11 = pplVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pplVar1);
    _objc_release(pplVar1);
    pplVar13 = pplVar11;
    __Unwind_Resume();
    pplVar6 = &plStack_540;
    puStack_4c8 = &SUB_107ca1f1c;
    lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar5 = pplVar4;
    puVar15 = puVar7;
    puStack_500 = unaff_x24;
    puStack_4f8 = puVar8;
    pplStack_4f0 = pplVar3;
    plStack_4e8 = plVar12;
    pplStack_4e0 = pplVar11;
    pplStack_4d8 = pplVar1;
    pppuStack_4d0 = &pppuStack_450;
    _objc_retain(pplVar4);
    plVar12 = (long *)0x0;
    if (pplVar13 != (long **)0x0) {
      plVar12 = pplVar13[1];
      _objc_retain(pplVar4);
      if (pplVar4 == (long **)0x0) {
        pplVar11 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar11 = pplVar4;
        _objc_retainAutorelease(pplVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar4);
      puVar8 = auStack_520;
      func_0x00010002b838(auStack_520,pplVar11);
      plStack_540 = (long *)0x0;
      uStack_538 = 0;
      uStack_530 = 0;
      func_0x00010007e1e8(&plStack_540,auStack_520,&lStack_508,1);
      pplVar5 = (long **)&UNK_110a02688;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a02688,&plStack_540,puVar7);
      puStack_528 = (undefined1 *)&plStack_540;
      func_0x00010007e5dc(&puStack_528);
      puVar15 = (undefined *)pplVar6;
      pplVar3 = &plStack_540;
      if (cStack_509 < '\0') {
        __ZdlPv(auStack_520[0]);
        puVar15 = (undefined *)pplVar6;
        pplVar3 = &plStack_540;
      }
    }
    pplVar11 = pplVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pplVar4);
    _objc_release(pplVar4);
    pplVar13 = pplVar11;
    __Unwind_Resume();
    plVar10 = alStack_5b0;
    puStack_548 = &LAB_107ca2090;
    lStack_578 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar1 = (long **)0x0;
    pplStack_570 = pplVar3;
    plStack_568 = plVar12;
    pplStack_560 = pplVar11;
    pplStack_558 = pplVar4;
    pppuStack_550 = &pppuStack_4d0;
    if (pplVar13 != (long **)0x0) {
      pplVar11 = (long **)pplVar13[1];
      puVar7 = &UNK_10f44f9bb;
      if ((int)pplVar5 == 0) {
        puVar7 = &UNK_10f44f9c0;
      }
      func_0x00010002b838(applStack_590,puVar7);
      alStack_5b0[0] = 0;
      alStack_5b0[1] = 0;
      alStack_5b0[2] = 0;
      func_0x00010007e1e8(alStack_5b0,applStack_590,&lStack_578,1);
      pplVar5 = (long **)&UNK_110a026d8;
      (*(code *)(*pplVar11)[3])(pplVar11,&UNK_110a026d8,alStack_5b0,puVar15);
      pplVar1 = &plStack_598;
      plStack_598 = alStack_5b0;
      func_0x00010007e5dc();
      puVar15 = (undefined *)plVar10;
      plVar12 = alStack_5b0;
      if (cStack_579 < '\0') {
        pplVar1 = applStack_590[0];
        __ZdlPv();
        puVar15 = (undefined *)plVar10;
        plVar12 = alStack_5b0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_578) {
      ___stack_chk_fail();
      plStack_598 = plVar12;
      func_0x00010007e5dc(&plStack_598);
      if (cStack_579 < '\0') {
        __ZdlPv(applStack_590[0]);
      }
      pplVar13 = pplVar1;
      __Unwind_Resume();
      pplVar6 = &plStack_630;
      puStack_5b8 = &SUB_107ca21a8;
      ppppuVar14 = &pppuStack_5c0;
      lStack_5f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pplVar4 = pplVar5;
      puVar7 = puVar15;
      puStack_5f0 = unaff_x24;
      puStack_5e8 = puVar8;
      pplStack_5e0 = pplVar3;
      plStack_5d8 = plVar12;
      pplStack_5d0 = pplVar11;
      pplStack_5c8 = pplVar1;
      pppuStack_5c0 = &pppuStack_550;
      _objc_retain(pplVar5);
      if (pplVar13 != (long **)0x0) {
        plVar12 = pplVar13[1];
        pplVar4 = (long **)&UNK_110a02728;
        (**(code **)(*plVar12 + 0x28))();
        if ((int)plVar12 != 0) {
          pplVar13 = (long **)pplVar13[1];
          _objc_retain(pplVar5);
          if (pplVar5 == (long **)0x0) {
            pplVar11 = (long **)&UNK_10f44f7d9;
          }
          else {
            pplVar11 = pplVar5;
            _objc_retainAutorelease(pplVar5);
            func_0x00010bdc3520();
          }
          _objc_release(pplVar5);
          puVar8 = auStack_610;
          func_0x00010002b838(auStack_610,pplVar11);
          plStack_630 = (long *)0x0;
          uStack_628 = 0;
          uStack_620 = 0;
          func_0x00010007e1e8(&plStack_630,auStack_610,&lStack_5f8,1);
          pplVar4 = (long **)&UNK_110a02728;
          (*(code *)(*pplVar13)[3])(pplVar13,&UNK_110a02728,&plStack_630,(long)puVar15 * 10);
          puStack_618 = (undefined1 *)&plStack_630;
          func_0x00010007e5dc(&puStack_618);
          puVar7 = (undefined *)pplVar6;
          pplVar3 = &plStack_630;
          if (cStack_5f9 < '\0') {
            __ZdlPv(auStack_610[0]);
            puVar7 = (undefined *)pplVar6;
            pplVar3 = &plStack_630;
          }
        }
      }
      pplVar11 = pplVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5f8) {
        ___stack_chk_fail();
        _objc_release(pplVar5);
        _objc_release(pplVar5);
        puVar15 = &UNK_107ca2340;
        pplVar6 = pplVar11;
        __Unwind_Resume();
        pplVar1 = &plStack_630;
        while( true ) {
          *(undefined8 **)((long)pplVar1 + -0x40) = unaff_x24;
          *(undefined8 **)((long)pplVar1 + -0x38) = puVar8;
          *(long ***)((long)pplVar1 + -0x30) = pplVar3;
          *(long ***)((long)pplVar1 + -0x28) = pplVar13;
          *(long ***)((long)pplVar1 + -0x20) = pplVar11;
          *(long ***)((long)pplVar1 + -0x18) = pplVar5;
          *(undefined8 *****)((long)pplVar1 + -0x10) = ppppuVar14;
          *(undefined **)((long)pplVar1 + -8) = puVar15;
          *(undefined8 *)((long)pplVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          pplVar5 = pplVar4;
          _objc_retain(pplVar4);
          pplVar13 = pplVar6;
          dVar16 = param_1;
          if (pplVar6 != (long **)0x0) {
            plVar12 = pplVar6[1];
            pplVar5 = (long **)&UNK_110a02778;
            (**(code **)(*plVar12 + 0x28))();
            dVar16 = param_1;
            if ((int)plVar12 != 0) {
              pplVar13 = (long **)pplVar6[1];
              _objc_retain(pplVar4);
              if (pplVar4 == (long **)0x0) {
                pplVar11 = (long **)&UNK_10f44f7d9;
                dVar16 = param_1;
              }
              else {
                pplVar11 = pplVar4;
                _objc_retainAutorelease(pplVar4);
                func_0x00010bdc3520();
                dVar16 = param_1;
              }
              _objc_release(pplVar4);
              puVar8 = (undefined8 *)((long)pplVar1 + -0x60);
              func_0x00010002b838((undefined1 *)((long)pplVar1 + -0x60),pplVar11);
              *(undefined8 *)((long)pplVar1 + -0x80) = 0;
              *(undefined8 *)((long)pplVar1 + -0x78) = 0;
              *(undefined8 *)((long)pplVar1 + -0x70) = 0;
              func_0x00010007e1e8((undefined1 *)((long)pplVar1 + -0x80),
                                  (undefined1 *)((long)pplVar1 + -0x60),
                                  (undefined1 *)((long)pplVar1 + -0x48),1);
              pplVar5 = (long **)&UNK_110a02778;
              (*(code *)(*pplVar13)[3])
                        (pplVar13,&UNK_110a02778,(undefined1 *)((long)pplVar1 + -0x80),puVar7);
              *(undefined1 **)((long)pplVar1 + -0x68) = (undefined1 *)((long)pplVar1 + -0x80);
              func_0x00010007e5dc((undefined1 *)((long)pplVar1 + -0x68));
              pplVar3 = (long **)((long)pplVar1 + -0x80);
              if (*(char *)((long)pplVar1 + -0x49) < '\0') {
                __ZdlPv(*(undefined8 *)((long)pplVar1 + -0x60));
                pplVar3 = (long **)((long)pplVar1 + -0x80);
              }
            }
          }
          pplVar11 = pplVar4;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pplVar1 + -0x48)) break;
          ___stack_chk_fail();
          _objc_release(pplVar4);
          _objc_release(pplVar4);
          pplVar6 = pplVar11;
          __Unwind_Resume();
          *(undefined8 *)((long)pplVar1 + -0xb0) = unaff_d9;
          *(double *)((long)pplVar1 + -0xa8) = unaff_d8;
          *(long ***)((long)pplVar1 + -0xa0) = pplVar11;
          *(long ***)((long)pplVar1 + -0x98) = pplVar4;
          *(undefined1 **)((long)pplVar1 + -0x90) = (undefined1 *)((long)pplVar1 + -0x10);
          *(undefined **)((long)pplVar1 + -0x88) = &SUB_107ca24d4;
          ppppuVar14 = (undefined8 ****)((long)pplVar1 + -0x90);
          _objc_retain(pplVar5);
          if (pplVar6 == (long **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__objc_release_11034d2d0)(pplVar5);
            return;
          }
          param_1 = dVar16 * 1000.0;
          puVar7 = (undefined *)(long)param_1;
          puVar15 = &UNK_107ca2518;
          pplVar1 = (long **)((long)pplVar1 + -0xb0);
          pplVar4 = pplVar5;
          pplVar11 = pplVar6;
          unaff_d8 = dVar16;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105b0b80c; end: 105b0b867; -[SCStoriesGrapheneMetricsEmitter logPostingAsyncFailureWithExistingState:] */

void FUN_105b0b80c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e1e0d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107ca10bc(*(undefined8 *)(param_1 + 8),puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b868; end: 105b0b8c3; -[SCStoriesGrapheneMetricsEmitter logPostingAsyncRetryWithAbortReason:] */

void FUN_105b0b868(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e1e0f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107ca13a4(*(undefined8 *)(param_1 + 8),puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b8c4; end: 105b0b91f; -[SCStoriesGrapheneMetricsEmitter logPostingAsyncRetryMediaUploadResult:] */

void FUN_105b0b8c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e1e118);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107ca13a4(*(undefined8 *)(param_1 + 8),puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b920; end: 105b0b933; -[SCStoriesGrapheneMetricsEmitter logPostingAsyncRetry] */

/* WARNING: Possible PIC construction at 0x000107ca2514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ca1408) */
/* WARNING: Removing unreachable block (ram,0x000107ca1bfc) */

void FUN_105b0b920(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  long **pplVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long **pplVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long *plVar12;
  long **pplVar13;
  long *plVar14;
  long **pplVar15;
  undefined8 *unaff_x24;
  undefined8 ****ppppuVar16;
  undefined *puVar17;
  double dVar18;
  double unaff_d8;
  undefined8 unaff_d9;
  long *plStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined1 *puStack_518;
  undefined8 auStack_510 [2];
  char cStack_4f9;
  long lStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  long **pplStack_4e0;
  long *plStack_4d8;
  long **pplStack_4d0;
  long **pplStack_4c8;
  undefined8 ***pppuStack_4c0;
  undefined *puStack_4b8;
  long alStack_4b0 [3];
  long *plStack_498;
  long **applStack_490 [2];
  char cStack_479;
  long lStack_478;
  long **pplStack_470;
  long *plStack_468;
  long **pplStack_460;
  long **pplStack_458;
  undefined8 ***pppuStack_450;
  undefined *puStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  long **pplStack_3f0;
  long *plStack_3e8;
  long **pplStack_3e0;
  long **pplStack_3d8;
  undefined8 ***pppuStack_3d0;
  undefined *puStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  long **pplStack_370;
  long *plStack_368;
  long **pplStack_360;
  long **pplStack_358;
  undefined8 ***pppuStack_350;
  undefined *puStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  long **pplStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  long **pplStack_2d8;
  undefined8 ***pppuStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [3];
  undefined1 auStack_288 [24];
  undefined8 auStack_270 [2];
  char cStack_259;
  long lStack_258;
  undefined8 ***pppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_2 + 8);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e1e138;
  puVar9 = (undefined *)0x1;
  puVar10 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar13 = (long **)ppuVar4;
  _objc_retain(&PTR____CFConstantStringClassReference_110e1e138);
  if (lVar2 != 0) {
    plVar14 = *(long **)(lVar2 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e1e138);
    ppuVar3 = ppuVar4;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e1e138);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e1e138);
    func_0x00010002b838(auStack_60,ppuVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pplVar13 = (long **)&UNK_110a02458;
    param_5 = (undefined *)0x1;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar9 = (undefined *)puVar10;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar9 = (undefined *)puVar10;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110e1e138);
  _objc_release(&PTR____CFConstantStringClassReference_110e1e138);
  __Unwind_Resume();
  puVar10 = &uStack_100;
  puStack_88 = &SUB_107ca1518;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar13;
  puVar17 = puVar9;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pplVar13);
  if (ppuVar4 != (undefined **)0x0) {
    plVar14 = (long *)ppuVar4[1];
    _objc_retain(pplVar13);
    if (pplVar13 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar13;
      _objc_retainAutorelease(pplVar13);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar13);
    func_0x00010002b838(auStack_e0,pplVar5);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pplVar5 = (long **)&UNK_110a024a8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar17 = (undefined *)puVar10;
    param_5 = puVar9;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar17 = (undefined *)puVar10;
      param_5 = puVar9;
    }
  }
  pplVar6 = pplVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar13);
  _objc_release(pplVar13);
  __Unwind_Resume();
  puVar10 = &uStack_180;
  puStack_108 = &LAB_107ca168c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar13 = pplVar5;
  puVar9 = puVar17;
  ppuStack_110 = &puStack_90;
  _objc_retain(pplVar5);
  if (pplVar6 != (long **)0x0) {
    plVar14 = pplVar6[1];
    _objc_retain(pplVar5);
    if (pplVar5 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar5;
      _objc_retainAutorelease(pplVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar5);
    func_0x00010002b838(auStack_160,pplVar13);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    pplVar13 = (long **)&UNK_110a024f8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar9 = (undefined *)puVar10;
    param_5 = puVar17;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar9 = (undefined *)puVar10;
      param_5 = puVar17;
    }
  }
  pplVar6 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar5);
  _objc_release(pplVar5);
  __Unwind_Resume();
  puVar10 = &uStack_200;
  puStack_188 = &LAB_107ca1800;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar13;
  puVar17 = puVar9;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(pplVar13);
  if (pplVar6 != (long **)0x0) {
    plVar14 = pplVar6[1];
    _objc_retain(pplVar13);
    if (pplVar13 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar13;
      _objc_retainAutorelease(pplVar13);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar13);
    func_0x00010002b838(auStack_1e0,pplVar5);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    pplVar5 = (long **)&UNK_110a02548;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar17 = (undefined *)puVar10;
    param_5 = puVar9;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar17 = (undefined *)puVar10;
      param_5 = puVar9;
    }
  }
  pplVar6 = pplVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
    ___stack_chk_fail();
    _objc_release(pplVar13);
    _objc_release(pplVar13);
    __Unwind_Resume();
    puVar10 = &uStack_2c0;
    puStack_208 = &LAB_107ca1974;
    lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar13 = pplVar5;
    puVar9 = puVar17;
    pppuStack_210 = &pppuStack_190;
    _objc_retain(pplVar5);
    _objc_retain(puVar17);
    _objc_retain(param_5);
    if (pplVar6 != (long **)0x0) {
      plVar14 = pplVar6[1];
      _objc_retain(pplVar5);
      if (pplVar5 == (long **)0x0) {
        pplVar13 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar13 = pplVar5;
        _objc_retainAutorelease(pplVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar5);
      func_0x00010002b838(auStack_2a0,pplVar13);
      _objc_retain(puVar17);
      if (puVar17 == (undefined *)0x0) {
        puVar9 = &UNK_10f44f7d9;
      }
      else {
        _objc_retainAutorelease(puVar17);
        puVar9 = puVar17;
        func_0x00010bdc3520(puVar17);
      }
      _objc_release(puVar17);
      func_0x00010002b838(auStack_288,puVar9);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar9 = &UNK_10f44f7d9;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar9 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_270,puVar9);
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_258,3);
      pplVar13 = (long **)&UNK_110a02598;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02598,&uStack_2c0,param_6);
      puStack_2a8 = (undefined1 *)&uStack_2c0;
      func_0x00010007e5dc(&puStack_2a8);
      lVar2 = 0;
      puVar9 = (undefined *)puVar10;
      do {
        if ((&cStack_259)[lVar2] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar2));
        }
        lVar2 = lVar2 + -0x18;
        unaff_x24 = &uStack_2c0;
      } while (lVar2 != -0x48);
    }
    _objc_release(param_5);
    _objc_release(puVar17);
    pplVar6 = pplVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(param_5);
    puVar10 = auStack_2a0;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != puVar10);
    _objc_release(param_5);
    _objc_release(puVar17);
    _objc_release(pplVar5);
    pplVar7 = pplVar6;
    __Unwind_Resume();
    pplVar15 = &plStack_340;
    puStack_2c8 = &LAB_107ca1c34;
    lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar1 = pplVar13;
    puVar11 = puVar9;
    puStack_300 = unaff_x24;
    puStack_2f8 = puVar10;
    pplStack_2f0 = pplVar6;
    puStack_2e8 = param_5;
    puStack_2e0 = puVar17;
    pplStack_2d8 = pplVar5;
    pppuStack_2d0 = &pppuStack_210;
    _objc_retain(pplVar13);
    plVar14 = (long *)0x0;
    if (pplVar7 != (long **)0x0) {
      plVar14 = pplVar7[1];
      _objc_retain(pplVar13);
      if (pplVar13 == (long **)0x0) {
        pplVar5 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar5 = pplVar13;
        _objc_retainAutorelease(pplVar13);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar13);
      puVar10 = auStack_320;
      func_0x00010002b838(auStack_320,pplVar5);
      plStack_340 = (long *)0x0;
      uStack_338 = 0;
      uStack_330 = 0;
      func_0x00010007e1e8(&plStack_340,auStack_320,&lStack_308,1);
      pplVar1 = (long **)&UNK_110a025e8;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a025e8,&plStack_340,puVar9);
      puStack_328 = (undefined1 *)&plStack_340;
      func_0x00010007e5dc(&puStack_328);
      puVar11 = (undefined *)pplVar15;
      pplVar6 = &plStack_340;
      if (cStack_309 < '\0') {
        __ZdlPv(auStack_320[0]);
        puVar11 = (undefined *)pplVar15;
        pplVar6 = &plStack_340;
      }
    }
    pplVar5 = pplVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pplVar13);
    _objc_release(pplVar13);
    pplVar15 = pplVar5;
    __Unwind_Resume();
    pplVar8 = &plStack_3c0;
    puStack_348 = &LAB_107ca1da8;
    lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar7 = pplVar1;
    puVar9 = puVar11;
    puStack_380 = unaff_x24;
    puStack_378 = puVar10;
    pplStack_370 = pplVar6;
    plStack_368 = plVar14;
    pplStack_360 = pplVar5;
    pplStack_358 = pplVar13;
    pppuStack_350 = &pppuStack_2d0;
    _objc_retain(pplVar1);
    plVar14 = (long *)0x0;
    if (pplVar15 != (long **)0x0) {
      plVar14 = pplVar15[1];
      _objc_retain(pplVar1);
      if (pplVar1 == (long **)0x0) {
        pplVar13 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar13 = pplVar1;
        _objc_retainAutorelease(pplVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar1);
      puVar10 = auStack_3a0;
      func_0x00010002b838(auStack_3a0,pplVar13);
      plStack_3c0 = (long *)0x0;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      func_0x00010007e1e8(&plStack_3c0,auStack_3a0,&lStack_388,1);
      pplVar7 = (long **)&UNK_110a02638;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02638,&plStack_3c0,puVar11);
      puStack_3a8 = (undefined1 *)&plStack_3c0;
      func_0x00010007e5dc(&puStack_3a8);
      puVar9 = (undefined *)pplVar8;
      pplVar6 = &plStack_3c0;
      if (cStack_389 < '\0') {
        __ZdlPv(auStack_3a0[0]);
        puVar9 = (undefined *)pplVar8;
        pplVar6 = &plStack_3c0;
      }
    }
    pplVar13 = pplVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_388) {
      ___stack_chk_fail();
      _objc_release(pplVar1);
      _objc_release(pplVar1);
      pplVar15 = pplVar13;
      __Unwind_Resume();
      pplVar8 = &plStack_440;
      puStack_3c8 = &SUB_107ca1f1c;
      lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pplVar5 = pplVar7;
      puVar17 = puVar9;
      puStack_400 = unaff_x24;
      puStack_3f8 = puVar10;
      pplStack_3f0 = pplVar6;
      plStack_3e8 = plVar14;
      pplStack_3e0 = pplVar13;
      pplStack_3d8 = pplVar1;
      pppuStack_3d0 = &pppuStack_350;
      _objc_retain(pplVar7);
      plVar14 = (long *)0x0;
      if (pplVar15 != (long **)0x0) {
        plVar14 = pplVar15[1];
        _objc_retain(pplVar7);
        if (pplVar7 == (long **)0x0) {
          pplVar13 = (long **)&UNK_10f44f7d9;
        }
        else {
          pplVar13 = pplVar7;
          _objc_retainAutorelease(pplVar7);
          func_0x00010bdc3520();
        }
        _objc_release(pplVar7);
        puVar10 = auStack_420;
        func_0x00010002b838(auStack_420,pplVar13);
        plStack_440 = (long *)0x0;
        uStack_438 = 0;
        uStack_430 = 0;
        func_0x00010007e1e8(&plStack_440,auStack_420,&lStack_408,1);
        pplVar5 = (long **)&UNK_110a02688;
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02688,&plStack_440,puVar9);
        puStack_428 = (undefined1 *)&plStack_440;
        func_0x00010007e5dc(&puStack_428);
        puVar17 = (undefined *)pplVar8;
        pplVar6 = &plStack_440;
        if (cStack_409 < '\0') {
          __ZdlPv(auStack_420[0]);
          puVar17 = (undefined *)pplVar8;
          pplVar6 = &plStack_440;
        }
      }
      pplVar13 = pplVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pplVar7);
      _objc_release(pplVar7);
      pplVar15 = pplVar13;
      __Unwind_Resume();
      plVar12 = alStack_4b0;
      puStack_448 = &LAB_107ca2090;
      lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pplVar1 = (long **)0x0;
      pplStack_470 = pplVar6;
      plStack_468 = plVar14;
      pplStack_460 = pplVar13;
      pplStack_458 = pplVar7;
      pppuStack_450 = &pppuStack_3d0;
      if (pplVar15 != (long **)0x0) {
        pplVar13 = (long **)pplVar15[1];
        puVar9 = &UNK_10f44f9bb;
        if ((int)pplVar5 == 0) {
          puVar9 = &UNK_10f44f9c0;
        }
        func_0x00010002b838(applStack_490,puVar9);
        alStack_4b0[0] = 0;
        alStack_4b0[1] = 0;
        alStack_4b0[2] = 0;
        func_0x00010007e1e8(alStack_4b0,applStack_490,&lStack_478,1);
        pplVar5 = (long **)&UNK_110a026d8;
        (*(code *)(*pplVar13)[3])(pplVar13,&UNK_110a026d8,alStack_4b0,puVar17);
        pplVar1 = &plStack_498;
        plStack_498 = alStack_4b0;
        func_0x00010007e5dc();
        puVar17 = (undefined *)plVar12;
        plVar14 = alStack_4b0;
        if (cStack_479 < '\0') {
          pplVar1 = applStack_490[0];
          __ZdlPv();
          puVar17 = (undefined *)plVar12;
          plVar14 = alStack_4b0;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_478) {
        ___stack_chk_fail();
        plStack_498 = plVar14;
        func_0x00010007e5dc(&plStack_498);
        if (cStack_479 < '\0') {
          __ZdlPv(applStack_490[0]);
        }
        pplVar15 = pplVar1;
        __Unwind_Resume();
        pplVar8 = &plStack_530;
        puStack_4b8 = &SUB_107ca21a8;
        ppppuVar16 = &pppuStack_4c0;
        lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pplVar7 = pplVar5;
        puVar9 = puVar17;
        puStack_4f0 = unaff_x24;
        puStack_4e8 = puVar10;
        pplStack_4e0 = pplVar6;
        plStack_4d8 = plVar14;
        pplStack_4d0 = pplVar13;
        pplStack_4c8 = pplVar1;
        pppuStack_4c0 = &pppuStack_450;
        _objc_retain(pplVar5);
        if (pplVar15 != (long **)0x0) {
          plVar14 = pplVar15[1];
          pplVar7 = (long **)&UNK_110a02728;
          (**(code **)(*plVar14 + 0x28))();
          if ((int)plVar14 != 0) {
            pplVar15 = (long **)pplVar15[1];
            _objc_retain(pplVar5);
            if (pplVar5 == (long **)0x0) {
              pplVar13 = (long **)&UNK_10f44f7d9;
            }
            else {
              pplVar13 = pplVar5;
              _objc_retainAutorelease(pplVar5);
              func_0x00010bdc3520();
            }
            _objc_release(pplVar5);
            puVar10 = auStack_510;
            func_0x00010002b838(auStack_510,pplVar13);
            plStack_530 = (long *)0x0;
            uStack_528 = 0;
            uStack_520 = 0;
            func_0x00010007e1e8(&plStack_530,auStack_510,&lStack_4f8,1);
            pplVar7 = (long **)&UNK_110a02728;
            (*(code *)(*pplVar15)[3])(pplVar15,&UNK_110a02728,&plStack_530,(long)puVar17 * 10);
            puStack_518 = (undefined1 *)&plStack_530;
            func_0x00010007e5dc(&puStack_518);
            puVar9 = (undefined *)pplVar8;
            pplVar6 = &plStack_530;
            if (cStack_4f9 < '\0') {
              __ZdlPv(auStack_510[0]);
              puVar9 = (undefined *)pplVar8;
              pplVar6 = &plStack_530;
            }
          }
        }
        pplVar13 = pplVar5;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4f8) {
          ___stack_chk_fail();
          _objc_release(pplVar5);
          _objc_release(pplVar5);
          puVar17 = &UNK_107ca2340;
          pplVar8 = pplVar13;
          __Unwind_Resume();
          pplVar1 = &plStack_530;
          while( true ) {
            *(undefined8 **)((long)pplVar1 + -0x40) = unaff_x24;
            *(undefined8 **)((long)pplVar1 + -0x38) = puVar10;
            *(long ***)((long)pplVar1 + -0x30) = pplVar6;
            *(long ***)((long)pplVar1 + -0x28) = pplVar15;
            *(long ***)((long)pplVar1 + -0x20) = pplVar13;
            *(long ***)((long)pplVar1 + -0x18) = pplVar5;
            *(undefined8 *****)((long)pplVar1 + -0x10) = ppppuVar16;
            *(undefined **)((long)pplVar1 + -8) = puVar17;
            *(undefined8 *)((long)pplVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
            ;
            pplVar5 = pplVar7;
            _objc_retain(pplVar7);
            pplVar15 = pplVar8;
            dVar18 = param_1;
            if (pplVar8 != (long **)0x0) {
              plVar14 = pplVar8[1];
              pplVar5 = (long **)&UNK_110a02778;
              (**(code **)(*plVar14 + 0x28))();
              dVar18 = param_1;
              if ((int)plVar14 != 0) {
                pplVar15 = (long **)pplVar8[1];
                _objc_retain(pplVar7);
                if (pplVar7 == (long **)0x0) {
                  pplVar13 = (long **)&UNK_10f44f7d9;
                  dVar18 = param_1;
                }
                else {
                  pplVar13 = pplVar7;
                  _objc_retainAutorelease(pplVar7);
                  func_0x00010bdc3520();
                  dVar18 = param_1;
                }
                _objc_release(pplVar7);
                puVar10 = (undefined8 *)((long)pplVar1 + -0x60);
                func_0x00010002b838((undefined1 *)((long)pplVar1 + -0x60),pplVar13);
                *(undefined8 *)((long)pplVar1 + -0x80) = 0;
                *(undefined8 *)((long)pplVar1 + -0x78) = 0;
                *(undefined8 *)((long)pplVar1 + -0x70) = 0;
                func_0x00010007e1e8((undefined1 *)((long)pplVar1 + -0x80),
                                    (undefined1 *)((long)pplVar1 + -0x60),
                                    (undefined1 *)((long)pplVar1 + -0x48),1);
                pplVar5 = (long **)&UNK_110a02778;
                (*(code *)(*pplVar15)[3])
                          (pplVar15,&UNK_110a02778,(undefined1 *)((long)pplVar1 + -0x80),puVar9);
                *(undefined1 **)((long)pplVar1 + -0x68) = (undefined1 *)((long)pplVar1 + -0x80);
                func_0x00010007e5dc((undefined1 *)((long)pplVar1 + -0x68));
                pplVar6 = (long **)((long)pplVar1 + -0x80);
                if (*(char *)((long)pplVar1 + -0x49) < '\0') {
                  __ZdlPv(*(undefined8 *)((long)pplVar1 + -0x60));
                  pplVar6 = (long **)((long)pplVar1 + -0x80);
                }
              }
            }
            pplVar13 = pplVar7;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pplVar1 + -0x48))
            break;
            ___stack_chk_fail();
            _objc_release(pplVar7);
            _objc_release(pplVar7);
            pplVar8 = pplVar13;
            __Unwind_Resume();
            *(undefined8 *)((long)pplVar1 + -0xb0) = unaff_d9;
            *(double *)((long)pplVar1 + -0xa8) = unaff_d8;
            *(long ***)((long)pplVar1 + -0xa0) = pplVar13;
            *(long ***)((long)pplVar1 + -0x98) = pplVar7;
            *(undefined1 **)((long)pplVar1 + -0x90) = (undefined1 *)((long)pplVar1 + -0x10);
            *(undefined **)((long)pplVar1 + -0x88) = &SUB_107ca24d4;
            ppppuVar16 = (undefined8 ****)((long)pplVar1 + -0x90);
            _objc_retain(pplVar5);
            if (pplVar8 == (long **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__objc_release_11034d2d0)(pplVar5);
              return;
            }
            param_1 = dVar18 * 1000.0;
            puVar9 = (undefined *)(long)param_1;
            puVar17 = &UNK_107ca2518;
            pplVar1 = (long **)((long)pplVar1 + -0xb0);
            pplVar7 = pplVar5;
            pplVar13 = pplVar8;
            unaff_d8 = dVar18;
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105b0b934; end: 105b0b947; -[SCStoriesGrapheneMetricsEmitter logPostingMediaUnrecoverable] */

/* WARNING: Possible PIC construction at 0x000107ca2514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ca1294) */
/* WARNING: Removing unreachable block (ram,0x000107ca1bfc) */

void FUN_105b0b934(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  long **pplVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long **pplVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long *plVar12;
  long **pplVar13;
  long *plVar14;
  long **pplVar15;
  undefined8 *unaff_x24;
  undefined8 ****ppppuVar16;
  undefined *puVar17;
  double dVar18;
  double unaff_d8;
  undefined8 unaff_d9;
  long *plStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined1 *puStack_598;
  undefined8 auStack_590 [2];
  char cStack_579;
  long lStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  long **pplStack_560;
  long *plStack_558;
  long **pplStack_550;
  long **pplStack_548;
  undefined8 ***pppuStack_540;
  undefined *puStack_538;
  long alStack_530 [3];
  long *plStack_518;
  long **applStack_510 [2];
  char cStack_4f9;
  long lStack_4f8;
  long **pplStack_4f0;
  long *plStack_4e8;
  long **pplStack_4e0;
  long **pplStack_4d8;
  undefined8 ***pppuStack_4d0;
  undefined *puStack_4c8;
  long *plStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  long **pplStack_470;
  long *plStack_468;
  long **pplStack_460;
  long **pplStack_458;
  undefined8 ***pppuStack_450;
  undefined *puStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  long **pplStack_3f0;
  long *plStack_3e8;
  long **pplStack_3e0;
  long **pplStack_3d8;
  undefined8 ***pppuStack_3d0;
  undefined *puStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  long **pplStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  long **pplStack_358;
  undefined8 ***pppuStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [3];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined8 ***pppuStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_2 + 8);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e1e158;
  puVar9 = (undefined *)0x1;
  puVar10 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar13 = (long **)ppuVar4;
  _objc_retain(&PTR____CFConstantStringClassReference_110e1e158);
  if (lVar2 != 0) {
    plVar14 = *(long **)(lVar2 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e1e158);
    ppuVar3 = ppuVar4;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e1e158);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e1e158);
    func_0x00010002b838(auStack_60,ppuVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pplVar13 = (long **)&UNK_110a02408;
    param_5 = (undefined *)0x1;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar9 = (undefined *)puVar10;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar9 = (undefined *)puVar10;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110e1e158);
  _objc_release(&PTR____CFConstantStringClassReference_110e1e158);
  __Unwind_Resume();
  puVar10 = &uStack_100;
  puStack_88 = &SUB_107ca13a4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar13;
  puVar17 = puVar9;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pplVar13);
  if (ppuVar4 != (undefined **)0x0) {
    plVar14 = (long *)ppuVar4[1];
    _objc_retain(pplVar13);
    if (pplVar13 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar13;
      _objc_retainAutorelease(pplVar13);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar13);
    func_0x00010002b838(auStack_e0,pplVar5);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pplVar5 = (long **)&UNK_110a02458;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar17 = (undefined *)puVar10;
    param_5 = puVar9;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar17 = (undefined *)puVar10;
      param_5 = puVar9;
    }
  }
  pplVar6 = pplVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar13);
  _objc_release(pplVar13);
  __Unwind_Resume();
  puVar10 = &uStack_180;
  puStack_108 = &SUB_107ca1518;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar13 = pplVar5;
  puVar9 = puVar17;
  ppuStack_110 = &puStack_90;
  _objc_retain(pplVar5);
  if (pplVar6 != (long **)0x0) {
    plVar14 = pplVar6[1];
    _objc_retain(pplVar5);
    if (pplVar5 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar5;
      _objc_retainAutorelease(pplVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar5);
    func_0x00010002b838(auStack_160,pplVar13);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    pplVar13 = (long **)&UNK_110a024a8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar9 = (undefined *)puVar10;
    param_5 = puVar17;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar9 = (undefined *)puVar10;
      param_5 = puVar17;
    }
  }
  pplVar6 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar5);
  _objc_release(pplVar5);
  __Unwind_Resume();
  puVar10 = &uStack_200;
  puStack_188 = &LAB_107ca168c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar13;
  puVar17 = puVar9;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(pplVar13);
  if (pplVar6 != (long **)0x0) {
    plVar14 = pplVar6[1];
    _objc_retain(pplVar13);
    if (pplVar13 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar13;
      _objc_retainAutorelease(pplVar13);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar13);
    func_0x00010002b838(auStack_1e0,pplVar5);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    pplVar5 = (long **)&UNK_110a024f8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar17 = (undefined *)puVar10;
    param_5 = puVar9;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar17 = (undefined *)puVar10;
      param_5 = puVar9;
    }
  }
  pplVar6 = pplVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar13);
  _objc_release(pplVar13);
  __Unwind_Resume();
  puVar10 = &uStack_280;
  puStack_208 = &LAB_107ca1800;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar13 = pplVar5;
  puVar9 = puVar17;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(pplVar5);
  if (pplVar6 != (long **)0x0) {
    plVar14 = pplVar6[1];
    _objc_retain(pplVar5);
    if (pplVar5 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar5;
      _objc_retainAutorelease(pplVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar5);
    func_0x00010002b838(auStack_260,pplVar13);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    pplVar13 = (long **)&UNK_110a02548;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar9 = (undefined *)puVar10;
    param_5 = puVar17;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar9 = (undefined *)puVar10;
      param_5 = puVar17;
    }
  }
  pplVar6 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar5);
  _objc_release(pplVar5);
  __Unwind_Resume();
  puVar10 = &uStack_340;
  puStack_288 = &LAB_107ca1974;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar13;
  puVar17 = puVar9;
  pppuStack_290 = &pppuStack_210;
  _objc_retain(pplVar13);
  _objc_retain(puVar9);
  _objc_retain(param_5);
  if (pplVar6 != (long **)0x0) {
    plVar14 = pplVar6[1];
    _objc_retain(pplVar13);
    if (pplVar13 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar13;
      _objc_retainAutorelease(pplVar13);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar13);
    func_0x00010002b838(auStack_320,pplVar5);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar17 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar17 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_308,puVar17);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar17 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar17 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_2f0,puVar17);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_2d8,3);
    pplVar5 = (long **)&UNK_110a02598;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02598,&uStack_340,param_6);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x00010007e5dc(&puStack_328);
    lVar2 = 0;
    puVar17 = (undefined *)puVar10;
    do {
      if ((&cStack_2d9)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
      unaff_x24 = &uStack_340;
    } while (lVar2 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(puVar9);
  pplVar6 = pplVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puVar10 = auStack_320;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar10);
  _objc_release(param_5);
  _objc_release(puVar9);
  _objc_release(pplVar13);
  pplVar7 = pplVar6;
  __Unwind_Resume();
  pplVar15 = &plStack_3c0;
  puStack_348 = &LAB_107ca1c34;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar1 = pplVar5;
  puVar11 = puVar17;
  puStack_380 = unaff_x24;
  puStack_378 = puVar10;
  pplStack_370 = pplVar6;
  puStack_368 = param_5;
  puStack_360 = puVar9;
  pplStack_358 = pplVar13;
  pppuStack_350 = &pppuStack_290;
  _objc_retain(pplVar5);
  plVar14 = (long *)0x0;
  if (pplVar7 != (long **)0x0) {
    plVar14 = pplVar7[1];
    _objc_retain(pplVar5);
    if (pplVar5 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar5;
      _objc_retainAutorelease(pplVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar5);
    puVar10 = auStack_3a0;
    func_0x00010002b838(auStack_3a0,pplVar13);
    plStack_3c0 = (long *)0x0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x00010007e1e8(&plStack_3c0,auStack_3a0,&lStack_388,1);
    pplVar1 = (long **)&UNK_110a025e8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a025e8,&plStack_3c0,puVar17);
    puStack_3a8 = (undefined1 *)&plStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    puVar11 = (undefined *)pplVar15;
    pplVar6 = &plStack_3c0;
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
      puVar11 = (undefined *)pplVar15;
      pplVar6 = &plStack_3c0;
    }
  }
  pplVar13 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar5);
  _objc_release(pplVar5);
  pplVar15 = pplVar13;
  __Unwind_Resume();
  pplVar8 = &plStack_440;
  puStack_3c8 = &LAB_107ca1da8;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = pplVar1;
  puVar9 = puVar11;
  puStack_400 = unaff_x24;
  puStack_3f8 = puVar10;
  pplStack_3f0 = pplVar6;
  plStack_3e8 = plVar14;
  pplStack_3e0 = pplVar13;
  pplStack_3d8 = pplVar5;
  pppuStack_3d0 = &pppuStack_350;
  _objc_retain(pplVar1);
  plVar14 = (long *)0x0;
  if (pplVar15 != (long **)0x0) {
    plVar14 = pplVar15[1];
    _objc_retain(pplVar1);
    if (pplVar1 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar1;
      _objc_retainAutorelease(pplVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar1);
    puVar10 = auStack_420;
    func_0x00010002b838(auStack_420,pplVar13);
    plStack_440 = (long *)0x0;
    uStack_438 = 0;
    uStack_430 = 0;
    func_0x00010007e1e8(&plStack_440,auStack_420,&lStack_408,1);
    pplVar7 = (long **)&UNK_110a02638;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02638,&plStack_440,puVar11);
    puStack_428 = (undefined1 *)&plStack_440;
    func_0x00010007e5dc(&puStack_428);
    puVar9 = (undefined *)pplVar8;
    pplVar6 = &plStack_440;
    if (cStack_409 < '\0') {
      __ZdlPv(auStack_420[0]);
      puVar9 = (undefined *)pplVar8;
      pplVar6 = &plStack_440;
    }
  }
  pplVar13 = pplVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar1);
  _objc_release(pplVar1);
  pplVar15 = pplVar13;
  __Unwind_Resume();
  pplVar8 = &plStack_4c0;
  puStack_448 = &SUB_107ca1f1c;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar7;
  puVar17 = puVar9;
  puStack_480 = unaff_x24;
  puStack_478 = puVar10;
  pplStack_470 = pplVar6;
  plStack_468 = plVar14;
  pplStack_460 = pplVar13;
  pplStack_458 = pplVar1;
  pppuStack_450 = &pppuStack_3d0;
  _objc_retain(pplVar7);
  plVar14 = (long *)0x0;
  if (pplVar15 != (long **)0x0) {
    plVar14 = pplVar15[1];
    _objc_retain(pplVar7);
    if (pplVar7 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar7;
      _objc_retainAutorelease(pplVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar7);
    puVar10 = auStack_4a0;
    func_0x00010002b838(auStack_4a0,pplVar13);
    plStack_4c0 = (long *)0x0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    func_0x00010007e1e8(&plStack_4c0,auStack_4a0,&lStack_488,1);
    pplVar5 = (long **)&UNK_110a02688;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02688,&plStack_4c0,puVar9);
    puStack_4a8 = (undefined1 *)&plStack_4c0;
    func_0x00010007e5dc(&puStack_4a8);
    puVar17 = (undefined *)pplVar8;
    pplVar6 = &plStack_4c0;
    if (cStack_489 < '\0') {
      __ZdlPv(auStack_4a0[0]);
      puVar17 = (undefined *)pplVar8;
      pplVar6 = &plStack_4c0;
    }
  }
  pplVar13 = pplVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar7);
  _objc_release(pplVar7);
  pplVar15 = pplVar13;
  __Unwind_Resume();
  plVar12 = alStack_530;
  puStack_4c8 = &LAB_107ca2090;
  lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar1 = (long **)0x0;
  pplStack_4f0 = pplVar6;
  plStack_4e8 = plVar14;
  pplStack_4e0 = pplVar13;
  pplStack_4d8 = pplVar7;
  pppuStack_4d0 = &pppuStack_450;
  if (pplVar15 != (long **)0x0) {
    pplVar13 = (long **)pplVar15[1];
    puVar9 = &UNK_10f44f9bb;
    if ((int)pplVar5 == 0) {
      puVar9 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(applStack_510,puVar9);
    alStack_530[0] = 0;
    alStack_530[1] = 0;
    alStack_530[2] = 0;
    func_0x00010007e1e8(alStack_530,applStack_510,&lStack_4f8,1);
    pplVar5 = (long **)&UNK_110a026d8;
    (*(code *)(*pplVar13)[3])(pplVar13,&UNK_110a026d8,alStack_530,puVar17);
    pplVar1 = &plStack_518;
    plStack_518 = alStack_530;
    func_0x00010007e5dc();
    puVar17 = (undefined *)plVar12;
    plVar14 = alStack_530;
    if (cStack_4f9 < '\0') {
      pplVar1 = applStack_510[0];
      __ZdlPv();
      puVar17 = (undefined *)plVar12;
      plVar14 = alStack_530;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4f8) {
    return;
  }
  ___stack_chk_fail();
  plStack_518 = plVar14;
  func_0x00010007e5dc(&plStack_518);
  if (cStack_4f9 < '\0') {
    __ZdlPv(applStack_510[0]);
  }
  pplVar15 = pplVar1;
  __Unwind_Resume();
  pplVar8 = &plStack_5b0;
  puStack_538 = &SUB_107ca21a8;
  ppppuVar16 = &pppuStack_540;
  lStack_578 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = pplVar5;
  puVar9 = puVar17;
  puStack_570 = unaff_x24;
  puStack_568 = puVar10;
  pplStack_560 = pplVar6;
  plStack_558 = plVar14;
  pplStack_550 = pplVar13;
  pplStack_548 = pplVar1;
  pppuStack_540 = &pppuStack_4d0;
  _objc_retain(pplVar5);
  if (pplVar15 != (long **)0x0) {
    plVar14 = pplVar15[1];
    pplVar7 = (long **)&UNK_110a02728;
    (**(code **)(*plVar14 + 0x28))();
    if ((int)plVar14 != 0) {
      pplVar15 = (long **)pplVar15[1];
      _objc_retain(pplVar5);
      if (pplVar5 == (long **)0x0) {
        pplVar13 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar13 = pplVar5;
        _objc_retainAutorelease(pplVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar5);
      puVar10 = auStack_590;
      func_0x00010002b838(auStack_590,pplVar13);
      plStack_5b0 = (long *)0x0;
      uStack_5a8 = 0;
      uStack_5a0 = 0;
      func_0x00010007e1e8(&plStack_5b0,auStack_590,&lStack_578,1);
      pplVar7 = (long **)&UNK_110a02728;
      (*(code *)(*pplVar15)[3])(pplVar15,&UNK_110a02728,&plStack_5b0,(long)puVar17 * 10);
      puStack_598 = (undefined1 *)&plStack_5b0;
      func_0x00010007e5dc(&puStack_598);
      puVar9 = (undefined *)pplVar8;
      pplVar6 = &plStack_5b0;
      if (cStack_579 < '\0') {
        __ZdlPv(auStack_590[0]);
        puVar9 = (undefined *)pplVar8;
        pplVar6 = &plStack_5b0;
      }
    }
  }
  pplVar13 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_578) {
    ___stack_chk_fail();
    _objc_release(pplVar5);
    _objc_release(pplVar5);
    puVar17 = &UNK_107ca2340;
    pplVar8 = pplVar13;
    __Unwind_Resume();
    pplVar1 = &plStack_5b0;
    while( true ) {
      *(undefined8 **)((long)pplVar1 + -0x40) = unaff_x24;
      *(undefined8 **)((long)pplVar1 + -0x38) = puVar10;
      *(long ***)((long)pplVar1 + -0x30) = pplVar6;
      *(long ***)((long)pplVar1 + -0x28) = pplVar15;
      *(long ***)((long)pplVar1 + -0x20) = pplVar13;
      *(long ***)((long)pplVar1 + -0x18) = pplVar5;
      *(undefined8 *****)((long)pplVar1 + -0x10) = ppppuVar16;
      *(undefined **)((long)pplVar1 + -8) = puVar17;
      *(undefined8 *)((long)pplVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      pplVar5 = pplVar7;
      _objc_retain(pplVar7);
      pplVar15 = pplVar8;
      dVar18 = param_1;
      if (pplVar8 != (long **)0x0) {
        plVar14 = pplVar8[1];
        pplVar5 = (long **)&UNK_110a02778;
        (**(code **)(*plVar14 + 0x28))();
        dVar18 = param_1;
        if ((int)plVar14 != 0) {
          pplVar15 = (long **)pplVar8[1];
          _objc_retain(pplVar7);
          if (pplVar7 == (long **)0x0) {
            pplVar13 = (long **)&UNK_10f44f7d9;
            dVar18 = param_1;
          }
          else {
            pplVar13 = pplVar7;
            _objc_retainAutorelease(pplVar7);
            func_0x00010bdc3520();
            dVar18 = param_1;
          }
          _objc_release(pplVar7);
          puVar10 = (undefined8 *)((long)pplVar1 + -0x60);
          func_0x00010002b838((undefined1 *)((long)pplVar1 + -0x60),pplVar13);
          *(undefined8 *)((long)pplVar1 + -0x80) = 0;
          *(undefined8 *)((long)pplVar1 + -0x78) = 0;
          *(undefined8 *)((long)pplVar1 + -0x70) = 0;
          func_0x00010007e1e8((undefined1 *)((long)pplVar1 + -0x80),
                              (undefined1 *)((long)pplVar1 + -0x60),
                              (undefined1 *)((long)pplVar1 + -0x48),1);
          pplVar5 = (long **)&UNK_110a02778;
          (*(code *)(*pplVar15)[3])
                    (pplVar15,&UNK_110a02778,(undefined1 *)((long)pplVar1 + -0x80),puVar9);
          *(undefined1 **)((long)pplVar1 + -0x68) = (undefined1 *)((long)pplVar1 + -0x80);
          func_0x00010007e5dc((undefined1 *)((long)pplVar1 + -0x68));
          pplVar6 = (long **)((long)pplVar1 + -0x80);
          if (*(char *)((long)pplVar1 + -0x49) < '\0') {
            __ZdlPv(*(undefined8 *)((long)pplVar1 + -0x60));
            pplVar6 = (long **)((long)pplVar1 + -0x80);
          }
        }
      }
      pplVar13 = pplVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pplVar1 + -0x48)) break;
      ___stack_chk_fail();
      _objc_release(pplVar7);
      _objc_release(pplVar7);
      pplVar8 = pplVar13;
      __Unwind_Resume();
      *(undefined8 *)((long)pplVar1 + -0xb0) = unaff_d9;
      *(double *)((long)pplVar1 + -0xa8) = unaff_d8;
      *(long ***)((long)pplVar1 + -0xa0) = pplVar13;
      *(long ***)((long)pplVar1 + -0x98) = pplVar7;
      *(undefined1 **)((long)pplVar1 + -0x90) = (undefined1 *)((long)pplVar1 + -0x10);
      *(undefined **)((long)pplVar1 + -0x88) = &SUB_107ca24d4;
      ppppuVar16 = (undefined8 ****)((long)pplVar1 + -0x90);
      _objc_retain(pplVar5);
      if (pplVar8 == (long **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(pplVar5);
        return;
      }
      param_1 = dVar18 * 1000.0;
      puVar9 = (undefined *)(long)param_1;
      puVar17 = &UNK_107ca2518;
      pplVar1 = (long **)((long)pplVar1 + -0xb0);
      pplVar7 = pplVar5;
      pplVar13 = pplVar8;
      unaff_d8 = dVar18;
    }
    return;
  }
  return;
}



/* Entry: 105b0b948; end: 105b0b9a3; -[SCStoriesGrapheneMetricsEmitter logPostingMissingTaskQueueIdWithIdentifier:] */

void FUN_105b0b948(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e1e178);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107ca1518(*(undefined8 *)(param_1 + 8),puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0b9a4; end: 105b0b9b7; -[SCStoriesGrapheneMetricsEmitter logPostingMissingAsyncPostingInfo] */

/* WARNING: Possible PIC construction at 0x000107ca2514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ca157c) */
/* WARNING: Removing unreachable block (ram,0x000107ca1bfc) */

void FUN_105b0b9a4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  long **pplVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long **pplVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long *plVar12;
  long **pplVar13;
  long *plVar14;
  long **pplVar15;
  undefined8 *unaff_x24;
  undefined8 ****ppppuVar16;
  undefined *puVar17;
  double dVar18;
  double unaff_d8;
  undefined8 unaff_d9;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined1 *puStack_498;
  undefined8 auStack_490 [2];
  char cStack_479;
  long lStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  long **pplStack_460;
  long *plStack_458;
  long **pplStack_450;
  long **pplStack_448;
  undefined8 ***pppuStack_440;
  undefined *puStack_438;
  long alStack_430 [3];
  long *plStack_418;
  long **applStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  long **pplStack_3f0;
  long *plStack_3e8;
  long **pplStack_3e0;
  long **pplStack_3d8;
  undefined8 ***pppuStack_3d0;
  undefined *puStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  long **pplStack_370;
  long *plStack_368;
  long **pplStack_360;
  long **pplStack_358;
  undefined8 ***pppuStack_350;
  undefined *puStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  long **pplStack_2f0;
  long *plStack_2e8;
  long **pplStack_2e0;
  long **pplStack_2d8;
  undefined8 ***pppuStack_2d0;
  undefined *puStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  long **pplStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  long **pplStack_258;
  undefined8 ***pppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 ***pppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_2 + 8);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e1e198;
  puVar9 = (undefined *)0x1;
  puVar10 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar13 = (long **)ppuVar4;
  _objc_retain(&PTR____CFConstantStringClassReference_110e1e198);
  if (lVar2 != 0) {
    plVar14 = *(long **)(lVar2 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e1e198);
    ppuVar3 = ppuVar4;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e1e198);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e1e198);
    func_0x00010002b838(auStack_60,ppuVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pplVar13 = (long **)&UNK_110a024a8;
    param_5 = (undefined *)0x1;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar9 = (undefined *)puVar10;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar9 = (undefined *)puVar10;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110e1e198);
  _objc_release(&PTR____CFConstantStringClassReference_110e1e198);
  __Unwind_Resume();
  puVar10 = &uStack_100;
  puStack_88 = &LAB_107ca168c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar13;
  puVar17 = puVar9;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pplVar13);
  if (ppuVar4 != (undefined **)0x0) {
    plVar14 = (long *)ppuVar4[1];
    _objc_retain(pplVar13);
    if (pplVar13 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar13;
      _objc_retainAutorelease(pplVar13);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar13);
    func_0x00010002b838(auStack_e0,pplVar5);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pplVar5 = (long **)&UNK_110a024f8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar17 = (undefined *)puVar10;
    param_5 = puVar9;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar17 = (undefined *)puVar10;
      param_5 = puVar9;
    }
  }
  pplVar6 = pplVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar13);
  _objc_release(pplVar13);
  __Unwind_Resume();
  puVar10 = &uStack_180;
  puStack_108 = &LAB_107ca1800;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar13 = pplVar5;
  puVar9 = puVar17;
  ppuStack_110 = &puStack_90;
  _objc_retain(pplVar5);
  if (pplVar6 != (long **)0x0) {
    plVar14 = pplVar6[1];
    _objc_retain(pplVar5);
    if (pplVar5 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar5;
      _objc_retainAutorelease(pplVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar5);
    func_0x00010002b838(auStack_160,pplVar13);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    pplVar13 = (long **)&UNK_110a02548;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar9 = (undefined *)puVar10;
    param_5 = puVar17;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar9 = (undefined *)puVar10;
      param_5 = puVar17;
    }
  }
  pplVar6 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar5);
  _objc_release(pplVar5);
  __Unwind_Resume();
  puVar10 = &uStack_240;
  puStack_188 = &LAB_107ca1974;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar13;
  puVar17 = puVar9;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(pplVar13);
  _objc_retain(puVar9);
  _objc_retain(param_5);
  if (pplVar6 != (long **)0x0) {
    plVar14 = pplVar6[1];
    _objc_retain(pplVar13);
    if (pplVar13 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar13;
      _objc_retainAutorelease(pplVar13);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar13);
    func_0x00010002b838(auStack_220,pplVar5);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar17 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar17 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_208,puVar17);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar17 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar17 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_1f0,puVar17);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
    pplVar5 = (long **)&UNK_110a02598;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02598,&uStack_240,param_6);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar2 = 0;
    puVar17 = (undefined *)puVar10;
    do {
      if ((&cStack_1d9)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
      unaff_x24 = &uStack_240;
    } while (lVar2 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(puVar9);
  pplVar6 = pplVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puVar10 = auStack_220;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar10);
  _objc_release(param_5);
  _objc_release(puVar9);
  _objc_release(pplVar13);
  pplVar7 = pplVar6;
  __Unwind_Resume();
  pplVar15 = &plStack_2c0;
  puStack_248 = &LAB_107ca1c34;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar1 = pplVar5;
  puVar11 = puVar17;
  puStack_280 = unaff_x24;
  puStack_278 = puVar10;
  pplStack_270 = pplVar6;
  puStack_268 = param_5;
  puStack_260 = puVar9;
  pplStack_258 = pplVar13;
  pppuStack_250 = &pppuStack_190;
  _objc_retain(pplVar5);
  plVar14 = (long *)0x0;
  if (pplVar7 != (long **)0x0) {
    plVar14 = pplVar7[1];
    _objc_retain(pplVar5);
    if (pplVar5 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar5;
      _objc_retainAutorelease(pplVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar5);
    puVar10 = auStack_2a0;
    func_0x00010002b838(auStack_2a0,pplVar13);
    plStack_2c0 = (long *)0x0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&plStack_2c0,auStack_2a0,&lStack_288,1);
    pplVar1 = (long **)&UNK_110a025e8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a025e8,&plStack_2c0,puVar17);
    puStack_2a8 = (undefined1 *)&plStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    puVar11 = (undefined *)pplVar15;
    pplVar6 = &plStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar11 = (undefined *)pplVar15;
      pplVar6 = &plStack_2c0;
    }
  }
  pplVar13 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar5);
  _objc_release(pplVar5);
  pplVar15 = pplVar13;
  __Unwind_Resume();
  pplVar8 = &plStack_340;
  puStack_2c8 = &LAB_107ca1da8;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = pplVar1;
  puVar9 = puVar11;
  puStack_300 = unaff_x24;
  puStack_2f8 = puVar10;
  pplStack_2f0 = pplVar6;
  plStack_2e8 = plVar14;
  pplStack_2e0 = pplVar13;
  pplStack_2d8 = pplVar5;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(pplVar1);
  plVar14 = (long *)0x0;
  if (pplVar15 != (long **)0x0) {
    plVar14 = pplVar15[1];
    _objc_retain(pplVar1);
    if (pplVar1 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar1;
      _objc_retainAutorelease(pplVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar1);
    puVar10 = auStack_320;
    func_0x00010002b838(auStack_320,pplVar13);
    plStack_340 = (long *)0x0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&plStack_340,auStack_320,&lStack_308,1);
    pplVar7 = (long **)&UNK_110a02638;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02638,&plStack_340,puVar11);
    puStack_328 = (undefined1 *)&plStack_340;
    func_0x00010007e5dc(&puStack_328);
    puVar9 = (undefined *)pplVar8;
    pplVar6 = &plStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar9 = (undefined *)pplVar8;
      pplVar6 = &plStack_340;
    }
  }
  pplVar13 = pplVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar1);
  _objc_release(pplVar1);
  pplVar15 = pplVar13;
  __Unwind_Resume();
  pplVar8 = &plStack_3c0;
  puStack_348 = &SUB_107ca1f1c;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar7;
  puVar17 = puVar9;
  puStack_380 = unaff_x24;
  puStack_378 = puVar10;
  pplStack_370 = pplVar6;
  plStack_368 = plVar14;
  pplStack_360 = pplVar13;
  pplStack_358 = pplVar1;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(pplVar7);
  plVar14 = (long *)0x0;
  if (pplVar15 != (long **)0x0) {
    plVar14 = pplVar15[1];
    _objc_retain(pplVar7);
    if (pplVar7 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar7;
      _objc_retainAutorelease(pplVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar7);
    puVar10 = auStack_3a0;
    func_0x00010002b838(auStack_3a0,pplVar13);
    plStack_3c0 = (long *)0x0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x00010007e1e8(&plStack_3c0,auStack_3a0,&lStack_388,1);
    pplVar5 = (long **)&UNK_110a02688;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02688,&plStack_3c0,puVar9);
    puStack_3a8 = (undefined1 *)&plStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    puVar17 = (undefined *)pplVar8;
    pplVar6 = &plStack_3c0;
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
      puVar17 = (undefined *)pplVar8;
      pplVar6 = &plStack_3c0;
    }
  }
  pplVar13 = pplVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar7);
  _objc_release(pplVar7);
  pplVar15 = pplVar13;
  __Unwind_Resume();
  plVar12 = alStack_430;
  puStack_3c8 = &LAB_107ca2090;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar1 = (long **)0x0;
  pplStack_3f0 = pplVar6;
  plStack_3e8 = plVar14;
  pplStack_3e0 = pplVar13;
  pplStack_3d8 = pplVar7;
  pppuStack_3d0 = &pppuStack_350;
  if (pplVar15 != (long **)0x0) {
    pplVar13 = (long **)pplVar15[1];
    puVar9 = &UNK_10f44f9bb;
    if ((int)pplVar5 == 0) {
      puVar9 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(applStack_410,puVar9);
    alStack_430[0] = 0;
    alStack_430[1] = 0;
    alStack_430[2] = 0;
    func_0x00010007e1e8(alStack_430,applStack_410,&lStack_3f8,1);
    pplVar5 = (long **)&UNK_110a026d8;
    (*(code *)(*pplVar13)[3])(pplVar13,&UNK_110a026d8,alStack_430,puVar17);
    pplVar1 = &plStack_418;
    plStack_418 = alStack_430;
    func_0x00010007e5dc();
    puVar17 = (undefined *)plVar12;
    plVar14 = alStack_430;
    if (cStack_3f9 < '\0') {
      pplVar1 = applStack_410[0];
      __ZdlPv();
      puVar17 = (undefined *)plVar12;
      plVar14 = alStack_430;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return;
  }
  ___stack_chk_fail();
  plStack_418 = plVar14;
  func_0x00010007e5dc(&plStack_418);
  if (cStack_3f9 < '\0') {
    __ZdlPv(applStack_410[0]);
  }
  pplVar15 = pplVar1;
  __Unwind_Resume();
  pplVar8 = &plStack_4b0;
  puStack_438 = &SUB_107ca21a8;
  ppppuVar16 = &pppuStack_440;
  lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = pplVar5;
  puVar9 = puVar17;
  puStack_470 = unaff_x24;
  puStack_468 = puVar10;
  pplStack_460 = pplVar6;
  plStack_458 = plVar14;
  pplStack_450 = pplVar13;
  pplStack_448 = pplVar1;
  pppuStack_440 = &pppuStack_3d0;
  _objc_retain(pplVar5);
  if (pplVar15 != (long **)0x0) {
    plVar14 = pplVar15[1];
    pplVar7 = (long **)&UNK_110a02728;
    (**(code **)(*plVar14 + 0x28))();
    if ((int)plVar14 != 0) {
      pplVar15 = (long **)pplVar15[1];
      _objc_retain(pplVar5);
      if (pplVar5 == (long **)0x0) {
        pplVar13 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar13 = pplVar5;
        _objc_retainAutorelease(pplVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar5);
      puVar10 = auStack_490;
      func_0x00010002b838(auStack_490,pplVar13);
      plStack_4b0 = (long *)0x0;
      uStack_4a8 = 0;
      uStack_4a0 = 0;
      func_0x00010007e1e8(&plStack_4b0,auStack_490,&lStack_478,1);
      pplVar7 = (long **)&UNK_110a02728;
      (*(code *)(*pplVar15)[3])(pplVar15,&UNK_110a02728,&plStack_4b0,(long)puVar17 * 10);
      puStack_498 = (undefined1 *)&plStack_4b0;
      func_0x00010007e5dc(&puStack_498);
      puVar9 = (undefined *)pplVar8;
      pplVar6 = &plStack_4b0;
      if (cStack_479 < '\0') {
        __ZdlPv(auStack_490[0]);
        puVar9 = (undefined *)pplVar8;
        pplVar6 = &plStack_4b0;
      }
    }
  }
  pplVar13 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_478) {
    ___stack_chk_fail();
    _objc_release(pplVar5);
    _objc_release(pplVar5);
    puVar17 = &UNK_107ca2340;
    pplVar8 = pplVar13;
    __Unwind_Resume();
    pplVar1 = &plStack_4b0;
    while( true ) {
      *(undefined8 **)((long)pplVar1 + -0x40) = unaff_x24;
      *(undefined8 **)((long)pplVar1 + -0x38) = puVar10;
      *(long ***)((long)pplVar1 + -0x30) = pplVar6;
      *(long ***)((long)pplVar1 + -0x28) = pplVar15;
      *(long ***)((long)pplVar1 + -0x20) = pplVar13;
      *(long ***)((long)pplVar1 + -0x18) = pplVar5;
      *(undefined8 *****)((long)pplVar1 + -0x10) = ppppuVar16;
      *(undefined **)((long)pplVar1 + -8) = puVar17;
      *(undefined8 *)((long)pplVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      pplVar5 = pplVar7;
      _objc_retain(pplVar7);
      pplVar15 = pplVar8;
      dVar18 = param_1;
      if (pplVar8 != (long **)0x0) {
        plVar14 = pplVar8[1];
        pplVar5 = (long **)&UNK_110a02778;
        (**(code **)(*plVar14 + 0x28))();
        dVar18 = param_1;
        if ((int)plVar14 != 0) {
          pplVar15 = (long **)pplVar8[1];
          _objc_retain(pplVar7);
          if (pplVar7 == (long **)0x0) {
            pplVar13 = (long **)&UNK_10f44f7d9;
            dVar18 = param_1;
          }
          else {
            pplVar13 = pplVar7;
            _objc_retainAutorelease(pplVar7);
            func_0x00010bdc3520();
            dVar18 = param_1;
          }
          _objc_release(pplVar7);
          puVar10 = (undefined8 *)((long)pplVar1 + -0x60);
          func_0x00010002b838((undefined1 *)((long)pplVar1 + -0x60),pplVar13);
          *(undefined8 *)((long)pplVar1 + -0x80) = 0;
          *(undefined8 *)((long)pplVar1 + -0x78) = 0;
          *(undefined8 *)((long)pplVar1 + -0x70) = 0;
          func_0x00010007e1e8((undefined1 *)((long)pplVar1 + -0x80),
                              (undefined1 *)((long)pplVar1 + -0x60),
                              (undefined1 *)((long)pplVar1 + -0x48),1);
          pplVar5 = (long **)&UNK_110a02778;
          (*(code *)(*pplVar15)[3])
                    (pplVar15,&UNK_110a02778,(undefined1 *)((long)pplVar1 + -0x80),puVar9);
          *(undefined1 **)((long)pplVar1 + -0x68) = (undefined1 *)((long)pplVar1 + -0x80);
          func_0x00010007e5dc((undefined1 *)((long)pplVar1 + -0x68));
          pplVar6 = (long **)((long)pplVar1 + -0x80);
          if (*(char *)((long)pplVar1 + -0x49) < '\0') {
            __ZdlPv(*(undefined8 *)((long)pplVar1 + -0x60));
            pplVar6 = (long **)((long)pplVar1 + -0x80);
          }
        }
      }
      pplVar13 = pplVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pplVar1 + -0x48)) break;
      ___stack_chk_fail();
      _objc_release(pplVar7);
      _objc_release(pplVar7);
      pplVar8 = pplVar13;
      __Unwind_Resume();
      *(undefined8 *)((long)pplVar1 + -0xb0) = unaff_d9;
      *(double *)((long)pplVar1 + -0xa8) = unaff_d8;
      *(long ***)((long)pplVar1 + -0xa0) = pplVar13;
      *(long ***)((long)pplVar1 + -0x98) = pplVar7;
      *(undefined1 **)((long)pplVar1 + -0x90) = (undefined1 *)((long)pplVar1 + -0x10);
      *(undefined **)((long)pplVar1 + -0x88) = &SUB_107ca24d4;
      ppppuVar16 = (undefined8 ****)((long)pplVar1 + -0x90);
      _objc_retain(pplVar5);
      if (pplVar8 == (long **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(pplVar5);
        return;
      }
      param_1 = dVar18 * 1000.0;
      puVar9 = (undefined *)(long)param_1;
      puVar17 = &UNK_107ca2518;
      pplVar1 = (long **)((long)pplVar1 + -0xb0);
      pplVar7 = pplVar5;
      pplVar13 = pplVar8;
      unaff_d8 = dVar18;
    }
    return;
  }
  return;
}



/* Entry: 105b0b9b8; end: 105b0b9c7; -[SCStoriesGrapheneMetricsEmitter logPostingRetryWithResult:] */

/* WARNING: Possible PIC construction at 0x000107ca2514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ca1bfc) */

void FUN_105b0b9b8(double param_1,long param_2,undefined8 param_3,long **param_4,undefined *param_5,
                  undefined8 param_6)

{
  long **pplVar1;
  long lVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long *plVar10;
  long **pplVar11;
  long *plVar12;
  long **pplVar13;
  undefined8 *unaff_x24;
  undefined8 ****ppppuVar14;
  undefined *puVar15;
  double dVar16;
  double unaff_d8;
  undefined8 unaff_d9;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined1 *puStack_418;
  undefined8 auStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  long **pplStack_3e0;
  long *plStack_3d8;
  long **pplStack_3d0;
  long **pplStack_3c8;
  undefined8 ***pppuStack_3c0;
  undefined *puStack_3b8;
  long alStack_3b0 [3];
  long *plStack_398;
  long **applStack_390 [2];
  char cStack_379;
  long lStack_378;
  long **pplStack_370;
  long *plStack_368;
  long **pplStack_360;
  long **pplStack_358;
  undefined8 ***pppuStack_350;
  undefined *puStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  long **pplStack_2f0;
  long *plStack_2e8;
  long **pplStack_2e0;
  long **pplStack_2d8;
  undefined8 ***pppuStack_2d0;
  undefined *puStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  long **pplStack_270;
  long *plStack_268;
  long **pplStack_260;
  long **pplStack_258;
  undefined8 ***pppuStack_250;
  undefined *puStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  long **pplStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  long **pplStack_1d8;
  undefined1 ***pppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [3];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_2 + 8);
  puVar7 = (undefined *)0x1;
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar11 = param_4;
  _objc_retain(param_4);
  if (lVar2 != 0) {
    plVar12 = *(long **)(lVar2 + 8);
    _objc_retain(param_4);
    if (param_4 == (long **)0x0) {
      pplVar11 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar11 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pplVar11);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pplVar11 = (long **)&UNK_110a024f8;
    param_5 = (undefined *)0x1;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined *)puVar8;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined *)puVar8;
    }
  }
  pplVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_4);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  puStack_88 = &LAB_107ca1800;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar11;
  puVar15 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pplVar11);
  if (pplVar3 != (long **)0x0) {
    plVar12 = pplVar3[1];
    _objc_retain(pplVar11);
    if (pplVar11 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = pplVar11;
      _objc_retainAutorelease(pplVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar11);
    func_0x00010002b838(auStack_e0,pplVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pplVar5 = (long **)&UNK_110a02548;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar15 = (undefined *)puVar8;
    param_5 = puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar15 = (undefined *)puVar8;
      param_5 = puVar7;
    }
  }
  pplVar3 = pplVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar11);
  _objc_release(pplVar11);
  __Unwind_Resume();
  puVar8 = &uStack_1c0;
  puStack_108 = &LAB_107ca1974;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar11 = pplVar5;
  puVar7 = puVar15;
  ppuStack_110 = &puStack_90;
  _objc_retain(pplVar5);
  _objc_retain(puVar15);
  _objc_retain(param_5);
  if (pplVar3 != (long **)0x0) {
    plVar12 = pplVar3[1];
    _objc_retain(pplVar5);
    if (pplVar5 == (long **)0x0) {
      pplVar11 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar11 = pplVar5;
      _objc_retainAutorelease(pplVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar5);
    func_0x00010002b838(auStack_1a0,pplVar11);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar7 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar15);
      puVar7 = puVar15;
      func_0x00010bdc3520(puVar15);
    }
    _objc_release(puVar15);
    func_0x00010002b838(auStack_188,puVar7);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar7 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar7 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_170,puVar7);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_158,3);
    pplVar11 = (long **)&UNK_110a02598;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a02598,&uStack_1c0,param_6);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    lVar2 = 0;
    puVar7 = (undefined *)puVar8;
    do {
      if ((&cStack_159)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
      unaff_x24 = &uStack_1c0;
    } while (lVar2 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(puVar15);
  pplVar3 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puVar8 = auStack_1a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar8);
  _objc_release(param_5);
  _objc_release(puVar15);
  _objc_release(pplVar5);
  pplVar4 = pplVar3;
  __Unwind_Resume();
  pplVar13 = &plStack_240;
  puStack_1c8 = &LAB_107ca1c34;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar1 = pplVar11;
  puVar9 = puVar7;
  puStack_200 = unaff_x24;
  puStack_1f8 = puVar8;
  pplStack_1f0 = pplVar3;
  puStack_1e8 = param_5;
  puStack_1e0 = puVar15;
  pplStack_1d8 = pplVar5;
  pppuStack_1d0 = &ppuStack_110;
  _objc_retain(pplVar11);
  plVar12 = (long *)0x0;
  if (pplVar4 != (long **)0x0) {
    plVar12 = pplVar4[1];
    _objc_retain(pplVar11);
    if (pplVar11 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = pplVar11;
      _objc_retainAutorelease(pplVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar11);
    puVar8 = auStack_220;
    func_0x00010002b838(auStack_220,pplVar3);
    plStack_240 = (long *)0x0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&plStack_240,auStack_220,&lStack_208,1);
    pplVar1 = (long **)&UNK_110a025e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a025e8,&plStack_240,puVar7);
    puStack_228 = (undefined1 *)&plStack_240;
    func_0x00010007e5dc(&puStack_228);
    puVar9 = (undefined *)pplVar13;
    pplVar3 = &plStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar9 = (undefined *)pplVar13;
      pplVar3 = &plStack_240;
    }
  }
  pplVar5 = pplVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar11);
  _objc_release(pplVar11);
  pplVar13 = pplVar5;
  __Unwind_Resume();
  pplVar6 = &plStack_2c0;
  puStack_248 = &LAB_107ca1da8;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = pplVar1;
  puVar7 = puVar9;
  puStack_280 = unaff_x24;
  puStack_278 = puVar8;
  pplStack_270 = pplVar3;
  plStack_268 = plVar12;
  pplStack_260 = pplVar5;
  pplStack_258 = pplVar11;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(pplVar1);
  plVar12 = (long *)0x0;
  if (pplVar13 != (long **)0x0) {
    plVar12 = pplVar13[1];
    _objc_retain(pplVar1);
    if (pplVar1 == (long **)0x0) {
      pplVar11 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar11 = pplVar1;
      _objc_retainAutorelease(pplVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar1);
    puVar8 = auStack_2a0;
    func_0x00010002b838(auStack_2a0,pplVar11);
    plStack_2c0 = (long *)0x0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&plStack_2c0,auStack_2a0,&lStack_288,1);
    pplVar4 = (long **)&UNK_110a02638;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a02638,&plStack_2c0,puVar9);
    puStack_2a8 = (undefined1 *)&plStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    puVar7 = (undefined *)pplVar6;
    pplVar3 = &plStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar7 = (undefined *)pplVar6;
      pplVar3 = &plStack_2c0;
    }
  }
  pplVar11 = pplVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar1);
  _objc_release(pplVar1);
  pplVar13 = pplVar11;
  __Unwind_Resume();
  pplVar6 = &plStack_340;
  puStack_2c8 = &SUB_107ca1f1c;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar4;
  puVar15 = puVar7;
  puStack_300 = unaff_x24;
  puStack_2f8 = puVar8;
  pplStack_2f0 = pplVar3;
  plStack_2e8 = plVar12;
  pplStack_2e0 = pplVar11;
  pplStack_2d8 = pplVar1;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(pplVar4);
  plVar12 = (long *)0x0;
  if (pplVar13 != (long **)0x0) {
    plVar12 = pplVar13[1];
    _objc_retain(pplVar4);
    if (pplVar4 == (long **)0x0) {
      pplVar11 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar11 = pplVar4;
      _objc_retainAutorelease(pplVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar4);
    puVar8 = auStack_320;
    func_0x00010002b838(auStack_320,pplVar11);
    plStack_340 = (long *)0x0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&plStack_340,auStack_320,&lStack_308,1);
    pplVar5 = (long **)&UNK_110a02688;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a02688,&plStack_340,puVar7);
    puStack_328 = (undefined1 *)&plStack_340;
    func_0x00010007e5dc(&puStack_328);
    puVar15 = (undefined *)pplVar6;
    pplVar3 = &plStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar15 = (undefined *)pplVar6;
      pplVar3 = &plStack_340;
    }
  }
  pplVar11 = pplVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar4);
  _objc_release(pplVar4);
  pplVar13 = pplVar11;
  __Unwind_Resume();
  plVar10 = alStack_3b0;
  puStack_348 = &LAB_107ca2090;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar1 = (long **)0x0;
  pplStack_370 = pplVar3;
  plStack_368 = plVar12;
  pplStack_360 = pplVar11;
  pplStack_358 = pplVar4;
  pppuStack_350 = &pppuStack_2d0;
  if (pplVar13 != (long **)0x0) {
    pplVar11 = (long **)pplVar13[1];
    puVar7 = &UNK_10f44f9bb;
    if ((int)pplVar5 == 0) {
      puVar7 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(applStack_390,puVar7);
    alStack_3b0[0] = 0;
    alStack_3b0[1] = 0;
    alStack_3b0[2] = 0;
    func_0x00010007e1e8(alStack_3b0,applStack_390,&lStack_378,1);
    pplVar5 = (long **)&UNK_110a026d8;
    (*(code *)(*pplVar11)[3])(pplVar11,&UNK_110a026d8,alStack_3b0,puVar15);
    pplVar1 = &plStack_398;
    plStack_398 = alStack_3b0;
    func_0x00010007e5dc();
    puVar15 = (undefined *)plVar10;
    plVar12 = alStack_3b0;
    if (cStack_379 < '\0') {
      pplVar1 = applStack_390[0];
      __ZdlPv();
      puVar15 = (undefined *)plVar10;
      plVar12 = alStack_3b0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return;
  }
  ___stack_chk_fail();
  plStack_398 = plVar12;
  func_0x00010007e5dc(&plStack_398);
  if (cStack_379 < '\0') {
    __ZdlPv(applStack_390[0]);
  }
  pplVar13 = pplVar1;
  __Unwind_Resume();
  pplVar6 = &plStack_430;
  puStack_3b8 = &SUB_107ca21a8;
  ppppuVar14 = &pppuStack_3c0;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = pplVar5;
  puVar7 = puVar15;
  puStack_3f0 = unaff_x24;
  puStack_3e8 = puVar8;
  pplStack_3e0 = pplVar3;
  plStack_3d8 = plVar12;
  pplStack_3d0 = pplVar11;
  pplStack_3c8 = pplVar1;
  pppuStack_3c0 = &pppuStack_350;
  _objc_retain(pplVar5);
  if (pplVar13 != (long **)0x0) {
    plVar12 = pplVar13[1];
    pplVar4 = (long **)&UNK_110a02728;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      pplVar13 = (long **)pplVar13[1];
      _objc_retain(pplVar5);
      if (pplVar5 == (long **)0x0) {
        pplVar11 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar11 = pplVar5;
        _objc_retainAutorelease(pplVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar5);
      puVar8 = auStack_410;
      func_0x00010002b838(auStack_410,pplVar11);
      plStack_430 = (long *)0x0;
      uStack_428 = 0;
      uStack_420 = 0;
      func_0x00010007e1e8(&plStack_430,auStack_410,&lStack_3f8,1);
      pplVar4 = (long **)&UNK_110a02728;
      (*(code *)(*pplVar13)[3])(pplVar13,&UNK_110a02728,&plStack_430,(long)puVar15 * 10);
      puStack_418 = (undefined1 *)&plStack_430;
      func_0x00010007e5dc(&puStack_418);
      puVar7 = (undefined *)pplVar6;
      pplVar3 = &plStack_430;
      if (cStack_3f9 < '\0') {
        __ZdlPv(auStack_410[0]);
        puVar7 = (undefined *)pplVar6;
        pplVar3 = &plStack_430;
      }
    }
  }
  pplVar11 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3f8) {
    ___stack_chk_fail();
    _objc_release(pplVar5);
    _objc_release(pplVar5);
    puVar15 = &UNK_107ca2340;
    pplVar6 = pplVar11;
    __Unwind_Resume();
    pplVar1 = &plStack_430;
    while( true ) {
      *(undefined8 **)((long)pplVar1 + -0x40) = unaff_x24;
      *(undefined8 **)((long)pplVar1 + -0x38) = puVar8;
      *(long ***)((long)pplVar1 + -0x30) = pplVar3;
      *(long ***)((long)pplVar1 + -0x28) = pplVar13;
      *(long ***)((long)pplVar1 + -0x20) = pplVar11;
      *(long ***)((long)pplVar1 + -0x18) = pplVar5;
      *(undefined8 *****)((long)pplVar1 + -0x10) = ppppuVar14;
      *(undefined **)((long)pplVar1 + -8) = puVar15;
      *(undefined8 *)((long)pplVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      pplVar5 = pplVar4;
      _objc_retain(pplVar4);
      pplVar13 = pplVar6;
      dVar16 = param_1;
      if (pplVar6 != (long **)0x0) {
        plVar12 = pplVar6[1];
        pplVar5 = (long **)&UNK_110a02778;
        (**(code **)(*plVar12 + 0x28))();
        dVar16 = param_1;
        if ((int)plVar12 != 0) {
          pplVar13 = (long **)pplVar6[1];
          _objc_retain(pplVar4);
          if (pplVar4 == (long **)0x0) {
            pplVar11 = (long **)&UNK_10f44f7d9;
            dVar16 = param_1;
          }
          else {
            pplVar11 = pplVar4;
            _objc_retainAutorelease(pplVar4);
            func_0x00010bdc3520();
            dVar16 = param_1;
          }
          _objc_release(pplVar4);
          puVar8 = (undefined8 *)((long)pplVar1 + -0x60);
          func_0x00010002b838((undefined1 *)((long)pplVar1 + -0x60),pplVar11);
          *(undefined8 *)((long)pplVar1 + -0x80) = 0;
          *(undefined8 *)((long)pplVar1 + -0x78) = 0;
          *(undefined8 *)((long)pplVar1 + -0x70) = 0;
          func_0x00010007e1e8((undefined1 *)((long)pplVar1 + -0x80),
                              (undefined1 *)((long)pplVar1 + -0x60),
                              (undefined1 *)((long)pplVar1 + -0x48),1);
          pplVar5 = (long **)&UNK_110a02778;
          (*(code *)(*pplVar13)[3])
                    (pplVar13,&UNK_110a02778,(undefined1 *)((long)pplVar1 + -0x80),puVar7);
          *(undefined1 **)((long)pplVar1 + -0x68) = (undefined1 *)((long)pplVar1 + -0x80);
          func_0x00010007e5dc((undefined1 *)((long)pplVar1 + -0x68));
          pplVar3 = (long **)((long)pplVar1 + -0x80);
          if (*(char *)((long)pplVar1 + -0x49) < '\0') {
            __ZdlPv(*(undefined8 *)((long)pplVar1 + -0x60));
            pplVar3 = (long **)((long)pplVar1 + -0x80);
          }
        }
      }
      pplVar11 = pplVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pplVar1 + -0x48)) break;
      ___stack_chk_fail();
      _objc_release(pplVar4);
      _objc_release(pplVar4);
      pplVar6 = pplVar11;
      __Unwind_Resume();
      *(undefined8 *)((long)pplVar1 + -0xb0) = unaff_d9;
      *(double *)((long)pplVar1 + -0xa8) = unaff_d8;
      *(long ***)((long)pplVar1 + -0xa0) = pplVar11;
      *(long ***)((long)pplVar1 + -0x98) = pplVar4;
      *(undefined1 **)((long)pplVar1 + -0x90) = (undefined1 *)((long)pplVar1 + -0x10);
      *(undefined **)((long)pplVar1 + -0x88) = &SUB_107ca24d4;
      ppppuVar14 = (undefined8 ****)((long)pplVar1 + -0x90);
      _objc_retain(pplVar5);
      if (pplVar6 == (long **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(pplVar5);
        return;
      }
      param_1 = dVar16 * 1000.0;
      puVar7 = (undefined *)(long)param_1;
      puVar15 = &UNK_107ca2518;
      pplVar1 = (long **)((long)pplVar1 + -0xb0);
      pplVar4 = pplVar5;
      pplVar11 = pplVar6;
      unaff_d8 = dVar16;
    }
    return;
  }
  return;
}



/* Entry: 105b0b9c8; end: 105b0b9d7; -[SCStoriesGrapheneMetricsEmitter logStorySnapPostLogAttemptWithLoggedBefore:] */

/* WARNING: Possible PIC construction at 0x000107ca2514: Changing call to branch */

void FUN_105b0b9c8(double param_1,long param_2,undefined8 param_3,undefined1 **param_4)

{
  undefined8 *puVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 *unaff_x21;
  undefined1 **ppuVar9;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined *puVar10;
  double dVar11;
  double unaff_d8;
  undefined8 unaff_d9;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar1 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = (undefined1 **)0x0;
  puVar6 = (undefined1 *)0x1;
  if (*(long *)(param_2 + 8) != 0) {
    plVar8 = *(long **)(*(long *)(param_2 + 8) + 8);
    puVar10 = &UNK_10f44f9bb;
    if ((int)param_4 == 0) {
      puVar10 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(appuStack_50,puVar10);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_4 = (undefined1 **)&UNK_110a026d8;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110a026d8,&uStack_70,1);
    ppuVar9 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    puVar6 = (undefined1 *)puVar1;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar9 = appuStack_50[0];
      __ZdlPv();
      puVar6 = (undefined1 *)puVar1;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  puVar1 = &uStack_f0;
  puStack_78 = &SUB_107ca21a8;
  ppuVar5 = &puStack_80;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_4;
  puVar7 = puVar6;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  if (ppuVar9 != (undefined1 **)0x0) {
    plVar8 = (long *)ppuVar9[1];
    ppuVar2 = (undefined1 **)&UNK_110a02728;
    (**(code **)(*plVar8 + 0x28))();
    if ((int)plVar8 != 0) {
      ppuVar9 = (undefined1 **)ppuVar9[1];
      _objc_retain(param_4);
      if (param_4 == (undefined1 **)0x0) {
        ppuVar2 = (undefined1 **)&UNK_10f44f7d9;
      }
      else {
        ppuVar2 = param_4;
        _objc_retainAutorelease(param_4);
        func_0x00010bdc3520();
      }
      _objc_release(param_4);
      unaff_x23 = auStack_d0;
      func_0x00010002b838(auStack_d0,ppuVar2);
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      func_0x00010007e1e8(&uStack_f0,auStack_d0,&lStack_b8,1);
      ppuVar2 = (undefined1 **)&UNK_110a02728;
      (**(code **)(*ppuVar9 + 0x18))(ppuVar9,&UNK_110a02728,&uStack_f0,(long)puVar6 * 10);
      puStack_d8 = (undefined1 *)&uStack_f0;
      func_0x00010007e5dc(&puStack_d8);
      puVar7 = (undefined1 *)puVar1;
      unaff_x22 = &uStack_f0;
      if (cStack_b9 < '\0') {
        __ZdlPv(auStack_d0[0]);
        puVar7 = (undefined1 *)puVar1;
        unaff_x22 = &uStack_f0;
      }
    }
  }
  ppuVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_4);
  puVar10 = &UNK_107ca2340;
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  puVar1 = &uStack_f0;
  while( true ) {
    *(undefined8 *)((long)puVar1 + -0x40) = unaff_x24;
    *(undefined8 **)((long)puVar1 + -0x38) = unaff_x23;
    *(undefined8 **)((long)puVar1 + -0x30) = unaff_x22;
    *(undefined1 ***)((long)puVar1 + -0x28) = ppuVar9;
    *(undefined1 ***)((long)puVar1 + -0x20) = ppuVar3;
    *(undefined1 ***)((long)puVar1 + -0x18) = param_4;
    *(undefined1 ***)((long)puVar1 + -0x10) = ppuVar5;
    *(undefined **)((long)puVar1 + -8) = puVar10;
    *(undefined8 *)((long)puVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    param_4 = ppuVar2;
    _objc_retain(ppuVar2);
    ppuVar9 = ppuVar4;
    dVar11 = param_1;
    if (ppuVar4 != (undefined1 **)0x0) {
      plVar8 = (long *)ppuVar4[1];
      param_4 = (undefined1 **)&UNK_110a02778;
      (**(code **)(*plVar8 + 0x28))();
      dVar11 = param_1;
      if ((int)plVar8 != 0) {
        ppuVar9 = (undefined1 **)ppuVar4[1];
        _objc_retain(ppuVar2);
        if (ppuVar2 == (undefined1 **)0x0) {
          ppuVar5 = (undefined1 **)&UNK_10f44f7d9;
          dVar11 = param_1;
        }
        else {
          ppuVar5 = ppuVar2;
          _objc_retainAutorelease(ppuVar2);
          func_0x00010bdc3520();
          dVar11 = param_1;
        }
        _objc_release(ppuVar2);
        unaff_x23 = (undefined8 *)((long)puVar1 + -0x60);
        func_0x00010002b838((undefined1 *)((long)puVar1 + -0x60),ppuVar5);
        *(undefined8 *)((long)puVar1 + -0x80) = 0;
        *(undefined8 *)((long)puVar1 + -0x78) = 0;
        *(undefined8 *)((long)puVar1 + -0x70) = 0;
        func_0x00010007e1e8((undefined1 *)((long)puVar1 + -0x80),
                            (undefined1 *)((long)puVar1 + -0x60),
                            (undefined1 *)((long)puVar1 + -0x48),1);
        param_4 = (undefined1 **)&UNK_110a02778;
        (**(code **)(*ppuVar9 + 0x18))
                  (ppuVar9,&UNK_110a02778,(undefined1 *)((long)puVar1 + -0x80),puVar7);
        *(undefined1 **)((long)puVar1 + -0x68) = (undefined1 *)((long)puVar1 + -0x80);
        func_0x00010007e5dc((undefined1 *)((long)puVar1 + -0x68));
        unaff_x22 = (undefined8 *)((long)puVar1 + -0x80);
        if (*(char *)((long)puVar1 + -0x49) < '\0') {
          __ZdlPv(*(undefined8 *)((long)puVar1 + -0x60));
          unaff_x22 = (undefined8 *)((long)puVar1 + -0x80);
        }
      }
    }
    ppuVar5 = ppuVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x48)) break;
    ___stack_chk_fail();
    _objc_release(ppuVar2);
    _objc_release(ppuVar2);
    ppuVar4 = ppuVar5;
    __Unwind_Resume();
    *(undefined8 *)((long)puVar1 + -0xb0) = unaff_d9;
    *(double *)((long)puVar1 + -0xa8) = unaff_d8;
    *(undefined1 ***)((long)puVar1 + -0xa0) = ppuVar5;
    *(undefined1 ***)((long)puVar1 + -0x98) = ppuVar2;
    *(undefined1 **)((long)puVar1 + -0x90) = (undefined1 *)((long)puVar1 + -0x10);
    *(undefined **)((long)puVar1 + -0x88) = &SUB_107ca24d4;
    ppuVar5 = (undefined1 **)((long)puVar1 + -0x90);
    _objc_retain(param_4);
    if (ppuVar4 == (undefined1 **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_4);
      return;
    }
    param_1 = dVar11 * 1000.0;
    puVar7 = (undefined1 *)(long)param_1;
    puVar10 = &UNK_107ca2518;
    puVar1 = (undefined8 *)((long)puVar1 + -0xb0);
    ppuVar2 = param_4;
    ppuVar3 = ppuVar4;
    unaff_d8 = dVar11;
  }
  return;
}



/* Entry: 105b0b9d8; end: 105b0b9f3; -[SCStoriesGrapheneMetricsEmitter logPostingStatusShadowWithSite:nativeState:clientState:] */

/* WARNING: Possible PIC construction at 0x000107ca2514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ca1bfc) */

void FUN_105b0b9d8(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,long **param_6)

{
  long **pplVar1;
  long lVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined *puVar9;
  long **pplVar10;
  long **pplVar11;
  long *plVar12;
  undefined8 *unaff_x24;
  undefined8 ****ppppuVar13;
  undefined *puVar14;
  double dVar15;
  double unaff_d8;
  undefined8 unaff_d9;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 *puStack_318;
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  long **pplStack_2e0;
  long *plStack_2d8;
  long **pplStack_2d0;
  long **pplStack_2c8;
  undefined8 ***pppuStack_2c0;
  undefined *puStack_2b8;
  long alStack_2b0 [3];
  long *plStack_298;
  long **applStack_290 [2];
  char cStack_279;
  long lStack_278;
  long **pplStack_270;
  long *plStack_268;
  long **pplStack_260;
  long **pplStack_258;
  undefined8 ***pppuStack_250;
  undefined *puStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  long **pplStack_1f0;
  long *plStack_1e8;
  long **pplStack_1e0;
  long **pplStack_1d8;
  undefined1 ***pppuStack_1d0;
  undefined *puStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  long **pplStack_170;
  long *plStack_168;
  long **pplStack_160;
  long **pplStack_158;
  undefined1 **ppuStack_150;
  undefined *puStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  long **pplStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long **pplStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lVar2 = *(long *)(param_2 + 8);
  puVar7 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar10 = param_6;
  puVar9 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  if (lVar2 != 0) {
    plVar12 = *(long **)(lVar2 + 8);
    _objc_retain(param_6);
    if (param_6 == (long **)0x0) {
      pplVar10 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar10 = param_6;
      _objc_retainAutorelease(param_6);
      func_0x00010bdc3520();
    }
    _objc_release(param_6);
    func_0x00010002b838(auStack_a0,pplVar10);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar9 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar9 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_88,puVar9);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar9 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar9 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar9);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    pplVar10 = (long **)&UNK_110a02598;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a02598,&uStack_c0,1);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar2 = 0;
    puVar9 = (undefined *)puVar7;
    do {
      if ((&cStack_59)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar2 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_5);
  pplVar3 = param_6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar7 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar7);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  pplVar4 = pplVar3;
  __Unwind_Resume();
  pplVar6 = &plStack_140;
  puStack_c8 = &LAB_107ca1c34;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar1 = pplVar10;
  puVar14 = puVar9;
  puStack_100 = unaff_x24;
  puStack_f8 = puVar7;
  pplStack_f0 = pplVar3;
  puStack_e8 = param_4;
  puStack_e0 = param_5;
  pplStack_d8 = param_6;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pplVar10);
  plVar12 = (long *)0x0;
  if (pplVar4 != (long **)0x0) {
    plVar12 = pplVar4[1];
    _objc_retain(pplVar10);
    if (pplVar10 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = pplVar10;
      _objc_retainAutorelease(pplVar10);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar10);
    puVar7 = auStack_120;
    func_0x00010002b838(auStack_120,pplVar3);
    plStack_140 = (long *)0x0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&plStack_140,auStack_120,&lStack_108,1);
    pplVar1 = (long **)&UNK_110a025e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a025e8,&plStack_140,puVar9);
    puStack_128 = (undefined1 *)&plStack_140;
    func_0x00010007e5dc(&puStack_128);
    puVar14 = (undefined *)pplVar6;
    pplVar3 = &plStack_140;
    if (cStack_109 < '\0') {
      __ZdlPv(auStack_120[0]);
      puVar14 = (undefined *)pplVar6;
      pplVar3 = &plStack_140;
    }
  }
  pplVar4 = pplVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar10);
  _objc_release(pplVar10);
  pplVar11 = pplVar4;
  __Unwind_Resume();
  pplVar5 = &plStack_1c0;
  puStack_148 = &LAB_107ca1da8;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar1;
  puVar9 = puVar14;
  puStack_180 = unaff_x24;
  puStack_178 = puVar7;
  pplStack_170 = pplVar3;
  plStack_168 = plVar12;
  pplStack_160 = pplVar4;
  pplStack_158 = pplVar10;
  ppuStack_150 = &puStack_d0;
  _objc_retain(pplVar1);
  plVar12 = (long *)0x0;
  if (pplVar11 != (long **)0x0) {
    plVar12 = pplVar11[1];
    _objc_retain(pplVar1);
    if (pplVar1 == (long **)0x0) {
      pplVar10 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar10 = pplVar1;
      _objc_retainAutorelease(pplVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar1);
    puVar7 = auStack_1a0;
    func_0x00010002b838(auStack_1a0,pplVar10);
    plStack_1c0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&plStack_1c0,auStack_1a0,&lStack_188,1);
    pplVar6 = (long **)&UNK_110a02638;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a02638,&plStack_1c0,puVar14);
    puStack_1a8 = (undefined1 *)&plStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    puVar9 = (undefined *)pplVar5;
    pplVar3 = &plStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar9 = (undefined *)pplVar5;
      pplVar3 = &plStack_1c0;
    }
  }
  pplVar10 = pplVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar1);
  _objc_release(pplVar1);
  pplVar11 = pplVar10;
  __Unwind_Resume();
  pplVar5 = &plStack_240;
  puStack_1c8 = &SUB_107ca1f1c;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = pplVar6;
  puVar14 = puVar9;
  puStack_200 = unaff_x24;
  puStack_1f8 = puVar7;
  pplStack_1f0 = pplVar3;
  plStack_1e8 = plVar12;
  pplStack_1e0 = pplVar10;
  pplStack_1d8 = pplVar1;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(pplVar6);
  plVar12 = (long *)0x0;
  if (pplVar11 != (long **)0x0) {
    plVar12 = pplVar11[1];
    _objc_retain(pplVar6);
    if (pplVar6 == (long **)0x0) {
      pplVar10 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar10 = pplVar6;
      _objc_retainAutorelease(pplVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar6);
    puVar7 = auStack_220;
    func_0x00010002b838(auStack_220,pplVar10);
    plStack_240 = (long *)0x0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&plStack_240,auStack_220,&lStack_208,1);
    pplVar4 = (long **)&UNK_110a02688;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a02688,&plStack_240,puVar9);
    puStack_228 = (undefined1 *)&plStack_240;
    func_0x00010007e5dc(&puStack_228);
    puVar14 = (undefined *)pplVar5;
    pplVar3 = &plStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar14 = (undefined *)pplVar5;
      pplVar3 = &plStack_240;
    }
  }
  pplVar10 = pplVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar6);
  _objc_release(pplVar6);
  pplVar11 = pplVar10;
  __Unwind_Resume();
  plVar8 = alStack_2b0;
  puStack_248 = &LAB_107ca2090;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar1 = (long **)0x0;
  pplStack_270 = pplVar3;
  plStack_268 = plVar12;
  pplStack_260 = pplVar10;
  pplStack_258 = pplVar6;
  pppuStack_250 = &pppuStack_1d0;
  if (pplVar11 != (long **)0x0) {
    pplVar10 = (long **)pplVar11[1];
    puVar9 = &UNK_10f44f9bb;
    if ((int)pplVar4 == 0) {
      puVar9 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(applStack_290,puVar9);
    alStack_2b0[0] = 0;
    alStack_2b0[1] = 0;
    alStack_2b0[2] = 0;
    func_0x00010007e1e8(alStack_2b0,applStack_290,&lStack_278,1);
    pplVar4 = (long **)&UNK_110a026d8;
    (*(code *)(*pplVar10)[3])(pplVar10,&UNK_110a026d8,alStack_2b0,puVar14);
    pplVar1 = &plStack_298;
    plStack_298 = alStack_2b0;
    func_0x00010007e5dc();
    puVar14 = (undefined *)plVar8;
    plVar12 = alStack_2b0;
    if (cStack_279 < '\0') {
      pplVar1 = applStack_290[0];
      __ZdlPv();
      puVar14 = (undefined *)plVar8;
      plVar12 = alStack_2b0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  plStack_298 = plVar12;
  func_0x00010007e5dc(&plStack_298);
  if (cStack_279 < '\0') {
    __ZdlPv(applStack_290[0]);
  }
  pplVar11 = pplVar1;
  __Unwind_Resume();
  pplVar5 = &plStack_330;
  puStack_2b8 = &SUB_107ca21a8;
  ppppuVar13 = &pppuStack_2c0;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar4;
  puVar9 = puVar14;
  puStack_2f0 = unaff_x24;
  puStack_2e8 = puVar7;
  pplStack_2e0 = pplVar3;
  plStack_2d8 = plVar12;
  pplStack_2d0 = pplVar10;
  pplStack_2c8 = pplVar1;
  pppuStack_2c0 = &pppuStack_250;
  _objc_retain(pplVar4);
  if (pplVar11 != (long **)0x0) {
    plVar12 = pplVar11[1];
    pplVar6 = (long **)&UNK_110a02728;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      pplVar11 = (long **)pplVar11[1];
      _objc_retain(pplVar4);
      if (pplVar4 == (long **)0x0) {
        pplVar10 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar10 = pplVar4;
        _objc_retainAutorelease(pplVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar4);
      puVar7 = auStack_310;
      func_0x00010002b838(auStack_310,pplVar10);
      plStack_330 = (long *)0x0;
      uStack_328 = 0;
      uStack_320 = 0;
      func_0x00010007e1e8(&plStack_330,auStack_310,&lStack_2f8,1);
      pplVar6 = (long **)&UNK_110a02728;
      (*(code *)(*pplVar11)[3])(pplVar11,&UNK_110a02728,&plStack_330,(long)puVar14 * 10);
      puStack_318 = (undefined1 *)&plStack_330;
      func_0x00010007e5dc(&puStack_318);
      puVar9 = (undefined *)pplVar5;
      pplVar3 = &plStack_330;
      if (cStack_2f9 < '\0') {
        __ZdlPv(auStack_310[0]);
        puVar9 = (undefined *)pplVar5;
        pplVar3 = &plStack_330;
      }
    }
  }
  pplVar10 = pplVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
    ___stack_chk_fail();
    _objc_release(pplVar4);
    _objc_release(pplVar4);
    puVar14 = &UNK_107ca2340;
    pplVar5 = pplVar10;
    __Unwind_Resume();
    pplVar1 = &plStack_330;
    while( true ) {
      *(undefined8 **)((long)pplVar1 + -0x40) = unaff_x24;
      *(undefined8 **)((long)pplVar1 + -0x38) = puVar7;
      *(long ***)((long)pplVar1 + -0x30) = pplVar3;
      *(long ***)((long)pplVar1 + -0x28) = pplVar11;
      *(long ***)((long)pplVar1 + -0x20) = pplVar10;
      *(long ***)((long)pplVar1 + -0x18) = pplVar4;
      *(undefined8 *****)((long)pplVar1 + -0x10) = ppppuVar13;
      *(undefined **)((long)pplVar1 + -8) = puVar14;
      *(undefined8 *)((long)pplVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      pplVar4 = pplVar6;
      _objc_retain(pplVar6);
      pplVar11 = pplVar5;
      dVar15 = param_1;
      if (pplVar5 != (long **)0x0) {
        plVar12 = pplVar5[1];
        pplVar4 = (long **)&UNK_110a02778;
        (**(code **)(*plVar12 + 0x28))();
        dVar15 = param_1;
        if ((int)plVar12 != 0) {
          pplVar11 = (long **)pplVar5[1];
          _objc_retain(pplVar6);
          if (pplVar6 == (long **)0x0) {
            pplVar10 = (long **)&UNK_10f44f7d9;
            dVar15 = param_1;
          }
          else {
            pplVar10 = pplVar6;
            _objc_retainAutorelease(pplVar6);
            func_0x00010bdc3520();
            dVar15 = param_1;
          }
          _objc_release(pplVar6);
          puVar7 = (undefined8 *)((long)pplVar1 + -0x60);
          func_0x00010002b838((undefined1 *)((long)pplVar1 + -0x60),pplVar10);
          *(undefined8 *)((long)pplVar1 + -0x80) = 0;
          *(undefined8 *)((long)pplVar1 + -0x78) = 0;
          *(undefined8 *)((long)pplVar1 + -0x70) = 0;
          func_0x00010007e1e8((undefined1 *)((long)pplVar1 + -0x80),
                              (undefined1 *)((long)pplVar1 + -0x60),
                              (undefined1 *)((long)pplVar1 + -0x48),1);
          pplVar4 = (long **)&UNK_110a02778;
          (*(code *)(*pplVar11)[3])
                    (pplVar11,&UNK_110a02778,(undefined1 *)((long)pplVar1 + -0x80),puVar9);
          *(undefined1 **)((long)pplVar1 + -0x68) = (undefined1 *)((long)pplVar1 + -0x80);
          func_0x00010007e5dc((undefined1 *)((long)pplVar1 + -0x68));
          pplVar3 = (long **)((long)pplVar1 + -0x80);
          if (*(char *)((long)pplVar1 + -0x49) < '\0') {
            __ZdlPv(*(undefined8 *)((long)pplVar1 + -0x60));
            pplVar3 = (long **)((long)pplVar1 + -0x80);
          }
        }
      }
      pplVar10 = pplVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pplVar1 + -0x48)) break;
      ___stack_chk_fail();
      _objc_release(pplVar6);
      _objc_release(pplVar6);
      pplVar5 = pplVar10;
      __Unwind_Resume();
      *(undefined8 *)((long)pplVar1 + -0xb0) = unaff_d9;
      *(double *)((long)pplVar1 + -0xa8) = unaff_d8;
      *(long ***)((long)pplVar1 + -0xa0) = pplVar10;
      *(long ***)((long)pplVar1 + -0x98) = pplVar6;
      *(undefined1 **)((long)pplVar1 + -0x90) = (undefined1 *)((long)pplVar1 + -0x10);
      *(undefined **)((long)pplVar1 + -0x88) = &SUB_107ca24d4;
      ppppuVar13 = (undefined8 ****)((long)pplVar1 + -0x90);
      _objc_retain(pplVar4);
      if (pplVar5 == (long **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(pplVar4);
        return;
      }
      param_1 = dVar15 * 1000.0;
      puVar9 = (undefined *)(long)param_1;
      puVar14 = &UNK_107ca2518;
      pplVar1 = (long **)((long)pplVar1 + -0xb0);
      pplVar6 = pplVar4;
      pplVar10 = pplVar5;
      unaff_d8 = dVar15;
    }
    return;
  }
  return;
}



/* Entry: 105b0b9f4; end: 105b0ba03; -[SCStoriesGrapheneMetricsEmitter logPostingStatusShadowDroppedWithSite:] */

/* WARNING: Possible PIC construction at 0x000107ca2514: Changing call to branch */

void FUN_105b0b9f4(double param_1,long param_2,undefined8 param_3,long **param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined1 *puVar9;
  long *plVar10;
  long **pplVar11;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 ****ppppuVar12;
  undefined *puVar13;
  double dVar14;
  double unaff_d8;
  undefined8 unaff_d9;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 ***pppuStack_200;
  undefined *puStack_1f8;
  long alStack_1f0 [3];
  long *plStack_1d8;
  long **applStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 *puStack_1b0;
  long *plStack_1a8;
  long **pplStack_1a0;
  long **pplStack_198;
  undefined1 ***pppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_2 + 8);
  puVar7 = (undefined1 *)0x1;
  puVar1 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar3 = param_4;
  _objc_retain(param_4);
  if (lVar2 != 0) {
    plVar10 = *(long **)(lVar2 + 8);
    _objc_retain(param_4);
    if (param_4 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,pplVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pplVar3 = (long **)&UNK_110a025e8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a025e8,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined1 *)puVar1;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined1 *)puVar1;
      unaff_x22 = &uStack_80;
    }
  }
  pplVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_4);
  __Unwind_Resume();
  puVar1 = &uStack_100;
  puStack_88 = &LAB_107ca1da8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar3;
  puVar9 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pplVar3);
  if (pplVar4 != (long **)0x0) {
    plVar10 = pplVar4[1];
    _objc_retain(pplVar3);
    if (pplVar3 == (long **)0x0) {
      pplVar4 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar4 = pplVar3;
      _objc_retainAutorelease(pplVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar3);
    unaff_x23 = auStack_e0;
    func_0x00010002b838(auStack_e0,pplVar4);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pplVar6 = (long **)&UNK_110a02638;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a02638,&uStack_100,puVar7);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar9 = (undefined1 *)puVar1;
    unaff_x22 = &uStack_100;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar9 = (undefined1 *)puVar1;
      unaff_x22 = &uStack_100;
    }
  }
  pplVar4 = pplVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar3);
  _objc_release(pplVar3);
  __Unwind_Resume();
  puVar1 = &uStack_180;
  puStack_108 = &SUB_107ca1f1c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar3 = pplVar6;
  puVar7 = puVar9;
  ppuStack_110 = &puStack_90;
  _objc_retain(pplVar6);
  plVar10 = (long *)0x0;
  if (pplVar4 != (long **)0x0) {
    plVar10 = pplVar4[1];
    _objc_retain(pplVar6);
    if (pplVar6 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = pplVar6;
      _objc_retainAutorelease(pplVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar6);
    unaff_x23 = auStack_160;
    func_0x00010002b838(auStack_160,pplVar3);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    pplVar3 = (long **)&UNK_110a02688;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a02688,&uStack_180,puVar9);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar7 = (undefined1 *)puVar1;
    unaff_x22 = &uStack_180;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar7 = (undefined1 *)puVar1;
      unaff_x22 = &uStack_180;
    }
  }
  pplVar4 = pplVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar6);
  _objc_release(pplVar6);
  pplVar5 = pplVar4;
  __Unwind_Resume();
  plVar8 = alStack_1f0;
  puStack_188 = &LAB_107ca2090;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar11 = (long **)0x0;
  puStack_1b0 = (undefined1 *)unaff_x22;
  plStack_1a8 = plVar10;
  pplStack_1a0 = pplVar4;
  pplStack_198 = pplVar6;
  pppuStack_190 = &ppuStack_110;
  if (pplVar5 != (long **)0x0) {
    plVar10 = pplVar5[1];
    puVar13 = &UNK_10f44f9bb;
    if ((int)pplVar3 == 0) {
      puVar13 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(applStack_1d0,puVar13);
    alStack_1f0[0] = 0;
    alStack_1f0[1] = 0;
    alStack_1f0[2] = 0;
    func_0x00010007e1e8(alStack_1f0,applStack_1d0,&lStack_1b8,1);
    pplVar3 = (long **)&UNK_110a026d8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a026d8,alStack_1f0,puVar7);
    pplVar11 = &plStack_1d8;
    plStack_1d8 = alStack_1f0;
    func_0x00010007e5dc();
    puVar7 = (undefined1 *)plVar8;
    plVar10 = alStack_1f0;
    if (cStack_1b9 < '\0') {
      pplVar11 = applStack_1d0[0];
      __ZdlPv();
      puVar7 = (undefined1 *)plVar8;
      plVar10 = alStack_1f0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  plStack_1d8 = plVar10;
  func_0x00010007e5dc(&plStack_1d8);
  if (cStack_1b9 < '\0') {
    __ZdlPv(applStack_1d0[0]);
  }
  __Unwind_Resume();
  puVar1 = &uStack_270;
  puStack_1f8 = &SUB_107ca21a8;
  ppppuVar12 = &pppuStack_200;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = pplVar3;
  puVar9 = puVar7;
  pppuStack_200 = &pppuStack_190;
  _objc_retain(pplVar3);
  if (pplVar11 != (long **)0x0) {
    plVar10 = pplVar11[1];
    pplVar4 = (long **)&UNK_110a02728;
    (**(code **)(*plVar10 + 0x28))();
    if ((int)plVar10 != 0) {
      pplVar11 = (long **)pplVar11[1];
      _objc_retain(pplVar3);
      if (pplVar3 == (long **)0x0) {
        pplVar4 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar4 = pplVar3;
        _objc_retainAutorelease(pplVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar3);
      unaff_x23 = auStack_250;
      func_0x00010002b838(auStack_250,pplVar4);
      uStack_270 = 0;
      uStack_268 = 0;
      uStack_260 = 0;
      func_0x00010007e1e8(&uStack_270,auStack_250,&lStack_238,1);
      pplVar4 = (long **)&UNK_110a02728;
      (*(code *)(*pplVar11)[3])(pplVar11,&UNK_110a02728,&uStack_270,(long)puVar7 * 10);
      puStack_258 = (undefined1 *)&uStack_270;
      func_0x00010007e5dc(&puStack_258);
      puVar9 = (undefined1 *)puVar1;
      unaff_x22 = &uStack_270;
      if (cStack_239 < '\0') {
        __ZdlPv(auStack_250[0]);
        puVar9 = (undefined1 *)puVar1;
        unaff_x22 = &uStack_270;
      }
    }
  }
  pplVar6 = pplVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar3);
  _objc_release(pplVar3);
  puVar13 = &UNK_107ca2340;
  pplVar5 = pplVar6;
  __Unwind_Resume();
  puVar1 = &uStack_270;
  while( true ) {
    *(undefined8 *)((long)puVar1 + -0x40) = unaff_x24;
    *(undefined8 **)((long)puVar1 + -0x38) = unaff_x23;
    *(undefined8 **)((long)puVar1 + -0x30) = unaff_x22;
    *(long ***)((long)puVar1 + -0x28) = pplVar11;
    *(long ***)((long)puVar1 + -0x20) = pplVar6;
    *(long ***)((long)puVar1 + -0x18) = pplVar3;
    *(undefined8 *****)((long)puVar1 + -0x10) = ppppuVar12;
    *(undefined **)((long)puVar1 + -8) = puVar13;
    *(undefined8 *)((long)puVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    pplVar3 = pplVar4;
    _objc_retain(pplVar4);
    pplVar11 = pplVar5;
    dVar14 = param_1;
    if (pplVar5 != (long **)0x0) {
      plVar10 = pplVar5[1];
      pplVar3 = (long **)&UNK_110a02778;
      (**(code **)(*plVar10 + 0x28))();
      dVar14 = param_1;
      if ((int)plVar10 != 0) {
        pplVar11 = (long **)pplVar5[1];
        _objc_retain(pplVar4);
        if (pplVar4 == (long **)0x0) {
          pplVar3 = (long **)&UNK_10f44f7d9;
          dVar14 = param_1;
        }
        else {
          pplVar3 = pplVar4;
          _objc_retainAutorelease(pplVar4);
          func_0x00010bdc3520();
          dVar14 = param_1;
        }
        _objc_release(pplVar4);
        unaff_x23 = (undefined8 *)((long)puVar1 + -0x60);
        func_0x00010002b838((undefined1 *)((long)puVar1 + -0x60),pplVar3);
        *(undefined8 *)((long)puVar1 + -0x80) = 0;
        *(undefined8 *)((long)puVar1 + -0x78) = 0;
        *(undefined8 *)((long)puVar1 + -0x70) = 0;
        func_0x00010007e1e8((undefined1 *)((long)puVar1 + -0x80),
                            (undefined1 *)((long)puVar1 + -0x60),
                            (undefined1 *)((long)puVar1 + -0x48),1);
        pplVar3 = (long **)&UNK_110a02778;
        (*(code *)(*pplVar11)[3])
                  (pplVar11,&UNK_110a02778,(undefined1 *)((long)puVar1 + -0x80),puVar9);
        *(undefined1 **)((long)puVar1 + -0x68) = (undefined1 *)((long)puVar1 + -0x80);
        func_0x00010007e5dc((undefined1 *)((long)puVar1 + -0x68));
        unaff_x22 = (undefined8 *)((long)puVar1 + -0x80);
        if (*(char *)((long)puVar1 + -0x49) < '\0') {
          __ZdlPv(*(undefined8 *)((long)puVar1 + -0x60));
          unaff_x22 = (undefined8 *)((long)puVar1 + -0x80);
        }
      }
    }
    pplVar6 = pplVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x48)) break;
    ___stack_chk_fail();
    _objc_release(pplVar4);
    _objc_release(pplVar4);
    pplVar5 = pplVar6;
    __Unwind_Resume();
    *(undefined8 *)((long)puVar1 + -0xb0) = unaff_d9;
    *(double *)((long)puVar1 + -0xa8) = unaff_d8;
    *(long ***)((long)puVar1 + -0xa0) = pplVar6;
    *(long ***)((long)puVar1 + -0x98) = pplVar4;
    *(undefined1 **)((long)puVar1 + -0x90) = (undefined1 *)((long)puVar1 + -0x10);
    *(undefined **)((long)puVar1 + -0x88) = &SUB_107ca24d4;
    ppppuVar12 = (undefined8 ****)((long)puVar1 + -0x90);
    _objc_retain(pplVar3);
    if (pplVar5 == (long **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(pplVar3);
      return;
    }
    param_1 = dVar14 * 1000.0;
    puVar9 = (undefined1 *)(long)param_1;
    puVar13 = &UNK_107ca2518;
    puVar1 = (undefined8 *)((long)puVar1 + -0xb0);
    pplVar4 = pplVar3;
    pplVar6 = pplVar5;
    unaff_d8 = dVar14;
  }
  return;
}



/* Entry: 105b0ba04; end: 105b0ba13; -[SCStoriesGrapheneMetricsEmitter logPostingStatusAckWithResult:] */

/* WARNING: Possible PIC construction at 0x000107ca2514: Changing call to branch */

void FUN_105b0ba04(double param_1,long param_2,undefined8 param_3,long **param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  long *plVar10;
  long **pplVar11;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 ****ppppuVar12;
  undefined *puVar13;
  double dVar14;
  double unaff_d8;
  undefined8 unaff_d9;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 ***pppuStack_180;
  undefined *puStack_178;
  long alStack_170 [3];
  long *plStack_158;
  long **applStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined1 *puStack_130;
  long *plStack_128;
  long **pplStack_120;
  long **pplStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_2 + 8);
  puVar7 = (undefined1 *)0x1;
  puVar1 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar3 = param_4;
  _objc_retain(param_4);
  if (lVar2 != 0) {
    plVar10 = *(long **)(lVar2 + 8);
    _objc_retain(param_4);
    if (param_4 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,pplVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pplVar3 = (long **)&UNK_110a02638;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a02638,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined1 *)puVar1;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined1 *)puVar1;
      unaff_x22 = &uStack_80;
    }
  }
  pplVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_4);
  __Unwind_Resume();
  puVar1 = &uStack_100;
  puStack_88 = &SUB_107ca1f1c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar3;
  puVar8 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pplVar3);
  plVar10 = (long *)0x0;
  if (pplVar4 != (long **)0x0) {
    plVar10 = pplVar4[1];
    _objc_retain(pplVar3);
    if (pplVar3 == (long **)0x0) {
      pplVar4 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar4 = pplVar3;
      _objc_retainAutorelease(pplVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar3);
    unaff_x23 = auStack_e0;
    func_0x00010002b838(auStack_e0,pplVar4);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pplVar6 = (long **)&UNK_110a02688;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a02688,&uStack_100,puVar7);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar8 = (undefined1 *)puVar1;
    unaff_x22 = &uStack_100;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined1 *)puVar1;
      unaff_x22 = &uStack_100;
    }
  }
  pplVar4 = pplVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar3);
  _objc_release(pplVar3);
  pplVar5 = pplVar4;
  __Unwind_Resume();
  plVar9 = alStack_170;
  puStack_108 = &LAB_107ca2090;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar11 = (long **)0x0;
  puStack_130 = (undefined1 *)unaff_x22;
  plStack_128 = plVar10;
  pplStack_120 = pplVar4;
  pplStack_118 = pplVar3;
  ppuStack_110 = &puStack_90;
  if (pplVar5 != (long **)0x0) {
    plVar10 = pplVar5[1];
    puVar13 = &UNK_10f44f9bb;
    if ((int)pplVar6 == 0) {
      puVar13 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(applStack_150,puVar13);
    alStack_170[0] = 0;
    alStack_170[1] = 0;
    alStack_170[2] = 0;
    func_0x00010007e1e8(alStack_170,applStack_150,&lStack_138,1);
    pplVar6 = (long **)&UNK_110a026d8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a026d8,alStack_170,puVar8);
    pplVar11 = &plStack_158;
    plStack_158 = alStack_170;
    func_0x00010007e5dc();
    puVar8 = (undefined1 *)plVar9;
    plVar10 = alStack_170;
    if (cStack_139 < '\0') {
      pplVar11 = applStack_150[0];
      __ZdlPv();
      puVar8 = (undefined1 *)plVar9;
      plVar10 = alStack_170;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  plStack_158 = plVar10;
  func_0x00010007e5dc(&plStack_158);
  if (cStack_139 < '\0') {
    __ZdlPv(applStack_150[0]);
  }
  __Unwind_Resume();
  puVar1 = &uStack_1f0;
  puStack_178 = &SUB_107ca21a8;
  ppppuVar12 = &pppuStack_180;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar3 = pplVar6;
  puVar7 = puVar8;
  pppuStack_180 = &ppuStack_110;
  _objc_retain(pplVar6);
  if (pplVar11 != (long **)0x0) {
    plVar10 = pplVar11[1];
    pplVar3 = (long **)&UNK_110a02728;
    (**(code **)(*plVar10 + 0x28))();
    if ((int)plVar10 != 0) {
      pplVar11 = (long **)pplVar11[1];
      _objc_retain(pplVar6);
      if (pplVar6 == (long **)0x0) {
        pplVar3 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar3 = pplVar6;
        _objc_retainAutorelease(pplVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar6);
      unaff_x23 = auStack_1d0;
      func_0x00010002b838(auStack_1d0,pplVar3);
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      func_0x00010007e1e8(&uStack_1f0,auStack_1d0,&lStack_1b8,1);
      pplVar3 = (long **)&UNK_110a02728;
      (*(code *)(*pplVar11)[3])(pplVar11,&UNK_110a02728,&uStack_1f0,(long)puVar8 * 10);
      puStack_1d8 = (undefined1 *)&uStack_1f0;
      func_0x00010007e5dc(&puStack_1d8);
      puVar7 = (undefined1 *)puVar1;
      unaff_x22 = &uStack_1f0;
      if (cStack_1b9 < '\0') {
        __ZdlPv(auStack_1d0[0]);
        puVar7 = (undefined1 *)puVar1;
        unaff_x22 = &uStack_1f0;
      }
    }
  }
  pplVar4 = pplVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar6);
  _objc_release(pplVar6);
  puVar13 = &UNK_107ca2340;
  pplVar5 = pplVar4;
  __Unwind_Resume();
  puVar1 = &uStack_1f0;
  while( true ) {
    *(undefined8 *)((long)puVar1 + -0x40) = unaff_x24;
    *(undefined8 **)((long)puVar1 + -0x38) = unaff_x23;
    *(undefined8 **)((long)puVar1 + -0x30) = unaff_x22;
    *(long ***)((long)puVar1 + -0x28) = pplVar11;
    *(long ***)((long)puVar1 + -0x20) = pplVar4;
    *(long ***)((long)puVar1 + -0x18) = pplVar6;
    *(undefined1 *****)((long)puVar1 + -0x10) = ppppuVar12;
    *(undefined **)((long)puVar1 + -8) = puVar13;
    *(undefined8 *)((long)puVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    pplVar6 = pplVar3;
    _objc_retain(pplVar3);
    pplVar11 = pplVar5;
    dVar14 = param_1;
    if (pplVar5 != (long **)0x0) {
      plVar10 = pplVar5[1];
      pplVar6 = (long **)&UNK_110a02778;
      (**(code **)(*plVar10 + 0x28))();
      dVar14 = param_1;
      if ((int)plVar10 != 0) {
        pplVar11 = (long **)pplVar5[1];
        _objc_retain(pplVar3);
        if (pplVar3 == (long **)0x0) {
          pplVar4 = (long **)&UNK_10f44f7d9;
          dVar14 = param_1;
        }
        else {
          pplVar4 = pplVar3;
          _objc_retainAutorelease(pplVar3);
          func_0x00010bdc3520();
          dVar14 = param_1;
        }
        _objc_release(pplVar3);
        unaff_x23 = (undefined8 *)((long)puVar1 + -0x60);
        func_0x00010002b838((undefined1 *)((long)puVar1 + -0x60),pplVar4);
        *(undefined8 *)((long)puVar1 + -0x80) = 0;
        *(undefined8 *)((long)puVar1 + -0x78) = 0;
        *(undefined8 *)((long)puVar1 + -0x70) = 0;
        func_0x00010007e1e8((undefined1 *)((long)puVar1 + -0x80),
                            (undefined1 *)((long)puVar1 + -0x60),
                            (undefined1 *)((long)puVar1 + -0x48),1);
        pplVar6 = (long **)&UNK_110a02778;
        (*(code *)(*pplVar11)[3])
                  (pplVar11,&UNK_110a02778,(undefined1 *)((long)puVar1 + -0x80),puVar7);
        *(undefined1 **)((long)puVar1 + -0x68) = (undefined1 *)((long)puVar1 + -0x80);
        func_0x00010007e5dc((undefined1 *)((long)puVar1 + -0x68));
        unaff_x22 = (undefined8 *)((long)puVar1 + -0x80);
        if (*(char *)((long)puVar1 + -0x49) < '\0') {
          __ZdlPv(*(undefined8 *)((long)puVar1 + -0x60));
          unaff_x22 = (undefined8 *)((long)puVar1 + -0x80);
        }
      }
    }
    pplVar4 = pplVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x48)) break;
    ___stack_chk_fail();
    _objc_release(pplVar3);
    _objc_release(pplVar3);
    pplVar5 = pplVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)puVar1 + -0xb0) = unaff_d9;
    *(double *)((long)puVar1 + -0xa8) = unaff_d8;
    *(long ***)((long)puVar1 + -0xa0) = pplVar4;
    *(long ***)((long)puVar1 + -0x98) = pplVar3;
    *(undefined1 **)((long)puVar1 + -0x90) = (undefined1 *)((long)puVar1 + -0x10);
    *(undefined **)((long)puVar1 + -0x88) = &SUB_107ca24d4;
    ppppuVar12 = (undefined1 ****)((long)puVar1 + -0x90);
    _objc_retain(pplVar6);
    if (pplVar5 == (long **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(pplVar6);
      return;
    }
    param_1 = dVar14 * 1000.0;
    puVar7 = (undefined1 *)(long)param_1;
    puVar13 = &UNK_107ca2518;
    puVar1 = (undefined8 *)((long)puVar1 + -0xb0);
    pplVar3 = pplVar6;
    pplVar4 = pplVar5;
    unaff_d8 = dVar14;
  }
  return;
}



/* Entry: 105b0ba14; end: 105b0ba23; -[SCStoriesGrapheneMetricsEmitter logPostingDeletionWithResult:] */

/* WARNING: Possible PIC construction at 0x000107ca2514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ca1bfc) */

void FUN_105b0ba14(double param_1,long param_2,undefined8 param_3,long **param_4,undefined *param_5,
                  undefined8 param_6)

{
  long **pplVar1;
  long lVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long *plVar10;
  long **pplVar11;
  long *plVar12;
  long **pplVar13;
  undefined8 *unaff_x24;
  undefined8 ****ppppuVar14;
  undefined *puVar15;
  double dVar16;
  double unaff_d8;
  undefined8 unaff_d9;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 *puStack_398;
  undefined8 auStack_390 [2];
  char cStack_379;
  long lStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  long **pplStack_360;
  long *plStack_358;
  long **pplStack_350;
  long **pplStack_348;
  undefined8 ***pppuStack_340;
  undefined *puStack_338;
  long alStack_330 [3];
  long *plStack_318;
  long **applStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  long **pplStack_2f0;
  long *plStack_2e8;
  long **pplStack_2e0;
  long **pplStack_2d8;
  undefined8 ***pppuStack_2d0;
  undefined *puStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  long **pplStack_270;
  long *plStack_268;
  long **pplStack_260;
  long **pplStack_258;
  undefined8 ***pppuStack_250;
  undefined *puStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  long **pplStack_1f0;
  long *plStack_1e8;
  long **pplStack_1e0;
  long **pplStack_1d8;
  undefined1 ***pppuStack_1d0;
  undefined *puStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  long **pplStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long **pplStack_158;
  undefined1 **ppuStack_150;
  undefined *puStack_148;
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
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_2 + 8);
  puVar7 = (undefined *)0x1;
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar11 = param_4;
  _objc_retain(param_4);
  if (lVar2 != 0) {
    plVar12 = *(long **)(lVar2 + 8);
    _objc_retain(param_4);
    if (param_4 == (long **)0x0) {
      pplVar11 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar11 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pplVar11);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pplVar11 = (long **)&UNK_110a02548;
    param_5 = (undefined *)0x1;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined *)puVar8;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined *)puVar8;
    }
  }
  pplVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_4);
  __Unwind_Resume();
  puVar8 = &uStack_140;
  puStack_88 = &LAB_107ca1974;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar11;
  puVar15 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pplVar11);
  _objc_retain(puVar7);
  _objc_retain(param_5);
  if (pplVar3 != (long **)0x0) {
    plVar12 = pplVar3[1];
    _objc_retain(pplVar11);
    if (pplVar11 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = pplVar11;
      _objc_retainAutorelease(pplVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar11);
    func_0x00010002b838(auStack_120,pplVar3);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar15 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar15 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_108,puVar15);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar15 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar15 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_f0,puVar15);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_d8,3);
    pplVar6 = (long **)&UNK_110a02598;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a02598,&uStack_140,param_6);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x00010007e5dc(&puStack_128);
    lVar2 = 0;
    puVar15 = (undefined *)puVar8;
    do {
      if ((&cStack_d9)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
      unaff_x24 = &uStack_140;
    } while (lVar2 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(puVar7);
  pplVar3 = pplVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puVar8 = auStack_120;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar8);
  _objc_release(param_5);
  _objc_release(puVar7);
  _objc_release(pplVar11);
  pplVar4 = pplVar3;
  __Unwind_Resume();
  pplVar13 = &plStack_1c0;
  puStack_148 = &LAB_107ca1c34;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar1 = pplVar6;
  puVar9 = puVar15;
  puStack_180 = unaff_x24;
  puStack_178 = puVar8;
  pplStack_170 = pplVar3;
  puStack_168 = param_5;
  puStack_160 = puVar7;
  pplStack_158 = pplVar11;
  ppuStack_150 = &puStack_90;
  _objc_retain(pplVar6);
  plVar12 = (long *)0x0;
  if (pplVar4 != (long **)0x0) {
    plVar12 = pplVar4[1];
    _objc_retain(pplVar6);
    if (pplVar6 == (long **)0x0) {
      pplVar11 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar11 = pplVar6;
      _objc_retainAutorelease(pplVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar6);
    puVar8 = auStack_1a0;
    func_0x00010002b838(auStack_1a0,pplVar11);
    plStack_1c0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&plStack_1c0,auStack_1a0,&lStack_188,1);
    pplVar1 = (long **)&UNK_110a025e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a025e8,&plStack_1c0,puVar15);
    puStack_1a8 = (undefined1 *)&plStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    puVar9 = (undefined *)pplVar13;
    pplVar3 = &plStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar9 = (undefined *)pplVar13;
      pplVar3 = &plStack_1c0;
    }
  }
  pplVar11 = pplVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar6);
  _objc_release(pplVar6);
  pplVar13 = pplVar11;
  __Unwind_Resume();
  pplVar5 = &plStack_240;
  puStack_1c8 = &LAB_107ca1da8;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = pplVar1;
  puVar7 = puVar9;
  puStack_200 = unaff_x24;
  puStack_1f8 = puVar8;
  pplStack_1f0 = pplVar3;
  plStack_1e8 = plVar12;
  pplStack_1e0 = pplVar11;
  pplStack_1d8 = pplVar6;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(pplVar1);
  plVar12 = (long *)0x0;
  if (pplVar13 != (long **)0x0) {
    plVar12 = pplVar13[1];
    _objc_retain(pplVar1);
    if (pplVar1 == (long **)0x0) {
      pplVar11 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar11 = pplVar1;
      _objc_retainAutorelease(pplVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar1);
    puVar8 = auStack_220;
    func_0x00010002b838(auStack_220,pplVar11);
    plStack_240 = (long *)0x0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&plStack_240,auStack_220,&lStack_208,1);
    pplVar4 = (long **)&UNK_110a02638;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a02638,&plStack_240,puVar9);
    puStack_228 = (undefined1 *)&plStack_240;
    func_0x00010007e5dc(&puStack_228);
    puVar7 = (undefined *)pplVar5;
    pplVar3 = &plStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar7 = (undefined *)pplVar5;
      pplVar3 = &plStack_240;
    }
  }
  pplVar11 = pplVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar1);
  _objc_release(pplVar1);
  pplVar13 = pplVar11;
  __Unwind_Resume();
  pplVar5 = &plStack_2c0;
  puStack_248 = &SUB_107ca1f1c;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar4;
  puVar15 = puVar7;
  puStack_280 = unaff_x24;
  puStack_278 = puVar8;
  pplStack_270 = pplVar3;
  plStack_268 = plVar12;
  pplStack_260 = pplVar11;
  pplStack_258 = pplVar1;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(pplVar4);
  plVar12 = (long *)0x0;
  if (pplVar13 != (long **)0x0) {
    plVar12 = pplVar13[1];
    _objc_retain(pplVar4);
    if (pplVar4 == (long **)0x0) {
      pplVar11 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar11 = pplVar4;
      _objc_retainAutorelease(pplVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar4);
    puVar8 = auStack_2a0;
    func_0x00010002b838(auStack_2a0,pplVar11);
    plStack_2c0 = (long *)0x0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&plStack_2c0,auStack_2a0,&lStack_288,1);
    pplVar6 = (long **)&UNK_110a02688;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a02688,&plStack_2c0,puVar7);
    puStack_2a8 = (undefined1 *)&plStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    puVar15 = (undefined *)pplVar5;
    pplVar3 = &plStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar15 = (undefined *)pplVar5;
      pplVar3 = &plStack_2c0;
    }
  }
  pplVar11 = pplVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
    ___stack_chk_fail();
    _objc_release(pplVar4);
    _objc_release(pplVar4);
    pplVar13 = pplVar11;
    __Unwind_Resume();
    plVar10 = alStack_330;
    puStack_2c8 = &LAB_107ca2090;
    lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar1 = (long **)0x0;
    pplStack_2f0 = pplVar3;
    plStack_2e8 = plVar12;
    pplStack_2e0 = pplVar11;
    pplStack_2d8 = pplVar4;
    pppuStack_2d0 = &pppuStack_250;
    if (pplVar13 != (long **)0x0) {
      pplVar11 = (long **)pplVar13[1];
      puVar7 = &UNK_10f44f9bb;
      if ((int)pplVar6 == 0) {
        puVar7 = &UNK_10f44f9c0;
      }
      func_0x00010002b838(applStack_310,puVar7);
      alStack_330[0] = 0;
      alStack_330[1] = 0;
      alStack_330[2] = 0;
      func_0x00010007e1e8(alStack_330,applStack_310,&lStack_2f8,1);
      pplVar6 = (long **)&UNK_110a026d8;
      (*(code *)(*pplVar11)[3])(pplVar11,&UNK_110a026d8,alStack_330,puVar15);
      pplVar1 = &plStack_318;
      plStack_318 = alStack_330;
      func_0x00010007e5dc();
      puVar15 = (undefined *)plVar10;
      plVar12 = alStack_330;
      if (cStack_2f9 < '\0') {
        pplVar1 = applStack_310[0];
        __ZdlPv();
        puVar15 = (undefined *)plVar10;
        plVar12 = alStack_330;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
      return;
    }
    ___stack_chk_fail();
    plStack_318 = plVar12;
    func_0x00010007e5dc(&plStack_318);
    if (cStack_2f9 < '\0') {
      __ZdlPv(applStack_310[0]);
    }
    pplVar13 = pplVar1;
    __Unwind_Resume();
    pplVar5 = &plStack_3b0;
    puStack_338 = &SUB_107ca21a8;
    ppppuVar14 = &pppuStack_340;
    lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar4 = pplVar6;
    puVar7 = puVar15;
    puStack_370 = unaff_x24;
    puStack_368 = puVar8;
    pplStack_360 = pplVar3;
    plStack_358 = plVar12;
    pplStack_350 = pplVar11;
    pplStack_348 = pplVar1;
    pppuStack_340 = &pppuStack_2d0;
    _objc_retain(pplVar6);
    if (pplVar13 != (long **)0x0) {
      plVar12 = pplVar13[1];
      pplVar4 = (long **)&UNK_110a02728;
      (**(code **)(*plVar12 + 0x28))();
      if ((int)plVar12 != 0) {
        pplVar13 = (long **)pplVar13[1];
        _objc_retain(pplVar6);
        if (pplVar6 == (long **)0x0) {
          pplVar11 = (long **)&UNK_10f44f7d9;
        }
        else {
          pplVar11 = pplVar6;
          _objc_retainAutorelease(pplVar6);
          func_0x00010bdc3520();
        }
        _objc_release(pplVar6);
        puVar8 = auStack_390;
        func_0x00010002b838(auStack_390,pplVar11);
        plStack_3b0 = (long *)0x0;
        uStack_3a8 = 0;
        uStack_3a0 = 0;
        func_0x00010007e1e8(&plStack_3b0,auStack_390,&lStack_378,1);
        pplVar4 = (long **)&UNK_110a02728;
        (*(code *)(*pplVar13)[3])(pplVar13,&UNK_110a02728,&plStack_3b0,(long)puVar15 * 10);
        puStack_398 = (undefined1 *)&plStack_3b0;
        func_0x00010007e5dc(&puStack_398);
        puVar7 = (undefined *)pplVar5;
        pplVar3 = &plStack_3b0;
        if (cStack_379 < '\0') {
          __ZdlPv(auStack_390[0]);
          puVar7 = (undefined *)pplVar5;
          pplVar3 = &plStack_3b0;
        }
      }
    }
    pplVar11 = pplVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_378) {
      ___stack_chk_fail();
      _objc_release(pplVar6);
      _objc_release(pplVar6);
      puVar15 = &UNK_107ca2340;
      pplVar5 = pplVar11;
      __Unwind_Resume();
      pplVar1 = &plStack_3b0;
      while( true ) {
        *(undefined8 **)((long)pplVar1 + -0x40) = unaff_x24;
        *(undefined8 **)((long)pplVar1 + -0x38) = puVar8;
        *(long ***)((long)pplVar1 + -0x30) = pplVar3;
        *(long ***)((long)pplVar1 + -0x28) = pplVar13;
        *(long ***)((long)pplVar1 + -0x20) = pplVar11;
        *(long ***)((long)pplVar1 + -0x18) = pplVar6;
        *(undefined8 *****)((long)pplVar1 + -0x10) = ppppuVar14;
        *(undefined **)((long)pplVar1 + -8) = puVar15;
        *(undefined8 *)((long)pplVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        pplVar6 = pplVar4;
        _objc_retain(pplVar4);
        pplVar13 = pplVar5;
        dVar16 = param_1;
        if (pplVar5 != (long **)0x0) {
          plVar12 = pplVar5[1];
          pplVar6 = (long **)&UNK_110a02778;
          (**(code **)(*plVar12 + 0x28))();
          dVar16 = param_1;
          if ((int)plVar12 != 0) {
            pplVar13 = (long **)pplVar5[1];
            _objc_retain(pplVar4);
            if (pplVar4 == (long **)0x0) {
              pplVar11 = (long **)&UNK_10f44f7d9;
              dVar16 = param_1;
            }
            else {
              pplVar11 = pplVar4;
              _objc_retainAutorelease(pplVar4);
              func_0x00010bdc3520();
              dVar16 = param_1;
            }
            _objc_release(pplVar4);
            puVar8 = (undefined8 *)((long)pplVar1 + -0x60);
            func_0x00010002b838((undefined1 *)((long)pplVar1 + -0x60),pplVar11);
            *(undefined8 *)((long)pplVar1 + -0x80) = 0;
            *(undefined8 *)((long)pplVar1 + -0x78) = 0;
            *(undefined8 *)((long)pplVar1 + -0x70) = 0;
            func_0x00010007e1e8((undefined1 *)((long)pplVar1 + -0x80),
                                (undefined1 *)((long)pplVar1 + -0x60),
                                (undefined1 *)((long)pplVar1 + -0x48),1);
            pplVar6 = (long **)&UNK_110a02778;
            (*(code *)(*pplVar13)[3])
                      (pplVar13,&UNK_110a02778,(undefined1 *)((long)pplVar1 + -0x80),puVar7);
            *(undefined1 **)((long)pplVar1 + -0x68) = (undefined1 *)((long)pplVar1 + -0x80);
            func_0x00010007e5dc((undefined1 *)((long)pplVar1 + -0x68));
            pplVar3 = (long **)((long)pplVar1 + -0x80);
            if (*(char *)((long)pplVar1 + -0x49) < '\0') {
              __ZdlPv(*(undefined8 *)((long)pplVar1 + -0x60));
              pplVar3 = (long **)((long)pplVar1 + -0x80);
            }
          }
        }
        pplVar11 = pplVar4;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pplVar1 + -0x48)) break;
        ___stack_chk_fail();
        _objc_release(pplVar4);
        _objc_release(pplVar4);
        pplVar5 = pplVar11;
        __Unwind_Resume();
        *(undefined8 *)((long)pplVar1 + -0xb0) = unaff_d9;
        *(double *)((long)pplVar1 + -0xa8) = unaff_d8;
        *(long ***)((long)pplVar1 + -0xa0) = pplVar11;
        *(long ***)((long)pplVar1 + -0x98) = pplVar4;
        *(undefined1 **)((long)pplVar1 + -0x90) = (undefined1 *)((long)pplVar1 + -0x10);
        *(undefined **)((long)pplVar1 + -0x88) = &SUB_107ca24d4;
        ppppuVar14 = (undefined8 ****)((long)pplVar1 + -0x90);
        _objc_retain(pplVar6);
        if (pplVar5 == (long **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(pplVar6);
          return;
        }
        param_1 = dVar16 * 1000.0;
        puVar7 = (undefined *)(long)param_1;
        puVar15 = &UNK_107ca2518;
        pplVar1 = (long **)((long)pplVar1 + -0xb0);
        pplVar4 = pplVar6;
        pplVar11 = pplVar5;
        unaff_d8 = dVar16;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105b0ba24; end: 105b0ba7f; -[SCStoriesGrapheneMetricsEmitter logPostingMediaInjestingWithMediaState:] */

void FUN_105b0ba24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e1e1b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107ca1f1c(*(undefined8 *)(param_1 + 8),puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0ba80; end: 105b0badb; -[SCStoriesGrapheneMetricsEmitter logPostingMediaInjestingResult:] */

void FUN_105b0ba80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e1e1d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107ca1f1c(*(undefined8 *)(param_1 + 8),puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0badc; end: 105b0bb37; -[SCStoriesGrapheneMetricsEmitter logPostingBlackThumbnailWithCause:] */

void FUN_105b0badc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e1e1f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107ca1f1c(*(undefined8 *)(param_1 + 8),puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0bb38; end: 105b0bb93; -[SCStoriesGrapheneMetricsEmitter logPostingSpotlightTileDroppedWithCause:] */

void FUN_105b0bb38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e1e218);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107ca1f1c(*(undefined8 *)(param_1 + 8),puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0bb94; end: 105b0bba7; -[SCStoriesGrapheneMetricsEmitter logPostingThumbnailFetchTimeout] */

/* WARNING: Possible PIC construction at 0x000107ca2514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ca1294) */
/* WARNING: Removing unreachable block (ram,0x000107ca1bfc) */

void FUN_105b0bb94(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  long **pplVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long **pplVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long *plVar12;
  long **pplVar13;
  long *plVar14;
  long **pplVar15;
  undefined8 *unaff_x24;
  undefined8 ****ppppuVar16;
  undefined *puVar17;
  double dVar18;
  double unaff_d8;
  undefined8 unaff_d9;
  long *plStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined1 *puStack_598;
  undefined8 auStack_590 [2];
  char cStack_579;
  long lStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  long **pplStack_560;
  long *plStack_558;
  long **pplStack_550;
  long **pplStack_548;
  undefined8 ***pppuStack_540;
  undefined *puStack_538;
  long alStack_530 [3];
  long *plStack_518;
  long **applStack_510 [2];
  char cStack_4f9;
  long lStack_4f8;
  long **pplStack_4f0;
  long *plStack_4e8;
  long **pplStack_4e0;
  long **pplStack_4d8;
  undefined8 ***pppuStack_4d0;
  undefined *puStack_4c8;
  long *plStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  long **pplStack_470;
  long *plStack_468;
  long **pplStack_460;
  long **pplStack_458;
  undefined8 ***pppuStack_450;
  undefined *puStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  long **pplStack_3f0;
  long *plStack_3e8;
  long **pplStack_3e0;
  long **pplStack_3d8;
  undefined8 ***pppuStack_3d0;
  undefined *puStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  long **pplStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  long **pplStack_358;
  undefined8 ***pppuStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [3];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined8 ***pppuStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_2 + 8);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e1e238;
  puVar9 = (undefined *)0x1;
  puVar10 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar13 = (long **)ppuVar4;
  _objc_retain(&PTR____CFConstantStringClassReference_110e1e238);
  if (lVar2 != 0) {
    plVar14 = *(long **)(lVar2 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e1e238);
    ppuVar3 = ppuVar4;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e1e238);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e1e238);
    func_0x00010002b838(auStack_60,ppuVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pplVar13 = (long **)&UNK_110a02408;
    param_5 = (undefined *)0x1;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar9 = (undefined *)puVar10;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar9 = (undefined *)puVar10;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110e1e238);
  _objc_release(&PTR____CFConstantStringClassReference_110e1e238);
  __Unwind_Resume();
  puVar10 = &uStack_100;
  puStack_88 = &SUB_107ca13a4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar13;
  puVar17 = puVar9;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pplVar13);
  if (ppuVar4 != (undefined **)0x0) {
    plVar14 = (long *)ppuVar4[1];
    _objc_retain(pplVar13);
    if (pplVar13 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar13;
      _objc_retainAutorelease(pplVar13);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar13);
    func_0x00010002b838(auStack_e0,pplVar5);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pplVar5 = (long **)&UNK_110a02458;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar17 = (undefined *)puVar10;
    param_5 = puVar9;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar17 = (undefined *)puVar10;
      param_5 = puVar9;
    }
  }
  pplVar6 = pplVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar13);
  _objc_release(pplVar13);
  __Unwind_Resume();
  puVar10 = &uStack_180;
  puStack_108 = &SUB_107ca1518;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar13 = pplVar5;
  puVar9 = puVar17;
  ppuStack_110 = &puStack_90;
  _objc_retain(pplVar5);
  if (pplVar6 != (long **)0x0) {
    plVar14 = pplVar6[1];
    _objc_retain(pplVar5);
    if (pplVar5 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar5;
      _objc_retainAutorelease(pplVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar5);
    func_0x00010002b838(auStack_160,pplVar13);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    pplVar13 = (long **)&UNK_110a024a8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar9 = (undefined *)puVar10;
    param_5 = puVar17;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar9 = (undefined *)puVar10;
      param_5 = puVar17;
    }
  }
  pplVar6 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar5);
  _objc_release(pplVar5);
  __Unwind_Resume();
  puVar10 = &uStack_200;
  puStack_188 = &LAB_107ca168c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar13;
  puVar17 = puVar9;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(pplVar13);
  if (pplVar6 != (long **)0x0) {
    plVar14 = pplVar6[1];
    _objc_retain(pplVar13);
    if (pplVar13 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar13;
      _objc_retainAutorelease(pplVar13);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar13);
    func_0x00010002b838(auStack_1e0,pplVar5);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    pplVar5 = (long **)&UNK_110a024f8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar17 = (undefined *)puVar10;
    param_5 = puVar9;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar17 = (undefined *)puVar10;
      param_5 = puVar9;
    }
  }
  pplVar6 = pplVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar13);
  _objc_release(pplVar13);
  __Unwind_Resume();
  puVar10 = &uStack_280;
  puStack_208 = &LAB_107ca1800;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar13 = pplVar5;
  puVar9 = puVar17;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(pplVar5);
  if (pplVar6 != (long **)0x0) {
    plVar14 = pplVar6[1];
    _objc_retain(pplVar5);
    if (pplVar5 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar5;
      _objc_retainAutorelease(pplVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar5);
    func_0x00010002b838(auStack_260,pplVar13);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    pplVar13 = (long **)&UNK_110a02548;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar9 = (undefined *)puVar10;
    param_5 = puVar17;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar9 = (undefined *)puVar10;
      param_5 = puVar17;
    }
  }
  pplVar6 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar5);
  _objc_release(pplVar5);
  __Unwind_Resume();
  puVar10 = &uStack_340;
  puStack_288 = &LAB_107ca1974;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar13;
  puVar17 = puVar9;
  pppuStack_290 = &pppuStack_210;
  _objc_retain(pplVar13);
  _objc_retain(puVar9);
  _objc_retain(param_5);
  if (pplVar6 != (long **)0x0) {
    plVar14 = pplVar6[1];
    _objc_retain(pplVar13);
    if (pplVar13 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar13;
      _objc_retainAutorelease(pplVar13);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar13);
    func_0x00010002b838(auStack_320,pplVar5);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar17 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar17 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_308,puVar17);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar17 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar17 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_2f0,puVar17);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_2d8,3);
    pplVar5 = (long **)&UNK_110a02598;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02598,&uStack_340,param_6);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x00010007e5dc(&puStack_328);
    lVar2 = 0;
    puVar17 = (undefined *)puVar10;
    do {
      if ((&cStack_2d9)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
      unaff_x24 = &uStack_340;
    } while (lVar2 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(puVar9);
  pplVar6 = pplVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puVar10 = auStack_320;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar10);
  _objc_release(param_5);
  _objc_release(puVar9);
  _objc_release(pplVar13);
  pplVar7 = pplVar6;
  __Unwind_Resume();
  pplVar15 = &plStack_3c0;
  puStack_348 = &LAB_107ca1c34;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar1 = pplVar5;
  puVar11 = puVar17;
  puStack_380 = unaff_x24;
  puStack_378 = puVar10;
  pplStack_370 = pplVar6;
  puStack_368 = param_5;
  puStack_360 = puVar9;
  pplStack_358 = pplVar13;
  pppuStack_350 = &pppuStack_290;
  _objc_retain(pplVar5);
  plVar14 = (long *)0x0;
  if (pplVar7 != (long **)0x0) {
    plVar14 = pplVar7[1];
    _objc_retain(pplVar5);
    if (pplVar5 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar5;
      _objc_retainAutorelease(pplVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar5);
    puVar10 = auStack_3a0;
    func_0x00010002b838(auStack_3a0,pplVar13);
    plStack_3c0 = (long *)0x0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x00010007e1e8(&plStack_3c0,auStack_3a0,&lStack_388,1);
    pplVar1 = (long **)&UNK_110a025e8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a025e8,&plStack_3c0,puVar17);
    puStack_3a8 = (undefined1 *)&plStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    puVar11 = (undefined *)pplVar15;
    pplVar6 = &plStack_3c0;
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
      puVar11 = (undefined *)pplVar15;
      pplVar6 = &plStack_3c0;
    }
  }
  pplVar13 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar5);
  _objc_release(pplVar5);
  pplVar15 = pplVar13;
  __Unwind_Resume();
  pplVar8 = &plStack_440;
  puStack_3c8 = &LAB_107ca1da8;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = pplVar1;
  puVar9 = puVar11;
  puStack_400 = unaff_x24;
  puStack_3f8 = puVar10;
  pplStack_3f0 = pplVar6;
  plStack_3e8 = plVar14;
  pplStack_3e0 = pplVar13;
  pplStack_3d8 = pplVar5;
  pppuStack_3d0 = &pppuStack_350;
  _objc_retain(pplVar1);
  plVar14 = (long *)0x0;
  if (pplVar15 != (long **)0x0) {
    plVar14 = pplVar15[1];
    _objc_retain(pplVar1);
    if (pplVar1 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar1;
      _objc_retainAutorelease(pplVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar1);
    puVar10 = auStack_420;
    func_0x00010002b838(auStack_420,pplVar13);
    plStack_440 = (long *)0x0;
    uStack_438 = 0;
    uStack_430 = 0;
    func_0x00010007e1e8(&plStack_440,auStack_420,&lStack_408,1);
    pplVar7 = (long **)&UNK_110a02638;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02638,&plStack_440,puVar11);
    puStack_428 = (undefined1 *)&plStack_440;
    func_0x00010007e5dc(&puStack_428);
    puVar9 = (undefined *)pplVar8;
    pplVar6 = &plStack_440;
    if (cStack_409 < '\0') {
      __ZdlPv(auStack_420[0]);
      puVar9 = (undefined *)pplVar8;
      pplVar6 = &plStack_440;
    }
  }
  pplVar13 = pplVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar1);
  _objc_release(pplVar1);
  pplVar15 = pplVar13;
  __Unwind_Resume();
  pplVar8 = &plStack_4c0;
  puStack_448 = &SUB_107ca1f1c;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar7;
  puVar17 = puVar9;
  puStack_480 = unaff_x24;
  puStack_478 = puVar10;
  pplStack_470 = pplVar6;
  plStack_468 = plVar14;
  pplStack_460 = pplVar13;
  pplStack_458 = pplVar1;
  pppuStack_450 = &pppuStack_3d0;
  _objc_retain(pplVar7);
  plVar14 = (long *)0x0;
  if (pplVar15 != (long **)0x0) {
    plVar14 = pplVar15[1];
    _objc_retain(pplVar7);
    if (pplVar7 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar7;
      _objc_retainAutorelease(pplVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar7);
    puVar10 = auStack_4a0;
    func_0x00010002b838(auStack_4a0,pplVar13);
    plStack_4c0 = (long *)0x0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    func_0x00010007e1e8(&plStack_4c0,auStack_4a0,&lStack_488,1);
    pplVar5 = (long **)&UNK_110a02688;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02688,&plStack_4c0,puVar9);
    puStack_4a8 = (undefined1 *)&plStack_4c0;
    func_0x00010007e5dc(&puStack_4a8);
    puVar17 = (undefined *)pplVar8;
    pplVar6 = &plStack_4c0;
    if (cStack_489 < '\0') {
      __ZdlPv(auStack_4a0[0]);
      puVar17 = (undefined *)pplVar8;
      pplVar6 = &plStack_4c0;
    }
  }
  pplVar13 = pplVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar7);
  _objc_release(pplVar7);
  pplVar15 = pplVar13;
  __Unwind_Resume();
  plVar12 = alStack_530;
  puStack_4c8 = &LAB_107ca2090;
  lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar1 = (long **)0x0;
  pplStack_4f0 = pplVar6;
  plStack_4e8 = plVar14;
  pplStack_4e0 = pplVar13;
  pplStack_4d8 = pplVar7;
  pppuStack_4d0 = &pppuStack_450;
  if (pplVar15 != (long **)0x0) {
    pplVar13 = (long **)pplVar15[1];
    puVar9 = &UNK_10f44f9bb;
    if ((int)pplVar5 == 0) {
      puVar9 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(applStack_510,puVar9);
    alStack_530[0] = 0;
    alStack_530[1] = 0;
    alStack_530[2] = 0;
    func_0x00010007e1e8(alStack_530,applStack_510,&lStack_4f8,1);
    pplVar5 = (long **)&UNK_110a026d8;
    (*(code *)(*pplVar13)[3])(pplVar13,&UNK_110a026d8,alStack_530,puVar17);
    pplVar1 = &plStack_518;
    plStack_518 = alStack_530;
    func_0x00010007e5dc();
    puVar17 = (undefined *)plVar12;
    plVar14 = alStack_530;
    if (cStack_4f9 < '\0') {
      pplVar1 = applStack_510[0];
      __ZdlPv();
      puVar17 = (undefined *)plVar12;
      plVar14 = alStack_530;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4f8) {
    return;
  }
  ___stack_chk_fail();
  plStack_518 = plVar14;
  func_0x00010007e5dc(&plStack_518);
  if (cStack_4f9 < '\0') {
    __ZdlPv(applStack_510[0]);
  }
  pplVar15 = pplVar1;
  __Unwind_Resume();
  pplVar8 = &plStack_5b0;
  puStack_538 = &SUB_107ca21a8;
  ppppuVar16 = &pppuStack_540;
  lStack_578 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = pplVar5;
  puVar9 = puVar17;
  puStack_570 = unaff_x24;
  puStack_568 = puVar10;
  pplStack_560 = pplVar6;
  plStack_558 = plVar14;
  pplStack_550 = pplVar13;
  pplStack_548 = pplVar1;
  pppuStack_540 = &pppuStack_4d0;
  _objc_retain(pplVar5);
  if (pplVar15 != (long **)0x0) {
    plVar14 = pplVar15[1];
    pplVar7 = (long **)&UNK_110a02728;
    (**(code **)(*plVar14 + 0x28))();
    if ((int)plVar14 != 0) {
      pplVar15 = (long **)pplVar15[1];
      _objc_retain(pplVar5);
      if (pplVar5 == (long **)0x0) {
        pplVar13 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar13 = pplVar5;
        _objc_retainAutorelease(pplVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar5);
      puVar10 = auStack_590;
      func_0x00010002b838(auStack_590,pplVar13);
      plStack_5b0 = (long *)0x0;
      uStack_5a8 = 0;
      uStack_5a0 = 0;
      func_0x00010007e1e8(&plStack_5b0,auStack_590,&lStack_578,1);
      pplVar7 = (long **)&UNK_110a02728;
      (*(code *)(*pplVar15)[3])(pplVar15,&UNK_110a02728,&plStack_5b0,(long)puVar17 * 10);
      puStack_598 = (undefined1 *)&plStack_5b0;
      func_0x00010007e5dc(&puStack_598);
      puVar9 = (undefined *)pplVar8;
      pplVar6 = &plStack_5b0;
      if (cStack_579 < '\0') {
        __ZdlPv(auStack_590[0]);
        puVar9 = (undefined *)pplVar8;
        pplVar6 = &plStack_5b0;
      }
    }
  }
  pplVar13 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_578) {
    ___stack_chk_fail();
    _objc_release(pplVar5);
    _objc_release(pplVar5);
    puVar17 = &UNK_107ca2340;
    pplVar8 = pplVar13;
    __Unwind_Resume();
    pplVar1 = &plStack_5b0;
    while( true ) {
      *(undefined8 **)((long)pplVar1 + -0x40) = unaff_x24;
      *(undefined8 **)((long)pplVar1 + -0x38) = puVar10;
      *(long ***)((long)pplVar1 + -0x30) = pplVar6;
      *(long ***)((long)pplVar1 + -0x28) = pplVar15;
      *(long ***)((long)pplVar1 + -0x20) = pplVar13;
      *(long ***)((long)pplVar1 + -0x18) = pplVar5;
      *(undefined8 *****)((long)pplVar1 + -0x10) = ppppuVar16;
      *(undefined **)((long)pplVar1 + -8) = puVar17;
      *(undefined8 *)((long)pplVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      pplVar5 = pplVar7;
      _objc_retain(pplVar7);
      pplVar15 = pplVar8;
      dVar18 = param_1;
      if (pplVar8 != (long **)0x0) {
        plVar14 = pplVar8[1];
        pplVar5 = (long **)&UNK_110a02778;
        (**(code **)(*plVar14 + 0x28))();
        dVar18 = param_1;
        if ((int)plVar14 != 0) {
          pplVar15 = (long **)pplVar8[1];
          _objc_retain(pplVar7);
          if (pplVar7 == (long **)0x0) {
            pplVar13 = (long **)&UNK_10f44f7d9;
            dVar18 = param_1;
          }
          else {
            pplVar13 = pplVar7;
            _objc_retainAutorelease(pplVar7);
            func_0x00010bdc3520();
            dVar18 = param_1;
          }
          _objc_release(pplVar7);
          puVar10 = (undefined8 *)((long)pplVar1 + -0x60);
          func_0x00010002b838((undefined1 *)((long)pplVar1 + -0x60),pplVar13);
          *(undefined8 *)((long)pplVar1 + -0x80) = 0;
          *(undefined8 *)((long)pplVar1 + -0x78) = 0;
          *(undefined8 *)((long)pplVar1 + -0x70) = 0;
          func_0x00010007e1e8((undefined1 *)((long)pplVar1 + -0x80),
                              (undefined1 *)((long)pplVar1 + -0x60),
                              (undefined1 *)((long)pplVar1 + -0x48),1);
          pplVar5 = (long **)&UNK_110a02778;
          (*(code *)(*pplVar15)[3])
                    (pplVar15,&UNK_110a02778,(undefined1 *)((long)pplVar1 + -0x80),puVar9);
          *(undefined1 **)((long)pplVar1 + -0x68) = (undefined1 *)((long)pplVar1 + -0x80);
          func_0x00010007e5dc((undefined1 *)((long)pplVar1 + -0x68));
          pplVar6 = (long **)((long)pplVar1 + -0x80);
          if (*(char *)((long)pplVar1 + -0x49) < '\0') {
            __ZdlPv(*(undefined8 *)((long)pplVar1 + -0x60));
            pplVar6 = (long **)((long)pplVar1 + -0x80);
          }
        }
      }
      pplVar13 = pplVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pplVar1 + -0x48)) break;
      ___stack_chk_fail();
      _objc_release(pplVar7);
      _objc_release(pplVar7);
      pplVar8 = pplVar13;
      __Unwind_Resume();
      *(undefined8 *)((long)pplVar1 + -0xb0) = unaff_d9;
      *(double *)((long)pplVar1 + -0xa8) = unaff_d8;
      *(long ***)((long)pplVar1 + -0xa0) = pplVar13;
      *(long ***)((long)pplVar1 + -0x98) = pplVar7;
      *(undefined1 **)((long)pplVar1 + -0x90) = (undefined1 *)((long)pplVar1 + -0x10);
      *(undefined **)((long)pplVar1 + -0x88) = &SUB_107ca24d4;
      ppppuVar16 = (undefined8 ****)((long)pplVar1 + -0x90);
      _objc_retain(pplVar5);
      if (pplVar8 == (long **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(pplVar5);
        return;
      }
      param_1 = dVar18 * 1000.0;
      puVar9 = (undefined *)(long)param_1;
      puVar17 = &UNK_107ca2518;
      pplVar1 = (long **)((long)pplVar1 + -0xb0);
      pplVar7 = pplVar5;
      pplVar13 = pplVar8;
      unaff_d8 = dVar18;
    }
    return;
  }
  return;
}



/* Entry: 105b0bba8; end: 105b0bbbb; -[SCStoriesGrapheneMetricsEmitter logPostingMissingLocale] */

/* WARNING: Possible PIC construction at 0x000107ca2514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ca157c) */
/* WARNING: Removing unreachable block (ram,0x000107ca1bfc) */

void FUN_105b0bba8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  long **pplVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long **pplVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long *plVar12;
  long **pplVar13;
  long *plVar14;
  long **pplVar15;
  undefined8 *unaff_x24;
  undefined8 ****ppppuVar16;
  undefined *puVar17;
  double dVar18;
  double unaff_d8;
  undefined8 unaff_d9;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined1 *puStack_498;
  undefined8 auStack_490 [2];
  char cStack_479;
  long lStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  long **pplStack_460;
  long *plStack_458;
  long **pplStack_450;
  long **pplStack_448;
  undefined8 ***pppuStack_440;
  undefined *puStack_438;
  long alStack_430 [3];
  long *plStack_418;
  long **applStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  long **pplStack_3f0;
  long *plStack_3e8;
  long **pplStack_3e0;
  long **pplStack_3d8;
  undefined8 ***pppuStack_3d0;
  undefined *puStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  long **pplStack_370;
  long *plStack_368;
  long **pplStack_360;
  long **pplStack_358;
  undefined8 ***pppuStack_350;
  undefined *puStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  long **pplStack_2f0;
  long *plStack_2e8;
  long **pplStack_2e0;
  long **pplStack_2d8;
  undefined8 ***pppuStack_2d0;
  undefined *puStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  long **pplStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  long **pplStack_258;
  undefined8 ***pppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 ***pppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_2 + 8);
  ppuVar4 = &PTR____CFConstantStringClassReference_110db8558;
  puVar9 = (undefined *)0x1;
  puVar10 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar13 = (long **)ppuVar4;
  _objc_retain(&PTR____CFConstantStringClassReference_110db8558);
  if (lVar2 != 0) {
    plVar14 = *(long **)(lVar2 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110db8558);
    ppuVar3 = ppuVar4;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110db8558);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110db8558);
    func_0x00010002b838(auStack_60,ppuVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pplVar13 = (long **)&UNK_110a024a8;
    param_5 = (undefined *)0x1;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar9 = (undefined *)puVar10;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar9 = (undefined *)puVar10;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110db8558);
  _objc_release(&PTR____CFConstantStringClassReference_110db8558);
  __Unwind_Resume();
  puVar10 = &uStack_100;
  puStack_88 = &LAB_107ca168c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar13;
  puVar17 = puVar9;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pplVar13);
  if (ppuVar4 != (undefined **)0x0) {
    plVar14 = (long *)ppuVar4[1];
    _objc_retain(pplVar13);
    if (pplVar13 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar13;
      _objc_retainAutorelease(pplVar13);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar13);
    func_0x00010002b838(auStack_e0,pplVar5);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pplVar5 = (long **)&UNK_110a024f8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar17 = (undefined *)puVar10;
    param_5 = puVar9;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar17 = (undefined *)puVar10;
      param_5 = puVar9;
    }
  }
  pplVar6 = pplVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar13);
  _objc_release(pplVar13);
  __Unwind_Resume();
  puVar10 = &uStack_180;
  puStack_108 = &LAB_107ca1800;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar13 = pplVar5;
  puVar9 = puVar17;
  ppuStack_110 = &puStack_90;
  _objc_retain(pplVar5);
  if (pplVar6 != (long **)0x0) {
    plVar14 = pplVar6[1];
    _objc_retain(pplVar5);
    if (pplVar5 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar5;
      _objc_retainAutorelease(pplVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar5);
    func_0x00010002b838(auStack_160,pplVar13);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    pplVar13 = (long **)&UNK_110a02548;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar9 = (undefined *)puVar10;
    param_5 = puVar17;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar9 = (undefined *)puVar10;
      param_5 = puVar17;
    }
  }
  pplVar6 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar5);
  _objc_release(pplVar5);
  __Unwind_Resume();
  puVar10 = &uStack_240;
  puStack_188 = &LAB_107ca1974;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar13;
  puVar17 = puVar9;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(pplVar13);
  _objc_retain(puVar9);
  _objc_retain(param_5);
  if (pplVar6 != (long **)0x0) {
    plVar14 = pplVar6[1];
    _objc_retain(pplVar13);
    if (pplVar13 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar13;
      _objc_retainAutorelease(pplVar13);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar13);
    func_0x00010002b838(auStack_220,pplVar5);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar17 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar17 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_208,puVar17);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar17 = &UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar17 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_1f0,puVar17);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
    pplVar5 = (long **)&UNK_110a02598;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02598,&uStack_240,param_6);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar2 = 0;
    puVar17 = (undefined *)puVar10;
    do {
      if ((&cStack_1d9)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
      unaff_x24 = &uStack_240;
    } while (lVar2 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(puVar9);
  pplVar6 = pplVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puVar10 = auStack_220;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar10);
  _objc_release(param_5);
  _objc_release(puVar9);
  _objc_release(pplVar13);
  pplVar7 = pplVar6;
  __Unwind_Resume();
  pplVar15 = &plStack_2c0;
  puStack_248 = &LAB_107ca1c34;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar1 = pplVar5;
  puVar11 = puVar17;
  puStack_280 = unaff_x24;
  puStack_278 = puVar10;
  pplStack_270 = pplVar6;
  puStack_268 = param_5;
  puStack_260 = puVar9;
  pplStack_258 = pplVar13;
  pppuStack_250 = &pppuStack_190;
  _objc_retain(pplVar5);
  plVar14 = (long *)0x0;
  if (pplVar7 != (long **)0x0) {
    plVar14 = pplVar7[1];
    _objc_retain(pplVar5);
    if (pplVar5 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar5;
      _objc_retainAutorelease(pplVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar5);
    puVar10 = auStack_2a0;
    func_0x00010002b838(auStack_2a0,pplVar13);
    plStack_2c0 = (long *)0x0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&plStack_2c0,auStack_2a0,&lStack_288,1);
    pplVar1 = (long **)&UNK_110a025e8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a025e8,&plStack_2c0,puVar17);
    puStack_2a8 = (undefined1 *)&plStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    puVar11 = (undefined *)pplVar15;
    pplVar6 = &plStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar11 = (undefined *)pplVar15;
      pplVar6 = &plStack_2c0;
    }
  }
  pplVar13 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar5);
  _objc_release(pplVar5);
  pplVar15 = pplVar13;
  __Unwind_Resume();
  pplVar8 = &plStack_340;
  puStack_2c8 = &LAB_107ca1da8;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = pplVar1;
  puVar9 = puVar11;
  puStack_300 = unaff_x24;
  puStack_2f8 = puVar10;
  pplStack_2f0 = pplVar6;
  plStack_2e8 = plVar14;
  pplStack_2e0 = pplVar13;
  pplStack_2d8 = pplVar5;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(pplVar1);
  plVar14 = (long *)0x0;
  if (pplVar15 != (long **)0x0) {
    plVar14 = pplVar15[1];
    _objc_retain(pplVar1);
    if (pplVar1 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar1;
      _objc_retainAutorelease(pplVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar1);
    puVar10 = auStack_320;
    func_0x00010002b838(auStack_320,pplVar13);
    plStack_340 = (long *)0x0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&plStack_340,auStack_320,&lStack_308,1);
    pplVar7 = (long **)&UNK_110a02638;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02638,&plStack_340,puVar11);
    puStack_328 = (undefined1 *)&plStack_340;
    func_0x00010007e5dc(&puStack_328);
    puVar9 = (undefined *)pplVar8;
    pplVar6 = &plStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar9 = (undefined *)pplVar8;
      pplVar6 = &plStack_340;
    }
  }
  pplVar13 = pplVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar1);
  _objc_release(pplVar1);
  pplVar15 = pplVar13;
  __Unwind_Resume();
  pplVar8 = &plStack_3c0;
  puStack_348 = &SUB_107ca1f1c;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = pplVar7;
  puVar17 = puVar9;
  puStack_380 = unaff_x24;
  puStack_378 = puVar10;
  pplStack_370 = pplVar6;
  plStack_368 = plVar14;
  pplStack_360 = pplVar13;
  pplStack_358 = pplVar1;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(pplVar7);
  plVar14 = (long *)0x0;
  if (pplVar15 != (long **)0x0) {
    plVar14 = pplVar15[1];
    _objc_retain(pplVar7);
    if (pplVar7 == (long **)0x0) {
      pplVar13 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar13 = pplVar7;
      _objc_retainAutorelease(pplVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar7);
    puVar10 = auStack_3a0;
    func_0x00010002b838(auStack_3a0,pplVar13);
    plStack_3c0 = (long *)0x0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x00010007e1e8(&plStack_3c0,auStack_3a0,&lStack_388,1);
    pplVar5 = (long **)&UNK_110a02688;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a02688,&plStack_3c0,puVar9);
    puStack_3a8 = (undefined1 *)&plStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    puVar17 = (undefined *)pplVar8;
    pplVar6 = &plStack_3c0;
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
      puVar17 = (undefined *)pplVar8;
      pplVar6 = &plStack_3c0;
    }
  }
  pplVar13 = pplVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pplVar7);
  _objc_release(pplVar7);
  pplVar15 = pplVar13;
  __Unwind_Resume();
  plVar12 = alStack_430;
  puStack_3c8 = &LAB_107ca2090;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar1 = (long **)0x0;
  pplStack_3f0 = pplVar6;
  plStack_3e8 = plVar14;
  pplStack_3e0 = pplVar13;
  pplStack_3d8 = pplVar7;
  pppuStack_3d0 = &pppuStack_350;
  if (pplVar15 != (long **)0x0) {
    pplVar13 = (long **)pplVar15[1];
    puVar9 = &UNK_10f44f9bb;
    if ((int)pplVar5 == 0) {
      puVar9 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(applStack_410,puVar9);
    alStack_430[0] = 0;
    alStack_430[1] = 0;
    alStack_430[2] = 0;
    func_0x00010007e1e8(alStack_430,applStack_410,&lStack_3f8,1);
    pplVar5 = (long **)&UNK_110a026d8;
    (*(code *)(*pplVar13)[3])(pplVar13,&UNK_110a026d8,alStack_430,puVar17);
    pplVar1 = &plStack_418;
    plStack_418 = alStack_430;
    func_0x00010007e5dc();
    puVar17 = (undefined *)plVar12;
    plVar14 = alStack_430;
    if (cStack_3f9 < '\0') {
      pplVar1 = applStack_410[0];
      __ZdlPv();
      puVar17 = (undefined *)plVar12;
      plVar14 = alStack_430;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return;
  }
  ___stack_chk_fail();
  plStack_418 = plVar14;
  func_0x00010007e5dc(&plStack_418);
  if (cStack_3f9 < '\0') {
    __ZdlPv(applStack_410[0]);
  }
  pplVar15 = pplVar1;
  __Unwind_Resume();
  pplVar8 = &plStack_4b0;
  puStack_438 = &SUB_107ca21a8;
  ppppuVar16 = &pppuStack_440;
  lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = pplVar5;
  puVar9 = puVar17;
  puStack_470 = unaff_x24;
  puStack_468 = puVar10;
  pplStack_460 = pplVar6;
  plStack_458 = plVar14;
  pplStack_450 = pplVar13;
  pplStack_448 = pplVar1;
  pppuStack_440 = &pppuStack_3d0;
  _objc_retain(pplVar5);
  if (pplVar15 != (long **)0x0) {
    plVar14 = pplVar15[1];
    pplVar7 = (long **)&UNK_110a02728;
    (**(code **)(*plVar14 + 0x28))();
    if ((int)plVar14 != 0) {
      pplVar15 = (long **)pplVar15[1];
      _objc_retain(pplVar5);
      if (pplVar5 == (long **)0x0) {
        pplVar13 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar13 = pplVar5;
        _objc_retainAutorelease(pplVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar5);
      puVar10 = auStack_490;
      func_0x00010002b838(auStack_490,pplVar13);
      plStack_4b0 = (long *)0x0;
      uStack_4a8 = 0;
      uStack_4a0 = 0;
      func_0x00010007e1e8(&plStack_4b0,auStack_490,&lStack_478,1);
      pplVar7 = (long **)&UNK_110a02728;
      (*(code *)(*pplVar15)[3])(pplVar15,&UNK_110a02728,&plStack_4b0,(long)puVar17 * 10);
      puStack_498 = (undefined1 *)&plStack_4b0;
      func_0x00010007e5dc(&puStack_498);
      puVar9 = (undefined *)pplVar8;
      pplVar6 = &plStack_4b0;
      if (cStack_479 < '\0') {
        __ZdlPv(auStack_490[0]);
        puVar9 = (undefined *)pplVar8;
        pplVar6 = &plStack_4b0;
      }
    }
  }
  pplVar13 = pplVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_478) {
    ___stack_chk_fail();
    _objc_release(pplVar5);
    _objc_release(pplVar5);
    puVar17 = &UNK_107ca2340;
    pplVar8 = pplVar13;
    __Unwind_Resume();
    pplVar1 = &plStack_4b0;
    while( true ) {
      *(undefined8 **)((long)pplVar1 + -0x40) = unaff_x24;
      *(undefined8 **)((long)pplVar1 + -0x38) = puVar10;
      *(long ***)((long)pplVar1 + -0x30) = pplVar6;
      *(long ***)((long)pplVar1 + -0x28) = pplVar15;
      *(long ***)((long)pplVar1 + -0x20) = pplVar13;
      *(long ***)((long)pplVar1 + -0x18) = pplVar5;
      *(undefined8 *****)((long)pplVar1 + -0x10) = ppppuVar16;
      *(undefined **)((long)pplVar1 + -8) = puVar17;
      *(undefined8 *)((long)pplVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      pplVar5 = pplVar7;
      _objc_retain(pplVar7);
      pplVar15 = pplVar8;
      dVar18 = param_1;
      if (pplVar8 != (long **)0x0) {
        plVar14 = pplVar8[1];
        pplVar5 = (long **)&UNK_110a02778;
        (**(code **)(*plVar14 + 0x28))();
        dVar18 = param_1;
        if ((int)plVar14 != 0) {
          pplVar15 = (long **)pplVar8[1];
          _objc_retain(pplVar7);
          if (pplVar7 == (long **)0x0) {
            pplVar13 = (long **)&UNK_10f44f7d9;
            dVar18 = param_1;
          }
          else {
            pplVar13 = pplVar7;
            _objc_retainAutorelease(pplVar7);
            func_0x00010bdc3520();
            dVar18 = param_1;
          }
          _objc_release(pplVar7);
          puVar10 = (undefined8 *)((long)pplVar1 + -0x60);
          func_0x00010002b838((undefined1 *)((long)pplVar1 + -0x60),pplVar13);
          *(undefined8 *)((long)pplVar1 + -0x80) = 0;
          *(undefined8 *)((long)pplVar1 + -0x78) = 0;
          *(undefined8 *)((long)pplVar1 + -0x70) = 0;
          func_0x00010007e1e8((undefined1 *)((long)pplVar1 + -0x80),
                              (undefined1 *)((long)pplVar1 + -0x60),
                              (undefined1 *)((long)pplVar1 + -0x48),1);
          pplVar5 = (long **)&UNK_110a02778;
          (*(code *)(*pplVar15)[3])
                    (pplVar15,&UNK_110a02778,(undefined1 *)((long)pplVar1 + -0x80),puVar9);
          *(undefined1 **)((long)pplVar1 + -0x68) = (undefined1 *)((long)pplVar1 + -0x80);
          func_0x00010007e5dc((undefined1 *)((long)pplVar1 + -0x68));
          pplVar6 = (long **)((long)pplVar1 + -0x80);
          if (*(char *)((long)pplVar1 + -0x49) < '\0') {
            __ZdlPv(*(undefined8 *)((long)pplVar1 + -0x60));
            pplVar6 = (long **)((long)pplVar1 + -0x80);
          }
        }
      }
      pplVar13 = pplVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pplVar1 + -0x48)) break;
      ___stack_chk_fail();
      _objc_release(pplVar7);
      _objc_release(pplVar7);
      pplVar8 = pplVar13;
      __Unwind_Resume();
      *(undefined8 *)((long)pplVar1 + -0xb0) = unaff_d9;
      *(double *)((long)pplVar1 + -0xa8) = unaff_d8;
      *(long ***)((long)pplVar1 + -0xa0) = pplVar13;
      *(long ***)((long)pplVar1 + -0x98) = pplVar7;
      *(undefined1 **)((long)pplVar1 + -0x90) = (undefined1 *)((long)pplVar1 + -0x10);
      *(undefined **)((long)pplVar1 + -0x88) = &SUB_107ca24d4;
      ppppuVar16 = (undefined8 ****)((long)pplVar1 + -0x90);
      _objc_retain(pplVar5);
      if (pplVar8 == (long **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(pplVar5);
        return;
      }
      param_1 = dVar18 * 1000.0;
      puVar9 = (undefined *)(long)param_1;
      puVar17 = &UNK_107ca2518;
      pplVar1 = (long **)((long)pplVar1 + -0xb0);
      pplVar7 = pplVar5;
      pplVar13 = pplVar8;
      unaff_d8 = dVar18;
    }
    return;
  }
  return;
}



/* Entry: 105b0bbbc; end: 105b0bbf7; -[SCStoriesGrapheneMetricsEmitter logMissingSummaryInfo:] */

/* WARNING: Possible PIC construction at 0x000105b0bbdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107ca8610: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105b0bbe0) */
/* WARNING: Removing unreachable block (ram,0x000107ca54f0) */
/* WARNING: Removing unreachable block (ram,0x000107ca5530) */
/* WARNING: Removing unreachable block (ram,0x000107ca5554) */
/* WARNING: Removing unreachable block (ram,0x000107ca5540) */
/* WARNING: Removing unreachable block (ram,0x000107ca555c) */
/* WARNING: Removing unreachable block (ram,0x000107ca55c8) */
/* WARNING: Removing unreachable block (ram,0x000107ca55d0) */
/* WARNING: Removing unreachable block (ram,0x000107ca5608) */
/* WARNING: Removing unreachable block (ram,0x000107ca564c) */
/* WARNING: Removing unreachable block (ram,0x000107ca565c) */
/* WARNING: Removing unreachable block (ram,0x000107ca55f0) */
/* WARNING: Removing unreachable block (ram,0x000107ca56c8) */

void FUN_105b0bbbc(double param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 ****ppppuVar15;
  undefined *puVar16;
  double dVar17;
  double unaff_d8;
  undefined8 unaff_d9;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined1 *puStack_ee8;
  undefined8 auStack_ee0 [2];
  char cStack_ec9;
  long lStack_ec8;
  undefined8 *puStack_ec0;
  undefined8 *puStack_eb8;
  undefined8 *puStack_eb0;
  undefined **ppuStack_ea8;
  undefined **ppuStack_ea0;
  undefined **ppuStack_e98;
  undefined8 ***pppuStack_e90;
  undefined *puStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined1 *puStack_e68;
  undefined8 auStack_e60 [2];
  char cStack_e49;
  long lStack_e48;
  undefined8 *puStack_e40;
  undefined8 *puStack_e38;
  undefined8 *puStack_e30;
  undefined **ppuStack_e28;
  undefined **ppuStack_e20;
  undefined **ppuStack_e18;
  undefined8 ***pppuStack_e10;
  undefined *puStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined1 *puStack_de8;
  undefined8 auStack_de0 [2];
  char cStack_dc9;
  long lStack_dc8;
  undefined8 *puStack_dc0;
  undefined8 *puStack_db8;
  undefined8 *puStack_db0;
  undefined **ppuStack_da8;
  undefined **ppuStack_da0;
  undefined **ppuStack_d98;
  undefined8 ***pppuStack_d90;
  undefined *puStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined1 *puStack_d68;
  undefined8 auStack_d60 [2];
  char cStack_d49;
  long lStack_d48;
  undefined8 *puStack_d40;
  undefined8 *puStack_d38;
  undefined8 *puStack_d30;
  undefined **ppuStack_d28;
  undefined **ppuStack_d20;
  undefined **ppuStack_d18;
  undefined8 ***pppuStack_d10;
  undefined *puStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined1 *puStack_ce8;
  undefined8 auStack_ce0 [2];
  char cStack_cc9;
  long lStack_cc8;
  undefined8 *puStack_cc0;
  undefined8 *puStack_cb8;
  undefined8 *puStack_cb0;
  undefined **ppuStack_ca8;
  undefined **ppuStack_ca0;
  undefined **ppuStack_c98;
  undefined8 ***pppuStack_c90;
  undefined *puStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined1 *puStack_c68;
  undefined8 auStack_c60 [2];
  char cStack_c49;
  long lStack_c48;
  undefined8 *puStack_c40;
  undefined8 *puStack_c38;
  undefined8 *puStack_c30;
  undefined **ppuStack_c28;
  undefined **ppuStack_c20;
  undefined **ppuStack_c18;
  undefined8 ***pppuStack_c10;
  undefined *puStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined1 *puStack_be8;
  undefined8 auStack_be0 [2];
  char cStack_bc9;
  long lStack_bc8;
  undefined8 *puStack_bc0;
  undefined8 *puStack_bb8;
  undefined8 *puStack_bb0;
  long *plStack_ba8;
  undefined **ppuStack_ba0;
  undefined **ppuStack_b98;
  undefined8 ***pppuStack_b90;
  undefined *puStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined1 *puStack_b68;
  undefined8 auStack_b60 [2];
  char cStack_b49;
  long lStack_b48;
  undefined8 *puStack_b40;
  undefined8 *puStack_b38;
  undefined8 *puStack_b30;
  long *plStack_b28;
  undefined **ppuStack_b20;
  undefined **ppuStack_b18;
  undefined8 ***pppuStack_b10;
  undefined *puStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined1 *puStack_ae8;
  undefined8 auStack_ae0 [2];
  char cStack_ac9;
  long lStack_ac8;
  undefined8 *puStack_ac0;
  undefined8 *puStack_ab8;
  undefined8 *puStack_ab0;
  long *plStack_aa8;
  undefined **ppuStack_aa0;
  undefined **ppuStack_a98;
  undefined8 ***pppuStack_a90;
  undefined *puStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined1 *puStack_a68;
  undefined8 auStack_a60 [2];
  char cStack_a49;
  long lStack_a48;
  undefined8 *puStack_a40;
  undefined8 *puStack_a38;
  undefined8 *puStack_a30;
  long *plStack_a28;
  undefined **ppuStack_a20;
  undefined **ppuStack_a18;
  undefined8 ***pppuStack_a10;
  undefined *puStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined1 *puStack_9e8;
  undefined8 auStack_9e0 [2];
  char cStack_9c9;
  long lStack_9c8;
  undefined8 *puStack_9c0;
  undefined8 *puStack_9b8;
  undefined8 *puStack_9b0;
  undefined **ppuStack_9a8;
  undefined8 *puStack_9a0;
  undefined **ppuStack_998;
  undefined8 ***pppuStack_990;
  undefined *puStack_988;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 *puStack_960;
  undefined8 auStack_958 [2];
  char cStack_941;
  undefined8 auStack_940 [2];
  char cStack_929;
  long lStack_928;
  undefined8 *puStack_920;
  undefined8 *puStack_918;
  undefined8 *puStack_910;
  undefined **ppuStack_908;
  undefined8 *puStack_900;
  undefined **ppuStack_8f8;
  undefined8 ***pppuStack_8f0;
  undefined *puStack_8e8;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 *puStack_8c0;
  undefined8 auStack_8b8 [2];
  char cStack_8a1;
  undefined8 auStack_8a0 [2];
  char cStack_889;
  long lStack_888;
  undefined8 *puStack_880;
  undefined8 *puStack_878;
  undefined8 *puStack_870;
  undefined **ppuStack_868;
  undefined **ppuStack_860;
  undefined **ppuStack_858;
  undefined8 ***pppuStack_850;
  undefined *puStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined1 *puStack_828;
  undefined8 auStack_820 [2];
  char cStack_809;
  long lStack_808;
  undefined8 *puStack_800;
  undefined8 *puStack_7f8;
  undefined8 *puStack_7f0;
  undefined **ppuStack_7e8;
  undefined **ppuStack_7e0;
  undefined **ppuStack_7d8;
  undefined8 ***pppuStack_7d0;
  undefined *puStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined1 *puStack_7a8;
  undefined8 auStack_7a0 [2];
  char cStack_789;
  long lStack_788;
  undefined8 *puStack_780;
  undefined8 *puStack_778;
  undefined8 *puStack_770;
  long *plStack_768;
  undefined **ppuStack_760;
  undefined **ppuStack_758;
  undefined8 ***pppuStack_750;
  undefined *puStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined1 *puStack_728;
  undefined8 auStack_720 [2];
  char cStack_709;
  long lStack_708;
  undefined8 *puStack_700;
  undefined8 *puStack_6f8;
  undefined8 *puStack_6f0;
  long *plStack_6e8;
  undefined **ppuStack_6e0;
  undefined **ppuStack_6d8;
  undefined8 ***pppuStack_6d0;
  undefined *puStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined1 *puStack_6a8;
  undefined8 auStack_6a0 [2];
  char cStack_689;
  long lStack_688;
  undefined8 *puStack_680;
  undefined8 *puStack_678;
  undefined8 *puStack_670;
  long *plStack_668;
  undefined **ppuStack_660;
  undefined **ppuStack_658;
  undefined8 ***pppuStack_650;
  undefined *puStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined1 *puStack_628;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 *puStack_5f0;
  long *plStack_5e8;
  undefined **ppuStack_5e0;
  undefined **ppuStack_5d8;
  undefined8 ***pppuStack_5d0;
  undefined *puStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined1 *puStack_5a8;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  undefined **ppuStack_568;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  undefined8 ***pppuStack_550;
  undefined *puStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined **ppuStack_4d8;
  undefined8 ***pppuStack_4d0;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  long *plStack_468;
  undefined **ppuStack_460;
  undefined **ppuStack_458;
  undefined8 ***pppuStack_450;
  undefined *puStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  long *plStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined8 ***pppuStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined8 ***pppuStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined8 ***pppuStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined8 ***pppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined **ppuStack_168;
  undefined8 *puStack_160;
  undefined **ppuStack_158;
  undefined1 ***pppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &stack0xfffffffffffffff0;
  lVar2 = *(long *)(param_2 + 8);
  ppuVar4 = &PTR____CFConstantStringClassReference_110df2578;
  puVar1 = &uStack_a0;
  uStack_28 = 0x105b0bbe0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar4;
  puVar5 = param_4;
  _objc_retain(&PTR____CFConstantStringClassReference_110df2578);
  if (lVar2 != 0) {
    plVar12 = *(long **)(lVar2 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110df2578);
    ppuVar3 = ppuVar4;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110df2578);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110df2578);
    unaff_x23 = auStack_80;
    func_0x00010002b838(auStack_80,ppuVar3);
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    func_0x00010007e1e8(&uStack_a0,auStack_80,&lStack_68,1);
    ppuVar3 = (undefined **)&UNK_110a030d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a030d8,&uStack_a0,param_4);
    puStack_88 = (undefined1 *)&uStack_a0;
    func_0x00010007e5dc(&puStack_88);
    puVar5 = puVar1;
    param_5 = param_4;
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
      puVar5 = puVar1;
      param_5 = param_4;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110df2578);
  _objc_release(&PTR____CFConstantStringClassReference_110df2578);
  __Unwind_Resume();
  puStack_a8 = &LAB_107ca57d8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar1 = puVar5;
  puVar11 = param_5;
  ppuStack_b0 = &puStack_30;
  _objc_retain(ppuVar3);
  _objc_retain(puVar5);
  puVar10 = (undefined8 *)0x0;
  if (ppuVar4 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar4[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,ppuVar4);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar1 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_100,puVar1);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    ppuVar7 = (undefined **)&UNK_110a03128;
    unaff_x23 = &uStack_138;
    puVar1 = &uStack_138;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03128,puVar1,param_5);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar2 = 0;
    puVar10 = auStack_118;
    puVar11 = param_5;
    do {
      if ((&cStack_e9)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(puVar5);
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar5);
  _objc_release(ppuVar3);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar9 = &uStack_1c0;
  puStack_148 = &LAB_107ca5a08;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  puVar8 = puVar1;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar10;
  ppuStack_168 = ppuVar4;
  puStack_160 = puVar5;
  ppuStack_158 = ppuVar3;
  pppuStack_150 = &ppuStack_b0;
  _objc_retain(ppuVar7);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar7;
      _objc_retainAutorelease(ppuVar7);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar7);
    unaff_x23 = auStack_1a0;
    func_0x00010002b838(auStack_1a0,ppuVar4);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    ppuVar6 = (undefined **)&UNK_110a03178;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03178,&uStack_1c0,puVar1);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    puVar8 = puVar9;
    puVar11 = puVar1;
    puVar10 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar8 = puVar9;
      puVar11 = puVar1;
      puVar10 = &uStack_1c0;
    }
  }
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar1 = &uStack_240;
  puStack_1c8 = &SUB_107ca5b7c;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar5 = puVar8;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar10;
  plStack_1e8 = plVar12;
  ppuStack_1e0 = ppuVar4;
  ppuStack_1d8 = ppuVar7;
  pppuStack_1d0 = &pppuStack_150;
  _objc_retain(ppuVar6);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    unaff_x23 = auStack_220;
    func_0x00010002b838(auStack_220,ppuVar4);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_208,1);
    ppuVar3 = (undefined **)&UNK_110a031c8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a031c8,&uStack_240,puVar8);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    puVar5 = puVar1;
    puVar11 = puVar8;
    puVar10 = &uStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar5 = puVar1;
      puVar11 = puVar8;
      puVar10 = &uStack_240;
    }
  }
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_2c0;
  puStack_248 = &LAB_107ca5cf0;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar1 = puVar5;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar10;
  plStack_268 = plVar12;
  ppuStack_260 = ppuVar4;
  ppuStack_258 = ppuVar6;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(ppuVar3);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x23 = auStack_2a0;
    func_0x00010002b838(auStack_2a0,ppuVar4);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_288,1);
    ppuVar7 = (undefined **)&UNK_110a03218;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03218,&uStack_2c0,puVar5);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    puVar1 = puVar8;
    puVar11 = puVar5;
    puVar10 = &uStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar1 = puVar8;
      puVar11 = puVar5;
      puVar10 = &uStack_2c0;
    }
  }
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_340;
  puStack_2c8 = &LAB_107ca5e64;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  puVar5 = puVar1;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar10;
  plStack_2e8 = plVar12;
  ppuStack_2e0 = ppuVar4;
  ppuStack_2d8 = ppuVar3;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(ppuVar7);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar7;
      _objc_retainAutorelease(ppuVar7);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar7);
    unaff_x23 = auStack_320;
    func_0x00010002b838(auStack_320,ppuVar4);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_308,1);
    ppuVar6 = (undefined **)&UNK_110a03268;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03268,&uStack_340,puVar1);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x00010007e5dc(&puStack_328);
    puVar5 = puVar8;
    puVar11 = puVar1;
    puVar10 = &uStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar5 = puVar8;
      puVar11 = puVar1;
      puVar10 = &uStack_340;
    }
  }
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_3c0;
  puStack_348 = &SUB_107ca5fd8;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar1 = puVar5;
  puStack_380 = unaff_x24;
  puStack_378 = unaff_x23;
  puStack_370 = puVar10;
  plStack_368 = plVar12;
  ppuStack_360 = ppuVar4;
  ppuStack_358 = ppuVar7;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(ppuVar6);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    unaff_x23 = auStack_3a0;
    func_0x00010002b838(auStack_3a0,ppuVar4);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x00010007e1e8(&uStack_3c0,auStack_3a0,&lStack_388,1);
    ppuVar3 = (undefined **)&UNK_110a032b8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a032b8,&uStack_3c0,puVar5);
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    puVar1 = puVar8;
    puVar11 = puVar5;
    puVar10 = &uStack_3c0;
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
      puVar1 = puVar8;
      puVar11 = puVar5;
      puVar10 = &uStack_3c0;
    }
  }
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_440;
  puStack_3c8 = &SUB_107ca614c;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar5 = puVar1;
  puStack_400 = unaff_x24;
  puStack_3f8 = unaff_x23;
  puStack_3f0 = puVar10;
  plStack_3e8 = plVar12;
  ppuStack_3e0 = ppuVar4;
  ppuStack_3d8 = ppuVar6;
  pppuStack_3d0 = &pppuStack_350;
  _objc_retain(ppuVar3);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x23 = auStack_420;
    func_0x00010002b838(auStack_420,ppuVar4);
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    func_0x00010007e1e8(&uStack_440,auStack_420,&lStack_408,1);
    ppuVar7 = (undefined **)&UNK_110a03308;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03308,&uStack_440,puVar1);
    puStack_428 = (undefined1 *)&uStack_440;
    func_0x00010007e5dc(&puStack_428);
    puVar5 = puVar8;
    puVar11 = puVar1;
    puVar10 = &uStack_440;
    if (cStack_409 < '\0') {
      __ZdlPv(auStack_420[0]);
      puVar5 = puVar8;
      puVar11 = puVar1;
      puVar10 = &uStack_440;
    }
  }
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_4c0;
  puStack_448 = &LAB_107ca62c0;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  puVar1 = puVar5;
  puStack_480 = unaff_x24;
  puStack_478 = unaff_x23;
  puStack_470 = puVar10;
  plStack_468 = plVar12;
  ppuStack_460 = ppuVar4;
  ppuStack_458 = ppuVar3;
  pppuStack_450 = &pppuStack_3d0;
  _objc_retain(ppuVar7);
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    ppuVar6 = (undefined **)&UNK_110a03358;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar13 = (undefined **)ppuVar13[1];
      _objc_retain(ppuVar7);
      if (ppuVar7 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar7;
        _objc_retainAutorelease(ppuVar7);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar7);
      unaff_x23 = auStack_4a0;
      func_0x00010002b838(auStack_4a0,ppuVar4);
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      func_0x00010007e1e8(&uStack_4c0,auStack_4a0,&lStack_488,1);
      puVar11 = (undefined8 *)((long)puVar5 * 10);
      ppuVar6 = (undefined **)&UNK_110a03358;
      (**(code **)(*ppuVar13 + 0x18))(ppuVar13,&UNK_110a03358,&uStack_4c0,puVar11);
      puStack_4a8 = (undefined1 *)&uStack_4c0;
      func_0x00010007e5dc(&puStack_4a8);
      puVar1 = puVar8;
      puVar10 = &uStack_4c0;
      if (cStack_489 < '\0') {
        __ZdlPv(auStack_4a0[0]);
        puVar1 = puVar8;
        puVar10 = &uStack_4c0;
      }
    }
  }
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  ppuVar14 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_540;
  puStack_4c8 = &SUB_107ca6458;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar5 = puVar1;
  puStack_500 = unaff_x24;
  puStack_4f8 = unaff_x23;
  puStack_4f0 = puVar10;
  ppuStack_4e8 = ppuVar13;
  ppuStack_4e0 = ppuVar4;
  ppuStack_4d8 = ppuVar7;
  pppuStack_4d0 = &pppuStack_450;
  _objc_retain(ppuVar6);
  if (ppuVar14 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar14[1];
    ppuVar3 = (undefined **)&UNK_110a033a8;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar14 = (undefined **)ppuVar14[1];
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar6;
        _objc_retainAutorelease(ppuVar6);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar6);
      unaff_x23 = auStack_520;
      func_0x00010002b838(auStack_520,ppuVar4);
      uStack_540 = 0;
      uStack_538 = 0;
      uStack_530 = 0;
      func_0x00010007e1e8(&uStack_540,auStack_520,&lStack_508,1);
      ppuVar3 = (undefined **)&UNK_110a033a8;
      (**(code **)(*ppuVar14 + 0x18))(ppuVar14,&UNK_110a033a8,&uStack_540,puVar1);
      puStack_528 = (undefined1 *)&uStack_540;
      func_0x00010007e5dc(&puStack_528);
      puVar5 = puVar8;
      puVar11 = puVar1;
      puVar10 = &uStack_540;
      if (cStack_509 < '\0') {
        __ZdlPv(auStack_520[0]);
        puVar5 = puVar8;
        puVar11 = puVar1;
        puVar10 = &uStack_540;
      }
    }
  }
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_5c0;
  puStack_548 = &SUB_107ca65ec;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar1 = puVar5;
  puStack_580 = unaff_x24;
  puStack_578 = unaff_x23;
  puStack_570 = puVar10;
  ppuStack_568 = ppuVar14;
  ppuStack_560 = ppuVar4;
  ppuStack_558 = ppuVar6;
  pppuStack_550 = &pppuStack_4d0;
  _objc_retain(ppuVar3);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x23 = auStack_5a0;
    func_0x00010002b838(auStack_5a0,ppuVar4);
    uStack_5c0 = 0;
    uStack_5b8 = 0;
    uStack_5b0 = 0;
    func_0x00010007e1e8(&uStack_5c0,auStack_5a0,&lStack_588,1);
    ppuVar7 = (undefined **)&UNK_110a033f8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a033f8,&uStack_5c0,puVar5);
    puStack_5a8 = (undefined1 *)&uStack_5c0;
    func_0x00010007e5dc(&puStack_5a8);
    puVar1 = puVar8;
    puVar11 = puVar5;
    puVar10 = &uStack_5c0;
    if (cStack_589 < '\0') {
      __ZdlPv(auStack_5a0[0]);
      puVar1 = puVar8;
      puVar11 = puVar5;
      puVar10 = &uStack_5c0;
    }
  }
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_640;
  puStack_5c8 = &LAB_107ca6760;
  lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  puVar5 = puVar1;
  puStack_600 = unaff_x24;
  puStack_5f8 = unaff_x23;
  puStack_5f0 = puVar10;
  plStack_5e8 = plVar12;
  ppuStack_5e0 = ppuVar4;
  ppuStack_5d8 = ppuVar3;
  pppuStack_5d0 = &pppuStack_550;
  _objc_retain(ppuVar7);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar7;
      _objc_retainAutorelease(ppuVar7);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar7);
    unaff_x23 = auStack_620;
    func_0x00010002b838(auStack_620,ppuVar4);
    uStack_640 = 0;
    uStack_638 = 0;
    uStack_630 = 0;
    func_0x00010007e1e8(&uStack_640,auStack_620,&lStack_608,1);
    ppuVar6 = (undefined **)&UNK_110a03448;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03448,&uStack_640,puVar1);
    puStack_628 = (undefined1 *)&uStack_640;
    func_0x00010007e5dc(&puStack_628);
    puVar5 = puVar8;
    puVar11 = puVar1;
    puVar10 = &uStack_640;
    if (cStack_609 < '\0') {
      __ZdlPv(auStack_620[0]);
      puVar5 = puVar8;
      puVar11 = puVar1;
      puVar10 = &uStack_640;
    }
  }
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_608) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_6c0;
  puStack_648 = &SUB_107ca68d4;
  lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar1 = puVar5;
  puStack_680 = unaff_x24;
  puStack_678 = unaff_x23;
  puStack_670 = puVar10;
  plStack_668 = plVar12;
  ppuStack_660 = ppuVar4;
  ppuStack_658 = ppuVar7;
  pppuStack_650 = &pppuStack_5d0;
  _objc_retain(ppuVar6);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    unaff_x23 = auStack_6a0;
    func_0x00010002b838(auStack_6a0,ppuVar4);
    uStack_6c0 = 0;
    uStack_6b8 = 0;
    uStack_6b0 = 0;
    func_0x00010007e1e8(&uStack_6c0,auStack_6a0,&lStack_688,1);
    ppuVar3 = (undefined **)&UNK_110a03498;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03498,&uStack_6c0,puVar5);
    puStack_6a8 = (undefined1 *)&uStack_6c0;
    func_0x00010007e5dc(&puStack_6a8);
    puVar1 = puVar8;
    puVar11 = puVar5;
    puVar10 = &uStack_6c0;
    if (cStack_689 < '\0') {
      __ZdlPv(auStack_6a0[0]);
      puVar1 = puVar8;
      puVar11 = puVar5;
      puVar10 = &uStack_6c0;
    }
  }
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_688) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_740;
  puStack_6c8 = &LAB_107ca6a48;
  lStack_708 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar5 = puVar1;
  puStack_700 = unaff_x24;
  puStack_6f8 = unaff_x23;
  puStack_6f0 = puVar10;
  plStack_6e8 = plVar12;
  ppuStack_6e0 = ppuVar4;
  ppuStack_6d8 = ppuVar6;
  pppuStack_6d0 = &pppuStack_650;
  _objc_retain(ppuVar3);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x23 = auStack_720;
    func_0x00010002b838(auStack_720,ppuVar4);
    uStack_740 = 0;
    uStack_738 = 0;
    uStack_730 = 0;
    func_0x00010007e1e8(&uStack_740,auStack_720,&lStack_708,1);
    ppuVar7 = (undefined **)&UNK_110a034e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a034e8,&uStack_740,puVar1);
    puStack_728 = (undefined1 *)&uStack_740;
    func_0x00010007e5dc(&puStack_728);
    puVar5 = puVar8;
    puVar11 = puVar1;
    puVar10 = &uStack_740;
    if (cStack_709 < '\0') {
      __ZdlPv(auStack_720[0]);
      puVar5 = puVar8;
      puVar11 = puVar1;
      puVar10 = &uStack_740;
    }
  }
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_708) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_7c0;
  puStack_748 = &LAB_107ca6bbc;
  lStack_788 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  puVar1 = puVar5;
  puStack_780 = unaff_x24;
  puStack_778 = unaff_x23;
  puStack_770 = puVar10;
  plStack_768 = plVar12;
  ppuStack_760 = ppuVar4;
  ppuStack_758 = ppuVar3;
  pppuStack_750 = &pppuStack_6d0;
  _objc_retain(ppuVar7);
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    ppuVar6 = (undefined **)&UNK_110a03538;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar13 = (undefined **)ppuVar13[1];
      _objc_retain(ppuVar7);
      if (ppuVar7 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar7;
        _objc_retainAutorelease(ppuVar7);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar7);
      unaff_x23 = auStack_7a0;
      func_0x00010002b838(auStack_7a0,ppuVar4);
      uStack_7c0 = 0;
      uStack_7b8 = 0;
      uStack_7b0 = 0;
      func_0x00010007e1e8(&uStack_7c0,auStack_7a0,&lStack_788,1);
      puVar11 = (undefined8 *)((long)puVar5 * 10);
      ppuVar6 = (undefined **)&UNK_110a03538;
      (**(code **)(*ppuVar13 + 0x18))(ppuVar13,&UNK_110a03538,&uStack_7c0,puVar11);
      puStack_7a8 = (undefined1 *)&uStack_7c0;
      func_0x00010007e5dc(&puStack_7a8);
      puVar1 = puVar8;
      puVar10 = &uStack_7c0;
      if (cStack_789 < '\0') {
        __ZdlPv(auStack_7a0[0]);
        puVar1 = puVar8;
        puVar10 = &uStack_7c0;
      }
    }
  }
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_788) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  ppuVar14 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_840;
  puStack_7c8 = &SUB_107ca6d54;
  lStack_808 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar5 = puVar1;
  puStack_800 = unaff_x24;
  puStack_7f8 = unaff_x23;
  puStack_7f0 = puVar10;
  ppuStack_7e8 = ppuVar13;
  ppuStack_7e0 = ppuVar4;
  ppuStack_7d8 = ppuVar7;
  pppuStack_7d0 = &pppuStack_750;
  _objc_retain(ppuVar6);
  if (ppuVar14 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar14[1];
    ppuVar3 = (undefined **)&UNK_110a03588;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar14 = (undefined **)ppuVar14[1];
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar6;
        _objc_retainAutorelease(ppuVar6);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar6);
      unaff_x23 = auStack_820;
      func_0x00010002b838(auStack_820,ppuVar4);
      uStack_840 = 0;
      uStack_838 = 0;
      uStack_830 = 0;
      func_0x00010007e1e8(&uStack_840,auStack_820,&lStack_808,1);
      ppuVar3 = (undefined **)&UNK_110a03588;
      (**(code **)(*ppuVar14 + 0x18))(ppuVar14,&UNK_110a03588,&uStack_840,puVar1);
      puStack_828 = (undefined1 *)&uStack_840;
      func_0x00010007e5dc(&puStack_828);
      puVar5 = puVar8;
      puVar11 = puVar1;
      puVar10 = &uStack_840;
      if (cStack_809 < '\0') {
        __ZdlPv(auStack_820[0]);
        puVar5 = puVar8;
        puVar11 = puVar1;
        puVar10 = &uStack_840;
      }
    }
  }
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_808) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puStack_848 = &SUB_107ca6ee8;
  lStack_888 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar1 = puVar5;
  puVar8 = puVar11;
  puStack_880 = unaff_x24;
  puStack_878 = unaff_x23;
  puStack_870 = puVar10;
  ppuStack_868 = ppuVar14;
  ppuStack_860 = ppuVar4;
  ppuStack_858 = ppuVar6;
  pppuStack_850 = &pppuStack_7d0;
  _objc_retain(ppuVar3);
  _objc_retain(puVar5);
  puVar10 = (undefined8 *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x24 = auStack_8b8;
    func_0x00010002b838(auStack_8b8,ppuVar4);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar1 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_8a0,puVar1);
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    uStack_8c8 = 0;
    func_0x00010007e1e8(&uStack_8d8,auStack_8b8,&lStack_888,2);
    ppuVar7 = (undefined **)&UNK_110a035d8;
    unaff_x23 = &uStack_8d8;
    puVar1 = &uStack_8d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a035d8,puVar1,puVar11);
    puStack_8c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_8c0);
    lVar2 = 0;
    puVar10 = auStack_8b8;
    puVar8 = puVar11;
    do {
      if ((&cStack_889)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_8a0 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(puVar5);
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_888) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_8a1 < '\0') {
    __ZdlPv(auStack_8b8[0]);
  }
  _objc_release(puVar5);
  _objc_release(ppuVar3);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puStack_8e8 = &SUB_107ca7118;
  lStack_928 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  puVar11 = puVar1;
  puStack_920 = unaff_x24;
  puStack_918 = unaff_x23;
  puStack_910 = puVar10;
  ppuStack_908 = ppuVar4;
  puStack_900 = puVar5;
  ppuStack_8f8 = ppuVar3;
  pppuStack_8f0 = &pppuStack_850;
  _objc_retain(ppuVar7);
  _objc_retain(puVar1);
  puVar5 = (undefined8 *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar7;
      _objc_retainAutorelease(ppuVar7);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar7);
    unaff_x24 = auStack_958;
    func_0x00010002b838(auStack_958,ppuVar4);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar5 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_940,puVar5);
    uStack_978 = 0;
    uStack_970 = 0;
    uStack_968 = 0;
    func_0x00010007e1e8(&uStack_978,auStack_958,&lStack_928,2);
    ppuVar6 = (undefined **)&UNK_110a03628;
    unaff_x23 = &uStack_978;
    puVar11 = &uStack_978;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03628,puVar11,puVar8);
    puStack_960 = unaff_x23;
    func_0x00010007e5dc(&puStack_960);
    lVar2 = 0;
    puVar5 = auStack_958;
    do {
      if ((&cStack_929)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_940 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(puVar1);
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_928) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_941 < '\0') {
    __ZdlPv(auStack_958[0]);
  }
  _objc_release(puVar1);
  _objc_release(ppuVar7);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_a00;
  puStack_988 = &LAB_107ca7348;
  lStack_9c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar10 = puVar11;
  puStack_9c0 = unaff_x24;
  puStack_9b8 = unaff_x23;
  puStack_9b0 = puVar5;
  ppuStack_9a8 = ppuVar4;
  puStack_9a0 = puVar1;
  ppuStack_998 = ppuVar7;
  pppuStack_990 = &pppuStack_8f0;
  _objc_retain(ppuVar6);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    unaff_x23 = auStack_9e0;
    func_0x00010002b838(auStack_9e0,ppuVar4);
    uStack_a00 = 0;
    uStack_9f8 = 0;
    uStack_9f0 = 0;
    func_0x00010007e1e8(&uStack_a00,auStack_9e0,&lStack_9c8,1);
    ppuVar3 = (undefined **)&UNK_110a03678;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03678,&uStack_a00,puVar11);
    puStack_9e8 = (undefined1 *)&uStack_a00;
    func_0x00010007e5dc(&puStack_9e8);
    puVar10 = puVar8;
    puVar5 = &uStack_a00;
    if (cStack_9c9 < '\0') {
      __ZdlPv(auStack_9e0[0]);
      puVar10 = puVar8;
      puVar5 = &uStack_a00;
    }
  }
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_a80;
  puStack_a08 = &SUB_107ca74bc;
  lStack_a48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar1 = puVar10;
  puStack_a40 = unaff_x24;
  puStack_a38 = unaff_x23;
  puStack_a30 = puVar5;
  plStack_a28 = plVar12;
  ppuStack_a20 = ppuVar4;
  ppuStack_a18 = ppuVar6;
  pppuStack_a10 = &pppuStack_990;
  _objc_retain(ppuVar3);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x23 = auStack_a60;
    func_0x00010002b838(auStack_a60,ppuVar4);
    uStack_a80 = 0;
    uStack_a78 = 0;
    uStack_a70 = 0;
    func_0x00010007e1e8(&uStack_a80,auStack_a60,&lStack_a48,1);
    ppuVar7 = (undefined **)&UNK_110a036c8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a036c8,&uStack_a80,puVar10);
    puStack_a68 = (undefined1 *)&uStack_a80;
    func_0x00010007e5dc(&puStack_a68);
    puVar1 = puVar11;
    puVar5 = &uStack_a80;
    if (cStack_a49 < '\0') {
      __ZdlPv(auStack_a60[0]);
      puVar1 = puVar11;
      puVar5 = &uStack_a80;
    }
  }
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_b00;
  puStack_a88 = &SUB_107ca7630;
  lStack_ac8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  puVar10 = puVar1;
  puStack_ac0 = unaff_x24;
  puStack_ab8 = unaff_x23;
  puStack_ab0 = puVar5;
  plStack_aa8 = plVar12;
  ppuStack_aa0 = ppuVar4;
  ppuStack_a98 = ppuVar3;
  pppuStack_a90 = &pppuStack_a10;
  _objc_retain(ppuVar7);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar7;
      _objc_retainAutorelease(ppuVar7);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar7);
    unaff_x23 = auStack_ae0;
    func_0x00010002b838(auStack_ae0,ppuVar4);
    uStack_b00 = 0;
    uStack_af8 = 0;
    uStack_af0 = 0;
    func_0x00010007e1e8(&uStack_b00,auStack_ae0,&lStack_ac8,1);
    ppuVar6 = (undefined **)&UNK_110a03768;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03768,&uStack_b00,puVar1);
    puStack_ae8 = (undefined1 *)&uStack_b00;
    func_0x00010007e5dc(&puStack_ae8);
    puVar10 = puVar11;
    puVar5 = &uStack_b00;
    if (cStack_ac9 < '\0') {
      __ZdlPv(auStack_ae0[0]);
      puVar10 = puVar11;
      puVar5 = &uStack_b00;
    }
  }
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ac8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_b80;
  puStack_b08 = &LAB_107ca77a4;
  lStack_b48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar1 = puVar10;
  puStack_b40 = unaff_x24;
  puStack_b38 = unaff_x23;
  puStack_b30 = puVar5;
  plStack_b28 = plVar12;
  ppuStack_b20 = ppuVar4;
  ppuStack_b18 = ppuVar7;
  pppuStack_b10 = &pppuStack_a90;
  _objc_retain(ppuVar6);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    unaff_x23 = auStack_b60;
    func_0x00010002b838(auStack_b60,ppuVar4);
    uStack_b80 = 0;
    uStack_b78 = 0;
    uStack_b70 = 0;
    func_0x00010007e1e8(&uStack_b80,auStack_b60,&lStack_b48,1);
    ppuVar3 = (undefined **)&UNK_110a037b8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a037b8,&uStack_b80,puVar10);
    puStack_b68 = (undefined1 *)&uStack_b80;
    func_0x00010007e5dc(&puStack_b68);
    puVar1 = puVar11;
    puVar5 = &uStack_b80;
    if (cStack_b49 < '\0') {
      __ZdlPv(auStack_b60[0]);
      puVar1 = puVar11;
      puVar5 = &uStack_b80;
    }
  }
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_c00;
  puStack_b88 = &SUB_107ca7918;
  lStack_bc8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar10 = puVar1;
  puStack_bc0 = unaff_x24;
  puStack_bb8 = unaff_x23;
  puStack_bb0 = puVar5;
  plStack_ba8 = plVar12;
  ppuStack_ba0 = ppuVar4;
  ppuStack_b98 = ppuVar6;
  pppuStack_b90 = &pppuStack_b10;
  _objc_retain(ppuVar3);
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    ppuVar7 = (undefined **)&UNK_110a038a8;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar13 = (undefined **)ppuVar13[1];
      _objc_retain(ppuVar3);
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar3;
        _objc_retainAutorelease(ppuVar3);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar3);
      unaff_x23 = auStack_be0;
      func_0x00010002b838(auStack_be0,ppuVar4);
      uStack_c00 = 0;
      uStack_bf8 = 0;
      uStack_bf0 = 0;
      func_0x00010007e1e8(&uStack_c00,auStack_be0,&lStack_bc8,1);
      ppuVar7 = (undefined **)&UNK_110a038a8;
      (**(code **)(*ppuVar13 + 0x18))(ppuVar13,&UNK_110a038a8,&uStack_c00,(long)puVar1 * 100);
      puStack_be8 = (undefined1 *)&uStack_c00;
      func_0x00010007e5dc(&puStack_be8);
      puVar10 = puVar11;
      puVar5 = &uStack_c00;
      if (cStack_bc9 < '\0') {
        __ZdlPv(auStack_be0[0]);
        puVar10 = puVar11;
        puVar5 = &uStack_c00;
      }
    }
  }
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_bc8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  ppuVar14 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_c80;
  puStack_c08 = &SUB_107ca7ab0;
  lStack_c48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  puVar1 = puVar10;
  puStack_c40 = unaff_x24;
  puStack_c38 = unaff_x23;
  puStack_c30 = puVar5;
  ppuStack_c28 = ppuVar13;
  ppuStack_c20 = ppuVar4;
  ppuStack_c18 = ppuVar3;
  pppuStack_c10 = &pppuStack_b90;
  _objc_retain(ppuVar7);
  if (ppuVar14 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar14[1];
    ppuVar6 = (undefined **)&UNK_110a03948;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar14 = (undefined **)ppuVar14[1];
      _objc_retain(ppuVar7);
      if (ppuVar7 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar7;
        _objc_retainAutorelease(ppuVar7);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar7);
      unaff_x23 = auStack_c60;
      func_0x00010002b838(auStack_c60,ppuVar4);
      uStack_c80 = 0;
      uStack_c78 = 0;
      uStack_c70 = 0;
      func_0x00010007e1e8(&uStack_c80,auStack_c60,&lStack_c48,1);
      ppuVar6 = (undefined **)&UNK_110a03948;
      (**(code **)(*ppuVar14 + 0x18))(ppuVar14,&UNK_110a03948,&uStack_c80,(long)puVar10 * 100);
      puStack_c68 = (undefined1 *)&uStack_c80;
      func_0x00010007e5dc(&puStack_c68);
      puVar1 = puVar11;
      puVar5 = &uStack_c80;
      if (cStack_c49 < '\0') {
        __ZdlPv(auStack_c60[0]);
        puVar1 = puVar11;
        puVar5 = &uStack_c80;
      }
    }
  }
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_d00;
  puStack_c88 = &SUB_107ca7c48;
  lStack_cc8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar10 = puVar1;
  puStack_cc0 = unaff_x24;
  puStack_cb8 = unaff_x23;
  puStack_cb0 = puVar5;
  ppuStack_ca8 = ppuVar14;
  ppuStack_ca0 = ppuVar4;
  ppuStack_c98 = ppuVar7;
  pppuStack_c90 = &pppuStack_c10;
  _objc_retain(ppuVar6);
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    ppuVar3 = (undefined **)&UNK_110a03a88;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar13 = (undefined **)ppuVar13[1];
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar6;
        _objc_retainAutorelease(ppuVar6);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar6);
      unaff_x23 = auStack_ce0;
      func_0x00010002b838(auStack_ce0,ppuVar4);
      uStack_d00 = 0;
      uStack_cf8 = 0;
      uStack_cf0 = 0;
      func_0x00010007e1e8(&uStack_d00,auStack_ce0,&lStack_cc8,1);
      ppuVar3 = (undefined **)&UNK_110a03a88;
      (**(code **)(*ppuVar13 + 0x18))(ppuVar13,&UNK_110a03a88,&uStack_d00,(long)puVar1 * 10);
      puStack_ce8 = (undefined1 *)&uStack_d00;
      func_0x00010007e5dc(&puStack_ce8);
      puVar10 = puVar11;
      puVar5 = &uStack_d00;
      if (cStack_cc9 < '\0') {
        __ZdlPv(auStack_ce0[0]);
        puVar10 = puVar11;
        puVar5 = &uStack_d00;
      }
    }
  }
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_cc8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar14 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_d80;
  puStack_d08 = &SUB_107ca7de0;
  lStack_d48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar1 = puVar10;
  puStack_d40 = unaff_x24;
  puStack_d38 = unaff_x23;
  puStack_d30 = puVar5;
  ppuStack_d28 = ppuVar13;
  ppuStack_d20 = ppuVar4;
  ppuStack_d18 = ppuVar6;
  pppuStack_d10 = &pppuStack_c90;
  _objc_retain(ppuVar3);
  if (ppuVar14 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar14[1];
    ppuVar7 = (undefined **)&UNK_110a03ad8;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar14 = (undefined **)ppuVar14[1];
      _objc_retain(ppuVar3);
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar3;
        _objc_retainAutorelease(ppuVar3);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar3);
      unaff_x23 = auStack_d60;
      func_0x00010002b838(auStack_d60,ppuVar4);
      uStack_d80 = 0;
      uStack_d78 = 0;
      uStack_d70 = 0;
      func_0x00010007e1e8(&uStack_d80,auStack_d60,&lStack_d48,1);
      ppuVar7 = (undefined **)&UNK_110a03ad8;
      (**(code **)(*ppuVar14 + 0x18))(ppuVar14,&UNK_110a03ad8,&uStack_d80,puVar10);
      puStack_d68 = (undefined1 *)&uStack_d80;
      func_0x00010007e5dc(&puStack_d68);
      puVar1 = puVar11;
      puVar5 = &uStack_d80;
      if (cStack_d49 < '\0') {
        __ZdlPv(auStack_d60[0]);
        puVar1 = puVar11;
        puVar5 = &uStack_d80;
      }
    }
  }
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_e00;
  puStack_d88 = &LAB_107ca7f74;
  lStack_dc8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  puVar10 = puVar1;
  puStack_dc0 = unaff_x24;
  puStack_db8 = unaff_x23;
  puStack_db0 = puVar5;
  ppuStack_da8 = ppuVar14;
  ppuStack_da0 = ppuVar4;
  ppuStack_d98 = ppuVar3;
  pppuStack_d90 = &pppuStack_d10;
  _objc_retain(ppuVar7);
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    ppuVar6 = (undefined **)&UNK_110a03b28;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar13 = (undefined **)ppuVar13[1];
      _objc_retain(ppuVar7);
      if (ppuVar7 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar7;
        _objc_retainAutorelease(ppuVar7);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar7);
      unaff_x23 = auStack_de0;
      func_0x00010002b838(auStack_de0,ppuVar4);
      uStack_e00 = 0;
      uStack_df8 = 0;
      uStack_df0 = 0;
      func_0x00010007e1e8(&uStack_e00,auStack_de0,&lStack_dc8,1);
      ppuVar6 = (undefined **)&UNK_110a03b28;
      (**(code **)(*ppuVar13 + 0x18))(ppuVar13,&UNK_110a03b28,&uStack_e00,(long)puVar1 * 10);
      puStack_de8 = (undefined1 *)&uStack_e00;
      func_0x00010007e5dc(&puStack_de8);
      puVar10 = puVar11;
      puVar5 = &uStack_e00;
      if (cStack_dc9 < '\0') {
        __ZdlPv(auStack_de0[0]);
        puVar10 = puVar11;
        puVar5 = &uStack_e00;
      }
    }
  }
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_dc8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  ppuVar14 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_e80;
  puStack_e08 = &LAB_107ca810c;
  lStack_e48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar1 = puVar10;
  puStack_e40 = unaff_x24;
  puStack_e38 = unaff_x23;
  puStack_e30 = puVar5;
  ppuStack_e28 = ppuVar13;
  ppuStack_e20 = ppuVar4;
  ppuStack_e18 = ppuVar7;
  pppuStack_e10 = &pppuStack_d90;
  _objc_retain(ppuVar6);
  if (ppuVar14 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar14[1];
    ppuVar3 = (undefined **)&UNK_110a03b78;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar14 = (undefined **)ppuVar14[1];
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar6;
        _objc_retainAutorelease(ppuVar6);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar6);
      unaff_x23 = auStack_e60;
      func_0x00010002b838(auStack_e60,ppuVar4);
      uStack_e80 = 0;
      uStack_e78 = 0;
      uStack_e70 = 0;
      func_0x00010007e1e8(&uStack_e80,auStack_e60,&lStack_e48,1);
      ppuVar3 = (undefined **)&UNK_110a03b78;
      (**(code **)(*ppuVar14 + 0x18))(ppuVar14,&UNK_110a03b78,&uStack_e80,(long)puVar10 * 10);
      puStack_e68 = (undefined1 *)&uStack_e80;
      func_0x00010007e5dc(&puStack_e68);
      puVar1 = puVar11;
      puVar5 = &uStack_e80;
      if (cStack_e49 < '\0') {
        __ZdlPv(auStack_e60[0]);
        puVar1 = puVar11;
        puVar5 = &uStack_e80;
      }
    }
  }
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_f00;
  puStack_e88 = &LAB_107ca82a4;
  ppppuVar15 = &pppuStack_e90;
  lStack_ec8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar10 = puVar1;
  puStack_ec0 = unaff_x24;
  puStack_eb8 = unaff_x23;
  puStack_eb0 = puVar5;
  ppuStack_ea8 = ppuVar14;
  ppuStack_ea0 = ppuVar4;
  ppuStack_e98 = ppuVar6;
  pppuStack_e90 = &pppuStack_e10;
  _objc_retain(ppuVar3);
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    ppuVar7 = (undefined **)&UNK_110a03bc8;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar13 = (undefined **)ppuVar13[1];
      _objc_retain(ppuVar3);
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar3;
        _objc_retainAutorelease(ppuVar3);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar3);
      unaff_x23 = auStack_ee0;
      func_0x00010002b838(auStack_ee0,ppuVar4);
      uStack_f00 = 0;
      uStack_ef8 = 0;
      uStack_ef0 = 0;
      func_0x00010007e1e8(&uStack_f00,auStack_ee0,&lStack_ec8,1);
      ppuVar7 = (undefined **)&UNK_110a03bc8;
      (**(code **)(*ppuVar13 + 0x18))(ppuVar13,&UNK_110a03bc8,&uStack_f00,(long)puVar1 * 10);
      puStack_ee8 = (undefined1 *)&uStack_f00;
      func_0x00010007e5dc(&puStack_ee8);
      puVar10 = puVar11;
      puVar5 = &uStack_f00;
      if (cStack_ec9 < '\0') {
        __ZdlPv(auStack_ee0[0]);
        puVar10 = puVar11;
        puVar5 = &uStack_f00;
      }
    }
  }
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_ec8) {
    ___stack_chk_fail();
    _objc_release(ppuVar3);
    _objc_release(ppuVar3);
    puVar16 = &UNK_107ca843c;
    ppuVar6 = ppuVar4;
    __Unwind_Resume();
    puVar1 = &uStack_f00;
    while( true ) {
      *(undefined8 **)((long)puVar1 + -0x40) = unaff_x24;
      *(undefined8 **)((long)puVar1 + -0x38) = unaff_x23;
      *(undefined8 **)((long)puVar1 + -0x30) = puVar5;
      *(undefined ***)((long)puVar1 + -0x28) = ppuVar13;
      *(undefined ***)((long)puVar1 + -0x20) = ppuVar4;
      *(undefined ***)((long)puVar1 + -0x18) = ppuVar3;
      *(undefined8 *****)((long)puVar1 + -0x10) = ppppuVar15;
      *(undefined **)((long)puVar1 + -8) = puVar16;
      *(undefined8 *)((long)puVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      ppuVar3 = ppuVar7;
      _objc_retain(ppuVar7);
      ppuVar13 = ppuVar6;
      dVar17 = param_1;
      if (ppuVar6 != (undefined **)0x0) {
        plVar12 = (long *)ppuVar6[1];
        ppuVar3 = (undefined **)&UNK_110a03c68;
        (**(code **)(*plVar12 + 0x28))();
        dVar17 = param_1;
        if ((int)plVar12 != 0) {
          ppuVar13 = (undefined **)ppuVar6[1];
          _objc_retain(ppuVar7);
          if (ppuVar7 == (undefined **)0x0) {
            ppuVar4 = (undefined **)&UNK_10f44f7d9;
            dVar17 = param_1;
          }
          else {
            ppuVar4 = ppuVar7;
            _objc_retainAutorelease(ppuVar7);
            func_0x00010bdc3520();
            dVar17 = param_1;
          }
          _objc_release(ppuVar7);
          unaff_x23 = (undefined8 *)((long)puVar1 + -0x60);
          func_0x00010002b838((undefined1 *)((long)puVar1 + -0x60),ppuVar4);
          *(undefined8 *)((long)puVar1 + -0x80) = 0;
          *(undefined8 *)((long)puVar1 + -0x78) = 0;
          *(undefined8 *)((long)puVar1 + -0x70) = 0;
          func_0x00010007e1e8((undefined1 *)((long)puVar1 + -0x80),
                              (undefined1 *)((long)puVar1 + -0x60),
                              (undefined1 *)((long)puVar1 + -0x48),1);
          ppuVar3 = (undefined **)&UNK_110a03c68;
          (**(code **)(*ppuVar13 + 0x18))
                    (ppuVar13,&UNK_110a03c68,(undefined1 *)((long)puVar1 + -0x80),puVar10);
          *(undefined1 **)((long)puVar1 + -0x68) = (undefined1 *)((long)puVar1 + -0x80);
          func_0x00010007e5dc((undefined1 *)((long)puVar1 + -0x68));
          puVar5 = (undefined8 *)((long)puVar1 + -0x80);
          if (*(char *)((long)puVar1 + -0x49) < '\0') {
            __ZdlPv(*(undefined8 *)((long)puVar1 + -0x60));
            puVar5 = (undefined8 *)((long)puVar1 + -0x80);
          }
        }
      }
      ppuVar4 = ppuVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x48)) break;
      ___stack_chk_fail();
      _objc_release(ppuVar7);
      _objc_release(ppuVar7);
      ppuVar6 = ppuVar4;
      __Unwind_Resume();
      *(undefined8 *)((long)puVar1 + -0xb0) = unaff_d9;
      *(double *)((long)puVar1 + -0xa8) = unaff_d8;
      *(undefined ***)((long)puVar1 + -0xa0) = ppuVar4;
      *(undefined ***)((long)puVar1 + -0x98) = ppuVar7;
      *(undefined1 **)((long)puVar1 + -0x90) = (undefined1 *)((long)puVar1 + -0x10);
      *(undefined **)((long)puVar1 + -0x88) = &LAB_107ca85d0;
      ppppuVar15 = (undefined8 ****)((long)puVar1 + -0x90);
      _objc_retain(ppuVar3);
      if (ppuVar6 == (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
        return;
      }
      param_1 = dVar17 * 1000.0;
      puVar10 = (undefined8 *)(long)param_1;
      puVar16 = &UNK_107ca8614;
      puVar1 = (undefined8 *)((long)puVar1 + -0xb0);
      ppuVar7 = ppuVar3;
      ppuVar4 = ppuVar6;
      unaff_d8 = dVar17;
    }
    return;
  }
  return;
}



/* Entry: 105b0bbf8; end: 105b0bc33; -[SCStoriesGrapheneMetricsEmitter logUnexpectedSummaryInfo:] */

/* WARNING: Possible PIC construction at 0x000105b0bc18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107ca8610: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105b0bc1c) */
/* WARNING: Removing unreachable block (ram,0x000107ca54f0) */
/* WARNING: Removing unreachable block (ram,0x000107ca5530) */
/* WARNING: Removing unreachable block (ram,0x000107ca5554) */
/* WARNING: Removing unreachable block (ram,0x000107ca5540) */
/* WARNING: Removing unreachable block (ram,0x000107ca555c) */
/* WARNING: Removing unreachable block (ram,0x000107ca55c8) */
/* WARNING: Removing unreachable block (ram,0x000107ca55d0) */
/* WARNING: Removing unreachable block (ram,0x000107ca5608) */
/* WARNING: Removing unreachable block (ram,0x000107ca564c) */
/* WARNING: Removing unreachable block (ram,0x000107ca565c) */
/* WARNING: Removing unreachable block (ram,0x000107ca55f0) */
/* WARNING: Removing unreachable block (ram,0x000107ca56c8) */

void FUN_105b0bbf8(double param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 ****ppppuVar15;
  undefined *puVar16;
  double dVar17;
  double unaff_d8;
  undefined8 unaff_d9;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined1 *puStack_ee8;
  undefined8 auStack_ee0 [2];
  char cStack_ec9;
  long lStack_ec8;
  undefined8 *puStack_ec0;
  undefined8 *puStack_eb8;
  undefined8 *puStack_eb0;
  undefined **ppuStack_ea8;
  undefined **ppuStack_ea0;
  undefined **ppuStack_e98;
  undefined8 ***pppuStack_e90;
  undefined *puStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined1 *puStack_e68;
  undefined8 auStack_e60 [2];
  char cStack_e49;
  long lStack_e48;
  undefined8 *puStack_e40;
  undefined8 *puStack_e38;
  undefined8 *puStack_e30;
  undefined **ppuStack_e28;
  undefined **ppuStack_e20;
  undefined **ppuStack_e18;
  undefined8 ***pppuStack_e10;
  undefined *puStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined1 *puStack_de8;
  undefined8 auStack_de0 [2];
  char cStack_dc9;
  long lStack_dc8;
  undefined8 *puStack_dc0;
  undefined8 *puStack_db8;
  undefined8 *puStack_db0;
  undefined **ppuStack_da8;
  undefined **ppuStack_da0;
  undefined **ppuStack_d98;
  undefined8 ***pppuStack_d90;
  undefined *puStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined1 *puStack_d68;
  undefined8 auStack_d60 [2];
  char cStack_d49;
  long lStack_d48;
  undefined8 *puStack_d40;
  undefined8 *puStack_d38;
  undefined8 *puStack_d30;
  undefined **ppuStack_d28;
  undefined **ppuStack_d20;
  undefined **ppuStack_d18;
  undefined8 ***pppuStack_d10;
  undefined *puStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined1 *puStack_ce8;
  undefined8 auStack_ce0 [2];
  char cStack_cc9;
  long lStack_cc8;
  undefined8 *puStack_cc0;
  undefined8 *puStack_cb8;
  undefined8 *puStack_cb0;
  undefined **ppuStack_ca8;
  undefined **ppuStack_ca0;
  undefined **ppuStack_c98;
  undefined8 ***pppuStack_c90;
  undefined *puStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined1 *puStack_c68;
  undefined8 auStack_c60 [2];
  char cStack_c49;
  long lStack_c48;
  undefined8 *puStack_c40;
  undefined8 *puStack_c38;
  undefined8 *puStack_c30;
  undefined **ppuStack_c28;
  undefined **ppuStack_c20;
  undefined **ppuStack_c18;
  undefined8 ***pppuStack_c10;
  undefined *puStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined1 *puStack_be8;
  undefined8 auStack_be0 [2];
  char cStack_bc9;
  long lStack_bc8;
  undefined8 *puStack_bc0;
  undefined8 *puStack_bb8;
  undefined8 *puStack_bb0;
  long *plStack_ba8;
  undefined **ppuStack_ba0;
  undefined **ppuStack_b98;
  undefined8 ***pppuStack_b90;
  undefined *puStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined1 *puStack_b68;
  undefined8 auStack_b60 [2];
  char cStack_b49;
  long lStack_b48;
  undefined8 *puStack_b40;
  undefined8 *puStack_b38;
  undefined8 *puStack_b30;
  long *plStack_b28;
  undefined **ppuStack_b20;
  undefined **ppuStack_b18;
  undefined8 ***pppuStack_b10;
  undefined *puStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined1 *puStack_ae8;
  undefined8 auStack_ae0 [2];
  char cStack_ac9;
  long lStack_ac8;
  undefined8 *puStack_ac0;
  undefined8 *puStack_ab8;
  undefined8 *puStack_ab0;
  long *plStack_aa8;
  undefined **ppuStack_aa0;
  undefined **ppuStack_a98;
  undefined8 ***pppuStack_a90;
  undefined *puStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined1 *puStack_a68;
  undefined8 auStack_a60 [2];
  char cStack_a49;
  long lStack_a48;
  undefined8 *puStack_a40;
  undefined8 *puStack_a38;
  undefined8 *puStack_a30;
  long *plStack_a28;
  undefined **ppuStack_a20;
  undefined **ppuStack_a18;
  undefined8 ***pppuStack_a10;
  undefined *puStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined1 *puStack_9e8;
  undefined8 auStack_9e0 [2];
  char cStack_9c9;
  long lStack_9c8;
  undefined8 *puStack_9c0;
  undefined8 *puStack_9b8;
  undefined8 *puStack_9b0;
  undefined **ppuStack_9a8;
  undefined8 *puStack_9a0;
  undefined **ppuStack_998;
  undefined8 ***pppuStack_990;
  undefined *puStack_988;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 *puStack_960;
  undefined8 auStack_958 [2];
  char cStack_941;
  undefined8 auStack_940 [2];
  char cStack_929;
  long lStack_928;
  undefined8 *puStack_920;
  undefined8 *puStack_918;
  undefined8 *puStack_910;
  undefined **ppuStack_908;
  undefined8 *puStack_900;
  undefined **ppuStack_8f8;
  undefined8 ***pppuStack_8f0;
  undefined *puStack_8e8;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 *puStack_8c0;
  undefined8 auStack_8b8 [2];
  char cStack_8a1;
  undefined8 auStack_8a0 [2];
  char cStack_889;
  long lStack_888;
  undefined8 *puStack_880;
  undefined8 *puStack_878;
  undefined8 *puStack_870;
  undefined **ppuStack_868;
  undefined **ppuStack_860;
  undefined **ppuStack_858;
  undefined8 ***pppuStack_850;
  undefined *puStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined1 *puStack_828;
  undefined8 auStack_820 [2];
  char cStack_809;
  long lStack_808;
  undefined8 *puStack_800;
  undefined8 *puStack_7f8;
  undefined8 *puStack_7f0;
  undefined **ppuStack_7e8;
  undefined **ppuStack_7e0;
  undefined **ppuStack_7d8;
  undefined8 ***pppuStack_7d0;
  undefined *puStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined1 *puStack_7a8;
  undefined8 auStack_7a0 [2];
  char cStack_789;
  long lStack_788;
  undefined8 *puStack_780;
  undefined8 *puStack_778;
  undefined8 *puStack_770;
  long *plStack_768;
  undefined **ppuStack_760;
  undefined **ppuStack_758;
  undefined8 ***pppuStack_750;
  undefined *puStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined1 *puStack_728;
  undefined8 auStack_720 [2];
  char cStack_709;
  long lStack_708;
  undefined8 *puStack_700;
  undefined8 *puStack_6f8;
  undefined8 *puStack_6f0;
  long *plStack_6e8;
  undefined **ppuStack_6e0;
  undefined **ppuStack_6d8;
  undefined8 ***pppuStack_6d0;
  undefined *puStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined1 *puStack_6a8;
  undefined8 auStack_6a0 [2];
  char cStack_689;
  long lStack_688;
  undefined8 *puStack_680;
  undefined8 *puStack_678;
  undefined8 *puStack_670;
  long *plStack_668;
  undefined **ppuStack_660;
  undefined **ppuStack_658;
  undefined8 ***pppuStack_650;
  undefined *puStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined1 *puStack_628;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 *puStack_5f0;
  long *plStack_5e8;
  undefined **ppuStack_5e0;
  undefined **ppuStack_5d8;
  undefined8 ***pppuStack_5d0;
  undefined *puStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined1 *puStack_5a8;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  undefined **ppuStack_568;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  undefined8 ***pppuStack_550;
  undefined *puStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined **ppuStack_4d8;
  undefined8 ***pppuStack_4d0;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  long *plStack_468;
  undefined **ppuStack_460;
  undefined **ppuStack_458;
  undefined8 ***pppuStack_450;
  undefined *puStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  long *plStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined8 ***pppuStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined8 ***pppuStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined8 ***pppuStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined8 ***pppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined **ppuStack_168;
  undefined8 *puStack_160;
  undefined **ppuStack_158;
  undefined1 ***pppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &stack0xfffffffffffffff0;
  lVar2 = *(long *)(param_2 + 8);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e1e258;
  puVar1 = &uStack_a0;
  uStack_28 = 0x105b0bc1c;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar4;
  puVar5 = param_4;
  _objc_retain(&PTR____CFConstantStringClassReference_110e1e258);
  if (lVar2 != 0) {
    plVar12 = *(long **)(lVar2 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e1e258);
    ppuVar3 = ppuVar4;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e1e258);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e1e258);
    unaff_x23 = auStack_80;
    func_0x00010002b838(auStack_80,ppuVar3);
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    func_0x00010007e1e8(&uStack_a0,auStack_80,&lStack_68,1);
    ppuVar3 = (undefined **)&UNK_110a030d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a030d8,&uStack_a0,param_4);
    puStack_88 = (undefined1 *)&uStack_a0;
    func_0x00010007e5dc(&puStack_88);
    puVar5 = puVar1;
    param_5 = param_4;
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
      puVar5 = puVar1;
      param_5 = param_4;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110e1e258);
  _objc_release(&PTR____CFConstantStringClassReference_110e1e258);
  __Unwind_Resume();
  puStack_a8 = &LAB_107ca57d8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar1 = puVar5;
  puVar11 = param_5;
  ppuStack_b0 = &puStack_30;
  _objc_retain(ppuVar3);
  _objc_retain(puVar5);
  puVar10 = (undefined8 *)0x0;
  if (ppuVar4 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar4[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,ppuVar4);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar1 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_100,puVar1);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    ppuVar7 = (undefined **)&UNK_110a03128;
    unaff_x23 = &uStack_138;
    puVar1 = &uStack_138;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03128,puVar1,param_5);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar2 = 0;
    puVar10 = auStack_118;
    puVar11 = param_5;
    do {
      if ((&cStack_e9)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(puVar5);
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar5);
  _objc_release(ppuVar3);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar9 = &uStack_1c0;
  puStack_148 = &LAB_107ca5a08;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  puVar8 = puVar1;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar10;
  ppuStack_168 = ppuVar4;
  puStack_160 = puVar5;
  ppuStack_158 = ppuVar3;
  pppuStack_150 = &ppuStack_b0;
  _objc_retain(ppuVar7);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar7;
      _objc_retainAutorelease(ppuVar7);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar7);
    unaff_x23 = auStack_1a0;
    func_0x00010002b838(auStack_1a0,ppuVar4);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    ppuVar6 = (undefined **)&UNK_110a03178;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03178,&uStack_1c0,puVar1);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    puVar8 = puVar9;
    puVar11 = puVar1;
    puVar10 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar8 = puVar9;
      puVar11 = puVar1;
      puVar10 = &uStack_1c0;
    }
  }
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar1 = &uStack_240;
  puStack_1c8 = &SUB_107ca5b7c;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar5 = puVar8;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar10;
  plStack_1e8 = plVar12;
  ppuStack_1e0 = ppuVar4;
  ppuStack_1d8 = ppuVar7;
  pppuStack_1d0 = &pppuStack_150;
  _objc_retain(ppuVar6);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    unaff_x23 = auStack_220;
    func_0x00010002b838(auStack_220,ppuVar4);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_208,1);
    ppuVar3 = (undefined **)&UNK_110a031c8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a031c8,&uStack_240,puVar8);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    puVar5 = puVar1;
    puVar11 = puVar8;
    puVar10 = &uStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar5 = puVar1;
      puVar11 = puVar8;
      puVar10 = &uStack_240;
    }
  }
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_2c0;
  puStack_248 = &LAB_107ca5cf0;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar1 = puVar5;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar10;
  plStack_268 = plVar12;
  ppuStack_260 = ppuVar4;
  ppuStack_258 = ppuVar6;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(ppuVar3);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x23 = auStack_2a0;
    func_0x00010002b838(auStack_2a0,ppuVar4);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_288,1);
    ppuVar7 = (undefined **)&UNK_110a03218;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03218,&uStack_2c0,puVar5);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    puVar1 = puVar8;
    puVar11 = puVar5;
    puVar10 = &uStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar1 = puVar8;
      puVar11 = puVar5;
      puVar10 = &uStack_2c0;
    }
  }
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_340;
  puStack_2c8 = &LAB_107ca5e64;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  puVar5 = puVar1;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar10;
  plStack_2e8 = plVar12;
  ppuStack_2e0 = ppuVar4;
  ppuStack_2d8 = ppuVar3;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(ppuVar7);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar7;
      _objc_retainAutorelease(ppuVar7);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar7);
    unaff_x23 = auStack_320;
    func_0x00010002b838(auStack_320,ppuVar4);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_308,1);
    ppuVar6 = (undefined **)&UNK_110a03268;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03268,&uStack_340,puVar1);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x00010007e5dc(&puStack_328);
    puVar5 = puVar8;
    puVar11 = puVar1;
    puVar10 = &uStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar5 = puVar8;
      puVar11 = puVar1;
      puVar10 = &uStack_340;
    }
  }
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_3c0;
  puStack_348 = &SUB_107ca5fd8;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar1 = puVar5;
  puStack_380 = unaff_x24;
  puStack_378 = unaff_x23;
  puStack_370 = puVar10;
  plStack_368 = plVar12;
  ppuStack_360 = ppuVar4;
  ppuStack_358 = ppuVar7;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(ppuVar6);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    unaff_x23 = auStack_3a0;
    func_0x00010002b838(auStack_3a0,ppuVar4);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x00010007e1e8(&uStack_3c0,auStack_3a0,&lStack_388,1);
    ppuVar3 = (undefined **)&UNK_110a032b8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a032b8,&uStack_3c0,puVar5);
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    puVar1 = puVar8;
    puVar11 = puVar5;
    puVar10 = &uStack_3c0;
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
      puVar1 = puVar8;
      puVar11 = puVar5;
      puVar10 = &uStack_3c0;
    }
  }
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_440;
  puStack_3c8 = &SUB_107ca614c;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar5 = puVar1;
  puStack_400 = unaff_x24;
  puStack_3f8 = unaff_x23;
  puStack_3f0 = puVar10;
  plStack_3e8 = plVar12;
  ppuStack_3e0 = ppuVar4;
  ppuStack_3d8 = ppuVar6;
  pppuStack_3d0 = &pppuStack_350;
  _objc_retain(ppuVar3);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x23 = auStack_420;
    func_0x00010002b838(auStack_420,ppuVar4);
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    func_0x00010007e1e8(&uStack_440,auStack_420,&lStack_408,1);
    ppuVar7 = (undefined **)&UNK_110a03308;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03308,&uStack_440,puVar1);
    puStack_428 = (undefined1 *)&uStack_440;
    func_0x00010007e5dc(&puStack_428);
    puVar5 = puVar8;
    puVar11 = puVar1;
    puVar10 = &uStack_440;
    if (cStack_409 < '\0') {
      __ZdlPv(auStack_420[0]);
      puVar5 = puVar8;
      puVar11 = puVar1;
      puVar10 = &uStack_440;
    }
  }
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_4c0;
  puStack_448 = &LAB_107ca62c0;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  puVar1 = puVar5;
  puStack_480 = unaff_x24;
  puStack_478 = unaff_x23;
  puStack_470 = puVar10;
  plStack_468 = plVar12;
  ppuStack_460 = ppuVar4;
  ppuStack_458 = ppuVar3;
  pppuStack_450 = &pppuStack_3d0;
  _objc_retain(ppuVar7);
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    ppuVar6 = (undefined **)&UNK_110a03358;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar13 = (undefined **)ppuVar13[1];
      _objc_retain(ppuVar7);
      if (ppuVar7 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar7;
        _objc_retainAutorelease(ppuVar7);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar7);
      unaff_x23 = auStack_4a0;
      func_0x00010002b838(auStack_4a0,ppuVar4);
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      func_0x00010007e1e8(&uStack_4c0,auStack_4a0,&lStack_488,1);
      puVar11 = (undefined8 *)((long)puVar5 * 10);
      ppuVar6 = (undefined **)&UNK_110a03358;
      (**(code **)(*ppuVar13 + 0x18))(ppuVar13,&UNK_110a03358,&uStack_4c0,puVar11);
      puStack_4a8 = (undefined1 *)&uStack_4c0;
      func_0x00010007e5dc(&puStack_4a8);
      puVar1 = puVar8;
      puVar10 = &uStack_4c0;
      if (cStack_489 < '\0') {
        __ZdlPv(auStack_4a0[0]);
        puVar1 = puVar8;
        puVar10 = &uStack_4c0;
      }
    }
  }
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  ppuVar14 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_540;
  puStack_4c8 = &SUB_107ca6458;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar5 = puVar1;
  puStack_500 = unaff_x24;
  puStack_4f8 = unaff_x23;
  puStack_4f0 = puVar10;
  ppuStack_4e8 = ppuVar13;
  ppuStack_4e0 = ppuVar4;
  ppuStack_4d8 = ppuVar7;
  pppuStack_4d0 = &pppuStack_450;
  _objc_retain(ppuVar6);
  if (ppuVar14 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar14[1];
    ppuVar3 = (undefined **)&UNK_110a033a8;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar14 = (undefined **)ppuVar14[1];
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar6;
        _objc_retainAutorelease(ppuVar6);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar6);
      unaff_x23 = auStack_520;
      func_0x00010002b838(auStack_520,ppuVar4);
      uStack_540 = 0;
      uStack_538 = 0;
      uStack_530 = 0;
      func_0x00010007e1e8(&uStack_540,auStack_520,&lStack_508,1);
      ppuVar3 = (undefined **)&UNK_110a033a8;
      (**(code **)(*ppuVar14 + 0x18))(ppuVar14,&UNK_110a033a8,&uStack_540,puVar1);
      puStack_528 = (undefined1 *)&uStack_540;
      func_0x00010007e5dc(&puStack_528);
      puVar5 = puVar8;
      puVar11 = puVar1;
      puVar10 = &uStack_540;
      if (cStack_509 < '\0') {
        __ZdlPv(auStack_520[0]);
        puVar5 = puVar8;
        puVar11 = puVar1;
        puVar10 = &uStack_540;
      }
    }
  }
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_5c0;
  puStack_548 = &SUB_107ca65ec;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar1 = puVar5;
  puStack_580 = unaff_x24;
  puStack_578 = unaff_x23;
  puStack_570 = puVar10;
  ppuStack_568 = ppuVar14;
  ppuStack_560 = ppuVar4;
  ppuStack_558 = ppuVar6;
  pppuStack_550 = &pppuStack_4d0;
  _objc_retain(ppuVar3);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x23 = auStack_5a0;
    func_0x00010002b838(auStack_5a0,ppuVar4);
    uStack_5c0 = 0;
    uStack_5b8 = 0;
    uStack_5b0 = 0;
    func_0x00010007e1e8(&uStack_5c0,auStack_5a0,&lStack_588,1);
    ppuVar7 = (undefined **)&UNK_110a033f8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a033f8,&uStack_5c0,puVar5);
    puStack_5a8 = (undefined1 *)&uStack_5c0;
    func_0x00010007e5dc(&puStack_5a8);
    puVar1 = puVar8;
    puVar11 = puVar5;
    puVar10 = &uStack_5c0;
    if (cStack_589 < '\0') {
      __ZdlPv(auStack_5a0[0]);
      puVar1 = puVar8;
      puVar11 = puVar5;
      puVar10 = &uStack_5c0;
    }
  }
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_640;
  puStack_5c8 = &LAB_107ca6760;
  lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  puVar5 = puVar1;
  puStack_600 = unaff_x24;
  puStack_5f8 = unaff_x23;
  puStack_5f0 = puVar10;
  plStack_5e8 = plVar12;
  ppuStack_5e0 = ppuVar4;
  ppuStack_5d8 = ppuVar3;
  pppuStack_5d0 = &pppuStack_550;
  _objc_retain(ppuVar7);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar7;
      _objc_retainAutorelease(ppuVar7);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar7);
    unaff_x23 = auStack_620;
    func_0x00010002b838(auStack_620,ppuVar4);
    uStack_640 = 0;
    uStack_638 = 0;
    uStack_630 = 0;
    func_0x00010007e1e8(&uStack_640,auStack_620,&lStack_608,1);
    ppuVar6 = (undefined **)&UNK_110a03448;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03448,&uStack_640,puVar1);
    puStack_628 = (undefined1 *)&uStack_640;
    func_0x00010007e5dc(&puStack_628);
    puVar5 = puVar8;
    puVar11 = puVar1;
    puVar10 = &uStack_640;
    if (cStack_609 < '\0') {
      __ZdlPv(auStack_620[0]);
      puVar5 = puVar8;
      puVar11 = puVar1;
      puVar10 = &uStack_640;
    }
  }
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_608) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_6c0;
  puStack_648 = &SUB_107ca68d4;
  lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar1 = puVar5;
  puStack_680 = unaff_x24;
  puStack_678 = unaff_x23;
  puStack_670 = puVar10;
  plStack_668 = plVar12;
  ppuStack_660 = ppuVar4;
  ppuStack_658 = ppuVar7;
  pppuStack_650 = &pppuStack_5d0;
  _objc_retain(ppuVar6);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    unaff_x23 = auStack_6a0;
    func_0x00010002b838(auStack_6a0,ppuVar4);
    uStack_6c0 = 0;
    uStack_6b8 = 0;
    uStack_6b0 = 0;
    func_0x00010007e1e8(&uStack_6c0,auStack_6a0,&lStack_688,1);
    ppuVar3 = (undefined **)&UNK_110a03498;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03498,&uStack_6c0,puVar5);
    puStack_6a8 = (undefined1 *)&uStack_6c0;
    func_0x00010007e5dc(&puStack_6a8);
    puVar1 = puVar8;
    puVar11 = puVar5;
    puVar10 = &uStack_6c0;
    if (cStack_689 < '\0') {
      __ZdlPv(auStack_6a0[0]);
      puVar1 = puVar8;
      puVar11 = puVar5;
      puVar10 = &uStack_6c0;
    }
  }
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_688) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_740;
  puStack_6c8 = &LAB_107ca6a48;
  lStack_708 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar5 = puVar1;
  puStack_700 = unaff_x24;
  puStack_6f8 = unaff_x23;
  puStack_6f0 = puVar10;
  plStack_6e8 = plVar12;
  ppuStack_6e0 = ppuVar4;
  ppuStack_6d8 = ppuVar6;
  pppuStack_6d0 = &pppuStack_650;
  _objc_retain(ppuVar3);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x23 = auStack_720;
    func_0x00010002b838(auStack_720,ppuVar4);
    uStack_740 = 0;
    uStack_738 = 0;
    uStack_730 = 0;
    func_0x00010007e1e8(&uStack_740,auStack_720,&lStack_708,1);
    ppuVar7 = (undefined **)&UNK_110a034e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a034e8,&uStack_740,puVar1);
    puStack_728 = (undefined1 *)&uStack_740;
    func_0x00010007e5dc(&puStack_728);
    puVar5 = puVar8;
    puVar11 = puVar1;
    puVar10 = &uStack_740;
    if (cStack_709 < '\0') {
      __ZdlPv(auStack_720[0]);
      puVar5 = puVar8;
      puVar11 = puVar1;
      puVar10 = &uStack_740;
    }
  }
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_708) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_7c0;
  puStack_748 = &LAB_107ca6bbc;
  lStack_788 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  puVar1 = puVar5;
  puStack_780 = unaff_x24;
  puStack_778 = unaff_x23;
  puStack_770 = puVar10;
  plStack_768 = plVar12;
  ppuStack_760 = ppuVar4;
  ppuStack_758 = ppuVar3;
  pppuStack_750 = &pppuStack_6d0;
  _objc_retain(ppuVar7);
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    ppuVar6 = (undefined **)&UNK_110a03538;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar13 = (undefined **)ppuVar13[1];
      _objc_retain(ppuVar7);
      if (ppuVar7 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar7;
        _objc_retainAutorelease(ppuVar7);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar7);
      unaff_x23 = auStack_7a0;
      func_0x00010002b838(auStack_7a0,ppuVar4);
      uStack_7c0 = 0;
      uStack_7b8 = 0;
      uStack_7b0 = 0;
      func_0x00010007e1e8(&uStack_7c0,auStack_7a0,&lStack_788,1);
      puVar11 = (undefined8 *)((long)puVar5 * 10);
      ppuVar6 = (undefined **)&UNK_110a03538;
      (**(code **)(*ppuVar13 + 0x18))(ppuVar13,&UNK_110a03538,&uStack_7c0,puVar11);
      puStack_7a8 = (undefined1 *)&uStack_7c0;
      func_0x00010007e5dc(&puStack_7a8);
      puVar1 = puVar8;
      puVar10 = &uStack_7c0;
      if (cStack_789 < '\0') {
        __ZdlPv(auStack_7a0[0]);
        puVar1 = puVar8;
        puVar10 = &uStack_7c0;
      }
    }
  }
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_788) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  ppuVar14 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_840;
  puStack_7c8 = &SUB_107ca6d54;
  lStack_808 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar5 = puVar1;
  puStack_800 = unaff_x24;
  puStack_7f8 = unaff_x23;
  puStack_7f0 = puVar10;
  ppuStack_7e8 = ppuVar13;
  ppuStack_7e0 = ppuVar4;
  ppuStack_7d8 = ppuVar7;
  pppuStack_7d0 = &pppuStack_750;
  _objc_retain(ppuVar6);
  if (ppuVar14 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar14[1];
    ppuVar3 = (undefined **)&UNK_110a03588;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar14 = (undefined **)ppuVar14[1];
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar6;
        _objc_retainAutorelease(ppuVar6);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar6);
      unaff_x23 = auStack_820;
      func_0x00010002b838(auStack_820,ppuVar4);
      uStack_840 = 0;
      uStack_838 = 0;
      uStack_830 = 0;
      func_0x00010007e1e8(&uStack_840,auStack_820,&lStack_808,1);
      ppuVar3 = (undefined **)&UNK_110a03588;
      (**(code **)(*ppuVar14 + 0x18))(ppuVar14,&UNK_110a03588,&uStack_840,puVar1);
      puStack_828 = (undefined1 *)&uStack_840;
      func_0x00010007e5dc(&puStack_828);
      puVar5 = puVar8;
      puVar11 = puVar1;
      puVar10 = &uStack_840;
      if (cStack_809 < '\0') {
        __ZdlPv(auStack_820[0]);
        puVar5 = puVar8;
        puVar11 = puVar1;
        puVar10 = &uStack_840;
      }
    }
  }
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_808) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puStack_848 = &SUB_107ca6ee8;
  lStack_888 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar1 = puVar5;
  puVar8 = puVar11;
  puStack_880 = unaff_x24;
  puStack_878 = unaff_x23;
  puStack_870 = puVar10;
  ppuStack_868 = ppuVar14;
  ppuStack_860 = ppuVar4;
  ppuStack_858 = ppuVar6;
  pppuStack_850 = &pppuStack_7d0;
  _objc_retain(ppuVar3);
  _objc_retain(puVar5);
  puVar10 = (undefined8 *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x24 = auStack_8b8;
    func_0x00010002b838(auStack_8b8,ppuVar4);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar1 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_8a0,puVar1);
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    uStack_8c8 = 0;
    func_0x00010007e1e8(&uStack_8d8,auStack_8b8,&lStack_888,2);
    ppuVar7 = (undefined **)&UNK_110a035d8;
    unaff_x23 = &uStack_8d8;
    puVar1 = &uStack_8d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a035d8,puVar1,puVar11);
    puStack_8c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_8c0);
    lVar2 = 0;
    puVar10 = auStack_8b8;
    puVar8 = puVar11;
    do {
      if ((&cStack_889)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_8a0 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(puVar5);
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_888) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_8a1 < '\0') {
    __ZdlPv(auStack_8b8[0]);
  }
  _objc_release(puVar5);
  _objc_release(ppuVar3);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puStack_8e8 = &SUB_107ca7118;
  lStack_928 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  puVar11 = puVar1;
  puStack_920 = unaff_x24;
  puStack_918 = unaff_x23;
  puStack_910 = puVar10;
  ppuStack_908 = ppuVar4;
  puStack_900 = puVar5;
  ppuStack_8f8 = ppuVar3;
  pppuStack_8f0 = &pppuStack_850;
  _objc_retain(ppuVar7);
  _objc_retain(puVar1);
  puVar5 = (undefined8 *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar7;
      _objc_retainAutorelease(ppuVar7);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar7);
    unaff_x24 = auStack_958;
    func_0x00010002b838(auStack_958,ppuVar4);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar5 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_940,puVar5);
    uStack_978 = 0;
    uStack_970 = 0;
    uStack_968 = 0;
    func_0x00010007e1e8(&uStack_978,auStack_958,&lStack_928,2);
    ppuVar6 = (undefined **)&UNK_110a03628;
    unaff_x23 = &uStack_978;
    puVar11 = &uStack_978;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03628,puVar11,puVar8);
    puStack_960 = unaff_x23;
    func_0x00010007e5dc(&puStack_960);
    lVar2 = 0;
    puVar5 = auStack_958;
    do {
      if ((&cStack_929)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_940 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(puVar1);
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_928) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_941 < '\0') {
    __ZdlPv(auStack_958[0]);
  }
  _objc_release(puVar1);
  _objc_release(ppuVar7);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar8 = &uStack_a00;
  puStack_988 = &LAB_107ca7348;
  lStack_9c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar10 = puVar11;
  puStack_9c0 = unaff_x24;
  puStack_9b8 = unaff_x23;
  puStack_9b0 = puVar5;
  ppuStack_9a8 = ppuVar4;
  puStack_9a0 = puVar1;
  ppuStack_998 = ppuVar7;
  pppuStack_990 = &pppuStack_8f0;
  _objc_retain(ppuVar6);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    unaff_x23 = auStack_9e0;
    func_0x00010002b838(auStack_9e0,ppuVar4);
    uStack_a00 = 0;
    uStack_9f8 = 0;
    uStack_9f0 = 0;
    func_0x00010007e1e8(&uStack_a00,auStack_9e0,&lStack_9c8,1);
    ppuVar3 = (undefined **)&UNK_110a03678;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03678,&uStack_a00,puVar11);
    puStack_9e8 = (undefined1 *)&uStack_a00;
    func_0x00010007e5dc(&puStack_9e8);
    puVar10 = puVar8;
    puVar5 = &uStack_a00;
    if (cStack_9c9 < '\0') {
      __ZdlPv(auStack_9e0[0]);
      puVar10 = puVar8;
      puVar5 = &uStack_a00;
    }
  }
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_a80;
  puStack_a08 = &SUB_107ca74bc;
  lStack_a48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar1 = puVar10;
  puStack_a40 = unaff_x24;
  puStack_a38 = unaff_x23;
  puStack_a30 = puVar5;
  plStack_a28 = plVar12;
  ppuStack_a20 = ppuVar4;
  ppuStack_a18 = ppuVar6;
  pppuStack_a10 = &pppuStack_990;
  _objc_retain(ppuVar3);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x23 = auStack_a60;
    func_0x00010002b838(auStack_a60,ppuVar4);
    uStack_a80 = 0;
    uStack_a78 = 0;
    uStack_a70 = 0;
    func_0x00010007e1e8(&uStack_a80,auStack_a60,&lStack_a48,1);
    ppuVar7 = (undefined **)&UNK_110a036c8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a036c8,&uStack_a80,puVar10);
    puStack_a68 = (undefined1 *)&uStack_a80;
    func_0x00010007e5dc(&puStack_a68);
    puVar1 = puVar11;
    puVar5 = &uStack_a80;
    if (cStack_a49 < '\0') {
      __ZdlPv(auStack_a60[0]);
      puVar1 = puVar11;
      puVar5 = &uStack_a80;
    }
  }
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_b00;
  puStack_a88 = &SUB_107ca7630;
  lStack_ac8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  puVar10 = puVar1;
  puStack_ac0 = unaff_x24;
  puStack_ab8 = unaff_x23;
  puStack_ab0 = puVar5;
  plStack_aa8 = plVar12;
  ppuStack_aa0 = ppuVar4;
  ppuStack_a98 = ppuVar3;
  pppuStack_a90 = &pppuStack_a10;
  _objc_retain(ppuVar7);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar7;
      _objc_retainAutorelease(ppuVar7);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar7);
    unaff_x23 = auStack_ae0;
    func_0x00010002b838(auStack_ae0,ppuVar4);
    uStack_b00 = 0;
    uStack_af8 = 0;
    uStack_af0 = 0;
    func_0x00010007e1e8(&uStack_b00,auStack_ae0,&lStack_ac8,1);
    ppuVar6 = (undefined **)&UNK_110a03768;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a03768,&uStack_b00,puVar1);
    puStack_ae8 = (undefined1 *)&uStack_b00;
    func_0x00010007e5dc(&puStack_ae8);
    puVar10 = puVar11;
    puVar5 = &uStack_b00;
    if (cStack_ac9 < '\0') {
      __ZdlPv(auStack_ae0[0]);
      puVar10 = puVar11;
      puVar5 = &uStack_b00;
    }
  }
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ac8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_b80;
  puStack_b08 = &LAB_107ca77a4;
  lStack_b48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar1 = puVar10;
  puStack_b40 = unaff_x24;
  puStack_b38 = unaff_x23;
  puStack_b30 = puVar5;
  plStack_b28 = plVar12;
  ppuStack_b20 = ppuVar4;
  ppuStack_b18 = ppuVar7;
  pppuStack_b10 = &pppuStack_a90;
  _objc_retain(ppuVar6);
  plVar12 = (long *)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar4 = ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    unaff_x23 = auStack_b60;
    func_0x00010002b838(auStack_b60,ppuVar4);
    uStack_b80 = 0;
    uStack_b78 = 0;
    uStack_b70 = 0;
    func_0x00010007e1e8(&uStack_b80,auStack_b60,&lStack_b48,1);
    ppuVar3 = (undefined **)&UNK_110a037b8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a037b8,&uStack_b80,puVar10);
    puStack_b68 = (undefined1 *)&uStack_b80;
    func_0x00010007e5dc(&puStack_b68);
    puVar1 = puVar11;
    puVar5 = &uStack_b80;
    if (cStack_b49 < '\0') {
      __ZdlPv(auStack_b60[0]);
      puVar1 = puVar11;
      puVar5 = &uStack_b80;
    }
  }
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_c00;
  puStack_b88 = &SUB_107ca7918;
  lStack_bc8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar10 = puVar1;
  puStack_bc0 = unaff_x24;
  puStack_bb8 = unaff_x23;
  puStack_bb0 = puVar5;
  plStack_ba8 = plVar12;
  ppuStack_ba0 = ppuVar4;
  ppuStack_b98 = ppuVar6;
  pppuStack_b90 = &pppuStack_b10;
  _objc_retain(ppuVar3);
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    ppuVar7 = (undefined **)&UNK_110a038a8;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar13 = (undefined **)ppuVar13[1];
      _objc_retain(ppuVar3);
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar3;
        _objc_retainAutorelease(ppuVar3);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar3);
      unaff_x23 = auStack_be0;
      func_0x00010002b838(auStack_be0,ppuVar4);
      uStack_c00 = 0;
      uStack_bf8 = 0;
      uStack_bf0 = 0;
      func_0x00010007e1e8(&uStack_c00,auStack_be0,&lStack_bc8,1);
      ppuVar7 = (undefined **)&UNK_110a038a8;
      (**(code **)(*ppuVar13 + 0x18))(ppuVar13,&UNK_110a038a8,&uStack_c00,(long)puVar1 * 100);
      puStack_be8 = (undefined1 *)&uStack_c00;
      func_0x00010007e5dc(&puStack_be8);
      puVar10 = puVar11;
      puVar5 = &uStack_c00;
      if (cStack_bc9 < '\0') {
        __ZdlPv(auStack_be0[0]);
        puVar10 = puVar11;
        puVar5 = &uStack_c00;
      }
    }
  }
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_bc8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  ppuVar14 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_c80;
  puStack_c08 = &SUB_107ca7ab0;
  lStack_c48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  puVar1 = puVar10;
  puStack_c40 = unaff_x24;
  puStack_c38 = unaff_x23;
  puStack_c30 = puVar5;
  ppuStack_c28 = ppuVar13;
  ppuStack_c20 = ppuVar4;
  ppuStack_c18 = ppuVar3;
  pppuStack_c10 = &pppuStack_b90;
  _objc_retain(ppuVar7);
  if (ppuVar14 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar14[1];
    ppuVar6 = (undefined **)&UNK_110a03948;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar14 = (undefined **)ppuVar14[1];
      _objc_retain(ppuVar7);
      if (ppuVar7 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar7;
        _objc_retainAutorelease(ppuVar7);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar7);
      unaff_x23 = auStack_c60;
      func_0x00010002b838(auStack_c60,ppuVar4);
      uStack_c80 = 0;
      uStack_c78 = 0;
      uStack_c70 = 0;
      func_0x00010007e1e8(&uStack_c80,auStack_c60,&lStack_c48,1);
      ppuVar6 = (undefined **)&UNK_110a03948;
      (**(code **)(*ppuVar14 + 0x18))(ppuVar14,&UNK_110a03948,&uStack_c80,(long)puVar10 * 100);
      puStack_c68 = (undefined1 *)&uStack_c80;
      func_0x00010007e5dc(&puStack_c68);
      puVar1 = puVar11;
      puVar5 = &uStack_c80;
      if (cStack_c49 < '\0') {
        __ZdlPv(auStack_c60[0]);
        puVar1 = puVar11;
        puVar5 = &uStack_c80;
      }
    }
  }
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_d00;
  puStack_c88 = &SUB_107ca7c48;
  lStack_cc8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar10 = puVar1;
  puStack_cc0 = unaff_x24;
  puStack_cb8 = unaff_x23;
  puStack_cb0 = puVar5;
  ppuStack_ca8 = ppuVar14;
  ppuStack_ca0 = ppuVar4;
  ppuStack_c98 = ppuVar7;
  pppuStack_c90 = &pppuStack_c10;
  _objc_retain(ppuVar6);
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    ppuVar3 = (undefined **)&UNK_110a03a88;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar13 = (undefined **)ppuVar13[1];
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar6;
        _objc_retainAutorelease(ppuVar6);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar6);
      unaff_x23 = auStack_ce0;
      func_0x00010002b838(auStack_ce0,ppuVar4);
      uStack_d00 = 0;
      uStack_cf8 = 0;
      uStack_cf0 = 0;
      func_0x00010007e1e8(&uStack_d00,auStack_ce0,&lStack_cc8,1);
      ppuVar3 = (undefined **)&UNK_110a03a88;
      (**(code **)(*ppuVar13 + 0x18))(ppuVar13,&UNK_110a03a88,&uStack_d00,(long)puVar1 * 10);
      puStack_ce8 = (undefined1 *)&uStack_d00;
      func_0x00010007e5dc(&puStack_ce8);
      puVar10 = puVar11;
      puVar5 = &uStack_d00;
      if (cStack_cc9 < '\0') {
        __ZdlPv(auStack_ce0[0]);
        puVar10 = puVar11;
        puVar5 = &uStack_d00;
      }
    }
  }
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_cc8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar14 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_d80;
  puStack_d08 = &SUB_107ca7de0;
  lStack_d48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar1 = puVar10;
  puStack_d40 = unaff_x24;
  puStack_d38 = unaff_x23;
  puStack_d30 = puVar5;
  ppuStack_d28 = ppuVar13;
  ppuStack_d20 = ppuVar4;
  ppuStack_d18 = ppuVar6;
  pppuStack_d10 = &pppuStack_c90;
  _objc_retain(ppuVar3);
  if (ppuVar14 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar14[1];
    ppuVar7 = (undefined **)&UNK_110a03ad8;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar14 = (undefined **)ppuVar14[1];
      _objc_retain(ppuVar3);
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar3;
        _objc_retainAutorelease(ppuVar3);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar3);
      unaff_x23 = auStack_d60;
      func_0x00010002b838(auStack_d60,ppuVar4);
      uStack_d80 = 0;
      uStack_d78 = 0;
      uStack_d70 = 0;
      func_0x00010007e1e8(&uStack_d80,auStack_d60,&lStack_d48,1);
      ppuVar7 = (undefined **)&UNK_110a03ad8;
      (**(code **)(*ppuVar14 + 0x18))(ppuVar14,&UNK_110a03ad8,&uStack_d80,puVar10);
      puStack_d68 = (undefined1 *)&uStack_d80;
      func_0x00010007e5dc(&puStack_d68);
      puVar1 = puVar11;
      puVar5 = &uStack_d80;
      if (cStack_d49 < '\0') {
        __ZdlPv(auStack_d60[0]);
        puVar1 = puVar11;
        puVar5 = &uStack_d80;
      }
    }
  }
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_e00;
  puStack_d88 = &LAB_107ca7f74;
  lStack_dc8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  puVar10 = puVar1;
  puStack_dc0 = unaff_x24;
  puStack_db8 = unaff_x23;
  puStack_db0 = puVar5;
  ppuStack_da8 = ppuVar14;
  ppuStack_da0 = ppuVar4;
  ppuStack_d98 = ppuVar3;
  pppuStack_d90 = &pppuStack_d10;
  _objc_retain(ppuVar7);
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    ppuVar6 = (undefined **)&UNK_110a03b28;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar13 = (undefined **)ppuVar13[1];
      _objc_retain(ppuVar7);
      if (ppuVar7 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar7;
        _objc_retainAutorelease(ppuVar7);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar7);
      unaff_x23 = auStack_de0;
      func_0x00010002b838(auStack_de0,ppuVar4);
      uStack_e00 = 0;
      uStack_df8 = 0;
      uStack_df0 = 0;
      func_0x00010007e1e8(&uStack_e00,auStack_de0,&lStack_dc8,1);
      ppuVar6 = (undefined **)&UNK_110a03b28;
      (**(code **)(*ppuVar13 + 0x18))(ppuVar13,&UNK_110a03b28,&uStack_e00,(long)puVar1 * 10);
      puStack_de8 = (undefined1 *)&uStack_e00;
      func_0x00010007e5dc(&puStack_de8);
      puVar10 = puVar11;
      puVar5 = &uStack_e00;
      if (cStack_dc9 < '\0') {
        __ZdlPv(auStack_de0[0]);
        puVar10 = puVar11;
        puVar5 = &uStack_e00;
      }
    }
  }
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_dc8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  ppuVar14 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_e80;
  puStack_e08 = &LAB_107ca810c;
  lStack_e48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar1 = puVar10;
  puStack_e40 = unaff_x24;
  puStack_e38 = unaff_x23;
  puStack_e30 = puVar5;
  ppuStack_e28 = ppuVar13;
  ppuStack_e20 = ppuVar4;
  ppuStack_e18 = ppuVar7;
  pppuStack_e10 = &pppuStack_d90;
  _objc_retain(ppuVar6);
  if (ppuVar14 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar14[1];
    ppuVar3 = (undefined **)&UNK_110a03b78;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar14 = (undefined **)ppuVar14[1];
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar6;
        _objc_retainAutorelease(ppuVar6);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar6);
      unaff_x23 = auStack_e60;
      func_0x00010002b838(auStack_e60,ppuVar4);
      uStack_e80 = 0;
      uStack_e78 = 0;
      uStack_e70 = 0;
      func_0x00010007e1e8(&uStack_e80,auStack_e60,&lStack_e48,1);
      ppuVar3 = (undefined **)&UNK_110a03b78;
      (**(code **)(*ppuVar14 + 0x18))(ppuVar14,&UNK_110a03b78,&uStack_e80,(long)puVar10 * 10);
      puStack_e68 = (undefined1 *)&uStack_e80;
      func_0x00010007e5dc(&puStack_e68);
      puVar1 = puVar11;
      puVar5 = &uStack_e80;
      if (cStack_e49 < '\0') {
        __ZdlPv(auStack_e60[0]);
        puVar1 = puVar11;
        puVar5 = &uStack_e80;
      }
    }
  }
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  puVar11 = &uStack_f00;
  puStack_e88 = &LAB_107ca82a4;
  ppppuVar15 = &pppuStack_e90;
  lStack_ec8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar10 = puVar1;
  puStack_ec0 = unaff_x24;
  puStack_eb8 = unaff_x23;
  puStack_eb0 = puVar5;
  ppuStack_ea8 = ppuVar14;
  ppuStack_ea0 = ppuVar4;
  ppuStack_e98 = ppuVar6;
  pppuStack_e90 = &pppuStack_e10;
  _objc_retain(ppuVar3);
  if (ppuVar13 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar13[1];
    ppuVar7 = (undefined **)&UNK_110a03bc8;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      ppuVar13 = (undefined **)ppuVar13[1];
      _objc_retain(ppuVar3);
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = ppuVar3;
        _objc_retainAutorelease(ppuVar3);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar3);
      unaff_x23 = auStack_ee0;
      func_0x00010002b838(auStack_ee0,ppuVar4);
      uStack_f00 = 0;
      uStack_ef8 = 0;
      uStack_ef0 = 0;
      func_0x00010007e1e8(&uStack_f00,auStack_ee0,&lStack_ec8,1);
      ppuVar7 = (undefined **)&UNK_110a03bc8;
      (**(code **)(*ppuVar13 + 0x18))(ppuVar13,&UNK_110a03bc8,&uStack_f00,(long)puVar1 * 10);
      puStack_ee8 = (undefined1 *)&uStack_f00;
      func_0x00010007e5dc(&puStack_ee8);
      puVar10 = puVar11;
      puVar5 = &uStack_f00;
      if (cStack_ec9 < '\0') {
        __ZdlPv(auStack_ee0[0]);
        puVar10 = puVar11;
        puVar5 = &uStack_f00;
      }
    }
  }
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_ec8) {
    ___stack_chk_fail();
    _objc_release(ppuVar3);
    _objc_release(ppuVar3);
    puVar16 = &UNK_107ca843c;
    ppuVar6 = ppuVar4;
    __Unwind_Resume();
    puVar1 = &uStack_f00;
    while( true ) {
      *(undefined8 **)((long)puVar1 + -0x40) = unaff_x24;
      *(undefined8 **)((long)puVar1 + -0x38) = unaff_x23;
      *(undefined8 **)((long)puVar1 + -0x30) = puVar5;
      *(undefined ***)((long)puVar1 + -0x28) = ppuVar13;
      *(undefined ***)((long)puVar1 + -0x20) = ppuVar4;
      *(undefined ***)((long)puVar1 + -0x18) = ppuVar3;
      *(undefined8 *****)((long)puVar1 + -0x10) = ppppuVar15;
      *(undefined **)((long)puVar1 + -8) = puVar16;
      *(undefined8 *)((long)puVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      ppuVar3 = ppuVar7;
      _objc_retain(ppuVar7);
      ppuVar13 = ppuVar6;
      dVar17 = param_1;
      if (ppuVar6 != (undefined **)0x0) {
        plVar12 = (long *)ppuVar6[1];
        ppuVar3 = (undefined **)&UNK_110a03c68;
        (**(code **)(*plVar12 + 0x28))();
        dVar17 = param_1;
        if ((int)plVar12 != 0) {
          ppuVar13 = (undefined **)ppuVar6[1];
          _objc_retain(ppuVar7);
          if (ppuVar7 == (undefined **)0x0) {
            ppuVar4 = (undefined **)&UNK_10f44f7d9;
            dVar17 = param_1;
          }
          else {
            ppuVar4 = ppuVar7;
            _objc_retainAutorelease(ppuVar7);
            func_0x00010bdc3520();
            dVar17 = param_1;
          }
          _objc_release(ppuVar7);
          unaff_x23 = (undefined8 *)((long)puVar1 + -0x60);
          func_0x00010002b838((undefined1 *)((long)puVar1 + -0x60),ppuVar4);
          *(undefined8 *)((long)puVar1 + -0x80) = 0;
          *(undefined8 *)((long)puVar1 + -0x78) = 0;
          *(undefined8 *)((long)puVar1 + -0x70) = 0;
          func_0x00010007e1e8((undefined1 *)((long)puVar1 + -0x80),
                              (undefined1 *)((long)puVar1 + -0x60),
                              (undefined1 *)((long)puVar1 + -0x48),1);
          ppuVar3 = (undefined **)&UNK_110a03c68;
          (**(code **)(*ppuVar13 + 0x18))
                    (ppuVar13,&UNK_110a03c68,(undefined1 *)((long)puVar1 + -0x80),puVar10);
          *(undefined1 **)((long)puVar1 + -0x68) = (undefined1 *)((long)puVar1 + -0x80);
          func_0x00010007e5dc((undefined1 *)((long)puVar1 + -0x68));
          puVar5 = (undefined8 *)((long)puVar1 + -0x80);
          if (*(char *)((long)puVar1 + -0x49) < '\0') {
            __ZdlPv(*(undefined8 *)((long)puVar1 + -0x60));
            puVar5 = (undefined8 *)((long)puVar1 + -0x80);
          }
        }
      }
      ppuVar4 = ppuVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x48)) break;
      ___stack_chk_fail();
      _objc_release(ppuVar7);
      _objc_release(ppuVar7);
      ppuVar6 = ppuVar4;
      __Unwind_Resume();
      *(undefined8 *)((long)puVar1 + -0xb0) = unaff_d9;
      *(double *)((long)puVar1 + -0xa8) = unaff_d8;
      *(undefined ***)((long)puVar1 + -0xa0) = ppuVar4;
      *(undefined ***)((long)puVar1 + -0x98) = ppuVar7;
      *(undefined1 **)((long)puVar1 + -0x90) = (undefined1 *)((long)puVar1 + -0x10);
      *(undefined **)((long)puVar1 + -0x88) = &LAB_107ca85d0;
      ppppuVar15 = (undefined8 ****)((long)puVar1 + -0x90);
      _objc_retain(ppuVar3);
      if (ppuVar6 == (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
        return;
      }
      param_1 = dVar17 * 1000.0;
      puVar10 = (undefined8 *)(long)param_1;
      puVar16 = &UNK_107ca8614;
      puVar1 = (undefined8 *)((long)puVar1 + -0xb0);
      ppuVar7 = ppuVar3;
      ppuVar4 = ppuVar6;
      unaff_d8 = dVar17;
    }
    return;
  }
  return;
}



/* Entry: 105b0bc34; end: 105b0bc43; -[SCStoriesGrapheneMetricsEmitter logCustomStoryNewStoryActionsImpWithStyle:] */

/* WARNING: Possible PIC construction at 0x000107ca0084: Changing call to branch */

void FUN_105b0bc34(double param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 ***pppuVar10;
  undefined *puVar11;
  double dVar12;
  double unaff_d8;
  undefined8 unaff_d9;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 *puStack_4e8;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 **ppuStack_490;
  undefined *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 **ppuStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 **ppuStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 **ppuStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 **ppuStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 **ppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_2 + 8);
  puVar7 = (undefined1 *)0x1;
  puVar1 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_4;
  _objc_retain(param_4);
  if (lVar2 != 0) {
    plVar9 = *(long **)(lVar2 + 8);
    _objc_retain(param_4);
    if (param_4 == (long *)0x0) {
      plVar3 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar3 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,plVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    plVar3 = (long *)&UNK_110a01d28;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a01d28,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined1 *)puVar1;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined1 *)puVar1;
      unaff_x22 = &uStack_80;
    }
  }
  plVar9 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_4);
  __Unwind_Resume();
  puVar1 = &uStack_100;
  puStack_88 = &SUB_107c9f0d0;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar3;
  puVar8 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar3);
  if (plVar9 != (long *)0x0) {
    plVar9 = (long *)plVar9[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      plVar4 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar4 = plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = auStack_e0;
    func_0x00010002b838(auStack_e0,plVar4);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    plVar4 = (long *)&UNK_110a01d78;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a01d78,&uStack_100,puVar7);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar8 = (undefined1 *)puVar1;
    unaff_x22 = &uStack_100;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined1 *)puVar1;
      unaff_x22 = &uStack_100;
    }
  }
  plVar9 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  __Unwind_Resume();
  puVar1 = &uStack_180;
  puStack_108 = &LAB_107c9f244;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar4;
  puVar7 = puVar8;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar4);
  if (plVar9 != (long *)0x0) {
    plVar9 = (long *)plVar9[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      plVar3 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar3 = plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x23 = auStack_160;
    func_0x00010002b838(auStack_160,plVar3);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    plVar3 = (long *)&UNK_110a01dc8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a01dc8,&uStack_180,puVar8);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar7 = (undefined1 *)puVar1;
    unaff_x22 = &uStack_180;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar7 = (undefined1 *)puVar1;
      unaff_x22 = &uStack_180;
    }
  }
  plVar9 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  __Unwind_Resume();
  puVar1 = &uStack_200;
  puStack_188 = &SUB_107c9f3b8;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar3;
  puVar8 = puVar7;
  ppuStack_190 = &ppuStack_110;
  _objc_retain(plVar3);
  if (plVar9 != (long *)0x0) {
    plVar9 = (long *)plVar9[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      plVar4 = (long *)&UNK_10f44f7d9;
    }
    else {
      plVar4 = plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = auStack_1e0;
    func_0x00010002b838(auStack_1e0,plVar4);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    plVar4 = (long *)&UNK_110a01e18;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a01e18,&uStack_200,puVar7);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar8 = (undefined1 *)puVar1;
    unaff_x22 = &uStack_200;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar8 = (undefined1 *)puVar1;
      unaff_x22 = &uStack_200;
    }
  }
  plVar9 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  __Unwind_Resume();
  puVar1 = &uStack_280;
  puStack_208 = &SUB_107c9f52c;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar4;
  puVar7 = puVar8;
  ppuStack_210 = &ppuStack_190;
  _objc_retain(plVar4);
  if (plVar9 != (long *)0x0) {
    plVar5 = (long *)plVar9[1];
    plVar3 = (long *)&UNK_110a01e68;
    (**(code **)(*plVar5 + 0x28))();
    if ((int)plVar5 != 0) {
      plVar9 = (long *)plVar9[1];
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        plVar3 = (long *)&UNK_10f44f7d9;
      }
      else {
        plVar3 = plVar4;
        _objc_retainAutorelease(plVar4);
        func_0x00010bdc3520();
      }
      _objc_release(plVar4);
      unaff_x23 = auStack_260;
      func_0x00010002b838(auStack_260,plVar3);
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_270 = 0;
      func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
      plVar3 = (long *)&UNK_110a01e68;
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a01e68,&uStack_280,(long)puVar8 * 10);
      puStack_268 = (undefined1 *)&uStack_280;
      func_0x00010007e5dc(&puStack_268);
      puVar7 = (undefined1 *)puVar1;
      unaff_x22 = &uStack_280;
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
        puVar7 = (undefined1 *)puVar1;
        unaff_x22 = &uStack_280;
      }
    }
  }
  plVar9 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  __Unwind_Resume();
  puVar1 = &uStack_300;
  puStack_288 = &SUB_107c9f6c4;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar3;
  puVar8 = puVar7;
  ppuStack_290 = &ppuStack_210;
  _objc_retain(plVar3);
  if (plVar9 != (long *)0x0) {
    plVar5 = (long *)plVar9[1];
    plVar4 = (long *)&UNK_110a01eb8;
    (**(code **)(*plVar5 + 0x28))();
    if ((int)plVar5 != 0) {
      plVar9 = (long *)plVar9[1];
      _objc_retain(plVar3);
      if (plVar3 == (long *)0x0) {
        plVar4 = (long *)&UNK_10f44f7d9;
      }
      else {
        plVar4 = plVar3;
        _objc_retainAutorelease(plVar3);
        func_0x00010bdc3520();
      }
      _objc_release(plVar3);
      unaff_x23 = auStack_2e0;
      func_0x00010002b838(auStack_2e0,plVar4);
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
      plVar4 = (long *)&UNK_110a01eb8;
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a01eb8,&uStack_300,puVar7);
      puStack_2e8 = (undefined1 *)&uStack_300;
      func_0x00010007e5dc(&puStack_2e8);
      puVar8 = (undefined1 *)puVar1;
      unaff_x22 = &uStack_300;
      if (cStack_2c9 < '\0') {
        __ZdlPv(auStack_2e0[0]);
        puVar8 = (undefined1 *)puVar1;
        unaff_x22 = &uStack_300;
      }
    }
  }
  plVar9 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  __Unwind_Resume();
  puVar1 = &uStack_380;
  puStack_308 = &SUB_107c9f858;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar4;
  puVar7 = puVar8;
  ppuStack_310 = &ppuStack_290;
  _objc_retain(plVar4);
  if (plVar9 != (long *)0x0) {
    plVar5 = (long *)plVar9[1];
    plVar3 = (long *)&UNK_110a01f08;
    (**(code **)(*plVar5 + 0x28))();
    if ((int)plVar5 != 0) {
      plVar9 = (long *)plVar9[1];
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        plVar3 = (long *)&UNK_10f44f7d9;
      }
      else {
        plVar3 = plVar4;
        _objc_retainAutorelease(plVar4);
        func_0x00010bdc3520();
      }
      _objc_release(plVar4);
      unaff_x23 = auStack_360;
      func_0x00010002b838(auStack_360,plVar3);
      uStack_380 = 0;
      uStack_378 = 0;
      uStack_370 = 0;
      func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
      plVar3 = (long *)&UNK_110a01f08;
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a01f08,&uStack_380,puVar8);
      puStack_368 = (undefined1 *)&uStack_380;
      func_0x00010007e5dc(&puStack_368);
      puVar7 = (undefined1 *)puVar1;
      unaff_x22 = &uStack_380;
      if (cStack_349 < '\0') {
        __ZdlPv(auStack_360[0]);
        puVar7 = (undefined1 *)puVar1;
        unaff_x22 = &uStack_380;
      }
    }
  }
  plVar9 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  __Unwind_Resume();
  puVar1 = &uStack_400;
  puStack_388 = &SUB_107c9f9ec;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar3;
  puVar8 = puVar7;
  ppuStack_390 = &ppuStack_310;
  _objc_retain(plVar3);
  if (plVar9 != (long *)0x0) {
    plVar5 = (long *)plVar9[1];
    plVar4 = (long *)&UNK_110a01f58;
    (**(code **)(*plVar5 + 0x28))();
    if ((int)plVar5 != 0) {
      plVar9 = (long *)plVar9[1];
      _objc_retain(plVar3);
      if (plVar3 == (long *)0x0) {
        plVar4 = (long *)&UNK_10f44f7d9;
      }
      else {
        plVar4 = plVar3;
        _objc_retainAutorelease(plVar3);
        func_0x00010bdc3520();
      }
      _objc_release(plVar3);
      unaff_x23 = auStack_3e0;
      func_0x00010002b838(auStack_3e0,plVar4);
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
      plVar4 = (long *)&UNK_110a01f58;
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a01f58,&uStack_400,(long)puVar7 * 10);
      puStack_3e8 = (undefined1 *)&uStack_400;
      func_0x00010007e5dc(&puStack_3e8);
      puVar8 = (undefined1 *)puVar1;
      unaff_x22 = &uStack_400;
      if (cStack_3c9 < '\0') {
        __ZdlPv(auStack_3e0[0]);
        puVar8 = (undefined1 *)puVar1;
        unaff_x22 = &uStack_400;
      }
    }
  }
  plVar9 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  __Unwind_Resume();
  puVar1 = &uStack_480;
  puStack_408 = &SUB_107c9fb84;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar4;
  puVar7 = puVar8;
  ppuStack_410 = &ppuStack_390;
  _objc_retain(plVar4);
  if (plVar9 != (long *)0x0) {
    plVar5 = (long *)plVar9[1];
    plVar3 = (long *)&UNK_110a01fa8;
    (**(code **)(*plVar5 + 0x28))();
    if ((int)plVar5 != 0) {
      plVar9 = (long *)plVar9[1];
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        plVar3 = (long *)&UNK_10f44f7d9;
      }
      else {
        plVar3 = plVar4;
        _objc_retainAutorelease(plVar4);
        func_0x00010bdc3520();
      }
      _objc_release(plVar4);
      unaff_x23 = auStack_460;
      func_0x00010002b838(auStack_460,plVar3);
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_448,1);
      plVar3 = (long *)&UNK_110a01fa8;
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a01fa8,&uStack_480,puVar8);
      puStack_468 = (undefined1 *)&uStack_480;
      func_0x00010007e5dc(&puStack_468);
      puVar7 = (undefined1 *)puVar1;
      unaff_x22 = &uStack_480;
      if (cStack_449 < '\0') {
        __ZdlPv(auStack_460[0]);
        puVar7 = (undefined1 *)puVar1;
        unaff_x22 = &uStack_480;
      }
    }
  }
  plVar9 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  __Unwind_Resume();
  puVar1 = &uStack_500;
  puStack_488 = &LAB_107c9fd18;
  pppuVar10 = &ppuStack_490;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar3;
  puVar8 = puVar7;
  ppuStack_490 = &ppuStack_410;
  _objc_retain(plVar3);
  if (plVar9 != (long *)0x0) {
    plVar5 = (long *)plVar9[1];
    plVar4 = (long *)&UNK_110a01ff8;
    (**(code **)(*plVar5 + 0x28))();
    if ((int)plVar5 != 0) {
      plVar9 = (long *)plVar9[1];
      _objc_retain(plVar3);
      if (plVar3 == (long *)0x0) {
        plVar4 = (long *)&UNK_10f44f7d9;
      }
      else {
        plVar4 = plVar3;
        _objc_retainAutorelease(plVar3);
        func_0x00010bdc3520();
      }
      _objc_release(plVar3);
      unaff_x23 = auStack_4e0;
      func_0x00010002b838(auStack_4e0,plVar4);
      uStack_500 = 0;
      uStack_4f8 = 0;
      uStack_4f0 = 0;
      func_0x00010007e1e8(&uStack_500,auStack_4e0,&lStack_4c8,1);
      plVar4 = (long *)&UNK_110a01ff8;
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a01ff8,&uStack_500,(long)puVar7 * 10);
      puStack_4e8 = (undefined1 *)&uStack_500;
      func_0x00010007e5dc(&puStack_4e8);
      puVar8 = (undefined1 *)puVar1;
      unaff_x22 = &uStack_500;
      if (cStack_4c9 < '\0') {
        __ZdlPv(auStack_4e0[0]);
        puVar8 = (undefined1 *)puVar1;
        unaff_x22 = &uStack_500;
      }
    }
  }
  plVar5 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  puVar11 = &UNK_107c9feb0;
  plVar6 = plVar5;
  __Unwind_Resume();
  puVar1 = &uStack_500;
  while( true ) {
    *(undefined8 *)((long)puVar1 + -0x40) = unaff_x24;
    *(undefined8 **)((long)puVar1 + -0x38) = unaff_x23;
    *(undefined8 **)((long)puVar1 + -0x30) = unaff_x22;
    *(long **)((long)puVar1 + -0x28) = plVar9;
    *(long **)((long)puVar1 + -0x20) = plVar5;
    *(long **)((long)puVar1 + -0x18) = plVar3;
    *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar10;
    *(undefined **)((long)puVar1 + -8) = puVar11;
    *(undefined8 *)((long)puVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    plVar3 = plVar4;
    _objc_retain(plVar4);
    plVar9 = plVar6;
    dVar12 = param_1;
    if (plVar6 != (long *)0x0) {
      plVar5 = (long *)plVar6[1];
      plVar3 = (long *)&UNK_110a02048;
      (**(code **)(*plVar5 + 0x28))();
      dVar12 = param_1;
      if ((int)plVar5 != 0) {
        plVar9 = (long *)plVar6[1];
        _objc_retain(plVar4);
        if (plVar4 == (long *)0x0) {
          plVar3 = (long *)&UNK_10f44f7d9;
          dVar12 = param_1;
        }
        else {
          plVar3 = plVar4;
          _objc_retainAutorelease(plVar4);
          func_0x00010bdc3520();
          dVar12 = param_1;
        }
        _objc_release(plVar4);
        unaff_x23 = (undefined8 *)((long)puVar1 + -0x60);
        func_0x00010002b838((undefined1 *)((long)puVar1 + -0x60),plVar3);
        *(undefined8 *)((long)puVar1 + -0x80) = 0;
        *(undefined8 *)((long)puVar1 + -0x78) = 0;
        *(undefined8 *)((long)puVar1 + -0x70) = 0;
        func_0x00010007e1e8((undefined1 *)((long)puVar1 + -0x80),
                            (undefined1 *)((long)puVar1 + -0x60),
                            (undefined1 *)((long)puVar1 + -0x48),1);
        plVar3 = (long *)&UNK_110a02048;
        (**(code **)(*plVar9 + 0x18))
                  (plVar9,&UNK_110a02048,(undefined1 *)((long)puVar1 + -0x80),puVar8);
        *(undefined1 **)((long)puVar1 + -0x68) = (undefined1 *)((long)puVar1 + -0x80);
        func_0x00010007e5dc((undefined1 *)((long)puVar1 + -0x68));
        unaff_x22 = (undefined8 *)((long)puVar1 + -0x80);
        if (*(char *)((long)puVar1 + -0x49) < '\0') {
          __ZdlPv(*(undefined8 *)((long)puVar1 + -0x60));
          unaff_x22 = (undefined8 *)((long)puVar1 + -0x80);
        }
      }
    }
    plVar5 = plVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x48)) break;
    ___stack_chk_fail();
    _objc_release(plVar4);
    _objc_release(plVar4);
    plVar6 = plVar5;
    __Unwind_Resume();
    *(undefined8 *)((long)puVar1 + -0xb0) = unaff_d9;
    *(double *)((long)puVar1 + -0xa8) = unaff_d8;
    *(long **)((long)puVar1 + -0xa0) = plVar5;
    *(long **)((long)puVar1 + -0x98) = plVar4;
    *(undefined1 **)((long)puVar1 + -0x90) = (undefined1 *)((long)puVar1 + -0x10);
    *(undefined **)((long)puVar1 + -0x88) = &LAB_107ca0044;
    pppuVar10 = (undefined8 ***)((long)puVar1 + -0x90);
    _objc_retain(plVar3);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(plVar3);
      return;
    }
    param_1 = dVar12 * 1000.0;
    puVar8 = (undefined1 *)(long)param_1;
    puVar11 = &UNK_107ca0088;
    puVar1 = (undefined8 *)((long)puVar1 + -0xb0);
    plVar4 = plVar3;
    plVar5 = plVar6;
    unaff_d8 = dVar12;
  }
  return;
}



/* Entry: 105b0bc44; end: 105b0bc9f; -[SCStoriesGrapheneMetricsEmitter logCustomStoryNewStoryActionsOptionSelectWithStyle:storyTypeSpecific:] */

void FUN_105b0bc44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c9ede8(*(undefined8 *)(param_1 + 8),puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0bca0; end: 105b0bcff; -[SCStoriesGrapheneMetricsEmitter logCustomStoryNewStoryActionsCreationWithWithStyle:storyTypeSpecific:result:] */

void FUN_105b0bca0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ddd478);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c9ec74(*(undefined8 *)(param_1 + 8),puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0bd00; end: 105b0bd73; -[SCStoriesGrapheneMetricsEmitter logStoriesFSNBlobEndpointIsD2SLink:callSite:] */

void FUN_105b0bd00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c9eb00(*(undefined8 *)(param_1 + 8),puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0bd74; end: 105b0bdff; -[SCStoriesGrapheneMetricsEmitter logStoriesBlizzardEventAuditWithUUIDAvailable:storyViewIdAvailable:storyType:storyTypeSpecific:] */

void FUN_105b0bd74(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dad398;
  }
  func_0x000107caa188(*(undefined8 *)(param_1 + 8),puVar3,ppuVar1,ppuVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105b0be00; end: 105b0be17; -[SCStoriesGrapheneMetricsEmitter logOperaStartLatency:steps:viewLocation:] */

/* WARNING: Removing unreachable block (ram,0x000107caac08) */
/* WARNING: Removing unreachable block (ram,0x000107cada38) */

long ** FUN_105b0be00(double param_1,long param_2,undefined8 param_3,long **param_4,
                     undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined *puVar1;
  long **pplVar2;
  long *plVar3;
  undefined8 *puVar4;
  long **pplVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  long **pplVar9;
  undefined8 *puVar10;
  long ***ppplVar11;
  int iVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long **pplVar19;
  long lVar20;
  undefined8 *unaff_x23;
  long **unaff_x24;
  long **pplStack_1280;
  undefined *puStack_1278;
  long **pplStack_1270;
  long **pplStack_1268;
  undefined8 ***pppuStack_1260;
  undefined *puStack_1258;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 *puStack_1230;
  undefined1 auStack_1228 [24];
  undefined8 auStack_1210 [2];
  char cStack_11f9;
  long lStack_11f8;
  long **pplStack_11f0;
  long **pplStack_11e8;
  long **pplStack_11e0;
  undefined8 *puStack_11d8;
  undefined8 *puStack_11d0;
  long **pplStack_11c8;
  undefined8 ***pppuStack_11c0;
  undefined *puStack_11b8;
  long *plStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  long **pplStack_1190;
  long *aplStack_1188 [3];
  undefined1 auStack_1170 [24];
  undefined1 auStack_1158 [24];
  undefined8 auStack_1140 [2];
  char cStack_1129;
  long lStack_1128;
  undefined8 ***pppuStack_10e0;
  undefined *puStack_10d8;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 *puStack_10b0;
  long *aplStack_10a8 [2];
  char cStack_1091;
  undefined8 auStack_1090 [2];
  char cStack_1079;
  long lStack_1078;
  long **pplStack_1070;
  long **pplStack_1068;
  undefined8 *puStack_1060;
  long *plStack_1058;
  long **pplStack_1050;
  long **pplStack_1048;
  undefined8 ***pppuStack_1040;
  undefined *puStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined1 *puStack_1018;
  long *aplStack_1010 [2];
  char cStack_ff9;
  long lStack_ff8;
  long **pplStack_ff0;
  long **pplStack_fe8;
  undefined8 *puStack_fe0;
  long *plStack_fd8;
  long **pplStack_fd0;
  long **pplStack_fc8;
  undefined8 ***pppuStack_fc0;
  undefined *puStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined1 *puStack_f98;
  long *aplStack_f90 [2];
  char cStack_f79;
  long lStack_f78;
  long **pplStack_f70;
  long **pplStack_f68;
  undefined8 *puStack_f60;
  long *plStack_f58;
  long **pplStack_f50;
  long **pplStack_f48;
  undefined8 ***pppuStack_f40;
  undefined *puStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined1 *puStack_f18;
  long *aplStack_f10 [2];
  char cStack_ef9;
  long lStack_ef8;
  long **pplStack_ef0;
  long **pplStack_ee8;
  undefined8 *puStack_ee0;
  long *plStack_ed8;
  long **pplStack_ed0;
  long **pplStack_ec8;
  undefined8 ***pppuStack_ec0;
  undefined *puStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined1 *puStack_e98;
  long *aplStack_e90 [2];
  char cStack_e79;
  long lStack_e78;
  long **pplStack_e70;
  long **pplStack_e68;
  undefined8 *puStack_e60;
  long *plStack_e58;
  long **pplStack_e50;
  long **pplStack_e48;
  undefined8 ***pppuStack_e40;
  undefined *puStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined1 *puStack_e18;
  long *aplStack_e10 [2];
  char cStack_df9;
  long lStack_df8;
  long **pplStack_df0;
  long **pplStack_de8;
  undefined8 *puStack_de0;
  long *plStack_dd8;
  long **pplStack_dd0;
  long **pplStack_dc8;
  undefined8 ***pppuStack_dc0;
  undefined *puStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined1 *puStack_d98;
  long *aplStack_d90 [2];
  char cStack_d79;
  long lStack_d78;
  long **pplStack_d70;
  long **pplStack_d68;
  undefined8 *puStack_d60;
  long *plStack_d58;
  long **pplStack_d50;
  long **pplStack_d48;
  undefined8 ***pppuStack_d40;
  undefined *puStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined1 *puStack_d18;
  long *aplStack_d10 [2];
  char cStack_cf9;
  long lStack_cf8;
  long **pplStack_cf0;
  long **pplStack_ce8;
  undefined8 *puStack_ce0;
  long *plStack_cd8;
  long **pplStack_cd0;
  long **pplStack_cc8;
  undefined8 ***pppuStack_cc0;
  undefined *puStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined1 *puStack_c98;
  long *aplStack_c90 [2];
  char cStack_c79;
  long lStack_c78;
  long **pplStack_c70;
  long **pplStack_c68;
  undefined8 *puStack_c60;
  long *plStack_c58;
  long **pplStack_c50;
  long **pplStack_c48;
  undefined8 ***pppuStack_c40;
  undefined *puStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined1 *puStack_c18;
  long *aplStack_c10 [2];
  char cStack_bf9;
  long lStack_bf8;
  long **pplStack_bf0;
  long **pplStack_be8;
  undefined8 *puStack_be0;
  long *plStack_bd8;
  long **pplStack_bd0;
  long **pplStack_bc8;
  undefined8 ***pppuStack_bc0;
  undefined *puStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined1 *puStack_b98;
  long *aplStack_b90 [2];
  char cStack_b79;
  long lStack_b78;
  long **pplStack_b70;
  long **pplStack_b68;
  undefined8 *puStack_b60;
  long *plStack_b58;
  long **pplStack_b50;
  long **pplStack_b48;
  undefined8 ***pppuStack_b40;
  undefined *puStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined1 *puStack_b18;
  long *aplStack_b10 [2];
  char cStack_af9;
  long lStack_af8;
  long **pplStack_af0;
  long **pplStack_ae8;
  undefined8 *puStack_ae0;
  long *plStack_ad8;
  long **pplStack_ad0;
  long **pplStack_ac8;
  undefined8 ***pppuStack_ac0;
  undefined *puStack_ab8;
  long alStack_ab0 [3];
  long *plStack_a98;
  long **applStack_a90 [2];
  char cStack_a79;
  long lStack_a78;
  undefined8 *puStack_a70;
  long *plStack_a68;
  long **pplStack_a60;
  long **pplStack_a58;
  undefined8 ***pppuStack_a50;
  undefined *puStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined1 *puStack_a28;
  long *aplStack_a20 [2];
  char cStack_a09;
  long lStack_a08;
  long **pplStack_a00;
  long **pplStack_9f8;
  undefined8 *puStack_9f0;
  long *plStack_9e8;
  long **pplStack_9e0;
  long **pplStack_9d8;
  undefined8 ***pppuStack_9d0;
  undefined *puStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined1 *puStack_9a8;
  long *aplStack_9a0 [2];
  char cStack_989;
  long lStack_988;
  long **pplStack_980;
  long **pplStack_978;
  undefined8 *puStack_970;
  long **pplStack_968;
  long **pplStack_960;
  long **pplStack_958;
  undefined8 ***pppuStack_950;
  undefined *puStack_948;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 *puStack_920;
  long *aplStack_918 [3];
  undefined8 auStack_900 [2];
  char cStack_8e9;
  long lStack_8e8;
  long **pplStack_8e0;
  long **pplStack_8d8;
  undefined8 *puStack_8d0;
  long **pplStack_8c8;
  long **pplStack_8c0;
  long **pplStack_8b8;
  undefined8 ***pppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 *puStack_880;
  long *aplStack_878 [3];
  undefined8 auStack_860 [2];
  char cStack_849;
  long lStack_848;
  long **pplStack_840;
  long **pplStack_838;
  undefined8 *puStack_830;
  long **pplStack_828;
  long **pplStack_820;
  long **pplStack_818;
  undefined8 ***pppuStack_810;
  undefined *puStack_808;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 *puStack_7e0;
  long *aplStack_7d8 [3];
  undefined8 auStack_7c0 [2];
  char cStack_7a9;
  long lStack_7a8;
  long **pplStack_7a0;
  long **pplStack_798;
  undefined8 *puStack_790;
  long **pplStack_788;
  long **pplStack_780;
  long **pplStack_778;
  undefined8 ***pppuStack_770;
  undefined *puStack_768;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 *puStack_740;
  long *aplStack_738 [3];
  undefined8 auStack_720 [2];
  char cStack_709;
  long lStack_708;
  long **pplStack_700;
  long **pplStack_6f8;
  undefined8 *puStack_6f0;
  long **pplStack_6e8;
  long **pplStack_6e0;
  long **pplStack_6d8;
  undefined8 ***pppuStack_6d0;
  undefined *puStack_6c8;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 *puStack_6a0;
  long *aplStack_698 [3];
  undefined8 auStack_680 [2];
  char cStack_669;
  long lStack_668;
  long **pplStack_660;
  long **pplStack_658;
  undefined8 *puStack_650;
  long **pplStack_648;
  long **pplStack_640;
  long **pplStack_638;
  undefined8 ***pppuStack_630;
  undefined *puStack_628;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 *puStack_600;
  long *aplStack_5f8 [3];
  undefined8 auStack_5e0 [2];
  char cStack_5c9;
  long lStack_5c8;
  long **pplStack_5c0;
  long **pplStack_5b8;
  undefined8 *puStack_5b0;
  long **pplStack_5a8;
  long **pplStack_5a0;
  long **pplStack_598;
  undefined8 ***pppuStack_590;
  undefined *puStack_588;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 *puStack_560;
  long *aplStack_558 [3];
  undefined8 auStack_540 [2];
  char cStack_529;
  long lStack_528;
  long **pplStack_520;
  long **pplStack_518;
  undefined8 *puStack_510;
  long **pplStack_508;
  long **pplStack_500;
  long **pplStack_4f8;
  undefined8 ***pppuStack_4f0;
  undefined *puStack_4e8;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 *puStack_4c0;
  long *aplStack_4b8 [3];
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  long **pplStack_480;
  long **pplStack_478;
  undefined8 *puStack_470;
  long **pplStack_468;
  long **pplStack_460;
  long **pplStack_458;
  undefined8 ***pppuStack_450;
  undefined *puStack_448;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 *puStack_420;
  long *aplStack_418 [3];
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  long **pplStack_3e0;
  long **pplStack_3d8;
  undefined8 *puStack_3d0;
  long **pplStack_3c8;
  long **pplStack_3c0;
  long **pplStack_3b8;
  undefined8 ***pppuStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  long *aplStack_378 [3];
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  long **pplStack_340;
  long **pplStack_338;
  undefined8 *puStack_330;
  long **pplStack_328;
  long **pplStack_320;
  long **pplStack_318;
  undefined8 ***pppuStack_310;
  undefined *puStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  long *aplStack_2d8 [3];
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  long **pplStack_2a0;
  long **pplStack_298;
  long **pplStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  long **pplStack_278;
  undefined8 ***pppuStack_270;
  undefined *puStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  long *aplStack_240 [3];
  undefined1 auStack_228 [24];
  undefined8 auStack_210 [2];
  char cStack_1f9;
  long lStack_1f8;
  undefined1 ***pppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  long **pplStack_160;
  undefined8 *puStack_158;
  long **pplStack_150;
  long *plStack_148;
  long **pplStack_140;
  long **pplStack_138;
  undefined1 **ppuStack_130;
  undefined *puStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  long **pplStack_e0;
  undefined8 *puStack_d8;
  long **pplStack_d0;
  long **pplStack_c8;
  undefined8 *puStack_c0;
  long **pplStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long *aplStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pplVar2 = *(long ***)(param_2 + 8);
  puVar15 = (undefined8 *)(long)param_1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar19 = param_4;
  puVar4 = param_5;
  puVar10 = puVar15;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (pplVar2 != (long **)0x0) {
    plVar3 = pplVar2[1];
    pplVar19 = (long **)&UNK_110a042a8;
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar3 != 0) {
      plVar3 = pplVar2[1];
      _objc_retain(param_4);
      if (param_4 == (long **)0x0) {
        pplVar19 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar19 = param_4;
        _objc_retainAutorelease(param_4);
        func_0x00010bdc3520();
      }
      _objc_release(param_4);
      unaff_x24 = aplStack_78;
      func_0x00010002b838(aplStack_78,pplVar19);
      _objc_retain(param_5);
      if (param_5 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f44f7d9;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar4 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_60,puVar4);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x00010007e1e8(&uStack_98,aplStack_78,&lStack_48,2);
      pplVar19 = (long **)&UNK_110a042a8;
      unaff_x23 = &uStack_98;
      puVar4 = &uStack_98;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      puStack_80 = unaff_x23;
      func_0x00010007e5dc(&puStack_80);
      lVar20 = 0;
      pplVar2 = aplStack_78;
      puVar10 = puVar15;
      do {
        if ((&cStack_49)[lVar20] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar20));
        }
        lVar20 = lVar20 + -0x18;
      } while (lVar20 != -0x30);
    }
  }
  _objc_release(param_5);
  pplVar5 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pplVar5;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  if (cStack_61 < '\0') {
    __ZdlPv(aplStack_78[0]);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  pplVar6 = pplVar5;
  __Unwind_Resume();
  pplVar7 = &plStack_120;
  puStack_a8 = &LAB_107caa698;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar9 = pplVar19;
  puVar15 = puVar4;
  pplStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  pplStack_d0 = pplVar2;
  pplStack_c8 = pplVar5;
  puStack_c0 = param_5;
  pplStack_b8 = param_4;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pplVar19);
  plVar3 = (long *)0x0;
  if (pplVar6 != (long **)0x0) {
    plVar3 = pplVar6[1];
    _objc_retain(pplVar19);
    if (pplVar19 == (long **)0x0) {
      pplVar2 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar2 = pplVar19;
      _objc_retainAutorelease(pplVar19);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar19);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,pplVar2);
    plStack_120 = (long *)0x0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&plStack_120,auStack_100,&lStack_e8,1);
    pplVar9 = (long **)&UNK_110a042f8;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    puStack_108 = (undefined1 *)&plStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar15 = pplVar7;
    puVar10 = puVar4;
    pplVar2 = &plStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar15 = pplVar7;
      puVar10 = puVar4;
      pplVar2 = &plStack_120;
    }
  }
  pplVar5 = pplVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pplVar5;
  }
  ___stack_chk_fail();
  _objc_release(pplVar19);
  _objc_release(pplVar19);
  pplVar7 = pplVar5;
  __Unwind_Resume();
  puVar13 = &uStack_1a0;
  puStack_128 = &SUB_107caa80c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar9;
  puVar4 = puVar15;
  pplStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  pplStack_150 = pplVar2;
  plStack_148 = plVar3;
  pplStack_140 = pplVar5;
  pplStack_138 = pplVar19;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pplVar9);
  if (pplVar7 != (long **)0x0) {
    plVar3 = pplVar7[1];
    _objc_retain(pplVar9);
    if (pplVar9 == (long **)0x0) {
      pplVar19 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar19 = pplVar9;
      _objc_retainAutorelease(pplVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar9);
    func_0x00010002b838(auStack_180,pplVar19);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    pplVar6 = (long **)&UNK_110a04348;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar4 = puVar13;
    puVar10 = puVar15;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar4 = puVar13;
      puVar10 = puVar15;
    }
  }
  pplVar19 = pplVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pplVar19;
  }
  ___stack_chk_fail();
  _objc_release(pplVar9);
  _objc_release(pplVar9);
  __Unwind_Resume();
  pplVar5 = &plStack_260;
  puStack_1a8 = &SUB_107caa980;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = pplVar6;
  puVar15 = puVar4;
  puVar13 = puVar10;
  puVar18 = param_6;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(pplVar6);
  _objc_retain(puVar4);
  _objc_retain(puVar10);
  if (pplVar19 != (long **)0x0) {
    plVar3 = pplVar19[1];
    _objc_retain(pplVar6);
    if (pplVar6 == (long **)0x0) {
      pplVar19 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar19 = pplVar6;
      _objc_retainAutorelease(pplVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar6);
    func_0x00010002b838(aplStack_240,pplVar19);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)&UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar15 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_228,puVar15);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)&UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar15 = puVar10;
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_210,puVar15);
    plStack_260 = (long *)0x0;
    uStack_258 = 0;
    uStack_250 = 0;
    func_0x00010007e1e8(&plStack_260,aplStack_240,&lStack_1f8,3);
    pplVar2 = (long **)&UNK_110a04398;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    puStack_248 = (undefined1 *)&plStack_260;
    func_0x00010007e5dc(&puStack_248);
    lVar20 = 0;
    puVar15 = pplVar5;
    puVar13 = param_6;
    do {
      if ((&cStack_1f9)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_210 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
      unaff_x24 = &plStack_260;
    } while (lVar20 != -0x48);
  }
  _objc_release(puVar10);
  _objc_release(puVar4);
  pplVar19 = pplVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return pplVar19;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  pplVar5 = aplStack_240;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != pplVar5);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(pplVar6);
  pplVar7 = pplVar19;
  __Unwind_Resume();
  puStack_268 = &SUB_107caac40;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar9 = pplVar2;
  puVar17 = puVar15;
  puVar16 = puVar13;
  pplStack_2a0 = unaff_x24;
  pplStack_298 = pplVar5;
  pplStack_290 = pplVar19;
  puStack_288 = puVar10;
  puStack_280 = puVar4;
  pplStack_278 = pplVar6;
  pppuStack_270 = &pppuStack_1b0;
  _objc_retain(pplVar2);
  pplVar19 = (long **)0x0;
  if (pplVar7 != (long **)0x0) {
    plVar3 = pplVar7[1];
    _objc_retain(pplVar2);
    if (pplVar2 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar2);
    unaff_x24 = aplStack_2d8;
    func_0x00010002b838(aplStack_2d8,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar15 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_2c0,puVar1);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    func_0x00010007e1e8(&uStack_2f8,aplStack_2d8,&lStack_2a8,2);
    pplVar9 = (long **)&UNK_110a043e8;
    puVar15 = &uStack_2f8;
    puVar17 = &uStack_2f8;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    puStack_2e0 = puVar15;
    func_0x00010007e5dc(&puStack_2e0);
    lVar20 = 0;
    pplVar19 = aplStack_2d8;
    puVar16 = puVar13;
    do {
      if ((&cStack_2a9)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  pplVar6 = pplVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return pplVar6;
  }
  ___stack_chk_fail();
  _objc_release(pplVar2);
  _objc_release(pplVar2);
  pplVar8 = pplVar6;
  __Unwind_Resume();
  puStack_308 = &SUB_107caae28;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = pplVar9;
  puVar4 = puVar17;
  puVar10 = puVar16;
  pplStack_340 = unaff_x24;
  pplStack_338 = pplVar5;
  puStack_330 = puVar15;
  pplStack_328 = pplVar19;
  pplStack_320 = pplVar6;
  pplStack_318 = pplVar2;
  pppuStack_310 = &pppuStack_270;
  _objc_retain(pplVar9);
  pplVar19 = (long **)0x0;
  if (pplVar8 != (long **)0x0) {
    plVar3 = pplVar8[1];
    _objc_retain(pplVar9);
    if (pplVar9 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar9;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar9);
    unaff_x24 = aplStack_378;
    func_0x00010002b838(aplStack_378,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar17 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_360,puVar1);
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    func_0x00010007e1e8(&uStack_398,aplStack_378,&lStack_348,2);
    pplVar7 = (long **)&UNK_110a04438;
    puVar17 = &uStack_398;
    puVar4 = &uStack_398;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    puStack_380 = puVar17;
    func_0x00010007e5dc(&puStack_380);
    lVar20 = 0;
    pplVar19 = aplStack_378;
    puVar10 = puVar16;
    do {
      if ((&cStack_349)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  pplVar2 = pplVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return pplVar2;
  }
  ___stack_chk_fail();
  _objc_release(pplVar9);
  _objc_release(pplVar9);
  pplVar8 = pplVar2;
  __Unwind_Resume();
  puStack_3a8 = &SUB_107cab010;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar7;
  puVar15 = puVar4;
  puVar13 = puVar10;
  pplStack_3e0 = unaff_x24;
  pplStack_3d8 = pplVar5;
  puStack_3d0 = puVar17;
  pplStack_3c8 = pplVar19;
  pplStack_3c0 = pplVar2;
  pplStack_3b8 = pplVar9;
  pppuStack_3b0 = &pppuStack_310;
  _objc_retain(pplVar7);
  pplVar19 = (long **)0x0;
  if (pplVar8 != (long **)0x0) {
    plVar3 = pplVar8[1];
    _objc_retain(pplVar7);
    if (pplVar7 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar7;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar7);
    unaff_x24 = aplStack_418;
    func_0x00010002b838(aplStack_418,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar4 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_400,puVar1);
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_428 = 0;
    func_0x00010007e1e8(&uStack_438,aplStack_418,&lStack_3e8,2);
    pplVar6 = (long **)&UNK_110a04488;
    puVar4 = &uStack_438;
    puVar15 = &uStack_438;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    puStack_420 = puVar4;
    func_0x00010007e5dc(&puStack_420);
    lVar20 = 0;
    pplVar19 = aplStack_418;
    puVar13 = puVar10;
    do {
      if ((&cStack_3e9)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_400 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  pplVar2 = pplVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return pplVar2;
  }
  ___stack_chk_fail();
  _objc_release(pplVar7);
  _objc_release(pplVar7);
  pplVar8 = pplVar2;
  __Unwind_Resume();
  puStack_448 = &SUB_107cab1f8;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar9 = pplVar6;
  puVar10 = puVar15;
  puVar17 = puVar13;
  pplStack_480 = unaff_x24;
  pplStack_478 = pplVar5;
  puStack_470 = puVar4;
  pplStack_468 = pplVar19;
  pplStack_460 = pplVar2;
  pplStack_458 = pplVar7;
  pppuStack_450 = &pppuStack_3b0;
  _objc_retain(pplVar6);
  pplVar19 = (long **)0x0;
  if (pplVar8 != (long **)0x0) {
    plVar3 = pplVar8[1];
    _objc_retain(pplVar6);
    if (pplVar6 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar6;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar6);
    unaff_x24 = aplStack_4b8;
    func_0x00010002b838(aplStack_4b8,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar15 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_4a0,puVar1);
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    func_0x00010007e1e8(&uStack_4d8,aplStack_4b8,&lStack_488,2);
    pplVar9 = (long **)&UNK_110a044d8;
    puVar15 = &uStack_4d8;
    puVar10 = &uStack_4d8;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    puStack_4c0 = puVar15;
    func_0x00010007e5dc(&puStack_4c0);
    lVar20 = 0;
    pplVar19 = aplStack_4b8;
    puVar17 = puVar13;
    do {
      if ((&cStack_489)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4a0 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  pplVar2 = pplVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return pplVar2;
  }
  ___stack_chk_fail();
  _objc_release(pplVar6);
  _objc_release(pplVar6);
  pplVar8 = pplVar2;
  __Unwind_Resume();
  puStack_4e8 = &SUB_107cab3e0;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = pplVar9;
  puVar4 = puVar10;
  puVar13 = puVar17;
  pplStack_520 = unaff_x24;
  pplStack_518 = pplVar5;
  puStack_510 = puVar15;
  pplStack_508 = pplVar19;
  pplStack_500 = pplVar2;
  pplStack_4f8 = pplVar6;
  pppuStack_4f0 = &pppuStack_450;
  _objc_retain(pplVar9);
  pplVar19 = (long **)0x0;
  if (pplVar8 != (long **)0x0) {
    plVar3 = pplVar8[1];
    _objc_retain(pplVar9);
    if (pplVar9 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar9;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar9);
    unaff_x24 = aplStack_558;
    func_0x00010002b838(aplStack_558,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar10 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_540,puVar1);
    uStack_578 = 0;
    uStack_570 = 0;
    uStack_568 = 0;
    func_0x00010007e1e8(&uStack_578,aplStack_558,&lStack_528,2);
    pplVar7 = (long **)&UNK_110a04528;
    puVar10 = &uStack_578;
    puVar4 = &uStack_578;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    puStack_560 = puVar10;
    func_0x00010007e5dc(&puStack_560);
    lVar20 = 0;
    pplVar19 = aplStack_558;
    puVar13 = puVar17;
    do {
      if ((&cStack_529)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_540 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  pplVar2 = pplVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return pplVar2;
  }
  ___stack_chk_fail();
  _objc_release(pplVar9);
  _objc_release(pplVar9);
  pplVar8 = pplVar2;
  __Unwind_Resume();
  puStack_588 = &SUB_107cab5c8;
  lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar7;
  puVar15 = puVar4;
  puVar17 = puVar13;
  pplStack_5c0 = unaff_x24;
  pplStack_5b8 = pplVar5;
  puStack_5b0 = puVar10;
  pplStack_5a8 = pplVar19;
  pplStack_5a0 = pplVar2;
  pplStack_598 = pplVar9;
  pppuStack_590 = &pppuStack_4f0;
  _objc_retain(pplVar7);
  pplVar19 = (long **)0x0;
  if (pplVar8 != (long **)0x0) {
    plVar3 = pplVar8[1];
    _objc_retain(pplVar7);
    if (pplVar7 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar7;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar7);
    unaff_x24 = aplStack_5f8;
    func_0x00010002b838(aplStack_5f8,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar4 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_5e0,puVar1);
    uStack_618 = 0;
    uStack_610 = 0;
    uStack_608 = 0;
    func_0x00010007e1e8(&uStack_618,aplStack_5f8,&lStack_5c8,2);
    pplVar6 = (long **)&UNK_110a04578;
    puVar4 = &uStack_618;
    puVar15 = &uStack_618;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    puStack_600 = puVar4;
    func_0x00010007e5dc(&puStack_600);
    lVar20 = 0;
    pplVar19 = aplStack_5f8;
    puVar17 = puVar13;
    do {
      if ((&cStack_5c9)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5e0 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  pplVar2 = pplVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
    return pplVar2;
  }
  ___stack_chk_fail();
  _objc_release(pplVar7);
  _objc_release(pplVar7);
  pplVar8 = pplVar2;
  __Unwind_Resume();
  puStack_628 = &SUB_107cab7b0;
  lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar9 = pplVar6;
  puVar10 = puVar15;
  puVar13 = puVar17;
  pplStack_660 = unaff_x24;
  pplStack_658 = pplVar5;
  puStack_650 = puVar4;
  pplStack_648 = pplVar19;
  pplStack_640 = pplVar2;
  pplStack_638 = pplVar7;
  pppuStack_630 = &pppuStack_590;
  _objc_retain(pplVar6);
  pplVar19 = (long **)0x0;
  if (pplVar8 != (long **)0x0) {
    plVar3 = pplVar8[1];
    _objc_retain(pplVar6);
    if (pplVar6 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar6;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar6);
    unaff_x24 = aplStack_698;
    func_0x00010002b838(aplStack_698,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar15 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_680,puVar1);
    uStack_6b8 = 0;
    uStack_6b0 = 0;
    uStack_6a8 = 0;
    func_0x00010007e1e8(&uStack_6b8,aplStack_698,&lStack_668,2);
    pplVar9 = (long **)&UNK_110a045c8;
    puVar15 = &uStack_6b8;
    puVar10 = &uStack_6b8;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    puStack_6a0 = puVar15;
    func_0x00010007e5dc(&puStack_6a0);
    lVar20 = 0;
    pplVar19 = aplStack_698;
    puVar13 = puVar17;
    do {
      if ((&cStack_669)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_680 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  pplVar2 = pplVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_668) {
    return pplVar2;
  }
  ___stack_chk_fail();
  _objc_release(pplVar6);
  _objc_release(pplVar6);
  pplVar8 = pplVar2;
  __Unwind_Resume();
  puStack_6c8 = &SUB_107cab998;
  lStack_708 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = pplVar9;
  puVar4 = puVar10;
  puVar17 = puVar13;
  pplStack_700 = unaff_x24;
  pplStack_6f8 = pplVar5;
  puStack_6f0 = puVar15;
  pplStack_6e8 = pplVar19;
  pplStack_6e0 = pplVar2;
  pplStack_6d8 = pplVar6;
  pppuStack_6d0 = &pppuStack_630;
  _objc_retain(pplVar9);
  pplVar19 = (long **)0x0;
  if (pplVar8 != (long **)0x0) {
    plVar3 = pplVar8[1];
    _objc_retain(pplVar9);
    if (pplVar9 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar9;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar9);
    unaff_x24 = aplStack_738;
    func_0x00010002b838(aplStack_738,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar10 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_720,puVar1);
    uStack_758 = 0;
    uStack_750 = 0;
    uStack_748 = 0;
    func_0x00010007e1e8(&uStack_758,aplStack_738,&lStack_708,2);
    pplVar7 = (long **)&UNK_110a04618;
    puVar10 = &uStack_758;
    puVar4 = &uStack_758;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    puStack_740 = puVar10;
    func_0x00010007e5dc(&puStack_740);
    lVar20 = 0;
    pplVar19 = aplStack_738;
    puVar17 = puVar13;
    do {
      if ((&cStack_709)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_720 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  pplVar2 = pplVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_708) {
    return pplVar2;
  }
  ___stack_chk_fail();
  _objc_release(pplVar9);
  _objc_release(pplVar9);
  pplVar8 = pplVar2;
  __Unwind_Resume();
  puStack_768 = &SUB_107cabb80;
  lStack_7a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar7;
  puVar15 = puVar4;
  puVar13 = puVar17;
  pplStack_7a0 = unaff_x24;
  pplStack_798 = pplVar5;
  puStack_790 = puVar10;
  pplStack_788 = pplVar19;
  pplStack_780 = pplVar2;
  pplStack_778 = pplVar9;
  pppuStack_770 = &pppuStack_6d0;
  _objc_retain(pplVar7);
  pplVar19 = (long **)0x0;
  if (pplVar8 != (long **)0x0) {
    plVar3 = pplVar8[1];
    _objc_retain(pplVar7);
    if (pplVar7 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar7;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar7);
    unaff_x24 = aplStack_7d8;
    func_0x00010002b838(aplStack_7d8,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar4 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_7c0,puVar1);
    uStack_7f8 = 0;
    uStack_7f0 = 0;
    uStack_7e8 = 0;
    func_0x00010007e1e8(&uStack_7f8,aplStack_7d8,&lStack_7a8,2);
    pplVar6 = (long **)&UNK_110a04668;
    puVar4 = &uStack_7f8;
    puVar15 = &uStack_7f8;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    puStack_7e0 = puVar4;
    func_0x00010007e5dc(&puStack_7e0);
    lVar20 = 0;
    pplVar19 = aplStack_7d8;
    puVar13 = puVar17;
    do {
      if ((&cStack_7a9)[lVar20] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_7c0 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x30);
  }
  pplVar2 = pplVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7a8) {
    ___stack_chk_fail();
    _objc_release(pplVar7);
    _objc_release(pplVar7);
    pplVar8 = pplVar2;
    __Unwind_Resume();
    puStack_808 = &SUB_107cabd68;
    lStack_848 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar9 = pplVar6;
    puVar10 = puVar15;
    puVar17 = puVar13;
    pplStack_840 = unaff_x24;
    pplStack_838 = pplVar5;
    puStack_830 = puVar4;
    pplStack_828 = pplVar19;
    pplStack_820 = pplVar2;
    pplStack_818 = pplVar7;
    pppuStack_810 = &pppuStack_770;
    _objc_retain(pplVar6);
    pplVar19 = (long **)0x0;
    if (pplVar8 != (long **)0x0) {
      plVar3 = pplVar8[1];
      _objc_retain(pplVar6);
      if (pplVar6 == (long **)0x0) {
        pplVar5 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar5 = pplVar6;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pplVar6);
      unaff_x24 = aplStack_878;
      func_0x00010002b838(aplStack_878,pplVar5);
      puVar1 = &UNK_10f44f9bb;
      if ((int)puVar15 == 0) {
        puVar1 = &UNK_10f44f9c0;
      }
      func_0x00010002b838(auStack_860,puVar1);
      uStack_898 = 0;
      uStack_890 = 0;
      uStack_888 = 0;
      func_0x00010007e1e8(&uStack_898,aplStack_878,&lStack_848,2);
      pplVar9 = (long **)&UNK_110a046b8;
      puVar15 = &uStack_898;
      puVar10 = &uStack_898;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      puStack_880 = puVar15;
      func_0x00010007e5dc(&puStack_880);
      lVar20 = 0;
      pplVar19 = aplStack_878;
      puVar17 = puVar13;
      do {
        if ((&cStack_849)[lVar20] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_860 + lVar20));
        }
        lVar20 = lVar20 + -0x18;
      } while (lVar20 != -0x30);
    }
    pplVar2 = pplVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_848) {
      return pplVar2;
    }
    ___stack_chk_fail();
    _objc_release(pplVar6);
    _objc_release(pplVar6);
    pplVar8 = pplVar2;
    __Unwind_Resume();
    puStack_8a8 = &SUB_107cabf50;
    lStack_8e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar7 = pplVar9;
    puVar4 = puVar10;
    puVar13 = puVar17;
    pplStack_8e0 = unaff_x24;
    pplStack_8d8 = pplVar5;
    puStack_8d0 = puVar15;
    pplStack_8c8 = pplVar19;
    pplStack_8c0 = pplVar2;
    pplStack_8b8 = pplVar6;
    pppuStack_8b0 = &pppuStack_810;
    _objc_retain(pplVar9);
    pplVar19 = (long **)0x0;
    if (pplVar8 != (long **)0x0) {
      plVar3 = pplVar8[1];
      _objc_retain(pplVar9);
      if (pplVar9 == (long **)0x0) {
        pplVar5 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar5 = pplVar9;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pplVar9);
      unaff_x24 = aplStack_918;
      func_0x00010002b838(aplStack_918,pplVar5);
      puVar1 = &UNK_10f44f9bb;
      if ((int)puVar10 == 0) {
        puVar1 = &UNK_10f44f9c0;
      }
      func_0x00010002b838(auStack_900,puVar1);
      uStack_938 = 0;
      uStack_930 = 0;
      uStack_928 = 0;
      func_0x00010007e1e8(&uStack_938,aplStack_918,&lStack_8e8,2);
      pplVar7 = (long **)&UNK_110a04708;
      puVar10 = &uStack_938;
      puVar4 = &uStack_938;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      puStack_920 = puVar10;
      func_0x00010007e5dc(&puStack_920);
      lVar20 = 0;
      pplVar19 = aplStack_918;
      puVar13 = puVar17;
      do {
        if ((&cStack_8e9)[lVar20] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_900 + lVar20));
        }
        lVar20 = lVar20 + -0x18;
      } while (lVar20 != -0x30);
    }
    pplVar2 = pplVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8e8) {
      return pplVar2;
    }
    ___stack_chk_fail();
    _objc_release(pplVar9);
    _objc_release(pplVar9);
    pplVar8 = pplVar2;
    __Unwind_Resume();
    puVar17 = &uStack_9c0;
    puStack_948 = &LAB_107cac138;
    lStack_988 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar6 = pplVar7;
    puVar15 = puVar4;
    pplStack_980 = unaff_x24;
    pplStack_978 = pplVar5;
    puStack_970 = puVar10;
    pplStack_968 = pplVar19;
    pplStack_960 = pplVar2;
    pplStack_958 = pplVar9;
    pppuStack_950 = &pppuStack_8b0;
    _objc_retain(pplVar7);
    plVar3 = (long *)0x0;
    if (pplVar8 != (long **)0x0) {
      plVar3 = pplVar8[1];
      _objc_retain(pplVar7);
      if (pplVar7 == (long **)0x0) {
        pplVar19 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar19 = pplVar7;
        _objc_retainAutorelease(pplVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar7);
      pplVar5 = aplStack_9a0;
      func_0x00010002b838(aplStack_9a0,pplVar19);
      uStack_9c0 = 0;
      uStack_9b8 = 0;
      uStack_9b0 = 0;
      func_0x00010007e1e8(&uStack_9c0,aplStack_9a0,&lStack_988,1);
      pplVar6 = (long **)&UNK_110a04758;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      puStack_9a8 = (undefined1 *)&uStack_9c0;
      func_0x00010007e5dc(&puStack_9a8);
      puVar15 = puVar17;
      puVar13 = puVar4;
      puVar10 = &uStack_9c0;
      if (cStack_989 < '\0') {
        __ZdlPv(aplStack_9a0[0]);
        puVar15 = puVar17;
        puVar13 = puVar4;
        puVar10 = &uStack_9c0;
      }
    }
    pplVar19 = pplVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_988) {
      return pplVar19;
    }
    ___stack_chk_fail();
    _objc_release(pplVar7);
    _objc_release(pplVar7);
    pplVar9 = pplVar19;
    __Unwind_Resume();
    puVar17 = &uStack_a40;
    puStack_9c8 = &LAB_107cac2ac;
    lStack_a08 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar2 = pplVar6;
    puVar4 = puVar15;
    pplStack_a00 = unaff_x24;
    pplStack_9f8 = pplVar5;
    puStack_9f0 = puVar10;
    plStack_9e8 = plVar3;
    pplStack_9e0 = pplVar19;
    pplStack_9d8 = pplVar7;
    pppuStack_9d0 = &pppuStack_950;
    _objc_retain(pplVar6);
    plVar3 = (long *)0x0;
    if (pplVar9 != (long **)0x0) {
      plVar3 = pplVar9[1];
      _objc_retain(pplVar6);
      if (pplVar6 == (long **)0x0) {
        pplVar19 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar19 = pplVar6;
        _objc_retainAutorelease(pplVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar6);
      pplVar5 = aplStack_a20;
      func_0x00010002b838(aplStack_a20,pplVar19);
      uStack_a40 = 0;
      uStack_a38 = 0;
      uStack_a30 = 0;
      func_0x00010007e1e8(&uStack_a40,aplStack_a20,&lStack_a08,1);
      pplVar2 = (long **)&UNK_110a047a8;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      puStack_a28 = (undefined1 *)&uStack_a40;
      func_0x00010007e5dc(&puStack_a28);
      puVar4 = puVar17;
      puVar13 = puVar15;
      puVar10 = &uStack_a40;
      if (cStack_a09 < '\0') {
        __ZdlPv(aplStack_a20[0]);
        puVar4 = puVar17;
        puVar13 = puVar15;
        puVar10 = &uStack_a40;
      }
    }
    pplVar19 = pplVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a08) {
      return pplVar19;
    }
    ___stack_chk_fail();
    _objc_release(pplVar6);
    _objc_release(pplVar6);
    pplVar7 = pplVar19;
    __Unwind_Resume();
    plVar14 = alStack_ab0;
    puStack_a48 = &LAB_107cac420;
    lStack_a78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar9 = (long **)0x0;
    puVar15 = puVar4;
    puStack_a70 = puVar10;
    plStack_a68 = plVar3;
    pplStack_a60 = pplVar19;
    pplStack_a58 = pplVar6;
    pppuStack_a50 = &pppuStack_9d0;
    if (pplVar7 != (long **)0x0) {
      pplVar19 = (long **)pplVar7[1];
      puVar1 = &UNK_10f44f9bb;
      if ((int)pplVar2 == 0) {
        puVar1 = &UNK_10f44f9c0;
      }
      func_0x00010002b838(applStack_a90,puVar1);
      alStack_ab0[0] = 0;
      alStack_ab0[1] = 0;
      alStack_ab0[2] = 0;
      func_0x00010007e1e8(alStack_ab0,applStack_a90,&lStack_a78,1);
      pplVar2 = (long **)&UNK_110a047f8;
      (*(code *)(*pplVar19)[3])(pplVar19);
      pplVar9 = &plStack_a98;
      plStack_a98 = alStack_ab0;
      func_0x00010007e5dc();
      puVar15 = plVar14;
      puVar13 = puVar4;
      plVar3 = alStack_ab0;
      if (cStack_a79 < '\0') {
        pplVar9 = applStack_a90[0];
        __ZdlPv();
        puVar15 = plVar14;
        puVar13 = puVar4;
        plVar3 = alStack_ab0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a78) {
      ___stack_chk_fail();
      plStack_a98 = plVar3;
      func_0x00010007e5dc(&plStack_a98);
      if (cStack_a79 < '\0') {
        __ZdlPv(applStack_a90[0]);
      }
      pplVar7 = pplVar9;
      __Unwind_Resume();
      puVar17 = &uStack_b30;
      puStack_ab8 = &SUB_107cac538;
      lStack_af8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pplVar6 = pplVar2;
      puVar4 = puVar15;
      pplStack_af0 = unaff_x24;
      pplStack_ae8 = pplVar5;
      puStack_ae0 = puVar10;
      plStack_ad8 = plVar3;
      pplStack_ad0 = pplVar19;
      pplStack_ac8 = pplVar9;
      pppuStack_ac0 = &pppuStack_a50;
      _objc_retain(pplVar2);
      plVar3 = (long *)0x0;
      if (pplVar7 != (long **)0x0) {
        plVar3 = pplVar7[1];
        _objc_retain(pplVar2);
        if (pplVar2 == (long **)0x0) {
          pplVar19 = (long **)&UNK_10f44f7d9;
        }
        else {
          pplVar19 = pplVar2;
          _objc_retainAutorelease(pplVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pplVar2);
        pplVar5 = aplStack_b10;
        func_0x00010002b838(aplStack_b10,pplVar19);
        uStack_b30 = 0;
        uStack_b28 = 0;
        uStack_b20 = 0;
        func_0x00010007e1e8(&uStack_b30,aplStack_b10,&lStack_af8,1);
        pplVar6 = (long **)&UNK_110a04848;
        (**(code **)(*plVar3 + 0x18))(plVar3);
        puStack_b18 = (undefined1 *)&uStack_b30;
        func_0x00010007e5dc(&puStack_b18);
        puVar4 = puVar17;
        puVar13 = puVar15;
        puVar10 = &uStack_b30;
        if (cStack_af9 < '\0') {
          __ZdlPv(aplStack_b10[0]);
          puVar4 = puVar17;
          puVar13 = puVar15;
          puVar10 = &uStack_b30;
        }
      }
      pplVar19 = pplVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_af8) {
        return pplVar19;
      }
      ___stack_chk_fail();
      _objc_release(pplVar2);
      _objc_release(pplVar2);
      pplVar7 = pplVar19;
      __Unwind_Resume();
      puVar17 = &uStack_bb0;
      puStack_b38 = &SUB_107cac6ac;
      lStack_b78 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pplVar9 = pplVar6;
      puVar15 = puVar4;
      pplStack_b70 = unaff_x24;
      pplStack_b68 = pplVar5;
      puStack_b60 = puVar10;
      plStack_b58 = plVar3;
      pplStack_b50 = pplVar19;
      pplStack_b48 = pplVar2;
      pppuStack_b40 = &pppuStack_ac0;
      _objc_retain(pplVar6);
      plVar3 = (long *)0x0;
      if (pplVar7 != (long **)0x0) {
        plVar3 = pplVar7[1];
        _objc_retain(pplVar6);
        if (pplVar6 == (long **)0x0) {
          pplVar19 = (long **)&UNK_10f44f7d9;
        }
        else {
          pplVar19 = pplVar6;
          _objc_retainAutorelease(pplVar6);
          func_0x00010bdc3520();
        }
        _objc_release(pplVar6);
        pplVar5 = aplStack_b90;
        func_0x00010002b838(aplStack_b90,pplVar19);
        uStack_bb0 = 0;
        uStack_ba8 = 0;
        uStack_ba0 = 0;
        func_0x00010007e1e8(&uStack_bb0,aplStack_b90,&lStack_b78,1);
        pplVar9 = (long **)&UNK_110a04898;
        (**(code **)(*plVar3 + 0x18))(plVar3);
        puStack_b98 = (undefined1 *)&uStack_bb0;
        func_0x00010007e5dc(&puStack_b98);
        puVar15 = puVar17;
        puVar13 = puVar4;
        puVar10 = &uStack_bb0;
        if (cStack_b79 < '\0') {
          __ZdlPv(aplStack_b90[0]);
          puVar15 = puVar17;
          puVar13 = puVar4;
          puVar10 = &uStack_bb0;
        }
      }
      pplVar19 = pplVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b78) {
        return pplVar19;
      }
      ___stack_chk_fail();
      _objc_release(pplVar6);
      _objc_release(pplVar6);
      pplVar7 = pplVar19;
      __Unwind_Resume();
      puVar17 = &uStack_c30;
      puStack_bb8 = &SUB_107cac820;
      lStack_bf8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pplVar2 = pplVar9;
      puVar4 = puVar15;
      pplStack_bf0 = unaff_x24;
      pplStack_be8 = pplVar5;
      puStack_be0 = puVar10;
      plStack_bd8 = plVar3;
      pplStack_bd0 = pplVar19;
      pplStack_bc8 = pplVar6;
      pppuStack_bc0 = &pppuStack_b40;
      _objc_retain(pplVar9);
      plVar3 = (long *)0x0;
      if (pplVar7 != (long **)0x0) {
        plVar3 = pplVar7[1];
        _objc_retain(pplVar9);
        if (pplVar9 == (long **)0x0) {
          pplVar19 = (long **)&UNK_10f44f7d9;
        }
        else {
          pplVar19 = pplVar9;
          _objc_retainAutorelease(pplVar9);
          func_0x00010bdc3520();
        }
        _objc_release(pplVar9);
        pplVar5 = aplStack_c10;
        func_0x00010002b838(aplStack_c10,pplVar19);
        uStack_c30 = 0;
        uStack_c28 = 0;
        uStack_c20 = 0;
        func_0x00010007e1e8(&uStack_c30,aplStack_c10,&lStack_bf8,1);
        pplVar2 = (long **)&UNK_110a048e8;
        (**(code **)(*plVar3 + 0x18))(plVar3);
        puStack_c18 = (undefined1 *)&uStack_c30;
        func_0x00010007e5dc(&puStack_c18);
        puVar4 = puVar17;
        puVar13 = puVar15;
        puVar10 = &uStack_c30;
        if (cStack_bf9 < '\0') {
          __ZdlPv(aplStack_c10[0]);
          puVar4 = puVar17;
          puVar13 = puVar15;
          puVar10 = &uStack_c30;
        }
      }
      pplVar19 = pplVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_bf8) {
        return pplVar19;
      }
      ___stack_chk_fail();
      _objc_release(pplVar9);
      _objc_release(pplVar9);
      pplVar7 = pplVar19;
      __Unwind_Resume();
      puVar17 = &uStack_cb0;
      puStack_c38 = &SUB_107cac994;
      lStack_c78 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pplVar6 = pplVar2;
      puVar15 = puVar4;
      pplStack_c70 = unaff_x24;
      pplStack_c68 = pplVar5;
      puStack_c60 = puVar10;
      plStack_c58 = plVar3;
      pplStack_c50 = pplVar19;
      pplStack_c48 = pplVar9;
      pppuStack_c40 = &pppuStack_bc0;
      _objc_retain(pplVar2);
      plVar3 = (long *)0x0;
      if (pplVar7 != (long **)0x0) {
        plVar3 = pplVar7[1];
        _objc_retain(pplVar2);
        if (pplVar2 == (long **)0x0) {
          pplVar19 = (long **)&UNK_10f44f7d9;
        }
        else {
          pplVar19 = pplVar2;
          _objc_retainAutorelease(pplVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pplVar2);
        pplVar5 = aplStack_c90;
        func_0x00010002b838(aplStack_c90,pplVar19);
        uStack_cb0 = 0;
        uStack_ca8 = 0;
        uStack_ca0 = 0;
        func_0x00010007e1e8(&uStack_cb0,aplStack_c90,&lStack_c78,1);
        pplVar6 = (long **)&UNK_110a04938;
        (**(code **)(*plVar3 + 0x18))(plVar3);
        puStack_c98 = (undefined1 *)&uStack_cb0;
        func_0x00010007e5dc(&puStack_c98);
        puVar15 = puVar17;
        puVar13 = puVar4;
        puVar10 = &uStack_cb0;
        if (cStack_c79 < '\0') {
          __ZdlPv(aplStack_c90[0]);
          puVar15 = puVar17;
          puVar13 = puVar4;
          puVar10 = &uStack_cb0;
        }
      }
      pplVar19 = pplVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c78) {
        return pplVar19;
      }
      ___stack_chk_fail();
      _objc_release(pplVar2);
      _objc_release(pplVar2);
      pplVar7 = pplVar19;
      __Unwind_Resume();
      puVar17 = &uStack_d30;
      puStack_cb8 = &SUB_107cacb08;
      lStack_cf8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pplVar9 = pplVar6;
      puVar4 = puVar15;
      pplStack_cf0 = unaff_x24;
      pplStack_ce8 = pplVar5;
      puStack_ce0 = puVar10;
      plStack_cd8 = plVar3;
      pplStack_cd0 = pplVar19;
      pplStack_cc8 = pplVar2;
      pppuStack_cc0 = &pppuStack_c40;
      _objc_retain(pplVar6);
      plVar3 = (long *)0x0;
      if (pplVar7 != (long **)0x0) {
        plVar3 = pplVar7[1];
        _objc_retain(pplVar6);
        if (pplVar6 == (long **)0x0) {
          pplVar19 = (long **)&UNK_10f44f7d9;
        }
        else {
          pplVar19 = pplVar6;
          _objc_retainAutorelease(pplVar6);
          func_0x00010bdc3520();
        }
        _objc_release(pplVar6);
        pplVar5 = aplStack_d10;
        func_0x00010002b838(aplStack_d10,pplVar19);
        uStack_d30 = 0;
        uStack_d28 = 0;
        uStack_d20 = 0;
        func_0x00010007e1e8(&uStack_d30,aplStack_d10,&lStack_cf8,1);
        pplVar9 = (long **)&UNK_110a04988;
        (**(code **)(*plVar3 + 0x18))(plVar3);
        puStack_d18 = (undefined1 *)&uStack_d30;
        func_0x00010007e5dc(&puStack_d18);
        puVar4 = puVar17;
        puVar13 = puVar15;
        puVar10 = &uStack_d30;
        if (cStack_cf9 < '\0') {
          __ZdlPv(aplStack_d10[0]);
          puVar4 = puVar17;
          puVar13 = puVar15;
          puVar10 = &uStack_d30;
        }
      }
      pplVar19 = pplVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_cf8) {
        return pplVar19;
      }
      ___stack_chk_fail();
      _objc_release(pplVar6);
      _objc_release(pplVar6);
      pplVar7 = pplVar19;
      __Unwind_Resume();
      puVar17 = &uStack_db0;
      puStack_d38 = &SUB_107cacc7c;
      lStack_d78 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pplVar2 = pplVar9;
      puVar15 = puVar4;
      pplStack_d70 = unaff_x24;
      pplStack_d68 = pplVar5;
      puStack_d60 = puVar10;
      plStack_d58 = plVar3;
      pplStack_d50 = pplVar19;
      pplStack_d48 = pplVar6;
      pppuStack_d40 = &pppuStack_cc0;
      _objc_retain(pplVar9);
      plVar3 = (long *)0x0;
      if (pplVar7 != (long **)0x0) {
        plVar3 = pplVar7[1];
        _objc_retain(pplVar9);
        if (pplVar9 == (long **)0x0) {
          pplVar19 = (long **)&UNK_10f44f7d9;
        }
        else {
          pplVar19 = pplVar9;
          _objc_retainAutorelease(pplVar9);
          func_0x00010bdc3520();
        }
        _objc_release(pplVar9);
        pplVar5 = aplStack_d90;
        func_0x00010002b838(aplStack_d90,pplVar19);
        uStack_db0 = 0;
        uStack_da8 = 0;
        uStack_da0 = 0;
        func_0x00010007e1e8(&uStack_db0,aplStack_d90,&lStack_d78,1);
        pplVar2 = (long **)&UNK_110a049d8;
        (**(code **)(*plVar3 + 0x18))(plVar3);
        puStack_d98 = (undefined1 *)&uStack_db0;
        func_0x00010007e5dc(&puStack_d98);
        puVar15 = puVar17;
        puVar13 = puVar4;
        puVar10 = &uStack_db0;
        if (cStack_d79 < '\0') {
          __ZdlPv(aplStack_d90[0]);
          puVar15 = puVar17;
          puVar13 = puVar4;
          puVar10 = &uStack_db0;
        }
      }
      pplVar19 = pplVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d78) {
        return pplVar19;
      }
      ___stack_chk_fail();
      _objc_release(pplVar9);
      _objc_release(pplVar9);
      pplVar7 = pplVar19;
      __Unwind_Resume();
      puVar17 = &uStack_e30;
      puStack_db8 = &SUB_107cacdf0;
      lStack_df8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pplVar6 = pplVar2;
      puVar4 = puVar15;
      pplStack_df0 = unaff_x24;
      pplStack_de8 = pplVar5;
      puStack_de0 = puVar10;
      plStack_dd8 = plVar3;
      pplStack_dd0 = pplVar19;
      pplStack_dc8 = pplVar9;
      pppuStack_dc0 = &pppuStack_d40;
      _objc_retain(pplVar2);
      plVar3 = (long *)0x0;
      if (pplVar7 != (long **)0x0) {
        plVar3 = pplVar7[1];
        _objc_retain(pplVar2);
        if (pplVar2 == (long **)0x0) {
          pplVar19 = (long **)&UNK_10f44f7d9;
        }
        else {
          pplVar19 = pplVar2;
          _objc_retainAutorelease(pplVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pplVar2);
        pplVar5 = aplStack_e10;
        func_0x00010002b838(aplStack_e10,pplVar19);
        uStack_e30 = 0;
        uStack_e28 = 0;
        uStack_e20 = 0;
        func_0x00010007e1e8(&uStack_e30,aplStack_e10,&lStack_df8,1);
        pplVar6 = (long **)&UNK_110a04a28;
        (**(code **)(*plVar3 + 0x18))(plVar3);
        puStack_e18 = (undefined1 *)&uStack_e30;
        func_0x00010007e5dc(&puStack_e18);
        puVar4 = puVar17;
        puVar13 = puVar15;
        puVar10 = &uStack_e30;
        if (cStack_df9 < '\0') {
          __ZdlPv(aplStack_e10[0]);
          puVar4 = puVar17;
          puVar13 = puVar15;
          puVar10 = &uStack_e30;
        }
      }
      pplVar19 = pplVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_df8) {
        return pplVar19;
      }
      ___stack_chk_fail();
      _objc_release(pplVar2);
      _objc_release(pplVar2);
      pplVar7 = pplVar19;
      __Unwind_Resume();
      puVar17 = &uStack_eb0;
      puStack_e38 = &SUB_107cacf64;
      lStack_e78 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pplVar9 = pplVar6;
      puVar15 = puVar4;
      pplStack_e70 = unaff_x24;
      pplStack_e68 = pplVar5;
      puStack_e60 = puVar10;
      plStack_e58 = plVar3;
      pplStack_e50 = pplVar19;
      pplStack_e48 = pplVar2;
      pppuStack_e40 = &pppuStack_dc0;
      _objc_retain(pplVar6);
      plVar3 = (long *)0x0;
      if (pplVar7 != (long **)0x0) {
        plVar3 = pplVar7[1];
        _objc_retain(pplVar6);
        if (pplVar6 == (long **)0x0) {
          pplVar19 = (long **)&UNK_10f44f7d9;
        }
        else {
          pplVar19 = pplVar6;
          _objc_retainAutorelease(pplVar6);
          func_0x00010bdc3520();
        }
        _objc_release(pplVar6);
        pplVar5 = aplStack_e90;
        func_0x00010002b838(aplStack_e90,pplVar19);
        uStack_eb0 = 0;
        uStack_ea8 = 0;
        uStack_ea0 = 0;
        func_0x00010007e1e8(&uStack_eb0,aplStack_e90,&lStack_e78,1);
        pplVar9 = (long **)&UNK_110a04a78;
        (**(code **)(*plVar3 + 0x18))(plVar3);
        puStack_e98 = (undefined1 *)&uStack_eb0;
        func_0x00010007e5dc(&puStack_e98);
        puVar15 = puVar17;
        puVar13 = puVar4;
        puVar10 = &uStack_eb0;
        if (cStack_e79 < '\0') {
          __ZdlPv(aplStack_e90[0]);
          puVar15 = puVar17;
          puVar13 = puVar4;
          puVar10 = &uStack_eb0;
        }
      }
      pplVar19 = pplVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e78) {
        ___stack_chk_fail();
        _objc_release(pplVar6);
        _objc_release(pplVar6);
        pplVar7 = pplVar19;
        __Unwind_Resume();
        puVar17 = &uStack_f30;
        puStack_eb8 = &SUB_107cad0d8;
        lStack_ef8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pplVar2 = pplVar9;
        puVar4 = puVar15;
        pplStack_ef0 = unaff_x24;
        pplStack_ee8 = pplVar5;
        puStack_ee0 = puVar10;
        plStack_ed8 = plVar3;
        pplStack_ed0 = pplVar19;
        pplStack_ec8 = pplVar6;
        pppuStack_ec0 = &pppuStack_e40;
        _objc_retain(pplVar9);
        plVar3 = (long *)0x0;
        if (pplVar7 != (long **)0x0) {
          plVar3 = pplVar7[1];
          _objc_retain(pplVar9);
          if (pplVar9 == (long **)0x0) {
            pplVar19 = (long **)&UNK_10f44f7d9;
          }
          else {
            pplVar19 = pplVar9;
            _objc_retainAutorelease(pplVar9);
            func_0x00010bdc3520();
          }
          _objc_release(pplVar9);
          pplVar5 = aplStack_f10;
          func_0x00010002b838(aplStack_f10,pplVar19);
          uStack_f30 = 0;
          uStack_f28 = 0;
          uStack_f20 = 0;
          func_0x00010007e1e8(&uStack_f30,aplStack_f10,&lStack_ef8,1);
          pplVar2 = (long **)&UNK_110a04ac8;
          (**(code **)(*plVar3 + 0x18))(plVar3);
          puStack_f18 = (undefined1 *)&uStack_f30;
          func_0x00010007e5dc(&puStack_f18);
          puVar4 = puVar17;
          puVar13 = puVar15;
          puVar10 = &uStack_f30;
          if (cStack_ef9 < '\0') {
            __ZdlPv(aplStack_f10[0]);
            puVar4 = puVar17;
            puVar13 = puVar15;
            puVar10 = &uStack_f30;
          }
        }
        pplVar19 = pplVar9;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ef8) {
          return pplVar19;
        }
        ___stack_chk_fail();
        _objc_release(pplVar9);
        _objc_release(pplVar9);
        pplVar7 = pplVar19;
        __Unwind_Resume();
        puVar17 = &uStack_fb0;
        puStack_f38 = &SUB_107cad24c;
        lStack_f78 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pplVar6 = pplVar2;
        puVar15 = puVar4;
        pplStack_f70 = unaff_x24;
        pplStack_f68 = pplVar5;
        puStack_f60 = puVar10;
        plStack_f58 = plVar3;
        pplStack_f50 = pplVar19;
        pplStack_f48 = pplVar9;
        pppuStack_f40 = &pppuStack_ec0;
        _objc_retain(pplVar2);
        plVar3 = (long *)0x0;
        if (pplVar7 != (long **)0x0) {
          plVar3 = pplVar7[1];
          _objc_retain(pplVar2);
          if (pplVar2 == (long **)0x0) {
            pplVar19 = (long **)&UNK_10f44f7d9;
          }
          else {
            pplVar19 = pplVar2;
            _objc_retainAutorelease(pplVar2);
            func_0x00010bdc3520();
          }
          _objc_release(pplVar2);
          pplVar5 = aplStack_f90;
          func_0x00010002b838(aplStack_f90,pplVar19);
          uStack_fb0 = 0;
          uStack_fa8 = 0;
          uStack_fa0 = 0;
          func_0x00010007e1e8(&uStack_fb0,aplStack_f90,&lStack_f78,1);
          pplVar6 = (long **)&UNK_110a04b18;
          (**(code **)(*plVar3 + 0x18))(plVar3);
          puStack_f98 = (undefined1 *)&uStack_fb0;
          func_0x00010007e5dc(&puStack_f98);
          puVar15 = puVar17;
          puVar13 = puVar4;
          puVar10 = &uStack_fb0;
          if (cStack_f79 < '\0') {
            __ZdlPv(aplStack_f90[0]);
            puVar15 = puVar17;
            puVar13 = puVar4;
            puVar10 = &uStack_fb0;
          }
        }
        pplVar19 = pplVar2;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f78) {
          return pplVar19;
        }
        ___stack_chk_fail();
        _objc_release(pplVar2);
        _objc_release(pplVar2);
        pplVar7 = pplVar19;
        __Unwind_Resume();
        puVar17 = &uStack_1030;
        puStack_fb8 = &SUB_107cad3c0;
        lStack_ff8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pplVar9 = pplVar6;
        puVar4 = puVar15;
        pplStack_ff0 = unaff_x24;
        pplStack_fe8 = pplVar5;
        puStack_fe0 = puVar10;
        plStack_fd8 = plVar3;
        pplStack_fd0 = pplVar19;
        pplStack_fc8 = pplVar2;
        pppuStack_fc0 = &pppuStack_f40;
        _objc_retain(pplVar6);
        plVar3 = (long *)0x0;
        if (pplVar7 != (long **)0x0) {
          plVar3 = pplVar7[1];
          _objc_retain(pplVar6);
          if (pplVar6 == (long **)0x0) {
            pplVar19 = (long **)&UNK_10f44f7d9;
          }
          else {
            pplVar19 = pplVar6;
            _objc_retainAutorelease(pplVar6);
            func_0x00010bdc3520();
          }
          _objc_release(pplVar6);
          pplVar5 = aplStack_1010;
          func_0x00010002b838(aplStack_1010,pplVar19);
          uStack_1030 = 0;
          uStack_1028 = 0;
          uStack_1020 = 0;
          func_0x00010007e1e8(&uStack_1030,aplStack_1010,&lStack_ff8,1);
          pplVar9 = (long **)&UNK_110a04b68;
          (**(code **)(*plVar3 + 0x18))(plVar3);
          puStack_1018 = (undefined1 *)&uStack_1030;
          func_0x00010007e5dc(&puStack_1018);
          puVar4 = puVar17;
          puVar13 = puVar15;
          puVar10 = &uStack_1030;
          if (cStack_ff9 < '\0') {
            __ZdlPv(aplStack_1010[0]);
            puVar4 = puVar17;
            puVar13 = puVar15;
            puVar10 = &uStack_1030;
          }
        }
        pplVar19 = pplVar6;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ff8) {
          return pplVar19;
        }
        ___stack_chk_fail();
        _objc_release(pplVar6);
        _objc_release(pplVar6);
        pplVar7 = pplVar19;
        __Unwind_Resume();
        puStack_1038 = &LAB_107cad534;
        lStack_1078 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pplVar2 = pplVar9;
        puVar15 = puVar4;
        puVar17 = puVar13;
        pplStack_1070 = unaff_x24;
        pplStack_1068 = pplVar5;
        puStack_1060 = puVar10;
        plStack_1058 = plVar3;
        pplStack_1050 = pplVar19;
        pplStack_1048 = pplVar6;
        pppuStack_1040 = &pppuStack_fc0;
        _objc_retain(pplVar9);
        _objc_retain(puVar4);
        if (pplVar7 != (long **)0x0) {
          plVar3 = pplVar7[1];
          pplVar2 = (long **)&UNK_110a04bb8;
          (**(code **)(*plVar3 + 0x28))();
          if ((int)plVar3 != 0) {
            plVar3 = pplVar7[1];
            _objc_retain(pplVar9);
            if (pplVar9 == (long **)0x0) {
              pplVar19 = (long **)&UNK_10f44f7d9;
            }
            else {
              pplVar19 = pplVar9;
              _objc_retainAutorelease(pplVar9);
              func_0x00010bdc3520();
            }
            _objc_release(pplVar9);
            unaff_x24 = aplStack_10a8;
            func_0x00010002b838(aplStack_10a8,pplVar19);
            _objc_retain(puVar4);
            if (puVar4 == (undefined8 *)0x0) {
              puVar10 = (undefined8 *)&UNK_10f44f7d9;
            }
            else {
              _objc_retainAutorelease(puVar4);
              puVar10 = puVar4;
              func_0x00010bdc3520(puVar4);
            }
            _objc_release(puVar4);
            func_0x00010002b838(auStack_1090,puVar10);
            uStack_10c8 = 0;
            uStack_10c0 = 0;
            uStack_10b8 = 0;
            func_0x00010007e1e8(&uStack_10c8,aplStack_10a8,&lStack_1078,2);
            puVar17 = (undefined8 *)((long)puVar13 * 10);
            pplVar2 = (long **)&UNK_110a04bb8;
            puVar15 = &uStack_10c8;
            (**(code **)(*plVar3 + 0x18))(plVar3);
            puStack_10b0 = &uStack_10c8;
            func_0x00010007e5dc(&puStack_10b0);
            lVar20 = 0;
            do {
              if ((&cStack_1079)[lVar20] < '\0') {
                __ZdlPv(*(undefined8 *)((long)auStack_1090 + lVar20));
              }
              lVar20 = lVar20 + -0x18;
            } while (lVar20 != -0x30);
          }
        }
        _objc_release(puVar4);
        pplVar19 = pplVar9;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1078) {
          ___stack_chk_fail();
          _objc_release(puVar4);
          if (cStack_1091 < '\0') {
            __ZdlPv(aplStack_10a8[0]);
          }
          _objc_release(puVar4);
          _objc_release(pplVar9);
          __Unwind_Resume();
          puStack_10d8 = &LAB_107cad788;
          lStack_1128 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pplVar5 = pplVar2;
          puVar4 = puVar15;
          puVar10 = puVar17;
          pppuStack_10e0 = &pppuStack_1040;
          _objc_retain(pplVar2);
          iVar12 = (int)puVar4;
          _objc_retain(puVar15);
          _objc_retain(puVar18);
          if (pplVar19 != (long **)0x0) {
            plVar3 = pplVar19[1];
            _objc_retain(pplVar2);
            if (pplVar2 == (long **)0x0) {
              pplVar19 = (long **)&UNK_10f44f7d9;
            }
            else {
              pplVar19 = pplVar2;
              _objc_retainAutorelease(pplVar2);
              func_0x00010bdc3520();
            }
            _objc_release(pplVar2);
            func_0x00010002b838(aplStack_1188,pplVar19);
            _objc_retain(puVar15);
            if (puVar15 == (undefined8 *)0x0) {
              puVar4 = (undefined8 *)&UNK_10f44f7d9;
            }
            else {
              _objc_retainAutorelease(puVar15);
              puVar4 = puVar15;
              func_0x00010bdc3520(puVar15);
            }
            _objc_release(puVar15);
            func_0x00010002b838(auStack_1170,puVar4);
            puVar1 = &UNK_10f44f9bb;
            if ((int)puVar17 == 0) {
              puVar1 = &UNK_10f44f9c0;
            }
            func_0x00010002b838(auStack_1158,puVar1);
            _objc_retain(puVar18);
            if (puVar18 == (undefined8 *)0x0) {
              puVar4 = (undefined8 *)&UNK_10f44f7d9;
            }
            else {
              _objc_retainAutorelease(puVar18);
              puVar4 = puVar18;
              func_0x00010bdc3520(puVar18);
            }
            _objc_release(puVar18);
            func_0x00010002b838(auStack_1140,puVar4);
            plStack_11a8 = (long *)0x0;
            uStack_11a0 = 0;
            uStack_1198 = 0;
            func_0x00010007e1e8(&plStack_11a8,aplStack_1188,&lStack_1128,4);
            pplVar5 = (long **)&UNK_110a04c08;
            unaff_x24 = &plStack_11a8;
            pplVar19 = &plStack_11a8;
            (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110a04c08,pplVar19,param_7);
            pplStack_1190 = unaff_x24;
            func_0x00010007e5dc(&pplStack_1190);
            lVar20 = 0;
            puVar10 = param_7;
            do {
              if ((&cStack_1129)[lVar20] < '\0') {
                __ZdlPv(*(undefined8 *)((long)auStack_1140 + lVar20));
              }
              iVar12 = (int)pplVar19;
              lVar20 = lVar20 + -0x18;
            } while (lVar20 != -0x60);
          }
          _objc_release(puVar18);
          _objc_release(puVar15);
          pplVar19 = pplVar2;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1128) {
            ___stack_chk_fail();
            _objc_release(puVar18);
            pplStack_11e8 = aplStack_1188;
            do {
              unaff_x24 = unaff_x24 + -3;
            } while (unaff_x24 != pplStack_11e8);
            _objc_release(puVar18);
            _objc_release(puVar15);
            _objc_release(pplVar2);
            pplVar9 = pplVar19;
            __Unwind_Resume();
            puStack_11b8 = &LAB_107cada70;
            lStack_11f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
            pplStack_11f0 = unaff_x24;
            pplStack_11e0 = pplVar19;
            puStack_11d8 = puVar18;
            puStack_11d0 = puVar15;
            pplStack_11c8 = pplVar2;
            pppuStack_11c0 = &pppuStack_10e0;
            _objc_retain(pplVar5);
            if (pplVar9 != (long **)0x0) {
              plVar3 = pplVar9[1];
              _objc_retain(pplVar5);
              if (pplVar5 == (long **)0x0) {
                pplVar19 = (long **)&UNK_10f44f7d9;
              }
              else {
                pplVar19 = pplVar5;
                _objc_retainAutorelease(pplVar5);
                func_0x00010bdc3520();
              }
              _objc_release(pplVar5);
              func_0x00010002b838(auStack_1228,pplVar19);
              puVar1 = &UNK_10f44f9bb;
              if (iVar12 == 0) {
                puVar1 = &UNK_10f44f9c0;
              }
              func_0x00010002b838(auStack_1210,puVar1);
              uStack_1248 = 0;
              uStack_1240 = 0;
              uStack_1238 = 0;
              func_0x00010007e1e8(&uStack_1248,auStack_1228,&lStack_11f8,2);
              (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110a04c58,&uStack_1248,puVar10);
              puStack_1230 = &uStack_1248;
              func_0x00010007e5dc(&puStack_1230);
              lVar20 = 0;
              do {
                if ((&cStack_11f9)[lVar20] < '\0') {
                  __ZdlPv(*(undefined8 *)((long)auStack_1210 + lVar20));
                }
                lVar20 = lVar20 + -0x18;
              } while (lVar20 != -0x30);
            }
            pplVar19 = pplVar5;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_11f8) {
              ___stack_chk_fail();
              _objc_release(pplVar5);
              _objc_release(pplVar5);
              pplVar2 = pplVar19;
              __Unwind_Resume();
              ppplVar11 = &pplStack_1280;
              puStack_1258 = &UNK_107cadc58;
              puStack_1278 = PTR_PTR_1126fa610;
              pplStack_1280 = pplVar2;
              pplStack_1270 = pplVar19;
              pplStack_1268 = pplVar5;
              pppuStack_1260 = &pppuStack_11c0;
              _objc_msgSendSuper2(&pplStack_1280,PTR_s_init_1125d9248);
              if (ppplVar11 != (long ***)0x0) {
                pplVar19 = (long **)ppplVar11;
                (*(code *)PTR_DAT_113403208)();
                ppplVar11[1] = pplVar19;
              }
              return (long **)ppplVar11;
            }
            return pplVar19;
          }
          return pplVar19;
        }
        return pplVar19;
      }
      return pplVar19;
    }
    return pplVar9;
  }
  return pplVar2;
}



/* Entry: 105b0be18; end: 105b0be27; -[SCStoriesGrapheneMetricsEmitter logNeedDeduppedFromSubInFY:] */

/* WARNING: Removing unreachable block (ram,0x000107caac08) */
/* WARNING: Removing unreachable block (ram,0x000107cada38) */

long ** FUN_105b0be18(long param_1,undefined8 param_2,long **param_3,undefined8 *param_4,
                     undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  long lVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  undefined8 *puVar9;
  long ***ppplVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long **pplVar18;
  long *plVar19;
  long **unaff_x24;
  long **pplStack_11e0;
  undefined *puStack_11d8;
  long **pplStack_11d0;
  long **pplStack_11c8;
  undefined8 ***pppuStack_11c0;
  undefined *puStack_11b8;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 *puStack_1190;
  undefined1 auStack_1188 [24];
  undefined8 auStack_1170 [2];
  char cStack_1159;
  long lStack_1158;
  long **pplStack_1150;
  long **pplStack_1148;
  long **pplStack_1140;
  undefined8 *puStack_1138;
  undefined8 *puStack_1130;
  long **pplStack_1128;
  undefined8 ***pppuStack_1120;
  undefined *puStack_1118;
  long *plStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  long **pplStack_10f0;
  long *aplStack_10e8 [3];
  undefined1 auStack_10d0 [24];
  undefined1 auStack_10b8 [24];
  undefined8 auStack_10a0 [2];
  char cStack_1089;
  long lStack_1088;
  undefined8 ***pppuStack_1040;
  undefined *puStack_1038;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 *puStack_1010;
  long *aplStack_1008 [2];
  char cStack_ff1;
  undefined8 auStack_ff0 [2];
  char cStack_fd9;
  long lStack_fd8;
  long **pplStack_fd0;
  long **pplStack_fc8;
  undefined8 *puStack_fc0;
  long *plStack_fb8;
  long **pplStack_fb0;
  long **pplStack_fa8;
  undefined8 ***pppuStack_fa0;
  undefined *puStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined1 *puStack_f78;
  long *aplStack_f70 [2];
  char cStack_f59;
  long lStack_f58;
  long **pplStack_f50;
  long **pplStack_f48;
  undefined8 *puStack_f40;
  long *plStack_f38;
  long **pplStack_f30;
  long **pplStack_f28;
  undefined8 ***pppuStack_f20;
  undefined *puStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined1 *puStack_ef8;
  long *aplStack_ef0 [2];
  char cStack_ed9;
  long lStack_ed8;
  long **pplStack_ed0;
  long **pplStack_ec8;
  undefined8 *puStack_ec0;
  long *plStack_eb8;
  long **pplStack_eb0;
  long **pplStack_ea8;
  undefined8 ***pppuStack_ea0;
  undefined *puStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 uStack_e80;
  undefined1 *puStack_e78;
  long *aplStack_e70 [2];
  char cStack_e59;
  long lStack_e58;
  long **pplStack_e50;
  long **pplStack_e48;
  undefined8 *puStack_e40;
  long *plStack_e38;
  long **pplStack_e30;
  long **pplStack_e28;
  undefined8 ***pppuStack_e20;
  undefined *puStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined1 *puStack_df8;
  long *aplStack_df0 [2];
  char cStack_dd9;
  long lStack_dd8;
  long **pplStack_dd0;
  long **pplStack_dc8;
  undefined8 *puStack_dc0;
  long *plStack_db8;
  long **pplStack_db0;
  long **pplStack_da8;
  undefined8 ***pppuStack_da0;
  undefined *puStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined1 *puStack_d78;
  long *aplStack_d70 [2];
  char cStack_d59;
  long lStack_d58;
  long **pplStack_d50;
  long **pplStack_d48;
  undefined8 *puStack_d40;
  long *plStack_d38;
  long **pplStack_d30;
  long **pplStack_d28;
  undefined8 ***pppuStack_d20;
  undefined *puStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined1 *puStack_cf8;
  long *aplStack_cf0 [2];
  char cStack_cd9;
  long lStack_cd8;
  long **pplStack_cd0;
  long **pplStack_cc8;
  undefined8 *puStack_cc0;
  long *plStack_cb8;
  long **pplStack_cb0;
  long **pplStack_ca8;
  undefined8 ***pppuStack_ca0;
  undefined *puStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined1 *puStack_c78;
  long *aplStack_c70 [2];
  char cStack_c59;
  long lStack_c58;
  long **pplStack_c50;
  long **pplStack_c48;
  undefined8 *puStack_c40;
  long *plStack_c38;
  long **pplStack_c30;
  long **pplStack_c28;
  undefined8 ***pppuStack_c20;
  undefined *puStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined1 *puStack_bf8;
  long *aplStack_bf0 [2];
  char cStack_bd9;
  long lStack_bd8;
  long **pplStack_bd0;
  long **pplStack_bc8;
  undefined8 *puStack_bc0;
  long *plStack_bb8;
  long **pplStack_bb0;
  long **pplStack_ba8;
  undefined8 ***pppuStack_ba0;
  undefined *puStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined1 *puStack_b78;
  long *aplStack_b70 [2];
  char cStack_b59;
  long lStack_b58;
  long **pplStack_b50;
  long **pplStack_b48;
  undefined8 *puStack_b40;
  long *plStack_b38;
  long **pplStack_b30;
  long **pplStack_b28;
  undefined8 ***pppuStack_b20;
  undefined *puStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined1 *puStack_af8;
  long *aplStack_af0 [2];
  char cStack_ad9;
  long lStack_ad8;
  long **pplStack_ad0;
  long **pplStack_ac8;
  undefined8 *puStack_ac0;
  long *plStack_ab8;
  long **pplStack_ab0;
  long **pplStack_aa8;
  undefined8 ***pppuStack_aa0;
  undefined *puStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined1 *puStack_a78;
  long *aplStack_a70 [2];
  char cStack_a59;
  long lStack_a58;
  long **pplStack_a50;
  long **pplStack_a48;
  undefined8 *puStack_a40;
  long *plStack_a38;
  long **pplStack_a30;
  long **pplStack_a28;
  undefined8 ***pppuStack_a20;
  undefined *puStack_a18;
  long alStack_a10 [3];
  long *plStack_9f8;
  long **applStack_9f0 [2];
  char cStack_9d9;
  long lStack_9d8;
  undefined8 *puStack_9d0;
  long *plStack_9c8;
  long **pplStack_9c0;
  long **pplStack_9b8;
  undefined8 ***pppuStack_9b0;
  undefined *puStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined1 *puStack_988;
  long *aplStack_980 [2];
  char cStack_969;
  long lStack_968;
  long **pplStack_960;
  long **pplStack_958;
  undefined8 *puStack_950;
  long *plStack_948;
  long **pplStack_940;
  long **pplStack_938;
  undefined8 ***pppuStack_930;
  undefined *puStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined1 *puStack_908;
  long *aplStack_900 [2];
  char cStack_8e9;
  long lStack_8e8;
  long **pplStack_8e0;
  long **pplStack_8d8;
  undefined8 *puStack_8d0;
  long **pplStack_8c8;
  long **pplStack_8c0;
  long **pplStack_8b8;
  undefined8 ***pppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 *puStack_880;
  long *aplStack_878 [3];
  undefined8 auStack_860 [2];
  char cStack_849;
  long lStack_848;
  long **pplStack_840;
  long **pplStack_838;
  undefined8 *puStack_830;
  long **pplStack_828;
  long **pplStack_820;
  long **pplStack_818;
  undefined8 ***pppuStack_810;
  undefined *puStack_808;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 *puStack_7e0;
  long *aplStack_7d8 [3];
  undefined8 auStack_7c0 [2];
  char cStack_7a9;
  long lStack_7a8;
  long **pplStack_7a0;
  long **pplStack_798;
  undefined8 *puStack_790;
  long **pplStack_788;
  long **pplStack_780;
  long **pplStack_778;
  undefined8 ***pppuStack_770;
  undefined *puStack_768;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 *puStack_740;
  long *aplStack_738 [3];
  undefined8 auStack_720 [2];
  char cStack_709;
  long lStack_708;
  long **pplStack_700;
  long **pplStack_6f8;
  undefined8 *puStack_6f0;
  long **pplStack_6e8;
  long **pplStack_6e0;
  long **pplStack_6d8;
  undefined8 ***pppuStack_6d0;
  undefined *puStack_6c8;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 *puStack_6a0;
  long *aplStack_698 [3];
  undefined8 auStack_680 [2];
  char cStack_669;
  long lStack_668;
  long **pplStack_660;
  long **pplStack_658;
  undefined8 *puStack_650;
  long **pplStack_648;
  long **pplStack_640;
  long **pplStack_638;
  undefined8 ***pppuStack_630;
  undefined *puStack_628;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 *puStack_600;
  long *aplStack_5f8 [3];
  undefined8 auStack_5e0 [2];
  char cStack_5c9;
  long lStack_5c8;
  long **pplStack_5c0;
  long **pplStack_5b8;
  undefined8 *puStack_5b0;
  long **pplStack_5a8;
  long **pplStack_5a0;
  long **pplStack_598;
  undefined8 ***pppuStack_590;
  undefined *puStack_588;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 *puStack_560;
  long *aplStack_558 [3];
  undefined8 auStack_540 [2];
  char cStack_529;
  long lStack_528;
  long **pplStack_520;
  long **pplStack_518;
  undefined8 *puStack_510;
  long **pplStack_508;
  long **pplStack_500;
  long **pplStack_4f8;
  undefined8 ***pppuStack_4f0;
  undefined *puStack_4e8;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 *puStack_4c0;
  long *aplStack_4b8 [3];
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  long **pplStack_480;
  long **pplStack_478;
  undefined8 *puStack_470;
  long **pplStack_468;
  long **pplStack_460;
  long **pplStack_458;
  undefined8 ***pppuStack_450;
  undefined *puStack_448;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 *puStack_420;
  long *aplStack_418 [3];
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  long **pplStack_3e0;
  long **pplStack_3d8;
  undefined8 *puStack_3d0;
  long **pplStack_3c8;
  long **pplStack_3c0;
  long **pplStack_3b8;
  undefined8 ***pppuStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  long *aplStack_378 [3];
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  long **pplStack_340;
  long **pplStack_338;
  undefined8 *puStack_330;
  long **pplStack_328;
  long **pplStack_320;
  long **pplStack_318;
  undefined8 ***pppuStack_310;
  undefined *puStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  long *aplStack_2d8 [3];
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  long **pplStack_2a0;
  long **pplStack_298;
  undefined8 *puStack_290;
  long **pplStack_288;
  long **pplStack_280;
  long **pplStack_278;
  undefined8 ***pppuStack_270;
  undefined *puStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  long *aplStack_238 [3];
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  long **pplStack_200;
  long **pplStack_1f8;
  long **pplStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  long **pplStack_1d8;
  undefined1 ***pppuStack_1d0;
  undefined *puStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  long *aplStack_1a0 [3];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_1 + 8);
  puVar12 = (undefined8 *)0x1;
  puVar9 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar18 = param_3;
  _objc_retain(param_3);
  if (lVar2 != 0) {
    plVar19 = *(long **)(lVar2 + 8);
    _objc_retain(param_3);
    if (param_3 == (long **)0x0) {
      pplVar18 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar18 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pplVar18);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pplVar18 = (long **)&UNK_110a042f8;
    param_4 = (undefined8 *)0x1;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar12 = puVar9;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar12 = puVar9;
    }
  }
  pplVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar13 = &uStack_100;
  puStack_88 = &SUB_107caa80c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar18;
  puVar9 = puVar12;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pplVar18);
  if (pplVar3 != (long **)0x0) {
    plVar19 = pplVar3[1];
    _objc_retain(pplVar18);
    if (pplVar18 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = pplVar18;
      _objc_retainAutorelease(pplVar18);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar18);
    func_0x00010002b838(auStack_e0,pplVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pplVar6 = (long **)&UNK_110a04348;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar9 = puVar13;
    param_4 = puVar12;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar9 = puVar13;
      param_4 = puVar12;
    }
  }
  pplVar3 = pplVar18;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar18);
  _objc_release(pplVar18);
  __Unwind_Resume();
  pplVar5 = &plStack_1c0;
  puStack_108 = &SUB_107caa980;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar18 = pplVar6;
  puVar12 = puVar9;
  puVar13 = param_4;
  puVar17 = param_5;
  ppuStack_110 = &puStack_90;
  _objc_retain(pplVar6);
  _objc_retain(puVar9);
  _objc_retain(param_4);
  if (pplVar3 != (long **)0x0) {
    plVar19 = pplVar3[1];
    _objc_retain(pplVar6);
    if (pplVar6 == (long **)0x0) {
      pplVar18 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar18 = pplVar6;
      _objc_retainAutorelease(pplVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar6);
    func_0x00010002b838(aplStack_1a0,pplVar18);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)&UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar12 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_188,puVar12);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)&UNK_10f44f7d9;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar12 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_170,puVar12);
    plStack_1c0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&plStack_1c0,aplStack_1a0,&lStack_158,3);
    pplVar18 = (long **)&UNK_110a04398;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_1a8 = (undefined1 *)&plStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    lVar2 = 0;
    puVar12 = pplVar5;
    puVar13 = param_5;
    do {
      if ((&cStack_159)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
      unaff_x24 = &plStack_1c0;
    } while (lVar2 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(puVar9);
  pplVar3 = pplVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  pplVar5 = aplStack_1a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != pplVar5);
  _objc_release(param_4);
  _objc_release(puVar9);
  _objc_release(pplVar6);
  pplVar4 = pplVar3;
  __Unwind_Resume();
  puStack_1c8 = &SUB_107caac40;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar8 = pplVar18;
  puVar16 = puVar12;
  puVar15 = puVar13;
  pplStack_200 = unaff_x24;
  pplStack_1f8 = pplVar5;
  pplStack_1f0 = pplVar3;
  puStack_1e8 = param_4;
  puStack_1e0 = puVar9;
  pplStack_1d8 = pplVar6;
  pppuStack_1d0 = &ppuStack_110;
  _objc_retain(pplVar18);
  pplVar3 = (long **)0x0;
  if (pplVar4 != (long **)0x0) {
    plVar19 = pplVar4[1];
    _objc_retain(pplVar18);
    if (pplVar18 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar18;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar18);
    unaff_x24 = aplStack_238;
    func_0x00010002b838(aplStack_238,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar12 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_220,puVar1);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010007e1e8(&uStack_258,aplStack_238,&lStack_208,2);
    pplVar8 = (long **)&UNK_110a043e8;
    puVar12 = &uStack_258;
    puVar16 = &uStack_258;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_240 = puVar12;
    func_0x00010007e5dc(&puStack_240);
    lVar2 = 0;
    pplVar3 = aplStack_238;
    puVar15 = puVar13;
    do {
      if ((&cStack_209)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  pplVar6 = pplVar18;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return pplVar6;
  }
  ___stack_chk_fail();
  _objc_release(pplVar18);
  _objc_release(pplVar18);
  pplVar7 = pplVar6;
  __Unwind_Resume();
  puStack_268 = &SUB_107caae28;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = pplVar8;
  puVar9 = puVar16;
  puVar13 = puVar15;
  pplStack_2a0 = unaff_x24;
  pplStack_298 = pplVar5;
  puStack_290 = puVar12;
  pplStack_288 = pplVar3;
  pplStack_280 = pplVar6;
  pplStack_278 = pplVar18;
  pppuStack_270 = &pppuStack_1d0;
  _objc_retain(pplVar8);
  pplVar18 = (long **)0x0;
  if (pplVar7 != (long **)0x0) {
    plVar19 = pplVar7[1];
    _objc_retain(pplVar8);
    if (pplVar8 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar8;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar8);
    unaff_x24 = aplStack_2d8;
    func_0x00010002b838(aplStack_2d8,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar16 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_2c0,puVar1);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    func_0x00010007e1e8(&uStack_2f8,aplStack_2d8,&lStack_2a8,2);
    pplVar4 = (long **)&UNK_110a04438;
    puVar16 = &uStack_2f8;
    puVar9 = &uStack_2f8;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_2e0 = puVar16;
    func_0x00010007e5dc(&puStack_2e0);
    lVar2 = 0;
    pplVar18 = aplStack_2d8;
    puVar13 = puVar15;
    do {
      if ((&cStack_2a9)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  pplVar3 = pplVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar8);
  _objc_release(pplVar8);
  pplVar7 = pplVar3;
  __Unwind_Resume();
  puStack_308 = &SUB_107cab010;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar4;
  puVar12 = puVar9;
  puVar15 = puVar13;
  pplStack_340 = unaff_x24;
  pplStack_338 = pplVar5;
  puStack_330 = puVar16;
  pplStack_328 = pplVar18;
  pplStack_320 = pplVar3;
  pplStack_318 = pplVar8;
  pppuStack_310 = &pppuStack_270;
  _objc_retain(pplVar4);
  pplVar18 = (long **)0x0;
  if (pplVar7 != (long **)0x0) {
    plVar19 = pplVar7[1];
    _objc_retain(pplVar4);
    if (pplVar4 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar4;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar4);
    unaff_x24 = aplStack_378;
    func_0x00010002b838(aplStack_378,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar9 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_360,puVar1);
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    func_0x00010007e1e8(&uStack_398,aplStack_378,&lStack_348,2);
    pplVar6 = (long **)&UNK_110a04488;
    puVar9 = &uStack_398;
    puVar12 = &uStack_398;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_380 = puVar9;
    func_0x00010007e5dc(&puStack_380);
    lVar2 = 0;
    pplVar18 = aplStack_378;
    puVar15 = puVar13;
    do {
      if ((&cStack_349)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  pplVar3 = pplVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar4);
  _objc_release(pplVar4);
  pplVar7 = pplVar3;
  __Unwind_Resume();
  puStack_3a8 = &SUB_107cab1f8;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar8 = pplVar6;
  puVar13 = puVar12;
  puVar16 = puVar15;
  pplStack_3e0 = unaff_x24;
  pplStack_3d8 = pplVar5;
  puStack_3d0 = puVar9;
  pplStack_3c8 = pplVar18;
  pplStack_3c0 = pplVar3;
  pplStack_3b8 = pplVar4;
  pppuStack_3b0 = &pppuStack_310;
  _objc_retain(pplVar6);
  pplVar18 = (long **)0x0;
  if (pplVar7 != (long **)0x0) {
    plVar19 = pplVar7[1];
    _objc_retain(pplVar6);
    if (pplVar6 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar6;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar6);
    unaff_x24 = aplStack_418;
    func_0x00010002b838(aplStack_418,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar12 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_400,puVar1);
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_428 = 0;
    func_0x00010007e1e8(&uStack_438,aplStack_418,&lStack_3e8,2);
    pplVar8 = (long **)&UNK_110a044d8;
    puVar12 = &uStack_438;
    puVar13 = &uStack_438;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_420 = puVar12;
    func_0x00010007e5dc(&puStack_420);
    lVar2 = 0;
    pplVar18 = aplStack_418;
    puVar16 = puVar15;
    do {
      if ((&cStack_3e9)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_400 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  pplVar3 = pplVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar6);
  _objc_release(pplVar6);
  pplVar7 = pplVar3;
  __Unwind_Resume();
  puStack_448 = &SUB_107cab3e0;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = pplVar8;
  puVar9 = puVar13;
  puVar15 = puVar16;
  pplStack_480 = unaff_x24;
  pplStack_478 = pplVar5;
  puStack_470 = puVar12;
  pplStack_468 = pplVar18;
  pplStack_460 = pplVar3;
  pplStack_458 = pplVar6;
  pppuStack_450 = &pppuStack_3b0;
  _objc_retain(pplVar8);
  pplVar18 = (long **)0x0;
  if (pplVar7 != (long **)0x0) {
    plVar19 = pplVar7[1];
    _objc_retain(pplVar8);
    if (pplVar8 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar8;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar8);
    unaff_x24 = aplStack_4b8;
    func_0x00010002b838(aplStack_4b8,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar13 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_4a0,puVar1);
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    func_0x00010007e1e8(&uStack_4d8,aplStack_4b8,&lStack_488,2);
    pplVar4 = (long **)&UNK_110a04528;
    puVar13 = &uStack_4d8;
    puVar9 = &uStack_4d8;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_4c0 = puVar13;
    func_0x00010007e5dc(&puStack_4c0);
    lVar2 = 0;
    pplVar18 = aplStack_4b8;
    puVar15 = puVar16;
    do {
      if ((&cStack_489)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4a0 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  pplVar3 = pplVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar8);
  _objc_release(pplVar8);
  pplVar7 = pplVar3;
  __Unwind_Resume();
  puStack_4e8 = &SUB_107cab5c8;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar4;
  puVar12 = puVar9;
  puVar16 = puVar15;
  pplStack_520 = unaff_x24;
  pplStack_518 = pplVar5;
  puStack_510 = puVar13;
  pplStack_508 = pplVar18;
  pplStack_500 = pplVar3;
  pplStack_4f8 = pplVar8;
  pppuStack_4f0 = &pppuStack_450;
  _objc_retain(pplVar4);
  pplVar18 = (long **)0x0;
  if (pplVar7 != (long **)0x0) {
    plVar19 = pplVar7[1];
    _objc_retain(pplVar4);
    if (pplVar4 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar4;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar4);
    unaff_x24 = aplStack_558;
    func_0x00010002b838(aplStack_558,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar9 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_540,puVar1);
    uStack_578 = 0;
    uStack_570 = 0;
    uStack_568 = 0;
    func_0x00010007e1e8(&uStack_578,aplStack_558,&lStack_528,2);
    pplVar6 = (long **)&UNK_110a04578;
    puVar9 = &uStack_578;
    puVar12 = &uStack_578;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_560 = puVar9;
    func_0x00010007e5dc(&puStack_560);
    lVar2 = 0;
    pplVar18 = aplStack_558;
    puVar16 = puVar15;
    do {
      if ((&cStack_529)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_540 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  pplVar3 = pplVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar4);
  _objc_release(pplVar4);
  pplVar7 = pplVar3;
  __Unwind_Resume();
  puStack_588 = &SUB_107cab7b0;
  lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar8 = pplVar6;
  puVar13 = puVar12;
  puVar15 = puVar16;
  pplStack_5c0 = unaff_x24;
  pplStack_5b8 = pplVar5;
  puStack_5b0 = puVar9;
  pplStack_5a8 = pplVar18;
  pplStack_5a0 = pplVar3;
  pplStack_598 = pplVar4;
  pppuStack_590 = &pppuStack_4f0;
  _objc_retain(pplVar6);
  pplVar18 = (long **)0x0;
  if (pplVar7 != (long **)0x0) {
    plVar19 = pplVar7[1];
    _objc_retain(pplVar6);
    if (pplVar6 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar6;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar6);
    unaff_x24 = aplStack_5f8;
    func_0x00010002b838(aplStack_5f8,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar12 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_5e0,puVar1);
    uStack_618 = 0;
    uStack_610 = 0;
    uStack_608 = 0;
    func_0x00010007e1e8(&uStack_618,aplStack_5f8,&lStack_5c8,2);
    pplVar8 = (long **)&UNK_110a045c8;
    puVar12 = &uStack_618;
    puVar13 = &uStack_618;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_600 = puVar12;
    func_0x00010007e5dc(&puStack_600);
    lVar2 = 0;
    pplVar18 = aplStack_5f8;
    puVar15 = puVar16;
    do {
      if ((&cStack_5c9)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5e0 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  pplVar3 = pplVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar6);
  _objc_release(pplVar6);
  pplVar7 = pplVar3;
  __Unwind_Resume();
  puStack_628 = &SUB_107cab998;
  lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = pplVar8;
  puVar9 = puVar13;
  puVar16 = puVar15;
  pplStack_660 = unaff_x24;
  pplStack_658 = pplVar5;
  puStack_650 = puVar12;
  pplStack_648 = pplVar18;
  pplStack_640 = pplVar3;
  pplStack_638 = pplVar6;
  pppuStack_630 = &pppuStack_590;
  _objc_retain(pplVar8);
  pplVar18 = (long **)0x0;
  if (pplVar7 != (long **)0x0) {
    plVar19 = pplVar7[1];
    _objc_retain(pplVar8);
    if (pplVar8 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar8;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar8);
    unaff_x24 = aplStack_698;
    func_0x00010002b838(aplStack_698,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar13 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_680,puVar1);
    uStack_6b8 = 0;
    uStack_6b0 = 0;
    uStack_6a8 = 0;
    func_0x00010007e1e8(&uStack_6b8,aplStack_698,&lStack_668,2);
    pplVar4 = (long **)&UNK_110a04618;
    puVar13 = &uStack_6b8;
    puVar9 = &uStack_6b8;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_6a0 = puVar13;
    func_0x00010007e5dc(&puStack_6a0);
    lVar2 = 0;
    pplVar18 = aplStack_698;
    puVar16 = puVar15;
    do {
      if ((&cStack_669)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_680 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  pplVar3 = pplVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_668) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar8);
  _objc_release(pplVar8);
  pplVar7 = pplVar3;
  __Unwind_Resume();
  puStack_6c8 = &SUB_107cabb80;
  lStack_708 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar4;
  puVar12 = puVar9;
  puVar15 = puVar16;
  pplStack_700 = unaff_x24;
  pplStack_6f8 = pplVar5;
  puStack_6f0 = puVar13;
  pplStack_6e8 = pplVar18;
  pplStack_6e0 = pplVar3;
  pplStack_6d8 = pplVar8;
  pppuStack_6d0 = &pppuStack_630;
  _objc_retain(pplVar4);
  pplVar18 = (long **)0x0;
  if (pplVar7 != (long **)0x0) {
    plVar19 = pplVar7[1];
    _objc_retain(pplVar4);
    if (pplVar4 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar4;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar4);
    unaff_x24 = aplStack_738;
    func_0x00010002b838(aplStack_738,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar9 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_720,puVar1);
    uStack_758 = 0;
    uStack_750 = 0;
    uStack_748 = 0;
    func_0x00010007e1e8(&uStack_758,aplStack_738,&lStack_708,2);
    pplVar6 = (long **)&UNK_110a04668;
    puVar9 = &uStack_758;
    puVar12 = &uStack_758;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_740 = puVar9;
    func_0x00010007e5dc(&puStack_740);
    lVar2 = 0;
    pplVar18 = aplStack_738;
    puVar15 = puVar16;
    do {
      if ((&cStack_709)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_720 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  pplVar3 = pplVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_708) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar4);
  _objc_release(pplVar4);
  pplVar7 = pplVar3;
  __Unwind_Resume();
  puStack_768 = &SUB_107cabd68;
  lStack_7a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar8 = pplVar6;
  puVar13 = puVar12;
  puVar16 = puVar15;
  pplStack_7a0 = unaff_x24;
  pplStack_798 = pplVar5;
  puStack_790 = puVar9;
  pplStack_788 = pplVar18;
  pplStack_780 = pplVar3;
  pplStack_778 = pplVar4;
  pppuStack_770 = &pppuStack_6d0;
  _objc_retain(pplVar6);
  pplVar18 = (long **)0x0;
  if (pplVar7 != (long **)0x0) {
    plVar19 = pplVar7[1];
    _objc_retain(pplVar6);
    if (pplVar6 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar6;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar6);
    unaff_x24 = aplStack_7d8;
    func_0x00010002b838(aplStack_7d8,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar12 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_7c0,puVar1);
    uStack_7f8 = 0;
    uStack_7f0 = 0;
    uStack_7e8 = 0;
    func_0x00010007e1e8(&uStack_7f8,aplStack_7d8,&lStack_7a8,2);
    pplVar8 = (long **)&UNK_110a046b8;
    puVar12 = &uStack_7f8;
    puVar13 = &uStack_7f8;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_7e0 = puVar12;
    func_0x00010007e5dc(&puStack_7e0);
    lVar2 = 0;
    pplVar18 = aplStack_7d8;
    puVar16 = puVar15;
    do {
      if ((&cStack_7a9)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_7c0 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  pplVar3 = pplVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7a8) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar6);
  _objc_release(pplVar6);
  pplVar7 = pplVar3;
  __Unwind_Resume();
  puStack_808 = &SUB_107cabf50;
  lStack_848 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = pplVar8;
  puVar9 = puVar13;
  puVar15 = puVar16;
  pplStack_840 = unaff_x24;
  pplStack_838 = pplVar5;
  puStack_830 = puVar12;
  pplStack_828 = pplVar18;
  pplStack_820 = pplVar3;
  pplStack_818 = pplVar6;
  pppuStack_810 = &pppuStack_770;
  _objc_retain(pplVar8);
  pplVar18 = (long **)0x0;
  if (pplVar7 != (long **)0x0) {
    plVar19 = pplVar7[1];
    _objc_retain(pplVar8);
    if (pplVar8 == (long **)0x0) {
      pplVar5 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar5 = pplVar8;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pplVar8);
    unaff_x24 = aplStack_878;
    func_0x00010002b838(aplStack_878,pplVar5);
    puVar1 = &UNK_10f44f9bb;
    if ((int)puVar13 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(auStack_860,puVar1);
    uStack_898 = 0;
    uStack_890 = 0;
    uStack_888 = 0;
    func_0x00010007e1e8(&uStack_898,aplStack_878,&lStack_848,2);
    pplVar4 = (long **)&UNK_110a04708;
    puVar13 = &uStack_898;
    puVar9 = &uStack_898;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_880 = puVar13;
    func_0x00010007e5dc(&puStack_880);
    lVar2 = 0;
    pplVar18 = aplStack_878;
    puVar15 = puVar16;
    do {
      if ((&cStack_849)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_860 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  pplVar3 = pplVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_848) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar8);
  _objc_release(pplVar8);
  pplVar7 = pplVar3;
  __Unwind_Resume();
  puVar16 = &uStack_920;
  puStack_8a8 = &LAB_107cac138;
  lStack_8e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar4;
  puVar12 = puVar9;
  pplStack_8e0 = unaff_x24;
  pplStack_8d8 = pplVar5;
  puStack_8d0 = puVar13;
  pplStack_8c8 = pplVar18;
  pplStack_8c0 = pplVar3;
  pplStack_8b8 = pplVar8;
  pppuStack_8b0 = &pppuStack_810;
  _objc_retain(pplVar4);
  plVar19 = (long *)0x0;
  if (pplVar7 != (long **)0x0) {
    plVar19 = pplVar7[1];
    _objc_retain(pplVar4);
    if (pplVar4 == (long **)0x0) {
      pplVar18 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar18 = pplVar4;
      _objc_retainAutorelease(pplVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar4);
    pplVar5 = aplStack_900;
    func_0x00010002b838(aplStack_900,pplVar18);
    uStack_920 = 0;
    uStack_918 = 0;
    uStack_910 = 0;
    func_0x00010007e1e8(&uStack_920,aplStack_900,&lStack_8e8,1);
    pplVar6 = (long **)&UNK_110a04758;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_908 = (undefined1 *)&uStack_920;
    func_0x00010007e5dc(&puStack_908);
    puVar12 = puVar16;
    puVar15 = puVar9;
    puVar13 = &uStack_920;
    if (cStack_8e9 < '\0') {
      __ZdlPv(aplStack_900[0]);
      puVar12 = puVar16;
      puVar15 = puVar9;
      puVar13 = &uStack_920;
    }
  }
  pplVar18 = pplVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8e8) {
    return pplVar18;
  }
  ___stack_chk_fail();
  _objc_release(pplVar4);
  _objc_release(pplVar4);
  pplVar8 = pplVar18;
  __Unwind_Resume();
  puVar16 = &uStack_9a0;
  puStack_928 = &LAB_107cac2ac;
  lStack_968 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar3 = pplVar6;
  puVar9 = puVar12;
  pplStack_960 = unaff_x24;
  pplStack_958 = pplVar5;
  puStack_950 = puVar13;
  plStack_948 = plVar19;
  pplStack_940 = pplVar18;
  pplStack_938 = pplVar4;
  pppuStack_930 = &pppuStack_8b0;
  _objc_retain(pplVar6);
  plVar19 = (long *)0x0;
  if (pplVar8 != (long **)0x0) {
    plVar19 = pplVar8[1];
    _objc_retain(pplVar6);
    if (pplVar6 == (long **)0x0) {
      pplVar18 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar18 = pplVar6;
      _objc_retainAutorelease(pplVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar6);
    pplVar5 = aplStack_980;
    func_0x00010002b838(aplStack_980,pplVar18);
    uStack_9a0 = 0;
    uStack_998 = 0;
    uStack_990 = 0;
    func_0x00010007e1e8(&uStack_9a0,aplStack_980,&lStack_968,1);
    pplVar3 = (long **)&UNK_110a047a8;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_988 = (undefined1 *)&uStack_9a0;
    func_0x00010007e5dc(&puStack_988);
    puVar9 = puVar16;
    puVar15 = puVar12;
    puVar13 = &uStack_9a0;
    if (cStack_969 < '\0') {
      __ZdlPv(aplStack_980[0]);
      puVar9 = puVar16;
      puVar15 = puVar12;
      puVar13 = &uStack_9a0;
    }
  }
  pplVar18 = pplVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_968) {
    return pplVar18;
  }
  ___stack_chk_fail();
  _objc_release(pplVar6);
  _objc_release(pplVar6);
  pplVar4 = pplVar18;
  __Unwind_Resume();
  plVar14 = alStack_a10;
  puStack_9a8 = &LAB_107cac420;
  lStack_9d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar8 = (long **)0x0;
  puVar12 = puVar9;
  puStack_9d0 = puVar13;
  plStack_9c8 = plVar19;
  pplStack_9c0 = pplVar18;
  pplStack_9b8 = pplVar6;
  pppuStack_9b0 = &pppuStack_930;
  if (pplVar4 != (long **)0x0) {
    pplVar18 = (long **)pplVar4[1];
    puVar1 = &UNK_10f44f9bb;
    if ((int)pplVar3 == 0) {
      puVar1 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(applStack_9f0,puVar1);
    alStack_a10[0] = 0;
    alStack_a10[1] = 0;
    alStack_a10[2] = 0;
    func_0x00010007e1e8(alStack_a10,applStack_9f0,&lStack_9d8,1);
    pplVar3 = (long **)&UNK_110a047f8;
    (*(code *)(*pplVar18)[3])(pplVar18);
    pplVar8 = &plStack_9f8;
    plStack_9f8 = alStack_a10;
    func_0x00010007e5dc();
    puVar12 = plVar14;
    puVar15 = puVar9;
    plVar19 = alStack_a10;
    if (cStack_9d9 < '\0') {
      pplVar8 = applStack_9f0[0];
      __ZdlPv();
      puVar12 = plVar14;
      puVar15 = puVar9;
      plVar19 = alStack_a10;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9d8) {
    return pplVar8;
  }
  ___stack_chk_fail();
  plStack_9f8 = plVar19;
  func_0x00010007e5dc(&plStack_9f8);
  if (cStack_9d9 < '\0') {
    __ZdlPv(applStack_9f0[0]);
  }
  pplVar4 = pplVar8;
  __Unwind_Resume();
  puVar16 = &uStack_a90;
  puStack_a18 = &SUB_107cac538;
  lStack_a58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar3;
  puVar9 = puVar12;
  pplStack_a50 = unaff_x24;
  pplStack_a48 = pplVar5;
  puStack_a40 = puVar13;
  plStack_a38 = plVar19;
  pplStack_a30 = pplVar18;
  pplStack_a28 = pplVar8;
  pppuStack_a20 = &pppuStack_9b0;
  _objc_retain(pplVar3);
  plVar19 = (long *)0x0;
  if (pplVar4 != (long **)0x0) {
    plVar19 = pplVar4[1];
    _objc_retain(pplVar3);
    if (pplVar3 == (long **)0x0) {
      pplVar18 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar18 = pplVar3;
      _objc_retainAutorelease(pplVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar3);
    pplVar5 = aplStack_a70;
    func_0x00010002b838(aplStack_a70,pplVar18);
    uStack_a90 = 0;
    uStack_a88 = 0;
    uStack_a80 = 0;
    func_0x00010007e1e8(&uStack_a90,aplStack_a70,&lStack_a58,1);
    pplVar6 = (long **)&UNK_110a04848;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_a78 = (undefined1 *)&uStack_a90;
    func_0x00010007e5dc(&puStack_a78);
    puVar9 = puVar16;
    puVar15 = puVar12;
    puVar13 = &uStack_a90;
    if (cStack_a59 < '\0') {
      __ZdlPv(aplStack_a70[0]);
      puVar9 = puVar16;
      puVar15 = puVar12;
      puVar13 = &uStack_a90;
    }
  }
  pplVar18 = pplVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a58) {
    return pplVar18;
  }
  ___stack_chk_fail();
  _objc_release(pplVar3);
  _objc_release(pplVar3);
  pplVar4 = pplVar18;
  __Unwind_Resume();
  puVar16 = &uStack_b10;
  puStack_a98 = &SUB_107cac6ac;
  lStack_ad8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar8 = pplVar6;
  puVar12 = puVar9;
  pplStack_ad0 = unaff_x24;
  pplStack_ac8 = pplVar5;
  puStack_ac0 = puVar13;
  plStack_ab8 = plVar19;
  pplStack_ab0 = pplVar18;
  pplStack_aa8 = pplVar3;
  pppuStack_aa0 = &pppuStack_a20;
  _objc_retain(pplVar6);
  plVar19 = (long *)0x0;
  if (pplVar4 != (long **)0x0) {
    plVar19 = pplVar4[1];
    _objc_retain(pplVar6);
    if (pplVar6 == (long **)0x0) {
      pplVar18 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar18 = pplVar6;
      _objc_retainAutorelease(pplVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar6);
    pplVar5 = aplStack_af0;
    func_0x00010002b838(aplStack_af0,pplVar18);
    uStack_b10 = 0;
    uStack_b08 = 0;
    uStack_b00 = 0;
    func_0x00010007e1e8(&uStack_b10,aplStack_af0,&lStack_ad8,1);
    pplVar8 = (long **)&UNK_110a04898;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_af8 = (undefined1 *)&uStack_b10;
    func_0x00010007e5dc(&puStack_af8);
    puVar12 = puVar16;
    puVar15 = puVar9;
    puVar13 = &uStack_b10;
    if (cStack_ad9 < '\0') {
      __ZdlPv(aplStack_af0[0]);
      puVar12 = puVar16;
      puVar15 = puVar9;
      puVar13 = &uStack_b10;
    }
  }
  pplVar18 = pplVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ad8) {
    return pplVar18;
  }
  ___stack_chk_fail();
  _objc_release(pplVar6);
  _objc_release(pplVar6);
  pplVar4 = pplVar18;
  __Unwind_Resume();
  puVar16 = &uStack_b90;
  puStack_b18 = &SUB_107cac820;
  lStack_b58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar3 = pplVar8;
  puVar9 = puVar12;
  pplStack_b50 = unaff_x24;
  pplStack_b48 = pplVar5;
  puStack_b40 = puVar13;
  plStack_b38 = plVar19;
  pplStack_b30 = pplVar18;
  pplStack_b28 = pplVar6;
  pppuStack_b20 = &pppuStack_aa0;
  _objc_retain(pplVar8);
  plVar19 = (long *)0x0;
  if (pplVar4 != (long **)0x0) {
    plVar19 = pplVar4[1];
    _objc_retain(pplVar8);
    if (pplVar8 == (long **)0x0) {
      pplVar18 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar18 = pplVar8;
      _objc_retainAutorelease(pplVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar8);
    pplVar5 = aplStack_b70;
    func_0x00010002b838(aplStack_b70,pplVar18);
    uStack_b90 = 0;
    uStack_b88 = 0;
    uStack_b80 = 0;
    func_0x00010007e1e8(&uStack_b90,aplStack_b70,&lStack_b58,1);
    pplVar3 = (long **)&UNK_110a048e8;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_b78 = (undefined1 *)&uStack_b90;
    func_0x00010007e5dc(&puStack_b78);
    puVar9 = puVar16;
    puVar15 = puVar12;
    puVar13 = &uStack_b90;
    if (cStack_b59 < '\0') {
      __ZdlPv(aplStack_b70[0]);
      puVar9 = puVar16;
      puVar15 = puVar12;
      puVar13 = &uStack_b90;
    }
  }
  pplVar18 = pplVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b58) {
    return pplVar18;
  }
  ___stack_chk_fail();
  _objc_release(pplVar8);
  _objc_release(pplVar8);
  pplVar4 = pplVar18;
  __Unwind_Resume();
  puVar16 = &uStack_c10;
  puStack_b98 = &SUB_107cac994;
  lStack_bd8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar3;
  puVar12 = puVar9;
  pplStack_bd0 = unaff_x24;
  pplStack_bc8 = pplVar5;
  puStack_bc0 = puVar13;
  plStack_bb8 = plVar19;
  pplStack_bb0 = pplVar18;
  pplStack_ba8 = pplVar8;
  pppuStack_ba0 = &pppuStack_b20;
  _objc_retain(pplVar3);
  plVar19 = (long *)0x0;
  if (pplVar4 != (long **)0x0) {
    plVar19 = pplVar4[1];
    _objc_retain(pplVar3);
    if (pplVar3 == (long **)0x0) {
      pplVar18 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar18 = pplVar3;
      _objc_retainAutorelease(pplVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar3);
    pplVar5 = aplStack_bf0;
    func_0x00010002b838(aplStack_bf0,pplVar18);
    uStack_c10 = 0;
    uStack_c08 = 0;
    uStack_c00 = 0;
    func_0x00010007e1e8(&uStack_c10,aplStack_bf0,&lStack_bd8,1);
    pplVar6 = (long **)&UNK_110a04938;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_bf8 = (undefined1 *)&uStack_c10;
    func_0x00010007e5dc(&puStack_bf8);
    puVar12 = puVar16;
    puVar15 = puVar9;
    puVar13 = &uStack_c10;
    if (cStack_bd9 < '\0') {
      __ZdlPv(aplStack_bf0[0]);
      puVar12 = puVar16;
      puVar15 = puVar9;
      puVar13 = &uStack_c10;
    }
  }
  pplVar18 = pplVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_bd8) {
    return pplVar18;
  }
  ___stack_chk_fail();
  _objc_release(pplVar3);
  _objc_release(pplVar3);
  pplVar4 = pplVar18;
  __Unwind_Resume();
  puVar16 = &uStack_c90;
  puStack_c18 = &SUB_107cacb08;
  lStack_c58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar8 = pplVar6;
  puVar9 = puVar12;
  pplStack_c50 = unaff_x24;
  pplStack_c48 = pplVar5;
  puStack_c40 = puVar13;
  plStack_c38 = plVar19;
  pplStack_c30 = pplVar18;
  pplStack_c28 = pplVar3;
  pppuStack_c20 = &pppuStack_ba0;
  _objc_retain(pplVar6);
  plVar19 = (long *)0x0;
  if (pplVar4 != (long **)0x0) {
    plVar19 = pplVar4[1];
    _objc_retain(pplVar6);
    if (pplVar6 == (long **)0x0) {
      pplVar18 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar18 = pplVar6;
      _objc_retainAutorelease(pplVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar6);
    pplVar5 = aplStack_c70;
    func_0x00010002b838(aplStack_c70,pplVar18);
    uStack_c90 = 0;
    uStack_c88 = 0;
    uStack_c80 = 0;
    func_0x00010007e1e8(&uStack_c90,aplStack_c70,&lStack_c58,1);
    pplVar8 = (long **)&UNK_110a04988;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_c78 = (undefined1 *)&uStack_c90;
    func_0x00010007e5dc(&puStack_c78);
    puVar9 = puVar16;
    puVar15 = puVar12;
    puVar13 = &uStack_c90;
    if (cStack_c59 < '\0') {
      __ZdlPv(aplStack_c70[0]);
      puVar9 = puVar16;
      puVar15 = puVar12;
      puVar13 = &uStack_c90;
    }
  }
  pplVar18 = pplVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c58) {
    return pplVar18;
  }
  ___stack_chk_fail();
  _objc_release(pplVar6);
  _objc_release(pplVar6);
  pplVar4 = pplVar18;
  __Unwind_Resume();
  puVar16 = &uStack_d10;
  puStack_c98 = &SUB_107cacc7c;
  lStack_cd8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar3 = pplVar8;
  puVar12 = puVar9;
  pplStack_cd0 = unaff_x24;
  pplStack_cc8 = pplVar5;
  puStack_cc0 = puVar13;
  plStack_cb8 = plVar19;
  pplStack_cb0 = pplVar18;
  pplStack_ca8 = pplVar6;
  pppuStack_ca0 = &pppuStack_c20;
  _objc_retain(pplVar8);
  plVar19 = (long *)0x0;
  if (pplVar4 != (long **)0x0) {
    plVar19 = pplVar4[1];
    _objc_retain(pplVar8);
    if (pplVar8 == (long **)0x0) {
      pplVar18 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar18 = pplVar8;
      _objc_retainAutorelease(pplVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar8);
    pplVar5 = aplStack_cf0;
    func_0x00010002b838(aplStack_cf0,pplVar18);
    uStack_d10 = 0;
    uStack_d08 = 0;
    uStack_d00 = 0;
    func_0x00010007e1e8(&uStack_d10,aplStack_cf0,&lStack_cd8,1);
    pplVar3 = (long **)&UNK_110a049d8;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_cf8 = (undefined1 *)&uStack_d10;
    func_0x00010007e5dc(&puStack_cf8);
    puVar12 = puVar16;
    puVar15 = puVar9;
    puVar13 = &uStack_d10;
    if (cStack_cd9 < '\0') {
      __ZdlPv(aplStack_cf0[0]);
      puVar12 = puVar16;
      puVar15 = puVar9;
      puVar13 = &uStack_d10;
    }
  }
  pplVar18 = pplVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_cd8) {
    return pplVar18;
  }
  ___stack_chk_fail();
  _objc_release(pplVar8);
  _objc_release(pplVar8);
  pplVar4 = pplVar18;
  __Unwind_Resume();
  puVar16 = &uStack_d90;
  puStack_d18 = &SUB_107cacdf0;
  lStack_d58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar3;
  puVar9 = puVar12;
  pplStack_d50 = unaff_x24;
  pplStack_d48 = pplVar5;
  puStack_d40 = puVar13;
  plStack_d38 = plVar19;
  pplStack_d30 = pplVar18;
  pplStack_d28 = pplVar8;
  pppuStack_d20 = &pppuStack_ca0;
  _objc_retain(pplVar3);
  plVar19 = (long *)0x0;
  if (pplVar4 != (long **)0x0) {
    plVar19 = pplVar4[1];
    _objc_retain(pplVar3);
    if (pplVar3 == (long **)0x0) {
      pplVar18 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar18 = pplVar3;
      _objc_retainAutorelease(pplVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar3);
    pplVar5 = aplStack_d70;
    func_0x00010002b838(aplStack_d70,pplVar18);
    uStack_d90 = 0;
    uStack_d88 = 0;
    uStack_d80 = 0;
    func_0x00010007e1e8(&uStack_d90,aplStack_d70,&lStack_d58,1);
    pplVar6 = (long **)&UNK_110a04a28;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_d78 = (undefined1 *)&uStack_d90;
    func_0x00010007e5dc(&puStack_d78);
    puVar9 = puVar16;
    puVar15 = puVar12;
    puVar13 = &uStack_d90;
    if (cStack_d59 < '\0') {
      __ZdlPv(aplStack_d70[0]);
      puVar9 = puVar16;
      puVar15 = puVar12;
      puVar13 = &uStack_d90;
    }
  }
  pplVar18 = pplVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d58) {
    return pplVar18;
  }
  ___stack_chk_fail();
  _objc_release(pplVar3);
  _objc_release(pplVar3);
  pplVar4 = pplVar18;
  __Unwind_Resume();
  puVar16 = &uStack_e10;
  puStack_d98 = &SUB_107cacf64;
  lStack_dd8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar8 = pplVar6;
  puVar12 = puVar9;
  pplStack_dd0 = unaff_x24;
  pplStack_dc8 = pplVar5;
  puStack_dc0 = puVar13;
  plStack_db8 = plVar19;
  pplStack_db0 = pplVar18;
  pplStack_da8 = pplVar3;
  pppuStack_da0 = &pppuStack_d20;
  _objc_retain(pplVar6);
  plVar19 = (long *)0x0;
  if (pplVar4 != (long **)0x0) {
    plVar19 = pplVar4[1];
    _objc_retain(pplVar6);
    if (pplVar6 == (long **)0x0) {
      pplVar18 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar18 = pplVar6;
      _objc_retainAutorelease(pplVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar6);
    pplVar5 = aplStack_df0;
    func_0x00010002b838(aplStack_df0,pplVar18);
    uStack_e10 = 0;
    uStack_e08 = 0;
    uStack_e00 = 0;
    func_0x00010007e1e8(&uStack_e10,aplStack_df0,&lStack_dd8,1);
    pplVar8 = (long **)&UNK_110a04a78;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_df8 = (undefined1 *)&uStack_e10;
    func_0x00010007e5dc(&puStack_df8);
    puVar12 = puVar16;
    puVar15 = puVar9;
    puVar13 = &uStack_e10;
    if (cStack_dd9 < '\0') {
      __ZdlPv(aplStack_df0[0]);
      puVar12 = puVar16;
      puVar15 = puVar9;
      puVar13 = &uStack_e10;
    }
  }
  pplVar18 = pplVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_dd8) {
    return pplVar18;
  }
  ___stack_chk_fail();
  _objc_release(pplVar6);
  _objc_release(pplVar6);
  pplVar4 = pplVar18;
  __Unwind_Resume();
  puVar16 = &uStack_e90;
  puStack_e18 = &SUB_107cad0d8;
  lStack_e58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar3 = pplVar8;
  puVar9 = puVar12;
  pplStack_e50 = unaff_x24;
  pplStack_e48 = pplVar5;
  puStack_e40 = puVar13;
  plStack_e38 = plVar19;
  pplStack_e30 = pplVar18;
  pplStack_e28 = pplVar6;
  pppuStack_e20 = &pppuStack_da0;
  _objc_retain(pplVar8);
  plVar19 = (long *)0x0;
  if (pplVar4 != (long **)0x0) {
    plVar19 = pplVar4[1];
    _objc_retain(pplVar8);
    if (pplVar8 == (long **)0x0) {
      pplVar18 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar18 = pplVar8;
      _objc_retainAutorelease(pplVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar8);
    pplVar5 = aplStack_e70;
    func_0x00010002b838(aplStack_e70,pplVar18);
    uStack_e90 = 0;
    uStack_e88 = 0;
    uStack_e80 = 0;
    func_0x00010007e1e8(&uStack_e90,aplStack_e70,&lStack_e58,1);
    pplVar3 = (long **)&UNK_110a04ac8;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_e78 = (undefined1 *)&uStack_e90;
    func_0x00010007e5dc(&puStack_e78);
    puVar9 = puVar16;
    puVar15 = puVar12;
    puVar13 = &uStack_e90;
    if (cStack_e59 < '\0') {
      __ZdlPv(aplStack_e70[0]);
      puVar9 = puVar16;
      puVar15 = puVar12;
      puVar13 = &uStack_e90;
    }
  }
  pplVar18 = pplVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e58) {
    return pplVar18;
  }
  ___stack_chk_fail();
  _objc_release(pplVar8);
  _objc_release(pplVar8);
  pplVar4 = pplVar18;
  __Unwind_Resume();
  puVar16 = &uStack_f10;
  puStack_e98 = &SUB_107cad24c;
  lStack_ed8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar3;
  puVar12 = puVar9;
  pplStack_ed0 = unaff_x24;
  pplStack_ec8 = pplVar5;
  puStack_ec0 = puVar13;
  plStack_eb8 = plVar19;
  pplStack_eb0 = pplVar18;
  pplStack_ea8 = pplVar8;
  pppuStack_ea0 = &pppuStack_e20;
  _objc_retain(pplVar3);
  plVar19 = (long *)0x0;
  if (pplVar4 != (long **)0x0) {
    plVar19 = pplVar4[1];
    _objc_retain(pplVar3);
    if (pplVar3 == (long **)0x0) {
      pplVar18 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar18 = pplVar3;
      _objc_retainAutorelease(pplVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar3);
    pplVar5 = aplStack_ef0;
    func_0x00010002b838(aplStack_ef0,pplVar18);
    uStack_f10 = 0;
    uStack_f08 = 0;
    uStack_f00 = 0;
    func_0x00010007e1e8(&uStack_f10,aplStack_ef0,&lStack_ed8,1);
    pplVar6 = (long **)&UNK_110a04b18;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_ef8 = (undefined1 *)&uStack_f10;
    func_0x00010007e5dc(&puStack_ef8);
    puVar12 = puVar16;
    puVar15 = puVar9;
    puVar13 = &uStack_f10;
    if (cStack_ed9 < '\0') {
      __ZdlPv(aplStack_ef0[0]);
      puVar12 = puVar16;
      puVar15 = puVar9;
      puVar13 = &uStack_f10;
    }
  }
  pplVar18 = pplVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_ed8) {
    ___stack_chk_fail();
    _objc_release(pplVar3);
    _objc_release(pplVar3);
    pplVar4 = pplVar18;
    __Unwind_Resume();
    puVar16 = &uStack_f90;
    puStack_f18 = &SUB_107cad3c0;
    lStack_f58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar8 = pplVar6;
    puVar9 = puVar12;
    pplStack_f50 = unaff_x24;
    pplStack_f48 = pplVar5;
    puStack_f40 = puVar13;
    plStack_f38 = plVar19;
    pplStack_f30 = pplVar18;
    pplStack_f28 = pplVar3;
    pppuStack_f20 = &pppuStack_ea0;
    _objc_retain(pplVar6);
    plVar19 = (long *)0x0;
    if (pplVar4 != (long **)0x0) {
      plVar19 = pplVar4[1];
      _objc_retain(pplVar6);
      if (pplVar6 == (long **)0x0) {
        pplVar18 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar18 = pplVar6;
        _objc_retainAutorelease(pplVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar6);
      pplVar5 = aplStack_f70;
      func_0x00010002b838(aplStack_f70,pplVar18);
      uStack_f90 = 0;
      uStack_f88 = 0;
      uStack_f80 = 0;
      func_0x00010007e1e8(&uStack_f90,aplStack_f70,&lStack_f58,1);
      pplVar8 = (long **)&UNK_110a04b68;
      (**(code **)(*plVar19 + 0x18))(plVar19);
      puStack_f78 = (undefined1 *)&uStack_f90;
      func_0x00010007e5dc(&puStack_f78);
      puVar9 = puVar16;
      puVar15 = puVar12;
      puVar13 = &uStack_f90;
      if (cStack_f59 < '\0') {
        __ZdlPv(aplStack_f70[0]);
        puVar9 = puVar16;
        puVar15 = puVar12;
        puVar13 = &uStack_f90;
      }
    }
    pplVar18 = pplVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f58) {
      return pplVar18;
    }
    ___stack_chk_fail();
    _objc_release(pplVar6);
    _objc_release(pplVar6);
    pplVar4 = pplVar18;
    __Unwind_Resume();
    puStack_f98 = &LAB_107cad534;
    lStack_fd8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar3 = pplVar8;
    puVar12 = puVar9;
    puVar16 = puVar15;
    pplStack_fd0 = unaff_x24;
    pplStack_fc8 = pplVar5;
    puStack_fc0 = puVar13;
    plStack_fb8 = plVar19;
    pplStack_fb0 = pplVar18;
    pplStack_fa8 = pplVar6;
    pppuStack_fa0 = &pppuStack_f20;
    _objc_retain(pplVar8);
    _objc_retain(puVar9);
    if (pplVar4 != (long **)0x0) {
      plVar19 = pplVar4[1];
      pplVar3 = (long **)&UNK_110a04bb8;
      (**(code **)(*plVar19 + 0x28))();
      if ((int)plVar19 != 0) {
        plVar19 = pplVar4[1];
        _objc_retain(pplVar8);
        if (pplVar8 == (long **)0x0) {
          pplVar18 = (long **)&UNK_10f44f7d9;
        }
        else {
          pplVar18 = pplVar8;
          _objc_retainAutorelease(pplVar8);
          func_0x00010bdc3520();
        }
        _objc_release(pplVar8);
        unaff_x24 = aplStack_1008;
        func_0x00010002b838(aplStack_1008,pplVar18);
        _objc_retain(puVar9);
        if (puVar9 == (undefined8 *)0x0) {
          puVar12 = (undefined8 *)&UNK_10f44f7d9;
        }
        else {
          _objc_retainAutorelease(puVar9);
          puVar12 = puVar9;
          func_0x00010bdc3520(puVar9);
        }
        _objc_release(puVar9);
        func_0x00010002b838(auStack_ff0,puVar12);
        uStack_1028 = 0;
        uStack_1020 = 0;
        uStack_1018 = 0;
        func_0x00010007e1e8(&uStack_1028,aplStack_1008,&lStack_fd8,2);
        puVar16 = (undefined8 *)((long)puVar15 * 10);
        pplVar3 = (long **)&UNK_110a04bb8;
        puVar12 = &uStack_1028;
        (**(code **)(*plVar19 + 0x18))(plVar19);
        puStack_1010 = &uStack_1028;
        func_0x00010007e5dc(&puStack_1010);
        lVar2 = 0;
        do {
          if ((&cStack_fd9)[lVar2] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_ff0 + lVar2));
          }
          lVar2 = lVar2 + -0x18;
        } while (lVar2 != -0x30);
      }
    }
    _objc_release(puVar9);
    pplVar18 = pplVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_fd8) {
      return pplVar18;
    }
    ___stack_chk_fail();
    _objc_release(puVar9);
    if (cStack_ff1 < '\0') {
      __ZdlPv(aplStack_1008[0]);
    }
    _objc_release(puVar9);
    _objc_release(pplVar8);
    __Unwind_Resume();
    puStack_1038 = &LAB_107cad788;
    lStack_1088 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar6 = pplVar3;
    puVar9 = puVar12;
    puVar13 = puVar16;
    pppuStack_1040 = &pppuStack_fa0;
    _objc_retain(pplVar3);
    iVar11 = (int)puVar9;
    _objc_retain(puVar12);
    _objc_retain(puVar17);
    if (pplVar18 != (long **)0x0) {
      plVar19 = pplVar18[1];
      _objc_retain(pplVar3);
      if (pplVar3 == (long **)0x0) {
        pplVar18 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar18 = pplVar3;
        _objc_retainAutorelease(pplVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar3);
      func_0x00010002b838(aplStack_10e8,pplVar18);
      _objc_retain(puVar12);
      if (puVar12 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)&UNK_10f44f7d9;
      }
      else {
        _objc_retainAutorelease(puVar12);
        puVar9 = puVar12;
        func_0x00010bdc3520(puVar12);
      }
      _objc_release(puVar12);
      func_0x00010002b838(auStack_10d0,puVar9);
      puVar1 = &UNK_10f44f9bb;
      if ((int)puVar16 == 0) {
        puVar1 = &UNK_10f44f9c0;
      }
      func_0x00010002b838(auStack_10b8,puVar1);
      _objc_retain(puVar17);
      if (puVar17 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)&UNK_10f44f7d9;
      }
      else {
        _objc_retainAutorelease(puVar17);
        puVar9 = puVar17;
        func_0x00010bdc3520(puVar17);
      }
      _objc_release(puVar17);
      func_0x00010002b838(auStack_10a0,puVar9);
      plStack_1108 = (long *)0x0;
      uStack_1100 = 0;
      uStack_10f8 = 0;
      func_0x00010007e1e8(&plStack_1108,aplStack_10e8,&lStack_1088,4);
      pplVar6 = (long **)&UNK_110a04c08;
      unaff_x24 = &plStack_1108;
      pplVar18 = &plStack_1108;
      (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_110a04c08,pplVar18,param_6);
      pplStack_10f0 = unaff_x24;
      func_0x00010007e5dc(&pplStack_10f0);
      lVar2 = 0;
      puVar13 = param_6;
      do {
        if ((&cStack_1089)[lVar2] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_10a0 + lVar2));
        }
        iVar11 = (int)pplVar18;
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != -0x60);
    }
    _objc_release(puVar17);
    _objc_release(puVar12);
    pplVar18 = pplVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1088) {
      return pplVar18;
    }
    ___stack_chk_fail();
    _objc_release(puVar17);
    pplStack_1148 = aplStack_10e8;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != pplStack_1148);
    _objc_release(puVar17);
    _objc_release(puVar12);
    _objc_release(pplVar3);
    pplVar5 = pplVar18;
    __Unwind_Resume();
    puStack_1118 = &LAB_107cada70;
    lStack_1158 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplStack_1150 = unaff_x24;
    pplStack_1140 = pplVar18;
    puStack_1138 = puVar17;
    puStack_1130 = puVar12;
    pplStack_1128 = pplVar3;
    pppuStack_1120 = &pppuStack_1040;
    _objc_retain(pplVar6);
    if (pplVar5 != (long **)0x0) {
      plVar19 = pplVar5[1];
      _objc_retain(pplVar6);
      if (pplVar6 == (long **)0x0) {
        pplVar18 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar18 = pplVar6;
        _objc_retainAutorelease(pplVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar6);
      func_0x00010002b838(auStack_1188,pplVar18);
      puVar1 = &UNK_10f44f9bb;
      if (iVar11 == 0) {
        puVar1 = &UNK_10f44f9c0;
      }
      func_0x00010002b838(auStack_1170,puVar1);
      uStack_11a8 = 0;
      uStack_11a0 = 0;
      uStack_1198 = 0;
      func_0x00010007e1e8(&uStack_11a8,auStack_1188,&lStack_1158,2);
      (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_110a04c58,&uStack_11a8,puVar13);
      puStack_1190 = &uStack_11a8;
      func_0x00010007e5dc(&puStack_1190);
      lVar2 = 0;
      do {
        if ((&cStack_1159)[lVar2] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1170 + lVar2));
        }
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != -0x30);
    }
    pplVar18 = pplVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1158) {
      ___stack_chk_fail();
      _objc_release(pplVar6);
      _objc_release(pplVar6);
      pplVar3 = pplVar18;
      __Unwind_Resume();
      ppplVar10 = &pplStack_11e0;
      puStack_11b8 = &UNK_107cadc58;
      puStack_11d8 = PTR_PTR_1126fa610;
      pplStack_11e0 = pplVar3;
      pplStack_11d0 = pplVar18;
      pplStack_11c8 = pplVar6;
      pppuStack_11c0 = &pppuStack_1120;
      _objc_msgSendSuper2(&pplStack_11e0,PTR_s_init_1125d9248);
      if (ppplVar10 != (long ***)0x0) {
        pplVar18 = (long **)ppplVar10;
        (*(code *)PTR_DAT_113403208)();
        ppplVar10[1] = pplVar18;
      }
      return (long **)ppplVar10;
    }
    return pplVar18;
  }
  return pplVar18;
}



/* Entry: 105b0be28; end: 105b0bedb; -[SCStoriesGrapheneMetricsEmitter logFeedSwitchAbandonedForFeedType:viewLocation:] */

void FUN_105b0be28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x000107ca2d30(*(undefined8 *)(param_1 + 8),puVar2,param_4,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105b0bedc; end: 105b0bf8f; -[SCStoriesGrapheneMetricsEmitter logFeedSwitchToFeedType:viewLocation:] */

void FUN_105b0bedc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x000107ca2d30(*(undefined8 *)(param_1 + 8),puVar2,param_4,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105b0bf90; end: 105b0c04f; -[SCStoriesGrapheneMetricsEmitter logFeedSwitchLatencyForFeedType:latency:viewLocation:] */

void FUN_105b0bf90(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x000107ca3840(param_1,*(undefined8 *)(param_2 + 8),puVar2,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105b0c050; end: 105b0c05f; -[SCStoriesGrapheneMetricsEmitter logInvalidFriendStoryForReason:] */

/* WARNING: Removing unreachable block (ram,0x000107cada38) */

long ** FUN_105b0c050(long param_1,undefined8 param_2,long **param_3,undefined8 *param_4,
                     undefined *param_5,undefined8 *param_6)

{
  long lVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long **pplVar8;
  long ***ppplVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  long **pplStack_940;
  undefined *puStack_938;
  long **pplStack_930;
  long **pplStack_928;
  undefined8 ***pppuStack_920;
  undefined *puStack_918;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 *puStack_8f0;
  undefined1 auStack_8e8 [24];
  undefined8 auStack_8d0 [2];
  char cStack_8b9;
  long lStack_8b8;
  undefined8 *puStack_8b0;
  undefined8 *puStack_8a8;
  long **pplStack_8a0;
  undefined *puStack_898;
  undefined8 *puStack_890;
  long **pplStack_888;
  undefined8 ***pppuStack_880;
  undefined *puStack_878;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 *puStack_850;
  undefined8 auStack_848 [3];
  undefined1 auStack_830 [24];
  undefined1 auStack_818 [24];
  undefined8 auStack_800 [2];
  char cStack_7e9;
  long lStack_7e8;
  undefined8 ***pppuStack_7a0;
  undefined *puStack_798;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 *puStack_770;
  undefined8 auStack_768 [2];
  char cStack_751;
  undefined8 auStack_750 [2];
  char cStack_739;
  long lStack_738;
  undefined8 ***pppuStack_700;
  undefined *puStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined1 *puStack_6d8;
  undefined8 auStack_6d0 [2];
  char cStack_6b9;
  long lStack_6b8;
  undefined8 ***pppuStack_680;
  undefined *puStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined1 *puStack_658;
  undefined8 auStack_650 [2];
  char cStack_639;
  long lStack_638;
  undefined8 ***pppuStack_600;
  undefined *puStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined1 *puStack_5d8;
  undefined8 auStack_5d0 [2];
  char cStack_5b9;
  long lStack_5b8;
  undefined8 ***pppuStack_580;
  undefined *puStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined1 *puStack_558;
  undefined8 auStack_550 [2];
  char cStack_539;
  long lStack_538;
  undefined8 ***pppuStack_500;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 *puStack_4d8;
  undefined8 auStack_4d0 [2];
  char cStack_4b9;
  long lStack_4b8;
  undefined8 ***pppuStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 *puStack_458;
  undefined8 auStack_450 [2];
  char cStack_439;
  long lStack_438;
  undefined8 ***pppuStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 *puStack_3d8;
  undefined8 auStack_3d0 [2];
  char cStack_3b9;
  long lStack_3b8;
  undefined8 ***pppuStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 *puStack_358;
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined8 ***pppuStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 *puStack_2d8;
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  undefined8 ***pppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 ***pppuStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 ***pppuStack_180;
  undefined *puStack_178;
  long alStack_170 [3];
  long *plStack_158;
  long **applStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined1 *puStack_130;
  long *plStack_128;
  long **pplStack_120;
  long **pplStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  puVar11 = (undefined8 *)0x1;
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar15 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (long **)0x0) {
      pplVar2 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pplVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pplVar2 = (long **)&UNK_110a04758;
    param_4 = (undefined8 *)0x1;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar11 = puVar6;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar11 = puVar6;
      unaff_x22 = &uStack_80;
    }
  }
  pplVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar13 = &uStack_100;
  puStack_88 = &LAB_107cac2ac;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar8 = pplVar2;
  puVar6 = puVar11;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pplVar2);
  plVar15 = (long *)0x0;
  if (pplVar3 != (long **)0x0) {
    plVar15 = pplVar3[1];
    _objc_retain(pplVar2);
    if (pplVar2 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = pplVar2;
      _objc_retainAutorelease(pplVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar2);
    func_0x00010002b838(auStack_e0,pplVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pplVar8 = (long **)&UNK_110a047a8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = puVar13;
    param_4 = puVar11;
    unaff_x22 = &uStack_100;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = puVar13;
      param_4 = puVar11;
      unaff_x22 = &uStack_100;
    }
  }
  pplVar3 = pplVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar2);
  _objc_release(pplVar2);
  pplVar4 = pplVar3;
  __Unwind_Resume();
  plVar12 = alStack_170;
  puStack_108 = &LAB_107cac420;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = (long **)0x0;
  puVar11 = puVar6;
  puStack_130 = (undefined1 *)unaff_x22;
  plStack_128 = plVar15;
  pplStack_120 = pplVar3;
  pplStack_118 = pplVar2;
  ppuStack_110 = &puStack_90;
  if (pplVar4 != (long **)0x0) {
    plVar15 = pplVar4[1];
    puVar7 = &UNK_10f44f9bb;
    if ((int)pplVar8 == 0) {
      puVar7 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(applStack_150,puVar7);
    alStack_170[0] = 0;
    alStack_170[1] = 0;
    alStack_170[2] = 0;
    func_0x00010007e1e8(alStack_170,applStack_150,&lStack_138,1);
    pplVar8 = (long **)&UNK_110a047f8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    pplVar5 = &plStack_158;
    plStack_158 = alStack_170;
    func_0x00010007e5dc();
    puVar11 = plVar12;
    param_4 = puVar6;
    plVar15 = alStack_170;
    if (cStack_139 < '\0') {
      pplVar5 = applStack_150[0];
      __ZdlPv();
      puVar11 = plVar12;
      param_4 = puVar6;
      plVar15 = alStack_170;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return pplVar5;
  }
  ___stack_chk_fail();
  plStack_158 = plVar15;
  func_0x00010007e5dc(&plStack_158);
  if (cStack_139 < '\0') {
    __ZdlPv(applStack_150[0]);
  }
  __Unwind_Resume();
  puVar13 = &uStack_1f0;
  puStack_178 = &SUB_107cac538;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = pplVar8;
  puVar6 = puVar11;
  pppuStack_180 = &ppuStack_110;
  _objc_retain(pplVar8);
  if (pplVar5 != (long **)0x0) {
    plVar15 = pplVar5[1];
    _objc_retain(pplVar8);
    if (pplVar8 == (long **)0x0) {
      pplVar2 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar2 = pplVar8;
      _objc_retainAutorelease(pplVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar8);
    func_0x00010002b838(auStack_1d0,pplVar2);
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    func_0x00010007e1e8(&uStack_1f0,auStack_1d0,&lStack_1b8,1);
    pplVar2 = (long **)&UNK_110a04848;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_1d8 = (undefined1 *)&uStack_1f0;
    func_0x00010007e5dc(&puStack_1d8);
    puVar6 = puVar13;
    param_4 = puVar11;
    if (cStack_1b9 < '\0') {
      __ZdlPv(auStack_1d0[0]);
      puVar6 = puVar13;
      param_4 = puVar11;
    }
  }
  pplVar3 = pplVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar8);
  _objc_release(pplVar8);
  __Unwind_Resume();
  puVar13 = &uStack_270;
  puStack_1f8 = &SUB_107cac6ac;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar8 = pplVar2;
  puVar11 = puVar6;
  pppuStack_200 = &pppuStack_180;
  _objc_retain(pplVar2);
  if (pplVar3 != (long **)0x0) {
    plVar15 = pplVar3[1];
    _objc_retain(pplVar2);
    if (pplVar2 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = pplVar2;
      _objc_retainAutorelease(pplVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar2);
    func_0x00010002b838(auStack_250,pplVar3);
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    func_0x00010007e1e8(&uStack_270,auStack_250,&lStack_238,1);
    pplVar8 = (long **)&UNK_110a04898;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_258 = (undefined1 *)&uStack_270;
    func_0x00010007e5dc(&puStack_258);
    puVar11 = puVar13;
    param_4 = puVar6;
    if (cStack_239 < '\0') {
      __ZdlPv(auStack_250[0]);
      puVar11 = puVar13;
      param_4 = puVar6;
    }
  }
  pplVar3 = pplVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar2);
  _objc_release(pplVar2);
  __Unwind_Resume();
  puVar13 = &uStack_2f0;
  puStack_278 = &SUB_107cac820;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = pplVar8;
  puVar6 = puVar11;
  pppuStack_280 = &pppuStack_200;
  _objc_retain(pplVar8);
  if (pplVar3 != (long **)0x0) {
    plVar15 = pplVar3[1];
    _objc_retain(pplVar8);
    if (pplVar8 == (long **)0x0) {
      pplVar2 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar2 = pplVar8;
      _objc_retainAutorelease(pplVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar8);
    func_0x00010002b838(auStack_2d0,pplVar2);
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    func_0x00010007e1e8(&uStack_2f0,auStack_2d0,&lStack_2b8,1);
    pplVar2 = (long **)&UNK_110a048e8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_2d8 = (undefined1 *)&uStack_2f0;
    func_0x00010007e5dc(&puStack_2d8);
    puVar6 = puVar13;
    param_4 = puVar11;
    if (cStack_2b9 < '\0') {
      __ZdlPv(auStack_2d0[0]);
      puVar6 = puVar13;
      param_4 = puVar11;
    }
  }
  pplVar3 = pplVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar8);
  _objc_release(pplVar8);
  __Unwind_Resume();
  puVar13 = &uStack_370;
  puStack_2f8 = &SUB_107cac994;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar8 = pplVar2;
  puVar11 = puVar6;
  pppuStack_300 = &pppuStack_280;
  _objc_retain(pplVar2);
  if (pplVar3 != (long **)0x0) {
    plVar15 = pplVar3[1];
    _objc_retain(pplVar2);
    if (pplVar2 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = pplVar2;
      _objc_retainAutorelease(pplVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar2);
    func_0x00010002b838(auStack_350,pplVar3);
    uStack_370 = 0;
    uStack_368 = 0;
    uStack_360 = 0;
    func_0x00010007e1e8(&uStack_370,auStack_350,&lStack_338,1);
    pplVar8 = (long **)&UNK_110a04938;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_358 = (undefined1 *)&uStack_370;
    func_0x00010007e5dc(&puStack_358);
    puVar11 = puVar13;
    param_4 = puVar6;
    if (cStack_339 < '\0') {
      __ZdlPv(auStack_350[0]);
      puVar11 = puVar13;
      param_4 = puVar6;
    }
  }
  pplVar3 = pplVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar2);
  _objc_release(pplVar2);
  __Unwind_Resume();
  puVar13 = &uStack_3f0;
  puStack_378 = &SUB_107cacb08;
  lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = pplVar8;
  puVar6 = puVar11;
  pppuStack_380 = &pppuStack_300;
  _objc_retain(pplVar8);
  if (pplVar3 != (long **)0x0) {
    plVar15 = pplVar3[1];
    _objc_retain(pplVar8);
    if (pplVar8 == (long **)0x0) {
      pplVar2 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar2 = pplVar8;
      _objc_retainAutorelease(pplVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar8);
    func_0x00010002b838(auStack_3d0,pplVar2);
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    func_0x00010007e1e8(&uStack_3f0,auStack_3d0,&lStack_3b8,1);
    pplVar2 = (long **)&UNK_110a04988;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_3d8 = (undefined1 *)&uStack_3f0;
    func_0x00010007e5dc(&puStack_3d8);
    puVar6 = puVar13;
    param_4 = puVar11;
    if (cStack_3b9 < '\0') {
      __ZdlPv(auStack_3d0[0]);
      puVar6 = puVar13;
      param_4 = puVar11;
    }
  }
  pplVar3 = pplVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b8) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar8);
  _objc_release(pplVar8);
  __Unwind_Resume();
  puVar13 = &uStack_470;
  puStack_3f8 = &SUB_107cacc7c;
  lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar8 = pplVar2;
  puVar11 = puVar6;
  pppuStack_400 = &pppuStack_380;
  _objc_retain(pplVar2);
  if (pplVar3 != (long **)0x0) {
    plVar15 = pplVar3[1];
    _objc_retain(pplVar2);
    if (pplVar2 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = pplVar2;
      _objc_retainAutorelease(pplVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar2);
    func_0x00010002b838(auStack_450,pplVar3);
    uStack_470 = 0;
    uStack_468 = 0;
    uStack_460 = 0;
    func_0x00010007e1e8(&uStack_470,auStack_450,&lStack_438,1);
    pplVar8 = (long **)&UNK_110a049d8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_458 = (undefined1 *)&uStack_470;
    func_0x00010007e5dc(&puStack_458);
    puVar11 = puVar13;
    param_4 = puVar6;
    if (cStack_439 < '\0') {
      __ZdlPv(auStack_450[0]);
      puVar11 = puVar13;
      param_4 = puVar6;
    }
  }
  pplVar3 = pplVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_438) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar2);
  _objc_release(pplVar2);
  __Unwind_Resume();
  puVar13 = &uStack_4f0;
  puStack_478 = &SUB_107cacdf0;
  lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = pplVar8;
  puVar6 = puVar11;
  pppuStack_480 = &pppuStack_400;
  _objc_retain(pplVar8);
  if (pplVar3 != (long **)0x0) {
    plVar15 = pplVar3[1];
    _objc_retain(pplVar8);
    if (pplVar8 == (long **)0x0) {
      pplVar2 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar2 = pplVar8;
      _objc_retainAutorelease(pplVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar8);
    func_0x00010002b838(auStack_4d0,pplVar2);
    uStack_4f0 = 0;
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    func_0x00010007e1e8(&uStack_4f0,auStack_4d0,&lStack_4b8,1);
    pplVar2 = (long **)&UNK_110a04a28;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_4d8 = (undefined1 *)&uStack_4f0;
    func_0x00010007e5dc(&puStack_4d8);
    puVar6 = puVar13;
    param_4 = puVar11;
    if (cStack_4b9 < '\0') {
      __ZdlPv(auStack_4d0[0]);
      puVar6 = puVar13;
      param_4 = puVar11;
    }
  }
  pplVar3 = pplVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b8) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar8);
  _objc_release(pplVar8);
  __Unwind_Resume();
  puVar13 = &uStack_570;
  puStack_4f8 = &SUB_107cacf64;
  lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar8 = pplVar2;
  puVar11 = puVar6;
  pppuStack_500 = &pppuStack_480;
  _objc_retain(pplVar2);
  if (pplVar3 != (long **)0x0) {
    plVar15 = pplVar3[1];
    _objc_retain(pplVar2);
    if (pplVar2 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = pplVar2;
      _objc_retainAutorelease(pplVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar2);
    func_0x00010002b838(auStack_550,pplVar3);
    uStack_570 = 0;
    uStack_568 = 0;
    uStack_560 = 0;
    func_0x00010007e1e8(&uStack_570,auStack_550,&lStack_538,1);
    pplVar8 = (long **)&UNK_110a04a78;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_558 = (undefined1 *)&uStack_570;
    func_0x00010007e5dc(&puStack_558);
    puVar11 = puVar13;
    param_4 = puVar6;
    if (cStack_539 < '\0') {
      __ZdlPv(auStack_550[0]);
      puVar11 = puVar13;
      param_4 = puVar6;
    }
  }
  pplVar3 = pplVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_538) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar2);
  _objc_release(pplVar2);
  __Unwind_Resume();
  puVar13 = &uStack_5f0;
  puStack_578 = &SUB_107cad0d8;
  lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = pplVar8;
  puVar6 = puVar11;
  pppuStack_580 = &pppuStack_500;
  _objc_retain(pplVar8);
  if (pplVar3 != (long **)0x0) {
    plVar15 = pplVar3[1];
    _objc_retain(pplVar8);
    if (pplVar8 == (long **)0x0) {
      pplVar2 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar2 = pplVar8;
      _objc_retainAutorelease(pplVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar8);
    func_0x00010002b838(auStack_5d0,pplVar2);
    uStack_5f0 = 0;
    uStack_5e8 = 0;
    uStack_5e0 = 0;
    func_0x00010007e1e8(&uStack_5f0,auStack_5d0,&lStack_5b8,1);
    pplVar2 = (long **)&UNK_110a04ac8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_5d8 = (undefined1 *)&uStack_5f0;
    func_0x00010007e5dc(&puStack_5d8);
    puVar6 = puVar13;
    param_4 = puVar11;
    if (cStack_5b9 < '\0') {
      __ZdlPv(auStack_5d0[0]);
      puVar6 = puVar13;
      param_4 = puVar11;
    }
  }
  pplVar3 = pplVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5b8) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar8);
  _objc_release(pplVar8);
  __Unwind_Resume();
  puVar13 = &uStack_670;
  puStack_5f8 = &SUB_107cad24c;
  lStack_638 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar8 = pplVar2;
  puVar11 = puVar6;
  pppuStack_600 = &pppuStack_580;
  _objc_retain(pplVar2);
  if (pplVar3 != (long **)0x0) {
    plVar15 = pplVar3[1];
    _objc_retain(pplVar2);
    if (pplVar2 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = pplVar2;
      _objc_retainAutorelease(pplVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar2);
    func_0x00010002b838(auStack_650,pplVar3);
    uStack_670 = 0;
    uStack_668 = 0;
    uStack_660 = 0;
    func_0x00010007e1e8(&uStack_670,auStack_650,&lStack_638,1);
    pplVar8 = (long **)&UNK_110a04b18;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_658 = (undefined1 *)&uStack_670;
    func_0x00010007e5dc(&puStack_658);
    puVar11 = puVar13;
    param_4 = puVar6;
    if (cStack_639 < '\0') {
      __ZdlPv(auStack_650[0]);
      puVar11 = puVar13;
      param_4 = puVar6;
    }
  }
  pplVar3 = pplVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_638) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(pplVar2);
  _objc_release(pplVar2);
  __Unwind_Resume();
  puVar13 = &uStack_6f0;
  puStack_678 = &SUB_107cad3c0;
  lStack_6b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = pplVar8;
  puVar6 = puVar11;
  pppuStack_680 = &pppuStack_600;
  _objc_retain(pplVar8);
  if (pplVar3 != (long **)0x0) {
    plVar15 = pplVar3[1];
    _objc_retain(pplVar8);
    if (pplVar8 == (long **)0x0) {
      pplVar2 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar2 = pplVar8;
      _objc_retainAutorelease(pplVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar8);
    func_0x00010002b838(auStack_6d0,pplVar2);
    uStack_6f0 = 0;
    uStack_6e8 = 0;
    uStack_6e0 = 0;
    func_0x00010007e1e8(&uStack_6f0,auStack_6d0,&lStack_6b8,1);
    pplVar2 = (long **)&UNK_110a04b68;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_6d8 = (undefined1 *)&uStack_6f0;
    func_0x00010007e5dc(&puStack_6d8);
    puVar6 = puVar13;
    param_4 = puVar11;
    if (cStack_6b9 < '\0') {
      __ZdlPv(auStack_6d0[0]);
      puVar6 = puVar13;
      param_4 = puVar11;
    }
  }
  pplVar3 = pplVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6b8) {
    ___stack_chk_fail();
    _objc_release(pplVar8);
    _objc_release(pplVar8);
    __Unwind_Resume();
    puStack_6f8 = &LAB_107cad534;
    lStack_738 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar8 = pplVar2;
    puVar11 = puVar6;
    puVar13 = param_4;
    pppuStack_700 = &pppuStack_680;
    _objc_retain(pplVar2);
    _objc_retain(puVar6);
    if (pplVar3 != (long **)0x0) {
      plVar15 = pplVar3[1];
      pplVar8 = (long **)&UNK_110a04bb8;
      (**(code **)(*plVar15 + 0x28))();
      if ((int)plVar15 != 0) {
        plVar15 = pplVar3[1];
        _objc_retain(pplVar2);
        if (pplVar2 == (long **)0x0) {
          pplVar3 = (long **)&UNK_10f44f7d9;
        }
        else {
          pplVar3 = pplVar2;
          _objc_retainAutorelease(pplVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pplVar2);
        unaff_x24 = auStack_768;
        func_0x00010002b838(auStack_768,pplVar3);
        _objc_retain(puVar6);
        if (puVar6 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)&UNK_10f44f7d9;
        }
        else {
          _objc_retainAutorelease(puVar6);
          puVar11 = puVar6;
          func_0x00010bdc3520(puVar6);
        }
        _objc_release(puVar6);
        func_0x00010002b838(auStack_750,puVar11);
        uStack_788 = 0;
        uStack_780 = 0;
        uStack_778 = 0;
        func_0x00010007e1e8(&uStack_788,auStack_768,&lStack_738,2);
        puVar13 = (undefined8 *)((long)param_4 * 10);
        pplVar8 = (long **)&UNK_110a04bb8;
        puVar11 = &uStack_788;
        (**(code **)(*plVar15 + 0x18))(plVar15);
        puStack_770 = &uStack_788;
        func_0x00010007e5dc(&puStack_770);
        lVar1 = 0;
        do {
          if ((&cStack_739)[lVar1] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_750 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
        } while (lVar1 != -0x30);
      }
    }
    _objc_release(puVar6);
    pplVar3 = pplVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_738) {
      return pplVar3;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    if (cStack_751 < '\0') {
      __ZdlPv(auStack_768[0]);
    }
    _objc_release(puVar6);
    _objc_release(pplVar2);
    __Unwind_Resume();
    puStack_798 = &LAB_107cad788;
    lStack_7e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar2 = pplVar8;
    puVar6 = puVar11;
    puVar14 = puVar13;
    pppuStack_7a0 = &pppuStack_700;
    _objc_retain(pplVar8);
    iVar10 = (int)puVar6;
    _objc_retain(puVar11);
    _objc_retain(param_5);
    if (pplVar3 != (long **)0x0) {
      plVar15 = pplVar3[1];
      _objc_retain(pplVar8);
      if (pplVar8 == (long **)0x0) {
        pplVar2 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar2 = pplVar8;
        _objc_retainAutorelease(pplVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar8);
      func_0x00010002b838(auStack_848,pplVar2);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)&UNK_10f44f7d9;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar6 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_830,puVar6);
      puVar7 = &UNK_10f44f9bb;
      if ((int)puVar13 == 0) {
        puVar7 = &UNK_10f44f9c0;
      }
      func_0x00010002b838(auStack_818,puVar7);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar7 = &UNK_10f44f7d9;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar7 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_800,puVar7);
      uStack_868 = 0;
      uStack_860 = 0;
      uStack_858 = 0;
      func_0x00010007e1e8(&uStack_868,auStack_848,&lStack_7e8,4);
      pplVar2 = (long **)&UNK_110a04c08;
      unaff_x24 = &uStack_868;
      puVar6 = &uStack_868;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110a04c08,puVar6,param_6);
      puStack_850 = unaff_x24;
      func_0x00010007e5dc(&puStack_850);
      lVar1 = 0;
      puVar14 = param_6;
      do {
        if ((&cStack_7e9)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_800 + lVar1));
        }
        iVar10 = (int)puVar6;
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x60);
    }
    _objc_release(param_5);
    _objc_release(puVar11);
    pplVar3 = pplVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7e8) {
      ___stack_chk_fail();
      _objc_release(param_5);
      puStack_8a8 = auStack_848;
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != puStack_8a8);
      _objc_release(param_5);
      _objc_release(puVar11);
      _objc_release(pplVar8);
      pplVar5 = pplVar3;
      __Unwind_Resume();
      puStack_878 = &LAB_107cada70;
      lStack_8b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_8b0 = unaff_x24;
      pplStack_8a0 = pplVar3;
      puStack_898 = param_5;
      puStack_890 = puVar11;
      pplStack_888 = pplVar8;
      pppuStack_880 = &pppuStack_7a0;
      _objc_retain(pplVar2);
      if (pplVar5 != (long **)0x0) {
        plVar15 = pplVar5[1];
        _objc_retain(pplVar2);
        if (pplVar2 == (long **)0x0) {
          pplVar3 = (long **)&UNK_10f44f7d9;
        }
        else {
          pplVar3 = pplVar2;
          _objc_retainAutorelease(pplVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pplVar2);
        func_0x00010002b838(auStack_8e8,pplVar3);
        puVar7 = &UNK_10f44f9bb;
        if (iVar10 == 0) {
          puVar7 = &UNK_10f44f9c0;
        }
        func_0x00010002b838(auStack_8d0,puVar7);
        uStack_908 = 0;
        uStack_900 = 0;
        uStack_8f8 = 0;
        func_0x00010007e1e8(&uStack_908,auStack_8e8,&lStack_8b8,2);
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110a04c58,&uStack_908,puVar14);
        puStack_8f0 = &uStack_908;
        func_0x00010007e5dc(&puStack_8f0);
        lVar1 = 0;
        do {
          if ((&cStack_8b9)[lVar1] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_8d0 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
        } while (lVar1 != -0x30);
      }
      pplVar3 = pplVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_8b8) {
        ___stack_chk_fail();
        _objc_release(pplVar2);
        _objc_release(pplVar2);
        pplVar8 = pplVar3;
        __Unwind_Resume();
        ppplVar9 = &pplStack_940;
        puStack_918 = &UNK_107cadc58;
        puStack_938 = PTR_PTR_1126fa610;
        pplStack_940 = pplVar8;
        pplStack_930 = pplVar3;
        pplStack_928 = pplVar2;
        pppuStack_920 = &pppuStack_880;
        _objc_msgSendSuper2(&pplStack_940,PTR_s_init_1125d9248);
        if (ppplVar9 != (long ***)0x0) {
          pplVar2 = (long **)ppplVar9;
          (*(code *)PTR_DAT_113403208)();
          ppplVar9[1] = pplVar2;
        }
        return (long **)ppplVar9;
      }
      return pplVar3;
    }
    return pplVar3;
  }
  return pplVar3;
}



/* Entry: 105b0c060; end: 105b0c06f; -[SCStoriesGrapheneMetricsEmitter logOutOfOrderSnapsDetectedAndCorrectedWithSource:] */

/* WARNING: Removing unreachable block (ram,0x000107cada38) */

long ** FUN_105b0c060(long param_1,undefined8 param_2,long **param_3,undefined8 *param_4,
                     undefined *param_5,undefined8 *param_6)

{
  long lVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long ***ppplVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  long **pplStack_8c0;
  undefined *puStack_8b8;
  long **pplStack_8b0;
  long **pplStack_8a8;
  undefined8 ***pppuStack_8a0;
  undefined *puStack_898;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 *puStack_870;
  undefined1 auStack_868 [24];
  undefined8 auStack_850 [2];
  char cStack_839;
  long lStack_838;
  undefined8 *puStack_830;
  undefined8 *puStack_828;
  long **pplStack_820;
  undefined *puStack_818;
  undefined8 *puStack_810;
  long **pplStack_808;
  undefined8 ***pppuStack_800;
  undefined *puStack_7f8;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 *puStack_7d0;
  undefined8 auStack_7c8 [3];
  undefined1 auStack_7b0 [24];
  undefined1 auStack_798 [24];
  undefined8 auStack_780 [2];
  char cStack_769;
  long lStack_768;
  undefined8 ***pppuStack_720;
  undefined *puStack_718;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 *puStack_6f0;
  undefined8 auStack_6e8 [2];
  char cStack_6d1;
  undefined8 auStack_6d0 [2];
  char cStack_6b9;
  long lStack_6b8;
  undefined8 ***pppuStack_680;
  undefined *puStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined1 *puStack_658;
  undefined8 auStack_650 [2];
  char cStack_639;
  long lStack_638;
  undefined8 ***pppuStack_600;
  undefined *puStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined1 *puStack_5d8;
  undefined8 auStack_5d0 [2];
  char cStack_5b9;
  long lStack_5b8;
  undefined8 ***pppuStack_580;
  undefined *puStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined1 *puStack_558;
  undefined8 auStack_550 [2];
  char cStack_539;
  long lStack_538;
  undefined8 ***pppuStack_500;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 *puStack_4d8;
  undefined8 auStack_4d0 [2];
  char cStack_4b9;
  long lStack_4b8;
  undefined8 ***pppuStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 *puStack_458;
  undefined8 auStack_450 [2];
  char cStack_439;
  long lStack_438;
  undefined8 ***pppuStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 *puStack_3d8;
  undefined8 auStack_3d0 [2];
  char cStack_3b9;
  long lStack_3b8;
  undefined8 ***pppuStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 *puStack_358;
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined8 ***pppuStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 *puStack_2d8;
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  undefined8 ***pppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 ***pppuStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 ***pppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  long alStack_f0 [3];
  long *plStack_d8;
  long **applStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  puVar10 = (undefined8 *)0x1;
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = param_3;
  _objc_retain(param_3);
  plVar14 = (long *)0x0;
  if (lVar1 != 0) {
    plVar14 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (long **)0x0) {
      pplVar2 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pplVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pplVar2 = (long **)&UNK_110a047a8;
    param_4 = (undefined8 *)0x1;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar10 = puVar6;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar10 = puVar6;
      unaff_x22 = &uStack_80;
    }
  }
  pplVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  pplVar4 = pplVar3;
  __Unwind_Resume();
  plVar11 = alStack_f0;
  puStack_88 = &LAB_107cac420;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = (long **)0x0;
  puVar6 = puVar10;
  puStack_b0 = (undefined1 *)unaff_x22;
  plStack_a8 = plVar14;
  pplStack_a0 = pplVar3;
  pplStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  if (pplVar4 != (long **)0x0) {
    plVar14 = pplVar4[1];
    puVar7 = &UNK_10f44f9bb;
    if ((int)pplVar2 == 0) {
      puVar7 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(applStack_d0,puVar7);
    alStack_f0[0] = 0;
    alStack_f0[1] = 0;
    alStack_f0[2] = 0;
    func_0x00010007e1e8(alStack_f0,applStack_d0,&lStack_b8,1);
    pplVar2 = (long **)&UNK_110a047f8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    pplVar5 = &plStack_d8;
    plStack_d8 = alStack_f0;
    func_0x00010007e5dc();
    puVar6 = plVar11;
    param_4 = puVar10;
    plVar14 = alStack_f0;
    if (cStack_b9 < '\0') {
      pplVar5 = applStack_d0[0];
      __ZdlPv();
      puVar6 = plVar11;
      param_4 = puVar10;
      plVar14 = alStack_f0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return pplVar5;
  }
  ___stack_chk_fail();
  plStack_d8 = plVar14;
  func_0x00010007e5dc(&plStack_d8);
  if (cStack_b9 < '\0') {
    __ZdlPv(applStack_d0[0]);
  }
  __Unwind_Resume();
  puVar12 = &uStack_170;
  puStack_f8 = &SUB_107cac538;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar3 = pplVar2;
  puVar10 = puVar6;
  ppuStack_100 = &puStack_90;
  _objc_retain(pplVar2);
  if (pplVar5 != (long **)0x0) {
    plVar14 = pplVar5[1];
    _objc_retain(pplVar2);
    if (pplVar2 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = pplVar2;
      _objc_retainAutorelease(pplVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar2);
    func_0x00010002b838(auStack_150,pplVar3);
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    func_0x00010007e1e8(&uStack_170,auStack_150,&lStack_138,1);
    pplVar3 = (long **)&UNK_110a04848;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_158 = (undefined1 *)&uStack_170;
    func_0x00010007e5dc(&puStack_158);
    puVar10 = puVar12;
    param_4 = puVar6;
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
      puVar10 = puVar12;
      param_4 = puVar6;
    }
  }
  pplVar5 = pplVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return pplVar5;
  }
  ___stack_chk_fail();
  _objc_release(pplVar2);
  _objc_release(pplVar2);
  __Unwind_Resume();
  puVar12 = &uStack_1f0;
  puStack_178 = &SUB_107cac6ac;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = pplVar3;
  puVar6 = puVar10;
  pppuStack_180 = &ppuStack_100;
  _objc_retain(pplVar3);
  if (pplVar5 != (long **)0x0) {
    plVar14 = pplVar5[1];
    _objc_retain(pplVar3);
    if (pplVar3 == (long **)0x0) {
      pplVar2 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar2 = pplVar3;
      _objc_retainAutorelease(pplVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar3);
    func_0x00010002b838(auStack_1d0,pplVar2);
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    func_0x00010007e1e8(&uStack_1f0,auStack_1d0,&lStack_1b8,1);
    pplVar2 = (long **)&UNK_110a04898;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_1d8 = (undefined1 *)&uStack_1f0;
    func_0x00010007e5dc(&puStack_1d8);
    puVar6 = puVar12;
    param_4 = puVar10;
    if (cStack_1b9 < '\0') {
      __ZdlPv(auStack_1d0[0]);
      puVar6 = puVar12;
      param_4 = puVar10;
    }
  }
  pplVar5 = pplVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return pplVar5;
  }
  ___stack_chk_fail();
  _objc_release(pplVar3);
  _objc_release(pplVar3);
  __Unwind_Resume();
  puVar12 = &uStack_270;
  puStack_1f8 = &SUB_107cac820;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar3 = pplVar2;
  puVar10 = puVar6;
  pppuStack_200 = &pppuStack_180;
  _objc_retain(pplVar2);
  if (pplVar5 != (long **)0x0) {
    plVar14 = pplVar5[1];
    _objc_retain(pplVar2);
    if (pplVar2 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = pplVar2;
      _objc_retainAutorelease(pplVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar2);
    func_0x00010002b838(auStack_250,pplVar3);
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    func_0x00010007e1e8(&uStack_270,auStack_250,&lStack_238,1);
    pplVar3 = (long **)&UNK_110a048e8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_258 = (undefined1 *)&uStack_270;
    func_0x00010007e5dc(&puStack_258);
    puVar10 = puVar12;
    param_4 = puVar6;
    if (cStack_239 < '\0') {
      __ZdlPv(auStack_250[0]);
      puVar10 = puVar12;
      param_4 = puVar6;
    }
  }
  pplVar5 = pplVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return pplVar5;
  }
  ___stack_chk_fail();
  _objc_release(pplVar2);
  _objc_release(pplVar2);
  __Unwind_Resume();
  puVar12 = &uStack_2f0;
  puStack_278 = &SUB_107cac994;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = pplVar3;
  puVar6 = puVar10;
  pppuStack_280 = &pppuStack_200;
  _objc_retain(pplVar3);
  if (pplVar5 != (long **)0x0) {
    plVar14 = pplVar5[1];
    _objc_retain(pplVar3);
    if (pplVar3 == (long **)0x0) {
      pplVar2 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar2 = pplVar3;
      _objc_retainAutorelease(pplVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar3);
    func_0x00010002b838(auStack_2d0,pplVar2);
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    func_0x00010007e1e8(&uStack_2f0,auStack_2d0,&lStack_2b8,1);
    pplVar2 = (long **)&UNK_110a04938;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_2d8 = (undefined1 *)&uStack_2f0;
    func_0x00010007e5dc(&puStack_2d8);
    puVar6 = puVar12;
    param_4 = puVar10;
    if (cStack_2b9 < '\0') {
      __ZdlPv(auStack_2d0[0]);
      puVar6 = puVar12;
      param_4 = puVar10;
    }
  }
  pplVar5 = pplVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return pplVar5;
  }
  ___stack_chk_fail();
  _objc_release(pplVar3);
  _objc_release(pplVar3);
  __Unwind_Resume();
  puVar12 = &uStack_370;
  puStack_2f8 = &SUB_107cacb08;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar3 = pplVar2;
  puVar10 = puVar6;
  pppuStack_300 = &pppuStack_280;
  _objc_retain(pplVar2);
  if (pplVar5 != (long **)0x0) {
    plVar14 = pplVar5[1];
    _objc_retain(pplVar2);
    if (pplVar2 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar3 = pplVar2;
      _objc_retainAutorelease(pplVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar2);
    func_0x00010002b838(auStack_350,pplVar3);
    uStack_370 = 0;
    uStack_368 = 0;
    uStack_360 = 0;
    func_0x00010007e1e8(&uStack_370,auStack_350,&lStack_338,1);
    pplVar3 = (long **)&UNK_110a04988;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_358 = (undefined1 *)&uStack_370;
    func_0x00010007e5dc(&puStack_358);
    puVar10 = puVar12;
    param_4 = puVar6;
    if (cStack_339 < '\0') {
      __ZdlPv(auStack_350[0]);
      puVar10 = puVar12;
      param_4 = puVar6;
    }
  }
  pplVar5 = pplVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return pplVar5;
  }
  ___stack_chk_fail();
  _objc_release(pplVar2);
  _objc_release(pplVar2);
  __Unwind_Resume();
  puVar12 = &uStack_3f0;
  puStack_378 = &SUB_107cacc7c;
  lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = pplVar3;
  puVar6 = puVar10;
  pppuStack_380 = &pppuStack_300;
  _objc_retain(pplVar3);
  if (pplVar5 != (long **)0x0) {
    plVar14 = pplVar5[1];
    _objc_retain(pplVar3);
    if (pplVar3 == (long **)0x0) {
      pplVar2 = (long **)&UNK_10f44f7d9;
    }
    else {
      pplVar2 = pplVar3;
      _objc_retainAutorelease(pplVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar3);
    func_0x00010002b838(auStack_3d0,pplVar2);
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    func_0x00010007e1e8(&uStack_3f0,auStack_3d0,&lStack_3b8,1);
    pplVar2 = (long **)&UNK_110a049d8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_3d8 = (undefined1 *)&uStack_3f0;
    func_0x00010007e5dc(&puStack_3d8);
    puVar6 = puVar12;
    param_4 = puVar10;
    if (cStack_3b9 < '\0') {
      __ZdlPv(auStack_3d0[0]);
      puVar6 = puVar12;
      param_4 = puVar10;
    }
  }
  pplVar5 = pplVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3b8) {
    ___stack_chk_fail();
    _objc_release(pplVar3);
    _objc_release(pplVar3);
    __Unwind_Resume();
    puVar12 = &uStack_470;
    puStack_3f8 = &SUB_107cacdf0;
    lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar3 = pplVar2;
    puVar10 = puVar6;
    pppuStack_400 = &pppuStack_380;
    _objc_retain(pplVar2);
    if (pplVar5 != (long **)0x0) {
      plVar14 = pplVar5[1];
      _objc_retain(pplVar2);
      if (pplVar2 == (long **)0x0) {
        pplVar3 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar3 = pplVar2;
        _objc_retainAutorelease(pplVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar2);
      func_0x00010002b838(auStack_450,pplVar3);
      uStack_470 = 0;
      uStack_468 = 0;
      uStack_460 = 0;
      func_0x00010007e1e8(&uStack_470,auStack_450,&lStack_438,1);
      pplVar3 = (long **)&UNK_110a04a28;
      (**(code **)(*plVar14 + 0x18))(plVar14);
      puStack_458 = (undefined1 *)&uStack_470;
      func_0x00010007e5dc(&puStack_458);
      puVar10 = puVar12;
      param_4 = puVar6;
      if (cStack_439 < '\0') {
        __ZdlPv(auStack_450[0]);
        puVar10 = puVar12;
        param_4 = puVar6;
      }
    }
    pplVar5 = pplVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_438) {
      return pplVar5;
    }
    ___stack_chk_fail();
    _objc_release(pplVar2);
    _objc_release(pplVar2);
    __Unwind_Resume();
    puVar12 = &uStack_4f0;
    puStack_478 = &SUB_107cacf64;
    lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar2 = pplVar3;
    puVar6 = puVar10;
    pppuStack_480 = &pppuStack_400;
    _objc_retain(pplVar3);
    if (pplVar5 != (long **)0x0) {
      plVar14 = pplVar5[1];
      _objc_retain(pplVar3);
      if (pplVar3 == (long **)0x0) {
        pplVar2 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar2 = pplVar3;
        _objc_retainAutorelease(pplVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar3);
      func_0x00010002b838(auStack_4d0,pplVar2);
      uStack_4f0 = 0;
      uStack_4e8 = 0;
      uStack_4e0 = 0;
      func_0x00010007e1e8(&uStack_4f0,auStack_4d0,&lStack_4b8,1);
      pplVar2 = (long **)&UNK_110a04a78;
      (**(code **)(*plVar14 + 0x18))(plVar14);
      puStack_4d8 = (undefined1 *)&uStack_4f0;
      func_0x00010007e5dc(&puStack_4d8);
      puVar6 = puVar12;
      param_4 = puVar10;
      if (cStack_4b9 < '\0') {
        __ZdlPv(auStack_4d0[0]);
        puVar6 = puVar12;
        param_4 = puVar10;
      }
    }
    pplVar5 = pplVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b8) {
      return pplVar5;
    }
    ___stack_chk_fail();
    _objc_release(pplVar3);
    _objc_release(pplVar3);
    __Unwind_Resume();
    puVar12 = &uStack_570;
    puStack_4f8 = &SUB_107cad0d8;
    lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar3 = pplVar2;
    puVar10 = puVar6;
    pppuStack_500 = &pppuStack_480;
    _objc_retain(pplVar2);
    if (pplVar5 != (long **)0x0) {
      plVar14 = pplVar5[1];
      _objc_retain(pplVar2);
      if (pplVar2 == (long **)0x0) {
        pplVar3 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar3 = pplVar2;
        _objc_retainAutorelease(pplVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar2);
      func_0x00010002b838(auStack_550,pplVar3);
      uStack_570 = 0;
      uStack_568 = 0;
      uStack_560 = 0;
      func_0x00010007e1e8(&uStack_570,auStack_550,&lStack_538,1);
      pplVar3 = (long **)&UNK_110a04ac8;
      (**(code **)(*plVar14 + 0x18))(plVar14);
      puStack_558 = (undefined1 *)&uStack_570;
      func_0x00010007e5dc(&puStack_558);
      puVar10 = puVar12;
      param_4 = puVar6;
      if (cStack_539 < '\0') {
        __ZdlPv(auStack_550[0]);
        puVar10 = puVar12;
        param_4 = puVar6;
      }
    }
    pplVar5 = pplVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_538) {
      return pplVar5;
    }
    ___stack_chk_fail();
    _objc_release(pplVar2);
    _objc_release(pplVar2);
    __Unwind_Resume();
    puVar12 = &uStack_5f0;
    puStack_578 = &SUB_107cad24c;
    lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar2 = pplVar3;
    puVar6 = puVar10;
    pppuStack_580 = &pppuStack_500;
    _objc_retain(pplVar3);
    if (pplVar5 != (long **)0x0) {
      plVar14 = pplVar5[1];
      _objc_retain(pplVar3);
      if (pplVar3 == (long **)0x0) {
        pplVar2 = (long **)&UNK_10f44f7d9;
      }
      else {
        pplVar2 = pplVar3;
        _objc_retainAutorelease(pplVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pplVar3);
      func_0x00010002b838(auStack_5d0,pplVar2);
      uStack_5f0 = 0;
      uStack_5e8 = 0;
      uStack_5e0 = 0;
      func_0x00010007e1e8(&uStack_5f0,auStack_5d0,&lStack_5b8,1);
      pplVar2 = (long **)&UNK_110a04b18;
      (**(code **)(*plVar14 + 0x18))(plVar14);
      puStack_5d8 = (undefined1 *)&uStack_5f0;
      func_0x00010007e5dc(&puStack_5d8);
      puVar6 = puVar12;
      param_4 = puVar10;
      if (cStack_5b9 < '\0') {
        __ZdlPv(auStack_5d0[0]);
        puVar6 = puVar12;
        param_4 = puVar10;
      }
    }
    pplVar5 = pplVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5b8) {
      ___stack_chk_fail();
      _objc_release(pplVar3);
      _objc_release(pplVar3);
      __Unwind_Resume();
      puVar12 = &uStack_670;
      puStack_5f8 = &SUB_107cad3c0;
      lStack_638 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pplVar3 = pplVar2;
      puVar10 = puVar6;
      pppuStack_600 = &pppuStack_580;
      _objc_retain(pplVar2);
      if (pplVar5 != (long **)0x0) {
        plVar14 = pplVar5[1];
        _objc_retain(pplVar2);
        if (pplVar2 == (long **)0x0) {
          pplVar3 = (long **)&UNK_10f44f7d9;
        }
        else {
          pplVar3 = pplVar2;
          _objc_retainAutorelease(pplVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pplVar2);
        func_0x00010002b838(auStack_650,pplVar3);
        uStack_670 = 0;
        uStack_668 = 0;
        uStack_660 = 0;
        func_0x00010007e1e8(&uStack_670,auStack_650,&lStack_638,1);
        pplVar3 = (long **)&UNK_110a04b68;
        (**(code **)(*plVar14 + 0x18))(plVar14);
        puStack_658 = (undefined1 *)&uStack_670;
        func_0x00010007e5dc(&puStack_658);
        puVar10 = puVar12;
        param_4 = puVar6;
        if (cStack_639 < '\0') {
          __ZdlPv(auStack_650[0]);
          puVar10 = puVar12;
          param_4 = puVar6;
        }
      }
      pplVar5 = pplVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_638) {
        return pplVar5;
      }
      ___stack_chk_fail();
      _objc_release(pplVar2);
      _objc_release(pplVar2);
      __Unwind_Resume();
      puStack_678 = &LAB_107cad534;
      lStack_6b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pplVar2 = pplVar3;
      puVar6 = puVar10;
      puVar12 = param_4;
      pppuStack_680 = &pppuStack_600;
      _objc_retain(pplVar3);
      _objc_retain(puVar10);
      if (pplVar5 != (long **)0x0) {
        plVar14 = pplVar5[1];
        pplVar2 = (long **)&UNK_110a04bb8;
        (**(code **)(*plVar14 + 0x28))();
        if ((int)plVar14 != 0) {
          plVar14 = pplVar5[1];
          _objc_retain(pplVar3);
          if (pplVar3 == (long **)0x0) {
            pplVar2 = (long **)&UNK_10f44f7d9;
          }
          else {
            pplVar2 = pplVar3;
            _objc_retainAutorelease(pplVar3);
            func_0x00010bdc3520();
          }
          _objc_release(pplVar3);
          unaff_x24 = auStack_6e8;
          func_0x00010002b838(auStack_6e8,pplVar2);
          _objc_retain(puVar10);
          if (puVar10 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)&UNK_10f44f7d9;
          }
          else {
            _objc_retainAutorelease(puVar10);
            puVar6 = puVar10;
            func_0x00010bdc3520(puVar10);
          }
          _objc_release(puVar10);
          func_0x00010002b838(auStack_6d0,puVar6);
          uStack_708 = 0;
          uStack_700 = 0;
          uStack_6f8 = 0;
          func_0x00010007e1e8(&uStack_708,auStack_6e8,&lStack_6b8,2);
          puVar12 = (undefined8 *)((long)param_4 * 10);
          pplVar2 = (long **)&UNK_110a04bb8;
          puVar6 = &uStack_708;
          (**(code **)(*plVar14 + 0x18))(plVar14);
          puStack_6f0 = &uStack_708;
          func_0x00010007e5dc(&puStack_6f0);
          lVar1 = 0;
          do {
            if ((&cStack_6b9)[lVar1] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_6d0 + lVar1));
            }
            lVar1 = lVar1 + -0x18;
          } while (lVar1 != -0x30);
        }
      }
      _objc_release(puVar10);
      pplVar5 = pplVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6b8) {
        ___stack_chk_fail();
        _objc_release(puVar10);
        if (cStack_6d1 < '\0') {
          __ZdlPv(auStack_6e8[0]);
        }
        _objc_release(puVar10);
        _objc_release(pplVar3);
        __Unwind_Resume();
        puStack_718 = &LAB_107cad788;
        lStack_768 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pplVar3 = pplVar2;
        puVar10 = puVar6;
        puVar13 = puVar12;
        pppuStack_720 = &pppuStack_680;
        _objc_retain(pplVar2);
        iVar9 = (int)puVar10;
        _objc_retain(puVar6);
        _objc_retain(param_5);
        if (pplVar5 != (long **)0x0) {
          plVar14 = pplVar5[1];
          _objc_retain(pplVar2);
          if (pplVar2 == (long **)0x0) {
            pplVar3 = (long **)&UNK_10f44f7d9;
          }
          else {
            pplVar3 = pplVar2;
            _objc_retainAutorelease(pplVar2);
            func_0x00010bdc3520();
          }
          _objc_release(pplVar2);
          func_0x00010002b838(auStack_7c8,pplVar3);
          _objc_retain(puVar6);
          if (puVar6 == (undefined8 *)0x0) {
            puVar10 = (undefined8 *)&UNK_10f44f7d9;
          }
          else {
            _objc_retainAutorelease(puVar6);
            puVar10 = puVar6;
            func_0x00010bdc3520(puVar6);
          }
          _objc_release(puVar6);
          func_0x00010002b838(auStack_7b0,puVar10);
          puVar7 = &UNK_10f44f9bb;
          if ((int)puVar12 == 0) {
            puVar7 = &UNK_10f44f9c0;
          }
          func_0x00010002b838(auStack_798,puVar7);
          _objc_retain(param_5);
          if (param_5 == (undefined *)0x0) {
            puVar7 = &UNK_10f44f7d9;
          }
          else {
            _objc_retainAutorelease(param_5);
            puVar7 = param_5;
            func_0x00010bdc3520(param_5);
          }
          _objc_release(param_5);
          func_0x00010002b838(auStack_780,puVar7);
          uStack_7e8 = 0;
          uStack_7e0 = 0;
          uStack_7d8 = 0;
          func_0x00010007e1e8(&uStack_7e8,auStack_7c8,&lStack_768,4);
          pplVar3 = (long **)&UNK_110a04c08;
          unaff_x24 = &uStack_7e8;
          puVar10 = &uStack_7e8;
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a04c08,puVar10,param_6);
          puStack_7d0 = unaff_x24;
          func_0x00010007e5dc(&puStack_7d0);
          lVar1 = 0;
          puVar13 = param_6;
          do {
            if ((&cStack_769)[lVar1] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_780 + lVar1));
            }
            iVar9 = (int)puVar10;
            lVar1 = lVar1 + -0x18;
          } while (lVar1 != -0x60);
        }
        _objc_release(param_5);
        _objc_release(puVar6);
        pplVar5 = pplVar2;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_768) {
          ___stack_chk_fail();
          _objc_release(param_5);
          puStack_828 = auStack_7c8;
          do {
            unaff_x24 = unaff_x24 + -3;
          } while (unaff_x24 != puStack_828);
          _objc_release(param_5);
          _objc_release(puVar6);
          _objc_release(pplVar2);
          pplVar4 = pplVar5;
          __Unwind_Resume();
          puStack_7f8 = &LAB_107cada70;
          lStack_838 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_830 = unaff_x24;
          pplStack_820 = pplVar5;
          puStack_818 = param_5;
          puStack_810 = puVar6;
          pplStack_808 = pplVar2;
          pppuStack_800 = &pppuStack_720;
          _objc_retain(pplVar3);
          if (pplVar4 != (long **)0x0) {
            plVar14 = pplVar4[1];
            _objc_retain(pplVar3);
            if (pplVar3 == (long **)0x0) {
              pplVar2 = (long **)&UNK_10f44f7d9;
            }
            else {
              pplVar2 = pplVar3;
              _objc_retainAutorelease(pplVar3);
              func_0x00010bdc3520();
            }
            _objc_release(pplVar3);
            func_0x00010002b838(auStack_868,pplVar2);
            puVar7 = &UNK_10f44f9bb;
            if (iVar9 == 0) {
              puVar7 = &UNK_10f44f9c0;
            }
            func_0x00010002b838(auStack_850,puVar7);
            uStack_888 = 0;
            uStack_880 = 0;
            uStack_878 = 0;
            func_0x00010007e1e8(&uStack_888,auStack_868,&lStack_838,2);
            (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a04c58,&uStack_888,puVar13);
            puStack_870 = &uStack_888;
            func_0x00010007e5dc(&puStack_870);
            lVar1 = 0;
            do {
              if ((&cStack_839)[lVar1] < '\0') {
                __ZdlPv(*(undefined8 *)((long)auStack_850 + lVar1));
              }
              lVar1 = lVar1 + -0x18;
            } while (lVar1 != -0x30);
          }
          pplVar2 = pplVar3;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_838) {
            ___stack_chk_fail();
            _objc_release(pplVar3);
            _objc_release(pplVar3);
            pplVar5 = pplVar2;
            __Unwind_Resume();
            ppplVar8 = &pplStack_8c0;
            puStack_898 = &UNK_107cadc58;
            puStack_8b8 = PTR_PTR_1126fa610;
            pplStack_8c0 = pplVar5;
            pplStack_8b0 = pplVar2;
            pplStack_8a8 = pplVar3;
            pppuStack_8a0 = &pppuStack_800;
            _objc_msgSendSuper2(&pplStack_8c0,PTR_s_init_1125d9248);
            if (ppplVar8 != (long ***)0x0) {
              pplVar2 = (long **)ppplVar8;
              (*(code *)PTR_DAT_113403208)();
              ppplVar8[1] = pplVar2;
            }
            return (long **)ppplVar8;
          }
          return pplVar2;
        }
        return pplVar5;
      }
      return pplVar5;
    }
    return pplVar5;
  }
  return pplVar5;
}



/* Entry: 105b0c070; end: 105b0c07f; -[SCStoriesGrapheneMetricsEmitter logStoryRequestWithLocation:] */

/* WARNING: Removing unreachable block (ram,0x000107cada38) */

undefined1 **
FUN_105b0c070(long param_1,undefined8 param_2,undefined1 **param_3,undefined8 *param_4,
             undefined *param_5,undefined8 *param_6)

{
  undefined1 **ppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined1 **ppuVar5;
  undefined1 **ppuVar6;
  undefined1 ***pppuVar7;
  undefined1 **ppuVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *unaff_x21;
  long lVar13;
  undefined8 *unaff_x24;
  undefined1 **ppuStack_840;
  undefined *puStack_838;
  undefined1 **ppuStack_830;
  undefined1 **ppuStack_828;
  undefined8 ***pppuStack_820;
  undefined *puStack_818;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 *puStack_7f0;
  undefined1 auStack_7e8 [24];
  undefined8 auStack_7d0 [2];
  char cStack_7b9;
  long lStack_7b8;
  undefined8 *puStack_7b0;
  undefined8 *puStack_7a8;
  undefined1 **ppuStack_7a0;
  undefined *puStack_798;
  undefined8 *puStack_790;
  undefined1 **ppuStack_788;
  undefined8 ***pppuStack_780;
  undefined *puStack_778;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 *puStack_750;
  undefined8 auStack_748 [3];
  undefined1 auStack_730 [24];
  undefined1 auStack_718 [24];
  undefined8 auStack_700 [2];
  char cStack_6e9;
  long lStack_6e8;
  undefined8 ***pppuStack_6a0;
  undefined *puStack_698;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 *puStack_670;
  undefined8 auStack_668 [2];
  char cStack_651;
  undefined8 auStack_650 [2];
  char cStack_639;
  long lStack_638;
  undefined8 ***pppuStack_600;
  undefined *puStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined1 *puStack_5d8;
  undefined8 auStack_5d0 [2];
  char cStack_5b9;
  long lStack_5b8;
  undefined8 ***pppuStack_580;
  undefined *puStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined1 *puStack_558;
  undefined8 auStack_550 [2];
  char cStack_539;
  long lStack_538;
  undefined8 ***pppuStack_500;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 *puStack_4d8;
  undefined8 auStack_4d0 [2];
  char cStack_4b9;
  long lStack_4b8;
  undefined8 ***pppuStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 *puStack_458;
  undefined8 auStack_450 [2];
  char cStack_439;
  long lStack_438;
  undefined8 ***pppuStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 *puStack_3d8;
  undefined8 auStack_3d0 [2];
  char cStack_3b9;
  long lStack_3b8;
  undefined8 ***pppuStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 *puStack_358;
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined8 ***pppuStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 *puStack_2d8;
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  undefined8 ***pppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 ***pppuStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 ***pppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar3 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  puVar2 = (undefined8 *)0x1;
  if (*(long *)(param_1 + 8) != 0) {
    plVar12 = *(long **)(*(long *)(param_1 + 8) + 8);
    puVar4 = &UNK_10f44f9bb;
    if ((int)param_3 == 0) {
      puVar4 = &UNK_10f44f9c0;
    }
    func_0x00010002b838(appuStack_50,puVar4);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_3 = (undefined1 **)&UNK_110a047f8;
    param_4 = (undefined8 *)0x1;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    ppuVar1 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    puVar2 = puVar3;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      puVar2 = puVar3;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  puVar10 = &uStack_f0;
  puStack_78 = &SUB_107cac538;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_3;
  puVar3 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar12 = (long *)ppuVar1[1];
    _objc_retain(param_3);
    if (param_3 == (undefined1 **)0x0) {
      ppuVar1 = (undefined1 **)&UNK_10f44f7d9;
    }
    else {
      ppuVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_d0,ppuVar1);
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    func_0x00010007e1e8(&uStack_f0,auStack_d0,&lStack_b8,1);
    ppuVar8 = (undefined1 **)&UNK_110a04848;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_d8 = (undefined1 *)&uStack_f0;
    func_0x00010007e5dc(&puStack_d8);
    puVar3 = puVar10;
    param_4 = puVar2;
    if (cStack_b9 < '\0') {
      __ZdlPv(auStack_d0[0]);
      puVar3 = puVar10;
      param_4 = puVar2;
    }
  }
  ppuVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar10 = &uStack_170;
  puStack_f8 = &SUB_107cac6ac;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar8;
  puVar2 = puVar3;
  ppuStack_100 = &puStack_80;
  _objc_retain(ppuVar8);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar12 = (long *)ppuVar1[1];
    _objc_retain(ppuVar8);
    if (ppuVar8 == (undefined1 **)0x0) {
      ppuVar1 = (undefined1 **)&UNK_10f44f7d9;
    }
    else {
      ppuVar1 = ppuVar8;
      _objc_retainAutorelease(ppuVar8);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar8);
    func_0x00010002b838(auStack_150,ppuVar1);
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    func_0x00010007e1e8(&uStack_170,auStack_150,&lStack_138,1);
    ppuVar6 = (undefined1 **)&UNK_110a04898;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_158 = (undefined1 *)&uStack_170;
    func_0x00010007e5dc(&puStack_158);
    puVar2 = puVar10;
    param_4 = puVar3;
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
      puVar2 = puVar10;
      param_4 = puVar3;
    }
  }
  ppuVar1 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar8);
  _objc_release(ppuVar8);
  __Unwind_Resume();
  puVar10 = &uStack_1f0;
  puStack_178 = &SUB_107cac820;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = ppuVar6;
  puVar3 = puVar2;
  pppuStack_180 = &ppuStack_100;
  _objc_retain(ppuVar6);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar12 = (long *)ppuVar1[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined1 **)0x0) {
      ppuVar1 = (undefined1 **)&UNK_10f44f7d9;
    }
    else {
      ppuVar1 = ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    func_0x00010002b838(auStack_1d0,ppuVar1);
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    func_0x00010007e1e8(&uStack_1f0,auStack_1d0,&lStack_1b8,1);
    ppuVar8 = (undefined1 **)&UNK_110a048e8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_1d8 = (undefined1 *)&uStack_1f0;
    func_0x00010007e5dc(&puStack_1d8);
    puVar3 = puVar10;
    param_4 = puVar2;
    if (cStack_1b9 < '\0') {
      __ZdlPv(auStack_1d0[0]);
      puVar3 = puVar10;
      param_4 = puVar2;
    }
  }
  ppuVar1 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  __Unwind_Resume();
  puVar10 = &uStack_270;
  puStack_1f8 = &SUB_107cac994;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar8;
  puVar2 = puVar3;
  pppuStack_200 = &pppuStack_180;
  _objc_retain(ppuVar8);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar12 = (long *)ppuVar1[1];
    _objc_retain(ppuVar8);
    if (ppuVar8 == (undefined1 **)0x0) {
      ppuVar1 = (undefined1 **)&UNK_10f44f7d9;
    }
    else {
      ppuVar1 = ppuVar8;
      _objc_retainAutorelease(ppuVar8);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar8);
    func_0x00010002b838(auStack_250,ppuVar1);
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    func_0x00010007e1e8(&uStack_270,auStack_250,&lStack_238,1);
    ppuVar6 = (undefined1 **)&UNK_110a04938;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_258 = (undefined1 *)&uStack_270;
    func_0x00010007e5dc(&puStack_258);
    puVar2 = puVar10;
    param_4 = puVar3;
    if (cStack_239 < '\0') {
      __ZdlPv(auStack_250[0]);
      puVar2 = puVar10;
      param_4 = puVar3;
    }
  }
  ppuVar1 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar8);
  _objc_release(ppuVar8);
  __Unwind_Resume();
  puVar10 = &uStack_2f0;
  puStack_278 = &SUB_107cacb08;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = ppuVar6;
  puVar3 = puVar2;
  pppuStack_280 = &pppuStack_200;
  _objc_retain(ppuVar6);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar12 = (long *)ppuVar1[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined1 **)0x0) {
      ppuVar1 = (undefined1 **)&UNK_10f44f7d9;
    }
    else {
      ppuVar1 = ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    func_0x00010002b838(auStack_2d0,ppuVar1);
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    func_0x00010007e1e8(&uStack_2f0,auStack_2d0,&lStack_2b8,1);
    ppuVar8 = (undefined1 **)&UNK_110a04988;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_2d8 = (undefined1 *)&uStack_2f0;
    func_0x00010007e5dc(&puStack_2d8);
    puVar3 = puVar10;
    param_4 = puVar2;
    if (cStack_2b9 < '\0') {
      __ZdlPv(auStack_2d0[0]);
      puVar3 = puVar10;
      param_4 = puVar2;
    }
  }
  ppuVar1 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  __Unwind_Resume();
  puVar10 = &uStack_370;
  puStack_2f8 = &SUB_107cacc7c;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar8;
  puVar2 = puVar3;
  pppuStack_300 = &pppuStack_280;
  _objc_retain(ppuVar8);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar12 = (long *)ppuVar1[1];
    _objc_retain(ppuVar8);
    if (ppuVar8 == (undefined1 **)0x0) {
      ppuVar1 = (undefined1 **)&UNK_10f44f7d9;
    }
    else {
      ppuVar1 = ppuVar8;
      _objc_retainAutorelease(ppuVar8);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar8);
    func_0x00010002b838(auStack_350,ppuVar1);
    uStack_370 = 0;
    uStack_368 = 0;
    uStack_360 = 0;
    func_0x00010007e1e8(&uStack_370,auStack_350,&lStack_338,1);
    ppuVar6 = (undefined1 **)&UNK_110a049d8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_358 = (undefined1 *)&uStack_370;
    func_0x00010007e5dc(&puStack_358);
    puVar2 = puVar10;
    param_4 = puVar3;
    if (cStack_339 < '\0') {
      __ZdlPv(auStack_350[0]);
      puVar2 = puVar10;
      param_4 = puVar3;
    }
  }
  ppuVar1 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar8);
  _objc_release(ppuVar8);
  __Unwind_Resume();
  puVar10 = &uStack_3f0;
  puStack_378 = &SUB_107cacdf0;
  lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = ppuVar6;
  puVar3 = puVar2;
  pppuStack_380 = &pppuStack_300;
  _objc_retain(ppuVar6);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar12 = (long *)ppuVar1[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined1 **)0x0) {
      ppuVar1 = (undefined1 **)&UNK_10f44f7d9;
    }
    else {
      ppuVar1 = ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    func_0x00010002b838(auStack_3d0,ppuVar1);
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    func_0x00010007e1e8(&uStack_3f0,auStack_3d0,&lStack_3b8,1);
    ppuVar8 = (undefined1 **)&UNK_110a04a28;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_3d8 = (undefined1 *)&uStack_3f0;
    func_0x00010007e5dc(&puStack_3d8);
    puVar3 = puVar10;
    param_4 = puVar2;
    if (cStack_3b9 < '\0') {
      __ZdlPv(auStack_3d0[0]);
      puVar3 = puVar10;
      param_4 = puVar2;
    }
  }
  ppuVar1 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3b8) {
    ___stack_chk_fail();
    _objc_release(ppuVar6);
    _objc_release(ppuVar6);
    __Unwind_Resume();
    puVar10 = &uStack_470;
    puStack_3f8 = &SUB_107cacf64;
    lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar6 = ppuVar8;
    puVar2 = puVar3;
    pppuStack_400 = &pppuStack_380;
    _objc_retain(ppuVar8);
    if (ppuVar1 != (undefined1 **)0x0) {
      plVar12 = (long *)ppuVar1[1];
      _objc_retain(ppuVar8);
      if (ppuVar8 == (undefined1 **)0x0) {
        ppuVar1 = (undefined1 **)&UNK_10f44f7d9;
      }
      else {
        ppuVar1 = ppuVar8;
        _objc_retainAutorelease(ppuVar8);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar8);
      func_0x00010002b838(auStack_450,ppuVar1);
      uStack_470 = 0;
      uStack_468 = 0;
      uStack_460 = 0;
      func_0x00010007e1e8(&uStack_470,auStack_450,&lStack_438,1);
      ppuVar6 = (undefined1 **)&UNK_110a04a78;
      (**(code **)(*plVar12 + 0x18))(plVar12);
      puStack_458 = (undefined1 *)&uStack_470;
      func_0x00010007e5dc(&puStack_458);
      puVar2 = puVar10;
      param_4 = puVar3;
      if (cStack_439 < '\0') {
        __ZdlPv(auStack_450[0]);
        puVar2 = puVar10;
        param_4 = puVar3;
      }
    }
    ppuVar1 = ppuVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_438) {
      return ppuVar1;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar8);
    _objc_release(ppuVar8);
    __Unwind_Resume();
    puVar10 = &uStack_4f0;
    puStack_478 = &SUB_107cad0d8;
    lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar8 = ppuVar6;
    puVar3 = puVar2;
    pppuStack_480 = &pppuStack_400;
    _objc_retain(ppuVar6);
    if (ppuVar1 != (undefined1 **)0x0) {
      plVar12 = (long *)ppuVar1[1];
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined1 **)0x0) {
        ppuVar1 = (undefined1 **)&UNK_10f44f7d9;
      }
      else {
        ppuVar1 = ppuVar6;
        _objc_retainAutorelease(ppuVar6);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar6);
      func_0x00010002b838(auStack_4d0,ppuVar1);
      uStack_4f0 = 0;
      uStack_4e8 = 0;
      uStack_4e0 = 0;
      func_0x00010007e1e8(&uStack_4f0,auStack_4d0,&lStack_4b8,1);
      ppuVar8 = (undefined1 **)&UNK_110a04ac8;
      (**(code **)(*plVar12 + 0x18))(plVar12);
      puStack_4d8 = (undefined1 *)&uStack_4f0;
      func_0x00010007e5dc(&puStack_4d8);
      puVar3 = puVar10;
      param_4 = puVar2;
      if (cStack_4b9 < '\0') {
        __ZdlPv(auStack_4d0[0]);
        puVar3 = puVar10;
        param_4 = puVar2;
      }
    }
    ppuVar1 = ppuVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b8) {
      return ppuVar1;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar6);
    _objc_release(ppuVar6);
    __Unwind_Resume();
    puVar10 = &uStack_570;
    puStack_4f8 = &SUB_107cad24c;
    lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar6 = ppuVar8;
    puVar2 = puVar3;
    pppuStack_500 = &pppuStack_480;
    _objc_retain(ppuVar8);
    if (ppuVar1 != (undefined1 **)0x0) {
      plVar12 = (long *)ppuVar1[1];
      _objc_retain(ppuVar8);
      if (ppuVar8 == (undefined1 **)0x0) {
        ppuVar1 = (undefined1 **)&UNK_10f44f7d9;
      }
      else {
        ppuVar1 = ppuVar8;
        _objc_retainAutorelease(ppuVar8);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar8);
      func_0x00010002b838(auStack_550,ppuVar1);
      uStack_570 = 0;
      uStack_568 = 0;
      uStack_560 = 0;
      func_0x00010007e1e8(&uStack_570,auStack_550,&lStack_538,1);
      ppuVar6 = (undefined1 **)&UNK_110a04b18;
      (**(code **)(*plVar12 + 0x18))(plVar12);
      puStack_558 = (undefined1 *)&uStack_570;
      func_0x00010007e5dc(&puStack_558);
      puVar2 = puVar10;
      param_4 = puVar3;
      if (cStack_539 < '\0') {
        __ZdlPv(auStack_550[0]);
        puVar2 = puVar10;
        param_4 = puVar3;
      }
    }
    ppuVar1 = ppuVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_538) {
      return ppuVar1;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar8);
    _objc_release(ppuVar8);
    __Unwind_Resume();
    puVar10 = &uStack_5f0;
    puStack_578 = &SUB_107cad3c0;
    lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar8 = ppuVar6;
    puVar3 = puVar2;
    pppuStack_580 = &pppuStack_500;
    _objc_retain(ppuVar6);
    if (ppuVar1 != (undefined1 **)0x0) {
      plVar12 = (long *)ppuVar1[1];
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined1 **)0x0) {
        ppuVar1 = (undefined1 **)&UNK_10f44f7d9;
      }
      else {
        ppuVar1 = ppuVar6;
        _objc_retainAutorelease(ppuVar6);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar6);
      func_0x00010002b838(auStack_5d0,ppuVar1);
      uStack_5f0 = 0;
      uStack_5e8 = 0;
      uStack_5e0 = 0;
      func_0x00010007e1e8(&uStack_5f0,auStack_5d0,&lStack_5b8,1);
      ppuVar8 = (undefined1 **)&UNK_110a04b68;
      (**(code **)(*plVar12 + 0x18))(plVar12);
      puStack_5d8 = (undefined1 *)&uStack_5f0;
      func_0x00010007e5dc(&puStack_5d8);
      puVar3 = puVar10;
      param_4 = puVar2;
      if (cStack_5b9 < '\0') {
        __ZdlPv(auStack_5d0[0]);
        puVar3 = puVar10;
        param_4 = puVar2;
      }
    }
    ppuVar1 = ppuVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5b8) {
      return ppuVar1;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar6);
    _objc_release(ppuVar6);
    __Unwind_Resume();
    puStack_5f8 = &LAB_107cad534;
    lStack_638 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar6 = ppuVar8;
    puVar2 = puVar3;
    puVar10 = param_4;
    pppuStack_600 = &pppuStack_580;
    _objc_retain(ppuVar8);
    _objc_retain(puVar3);
    if (ppuVar1 != (undefined1 **)0x0) {
      plVar12 = (long *)ppuVar1[1];
      ppuVar6 = (undefined1 **)&UNK_110a04bb8;
      (**(code **)(*plVar12 + 0x28))();
      if ((int)plVar12 != 0) {
        plVar12 = (long *)ppuVar1[1];
        _objc_retain(ppuVar8);
        if (ppuVar8 == (undefined1 **)0x0) {
          ppuVar1 = (undefined1 **)&UNK_10f44f7d9;
        }
        else {
          ppuVar1 = ppuVar8;
          _objc_retainAutorelease(ppuVar8);
          func_0x00010bdc3520();
        }
        _objc_release(ppuVar8);
        unaff_x24 = auStack_668;
        func_0x00010002b838(auStack_668,ppuVar1);
        _objc_retain(puVar3);
        if (puVar3 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f44f7d9;
        }
        else {
          _objc_retainAutorelease(puVar3);
          puVar2 = puVar3;
          func_0x00010bdc3520(puVar3);
        }
        _objc_release(puVar3);
        func_0x00010002b838(auStack_650,puVar2);
        uStack_688 = 0;
        uStack_680 = 0;
        uStack_678 = 0;
        func_0x00010007e1e8(&uStack_688,auStack_668,&lStack_638,2);
        puVar10 = (undefined8 *)((long)param_4 * 10);
        ppuVar6 = (undefined1 **)&UNK_110a04bb8;
        puVar2 = &uStack_688;
        (**(code **)(*plVar12 + 0x18))(plVar12);
        puStack_670 = &uStack_688;
        func_0x00010007e5dc(&puStack_670);
        lVar13 = 0;
        do {
          if ((&cStack_639)[lVar13] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_650 + lVar13));
          }
          lVar13 = lVar13 + -0x18;
        } while (lVar13 != -0x30);
      }
    }
    _objc_release(puVar3);
    ppuVar1 = ppuVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_638) {
      return ppuVar1;
    }
    ___stack_chk_fail();
    _objc_release(puVar3);
    if (cStack_651 < '\0') {
      __ZdlPv(auStack_668[0]);
    }
    _objc_release(puVar3);
    _objc_release(ppuVar8);
    __Unwind_Resume();
    puStack_698 = &LAB_107cad788;
    lStack_6e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar8 = ppuVar6;
    puVar3 = puVar2;
    puVar11 = puVar10;
    pppuStack_6a0 = &pppuStack_600;
    _objc_retain(ppuVar6);
    iVar9 = (int)puVar3;
    _objc_retain(puVar2);
    _objc_retain(param_5);
    if (ppuVar1 != (undefined1 **)0x0) {
      plVar12 = (long *)ppuVar1[1];
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined1 **)0x0) {
        ppuVar1 = (undefined1 **)&UNK_10f44f7d9;
      }
      else {
        ppuVar1 = ppuVar6;
        _objc_retainAutorelease(ppuVar6);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar6);
      func_0x00010002b838(auStack_748,ppuVar1);
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f44f7d9;
      }
      else {
        _objc_retainAutorelease(puVar2);
        puVar3 = puVar2;
        func_0x00010bdc3520(puVar2);
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_730,puVar3);
      puVar4 = &UNK_10f44f9bb;
      if ((int)puVar10 == 0) {
        puVar4 = &UNK_10f44f9c0;
      }
      func_0x00010002b838(auStack_718,puVar4);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar4 = &UNK_10f44f7d9;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar4 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_700,puVar4);
      uStack_768 = 0;
      uStack_760 = 0;
      uStack_758 = 0;
      func_0x00010007e1e8(&uStack_768,auStack_748,&lStack_6e8,4);
      ppuVar8 = (undefined1 **)&UNK_110a04c08;
      unaff_x24 = &uStack_768;
      puVar3 = &uStack_768;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a04c08,puVar3,param_6);
      puStack_750 = unaff_x24;
      func_0x00010007e5dc(&puStack_750);
      lVar13 = 0;
      puVar11 = param_6;
      do {
        if ((&cStack_6e9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_700 + lVar13));
        }
        iVar9 = (int)puVar3;
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x60);
    }
    _objc_release(param_5);
    _objc_release(puVar2);
    ppuVar1 = ppuVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6e8) {
      return ppuVar1;
    }
    ___stack_chk_fail();
    _objc_release(param_5);
    puStack_7a8 = auStack_748;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != puStack_7a8);
    _objc_release(param_5);
    _objc_release(puVar2);
    _objc_release(ppuVar6);
    ppuVar5 = ppuVar1;
    __Unwind_Resume();
    puStack_778 = &LAB_107cada70;
    lStack_7b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_7b0 = unaff_x24;
    ppuStack_7a0 = ppuVar1;
    puStack_798 = param_5;
    puStack_790 = puVar2;
    ppuStack_788 = ppuVar6;
    pppuStack_780 = &pppuStack_6a0;
    _objc_retain(ppuVar8);
    if (ppuVar5 != (undefined1 **)0x0) {
      plVar12 = (long *)ppuVar5[1];
      _objc_retain(ppuVar8);
      if (ppuVar8 == (undefined1 **)0x0) {
        ppuVar1 = (undefined1 **)&UNK_10f44f7d9;
      }
      else {
        ppuVar1 = ppuVar8;
        _objc_retainAutorelease(ppuVar8);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar8);
      func_0x00010002b838(auStack_7e8,ppuVar1);
      puVar4 = &UNK_10f44f9bb;
      if (iVar9 == 0) {
        puVar4 = &UNK_10f44f9c0;
      }
      func_0x00010002b838(auStack_7d0,puVar4);
      uStack_808 = 0;
      uStack_800 = 0;
      uStack_7f8 = 0;
      func_0x00010007e1e8(&uStack_808,auStack_7e8,&lStack_7b8,2);
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a04c58,&uStack_808,puVar11);
      puStack_7f0 = &uStack_808;
      func_0x00010007e5dc(&puStack_7f0);
      lVar13 = 0;
      do {
        if ((&cStack_7b9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_7d0 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    ppuVar1 = ppuVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7b8) {
      ___stack_chk_fail();
      _objc_release(ppuVar8);
      _objc_release(ppuVar8);
      ppuVar6 = ppuVar1;
      __Unwind_Resume();
      pppuVar7 = &ppuStack_840;
      puStack_818 = &UNK_107cadc58;
      puStack_838 = PTR_PTR_1126fa610;
      ppuStack_840 = ppuVar6;
      ppuStack_830 = ppuVar1;
      ppuStack_828 = ppuVar8;
      pppuStack_820 = &pppuStack_780;
      _objc_msgSendSuper2(&ppuStack_840,PTR_s_init_1125d9248);
      if (pppuVar7 != (undefined1 ***)0x0) {
        ppuVar1 = (undefined1 **)pppuVar7;
        (*(code *)PTR_DAT_113403208)();
        pppuVar7[1] = ppuVar1;
      }
      return (undefined1 **)pppuVar7;
    }
    return ppuVar1;
  }
  return ppuVar1;
}



/* Entry: 105b0c080; end: 105b0c08b; -[SCStoriesGrapheneMetricsEmitter .cxx_destruct] */

void FUN_105b0c080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b0c08c; end: 105b0c0ef; -[SCStoriesSyncCacheGrapheneMetricsEmitter init] */

undefined1 * FUN_105b0c08c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ebd60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c2448;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105b0c0f0; end: 105b0c0ff; -[SCStoriesSyncCacheGrapheneMetricsEmitter logSyncCacheRequestCountSuccess:forFeedType:] */

void FUN_105b0c0f0(long param_1,undefined8 param_2,int param_3,undefined *param_4)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_4;
  _objc_retain(param_4);
  if (lVar1 != 0) {
    plVar2 = *(long **)(lVar1 + 8);
    puVar3 = &UNK_110a05d78;
    (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_110a05d78);
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(lVar1 + 8);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar3 = &UNK_10f450253;
      }
      else {
        puVar3 = param_4;
        _objc_retainAutorelease(param_4);
        func_0x00010bdc3520();
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_78,puVar3);
      puVar3 = &UNK_10f450254;
      if (param_3 == 0) {
        puVar3 = &UNK_10f450259;
      }
      func_0x00010002b838(auStack_60,puVar3);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      puVar3 = &UNK_110a05d78;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110a05d78,&uStack_98,10);
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
  }
  puVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_4);
  puVar5 = puVar4;
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  puStack_a8 = &LAB_107caf1e8;
  if (puVar5 != (undefined *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_c0 = puVar4;
    puStack_b8 = param_4;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar5 + 8) + 0x18))
              (*(long **)(puVar5 + 8),&UNK_110a05dc8,&uStack_e0,puVar3);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 105b0c100; end: 105b0c10b; -[SCStoriesSyncCacheGrapheneMetricsEmitter logInvalidResponse] */

void FUN_105b0c100(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a05dc8,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105b0c10c; end: 105b0c11b; -[SCStoriesSyncCacheGrapheneMetricsEmitter logUnviewbleSnapsCountFromResponseWithFeedType:snapCount:] */

undefined * FUN_105b0c10c(long param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar6 = param_4;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar8 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f450253;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = &UNK_110a05e18;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110a05e18,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puStack_88 = &LAB_107caf3d4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f450253;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110a05e68,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar3;
  __Unwind_Resume();
  ppuVar5 = &puStack_130;
  puStack_108 = &UNK_107caf548;
  puStack_128 = PTR_PTR_1126fa620;
  puStack_130 = puVar4;
  puStack_120 = puVar3;
  puStack_118 = puVar2;
  ppuStack_110 = &puStack_90;
  _objc_msgSendSuper2(&puStack_130,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    puVar6 = (undefined1 *)ppuVar5;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)ppuVar5 + 8) = puVar6;
  }
  return (undefined *)ppuVar5;
}



/* Entry: 105b0c11c; end: 105b0c12b; -[SCStoriesSyncCacheGrapheneMetricsEmitter logUnviewbleSnapsCountInCacheWithFeedType:snapCount:] */

undefined * FUN_105b0c11c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar6 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f450253;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110a05e68,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  puVar3 = puVar2;
  __Unwind_Resume();
  ppuVar4 = &puStack_b0;
  puStack_88 = &UNK_107caf548;
  puStack_a8 = PTR_PTR_1126fa620;
  puStack_b0 = puVar3;
  puStack_a0 = puVar2;
  puStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    puVar5 = (undefined1 *)ppuVar4;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)ppuVar4 + 8) = puVar5;
  }
  return (undefined *)ppuVar4;
}



/* Entry: 105b0c12c; end: 105b0c137; -[SCStoriesSyncCacheGrapheneMetricsEmitter .cxx_destruct] */

void FUN_105b0c12c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b0c138; end: 105b0c19b; -[SCStoriesUpNextGrapheneMetricsEmitter init] */

undefined1 * FUN_105b0c138(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ebd68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c2450;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105b0c19c; end: 105b0c22b; -[SCStoriesUpNextGrapheneMetricsEmitter logUpNextNetworkLatency:steps:sequence:] */

void FUN_105b0c19c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_4);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cadccc(uVar2,puVar1,param_4,(long)param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0c22c; end: 105b0c237; -[SCStoriesUpNextGrapheneMetricsEmitter logUpNextNetworkResponseSize:] */

void FUN_105b0c22c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    plVar2 = *(long **)(lVar1 + 8);
    (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_110a058c8);
    if ((int)plVar2 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(lVar1 + 8) + 0x18))
                (*(long **)(lVar1 + 8),&UNK_110a058c8,&uStack_40,param_3);
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x00010007e5dc(&puStack_28);
    }
  }
  return;
}



/* Entry: 105b0c238; end: 105b0c247; -[SCStoriesUpNextGrapheneMetricsEmitter logUpNextNetworkRequestCountSuccess:] */

void FUN_105b0c238(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined1 **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined8 *unaff_x21;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 ***pppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 8);
  puVar7 = (undefined1 *)0x1;
  puVar8 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  puVar5 = param_3;
  if (lVar1 != 0) {
    ppuVar2 = *(undefined1 ***)(lVar1 + 8);
    puVar5 = &UNK_110a05968;
    (**(code **)(*ppuVar2 + 0x28))();
    unaff_x21 = (undefined8 *)param_3;
    if ((int)ppuVar2 != 0) {
      plVar10 = *(long **)(lVar1 + 8);
      puVar5 = &UNK_10f45014c;
      if ((int)param_3 == 0) {
        puVar5 = &UNK_10f450151;
      }
      func_0x00010002b838(appuStack_50,puVar5);
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
      puVar5 = &UNK_110a05968;
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a05968,&uStack_70,10);
      ppuVar2 = &puStack_58;
      puStack_58 = (undefined1 *)&uStack_70;
      func_0x00010007e5dc();
      puVar7 = (undefined1 *)puVar8;
      unaff_x21 = &uStack_70;
      if (cStack_39 < '\0') {
        ppuVar2 = appuStack_50[0];
        __ZdlPv();
        puVar7 = (undefined1 *)puVar8;
        unaff_x21 = &uStack_70;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  puVar8 = &uStack_f0;
  puStack_78 = &SUB_107cae16c;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar5;
  puVar9 = puVar7;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar10 = (long *)ppuVar2[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar3 = &UNK_10f450119;
    }
    else {
      puVar3 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_d0,puVar3);
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    func_0x00010007e1e8(&uStack_f0,auStack_d0,&lStack_b8,1);
    puVar3 = &UNK_110a059b8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a059b8,&uStack_f0,puVar7);
    puStack_d8 = (undefined1 *)&uStack_f0;
    func_0x00010007e5dc(&puStack_d8);
    puVar9 = (undefined1 *)puVar8;
    if (cStack_b9 < '\0') {
      __ZdlPv(auStack_d0[0]);
      puVar9 = (undefined1 *)puVar8;
    }
  }
  puVar4 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  __Unwind_Resume();
  puStack_f8 = &LAB_107cae2e0;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar3;
  ppuStack_100 = &puStack_80;
  _objc_retain(puVar3);
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar5 = &UNK_10f450119;
    }
    else {
      puVar5 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_150,puVar5);
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    func_0x00010007e1e8(&uStack_170,auStack_150,&lStack_138,1);
    puVar5 = &UNK_110a05a08;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a05a08,&uStack_170,puVar9);
    puStack_158 = (undefined1 *)&uStack_170;
    func_0x00010007e5dc(&puStack_158);
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
    }
  }
  puVar4 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar6 = puVar4;
  __Unwind_Resume();
  puStack_198 = (undefined1 *)&uStack_1b0;
  puStack_178 = &LAB_107cae454;
  if (puVar6 != (undefined *)0x0) {
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    puStack_190 = puVar4;
    puStack_188 = puVar3;
    pppuStack_180 = &ppuStack_100;
    (**(code **)(**(long **)(puVar6 + 8) + 0x18))
              (*(long **)(puVar6 + 8),&UNK_110a05a58,&uStack_1b0,puVar5);
    func_0x00010007e5dc(&puStack_198);
  }
  return;
}



/* Entry: 105b0c248; end: 105b0c253; -[SCStoriesUpNextGrapheneMetricsEmitter logUpNextNetworkResponseFullyWatchedCount:] */

void FUN_105b0c248(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a05918,&uStack_40,param_3);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105b0c254; end: 105b0c2bb; -[SCStoriesUpNextGrapheneMetricsEmitter logUpNextSpinnerSwipeTime:loading:] */

void FUN_105b0c254(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110df3b58);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cae16c(uVar2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0c2bc; end: 105b0c2cb; -[SCStoriesUpNextGrapheneMetricsEmitter logUpNextEmptyResponseWithReason:] */

void FUN_105b0c2bc(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar5 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f450119;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = &UNK_110a05a08;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110a05a08,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  puStack_88 = &LAB_107cae454;
  if (puVar4 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar3;
    puStack_98 = param_3;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar4 + 8) + 0x18))
              (*(long **)(puVar4 + 8),&UNK_110a05a58,&uStack_c0,puVar2);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 105b0c2cc; end: 105b0c2d7; -[SCStoriesUpNextGrapheneMetricsEmitter logUpNextEmptyDefaultList] */

void FUN_105b0c2cc(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a05a58,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105b0c2d8; end: 105b0c33f; -[SCStoriesUpNextGrapheneMetricsEmitter logUpNextResponseStoryCount:feedType:] */

void FUN_105b0c2d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cae4cc(uVar2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0c340; end: 105b0c357; -[SCStoriesUpNextGrapheneMetricsEmitter logUpNextPaginationTriggerWithNetwork:outcome:triggerReason:] */

/* WARNING: Removing unreachable block (ram,0x000107cae904) */

void FUN_105b0c340(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *unaff_x24;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (lVar1 != 0) {
    plVar2 = *(long **)(lVar1 + 8);
    puVar3 = &UNK_110a05af8;
    (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_110a05af8);
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(lVar1 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar3 = &UNK_10f450119;
      }
      else {
        puVar3 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_a0,puVar3);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar3 = &UNK_10f450119;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar3 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_88,puVar3);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar3 = &UNK_10f450119;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar3 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_70,puVar3);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
      puVar3 = &UNK_110a05af8;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110a05af8,&uStack_c0,10);
      puStack_a8 = (undefined1 *)&uStack_c0;
      func_0x00010007e5dc(&puStack_a8);
      lVar1 = 0;
      do {
        if ((&cStack_59)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
        unaff_x24 = &uStack_c0;
      } while (lVar1 != -0x48);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    puStack_e8 = (undefined1 *)&uStack_100;
    puStack_c8 = &LAB_107cae944;
    if (puVar4 != (undefined *)0x0) {
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      puStack_e0 = param_4;
      puStack_d8 = param_3;
      puStack_d0 = &stack0xfffffffffffffff0;
      (**(code **)(**(long **)(puVar4 + 8) + 0x18))
                (*(long **)(puVar4 + 8),&UNK_110a05b48,&uStack_100,puVar3);
      func_0x00010007e5dc(&puStack_e8);
    }
    return;
  }
  return;
}



/* Entry: 105b0c358; end: 105b0c363; -[SCStoriesUpNextGrapheneMetricsEmitter logUpNextRetryDepth:] */

void FUN_105b0c358(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a05b48,&uStack_40,param_3);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105b0c364; end: 105b0c36f; -[SCStoriesUpNextGrapheneMetricsEmitter logUpNextDedupDropCount:] */

void FUN_105b0c364(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a05b98,&uStack_40,param_3);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105b0c370; end: 105b0c437; -[SCStoriesUpNextGrapheneMetricsEmitter logUpNextInitialStoriesAtStartCount:triggeringSource:feedType:startState:] */

void FUN_105b0c370(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_6);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107caea34(uVar3,puVar1,param_6,puVar2,param_3);
  _objc_release(param_6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0c438; end: 105b0c4cb; -[SCStoriesUpNextGrapheneMetricsEmitter logUpNextInitialMediaResidentWithCacheHit:source:feedType:] */

void FUN_105b0c438(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107caecf4(uVar2,param_3,puVar1,param_4,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0c4cc; end: 105b0c4d7; -[SCStoriesUpNextGrapheneMetricsEmitter .cxx_destruct] */

void FUN_105b0c4cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b0c4d8; end: 105b0c52f; -[SCGhostToStoriesStepMetric initWithStep:stepTimeInSecs:] */

void FUN_105b0c4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ebd70;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  return;
}



/* Entry: 105b0c530; end: 105b0c553; -[SCGhostToStoriesStepMetric copyWithZone:] */

undefined8 FUN_105b0c530(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105b0c554; end: 105b0c5d3; -[SCGhostToStoriesStepMetric hash] */

long * FUN_105b0c554(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  double dVar6;
  long lStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar4 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  uStack_20 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  plVar2 = &lStack_28;
  func_0x000100505190(plVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 == param_3) {
    plVar5 = (long *)0x1;
  }
  else {
    plVar5 = (long *)0x0;
    if ((plVar2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      plVar5 = plVar2;
      _objc_opt_class(plVar2);
      plVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,plVar5);
      if ((((ulong)plVar3 & 1) == 0) || (plVar2[1] != param_3[1])) {
        plVar5 = (long *)0x0;
      }
      else {
        dVar6 = ABS((double)plVar2[2] + (double)param_3[2]) * 2.220446049250313e-16;
        if (dVar6 <= 2.2250738585072014e-308) {
          dVar6 = 2.2250738585072014e-308;
        }
        plVar5 = (long *)(ulong)(ABS((double)plVar2[2] - (double)param_3[2]) < dVar6);
      }
    }
  }
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 105b0c5d4; end: 105b0c68f; -[SCGhostToStoriesStepMetric isEqual:] */

bool FUN_105b0c5d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 105b0c690; end: 105b0c697; -[SCGhostToStoriesStepMetric step] */

undefined8 FUN_105b0c690(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105b0c698; end: 105b0c69f; -[SCGhostToStoriesStepMetric stepTimeInSecs] */

undefined8 FUN_105b0c698(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105b0c6a0; end: 105b0c6f7; +[SCUpdater setIsUserUpdatingApp:synchronous:preferences:] */

void FUN_105b0c6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010c172fe0(param_5,param_2,param_3,&PTR____CFConstantStringClassReference_110e1e338);
  if (param_4 != 0) {
    func_0x00010c266b80(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105b0c6f8; end: 105b0c74b; +[SCNetworkingErrorStatusBarPresenter lastDisplayTimestampDict] */

void FUN_105b0c6f8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c1c20 != -1) {
    func_0x00010002a2fc(0x1136c1c20,&PTR___NSConcreteGlobalBlock_1108d5040);
  }
  uVar1 = uRam00000001136c1c18;
  _objc_retain(uRam00000001136c1c18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b0c74c; end: 105b0c77f;  */

void FUN_105b0c74c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c1c18;
  puRam00000001136c1c18 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b0c780; end: 105b0c78f; +[SCNetworkingErrorStatusBarPresenter showErrorForRequestFailureReason:onSend:tag:grapheneRegistry:] */

void FUN_105b0c780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2373f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_showErrorForRequestFailureReason_11266b720,param_3,param_4,1,param_5,
             param_6);
  return;
}



/* Entry: 105b0c790; end: 105b0c8e3; +[SCNetworkingErrorStatusBarPresenter showErrorForRequestFailureReason:onSend:userInitiated:tag:grapheneRegistry:] */

void FUN_105b0c790(ulong param_1,undefined8 param_2,long param_3,int param_4,int param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  iVar1 = (int)param_1;
  uVar2 = param_7;
  _objc_retain(param_7);
  if (param_3 == 1) {
    func_0x000105b0ca40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c233700();
    if (iVar1 == 0) goto LAB_105b0c8c4;
    func_0x00010c237040(PTR_PTR_1126afca8);
  }
  else {
    if (param_3 == 3) {
      func_0x000105b0ca88();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_4 == 0) {
      if (param_5 == 0) {
        func_0x000105b0ca70();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000105b0ca58();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x000105b0caa0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c233700();
    if ((param_1 & 1) == 0) goto LAB_105b0c8c4;
    func_0x00010c237520(PTR_PTR_1126afca8);
  }
  puVar3 = PTR_PTR_1126bc0e8;
  func_0x00010c25d2c0(PTR_PTR_1126bc0e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b27eb24(param_7,puVar3,1);
  _objc_release(puVar3);
LAB_105b0c8c4:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105b0c8e4; end: 105b0ca3f; +[SCNetworkingErrorStatusBarPresenter shouldShowErrorStatusBar:] */

undefined8 FUN_105b0c8e4(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    uVar5 = 1;
    goto LAB_105b0ca08;
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c0889e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  lVar3 = param_2;
  func_0x00010c0889e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    func_0x00010c0889e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
LAB_105b0c9d4:
    _objc_release(param_2);
    uVar5 = 1;
  }
  else {
    func_0x00010c26f380(puVar1,param_3,lVar4);
    if (5.0 < param_1) {
      func_0x00010c0889e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      goto LAB_105b0c9d4;
    }
    uVar5 = 0;
  }
  _objc_release(lVar4);
  _objc_sync_exit(lVar2);
  _objc_release(lVar2);
  _objc_release(puVar1);
LAB_105b0ca08:
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 105b0ca40; end: 105b0cab7;  */

void FUN_105b0ca40(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1e358;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1e358,
                      &PTR____CFConstantStringClassReference_110e1e3d8,0);
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



/* Entry: 105b0cab8; end: 105b0cb3f; -[SCDiscoverFeedMetricServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b0cab8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c2458;
  _objc_opt_new(PTR_PTR_1126c2458);
  puVar2 = PTR_PTR_1126c2460;
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11272fac4);
  }
  _objc_retain(uVar3);
  _objc_alloc(puVar2);
  func_0x00010c018440();
  func_0x00010bf9d660(uVar3,param_2,puVar2);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0cb40; end: 105b0cb7b; -[SCDiscoverFeedMetricServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b0cb40(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272fac4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272fac0);
  return;
}



/* Entry: 105b0cb7c; end: 105b0cbaf; -[SCDiscoverFeedGrapheneMetricsEmitter logDiscoverFeedInitialLoad] */

void FUN_105b0cb7c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1088;
  _objc_alloc_init(PTR_PTR_1126c1088);
  func_0x00010852b488();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


