/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ca1070; end: 105ca10eb; -[SCGalleryCellActionMenuHelper privateGallerySetupFlowDidCancel:] */

void FUN_105ca1070(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x118;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x118;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105ca10ec; end: 105ca11a7; -[SCGalleryCellActionMenuHelper privateGallerySetupFlowDidFinish:] */

void FUN_105ca10ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x160);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbd4e0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010beccca0(param_1,param_2,*(undefined8 *)(param_1 + 0x58));
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar2);
  }
  lVar3 = param_1 + 0x118;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    param_1 = param_1 + 0x118;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105ca11a8; end: 105ca11b3; -[SCGalleryCellActionMenuHelper memoriesCellActionSheet:handleEdit:snap:] */

void FUN_105ca11a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be28c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__handleEditItem_snap__112567cb0,param_4,param_5);
  return;
}



/* Entry: 105ca11b4; end: 105ca1377; -[SCGalleryCellActionMenuHelper _handleEditItem:snap:] */

void FUN_105ca11b4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
    lVar1 = param_3;
    func_0x00010bfbd100();
    if (lVar1 == 2) {
      uVar3 = *(undefined8 *)(param_1 + 0xb8);
      _objc_retain(param_3);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf22420();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = uVar4;
      _objc_release(uVar2);
      _objc_release(uVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      param_1 = param_1 + 0x60;
      _objc_loadWeakRetained(param_1);
      func_0x00010c10dc40(uVar4);
      _objc_release(param_3);
      _objc_release(param_1);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c0f7fc0(uVar4);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ca1378; end: 105ca1767;  */

undefined8 *
FUN_105ca1378(double param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
             undefined **param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 *param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined **unaff_x24;
  undefined *puVar16;
  long lVar17;
  undefined **unaff_x27;
  long lVar18;
  double dVar19;
  undefined8 *puStack_418;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [8];
  double dStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *apuStack_1c8 [16];
  long lStack_148;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  ppuVar8 = &puStack_d0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)(param_2 + 0x30);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined8 *)0x0) {
    lVar13 = *(long *)(param_2 + 0x20);
    _objc_retain(lVar13);
    lVar7 = lVar13;
    if (*(long *)(param_2 + 0x28) == 0) {
      puVar2 = (undefined *)puVar1[0x19];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfa7340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = puVar3;
      func_0x00010bf529e0();
      if (puVar2 == (undefined *)0x0) {
        lVar18 = puVar1[0x19];
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar13;
        func_0x00010bf97200(lVar13);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar18;
        func_0x00010bfa7080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        _objc_release(lVar4);
        _objc_release(lVar18);
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          puVar16 = (undefined *)puVar1[0x19];
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar16;
          func_0x00010bfa7340();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          _objc_release(puVar16);
          func_0x00010bf529e0(puVar2);
          puVar3 = puVar2;
        }
      }
      lVar13 = *(long *)(param_2 + 0x28);
      func_0x00010b5fa088();
      if (lVar13 - 2U < 0xb) {
        lVar13 = lVar7;
        func_0x00010bfbdda0();
        func_0x00010b5fa33c();
        if (lVar13 != 4) goto LAB_105ca1518;
        _objc_retain(puVar3);
        puVar2 = puVar3;
      }
      else {
LAB_105ca1518:
        puVar2 = puVar3;
        func_0x00010bf529e0();
        if (puVar2 == (undefined *)0x0) {
          puVar2 = (undefined *)0x0;
        }
        else {
          puVar16 = puVar3;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          param_5 = (undefined **)0x1;
          puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_78 = puVar16;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar16);
        }
      }
      _objc_release(puVar3);
    }
    else {
      param_5 = (undefined **)0x1;
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_70 = *(long *)(param_2 + 0x28);
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar13 = lVar7;
    func_0x000107da0750(lVar7,puVar2);
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = (undefined **)PTR____NSArray0__struct_11034ab48;
    if (lVar13 != 0) {
      param_5 = (undefined **)0x1;
      unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_80 = lVar13;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar14 = unaff_x24;
    func_0x00010bf529e0();
    if (ppuVar14 == (undefined **)0x0) {
      puVar16 = (undefined *)0x0;
      puVar3 = (undefined *)0x0;
    }
    else {
      param_5 = (undefined **)0x1;
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_88 = lVar7;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = puVar1[0x13];
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar3;
      func_0x000107da0820(puVar3,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release();
    }
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 1.60807493534087e-314;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105ca1768;
    puStack_b8 = &UNK_11085ae98;
    param_3 = (undefined8 *)(param_2 + 0x30);
    _objc_copyWeak(auStack_90);
    _objc_retain(puVar2);
    puStack_b0 = puVar2;
    _objc_retain(puVar16);
    puStack_a8 = puVar16;
    _objc_retain(unaff_x24);
    ppuStack_a0 = unaff_x24;
    _objc_retain(lVar7);
    lStack_98 = lVar7;
    func_0x00010c0f7fc0(puVar3);
    _objc_release(puVar3);
    _objc_release(lStack_98);
    _objc_release(ppuStack_a0);
    _objc_release(puStack_a8);
    _objc_release(puStack_b0);
    _objc_destroyWeak(auStack_90);
    _objc_release(puVar16);
    _objc_release(unaff_x24);
    _objc_release(lVar13);
    _objc_release(puVar2);
    _objc_release(lVar7);
    param_4 = ppuVar8;
    unaff_x27 = &puStack_d0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x27 + 0x40));
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1 + 8;
  _objc_loadWeakRetained();
  if (puVar6 != (undefined8 *)0x0) {
    lVar7 = puVar1[4];
    func_0x00010bf529e0();
    if (lVar7 == 0) {
      puVar1 = puVar6 + 0xc;
      _objc_loadWeakRetained();
      func_0x000108df7438();
      _objc_release(puVar1);
      *(undefined1 *)(puVar6 + 8) = 0;
    }
    else {
      param_1 = 0.0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      lStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      plStack_200 = (long *)0x0;
      ppuVar14 = (undefined **)puVar1[4];
      _objc_retain(ppuVar14);
      param_4 = &uStack_210;
      param_5 = apuStack_1c8;
      ppuVar8 = ppuVar14;
      func_0x00010bf52a60();
      if (ppuVar8 != (undefined **)0x0) {
        lVar7 = *plStack_200;
        do {
          unaff_x24 = (undefined **)0x0;
          do {
            if (*plStack_200 != lVar7) {
              _objc_enumerationMutation(ppuVar14);
            }
            lVar13 = *(long *)(lStack_208 + (long)unaff_x24 * 8);
            func_0x00010c0e0160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar13 == 0) {
              puVar1 = puVar6 + 0xc;
              _objc_loadWeakRetained();
              func_0x000108df9400();
              _objc_release(puVar1);
              *(undefined1 *)(puVar6 + 8) = 0;
              _objc_release(ppuVar14);
              goto LAB_105ca1a00;
            }
            unaff_x24 = (undefined **)((long)unaff_x24 + 1);
          } while (ppuVar8 != unaff_x24);
          param_4 = &uStack_210;
          param_5 = apuStack_1c8;
          ppuVar8 = ppuVar14;
          func_0x00010bf52a60();
        } while (ppuVar8 != (undefined **)0x0);
      }
      _objc_release(ppuVar14);
      uVar9 = puVar1[4];
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar9;
      func_0x00010b5fa088();
      func_0x000106e1d104();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      puVar3 = PTR_PTR_1126b24c8;
      _objc_alloc();
      puVar10 = puVar6 + 0xc;
      _objc_loadWeakRetained();
      param_9 = (undefined8 *)0x0;
      param_7 = puVar10;
      func_0x00010c017280();
      _objc_release(puVar10);
      _CACurrentMediaTime();
      puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
      dVar19 = 1.60807493534087e-314;
      uStack_248 = 0xc2000000;
      pcStack_240 = FUN_105ca1a64;
      puStack_238 = &UNK_11085ae68;
      unaff_x24 = &puStack_250;
      param_3 = puVar1 + 8;
      _objc_copyWeak(auStack_220);
      uVar15 = puVar1[4];
      dStack_218 = param_1;
      _objc_retain(uVar15);
      uVar9 = puVar1[7];
      uStack_230 = uVar15;
      _objc_retain(uVar9);
      param_5 = &puStack_250;
      param_4 = (undefined8 *)0x0;
      uStack_228 = uVar9;
      func_0x00010c142c20(puVar3);
      _objc_release(uStack_228);
      _objc_release(uStack_230);
      _objc_destroyWeak(auStack_220);
      _objc_release(puVar3);
      _objc_release(uVar5);
      param_1 = dVar19;
    }
  }
