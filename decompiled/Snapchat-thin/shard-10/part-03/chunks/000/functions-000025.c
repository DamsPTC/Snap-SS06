/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d612e4; end: 107d614db;  */

long FUN_107d612e4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar6 = 0;
  if (lVar2 != 0) {
    lVar6 = *plStack_1a0;
    do {
      lVar7 = 0;
      do {
        if (*plStack_1a0 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        lVar5 = *(long *)(lStack_1a8 + lVar7 * 8);
        lVar3 = lVar5;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0ed200();
        _objc_release(lVar3);
        if ((int)lVar4 == 0x1b) {
LAB_107d61490:
          lVar6 = 1;
          goto LAB_107d61494;
        }
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar5;
        func_0x00010befd2c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        lVar4 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_1f0,auStack_168,0x10);
        if (lVar4 != 0) {
          lVar5 = *plStack_1e0;
          do {
            lVar8 = 0;
            do {
              if (*plStack_1e0 != lVar5) {
                _objc_enumerationMutation(lVar3);
              }
              iVar1 = (int)*(undefined8 *)(lStack_1e8 + lVar8 * 8);
              func_0x00010c0ed200();
              if (iVar1 == 2) {
                _objc_release(lVar3);
                goto LAB_107d61490;
              }
              lVar8 = lVar8 + 1;
            } while (lVar4 != lVar8);
            lVar4 = lVar3;
            func_0x00010bf52a60(lVar3,param_2,&uStack_1f0,auStack_168,0x10);
          } while (lVar4 != 0);
        }
        _objc_release(lVar3);
        lVar7 = lVar7 + 1;
      } while (lVar7 != lVar2);
      lVar2 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_1b0,auStack_e8,0x10);
    } while (lVar2 != 0);
    lVar6 = 0;
  }
LAB_107d61494:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar6;
  }
  ___stack_chk_fail();
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    _objc_retain(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 107d614dc; end: 107d6151b;  */

void FUN_107d614dc(long param_1)

{
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    _objc_retain(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107d6151c; end: 107d616a7;  */

void FUN_107d6151c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain();
  lVar9 = param_1;
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c2453e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_107d616a8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = param_1;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf9e280();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c245400();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    FUN_107d616a8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  else {
    _objc_retain(lVar3);
    lVar8 = lVar3;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar9);
  lVar9 = lVar8;
  func_0x00010bfd8500();
  if ((int)lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = lVar8;
    func_0x00010c091b80(lVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar8);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return;
}



/* Entry: 107d616a8; end: 107d61833;  */

void FUN_107d616a8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  puVar7 = (undefined *)0x0;
  if (lVar2 != 0) {
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar1);
        }
        puVar8 = *(undefined **)(lVar9 * 8);
        puVar7 = puVar8;
        func_0x00010bf0d0a0();
        if ((int)puVar7 == 1) {
          func_0x00010bf4e080();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar8;
          func_0x00010bf4e840();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          func_0x00010bf43580();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          _objc_release(puVar8);
          goto LAB_107d617e8;
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    puVar7 = (undefined *)0x0;
  }
LAB_107d617e8:
  _objc_release(lVar1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_retain(lVar5);
    lVar4 = lVar5;
    func_0x00010c2810a0();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar4 < 1) {
      puVar7 = (undefined *)0x0;
    }
    else {
      func_0x00010c2810a0(lVar5);
      func_0x00010c0df7c0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar8;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
    }
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107d61834; end: 107d618c3;  */

void FUN_107d61834(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2810a0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 < 1) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c2810a0(param_2);
    func_0x00010c0df7c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d618c4; end: 107d619c7;  */

void FUN_107d618c4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d7a90;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010bf24a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe2ee0();
  uVar4 = param_1;
  func_0x00010bf24a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b5940();
  func_0x000100c4a928(uVar3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eede0(param_1);
  func_0x00010c0eebe0(param_1);
  _objc_release(param_1);
  func_0x00010bff9aa0(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d619c8; end: 107d621f3;  */

undefined ** FUN_107d619c8(undefined **param_1,undefined8 param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **ppuVar11;
  undefined **unaff_x26;
  long unaff_x27;
  long lVar12;
  undefined **unaff_x28;
  long lVar13;
  undefined **ppuStack_708;
  undefined **ppuStack_700;
  undefined **ppuStack_6f8;
  undefined **ppuStack_6f0;
  undefined **ppuStack_6e8;
  undefined **ppuStack_6e0;
  undefined *puStack_6d8;
  undefined *puStack_6d0;
  undefined **ppuStack_6c8;
  undefined *puStack_6c0;
  long lStack_6b8;
  undefined **ppuStack_6b0;
  undefined **ppuStack_6a8;
  undefined **ppuStack_6a0;
  undefined **ppuStack_698;
  undefined **ppuStack_690;
  undefined **ppuStack_688;
  undefined **ppuStack_680;
  undefined **ppuStack_678;
  undefined8 ***pppuStack_670;
  code *pcStack_668;
  undefined **ppuStack_660;
  undefined **ppuStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined8 uStack_640;
  long lStack_638;
  long *plStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  long lStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  long lStack_5b8;
  long *plStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined1 auStack_580 [128];
  undefined1 auStack_500 [128];
  undefined1 auStack_480 [128];
  long lStack_400;
  undefined **ppuStack_3f0;
  long lStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined1 ***pppuStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_350 [128];
  long lStack_2d0;
  undefined **ppuStack_2c0;
  long lStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined1 **ppuStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar10 = param_1;
  func_0x00010bfda540();
  if ((int)ppuVar10 == 0) {
    ppuVar10 = (undefined **)0x0;
  }
  else {
    ppuVar10 = param_1;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010c0ff680();
    _objc_release(ppuVar10);
    if (ppuVar11 != (undefined **)0x0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      puStack_120 = (undefined8 *)0x0;
      ppuVar10 = param_1;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar10;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar10);
      ppuVar10 = ppuVar11;
      func_0x00010bf52a60(ppuVar11,param_2,&uStack_130,auStack_e8,0x10);
      if (ppuVar10 != (undefined **)0x0) {
        unaff_x25 = (undefined **)*puStack_120;
        do {
          unaff_x26 = (undefined **)0x0;
          do {
            if ((undefined **)*puStack_120 != unaff_x25) {
              _objc_enumerationMutation(ppuVar11);
            }
            unaff_x22 = *(undefined ***)(lStack_128 + (long)unaff_x26 * 8);
            ppuVar8 = unaff_x22;
            func_0x00010c08c3a0();
            if ((int)ppuVar8 == 1) {
              unaff_x23 = unaff_x22;
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x24 = unaff_x23;
              func_0x00010c0c4bc0();
              _objc_release(unaff_x23);
              if ((int)unaff_x24 != 0) {
                func_0x00010c0c3fe0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar10 = unaff_x22;
                func_0x00010c0c4bc0();
                ppuVar10 = (undefined **)
                           (ulong)(uint)(int)((double)((ulong)ppuVar10 & 0xffffffff) / 1000.0);
                goto LAB_107d61ba8;
              }
            }
            unaff_x26 = (undefined **)((long)unaff_x26 + 1);
          } while (ppuVar10 != unaff_x26);
          ppuVar10 = ppuVar11;
          func_0x00010bf52a60(ppuVar11,param_2,&uStack_130,auStack_e8,0x10);
        } while (ppuVar10 != (undefined **)0x0);
      }
      _objc_release(ppuVar11);
    }
    ppuVar11 = param_1;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar11;
    func_0x00010bfda560();
    _objc_release(ppuVar11);
    if ((int)ppuVar10 != 0) {
      ppuVar11 = param_1;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = ppuVar11;
      func_0x00010c0fef80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = unaff_x22;
      func_0x00010bf8b420();
LAB_107d61ba8:
      _objc_release(unaff_x22);
      _objc_release(ppuVar11);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar10;
  }
  ___stack_chk_fail();
  uStack_138 = 0x107d61c00;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  ppuVar11 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_260,auStack_220,0x10);
  if (ppuVar11 == (undefined **)0x0) {
    ppuVar8 = (undefined **)0x0;
  }
  else {
    ppuVar8 = (undefined **)0x0;
    unaff_x27 = *plStack_250;
    do {
      unaff_x28 = (undefined **)0x0;
      do {
        if (*plStack_250 != unaff_x27) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x22 = *(undefined ***)(lStack_258 + (long)unaff_x28 * 8);
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = unaff_x22;
        func_0x00010c0ff660();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x25;
        func_0x00010c27dd80();
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        _objc_release(unaff_x22);
        if ((int)unaff_x26 == 0) {
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar11 != unaff_x28);
      ppuVar11 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_260,auStack_220,0x10);
    } while (ppuVar11 != (undefined **)0x0);
    ppuVar10 = (undefined **)0x0;
  }
  ppuVar11 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  uStack_268 = 0x107d61d78;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_2c0 = unaff_x28;
  lStack_2b8 = unaff_x27;
  ppuStack_2b0 = unaff_x26;
  ppuStack_2a8 = unaff_x25;
  ppuStack_2a0 = unaff_x24;
  ppuStack_298 = unaff_x23;
  ppuStack_290 = unaff_x22;
  ppuStack_288 = ppuVar10;
  ppuStack_280 = ppuVar8;
  ppuStack_278 = param_1;
  ppuStack_270 = &puStack_140;
  _objc_retain();
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  plStack_380 = (long *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  ppuVar8 = ppuVar11;
  func_0x00010bf52a60(ppuVar11,param_2,&uStack_390,auStack_350,0x10);
  if (ppuVar8 == (undefined **)0x0) {
    ppuVar9 = (undefined **)0x0;
  }
  else {
    ppuVar9 = (undefined **)0x0;
    unaff_x27 = *plStack_380;
    do {
      unaff_x28 = (undefined **)0x0;
      do {
        if (*plStack_380 != unaff_x27) {
          _objc_enumerationMutation(ppuVar11);
        }
        unaff_x22 = *(undefined ***)(lStack_388 + (long)unaff_x28 * 8);
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = unaff_x22;
        func_0x00010c0ff660();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x25;
        func_0x00010c27dd80();
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        _objc_release(unaff_x22);
        if ((int)unaff_x26 == 1) {
          ppuVar9 = (undefined **)((long)ppuVar9 + 1);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar8 != unaff_x28);
      ppuVar8 = ppuVar11;
      func_0x00010bf52a60(ppuVar11,param_2,&uStack_390,auStack_350,0x10);
    } while (ppuVar8 != (undefined **)0x0);
    ppuVar10 = (undefined **)0x0;
  }
  ppuVar8 = ppuVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return ppuVar9;
  }
  ___stack_chk_fail();
  uStack_398 = 0x107d61ef0;
  lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_3f0 = unaff_x28;
  lStack_3e8 = unaff_x27;
  ppuStack_3e0 = unaff_x26;
  ppuStack_3d8 = unaff_x25;
  ppuStack_3d0 = unaff_x24;
  ppuStack_3c8 = unaff_x23;
  ppuStack_3c0 = unaff_x22;
  ppuStack_3b8 = ppuVar10;
  ppuStack_3b0 = ppuVar9;
  ppuStack_3a8 = ppuVar11;
  pppuStack_3a0 = &ppuStack_270;
  _objc_retain();
  lStack_5f8 = 0;
  uStack_600 = 0;
  uStack_5e8 = 0;
  puStack_5f0 = (undefined8 *)0x0;
  uStack_5d8 = 0;
  uStack_5e0 = 0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  _objc_retain(ppuVar8);
  ppuVar11 = ppuVar8;
  func_0x00010bf52a60(ppuVar8,param_2,&uStack_600,auStack_500,0x10);
  ppuStack_658 = ppuVar11;
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar9 = (undefined **)*puStack_5f0;
    ppuStack_660 = ppuVar9;
    ppuStack_648 = ppuVar8;
    do {
      ppuVar10 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_5f0 != ppuVar9) {
          _objc_enumerationMutation(ppuVar8);
        }
        unaff_x22 = *(undefined ***)(lStack_5f8 + (long)ppuVar10 * 8);
        lStack_638 = 0;
        uStack_640 = 0;
        uStack_628 = 0;
        plStack_630 = (long *)0x0;
        uStack_618 = 0;
        uStack_620 = 0;
        uStack_608 = 0;
        uStack_610 = 0;
        ppuStack_650 = ppuVar10;
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = unaff_x22;
        func_0x00010c0ff660();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x22);
        ppuVar11 = ppuVar10;
        func_0x00010bf52a60(ppuVar10,param_2,&uStack_640,auStack_580,0x10);
        if (ppuVar11 != (undefined **)0x0) {
          lVar12 = *plStack_630;
          unaff_x22 = ppuVar11;
          do {
            ppuVar9 = (undefined **)0x0;
            do {
              if (*plStack_630 != lVar12) {
                _objc_enumerationMutation(ppuVar10);
              }
              unaff_x23 = *(undefined ***)(lStack_638 + (long)ppuVar9 * 8);
              ppuVar11 = unaff_x23;
              func_0x00010c08c3a0();
              if ((int)ppuVar11 == 1) {
                func_0x00010c0c3fe0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar11 = unaff_x23;
                func_0x00010c0ed200();
                if ((int)ppuVar11 == 0x23) {
                  ppuVar11 = unaff_x23;
                  func_0x00010beff040();
                  _objc_retainAutoreleasedReturnValue();
LAB_107d62120:
                  _objc_release(unaff_x23);
                  if (ppuVar11 != (undefined **)0x0) {
                    _objc_release(ppuVar10);
                    ppuVar8 = ppuStack_648;
                    goto LAB_107d621a4;
                  }
                }
                else {
                  uStack_598 = 0;
                  uStack_5a0 = 0;
                  uStack_588 = 0;
                  uStack_590 = 0;
                  lStack_5b8 = 0;
                  uStack_5c0 = 0;
                  uStack_5a8 = 0;
                  plStack_5b0 = (long *)0x0;
                  unaff_x24 = unaff_x23;
                  func_0x00010befd2c0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar11 = unaff_x24;
                  func_0x00010bf52a60();
                  if (ppuVar11 != (undefined **)0x0) {
                    lVar13 = *plStack_5b0;
                    do {
                      ppuVar8 = (undefined **)0x0;
                      do {
                        if (*plStack_5b0 != lVar13) {
                          _objc_enumerationMutation(unaff_x24);
                        }
                        unaff_x26 = *(undefined ***)(lStack_5b8 + (long)ppuVar8 * 8);
                        ppuVar2 = unaff_x26;
                        func_0x00010c0ed200();
                        if ((int)ppuVar2 == 8) {
                          ppuVar11 = unaff_x26;
                          func_0x00010beff040();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(unaff_x24);
                          goto LAB_107d62120;
                        }
                        ppuVar8 = (undefined **)((long)ppuVar8 + 1);
                      } while (ppuVar11 != ppuVar8);
                      ppuVar11 = unaff_x24;
                      func_0x00010bf52a60(unaff_x24,param_2,&uStack_5c0,auStack_480,0x10);
                    } while (ppuVar11 != (undefined **)0x0);
                  }
                  _objc_release(unaff_x24);
                  _objc_release(unaff_x23);
                }
              }
              ppuVar9 = (undefined **)((long)ppuVar9 + 1);
            } while (ppuVar9 != unaff_x22);
            unaff_x22 = ppuVar10;
            func_0x00010bf52a60(ppuVar10,param_2,&uStack_640,auStack_580,0x10);
          } while (unaff_x22 != (undefined **)0x0);
        }
        _objc_release(ppuVar10);
        ppuVar8 = ppuStack_648;
        ppuVar9 = ppuStack_660;
        ppuVar10 = (undefined **)((long)ppuStack_650 + 1);
      } while (ppuVar10 != ppuStack_658);
      ppuVar11 = ppuStack_648;
      func_0x00010bf52a60(ppuStack_648,param_2,&uStack_600,auStack_500,0x10);
      ppuStack_658 = ppuVar11;
    } while (ppuVar11 != (undefined **)0x0);
  }
  ppuVar11 = (undefined **)0x0;
LAB_107d621a4:
  _objc_release(ppuVar8);
  ppuVar2 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_400) {
    ___stack_chk_fail();
    pcStack_668 = FUN_107d621f4;
    lStack_6b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_6b0 = unaff_x26;
    ppuStack_6a8 = ppuVar11;
    ppuStack_6a0 = unaff_x24;
    ppuStack_698 = unaff_x23;
    ppuStack_690 = unaff_x22;
    ppuStack_688 = ppuVar10;
    ppuStack_680 = ppuVar9;
    ppuStack_678 = ppuVar8;
    pppuStack_670 = &pppuStack_3a0;
    _objc_retain();
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar11 = (undefined **)0x0;
    }
    else {
      ppuStack_708 = &PTR____CFConstantStringClassReference_110ebbbb8;
      ppuVar10 = ppuVar2;
      func_0x00010bfc1060();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar1 = (int)ppuVar10 - 1;
      if (uVar1 < 0xb) {
        ppuStack_6e0 = (undefined **)(&PTR_PTR_110a0b228)[uVar1];
      }
      else {
        ppuStack_6e0 = &PTR____CFConstantStringClassReference_110ebbdb8;
      }
      ppuStack_700 = &PTR____CFConstantStringClassReference_110ebbbd8;
      ppuVar10 = ppuVar2;
      func_0x00010c0eeb60(ppuVar2);
      func_0x00010c0df820(puVar3,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_6f8 = &PTR____CFConstantStringClassReference_110ebbbf8;
      ppuVar10 = ppuVar2;
      puStack_6d8 = puVar3;
      func_0x00010c0657e0(ppuVar2);
      func_0x00010c0df820(puVar4,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_6f0 = &PTR____CFConstantStringClassReference_110ebbc18;
      ppuVar10 = ppuVar2;
      puStack_6d0 = puVar4;
      func_0x00010beff020();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_6c8 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar10 != (undefined **)0x0) {
        ppuStack_6c8 = ppuVar10;
      }
      ppuStack_6e8 = &PTR____CFConstantStringClassReference_110ebbc38;
      ppuVar11 = ppuVar2;
      func_0x00010c156ec0(ppuVar2);
      func_0x00010c0df6e0(puVar5,param_2,ppuVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_6c0 = puVar5;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_6e0,
                          &ppuStack_708,5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0d3c80();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(ppuVar10);
      _objc_release(puVar4);
      _objc_release(puVar3);
      ppuVar10 = ppuVar2;
      func_0x00010bf0a3e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar10;
      func_0x00010c08fa60();
      _objc_release(ppuVar10);
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar10 = ppuVar2;
        func_0x00010bf0a3e0(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7,param_2,ppuVar10,&PTR____CFConstantStringClassReference_110ebbc58
                           );
        _objc_release(ppuVar10);
      }
      puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar7,2,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = &PTR____CFConstantStringClassReference_110e03918;
      if (puVar3 != (undefined *)0x0) {
        ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc();
        func_0x00010c008340();
        if (ppuVar10 != (undefined **)0x0) {
          ppuVar11 = ppuVar10;
        }
        _objc_retain(ppuVar11);
        _objc_release(ppuVar10);
      }
      _objc_release(puVar3);
      _objc_release(puVar7);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6b8) {
      ___stack_chk_fail();
      func_0x00010bf50900();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar2;
      func_0x00010bf2c1e0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar10 == (undefined **)0x0) {
        ppuVar11 = (undefined **)0x0;
      }
      else {
        ppuVar11 = ppuVar10;
        func_0x00010c078c20(ppuVar10);
        ppuVar11 = (undefined **)(ulong)((uint)ppuVar11 ^ 1);
      }
      _objc_release(ppuVar10);
      _objc_release(ppuVar2);
      return ppuVar11;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
  return ppuVar11;
}



