/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e93128; end: 107e9350b; -[IGListAdapter _offsetRangeForIndexPath:supplementaryKinds:scrollDirection:] */

undefined1  [16]
FUN_107e93128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined8 param_6,long param_7,undefined *param_8,long param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double unaff_d10;
  double unaff_d11;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  undefined1 *puStack_320;
  undefined1 auStack_318 [8];
  undefined1 uStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  long lStack_2c0;
  undefined1 auStack_2b8 [8];
  undefined1 auStack_2b0 [16];
  double dStack_2a0;
  double dStack_298;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1a8 [256];
  long lStack_a8;
  
  uVar10 = SUB81(&uStack_230,0);
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c1554e0();
  puVar1 = param_5;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0deec0();
  _objc_release(puVar1);
  if ((long)puVar2 < 1) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    _objc_retain(param_8);
    puVar2 = param_8;
    func_0x00010bf52a60();
    puVar14 = param_8;
    if (puVar2 != (undefined *)0x0) {
      lVar13 = *plStack_1e0;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_1e0 != lVar13) {
            _objc_enumerationMutation(param_8);
          }
          puVar3 = param_5;
          func_0x00010be48d20();
          _objc_retainAutoreleasedReturnValue();
          if (puVar3 != (undefined *)0x0) {
            func_0x00010befa120(puVar1);
          }
          _objc_release(puVar3);
          puVar12 = puVar12 + 1;
        } while (puVar2 != puVar12);
        puVar2 = param_8;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
  }
  else {
    puVar14 = param_5;
    func_0x00010be48cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar14;
    func_0x00010c0d3c80();
    _objc_release(puVar14);
    if (puVar2 == (undefined *)0x1) goto LAB_107e93334;
    puVar14 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be48cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    if (puVar2 != (undefined *)0x0) {
      func_0x00010befa120(puVar1);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar14);
LAB_107e93334:
  dVar15 = 0.0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  _objc_retain(puVar1);
  puVar11 = auStack_1a8;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 == (undefined *)0x0) {
    dVar16 = 0.0;
    dVar18 = 0.0;
  }
  else {
    lVar13 = *plStack_220;
    dVar16 = 0.0;
    dVar18 = 0.0;
    do {
      puVar14 = (undefined *)0x0;
      dVar17 = dVar16;
      dVar19 = dVar18;
      do {
        if (*plStack_220 != lVar13) {
          _objc_enumerationMutation(puVar1);
        }
        puVar12 = *(undefined **)(lStack_228 + (long)puVar14 * 8);
        func_0x00010bfb68e0(puVar12);
        if (param_9 == 0) {
          unaff_d10 = dVar15;
          _CGRectGetMinY(dVar15,param_2,param_3,param_4);
          _CGRectGetMaxY();
          unaff_d11 = dVar15;
        }
        else if (param_9 == 1) {
          unaff_d10 = dVar15;
          _CGRectGetMinX(dVar15,param_2,param_3,param_4);
          _CGRectGetMaxX();
          unaff_d11 = dVar15;
        }
        puVar3 = puVar1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        dVar18 = unaff_d10;
        if (dVar19 <= unaff_d10 && puVar12 != puVar3) {
          dVar18 = dVar19;
        }
        puVar3 = puVar1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        dVar16 = unaff_d11;
        if (unaff_d11 <= dVar17 && puVar12 != puVar3) {
          dVar16 = dVar17;
        }
        puVar14 = puVar14 + 1;
        dVar17 = dVar16;
        dVar19 = dVar18;
      } while (puVar2 != puVar14);
      puVar11 = auStack_1a8;
      puVar2 = puVar1;
      uVar10 = (char)&uStack_230;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    auVar20._8_8_ = dVar16;
    auVar20._0_8_ = dVar18;
    return auVar20;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_340;
  dStack_2a0 = dVar18;
  dStack_298 = dVar16;
  _objc_retain(puVar11);
  lVar13 = param_7;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_7;
  func_0x00010c28d720(param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_7;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar13 == 0) || (lVar5 == 0)) {
    puVar9 = puVar11;
    _objc_retainBlock();
    if (puVar9 != (undefined1 *)0x0) {
      (**(code **)(puVar9 + 0x10))(puVar9,0);
    }
    _objc_release(puVar9);
  }
  else {
    func_0x00010be0a7c0(param_7);
    _objc_initWeak(auStack_2b0,param_7);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_2e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2d8 = 0xc2000000;
    pcStack_2d0 = FUN_107e9379c;
    puStack_2c8 = &UNK_110a106d8;
    _objc_copyWeak(auStack_2b8,auStack_2b0);
    _objc_retain(lVar13);
    ppuVar6 = &puStack_2e0;
    lStack_2c0 = lVar13;
    _objc_retainBlock(ppuVar6);
    puStack_308 = puVar1;
    uStack_300 = 0xc2000000;
    uStack_2f8 = 0x107e93838;
    puStack_2f0 = &UNK_110a10708;
    _objc_copyWeak(auStack_2e8,auStack_2b0);
    ppuVar7 = &puStack_308;
    _objc_retainBlock(ppuVar7);
    puStack_340 = puVar1;
    uStack_338 = 0xc2000000;
    uStack_330 = 0x107e938c8;
    puStack_328 = &UNK_1108d0448;
    _objc_copyWeak(auStack_318,auStack_2b0);
    _objc_retain(puVar11);
    puStack_320 = puVar11;
    uStack_310 = uVar10;
    _objc_retainBlock(&puStack_340);
    func_0x00010bde1dc0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f9220(lVar4);
    _objc_release(param_7);
    _objc_release(ppuVar8);
    _objc_release(puStack_320);
    _objc_destroyWeak(auStack_318);
    _objc_release(ppuVar7);
    _objc_destroyWeak(auStack_2e8);
    _objc_release(ppuVar6);
    _objc_release(lStack_2c0);
    _objc_destroyWeak(auStack_2b8);
    _objc_destroyWeak(auStack_2b0);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar13);
  _objc_release(puVar11);
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = dVar15;
  return auVar21;
}



/* Entry: 107e9350c; end: 107e9379b; -[IGListAdapter performUpdatesAnimated:completion:] */