LAB_105ca1a00:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 6);
  __Unwind_Resume();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puVar1 = puVar6 + 6;
  _objc_loadWeakRetained();
  if (puVar1 != (undefined8 *)0x0) {
    _CACurrentMediaTime();
    dVar19 = (double)puVar6[7];
    puVar11 = (undefined8 *)puVar1[0x34];
    func_0x00010c269d40(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar12;
    func_0x000107d9fdf0((param_1 - dVar19) * 1000.0,2,puVar12,puVar1[0x27]);
    _objc_release(puVar12);
    _objc_release(puVar11);
    if ((int)param_3 == 0) {
      if (param_9 == (undefined8 *)0x0) {
        uVar9 = puVar1[0x17];
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar9;
        func_0x00010bf22420();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = puVar1[7];
        puVar1[7] = uVar5;
        _objc_release(uVar15);
        _objc_release(uVar9);
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = puVar6[4];
        _objc_retain(lVar18);
        lVar13 = lVar18;
        func_0x00010bf52a60();
        lVar4 = lRam0000000000000000;
        while (lVar13 != 0) {
          lVar17 = 0;
          do {
            if (lRam0000000000000000 != lVar4) {
              _objc_enumerationMutation(lVar18);
            }
            uVar9 = *(undefined8 *)(lVar17 * 8);
            uVar5 = uVar9;
            func_0x00010c241220(uVar9);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = param_4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar5);
            if (puVar12 != (undefined8 *)0x0) {
              uVar5 = uVar9;
              func_0x00010c241220(uVar9);
              _objc_retainAutoreleasedReturnValue();
              puVar12 = param_4;
              func_0x00010c0e00e0(param_4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar3);
              _objc_release(puVar12);
              _objc_release(uVar5);
            }
            uVar5 = uVar9;
            func_0x00010c241220(uVar9);
            _objc_retainAutoreleasedReturnValue();
            ppuVar8 = param_5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar5);
            if (ppuVar8 != (undefined **)0x0) {
              uVar5 = uVar9;
              func_0x00010c241220(uVar9);
              _objc_retainAutoreleasedReturnValue();
              ppuVar8 = param_5;
              func_0x00010c0e00e0(param_5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c241220(uVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar2);
              _objc_release(uVar9);
              _objc_release(ppuVar8);
              _objc_release(uVar5);
            }
            lVar17 = lVar17 + 1;
          } while (lVar13 != lVar17);
          lVar13 = lVar18;
          func_0x00010bf52a60();
        }
        _objc_release(lVar18);
        uVar5 = puVar6[4];
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = puVar6[5];
        func_0x00010bf97200();
        _objc_retainAutoreleasedReturnValue();
        if (lVar13 == 0) {
          puStack_418 = (undefined8 *)0x0;
        }
        else {
          uVar9 = puVar6[5];
          func_0x00010bf97200(uVar9);
          _objc_retainAutoreleasedReturnValue();
          puStack_418 = param_7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
        }
        _objc_release(lVar13);
        uVar15 = puVar1[7];
        uVar9 = puVar6[4];
        func_0x00010bfb1920(uVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar2;
        func_0x00010bf51e00(puVar2);
        puVar6 = puVar1 + 0xc;
        _objc_loadWeakRetained();
        func_0x00010c10dc00(uVar15);
        _objc_release(puVar6);
        _objc_release(puVar16);
        _objc_release(uVar9);
        _objc_release(puStack_418);
        _objc_release(uVar5);
        _objc_release(puVar2);
        _objc_release(puVar3);
        goto LAB_105ca1e3c;
      }
      puVar6 = param_9;
      func_0x00010bf3ec40();
      puVar3 = PTR_PTR_1126b2518;
      if (puVar6 == (undefined8 *)0xda) {
        puVar6 = puVar1 + 0xc;
        _objc_loadWeakRetained(puVar6);
        func_0x00010c23ab00(puVar3);
      }
      else {
        puVar6 = puVar1 + 0xc;
        _objc_loadWeakRetained(puVar6);
        puVar10 = param_9;
        func_0x000107dffcbc();
      }
      _objc_release(puVar6);
    }
    *(undefined1 *)(puVar1 + 8) = 0;
  }
LAB_105ca1e3c:
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_4;
  }
  ___stack_chk_fail();
  func_0x00010c23ff80(puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (undefined8 *)(ulong)(puVar10 == (undefined8 *)0x0);
}



/* Entry: 105ca1768; end: 105ca1a63;  */

undefined8 *
FUN_105ca1768(double param_1,long param_2,long param_3,undefined8 *param_4,undefined **param_5,
             undefined8 param_6,undefined8 *param_7,undefined8 param_8,long param_9)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined **unaff_x24;
  long lVar16;
  long lVar17;
  double dVar18;
  undefined8 *puStack_348;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [8];
  double dStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *apuStack_f8 [16];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)(param_2 + 0x40);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = *(long *)(param_2 + 0x20);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      puVar7 = puVar1 + 0xc;
      _objc_loadWeakRetained();
      func_0x000108df7438();
      _objc_release(puVar7);
      *(undefined1 *)(puVar1 + 8) = 0;
    }
    else {
      param_1 = 0.0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      ppuVar14 = *(undefined ***)(param_2 + 0x20);
      _objc_retain(ppuVar14);
      param_4 = &uStack_140;
      param_5 = apuStack_f8;
      ppuVar3 = ppuVar14;
      func_0x00010bf52a60();
      if (ppuVar3 != (undefined **)0x0) {
        lVar2 = *plStack_130;
        do {
          unaff_x24 = (undefined **)0x0;
          do {
            if (*plStack_130 != lVar2) {
              _objc_enumerationMutation(ppuVar14);
            }
            lVar4 = *(long *)(lStack_138 + (long)unaff_x24 * 8);
            func_0x00010c0e0160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar4 == 0) {
              puVar7 = puVar1 + 0xc;
              _objc_loadWeakRetained();
              func_0x000108df9400();
              _objc_release(puVar7);
              *(undefined1 *)(puVar1 + 8) = 0;
              _objc_release(ppuVar14);
              goto LAB_105ca1a00;
            }
            unaff_x24 = (undefined **)((long)unaff_x24 + 1);
          } while (ppuVar3 != unaff_x24);
          param_4 = &uStack_140;
          param_5 = apuStack_f8;
          ppuVar3 = ppuVar14;
          func_0x00010bf52a60();
        } while (ppuVar3 != (undefined **)0x0);
      }
      _objc_release(ppuVar14);
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar5;
      func_0x00010b5fa088();
      func_0x000106e1d104();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar6 = PTR_PTR_1126b24c8;
      _objc_alloc();
      puVar7 = puVar1 + 0xc;
      _objc_loadWeakRetained();
      param_9 = 0;
      param_7 = puVar7;
      func_0x00010c017280();
      _objc_release(puVar7);
      _CACurrentMediaTime();
      puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
      dVar18 = 1.60807493534087e-314;
      uStack_178 = 0xc2000000;
      pcStack_170 = FUN_105ca1a64;
      puStack_168 = &UNK_11085ae68;
      unaff_x24 = &puStack_180;
      param_3 = param_2 + 0x40;
      _objc_copyWeak(auStack_150);
      uVar15 = *(undefined8 *)(param_2 + 0x20);
      dStack_148 = param_1;
      _objc_retain(uVar15);
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      uStack_160 = uVar15;
      _objc_retain(uVar5);
      param_5 = &puStack_180;
      param_4 = (undefined8 *)0x0;
      uStack_158 = uVar5;
      func_0x00010c142c20(puVar6);
      _objc_release(uStack_158);
      _objc_release(uStack_160);
      _objc_destroyWeak(auStack_150);
      _objc_release(puVar6);
      _objc_release(uVar11);
      param_1 = dVar18;
    }
  }
LAB_105ca1a00:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 6);
  __Unwind_Resume();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puVar7 = puVar1 + 6;
  _objc_loadWeakRetained();
  if (puVar7 != (undefined8 *)0x0) {
    _CACurrentMediaTime();
    dVar18 = (double)puVar1[7];
    lVar8 = puVar7[0x34];
    func_0x00010c269d40(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar8;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar12;
    func_0x000107d9fdf0((param_1 - dVar18) * 1000.0,2,lVar12,puVar7[0x27]);
    _objc_release(lVar12);
    _objc_release(lVar8);
    if ((int)param_3 == 0) {
      if (param_9 == 0) {
        uVar5 = puVar7[0x17];
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar5;
        func_0x00010bf22420();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = puVar7[7];
        puVar7[7] = uVar11;
        _objc_release(uVar15);
        _objc_release(uVar5);
        puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        lVar17 = puVar1[4];
        _objc_retain(lVar17);
        lVar12 = lVar17;
        func_0x00010bf52a60();
        lVar8 = lRam0000000000000000;
        while (lVar12 != 0) {
          lVar16 = 0;
          do {
            if (lRam0000000000000000 != lVar8) {
              _objc_enumerationMutation(lVar17);
            }
            uVar5 = *(undefined8 *)(lVar16 * 8);
            uVar11 = uVar5;
            func_0x00010c241220(uVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = param_4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar11);
            if (puVar10 != (undefined8 *)0x0) {
              uVar11 = uVar5;
              func_0x00010c241220(uVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = param_4;
              func_0x00010c0e00e0(param_4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar6);
              _objc_release(puVar10);
              _objc_release(uVar11);
            }
            uVar11 = uVar5;
            func_0x00010c241220(uVar5);
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = param_5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar11);
            if (ppuVar3 != (undefined **)0x0) {
              uVar11 = uVar5;
              func_0x00010c241220(uVar5);
              _objc_retainAutoreleasedReturnValue();
              ppuVar3 = param_5;
              func_0x00010c0e00e0(param_5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c241220(uVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar9);
              _objc_release(uVar5);
              _objc_release(ppuVar3);
              _objc_release(uVar11);
            }
            lVar16 = lVar16 + 1;
          } while (lVar12 != lVar16);
          lVar12 = lVar17;
          func_0x00010bf52a60();
        }
        _objc_release(lVar17);
        uVar11 = puVar1[4];
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = puVar1[5];
        func_0x00010bf97200();
        _objc_retainAutoreleasedReturnValue();
        if (lVar12 == 0) {
          puStack_348 = (undefined8 *)0x0;
        }
        else {
          uVar5 = puVar1[5];
          func_0x00010bf97200(uVar5);
          _objc_retainAutoreleasedReturnValue();
          puStack_348 = param_7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
        }
        _objc_release(lVar12);
        uVar15 = puVar7[7];
        uVar5 = puVar1[4];
        func_0x00010bfb1920(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar9;
        func_0x00010bf51e00(puVar9);
        puVar1 = puVar7 + 0xc;
        _objc_loadWeakRetained();
        func_0x00010c10dc00(uVar15);
        _objc_release(puVar1);
        _objc_release(puVar13);
        _objc_release(uVar5);
        _objc_release(puStack_348);
        _objc_release(uVar11);
        _objc_release(puVar9);
        _objc_release(puVar6);
        goto LAB_105ca1e3c;
      }
      lVar12 = param_9;
      func_0x00010bf3ec40();
      puVar6 = PTR_PTR_1126b2518;
      if (lVar12 == 0xda) {
        puVar1 = puVar7 + 0xc;
        _objc_loadWeakRetained(puVar1);
        func_0x00010c23ab00(puVar6);
      }
      else {
        puVar1 = puVar7 + 0xc;
        _objc_loadWeakRetained(puVar1);
        lVar2 = param_9;
        func_0x000107dffcbc();
      }
      _objc_release(puVar1);
    }
    *(undefined1 *)(puVar7 + 8) = 0;
  }
LAB_105ca1e3c:
  _objc_release(puVar7);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_4;
  }
  ___stack_chk_fail();
  func_0x00010c23ff80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (undefined8 *)(ulong)(lVar2 == 0);
}



/* Entry: 105ca1a64; end: 105ca1f97;  */

ulong FUN_105ca1a64(double param_1,long param_2,long param_3,ulong param_4,long param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  undefined8 uStack_178;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _CACurrentMediaTime();
    dVar16 = *(double *)(param_2 + 0x38);
    lVar2 = *(long *)(lVar1 + 0x1a0);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x000107d9fdf0((param_1 - dVar16) * 1000.0,2,lVar9,*(undefined8 *)(lVar1 + 0x138));
    _objc_release(lVar9);
    _objc_release(lVar2);
    if ((int)param_3 == 0) {
      if (param_9 == 0) {
        uVar3 = *(undefined8 *)(lVar1 + 0xb8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar3;
        func_0x00010bf22420();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(lVar1 + 0x38);
        *(undefined8 *)(lVar1 + 0x38) = uVar8;
        _objc_release(uVar13);
        _objc_release(uVar3);
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = *(long *)(param_2 + 0x20);
        _objc_retain(lVar15);
        lVar9 = lVar15;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar9 != 0) {
          lVar14 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar15);
            }
            uVar3 = *(undefined8 *)(lVar14 * 8);
            uVar8 = uVar3;
            func_0x00010c241220(uVar3);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = param_4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar8);
            if (uVar6 != 0) {
              uVar8 = uVar3;
              func_0x00010c241220(uVar3);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = param_4;
              func_0x00010c0e00e0(param_4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar4);
              _objc_release(uVar6);
              _objc_release(uVar8);
            }
            uVar8 = uVar3;
            func_0x00010c241220(uVar3);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = param_5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar8);
            if (lVar7 != 0) {
              uVar8 = uVar3;
              func_0x00010c241220(uVar3);
              _objc_retainAutoreleasedReturnValue();
              lVar7 = param_5;
              func_0x00010c0e00e0(param_5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c241220(uVar3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar5);
              _objc_release(uVar3);
              _objc_release(lVar7);
              _objc_release(uVar8);
            }
            lVar14 = lVar14 + 1;
          } while (lVar9 != lVar14);
          lVar9 = lVar15;
          func_0x00010bf52a60();
        }
        _objc_release(lVar15);
        uVar8 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = *(long *)(param_2 + 0x28);
        func_0x00010bf97200();
        _objc_retainAutoreleasedReturnValue();
        if (lVar9 == 0) {
          uStack_178 = 0;
        }
        else {
          uVar3 = *(undefined8 *)(param_2 + 0x28);
          func_0x00010bf97200(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uStack_178 = param_7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
        }
        _objc_release(lVar9);
        uVar13 = *(undefined8 *)(lVar1 + 0x38);
        uVar3 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bfb1920(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar5;
        func_0x00010bf51e00(puVar5);
        lVar9 = lVar1 + 0x60;
        _objc_loadWeakRetained();
        func_0x00010c10dc00(uVar13);
        _objc_release(lVar9);
        _objc_release(puVar10);
        _objc_release(uVar3);
        _objc_release(uStack_178);
        _objc_release(uVar8);
        _objc_release(puVar5);
        _objc_release(puVar4);
        goto LAB_105ca1e3c;
      }
      lVar9 = param_9;
      func_0x00010bf3ec40();
      puVar4 = PTR_PTR_1126b2518;
      if (lVar9 == 0xda) {
        lVar9 = lVar1 + 0x60;
        _objc_loadWeakRetained(lVar9);
        func_0x00010c23ab00(puVar4);
      }
      else {
        lVar9 = lVar1 + 0x60;
        _objc_loadWeakRetained(lVar9);
        lVar11 = param_9;
        func_0x000107dffcbc();
      }
      _objc_release(lVar9);
    }
    *(undefined1 *)(lVar1 + 0x40) = 0;
  }
