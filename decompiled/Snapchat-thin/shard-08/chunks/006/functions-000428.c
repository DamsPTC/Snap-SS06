/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1063dd508; end: 1063dd7ff; -[SCLongformShowAdDataSource _makeDynamicAdRequestIfNecessary:] */

void FUN_1063dd508(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  
  puVar1 = PTR_PTR_1126b8cd8;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bef4240();
  func_0x00010c25d840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf17be0();
  _objc_release(puVar1);
  if (param_3 - 1U < 4) {
    ppuStack_88 = (undefined **)(&PTR_PTR_110920b38)[param_3 - 1U];
  }
  else {
    ppuStack_88 = &PTR____CFConstantStringClassReference_110db54d8;
  }
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1063dfa80;
  puStack_98 = &UNK_1108951c0;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e49cb8;
  ppuVar5 = &puStack_b0;
  puStack_80 = puVar4;
  func_0x00010bf51e00();
  _objc_release(ppuStack_88);
  _objc_release(ppuStack_90);
  _objc_initWeak(&puStack_b0,param_1);
  uVar6 = param_1;
  func_0x00010bef4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c26a3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010befe100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_1);
  uVar9 = param_1;
  func_0x00010bef4d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010bef3aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c283180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21060();
  puStack_b8 = puVar3;
  _objc_copyWeak(auStack_c0,&puStack_b0);
  func_0x00010c134800(uVar6);
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(&puStack_b0);
  _objc_release(ppuVar5);
  _objc_release(puVar2);
  return;
}



/* Entry: 1063dd800; end: 1063dd90f;  */