void FUN_107e9350c(long param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  ppuVar7 = &puStack_110;
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c28d720(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) || (lVar4 == 0)) {
    lVar8 = param_4;
    _objc_retainBlock();
    if (lVar8 != 0) {
      (**(code **)(lVar8 + 0x10))(lVar8,0);
    }
    _objc_release(lVar8);
  }
  else {
    func_0x00010be0a7c0(param_1);
    _objc_initWeak(auStack_80,param_1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_107e9379c;
    puStack_98 = &UNK_110a106d8;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(lVar2);
    ppuVar5 = &puStack_b0;
    lStack_90 = lVar2;
    _objc_retainBlock(ppuVar5);
    puStack_d8 = puVar1;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x107e93838;
    puStack_c0 = &UNK_110a10708;
    _objc_copyWeak(auStack_b8,auStack_80);
    ppuVar6 = &puStack_d8;
    _objc_retainBlock(ppuVar6);
    puStack_110 = puVar1;
    uStack_108 = 0xc2000000;
    uStack_100 = 0x107e938c8;
    puStack_f8 = &UNK_1108d0448;
    _objc_copyWeak(auStack_e8,auStack_80);
    _objc_retain(param_4);
    lStack_f0 = param_4;
    uStack_e0 = param_3;
    _objc_retainBlock(&puStack_110);
    func_0x00010bde1dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f9220(lVar3);
    _objc_release(param_1);
    _objc_release(ppuVar7);
    _objc_release(lStack_f0);
    _objc_destroyWeak(auStack_e8);
    _objc_release(ppuVar6);
    _objc_destroyWeak(auStack_b8);
    _objc_release(ppuVar5);
    _objc_release(lStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 107e9379c; end: 107e9399b;  */

void FUN_107e9379c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e0360(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_107e929f8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar4 = lVar1;
    func_0x00010be1c3e0(lVar1,param_2,uVar3,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107e9399c; end: 107e93bc3; -[IGListAdapter reloadDataWithCompletion:] */

void FUN_107e9399c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (lVar2 == 0)) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
  }
  else {
    lVar3 = lVar1;
    func_0x00010c0e0360();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107e929f8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_initWeak(auStack_68,param_1);
    lVar3 = param_1;
    func_0x00010c28d720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde1dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_107e93bc4;
    puStack_88 = &UNK_110848218;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(lVar4);
    lStack_80 = lVar4;
    _objc_retain(lVar1);
    lStack_78 = lVar1;
    _objc_copyWeak(auStack_a8,auStack_68);
    _objc_retain(param_3);
    func_0x00010c128bc0(lVar3);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_a8);
    _objc_release(lStack_78);
    _objc_release(lStack_80);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107e93bc4; end: 107e93c97;  */

void FUN_107e93bc4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c156300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedc500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e93c98; end: 107e93e63; -[IGListAdapter reloadObjects:] */

void FUN_107e93c98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010be9cf00(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107e93db0;
  puStack_48 = &UNK_110958ad8;
  uStack_40 = uVar2;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(uVar2);
  func_0x00010bf97e80(param_3,param_2,&puStack_60);
  _objc_release(param_3);
  uVar3 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b00();
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(puStack_38);
  _objc_release(uStack_40);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e93e64; end: 107e93e6b; -[IGListAdapter addUpdateListener:] */

void FUN_107e93e64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 107e93e6c; end: 107e93e73; -[IGListAdapter removeUpdateListener:] */

void FUN_107e93e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeObject__112628ef8);
  return;
}



/* Entry: 107e93e74; end: 107e93f83; -[IGListAdapter _notifyDidUpdate:animated:] */

void FUN_107e93e74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_110;
    do {
      lVar4 = 0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c099c00(*(undefined8 *)(lStack_118 + lVar4 * 8),param_2,param_1,param_3,param_4)
        ;
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c156300();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c155820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107e93f84; end: 107e93fcf; -[IGListAdapter sectionControllerForSection:] */

void FUN_107e93f84(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c156300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c155820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e93fd0; end: 107e94033; -[IGListAdapter sectionForSectionController:] */

undefined8 FUN_107e93fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c156300(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c155d60();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107e94034; end: 107e9409f; -[IGListAdapter sectionControllerForObject:] */

void FUN_107e94034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c156300(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c155800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e940a0; end: 107e94133; -[IGListAdapter objectForSectionController:] */

void FUN_107e940a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c156300(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155d60();
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010c156300(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e0100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e94134; end: 107e9417f; -[IGListAdapter objectAtSection:] */

void FUN_107e94134(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c156300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e0100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e94180; end: 107e941e3; -[IGListAdapter sectionForObject:] */

undefined8 FUN_107e94180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c156300(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c155d20();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107e941e4; end: 107e94227; -[IGListAdapter objects] */

void FUN_107e941e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c156300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e0300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e94228; end: 107e9427f; -[IGListAdapter _supplementaryViewSourceAtIndexPath:] */

void FUN_107e94228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c1554e0(param_3);
  func_0x00010c155820(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c262ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e94280; end: 107e942e3; -[IGListAdapter visibleSectionControllers] */

void FUN_107e94280(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf857c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29fea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107e942e4; end: 107e9458b; -[IGListAdapter visibleObjects] */

void FUN_107e942e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  lVar2 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  if (((uint)uVar9 >> 4 & 1) == 0) {
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retain(lVar5);
    lVar2 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        lVar3 = param_1;
        func_0x00010be9cc40();
        _objc_retainAutoreleasedReturnValue();
        if ((lVar3 != 0) && (lVar4 = param_1, func_0x00010c155d60(), lVar4 != 0x7fffffffffffffff)) {
          lVar4 = param_1;
          func_0x00010c0dfd60();
          _objc_retainAutoreleasedReturnValue();
          if (lVar4 != 0) {
            func_0x00010befa120(puVar6);
          }
          _objc_release(lVar4);
        }
        _objc_release(lVar3);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    puVar7 = puVar6;
    func_0x00010bf00560(puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar6 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new();
    _objc_retain();
    func_0x00010bf97e80(lVar5);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain();
    func_0x00010bf97bc0(puVar6);
    _objc_retain(puVar7);
    _objc_release(puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(undefined8 *)(lVar5 + 0x20);
  func_0x00010c1554e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bef92d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar9,PTR_s_addIndex__11259be58,param_2);
  return;
}



/* Entry: 107e9458c; end: 107e945ff;  */

void FUN_107e9458c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1554e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bef92d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_addIndex__11259be58,param_2);
  return;
}



/* Entry: 107e94600; end: 107e94757; -[IGListAdapter visibleCellsForObject:] */

void FUN_107e94600(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c156300();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c155d20();
  _objc_release(param_3);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x7fffffffffffffff) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
  }
  else {
    puVar1 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107e94758;
    puStack_48 = &UNK_110a10768;
    puStack_40 = param_1;
    puStack_38 = puVar2;
    _objc_retain();
    func_0x00010c1063a0(puVar1,param_2,&puStack_60);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bfaea40(puVar3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puStack_40);
    _objc_release(param_1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107e94758; end: 107e947a7;  */

bool FUN_107e94758(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfecfa0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1554e0();
  lVar3 = *(long *)(param_1 + 0x28);
  _objc_release(lVar1);
  return lVar2 == lVar3;
}



/* Entry: 107e947a8; end: 107e9488b; -[IGListAdapter sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_107e947a8(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0f96e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099f60();
  uVar2 = param_5;
  func_0x00010c1554e0(param_5);
  uVar3 = param_3;
  func_0x00010c155820(param_3,param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0840e0(param_5);
  func_0x00010c23d220(uVar3,param_4,uVar2);
  dVar4 = 0.0;
  if (0.0 <= param_1) {
    dVar4 = param_1;
  }
  dVar5 = 0.0;
  if (0.0 <= param_2) {
    dVar5 = param_2;
  }
  uVar2 = param_5;
  func_0x00010c0840e0(param_5);
  _objc_release(param_5);
  func_0x00010c099b40(uVar1,param_4,param_3,uVar3,uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  auVar6._8_8_ = dVar5;
  auVar6._0_8_ = dVar4;
  return auVar6;
}



/* Entry: 107e9488c; end: 107e94973; -[IGListAdapter sizeForSupplementaryViewOfKind:atIndexPath:] */

undefined1  [16]
FUN_107e9488c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bec8f20(param_3,param_4,param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c263120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    dVar3 = *(double *)PTR__CGSizeZero_110347620;
    dVar4 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    uVar1 = param_6;
    func_0x00010c0840e0(param_6);
    func_0x00010c23d380(param_3,param_4,param_5,uVar1);
    dVar3 = 0.0;
    if (0.0 <= param_1) {
      dVar3 = param_1;
    }
    dVar4 = 0.0;
    if (0.0 <= param_2) {
      dVar4 = param_2;
    }
  }
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  auVar5._8_8_ = dVar4;
  auVar5._0_8_ = dVar3;
  return auVar5;
}



/* Entry: 107e94974; end: 107e94a3b; -[IGListAdapter _collectionViewBlock] */

void FUN_107e94974(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x107e949fc;
  puStack_38 = &UNK_110a10798;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107e94a3c; end: 107e94c53; -[IGListAdapter _generateTransitionDataWithObjects:dataSource:] */

void FUN_107e94a3c(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010c156300();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    puVar4 = PTR_PTR_1126d8140;
    _objc_alloc(PTR_PTR_1126d8140);
    puVar5 = puVar1;
    func_0x00010c0e0300(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfeebc0(puVar4);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bf529e0(param_3);
    func_0x00010bffc4a0();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bf529e0(param_3);
    func_0x00010bffc4a0();
    func_0x00010c29c100(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_107e9b48c();
    _objc_release(param_1);
    _objc_retain(puVar1);
    _objc_retain(param_4);
    _objc_retain(puVar2);
    _objc_retain(puVar5);
    func_0x00010bf97e80(param_3);
    func_0x000107e9b5b8();
    puVar4 = PTR_PTR_1126d8140;
    _objc_alloc(PTR_PTR_1126d8140);
    puVar3 = puVar1;
    func_0x00010c0e0300(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfeebc0(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(param_4);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107e94c54; end: 107e94d0b;  */

void FUN_107e94c54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c155800();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c099c80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) goto LAB_107e94cf8;
  }
  func_0x00010c17e540();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c29c100(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222400(lVar1);
  _objc_release(uVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x38));
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x40));
  _objc_release(lVar1);
LAB_107e94cf8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e94d0c; end: 107e94d47; -[IGListAdapter _updateObjects:dataSource:] */

void FUN_107e94d0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be1c3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee4740(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e94d48; end: 107e94fff; -[IGListAdapter _updateWithData:] */

void FUN_107e94d48(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x32) = 1;
  lVar1 = param_1;
  func_0x00010c156300();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uVar7 = param_3;
  func_0x00010c271fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bf52a60();
  if (uVar3 != 0) {
    lVar11 = *plStack_1a0;
    do {
      uVar8 = 0;
      do {
        if (*plStack_1a0 != lVar11) {
          _objc_enumerationMutation(uVar7);
        }
        lVar10 = *(long *)(lStack_1a8 + uVar8 * 8);
        lVar4 = lVar1;
        func_0x00010c155d20(lVar1,param_2,lVar10);
        if (lVar4 == 0x7fffffffffffffff) {
LAB_107e94e58:
          func_0x00010befa120(puVar2,param_2,lVar10);
        }
        else {
          lVar5 = lVar1;
          func_0x00010c0e0100(lVar1,param_2,lVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar5 != lVar10) goto LAB_107e94e58;
        }
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
      uVar3 = uVar7;
      func_0x00010bf52a60(uVar7,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (uVar3 != 0);
  }
  _objc_release(uVar7);
  uVar7 = param_3;
  func_0x00010c271fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c272220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28cac0(lVar1,param_2,uVar7,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar7);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(puVar2);
  puVar6 = puVar2;
  func_0x00010bf52a60(puVar2,param_2,&uStack_1f0,auStack_170,0x10);
  if (puVar6 != (undefined *)0x0) {
    lVar11 = *plStack_1e0;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != lVar11) {
          _objc_enumerationMutation(puVar2);
        }
        lVar4 = lVar1;
        func_0x00010c155800(lVar1,param_2,*(undefined8 *)(lStack_1e8 + (long)puVar9 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7e880();
        _objc_release(lVar4);
        puVar9 = puVar9 + 1;
      } while (puVar6 != puVar9);
      puVar6 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_1f0,auStack_170,0x10);
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  lVar11 = param_1;
  func_0x00010be45bc0();
  uVar7 = (ulong)((uint)lVar11 ^ 1);
  func_0x00010bed3c60(param_1);
  *(undefined1 *)(param_1 + 0x32) = 0;
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = param_3;
  func_0x00010c0753c0();
  if ((uVar3 & 1) != 0) {
    return;
  }
  if ((uVar7 & 1) == 0) {
    uVar7 = param_3;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf8ef00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar7 = param_3 + 8;
    _objc_loadWeakRetained();
    uVar8 = uVar7;
    func_0x00010bf14800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar7);
    if (uVar3 != uVar8) {
      lVar1 = param_3 + 8;
      _objc_loadWeakRetained(lVar1);
      lVar11 = lVar1;
      func_0x00010bf14800();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(lVar11);
      _objc_release(lVar1);
      lVar1 = param_3 + 8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c16e9a0();
      _objc_release(lVar1);
    }
    _objc_release(uVar3);
  }
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar11 = lVar1;
  func_0x00010bf14800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107e95000; end: 107e95133; -[IGListAdapter _updateBackgroundViewShouldHide:] */

void FUN_107e95000(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = param_1;
  func_0x00010c0753c0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  if ((param_3 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf8ef00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar3 = uVar1;
    func_0x00010bf14800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (uVar2 != uVar3) {
      lVar4 = param_1 + 8;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar4;
      func_0x00010bf14800();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = param_1 + 8;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c16e9a0();
      _objc_release(lVar4);
    }
    _objc_release(uVar2);
  }
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf14800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107e95134; end: 107e951ef; -[IGListAdapter _itemCountIsZero] */

undefined1 FUN_107e95134(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 1;
  func_0x00010c156300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf980a0();
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 107e951f0; end: 107e95233;  */

void FUN_107e951f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  func_0x00010c0deea0();
  if (0 < param_3) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
    *param_5 = 1;
  }
  return;
}



/* Entry: 107e95234; end: 107e952af; -[IGListAdapter _sectionMapUsingPreviousIfInUpdateBlock:] */

void FUN_107e95234(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c112860();
  _objc_retainAutoreleasedReturnValue();
  if (((param_3 == 0) || (lVar2 = param_1, func_0x00010c0753c0(), (int)lVar2 == 0)) || (lVar1 == 0))
  {
    func_0x00010c156300(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107e952b0; end: 107e953ab; -[IGListAdapter indexPathsFromSectionController:indexes:usePreviousIfInUpdateBlock:] */

void FUN_107e952b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  _objc_opt_new();
  func_0x00010be9cf00(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c155d60();
  _objc_release(param_3);
  if (lVar2 != 0x7fffffffffffffff) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107e953ac;
    puStack_58 = &UNK_1108708f0;
    _objc_retain(puVar1);
    puStack_50 = puVar1;
    lStack_48 = lVar2;
    func_0x00010bf97bc0(param_4,param_2,&puStack_70);
    _objc_release(puStack_50);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107e953ac; end: 107e953f7;  */

void FUN_107e953ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_2,
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107e953f8; end: 107e9549b; -[IGListAdapter indexPathForSectionController:index:usePreviousIfInUpdateBlock:] */

void FUN_107e953f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010be9cf00(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c155d60();
  _objc_release(param_3);
  if (lVar1 == 0x7fffffffffffffff) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_4,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107e9549c; end: 107e95633; -[IGListAdapter _layoutAttributesForItemAndSupplementaryViewAtIndexPath:supplementaryKinds:] */

void FUN_107e9549c(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
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
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = param_1;
  func_0x00010be48ce0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010befa120(puVar1,param_2,lVar2);
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar3 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_4);
        }
        lVar4 = param_1;
        func_0x00010be48d20(param_1,param_2,*(undefined8 *)(lStack_128 + lVar7 * 8),param_3);
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          func_0x00010befa120(puVar1,param_2,lVar4);
        }
        _objc_release(lVar4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = param_4;
      puVar5 = &uStack_130;
      func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_4);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    func_0x00010bf40120(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010c08c980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107e95634; end: 107e9569f; -[IGListAdapter _layoutAttributesForItemAtIndexPath:] */

void FUN_107e95634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c08c980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e956a0; end: 107e95723; -[IGListAdapter _layoutAttributesForSupplementaryViewOfKind:atIndexPath:] */

void FUN_107e956a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c08c9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e95724; end: 107e95737; -[IGListAdapter mapView:toSectionController:] */

void FUN_107e95724(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setObject_forKey__112651b80,param_4,param_3);
  return;
}



/* Entry: 107e95738; end: 107e9573f; -[IGListAdapter sectionControllerForView:] */

void FUN_107e95738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_objectForKey__1126159e0);
  return;
}



/* Entry: 107e95740; end: 107e95747; -[IGListAdapter _sectionControllerForCell:] */

void FUN_107e95740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_objectForKey__1126159e0);
  return;
}



/* Entry: 107e95748; end: 107e9574f; -[IGListAdapter removeMapForView:] */

void FUN_107e95748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 107e95750; end: 107e9579f; -[IGListAdapter _deferBlockBetweenBatchUpdates:] */

void FUN_107e95750(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    _objc_retainBlock(param_3);
    func_0x00010befa120(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000107e9579c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 107e957a0; end: 107e957d3; -[IGListAdapter _enterBatchUpdates] */

void FUN_107e957a0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e957d4; end: 107e958e7; -[IGListAdapter _exitBatchUpdates] */

long FUN_107e957d4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar3);
  _objc_retain(lVar2);
  lVar4 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      (**(code **)(*(long *)(lVar6 * 8) + 0x10))();
      lVar6 = lVar6 + 1;
    } while (lVar4 != lVar6);
    lVar4 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return lVar2;
  }
  ___stack_chk_fail();
  if ((*(byte *)(lVar2 + 0x78) >> 5 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c08eff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return lVar2;
  }
  func_0x00010c28d720();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0753c0();
  _objc_release(lVar2);
  return lVar4;
}



/* Entry: 107e958e8; end: 107e9592f; -[IGListAdapter isInDataUpdateBlock] */

long FUN_107e958e8(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x78) >> 5 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c08eff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_legacyIsInDataUpdateBlock_112601608);
    return param_1;
  }
  func_0x00010c28d720();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0753c0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 107e95930; end: 107e95adb; -[IGListAdapter scrollViewDidScroll:] */

undefined1  [16]
FUN_107e95930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,undefined8 param_6,ulong param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar11;
  ulong uVar12;
  long unaff_x26;
  ulong unaff_x27;
  long lVar13;
  ulong unaff_x28;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2d0;
  ulong uStack_2c0;
  ulong uStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  ulong uStack_190;
  ulong uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  uVar2 = param_5;
  func_0x00010c0f96e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099f40();
  uVar12 = param_5;
  func_0x00010c152a60();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  _objc_opt_respondsToSelector();
  if ((uVar14 & 1) != 0) {
    func_0x00010c152b20(uVar12);
  }
  uVar14 = param_5;
  func_0x00010c2a0040();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (ulong *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar3 = uVar14;
  func_0x00010bf52a60();
  if (uVar3 != 0) {
    unaff_x27 = *puStack_120;
    do {
      unaff_x28 = 0;
      do {
        if (*puStack_120 != unaff_x27) {
          _objc_enumerationMutation(uVar14);
        }
        unaff_x25 = *(long *)(lStack_128 + unaff_x28 * 8);
        unaff_x26 = unaff_x25;
        func_0x00010c151f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c099c20();
        _objc_release(unaff_x26);
        unaff_x28 = unaff_x28 + 1;
      } while (uVar3 != unaff_x28);
      uVar3 = uVar14;
      func_0x00010bf52a60();
      unaff_x24 = 0;
    } while (uVar3 != 0);
  }
  uVar9 = param_5;
  func_0x00010c099b20(uVar2);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar2);
  uVar3 = param_7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = uVar15;
    return auVar16;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_260;
  pcStack_138 = FUN_107e95adc;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_190 = unaff_x28;
  uStack_188 = unaff_x27;
  lStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  lStack_170 = unaff_x24;
  uStack_168 = uVar14;
  uStack_160 = uVar12;
  uStack_158 = param_5;
  uStack_150 = uVar2;
  uStack_148 = param_7;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(uVar9);
  uVar2 = uVar3;
  func_0x00010c152a60();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar12 & 1) != 0) {
    func_0x00010c152ca0(uVar2);
  }
  uVar12 = uVar3;
  func_0x00010c2a0040();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uVar4 = uVar12;
  func_0x00010bf52a60();
  if (uVar4 != 0) {
    unaff_x26 = *plStack_250;
    do {
      unaff_x27 = 0;
      do {
        if (*plStack_250 != unaff_x26) {
          _objc_enumerationMutation(uVar12);
        }
        unaff_x24 = *(long *)(lStack_258 + unaff_x27 * 8);
        unaff_x25 = unaff_x24;
        func_0x00010c151f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c099cc0();
        _objc_release(unaff_x25);
        unaff_x27 = unaff_x27 + 1;
      } while (uVar4 != unaff_x27);
      uVar4 = uVar12;
      puVar5 = &uStack_260;
      func_0x00010bf52a60();
      uVar14 = 0;
    } while (uVar4 != 0);
  }
  _objc_release(uVar12);
  _objc_release(uVar2);
  uVar4 = uVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = uVar15;
    return auVar17;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_390;
  pcStack_268 = FUN_107e95c54;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2c0 = unaff_x28;
  uStack_2b8 = unaff_x27;
  lStack_2b0 = unaff_x26;
  lStack_2a8 = unaff_x25;
  lStack_2a0 = unaff_x24;
  uStack_298 = uVar14;
  uStack_290 = uVar12;
  uStack_288 = uVar2;
  uStack_280 = uVar3;
  uStack_278 = uVar9;
  ppuStack_270 = &puStack_140;
  _objc_retain(puVar5);
  uVar2 = uVar4;
  func_0x00010c152a60();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar12 & 1) != 0) {
    func_0x00010c152aa0(uVar2);
  }
  func_0x00010c2a0040();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = 0;
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  plStack_380 = (long *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uVar12 = uVar4;
  func_0x00010bf52a60();
  if (uVar12 != 0) {
    lVar13 = *plStack_380;
    do {
      uVar14 = 0;
      do {
        if (*plStack_380 != lVar13) {
          _objc_enumerationMutation(uVar4);
        }
        uVar11 = *(undefined8 *)(lStack_388 + uVar14 * 8);
        func_0x00010c151f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c099be0();
        _objc_release(uVar11);
        uVar14 = uVar14 + 1;
      } while (uVar12 != uVar14);
      uVar12 = uVar4;
      puVar8 = &uStack_390;
      func_0x00010bf52a60();
    } while (uVar12 != 0);
  }
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = uVar15;
    return auVar18;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  puVar6 = (undefined1 *)puVar5;
  func_0x00010c152a60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  _objc_opt_respondsToSelector();
  if (((ulong)puVar7 & 1) != 0) {
    func_0x00010c152a80(puVar6);
  }
  func_0x00010c2a0040();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = 0;
  puVar7 = (undefined1 *)puVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar7 != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar5);
      }
      uVar12 = *(ulong *)((long)puVar10 * 8);
      func_0x00010c151f60();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar12;
      _objc_opt_respondsToSelector();
      if ((uVar2 & 1) != 0) {
        func_0x00010c099b60(uVar12);
      }
      _objc_release(uVar12);
      puVar10 = puVar10 + 1;
    } while (puVar7 != puVar10);
    puVar7 = (undefined1 *)puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = uVar15;
    return auVar19;
  }
  ___stack_chk_fail();
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar8);
  auVar20._8_8_ = param_4;
  auVar20._0_8_ = param_3;
  return auVar20;
}



/* Entry: 107e95adc; end: 107e95c53; -[IGListAdapter scrollViewWillBeginDragging:] */

undefined1  [16]
FUN_107e95adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,undefined8 param_6,ulong param_7)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_1a0;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  uVar2 = param_5;
  func_0x00010c152a60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar9 & 1) != 0) {
    func_0x00010c152ca0(uVar2);
  }
  func_0x00010c2a0040();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar9 = param_5;
  func_0x00010bf52a60();
  if (uVar9 != 0) {
    lVar10 = *plStack_120;
    do {
      uVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_5);
        }
        uVar8 = *(undefined8 *)(lStack_128 + uVar11 * 8);
        func_0x00010c151f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c099cc0();
        _objc_release(uVar8);
        uVar11 = uVar11 + 1;
      } while (uVar9 != uVar11);
      uVar9 = param_5;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
    } while (uVar9 != 0);
  }
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = uVar12;
    return auVar13;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_260;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  uVar2 = param_7;
  func_0x00010c152a60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar9 & 1) != 0) {
    func_0x00010c152aa0(uVar2);
  }
  func_0x00010c2a0040();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uVar9 = param_7;
  func_0x00010bf52a60();
  if (uVar9 != 0) {
    lVar10 = *plStack_250;
    do {
      uVar11 = 0;
      do {
        if (*plStack_250 != lVar10) {
          _objc_enumerationMutation(param_7);
        }
        uVar8 = *(undefined8 *)(lStack_258 + uVar11 * 8);
        func_0x00010c151f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c099be0();
        _objc_release(uVar8);
        uVar11 = uVar11 + 1;
      } while (uVar9 != uVar11);
      uVar9 = param_7;
      puVar6 = &uStack_260;
      func_0x00010bf52a60();
    } while (uVar9 != 0);
  }
  _objc_release(param_7);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = uVar12;
    return auVar14;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  puVar4 = (undefined1 *)puVar3;
  func_0x00010c152a60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  _objc_opt_respondsToSelector();
  if (((ulong)puVar5 & 1) != 0) {
    func_0x00010c152a80(puVar4);
  }
  func_0x00010c2a0040();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0;
  puVar5 = (undefined1 *)puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      uVar9 = *(ulong *)((long)puVar7 * 8);
      func_0x00010c151f60();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar9;
      _objc_opt_respondsToSelector();
      if ((uVar2 & 1) != 0) {
        func_0x00010c099b60(uVar9);
      }
      _objc_release(uVar9);
      puVar7 = puVar7 + 1;
    } while (puVar5 != puVar7);
    puVar5 = (undefined1 *)puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = uVar12;
    return auVar15;
  }
  ___stack_chk_fail();
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar6);
  auVar16._8_8_ = param_4;
  auVar16._0_8_ = param_3;
  return auVar16;
}