LAB_105ca1e3c:
  _objc_release(lVar1);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_4;
  }
  ___stack_chk_fail();
  func_0x00010c23ff80(lVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (ulong)(lVar11 == 0);
}



/* Entry: 105ca1f98; end: 105ca1fcf;  */

bool FUN_105ca1f98(undefined8 param_1,long param_2)

{
  func_0x00010c23ff80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 == 0;
}



/* Entry: 105ca1fd0; end: 105ca24ef; -[SCGalleryCellActionMenuHelper memoriesCellActionSheet:handleExport:snap:] */

void FUN_105ca1fd0(long param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **unaff_x24;
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_138 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_80 = param_5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar5;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = param_4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 200);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x000107da0188(puVar5,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
  }
  puVar5 = puStack_120;
  func_0x000109023ef8();
  if ((int)puVar5 != 0) {
    puVar5 = PTR_PTR_1126aead8;
    _objc_alloc();
    lVar9 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar9);
    func_0x00010c038f40();
    puStack_128 = puVar5;
    _objc_release(lVar9);
    ppuVar12 = *(undefined ***)(param_1 + 0x130);
    lVar9 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar9);
    ppuVar6 = ppuVar12;
    func_0x00010bf23d80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_130 = ppuVar6;
    _objc_release(lVar9);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x128));
    goto LAB_105ca2440;
  }
  if (param_5 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    func_0x00010c0ecd80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_130 = (undefined **)0x0;
    puStack_128 = puVar5;
  }
  else {
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_128 = (undefined *)0x0;
    ppuStack_130 = ppuVar12;
  }
  puVar5 = PTR_PTR_1126af4c0;
  _objc_retain(param_4);
  _objc_opt_class(puVar5);
  uVar7 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar5);
  uVar1 = param_4;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  uVar7 = uVar1;
  func_0x00010bf977c0();
  if ((int)uVar7 - 0x13U < 0x14) {
LAB_105ca21ec:
    uVar8 = *(undefined8 *)(param_1 + 0x1c0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = uVar3;
    _objc_release(uVar8);
    puVar5 = PTR_PTR_1126aead8;
    _objc_alloc();
    lVar9 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar9);
    func_0x00010c038f40();
    _objc_release(lVar9);
    uVar8 = *(undefined8 *)(param_1 + 0x1a0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    uVar10 = *(undefined8 *)(param_1 + 0x1a0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010bf5f400();
    _objc_release(uVar10);
    uVar7 = uVar1;
    func_0x00010bf977c0();
    lVar11 = (long)(int)uVar7;
    func_0x00010b5f5864(lVar11,uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + 0x120;
    _objc_loadWeakRetained();
    _objc_copyWeak(auStack_88,param_1 + 0x120);
    unaff_x24 = *(undefined ***)(param_1 + 0x28);
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_105ca24f0;
    puStack_d8 = &UNK_1108e3c90;
    _objc_retain(param_4);
    uStack_c0 = uStack_140;
    ppuVar12 = &puStack_f0;
    uStack_d0 = param_4;
    lStack_c8 = param_1;
    puStack_b8 = puVar5;
    uStack_b0 = uVar3;
    lStack_a8 = lVar11;
    uStack_90 = uVar8;
    _objc_copyWeak(auStack_98,auStack_88);
    lStack_a0 = lVar9;
    func_0x00010c0f7fc0(unaff_x24);
    _objc_destroyWeak(auStack_98);
    _objc_release(uStack_d0);
    _objc_destroyWeak(auStack_88);
    _objc_release(lVar9);
    _objc_release(lVar11);
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_release(uStack_140);
  }
  else {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x180);
    func_0x000108faa47c();
    if (iVar2 != 0) goto LAB_105ca21ec;
    _objc_initWeak(auStack_88,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = (undefined **)(param_1 + 0x60);
    _objc_loadWeakRetained();
    func_0x000107e2e2c8(puStack_120);
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_105ca27f0;
    puStack_100 = &UNK_1108e3cc0;
    unaff_x24 = &puStack_118;
    _objc_copyWeak(auStack_f8,auStack_88);
    func_0x00010c10c3c0(uVar3);
    _objc_release(ppuVar12);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(uVar1);
LAB_105ca2440:
  _objc_release(ppuStack_130);
  _objc_release(puStack_128);
  _objc_release(puStack_120);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar9 = lStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 4);
  _objc_destroyWeak(auStack_88);
  lVar11 = lVar9;
  __Unwind_Resume();
  puVar5 = PTR_PTR_1126af4d0;
  pcStack_148 = FUN_105ca24f0;
  uVar3 = *(undefined8 *)(*(long *)(lVar11 + 0x28) + 0x98);
  ppuStack_170 = ppuVar12;
  lStack_168 = param_5;
  uStack_160 = param_4;
  lStack_158 = lVar9;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  uStack_178 = *(undefined8 *)(lVar11 + 0x60);
  _objc_copyWeak(auStack_180,lVar11 + 0x58);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_180);
  _objc_release(puVar5);
  _objc_release(puVar5);
  return;
}



/* Entry: 105ca24f0; end: 105ca2613;  */

void FUN_105ca24f0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  puVar2 = PTR_PTR_1126af4d0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  uStack_38 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_40,param_1 + 0x58);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar2);
  _objc_release(puVar2);
  return;
}



/* Entry: 105ca2614; end: 105ca2713;  */

void FUN_105ca2614(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126c38c0;
  _objc_alloc(PTR_PTR_1126c38c0);
  _objc_copyWeak(auStack_68,param_1 + 0x50);
  func_0x00010c017320(puVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x48));
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105ca2714; end: 105ca27bb;  */

