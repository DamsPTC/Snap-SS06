/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085ca118; end: 1085ca167;  */

void FUN_1085ca118(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0fbcc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02c60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085ca168; end: 1085ca7e7; -[SCTGroupChatPresenceController _animatePresenceChangeWithOrderChanged:previousOrder:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085ca168(long param_1,undefined8 param_2,int param_3,long param_4,undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  code *pcStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined **ppuStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  long lStack_388;
  undefined **ppuStack_380;
  undefined *puStack_378;
  undefined **ppuStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  code *pcStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
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
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lVar16 = *(long *)(param_1 + _DAT_112776f70);
  _objc_retain(lVar16);
  lVar13 = lVar16;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar12 = *plStack_240;
    do {
      lVar14 = 0;
      do {
        if (*plStack_240 != lVar12) {
          _objc_enumerationMutation(lVar16);
        }
        puVar5 = PTR_PTR_1126da4c0;
        uVar18 = *(undefined8 *)(lStack_248 + lVar14 * 8);
        uVar4 = uVar18;
        func_0x00010c0fbcc0(uVar18);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar4;
        func_0x00010c252440();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf09b20();
        _objc_release(uVar11);
        _objc_release(uVar4);
        if (((ulong)puVar5 & 1) == 0) {
          func_0x00010befa120(puVar3);
        }
        puVar5 = PTR_PTR_1126da4c0;
        uVar4 = uVar18;
        func_0x00010c0fbcc0(uVar18);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar4;
        func_0x00010c252440();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd4960();
        _objc_release(uVar11);
        _objc_release(uVar4);
        puVar6 = PTR_PTR_1126da4c0;
        ppuVar7 = ppuVar2;
        if (((ulong)puVar5 & 1) == 0) {
          func_0x00010c0fbcc0(uVar18);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar18;
          func_0x00010c252440();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfd4940();
          _objc_release(uVar4);
          _objc_release(uVar18);
          ppuVar7 = ppuVar1;
          if ((int)puVar6 != 0) goto LAB_1085ca364;
        }
        else {
LAB_1085ca364:
          func_0x00010befa120(ppuVar7);
        }
        lVar14 = lVar14 + 1;
      } while (lVar13 != lVar14);
      lVar13 = lVar16;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  _objc_release(lVar16);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_3 == 0) {
    puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_270 = 0xc2000000;
    pcStack_268 = FUN_1085ca7e8;
    puStack_260 = &UNK_110841f50;
    ppuVar7 = &puStack_278;
    lStack_258 = param_1;
    _objc_retainBlock(ppuVar7);
    func_0x00010befa120(puVar6);
  }
  else {
    ppuVar7 = ppuVar2;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar7;
    func_0x00010bf529e0();
    if (ppuVar15 != (undefined **)0x0) {
      lVar13 = param_1;
      func_0x00010be8e9e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar13;
      _objc_retainBlock();
      func_0x00010befa120(puVar6);
      _objc_release(lVar16);
      _objc_release(lVar13);
    }
  }
  _objc_release(ppuVar7);
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  lStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  plStack_2b0 = (long *)0x0;
  _objc_retain(ppuVar2);
  ppuVar7 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar7 != (undefined **)0x0) {
    lVar13 = *plStack_2b0;
    do {
      ppuVar15 = (undefined **)0x0;
      do {
        if (*plStack_2b0 != lVar13) {
          _objc_enumerationMutation(ppuVar2);
        }
        uStack_2c8 = *(undefined8 *)(lStack_2b8 + (long)ppuVar15 * 8);
        puStack_2e8 = puVar5;
        uStack_2e0 = 0xc2000000;
        pcStack_2d8 = FUN_1085ca8f8;
        puStack_2d0 = &UNK_110841f50;
        ppuVar8 = &puStack_2e8;
        _objc_retainBlock(ppuVar8);
        func_0x00010befa120(puVar6);
        _objc_release(ppuVar8);
        ppuVar15 = (undefined **)((long)ppuVar15 + 1);
      } while (ppuVar7 != ppuVar15);
      ppuVar7 = ppuVar2;
      func_0x00010bf52a60();
    } while (ppuVar7 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  _objc_retain(puVar3);
  puVar10 = puVar3;
  func_0x00010bf52a60();
  if (puVar10 != (undefined *)0x0) {
    lVar13 = *plStack_320;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (*plStack_320 != lVar13) {
          _objc_enumerationMutation(puVar3);
        }
        uVar11 = *(undefined8 *)(lStack_328 + (long)puVar17 * 8);
        uVar4 = uVar11;
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        puStack_360 = puVar5;
        uStack_358 = 0xc2000000;
        pcStack_350 = FUN_1085ca948;
        puStack_348 = &UNK_1109101a8;
        uStack_340 = uVar11;
        uStack_338 = uVar4;
        _objc_retain();
        ppuVar7 = &puStack_360;
        _objc_retainBlock(ppuVar7);
        func_0x00010befa120(puVar9);
        _objc_release(ppuVar7);
        _objc_release(uStack_338);
        _objc_release(uVar4);
        puVar17 = puVar17 + 1;
      } while (puVar10 != puVar17);
      puVar10 = puVar3;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  if (param_3 == 0) {
    puStack_3e8 = puVar5;
    uStack_3e0 = 0xc2000000;
    pcStack_3d8 = FUN_1085cae88;
    puStack_3d0 = &UNK_1108465d0;
    puStack_3c8 = puVar9;
    ppuStack_3c0 = ppuVar2;
    lStack_3b8 = param_1;
    uStack_3b0 = param_5;
    _objc_retain(param_5);
    _objc_retain(ppuVar2);
    _objc_retain(puVar9);
    puVar5 = PTR___dispatch_main_q_11034be20;
    FUN_108617acc(puVar6,PTR___dispatch_main_q_11034be20,&puStack_3e8);
    _objc_release(uStack_3b0);
    _objc_release(ppuStack_3c0);
    _objc_release(puStack_3c8);
  }
  else {
    puStack_3a8 = puVar5;
    uStack_3a0 = 0xc2000000;
    pcStack_398 = FUN_1085caa58;
    puStack_390 = &UNK_110852488;
    lStack_388 = param_1;
    ppuStack_380 = ppuVar2;
    puStack_378 = puVar9;
    _objc_retain(ppuVar1);
    ppuStack_370 = ppuVar1;
    uStack_368 = param_5;
    _objc_retain(param_5);
    _objc_retain(ppuVar2);
    _objc_retain(puVar9);
    puVar5 = PTR___dispatch_main_q_11034be20;
    FUN_108617acc(puVar6,PTR___dispatch_main_q_11034be20,&puStack_3a8);
    _objc_release(uStack_368);
    _objc_release(ppuStack_370);
    _objc_release(puStack_378);
    _objc_release(ppuStack_380);
  }
  _objc_release(param_5);
  _objc_release(ppuVar2);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    func_0x00010beda960(*(undefined8 *)(param_4 + 0x20));
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_retain(puVar5);
    func_0x00010c152fc0(0x3fd3333340000000,puVar3);
    _objc_release(puVar5);
    _objc_release(puVar5);
    return;
  }
  return;
}



/* Entry: 1085ca7e8; end: 1085ca8af;  */

void FUN_1085ca7e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  func_0x00010beda960(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_2);
  func_0x00010c152fc0(0x3fd3333340000000,puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1085ca8b0; end: 1085ca8e3;  */

void FUN_1085ca8b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085ca8e4; end: 1085ca8f7;  */

void FUN_1085ca8e4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085ca8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1085ca8f8; end: 1085ca947;  */

void FUN_1085ca8f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0fbcc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109d80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085ca948; end: 1085caa57;  */

void FUN_1085ca948(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126da4d8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0fe180(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c252440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c159240();
  func_0x00010c27e300(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c082a20(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c083620(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c075460(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf1a900();
  func_0x00010c252900(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bf03200(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085caa58; end: 1085cab63;  */

void FUN_1085caa58(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1085cab64;
  puStack_58 = &UNK_1109101a8;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  ppuVar2 = &puStack_70;
  uStack_50 = uVar3;
  uStack_48 = uVar4;
  _objc_retainBlock();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1085cac74;
  puStack_98 = &UNK_1108465d0;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uStack_88 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_90 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = uVar4;
  _objc_retain(uVar3);
  uStack_78 = uVar3;
  (*(code *)ppuVar2[2])(ppuVar2,&puStack_b0);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_90);
  _objc_release(ppuVar2);
  _objc_release(uStack_48);
  return;
}



/* Entry: 1085cab64; end: 1085cac2b;  */

void FUN_1085cab64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  func_0x00010be8dea0(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_2);
  func_0x00010c152fc0(0x3fb99999a0000000,puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1085cac2c; end: 1085cac5f;  */

void FUN_1085cac2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085cac60; end: 1085cac73;  */

void FUN_1085cac60(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085cac6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1085cac74; end: 1085cad63;  */

void FUN_1085cac74(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1085cad64;
  puStack_58 = &UNK_1109101a8;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  ppuVar2 = &puStack_70;
  uStack_50 = uVar4;
  uStack_48 = uVar5;
  _objc_retainBlock(ppuVar2);
  func_0x00010befa120(uVar3);
  _objc_release(ppuVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x1085cae74;
  puStack_80 = &UNK_110849530;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  uStack_78 = uVar3;
  FUN_108617acc(uVar4,PTR___dispatch_main_q_11034be20,&puStack_98);
  _objc_release(uStack_78);
  _objc_release(uStack_48);
  return;
}



/* Entry: 1085cad64; end: 1085cae2b;  */

void FUN_1085cad64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  func_0x00010be8dea0(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_2);
  func_0x00010c152fc0(0x3fb99999a0000000,puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1085cae2c; end: 1085cae5f;  */

void FUN_1085cae2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085cae60; end: 1085cae87;  */

void FUN_1085cae60(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085cae6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1085cae88; end: 1085caf2b;  */

void FUN_1085cae88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1085caf2c;
  puStack_50 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  _objc_retain(*(undefined8 *)(param_1 + 0x38));
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  FUN_108617acc(uVar1,PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  return;
}



/* Entry: 1085caf2c; end: 1085cafe7;  */

void FUN_1085caf2c(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x1085cafb4;
    puStack_30 = &UNK_110842e18;
    uStack_28 = *(undefined8 *)(param_1 + 0x28);
    func_0x000108615acc(0x3ff8000000000000,PTR___dispatch_main_q_11034be20,&puStack_48);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
  return;
}



/* Entry: 1085cafe8; end: 1085cb01f; -[SCTGroupChatPresenceController _createDragContextWithPoint:] */

void FUN_1085cafe8(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc(PTR_PTR_1126da4f8);
  func_0x00010c04baa0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085cb020; end: 1085cb15f; -[SCTGroupChatPresenceController _processDragMove] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085cb020(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2;
  func_0x00010bf89680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0db6a0();
  _objc_release(lVar1);
  dVar8 = 0.0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar5 = *(long *)(param_2 + _DAT_112776f70);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        uVar2 = *(undefined8 *)(lStack_118 + lVar7 * 8);
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        dVar8 = param_1;
        func_0x00010c1a91e0();
        _objc_release(uVar2);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar5;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  func_0x00010bf89680(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0db6a0();
  _objc_release(lVar5);
  if (dVar8 == 0.0) {
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)((long)puVar4 + 0x10))(puVar4);
    }
  }
  else {
    puVar3 = PTR_PTR_1126cfd08;
    _objc_opt_new(PTR_PTR_1126cfd08);
    dVar9 = -dVar8;
    if (0.0 <= dVar8) {
      dVar9 = dVar8;
    }
    func_0x00010bef72c0(0x3fb47ae140000000,dVar9 * 0.30000001192092896,dVar8,0);
    func_0x00010bf42780(puVar3,param_3,puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar4);
  return;
}



/* Entry: 1085cb160; end: 1085cb26b; -[SCTGroupChatPresenceController _processDragEndWithCompletion:] */

void FUN_1085cb160(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  double dVar2;
  
  _objc_retain(param_4);
  func_0x00010bf89680(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0db6a0();
  _objc_release(param_2);
  if (param_1 == 0.0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    puVar1 = PTR_PTR_1126cfd08;
    _objc_opt_new(PTR_PTR_1126cfd08);
    dVar2 = -param_1;
    if (0.0 <= param_1) {
      dVar2 = param_1;
    }
    func_0x00010bef72c0(0x3fb47ae140000000,dVar2 * 0.30000001192092896,param_1,0);
    func_0x00010bf42780(puVar1,param_3,param_4);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1085cb26c; end: 1085cb38f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1085cb26c(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 *unaff_x23;
  long lVar16;
  undefined1 *unaff_x24;
  long lVar17;
  undefined1 *unaff_x25;
  long lVar18;
  undefined1 *unaff_x26;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined *puStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined *puStack_740;
  long lStack_738;
  undefined1 *puStack_730;
  undefined1 *puStack_728;
  undefined1 *puStack_720;
  undefined1 *puStack_718;
  long lStack_710;
  undefined1 *puStack_708;
  undefined8 ****ppppuStack_700;
  code *pcStack_6f8;
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
  long *plStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined1 auStack_668 [128];
  undefined1 auStack_5e8 [128];
  long lStack_568;
  undefined1 *puStack_560;
  undefined1 *puStack_558;
  undefined1 *puStack_550;
  undefined1 *puStack_548;
  undefined1 *puStack_540;
  undefined1 *puStack_538;
  undefined1 *puStack_530;
  undefined1 *puStack_528;
  undefined1 *puStack_520;
  undefined1 *puStack_518;
  undefined1 ****ppppuStack_510;
  code *pcStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  ulong *puStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined1 auStack_4b8 [128];
  long lStack_438;
  undefined1 *puStack_430;
  undefined1 *puStack_428;
  undefined1 *puStack_420;
  undefined1 *puStack_418;
  undefined1 *puStack_410;
  undefined1 *puStack_408;
  undefined1 *puStack_400;
  undefined1 *puStack_3f8;
  undefined1 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined1 *puStack_3e0;
  undefined1 *puStack_3d0;
  undefined *puStack_3c8;
  long lStack_3c0;
  undefined1 *puStack_3b8;
  undefined1 *puStack_3b0;
  undefined1 *puStack_3a8;
  undefined1 *puStack_3a0;
  undefined *puStack_398;
  undefined1 *puStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined1 auStack_340 [128];
  long lStack_2c0;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  long lStack_248;
  ulong *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined1 *puStack_130;
  code *pcStack_128;
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
  
  puVar2 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar20 = 0.0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar12 = *(undefined1 **)(*(long *)(param_2 + 0x20) + (long)_DAT_112776f70);
  _objc_retain(puVar12);
  puVar6 = auStack_d8;
  puVar15 = puVar12;
  func_0x00010bf52a60();
  if (puVar15 != (undefined1 *)0x0) {
    lVar14 = *plStack_110;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar14) {
          _objc_enumerationMutation(puVar12);
        }
        uVar1 = *(undefined8 *)(lStack_118 + (long)unaff_x23 * 8);
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        dVar20 = param_1;
        func_0x00010c1a91e0(param_1);
        _objc_release(uVar1);
        unaff_x23 = unaff_x23 + 1;
      } while (puVar15 != unaff_x23);
      puVar6 = auStack_d8;
      puVar15 = puVar12;
      puVar2 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar15 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return dVar20;
  }
  ___stack_chk_fail();
  puVar11 = &uStack_250;
  pcStack_128 = FUN_1085cb390;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = (undefined1 *)puVar2;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar2 == (undefined8 *)0x0) {
    dVar20 = 0.0;
  }
  else {
    dVar19 = 0.0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    puStack_240 = (ulong *)0x0;
    puVar12 = *(undefined1 **)(puVar12 + _DAT_112776f70);
    _objc_retain(puVar12);
    puVar6 = auStack_208;
    puVar15 = puVar12;
    func_0x00010bf52a60();
    if (puVar15 == (undefined1 *)0x0) {
      dVar20 = 0.0;
    }
    else {
      unaff_x23 = (undefined1 *)*puStack_240;
      dVar20 = 0.0;
      do {
        unaff_x24 = (undefined1 *)0x0;
        dVar21 = dVar20;
        do {
          if ((undefined1 *)*puStack_240 != unaff_x23) {
            _objc_enumerationMutation(puVar12);
          }
          uVar1 = *(undefined8 *)(lStack_248 + (long)unaff_x24 * 8);
          func_0x00010c0fbcc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe07e0();
          dVar20 = dVar19;
          if (dVar19 <= dVar21) {
            dVar20 = dVar21;
          }
          _objc_release(uVar1);
          unaff_x24 = unaff_x24 + 1;
          dVar21 = dVar20;
        } while (puVar15 != unaff_x24);
        puVar6 = auStack_208;
        puVar15 = puVar12;
        puVar11 = &uStack_250;
        func_0x00010bf52a60();
      } while (puVar15 != (undefined1 *)0x0);
    }
    _objc_release(puVar12);
    puVar15 = (undefined1 *)puVar11;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    pcStack_258 = FUN_1085cb4f0;
    lStack_2c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_260 = &puStack_130;
    _objc_retain(puVar15);
    _objc_retain(puVar6);
    puVar12 = (undefined1 *)puVar2;
    _objc_opt_class();
    puStack_3a8 = puVar15;
    func_0x00010be73ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    puStack_3b8 = puVar12;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    puStack_388 = puVar3;
    _objc_opt_new();
    puVar15 = (undefined1 *)(long)_DAT_112776f70;
    lVar14 = *(long *)((long)puVar2 + (long)puVar15);
    puStack_3c8 = puVar4;
    func_0x00010bf529e0();
    if (lVar14 != 0) {
      unaff_x25 = (undefined1 *)0x0;
      do {
        unaff_x26 = *(undefined1 **)((long)puVar2 + (long)puVar15);
        func_0x00010c0dfd40(unaff_x26,param_3,unaff_x25);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = unaff_x26;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar6;
        func_0x00010c0e00e0(puVar6,param_3,puVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar12);
        unaff_x27 = unaff_x26;
        if (puVar5 == (undefined1 *)0x0) {
          puVar12 = unaff_x26;
          func_0x00010c0fbcc0(unaff_x26);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12c960();
          _objc_release(puVar12);
          unaff_x24 = *(undefined1 **)((long)puVar2 + (long)_DAT_112776f74);
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d3e0(unaff_x24,param_3,unaff_x27);
          _objc_release(unaff_x27);
          func_0x00010bef92c0(puStack_3c8,param_3,unaff_x25);
          unaff_x28 = (undefined1 *)0x0;
        }
        else {
          puVar12 = unaff_x26;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puStack_388,param_3,puVar12);
          _objc_release(puVar12);
          puVar12 = unaff_x26;
          func_0x00010c2923e0(unaff_x26);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puStack_3b8;
          func_0x00010c0e00e0(puStack_3b8,param_3,puVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c28b760(unaff_x26,param_3,puVar5);
          _objc_release(puVar5);
          _objc_release(puVar12);
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = puVar6;
          func_0x00010c0e00e0(puVar6,param_3,unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x28;
          func_0x00010c10ac40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c288b60(unaff_x26,param_3,unaff_x24);
          _objc_release(unaff_x24);
          _objc_release(unaff_x28);
          _objc_release(unaff_x27);
        }
        _objc_release(unaff_x26);
        unaff_x25 = unaff_x25 + 1;
        puVar12 = *(undefined1 **)((long)puVar2 + (long)puVar15);
        func_0x00010bf529e0();
      } while (unaff_x25 < puVar12);
    }
    puStack_3d0 = puVar6;
    func_0x00010c12d480(*(undefined8 *)((long)puVar2 + (long)puVar15),param_3,puStack_3c8);
    puVar12 = puStack_3a8;
    dVar20 = 0.0;
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    lStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    plStack_370 = (long *)0x0;
    _objc_retain(puStack_3a8);
    func_0x00010bf52a60(puVar12,param_3,&uStack_380,auStack_340,0x10);
    if (puVar12 != (undefined1 *)0x0) {
      lVar14 = *plStack_370;
      lStack_3c0 = lVar14;
      do {
        unaff_x26 = (undefined1 *)0x0;
        puStack_3b0 = puVar12;
        do {
          if (*plStack_370 != lVar14) {
            _objc_enumerationMutation(puStack_3a8);
          }
          unaff_x28 = *(undefined1 **)(lStack_378 + (long)unaff_x26 * 8);
          unaff_x23 = unaff_x28;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puStack_388;
          func_0x00010bf4b900(puStack_388,param_3,unaff_x23);
          if (((ulong)puVar3 & 1) == 0) {
            puVar6 = puStack_3b8;
            func_0x00010c0e00e0(puStack_3b8,param_3,unaff_x23);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = unaff_x28;
            func_0x00010bf1a900(unaff_x28);
            unaff_x27 = (undefined1 *)puVar2;
            func_0x00010bdf10c0(puVar2,param_3,unaff_x28,puVar6,puVar12);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            func_0x00010befa120(*(undefined8 *)((long)puVar2 + (long)puVar15),param_3,unaff_x27);
            puVar6 = (undefined1 *)puVar2;
            func_0x00010bf4dce0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = unaff_x27;
            func_0x00010c0fbcc0(unaff_x27);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befbb60(puVar6,param_3,puVar12);
            _objc_release(puVar12);
            _objc_release(puVar6);
            uVar1 = *(undefined8 *)((long)puVar2 + (long)_DAT_112776f74);
            puVar6 = unaff_x27;
            func_0x00010c0fbcc0(unaff_x27);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = unaff_x27;
            func_0x00010c2923e0(unaff_x27);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(uVar1,param_3,puVar6,puVar12);
            _objc_release(puVar12);
            _objc_release(puVar6);
            puVar6 = unaff_x27;
            func_0x00010c0fbcc0(unaff_x27);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bed43e0(puVar2,param_3,puVar6);
            _objc_release(puVar6);
            func_0x00010c288bc0(unaff_x27,param_3,unaff_x28);
            puVar6 = unaff_x27;
            func_0x00010c0fbcc0();
            _objc_retainAutoreleasedReturnValue();
            puStack_398 = PTR_PTR_1126da4d8;
            puVar12 = unaff_x27;
            puStack_390 = puVar6;
            func_0x00010c0fe180();
            puVar6 = unaff_x27;
            puStack_3a0 = puVar12;
            func_0x00010c159240(unaff_x27);
            puVar5 = unaff_x27;
            func_0x00010c27e300(unaff_x27);
            puVar7 = unaff_x27;
            func_0x00010c082a20(unaff_x27);
            unaff_x25 = unaff_x27;
            func_0x00010c083620();
            puVar8 = unaff_x27;
            func_0x00010c075460(unaff_x27);
            puVar9 = unaff_x27;
            func_0x00010bf1a900();
            puVar12 = puStack_3b0;
            puVar3 = puStack_398;
            puStack_3e0 = puVar9;
            func_0x00010c252900(puStack_398,param_3,puStack_3a0,puVar6,puVar5,puVar7,unaff_x25,
                                puVar8);
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = puStack_390;
            func_0x00010c28b2a0(puStack_390,param_3,puVar3);
            lVar14 = lStack_3c0;
            _objc_release(puVar3);
            _objc_release(unaff_x24);
            _objc_release(unaff_x27);
            unaff_x28 = unaff_x23;
          }
          _objc_release(unaff_x23);
          unaff_x26 = unaff_x26 + 1;
        } while (puVar12 != unaff_x26);
        puVar12 = puStack_3a8;
        func_0x00010bf52a60(puStack_3a8,param_3,&uStack_380,auStack_340,0x10);
        puVar6 = (undefined1 *)0x0;
      } while (puVar12 != (undefined1 *)0x0);
    }
    puVar12 = puStack_3a8;
    _objc_release(puStack_3a8);
    func_0x00010be8e940(puVar2);
    _objc_release(puStack_3c8);
    _objc_release(puStack_388);
    _objc_release(puStack_3b8);
    _objc_release(puStack_3d0);
    puVar5 = puVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c0) {
      return dVar20;
    }
    ___stack_chk_fail();
    puStack_3f8 = puVar12;
    pcStack_3e8 = FUN_1085cba74;
    lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
    dVar20 = 0.0;
    lStack_4f8 = 0;
    uStack_500 = 0;
    uStack_4e8 = 0;
    puStack_4f0 = (ulong *)0x0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    puVar12 = *(undefined1 **)(puVar5 + _DAT_112776f70);
    puStack_430 = unaff_x28;
    puStack_428 = unaff_x27;
    puStack_420 = unaff_x24;
    puStack_418 = unaff_x23;
    puStack_410 = puVar15;
    puStack_408 = (undefined1 *)puVar2;
    puStack_400 = puVar6;
    pppuStack_3f0 = &ppuStack_260;
    _objc_retain(puVar12);
    puVar6 = puVar12;
    func_0x00010bf52a60(puVar12,param_3,&uStack_500,auStack_4b8,0x10);
    if (puVar6 != (undefined1 *)0x0) {
      unaff_x23 = (undefined1 *)*puStack_4f0;
      do {
        unaff_x24 = (undefined1 *)0x0;
        do {
          if ((undefined1 *)*puStack_4f0 != unaff_x23) {
            _objc_enumerationMutation(puVar12);
          }
          puVar15 = *(undefined1 **)(lStack_4f8 + (long)unaff_x24 * 8);
          func_0x00010c0fbcc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bed43e0(puVar5,param_3,puVar15);
          _objc_release(puVar15);
          unaff_x24 = unaff_x24 + 1;
        } while (puVar6 != unaff_x24);
        puVar6 = puVar12;
        func_0x00010bf52a60(puVar12,param_3,&uStack_500,auStack_4b8,0x10);
        puVar2 = (undefined8 *)0x0;
      } while (puVar6 != (undefined1 *)0x0);
    }
    puVar6 = puVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_438) {
      return dVar20;
    }
    ___stack_chk_fail();
    puVar11 = &uStack_6f0;
    pcStack_508 = FUN_1085cbb98;
    lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_6a8 = 0;
    uStack_6b0 = 0;
    uStack_698 = 0;
    plStack_6a0 = (long *)0x0;
    uStack_688 = 0;
    uStack_690 = 0;
    uStack_678 = 0;
    uStack_680 = 0;
    lVar16 = (long)_DAT_112776f70;
    lVar13 = *(long *)(puVar6 + lVar16);
    puStack_560 = unaff_x28;
    puStack_558 = unaff_x27;
    puStack_550 = unaff_x26;
    puStack_548 = unaff_x25;
    puStack_540 = unaff_x24;
    puStack_538 = unaff_x23;
    puStack_530 = puVar15;
    puStack_528 = (undefined1 *)puVar2;
    puStack_520 = puVar12;
    puStack_518 = puVar5;
    ppppuStack_510 = &pppuStack_3f0;
    _objc_retain(lVar13);
    lVar14 = lVar13;
    func_0x00010bf52a60(lVar13,param_3,&uStack_6b0,auStack_5e8,0x10);
    if (lVar14 != 0) {
      lVar17 = *plStack_6a0;
      do {
        lVar18 = 0;
        do {
          if (*plStack_6a0 != lVar17) {
            _objc_enumerationMutation(lVar13);
          }
          puVar15 = *(undefined1 **)(lStack_6a8 + lVar18 * 8);
          func_0x00010c0fbcc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c280440();
          _objc_release(puVar15);
          lVar18 = lVar18 + 1;
        } while (lVar14 != lVar18);
        lVar14 = lVar13;
        func_0x00010bf52a60(lVar13,param_3,&uStack_6b0,auStack_5e8,0x10);
        puVar2 = (undefined8 *)0x0;
      } while (lVar14 != 0);
    }
    _objc_release(lVar13);
    dVar20 = 0.0;
    uStack_6c8 = 0;
    uStack_6d0 = 0;
    uStack_6b8 = 0;
    uStack_6c0 = 0;
    lStack_6e8 = 0;
    uStack_6f0 = 0;
    uStack_6d8 = 0;
    plStack_6e0 = (long *)0x0;
    lVar13 = *(long *)(puVar6 + lVar16);
    _objc_retain(lVar13);
    puVar12 = auStack_668;
    lVar14 = lVar13;
    func_0x00010bf52a60();
    if (lVar14 != 0) {
      puVar15 = (undefined1 *)0x0;
      lVar16 = *plStack_6e0;
      do {
        lVar17 = 0;
        puVar12 = puVar15;
        do {
          if (*plStack_6e0 != lVar16) {
            _objc_enumerationMutation(lVar13);
          }
          puVar15 = *(undefined1 **)(lStack_6e8 + lVar17 * 8);
          puVar5 = puVar15;
          func_0x00010c0fbcc0(puVar15);
          _objc_retainAutoreleasedReturnValue();
          if (puVar12 == (undefined1 *)0x0) {
            puVar7 = puVar6;
            func_0x00010bf4dce0(puVar6);
            _objc_retainAutoreleasedReturnValue();
            dVar20 = 7.0;
          }
          else {
            puVar7 = puVar12;
            func_0x00010c0bc000(puVar12);
            _objc_retainAutoreleasedReturnValue();
            dVar20 = 6.0;
          }
          func_0x00010c0678c0(dVar20,puVar5,param_3,puVar7);
          _objc_release(puVar7);
          func_0x00010c0fbcc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          _objc_release(puVar5);
          lVar17 = lVar17 + 1;
          puVar12 = puVar15;
        } while (lVar14 != lVar17);
        puVar12 = auStack_668;
        lVar14 = lVar13;
        puVar11 = &uStack_6f0;
        func_0x00010bf52a60();
      } while (lVar14 != 0);
      _objc_release(puVar15);
      puVar2 = (undefined8 *)0x0;
    }
    lVar14 = lVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_568) {
      return dVar20;
    }
    ___stack_chk_fail();
    pcStack_6f8 = FUN_1085cbde4;
    puStack_720 = puVar15;
    puStack_718 = (undefined1 *)puVar2;
    lStack_710 = lVar13;
    puStack_708 = puVar6;
    ppppuStack_700 = &ppppuStack_510;
    _objc_retain(puVar11);
    _objc_retain(puVar12);
    puStack_758 = PTR___NSConcreteStackBlock_11034bd00;
    dVar20 = 1.60807493534087e-314;
    uStack_750 = 0xc2000000;
    uStack_748 = 0x1085cbe9c;
    puStack_740 = &UNK_110a59cb0;
    lStack_738 = lVar14;
    puStack_730 = (undefined1 *)puVar11;
    puStack_728 = puVar12;
    _objc_retain(puVar12);
    _objc_retain(puVar11);
    ppuVar10 = &puStack_758;
    _objc_retainBlock(ppuVar10);
    _objc_release(puStack_728);
    _objc_release(puStack_730);
    _objc_release(puVar12);
    _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
    return dVar20;
  }
  return dVar20;
}



/* Entry: 1085cb390; end: 1085cb4ef; -[SCTGroupChatPresenceController _tallestPillHeightForState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1085cb390(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 *unaff_x23;
  long lVar15;
  undefined1 *unaff_x24;
  long lVar16;
  undefined1 *unaff_x25;
  long lVar17;
  undefined1 *unaff_x26;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined *puStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined *puStack_620;
  long lStack_618;
  undefined1 *puStack_610;
  undefined1 *puStack_608;
  undefined1 *puStack_600;
  undefined1 *puStack_5f8;
  long lStack_5f0;
  undefined1 *puStack_5e8;
  undefined1 ****ppppuStack_5e0;
  code *pcStack_5d8;
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
  undefined1 auStack_548 [128];
  undefined1 auStack_4c8 [128];
  long lStack_448;
  undefined1 *puStack_440;
  undefined1 *puStack_438;
  undefined1 *puStack_430;
  undefined1 *puStack_428;
  undefined1 *puStack_420;
  undefined1 *puStack_418;
  undefined1 *puStack_410;
  undefined1 *puStack_408;
  undefined1 *puStack_400;
  undefined1 *puStack_3f8;
  undefined1 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  ulong *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_398 [128];
  long lStack_318;
  undefined1 *puStack_310;
  undefined1 *puStack_308;
  undefined1 *puStack_300;
  undefined1 *puStack_2f8;
  undefined1 *puStack_2f0;
  undefined1 *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined1 *puStack_2d8;
  undefined1 **ppuStack_2d0;
  code *pcStack_2c8;
  undefined1 *puStack_2c0;
  undefined1 *puStack_2b0;
  undefined *puStack_2a8;
  long lStack_2a0;
  undefined1 *puStack_298;
  undefined1 *puStack_290;
  undefined1 *puStack_288;
  undefined1 *puStack_280;
  undefined *puStack_278;
  undefined1 *puStack_270;
  undefined *puStack_268;
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
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar10 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_3;
  _objc_retain(param_3);
  if (param_3 == (undefined1 *)0x0) {
    dVar19 = 0.0;
  }
  else {
    dVar18 = 0.0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    puStack_120 = (ulong *)0x0;
    puVar11 = *(undefined1 **)(param_1 + _DAT_112776f70);
    _objc_retain(puVar11);
    param_4 = auStack_e8;
    puVar14 = puVar11;
    func_0x00010bf52a60();
    if (puVar14 == (undefined1 *)0x0) {
      dVar19 = 0.0;
    }
    else {
      unaff_x23 = (undefined1 *)*puStack_120;
      dVar19 = 0.0;
      do {
        unaff_x24 = (undefined1 *)0x0;
        dVar20 = dVar19;
        do {
          if ((undefined1 *)*puStack_120 != unaff_x23) {
            _objc_enumerationMutation(puVar11);
          }
          uVar1 = *(undefined8 *)(lStack_128 + (long)unaff_x24 * 8);
          func_0x00010c0fbcc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe07e0();
          dVar19 = dVar18;
          if (dVar18 <= dVar20) {
            dVar19 = dVar20;
          }
          _objc_release(uVar1);
          unaff_x24 = unaff_x24 + 1;
          dVar20 = dVar19;
        } while (puVar14 != unaff_x24);
        param_4 = auStack_e8;
        puVar14 = puVar11;
        puVar10 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar14 != (undefined1 *)0x0);
    }
    _objc_release(puVar11);
    puVar14 = (undefined1 *)puVar10;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return dVar19;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1085cb4f0;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar14);
  _objc_retain(param_4);
  puVar11 = param_3;
  _objc_opt_class();
  puStack_288 = puVar14;
  func_0x00010be73ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puStack_298 = puVar11;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  puStack_268 = puVar2;
  _objc_opt_new();
  puVar14 = (undefined1 *)(long)_DAT_112776f70;
  lVar4 = *(long *)(param_3 + (long)puVar14);
  puStack_2a8 = puVar3;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    unaff_x25 = (undefined1 *)0x0;
    do {
      unaff_x26 = *(undefined1 **)(param_3 + (long)puVar14);
      func_0x00010c0dfd40(unaff_x26,param_2,unaff_x25);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = unaff_x26;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_4;
      func_0x00010c0e00e0(param_4,param_2,puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar11);
      unaff_x27 = unaff_x26;
      if (puVar5 == (undefined1 *)0x0) {
        puVar11 = unaff_x26;
        func_0x00010c0fbcc0(unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c960();
        _objc_release(puVar11);
        unaff_x24 = *(undefined1 **)(param_3 + _DAT_112776f74);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(unaff_x24,param_2,unaff_x27);
        _objc_release(unaff_x27);
        func_0x00010bef92c0(puStack_2a8,param_2,unaff_x25);
        unaff_x28 = (undefined1 *)0x0;
      }
      else {
        puVar11 = unaff_x26;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puStack_268,param_2,puVar11);
        _objc_release(puVar11);
        puVar11 = unaff_x26;
        func_0x00010c2923e0(unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puStack_298;
        func_0x00010c0e00e0(puStack_298,param_2,puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28b760(unaff_x26,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(puVar11);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = param_4;
        func_0x00010c0e00e0(param_4,param_2,unaff_x27);
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x28;
        func_0x00010c10ac40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c288b60(unaff_x26,param_2,unaff_x24);
        _objc_release(unaff_x24);
        _objc_release(unaff_x28);
        _objc_release(unaff_x27);
      }
      _objc_release(unaff_x26);
      unaff_x25 = unaff_x25 + 1;
      puVar11 = *(undefined1 **)(param_3 + (long)puVar14);
      func_0x00010bf529e0();
    } while (unaff_x25 < puVar11);
  }
  puStack_2b0 = param_4;
  func_0x00010c12d480(*(undefined8 *)(param_3 + (long)puVar14),param_2,puStack_2a8);
  puVar11 = puStack_288;
  dVar19 = 0.0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  _objc_retain(puStack_288);
  func_0x00010bf52a60(puVar11,param_2,&uStack_260,auStack_220,0x10);
  if (puVar11 != (undefined1 *)0x0) {
    lVar4 = *plStack_250;
    lStack_2a0 = lVar4;
    do {
      unaff_x26 = (undefined1 *)0x0;
      puStack_290 = puVar11;
      do {
        if (*plStack_250 != lVar4) {
          _objc_enumerationMutation(puStack_288);
        }
        unaff_x28 = *(undefined1 **)(lStack_258 + (long)unaff_x26 * 8);
        unaff_x23 = unaff_x28;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puStack_268;
        func_0x00010bf4b900(puStack_268,param_2,unaff_x23);
        if (((ulong)puVar2 & 1) == 0) {
          puVar11 = puStack_298;
          func_0x00010c0e00e0(puStack_298,param_2,unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = unaff_x28;
          func_0x00010bf1a900(unaff_x28);
          unaff_x27 = param_3;
          func_0x00010bdf10c0(param_3,param_2,unaff_x28,puVar11,puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          func_0x00010befa120(*(undefined8 *)(param_3 + (long)puVar14),param_2,unaff_x27);
          puVar11 = param_3;
          func_0x00010bf4dce0(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = unaff_x27;
          func_0x00010c0fbcc0(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60(puVar11,param_2,puVar5);
          _objc_release(puVar5);
          _objc_release(puVar11);
          uVar1 = *(undefined8 *)(param_3 + _DAT_112776f74);
          puVar11 = unaff_x27;
          func_0x00010c0fbcc0(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = unaff_x27;
          func_0x00010c2923e0(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(uVar1,param_2,puVar11,puVar5);
          _objc_release(puVar5);
          _objc_release(puVar11);
          puVar11 = unaff_x27;
          func_0x00010c0fbcc0(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bed43e0(param_3,param_2,puVar11);
          _objc_release(puVar11);
          func_0x00010c288bc0(unaff_x27,param_2,unaff_x28);
          puVar11 = unaff_x27;
          func_0x00010c0fbcc0();
          _objc_retainAutoreleasedReturnValue();
          puStack_278 = PTR_PTR_1126da4d8;
          puVar5 = unaff_x27;
          puStack_270 = puVar11;
          func_0x00010c0fe180();
          puVar12 = unaff_x27;
          puStack_280 = puVar5;
          func_0x00010c159240(unaff_x27);
          puVar5 = unaff_x27;
          func_0x00010c27e300(unaff_x27);
          puVar6 = unaff_x27;
          func_0x00010c082a20(unaff_x27);
          unaff_x25 = unaff_x27;
          func_0x00010c083620();
          puVar7 = unaff_x27;
          func_0x00010c075460(unaff_x27);
          puVar8 = unaff_x27;
          func_0x00010bf1a900();
          puVar11 = puStack_290;
          puVar2 = puStack_278;
          puStack_2c0 = puVar8;
          func_0x00010c252900(puStack_278,param_2,puStack_280,puVar12,puVar5,puVar6,unaff_x25,puVar7
                             );
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = puStack_270;
          func_0x00010c28b2a0(puStack_270,param_2,puVar2);
          lVar4 = lStack_2a0;
          _objc_release(puVar2);
          _objc_release(unaff_x24);
          _objc_release(unaff_x27);
          unaff_x28 = unaff_x23;
        }
        _objc_release(unaff_x23);
        unaff_x26 = unaff_x26 + 1;
      } while (puVar11 != unaff_x26);
      puVar11 = puStack_288;
      func_0x00010bf52a60(puStack_288,param_2,&uStack_260,auStack_220,0x10);
      param_4 = (undefined1 *)0x0;
    } while (puVar11 != (undefined1 *)0x0);
  }
  puVar11 = puStack_288;
  _objc_release(puStack_288);
  func_0x00010be8e940(param_3);
  _objc_release(puStack_2a8);
  _objc_release(puStack_268);
  _objc_release(puStack_298);
  _objc_release(puStack_2b0);
  puVar5 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return dVar19;
  }
  ___stack_chk_fail();
  puStack_2d8 = puVar11;
  pcStack_2c8 = FUN_1085cba74;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar19 = 0.0;
  lStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  puStack_3d0 = (ulong *)0x0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  puVar12 = *(undefined1 **)(puVar5 + _DAT_112776f70);
  puStack_310 = unaff_x28;
  puStack_308 = unaff_x27;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar14;
  puStack_2e8 = param_3;
  puStack_2e0 = param_4;
  ppuStack_2d0 = &puStack_140;
  _objc_retain(puVar12);
  puVar11 = puVar12;
  func_0x00010bf52a60(puVar12,param_2,&uStack_3e0,auStack_398,0x10);
  if (puVar11 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_3d0;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_3d0 != unaff_x23) {
          _objc_enumerationMutation(puVar12);
        }
        puVar14 = *(undefined1 **)(lStack_3d8 + (long)unaff_x24 * 8);
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bed43e0(puVar5,param_2,puVar14);
        _objc_release(puVar14);
        unaff_x24 = unaff_x24 + 1;
      } while (puVar11 != unaff_x24);
      puVar11 = puVar12;
      func_0x00010bf52a60(puVar12,param_2,&uStack_3e0,auStack_398,0x10);
      param_3 = (undefined1 *)0x0;
    } while (puVar11 != (undefined1 *)0x0);
  }
  puVar11 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return dVar19;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_5d0;
  pcStack_3e8 = FUN_1085cbb98;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_588 = 0;
  uStack_590 = 0;
  uStack_578 = 0;
  plStack_580 = (long *)0x0;
  uStack_568 = 0;
  uStack_570 = 0;
  uStack_558 = 0;
  uStack_560 = 0;
  lVar15 = (long)_DAT_112776f70;
  lVar13 = *(long *)(puVar11 + lVar15);
  puStack_440 = unaff_x28;
  puStack_438 = unaff_x27;
  puStack_430 = unaff_x26;
  puStack_428 = unaff_x25;
  puStack_420 = unaff_x24;
  puStack_418 = unaff_x23;
  puStack_410 = puVar14;
  puStack_408 = param_3;
  puStack_400 = puVar12;
  puStack_3f8 = puVar5;
  pppuStack_3f0 = &ppuStack_2d0;
  _objc_retain(lVar13);
  lVar4 = lVar13;
  func_0x00010bf52a60(lVar13,param_2,&uStack_590,auStack_4c8,0x10);
  if (lVar4 != 0) {
    lVar16 = *plStack_580;
    do {
      lVar17 = 0;
      do {
        if (*plStack_580 != lVar16) {
          _objc_enumerationMutation(lVar13);
        }
        puVar14 = *(undefined1 **)(lStack_588 + lVar17 * 8);
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c280440();
        _objc_release(puVar14);
        lVar17 = lVar17 + 1;
      } while (lVar4 != lVar17);
      lVar4 = lVar13;
      func_0x00010bf52a60(lVar13,param_2,&uStack_590,auStack_4c8,0x10);
      param_3 = (undefined1 *)0x0;
    } while (lVar4 != 0);
  }
  _objc_release(lVar13);
  dVar19 = 0.0;
  uStack_5a8 = 0;
  uStack_5b0 = 0;
  uStack_598 = 0;
  uStack_5a0 = 0;
  lStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  plStack_5c0 = (long *)0x0;
  lVar13 = *(long *)(puVar11 + lVar15);
  _objc_retain(lVar13);
  puVar5 = auStack_548;
  lVar4 = lVar13;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    puVar14 = (undefined1 *)0x0;
    lVar15 = *plStack_5c0;
    do {
      lVar16 = 0;
      puVar5 = puVar14;
      do {
        if (*plStack_5c0 != lVar15) {
          _objc_enumerationMutation(lVar13);
        }
        puVar14 = *(undefined1 **)(lStack_5c8 + lVar16 * 8);
        puVar12 = puVar14;
        func_0x00010c0fbcc0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 == (undefined1 *)0x0) {
          puVar6 = puVar11;
          func_0x00010bf4dce0(puVar11);
          _objc_retainAutoreleasedReturnValue();
          dVar19 = 7.0;
        }
        else {
          puVar6 = puVar5;
          func_0x00010c0bc000(puVar5);
          _objc_retainAutoreleasedReturnValue();
          dVar19 = 6.0;
        }
        func_0x00010c0678c0(dVar19,puVar12,param_2,puVar6);
        _objc_release(puVar6);
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar12);
        lVar16 = lVar16 + 1;
        puVar5 = puVar14;
      } while (lVar4 != lVar16);
      puVar5 = auStack_548;
      lVar4 = lVar13;
      puVar10 = &uStack_5d0;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
    _objc_release(puVar14);
    param_3 = (undefined1 *)0x0;
  }
  lVar4 = lVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return dVar19;
  }
  ___stack_chk_fail();
  pcStack_5d8 = FUN_1085cbde4;
  puStack_600 = puVar14;
  puStack_5f8 = param_3;
  lStack_5f0 = lVar13;
  puStack_5e8 = puVar11;
  ppppuStack_5e0 = &pppuStack_3f0;
  _objc_retain(puVar10);
  _objc_retain(puVar5);
  puStack_638 = PTR___NSConcreteStackBlock_11034bd00;
  dVar19 = 1.60807493534087e-314;
  uStack_630 = 0xc2000000;
  uStack_628 = 0x1085cbe9c;
  puStack_620 = &UNK_110a59cb0;
  lStack_618 = lVar4;
  puStack_610 = (undefined1 *)puVar10;
  puStack_608 = puVar5;
  _objc_retain(puVar5);
  _objc_retain(puVar10);
  ppuVar9 = &puStack_638;
  _objc_retainBlock(ppuVar9);
  _objc_release(puStack_608);
  _objc_release(puStack_610);
  _objc_release(puVar5);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return dVar19;
}



/* Entry: 1085cb4f0; end: 1085cba73; -[SCTGroupChatPresenceController _updateParticipantsWithRemoteParticipantStates:remoteStateDictionaryKeyedByUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085cb4f0(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong unaff_x23;
  long lVar16;
  ulong unaff_x24;
  long lVar17;
  ulong unaff_x25;
  long lVar18;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined *puStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined *puStack_4f0;
  long lStack_4e8;
  undefined1 *puStack_4e0;
  undefined1 *puStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  long lStack_4c0;
  ulong uStack_4b8;
  undefined8 **ppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  long *plStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 auStack_418 [128];
  undefined1 auStack_398 [128];
  long lStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  undefined1 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  ulong *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_268 [128];
  long lStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  ulong uStack_190;
  ulong uStack_180;
  undefined *puStack_178;
  long lStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  undefined *puStack_138;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar15 = param_1;
  _objc_opt_class();
  uStack_158 = param_3;
  func_0x00010be73ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  uStack_168 = uVar15;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  puStack_138 = puVar1;
  _objc_opt_new();
  uVar15 = (ulong)_DAT_112776f70;
  lVar3 = *(long *)(param_1 + uVar15);
  puStack_178 = puVar2;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    unaff_x25 = 0;
    do {
      unaff_x26 = *(ulong *)(param_1 + uVar15);
      func_0x00010c0dfd40(unaff_x26,param_2,unaff_x25);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = unaff_x26;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_4;
      func_0x00010c0e00e0(param_4,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar5);
      unaff_x27 = unaff_x26;
      if (uVar4 == 0) {
        uVar5 = unaff_x26;
        func_0x00010c0fbcc0(unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c960();
        _objc_release(uVar5);
        unaff_x24 = *(ulong *)(param_1 + (long)_DAT_112776f74);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(unaff_x24,param_2,unaff_x27);
        _objc_release(unaff_x27);
        func_0x00010bef92c0(puStack_178,param_2,unaff_x25);
        unaff_x28 = 0;
      }
      else {
        uVar5 = unaff_x26;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puStack_138,param_2,uVar5);
        _objc_release(uVar5);
        uVar5 = unaff_x26;
        func_0x00010c2923e0(unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uStack_168;
        func_0x00010c0e00e0(uStack_168,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28b760(unaff_x26,param_2,uVar4);
        _objc_release(uVar4);
        _objc_release(uVar5);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = param_4;
        func_0x00010c0e00e0(param_4,param_2,unaff_x27);
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x28;
        func_0x00010c10ac40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c288b60(unaff_x26,param_2,unaff_x24);
        _objc_release(unaff_x24);
        _objc_release(unaff_x28);
        _objc_release(unaff_x27);
      }
      _objc_release(unaff_x26);
      unaff_x25 = unaff_x25 + 1;
      uVar5 = *(ulong *)(param_1 + uVar15);
      func_0x00010bf529e0();
    } while (unaff_x25 < uVar5);
  }
  uStack_180 = param_4;
  func_0x00010c12d480(*(undefined8 *)(param_1 + uVar15),param_2,puStack_178);
  uVar5 = uStack_158;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(uStack_158);
  func_0x00010bf52a60(uVar5,param_2,&uStack_130,auStack_f0,0x10);
  if (uVar5 != 0) {
    lVar3 = *plStack_120;
    lStack_170 = lVar3;
    do {
      unaff_x26 = 0;
      uStack_160 = uVar5;
      do {
        if (*plStack_120 != lVar3) {
          _objc_enumerationMutation(uStack_158);
        }
        unaff_x28 = *(ulong *)(lStack_128 + unaff_x26 * 8);
        unaff_x23 = unaff_x28;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puStack_138;
        func_0x00010bf4b900(puStack_138,param_2,unaff_x23);
        if (((ulong)puVar1 & 1) == 0) {
          uVar5 = uStack_168;
          func_0x00010c0e00e0(uStack_168,param_2,unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = unaff_x28;
          func_0x00010bf1a900(unaff_x28);
          unaff_x27 = param_1;
          func_0x00010bdf10c0(param_1,param_2,unaff_x28,uVar5,uVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          func_0x00010befa120(*(undefined8 *)(param_1 + uVar15),param_2,unaff_x27);
          uVar5 = param_1;
          func_0x00010bf4dce0(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = unaff_x27;
          func_0x00010c0fbcc0(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60(uVar5,param_2,uVar4);
          _objc_release(uVar4);
          _objc_release(uVar5);
          uVar12 = *(undefined8 *)(param_1 + (long)_DAT_112776f74);
          uVar5 = unaff_x27;
          func_0x00010c0fbcc0(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = unaff_x27;
          func_0x00010c2923e0(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(uVar12,param_2,uVar5,uVar4);
          _objc_release(uVar4);
          _objc_release(uVar5);
          uVar5 = unaff_x27;
          func_0x00010c0fbcc0(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bed43e0(param_1,param_2,uVar5);
          _objc_release(uVar5);
          func_0x00010c288bc0(unaff_x27,param_2,unaff_x28);
          uVar5 = unaff_x27;
          func_0x00010c0fbcc0();
          _objc_retainAutoreleasedReturnValue();
          puStack_148 = PTR_PTR_1126da4d8;
          uVar4 = unaff_x27;
          uStack_140 = uVar5;
          func_0x00010c0fe180();
          uVar13 = unaff_x27;
          uStack_150 = uVar4;
          func_0x00010c159240(unaff_x27);
          uVar4 = unaff_x27;
          func_0x00010c27e300(unaff_x27);
          uVar6 = unaff_x27;
          func_0x00010c082a20(unaff_x27);
          unaff_x25 = unaff_x27;
          func_0x00010c083620();
          uVar7 = unaff_x27;
          func_0x00010c075460(unaff_x27);
          uVar8 = unaff_x27;
          func_0x00010bf1a900();
          uVar5 = uStack_160;
          puVar1 = puStack_148;
          uStack_190 = uVar8;
          func_0x00010c252900(puStack_148,param_2,uStack_150,uVar13,uVar4,uVar6,unaff_x25,uVar7);
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = uStack_140;
          func_0x00010c28b2a0(uStack_140,param_2,puVar1);
          lVar3 = lStack_170;
          _objc_release(puVar1);
          _objc_release(unaff_x24);
          _objc_release(unaff_x27);
          unaff_x28 = unaff_x23;
        }
        _objc_release(unaff_x23);
        unaff_x26 = unaff_x26 + 1;
      } while (uVar5 != unaff_x26);
      uVar5 = uStack_158;
      func_0x00010bf52a60(uStack_158,param_2,&uStack_130,auStack_f0,0x10);
      param_4 = 0;
    } while (uVar5 != 0);
  }
  uVar5 = uStack_158;
  _objc_release(uStack_158);
  func_0x00010be8e940(param_1);
  _objc_release(puStack_178);
  _objc_release(puStack_138);
  _objc_release(uStack_168);
  _objc_release(uStack_180);
  uVar4 = uVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_1a8 = uVar5;
  pcStack_198 = FUN_1085cba74;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  puStack_2a0 = (ulong *)0x0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uVar13 = *(ulong *)(uVar4 + (long)_DAT_112776f70);
  uStack_1e0 = unaff_x28;
  uStack_1d8 = unaff_x27;
  uStack_1d0 = unaff_x24;
  uStack_1c8 = unaff_x23;
  uStack_1c0 = uVar15;
  uStack_1b8 = param_1;
  uStack_1b0 = param_4;
  puStack_1a0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar13);
  uVar5 = uVar13;
  func_0x00010bf52a60(uVar13,param_2,&uStack_2b0,auStack_268,0x10);
  if (uVar5 != 0) {
    unaff_x23 = *puStack_2a0;
    do {
      unaff_x24 = 0;
      do {
        if (*puStack_2a0 != unaff_x23) {
          _objc_enumerationMutation(uVar13);
        }
        uVar15 = *(ulong *)(lStack_2a8 + unaff_x24 * 8);
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bed43e0(uVar4,param_2,uVar15);
        _objc_release(uVar15);
        unaff_x24 = unaff_x24 + 1;
      } while (uVar5 != unaff_x24);
      uVar5 = uVar13;
      func_0x00010bf52a60(uVar13,param_2,&uStack_2b0,auStack_268,0x10);
      param_1 = 0;
    } while (uVar5 != 0);
  }
  uVar5 = uVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_4a0;
  pcStack_2b8 = FUN_1085cbb98;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  plStack_450 = (long *)0x0;
  uStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  uStack_430 = 0;
  lVar16 = (long)_DAT_112776f70;
  lVar14 = *(long *)(uVar5 + lVar16);
  uStack_310 = unaff_x28;
  uStack_308 = unaff_x27;
  uStack_300 = unaff_x26;
  uStack_2f8 = unaff_x25;
  uStack_2f0 = unaff_x24;
  uStack_2e8 = unaff_x23;
  uStack_2e0 = uVar15;
  uStack_2d8 = param_1;
  uStack_2d0 = uVar13;
  uStack_2c8 = uVar4;
  ppuStack_2c0 = &puStack_1a0;
  _objc_retain(lVar14);
  lVar3 = lVar14;
  func_0x00010bf52a60(lVar14,param_2,&uStack_460,auStack_398,0x10);
  if (lVar3 != 0) {
    lVar17 = *plStack_450;
    do {
      lVar18 = 0;
      do {
        if (*plStack_450 != lVar17) {
          _objc_enumerationMutation(lVar14);
        }
        uVar15 = *(ulong *)(lStack_458 + lVar18 * 8);
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c280440();
        _objc_release(uVar15);
        lVar18 = lVar18 + 1;
      } while (lVar3 != lVar18);
      lVar3 = lVar14;
      func_0x00010bf52a60(lVar14,param_2,&uStack_460,auStack_398,0x10);
      param_1 = 0;
    } while (lVar3 != 0);
  }
  _objc_release(lVar14);
  uStack_478 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  lStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  plStack_490 = (long *)0x0;
  lVar14 = *(long *)(uVar5 + lVar16);
  _objc_retain(lVar14);
  puVar11 = auStack_418;
  lVar3 = lVar14;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    uVar15 = 0;
    lVar16 = *plStack_490;
    do {
      lVar17 = 0;
      uVar4 = uVar15;
      do {
        if (*plStack_490 != lVar16) {
          _objc_enumerationMutation(lVar14);
        }
        uVar15 = *(ulong *)(lStack_498 + lVar17 * 8);
        uVar13 = uVar15;
        func_0x00010c0fbcc0(uVar15);
        _objc_retainAutoreleasedReturnValue();
        if (uVar4 == 0) {
          uVar6 = uVar5;
          func_0x00010bf4dce0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = 0x401c000000000000;
        }
        else {
          uVar6 = uVar4;
          func_0x00010c0bc000(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = 0x4018000000000000;
        }
        func_0x00010c0678c0(uVar12,uVar13,param_2,uVar6);
        _objc_release(uVar6);
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar13);
        lVar17 = lVar17 + 1;
        uVar4 = uVar15;
      } while (lVar3 != lVar17);
      puVar11 = auStack_418;
      lVar3 = lVar14;
      puVar10 = &uStack_4a0;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    _objc_release(uVar15);
    param_1 = 0;
  }
  lVar3 = lVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return;
  }
  ___stack_chk_fail();
  pcStack_4a8 = FUN_1085cbde4;
  uStack_4d0 = uVar15;
  uStack_4c8 = param_1;
  lStack_4c0 = lVar14;
  uStack_4b8 = uVar5;
  ppuStack_4b0 = &ppuStack_2c0;
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  puStack_508 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_500 = 0xc2000000;
  uStack_4f8 = 0x1085cbe9c;
  puStack_4f0 = &UNK_110a59cb0;
  lStack_4e8 = lVar3;
  puStack_4e0 = (undefined1 *)puVar10;
  puStack_4d8 = puVar11;
  _objc_retain(puVar11);
  _objc_retain(puVar10);
  ppuVar9 = &puStack_508;
  _objc_retainBlock(ppuVar9);
  _objc_release(puStack_4d8);
  _objc_release(puStack_4e0);
  _objc_release(puVar11);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return;
}



/* Entry: 1085cba74; end: 1085cbb97; -[SCTGroupChatPresenceController _updateBottomConstraintOfPills] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085cba74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  long lStack_358;
  undefined1 *puStack_350;
  undefined1 *puStack_348;
  long lStack_340;
  undefined8 uStack_338;
  long lStack_330;
  long lStack_328;
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
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_288 [128];
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined1 *puStack_130;
  code *pcStack_128;
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
  lVar7 = *(long *)(param_1 + _DAT_112776f70);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60(lVar7,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        unaff_x22 = *(long *)(lStack_118 + lVar9 * 8);
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bed43e0(param_1,param_2,unaff_x22);
        _objc_release(unaff_x22);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,&uStack_120,auStack_d8,0x10);
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_310;
  pcStack_128 = FUN_1085cbb98;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  plStack_2c0 = (long *)0x0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  lVar9 = (long)_DAT_112776f70;
  lVar8 = *(long *)(lVar7 + lVar9);
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(lVar8);
  lVar1 = lVar8;
  func_0x00010bf52a60(lVar8,param_2,&uStack_2d0,auStack_208,0x10);
  if (lVar1 != 0) {
    lVar10 = *plStack_2c0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_2c0 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        unaff_x22 = *(long *)(lStack_2c8 + lVar11 * 8);
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c280440();
        _objc_release(unaff_x22);
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = lVar8;
      func_0x00010bf52a60(lVar8,param_2,&uStack_2d0,auStack_208,0x10);
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(lVar8);
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  lStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  plStack_300 = (long *)0x0;
  lVar8 = *(long *)(lVar7 + lVar9);
  _objc_retain(lVar8);
  puVar6 = auStack_288;
  lVar1 = lVar8;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x22 = 0;
    lVar9 = *plStack_300;
    do {
      lVar10 = 0;
      lVar11 = unaff_x22;
      do {
        if (*plStack_300 != lVar9) {
          _objc_enumerationMutation(lVar8);
        }
        unaff_x22 = *(long *)(lStack_308 + lVar10 * 8);
        lVar2 = unaff_x22;
        func_0x00010c0fbcc0(unaff_x22);
        _objc_retainAutoreleasedReturnValue();
        if (lVar11 == 0) {
          lVar3 = lVar7;
          func_0x00010bf4dce0(lVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = 0x401c000000000000;
        }
        else {
          lVar3 = lVar11;
          func_0x00010c0bc000(lVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = 0x4018000000000000;
        }
        func_0x00010c0678c0(uVar12,lVar2,param_2,lVar3);
        _objc_release(lVar3);
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar11);
        _objc_release(lVar2);
        lVar10 = lVar10 + 1;
        lVar11 = unaff_x22;
      } while (lVar1 != lVar10);
      puVar6 = auStack_288;
      lVar1 = lVar8;
      puVar5 = &uStack_310;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    _objc_release(unaff_x22);
    unaff_x21 = 0;
  }
  lVar1 = lVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  pcStack_318 = FUN_1085cbde4;
  lStack_340 = unaff_x22;
  uStack_338 = unaff_x21;
  lStack_330 = lVar8;
  lStack_328 = lVar7;
  ppuStack_320 = &puStack_130;
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  puStack_378 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_370 = 0xc2000000;
  uStack_368 = 0x1085cbe9c;
  puStack_360 = &UNK_110a59cb0;
  lStack_358 = lVar1;
  puStack_350 = (undefined1 *)puVar5;
  puStack_348 = puVar6;
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  ppuVar4 = &puStack_378;
  _objc_retainBlock(ppuVar4);
  _objc_release(puStack_348);
  _objc_release(puStack_350);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 1085cbb98; end: 1085cbde3; -[SCTGroupChatPresenceController _updateLeftConstraintOfPills] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085cbb98(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined1 *puStack_230;
  undefined1 *puStack_228;
  long lStack_220;
  undefined8 uStack_218;
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
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar5 = &uStack_1f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar8 = (long)_DAT_112776f70;
  lVar7 = *(long *)(param_1 + lVar8);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60(lVar7,param_2,&uStack_1b0,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar9 = *plStack_1a0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1a0 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        unaff_x22 = *(long *)(lStack_1a8 + lVar10 * 8);
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c280440();
        _objc_release(unaff_x22);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,&uStack_1b0,auStack_e8,0x10);
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(lVar7);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lVar7 = *(long *)(param_1 + lVar8);
  _objc_retain(lVar7);
  puVar6 = auStack_168;
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x22 = 0;
    lVar8 = *plStack_1e0;
    do {
      lVar9 = 0;
      lVar10 = unaff_x22;
      do {
        if (*plStack_1e0 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        unaff_x22 = *(long *)(lStack_1e8 + lVar9 * 8);
        lVar2 = unaff_x22;
        func_0x00010c0fbcc0(unaff_x22);
        _objc_retainAutoreleasedReturnValue();
        if (lVar10 == 0) {
          lVar3 = param_1;
          func_0x00010bf4dce0(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = 0x401c000000000000;
        }
        else {
          lVar3 = lVar10;
          func_0x00010c0bc000(lVar10);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = 0x4018000000000000;
        }
        func_0x00010c0678c0(uVar11,lVar2,param_2,lVar3);
        _objc_release(lVar3);
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
        _objc_release(lVar2);
        lVar9 = lVar9 + 1;
        lVar10 = unaff_x22;
      } while (lVar1 != lVar9);
      puVar6 = auStack_168;
      lVar1 = lVar7;
      puVar5 = &uStack_1f0;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    _objc_release(unaff_x22);
    unaff_x21 = 0;
  }
  lVar1 = lVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_1085cbde4;
  lStack_220 = unaff_x22;
  uStack_218 = unaff_x21;
  lStack_210 = lVar7;
  lStack_208 = param_1;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_250 = 0xc2000000;
  uStack_248 = 0x1085cbe9c;
  puStack_240 = &UNK_110a59cb0;
  lStack_238 = lVar1;
  puStack_230 = (undefined1 *)puVar5;
  puStack_228 = puVar6;
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  ppuVar4 = &puStack_258;
  _objc_retainBlock(ppuVar4);
  _objc_release(puStack_228);
  _objc_release(puStack_230);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 1085cbde4; end: 1085cbf7f; -[SCTGroupChatPresenceController _reorderingAnimationforParticipants:withPreviousOrder:] */

void FUN_1085cbde4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1085cbe9c;
  puStack_50 = &UNK_110a59cb0;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1085cbf80; end: 1085cc09b;  */

void FUN_1085cbf80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085cc09c; end: 1085cc0af;  */

void FUN_1085cc09c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085cc0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1085cc0b0; end: 1085cc29f; -[SCTGroupChatPresenceController _getLeftOffsetForParticipants:withPreviousOrder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085cc0b0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  puVar9 = &uStack_140;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  lVar4 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0(puVar1,param_2,lVar4);
  dVar14 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_4);
  lVar4 = param_4;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar12 = *plStack_130;
    dVar15 = 7.0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(param_4);
        }
        uVar11 = *(undefined8 *)(lStack_138 + lVar13 * 8);
        lVar2 = param_3;
        func_0x00010bf4b900(param_3,param_2,uVar11);
        if ((int)lVar2 != 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)dVar15);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar11;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1,param_2,puVar3,uVar5);
          _objc_release(uVar5);
          _objc_release(puVar3);
        }
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0();
        _CGRectGetWidth();
        dVar14 = dVar14 + 6.0;
        dVar15 = dVar14 + (double)(long)dVar15;
        _objc_release(uVar11);
        lVar13 = lVar13 + 1;
      } while (lVar4 != lVar13);
      lVar4 = param_4;
      puVar9 = &uStack_140;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain(puVar9);
    lVar12 = (long)_DAT_112776f70;
    lVar4 = *(long *)(param_3 + lVar12);
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      uVar10 = 0;
      dVar15 = 7.0;
      do {
        uVar5 = *(undefined8 *)(param_3 + lVar12);
        func_0x00010c0dfd40(uVar5,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_3 + lVar12);
        func_0x00010c0dfd40(uVar6,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar6;
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        puVar7 = (undefined1 *)puVar9;
        func_0x00010bf4b900(puVar9,param_2,uVar5);
        if (((ulong)puVar7 & 1) != 0) {
          func_0x00010c280440(uVar11);
          lVar4 = param_3;
          func_0x00010bf4dce0(param_3);
          _objc_retainAutoreleasedReturnValue();
          dVar14 = (double)(long)dVar15;
          func_0x00010c0678c0(dVar14,uVar11,param_2,lVar4);
          _objc_release(lVar4);
        }
        func_0x00010bfb68e0(uVar11);
        _CGRectGetWidth();
        dVar14 = dVar14 + 6.0;
        dVar15 = (double)(long)dVar15 + dVar14;
        _objc_release(uVar11);
        _objc_release(uVar5);
        uVar10 = uVar10 + 1;
        uVar8 = *(ulong *)(param_3 + lVar12);
        func_0x00010bf529e0();
      } while (uVar10 < uVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar9);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085cc2a0; end: 1085cc3df; -[SCTGroupChatPresenceController _setupPillConstraintsToFinalOrder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085cc2a0(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  
  _objc_retain(param_4);
  lVar7 = (long)_DAT_112776f70;
  lVar1 = *(long *)(param_2 + lVar7);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar6 = 0;
    dVar8 = 7.0;
    do {
      uVar2 = *(undefined8 *)(param_2 + lVar7);
      func_0x00010c0dfd40(uVar2,param_3,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_2 + lVar7);
      func_0x00010c0dfd40(uVar3,param_3,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0fbcc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar5 = param_4;
      func_0x00010bf4b900(param_4,param_3,uVar2);
      if ((uVar5 & 1) != 0) {
        func_0x00010c280440(uVar4);
        lVar1 = param_2;
        func_0x00010bf4dce0(param_2);
        _objc_retainAutoreleasedReturnValue();
        param_1 = (double)(long)dVar8;
        func_0x00010c0678c0(param_1,uVar4,param_3,lVar1);
        _objc_release(lVar1);
      }
      func_0x00010bfb68e0(uVar4);
      _CGRectGetWidth();
      param_1 = param_1 + 6.0;
      dVar8 = (double)(long)dVar8 + param_1;
      _objc_release(uVar4);
      _objc_release(uVar2);
      uVar6 = uVar6 + 1;
      uVar5 = *(ulong *)(param_2 + lVar7);
      func_0x00010bf529e0();
    } while (uVar6 < uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1085cc3e0; end: 1085cc787; -[SCTGroupChatPresenceController _setupPillConstraintsForSlideDownAnimation:withPreviousOrder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085cc3e0(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
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
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010be200e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar15 = (long)_DAT_112776f70;
  lVar16 = *(long *)((long)param_1 + lVar15);
  _objc_retain(lVar16);
  puVar3 = &uStack_130;
  lVar2 = lVar16;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar21 = *plStack_120;
    do {
      lVar22 = 0;
      do {
        if (*plStack_120 != lVar21) {
          _objc_enumerationMutation(lVar16);
        }
        uVar19 = *(undefined8 *)(lStack_128 + lVar22 * 8);
        uVar5 = uVar19;
        func_0x00010c0fbcc0(uVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c280440();
        _objc_release(uVar5);
        uVar5 = uVar19;
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c280460();
        _objc_release(uVar5);
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c280400();
        _objc_release(uVar19);
        lVar22 = lVar22 + 1;
      } while (lVar2 != lVar22);
      puVar3 = &uStack_130;
      lVar2 = lVar16;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar16);
  lVar2 = *(long *)((long)param_1 + lVar15);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar18 = 0;
    puVar17 = (undefined8 *)0x0;
    do {
      puVar3 = *(undefined8 **)((long)param_1 + lVar15);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0fbcc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      uVar5 = *(undefined8 *)((long)param_1 + lVar15);
      func_0x00010c0dfd40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_3;
      func_0x00010bf4b900();
      _objc_release(uVar5);
      if ((int)uVar9 == 0) {
        if (puVar17 == (undefined8 *)0x0) {
          puVar3 = param_1;
          func_0x00010bf4dce0(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = 0x401c000000000000;
        }
        else {
          puVar3 = puVar17;
          func_0x00010c0bc000(puVar17);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = 0x4018000000000000;
        }
        func_0x00010c0678c0(uVar5,puVar4);
        _objc_release(puVar3);
        puVar8 = param_1;
        func_0x00010bf4dce0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar8;
        func_0x00010c067820(puVar4);
        _objc_release(puVar8);
        _objc_retain(puVar4);
        puVar8 = puVar4;
      }
      else {
        puVar3 = param_1;
        func_0x00010bf4dce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        func_0x00010c0bbea0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067a60(puVar4);
        _objc_release(puVar8);
        _objc_release(puVar3);
        uVar19 = *(undefined8 *)((long)param_1 + lVar15);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar19;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar19);
        puVar8 = param_1;
        func_0x00010bf4dce0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c067ec0(puVar6);
        puVar3 = puVar8;
        func_0x00010c0678c0((double)(int)puVar7,puVar4);
        _objc_release(puVar8);
        puVar8 = puVar17;
        puVar17 = puVar6;
      }
      _objc_release(puVar17);
      _objc_release(puVar4);
      uVar18 = uVar18 + 1;
      uVar9 = *(ulong *)((long)param_1 + lVar15);
      func_0x00010bf529e0();
      puVar17 = puVar8;
    } while (uVar18 < uVar9);
    _objc_release(puVar8);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  lVar21 = *(long *)(param_3 + (long)_DAT_112776f70);
  _objc_retain(lVar21);
  lVar15 = lVar21;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (lVar15 == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = 0;
    do {
      lVar22 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar21);
        }
        uVar20 = *(ulong *)(lVar22 * 8);
        uVar9 = uVar20;
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar3;
        func_0x00010bf4b900();
        uVar14 = param_3;
        if ((int)puVar1 == 0) {
          uVar10 = uVar9;
          func_0x00010c0bc020();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = param_3;
          func_0x00010bf4dce0(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar11;
          func_0x00010c0bbea0();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar10;
          func_0x00010c071ae0();
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(uVar10);
          if ((uVar13 & 1) == 0) {
            func_0x00010c280440(uVar9);
            if (uVar18 == 0) {
              func_0x00010bf4dce0(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0678c0(0x401c000000000000,uVar9);
            }
            else {
              uVar14 = uVar18;
              func_0x00010c0bc000(uVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0678c0(0x4018000000000000,uVar9);
            }
            goto LAB_1085cc9d4;
          }
        }
        else {
          func_0x00010c280460(uVar9);
          func_0x00010c280400(uVar9);
          func_0x00010c280440(uVar9);
          if (uVar18 == 0) {
            uVar10 = param_3;
            func_0x00010bf4dce0(param_3);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = 0x401c000000000000;
          }
          else {
            uVar10 = uVar18;
            func_0x00010c0bc000(uVar18);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = 0x4018000000000000;
          }
          func_0x00010c0678c0(uVar5,uVar9);
          _objc_release(uVar10);
          func_0x00010bf4dce0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067820(uVar9);
LAB_1085cc9d4:
          _objc_release(uVar14);
          func_0x00010c0fbcc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar18);
          uVar18 = uVar20;
        }
        _objc_release(uVar9);
        lVar22 = lVar22 + 1;
      } while (lVar15 != lVar22);
      lVar15 = lVar21;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
  }
  _objc_release(lVar21);
  _objc_release(uVar18);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
    ___stack_chk_fail();
    func_0x00010beda960();
                    /* WARNING: Could not recover jumptable at 0x00010bedf010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s__updateScrollViewContentSize_1125955a8);
    return;
  }
  return;
}



/* Entry: 1085cc788; end: 1085cca87; -[SCTGroupChatPresenceController _removeVerticalPillConstraintsForParticipants:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085cc788(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar10 = *(long *)(param_1 + (long)_DAT_112776f70);
  _objc_retain(lVar10);
  lVar2 = lVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar10);
        }
        uVar13 = *(ulong *)(lVar11 * 8);
        uVar3 = uVar13;
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = param_3;
        func_0x00010bf4b900();
        uVar8 = param_1;
        if ((int)uVar14 == 0) {
          uVar4 = uVar3;
          func_0x00010c0bc020();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_1;
          func_0x00010bf4dce0(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c0bbea0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar4;
          func_0x00010c071ae0();
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          if ((uVar7 & 1) == 0) {
            func_0x00010c280440(uVar3);
            if (uVar12 == 0) {
              func_0x00010bf4dce0(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0678c0(0x401c000000000000,uVar3);
            }
            else {
              uVar8 = uVar12;
              func_0x00010c0bc000(uVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0678c0(0x4018000000000000,uVar3);
            }
            goto LAB_1085cc9d4;
          }
        }
        else {
          func_0x00010c280460(uVar3);
          func_0x00010c280400(uVar3);
          func_0x00010c280440(uVar3);
          if (uVar12 == 0) {
            uVar4 = param_1;
            func_0x00010bf4dce0(param_1);
            _objc_retainAutoreleasedReturnValue();
            uVar14 = 0x401c000000000000;
          }
          else {
            uVar4 = uVar12;
            func_0x00010c0bc000(uVar12);
            _objc_retainAutoreleasedReturnValue();
            uVar14 = 0x4018000000000000;
          }
          func_0x00010c0678c0(uVar14,uVar3);
          _objc_release(uVar4);
          func_0x00010bf4dce0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067820(uVar3);
LAB_1085cc9d4:
          _objc_release(uVar8);
          func_0x00010c0fbcc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          uVar12 = uVar13;
        }
        _objc_release(uVar3);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar10;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar10);
  _objc_release(uVar12);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    func_0x00010beda960();
                    /* WARNING: Could not recover jumptable at 0x00010bedf010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__updateScrollViewContentSize_1125955a8);
    return;
  }
  return;
}



/* Entry: 1085cca88; end: 1085ccaab; -[SCTGroupChatPresenceController _reorderPills] */

void FUN_1085cca88(undefined8 param_1)

{
  func_0x00010beda960();
                    /* WARNING: Could not recover jumptable at 0x00010bedf010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateScrollViewContentSize_1125955a8);
  return;
}



/* Entry: 1085ccaac; end: 1085ccbef; -[SCTGroupChatPresenceController _updateScrollViewContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085ccaac(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  uVar1 = *(undefined8 *)(param_5 + _DAT_112776f70);
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fbcc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bfb68e0(uVar2);
  _CGRectGetMaxX();
  uVar1 = 0x401c000000000000;
  dVar6 = param_1 + 7.0;
  lVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar5 = param_1;
  _objc_release(lVar3);
  lVar3 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bc85160();
  lVar4 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar5,uVar1,param_3,param_4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c152980(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1827c0(dVar6,param_1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1085ccbf0; end: 1085ccc4f; -[SCTGroupChatPresenceController _updateBottomConstraintOfPill:] */

void FUN_1085ccbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b6f80(0,param_3,param_2,param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085ccc50; end: 1085ccdc3; +[SCTGroupChatPresenceController _pillLabelsForParticipantStates:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085ccc50(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      uVar4 = uVar7;
      func_0x00010c2805c0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2923e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar7);
      _objc_release(uVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + _DAT_112776f7c,0);
  _objc_storeStrong(param_3 + _DAT_112776f84,0);
  _objc_storeStrong(param_3 + _DAT_112776f78,0);
  _objc_storeStrong(param_3 + _DAT_112776f74,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + _DAT_112776f70,0);
  return;
}



/* Entry: 1085ccdc4; end: 1085cce33; -[SCTGroupChatPresenceController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085ccdc4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112776f7c,0);
  _objc_storeStrong(param_1 + _DAT_112776f84,0);
  _objc_storeStrong(param_1 + _DAT_112776f78,0);
  _objc_storeStrong(param_1 + _DAT_112776f74,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776f70,0);
  return;
}



/* Entry: 1085cce34; end: 1085ccebf; -[SCTGroupChatPresencePill usernameLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085cce34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112776f8c;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126da510;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1085ccec0; end: 1085ccf4b; -[SCTGroupChatPresencePill bitmojiContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085ccec0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112776f90;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1085ccf4c; end: 1085cd06b; -[SCTGroupChatPresencePill _createIconImageViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085ccf4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar5 = (long)_DAT_112776f94;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar4);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,1);
    lVar2 = param_1;
    func_0x00010c2945e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c26b920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar5),param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c141e00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1085cd06c;
    puStack_40 = &UNK_1108471b0;
    lStack_38 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5),param_2,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1085cd06c; end: 1085cd1b3;  */

void FUN_1085cd06c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2945e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c141e00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4024000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085cd1b4; end: 1085cd267; -[SCTGroupChatPresencePill _updateIconImageForState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085cd1b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010bdee900(param_1);
  lVar1 = param_3;
  func_0x00010c075460();
  if ((int)lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c0fe180();
    if (lVar1 != 2) goto LAB_1085cd254;
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110ee4fb8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c23bb80(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,0x11d,0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112776f94),param_2,puVar2);
  _objc_release(puVar2);
LAB_1085cd254:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085cd268; end: 1085cd387; -[SCTGroupChatPresencePill needsAvatarUpdate] */

undefined1 * FUN_1085cd268(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar8 = &uStack_80;
  puStack_38 = PTR_PTR_1126fcf70;
  plVar4 = &lStack_40;
  lStack_40 = param_1;
  _objc_msgSendSuper2(plVar4,PTR_s_needsAvatarUpdate_1126136b8);
  if (((ulong)plVar4 & 1) != 0) {
    return (undefined1 *)0x1;
  }
  func_0x00010c26f360(param_1);
  bVar2 = false;
  bVar3 = false;
  bVar1 = NAN((double)CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))));
  if (!bVar1) {
    bVar2 = (double)CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0))))))) < 1.5;
    bVar3 = (double)CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0))))))) == 1.5;
  }
  if (!bVar3 && bVar2 == bVar1) {
    lVar5 = param_1;
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126da4c0;
    if (lVar5 == 0) {
      return (undefined1 *)0x0;
    }
    lVar6 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06e760();
    _objc_release(lVar6);
    _objc_release(lVar5);
    if ((int)puVar7 != 0) {
      func_0x00010bf1c640();
      _objc_retainAutoreleasedReturnValue();
      if (param_1 == 0) {
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        func_0x00010c252440(&uStack_80,param_1);
      }
      func_0x0001085d21a8(&uStack_80,&UNK_10df35ec8);
      _objc_release(param_1);
      return (undefined1 *)puVar8;
    }
  }
  return (undefined1 *)0x0;
}



/* Entry: 1085cd388; end: 1085cd38b; -[SCTGroupChatPresencePill updateLabelText] */

void FUN_1085cd388(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be943b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetUsernameLabelTextIfNeeded_112582a88);
  return;
}



/* Entry: 1085cd38c; end: 1085cd477; -[SCTGroupChatPresencePill setHorizonalStretch:] */

void FUN_1085cd38c(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fcf70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setHorizontalStretch__112647e98);
  func_0x00010c141e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc060();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 1085cd478; end: 1085cd537;  */

void FUN_1085cd478(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085cd538; end: 1085cd78b; -[SCTGroupChatPresencePill animateAvatarUpdateWithCompletion:] */

void FUN_1085cd538(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  ppuVar3 = &puStack_110;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_1;
  func_0x00010beb4500();
  puVar5 = PTR_PTR_1126da4c0;
  if ((int)lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06e760();
    _objc_release(lVar2);
    if ((int)puVar5 == 0) goto LAB_1085cd744;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    uStack_100 = 0x1085cd8b0;
    puStack_f8 = &UNK_110841f50;
    lStack_f0 = param_1;
  }
  else {
    func_0x00010be4cac0(param_1);
    lVar2 = param_1;
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar2 == 0) goto LAB_1085cd744;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1085cd78c;
    puStack_80 = &UNK_110841f50;
    ppuVar3 = &puStack_98;
    lStack_78 = param_1;
    _objc_retainBlock(ppuVar3);
    func_0x00010befa120(puVar1);
    _objc_release(ppuVar3);
    lVar2 = param_1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c27e300();
    if (lVar4 == 1) {
      _objc_release(lVar2);
    }
    else {
      lVar4 = param_1;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010c27e300();
      _objc_release(lVar4);
      _objc_release(lVar2);
      if (lVar6 != 2) goto LAB_1085cd744;
    }
    puStack_c0 = puVar5;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1085cd7ec;
    puStack_a8 = &UNK_110841f50;
    ppuVar3 = &puStack_c0;
    lStack_a0 = param_1;
    _objc_retainBlock(ppuVar3);
    func_0x00010befa120(puVar1);
    _objc_release(ppuVar3);
    func_0x00010bdf5160(param_1);
    puStack_e8 = puVar5;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1085cd840;
    puStack_d0 = &UNK_110841f50;
    ppuVar3 = &puStack_e8;
    lStack_c8 = param_1;
  }
  _objc_retainBlock(ppuVar3);
  func_0x00010befa120(puVar1);
  _objc_release(ppuVar3);
LAB_1085cd744:
  FUN_108617acc(puVar1,PTR___dispatch_main_q_11034be20,param_3);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1085cd78c; end: 1085cd7eb;  */

void FUN_1085cd78c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = uVar2;
  func_0x00010c252440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02ca0(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085cd7ec; end: 1085cd83f;  */

void FUN_1085cd7ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c2945e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf03220();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085cd840; end: 1085cd9ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085cd840(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(lVar1 + _DAT_112776f98);
  _objc_retain(param_2);
  func_0x00010c252440(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27e300();
  func_0x00010bf03220(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085cd9ac; end: 1085cdaf7; -[SCTGroupChatPresencePill preparePresenceAnimationWithCompletion:] */

void FUN_1085cd9ac(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010beb4500();
  if ((int)uVar1 != 0) {
    func_0x00010be4cac0(param_2);
  }
  uVar1 = param_2;
  func_0x00010c252440(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c252480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be73de0(param_2,param_3,uVar2);
  dVar4 = param_1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bfb68e0(param_2);
  _CGRectGetWidth();
  if (param_1 == dVar4) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    puVar3 = PTR_PTR_1126cfd08;
    _objc_opt_new(PTR_PTR_1126cfd08);
    func_0x00010bfb68e0(param_2);
    _CGRectGetWidth();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1085cdaf8;
    puStack_50 = &UNK_110846710;
    uStack_48 = param_2;
    func_0x00010bef8520(0x3fd3333340000000,dVar4,param_1,puVar3,param_3,0,&puStack_68);
    func_0x00010bf42780(puVar3,param_3,param_4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1085cdaf8; end: 1085cdb53;  */

void FUN_1085cdaf8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_1085cdb54;
  puStack_20 = &UNK_11092ad90;
  uStack_18 = param_1;
  func_0x00010c0bc060(*(undefined8 *)(param_2 + 0x20),param_3,&puStack_38);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1085cdb54; end: 1085cdbe7;  */

void FUN_1085cdb54(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_1085cdbe8();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085cdbe8; end: 1085cdc23;  */

void FUN_1085cdbe8(void)

{
  undefined8 in_stack_00000000;
  
  func_0x00010c0df720(in_stack_00000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085cdc24; end: 1085cdf33; -[SCTGroupChatPresencePill _updateUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085cdc24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_148 [64];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126da4c0;
  lVar4 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2339a0(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1085cdf34;
  puStack_70 = &UNK_1108471b0;
  lStack_68 = param_1;
  func_0x00010c0bc060(param_1,param_2,&puStack_88);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c141e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c141e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar2;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1085ce05c;
  puStack_98 = &UNK_1108471b0;
  lStack_90 = param_1;
  func_0x00010c0bbfe0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c2945e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c2945e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar2;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x1085ce1f0;
  puStack_c8 = &UNK_11086b060;
  uStack_b8 = SUB81(puVar1,0);
  lStack_c0 = param_1;
  func_0x00010c0bbfe0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bf1b180(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar2;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x1085ce3fc;
  puStack_f0 = &UNK_1108471b0;
  lStack_e8 = param_1;
  func_0x00010c0bbfe0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126da4c0;
  if (lVar4 != 0) {
    lVar4 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06d480(puVar2,param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    if ((int)puVar2 == 0) {
      uVar5 = 0;
    }
    else {
      lVar3 = param_1;
      func_0x00010c252440(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdd4aa0(auStack_148,param_1,param_2,lVar3);
      func_0x00010c28b2a0(lVar4,param_2,auStack_148);
      _objc_release(lVar3);
      _objc_release(lVar4);
      lVar4 = param_1;
      func_0x00010bf1c640(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0x3ff0000000000000;
    }
    func_0x00010c1677c0(uVar5);
    _objc_release(lVar4);
  }
  if ((int)puVar1 == 0) {
    lVar4 = *(long *)(param_1 + _DAT_112776f94);
    if (lVar4 == 0) {
      return;
    }
    uVar5 = 1;
  }
  else {
    lVar4 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed95c0(param_1,param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = (long)_DAT_112776f94;
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar4));
    lVar4 = *(long *)(param_1 + lVar4);
    uVar5 = 0;
  }
  func_0x00010c1a7f60(lVar4,param_2,uVar5);
  return;
}



/* Entry: 1085cdf34; end: 1085ce51b;  */

void FUN_1085cdf34(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be73dc0(uVar3);
  FUN_1085cdbe8();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be73ca0(uVar3);
  FUN_1085cdbe8();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085ce51c; end: 1085ce823; -[SCTGroupChatPresencePill _animateToState:completion:] */

void FUN_1085ce51c(undefined **param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  ppuVar3 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c27e300();
  ppuVar5 = param_3;
  func_0x00010c27e300();
  _objc_release(ppuVar3);
  if (ppuVar4 == ppuVar5) {
LAB_1085ce5a0:
    bVar1 = false;
  }
  else {
    ppuVar3 = param_1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c081ba0();
    if (((ulong)ppuVar4 & 1) == 0) {
      _objc_release(ppuVar3);
    }
    else {
      ppuVar4 = param_3;
      func_0x00010c081ba0();
      _objc_release(ppuVar3);
      if (((ulong)ppuVar4 & 1) == 0) {
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        pcStack_80 = FUN_1085ce824;
        puStack_78 = &UNK_1109101a8;
        ppuStack_70 = param_1;
        _objc_retain(param_3);
        ppuVar3 = &puStack_90;
        ppuStack_68 = param_3;
        _objc_retainBlock(ppuVar3);
        func_0x00010befa120(puVar2);
        _objc_release(ppuVar3);
        _objc_release(ppuStack_68);
        goto LAB_1085ce5a0;
      }
    }
    bVar1 = true;
  }
  ppuVar3 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c159240();
  ppuVar5 = param_3;
  func_0x00010c159240();
  _objc_release(ppuVar3);
  puVar6 = PTR_PTR_1126da4c0;
  if ((int)ppuVar4 == (int)ppuVar5) {
    ppuVar3 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09b00();
    _objc_release(ppuVar3);
    if (((ulong)puVar6 & 1) != 0) goto LAB_1085ce778;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x1085ce840;
    puStack_d0 = &UNK_1109101a8;
    ppuStack_c8 = param_1;
    _objc_retain(param_3);
    ppuVar3 = &puStack_e8;
    ppuStack_c0 = param_3;
    _objc_retainBlock(ppuVar3);
    func_0x00010befa120(puVar2);
    _objc_release(ppuVar3);
    ppuVar3 = ppuStack_c0;
  }
  else {
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x1085ce834;
    puStack_a0 = &UNK_110841f50;
    ppuVar3 = &puStack_b8;
    ppuStack_98 = param_1;
    _objc_retainBlock(ppuVar3);
    func_0x00010befa120(puVar2);
  }
  _objc_release(ppuVar3);
LAB_1085ce778:
  if (bVar1) {
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    uStack_108 = 0x1085ce850;
    puStack_100 = &UNK_1109101a8;
    ppuStack_f8 = param_1;
    _objc_retain(param_3);
    ppuVar3 = &puStack_118;
    ppuStack_f0 = param_3;
    _objc_retainBlock(ppuVar3);
    func_0x00010befa120(puVar2);
    _objc_release(ppuVar3);
    _objc_release(ppuStack_f0);
  }
  FUN_1086179c0(puVar2,param_4);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085ce824; end: 1085ce85f;  */

void FUN_1085ce824(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcb250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__animateToTypingState_completion_112550630,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 1085ce860; end: 1085ceaef; -[SCTGroupChatPresencePill _animateSelectionWithCompletion:] */

void FUN_1085ce860(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [64];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c159240();
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010c252440(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2524c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126cfd08;
  _objc_opt_new(PTR_PTR_1126cfd08);
  func_0x00010be73d60(param_1,param_2,puVar3);
  func_0x00010befb500(puVar1,param_2,param_1);
  puVar4 = param_1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined *)0x0) {
    puVar4 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      func_0x00010c252440(&uStack_c0,puVar5);
    }
    func_0x00010bdd4aa0(auStack_100,param_1,param_2,puVar3);
    func_0x00010bef71c0(0,0x3fc99999a0000000,puVar1,param_2,puVar4,0,&uStack_c0,auStack_100);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  puVar4 = param_1;
  func_0x00010c141e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf1fb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  puVar4 = puVar7;
  puVar5 = puVar6;
  if ((int)puVar2 == 0) {
    puVar4 = puVar6;
    puVar5 = puVar7;
  }
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_1085ceaf0;
  puStack_110 = &UNK_11085bbb8;
  puStack_108 = param_1;
  func_0x00010bef77c0(0x3fc99999a0000000,puVar1,param_2,1,puVar5,puVar4,&puStack_128);
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_1085ceb40;
  puStack_138 = &UNK_11085bbb8;
  puStack_130 = param_1;
  func_0x00010bef77c0(0x3fd3333340000000,puVar1,param_2,1,puVar4,puVar5,&puStack_150);
  func_0x00010bf42780(puVar1,param_2,param_3);
  _objc_release(param_3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(puVar3);
  return;
}



/* Entry: 1085ceaf0; end: 1085ceb3f;  */

void FUN_1085ceaf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c141e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085ceb40; end: 1085cebb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085ceb40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c2945e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar1);
  func_0x00010c216160(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112776f94));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085cebb4; end: 1085ceea7; -[SCTGroupChatPresencePill _animatePresenceToState:completion:] */

void FUN_1085cebb4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  double dVar9;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  double adStack_e0 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  
  ppuVar8 = &puStack_110;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1085ceea8;
  puStack_88 = &UNK_1109101a8;
  lStack_80 = param_1;
  _objc_retain(param_3);
  ppuVar4 = &puStack_a0;
  lStack_78 = param_3;
  _objc_retainBlock(ppuVar4);
  func_0x00010befa120(puVar3);
  _objc_release(ppuVar4);
  puVar6 = PTR_PTR_1126da4c0;
  lVar5 = param_1;
  func_0x00010c252440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd4940();
  if (((ulong)puVar6 & 1) == 0) {
    _objc_release(lVar5);
LAB_1085cecf8:
    puVar6 = PTR_PTR_1126da4c0;
    lVar5 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdb5e0();
    if ((int)puVar6 == 0) {
      lVar7 = param_1;
      func_0x00010bf1c640();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      if (lVar7 == 0) goto LAB_1085cee58;
      puStack_110 = puVar1;
      uStack_108 = 0xc2000000;
      uStack_100 = 0x1085ceeb8;
      puStack_f8 = &UNK_1109101a8;
      lStack_f0 = param_1;
      _objc_retain(param_3);
      lStack_e8 = param_3;
      _objc_retainBlock(&puStack_110);
      func_0x00010befa120(puVar3);
      _objc_release(ppuVar8);
      lVar5 = lStack_e8;
    }
  }
  else {
    lVar7 = param_1;
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    if (lVar7 == 0) goto LAB_1085cecf8;
    lVar5 = param_1;
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      _objc_release();
LAB_1085ceda0:
      lVar5 = param_1;
      func_0x00010bf1c640();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        adStack_e0[5] = 0.0;
        adStack_e0[4] = 0.0;
        adStack_e0[7] = 0.0;
        adStack_e0[6] = 0.0;
        adStack_e0[1] = 0.0;
        adStack_e0[0] = 0.0;
        adStack_e0[3] = 0.0;
        adStack_e0[2] = 0.0;
      }
      else {
        func_0x00010c252440(adStack_e0,lVar5);
      }
      dVar9 = adStack_e0[0];
      _objc_release(lVar5);
    }
    else {
      func_0x00010c252440(adStack_e0);
      dVar2 = adStack_e0[0];
      _objc_release(lVar5);
      dVar9 = 1.0;
      if (dVar2 < 1.0) goto LAB_1085ceda0;
    }
    lVar5 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(lVar5);
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    adStack_e0[2] = 0.0;
    adStack_e0[1] = 1.0;
    adStack_e0[4] = 0.0;
    adStack_e0[3] = 0.0;
    adStack_e0[6] = 0.0;
    adStack_e0[5] = 1.0;
    adStack_e0[7] = 0.0;
    adStack_e0[0] = dVar9;
    func_0x00010c28b2a0();
    lVar5 = param_1;
  }
  _objc_release(lVar5);
LAB_1085cee58:
  FUN_1086179c0(puVar3,param_4);
  _objc_release(lStack_78);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085ceea8; end: 1085ceec7;  */

void FUN_1085ceea8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcaf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__animatePillUpdateToState_comple_112550580,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 1085ceec8; end: 1085cf273; -[SCTGroupChatPresencePill _animatePillUpdateToState:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085ceec8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126cfd08;
  _objc_opt_new(PTR_PTR_1126cfd08);
  func_0x00010c153000(param_2);
  lVar4 = param_2;
  dVar11 = param_1;
  func_0x00010be73de0(param_2,param_3,param_4);
  FUN_1086152d4(param_1,dVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152fe0(param_2);
  lVar5 = param_2;
  dVar11 = param_1;
  func_0x00010be73cc0(param_2,param_3,param_4);
  FUN_1086152d4(param_1,dVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126da4c0;
  func_0x00010c07aac0(PTR_PTR_1126da4c0,param_3,param_4);
  dVar11 = 0.0;
  if (((ulong)puVar6 & 1) == 0) {
    func_0x00010bfb68e0(param_2);
    _CGRectGetWidth();
    dVar9 = param_1;
    func_0x00010c088160(lVar4);
    if (dVar9 < param_1) {
      dVar11 = 0.15000000596046448;
    }
  }
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1085cf274;
  puStack_c8 = &UNK_110a59bf0;
  lStack_c0 = param_2;
  _objc_retain(lVar4);
  lStack_b8 = lVar4;
  _objc_retain(lVar5);
  lStack_b0 = lVar5;
  func_0x00010bef8560(dVar11,dVar11 + 0.30000001192092896,0,0x3ff0000000000000,puVar3,param_3,0,
                      &puStack_e0);
  puVar6 = PTR_PTR_1126da4c0;
  lVar8 = param_2;
  func_0x00010c252440(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd7d00(puVar6,param_3,lVar8,param_4);
  _objc_release(lVar8);
  puVar7 = PTR_PTR_1126da4c0;
  if ((int)puVar6 != 0) {
    lVar8 = param_2;
    func_0x00010c252440(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2339a0(puVar7,param_3,lVar8);
    _objc_release(lVar8);
    puVar6 = PTR_PTR_1126da4c0;
    func_0x00010c2339a0(PTR_PTR_1126da4c0,param_3,param_4);
    iVar2 = (int)puVar6;
    uVar10 = 0x3ff0000000000000;
    if (iVar2 == 0) {
      uVar10 = 0;
    }
    uVar13 = 0x402e000000000000;
    if (iVar2 == 0) {
      uVar13 = 0;
    }
    bVar1 = (int)puVar7 == 0;
    uVar12 = 0x3ff0000000000000;
    if (bVar1) {
      uVar12 = 0;
    }
    uVar14 = 0x402e000000000000;
    if (bVar1) {
      uVar14 = 0;
    }
    FUN_1086152d4(uVar12,uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    FUN_1086152d4(uVar14,uVar13);
    _objc_retainAutoreleasedReturnValue();
    if (iVar2 != 0) {
      func_0x00010bed95c0(param_2,param_3,param_4);
      lVar8 = (long)_DAT_112776f94;
      func_0x00010c1677c0(uVar12,*(undefined8 *)(param_2 + lVar8));
      func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar8),param_3,0);
    }
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_1085cf484;
    puStack_100 = &UNK_110a59bf0;
    lStack_f8 = param_2;
    puStack_f0 = puVar7;
    puStack_e8 = puVar6;
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    func_0x00010bef8560(dVar11,dVar11 + 0.30000001192092896,0,0x3ff0000000000000,puVar3,param_3,0,
                        &puStack_118);
    _objc_release(puStack_e8);
    _objc_release(puStack_f0);
    _objc_release(puVar6);
    _objc_release(puVar7);
  }
  puVar6 = PTR_PTR_1126da4c0;
  lVar8 = param_2;
  func_0x00010c252440(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfda880(puVar6,param_3,lVar8,param_4);
  _objc_release(lVar8);
  if ((int)puVar6 != 0) {
    func_0x00010befab40(0x3fd3333340000000,puVar3,param_3,param_2,
                        *(undefined8 *)(param_2 + _DAT_112776f94));
  }
  func_0x00010bf42780(puVar3,param_3,param_5);
  _objc_release(lStack_b0);
  _objc_release(lStack_b8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1085cf274; end: 1085cf31b;  */

void FUN_1085cf274(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1085cf31c;
  puStack_60 = &UNK_110909c90;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uStack_58 = uVar2;
  uStack_48 = param_1;
  _objc_retain(uVar3);
  uStack_50 = uVar3;
  func_0x00010c0bc060(uVar1,param_3,&puStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_58);
  return;
}



/* Entry: 1085cf31c; end: 1085cf483;  */

void FUN_1085cf31c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c117720();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (**(code **)(lVar3 + 0x10))();
  FUN_1085cdbe8();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c117720();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (**(code **)(lVar3 + 0x10))();
  FUN_1085cdbe8();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085cf484; end: 1085cf56f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085cf484(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c2945e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1085cf570;
  puStack_50 = &UNK_110909c90;
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  uStack_48 = uVar3;
  uStack_40 = uVar4;
  uStack_38 = param_1;
  func_0x00010c0bc060(uVar1,param_3,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_2 + 0x30);
  func_0x00010c117720();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(param_1);
  func_0x00010c1677c0(*(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_112776f94));
  _objc_release(lVar2);
  _objc_release(uStack_40);
  return;
}



/* Entry: 1085cf570; end: 1085cf63f;  */

void FUN_1085cf570(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x28);
  func_0x00010c117720();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(*(undefined8 *)(param_1 + 0x30));
  (**(code **)(lVar3 + 0x10))(lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085cf640; end: 1085cf853; -[SCTGroupChatPresencePill _animateToTypingState:completion:] */

void FUN_1085cf640(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_c0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010c27e300();
  puVar2 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c27e300();
  _objc_release(puVar2);
  if (puVar3 == puVar1) {
LAB_1085cf6b4:
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    puVar2 = param_1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c081ba0();
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = param_3;
      func_0x00010c081ba0();
      _objc_release(puVar2);
      if (((ulong)puVar3 & 1) == 0) goto LAB_1085cf6b4;
    }
    else {
      _objc_release(puVar2);
    }
    puVar2 = param_1;
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined *)0x0) {
      func_0x00010c2945e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf03220();
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_1085cf854;
      puStack_78 = &UNK_1109101a8;
      puStack_70 = param_1;
      _objc_retain(param_3);
      ppuVar4 = &puStack_90;
      puStack_68 = param_3;
      _objc_retainBlock(ppuVar4);
      func_0x00010befa120(puVar3);
      _objc_release(ppuVar4);
      func_0x00010bdf5160(param_1);
      puStack_c0 = puVar2;
      uStack_b8 = 0xc2000000;
      uStack_b0 = 0x1085cf864;
      puStack_a8 = &UNK_110a59b60;
      puStack_a0 = param_1;
      puStack_98 = puVar1;
      _objc_retainBlock(&puStack_c0);
      func_0x00010befa120(puVar3);
      _objc_release(ppuVar5);
      FUN_108617acc(puVar3,PTR___dispatch_main_q_11034be20,param_4);
      _objc_release(puStack_68);
      param_1 = puVar3;
    }
    _objc_release(param_1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085cf854; end: 1085cf87b;  */

void FUN_1085cf854(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdca970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__animateBitmojiToTypingState_com_1125503f8,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 1085cf87c; end: 1085cf9fb; -[SCTGroupChatPresencePill _didLoadAvatarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085cf87c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf1b180(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbfe0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (*(long *)(param_1 + _DAT_112776f98) != 0) {
      lVar1 = param_1;
      func_0x00010bf1c640(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0c5a0();
      _objc_release(lVar1);
    }
    lVar1 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28b2a0();
    _objc_release(lVar1);
    func_0x00010c08cdc0(param_1);
  }
  return;
}



/* Entry: 1085cf9fc; end: 1085cfb23;  */

void FUN_1085cf9fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1b180(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1b180(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085cfb24; end: 1085cfbb7; -[SCTGroupChatPresencePill _createTypingBubbleViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085cfb24(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112776f98;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126da500;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010bf1c640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085cfbb8; end: 1085cfbf3; -[SCTGroupChatPresencePill _updateColors] */

void FUN_1085cfbb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed5860(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085cfbf4; end: 1085cfd0f; -[SCTGroupChatPresencePill _updateTypingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085cfbf4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_1;
  func_0x00010c252440(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c27e300(lVar2);
    func_0x00010c2945e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ae00();
    _objc_release(param_1);
  }
  else {
    func_0x00010bf45e40(param_1,param_2,lVar2);
    _objc_release(lVar2);
    lVar1 = param_1;
    func_0x00010c2945e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ae00();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27e300();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010bdf5160(param_1);
    }
    lVar2 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c27e300();
    func_0x00010c21ae00(*(undefined8 *)(param_1 + _DAT_112776f98),param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1085cfd10; end: 1085cfe77; -[SCTGroupChatPresencePill _updateColorsForState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085cfd10(undefined *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126da4c0;
  func_0x00010c07aac0(PTR_PTR_1126da4c0,param_2,param_3);
  puVar2 = param_1;
  func_0x00010bde1f40(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c159240();
  puVar1 = puVar2;
  if ((int)uVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = param_1;
  func_0x00010c2945e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(puVar4);
  if ((int)uVar3 != 0) {
    _objc_release(puVar1);
  }
  uVar3 = param_3;
  func_0x00010c159240();
  puVar1 = puVar2;
  if ((uVar3 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = param_1;
  func_0x00010c141e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(puVar4);
  if ((uVar3 & 1) == 0) {
    _objc_release(puVar1);
  }
  puVar1 = param_1;
  func_0x00010c141e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(puVar1);
  func_0x00010c216160(*(undefined8 *)(param_1 + _DAT_112776f94),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085cfe78; end: 1085cff93; -[SCTGroupChatPresencePill _bitmojiStateForState:] */

void FUN_1085cfe78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c082a20();
  if ((int)lVar1 == 0) {
    lVar1 = param_4;
    func_0x00010c083620();
    if ((int)lVar1 == 0) {
      lVar1 = param_4;
      func_0x00010c075460();
      if ((int)lVar1 == 0) {
        lVar1 = param_4;
        func_0x00010c27e300();
        if (lVar1 == 1) {
          param_1[1] = 0x3fc999999999999a;
          *param_1 = 0x3ff0000000000000;
          param_1[3] = 0x3fe147ae147ae148;
          param_1[2] = 0;
          uVar2 = 0x3ff0000000000000;
          uVar3 = 0x3fe3333333333333;
        }
        else {
          lVar1 = param_4;
          func_0x00010c27e300();
          if (lVar1 == 2) {
            param_1[1] = 0x3fc999999999999a;
            *param_1 = 0x3feccccccccccccd;
            param_1[3] = 0;
            param_1[2] = 0;
            uVar2 = 0x3ff0000000000000;
            uVar3 = 0x3fe3333333333333;
          }
          else {
            lVar1 = param_4;
            func_0x00010c159240();
            if ((int)lVar1 == 0) {
              param_1[1] = 0x3fd999999999999a;
              *param_1 = 0x3fe8b4395810624e;
              param_1[3] = 0;
              param_1[2] = 0;
              uVar2 = 0x3ff0000000000000;
              uVar3 = 0x3fe3333333333333;
            }
            else {
              param_1[1] = 0x3fc851eb851eb852;
              *param_1 = 0x3ff0000000000000;
              param_1[3] = 0;
              param_1[2] = 0;
              uVar2 = 0x3ff199999999999a;
              uVar3 = 0x3fe6666666666666;
            }
          }
        }
      }
      else {
        param_1[1] = 0x3fc851eb851eb852;
        *param_1 = 0x3ff0000000000000;
        param_1[3] = 0;
        param_1[2] = 0;
        uVar2 = 0x3ff199999999999a;
        uVar3 = 0x3fe6666666666666;
      }
    }
    else {
      param_1[1] = 0x3fc851eb851eb852;
      *param_1 = 0x3ff0000000000000;
      param_1[3] = 0;
      param_1[2] = 0;
      uVar2 = 0x3ff199999999999a;
      uVar3 = 0x3fe6666666666666;
    }
  }
  else {
    param_1[1] = 0x3fc851eb851eb852;
    *param_1 = 0x3ff0000000000000;
    param_1[3] = 0;
    param_1[2] = 0;
    uVar2 = 0x3ff199999999999a;
    uVar3 = 0x3fe6666666666666;
  }
  param_1[5] = uVar2;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1085cff94; end: 1085d00af; -[SCTGroupChatPresencePill _pillWidthForState:] */

double FUN_1085cff94(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_80 [32];
  double dStack_60;
  
  _objc_retain(param_4);
  func_0x00010be36be0(param_2);
  puVar1 = PTR_PTR_1126da4c0;
  func_0x00010c2339a0(PTR_PTR_1126da4c0,param_3,param_4);
  dVar4 = param_1;
  if ((int)puVar1 != 0) {
    puVar1 = PTR_PTR_1126da4c0;
    func_0x00010c07aac0(PTR_PTR_1126da4c0,param_3,param_4);
    dVar4 = param_1 + 15.0;
    if ((int)puVar1 == 0) {
      dVar4 = param_1;
    }
  }
  puVar1 = PTR_PTR_1126da4c0;
  func_0x00010c07aac0(PTR_PTR_1126da4c0,param_3,param_4);
  dVar3 = dVar4;
  if ((int)puVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010bdd4aa0(auStack_80,param_2,param_3,param_4);
      func_0x00010bf1c640(param_2);
      _objc_retainAutoreleasedReturnValue();
      dVar3 = dStack_60;
      func_0x00010c23d360();
      _objc_release(param_2);
      if (dVar3 <= dVar4) {
        dVar3 = dVar4;
      }
    }
  }
  dVar4 = 65.0;
  if (65.0 <= dVar3 + 20.0) {
    dVar4 = dVar3 + 20.0;
  }
  _objc_release(param_4);
  return dVar4;
}



/* Entry: 1085d00b0; end: 1085d01a7; -[SCTGroupChatPresencePill _pillHeightForState:] */

double FUN_1085d00b0(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_80 [64];
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126da4c0;
  func_0x00010c07aac0(PTR_PTR_1126da4c0,param_4,param_5);
  dVar4 = 27.5;
  uVar3 = param_5;
  if ((int)puVar1 != 0) {
    lVar2 = param_3;
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c2524e0(param_5,param_4,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_5);
      lVar2 = param_3;
      func_0x00010bf1c640(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdd4aa0(auStack_80,param_3,param_4,uVar3);
      func_0x00010c23d360(lVar2,param_4,auStack_80);
      _objc_release(lVar2);
      dVar4 = param_2 + 0.0 + 20.0 + 7.5;
    }
  }
  _objc_release(uVar3);
  return dVar4;
}



/* Entry: 1085d01a8; end: 1085d01f7; -[SCTGroupChatPresencePill _pillWidth] */

undefined8 FUN_1085d01a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be73de0(param_2,param_3,uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1085d01f8; end: 1085d0247; -[SCTGroupChatPresencePill _pillHeight] */

undefined8 FUN_1085d01f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be73cc0(param_2,param_3,uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1085d0248; end: 1085d02ab; -[SCTGroupChatPresencePill _idealUsernameLabelSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1085d0248(long param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  pdVar1 = (double *)(param_1 + _DAT_112776f88);
  dVar2 = *pdVar1;
  if (dVar2 < 0.0) {
    func_0x00010c2945e0();
    _objc_retainAutoreleasedReturnValue();
    dVar2 = 1.79769313486232e+308;
    dVar3 = 1.79769313486232e+308;
    func_0x00010c23d5a0();
    *pdVar1 = dVar2;
    pdVar1[1] = dVar3;
    _objc_release(param_1);
    dVar2 = *pdVar1;
  }
  auVar4._8_8_ = pdVar1[1];
  auVar4._0_8_ = dVar2;
  return auVar4;
}



/* Entry: 1085d02ac; end: 1085d038b; -[SCTGroupChatPresencePill _containsArabicScript:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1085d02ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112776f9c;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    uStack_48 = 0;
    puVar1 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                        &PTR____CFConstantStringClassReference_110ee4ff8,0,&uStack_48);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uStack_48;
    _objc_retain(uStack_48);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar2);
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  uVar3 = param_3;
  func_0x00010c08fa60(param_3);
  func_0x00010bfb1800(lVar4,param_2,param_3,0,0,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_3);
  return lVar4 != 0;
}



/* Entry: 1085d038c; end: 1085d05d7; -[SCTGroupChatPresencePill _resetUsernameLabelTextIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d038c(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c087820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar3 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bf1a900();
  ppuVar1 = ppuVar2;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar4 = ppuVar2;
    func_0x00010c08fa60();
    _objc_release(ppuVar3);
    if (ppuVar4 == (undefined **)0x0) goto LAB_1085d0440;
    ppuVar1 = &PTR____CFConstantStringClassReference_110ee5018;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
  }
  _objc_release(ppuVar3);
LAB_1085d0440:
  ppuVar2 = param_1;
  func_0x00010c2945e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c0720c0();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  if (((ulong)ppuVar4 & 1) == 0) {
    ppuVar2 = param_1;
    func_0x00010bde78e0();
    if (((ulong)ppuVar2 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(0x3fe0000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    else {
      puVar8 = (undefined *)0x0;
    }
    puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    func_0x00010c04e840();
    ppuVar2 = param_1;
    func_0x00010c2945e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(ppuVar2);
    _objc_release(puVar5);
    lVar7 = (long)_DAT_112776f88;
    auVar9 = NEON_fmov(0xbff0000000000000,8);
    ((undefined8 *)((long)param_1 + lVar7))[1] = auVar9._8_8_;
    *(undefined8 *)((long)param_1 + lVar7) = auVar9._0_8_;
    func_0x00010c0bc060(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = ppuVar1[4];
  func_0x00010be73dc0(puVar5);
  FUN_1085cdbe8();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085d05d8; end: 1085d066f;  */

void FUN_1085d05d8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be73dc0(uVar2);
  FUN_1085cdbe8();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085d0670; end: 1085d06df; -[SCTGroupChatPresencePill .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d0670(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112776f94,0);
  _objc_storeStrong(param_1 + _DAT_112776f9c,0);
  _objc_storeStrong(param_1 + _DAT_112776f98,0);
  _objc_storeStrong(param_1 + _DAT_112776f90,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776f8c,0);
  return;
}



/* Entry: 1085d06e0; end: 1085d0857; -[SCTAnimator addPresenceColorAnimationForPill:iconImage:fromInterval:toInterval:] */

void FUN_1085d06e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126da4c0;
  uVar1 = param_5;
  func_0x00010c252440(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07aac0(puVar2,param_4,uVar1);
  uVar3 = param_5;
  func_0x00010bde1f40(param_5,param_4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126da4c0;
  uVar1 = param_5;
  func_0x00010c252440(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07aac0(puVar2,param_4,uVar1);
  uVar4 = param_5;
  func_0x00010bde1f40(param_5,param_4,(uint)puVar2 ^ 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1085d0858;
  puStack_68 = &UNK_110a59ce0;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bef7800(param_1,param_2,param_3,param_4,3,uVar3,uVar4,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 1085d0858; end: 1085d08e3;  */

void FUN_1085d0858(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c141e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2945e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar1);
  func_0x00010c216160(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085d08e4; end: 1085d08ef; -[SCTAnimator addPresenceColorAnimationForPill:iconImage:duration:] */

void FUN_1085d08e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,param_1,param_2,PTR_s_addPresenceColorAnimationForPill_11259c480);
  return;
}



/* Entry: 1085d08f0; end: 1085d090f; +[SCTPresenceState isBitmojiRequired:] */

bool FUN_1085d08f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0fe180(param_3);
  return param_3 != 0;
}



/* Entry: 1085d0910; end: 1085d096b; +[SCTPresenceState isActionPose:] */

ulong FUN_1085d0910(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c082a20();
  if (((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010c083620(), (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010c075460(param_3);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1085d096c; end: 1085d09c3; +[SCTPresenceState isPresent:] */

bool FUN_1085d096c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0fe180(param_3);
  func_0x00010c06b600(param_1,param_2,param_3);
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 1085d09c4; end: 1085d0a1f; +[SCTPresenceState isChatVisible:] */

bool FUN_1085d09c4(ulong param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c06b600(param_1,param_2,param_3);
  if ((param_1 & 1) == 0) {
    lVar2 = param_3;
    func_0x00010c0fe180(param_3);
    bVar1 = lVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1085d0a20; end: 1085d0a73; +[SCTPresenceState shouldShowIcon:] */

long FUN_1085d0a20(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0fe180();
  if (lVar1 == 2) {
    lVar1 = 1;
  }
  else {
    lVar1 = param_3;
    func_0x00010c075460(param_3);
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 1085d0a74; end: 1085d0ad3; +[SCTPresenceState hasChatVisibleStateChangedFromPresence:toPresence:] */

uint FUN_1085d0a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c06e760(param_1,param_2,param_3);
  func_0x00010c06e760(param_1,param_2,param_4);
  _objc_release(param_4);
  return (uint)uVar1 ^ (uint)param_1;
}



/* Entry: 1085d0ad4; end: 1085d0b97; +[SCTPresenceState hasSameActivePresentingStateFromPresence:toPresence:] */

undefined8 FUN_1085d0ad4(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c082a20();
  if ((((((int)uVar2 == 0) || (uVar1 = param_4, func_0x00010c082a20(), (uVar1 & 1) == 0)) &&
       ((uVar2 = param_3, func_0x00010c083620(), (int)uVar2 == 0 ||
        (uVar1 = param_4, func_0x00010c083620(), (uVar1 & 1) == 0)))) &&
      ((uVar2 = param_3, func_0x00010c075460(), (int)uVar2 == 0 ||
       (uVar1 = param_4, func_0x00010c075460(), (uVar1 & 1) == 0)))) &&
     ((uVar1 = param_1, func_0x00010c06e760(param_1,param_2,param_3), (int)uVar1 == 0 ||
      (func_0x00010c06e760(param_1,param_2,param_4), (param_1 & 1) == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1085d0b98; end: 1085d0c67; +[SCTPresenceState hasSamePresentingStateFromPresence:toPresence:] */

uint FUN_1085d0b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c082a20();
  uVar2 = param_4;
  func_0x00010c082a20();
  if ((int)uVar1 == (int)uVar2) {
    uVar1 = param_3;
    func_0x00010c083620();
    uVar2 = param_4;
    func_0x00010c083620();
    if ((int)uVar1 == (int)uVar2) {
      uVar1 = param_3;
      func_0x00010c075460();
      uVar2 = param_4;
      func_0x00010c075460();
      if ((int)uVar1 == (int)uVar2) {
        uVar1 = param_1;
        func_0x00010c06e760(param_1,param_2,param_3);
        func_0x00010c06e760(param_1,param_2,param_4);
        uVar3 = (uint)uVar1 ^ (uint)param_1 ^ 1;
        goto LAB_1085d0c1c;
      }
    }
  }
  uVar3 = 0;
LAB_1085d0c1c:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1085d0c68; end: 1085d0cc7; +[SCTPresenceState hasPresenceChangedFromPresence:toPresence:] */

uint FUN_1085d0c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c07aac0(param_1,param_2,param_3);
  func_0x00010c07aac0(param_1,param_2,param_4);
  _objc_release(param_4);
  return (uint)uVar1 ^ (uint)param_1;
}



/* Entry: 1085d0cc8; end: 1085d0dc3; +[SCTPresenceState areStatesEqualFromPresence:toPresence:] */

bool FUN_1085d0cc8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c082a20();
  lVar3 = param_4;
  func_0x00010c082a20();
  if ((int)lVar2 == (int)lVar3) {
    lVar2 = param_3;
    func_0x00010c083620();
    lVar3 = param_4;
    func_0x00010c083620();
    if ((int)lVar2 == (int)lVar3) {
      lVar2 = param_3;
      func_0x00010c075460();
      lVar3 = param_4;
      func_0x00010c075460();
      if ((int)lVar2 == (int)lVar3) {
        lVar2 = param_3;
        func_0x00010c0fe180();
        lVar3 = param_4;
        func_0x00010c0fe180();
        if (lVar2 == lVar3) {
          lVar2 = param_3;
          func_0x00010c27e300();
          lVar3 = param_4;
          func_0x00010c27e300();
          if (lVar2 == lVar3) {
            lVar2 = param_3;
            func_0x00010bf1a900(param_3);
            lVar3 = param_4;
            func_0x00010bf1a900(param_4);
            bVar1 = lVar2 == lVar3;
            goto LAB_1085d0da0;
          }
        }
      }
    }
  }
  bVar1 = false;
LAB_1085d0da0:
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1085d0dc4; end: 1085d0ea3; +[SCTPresenceState areStatesEqualExcludingTypingFromPresence:toPresence:] */

bool FUN_1085d0dc4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c082a20();
  lVar3 = param_4;
  func_0x00010c082a20();
  if ((int)lVar2 == (int)lVar3) {
    lVar2 = param_3;
    func_0x00010c083620();
    lVar3 = param_4;
    func_0x00010c083620();
    if ((int)lVar2 == (int)lVar3) {
      lVar2 = param_3;
      func_0x00010c075460();
      lVar3 = param_4;
      func_0x00010c075460();
      if ((int)lVar2 == (int)lVar3) {
        lVar2 = param_3;
        func_0x00010c0fe180();
        lVar3 = param_4;
        func_0x00010c0fe180();
        if (lVar2 == lVar3) {
          lVar2 = param_3;
          func_0x00010bf1a900(param_3);
          lVar3 = param_4;
          func_0x00010bf1a900(param_4);
          bVar1 = lVar2 == lVar3;
          goto LAB_1085d0e80;
        }
      }
    }
  }
  bVar1 = false;
LAB_1085d0e80:
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}