/* Entry: 107e95c54; end: 107e95dd7; -[IGListAdapter scrollViewDidEndDragging:willDecelerate:] */

undefined1  [16]
FUN_107e95c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,undefined8 param_6,ulong param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar5 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  uVar2 = param_5;
  func_0x00010c152a60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar3 & 1) != 0) {
    func_0x00010c152aa0(uVar2);
  }
  func_0x00010c2a0040();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar3 = param_5;
  func_0x00010bf52a60();
  if (uVar3 != 0) {
    lVar8 = *plStack_120;
    do {
      uVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_5);
        }
        uVar6 = *(undefined8 *)(lStack_128 + uVar9 * 8);
        func_0x00010c151f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c099be0();
        _objc_release(uVar6);
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
      uVar3 = param_5;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (uVar3 != 0);
  }
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = uVar10;
    return auVar11;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  uVar2 = param_7;
  func_0x00010c152a60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar3 & 1) != 0) {
    func_0x00010c152a80(uVar2);
  }
  func_0x00010c2a0040();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0;
  uVar3 = param_7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_7);
      }
      uVar7 = *(ulong *)(uVar9 * 8);
      func_0x00010c151f60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      _objc_opt_respondsToSelector();
      if ((uVar4 & 1) != 0) {
        func_0x00010c099b60(uVar7);
      }
      _objc_release(uVar7);
      uVar9 = uVar9 + 1;
    } while (uVar3 != uVar9);
    uVar3 = param_7;
    func_0x00010bf52a60();
  }
  _objc_release(param_7);
  _objc_release(uVar2);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = uVar10;
    return auVar12;
  }
  ___stack_chk_fail();
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar5);
  auVar13._8_8_ = param_4;
  auVar13._0_8_ = param_3;
  return auVar13;
}