void FUN_105ca2714(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105ca27bc; end: 105ca27ef;  */

void FUN_105ca27bc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ca27f0; end: 105ca2853;  */

void FUN_105ca27f0(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((((param_2 & 1) == 0) && ((param_4 & 1) == 0)) && ((param_3 & 1) == 0)) && (param_1 != 0)) {
    lVar1 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar1);
    func_0x000108df7438();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ca2854; end: 105ca295f; -[SCGalleryCellActionMenuHelper memoriesCellActionSheet:handleRenameStory:snap:] */

void FUN_105ca2854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105ca2960;
  puStack_50 = &UNK_11085d4b0;
  _objc_retain(param_4);
  uStack_48 = param_4;
  _objc_copyWeak(auStack_40,auStack_38);
  FUN_105ca8308(param_4,&puStack_68);
  _objc_destroyWeak(auStack_40);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ca2960; end: 105ca2b2f;  */

void FUN_105ca2960(long param_1,int param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 unaff_x27;
  
  _objc_retain(param_3);
  if (param_2 == 0) goto LAB_105ca2b0c;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  _objc_retain(ppuVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2711a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if (((ulong)ppuVar3 & 1) == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0xd0);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b2220;
      _objc_alloc(PTR_PTR_1126b2220);
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(ulong *)(param_1 + 8);
      if (uVar6 < 2) {
LAB_105ca2a54:
        unaff_x27 = 0;
        uVar6 = *(long *)(param_1 + 0x18) - 2;
        if ((uVar6 < 0xc) && ((0x983U >> (ulong)((uint)uVar6 & 0x1f) & 1) != 0)) {
          unaff_x27 = *(undefined8 *)(&UNK_10ddd0238 + uVar6 * 8);
LAB_105ca2a88:
          func_0x00010bafa2a4(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        if (uVar6 == 2) {
          unaff_x27 = 0xd;
          goto LAB_105ca2a88;
        }
        if (uVar6 == 3) goto LAB_105ca2a54;
      }
      func_0x00010c04a560(puVar4);
      func_0x00010c285960(uVar2);
      _objc_release(puVar4);
      _objc_release(unaff_x27);
      _objc_release(puVar5);
      _objc_release(uVar2);
      _objc_release(param_1);
    }
  }
  _objc_release(ppuVar1);
LAB_105ca2b0c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ca2b30; end: 105ca2c0b; -[SCGalleryCellActionMenuHelper memoriesCellActionSheet:handleTogglePrivate:] */

void FUN_105ca2b30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x160);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbd4e0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c3220;
    _objc_alloc(PTR_PTR_1126c3220);
    lVar4 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c016880(puVar3,param_2,lVar4,param_1);
    _objc_release(lVar4);
    param_1 = param_1 + 0x118;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    _objc_release(puVar3);
  }
  else {
    func_0x00010beccca0(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ca2c0c; end: 105ca2c8f; -[SCGalleryCellActionMenuHelper _toggleItem:] */

void FUN_105ca2c0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfbd100();
  if (lVar1 == 2) {
    func_0x00010be5bf20(param_1,param_2,param_3);
  }
  else {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c07b240();
    if ((int)lVar1 == 0) {
      func_0x00010be5bc60(param_1,param_2,param_3);
    }
    else {
      func_0x00010be5bc80(param_1,param_2,param_3);
    }
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ca2c90; end: 105ca2dcb; -[SCGalleryCellActionMenuHelper _makeItemPublic:] */

void FUN_105ca2c90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c135d60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105ca2dcc; end: 105ca2f8f;  */

void FUN_105ca2dcc(undefined *param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined **unaff_x24;
  undefined8 unaff_x25;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 6) || (puVar1 == (undefined *)0x0)) goto LAB_105ca2f50;
  param_2 = *(long *)(puVar1 + 0xe0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  unaff_x23 = PTR_PTR_1126b2220;
  _objc_alloc();
  unaff_x24 = &PTR____CFConstantStringClassReference_110ec3398;
  unaff_x22 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(ulong *)(puVar1 + 8);
  if (uVar5 < 2) {
LAB_105ca2ea0:
    unaff_x25 = 0;
    uVar5 = *(long *)(puVar1 + 0x18) - 2;
    if ((uVar5 < 0xc) && ((0x983U >> (ulong)((uint)uVar5 & 0x1f) & 1) != 0)) {
      unaff_x25 = *(undefined8 *)(&UNK_10ddd0238 + uVar5 * 8);
LAB_105ca2ed4:
      func_0x00010bafa2a4(unaff_x25);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    if (uVar5 == 2) {
      unaff_x25 = 0xd;
      goto LAB_105ca2ed4;
    }
    if (uVar5 == 3) goto LAB_105ca2ea0;
  }
  uStack_70 = 0;
  func_0x00010c04a560();
  param_3 = param_1;
  func_0x00010c288c60(param_2);
  _objc_release(unaff_x23);
  _objc_release(unaff_x25);
  _objc_release(unaff_x22);
  _objc_release(param_1);
  _objc_release(param_2);
LAB_105ca2f50:
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_105ca2f90;
  ppuStack_b0 = unaff_x24;
  puStack_a8 = unaff_x23;
  puStack_a0 = unaff_x22;
  puStack_98 = param_1;
  lStack_90 = param_2;
  puStack_88 = puVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = puVar2 + 0x60;
    _objc_loadWeakRetained(puVar2);
    func_0x000108df9400();
    _objc_release(puVar2);
  }
  else {
    _objc_initWeak(auStack_b8,puVar2);
    uVar3 = *(undefined8 *)(puVar2 + 0x1a8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_c0,auStack_b8);
    _objc_retain(param_3);
    uVar4 = uVar3;
    func_0x00010c135d60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar2 + 0x30);
    *(undefined8 *)(puVar2 + 0x30) = uVar4;
    _objc_release(uVar6);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ca2f90; end: 105ca3103; -[SCGalleryCellActionMenuHelper _makeItemPrivate:] */

void FUN_105ca2f90(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    param_1 = param_1 + 0x60;
    _objc_loadWeakRetained(param_1);
    func_0x000108df9400();
    _objc_release(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    uVar3 = uVar2;
    func_0x00010c135d60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    _objc_release(uVar4);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ca3104; end: 105ca327f;  */

void FUN_105ca3104(undefined *param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar3 = PTR_DAT_1126a4ec0;
  if ((param_2 == (undefined *)0x6) && (puVar1 != (undefined *)0x0)) {
    param_2 = *(undefined **)(param_1 + 0x20);
    _objc_retain(param_2);
    puVar2 = param_2;
    func_0x00010010fab4(param_2,puVar3);
    param_1 = param_2;
    if ((int)puVar2 == 0) {
      param_1 = (undefined *)0x0;
    }
    _objc_retain(param_1);
    _objc_release(param_2);
    if (param_1 != (undefined *)0x0) {
      param_2 = PTR_PTR_1126c38e8;
      _objc_alloc();
      unaff_x22 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = param_1;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar1 + 0x60;
      _objc_loadWeakRetained();
      unaff_x24 = *(undefined8 *)(puVar1 + 0x150);
      func_0x00010c29a4c0();
      _objc_retainAutoreleasedReturnValue();
      uStack_60 = *(undefined8 *)(puVar1 + 0xe0);
      uStack_58 = *(undefined8 *)(puVar1 + 0x100);
      func_0x00010c016e80();
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
      param_3 = 0;
      func_0x00010c142b00(param_2);
      _objc_release(param_2);
    }
    _objc_release(param_1);
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_105ca3280;
  uStack_a0 = unaff_x24;
  puStack_98 = unaff_x23;
  puStack_90 = unaff_x22;
  puStack_88 = param_2;
  puStack_80 = param_1;
  puStack_78 = puVar1;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_a8,puVar3);
  uVar4 = *(undefined8 *)(puVar3 + 0x1a8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_b0,auStack_a8);
  _objc_retain(param_3);
  uVar5 = uVar4;
  func_0x00010c135d60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + 0x30) = uVar5;
  _objc_release(uVar6);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(param_3);
  return;
}



/* Entry: 105ca3280; end: 105ca33bb; -[SCGalleryCellActionMenuHelper _makePHAssetPrivate:] */

void FUN_105ca3280(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c135d60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105ca33bc; end: 105ca353f;  */

void FUN_105ca33bc(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  
  iVar6 = (int)param_2;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 == 6) && (lVar1 != 0)) {
    puVar2 = PTR_PTR_1126c38e8;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + 0x60;
    _objc_loadWeakRetained(lVar4);
    uVar5 = *(undefined8 *)(lVar1 + 0x150);
    func_0x00010c29a4c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c016e80();
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    func_0x00010c142b00(puVar2);
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    uVar5 = *(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x1a0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5d80();
    _objc_release(uVar5);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar1 + 0x28);
    _objc_retain(uVar8);
    func_0x00010c0f7fe0(0x3fe8000000000000,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar8);
  }
  return;
}



/* Entry: 105ca3540; end: 105ca36e3;  */

void FUN_105ca3540(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1a0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5d80();
    _objc_release(uVar1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010c0f7fe0(0x3fe8000000000000,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 105ca36e4; end: 105ca397b; -[SCGalleryCellActionMenuHelper memoriesCellActionSheet:handleDelete:snap:] */

void FUN_105ca36e4(undefined **param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 != 0) {
    if (param_5 == 0) {
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_78 = param_4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)0x0;
    }
    else {
      lVar1 = param_4;
      func_0x00010010fab4(param_4,PTR_DAT_1126a4ec8);
      lVar4 = param_4;
      if ((int)lVar1 == 0) {
        lVar4 = 0;
      }
      _objc_retain(lVar4);
      lVar1 = param_5;
      func_0x00010b6f8630(param_5,lVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_70 = lVar1;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar1);
      puVar8 = (undefined *)0x0;
    }
    puVar2 = PTR_PTR_1126b2218;
    _objc_alloc(PTR_PTR_1126b2218);
    ppuVar3 = param_1 + 0xc;
    _objc_loadWeakRetained(ppuVar3);
    func_0x00010c016ea0(puVar2);
    _objc_release(ppuVar3);
    puVar9 = param_1[0xe];
    lVar4 = param_4;
    func_0x00010bfbd0e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar9);
    _objc_release(lVar4);
    _objc_initWeak(auStack_80,param_1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105ca397c;
    puStack_98 = &UNK_11084b7a0;
    param_1 = &puStack_b0;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_4);
    lStack_90 = param_4;
    func_0x00010c142b00(puVar2);
    _objc_release(lStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar8);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_1 + 5);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  lVar4 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    uVar6 = *(undefined8 *)(lVar4 + 0x70);
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bfbd0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar6);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105ca397c; end: 105ca39e3;  */

void FUN_105ca397c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x70);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfbd0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,0,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ca39e4; end: 105ca3bdb; -[SCGalleryCellActionMenuHelper memoriesCellActionSheet:handleSend:snap:] */

void FUN_105ca39e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == 0) {
    lVar1 = param_4;
    func_0x00010bfbd100();
    if (lVar1 == 1) {
      _objc_retain(param_4);
      lVar1 = param_4;
      func_0x00010bfbdda0();
      func_0x00010b5fa33c();
      if (lVar1 != 5) {
        lVar1 = param_4;
        func_0x00010c0e0160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar1 == 0) {
          param_1 = param_1 + 0x60;
          _objc_loadWeakRetained(param_1);
          func_0x000108df7438();
          _objc_release(param_1);
          lVar1 = param_4;
          goto LAB_105ca3b84;
        }
      }
      _objc_release(param_4);
    }
    lVar1 = *(long *)(param_1 + 0xc0);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    param_1 = param_1 + 0x60;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10e1c0(lVar1,param_2,puVar2,0,0,uVar3,param_1,0,4,0,0,0,0,0);
    _objc_release(param_1);
  }
  else {
    lVar1 = param_5;
    func_0x00010c0e0160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x60;
      _objc_loadWeakRetained(lVar1);
      func_0x000108df9400();
      goto LAB_105ca3b84;
    }
    lVar1 = *(long *)(param_1 + 0xc0);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    puVar2 = (undefined *)(param_1 + 0x60);
    _objc_loadWeakRetained(puVar2);
    func_0x00010c10e1e0(lVar1,param_2,param_5,uVar3,puVar2,4,0);
  }
  _objc_release(puVar2);