void FUN_1063dd800(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b8cd8;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_2 != 0) {
    func_0x00010bef4240(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c25d840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b60();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063dd910; end: 1063ddaef; -[SCLongformShowAdDataSource _didDownloadAdWithSuccess:metadataToMediaTransitionCookie:] */

void FUN_1063dd910(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  if (param_3 != 0) {
    func_0x00010bdce9a0();
    lVar1 = param_1;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b8cd8;
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010bef4240(param_1);
      func_0x00010c25d840(puVar3,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4da38);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf17b60();
      _objc_release(puVar3);
      lVar1 = param_1;
      func_0x00010bef4120(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0c5660(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010bef3c60();
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc0000000;
      pcStack_68 = FUN_1063ddba4;
      puStack_60 = &UNK_110848088;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc0000000;
      uStack_90 = 0x1063ddbe4;
      puStack_88 = &UNK_110920a58;
      puStack_80 = puVar5;
      uStack_58 = param_4;
      func_0x00010bfa85e0(lVar1,param_2,&PTR___NSConcreteGlobalBlock_110920a38,lVar2,lVar6,
                          &puStack_78,&puStack_a0);
      _objc_release(lVar6);
      _objc_release(param_1);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(puVar4);
    }
  }
  return;
}



/* Entry: 1063ddaf0; end: 1063ddba3;  */

ulong FUN_1063ddaf0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bef60a0();
  if (uVar1 == 5) {
    uVar3 = param_2;
    func_0x00010c0dac40();
    uVar2 = param_2;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    if (uVar3 + 1 < uVar1) {
      uVar1 = uVar3 + 1;
    }
  }
  else {
    uVar3 = param_2;
    func_0x00010bef52c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
  }
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1063ddba4; end: 1063ddc23;  */

void FUN_1063ddba4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063ddc24; end: 1063dde17; -[SCLongformShowAdDataSource _applyServerAdInsertionConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063ddc24(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 == 0) {
    func_0x00010bef4240(param_1);
    lVar1 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bef2fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0620();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010bef4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  FUN_1063dfb28(lVar4,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c286980(*(undefined8 *)(param_1 + _DAT_112746fa4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 1063dde18; end: 1063de087; -[SCLongformShowAdDataSource _prepareAdForDynamicInsertionLongformShowIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063dde18(undefined8 param_1,long param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined *unaff_x25;
  undefined8 uVar18;
  undefined **unaff_x26;
  undefined **unaff_x27;
  long lVar19;
  undefined **unaff_x28;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 auStack_370 [128];
  long lStack_2f0;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined *puStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined **ppuStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 auStack_230 [16];
  long lStack_1b0;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  ppuVar16 = (undefined **)(long)_DAT_112746f94;
  lVar10 = *(long *)((long)ppuVar16 + param_2);
  ppuVar15 = param_4;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar15;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar15);
  if (lVar10 == 0) {
    ppuVar15 = param_4;
    func_0x00010bef3180(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)ppuVar16 + param_2);
    ppuVar11 = param_4;
    func_0x00010c280580(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar12,param_3,ppuVar15,ppuVar11);
    _objc_release(ppuVar11);
    _objc_release(ppuVar15);
    lVar10 = param_2;
    func_0x00010bdc5800(param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_2 + _DAT_112746f9c);
    ppuVar15 = param_4;
    func_0x00010c280580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar12,param_3,lVar10,ppuVar15);
    _objc_release(ppuVar15);
    _objc_release(lVar10);
    param_1 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    puStack_120 = (undefined8 *)0x0;
    ppuVar11 = *(undefined ***)((long)ppuVar16 + param_2);
    ppuVar15 = param_4;
    func_0x00010c280580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(ppuVar11,param_3,ppuVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar15);
    ppuVar15 = ppuVar11;
    func_0x00010bf52a60(ppuVar11,param_3,&uStack_130,auStack_f0,0x10);
    if (ppuVar15 != (undefined **)0x0) {
      unaff_x26 = (undefined **)*puStack_120;
      unaff_x27 = (undefined **)&DAT_112746000;
      do {
        unaff_x28 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_120 != unaff_x26) {
            _objc_enumerationMutation(ppuVar11);
          }
          puVar14 = *(undefined **)(lStack_128 + (long)unaff_x28 * 8);
          ppuVar16 = *(undefined ***)(param_2 + _DAT_112746f98);
          unaff_x25 = puVar14;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(ppuVar16,param_3,puVar14,unaff_x25);
          _objc_release(unaff_x25);
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (ppuVar15 != unaff_x28);
        ppuVar15 = ppuVar11;
        func_0x00010bf52a60(ppuVar11,param_3,&uStack_130,auStack_f0,0x10);
      } while (ppuVar15 != (undefined **)0x0);
    }
    _objc_release(ppuVar11);
    ppuVar11 = param_4;
    func_0x00010bdf5100(param_2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_1063de088;
    lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar11);
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    ppuVar13 = *(undefined ***)((long)param_4 + (long)_DAT_112746f94);
    ppuVar15 = ppuVar11;
    ppuStack_278 = ppuVar11;
    func_0x00010c280580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(ppuVar13,param_3,ppuVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar15);
    ppuVar2 = ppuVar13;
    func_0x00010bf529e0();
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar15 = (undefined **)0x0;
      ppuVar11 = &PTR_PTR_1126ca000;
      do {
        ppuVar16 = ppuVar13;
        func_0x00010c0dfd40(ppuVar13,param_3,ppuVar15);
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = PTR_PTR_1126ca538;
        _objc_alloc();
        func_0x00010c250f20(ppuVar16);
        unaff_x26 = ppuVar16;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = param_4;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = unaff_x27;
        func_0x00010bef2520();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c055760(param_1,0x3ff0000000000000,unaff_x25,param_3,unaff_x26,ppuVar15,1,
                            unaff_x28);
        _objc_release(unaff_x28);
        _objc_release(unaff_x27);
        _objc_release(unaff_x26);
        func_0x00010befa120(ppuVar1,param_3,unaff_x25);
        _objc_release(unaff_x25);
        _objc_release(ppuVar16);
        ppuVar15 = (undefined **)((long)ppuVar15 + 1);
        ppuVar2 = ppuVar13;
        func_0x00010bf529e0();
      } while (ppuVar15 < ppuVar2);
    }
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    puStack_260 = (undefined8 *)0x0;
    _objc_retain(ppuVar1);
    puVar7 = &uStack_270;
    puVar3 = auStack_230;
    uVar8 = 0x10;
    ppuVar2 = ppuVar1;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar11 = (undefined **)*puStack_260;
      unaff_x27 = (undefined **)&DAT_112746000;
      do {
        unaff_x28 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_260 != ppuVar11) {
            _objc_enumerationMutation(ppuVar1);
          }
          ppuVar16 = *(undefined ***)(lStack_268 + (long)unaff_x28 * 8);
          func_0x00010c28b580(ppuVar16,param_3,ppuVar1);
          unaff_x25 = *(undefined **)((long)param_4 + (long)_DAT_112746f84);
          unaff_x26 = ppuVar16;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(unaff_x25,param_3,ppuVar16,unaff_x26);
          _objc_release(unaff_x26);
          func_0x00010c18b5e0(ppuVar16,param_3,param_4);
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (ppuVar2 != unaff_x28);
        puVar7 = &uStack_270;
        puVar3 = auStack_230;
        uVar8 = 0x10;
        ppuVar2 = ppuVar1;
        func_0x00010bf52a60();
        ppuVar15 = (undefined **)0x0;
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuVar1);
    _objc_release(ppuVar13);
    _objc_release(ppuVar1);
    ppuVar2 = ppuStack_278;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
      ___stack_chk_fail();
      pcStack_288 = FUN_1063de33c;
      lStack_2f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar4 = puVar7;
      puVar5 = puVar3;
      uVar9 = uVar8;
      ppuStack_2e0 = unaff_x28;
      ppuStack_2d8 = unaff_x27;
      ppuStack_2d0 = unaff_x26;
      puStack_2c8 = unaff_x25;
      ppuStack_2c0 = ppuVar16;
      ppuStack_2b8 = ppuVar15;
      ppuStack_2b0 = ppuVar13;
      ppuStack_2a8 = ppuVar1;
      ppuStack_2a0 = param_4;
      ppuStack_298 = ppuVar11;
      ppuStack_290 = &puStack_140;
      _objc_retain(puVar7);
      if ((uVar8 & 1) == 0) {
        _objc_retain(puVar7);
        puVar6 = puVar7;
      }
      else {
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar7;
        func_0x00010c2af9a0(puVar7,param_3,puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        lStack_3a8 = 0;
        uStack_3b0 = 0;
        uStack_398 = 0;
        plStack_3a0 = (long *)0x0;
        uStack_388 = 0;
        uStack_390 = 0;
        uStack_378 = 0;
        uStack_380 = 0;
        puVar5 = puVar7;
        func_0x00010bef52c0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = 0x10;
        puVar6 = puVar5;
        func_0x00010bf52a60();
        if (puVar6 != (undefined8 *)0x0) {
          lVar10 = *plStack_3a0;
          do {
            puVar20 = (undefined8 *)0x0;
            do {
              if (*plStack_3a0 != lVar10) {
                _objc_enumerationMutation(puVar5);
              }
              uVar12 = *(undefined8 *)(lStack_3a8 + (long)puVar20 * 8);
              func_0x00010c2af9a0(uVar12,param_3,puVar3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar14,param_3,uVar12);
              _objc_release(uVar12);
              puVar20 = (undefined8 *)((long)puVar20 + 1);
            } while (puVar6 != puVar20);
            uVar9 = 0x10;
            puVar6 = puVar5;
            func_0x00010bf52a60(puVar5,param_3,&uStack_3b0,auStack_370,0x10);
          } while (puVar6 != (undefined8 *)0x0);
        }
        _objc_release(puVar5);
        puVar6 = puVar4;
        func_0x00010c2a7da0(puVar4,param_3,puVar14);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        ppuVar15 = ppuVar2;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar15;
        func_0x00010bef42e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar16;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c283480();
        _objc_release(ppuVar11);
        _objc_release(ppuVar16);
        _objc_release(ppuVar15);
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar2;
        func_0x00010c098e80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar15;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        puVar5 = puVar7;
        func_0x00010c283400();
        _objc_release(ppuVar16);
        _objc_release(ppuVar15);
        _objc_release(ppuVar2);
        _objc_release(puVar14);
        _objc_release(puVar3);
      }
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f0) {
        ___stack_chk_fail();
        _objc_retain(uVar9);
        puVar6 = puVar7;
        func_0x00010bed2a80(puVar7,param_3,puVar4,uVar9,puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar7;
        func_0x00010bef4820(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar6;
        func_0x00010bfe5ec0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3,param_3,puVar6,puVar4);
        _objc_release(puVar4);
        _objc_release(puVar3);
        if ((int)puVar5 != 0) {
          puVar3 = puVar7;
          func_0x00010bfceb40();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          if (puVar4 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar7;
            func_0x00010bfceb40(puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640();
            _objc_release(puVar3);
          }
          puVar3 = puVar6;
          func_0x00010bfe5ec0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4,param_3,puVar3);
          _objc_release(puVar3);
          puVar3 = puVar6;
          func_0x00010bef52c0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          puVar3 = puVar7;
          func_0x00010c067280(puVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar9;
          func_0x00010bfe5ec0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3,param_3,puVar5,uVar8);
          _objc_release(uVar8);
          _objc_release(puVar3);
          uVar12 = *(undefined8 *)((long)puVar7 + (long)_DAT_112746f7c);
          puVar3 = puVar5;
          func_0x00010c280580(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar12,param_3,puVar3);
          _objc_release(puVar3);
          lVar19 = (long)_DAT_112746f8c;
          lVar17 = *(long *)((long)puVar7 + lVar19);
          lVar21 = (long)_DAT_112746fb8;
          uVar12 = *(undefined8 *)((long)puVar7 + lVar21);
          func_0x00010c280580(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(lVar17,param_3,uVar12);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar17;
          func_0x00010c067fc0();
          _objc_release(lVar17);
          _objc_release(uVar12);
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,lVar10 + 1);
          _objc_retainAutoreleasedReturnValue();
          uVar18 = *(undefined8 *)((long)puVar7 + lVar19);
          uVar12 = *(undefined8 *)((long)puVar7 + lVar21);
          func_0x00010c280580(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar18,param_3,puVar14,uVar12);
          _objc_release(uVar12);
          _objc_release(puVar14);
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
        _objc_release(uVar9);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1063de088; end: 1063de33b; -[SCLongformShowAdDataSource _createTriggerPointsForDynamicAdsSlotWithShow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063de088(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **unaff_x24;
  long lVar15;
  undefined *unaff_x25;
  undefined8 uVar16;
  undefined **unaff_x26;
  undefined *unaff_x27;
  long lVar17;
  long lVar18;
  undefined *unaff_x28;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  long lStack_138;
  ulong *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 auStack_100 [16];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar13 = *(undefined ***)(param_2 + _DAT_112746f94);
  ppuVar14 = param_4;
  ppuStack_148 = param_4;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(ppuVar13,param_3,ppuVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar14);
  ppuVar2 = ppuVar13;
  func_0x00010bf529e0();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar14 = (undefined **)0x0;
    param_4 = &PTR_PTR_1126ca000;
    do {
      unaff_x24 = ppuVar13;
      func_0x00010c0dfd40(ppuVar13,param_3,ppuVar14);
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = PTR_PTR_1126ca538;
      _objc_alloc();
      func_0x00010c250f20(unaff_x24);
      unaff_x26 = unaff_x24;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = param_2;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = unaff_x27;
      func_0x00010bef2520();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c055760(param_1,0x3ff0000000000000,unaff_x25,param_3,unaff_x26,ppuVar14,1,
                          unaff_x28);
      _objc_release(unaff_x28);
      _objc_release(unaff_x27);
      _objc_release(unaff_x26);
      func_0x00010befa120(puVar1,param_3,unaff_x25);
      _objc_release(unaff_x25);
      _objc_release(unaff_x24);
      ppuVar14 = (undefined **)((long)ppuVar14 + 1);
      ppuVar2 = ppuVar13;
      func_0x00010bf529e0();
    } while (ppuVar14 < ppuVar2);
  }
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  puStack_130 = (ulong *)0x0;
  _objc_retain(puVar1);
  puVar10 = &uStack_140;
  puVar4 = auStack_100;
  uVar11 = 0x10;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    param_4 = (undefined **)*puStack_130;
    unaff_x27 = &DAT_112746000;
    do {
      unaff_x28 = (undefined *)0x0;
      do {
        if ((undefined **)*puStack_130 != param_4) {
          _objc_enumerationMutation(puVar1);
        }
        unaff_x24 = *(undefined ***)(lStack_138 + (long)unaff_x28 * 8);
        func_0x00010c28b580(unaff_x24,param_3,puVar1);
        unaff_x25 = *(undefined **)(param_2 + _DAT_112746f84);
        unaff_x26 = unaff_x24;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(unaff_x25,param_3,unaff_x24,unaff_x26);
        _objc_release(unaff_x26);
        func_0x00010c18b5e0(unaff_x24,param_3,param_2);
        unaff_x28 = unaff_x28 + 1;
      } while (puVar3 != unaff_x28);
      puVar10 = &uStack_140;
      puVar4 = auStack_100;
      uVar11 = 0x10;
      puVar3 = puVar1;
      func_0x00010bf52a60();
      ppuVar14 = (undefined **)0x0;
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(ppuVar13);
  _objc_release(puVar1);
  ppuVar2 = ppuStack_148;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    pcStack_158 = FUN_1063de33c;
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar10;
    puVar6 = puVar4;
    uVar12 = uVar11;
    puStack_1b0 = unaff_x28;
    puStack_1a8 = unaff_x27;
    ppuStack_1a0 = unaff_x26;
    puStack_198 = unaff_x25;
    ppuStack_190 = unaff_x24;
    ppuStack_188 = ppuVar14;
    ppuStack_180 = ppuVar13;
    puStack_178 = puVar1;
    puStack_170 = param_2;
    ppuStack_168 = param_4;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(puVar10);
    if ((uVar11 & 1) == 0) {
      _objc_retain(puVar10);
      puVar7 = puVar10;
    }
    else {
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar10;
      func_0x00010c2af9a0(puVar10,param_3,puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      plStack_270 = (long *)0x0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      puVar6 = puVar10;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = 0x10;
      puVar7 = puVar6;
      func_0x00010bf52a60();
      if (puVar7 != (undefined8 *)0x0) {
        lVar17 = *plStack_270;
        do {
          puVar19 = (undefined8 *)0x0;
          do {
            if (*plStack_270 != lVar17) {
              _objc_enumerationMutation(puVar6);
            }
            uVar8 = *(undefined8 *)(lStack_278 + (long)puVar19 * 8);
            func_0x00010c2af9a0(uVar8,param_3,puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1,param_3,uVar8);
            _objc_release(uVar8);
            puVar19 = (undefined8 *)((long)puVar19 + 1);
          } while (puVar7 != puVar19);
          uVar12 = 0x10;
          puVar7 = puVar6;
          func_0x00010bf52a60(puVar6,param_3,&uStack_280,auStack_240,0x10);
        } while (puVar7 != (undefined8 *)0x0);
      }
      _objc_release(puVar6);
      puVar7 = puVar5;
      func_0x00010c2a7da0(puVar5,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      ppuVar14 = ppuVar2;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar14;
      func_0x00010bef42e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c283480();
      _objc_release(ppuVar9);
      _objc_release(ppuVar13);
      _objc_release(ppuVar14);
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar2;
      func_0x00010c098e80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar14;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      puVar6 = puVar10;
      func_0x00010c283400();
      _objc_release(ppuVar13);
      _objc_release(ppuVar14);
      _objc_release(ppuVar2);
      _objc_release(puVar1);
      _objc_release(puVar4);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      ___stack_chk_fail();
      _objc_retain(uVar12);
      puVar7 = puVar10;
      func_0x00010bed2a80(puVar10,param_3,puVar5,uVar12,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar10;
      func_0x00010bef4820(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      func_0x00010bfe5ec0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar4,param_3,puVar7,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      if ((int)puVar6 != 0) {
        puVar4 = puVar10;
        func_0x00010bfceb40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        if (puVar5 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar10;
          func_0x00010bfceb40(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(puVar4);
        }
        puVar4 = puVar7;
        func_0x00010bfe5ec0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5,param_3,puVar4);
        _objc_release(puVar4);
        puVar4 = puVar7;
        func_0x00010bef52c0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = puVar10;
        func_0x00010c067280(puVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar12;
        func_0x00010bfe5ec0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4,param_3,puVar6,uVar11);
        _objc_release(uVar11);
        _objc_release(puVar4);
        uVar8 = *(undefined8 *)((long)puVar10 + (long)_DAT_112746f7c);
        puVar4 = puVar6;
        func_0x00010c280580(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar8,param_3,puVar4);
        _objc_release(puVar4);
        lVar18 = (long)_DAT_112746f8c;
        lVar15 = *(long *)((long)puVar10 + lVar18);
        lVar20 = (long)_DAT_112746fb8;
        uVar8 = *(undefined8 *)((long)puVar10 + lVar20);
        func_0x00010c280580(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(lVar15,param_3,uVar8);
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar15;
        func_0x00010c067fc0();
        _objc_release(lVar15);
        _objc_release(uVar8);
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,lVar17 + 1);
        _objc_retainAutoreleasedReturnValue();
        uVar16 = *(undefined8 *)((long)puVar10 + lVar18);
        uVar8 = *(undefined8 *)((long)puVar10 + lVar20);
        func_0x00010c280580(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar16,param_3,puVar1,uVar8);
        _objc_release(uVar8);
        _objc_release(puVar1);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      _objc_release(uVar12);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  return;
}



/* Entry: 1063de33c; end: 1063de5b7; -[SCLongformShowAdDataSource _updateAdResponse:withTriggerPoint:isFirstInPod:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063de33c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
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
  puVar1 = param_3;
  puVar3 = param_4;
  uVar8 = param_5;
  _objc_retain(param_3);
  if ((param_5 & 1) == 0) {
    _objc_retain(param_3);
    puVar4 = param_3;
  }
  else {
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010c2af9a0(param_3,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar3 = param_3;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0x10;
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar11 = *plStack_120;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(puVar3);
          }
          uVar5 = *(undefined8 *)(lStack_128 + (long)puVar13 * 8);
          func_0x00010c2af9a0(uVar5,param_2,param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2,param_2,uVar5);
          _objc_release(uVar5);
          puVar13 = puVar13 + 1;
        } while (puVar4 != puVar13);
        uVar8 = 0x10;
        puVar4 = puVar3;
        func_0x00010bf52a60(puVar3,param_2,&uStack_130,auStack_f0,0x10);
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    puVar4 = puVar1;
    func_0x00010c2a7da0(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar5 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010bef42e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c283480();
    _objc_release(uVar6);
    _objc_release(uVar10);
    _objc_release(uVar5);
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c098e80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_4;
    puVar3 = param_3;
    func_0x00010c283400();
    _objc_release(uVar10);
    _objc_release(uVar5);
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(param_4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(uVar8);
    puVar4 = param_3;
    func_0x00010bed2a80(param_3,param_2,puVar1,uVar8,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010bef4820(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bfe5ec0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar4,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)puVar3 != 0) {
      puVar1 = param_3;
      func_0x00010bfceb40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      if (puVar3 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_3;
        func_0x00010bfceb40(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640();
        _objc_release(puVar1);
      }
      puVar1 = puVar4;
      func_0x00010bfe5ec0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar1);
      _objc_release(puVar1);
      puVar1 = puVar4;
      func_0x00010bef52c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = param_3;
      func_0x00010c067280(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010bfe5ec0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_2,puVar2,uVar7);
      _objc_release(uVar7);
      _objc_release(puVar1);
      uVar5 = *(undefined8 *)(param_3 + _DAT_112746f7c);
      puVar1 = puVar2;
      func_0x00010c280580(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar5,param_2,puVar1);
      _objc_release(puVar1);
      lVar12 = (long)_DAT_112746f8c;
      lVar9 = *(long *)(param_3 + lVar12);
      lVar14 = (long)_DAT_112746fb8;
      uVar5 = *(undefined8 *)(param_3 + lVar14);
      func_0x00010c280580(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(lVar9,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar9;
      func_0x00010c067fc0();
      _objc_release(lVar9);
      _objc_release(uVar5);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar11 + 1);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_3 + lVar12);
      uVar5 = *(undefined8 *)(param_3 + lVar14);
      func_0x00010c280580(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar10,param_2,puVar1,uVar5);
      _objc_release(uVar5);
      _objc_release(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar3);
    }
    _objc_release(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1063de5b8; end: 1063de883; -[SCLongformShowAdDataSource _registerDynamicAdResponse:isFirstInPod:forAdTriggerPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063de5b8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_5);
  puVar1 = param_1;
  func_0x00010bed2a80(param_1,param_2,param_3,param_5,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bef4820(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfe5ec0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar1,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if ((int)param_4 != 0) {
    puVar2 = param_1;
    func_0x00010bfceb40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      func_0x00010bfceb40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(puVar2);
    }
    puVar2 = puVar1;
    func_0x00010bfe5ec0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bef52c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010c067280(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_5;
    func_0x00010bfe5ec0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,puVar4,uVar6);
    _objc_release(uVar6);
    _objc_release(puVar2);
    uVar6 = *(undefined8 *)(param_1 + _DAT_112746f7c);
    puVar2 = puVar4;
    func_0x00010c280580(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar6,param_2,puVar2);
    _objc_release(puVar2);
    lVar9 = (long)_DAT_112746f8c;
    lVar7 = *(long *)(param_1 + lVar9);
    lVar10 = (long)_DAT_112746fb8;
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c280580(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar7,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010c067fc0();
    _objc_release(lVar7);
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar5 + 1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c280580(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar8,param_2,puVar2,uVar6);
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063de884; end: 1063deaff; -[SCLongformShowAdDataSource _insertAdPodBeforeExpansion:triggerPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063de884(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar10 = (long)_DAT_112746fa0;
    uVar8 = *(ulong *)(param_1 + lVar10);
    lVar1 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(lVar1);
    if ((uVar8 & 1) == 0) {
      uVar9 = *(undefined8 *)(param_1 + lVar10);
      lVar1 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar9);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c0f7060();
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_1063deb00;
      puStack_78 = &UNK_110920a78;
      lStack_70 = param_1;
      _objc_retain(param_4);
      lVar10 = lVar1;
      lStack_68 = param_4;
      func_0x00010bd86420(lVar1,&puStack_90);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
      lVar3 = lVar10;
      func_0x00010bd86870(lVar10,puVar2,&PTR___NSConcreteGlobalBlock_110920aa8);
      _objc_release(puVar2);
      lVar4 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c098e80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf77660(lVar6);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = lVar3;
      func_0x00010bf529e0();
      if (lVar4 != 0) {
        func_0x00010c1013e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066f00();
        _objc_release(param_1);
        lVar4 = lVar3;
        func_0x000100504554(lVar3,&PTR___NSConcreteGlobalBlock_110920ac8);
        lVar5 = lVar4;
        func_0x00010bf446e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(lVar5);
      }
      _objc_release(lVar3);
      _objc_release(lVar10);
      _objc_release(lStack_68);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063deb00; end: 1063debbf;  */

void FUN_1063deb00(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9be80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0646a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((param_3 == 0) && (uVar3 < 2)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be462c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1063debc0; end: 1063debd3;  */

void FUN_1063debc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf09f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_arrayByAddingObjectsFromArray__1125a0188,param_2);
  return;
}



/* Entry: 1063debd4; end: 1063decd3; -[SCLongformShowAdDataSource _insertExpandedStoryAd:currentAdSnap:completion:] */

void FUN_1063debd4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfecde0();
  _objc_release(lVar1);
  if (lVar2 != 0x7fffffffffffffff) {
    lVar1 = param_3;
    func_0x00010bef52c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfecde0();
    lVar3 = param_3;
    func_0x00010bef52c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    func_0x00010be3c8e0(param_1,param_2,param_3,lVar2 + 1,lVar4 + -1,param_5);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063decd4; end: 1063def6b; -[SCLongformShowAdDataSource _itemsToInsertForAdResponse:triggerPoint:startIndex:endIndex:] */

void FUN_1063decd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (param_5 <= param_6) {
    uVar1 = param_1;
    func_0x00010bef3da0();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x1063deddc;
    puStack_68 = &UNK_110920ae8;
    _objc_retain(param_3);
    uStack_60 = param_3;
    uStack_58 = uVar1;
    uStack_50 = param_1;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x00010bd86bb4(param_5,param_6 + (1 - (long)param_5),&puStack_80);
    _objc_release(uStack_48);
    _objc_release(uStack_60);
    _objc_release(uVar1);
    puVar2 = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063def6c; end: 1063df33b; -[SCLongformShowAdDataSource _insertSnapsInStoryAd:startIndex:endIndex:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063def6c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010bef3da0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  for (; param_4 <= param_5; param_4 = param_4 + 1) {
    uVar6 = param_3;
    func_0x00010bef52c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126b23d8;
    _objc_alloc(PTR_PTR_1126b23d8);
    puVar5 = PTR_PTR_1126c9a78;
    func_0x00010c1015e0(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    FUN_1063d689c(uVar3,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0558c0(puVar4);
    _objc_release(uVar6);
    _objc_release(puVar5);
    uVar6 = *(undefined8 *)(param_1 + _DAT_112746f7c);
    puVar5 = puVar4;
    func_0x00010bdc1720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar6);
    _objc_release(puVar5);
    lVar8 = param_1;
    func_0x00010c067280(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bdc1720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar8);
    _objc_release(puVar5);
    _objc_release(lVar8);
    lVar8 = (long)_DAT_112746f84;
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    uVar6 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar8);
    puVar5 = puVar4;
    func_0x00010bdc1720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar9);
    _objc_release(puVar5);
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010befa120(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_initWeak(auStack_68,param_1);
  func_0x00010c1013e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c066f00(param_1);
  _objc_release(puVar4);
  _objc_release(param_1);
  puVar4 = puVar2;
  func_0x000100504554(puVar2,&PTR___NSConcreteGlobalBlock_110920b18);
  puVar5 = puVar4;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1063df33c; end: 1063df3af;  */

void FUN_1063df33c(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if ((param_2 & 1) == 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0a0600();
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063df3b0; end: 1063df3b7;  */

void FUN_1063df3b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc1730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_ID_11254df68);
  return;
}



/* Entry: 1063df3b8; end: 1063df3bb; -[SCLongformShowAdDataSource operaPlaylistItemController] */

void FUN_1063df3b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1013f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_playlistItemController_11261df18);
  return;
}



/* Entry: 1063df3bc; end: 1063df4a7; -[SCLongformShowAdDataSource progressiveMediaDownloaderConfig] */

void FUN_1063df3bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ca540;
  _objc_alloc(PTR_PTR_1126ca540);
  uVar2 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c067f60();
  uVar6 = param_1;
  func_0x00010c0c5660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_1);
  func_0x00010c0305e0(puVar1,param_2,uVar5,uVar6,0,0,param_1);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063df4a8; end: 1063df4eb; -[SCLongformShowAdDataSource lastInteractionStateProvider] */

void FUN_1063df4a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0ea260();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063df4ec; end: 1063df54b; -[SCLongformShowAdDataSource progressiveMediaDownloader:adSnapFor:] */

void FUN_1063df4ec(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010bf63e00(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063df54c; end: 1063df63b; -[SCLongformShowAdDataSource progressiveMediaDownloader:adSnapAfter:] */

void FUN_1063df54c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  func_0x00010bef4ac0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfecde0();
  _objc_release(param_4);
  _objc_release(uVar3);
  if (uVar1 != 0x7fffffffffffffff) {
    uVar3 = param_1;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    if (uVar1 < uVar2 - 1) {
      uVar1 = param_1;
      func_0x00010bef52c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      goto LAB_1063df620;
    }
  }
  uVar3 = 0;
LAB_1063df620:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1063df63c; end: 1063df643; -[SCLongformShowAdDataSource progressiveMediaDownloader:adResponseFor:] */

void FUN_1063df63c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef4ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_adResponseForDataModel__11259ac58,param_4);
  return;
}



/* Entry: 1063df644; end: 1063df713; -[SCLongformShowAdDataSource _triggerPointSnapIndexForTriggerPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1063df644(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112746f9c);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112746fb8);
  _objc_retain(param_3);
  func_0x00010c280580(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar3;
  func_0x00010c0e00e0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 1063df714; end: 1063df787; -[SCLongformShowAdDataSource _isOptionalAdSlotTriggerPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1063df714(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112746f98);
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c079500();
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1063df788; end: 1063df93f; -[SCLongformShowAdDataSource _currentShowFirstSnapIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1063df788(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  lVar7 = (long)_DAT_112746fb8;
  if (*(long *)(param_2 + lVar7) == 0) {
    return 0;
  }
  lVar1 = param_2;
  func_0x00010c0ea260();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f1b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5f780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = lVar3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar3;
      func_0x00010c118b40(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar8 = param_1;
      _objc_release(lVar2);
      _objc_release(lVar1);
      uVar4 = *(ulong *)(param_2 + lVar7);
      func_0x00010c2417c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf529e0();
      if (uVar6 != 0) {
        uVar6 = 0;
        do {
          uVar5 = uVar4;
          func_0x00010c0dfd40(uVar4,param_3,uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c250f20();
          dVar9 = dVar8;
          _objc_release(uVar5);
          if (param_1 <= dVar8) goto LAB_1063df904;
          uVar6 = uVar6 + 1;
          uVar5 = uVar4;
          func_0x00010bf529e0();
          dVar8 = dVar9;
        } while (uVar6 < uVar5);
      }
      uVar6 = uVar4;
      func_0x00010bf529e0(uVar4);
LAB_1063df904:
      _objc_release(uVar4);
      goto LAB_1063df914;
    }
  }
  uVar6 = 0;
LAB_1063df914:
  _objc_release(lVar3);
  return uVar6;
}



/* Entry: 1063df940; end: 1063dfa7f; -[SCLongformShowAdDataSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063df940(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112746fac,0);
  _objc_storeStrong(param_1 + _DAT_112746f94,0);
  _objc_storeStrong(param_1 + _DAT_112746fa8,0);
  _objc_storeStrong(param_1 + _DAT_112746fa0,0);
  _objc_storeStrong(param_1 + _DAT_112746fa4,0);
  _objc_storeStrong(param_1 + _DAT_112746f90,0);
  _objc_storeStrong(param_1 + _DAT_112746f8c,0);
  _objc_storeStrong(param_1 + _DAT_112746f88,0);
  _objc_storeStrong(param_1 + _DAT_112746f98,0);
  _objc_storeStrong(param_1 + _DAT_112746f9c,0);
  _objc_storeStrong(param_1 + _DAT_112746fc0,0);
  _objc_storeStrong(param_1 + _DAT_112746fc4,0);
  _objc_storeStrong(param_1 + _DAT_112746f84,0);
  _objc_storeStrong(param_1 + _DAT_112746f80,0);
  _objc_storeStrong(param_1 + _DAT_112746f7c,0);
  _objc_storeStrong(param_1 + _DAT_112746fc8,0);
  _objc_storeStrong(param_1 + _DAT_112746fb8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112746fb4,0);
  return;
}



/* Entry: 1063dfa80; end: 1063dfb27;  */

void FUN_1063dfa80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e4d798);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94200();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063dfb28; end: 1063dfeeb;  */

void FUN_1063dfb28(double param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8c98;
  func_0x00010bfad4c0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126b8ca8;
    func_0x00010bf62e20();
    if ((int)puVar1 == 0) {
      lVar2 = param_2;
      func_0x00010bef2f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        lVar2 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdb00();
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdaa0();
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cda60();
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdce0();
        dVar11 = param_1;
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdca0();
        dVar12 = dVar11;
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdc40();
        dVar13 = dVar12;
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdd00();
        dVar10 = dVar13;
        _objc_release(lVar2);
        goto LAB_1063dfd7c;
      }
      func_0x00010c237220();
      func_0x00010c237200();
      func_0x00010c2371e0();
      puVar1 = param_3;
      func_0x00010c237280(param_3);
      puVar3 = param_3;
      func_0x00010c237260(param_3);
      puVar4 = param_3;
      func_0x00010c237240(param_3);
      dVar12 = (double)(long)puVar4;
      puVar4 = param_3;
      func_0x00010c2372a0(param_3);
      dVar10 = param_1;
    }
    else {
      func_0x00010c241160();
      func_0x00010c245700();
      func_0x00010c2456e0();
      puVar1 = PTR_PTR_1126b8ca8;
      func_0x00010c26f220(PTR_PTR_1126b8ca8);
      puVar3 = PTR_PTR_1126b8ca8;
      func_0x00010c26f160(PTR_PTR_1126b8ca8);
      func_0x00010c26f0c0(PTR_PTR_1126b8ca8);
      puVar4 = PTR_PTR_1126b8ca8;
      dVar10 = param_1;
      func_0x00010c2a1460(PTR_PTR_1126b8ca8);
      dVar12 = param_1;
    }
    dVar11 = (double)(long)puVar3;
    param_1 = (double)(long)puVar1;
    dVar13 = (double)(long)puVar4;
  }
  else {
    dVar11 = 0.0;
    dVar12 = 0.0;
    dVar13 = 0.0;
    dVar10 = param_1;
    param_1 = 0.0;
  }
LAB_1063dfd7c:
  puVar1 = PTR_PTR_1126ca508;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cdac0();
  lVar5 = param_2;
  func_0x00010bef2f80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cdc80();
  lVar6 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48240();
  lVar7 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48200();
  lVar8 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf481e0();
  lVar9 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48220();
  func_0x00010c02c0e0(param_1,dVar11,dVar12,dVar10,dVar13,puVar1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063dfeec; end: 1063e026b; -[SCLongformSpotlightAdDataSource initWithDependencies:pendingDisplayAdData:adMediaManager:adPreparationManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1063dfeec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126f11e0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithDependencies_pendingDisp_1125e0770,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746fcc);
    *(undefined **)((long)puVar1 + (long)_DAT_112746fcc) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746fd0);
    *(undefined **)((long)puVar1 + (long)_DAT_112746fd0) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746fd4);
    *(undefined **)((long)puVar1 + (long)_DAT_112746fd4) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746fd8);
    *(undefined **)((long)puVar1 + (long)_DAT_112746fd8) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746fdc);
    *(undefined **)((long)puVar1 + (long)_DAT_112746fdc) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746fe0);
    *(undefined **)((long)puVar1 + (long)_DAT_112746fe0) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746fe4);
    *(undefined **)((long)puVar1 + (long)_DAT_112746fe4) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746fe8);
    *(undefined **)((long)puVar1 + (long)_DAT_112746fe8) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746fec);
    *(undefined **)((long)puVar1 + (long)_DAT_112746fec) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR_PTR_1126ca520;
    _objc_alloc();
    uVar8 = param_3;
    func_0x00010bef2520(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bef2fc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf5ca20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff1160();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746ff0);
    *(undefined **)((long)puVar1 + (long)_DAT_112746ff0) = puVar2;
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar8);
    puVar2 = PTR_PTR_1126ca528;
    _objc_alloc();
    uVar8 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0c4e40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x00010c0c5940(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bef2520(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029980();
    lVar11 = (long)_DAT_112746ff4;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar2;
    _objc_release(uVar10);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar8);
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + lVar11));
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1063e026c; end: 1063e027b; -[SCLongformSpotlightAdDataSource updateEntryInteractionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e026c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112746ff8) = param_3;
  return;
}



/* Entry: 1063e027c; end: 1063e04a3; -[SCLongformSpotlightAdDataSource startViewingPlaylistItemGroup:previousItemGroup:currentItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e027c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  uVar6 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c098e80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75ea0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar6);
  lVar7 = (long)_DAT_112746ffc;
  uVar6 = *(ulong *)(param_1 + lVar7);
  uVar5 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(uVar5);
  if ((uVar6 & 1) == 0) {
    uVar5 = param_3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = uVar5;
    _objc_release(uVar4);
    uVar6 = param_1;
    func_0x00010be41f40();
    if ((param_4 != 0) && ((int)uVar6 != 0)) {
      uVar6 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010bef3a00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240(param_1);
      func_0x00010c0e53a0(uVar2);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar6);
    }
    uVar6 = param_1;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010bf63e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = uVar1;
    FUN_1063e04a4();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112747000;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(ulong *)(param_1 + lVar7) = uVar6;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c2118;
    _objc_retain(uVar1);
    _objc_opt_class(puVar3);
    uVar2 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar3);
    uVar6 = uVar1;
    if ((uVar2 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar1);
    uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112747004);
    *(ulong *)(param_1 + (long)_DAT_112747004) = uVar6;
    _objc_release(uVar5);
    func_0x00010c137fe0(*(undefined8 *)(param_1 + (long)_DAT_112746ff0));
    if (*(long *)(param_1 + lVar7) != 0) {
      func_0x00010bec21a0(param_1);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063e04a4; end: 1063e0623;  */

void FUN_1063e04a4(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126c2118;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    uVar2 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1063e6e24;
    uStack_40 = 0x1063e6e34;
    uStack_38 = 0;
    func_0x00010c0bdf40(uVar2);
    uVar4 = puStack_58[5];
    _objc_retain(uVar4);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1063e0624; end: 1063e08cb; -[SCLongformSpotlightAdDataSource startViewingPlaylistItem:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e0624(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  
  _objc_retain(param_3);
  lVar12 = (long)_DAT_112747008;
  uVar1 = *(ulong *)(param_1 + lVar12);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = param_3;
    _objc_release(uVar4);
    puVar2 = param_3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9a78;
    func_0x00010c1015e0(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c0720c0();
    if ((int)puVar6 != 0) {
      iVar11 = (int)*(undefined8 *)(param_1 + _DAT_112746fcc);
      puVar6 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar2);
      if (iVar11 == 0) goto LAB_1063e08ac;
      puVar2 = param_1;
      func_0x00010c1013e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010bf63e60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126ca218;
      _objc_opt_class(PTR_PTR_1126ca218);
      puVar7 = puVar5;
      _objc_opt_isKindOfClass(puVar5,puVar2);
      puVar6 = puVar5;
      if (((ulong)puVar7 & 1) == 0) {
        puVar6 = (undefined *)0x0;
      }
      _objc_retain(puVar6);
      _objc_release(puVar5);
      puVar2 = param_1;
      func_0x00010bef4ac0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010bef3da0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      FUN_1063e08cc(puVar6,puVar2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = param_1;
      func_0x00010bdc55e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar2;
      func_0x00010bfe5ec0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010c071ae0();
      _objc_release(puVar9);
      _objc_release(puVar8);
      if ((int)puVar10 != 0) {
        func_0x00010be3c280(param_1);
        func_0x00010be56160(param_1);
      }
      func_0x00010c251900(*(undefined8 *)(param_1 + _DAT_112746ff4));
      _objc_release(puVar6);
      _objc_release(puVar7);
    }
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
LAB_1063e08ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063e08cc; end: 1063e0a13;  */

void FUN_1063e08cc(undefined8 param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar7 = param_1;
  if (param_3 != 0) {
    uVar1 = param_2;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      uVar1 = param_2;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c071ae0();
      if ((uVar3 & 1) == 0) {
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
      else {
        lVar4 = param_3;
        func_0x00010bef4c60();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c071ae0();
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((int)lVar6 != 0) goto LAB_1063e09a8;
      }
      func_0x00010c280580(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1063e09dc;
    }
  }
LAB_1063e09a8:
  func_0x00010bfe5ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
LAB_1063e09dc:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1063e0a14; end: 1063e0b53; -[SCLongformSpotlightAdDataSource stopViewingPlaylistItemId:isViewingLongform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e0a14(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    uVar1 = param_1;
    func_0x00010c075a00(param_1,param_2,param_3);
    if ((int)uVar1 == 0) {
      uVar1 = param_1;
      func_0x00010c1013e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c101420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      func_0x00010c0a0740(param_1,param_2,uVar2);
      _objc_release(uVar2);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112746ff0);
      uVar1 = param_1;
      func_0x00010bdc55e0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010becfce0(param_1,param_2,uVar1);
      func_0x00010bf75ce0(uVar3,param_2,uVar2);
      _objc_release(uVar1);
      lVar4 = (long)_DAT_112746fe0;
      uVar1 = *(ulong *)(param_1 + lVar4);
      func_0x00010bf4b900(uVar1,param_2,param_3);
      if (((uVar1 & 1) == 0) &&
         (uVar1 = param_1, func_0x00010bf76fc0(param_1,param_2,param_3,param_4), (int)uVar1 != 0)) {
        func_0x00010befa120(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
        uVar1 = param_1;
        func_0x00010c070c20(param_1,param_2,param_3,param_4);
        if ((uVar1 & 1) == 0) {
          func_0x00010be5b960(param_1,param_2,2);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063e0b54; end: 1063e0b9f; -[SCLongformSpotlightAdDataSource stopViewingPlaylistItemGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e0b54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112746ffc);
  *(undefined8 *)(param_1 + _DAT_112746ffc) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112747000);
  *(undefined8 *)(param_1 + _DAT_112747000) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112746ff0),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1063e0ba0; end: 1063e0ba3; -[SCLongformSpotlightAdDataSource stopViewingOptOutInterstitialForPlaylistItemGroup:] */

void FUN_1063e0ba0(void)

{
  return;
}



/* Entry: 1063e0ba4; end: 1063e0ba7; -[SCLongformSpotlightAdDataSource startViewingPlaylistChapterId:currentItem:] */

void FUN_1063e0ba4(void)

{
  return;
}



/* Entry: 1063e0ba8; end: 1063e0baf; -[SCLongformSpotlightAdDataSource needToPrepareMediaBeforeDisplay] */

undefined8 FUN_1063e0ba8(void)

{
  return 1;
}



/* Entry: 1063e0bb0; end: 1063e0d67; -[SCLongformSpotlightAdDataSource dataModelFor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e0bb0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9a78;
  func_0x00010c1015e0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  _objc_release(lVar4);
  if ((int)lVar2 == 0) {
LAB_1063e0d44:
    lVar4 = 0;
  }
  else {
    lVar4 = param_1;
    func_0x00010c067280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar4);
    if (lVar3 == 0) {
      iVar5 = (int)*(undefined8 *)(param_1 + _DAT_112746fcc);
      lVar4 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(lVar4);
      if (iVar5 == 0) goto LAB_1063e0d44;
      lVar2 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240(param_1);
      lVar4 = lVar2;
      FUN_10640b154(lVar2,param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c067280(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c0e00e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = param_1;
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1063e0d68; end: 1063e0df3; -[SCLongformSpotlightAdDataSource pageDataForDataModel:completion:] */

void FUN_1063e0d68(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ca218;
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010be6f060(param_1);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063e0df4; end: 1063e0f97; -[SCLongformSpotlightAdDataSource adSnapIndexForItem:] */

undefined1 * FUN_1063e0df4(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_50;
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c067280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(puVar1);
  if (puVar3 == (undefined1 *)0x0) {
    puStack_48 = PTR_PTR_1126f11e0;
    puStack_50 = param_1;
    _objc_msgSendSuper2(&puStack_50,PTR_s_adSnapIndexForItem__11259ae98,param_3);
  }
  else {
    puVar1 = param_1;
    func_0x00010c067280(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0e00e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(puVar1);
    func_0x00010bef4820(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bfe5ec0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c0e00e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_1);
    puVar1 = puVar4;
    func_0x00010bef52c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = (undefined1 **)puVar1;
    func_0x00010bfecde0();
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)ppuVar5;
}



/* Entry: 1063e0f98; end: 1063e15c7; -[SCLongformSpotlightAdDataSource didTriggerNoFillTriggerPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e0f98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bef4820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112746fd0);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar2 = param_1;
  func_0x00010bfceb40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010be36bc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar2);
  func_0x00010bfecde0();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = uVar6;
  func_0x00010c084fc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0df840(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b92c8;
  func_0x00010c23fa00(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar7);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar5);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b92c8;
  func_0x00010bef2d00(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar7);
  _objc_release(puVar10);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ef220();
  func_0x00010c0df740(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b92c8;
  func_0x00010bf0f6c0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar7);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar2);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010c29d360();
  lVar12 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084c0d90(lVar11,lVar14);
  func_0x00010c0df780(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b92c8;
  func_0x00010c125020(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar7);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010bef6000();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar3;
  func_0x00010bef52c0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c082160();
  func_0x00010c278340(lVar11);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar2);
  uVar5 = uVar4;
  func_0x00010c0f3aa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR_PTR_1126f11e0;
  plVar15 = &lStack_70;
  lStack_70 = param_1;
  _objc_msgSendSuper2(plVar15,PTR_s_adSnapViewLogParametersForSkippe_11259aef8,uVar1,uVar5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar9 = PTR_PTR_1126ca2e0;
  func_0x00010bef5560(PTR_PTR_1126ca2e0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bef52c0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf5ac40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a7980(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360();
  func_0x000107a59564();
  func_0x00010c2aa4e0(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010bf529e0();
  func_0x00010c2a7880(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a78a0(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ad400(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar11;
  func_0x00010bef2040();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0820(lVar2);
  _objc_release(puVar10);
  _objc_release(lVar2);
  _objc_release(lVar11);
  func_0x00010be56160(param_1);
  _objc_release(param_3);
  _objc_release(puVar9);
  _objc_release(plVar15);
  _objc_release(lVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1063e15c8; end: 1063e25bf; -[SCLongformSpotlightAdDataSource shouldTriggerDynamicAdTriggerPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1063e15c8(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  
  _objc_retain(param_4);
  lVar24 = (long)_DAT_112746fe4;
  uVar22 = *(ulong *)(param_2 + lVar24);
  uVar21 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar21);
  if ((uVar22 & 1) == 0) {
    uVar22 = param_2;
    func_0x00010c067280();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar22;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar21);
    _objc_release(uVar22);
    if (uVar1 != 0) {
      uVar21 = 1;
      goto LAB_1063e2288;
    }
    uVar22 = param_2;
    func_0x00010be41f20();
    uVar1 = param_2;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    if ((int)uVar22 == 0) {
      uVar22 = param_2;
      func_0x00010bef4120(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar22;
      func_0x00010c0f7700();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bef4c60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c258fe0(param_2);
      func_0x00010c09c2e0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar22);
    }
    else {
      func_0x00010c258fe0();
      func_0x00010bf5f900();
    }
    _objc_release(uVar1);
    uVar22 = param_2;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar22;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar22);
    uVar21 = param_4;
    if (uVar1 == 0) {
      uVar25 = *(undefined8 *)(param_2 + (long)_DAT_112746ffc);
      FUN_10641701c(uVar25,uVar5,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c163ca0(param_2);
      _objc_release(uVar25);
      func_0x000106416d48(uVar5);
      func_0x00010be56160(param_2);
      uVar25 = *(undefined8 *)(param_2 + lVar24);
      func_0x00010bfe5ec0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar25);
    }
    else {
      uVar22 = param_2;
      func_0x00010bef4240();
      uVar1 = param_2;
      func_0x00010bef4120();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0f7700();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bef4c60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = (long)_DAT_112747000;
      uVar25 = *(undefined8 *)(param_2 + lVar17);
      uVar6 = param_2;
      func_0x00010bf6d940(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bef2fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_2;
      func_0x00010bf6d940(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bef2560();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001063fcf48(uVar22,uVar4,uVar25,0,uVar8,0,uVar11);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar22 & 1) == 0) {
        uVar19 = *(undefined8 *)(param_2 + (long)_DAT_112746ffc);
        uVar25 = *(undefined8 *)(param_2 + lVar17);
        FUN_10640a74c(uVar25);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = *(undefined8 *)(param_2 + (long)_DAT_112747004);
        FUN_10640b8b8(uVar20);
        uVar14 = *(undefined8 *)(param_2 + lVar17);
        FUN_1063fc8dc(uVar14);
        uVar15 = 1;
        FUN_106416d68(1,uVar25,uVar20,0xffffffffffffffff,uVar14,0);
        _objc_retainAutoreleasedReturnValue();
        FUN_10641701c(uVar19,uVar5,uVar15,0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c163ca0(param_2);
        _objc_release(uVar19);
        _objc_release(uVar15);
        _objc_release(uVar25);
        uVar22 = param_2;
        func_0x00010be41f40();
        if ((int)uVar22 != 0) {
          uVar22 = param_2;
          func_0x00010bf6d940(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar22;
          func_0x00010bef3a00();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef4240(param_2);
          func_0x00010c0e4a60(uVar2);
          _objc_release(uVar2);
          _objc_release(uVar1);
          _objc_release(uVar22);
        }
LAB_1063e2234:
        func_0x000106416d48(uVar5);
LAB_1063e2248:
        func_0x00010be56160(param_2);
        uVar25 = *(undefined8 *)(param_2 + lVar24);
      }
      else {
        uVar22 = param_2;
        func_0x00010be41f40();
        if ((int)uVar22 != 0) {
          uVar22 = param_2;
          func_0x00010bf6d940(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar22;
          func_0x00010bef3a00();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef4240(param_2);
          func_0x00010c0e4a60(uVar2);
          _objc_release(uVar2);
          _objc_release(uVar1);
          _objc_release(uVar22);
        }
        puVar12 = PTR_PTR_1126b8c98;
        func_0x00010bf90d40();
        if (((ulong)puVar12 & 1) == 0) {
          uVar22 = param_2;
          func_0x00010bef4120();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar22;
          func_0x00010c0f7700();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010bef4c60();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bef2f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar3);
          _objc_release(uVar2);
          _objc_release(uVar1);
          _objc_release(uVar22);
          if (uVar4 != 0) goto LAB_1063e19d4;
          uVar25 = *(undefined8 *)(param_2 + (long)_DAT_112746ffc);
          FUN_10641701c(uVar25,uVar5,0,2,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c163ca0(param_2);
          _objc_release(uVar25);
          goto LAB_1063e2248;
        }
LAB_1063e19d4:
        lVar23 = (long)_DAT_112746ff0;
        iVar16 = (int)*(undefined8 *)(param_2 + lVar23);
        uVar25 = param_4;
        func_0x00010bfe5ec0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010becfce0(param_2);
        func_0x00010c27c480(param_4);
        uVar22 = param_2;
        func_0x00010bef4120(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar22;
        func_0x00010c0f7700();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bef4c60();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_2;
        func_0x00010bfceb40(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar18 = (long)_DAT_112746ffc;
        uVar6 = uVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010c27c0e0();
        _objc_release(uVar6);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(uVar22);
        _objc_release(uVar25);
        if (iVar16 == 0) {
          uVar25 = *(undefined8 *)(param_2 + lVar23);
          func_0x00010c26f240(uVar25);
          if (0.0 < param_1) {
            uVar20 = *(undefined8 *)(param_2 + lVar18);
            FUN_106416eb4();
            _objc_retainAutoreleasedReturnValue();
            FUN_10641701c(uVar20,uVar5,uVar25,0,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c163ca0(param_2);
            _objc_release(uVar20);
            _objc_release(uVar25);
          }
          goto LAB_1063e2234;
        }
        uVar22 = param_2;
        func_0x00010be41f20();
        if ((int)uVar22 != 0) {
          uVar22 = param_2;
          func_0x00010bf6d940(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar22;
          func_0x00010bef3a00();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef4240(param_2);
          func_0x00010c0e49a0(uVar2);
          _objc_release(uVar2);
          _objc_release(uVar1);
          _objc_release(uVar22);
        }
        uVar22 = param_2;
        func_0x00010be41f40();
        if ((int)uVar22 != 0) {
          uVar22 = param_2;
          func_0x00010bf6d940(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar22;
          func_0x00010bef3a00();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef4240(param_2);
          func_0x000106416d48(uVar5);
          func_0x00010c0e7360(uVar2);
          _objc_release(uVar2);
          _objc_release(uVar1);
          _objc_release(uVar22);
        }
        uVar22 = param_2;
        func_0x00010c0f72e0();
        if ((uVar22 & 1) != 0) {
          uVar22 = param_2;
          func_0x00010c0f7040();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR___NSConcreteStackBlock_11034bd00;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0xc2000000;
          pcStack_90 = FUN_1063e25c0;
          puStack_88 = &UNK_1109208a8;
          uStack_80 = param_2;
          func_0x00010bf97e80();
          puStack_d8 = puVar12;
          uStack_d0 = 0xc2000000;
          pcStack_c8 = FUN_1063e2604;
          puStack_c0 = &UNK_1109208d8;
          uStack_b8 = param_2;
          uStack_b0 = uVar22;
          _objc_retain(param_4);
          uVar1 = uVar22;
          uStack_a8 = param_4;
          func_0x000100504554(uVar22,&puStack_d8);
          uVar5 = uVar1;
          func_0x00010bf529e0();
          if (uVar5 != 0) {
            uVar5 = param_2;
            func_0x00010bef4120();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar5;
            func_0x00010c0f7700();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar5);
            if (uVar2 != 0) {
              puVar13 = PTR_PTR_1126bdb78;
              _objc_alloc(PTR_PTR_1126bdb78);
              uVar5 = param_2;
              func_0x00010bef4120(param_2);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar5;
              func_0x00010c0f7700();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar2;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c01b480(puVar13);
              uVar4 = param_2;
              func_0x00010bef4120(param_2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1da300();
              _objc_release(uVar4);
              _objc_release(puVar13);
              _objc_release(uVar3);
              _objc_release(uVar2);
              _objc_release(uVar5);
            }
          }
          uVar21 = *(undefined8 *)(param_2 + lVar17);
          uVar5 = param_2;
          func_0x00010bf6d940(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar5;
          func_0x00010bef2560();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          FUN_1063fd368(uVar21,0,uVar3);
          _objc_release(uVar3);
          _objc_release(uVar2);
          _objc_release(uVar5);
          puStack_108 = puVar12;
          uStack_100 = 0xc2000000;
          pcStack_f8 = FUN_1063e268c;
          puStack_f0 = &UNK_110920908;
          uStack_e8 = param_2;
          uStack_e0 = uVar21;
          func_0x00010bf97e80(uVar1);
          _objc_initWeak(auStack_110,param_2);
          uVar5 = param_2;
          func_0x00010bef4120();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar5;
          func_0x00010c0f7700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          uVar5 = param_2;
          func_0x00010bf6d940(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar5;
          func_0x00010bf9be80();
          _objc_retainAutoreleasedReturnValue();
          puStack_138 = puVar12;
          uStack_130 = 0xc2000000;
          pcStack_128 = FUN_1063e27b4;
          puStack_120 = &UNK_110920718;
          _objc_copyWeak(auStack_118,auStack_110);
          puStack_178 = puVar12;
          uStack_170 = 0xc2000000;
          pcStack_168 = FUN_1063e2834;
          puStack_160 = &UNK_110920938;
          _objc_copyWeak(auStack_140,auStack_110);
          uStack_158 = uVar1;
          _objc_retain(param_4);
          uStack_150 = param_4;
          uStack_148 = uVar2;
          func_0x00010c125bc0(uVar3);
          _objc_release(uVar3);
          _objc_release(uVar5);
          uVar5 = param_2;
          func_0x00010bf6d940(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar5;
          func_0x00010bef3de0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_2;
          func_0x00010bef3e00(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c125be0(uVar4);
          _objc_release(uVar6);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar5);
          func_0x00010c1391e0(param_2);
          func_0x00010c163ca0(param_2);
          puStack_1a0 = puVar12;
          uStack_198 = 0xc2000000;
          pcStack_190 = FUN_1063e2960;
          puStack_188 = &UNK_110920968;
          uVar5 = uVar1;
          uStack_180 = param_2;
          func_0x00010bd86870(uVar1,PTR____kCFBooleanTrue_11034ab68,&puStack_1a0);
          uVar3 = uVar5;
          func_0x00010bf1f3c0();
          if ((int)uVar3 == 0) {
            uVar3 = param_2;
            func_0x00010be41f40();
            if ((int)uVar3 != 0) {
              uVar3 = param_2;
              func_0x00010bf6d940(param_2);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x00010bef3a00();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar4;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bef4240(param_2);
              func_0x00010c0e4960(uVar6);
              _objc_release(uVar6);
              _objc_release(uVar4);
              _objc_release(uVar3);
              uVar3 = param_2;
              func_0x00010bf6d940(param_2);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x00010bef3a00();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar4;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bef4240(param_2);
              func_0x00010c0e4940(uVar6);
              _objc_release(uVar6);
              _objc_release(uVar4);
              _objc_release(uVar3);
            }
          }
          else {
            func_0x00010c286aa0(param_4);
            func_0x00010bf77480(*(undefined8 *)(param_2 + lVar23));
            uVar25 = *(undefined8 *)(param_2 + (long)_DAT_112746fe0);
            uVar21 = param_4;
            func_0x00010bfe5ec0(param_4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(uVar25);
            _objc_release(uVar21);
            func_0x00010be5b960(param_2);
          }
          uVar3 = param_2;
          func_0x00010bf6d940(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bef2fc0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar1;
          func_0x00010bfb1920(uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = param_2;
          func_0x00010bef4120(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010bf21040();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef4120(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = param_2;
          func_0x00010c0f7700();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a04c0(uVar6);
          _objc_release(uVar10);
          _objc_release(param_2);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar5);
          _objc_release(uStack_150);
          _objc_destroyWeak(auStack_140);
          _objc_destroyWeak(auStack_118);
          _objc_release(uVar2);
          _objc_destroyWeak(auStack_110);
          _objc_release(uVar1);
          _objc_release(uStack_a8);
          _objc_release(uVar22);
          uVar21 = 1;
          goto LAB_1063e2288;
        }
        uVar25 = *(undefined8 *)(param_2 + lVar18);
        FUN_10641701c(uVar25,uVar5,0,0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c163ca0(param_2);
        _objc_release(uVar25);
        func_0x000106416d48(uVar5);
        func_0x00010be56160(param_2);
        uVar25 = *(undefined8 *)(param_2 + lVar24);
      }
      func_0x00010bfe5ec0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar25);
    }
    _objc_release(uVar21);
  }
  uVar21 = 0;
LAB_1063e2288:
  _objc_release(param_4);
  return uVar21;
}



/* Entry: 1063e25c0; end: 1063e2603;  */

void FUN_1063e25c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0560(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1063e2604; end: 1063e268b;  */

void FUN_1063e2604(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0(param_2);
  func_0x00010be89460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1063e268c; end: 1063e27b3;  */

void FUN_1063e268c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bef4120(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef4b40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef4840(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d0640(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1063e27b4; end: 1063e2833;  */

void FUN_1063e27b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3c3e0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063e2834; end: 1063e295f;  */

void FUN_1063e2834(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bef4ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bef52c0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c071ae0();
  if ((uVar6 & 1) == 0) {
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c071ae0();
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    if ((int)uVar5 != 0) {
      uVar6 = *(ulong *)(param_1 + 0x28);
      func_0x00010bfe5ec0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1063e2930;
    }
  }
  uVar6 = param_2;
  FUN_1063e08cc(param_2,lVar2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
LAB_1063e2930:
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1063e2960; end: 1063e2a07;  */

void FUN_1063e2960(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258fe0(*(undefined8 *)(param_1 + 0x20));
  lVar2 = lVar5;
  func_0x00010c09c2e0();
  _objc_release(param_2);
  _objc_release(lVar5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_3;
  func_0x00010bf1f3c0(param_3);
  _objc_release(param_3);
  uVar4 = 0;
  if (lVar2 == 3) {
    uVar4 = (undefined4)uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,uVar4);
  return;
}



/* Entry: 1063e2a08; end: 1063e2edf; -[SCLongformSpotlightAdDataSource isInsertedAdItemId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1063e2a08(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
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
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar13 = (long)_DAT_112746fcc;
  uVar2 = *(ulong *)(param_1 + lVar13);
  lVar3 = param_3;
  func_0x00010bf4b900();
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c101420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar4;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9a78;
    func_0x00010c1015e0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar3;
    func_0x00010c0720c0();
    _objc_release(puVar5);
    _objc_release(lVar3);
    if ((int)lVar19 != 0) {
      lVar3 = lVar4;
      func_0x00010bfce400();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = param_1;
      func_0x00010c1013e0();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar19;
      func_0x00010bf63e80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar19);
      lVar19 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar19;
      func_0x00010bef2560();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar14;
      func_0x00010c29d360();
      lVar9 = lVar21;
      FUN_10644127c(lVar21,lVar7,lVar8);
      _objc_release(lVar14);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar19);
      if ((int)lVar9 != 0) {
        lVar19 = lVar21;
        FUN_1063e04a4();
        _objc_retainAutoreleasedReturnValue();
        if (lVar19 != 0) {
          lVar7 = lVar3;
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          lVar19 = lVar7;
          func_0x00010bf52a60();
          lVar6 = lRam0000000000000000;
          while (lVar19 != 0) {
            lVar14 = 0;
            do {
              if (lRam0000000000000000 != lVar6) {
                _objc_enumerationMutation(lVar7);
              }
              lVar10 = *(long *)(lVar14 * 8);
              func_0x00010c25e580();
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar10;
              func_0x00010bf52a60();
              lVar9 = lRam0000000000000000;
              while (lVar8 != 0) {
                lVar15 = 0;
                do {
                  if (lRam0000000000000000 != lVar9) {
                    _objc_enumerationMutation(lVar10);
                  }
                  lVar20 = *(long *)(lVar15 * 8);
                  _objc_retain(lVar20);
                  lVar11 = lVar20;
                  func_0x00010bf52a60();
                  lVar1 = lRam0000000000000000;
                  while (lVar11 != 0) {
                    lVar22 = 0;
                    do {
                      if (lRam0000000000000000 != lVar1) {
                        _objc_enumerationMutation(lVar20);
                      }
                      uVar18 = *(undefined8 *)(lVar22 * 8);
                      uVar17 = uVar18;
                      func_0x00010c27dd80();
                      _objc_retainAutoreleasedReturnValue();
                      puVar5 = PTR_PTR_1126c9a78;
                      func_0x00010c1015e0(PTR_PTR_1126c9a78);
                      _objc_retainAutoreleasedReturnValue();
                      uVar16 = uVar17;
                      func_0x00010c0720c0();
                      _objc_release(puVar5);
                      _objc_release(uVar17);
                      if ((int)uVar16 != 0) {
                        uVar16 = *(undefined8 *)(param_1 + lVar13);
                        uVar17 = uVar18;
                        func_0x00010be36bc0(uVar18);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010befa120(uVar16);
                        _objc_release(uVar17);
                        uVar17 = *(undefined8 *)(param_1 + _DAT_112746fd0);
                        func_0x00010be36bc0(uVar18);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c1d0640(uVar17);
                        _objc_release(uVar18);
                      }
                      lVar22 = lVar22 + 1;
                    } while (lVar11 != lVar22);
                    lVar11 = lVar20;
                    func_0x00010bf52a60();
                  }
                  _objc_release(lVar20);
                  lVar15 = lVar15 + 1;
                } while (lVar15 != lVar8);
                lVar8 = lVar10;
                func_0x00010bf52a60();
              }
              _objc_release(lVar10);
              lVar14 = lVar14 + 1;
            } while (lVar14 != lVar19);
            lVar19 = lVar7;
            func_0x00010bf52a60();
          }
          _objc_release(lVar7);
        }
        _objc_release();
      }
      _objc_release(lVar21);
      _objc_release(lVar3);
    }
    lVar13 = *(long *)(param_1 + lVar13);
    lVar3 = param_3;
    func_0x00010bf4b900();
    _objc_release(lVar4);
  }
  else {
    lVar13 = 1;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return lVar13;
  }
  ___stack_chk_fail();
  _objc_retain(lVar3);
  lVar12 = param_3;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar3;
  func_0x00010bfce400(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar12;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  _objc_release(lVar12);
  lVar12 = lVar4;
  FUN_1063e04a4();
  _objc_retainAutoreleasedReturnValue();
  if (lVar12 != 0) {
    lVar21 = (long)_DAT_112746fd8;
    lVar19 = *(long *)(param_3 + lVar21);
    lVar13 = lVar12;
    func_0x00010c15f2e0(lVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar13);
    if (lVar19 != 0) {
      lVar21 = *(long *)(param_3 + lVar21);
      lVar13 = lVar12;
      func_0x00010c15f2e0(lVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
      lVar13 = lVar3;
      func_0x00010be36bc0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar21;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar13);
      if (lVar19 == 0) {
        lVar13 = -1;
      }
      else {
        lVar19 = lVar3;
        func_0x00010be36bc0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar21;
        func_0x00010c0e00e0(lVar21);
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar6;
        func_0x00010c067fc0();
        _objc_release(lVar6);
        _objc_release(lVar19);
        lVar13 = lVar13 + 1;
      }
      _objc_release(lVar21);
      goto LAB_1063e308c;
    }
  }
  lVar13 = -1;
LAB_1063e308c:
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(lVar3);
  return lVar13;
}



/* Entry: 1063e2ee0; end: 1063e30bf; -[SCLongformSpotlightAdDataSource snapIndexPosForItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1063e2ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf63e80(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  FUN_1063e04a4();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar6 = (long)_DAT_112746fd8;
    lVar4 = *(long *)(param_1 + lVar6);
    lVar5 = lVar1;
    func_0x00010c15f2e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar4,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    if (lVar4 != 0) {
      lVar4 = *(long *)(param_1 + lVar6);
      lVar5 = lVar1;
      func_0x00010c15f2e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(lVar4,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      uVar2 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0e00e0(lVar4,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
      if (lVar5 == 0) {
        lVar5 = -1;
      }
      else {
        uVar2 = param_3;
        func_0x00010be36bc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar4;
        func_0x00010c0e00e0(lVar4,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar6;
        func_0x00010c067fc0();
        _objc_release(lVar6);
        _objc_release(uVar2);
        lVar5 = lVar5 + 1;
      }
      _objc_release(lVar4);
      goto LAB_1063e308c;
    }
  }
  lVar5 = -1;
LAB_1063e308c:
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 1063e30c0; end: 1063e31ef; -[SCLongformSpotlightAdDataSource hideAdWithItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e30c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112746fd4);
    lVar1 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112746fe4);
    uVar2 = uVar4;
    func_0x00010bfe5ec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar5,param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010c1013e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0f3aa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ddd40(param_1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063e31f0; end: 1063e31f7; -[SCLongformSpotlightAdDataSource isAdContentLoopingForDataModel:] */

undefined8 FUN_1063e31f0(void)

{
  return 0;
}



/* Entry: 1063e31f8; end: 1063e31ff; -[SCLongformSpotlightAdDataSource adProductType] */

undefined8 FUN_1063e31f8(void)

{
  return 0x15;
}



/* Entry: 1063e3200; end: 1063e3207; -[SCLongformSpotlightAdDataSource isLongformShowAd] */

undefined8 FUN_1063e3200(void)

{
  return 1;
}



/* Entry: 1063e3208; end: 1063e32b3; -[SCLongformSpotlightAdDataSource upcomingStoriesContext] */

void FUN_1063e3208(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010640d734(uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1063e32b4; end: 1063e32ef; -[SCLongformSpotlightAdDataSource brandSafetyInventoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1063e32b4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112747000);
  FUN_1063fc8dc();
  if (uVar1 < 3) {
    uVar2 = *(undefined8 *)(&UNK_10dddbe08 + uVar1 * 8);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1063e32f0; end: 1063e33ab; -[SCLongformSpotlightAdDataSource mediaLoadContexts] */

undefined * FUN_1063e32f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010bf81400();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b19f8;
  puStack_48 = puVar1;
  func_0x00010c23f2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 1063e33ac; end: 1063e33b3; -[SCLongformSpotlightAdDataSource storyAdMediaLoadStatusSnapCount] */

undefined8 FUN_1063e33ac(void)

{
  return 1;
}



/* Entry: 1063e33b4; end: 1063e341f; -[SCLongformSpotlightAdDataSource resetInsertionData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e33b4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f11e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_resetInsertionData_11262bd80);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746fcc));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746fd0));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746fd4));
  return;
}



/* Entry: 1063e3420; end: 1063e3427; -[SCLongformSpotlightAdDataSource shouldInsertPlaylistItem] */

undefined8 FUN_1063e3420(void)

{
  return 1;
}



/* Entry: 1063e3428; end: 1063e342f; -[SCLongformSpotlightAdDataSource shouldInsertPlaylistItemGroup] */

undefined8 FUN_1063e3428(void)

{
  return 0;
}



/* Entry: 1063e3430; end: 1063e3437; -[SCLongformSpotlightAdDataSource isDynamicInsertionEligibleForItem:] */

undefined8 FUN_1063e3430(void)

{
  return 1;
}



/* Entry: 1063e3438; end: 1063e3507; -[SCLongformSpotlightAdDataSource unviewedAds] */

void FUN_1063e3438(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bef4c60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010c1391e0(param_1);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063e3508; end: 1063e369f; -[SCLongformSpotlightAdDataSource adViewContextForItem:] */

void FUN_1063e3508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = PTR_s_adViewContextForItem__11259b238;
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f11e0;
  uStack_50 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_50,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined *)puVar1;
  func_0x00010c0d3c80();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = param_1;
  func_0x00010bef4b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010bef4840(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bfe5ec0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c0e00e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010bf66720(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_1);
  puVar2 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(uVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063e36a0; end: 1063e3753; -[SCLongformSpotlightAdDataSource adViewContextForGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e36a0(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  puStack_38 = PTR_PTR_1126f11e0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_adViewContextForGroupId__11259b230);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined1 *)plVar1;
  func_0x00010c0d3c80();
  _objc_release(plVar1);
  lVar3 = *(long *)(param_1 + _DAT_112747004);
  FUN_106440844();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    func_0x00010bef7f60(puVar2);
  }
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1063e3754; end: 1063e395f; -[SCLongformSpotlightAdDataSource targetingParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e3754(long param_1)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  
  lVar14 = (long)_DAT_112747004;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  lVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  FUN_10643fd0c(uVar13,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29d360();
  lVar3 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084c0d90(lVar2,lVar5);
  lVar6 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  FUN_10643f3dc(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  FUN_10643f20c(uVar12);
  _objc_retainAutoreleasedReturnValue();
  FUN_1063fa370(lVar2,lVar8,lVar10,uVar11,uVar13,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1063e3960; end: 1063e3abf; -[SCLongformSpotlightAdDataSource _adMidrollTriggerPointForAdItemId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e3960(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_112746fd4;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = param_1;
    func_0x00010c1013e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c101420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010c0f3aa0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126b5bc0;
    _objc_opt_class(PTR_PTR_1126b5bc0);
    uVar4 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar6);
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar5);
      _objc_release(uVar2);
      _objc_release(uVar3);
      uVar7 = 0;
      goto LAB_1063e3a7c;
    }
    func_0x00010be77d60(param_1);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c0e00e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
LAB_1063e3a7c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1063e3ac0; end: 1063e3bbb; -[SCLongformSpotlightAdDataSource _startViewingLongformSpotlightSnapWithDynamicAdSlots:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e3ac0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + _DAT_112746ff0);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c15f2e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c26f2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160();
  uVar3 = param_4;
  func_0x00010c26fe00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bdf71c0(param_2);
  func_0x00010bf7bfe0(param_1,uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be77d60(param_2);
  _objc_release(param_4);
  func_0x00010c1391e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010be5b970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__makeDynamicAdRequestIfNecessary_1125747f8,1)
  ;
  return;
}



/* Entry: 1063e3bbc; end: 1063e3d57; -[SCLongformSpotlightAdDataSource _adSlotIndexForSpotlightSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e3bbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(ulong *)(param_1 + _DAT_112746fdc);
  uVar3 = param_3;
  func_0x00010c15f2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar9,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar4 = uVar9;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    uVar4 = 0;
    do {
      uVar1 = uVar4 + 1;
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar3 = param_3;
      func_0x00010c15f2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4da78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2,param_2,puVar5,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(uVar3);
      _objc_release(puVar5);
      uVar8 = uVar9;
      func_0x00010bf529e0();
      uVar4 = uVar1;
    } while (uVar1 < uVar8);
  }
  puVar7 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(uVar9);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1063e3d58; end: 1063e43bf; -[SCLongformSpotlightAdDataSource _pageDataForDynamicAd:completion:] */

void FUN_1063e3d58(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bef4820(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bef3da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  FUN_1063e08cc(param_3,lVar3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c067280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar6 = param_1;
  func_0x00010bdc55e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    func_0x00010bef4240(param_1);
    lVar5 = lVar4;
    func_0x00010640abd4(lVar4,param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c0d3c80();
    _objc_release(lVar5);
    func_0x00010c1d0640(lVar7);
    if (lVar6 != 0) {
      func_0x00010c1d0640(lVar7);
    }
    if (param_4 != 0) {
      puVar8 = PTR_PTR_1126b23e0;
      _objc_alloc(PTR_PTR_1126b23e0);
      func_0x00010c033240();
      (**(code **)(param_4 + 0x10))(param_4,puVar8);
      _objc_release(puVar8);
    }
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  else {
    if (lVar6 == 0) {
      lVar5 = param_1;
      func_0x00010bdc55e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar6);
      lVar5 = lVar6;
    }
    _objc_release(lVar6);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010c067280(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x1063e406c;
    puStack_70 = &UNK_110920878;
    _objc_retain(param_4);
    puVar8 = PTR_s_pageDataForDataModel_completion__112619db8;
    puStack_90 = PTR_PTR_1126f11e0;
    lStack_98 = param_1;
    lStack_68 = lVar5;
    lStack_60 = lVar2;
    lStack_58 = param_4;
    _objc_retain(lVar5);
    _objc_msgSendSuper2(&lStack_98,puVar8,lVar6,&puStack_88);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lStack_68);
    _objc_release(lStack_58);
    lVar4 = lVar5;
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 1063e43c0; end: 1063e4783; -[SCLongformSpotlightAdDataSource _makeDynamicAdRequestIfNecessary:] */

void FUN_1063e43c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  
  uVar1 = param_1;
  func_0x00010be41f40();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef3a00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_1);
    uVar4 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0eb3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29d360();
    func_0x00010c0e2460(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  puVar7 = PTR_PTR_1126b8cd8;
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bef4240(param_1);
  func_0x00010c25d840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf17b60();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf17be0();
  _objc_release(puVar7);
  if (param_3 - 1U < 4) {
    ppuStack_88 = (undefined **)(&PTR_PTR_110920d28)[param_3 - 1U];
  }
  else {
    ppuStack_88 = &PTR____CFConstantStringClassReference_110db54d8;
  }
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1063e6eb0;
  puStack_98 = &UNK_1108951c0;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e4dab8;
  ppuVar11 = &puStack_b0;
  puStack_80 = puVar10;
  func_0x00010bf51e00();
  _objc_release(ppuStack_88);
  _objc_release(ppuStack_90);
  _objc_initWeak(&puStack_b0,param_1);
  uVar1 = param_1;
  func_0x00010bef4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c26a3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010befe100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_1);
  uVar4 = param_1;
  func_0x00010bef4d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bef3aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c283180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21060();
  puStack_b8 = puVar9;
  _objc_copyWeak(auStack_c0,&puStack_b0);
  func_0x00010c134800(uVar1);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(&puStack_b0);
  _objc_release(ppuVar11);
  _objc_release(puVar8);
  return;
}



/* Entry: 1063e4784; end: 1063e4893;  */

void FUN_1063e4784(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b8cd8;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_2 != 0) {
    func_0x00010bef4240(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c25d840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b60();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063e4894; end: 1063e4c47; -[SCLongformSpotlightAdDataSource _didDownloadAdWithSuccess:metadataToMediaTransitionCookie:] */

void FUN_1063e4894(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010be41f40();
    if ((int)lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bef3a00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240(param_1);
      lVar4 = param_1;
      func_0x00010bef4120(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0f7700();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bef4c60();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29d360();
      func_0x00010c0e2440(lVar3);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    func_0x00010bdce9a0(param_1);
    lVar1 = param_1;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010be41f40();
      if ((int)lVar1 != 0) {
        lVar1 = param_1;
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bef3a00();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef4240(param_1);
        func_0x00010c0e2300(lVar3);
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar1);
      }
      _objc_initWeak(auStack_68,param_1);
      puVar9 = PTR_PTR_1126b8cd8;
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bef4240(param_1);
      func_0x00010c25d840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bf17b60();
      _objc_release(puVar9);
      lVar1 = param_1;
      func_0x00010bef4120(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0c5660(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bef3c60();
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc0000000;
      pcStack_80 = FUN_1063e4cfc;
      puStack_78 = &UNK_110848088;
      puStack_98 = puVar11;
      uStack_70 = param_4;
      _objc_copyWeak(auStack_a0,auStack_68);
      func_0x00010bfa85e0(lVar1);
      _objc_release(lVar3);
      _objc_release(param_1);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_a0);
      _objc_release(puVar10);
      _objc_destroyWeak(auStack_68);
    }
  }
  return;
}



/* Entry: 1063e4c48; end: 1063e4cfb;  */

ulong FUN_1063e4c48(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bef60a0();
  if (uVar1 == 5) {
    uVar3 = param_2;
    func_0x00010c0dac40();
    uVar2 = param_2;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    if (uVar3 + 1 < uVar1) {
      uVar1 = uVar3 + 1;
    }
  }
  else {
    uVar3 = param_2;
    func_0x00010bef52c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
  }
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1063e4cfc; end: 1063e4d3b;  */

void FUN_1063e4cfc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063e4d3c; end: 1063e4e3f;  */

void FUN_1063e4d3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010be41f40();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bef3a00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar6 = param_1;
    func_0x00010bef4240();
    func_0x00010c0e22e0(lVar5,param_2,lVar6);
    _objc_release(param_1);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1063e4e40; end: 1063e5033; -[SCLongformSpotlightAdDataSource _applyServerAdInsertionConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e4e40(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 == 0) {
    func_0x00010bef4240(param_1);
    lVar1 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bef2fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0620();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010bef4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  FUN_1063e6f58(lVar4,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c286980(*(undefined8 *)(param_1 + _DAT_112746ff0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 1063e5034; end: 1063e52e3; -[SCLongformSpotlightAdDataSource _prepareAdForDynamicInsertionLongformSpotlightSnapIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e5034(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_4);
  lVar10 = (long)_DAT_112746fdc;
  lVar7 = *(long *)(param_2 + lVar10);
  uVar8 = param_4;
  func_0x00010c15f2e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar7,param_3,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar8);
  if (lVar7 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar8 = param_4;
    func_0x00010c26fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010bf529e0();
    _objc_release(uVar8);
    if (uVar2 != 0) {
      uVar8 = 0;
      do {
        uVar2 = param_4;
        func_0x00010c26fe00(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        puVar4 = PTR_PTR_1126ca548;
        _objc_alloc(PTR_PTR_1126ca548);
        func_0x00010bf885a0(uVar3);
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar2 = param_4;
        func_0x00010c15f2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar6,param_3,&PTR____CFConstantStringClassReference_110e4da78);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04bb60(param_1,0,puVar4,param_3,puVar6,0,0);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(uVar2);
        func_0x00010befa120(puVar1,param_3,puVar4);
        _objc_release(puVar4);
        _objc_release(uVar3);
        uVar8 = uVar8 + 1;
        uVar2 = param_4;
        func_0x00010c26fe00();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf529e0();
        _objc_release(uVar2);
      } while (uVar8 < uVar3);
    }
    uVar9 = *(undefined8 *)(param_2 + lVar10);
    uVar8 = param_4;
    func_0x00010c15f2e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar9,param_3,puVar1,uVar8);
    _objc_release(uVar8);
    lVar7 = param_2;
    func_0x00010bdc5820(param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_2 + _DAT_112746fd8);
    uVar8 = param_4;
    func_0x00010c15f2e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar9,param_3,lVar7,uVar8);
    _objc_release(uVar8);
    _objc_release(lVar7);
    func_0x00010bdf5120(param_2,param_3,param_4);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063e52e4; end: 1063e5597; -[SCLongformSpotlightAdDataSource _createTriggerPointsForDynamicAdsSlotWithSpotlightSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e52e4(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **unaff_x24;
  undefined *unaff_x25;
  undefined **unaff_x26;
  undefined *unaff_x27;
  long lVar15;
  undefined *unaff_x28;
  undefined8 *puVar16;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  long lStack_138;
  ulong *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 auStack_100 [16];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar13 = *(undefined ***)(param_2 + _DAT_112746fdc);
  ppuVar14 = param_4;
  ppuStack_148 = param_4;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(ppuVar13,param_3,ppuVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar14);
  ppuVar2 = ppuVar13;
  func_0x00010bf529e0();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar14 = (undefined **)0x0;
    param_4 = &PTR_PTR_1126ca000;
    do {
      unaff_x24 = ppuVar13;
      func_0x00010c0dfd40(ppuVar13,param_3,ppuVar14);
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = PTR_PTR_1126ca538;
      _objc_alloc();
      func_0x00010c250f20(unaff_x24);
      unaff_x26 = unaff_x24;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = param_2;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = unaff_x27;
      func_0x00010bef2520();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c055760(param_1,0x3ff0000000000000,unaff_x25,param_3,unaff_x26,ppuVar14,1,
                          unaff_x28);
      _objc_release(unaff_x28);
      _objc_release(unaff_x27);
      _objc_release(unaff_x26);
      func_0x00010befa120(puVar1,param_3,unaff_x25);
      _objc_release(unaff_x25);
      _objc_release(unaff_x24);
      ppuVar14 = (undefined **)((long)ppuVar14 + 1);
      ppuVar2 = ppuVar13;
      func_0x00010bf529e0();
    } while (ppuVar14 < ppuVar2);
  }
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  puStack_130 = (ulong *)0x0;
  _objc_retain(puVar1);
  puVar10 = &uStack_140;
  puVar4 = auStack_100;
  uVar11 = 0x10;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    param_4 = (undefined **)*puStack_130;
    unaff_x27 = &DAT_112746000;
    do {
      unaff_x28 = (undefined *)0x0;
      do {
        if ((undefined **)*puStack_130 != param_4) {
          _objc_enumerationMutation(puVar1);
        }
        unaff_x24 = *(undefined ***)(lStack_138 + (long)unaff_x28 * 8);
        func_0x00010c28b580(unaff_x24,param_3,puVar1);
        unaff_x25 = *(undefined **)(param_2 + _DAT_112746fd4);
        unaff_x26 = unaff_x24;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(unaff_x25,param_3,unaff_x24,unaff_x26);
        _objc_release(unaff_x26);
        func_0x00010c18b5e0(unaff_x24,param_3,param_2);
        unaff_x28 = unaff_x28 + 1;
      } while (puVar3 != unaff_x28);
      puVar10 = &uStack_140;
      puVar4 = auStack_100;
      uVar11 = 0x10;
      puVar3 = puVar1;
      func_0x00010bf52a60();
      ppuVar14 = (undefined **)0x0;
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(ppuVar13);
  _objc_release(puVar1);
  ppuVar2 = ppuStack_148;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    pcStack_158 = FUN_1063e5598;
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar10;
    puVar6 = puVar4;
    uVar12 = uVar11;
    puStack_1b0 = unaff_x28;
    puStack_1a8 = unaff_x27;
    ppuStack_1a0 = unaff_x26;
    puStack_198 = unaff_x25;
    ppuStack_190 = unaff_x24;
    ppuStack_188 = ppuVar14;
    ppuStack_180 = ppuVar13;
    puStack_178 = puVar1;
    puStack_170 = param_2;
    ppuStack_168 = param_4;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(puVar10);
    if ((uVar11 & 1) == 0) {
      _objc_retain(puVar10);
      puVar7 = puVar10;
    }
    else {
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar10;
      func_0x00010c2af9a0(puVar10,param_3,puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      plStack_270 = (long *)0x0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      puVar6 = puVar10;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = 0x10;
      puVar7 = puVar6;
      func_0x00010bf52a60();
      if (puVar7 != (undefined8 *)0x0) {
        lVar15 = *plStack_270;
        do {
          puVar16 = (undefined8 *)0x0;
          do {
            if (*plStack_270 != lVar15) {
              _objc_enumerationMutation(puVar6);
            }
            uVar8 = *(undefined8 *)(lStack_278 + (long)puVar16 * 8);
            func_0x00010c2af9a0(uVar8,param_3,puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1,param_3,uVar8);
            _objc_release(uVar8);
            puVar16 = (undefined8 *)((long)puVar16 + 1);
          } while (puVar7 != puVar16);
          uVar12 = 0x10;
          puVar7 = puVar6;
          func_0x00010bf52a60(puVar6,param_3,&uStack_280,auStack_240,0x10);
        } while (puVar7 != (undefined8 *)0x0);
      }
      _objc_release(puVar6);
      puVar7 = puVar5;
      func_0x00010c2a7da0(puVar5,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      ppuVar14 = ppuVar2;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar14;
      func_0x00010bef42e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c283480();
      _objc_release(ppuVar9);
      _objc_release(ppuVar13);
      _objc_release(ppuVar14);
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar2;
      func_0x00010c098e80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar14;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      puVar6 = puVar10;
      func_0x00010c283400();
      _objc_release(ppuVar13);
      _objc_release(ppuVar14);
      _objc_release(ppuVar2);
      _objc_release(puVar1);
      _objc_release(puVar4);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      ___stack_chk_fail();
      _objc_retain(uVar12);
      puVar7 = puVar10;
      func_0x00010bed2a80(puVar10,param_3,puVar5,uVar12,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar10;
      func_0x00010bef4820(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      func_0x00010bfe5ec0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar4,param_3,puVar7,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      if ((int)puVar6 != 0) {
        puVar4 = puVar10;
        func_0x00010bfceb40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        if (puVar5 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar10;
          func_0x00010bfceb40(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(puVar4);
        }
        puVar4 = puVar7;
        func_0x00010bfe5ec0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5,param_3,puVar4);
        _objc_release(puVar4);
        puVar4 = puVar7;
        func_0x00010bef52c0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = puVar10;
        func_0x00010c067280(puVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar12;
        func_0x00010bfe5ec0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4,param_3,puVar6,uVar11);
        _objc_release(uVar11);
        _objc_release(puVar4);
        uVar8 = *(undefined8 *)((long)puVar10 + (long)_DAT_112746fcc);
        puVar10 = puVar6;
        func_0x00010c280580(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar8,param_3,puVar10);
        _objc_release(puVar10);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      _objc_release(uVar12);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  return;
}



/* Entry: 1063e5598; end: 1063e5813; -[SCLongformSpotlightAdDataSource _updateAdResponse:withTriggerPoint:isFirstInPod:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e5598(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
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
  puVar1 = param_3;
  puVar3 = param_4;
  uVar9 = param_5;
  _objc_retain(param_3);
  if ((param_5 & 1) == 0) {
    _objc_retain(param_3);
    puVar4 = param_3;
  }
  else {
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010c2af9a0(param_3,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar3 = param_3;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0x10;
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar10 = *plStack_120;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(puVar3);
          }
          uVar5 = *(undefined8 *)(lStack_128 + (long)puVar11 * 8);
          func_0x00010c2af9a0(uVar5,param_2,param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2,param_2,uVar5);
          _objc_release(uVar5);
          puVar11 = puVar11 + 1;
        } while (puVar4 != puVar11);
        uVar9 = 0x10;
        puVar4 = puVar3;
        func_0x00010bf52a60(puVar3,param_2,&uStack_130,auStack_f0,0x10);
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    puVar4 = puVar1;
    func_0x00010c2a7da0(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar5 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bef42e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c283480();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c098e80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_4;
    puVar3 = param_3;
    func_0x00010c283400();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(param_4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(uVar9);
    puVar4 = param_3;
    func_0x00010bed2a80(param_3,param_2,puVar1,uVar9,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010bef4820(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bfe5ec0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar4,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)puVar3 != 0) {
      puVar1 = param_3;
      func_0x00010bfceb40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      if (puVar3 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_3;
        func_0x00010bfceb40(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640();
        _objc_release(puVar1);
      }
      puVar1 = puVar4;
      func_0x00010bfe5ec0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar1);
      _objc_release(puVar1);
      puVar1 = puVar4;
      func_0x00010bef52c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = param_3;
      func_0x00010c067280(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar9;
      func_0x00010bfe5ec0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_2,puVar2,uVar8);
      _objc_release(uVar8);
      _objc_release(puVar1);
      uVar5 = *(undefined8 *)(param_3 + _DAT_112746fcc);
      puVar1 = puVar2;
      func_0x00010c280580(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar5,param_2,puVar1);
      _objc_release(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar3);
    }
    _objc_release(uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1063e5814; end: 1063e5a2f; -[SCLongformSpotlightAdDataSource _registerDynamicAdResponse:isFirstInPod:forAdTriggerPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e5814(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  puVar1 = param_1;
  func_0x00010bed2a80(param_1,param_2,param_3,param_5,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bef4820(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfe5ec0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar1,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if ((int)param_4 != 0) {
    puVar2 = param_1;
    func_0x00010bfceb40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      func_0x00010bfceb40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(puVar2);
    }
    puVar2 = puVar1;
    func_0x00010bfe5ec0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bef52c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010c067280(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010bfe5ec0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,puVar4,uVar5);
    _objc_release(uVar5);
    _objc_release(puVar2);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112746fcc);
    puVar2 = puVar4;
    func_0x00010c280580(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar5,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063e5a30; end: 1063e5c6f; -[SCLongformSpotlightAdDataSource _insertAdPodBeforeExpansion:triggerPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e5a30(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar10 = (long)_DAT_112746fe8;
    uVar8 = *(ulong *)(param_1 + lVar10);
    lVar1 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(lVar1);
    if ((uVar8 & 1) == 0) {
      uVar9 = *(undefined8 *)(param_1 + lVar10);
      lVar1 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar9);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c0f7060();
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_1063e5c70;
      puStack_78 = &UNK_110920a78;
      lStack_70 = param_1;
      _objc_retain(param_4);
      lVar10 = lVar1;
      lStack_68 = param_4;
      func_0x00010bd86420(lVar1,&puStack_90);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
      lVar3 = lVar10;
      func_0x00010bd86870(lVar10,puVar2,&PTR___NSConcreteGlobalBlock_110920b98);
      _objc_release(puVar2);
      lVar4 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c098e80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf77660(lVar6);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = lVar3;
      func_0x00010bf529e0();
      if (lVar4 != 0) {
        func_0x00010c1013e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066f00();
        _objc_release(param_1);
      }
      _objc_release(lVar3);
      _objc_release(lVar10);
      _objc_release(lStack_68);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063e5c70; end: 1063e5d2f;  */

void FUN_1063e5c70(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9be80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0646a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((param_3 == 0) && (uVar3 < 2)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be462c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1063e5d30; end: 1063e5d3b;  */

void FUN_1063e5d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf09f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_arrayByAddingObjectsFromArray__1125a0188,param_2);
  return;
}



/* Entry: 1063e5d3c; end: 1063e5e3b; -[SCLongformSpotlightAdDataSource _insertExpandedStoryAd:currentAdSnap:completion:] */

void FUN_1063e5d3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfecde0();
  _objc_release(lVar1);
  if (lVar2 != 0x7fffffffffffffff) {
    lVar1 = param_3;
    func_0x00010bef52c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfecde0();
    lVar3 = param_3;
    func_0x00010bef52c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    func_0x00010be3c8e0(param_1,param_2,param_3,lVar2 + 1,lVar4 + -1,param_5);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063e5e3c; end: 1063e60d3; -[SCLongformSpotlightAdDataSource _itemsToInsertForAdResponse:triggerPoint:startIndex:endIndex:] */

void FUN_1063e5e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (param_5 <= param_6) {
    uVar1 = param_1;
    func_0x00010bef3da0();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x1063e5f44;
    puStack_68 = &UNK_110920ae8;
    _objc_retain(param_3);
    uStack_60 = param_3;
    uStack_58 = uVar1;
    uStack_50 = param_1;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x00010bd86bb4(param_5,param_6 + (1 - (long)param_5),&puStack_80);
    _objc_release(uStack_48);
    _objc_release(uStack_60);
    _objc_release(uVar1);
    puVar2 = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063e60d4; end: 1063e645f; -[SCLongformSpotlightAdDataSource _insertSnapsInStoryAd:startIndex:endIndex:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e60d4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010bef3da0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  for (; param_4 <= param_5; param_4 = param_4 + 1) {
    uVar6 = param_3;
    func_0x00010bef52c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126b23d8;
    _objc_alloc(PTR_PTR_1126b23d8);
    puVar5 = PTR_PTR_1126c9a78;
    func_0x00010c1015e0(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    FUN_1063e08cc(uVar3,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0558c0(puVar4);
    _objc_release(uVar6);
    _objc_release(puVar5);
    uVar6 = *(undefined8 *)(param_1 + _DAT_112746fcc);
    puVar5 = puVar4;
    func_0x00010bdc1720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar6);
    _objc_release(puVar5);
    lVar8 = param_1;
    func_0x00010c067280(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bdc1720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar8);
    _objc_release(puVar5);
    _objc_release(lVar8);
    lVar8 = (long)_DAT_112746fd4;
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    uVar6 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar8);
    puVar5 = puVar4;
    func_0x00010bdc1720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar9);
    _objc_release(puVar5);
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010befa120(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_initWeak(auStack_68,param_1);
  func_0x00010c1013e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c066f00(param_1);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1063e6460; end: 1063e6587;  */

void FUN_1063e6460(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if ((param_2 & 1) == 0) {
    lVar5 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c0a0600();
    _objc_release(lVar5);
    lVar5 = param_1 + 0x30;
    _objc_loadWeakRetained();
    lVar1 = lVar5;
    func_0x00010be41f40();
    _objc_release(lVar5);
    if ((int)lVar1 != 0) {
      lVar5 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar5);
      lVar2 = lVar5;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bef3a00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bef4240();
      func_0x00010c0e4940(lVar4);
      _objc_release(lVar1);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar5);
    }
  }
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x10))(lVar5,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063e6588; end: 1063e658b; -[SCLongformSpotlightAdDataSource operaPlaylistItemController] */

void FUN_1063e6588(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1013f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_playlistItemController_11261df18);
  return;
}



/* Entry: 1063e658c; end: 1063e6677; -[SCLongformSpotlightAdDataSource progressiveMediaDownloaderConfig] */

void FUN_1063e658c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ca540;
  _objc_alloc(PTR_PTR_1126ca540);
  uVar2 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c067f60();
  uVar6 = param_1;
  func_0x00010c0c5660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_1);
  func_0x00010c0305e0(puVar1,param_2,uVar5,uVar6,0,0,param_1);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063e6678; end: 1063e66bb; -[SCLongformSpotlightAdDataSource lastInteractionStateProvider] */

void FUN_1063e6678(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0ea260();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063e66bc; end: 1063e671b; -[SCLongformSpotlightAdDataSource progressiveMediaDownloader:adSnapFor:] */

void FUN_1063e66bc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010bf63e00(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063e671c; end: 1063e680b; -[SCLongformSpotlightAdDataSource progressiveMediaDownloader:adSnapAfter:] */

void FUN_1063e671c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  func_0x00010bef4ac0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfecde0();
  _objc_release(param_4);
  _objc_release(uVar3);
  if (uVar1 != 0x7fffffffffffffff) {
    uVar3 = param_1;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    if (uVar1 < uVar2 - 1) {
      uVar1 = param_1;
      func_0x00010bef52c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      goto LAB_1063e67f0;
    }
  }
  uVar3 = 0;
LAB_1063e67f0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1063e680c; end: 1063e6813; -[SCLongformSpotlightAdDataSource progressiveMediaDownloader:adResponseFor:] */

void FUN_1063e680c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef4ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_adResponseForDataModel__11259ac58,param_4);
  return;
}



/* Entry: 1063e6814; end: 1063e688f; -[SCLongformSpotlightAdDataSource _isMidRollAoeEnabled] */

undefined8 FUN_1063e6814(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f480();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1063e6890; end: 1063e691b; -[SCLongformSpotlightAdDataSource _isMidRollAoeAccurateMissEnabled] */

void FUN_1063e6890(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010be41f40();
  if ((int)uVar1 != 0) {
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f480();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  return;
}