/* Entry: 107d621f4; end: 107d624a7;  */

undefined ** FUN_107d621f4(undefined **param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == (undefined **)0x0) {
    ppuVar7 = (undefined **)0x0;
  }
  else {
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110ebbbb8;
    ppuVar7 = param_1;
    func_0x00010bfc1060();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = (int)ppuVar7 - 1;
    if (uVar1 < 0xb) {
      ppuStack_80 = (undefined **)(&PTR_PTR_110a0b228)[uVar1];
    }
    else {
      ppuStack_80 = &PTR____CFConstantStringClassReference_110ebbdb8;
    }
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110ebbbd8;
    ppuVar7 = param_1;
    func_0x00010c0eeb60(param_1);
    func_0x00010c0df820(puVar2,param_2,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110ebbbf8;
    ppuVar7 = param_1;
    puStack_78 = puVar2;
    func_0x00010c0657e0(param_1);
    func_0x00010c0df820(puVar3,param_2,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = &PTR____CFConstantStringClassReference_110ebbc18;
    ppuVar7 = param_1;
    puStack_70 = puVar3;
    func_0x00010beff020();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar7 != (undefined **)0x0) {
      ppuStack_68 = ppuVar7;
    }
    ppuStack_88 = &PTR____CFConstantStringClassReference_110ebbc38;
    ppuVar8 = param_1;
    func_0x00010c156ec0(param_1);
    func_0x00010c0df6e0(puVar4,param_2,ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_80,&ppuStack_a8,5
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0d3c80();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(ppuVar7);
    _objc_release(puVar3);
    _objc_release(puVar2);
    ppuVar7 = param_1;
    func_0x00010bf0a3e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c08fa60();
    _objc_release(ppuVar7);
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar7 = param_1;
      func_0x00010bf0a3e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar6,param_2,ppuVar7,&PTR____CFConstantStringClassReference_110ebbc58);
      _objc_release(ppuVar7);
    }
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar6,2,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_110e03918;
    if (puVar2 != (undefined *)0x0) {
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      func_0x00010c008340();
      if (ppuVar8 != (undefined **)0x0) {
        ppuVar7 = ppuVar8;
      }
      _objc_retain(ppuVar7);
      _objc_release(ppuVar8);
    }
    _objc_release(puVar2);
    _objc_release(puVar6);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
    return ppuVar7;
  }
  ___stack_chk_fail();
  func_0x00010bf50900();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_1;
  func_0x00010bf2c1e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar7 == (undefined **)0x0) {
    ppuVar8 = (undefined **)0x0;
  }
  else {
    ppuVar8 = ppuVar7;
    func_0x00010c078c20(ppuVar7);
    ppuVar8 = (undefined **)(ulong)((uint)ppuVar8 ^ 1);
  }
  _objc_release(ppuVar7);
  _objc_release(param_1);
  return ppuVar8;
}



/* Entry: 107d624a8; end: 107d62513; -[SCNMessagingConversation isCampaignConversation] */