/* Entry: 107e95dd8; end: 107e95f6b; -[IGListAdapter scrollViewDidEndDecelerating:] */

undefined1  [16]
FUN_107e95dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  uVar2 = param_5;
  func_0x00010c152a60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar3 & 1) != 0) {
    func_0x00010c152a80(uVar2);
  }
  func_0x00010c2a0040();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  uVar3 = param_5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_5);
      }
      uVar7 = *(ulong *)(uVar6 * 8);
      func_0x00010c151f60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      _objc_opt_respondsToSelector();
      if ((uVar4 & 1) != 0) {
        func_0x00010c099b60(uVar7);
      }
      _objc_release(uVar7);
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
    uVar3 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = uVar8;
    return auVar9;
  }
  ___stack_chk_fail();
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(param_7);
  auVar10._8_8_ = param_4;
  auVar10._0_8_ = param_3;
  return auVar10;
}



/* Entry: 107e95f6c; end: 107e95fb7; -[IGListAdapter containerSize] */

undefined1  [16]
FUN_107e95f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(param_5);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 107e95fb8; end: 107e9601b; -[IGListAdapter containerInset] */

undefined8 FUN_107e95fb8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107e9601c; end: 107e9607f; -[IGListAdapter adjustedContainerInset] */

undefined8 FUN_107e9601c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe64e0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107e96080; end: 107e960e3; -[IGListAdapter insetContainerSize] */