LAB_105ca3b84:
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ca3bdc; end: 105ca3c2f; -[SCGalleryCellActionMenuHelper memoriesCellActionSheet:handleAddSnaps:] */

void FUN_105ca3bdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x1d0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0c7b40();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ca3c30; end: 105ca3d9b; -[SCGalleryCellActionMenuHelper memoriesCellActionSheet:handleHighlight:snap:] */

void FUN_105ca3c30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 unaff_x25;
  
  _objc_retain(param_4);
  if (param_5 == 0) goto LAB_105ca3d7c;
  uVar4 = *(undefined8 *)(param_1 + 0xe8);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2220;
  _objc_alloc(PTR_PTR_1126b2220);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 < 2) {
LAB_105ca3cd0:
    unaff_x25 = 0;
    uVar3 = *(long *)(param_1 + 0x18) - 2;
    if ((uVar3 < 0xc) && ((0x983U >> (ulong)((uint)uVar3 & 0x1f) & 1) != 0)) {
      unaff_x25 = *(undefined8 *)(&UNK_10ddd0238 + uVar3 * 8);
LAB_105ca3d04:
      func_0x00010bafa2a4(unaff_x25);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    if (uVar3 == 2) {
      unaff_x25 = 0xd;
      goto LAB_105ca3d04;
    }
    if (uVar3 == 3) goto LAB_105ca3cd0;
  }
  func_0x00010c04a560(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec3398,
                      &PTR____CFConstantStringClassReference_110e271d8,puVar2,0,0,unaff_x25,0);
  func_0x00010c2728c0(uVar4,param_2,param_5,puVar1,0);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(unaff_x25);
  _objc_release(puVar2);
  _objc_release(uVar4);
LAB_105ca3d7c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ca3d9c; end: 105ca3dd7; -[SCGalleryCellActionMenuHelper memoriesCellActionSheet:handleBackupNow:] */

void FUN_105ca3d9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ca3dd8; end: 105ca3e57; -[SCGalleryCellActionMenuHelper memoriesCellActionSheet:handleRetryBackup:] */

void FUN_105ca3dd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 200);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107e2e9b0(uVar2,param_4,uVar1);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ca3e58; end: 105ca3e8b; -[SCGalleryCellActionMenuHelper memoriesCellActionSheetWillDismiss:] */

void FUN_105ca3e58(long param_1)