uint FUN_107d624a8(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  func_0x00010bf50900();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf2c1e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c078c20(lVar1);
    uVar3 = (uint)lVar2 ^ 1;
  }
  _objc_release(lVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 107d62514; end: 107d62573; -[SCNMessagingConversation isCampaignResponseInteractionDisabled] */

bool FUN_107d62514(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf50900();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf2c1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c13b940();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 == 4;
}



/* Entry: 107d62574; end: 107d625d7; -[SCNMessagingConversation adResponseBytes] */

void FUN_107d62574(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf50900();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf2c1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef4a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d625d8; end: 107d6263b; -[SCNMessagingConversation chatHeadline] */

void FUN_107d625d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf50900();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf2c1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf367c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d6263c; end: 107d62657; -[SCNMessagingConversation isCommunity] */

bool FUN_107d6263c(long param_1)

{
  func_0x00010bf33620();
  return param_1 == 1;
}



/* Entry: 107d62658; end: 107d626b3; -[SCNMessagingConversation communityId] */

void FUN_107d62658(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c06ecc0();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bf33480(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d626b4; end: 107d626f7; -[SCNMessagingConversation conversationIdString] */

void FUN_107d626b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d626f8; end: 107d62737; -[SCNMessagingConversation hasSummarizedUserListsEnabled] */

bool FUN_107d626f8(long param_1)

{
  long lVar1;
  
  func_0x00010c0cc440();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c292c80();
  _objc_release(param_1);
  return lVar1 == 1;
}



/* Entry: 107d62738; end: 107d62753; -[SCNMessagingConversation isGroupConversation] */

bool FUN_107d62738(long param_1)

{
  func_0x00010bf509a0();
  return param_1 == 1;
}



/* Entry: 107d62754; end: 107d62903; -[SCNMessagingConversation recipientUserIdForOneOnOneWithCurrentUserId:] */

long FUN_107d62754(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        lVar5 = *(long *)(lStack_128 + lVar7 * 8);
        lVar3 = lVar5;
        func_0x00010c0f4a60();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c071ae0();
        _objc_release(lVar3);
        if ((int)lVar4 == 0) {
          func_0x00010c0f4a60(lVar5);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar5;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          _objc_release(param_1);
          goto LAB_107d628b4;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  _objc_retain(param_3);
  lVar2 = param_3;
LAB_107d628b4:
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return lVar2;
  }
  ___stack_chk_fail();
  func_0x00010c13e040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c1218e0();
  _objc_release(param_3);
  return lVar2 / 0x3c;
}



/* Entry: 107d62904; end: 107d62953; -[SCNMessagingConversation readRetentionInMinutes] */

long FUN_107d62904(long param_1)

{
  long lVar1;
  
  func_0x00010c13e040();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c1218e0();
  _objc_release(param_1);
  return lVar1 / 0x3c;
}



/* Entry: 107d62954; end: 107d629bf; -[SCNMessagingConversation messageRetentionInMinutes] */

long FUN_107d62954(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c074920();
  func_0x00010c13e040(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  if ((uVar1 & 1) == 0) {
    func_0x00010c1218e0();
  }
  else {
    func_0x00010c281ee0();
  }
  _objc_release(param_1);
  return (long)uVar2 / 0x3c;
}



/* Entry: 107d629c0; end: 107d62a6f; -[SCNMessagingConversation messageRetentionMode] */

void FUN_107d629c0(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010c13e040();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfed7a0();
  _objc_release(param_1);
  if ((uVar1 & 1) == 0) {
    func_0x00010c1218c0();
  }
  return;
}



/* Entry: 107d62a70; end: 107d62aa7; -[SCNMessagingConversation isLockedConversation] */

void FUN_107d62a70(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c09ff80();
  if (lVar1 != 1) {
    func_0x00010c09ff80(param_1);
  }
  return;
}



/* Entry: 107d62aa8; end: 107d62ac3; -[SCNMessagingConversation isAckedLockedConversation] */

bool FUN_107d62aa8(long param_1)

{
  func_0x00010c09ff80();
  return param_1 == 2;
}



/* Entry: 107d62ac4; end: 107d62b2b; -[SCNMessagingConversation conversationSubtype] */

long FUN_107d62ac4(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1;
  func_0x00010bf508e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010bf508e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c067fc0();
    _objc_release(param_1);
    lVar2 = 0;
    if (uVar1 < 9) {
      lVar2 = uVar1 + 1;
    }
  }
  return lVar2;
}



/* Entry: 107d62b2c; end: 107d62c8f;  */

void FUN_107d62b2c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  lVar7 = param_2;
  func_0x00010c0c6260();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  if (lVar2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x00010c0c6260();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar7 = *(long *)(lVar8 * 8);
        lVar4 = lVar7;
        func_0x00010c0c55e0();
        if (lVar4 == param_1) {
          _objc_retain(lVar7);
          goto LAB_107d62c3c;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
    lVar7 = 0;
LAB_107d62c3c:
    _objc_release(lVar3);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  func_0x000100be72f0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2baf80(lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 107d62c90; end: 107d62ceb;  */

void FUN_107d62c90(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x000100be72f0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2baf80(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d62cec; end: 107d62d37; -[SCNMessagingMessage isChatReply] */

bool FUN_107d62cec(long param_1)

{
  long lVar1;
  
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c11ec40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 107d62d38; end: 107d62daf; -[SCNMessagingMessage isQuotedMessageAvailable] */

bool FUN_107d62d38(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010c06e660();
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c0cb340(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c11ec40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c252d60();
    bVar1 = lVar3 == 1;
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  return bVar1;
}



/* Entry: 107d62db0; end: 107d62e4b; -[SCNMessagingMessage chatReplySenderId] */

void FUN_107d62db0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c11ec40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15de20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107d62e4c; end: 107d62efb; -[SCNMessagingMessage chatReplyMessageId] */

void FUN_107d62e4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c11ec40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0cb5a0();
  func_0x00010c0df7c0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107d62efc; end: 107d62fd7; -[SCNMessagingMessage chatReplyIsOpenedBy:] */

undefined8 FUN_107d62efc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  func_0x00010c0cb340(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c11ec40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e9d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar3;
  func_0x00010bf4b900(uVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar3);
  return uVar1;
}



/* Entry: 107d62fd8; end: 107d6304b; -[SCNMessagingMessage chatReplyIsSaved] */

undefined8 FUN_107d62fd8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c11ec40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07d080();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 107d6304c; end: 107d630df; -[SCNMessagingMessage chatReplyIsViewableAfterOpening] */

bool FUN_107d6304c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c11ec40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = uVar2;
  func_0x00010c242620(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  _objc_release(uVar2);
  return (int)uVar3 == 1;
}



/* Entry: 107d630e0; end: 107d631a3; -[SCNMessagingMessage hasQuotedSnapMessage] */

bool FUN_107d630e0(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c11ec40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_1);
  uVar2 = uVar3;
  func_0x00010bf4ce20();
  if ((int)uVar2 == 0xb) {
    bVar1 = true;
  }
  else {
    uVar2 = uVar3;
    func_0x00010bf4ce20();
    if ((int)uVar2 == 7) {
      uVar2 = uVar3;
      func_0x00010c242c40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c131be0();
      bVar1 = (int)uVar4 == 0x11;
      _objc_release(uVar2);
    }
    else {
      bVar1 = false;
    }
  }
  _objc_release(uVar3);
  return bVar1;
}



/* Entry: 107d631a4; end: 107d6323f; -[SCNMessagingMessage isQuotedViewableSnap:] */

ulong FUN_107d631a4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf37460();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010bf37440(), (int)uVar1 == 0)) {
    param_1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf374c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      func_0x00010bf37420(param_1,param_2,param_3);
    }
    else {
      param_1 = 1;
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107d63240; end: 107d632e3; -[SCNMessagingMessage quotedContents] */

void FUN_107d63240(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c11ec40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010c0cb340(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c11ec40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107d632e4; end: 107d6335b; -[SCNMessagingMessage consistentId] */

void FUN_107d632e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf6e760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0cb5a0();
  func_0x00010c0df7c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d6335c; end: 107d6339f; -[SCNMessagingMessage analyticsMessageId] */

void FUN_107d6335c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0cb200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf026e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d633a0; end: 107d63403; -[SCNMessagingMessage conversationId] */

void FUN_107d633a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf6e760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d63404; end: 107d6343f; -[SCNMessagingMessage type] */

undefined8 FUN_107d63404(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000100be58bc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107d63440; end: 107d6347b; -[SCNMessagingMessage mediaType] */

undefined8 FUN_107d63440(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0c6c20();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107d6347c; end: 107d63637; -[SCNMessagingMessage mediaForId:] */

void FUN_107d6347c(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c131d80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010c0720c0();
  _objc_release(uVar12);
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    func_0x00010c0c72c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar2 != 0) {
      uVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar11 = *(ulong *)(uVar12 * 8);
        uVar3 = uVar11;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) {
          _objc_retain(uVar11);
          _objc_release(param_1);
          goto LAB_107d635f0;
        }
        uVar12 = uVar12 + 1;
      } while (uVar2 != uVar12);
      uVar2 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    uVar11 = 0;
  }
  else {
    func_0x00010c131d80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_1;
  }
LAB_107d635f0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    uVar11 = param_3;
    _objc_getAssociatedObject();
    _objc_retainAutoreleasedReturnValue();
    if (uVar11 == 0) {
      uVar2 = param_3;
      func_0x00010bf4df40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_3;
      func_0x00010c0cb340();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar12;
      func_0x00010c12a260();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c0cb340(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c26df20();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010c0cb9a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_3;
      func_0x00010c0cb8c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar2;
      FUN_107d604b4(uVar2,uVar4,uVar7,uVar8,uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar12);
      _objc_release(uVar2);
      _objc_setAssociatedObject(param_3,&UNK_10f45a114,uVar11,0x301);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
  return;
}



/* Entry: 107d63638; end: 107d637c3; -[SCNMessagingMessage replyMedia] */

void FUN_107d63638(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar1 = param_1;
  _objc_getAssociatedObject(param_1,&UNK_10f45a114);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x00010bf4df40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c12a260();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c0cb340(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c26df20();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c0cb9a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c0cb8c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    FUN_107d604b4(lVar2,lVar5,lVar8,lVar9,lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_setAssociatedObject(param_1,&UNK_10f45a114,lVar1,0x301);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107d637c4; end: 107d63817; -[SCNMessagingMessage hasSpectaclesMedia] */

uint FUN_107d637c4(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0c6c20();
  _objc_release(param_1);
  return (uint)(uVar1 < 0x16) & 0x3ff6b0U >> (ulong)((uint)uVar1 & 0x1f);
}



/* Entry: 107d63818; end: 107d639c3; -[SCNMessagingMessage reactionsForUserId:] */

void FUN_107d63818(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c120dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010c120dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x107d638f8;
    puStack_40 = &UNK_110a0b280;
    _objc_retain(param_3);
    lVar2 = param_1;
    uStack_38 = param_3;
    func_0x000100504554(param_1,&puStack_58);
    _objc_release(uStack_38);
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107d639c4; end: 107d63cab; -[SCNMessagingMessage reactionIdForUserId:reactionContent:] */

ulong FUN_107d639c4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong unaff_x22;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x27;
  ulong unaff_x28;
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
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  uint uStack_13c;
  ulong uStack_138;
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
  _objc_retain(param_4);
  func_0x00010c120ea0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain();
  lStack_148 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_f0,0x10);
  if (param_1 != 0) {
    lVar4 = *plStack_120;
    do {
      lVar5 = 0;
      do {
        if (*plStack_120 != lVar4) {
          _objc_enumerationMutation(lStack_148);
        }
        uVar7 = *(ulong *)(lStack_128 + lVar5 * 8);
        unaff_x22 = uVar7;
        func_0x00010c120a80();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_4;
        func_0x00010c0682a0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar1 == 0) {
          unaff_x28 = 0;
        }
        else {
          uVar6 = unaff_x22;
          func_0x00010c0682a0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar6 == 0) {
            unaff_x28 = 0;
          }
          else {
            uVar3 = param_4;
            func_0x00010c0682a0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = unaff_x22;
            func_0x00010c0682a0(unaff_x22);
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = uVar3;
            func_0x00010c071f40(uVar3,param_2,uVar2);
            _objc_release(uVar2);
            _objc_release(uVar3);
          }
          _objc_release(uVar6);
        }
        _objc_release(uVar1);
        uVar1 = param_4;
        func_0x00010bf8e2c0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar1;
        func_0x00010c08fa60();
        if (uVar6 == 0) {
          unaff_x27 = 0;
        }
        else {
          uVar6 = unaff_x22;
          func_0x00010bf8e2c0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          func_0x00010c08fa60();
          if (uVar3 == 0) {
            unaff_x27 = 0;
          }
          else {
            uVar3 = param_4;
            func_0x00010bf8e2c0();
            _objc_retainAutoreleasedReturnValue();
            uStack_13c = (uint)unaff_x28;
            uVar2 = unaff_x22;
            func_0x00010bf8e2c0(unaff_x22);
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = uVar3;
            uStack_138 = uVar7;
            func_0x00010c0720c0(uVar3,param_2,uVar2);
            uVar7 = uStack_138;
            _objc_release(uVar2);
            unaff_x28 = (ulong)uStack_13c;
            _objc_release(uVar3);
          }
          _objc_release(uVar6);
        }
        _objc_release(uVar1);
        if ((((uint)unaff_x28 | (uint)unaff_x27) & 1) != 0) {
          func_0x00010c120b60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x22);
          goto LAB_107d63c50;
        }
        _objc_release(unaff_x22);
        lVar5 = lVar5 + 1;
      } while (param_1 != lVar5);
      param_1 = lStack_148;
      func_0x00010bf52a60(lStack_148,param_2,&uStack_130,auStack_f0,0x10);
    } while (param_1 != 0);
  }
  uVar7 = 0;
LAB_107d63c50:
  lVar4 = lStack_148;
  _objc_release(lStack_148);
  _objc_release(lVar4);
  uVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return uVar7;
  }
  ___stack_chk_fail();
  lStack_170 = lVar4;
  pcStack_158 = FUN_107d63cac;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_190 = unaff_x28;
  uStack_188 = unaff_x27;
  uStack_180 = unaff_x22;
  uStack_178 = uVar7;
  uStack_168 = param_4;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x00010c120ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bf529e0();
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    _objc_retain(uVar1);
    uVar7 = uVar1;
    func_0x00010bf52a60(uVar1,param_2,&uStack_260,auStack_218,0x10);
    if (uVar7 != 0) {
      lVar4 = *plStack_250;
      do {
        uVar6 = 0;
        do {
          if (*plStack_250 != lVar4) {
            _objc_enumerationMutation(uVar1);
          }
          uVar3 = *(ulong *)(lStack_258 + uVar6 * 8);
          func_0x00010c281e00();
          if ((uVar3 & 1) != 0) {
            uVar7 = 0;
            goto LAB_107d63d84;
          }
          uVar6 = uVar6 + 1;
        } while (uVar7 != uVar6);
        uVar7 = uVar1;
        func_0x00010bf52a60(uVar1,param_2,&uStack_260,auStack_218,0x10);
      } while (uVar7 != 0);
    }
    uVar7 = 1;
LAB_107d63d84:
    _objc_release(uVar1);
  }
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return uVar7;
  }
  ___stack_chk_fail();
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c07bba0();
  _objc_release(uVar1);
  return uVar7;
}



/* Entry: 107d63cac; end: 107d63dd3; -[SCNMessagingMessage isReactionReadBySelfFromParticipant:] */

long FUN_107d63cac(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  func_0x00010c120ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    _objc_retain(param_1);
    lVar2 = param_1;
    func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    if (lVar2 != 0) {
      lVar3 = *plStack_100;
      do {
        lVar4 = 0;
        do {
          if (*plStack_100 != lVar3) {
            _objc_enumerationMutation(param_1);
          }
          uVar1 = *(ulong *)(lStack_108 + lVar4 * 8);
          func_0x00010c281e00();
          if ((uVar1 & 1) != 0) {
            lVar2 = 0;
            goto LAB_107d63d84;
          }
          lVar4 = lVar4 + 1;
        } while (lVar2 != lVar4);
        lVar2 = param_1;
        func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar2 != 0);
    }
    lVar2 = 1;
LAB_107d63d84:
    _objc_release(param_1);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar2;
  }
  ___stack_chk_fail();
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c07bba0();
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 107d63dd4; end: 107d63e0f; -[SCNMessagingMessage isReactable] */

undefined8 FUN_107d63dd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07bba0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107d63e10; end: 107d63e53; -[SCNMessagingMessage reactions] */

void FUN_107d63e10(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c120dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d63e54; end: 107d64033; -[SCNMessagingMessage hasUnreadReactionForLatestSeenReactionId:currentUserId:] */

long FUN_107d63e54(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long lVar8;
  long lVar9;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long lVar10;
  long unaff_x28;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 auStack_358 [128];
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
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
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  long lStack_138;
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
  lStack_140 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar9 = param_1;
  func_0x00010c120dc0();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = lVar9;
  func_0x00010bf52a60();
  lVar3 = 0;
  if (lVar9 != 0) {
    unaff_x19 = *plStack_120;
    do {
      param_1 = 0;
      do {
        if (*plStack_120 != unaff_x19) {
          _objc_enumerationMutation(lStack_138);
        }
        unaff_x25 = *(long *)(lStack_128 + param_1 * 8);
        unaff_x23 = unaff_x25;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_4;
        func_0x00010c0720c0(param_4,param_2,unaff_x24);
        if ((int)uVar1 == 0) {
          func_0x00010c1209e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010c120b60();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010c0b4ca0();
          unaff_x28 = lStack_140;
          func_0x00010c0b4ca0();
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
          if (unaff_x28 < unaff_x27) {
            lVar3 = 1;
            goto LAB_107d63fdc;
          }
        }
        else {
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
        }
        param_1 = param_1 + 1;
      } while (lVar9 != param_1);
      lVar9 = lStack_138;
      func_0x00010bf52a60(lStack_138,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar9 != 0);
    lVar3 = 0;
  }
LAB_107d63fdc:
  _objc_release(lStack_138);
  _objc_release(param_4);
  lVar9 = lStack_140;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar3;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_107d64034;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  lStack_190 = unaff_x26;
  lStack_188 = unaff_x25;
  lStack_180 = unaff_x24;
  lStack_178 = unaff_x23;
  lStack_170 = lVar3;
  lStack_168 = param_1;
  uStack_160 = param_4;
  lStack_158 = unaff_x19;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010c120dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    unaff_x25 = *plStack_260;
    do {
      unaff_x26 = 0;
      do {
        if (*plStack_260 != unaff_x25) {
          _objc_enumerationMutation(lVar9);
        }
        lVar3 = *(long *)(lStack_268 + unaff_x26 * 8);
        func_0x00010c1209e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = lVar3;
        func_0x00010c120a80();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010c0682a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(unaff_x23);
        _objc_release(lVar3);
        if (unaff_x24 != 0) {
          lVar8 = lVar8 + 1;
        }
        unaff_x26 = unaff_x26 + 1;
      } while (lVar2 != unaff_x26);
      lVar2 = lVar9;
      func_0x00010bf52a60(lVar9,param_2,&uStack_270,auStack_228,0x10);
    } while (lVar2 != 0);
    param_1 = 0;
  }
  lVar2 = lVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
    ___stack_chk_fail();
    pcStack_278 = FUN_107d6418c;
    lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    plStack_390 = (long *)0x0;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    lStack_2d0 = unaff_x28;
    lStack_2c8 = unaff_x27;
    lStack_2c0 = unaff_x26;
    lStack_2b8 = unaff_x25;
    lStack_2b0 = unaff_x24;
    lStack_2a8 = unaff_x23;
    lStack_2a0 = lVar3;
    lStack_298 = param_1;
    lStack_290 = lVar8;
    lStack_288 = lVar9;
    ppuStack_280 = &puStack_150;
    func_0x00010c120dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      lVar8 = *plStack_390;
      do {
        lVar10 = 0;
        do {
          if (*plStack_390 != lVar8) {
            _objc_enumerationMutation(lVar2);
          }
          lVar4 = *(long *)(lStack_398 + lVar10 * 8);
          func_0x00010c1209e0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c120a80();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010bf8e2c0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c08fa60();
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
          if (lVar7 != 0) {
            lVar9 = lVar9 + 1;
          }
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_3a0,auStack_358,0x10);
      } while (lVar3 != 0);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d8) {
      ___stack_chk_fail();
      lVar3 = lVar2;
      func_0x00010c07d100();
      if ((int)lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        func_0x00010bf4df40(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar2;
        func_0x00010c22a700();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar9;
        func_0x00010c14bb40();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar8;
        func_0x00010c259640();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar10;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
        _objc_release(lVar8);
        _objc_release(lVar9);
        _objc_release(lVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
      return lVar3;
    }
    return lVar9;
  }
  return lVar8;
}



/* Entry: 107d64034; end: 107d6418b; -[SCNMessagingMessage numberOfBitmojiReactions] */

long FUN_107d64034(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c120dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf52a60();
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        lVar1 = *(long *)(lStack_128 + lVar8 * 8);
        func_0x00010c1209e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c120a80();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c0682a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar2);
        _objc_release(lVar1);
        if (lVar3 != 0) {
          lVar6 = lVar6 + 1;
        }
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar5 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar6;
  }
  ___stack_chk_fail();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  func_0x00010c120dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf52a60();
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    lVar7 = *plStack_250;
    do {
      lVar8 = 0;
      do {
        if (*plStack_250 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        lVar4 = *(long *)(lStack_258 + lVar8 * 8);
        func_0x00010c1209e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar4;
        func_0x00010c120a80();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf8e2c0();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar3;
        func_0x00010c08fa60();
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar4);
        if (lVar1 != 0) {
          lVar6 = lVar6 + 1;
        }
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_260,auStack_218,0x10);
    } while (lVar5 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
    ___stack_chk_fail();
    lVar5 = param_1;
    func_0x00010c07d100();
    if ((int)lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      func_0x00010bf4df40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010c22a700();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c14bb40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c259640();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar8;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
    return lVar5;
  }
  return lVar6;
}



/* Entry: 107d6418c; end: 107d642ef; -[SCNMessagingMessage numberOfEmojiReactions] */

long FUN_107d6418c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c120dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf52a60();
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        lVar1 = *(long *)(lStack_128 + lVar8 * 8);
        func_0x00010c1209e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c120a80();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf8e2c0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08fa60();
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar1);
        if (lVar4 != 0) {
          lVar6 = lVar6 + 1;
        }
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar5 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar5 = param_1;
    func_0x00010c07d100();
    if ((int)lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      func_0x00010bf4df40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010c22a700();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c14bb40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c259640();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar8;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
    return lVar5;
  }
  return lVar6;
}



/* Entry: 107d642f0; end: 107d643a3; -[SCNMessagingMessage savedStoryPosterId] */

void FUN_107d642f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_1;
  func_0x00010c07d100();
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x00010bf4df40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c14bb40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c259640();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107d643a4; end: 107d6442b; -[SCNMessagingMessage isSavedStoryMediaPresent] */

void FUN_107d643a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c07d100();
  if ((int)uVar1 != 0) {
    func_0x00010c0cb340(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0cba20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c22ac40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25a420();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 107d6442c; end: 107d644bb; -[SCNMessagingMessage isSavedStoryMediaImage] */

bool FUN_107d6442c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010c07d100();
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0c72c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 == 1) {
      func_0x00010c0c3fe0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c0c6c20();
      bVar1 = lVar3 == 0;
      _objc_release(param_1);
    }
    else {
      bVar1 = false;
    }
    _objc_release(lVar2);
  }
  return bVar1;
}



/* Entry: 107d644bc; end: 107d64607;  */

uint FUN_107d644bc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c07ea80();
  if (((int)lVar1 != 0) &&
     ((lVar1 = param_1, func_0x00010c07d940(), (param_3 & 1) != 0 || ((int)lVar1 == 0)))) {
    lVar1 = param_1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0c56c0();
    _objc_release(lVar1);
    if (lVar2 != -1) {
      lVar1 = param_1;
      func_0x00010c243480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar2 = param_1;
      func_0x00010c076bc0(param_1);
      lVar3 = param_1;
      func_0x00010c243480();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c100380();
      if (lVar4 == 0) {
        lVar4 = param_1;
        func_0x00010c0791e0(param_1);
        uVar5 = (uint)lVar4 ^ 1;
      }
      else {
        uVar5 = 0;
      }
      _objc_release(lVar3);
      lVar3 = param_1;
      func_0x00010c243480(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c100380();
      _objc_release(lVar3);
      uVar5 = (uint)(lVar1 == 0 || lVar4 == 1) | (uint)lVar2 | uVar5;
      goto LAB_107d64588;
    }
  }
  uVar5 = 0;
LAB_107d64588:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar5 & 1;
}



/* Entry: 107d64608; end: 107d64697; -[SCNMessagingMessage isSnapMessage] */

bool FUN_107d64608(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4ce20();
  if ((int)uVar2 == 0xb) {
    bVar1 = true;
  }
  else {
    uVar2 = param_1;
    func_0x00010bf4ce20();
    if ((int)uVar2 == 7) {
      uVar2 = param_1;
      func_0x00010c242c40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c131be0();
      bVar1 = (int)uVar3 == 0x11;
      _objc_release(uVar2);
    }
    else {
      bVar1 = false;
    }
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107d64698; end: 107d64713; -[SCNMessagingMessage isOpenedAndViewableSnapForUser:] */

ulong FUN_107d64698(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c07ea80();
  if (((int)uVar1 == 0) || (uVar1 = param_1, func_0x00010c083520(), (int)uVar1 == 0)) {
    param_1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c07d940(param_1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      func_0x00010c07bc00(param_1,param_2,param_3);
    }
    else {
      param_1 = 1;
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107d64714; end: 107d6476b; -[SCNMessagingMessage isOpenedSnapForUser:] */

undefined8 FUN_107d64714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c07ea80();
  if ((int)uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010c0791e0(param_1,param_2,param_3);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107d6476c; end: 107d64817; -[SCNMessagingMessage isSavedSnapViewedByUser:] */

ulong FUN_107d6476c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c07ea80();
  if ((int)uVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0791e0(param_1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c0cb8c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      if ((int)uVar2 == 0) {
        param_1 = 0;
      }
      else {
        func_0x00010c07d080(param_1);
      }
      _objc_release(uVar1);
    }
    else {
      func_0x00010c07d080(param_1);
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107d64818; end: 107d6484b; -[SCNMessagingMessage isSavedImageSnapViewedByUser:] */

void FUN_107d64818(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07d180();
  if ((int)uVar1 != 0) {
    func_0x00010c0c6c20(param_1);
  }
  return;
}



/* Entry: 107d6484c; end: 107d64abf; -[SCNMessagingMessage snapState] */

void FUN_107d6484c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar6 = param_1;
  func_0x00010c07ea80();
  if ((int)puVar6 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = param_1;
    _objc_getAssociatedObject(param_1,&UNK_10f45a166);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      _objc_retain(param_1);
      puVar6 = param_1;
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar6;
      func_0x00010c0e9d40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010050471c();
      _objc_release(puVar1);
      _objc_release(puVar6);
      puVar6 = param_1;
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar6;
      func_0x00010c151380();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010050471c();
      _objc_release(puVar1);
      _objc_release(puVar6);
      puVar6 = param_1;
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar6;
      func_0x00010c151240();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010050471c();
      _objc_release(puVar1);
      _objc_release(puVar6);
      puVar6 = param_1;
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar6;
      func_0x00010c131740();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010050471c();
      _objc_release(puVar1);
      _objc_release(puVar6);
      puVar6 = param_1;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      puVar1 = puVar6;
      func_0x00010c0fecc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      _objc_release(puVar1);
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126d7aa0;
      _objc_alloc(PTR_PTR_1126d7aa0);
      func_0x00010c062300();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_setAssociatedObject(param_1,&UNK_10f45a166,puVar6,0x301);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107d64ac0; end: 107d64b3b; -[SCNMessagingMessage snapMetadata] */

void FUN_107d64ac0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4ce20();
  if ((int)uVar2 == 0xb) {
    uVar1 = param_1;
    func_0x00010c2453e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000100be7cfc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d64b3c; end: 107d64b9f; -[SCNMessagingMessage provenance] */

void FUN_107d64b3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2453e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1197a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d64ba0; end: 107d64c03; -[SCNMessagingMessage timing] */

void FUN_107d64ba0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2453e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c270d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d64c04; end: 107d64c67; -[SCNMessagingMessage playback] */

void FUN_107d64c04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2453e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d64c68; end: 107d64d07; -[SCNMessagingMessage isPlayable] */

bool FUN_107d64c68(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0fecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c0cc0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0fecc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    _objc_release(lVar2);
    _objc_release(param_1);
    bVar1 = lVar3 == 3;
  }
  return bVar1;
}



/* Entry: 107d64d08; end: 107d64da7; -[SCNMessagingMessage isDownloadable] */

bool FUN_107d64d08(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0fecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c0cc0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0fecc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067fc0();
    _objc_release(uVar2);
    _objc_release(param_1);
    bVar1 = uVar3 < 3;
  }
  return bVar1;
}



/* Entry: 107d64da8; end: 107d64de3; -[SCNMessagingMessage canBeReplayed] */

undefined8 FUN_107d64da8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c243480();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf2c560();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107d64de4; end: 107d64e73; -[SCNMessagingMessage isLoadedReplayableBySelf:] */

long FUN_107d64de4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c243480();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c100380();
  if (lVar2 == 0) {
    func_0x00010c121240(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf4b900();
    _objc_release(param_1);
  }
  else {
    lVar2 = 0;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 107d64e74; end: 107d64ed3; -[SCNMessagingMessage isReplayed] */

bool FUN_107d64e74(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c131740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 107d64ed4; end: 107d64f13; -[SCNMessagingMessage isViewing] */

bool FUN_107d64ed4(long param_1)

{
  long lVar1;
  
  func_0x00010c243480();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c100380();
  _objc_release(param_1);
  return lVar1 == 1;
}



/* Entry: 107d64f14; end: 107d64f73; -[SCNMessagingMessage isScreenshotted] */

bool FUN_107d64f14(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c151380();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 107d64f74; end: 107d64fff; -[SCNMessagingMessage replayCountForViewer:] */

undefined8 FUN_107d64f74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c0cc0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  FUN_107d6bf54(param_1,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107d65000; end: 107d6508f; -[SCNMessagingMessage isSnapSentFromDweb] */

bool FUN_107d65000(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4ce20();
  if ((int)uVar2 == 0xb) {
    uVar2 = param_1;
    func_0x00010c2453e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1197a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c247c60();
    bVar1 = (int)uVar4 == 7;
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107d65090; end: 107d650ef; -[SCNMessagingMessage isViewableAfterOpening] */

bool FUN_107d65090(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c242620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return (int)uVar2 == 1;
}



/* Entry: 107d650f0; end: 107d65163; -[SCNMessagingMessage isMultiSnap] */

undefined8 FUN_107d650f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4ce20();
  if ((int)uVar2 == 0xb) {
    uVar1 = param_1;
    func_0x00010c2453e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd84a0();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107d65164; end: 107d65207; -[SCNMessagingMessage isLastSnapInMultiSnap] */

bool FUN_107d65164(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4ce20();
  if ((int)uVar2 == 0xb) {
    uVar2 = param_1;
    func_0x00010c2453e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08f220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010c0eede0(uVar3);
    uVar4 = uVar3;
    func_0x00010c0eebe0(uVar3);
    bVar1 = (int)uVar2 == (int)uVar4 + -1;
    _objc_release(uVar3);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107d65208; end: 107d65297; -[SCNMessagingMessage isFirstSnapInMultiSnap] */

bool FUN_107d65208(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4ce20();
  if ((int)uVar2 == 0xb) {
    uVar2 = param_1;
    func_0x00010c2453e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08f220();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0eede0();
    bVar1 = (int)uVar4 == 0;
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107d65298; end: 107d6549f; -[SCNMessagingMessage isGenAISnap] */

undefined * FUN_107d65298(undefined *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *puVar10;
  undefined *unaff_x26;
  long unaff_x27;
  undefined *puVar11;
  undefined *unaff_x28;
  long lVar12;
  undefined8 uStack_860;
  long lStack_858;
  long *plStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined1 auStack_818 [128];
  long lStack_798;
  undefined *puStack_790;
  undefined *puStack_788;
  undefined *puStack_780;
  undefined *puStack_778;
  undefined *puStack_770;
  undefined *puStack_768;
  undefined *puStack_760;
  undefined *puStack_758;
  undefined8 **ppuStack_750;
  code *pcStack_748;
  undefined8 uStack_740;
  long lStack_738;
  undefined8 *puStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined1 auStack_6f8 [128];
  long lStack_678;
  undefined *puStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined *puStack_658;
  undefined *puStack_650;
  undefined *puStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined8 **ppuStack_630;
  code *pcStack_628;
  undefined8 uStack_620;
  long lStack_618;
  long *plStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  long lStack_5d8;
  undefined8 *puStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined1 auStack_5a0 [128];
  undefined1 auStack_520 [128];
  long lStack_4a0;
  undefined *puStack_490;
  long lStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined8 **ppuStack_440;
  code *pcStack_438;
  undefined8 uStack_430;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_368;
  undefined *puStack_360;
  long lStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined1 **ppuStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [128];
  undefined1 auStack_210 [128];
  long lStack_190;
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
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar11;
  func_0x00010c2453e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  FUN_107d654a0();
  _objc_release(puVar4);
  _objc_release();
  if (((ulong)puVar10 & 1) == 0) {
    puVar4 = param_1;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    func_0x00010bf9e280();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c245400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar4);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    puStack_110 = (undefined8 *)0x0;
    _objc_retain(puVar11);
    puVar4 = puVar11;
    func_0x00010bf52a60(puVar11,param_2,&uStack_120,auStack_d8,0x10);
    if (puVar4 != (undefined *)0x0) {
      puVar10 = (undefined *)*puStack_110;
      do {
        unaff_x23 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_110 != puVar10) {
            _objc_enumerationMutation(puVar11);
          }
          uVar2 = *(ulong *)(lStack_118 + (long)unaff_x23 * 8);
          FUN_107d654a0();
          if ((uVar2 & 1) != 0) {
            puVar8 = (undefined *)0x1;
            puVar4 = puVar11;
            goto LAB_107d65454;
          }
          unaff_x23 = unaff_x23 + 1;
        } while (puVar4 != unaff_x23);
        puVar4 = puVar11;
        func_0x00010bf52a60(puVar11,param_2,&uStack_120,auStack_d8,0x10);
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar11);
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_1;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = puVar10;
    func_0x00010c14bb40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = unaff_x23;
    func_0x00010c25b320();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = unaff_x24;
    FUN_107d654a0();
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(puVar10);
    puVar4 = param_1;
LAB_107d65454:
    _objc_release(puVar4);
    _objc_release();
  }
  else {
    puVar8 = (undefined *)0x1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar8;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_107d654a0;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  puStack_2c0 = (undefined8 *)0x0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar11;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar3 = puVar8;
  func_0x00010bf52a60(puVar8,param_2,&uStack_2d0,auStack_210,0x10);
  puVar11 = (undefined *)0x0;
  if (puVar3 != (undefined *)0x0) {
    unaff_x25 = (undefined *)*puStack_2c0;
    do {
      unaff_x26 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_2c0 != unaff_x25) {
          _objc_enumerationMutation(puVar8);
        }
        puVar4 = *(undefined **)(lStack_2c8 + (long)unaff_x26 * 8);
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar4;
        func_0x00010c0ed200();
        if ((((int)puVar11 == 0x1e) ||
            (puVar11 = puVar4, func_0x00010c0ed200(), (int)puVar11 == 0x20)) ||
           (puVar11 = puVar4, func_0x00010c0ed200(), (int)puVar11 == 0x22)) {
LAB_107d65688:
          _objc_release(puVar4);
          puVar11 = (undefined *)0x1;
          goto LAB_107d65694;
        }
        uStack_2e8 = 0;
        uStack_2f0 = 0;
        uStack_2d8 = 0;
        uStack_2e0 = 0;
        lStack_308 = 0;
        uStack_310 = 0;
        uStack_2f8 = 0;
        plStack_300 = (long *)0x0;
        puVar10 = puVar4;
        func_0x00010befd2c0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf52a60();
        if (puVar11 != (undefined *)0x0) {
          unaff_x27 = *plStack_300;
          unaff_x23 = puVar11;
          do {
            unaff_x28 = (undefined *)0x0;
            do {
              if (*plStack_300 != unaff_x27) {
                _objc_enumerationMutation(puVar10);
              }
              unaff_x24 = *(undefined **)(lStack_308 + (long)unaff_x28 * 8);
              puVar11 = unaff_x24;
              func_0x00010c0ed200();
              if ((((int)puVar11 == 5) ||
                  (puVar11 = unaff_x24, func_0x00010c0ed200(), (int)puVar11 == 6)) ||
                 (puVar11 = unaff_x24, func_0x00010c0ed200(), (int)puVar11 == 7)) {
                _objc_release(puVar10);
                goto LAB_107d65688;
              }
              unaff_x28 = unaff_x28 + 1;
            } while (unaff_x23 != unaff_x28);
            unaff_x23 = puVar10;
            func_0x00010bf52a60(puVar10,param_2,&uStack_310,auStack_290,0x10);
          } while (unaff_x23 != (undefined *)0x0);
        }
        _objc_release(puVar10);
        _objc_release(puVar4);
        unaff_x26 = unaff_x26 + 1;
      } while (unaff_x26 != puVar3);
      puVar3 = puVar8;
      func_0x00010bf52a60(puVar8,param_2,&uStack_2d0,auStack_210,0x10);
    } while (puVar3 != (undefined *)0x0);
    puVar11 = (undefined *)0x0;
  }
LAB_107d65694:
  puVar3 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return puVar11;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_430;
  pcStack_318 = FUN_107d656dc;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar3;
  puStack_360 = unaff_x28;
  lStack_358 = unaff_x27;
  puStack_350 = unaff_x24;
  puStack_348 = unaff_x23;
  puStack_340 = puVar10;
  puStack_338 = puVar4;
  puStack_330 = puVar11;
  puStack_328 = puVar8;
  ppuStack_320 = &puStack_130;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c2453e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  puVar10 = puVar4;
  func_0x00010be5e9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar5);
  if (puVar11 == (undefined *)0x0) {
    puVar11 = puVar3;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar11;
    func_0x00010bf9e280();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c245400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar11);
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    lStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    puStack_420 = (undefined8 *)0x0;
    _objc_retain(puVar5);
    puVar11 = puVar5;
    func_0x00010bf52a60();
    if (puVar11 != (undefined *)0x0) {
      unaff_x23 = (undefined *)*puStack_420;
      puVar4 = puVar11;
      do {
        unaff_x24 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_420 != unaff_x23) {
            _objc_enumerationMutation(puVar5);
          }
          puVar6 = *(undefined8 **)(lStack_428 + (long)unaff_x24 * 8);
          puVar11 = puVar3;
          func_0x00010be5e9e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar11 != (undefined *)0x0) {
            _objc_retain();
            goto LAB_107d65850;
          }
          unaff_x24 = unaff_x24 + 1;
        } while (puVar4 != unaff_x24);
        puVar4 = puVar5;
        puVar6 = &uStack_430;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    puVar11 = (undefined *)0x0;
LAB_107d65850:
    _objc_release(puVar5);
    _objc_release(puVar5);
  }
  else {
    _objc_retain(puVar11);
    puVar6 = (undefined8 *)puVar10;
  }
  _objc_release(puVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_368) {
    ___stack_chk_fail();
    pcStack_438 = FUN_107d658a4;
    lStack_4a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_5d8 = 0;
    uStack_5e0 = 0;
    uStack_5c8 = 0;
    puStack_5d0 = (undefined8 *)0x0;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    uStack_5a8 = 0;
    uStack_5b0 = 0;
    puStack_490 = unaff_x28;
    lStack_488 = unaff_x27;
    puStack_480 = unaff_x26;
    puStack_478 = unaff_x25;
    puStack_470 = unaff_x24;
    puStack_468 = unaff_x23;
    puStack_460 = puVar4;
    puStack_458 = puVar11;
    puStack_450 = puVar5;
    puStack_448 = puVar3;
    ppuStack_440 = &ppuStack_320;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = (undefined *)puVar6;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar8 = puVar10;
    func_0x00010bf52a60(puVar10,param_2,&uStack_5e0,auStack_520,0x10);
    puVar11 = (undefined *)0x0;
    if (puVar8 != (undefined *)0x0) {
      unaff_x25 = (undefined *)*puStack_5d0;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_5d0 != unaff_x25) {
            _objc_enumerationMutation(puVar10);
          }
          puVar6 = *(undefined8 **)(lStack_5d8 + (long)puVar11 * 8);
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = (undefined *)puVar6;
          func_0x00010bf0b760();
          if ((int)puVar3 == 5) {
            puVar4 = (undefined *)puVar6;
            func_0x00010c0ed200();
            uVar1 = (int)puVar4 - 0x1a;
            if ((uVar1 < 10) && ((0x35fU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
              _objc_retain(puVar6);
              if ((puVar6 == (undefined8 *)0x0) ||
                 (puVar11 = (undefined *)puVar6, func_0x00010c0ed200(), (int)puVar11 != 0x22)) {
                puVar4 = (undefined *)0x0;
              }
              else {
                puVar11 = (undefined *)puVar6;
                func_0x00010c0c5bc0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                puVar4 = (undefined *)0x0;
                if (puVar11 != (undefined *)0x0) {
                  unaff_x23 = (undefined *)puVar6;
                  func_0x00010c0c5bc0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = unaff_x23;
                  func_0x00010c27dd80();
                  _objc_release(unaff_x23);
                }
              }
              _objc_release(puVar6);
              puVar11 = PTR_PTR_1126c4548;
              _objc_alloc();
              func_0x00010c032420();
LAB_107d65b08:
              _objc_release(puVar6);
              goto LAB_107d65b10;
            }
            uStack_5f8 = 0;
            uStack_600 = 0;
            uStack_5e8 = 0;
            uStack_5f0 = 0;
            lStack_618 = 0;
            uStack_620 = 0;
            uStack_608 = 0;
            plStack_610 = (long *)0x0;
            puVar4 = (undefined *)puVar6;
            func_0x00010befd2c0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar4;
            func_0x00010bf52a60();
            if (puVar3 != (undefined *)0x0) {
              lVar12 = *plStack_610;
              do {
                unaff_x26 = (undefined *)0x0;
                do {
                  if (*plStack_610 != lVar12) {
                    _objc_enumerationMutation(puVar4);
                  }
                  unaff_x23 = *(undefined **)(lStack_618 + (long)unaff_x26 * 8);
                  puVar5 = unaff_x23;
                  func_0x00010c0ed200();
                  if ((int)puVar5 - 1U < 8) {
                    _objc_retain(unaff_x23);
                    if ((unaff_x23 == (undefined *)0x0) ||
                       (puVar11 = unaff_x23, func_0x00010c0ed200(), (int)puVar11 != 7)) {
                      unaff_x24 = (undefined *)0x0;
                    }
                    else {
                      puVar11 = unaff_x23;
                      func_0x00010c0c5bc0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release();
                      unaff_x24 = (undefined *)0x0;
                      if (puVar11 != (undefined *)0x0) {
                        unaff_x25 = unaff_x23;
                        func_0x00010c0c5bc0();
                        _objc_retainAutoreleasedReturnValue();
                        unaff_x24 = unaff_x25;
                        func_0x00010c27dd80();
                        _objc_release(unaff_x25);
                      }
                    }
                    _objc_release(unaff_x23);
                    puVar11 = PTR_PTR_1126c4548;
                    _objc_alloc();
                    func_0x00010c032420();
                    _objc_release(puVar4);
                    goto LAB_107d65b08;
                  }
                  unaff_x26 = unaff_x26 + 1;
                } while (puVar3 != unaff_x26);
                puVar3 = puVar4;
                func_0x00010bf52a60(puVar4,param_2,&uStack_620,auStack_5a0,0x10);
                unaff_x24 = (undefined *)0x0;
              } while (puVar3 != (undefined *)0x0);
            }
            _objc_release(puVar4);
          }
          _objc_release(puVar6);
          puVar11 = puVar11 + 1;
        } while (puVar11 != puVar8);
        puVar8 = puVar10;
        func_0x00010bf52a60(puVar10,param_2,&uStack_5e0,auStack_520,0x10);
      } while (puVar8 != (undefined *)0x0);
      puVar11 = (undefined *)0x0;
    }
LAB_107d65b10:
    puVar8 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4a0) {
      ___stack_chk_fail();
      pcStack_628 = FUN_107d65bf8;
      lStack_678 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      puStack_670 = unaff_x26;
      puStack_668 = unaff_x25;
      puStack_660 = unaff_x24;
      puStack_658 = unaff_x23;
      puStack_650 = puVar4;
      puStack_648 = puVar11;
      puStack_640 = (undefined *)puVar6;
      puStack_638 = puVar10;
      ppuStack_630 = &ppuStack_440;
      _objc_opt_new();
      lStack_738 = 0;
      uStack_740 = 0;
      uStack_728 = 0;
      puStack_730 = (undefined8 *)0x0;
      uStack_718 = 0;
      uStack_720 = 0;
      uStack_708 = 0;
      uStack_710 = 0;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar8;
      func_0x00010c131740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar10 = puVar11;
      func_0x00010bf52a60(puVar11,param_2,&uStack_740,auStack_6f8,0x10);
      if (puVar10 != (undefined *)0x0) {
        unaff_x24 = (undefined *)*puStack_730;
        do {
          unaff_x25 = (undefined *)0x0;
          do {
            if ((undefined *)*puStack_730 != unaff_x24) {
              _objc_enumerationMutation(puVar11);
            }
            puVar4 = *(undefined **)(lStack_738 + (long)unaff_x25 * 8);
            puVar8 = puVar4;
            func_0x00010bf529e0();
            if ((int)puVar8 == 1) {
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x23 = puVar4;
              func_0x00010c272380();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar3,param_2,unaff_x23);
              _objc_release(unaff_x23);
              _objc_release(puVar4);
            }
            unaff_x25 = unaff_x25 + 1;
          } while (puVar10 != unaff_x25);
          puVar10 = puVar11;
          func_0x00010bf52a60(puVar11,param_2,&uStack_740,auStack_6f8,0x10);
          puVar8 = (undefined *)0x0;
        } while (puVar10 != (undefined *)0x0);
      }
      _objc_release(puVar11);
      puVar11 = puVar3;
      func_0x00010bf51e00();
      puVar10 = puVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_678) {
        ___stack_chk_fail();
        pcStack_748 = FUN_107d65d88;
        lStack_798 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        puStack_790 = unaff_x26;
        puStack_788 = unaff_x25;
        puStack_780 = unaff_x24;
        puStack_778 = unaff_x23;
        puStack_770 = puVar4;
        puStack_768 = puVar8;
        puStack_760 = puVar11;
        puStack_758 = puVar3;
        ppuStack_750 = &ppuStack_630;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
        lStack_858 = 0;
        uStack_860 = 0;
        uStack_848 = 0;
        plStack_850 = (long *)0x0;
        uStack_838 = 0;
        uStack_840 = 0;
        uStack_828 = 0;
        uStack_830 = 0;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c131740();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        puVar4 = puVar11;
        func_0x00010bf52a60(puVar11,param_2,&uStack_860,auStack_818,0x10);
        if (puVar4 != (undefined *)0x0) {
          lVar12 = *plStack_850;
          do {
            puVar10 = (undefined *)0x0;
            do {
              if (*plStack_850 != lVar12) {
                _objc_enumerationMutation(puVar11);
              }
              uVar9 = *(undefined8 *)(lStack_858 + (long)puVar10 * 8);
              uVar7 = uVar9;
              func_0x00010bf529e0();
              if (1 < (int)uVar7) {
                func_0x00010c2923e0(uVar9);
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar9;
                func_0x00010c272380();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar5,param_2,uVar7);
                _objc_release(uVar7);
                _objc_release(uVar9);
              }
              puVar10 = puVar10 + 1;
            } while (puVar4 != puVar10);
            puVar4 = puVar11;
            func_0x00010bf52a60(puVar11,param_2,&uStack_860,auStack_818,0x10);
          } while (puVar4 != (undefined *)0x0);
        }
        _objc_release(puVar11);
        puVar11 = puVar5;
        func_0x00010bf51e00(puVar5);
        _objc_release(puVar5);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_798) {
          ___stack_chk_fail();
          puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
          _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar11;
}



/* Entry: 107d654a0; end: 107d656db;  */

undefined * FUN_107d654a0(undefined *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *puVar9;
  undefined *unaff_x26;
  long unaff_x27;
  undefined *puVar10;
  undefined *unaff_x28;
  long lVar11;
  undefined8 uStack_740;
  long lStack_738;
  long *plStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined1 auStack_6f8 [128];
  long lStack_678;
  undefined *puStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined *puStack_658;
  undefined *puStack_650;
  undefined *puStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined8 **ppuStack_630;
  code *pcStack_628;
  undefined8 uStack_620;
  long lStack_618;
  undefined8 *puStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined1 auStack_5d8 [128];
  long lStack_558;
  undefined *puStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined *puStack_520;
  undefined *puStack_518;
  undefined8 **ppuStack_510;
  code *pcStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  long *plStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 auStack_480 [128];
  undefined1 auStack_400 [128];
  long lStack_380;
  undefined *puStack_370;
  long lStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined1 **ppuStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  puStack_1a0 = (undefined8 *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar9 = puVar7;
  func_0x00010bf52a60(puVar7,param_2,&uStack_1b0,auStack_f0,0x10);
  puVar10 = (undefined *)0x0;
  if (puVar9 != (undefined *)0x0) {
    unaff_x25 = (undefined *)*puStack_1a0;
    do {
      unaff_x26 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_1a0 != unaff_x25) {
          _objc_enumerationMutation(puVar7);
        }
        unaff_x21 = *(undefined **)(lStack_1a8 + (long)unaff_x26 * 8);
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = unaff_x21;
        func_0x00010c0ed200();
        if ((((int)puVar10 == 0x1e) ||
            (puVar10 = unaff_x21, func_0x00010c0ed200(), (int)puVar10 == 0x20)) ||
           (puVar10 = unaff_x21, func_0x00010c0ed200(), (int)puVar10 == 0x22)) {
LAB_107d65688:
          _objc_release(unaff_x21);
          puVar10 = (undefined *)0x1;
          goto LAB_107d65694;
        }
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        unaff_x22 = unaff_x21;
        func_0x00010befd2c0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = unaff_x22;
        func_0x00010bf52a60();
        if (puVar10 != (undefined *)0x0) {
          unaff_x27 = *plStack_1e0;
          unaff_x23 = puVar10;
          do {
            unaff_x28 = (undefined *)0x0;
            do {
              if (*plStack_1e0 != unaff_x27) {
                _objc_enumerationMutation(unaff_x22);
              }
              unaff_x24 = *(undefined **)(lStack_1e8 + (long)unaff_x28 * 8);
              puVar10 = unaff_x24;
              func_0x00010c0ed200();
              if ((((int)puVar10 == 5) ||
                  (puVar10 = unaff_x24, func_0x00010c0ed200(), (int)puVar10 == 6)) ||
                 (puVar10 = unaff_x24, func_0x00010c0ed200(), (int)puVar10 == 7)) {
                _objc_release(unaff_x22);
                goto LAB_107d65688;
              }
              unaff_x28 = unaff_x28 + 1;
            } while (unaff_x23 != unaff_x28);
            unaff_x23 = unaff_x22;
            func_0x00010bf52a60(unaff_x22,param_2,&uStack_1f0,auStack_170,0x10);
          } while (unaff_x23 != (undefined *)0x0);
        }
        _objc_release(unaff_x22);
        _objc_release(unaff_x21);
        unaff_x26 = unaff_x26 + 1;
      } while (unaff_x26 != puVar9);
      puVar9 = puVar7;
      func_0x00010bf52a60(puVar7,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (puVar9 != (undefined *)0x0);
    puVar10 = (undefined *)0x0;
  }
LAB_107d65694:
  puVar9 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar10;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_310;
  pcStack_1f8 = FUN_107d656dc;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar9;
  puStack_240 = unaff_x28;
  lStack_238 = unaff_x27;
  puStack_230 = unaff_x24;
  puStack_228 = unaff_x23;
  puStack_220 = unaff_x22;
  puStack_218 = unaff_x21;
  puStack_210 = puVar10;
  puStack_208 = puVar7;
  puStack_200 = &stack0xfffffffffffffff0;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c2453e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  puVar4 = puVar7;
  func_0x00010be5e9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar2);
  if (puVar10 == (undefined *)0x0) {
    puVar10 = puVar9;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar10;
    func_0x00010bf9e280();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    func_0x00010c245400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar10);
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    lStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    puStack_300 = (undefined8 *)0x0;
    _objc_retain(puVar2);
    puVar10 = puVar2;
    func_0x00010bf52a60();
    if (puVar10 != (undefined *)0x0) {
      unaff_x23 = (undefined *)*puStack_300;
      puVar7 = puVar10;
      do {
        unaff_x24 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_300 != unaff_x23) {
            _objc_enumerationMutation(puVar2);
          }
          puVar3 = *(undefined8 **)(lStack_308 + (long)unaff_x24 * 8);
          puVar10 = puVar9;
          func_0x00010be5e9e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar10 != (undefined *)0x0) {
            _objc_retain();
            goto LAB_107d65850;
          }
          unaff_x24 = unaff_x24 + 1;
        } while (puVar7 != unaff_x24);
        puVar7 = puVar2;
        puVar3 = &uStack_310;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined *)0x0);
    }
    puVar10 = (undefined *)0x0;
LAB_107d65850:
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
  else {
    _objc_retain(puVar10);
    puVar3 = (undefined8 *)puVar4;
  }
  _objc_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
    ___stack_chk_fail();
    pcStack_318 = FUN_107d658a4;
    lStack_380 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4a8 = 0;
    puStack_4b0 = (undefined8 *)0x0;
    uStack_498 = 0;
    uStack_4a0 = 0;
    uStack_488 = 0;
    uStack_490 = 0;
    puStack_370 = unaff_x28;
    lStack_368 = unaff_x27;
    puStack_360 = unaff_x26;
    puStack_358 = unaff_x25;
    puStack_350 = unaff_x24;
    puStack_348 = unaff_x23;
    puStack_340 = puVar7;
    puStack_338 = puVar10;
    puStack_330 = puVar2;
    puStack_328 = puVar9;
    ppuStack_320 = &puStack_200;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined *)puVar3;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar2 = puVar9;
    func_0x00010bf52a60(puVar9,param_2,&uStack_4c0,auStack_400,0x10);
    puVar10 = (undefined *)0x0;
    if (puVar2 != (undefined *)0x0) {
      unaff_x25 = (undefined *)*puStack_4b0;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_4b0 != unaff_x25) {
            _objc_enumerationMutation(puVar9);
          }
          puVar3 = *(undefined8 **)(lStack_4b8 + (long)puVar10 * 8);
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = (undefined *)puVar3;
          func_0x00010bf0b760();
          if ((int)puVar4 == 5) {
            puVar7 = (undefined *)puVar3;
            func_0x00010c0ed200();
            uVar1 = (int)puVar7 - 0x1a;
            if ((uVar1 < 10) && ((0x35fU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
              _objc_retain(puVar3);
              if ((puVar3 == (undefined8 *)0x0) ||
                 (puVar10 = (undefined *)puVar3, func_0x00010c0ed200(), (int)puVar10 != 0x22)) {
                puVar7 = (undefined *)0x0;
              }
              else {
                puVar10 = (undefined *)puVar3;
                func_0x00010c0c5bc0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                puVar7 = (undefined *)0x0;
                if (puVar10 != (undefined *)0x0) {
                  unaff_x23 = (undefined *)puVar3;
                  func_0x00010c0c5bc0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = unaff_x23;
                  func_0x00010c27dd80();
                  _objc_release(unaff_x23);
                }
              }
              _objc_release(puVar3);
              puVar10 = PTR_PTR_1126c4548;
              _objc_alloc();
              func_0x00010c032420();
LAB_107d65b08:
              _objc_release(puVar3);
              goto LAB_107d65b10;
            }
            uStack_4d8 = 0;
            uStack_4e0 = 0;
            uStack_4c8 = 0;
            uStack_4d0 = 0;
            lStack_4f8 = 0;
            uStack_500 = 0;
            uStack_4e8 = 0;
            plStack_4f0 = (long *)0x0;
            puVar7 = (undefined *)puVar3;
            func_0x00010befd2c0();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar7;
            func_0x00010bf52a60();
            if (puVar4 != (undefined *)0x0) {
              lVar11 = *plStack_4f0;
              do {
                unaff_x26 = (undefined *)0x0;
                do {
                  if (*plStack_4f0 != lVar11) {
                    _objc_enumerationMutation(puVar7);
                  }
                  unaff_x23 = *(undefined **)(lStack_4f8 + (long)unaff_x26 * 8);
                  puVar5 = unaff_x23;
                  func_0x00010c0ed200();
                  if ((int)puVar5 - 1U < 8) {
                    _objc_retain(unaff_x23);
                    if ((unaff_x23 == (undefined *)0x0) ||
                       (puVar10 = unaff_x23, func_0x00010c0ed200(), (int)puVar10 != 7)) {
                      unaff_x24 = (undefined *)0x0;
                    }
                    else {
                      puVar10 = unaff_x23;
                      func_0x00010c0c5bc0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release();
                      unaff_x24 = (undefined *)0x0;
                      if (puVar10 != (undefined *)0x0) {
                        unaff_x25 = unaff_x23;
                        func_0x00010c0c5bc0();
                        _objc_retainAutoreleasedReturnValue();
                        unaff_x24 = unaff_x25;
                        func_0x00010c27dd80();
                        _objc_release(unaff_x25);
                      }
                    }
                    _objc_release(unaff_x23);
                    puVar10 = PTR_PTR_1126c4548;
                    _objc_alloc();
                    func_0x00010c032420();
                    _objc_release(puVar7);
                    goto LAB_107d65b08;
                  }
                  unaff_x26 = unaff_x26 + 1;
                } while (puVar4 != unaff_x26);
                puVar4 = puVar7;
                func_0x00010bf52a60(puVar7,param_2,&uStack_500,auStack_480,0x10);
                unaff_x24 = (undefined *)0x0;
              } while (puVar4 != (undefined *)0x0);
            }
            _objc_release(puVar7);
          }
          _objc_release(puVar3);
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar2);
        puVar2 = puVar9;
        func_0x00010bf52a60(puVar9,param_2,&uStack_4c0,auStack_400,0x10);
      } while (puVar2 != (undefined *)0x0);
      puVar10 = (undefined *)0x0;
    }
LAB_107d65b10:
    puVar2 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_380) {
      ___stack_chk_fail();
      pcStack_508 = FUN_107d65bf8;
      lStack_558 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      puStack_550 = unaff_x26;
      puStack_548 = unaff_x25;
      puStack_540 = unaff_x24;
      puStack_538 = unaff_x23;
      puStack_530 = puVar7;
      puStack_528 = puVar10;
      puStack_520 = (undefined *)puVar3;
      puStack_518 = puVar9;
      ppuStack_510 = &ppuStack_320;
      _objc_opt_new();
      lStack_618 = 0;
      uStack_620 = 0;
      uStack_608 = 0;
      puStack_610 = (undefined8 *)0x0;
      uStack_5f8 = 0;
      uStack_600 = 0;
      uStack_5e8 = 0;
      uStack_5f0 = 0;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      func_0x00010c131740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar9 = puVar10;
      func_0x00010bf52a60(puVar10,param_2,&uStack_620,auStack_5d8,0x10);
      if (puVar9 != (undefined *)0x0) {
        unaff_x24 = (undefined *)*puStack_610;
        do {
          unaff_x25 = (undefined *)0x0;
          do {
            if ((undefined *)*puStack_610 != unaff_x24) {
              _objc_enumerationMutation(puVar10);
            }
            puVar7 = *(undefined **)(lStack_618 + (long)unaff_x25 * 8);
            puVar2 = puVar7;
            func_0x00010bf529e0();
            if ((int)puVar2 == 1) {
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x23 = puVar7;
              func_0x00010c272380();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar4,param_2,unaff_x23);
              _objc_release(unaff_x23);
              _objc_release(puVar7);
            }
            unaff_x25 = unaff_x25 + 1;
          } while (puVar9 != unaff_x25);
          puVar9 = puVar10;
          func_0x00010bf52a60(puVar10,param_2,&uStack_620,auStack_5d8,0x10);
          puVar2 = (undefined *)0x0;
        } while (puVar9 != (undefined *)0x0);
      }
      _objc_release(puVar10);
      puVar10 = puVar4;
      func_0x00010bf51e00();
      puVar9 = puVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_558) {
        ___stack_chk_fail();
        pcStack_628 = FUN_107d65d88;
        lStack_678 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        puStack_670 = unaff_x26;
        puStack_668 = unaff_x25;
        puStack_660 = unaff_x24;
        puStack_658 = unaff_x23;
        puStack_650 = puVar7;
        puStack_648 = puVar2;
        puStack_640 = puVar10;
        puStack_638 = puVar4;
        ppuStack_630 = &ppuStack_510;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
        lStack_738 = 0;
        uStack_740 = 0;
        uStack_728 = 0;
        plStack_730 = (long *)0x0;
        uStack_718 = 0;
        uStack_720 = 0;
        uStack_708 = 0;
        uStack_710 = 0;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c131740();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar7 = puVar10;
        func_0x00010bf52a60(puVar10,param_2,&uStack_740,auStack_6f8,0x10);
        if (puVar7 != (undefined *)0x0) {
          lVar11 = *plStack_730;
          do {
            puVar9 = (undefined *)0x0;
            do {
              if (*plStack_730 != lVar11) {
                _objc_enumerationMutation(puVar10);
              }
              uVar8 = *(undefined8 *)(lStack_738 + (long)puVar9 * 8);
              uVar6 = uVar8;
              func_0x00010bf529e0();
              if (1 < (int)uVar6) {
                func_0x00010c2923e0(uVar8);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar8;
                func_0x00010c272380();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar5,param_2,uVar6);
                _objc_release(uVar6);
                _objc_release(uVar8);
              }
              puVar9 = puVar9 + 1;
            } while (puVar7 != puVar9);
            puVar7 = puVar10;
            func_0x00010bf52a60(puVar10,param_2,&uStack_740,auStack_6f8,0x10);
          } while (puVar7 != (undefined *)0x0);
        }
        _objc_release(puVar10);
        puVar10 = puVar5;
        func_0x00010bf51e00(puVar5);
        _objc_release(puVar5);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_678) {
          ___stack_chk_fail();
          puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
          _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar10;
}



/* Entry: 107d656dc; end: 107d658a3; -[SCNMessagingMessage mediaOrigin] */

void FUN_107d656dc(undefined1 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  undefined *puVar13;
  undefined1 *unaff_x26;
  undefined1 *puVar14;
  long lVar15;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 auStack_508 [128];
  long lStack_488;
  undefined1 *puStack_480;
  undefined1 *puStack_478;
  undefined1 *puStack_470;
  undefined1 *puStack_468;
  undefined1 *puStack_460;
  undefined1 *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined8 **ppuStack_440;
  code *pcStack_438;
  undefined8 uStack_430;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 auStack_3e8 [128];
  long lStack_368;
  undefined1 *puStack_360;
  undefined1 *puStack_358;
  undefined1 *puStack_350;
  undefined1 *puStack_348;
  undefined1 *puStack_340;
  undefined *puStack_338;
  undefined1 *puStack_330;
  undefined1 *puStack_328;
  undefined1 **ppuStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [128];
  undefined1 auStack_210 [128];
  long lStack_190;
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
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010c2453e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_1;
  puVar14 = puVar11;
  func_0x00010be5e9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar2);
  if (puVar10 == (undefined1 *)0x0) {
    puVar2 = param_1;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010bf9e280();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar11;
    func_0x00010c245400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar2);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    puStack_110 = (undefined8 *)0x0;
    _objc_retain(puVar14);
    puVar2 = puVar14;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      unaff_x23 = (undefined1 *)*puStack_110;
      puVar11 = puVar2;
      do {
        unaff_x24 = (undefined1 *)0x0;
        do {
          if ((undefined1 *)*puStack_110 != unaff_x23) {
            _objc_enumerationMutation(puVar14);
          }
          puVar3 = *(undefined8 **)(lStack_118 + (long)unaff_x24 * 8);
          puVar10 = param_1;
          func_0x00010be5e9e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar10 != (undefined1 *)0x0) {
            _objc_retain();
            goto LAB_107d65850;
          }
          unaff_x24 = unaff_x24 + 1;
        } while (puVar11 != unaff_x24);
        puVar11 = puVar14;
        puVar3 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar11 != (undefined1 *)0x0);
    }
    puVar10 = (undefined1 *)0x0;
LAB_107d65850:
    _objc_release(puVar14);
    _objc_release(puVar14);
  }
  else {
    _objc_retain(puVar10);
    puVar3 = (undefined8 *)puVar14;
  }
  _objc_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_107d658a4;
    lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    puStack_2c0 = (undefined8 *)0x0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined1 *)puVar3;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar10 = puVar2;
    func_0x00010bf52a60(puVar2,param_2,&uStack_2d0,auStack_210,0x10);
    puVar6 = (undefined *)0x0;
    if (puVar10 != (undefined1 *)0x0) {
      unaff_x25 = (undefined1 *)*puStack_2c0;
      do {
        puVar14 = (undefined1 *)0x0;
        do {
          if ((undefined1 *)*puStack_2c0 != unaff_x25) {
            _objc_enumerationMutation(puVar2);
          }
          puVar3 = *(undefined8 **)(lStack_2c8 + (long)puVar14 * 8);
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = (undefined1 *)puVar3;
          func_0x00010bf0b760();
          if ((int)puVar4 == 5) {
            puVar11 = (undefined1 *)puVar3;
            func_0x00010c0ed200();
            uVar1 = (int)puVar11 - 0x1a;
            if ((uVar1 < 10) && ((0x35fU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
              _objc_retain(puVar3);
              if ((puVar3 == (undefined8 *)0x0) ||
                 (puVar11 = (undefined1 *)puVar3, func_0x00010c0ed200(), (int)puVar11 != 0x22)) {
                puVar11 = (undefined1 *)0x0;
              }
              else {
                puVar10 = (undefined1 *)puVar3;
                func_0x00010c0c5bc0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                puVar11 = (undefined1 *)0x0;
                if (puVar10 != (undefined1 *)0x0) {
                  unaff_x23 = (undefined1 *)puVar3;
                  func_0x00010c0c5bc0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = unaff_x23;
                  func_0x00010c27dd80();
                  _objc_release(unaff_x23);
                }
              }
              _objc_release(puVar3);
              puVar6 = PTR_PTR_1126c4548;
              _objc_alloc();
              func_0x00010c032420();
LAB_107d65b08:
              _objc_release(puVar3);
              goto LAB_107d65b10;
            }
            uStack_2e8 = 0;
            uStack_2f0 = 0;
            uStack_2d8 = 0;
            uStack_2e0 = 0;
            lStack_308 = 0;
            uStack_310 = 0;
            uStack_2f8 = 0;
            plStack_300 = (long *)0x0;
            puVar11 = (undefined1 *)puVar3;
            func_0x00010befd2c0();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar11;
            func_0x00010bf52a60();
            if (puVar4 != (undefined1 *)0x0) {
              lVar15 = *plStack_300;
              do {
                unaff_x26 = (undefined1 *)0x0;
                do {
                  if (*plStack_300 != lVar15) {
                    _objc_enumerationMutation(puVar11);
                  }
                  unaff_x23 = *(undefined1 **)(lStack_308 + (long)unaff_x26 * 8);
                  puVar5 = unaff_x23;
                  func_0x00010c0ed200();
                  if ((int)puVar5 - 1U < 8) {
                    _objc_retain(unaff_x23);
                    if ((unaff_x23 == (undefined1 *)0x0) ||
                       (puVar10 = unaff_x23, func_0x00010c0ed200(), (int)puVar10 != 7)) {
                      unaff_x24 = (undefined1 *)0x0;
                    }
                    else {
                      puVar10 = unaff_x23;
                      func_0x00010c0c5bc0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release();
                      unaff_x24 = (undefined1 *)0x0;
                      if (puVar10 != (undefined1 *)0x0) {
                        unaff_x25 = unaff_x23;
                        func_0x00010c0c5bc0();
                        _objc_retainAutoreleasedReturnValue();
                        unaff_x24 = unaff_x25;
                        func_0x00010c27dd80();
                        _objc_release(unaff_x25);
                      }
                    }
                    _objc_release(unaff_x23);
                    puVar6 = PTR_PTR_1126c4548;
                    _objc_alloc();
                    func_0x00010c032420();
                    _objc_release(puVar11);
                    goto LAB_107d65b08;
                  }
                  unaff_x26 = unaff_x26 + 1;
                } while (puVar4 != unaff_x26);
                puVar4 = puVar11;
                func_0x00010bf52a60(puVar11,param_2,&uStack_310,auStack_290,0x10);
                unaff_x24 = (undefined1 *)0x0;
              } while (puVar4 != (undefined1 *)0x0);
            }
            _objc_release(puVar11);
          }
          _objc_release(puVar3);
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar10);
        puVar10 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_2d0,auStack_210,0x10);
      } while (puVar10 != (undefined1 *)0x0);
      puVar6 = (undefined *)0x0;
    }
LAB_107d65b10:
    puVar10 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_190) {
      ___stack_chk_fail();
      pcStack_318 = FUN_107d65bf8;
      lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      puStack_360 = unaff_x26;
      puStack_358 = unaff_x25;
      puStack_350 = unaff_x24;
      puStack_348 = unaff_x23;
      puStack_340 = puVar11;
      puStack_338 = puVar6;
      puStack_330 = (undefined1 *)puVar3;
      puStack_328 = puVar2;
      ppuStack_320 = &puStack_130;
      _objc_opt_new();
      lStack_428 = 0;
      uStack_430 = 0;
      uStack_418 = 0;
      puStack_420 = (undefined8 *)0x0;
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar10;
      func_0x00010c131740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar14 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_430,auStack_3e8,0x10);
      if (puVar14 != (undefined1 *)0x0) {
        unaff_x24 = (undefined1 *)*puStack_420;
        do {
          unaff_x25 = (undefined1 *)0x0;
          do {
            if ((undefined1 *)*puStack_420 != unaff_x24) {
              _objc_enumerationMutation(puVar2);
            }
            puVar11 = *(undefined1 **)(lStack_428 + (long)unaff_x25 * 8);
            puVar10 = puVar11;
            func_0x00010bf529e0();
            if ((int)puVar10 == 1) {
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x23 = puVar11;
              func_0x00010c272380();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar7,param_2,unaff_x23);
              _objc_release(unaff_x23);
              _objc_release(puVar11);
            }
            unaff_x25 = unaff_x25 + 1;
          } while (puVar14 != unaff_x25);
          puVar14 = puVar2;
          func_0x00010bf52a60(puVar2,param_2,&uStack_430,auStack_3e8,0x10);
          puVar10 = (undefined1 *)0x0;
        } while (puVar14 != (undefined1 *)0x0);
      }
      _objc_release(puVar2);
      puVar6 = puVar7;
      func_0x00010bf51e00();
      puVar13 = puVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_368) {
        ___stack_chk_fail();
        pcStack_438 = FUN_107d65d88;
        lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        puStack_480 = unaff_x26;
        puStack_478 = unaff_x25;
        puStack_470 = unaff_x24;
        puStack_468 = unaff_x23;
        puStack_460 = puVar11;
        puStack_458 = puVar10;
        puStack_450 = puVar6;
        puStack_448 = puVar7;
        ppuStack_440 = &ppuStack_320;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
        lStack_548 = 0;
        uStack_550 = 0;
        uStack_538 = 0;
        plStack_540 = (long *)0x0;
        uStack_528 = 0;
        uStack_530 = 0;
        uStack_518 = 0;
        uStack_520 = 0;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar13;
        func_0x00010c131740();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        puVar7 = puVar6;
        func_0x00010bf52a60(puVar6,param_2,&uStack_550,auStack_508,0x10);
        if (puVar7 != (undefined *)0x0) {
          lVar15 = *plStack_540;
          do {
            puVar13 = (undefined *)0x0;
            do {
              if (*plStack_540 != lVar15) {
                _objc_enumerationMutation(puVar6);
              }
              uVar12 = *(undefined8 *)(lStack_548 + (long)puVar13 * 8);
              uVar9 = uVar12;
              func_0x00010bf529e0();
              if (1 < (int)uVar9) {
                func_0x00010c2923e0(uVar12);
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar12;
                func_0x00010c272380();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar8,param_2,uVar9);
                _objc_release(uVar9);
                _objc_release(uVar12);
              }
              puVar13 = puVar13 + 1;
            } while (puVar7 != puVar13);
            puVar7 = puVar6;
            func_0x00010bf52a60(puVar6,param_2,&uStack_550,auStack_508,0x10);
          } while (puVar7 != (undefined *)0x0);
        }
        _objc_release(puVar6);
        func_0x00010bf51e00(puVar8);
        _objc_release(puVar8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_488) {
          ___stack_chk_fail();
          _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d658a4; end: 107d65bf7; -[SCNMessagingMessage _mediaOrigin:] */

void FUN_107d658a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long unaff_x23;
  long unaff_x24;
  long lVar10;
  long unaff_x25;
  undefined *puVar11;
  long unaff_x26;
  long lVar12;
  long lVar13;
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 auStack_3e8 [128];
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined1 **ppuStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2c8 [128];
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined *puStack_218;
  long lStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
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
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_3;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar10;
  func_0x00010bf52a60(lVar10,param_2,&uStack_1b0,auStack_f0,0x10);
  puVar5 = (undefined *)0x0;
  if (lVar2 != 0) {
    unaff_x25 = *plStack_1a0;
    do {
      lVar12 = 0;
      do {
        if (*plStack_1a0 != unaff_x25) {
          _objc_enumerationMutation(lVar10);
        }
        param_3 = *(long *)(lStack_1a8 + lVar12 * 8);
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_3;
        func_0x00010bf0b760();
        if ((int)lVar3 == 5) {
          lVar3 = param_3;
          func_0x00010c0ed200();
          uVar1 = (int)lVar3 - 0x1a;
          if ((uVar1 < 10) && ((0x35fU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
            _objc_retain(param_3);
            if ((param_3 == 0) || (lVar2 = param_3, func_0x00010c0ed200(), (int)lVar2 != 0x22)) {
              unaff_x22 = 0;
            }
            else {
              lVar2 = param_3;
              func_0x00010c0c5bc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              unaff_x22 = 0;
              if (lVar2 != 0) {
                unaff_x23 = param_3;
                func_0x00010c0c5bc0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x22 = unaff_x23;
                func_0x00010c27dd80();
                _objc_release(unaff_x23);
              }
            }
            _objc_release(param_3);
            puVar5 = PTR_PTR_1126c4548;
            _objc_alloc();
            func_0x00010c032420();
LAB_107d65b08:
            _objc_release(param_3);
            goto LAB_107d65b10;
          }
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          unaff_x22 = param_3;
          func_0x00010befd2c0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = unaff_x22;
          func_0x00010bf52a60();
          if (lVar3 != 0) {
            lVar13 = *plStack_1e0;
            do {
              unaff_x26 = 0;
              do {
                if (*plStack_1e0 != lVar13) {
                  _objc_enumerationMutation(unaff_x22);
                }
                unaff_x23 = *(long *)(lStack_1e8 + unaff_x26 * 8);
                lVar4 = unaff_x23;
                func_0x00010c0ed200();
                if ((int)lVar4 - 1U < 8) {
                  _objc_retain(unaff_x23);
                  if ((unaff_x23 == 0) ||
                     (lVar2 = unaff_x23, func_0x00010c0ed200(), (int)lVar2 != 7)) {
                    unaff_x24 = 0;
                  }
                  else {
                    lVar2 = unaff_x23;
                    func_0x00010c0c5bc0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    unaff_x24 = 0;
                    if (lVar2 != 0) {
                      unaff_x25 = unaff_x23;
                      func_0x00010c0c5bc0();
                      _objc_retainAutoreleasedReturnValue();
                      unaff_x24 = unaff_x25;
                      func_0x00010c27dd80();
                      _objc_release(unaff_x25);
                    }
                  }
                  _objc_release(unaff_x23);
                  puVar5 = PTR_PTR_1126c4548;
                  _objc_alloc();
                  func_0x00010c032420();
                  _objc_release(unaff_x22);
                  goto LAB_107d65b08;
                }
                unaff_x26 = unaff_x26 + 1;
              } while (lVar3 != unaff_x26);
              lVar3 = unaff_x22;
              func_0x00010bf52a60(unaff_x22,param_2,&uStack_1f0,auStack_170,0x10);
              unaff_x24 = 0;
            } while (lVar3 != 0);
          }
          _objc_release(unaff_x22);
        }
        _objc_release(param_3);
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar2);
      lVar2 = lVar10;
      func_0x00010bf52a60(lVar10,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar2 != 0);
    puVar5 = (undefined *)0x0;
  }
LAB_107d65b10:
  lVar2 = lVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_1f8 = FUN_107d65bf8;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    lStack_240 = unaff_x26;
    lStack_238 = unaff_x25;
    lStack_230 = unaff_x24;
    lStack_228 = unaff_x23;
    lStack_220 = unaff_x22;
    puStack_218 = puVar5;
    lStack_210 = param_3;
    lStack_208 = lVar10;
    puStack_200 = &stack0xfffffffffffffff0;
    _objc_opt_new();
    lStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    plStack_300 = (long *)0x0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar2;
    func_0x00010c131740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar12 = lVar10;
    func_0x00010bf52a60(lVar10,param_2,&uStack_310,auStack_2c8,0x10);
    if (lVar12 != 0) {
      unaff_x24 = *plStack_300;
      do {
        unaff_x25 = 0;
        do {
          if (*plStack_300 != unaff_x24) {
            _objc_enumerationMutation(lVar10);
          }
          unaff_x22 = *(long *)(lStack_308 + unaff_x25 * 8);
          lVar2 = unaff_x22;
          func_0x00010bf529e0();
          if ((int)lVar2 == 1) {
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = unaff_x22;
            func_0x00010c272380();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar6,param_2,unaff_x23);
            _objc_release(unaff_x23);
            _objc_release(unaff_x22);
          }
          unaff_x25 = unaff_x25 + 1;
        } while (lVar12 != unaff_x25);
        lVar12 = lVar10;
        func_0x00010bf52a60(lVar10,param_2,&uStack_310,auStack_2c8,0x10);
        lVar2 = 0;
      } while (lVar12 != 0);
    }
    _objc_release(lVar10);
    puVar5 = puVar6;
    func_0x00010bf51e00();
    puVar11 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
      ___stack_chk_fail();
      pcStack_318 = FUN_107d65d88;
      lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      lStack_360 = unaff_x26;
      lStack_358 = unaff_x25;
      lStack_350 = unaff_x24;
      lStack_348 = unaff_x23;
      lStack_340 = unaff_x22;
      lStack_338 = lVar2;
      puStack_330 = puVar5;
      puStack_328 = puVar6;
      ppuStack_320 = &puStack_200;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      lStack_428 = 0;
      uStack_430 = 0;
      uStack_418 = 0;
      plStack_420 = (long *)0x0;
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar11;
      func_0x00010c131740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      puVar6 = puVar5;
      func_0x00010bf52a60(puVar5,param_2,&uStack_430,auStack_3e8,0x10);
      if (puVar6 != (undefined *)0x0) {
        lVar10 = *plStack_420;
        do {
          puVar11 = (undefined *)0x0;
          do {
            if (*plStack_420 != lVar10) {
              _objc_enumerationMutation(puVar5);
            }
            uVar9 = *(undefined8 *)(lStack_428 + (long)puVar11 * 8);
            uVar8 = uVar9;
            func_0x00010bf529e0();
            if (1 < (int)uVar8) {
              func_0x00010c2923e0(uVar9);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar9;
              func_0x00010c272380();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar7,param_2,uVar8);
              _objc_release(uVar8);
              _objc_release(uVar9);
            }
            puVar11 = puVar11 + 1;
          } while (puVar6 != puVar11);
          puVar6 = puVar5;
          func_0x00010bf52a60(puVar5,param_2,&uStack_430,auStack_3e8,0x10);
        } while (puVar6 != (undefined *)0x0);
      }
      _objc_release(puVar5);
      func_0x00010bf51e00(puVar7);
      _objc_release(puVar7);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_368) {
        ___stack_chk_fail();
        _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d65bf8; end: 107d65d87; -[SCNMessagingMessage replayParticipants] */

void FUN_107d65bf8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c131740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar8;
  func_0x00010bf52a60(lVar8,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar8);
        }
        uVar6 = *(undefined8 *)(lStack_118 + lVar9 * 8);
        uVar3 = uVar6;
        func_0x00010bf529e0();
        if ((int)uVar3 == 1) {
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,uVar3);
          _objc_release(uVar3);
          _objc_release(uVar6);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar8;
      func_0x00010bf52a60(lVar8,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar8);
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c131740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar5;
    func_0x00010bf52a60(puVar5,param_2,&uStack_240,auStack_1f8,0x10);
    if (puVar1 != (undefined *)0x0) {
      lVar8 = *plStack_230;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_230 != lVar8) {
            _objc_enumerationMutation(puVar5);
          }
          uVar6 = *(undefined8 *)(lStack_238 + (long)puVar10 * 8);
          uVar3 = uVar6;
          func_0x00010bf529e0();
          if (1 < (int)uVar3) {
            func_0x00010c2923e0(uVar6);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar6;
            func_0x00010c272380();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar4,param_2,uVar3);
            _objc_release(uVar3);
            _objc_release(uVar6);
          }
          puVar10 = puVar10 + 1;
        } while (puVar1 != puVar10);
        puVar1 = puVar5;
        func_0x00010bf52a60(puVar5,param_2,&uStack_240,auStack_1f8,0x10);
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(puVar5);
    func_0x00010bf51e00(puVar4);
    _objc_release(puVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d65d88; end: 107d65f17; -[SCNMessagingMessage replayAgainParticipants] */

void FUN_107d65d88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c131740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar3 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        uVar5 = *(undefined8 *)(lStack_118 + lVar7 * 8);
        uVar4 = uVar5;
        func_0x00010bf529e0();
        if (1 < (int)uVar4) {
          func_0x00010c2923e0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar5;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,uVar4);
          _objc_release(uVar4);
          _objc_release(uVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d65f18; end: 107d65f33;  */

void FUN_107d65f18(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d65f34; end: 107d65f4b;  */

undefined ** FUN_107d65f34(void)

{
  return &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ccc10;
}



/* Entry: 107d65f4c; end: 107d65f7b;  */

void FUN_107d65f4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,param_2);
  return;
}



/* Entry: 107d65f7c; end: 107d65f83;  */

void FUN_107d65f7c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_toString_11267a308);
  return;
}



/* Entry: 107d65f84; end: 107d65fcb;  */

void FUN_107d65f84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d65fcc; end: 107d66157;  */

undefined * FUN_107d65fcc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined *puVar11;
  long lVar12;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  long lVar13;
  long unaff_x25;
  long lVar14;
  long unaff_x26;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined auStack_208 [128];
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bf5ccc0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x25 = *plStack_120;
    unaff_x20 = lVar1;
    do {
      unaff_x26 = 0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_1);
        }
        puVar11 = *(undefined **)(lStack_128 + unaff_x26 * 8);
        unaff_x23 = puVar11;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = unaff_x23;
        func_0x00010bfedf20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x23);
        puVar2 = unaff_x22;
        func_0x00010bfedf40();
        if ((int)puVar2 == 0xd) {
          unaff_x23 = unaff_x22;
          func_0x00010bfc0fa0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          func_0x00010c27dd80();
          _objc_release(unaff_x23);
          _objc_release(unaff_x22);
          if ((int)unaff_x24 == 4) {
            _objc_retain(puVar11);
            goto LAB_107d66110;
          }
        }
        else {
          _objc_release(unaff_x22);
        }
        unaff_x26 = unaff_x26 + 1;
      } while (unaff_x20 != unaff_x26);
      unaff_x20 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (unaff_x20 != 0);
  }
  puVar11 = (undefined *)0x0;