undefined1  [16]
FUN_107e96080(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar1 = param_3;
  dVar2 = param_4;
  func_0x00010bfe64e0(param_5);
  _objc_release(param_5);
  auVar3._8_8_ = param_4 - (param_1 + dVar1);
  auVar3._0_8_ = param_3 - (param_2 + dVar2);
  return auVar3;
}



/* Entry: 107e960e4; end: 107e9612f; -[IGListAdapter containerContentOffset] */

undefined1  [16] FUN_107e960e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  _objc_release(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 107e96130; end: 107e961a7; -[IGListAdapter scrollingTraits] */

uint FUN_107e96130(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c081660();
  uVar2 = param_1;
  func_0x00010c070ea0();
  uVar3 = param_1;
  func_0x00010c070400();
  _objc_release(param_1);
  uVar4 = 0x10000;
  if ((int)uVar3 == 0) {
    uVar4 = 0;
  }
  uVar5 = 0x100;
  if ((int)uVar2 == 0) {
    uVar5 = 0;
  }
  return uVar5 | (uint)uVar1 | uVar4;
}



/* Entry: 107e961a8; end: 107e9620f; -[IGListAdapter containerSizeForSectionController:] */

undefined1  [16]
FUN_107e961a8(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  func_0x00010c067500(param_7);
  dVar1 = param_1;
  dVar2 = param_2;
  func_0x00010bf4afe0(param_5);
  func_0x00010bf4afe0(param_5);
  auVar3._8_8_ = (dVar2 - param_1) - param_3;
  auVar3._0_8_ = (dVar1 - param_2) - param_4;
  return auVar3;
}



/* Entry: 107e96210; end: 107e9629b; -[IGListAdapter indexForCell:sectionController:] */

long FUN_107e96210(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfecfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar2 = 0x7fffffffffffffff;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0840e0(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 107e9629c; end: 107e963e7; -[IGListAdapter cellForItemAtIndex:sectionController:] */

void FUN_107e9629c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  if (((*(byte *)(param_1 + 0x10) & 1) != 0) || ((*(byte *)(param_1 + 0x12) & 1) != 0)) {
    lVar4 = 0;
    goto LAB_107e963c8;
  }
  lVar1 = param_1;
  func_0x00010bfed0c0(param_1,param_2,param_4,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_107e963bc:
    lVar4 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c1554e0();
    lVar4 = param_1;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c0df2e0();
    _objc_release(lVar4);
    if (lVar3 <= lVar2) goto LAB_107e963bc;
    lVar2 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if ((*(byte *)(param_1 + 0x78) >> 4 & 1) == 0) {
      func_0x00010be9cc40(param_1,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar2 = lVar1;
      func_0x00010c1554e0(lVar1);
      func_0x00010c155820(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release();
    if (param_1 != param_4) {
      _objc_release(lVar4);
      goto LAB_107e963bc;
    }
  }
  _objc_release(lVar1);
LAB_107e963c8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107e963e8; end: 107e96553; -[IGListAdapter viewForSupplementaryElementOfKind:atIndex:sectionController:] */

void FUN_107e963e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (((*(byte *)(param_1 + 0x11) & 1) != 0) || ((*(byte *)(param_1 + 0x12) & 1) != 0)) {
    lVar4 = 0;
    goto LAB_107e96528;
  }
  lVar1 = param_1;
  func_0x00010bfed0c0(param_1,param_2,param_5,param_4,1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_107e9651c:
    lVar4 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c1554e0();
    lVar4 = param_1;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c0df2e0();
    _objc_release(lVar4);
    if (lVar3 <= lVar2) goto LAB_107e9651c;
    lVar2 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c262e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if ((*(byte *)(param_1 + 0x78) >> 4 & 1) == 0) {
      func_0x00010c155840(param_1,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar2 = lVar1;
      func_0x00010c1554e0(lVar1);
      func_0x00010c155820(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release();
    if (param_1 != param_5) {
      _objc_release(lVar4);
      goto LAB_107e9651c;
    }
  }
  _objc_release(lVar1);
LAB_107e96528:
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107e96554; end: 107e9677f; -[IGListAdapter fullyVisibleCellsForSectionController:] */

void FUN_107e96554(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar8;
  long unaff_x25;
  long lVar9;
  long unaff_x26;
  long lVar10;
  long unaff_x27;
  long unaff_x28;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined1 auStack_388 [128];
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined *puStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [128];
  long lStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [128];
  long lStack_b0;
  long lVar5;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_5;
  func_0x00010c155d60();
  lVar4 = lVar2;
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (lVar2 != 0x7fffffffffffffff) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = param_5;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    dVar19 = 0.0;
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    lVar4 = unaff_x22;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      unaff_x27 = *plStack_160;
      do {
        unaff_x28 = 0;
        do {
          dVar11 = dVar19;
          dVar13 = param_2;
          dVar15 = param_3;
          dVar17 = param_4;
          if (*plStack_160 != unaff_x27) {
            _objc_enumerationMutation(unaff_x22);
            dVar11 = dVar19;
            dVar13 = param_2;
            dVar15 = param_3;
            dVar17 = param_4;
          }
          unaff_x24 = *(undefined8 *)(lStack_168 + unaff_x28 * 8);
          unaff_x25 = param_5;
          func_0x00010bfecfa0(param_5,param_6,unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010c1554e0();
          _objc_release(unaff_x25);
          dVar19 = dVar11;
          param_2 = dVar13;
          param_3 = dVar15;
          param_4 = dVar17;
          if (unaff_x26 == lVar2) {
            func_0x00010bf20c00(unaff_x24);
            func_0x00010bf51460(unaff_x24,param_6,param_5);
            dVar19 = dVar11;
            param_2 = dVar13;
            param_3 = dVar15;
            param_4 = dVar17;
            func_0x00010bf20c00(param_5);
            lVar5 = param_5;
            dVar12 = dVar19;
            dVar14 = param_2;
            dVar16 = param_3;
            dVar18 = param_4;
            func_0x00010bf4c7c0();
            iVar1 = (int)lVar5;
            dVar19 = dVar19 + dVar14;
            param_2 = param_2 + dVar12;
            param_3 = param_3 - (dVar14 + dVar18);
            param_4 = param_4 - (dVar12 + dVar16);
            _CGRectContainsRect(dVar19,param_2,param_3,param_4,dVar11,dVar13,dVar15,dVar17);
            if (iVar1 != 0) {
              func_0x00010befa120(puVar3,param_6,unaff_x24);
            }
          }
          unaff_x28 = unaff_x28 + 1;
        } while (lVar4 != unaff_x28);
        lVar4 = unaff_x22;
        func_0x00010bf52a60(unaff_x22,param_6,&uStack_170,auStack_130,0x10);
        unaff_x23 = 0;
      } while (lVar4 != 0);
    }
    _objc_release(unaff_x22);
    lVar4 = param_5;
    _objc_release();
    unaff_x20 = lVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b0) {
    ___stack_chk_fail();
    pcStack_178 = FUN_107e96780;
    lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar2 = lVar4;
    lStack_1d0 = unaff_x28;
    lStack_1c8 = unaff_x27;
    lStack_1c0 = unaff_x26;
    lStack_1b8 = unaff_x25;
    uStack_1b0 = unaff_x24;
    uStack_1a8 = unaff_x23;
    lStack_1a0 = unaff_x22;
    lStack_198 = param_5;
    lStack_190 = unaff_x20;
    puStack_188 = puVar3;
    puStack_180 = &stack0xfffffffffffffff0;
    func_0x00010c155d60();
    if (lVar2 == 0x7fffffffffffffff) {
      lVar5 = 0x7fffffffffffffff;
      puVar3 = PTR____NSArray0__struct_11034ab48;
      lVar2 = unaff_x20;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = lVar4;
      func_0x00010c29fc60();
      _objc_retainAutoreleasedReturnValue();
      lStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      plStack_290 = (long *)0x0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      lVar5 = unaff_x22;
      func_0x00010bf52a60();
      if (lVar5 != 0) {
        unaff_x27 = *plStack_290;
        do {
          unaff_x28 = 0;
          do {
            if (*plStack_290 != unaff_x27) {
              _objc_enumerationMutation(unaff_x22);
            }
            unaff_x24 = *(undefined8 *)(lStack_298 + unaff_x28 * 8);
            unaff_x25 = lVar4;
            func_0x00010bfecfa0(lVar4,param_6,unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010c1554e0();
            _objc_release(unaff_x25);
            if (unaff_x26 == lVar2) {
              func_0x00010befa120(puVar3,param_6,unaff_x24);
            }
            unaff_x28 = unaff_x28 + 1;
          } while (lVar5 != unaff_x28);
          lVar5 = unaff_x22;
          func_0x00010bf52a60(unaff_x22,param_6,&uStack_2a0,auStack_260,0x10);
          unaff_x23 = 0;
        } while (lVar5 != 0);
      }
      _objc_release(unaff_x22);
      lVar5 = lVar4;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e0) {
      ___stack_chk_fail();
      pcStack_2a8 = FUN_107e9690c;
      lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar6 = lVar5;
      lStack_300 = unaff_x28;
      lStack_2f8 = unaff_x27;
      lStack_2f0 = unaff_x26;
      lStack_2e8 = unaff_x25;
      uStack_2e0 = unaff_x24;
      uStack_2d8 = unaff_x23;
      lStack_2d0 = unaff_x22;
      lStack_2c8 = lVar4;
      lStack_2c0 = lVar2;
      puStack_2b8 = puVar3;
      ppuStack_2b0 = &puStack_180;
      func_0x00010c155d60();
      if (lVar6 == 0x7fffffffffffffff) {
        lVar5 = 0x7fffffffffffffff;
        puVar3 = PTR____NSArray0__struct_11034ab48;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        func_0x00010bf40120();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar5;
        func_0x00010bfed1a0();
        _objc_retainAutoreleasedReturnValue();
        lStack_3c8 = 0;
        uStack_3d0 = 0;
        uStack_3b8 = 0;
        plStack_3c0 = (long *)0x0;
        uStack_3a8 = 0;
        uStack_3b0 = 0;
        uStack_398 = 0;
        uStack_3a0 = 0;
        lVar4 = lVar2;
        func_0x00010bf52a60();
        if (lVar4 != 0) {
          lVar9 = *plStack_3c0;
          do {
            lVar10 = 0;
            do {
              if (*plStack_3c0 != lVar9) {
                _objc_enumerationMutation(lVar2);
              }
              lVar8 = *(long *)(lStack_3c8 + lVar10 * 8);
              lVar7 = lVar8;
              func_0x00010c1554e0();
              if (lVar7 == lVar6) {
                func_0x00010befa120(puVar3,param_6,lVar8);
              }
              lVar10 = lVar10 + 1;
            } while (lVar4 != lVar10);
            lVar4 = lVar2;
            func_0x00010bf52a60(lVar2,param_6,&uStack_3d0,auStack_388,0x10);
          } while (lVar4 != 0);
        }
        _objc_release(lVar2);
        _objc_release(lVar5);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
        ___stack_chk_fail();
        lVar2 = lVar5;
        func_0x00010bfed0c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf40120(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6e840();
        _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar2);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107e96780; end: 107e9690b; -[IGListAdapter visibleCellsForSectionController:] */

void FUN_107e96780(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar7;
  long unaff_x25;
  long lVar8;
  long unaff_x26;
  long lVar9;
  long unaff_x27;
  long unaff_x28;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c155d60();
  if (lVar1 == 0x7fffffffffffffff) {
    lVar3 = 0x7fffffffffffffff;
    puVar2 = PTR____NSArray0__struct_11034ab48;
    lVar1 = unaff_x20;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = param_1;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar3 = unaff_x22;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      unaff_x27 = *plStack_120;
      do {
        unaff_x28 = 0;
        do {
          if (*plStack_120 != unaff_x27) {
            _objc_enumerationMutation(unaff_x22);
          }
          unaff_x24 = *(undefined8 *)(lStack_128 + unaff_x28 * 8);
          unaff_x25 = param_1;
          func_0x00010bfecfa0(param_1,param_2,unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010c1554e0();
          _objc_release(unaff_x25);
          if (unaff_x26 == lVar1) {
            func_0x00010befa120(puVar2,param_2,unaff_x24);
          }
          unaff_x28 = unaff_x28 + 1;
        } while (lVar3 != unaff_x28);
        lVar3 = unaff_x22;
        func_0x00010bf52a60(unaff_x22,param_2,&uStack_130,auStack_f0,0x10);
        unaff_x23 = 0;
      } while (lVar3 != 0);
    }
    _objc_release(unaff_x22);
    lVar3 = param_1;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_107e9690c;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar4 = lVar3;
    lStack_190 = unaff_x28;
    lStack_188 = unaff_x27;
    lStack_180 = unaff_x26;
    lStack_178 = unaff_x25;
    uStack_170 = unaff_x24;
    uStack_168 = unaff_x23;
    lStack_160 = unaff_x22;
    lStack_158 = param_1;
    lStack_150 = lVar1;
    puStack_148 = puVar2;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00010c155d60();
    if (lVar4 == 0x7fffffffffffffff) {
      lVar3 = 0x7fffffffffffffff;
      puVar2 = PTR____NSArray0__struct_11034ab48;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010bfed1a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      plStack_250 = (long *)0x0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      lVar5 = lVar1;
      func_0x00010bf52a60();
      if (lVar5 != 0) {
        lVar8 = *plStack_250;
        do {
          lVar9 = 0;
          do {
            if (*plStack_250 != lVar8) {
              _objc_enumerationMutation(lVar1);
            }
            lVar7 = *(long *)(lStack_258 + lVar9 * 8);
            lVar6 = lVar7;
            func_0x00010c1554e0();
            if (lVar6 == lVar4) {
              func_0x00010befa120(puVar2,param_2,lVar7);
            }
            lVar9 = lVar9 + 1;
          } while (lVar5 != lVar9);
          lVar5 = lVar1;
          func_0x00010bf52a60(lVar1,param_2,&uStack_260,auStack_218,0x10);
        } while (lVar5 != 0);
      }
      _objc_release(lVar1);
      _objc_release(lVar3);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      lVar1 = lVar3;
      func_0x00010bfed0c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf40120(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e840();
      _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107e9690c; end: 107e96a77; -[IGListAdapter visibleIndexPathsForSectionController:] */

void FUN_107e9690c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  lVar1 = param_1;
  func_0x00010c155d60();
  if (lVar1 == 0x7fffffffffffffff) {
    param_1 = 0x7fffffffffffffff;
    puVar2 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar4 = lVar3;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(lVar3);
          }
          lVar6 = *(long *)(lStack_128 + lVar8 * 8);
          lVar5 = lVar6;
          func_0x00010c1554e0();
          if (lVar5 == lVar1) {
            func_0x00010befa120(puVar2,param_2,lVar6);
          }
          lVar8 = lVar8 + 1;
        } while (lVar4 != lVar8);
        lVar4 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar4 != 0);
    }
    _objc_release(lVar3);
    _objc_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_1;
  func_0x00010bfed0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e840();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107e96a78; end: 107e96aeb; -[IGListAdapter deselectItemAtIndex:sectionController:animated:] */

void FUN_107e96a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfed0c0(param_1,param_2,param_4,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e840();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e96aec; end: 107e96b67; -[IGListAdapter selectItemAtIndex:sectionController:animated:scrollPosition:] */

void FUN_107e96aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfed0c0(param_1,param_2,param_4,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c158b60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e96b68; end: 107e96d0f; -[IGListAdapter dequeueReusableCellOfClass:withReuseIdentifier:forSectionController:atIndex:] */

void FUN_107e96b68(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  uVar2 = param_3;
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc5ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar2);
  uVar4 = param_1;
  func_0x00010bfed0c0(param_1,param_2,param_5,param_6,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar5 = param_1;
  func_0x00010c1277e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf4b900();
  _objc_release(uVar5);
  if ((uVar6 & 1) == 0) {
    func_0x00010c1277e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(param_1);
    func_0x00010c126000(uVar1,param_2,param_3,puVar3);
  }
  uVar5 = uVar1;
  func_0x00010bf6e0c0(uVar1,param_2,puVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107e96d10; end: 107e96d1f; -[IGListAdapter dequeueReusableCellOfClass:forSectionController:atIndex:] */

void FUN_107e96d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6e050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dequeueReusableCellOfClass_withR_1125b91b8,param_3,0,param_4,param_5);
  return;
}



/* Entry: 107e96d20; end: 107e96ddb; -[IGListAdapter dequeueReusableCellFromStoryboardWithIdentifier:forSectionController:atIndex:] */

void FUN_107e96d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfed0c0(param_1,param_2,param_4,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010bf6e0c0(uVar1,param_2,param_3,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107e96ddc; end: 107e96f3b; -[IGListAdapter dequeueReusableCellWithNibName:bundle:forSectionController:atIndex:] */

void FUN_107e96ddc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfed0c0(param_1,param_2,param_5,param_6,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = param_1;
  func_0x00010c127880();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4b900();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    func_0x00010c127880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(param_1);
    puVar5 = PTR__OBJC_CLASS___UINib_1126d8148;
    func_0x00010c0da3a0(PTR__OBJC_CLASS___UINib_1126d8148,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126b80(uVar1,param_2,puVar5,param_3);
    _objc_release(puVar5);
  }
  uVar3 = uVar1;
  func_0x00010bf6e0c0(uVar1,param_2,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107e96f3c; end: 107e970eb; -[IGListAdapter dequeueReusableSupplementaryViewOfKind:forSectionController:class:atIndex:] */

void FUN_107e96f3c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  uVar2 = param_5;
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc5ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  uVar4 = param_1;
  func_0x00010bfed0c0(param_1,param_2,param_4,param_6,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = param_1;
  func_0x00010c127920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf4b900();
  _objc_release(uVar5);
  if ((uVar6 & 1) == 0) {
    func_0x00010c127920(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(param_1);
    func_0x00010c126060(uVar1,param_2,param_5,param_3,puVar3);
  }
  uVar5 = uVar1;
  func_0x00010bf6e120(uVar1,param_2,param_3,puVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107e970ec; end: 107e971bf; -[IGListAdapter dequeueReusableSupplementaryViewFromStoryboardOfKind:withIdentifier:forSectionController:atIndex:] */

void FUN_107e970ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfed0c0(param_1,param_2,param_5,param_6,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar2 = uVar1;
  func_0x00010bf6e120(uVar1,param_2,param_3,param_4,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107e971c0; end: 107e9733b; -[IGListAdapter dequeueReusableSupplementaryViewOfKind:forSectionController:nibName:bundle:atIndex:] */

void FUN_107e971c0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfed0c0(param_1,param_2,param_4,param_7,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = param_1;
  func_0x00010c127940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4b900();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    func_0x00010c127940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(param_1);
    puVar5 = PTR__OBJC_CLASS___UINib_1126d8148;
    func_0x00010c0da3a0(PTR__OBJC_CLASS___UINib_1126d8148,param_2,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126ba0(uVar1,param_2,puVar5,param_3,param_5);
    _objc_release(puVar5);
  }
  uVar3 = uVar1;
  func_0x00010bf6e120(uVar1,param_2,param_3,param_5,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107e9733c; end: 107e974e7; -[IGListAdapter performBatchAnimated:updates:completion:] */

void FUN_107e9733c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be0a7c0(param_1);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = param_1;
  func_0x00010c28d720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde1dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107e974e8;
  puStack_80 = &UNK_110848708;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  uStack_78 = param_4;
  _objc_copyWeak(auStack_a8,auStack_68);
  uStack_a0 = param_3;
  _objc_retain(param_5);
  func_0x00010c0f9200(uVar1);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107e974e8; end: 107e9760b;  */

void FUN_107e974e8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1ba580();
  _objc_release(lVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1ba580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e9760c; end: 107e9767b; -[IGListAdapter scrollToSectionController:atIndex:scrollPosition:animated:] */

void FUN_107e9760c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfed0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1525a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e9767c; end: 107e97777; -[IGListAdapter invalidateLayoutForSectionController:completion:] */

void FUN_107e9767c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bdf9880(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e97778; end: 107e977ab;  */

void FUN_107e97778(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3d980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e977ac; end: 107e97977; -[IGListAdapter _invalidateLayoutForSectionController:completion:] */

void FUN_107e977ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar4 = param_1;
  func_0x00010c155d60();
  if (lVar4 == 0x7fffffffffffffff) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    lVar4 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar1 = lVar4;
    func_0x00010c0deec0();
    _objc_release(lVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    if (0 < lVar1) {
      lVar4 = 0;
      do {
        puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar3);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
    }
    lVar4 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar1 = lVar4;
    func_0x00010bf408e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar1;
    _objc_opt_class();
    func_0x00010c06a340();
    _objc_alloc_init();
    func_0x00010c069fc0();
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    _objc_retain(lVar4);
    _objc_retain(lVar1);
    func_0x00010c0f8420(param_1);
    _objc_release(param_1);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107e97978; end: 107e97983;  */

void FUN_107e97978(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06a090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_invalidateLayoutWithContext__1125f8230,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107e97984; end: 107e97b07; -[IGListAdapter reloadInSectionController:atIndexes:] */

void FUN_107e97984(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x107e97a60;
    puStack_50 = &UNK_110a10828;
    uStack_48 = param_1;
    _objc_retain(param_3);
    uStack_40 = param_3;
    _objc_retain(uVar1);
    uStack_38 = uVar1;
    func_0x00010bf97bc0(param_4,param_2,&puStack_68);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e97b08; end: 107e97be3; -[IGListAdapter insertInSectionController:atIndexes:] */

void FUN_107e97b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar3 = param_1;
    func_0x00010bfed200(param_1,param_2,param_3,param_4,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c28d720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066a60();
    _objc_release(uVar4);
    uVar4 = param_1;
    func_0x00010be45bc0(param_1);
    func_0x00010bed3c60(param_1,param_2,(uint)uVar4 ^ 1);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e97be4; end: 107e97cbf; -[IGListAdapter deleteInSectionController:atIndexes:] */

void FUN_107e97be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar3 = param_1;
    func_0x00010bfed200(param_1,param_2,param_3,param_4,1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c28d720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c120();
    _objc_release(uVar4);
    uVar4 = param_1;
    func_0x00010be45bc0(param_1);
    func_0x00010bed3c60(param_1,param_2,(uint)uVar4 ^ 1);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e97cc0; end: 107e97da7; -[IGListAdapter invalidateLayoutInSectionController:atIndexes:] */

void FUN_107e97cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010bfed200(param_1,param_2,param_3,param_4,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf408e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_class();
    func_0x00010c06a340();
    _objc_alloc_init();
    func_0x00010c069fc0();
    func_0x00010c06a080(uVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e97da8; end: 107e97e8b; -[IGListAdapter moveInSectionController:fromIndex:toIndex:] */

void FUN_107e97da8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfed0c0(param_1,param_2,param_3,param_4,1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bfed0c0(param_1,param_2,param_3,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if ((lVar2 != 0) && (lVar3 != 0)) {
    func_0x00010c28d720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d15e0();
    _objc_release(param_1);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107e97e8c; end: 107e97f7b; -[IGListAdapter reloadSectionController:] */

void FUN_107e97e8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be9cf00(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c155d60();
  _objc_release(param_3);
  if (lVar3 != 0x7fffffffffffffff) {
    puVar4 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c28d720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b00();
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010be45bc0(param_1);
    func_0x00010bed3c60(param_1,param_2,(uint)lVar3 ^ 1);
    _objc_release(puVar4);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107e97f7c; end: 107e9814b; -[IGListAdapter moveSectionControllerInteractive:fromIndex:toIndex:] */

void FUN_107e97f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != param_5) {
    uVar2 = param_1;
    func_0x00010bf643e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c156300(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e0300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = param_1;
    func_0x00010c076080();
    if ((int)uVar3 == 0) {
      param_5 = param_5 - (ulong)(param_4 < param_5);
    }
    else {
      func_0x00010c1b2160(param_1,param_2,0);
    }
    uVar3 = uVar4;
    func_0x00010c0d3c80(uVar4);
    uVar5 = uVar4;
    func_0x00010c0dfd20(uVar4,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3c0(uVar3,param_2,param_4);
    func_0x00010c066b00(uVar3,param_2,uVar5,param_5);
    uVar6 = uVar3;
    func_0x00010bf51e00(uVar3);
    uVar7 = param_1;
    func_0x00010c0d13e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099c40();
    _objc_release(uVar7);
    uVar7 = uVar2;
    func_0x00010c0e0360(uVar2,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedc500(param_1,param_2,uVar7,uVar2);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  func_0x00010c28d720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d1720();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e9814c; end: 107e9815b; -[IGListAdapter moveInSectionControllerInteractive:fromIndex:toIndex:] */

void FUN_107e9814c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d1670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_moveObjectFromIndex_toIndex__112611fb0,param_4,param_5);
  return;
}



/* Entry: 107e9815c; end: 107e981cb; -[IGListAdapter revertInvalidInteractiveMoveFromIndexPath:toIndexPath:] */

void FUN_107e9815c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d1540();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e981cc; end: 107e981e3; -[IGListAdapter viewController] */

void FUN_107e981cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e981e4; end: 107e981ef; -[IGListAdapter setViewController:] */

void FUN_107e981e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 107e981f0; end: 107e98207; -[IGListAdapter dataSource] */

void FUN_107e981f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e98208; end: 107e9821f; -[IGListAdapter delegate] */

void FUN_107e98208(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e98220; end: 107e9822b; -[IGListAdapter setDelegate:] */

void FUN_107e98220(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 107e9822c; end: 107e98243; -[IGListAdapter collectionViewDelegate] */

void FUN_107e9822c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e98244; end: 107e9825b; -[IGListAdapter scrollViewDelegate] */

void FUN_107e98244(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e9825c; end: 107e98273; -[IGListAdapter moveDelegate] */

void FUN_107e9825c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e98274; end: 107e9827f; -[IGListAdapter setMoveDelegate:] */

void FUN_107e98274(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 107e98280; end: 107e98297; -[IGListAdapter performanceDelegate] */

void FUN_107e98280(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e98298; end: 107e982a3; -[IGListAdapter setPerformanceDelegate:] */

void FUN_107e98298(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}