{
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1070e0();
  func_0x000108df583c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ca3e8c; end: 105ca3e9b; -[SCGalleryCellActionMenuHelper memoriesCellActionSheetDidDismiss:] */

void FUN_105ca3e8c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ca3e9c; end: 105ca3f07; -[SCGalleryCellActionMenuHelper memoriesCellActionSheet:handleEditStory:fromView:] */

void FUN_105ca3e9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  param_1 = param_1 + 0x1d0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0c7ac0();
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ca3f08; end: 105ca3ff7; -[SCGalleryCellActionMenuHelper memoriesCellActionSheet:handleSaveToStories:fromView:] */

void FUN_105ca3f08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010010fab4(param_4,PTR_DAT_1126a4ec8);
  uVar1 = param_4;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar3 = *(long *)(param_1 + 0x1b8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105ca3ff8;
  puStack_50 = &UNK_110848ba8;
  ppuVar4 = &puStack_68;
  lStack_48 = param_1;
  uStack_40 = uVar1;
  lStack_38 = lVar3;
  _objc_retainBlock();
  if (lVar3 == 0) {
    (*(code *)ppuVar4[2])(ppuVar4);
  }
  else {
    func_0x00010c2a6ae0(lVar3);
  }
  _objc_release(ppuVar4);
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 105ca3ff8; end: 105ca417f;  */

void FUN_105ca3ff8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 unaff_x23;
  undefined1 auVar6 [16];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR_PTR_1126b2220;
  _objc_alloc(PTR_PTR_1126b2220);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
  if (uVar4 < 2) {
LAB_105ca4084:
    unaff_x23 = 0;
    uVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x18) - 2;
    if ((0xb < uVar4) || ((0x983U >> (ulong)((uint)uVar4 & 0x1f) & 1) == 0)) goto LAB_105ca40c8;
    unaff_x23 = *(undefined8 *)(&UNK_10ddd0238 + uVar4 * 8);
  }
  else {
    if (uVar4 != 2) {
      if (uVar4 != 3) goto LAB_105ca40c8;
      goto LAB_105ca4084;
    }
    unaff_x23 = 0xd;
  }
  func_0x00010bafa2a4(unaff_x23);
  _objc_retainAutoreleasedReturnValue();
LAB_105ca40c8:
  func_0x00010c04a560(puVar2,param_2,&PTR____CFConstantStringClassReference_110ec33f8,
                      &PTR____CFConstantStringClassReference_110dba718,puVar3,0,0,unaff_x23,0);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105ca4180;
  puStack_68 = &UNK_1108e3d50;
  auVar6 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x28),*(undefined1 (*) [16])(param_1 + 0x28),8,
                    1);
  uStack_58 = auVar6._8_8_;
  uStack_60 = auVar6._0_8_;
  func_0x00010c14b400(uVar1,param_2,uVar5,0,puVar2,&puStack_80);
  _objc_release(puVar2);
  _objc_release(unaff_x23);
  _objc_release(puVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 105ca4180; end: 105ca418f;  */

void FUN_105ca4180(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7a310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didSaveFeaturedStory_savedStory__1125bc268,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 105ca4190; end: 105ca41e7; -[SCGalleryCellActionMenuHelper memoriesCellActionSheet:handleHideStory:] */

void FUN_105ca4190(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x1b8);
    _objc_retain(param_4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19aea0();
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105ca41e8; end: 105ca434f; -[SCGalleryCellActionMenuHelper memoriesCellActionSheet:handleBoombox:snap:] */

void FUN_105ca41e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  puVar4 = PTR_DAT_1126a4ec8;
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010010fab4(param_4,puVar4);
  uVar5 = param_4;
  if ((int)uVar1 == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar3 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c038f40(puVar2);
  _objc_release(lVar3);
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar6 = *(undefined8 *)(param_1 + 0x148);
  uVar1 = uVar5;
  func_0x00010bf97200(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010c2268e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010c241220(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bf23d00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x140));
  _objc_release(uVar6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ca4350; end: 105ca43c3; -[SCGalleryCellActionMenuHelper memoriesCellActionSheet:didTapItem:fromView:] */

void FUN_105ca4350(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  if (param_4 != 0) {
    _objc_retain(param_5);
    _objc_retain(param_4);
    param_1 = param_1 + 0x1d0;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0c7ae0();
    _objc_release(param_5);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105ca43c4; end: 105ca440b; -[SCGalleryCellActionMenuHelper memoriesCellActionSheetHandleViewSnaps:fromView:] */

void FUN_105ca43c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x1d0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0c7b20();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ca440c; end: 105ca4437; -[SCGalleryCellActionMenuHelper memoriesCellActionSheetHandleRemoveStories:] */

void FUN_105ca440c(long param_1)

{
  param_1 = param_1 + 0x1d0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0c7b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ca4438; end: 105ca447f; -[SCGalleryCellActionMenuHelper memoriesCellActionSheetHandleCreateMashupForStory:item:] */

void FUN_105ca4438(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x1d0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0c7b60();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ca4480; end: 105ca44ab; -[SCGalleryCellActionMenuHelper memoriesCellActionSheetHandleRefetchLatestFeaturedStories:] */

void FUN_105ca4480(long param_1)

{
  param_1 = param_1 + 0x1d0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0c7ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ca44ac; end: 105ca44d7; -[SCGalleryCellActionMenuHelper memoriesCellActionSheetHandleResetAllFeaturedStoriesViewProgress:] */

void FUN_105ca44ac(long param_1)

{
  param_1 = param_1 + 0x1d0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0c7bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ca44d8; end: 105ca451f; -[SCGalleryCellActionMenuHelper memoriesCellActionSheetHandleInspectOriginalSnap:snap:] */

void FUN_105ca44d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x1d0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0c7b80();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ca4520; end: 105ca4607; -[SCGalleryCellActionMenuHelper memoriesCellActionSheetHandleFeaturedStoryDebugInfo:] */

void FUN_105ca4520(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af4d0;
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7380(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = puVar1;
  func_0x00010bfaea20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  puVar3 = puVar2;
  func_0x00010bf529e0(puVar2);
  uVar4 = param_3;
  func_0x00010bf9c1c0(param_3);
  _objc_release(param_3);
  func_0x000108df9fe8(param_1,puVar3,(long)(int)uVar4);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ca4608; end: 105ca4627;  */

bool FUN_105ca4608(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf3d2a0(param_2);
  return (int)param_2 != 0;
}



/* Entry: 105ca4628; end: 105ca4683; -[SCGalleryCellActionMenuHelper memoriesCellActionSheet:isEntryClientCompatibleForItem:] */

long FUN_105ca4628(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  param_1 = param_1 + 0x1d8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0c7be0();
  _objc_release(param_4);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105ca4684; end: 105ca46e7; -[SCGalleryCellActionMenuHelper memoriesCellActionSheet:isSavingFeaturedStory:] */

undefined8 FUN_105ca4684(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x1b8);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c07d260();
  _objc_release(param_4);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105ca46e8; end: 105ca476f; -[SCGalleryCellActionMenuHelper memoriesCellActionSheet:isEntryEligibleForBoombox:] */

undefined8 FUN_105ca46e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 200);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfa7340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010c0bc7a0(uVar1,param_2,&PTR___NSConcreteGlobalBlock_1108e3da0);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 105ca4770; end: 105ca4777;  */

undefined8 FUN_105ca4770(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar1 = param_2;
    func_0x00010c080ca0();
    if (((((uVar1 & 1) == 0) && (uVar1 = param_2, func_0x00010b5fa5d4(), (int)uVar1 != 0)) &&
        ((uVar1 = param_2, func_0x00010b5fa088(), 0xc < uVar1 ||
         (((1L << (uVar1 & 0x3f) & 0x187fU) == 0 && ((1L << (uVar1 & 0x3f) & 0x600U) == 0)))))) &&
       (uVar1 != 9999)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105ca4778; end: 105ca47b7; -[SCGalleryCellActionMenuHelper memoriesCellActionSheetDidHideLegacyAutoSavedStories:] */

long FUN_105ca4778(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x1d8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0c7aa0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105ca47b8; end: 105ca47bb; -[SCGalleryCellActionMenuHelper galleryPreviewControllerWillDismiss:] */

void FUN_105ca47b8(void)

{
  return;
}



/* Entry: 105ca47bc; end: 105ca47c3; -[SCGalleryCellActionMenuHelper galleryPreviewControllerDidDismiss:] */

void FUN_105ca47bc(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 105ca47c4; end: 105ca47cb; -[SCGalleryCellActionMenuHelper galleryPreviewControllerDidCancel:] */

void FUN_105ca47c4(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 105ca47cc; end: 105ca4847; -[SCGalleryCellActionMenuHelper galleryPreviewController:presentingViewController:didFailToLoadContent:] */

void FUN_105ca47cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 0;
    lVar1 = *(long *)(param_1 + 0x170);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf48f60();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      func_0x000108df89f0(param_4);
    }
    else {
      func_0x000108df7438();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ca4848; end: 105ca487b; -[SCGalleryCellActionMenuHelper animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_105ca4848(void)

{
  _objc_alloc(PTR_PTR_1126c3970);
  func_0x00010c04ad40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ca487c; end: 105ca48af; -[SCGalleryCellActionMenuHelper animationControllerForDismissedController:] */

void FUN_105ca487c(void)

{
  _objc_alloc(PTR_PTR_1126c3970);
  func_0x00010c04ad40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ca48b0; end: 105ca495b; -[SCGalleryCellActionMenuHelper spectaclesTransferSession:onTransferUpdate:] */

void FUN_105ca48b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_4 - 3U < 2) {
    func_0x00010bf61080(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c26f500();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000109023e08();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_3);
    lVar3 = *(long *)(param_1 + 0x70);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010bf2dba0(lVar3);
    }
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105ca495c; end: 105ca49cb; -[SCGalleryCellActionMenuHelper spectaclesMemoriesCustomExportScope:didSucceedExporting:cancelled:alertDisplayed:activityType:] */

void FUN_105ca495c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x128));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if ((((param_4 & 1) == 0) && ((param_5 & 1) == 0)) && ((param_6 & 1) == 0)) {
    param_1 = param_1 + 0x60;
    _objc_loadWeakRetained(param_1);
    func_0x000108df7438();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105ca49cc; end: 105ca4a6b; -[SCGalleryCellActionMenuHelper boomboxScopeDidDismiss:] */

void FUN_105ca49cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x140);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  _objc_release();
  if (lVar1 != 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 105ca4a6c; end: 105ca4a8b;  */

void FUN_105ca4a6c(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105ca4a8c; end: 105ca4aa3; -[SCGalleryCellActionMenuHelper delegate] */

void FUN_105ca4a8c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ca4aa4; end: 105ca4abb; -[SCGalleryCellActionMenuHelper dataSource] */

void FUN_105ca4aa4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ca4abc; end: 105ca4d47; -[SCGalleryCellActionMenuHelper .cxx_destruct] */

void FUN_105ca4abc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x1d8);
  _objc_destroyWeak(param_1 + 0x1d0);
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
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_destroyWeak(param_1 + 0x120);
  _objc_destroyWeak(param_1 + 0x118);
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
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 105ca4d48; end: 105ca4dc3; -[SCGalleryFadeAnimator initWithSourceView:presenting:] */

undefined1 *
FUN_105ca4d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ecb48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ca4dc4; end: 105ca4dcf; -[SCGalleryFadeAnimator transitionDuration:] */

undefined8 FUN_105ca4dc4(void)

{
  return 0x3fd3333333333333;
}



/* Entry: 105ca4dd0; end: 105ca4de3; -[SCGalleryFadeAnimator animateTransition:] */

void FUN_105ca4dd0(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be79d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__present__11257c0e0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be02290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismiss__11255e240);
  return;
}



/* Entry: 105ca4de4; end: 105ca5057; -[SCGalleryFadeAnimator _present:] */

void FUN_105ca4de4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar3);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7c80(puVar5,param_2,lVar3,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  func_0x00010c182220(puVar2,param_2,2);
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar6 = lVar3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb68e0();
  func_0x00010bf51460(lVar6,param_2,uVar1);
  func_0x00010c19f0e0(puVar2);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar3);
  func_0x00010befbb60(uVar1,param_2,puVar2);
  uVar7 = param_3;
  func_0x00010c29ce60(param_3,param_2,*(undefined8 *)PTR__UITransitionContextToViewKey_110345e60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(uVar1);
  func_0x00010c19f0e0(uVar7);
  func_0x00010c1677c0(0,uVar7);
  func_0x00010befbb60(uVar1,param_2,uVar7);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105ca5058;
  puStack_78 = &UNK_110841f80;
  _objc_retain(puVar2);
  puStack_c0 = puVar5;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x105ca5098;
  puStack_a8 = &UNK_110848bd8;
  puStack_a0 = puVar2;
  uStack_98 = param_3;
  puStack_70 = puVar2;
  uStack_68 = uVar7;
  _objc_retain(param_3);
  _objc_retain(puVar2);
  _objc_retain(uVar7);
  func_0x00010bf03420(0x3fd3333333333333,puVar4,param_2,&puStack_90,&puStack_c0);
  _objc_release(uStack_98);
  _objc_release(puStack_a0);
  _objc_release(uStack_68);
  _objc_release(puStack_70);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(uVar1);
  return;
}



/* Entry: 105ca5058; end: 105ca50cf;  */

/* WARNING: Possible PIC construction at 0x000105ca5080: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105ca5084) */

void FUN_105ca5058(long param_1)

{
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105ca50d0; end: 105ca530f; -[SCGalleryFadeAnimator _dismiss:] */

void FUN_105ca50d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  _objc_retain(param_7);
  uVar3 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_7;
  func_0x00010c29c220(param_7,param_6,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(uVar3);
  func_0x00010c19f0e0(uVar5);
  func_0x00010befbb60(uVar3,param_6,uVar5);
  uVar6 = param_7;
  func_0x00010c29ce60(param_7,param_6,*(undefined8 *)PTR__UITransitionContextFromViewKey_110345e50);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c245f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  func_0x00010befbb60(uVar3,param_6,uVar7);
  lVar8 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  param_5 = param_5 + 0x10;
  _objc_loadWeakRetained(param_5);
  func_0x00010bfb68e0();
  func_0x00010bf51460(lVar9,param_6,uVar3);
  _objc_release(param_5);
  _objc_release(lVar9);
  _objc_release(lVar8);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_105ca5310;
  puStack_c0 = &UNK_110870f70;
  _objc_retain(uVar7);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x105ca5344;
  puStack_f0 = &UNK_110848bd8;
  uStack_e8 = uVar7;
  uStack_e0 = param_7;
  uStack_b8 = uVar7;
  uStack_b0 = param_1;
  uStack_a8 = param_2;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  _objc_retain(param_7);
  _objc_retain(uVar7);
  func_0x00010bf03420(0x3fd3333333333333,puVar2,param_6,&puStack_d8,&puStack_108);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_b8);
  _objc_release(param_7);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 105ca5310; end: 105ca537b;  */

void FUN_105ca5310(long param_1)

{
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105ca537c; end: 105ca5383; -[SCGalleryFadeAnimator .cxx_destruct] */

void FUN_105ca537c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 105ca5384; end: 105ca6087; -[SCMemoriesActionMenuEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca5384(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  undefined8 uVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if (param_1 == 0) {
    lVar79 = 0;
  }
  else {
    lVar79 = param_1 + _DAT_1127335a0;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar79;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar79);
  if (param_1 == 0) {
    lVar79 = 0;
  }
  else {
    lVar79 = param_1 + _DAT_1127335cc;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar79;
  func_0x00010c0869e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar79);
  puVar3 = PTR_PTR_1126c3978;
  _objc_alloc();
  lVar79 = param_1;
  FUN_105ca6088();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar79;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_105ca6088();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x000105ca60ac();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar55 = 0;
  }
  else {
    lVar55 = param_1 + _DAT_11273359c;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar55;
  func_0x00010c0c97a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0c97e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_a0 = 0;
    uStack_98 = 0;
    lVar56 = 0;
  }
  else {
    uStack_98 = *(undefined8 *)(param_1 + _DAT_1127335f0);
    _objc_retain();
    uStack_a0 = param_1 + _DAT_1127335f4;
    _objc_loadWeakRetained();
    lVar56 = param_1 + _DAT_1127335ac;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar56;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    lVar57 = 0;
  }
  else {
    uStack_b0 = *(undefined8 *)(param_1 + _DAT_1127335f8);
    _objc_retain();
    uStack_b8 = param_1 + _DAT_1127335fc;
    _objc_loadWeakRetained();
    uStack_c0 = param_1 + _DAT_1127335b4;
    _objc_loadWeakRetained();
    lVar57 = param_1 + _DAT_11273357c;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar57;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar58 = 0;
  }
  else {
    lVar58 = param_1 + _DAT_1127335a4;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar58;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar59 = 0;
  }
  else {
    lVar59 = param_1 + _DAT_1127335d0;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar59;
  func_0x00010bf3e340();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar60 = 0;
  }
  else {
    lVar60 = param_1 + _DAT_1127335c8;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar60;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar61 = 0;
  }
  else {
    lVar61 = param_1 + _DAT_1127335a8;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar61;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar62 = 0;
  }
  else {
    lVar62 = param_1 + _DAT_1127335b8;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar62;
  func_0x00010c112160();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar63 = 0;
  }
  else {
    lVar63 = param_1 + _DAT_112733580;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar63;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar64 = 0;
  }
  else {
    lVar64 = param_1 + _DAT_112733584;
    _objc_loadWeakRetained();
  }
  lVar20 = lVar64;
  func_0x00010c0c7d00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010bef14a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar65 = 0;
  }
  else {
    lVar65 = param_1 + _DAT_11273358c;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar65;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_112733590;
    _objc_loadWeakRetained();
  }
  lVar23 = lVar66;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x000105ca60d0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c15a860();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x000105ca60d0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c0c57a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar67 = 0;
  }
  else {
    lVar67 = param_1 + _DAT_112733598;
    _objc_loadWeakRetained();
  }
  lVar28 = lVar67;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar68 = 0;
  }
  else {
    lVar68 = param_1 + _DAT_1127335bc;
    _objc_loadWeakRetained();
  }
  lVar29 = lVar68;
  func_0x00010c0c93c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar69 = 0;
  }
  else {
    lVar69 = param_1 + _DAT_1127335b0;
    _objc_loadWeakRetained();
  }
  lVar30 = lVar69;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar70 = 0;
  }
  else {
    lVar70 = param_1 + _DAT_1127335c4;
    _objc_loadWeakRetained();
  }
  lVar31 = lVar70;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar71 = 0;
  }
  else {
    lVar71 = param_1 + _DAT_1127335dc;
    _objc_loadWeakRetained();
  }
  lVar32 = lVar71;
  func_0x00010c0c8b40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar72 = 0;
  }
  else {
    lVar72 = param_1 + _DAT_1127335e8;
    _objc_loadWeakRetained();
  }
  lVar33 = lVar72;
  func_0x00010c0c8a20();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1;
  func_0x000105ca60f4();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar34;
  func_0x00010bf8c440();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1;
  func_0x000105ca60f4();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010bfe3220();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1;
  func_0x000105ca60f4();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = lVar38;
  func_0x00010c0ca9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1;
  func_0x000105ca60f4();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = lVar40;
  func_0x00010bfa10c0();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1;
  func_0x000105ca60f4();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar42;
  func_0x00010c13f8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1;
  func_0x000105ca60f4();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = lVar44;
  func_0x00010bf6d080();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1;
  func_0x000105ca60f4();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = lVar46;
  func_0x00010befb6a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar73 = 0;
  }
  else {
    lVar73 = param_1 + _DAT_1127335d4;
    _objc_loadWeakRetained();
  }
  lVar48 = lVar73;
  func_0x00010bf97800();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar74 = 0;
  }
  else {
    lVar74 = param_1 + _DAT_1127335d8;
    _objc_loadWeakRetained();
  }
  lVar49 = lVar74;
  func_0x00010c2436a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uVar50 = 0;
    uVar78 = 0;
    lVar75 = 0;
  }
  else {
    uVar78 = *(undefined8 *)(param_1 + _DAT_112733600);
    _objc_retain(uVar78);
    uVar50 = *(undefined8 *)(param_1 + _DAT_112733604);
    _objc_retain();
    lVar75 = param_1 + _DAT_1127335e0;
    _objc_loadWeakRetained();
  }
  lVar51 = lVar75;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar76 = 0;
  }
  else {
    lVar76 = param_1 + _DAT_1127335e4;
    _objc_loadWeakRetained();
  }
  lVar52 = lVar76;
  func_0x00010c23ffe0();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1;
  func_0x000105ca60ac();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = lVar53;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar80 = 0;
  }
  else {
    lVar80 = param_1 + _DAT_1127335ec;
    _objc_loadWeakRetained();
  }
  func_0x00010c008ea0(puVar3,param_2,lVar4,lVar6,lVar7,lVar9,lVar11,uStack_98,uStack_a0,lVar12,
                      uStack_b0,uStack_b8,uStack_c0,lVar13,lVar14,lVar15,lVar16,lVar17,lVar18,lVar19
                      ,lVar21,lVar22,lVar23,lVar25,lVar27,lVar28,lVar29,lVar30,lVar31,lVar2,lVar32,
                      lVar33,lVar35,lVar37,lVar39,lVar41,lVar43,lVar45,lVar47,lVar48,lVar49,uVar78,
                      uVar50,lVar51,lVar52,lVar54,lVar80);
  lVar81 = (long)_DAT_112733574;
  uVar77 = *(undefined8 *)(param_1 + lVar81);
  *(undefined **)(param_1 + lVar81) = puVar3;
  _objc_release(uVar77);
  _objc_release(uVar50);
  _objc_release(lVar80);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar76);
  _objc_release(lVar51);
  _objc_release(lVar75);
  _objc_release(uVar78);
  _objc_release(lVar49);
  _objc_release(lVar74);
  _objc_release(lVar48);
  _objc_release(lVar73);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar72);
  _objc_release(lVar32);
  _objc_release(lVar71);
  _objc_release(lVar31);
  _objc_release(lVar70);
  _objc_release(lVar30);
  _objc_release(lVar69);
  _objc_release(lVar29);
  _objc_release(lVar68);
  _objc_release(lVar28);
  _objc_release(lVar67);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar66);
  _objc_release(lVar22);
  _objc_release(lVar65);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar64);
  _objc_release(lVar19);
  _objc_release(lVar63);
  _objc_release(lVar18);
  _objc_release(lVar62);
  _objc_release(lVar17);
  _objc_release(lVar61);
  _objc_release(lVar16);
  _objc_release(lVar60);
  _objc_release(lVar15);
  _objc_release(lVar59);
  _objc_release(lVar14);
  _objc_release(lVar58);
  _objc_release(lVar13);
  _objc_release(lVar57);
  _objc_release(uStack_c0);
  _objc_release(uStack_b8);
  _objc_release(uStack_b0);
  _objc_release(lVar12);
  _objc_release(lVar56);
  _objc_release(uStack_a0);
  _objc_release(uStack_98);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar55);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar79);
  uVar50 = *(undefined8 *)(param_1 + lVar81);
  lVar79 = param_1;
  FUN_105ca6088(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar79;
  func_0x00010c27dd80();
  func_0x00010c21acc0(uVar50,param_2,lVar4);
  _objc_release(lVar79);
  uVar50 = *(undefined8 *)(param_1 + lVar81);
  lVar79 = param_1;
  FUN_105ca6088(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar79;
  func_0x00010c25e900();
  func_0x00010c20ef20(uVar50,param_2,lVar4);
  _objc_release(lVar79);
  uVar50 = *(undefined8 *)(param_1 + lVar81);
  lVar79 = param_1;
  FUN_105ca6088(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar79;
  func_0x00010c267c60();
  func_0x00010c1c6660(uVar50,param_2,lVar4);
  _objc_release(lVar79);
  uVar50 = *(undefined8 *)(param_1 + lVar81);
  lVar8 = param_1;
  FUN_105ca6088();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010beeea40();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = param_1;
  FUN_105ca6088();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar55;
  func_0x00010c2479e0();
  lVar7 = param_1;
  FUN_105ca6088();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar7;
  func_0x00010c247e40();
  _objc_retainAutoreleasedReturnValue();
  lVar79 = param_1;
  FUN_105ca6088(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar79;
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  FUN_105ca6088(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c234360();
  func_0x00010c10aee0(uVar50,param_2,lVar9,lVar10,lVar5,lVar4,lVar6);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar79);
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar55);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ca6088; end: 105ca6117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca6088(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112733578);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ca6118; end: 105ca6307; -[SCMemoriesActionMenuEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca6118(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112733604,0);
  _objc_storeStrong(param_1 + _DAT_112733600,0);
  _objc_destroyWeak(param_1 + _DAT_1127335fc);
  _objc_storeStrong(param_1 + _DAT_1127335f8,0);
  _objc_destroyWeak(param_1 + _DAT_1127335f4);
  _objc_storeStrong(param_1 + _DAT_1127335f0,0);
  _objc_destroyWeak(param_1 + _DAT_1127335ec);
  _objc_destroyWeak(param_1 + _DAT_1127335e8);
  _objc_destroyWeak(param_1 + _DAT_1127335e4);
  _objc_destroyWeak(param_1 + _DAT_1127335e0);
  _objc_destroyWeak(param_1 + _DAT_1127335dc);
  _objc_destroyWeak(param_1 + _DAT_1127335d8);
  _objc_destroyWeak(param_1 + _DAT_1127335d4);
  _objc_destroyWeak(param_1 + _DAT_1127335d0);
  _objc_destroyWeak(param_1 + _DAT_1127335cc);
  _objc_destroyWeak(param_1 + _DAT_1127335c8);
  _objc_destroyWeak(param_1 + _DAT_1127335c4);
  _objc_destroyWeak(param_1 + _DAT_1127335c0);
  _objc_destroyWeak(param_1 + _DAT_1127335bc);
  _objc_destroyWeak(param_1 + _DAT_1127335b8);
  _objc_destroyWeak(param_1 + _DAT_1127335b4);
  _objc_destroyWeak(param_1 + _DAT_1127335b0);
  _objc_destroyWeak(param_1 + _DAT_1127335ac);
  _objc_destroyWeak(param_1 + _DAT_1127335a8);
  _objc_destroyWeak(param_1 + _DAT_1127335a4);
  _objc_destroyWeak(param_1 + _DAT_1127335a0);
  _objc_destroyWeak(param_1 + _DAT_11273359c);
  _objc_destroyWeak(param_1 + _DAT_112733598);
  _objc_destroyWeak(param_1 + _DAT_112733594);
  _objc_destroyWeak(param_1 + _DAT_112733590);
  _objc_destroyWeak(param_1 + _DAT_11273358c);
  _objc_destroyWeak(param_1 + _DAT_112733588);
  _objc_destroyWeak(param_1 + _DAT_112733584);
  _objc_destroyWeak(param_1 + _DAT_112733580);
  _objc_destroyWeak(param_1 + _DAT_11273357c);
  _objc_destroyWeak(param_1 + _DAT_112733578);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112733574,0);
  return;
}



/* Entry: 105ca6308; end: 105ca63c3; -[SCMemoriesActionMenuScopedMemoriesActivityServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca6308(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c3980;
  _objc_alloc(PTR_PTR_1126c3980);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11273360c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0c7cc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0b73e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02a320(puVar1,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ca63c4; end: 105ca63fb; -[SCMemoriesActionMenuScopedMemoriesActivityServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca63c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273360c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112733608);
  return;
}



/* Entry: 105ca63fc; end: 105ca64b7; -[SCMemoriesActionMenuScopedMemoriesSendServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca63fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c3988;
  _objc_alloc(PTR_PTR_1126c3988);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112733614;
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



/* Entry: 105ca64b8; end: 105ca64ef; -[SCMemoriesActionMenuScopedMemoriesSendServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca64b8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112733614);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112733610);
  return;
}



/* Entry: 105ca64f0; end: 105ca692b; -[SCMemoriesActionSheet initWithActionSheetDataModels:memoriesMergedDataSource:memoriesEntryThumbnailGeneratorBuilder:cloudSync:actionMenuType:actionMenuSubType:dataProvider:sourceView:circumstanceEngine:isFeaturedStorySaved:dataObjectContext:shouldShowSpinner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105ca64f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined1 param_15)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  puStack_68 = PTR_PTR_1126ecb50;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFrame__1125e2948);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar2 + (long)_DAT_112733618);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112733618) = uVar3;
    _objc_release(uVar9);
    uVar3 = param_3;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273361c);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11273361c) = uVar3;
    _objc_release(uVar9);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112733620) = param_7;
    *(undefined8 *)((long)puVar2 + (long)_DAT_112733624) = param_8;
    _objc_storeWeak((long)puVar2 + (long)_DAT_112733628,param_9);
    lVar10 = (long)_DAT_11273362c;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar10);
    *(undefined8 *)((long)puVar2 + lVar10) = param_10;
    _objc_release(uVar3);
    lVar10 = (long)_DAT_112733630;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar10);
    *(undefined8 *)((long)puVar2 + lVar10) = param_4;
    _objc_release(uVar3);
    lVar10 = (long)_DAT_112733634;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar10);
    *(undefined8 *)((long)puVar2 + lVar10) = param_6;
    _objc_release(uVar3);
    lVar10 = (long)_DAT_112733638;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar10);
    *(undefined8 *)((long)puVar2 + lVar10) = param_5;
    _objc_release(uVar3);
    lVar10 = (long)_DAT_11273363c;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar10);
    *(undefined8 *)((long)puVar2 + lVar10) = param_11;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112733640) = param_12;
    lVar10 = (long)_DAT_112733644;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar10);
    *(undefined8 *)((long)puVar2 + lVar10) = param_14;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112733648) = param_15;
    puVar1 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273364c);
    *(undefined **)((long)puVar2 + (long)_DAT_11273364c) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar4);
    puVar1 = PTR_PTR_1126b10a0;
    ppuVar5 = &PTR____CFConstantStringClassReference_110dbb618;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb42c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c269d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(ppuVar5);
    puVar1 = PTR_PTR_1126b10a8;
    _objc_alloc();
    puVar6 = puVar2;
    func_0x00010be34c20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010be5f5e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf51e00();
    func_0x00010c019f40();
    lVar10 = (long)_DAT_112733650;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar10);
    *(undefined **)((long)puVar2 + lVar10) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar10));
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar1);
    func_0x00010c160fc0(puVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105ca692c; end: 105ca6a47; -[SCMemoriesActionSheet _headerCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca692c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x00010beb3f40(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112733620));
  if ((int)lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126c3990;
    _objc_alloc();
    func_0x00010c010520();
    lVar4 = (long)_DAT_112733654;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    lVar1 = param_1;
    func_0x00010be0a9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196760(uVar3,param_2,lVar1);
    _objc_release(lVar1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105ca6a48;
    puStack_50 = &UNK_110842e18;
    lStack_48 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + _DAT_11273364c),param_2,&puStack_68);
    func_0x00010c269d60(*(undefined8 *)(param_1 + lVar4),param_2,param_1,
                        PTR_s__headerTapped__11252cec0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    _objc_retain(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105ca6a48; end: 105ca6bbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca6a48(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be0a9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf977c0();
  _objc_release(uVar1);
  if (0x13 < (int)uVar3 - 0x13U) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112733630);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be0a9c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf52e00();
    _objc_release(uVar3);
    _objc_release(lVar2);
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar4 != 1) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e27218;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e27218,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      goto LAB_105ca6b50;
    }
  }
  ppuVar6 = &PTR____CFConstantStringClassReference_110e271f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e271f8,0);
  _objc_retainAutoreleasedReturnValue();
LAB_105ca6b50:
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ca6bc0;
  puStack_48 = &UNK_110841f80;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_38 = ppuVar6;
  _objc_retain(ppuVar6);
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(ppuStack_38);
  _objc_release(ppuVar6);
  return;
}



/* Entry: 105ca6bc0; end: 105ca6c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca6bc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x00010c04e820();
  func_0x00010c16b660(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112733654),param_2,
                      puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ca6c10; end: 105ca6c87; -[SCMemoriesActionSheet _shouldHaveHeaderCell:] */

uint FUN_105ca6c10(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bf7e0;
  _objc_opt_class(PTR_PTR_1126bf7e0);
  lVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  _objc_release(param_1);
  return (uint)((param_3 & 0xfffffffffffffffe) != 2) & ((uint)lVar2 ^ 1 | (uint)(param_1 == 0));
}



/* Entry: 105ca6c88; end: 105ca6d27; -[SCMemoriesActionSheet _dismissActionSheetAndPresentOperaFromSourceView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca6c88(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112733658;
  uVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c0c80a0();
    _objc_release(lVar3);
  }
  param_1 = param_1 + lVar4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0c82e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ca6d28; end: 105ca6e0b; -[SCMemoriesActionSheet _headerTapped:] */

void FUN_105ca6d28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010beeee80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf83000(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105ca6e0c; end: 105ca6e37;  */

void FUN_105ca6e0c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ca6e38; end: 105ca6eaf; -[SCMemoriesActionSheet presentInViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca6e38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126affa8;
  _objc_retain(param_3);
  func_0x00010c22bc20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  func_0x00010c10af80(param_3,param_2,*(undefined8 *)(param_1 + _DAT_112733650),0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ca6eb0; end: 105ca6eb3; -[SCMemoriesActionSheet _applicationDidEnterBackground] */

void FUN_105ca6eb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismiss_1125be578);
  return;
}



/* Entry: 105ca6eb4; end: 105ca6f63; -[SCMemoriesActionSheet dismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca6eb4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112733650);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf83000(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105ca6f64; end: 105ca6fb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca6f64(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112733658;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0c82e0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ca6fb4; end: 105ca6fb7; -[SCMemoriesActionSheet _entry] */

void FUN_105ca6fb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0840f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_item_1125fea48);
  return;
}



/* Entry: 105ca6fb8; end: 105ca704f; -[SCMemoriesActionSheet _menuItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca6fb8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112733620);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      func_0x00010be5f620(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (lVar1 == 1) {
      func_0x00010be5f600(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (lVar1 == 2) {
    func_0x00010be5f640(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar1 == 3) {
    func_0x00010be5f660(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ca7050; end: 105ca71c3; -[SCMemoriesActionSheet _convertToSIGActionSheetCells:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca7050(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
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
  _objc_retain(param_7);
  lVar7 = (long)_DAT_11273365c;
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_5 + lVar7);
  *(long *)(param_5 + lVar7) = param_7;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_7);
  lVar7 = param_7;
  func_0x00010bf52a60(param_7,param_6,&uStack_120,auStack_d8,0x10);
  if (lVar7 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_7);
        }
        uVar1 = *(undefined8 *)(lStack_118 + lVar9 * 8);
        func_0x00010c18b5e0(uVar1,param_6,param_5);
        func_0x00010beeeee0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_6,uVar1);
        _objc_release(uVar1);
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
      lVar7 = param_7;
      func_0x00010bf52a60(param_7,param_6,&uStack_120,auStack_d8,0x10);
    } while (lVar7 != 0);
  }
  _objc_release(param_7);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126b10a0;
    _objc_alloc(PTR_PTR_1126b10a0);
    func_0x00010c04ea80();
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    dVar12 = param_3;
    _objc_release(puVar3);
    param_3 = param_3 + -52.0;
    uVar11 = 0x4020000000000000;
    func_0x00010bf20c00(puVar2);
    func_0x00010bc85050();
    dVar10 = param_3;
    uVar1 = uVar11;
    dVar13 = dVar12;
    uVar14 = param_4;
    func_0x00010bf20c00(puVar2);
    func_0x00010bc85050();
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(param_3,uVar11,dVar12,param_4);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3,param_6,puVar4);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010bc851d4(dVar10,uVar1,dVar13,uVar14,0x4020000000000000);
    func_0x00010c013de0(puVar4);
    puVar5 = puVar4;
    func_0x000108dfda04();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar4,param_6,puVar5);
    _objc_release(puVar5);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar4,param_6,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x81);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar4,param_6,puVar5);
    _objc_release(puVar5);
    func_0x00010c1cfce0(puVar4,param_6,0);
    func_0x00010c1bdb00(puVar4,param_6,0);
    func_0x00010befbb60(puVar3,param_6,puVar4);
    func_0x00010c1b9fe0(puVar2,param_6,puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ca71c4; end: 105ca73fb; -[SCMemoriesActionSheet _legacyAutoSavedMyStoryHeaderCell] */

void FUN_105ca71c4(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_PTR_1126b10a0;
  _objc_alloc(PTR_PTR_1126b10a0);
  func_0x00010c04ea80();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  dVar9 = param_3;
  _objc_release(puVar2);
  param_3 = param_3 + -52.0;
  uVar7 = 0x4020000000000000;
  func_0x00010bf20c00(puVar1);
  func_0x00010bc85050();
  dVar6 = param_3;
  uVar8 = uVar7;
  dVar10 = dVar9;
  uVar11 = param_4;
  func_0x00010bf20c00(puVar1);
  func_0x00010bc85050();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(param_3,uVar7,dVar9,param_4);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2,param_6,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010bc851d4(dVar6,uVar8,dVar10,uVar11,0x4020000000000000);
  func_0x00010c013de0(puVar3);
  puVar4 = puVar3;
  func_0x000108dfda04();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar3,param_6,puVar4);
  _objc_release(puVar4);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar3,param_6,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x81);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar3,param_6,puVar4);
  _objc_release(puVar4);
  func_0x00010c1cfce0(puVar3,param_6,0);
  func_0x00010c1bdb00(puVar3,param_6,0);
  func_0x00010befbb60(puVar2,param_6,puVar3);
  func_0x00010c1b9fe0(puVar1,param_6,puVar2);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ca73fc; end: 105ca7683; -[SCMemoriesActionSheet _menuItemsForFeaturedStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca73fc(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf7e0;
  _objc_opt_class(PTR_PTR_1126bf7e0);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  if ((puVar2 == (undefined *)0x0) || (func_0x00010c0c7f80(), (undefined *)0xc < puVar1)) {
    puVar1 = param_1;
    func_0x00010bf64080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010be0a9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c82c0();
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c39a0;
    puVar3 = param_1;
    func_0x00010be0a9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010be0a9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf977c0();
    func_0x00010beeef40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde96a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3);
    _objc_release(param_1);
  }
  else {
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if ((1L << ((ulong)puVar1 & 0x3f) & 0x1fc1U) != 0) goto LAB_105ca7644;
    puVar3 = PTR_PTR_1126c3998;
    func_0x00010c084f60();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010bde96a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
  }
  _objc_release(puVar1);
LAB_105ca7644:
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126c39a0;
    puVar3 = puVar2;
    func_0x00010be0a9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beeef80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010bde96a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar3 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ca7684; end: 105ca7703; -[SCMemoriesActionSheet _menuItemsForStoryEditor] */

void FUN_105ca7684(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c39a0;
  uVar1 = param_1;
  func_0x00010be0a9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeef80(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bde96a0(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}