LAB_107d66110:
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_250;
  pcStack_138 = FUN_107d66158;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  puStack_158 = puVar11;
  lStack_150 = unaff_x20;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar2 = auStack_208;
  puVar10 = (undefined *)0x10;
  lVar1 = lVar3;
  func_0x00010bf52a60();
  puVar11 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar13 = *plStack_240;
    do {
      lVar14 = 0;
      do {
        if (*plStack_240 != lVar13) {
          _objc_enumerationMutation(lVar3);
        }
        lVar12 = *(long *)(lStack_248 + lVar14 * 8);
        lVar4 = lVar12;
        func_0x00010bf0d0a0();
        if ((int)lVar4 == 1) {
          func_0x00010bf4e080();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar12;
          func_0x00010bf4e840();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bf43560();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          _objc_release(lVar12);
          lVar4 = lVar5;
          FUN_107d65fcc();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar5);
          if (lVar4 != 0) {
            puVar11 = (undefined *)0x1;
            goto LAB_107d662a8;
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar1 != lVar14);
      puVar2 = auStack_208;
      puVar10 = (undefined *)0x10;
      lVar1 = lVar3;
      puVar9 = &uStack_250;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    puVar11 = (undefined *)0x0;
  }
LAB_107d662a8:
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar11;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(puVar2);
  _objc_retain(puVar10);
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  if (puVar9 == (undefined8 *)puVar10) {
    _objc_release(puVar10);
    _objc_release(puVar9);
LAB_107d66380:
    puVar6 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,puVar10);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR_PTR_1126cb0a0;
      func_0x00010bfc8380(PTR_PTR_1126cb0a0,param_2,puVar6,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar2);
      _objc_retain(puVar8);
      if (puVar2 == puVar8) {
        puVar11 = (undefined *)0x1;
      }
      else if (puVar8 == (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar11 = puVar2;
        func_0x00010c071ae0(puVar2,param_2,puVar8);
      }
      _objc_release(puVar8);
      _objc_release(puVar2);
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
  }
  else {
    if (puVar10 != (undefined *)0x0) {
      puVar11 = (undefined *)puVar9;
      func_0x00010c071ae0(puVar9,param_2,puVar10);
      _objc_release(puVar10);
      _objc_release(puVar9);
      if ((int)puVar11 == 0) {
        puVar11 = (undefined *)0x1;
        goto LAB_107d66448;
      }
      goto LAB_107d66380;
    }
    puVar11 = (undefined *)0x1;
    puVar6 = (undefined *)puVar9;
  }
  _objc_release(puVar6);
LAB_107d66448:
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar9);
  return puVar11;
}



/* Entry: 107d66158; end: 107d662eb;  */

undefined * FUN_107d66158(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined auStack_d8 [128];
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar8 = auStack_d8;
  puVar9 = (undefined *)0x10;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  puVar10 = (undefined *)0x0;
  if (lVar2 != 0) {
    lVar13 = *plStack_110;
    do {
      lVar14 = 0;
      do {
        if (*plStack_110 != lVar13) {
          _objc_enumerationMutation(lVar1);
        }
        lVar11 = *(long *)(lStack_118 + lVar14 * 8);
        lVar3 = lVar11;
        func_0x00010bf0d0a0();
        if ((int)lVar3 == 1) {
          func_0x00010bf4e080();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar11;
          func_0x00010bf4e840();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bf43560();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          _objc_release(lVar11);
          lVar3 = lVar4;
          FUN_107d65fcc();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar4);
          if (lVar3 != 0) {
            puVar10 = (undefined *)0x1;
            goto LAB_107d662a8;
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      puVar8 = auStack_d8;
      puVar9 = (undefined *)0x10;
      lVar2 = lVar1;
      puVar7 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    puVar10 = (undefined *)0x0;
  }
LAB_107d662a8:
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  _objc_retain(puVar7);
  _objc_retain(puVar9);
  if (puVar7 == (undefined8 *)puVar9) {
    _objc_release(puVar9);
    _objc_release(puVar7);
LAB_107d66380:
    puVar10 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    if (puVar10 == (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR_PTR_1126cb0a0;
      func_0x00010bfc8380(PTR_PTR_1126cb0a0,param_2,puVar10,puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar8);
      _objc_retain(puVar6);
      if (puVar8 == puVar6) {
        puVar12 = (undefined *)0x1;
      }
      else if (puVar6 == (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
      }
      else {
        puVar12 = puVar8;
        func_0x00010c071ae0(puVar8,param_2,puVar6);
      }
      _objc_release(puVar6);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
  }
  else {
    if (puVar9 != (undefined *)0x0) {
      puVar10 = (undefined *)puVar7;
      func_0x00010c071ae0(puVar7,param_2,puVar9);
      _objc_release(puVar9);
      _objc_release(puVar7);
      if ((int)puVar10 == 0) {
        puVar12 = (undefined *)0x1;
        goto LAB_107d66448;
      }
      goto LAB_107d66380;
    }
    puVar12 = (undefined *)0x1;
    puVar10 = (undefined *)puVar7;
  }
  _objc_release(puVar10);
LAB_107d66448:
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  return puVar12;
}



/* Entry: 107d662ec; end: 107d6647b; +[SCNMessagingMessage shouldShowSnapMeReplyAddToStoryForMessageSenderId:conversationId:currentUserId:] */

undefined *
FUN_107d662ec(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
             undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_3 == param_5) {
    _objc_release(param_5);
    _objc_release(param_3);
LAB_107d66380:
    puVar1 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126cb0a0;
      func_0x00010bfc8380(PTR_PTR_1126cb0a0,param_2,puVar1,puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      _objc_retain(puVar3);
      if (param_4 == puVar3) {
        puVar4 = (undefined *)0x1;
      }
      else if (puVar3 == (undefined *)0x0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        puVar4 = param_4;
        func_0x00010c071ae0(param_4,param_2,puVar3);
      }
      _objc_release(puVar3);
      _objc_release(param_4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  else {
    if (param_5 != (undefined *)0x0) {
      puVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,param_5);
      _objc_release(param_5);
      _objc_release(param_3);
      if ((int)puVar1 == 0) {
        puVar4 = (undefined *)0x1;
        goto LAB_107d66448;
      }
      goto LAB_107d66380;
    }
    puVar4 = (undefined *)0x1;
    puVar1 = param_3;
  }
  _objc_release(puVar1);
LAB_107d66448:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 107d6647c; end: 107d665ff; -[SCNMessagingMessage isSnapMeReplyMessage] */

ulong FUN_107d6647c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar1 = param_1;
  _objc_getAssociatedObject(param_1,&UNK_10f45a1d8);
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar5 = param_1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c242120();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010c08fa60();
    if (uVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126b2378;
      func_0x00010bfe3740(PTR_PTR_1126b2378);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010c086560(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bf43580(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(puVar4);
    }
    _objc_release(uVar3);
    _objc_release(uVar5);
    puVar4 = puVar6;
    FUN_107d65fcc(puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = (ulong)(puVar4 != (undefined *)0x0);
    _objc_release();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(param_1,&UNK_10f45a1d8,puVar6,0x301);
    _objc_release(puVar6);
  }
  else {
    uVar5 = uVar1;
    func_0x00010bf1f3c0(uVar1);
  }
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 107d66600; end: 107d66743; -[SCNMessagingMessage snapMeReplyOriginalSnapId] */

void FUN_107d66600(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x000107d66684();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08f740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar2;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107d66744; end: 107d667d3; -[SCNMessagingMessage isSnapMeReplyToPublicStory] */

bool FUN_107d66744(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x000107d66684();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfd58a0();
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = uVar2;
    func_0x00010bf454e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf52680();
    bVar1 = (int)uVar4 == 0x11;
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 107d667d4; end: 107d669e7; -[SCNMessagingMessage shouldUseSnapMeReplyPluginForCurrentUserId:] */

undefined * FUN_107d667d4(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar5 = param_1;
  func_0x00010c07e9e0();
  if ((int)puVar5 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = param_1;
    func_0x00010c06e660();
    if ((int)puVar5 == 0) {
      puVar5 = param_1;
      func_0x00010bf4df40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar5;
      func_0x000107d66684();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c105840();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar3 = puVar2;
      func_0x00010c08fa60();
      puVar1 = (undefined *)0x0;
      if (puVar3 != (undefined *)0x0) {
        puVar1 = puVar2;
      }
      _objc_retain(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar5);
      puVar2 = puVar1;
      func_0x00010c08fa60();
      puVar5 = PTR_PTR_1126b2d28;
      if (puVar2 == (undefined *)0x0) {
        puVar2 = param_1;
        func_0x00010c0cb8c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6e760(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = param_1;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2342e0(puVar5,param_2,puVar2,puVar4,param_3);
        _objc_release(puVar4);
        _objc_release(puVar3);
      }
      else {
        _objc_retain(puVar1);
        _objc_retain(param_3);
        puVar2 = puVar1;
        if (puVar1 == param_3) {
          puVar5 = (undefined *)0x1;
          param_1 = param_3;
        }
        else if (param_3 == (undefined *)0x0) {
          puVar5 = (undefined *)0x0;
          param_1 = (undefined *)0x0;
        }
        else {
          puVar5 = puVar1;
          func_0x00010c071ae0(puVar1,param_2,param_3);
          param_1 = param_3;
        }
      }
    }
    else {
      func_0x00010bf374c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_retain(param_3);
      puVar1 = param_1;
      puVar2 = param_1;
      if (param_1 == param_3) {
        puVar5 = (undefined *)0x1;
        param_1 = param_3;
      }
      else if (param_3 == (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
        param_1 = (undefined *)0x0;
      }
      else {
        puVar5 = param_1;
        func_0x00010c071ae0(param_1,param_2,param_3);
        param_1 = param_3;
      }
    }
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 107d669e8; end: 107d66a27; -[SCNMessagingMessage isSponsoredSnap] */

bool FUN_107d669e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4ce20();
  _objc_release(param_1);
  return (int)uVar1 == 0x16;
}



/* Entry: 107d66a28; end: 107d66aa3; -[SCNMessagingMessage sponsoredSnapAdResponse] */

void FUN_107d66a28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010c07f260();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bf4df40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c24a6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d66aa4; end: 107d66b53; -[SCNMessagingMessage canBeSaved] */

uint FUN_107d66aa4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07d060();
  if ((int)uVar2 == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_1;
    func_0x00010c07d8a0();
    _objc_release(uVar1);
    if (((uVar2 & 1) == 0) && (uVar1 = param_1, func_0x00010c079100(), (uVar1 & 1) == 0)) {
      func_0x00010bf4df40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010bf4ce20();
      _objc_release(param_1);
      uVar3 = 1;
      if ((uint)uVar1 < 0x16) {
        uVar3 = 0x19fefe >> (ulong)((uint)uVar1 & 0x1f);
      }
      goto LAB_107d66b40;
    }
  }
  uVar3 = 0;
LAB_107d66b40:
  return uVar3 & 1;
}


