/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105330c30; end: 105330e23; -[SCConfigManagerImpl applyRecoveryResponseWithRecoveryResponse:updateAserImmediately:protectedWrite:] */

void FUN_105330c30(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf46260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  iVar1 = (int)lVar3;
  _objc_release(lVar2);
  lVar2 = param_3;
  if (param_5 != 0) {
    lVar2 = param_1;
    func_0x00010be16320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar3 = lVar2;
    func_0x00010bf46260();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    iVar1 = (int)lVar4;
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010bf46260(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(lVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ad8a0();
  _objc_release(uVar5);
  if ((param_5 == 0) || (iVar1 != 0)) {
    _objc_initWeak(auStack_58,param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bed6980(param_1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    func_0x00010c124280(*(undefined8 *)(param_1 + 0xd0));
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105330e24; end: 105330e5f;  */

void FUN_105330e24(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c124260(*(undefined8 *)(param_1 + 0xd0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105330e60; end: 105331007; -[SCConfigManagerImpl _filterRecoveryResponseToCachedConfigs:] */

void FUN_105330e60(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined1 uStack_158;
  undefined *puStack_150;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_3;
  func_0x00010bf46260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        lVar7 = *(long *)(param_1 + 0x30);
        uVar4 = uVar6;
        func_0x00010bf45ee0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfc3f60(lVar7,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        lVar5 = lVar7;
        func_0x00010bf529e0();
        if (lVar5 != 0) {
          func_0x00010befa120(puVar1,param_2,uVar6);
        }
        _objc_release(lVar7);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf51e00(param_3);
  func_0x00010c180920();
  _objc_release(puVar1);
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105331008;
  lVar2 = lVar3;
  puStack_150 = puVar1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c06eb40();
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_105331074;
  puStack_168 = &UNK_110845ce0;
  uStack_158 = (undefined1)lVar2;
  lStack_160 = lVar3;
  func_0x00010c0f7fc0(*(undefined8 *)(lVar3 + 0x38),param_2,&puStack_180);
  return;
}



/* Entry: 105331008; end: 105331073; -[SCConfigManagerImpl appWillEnterForeground] */

void FUN_105331008(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  lVar1 = param_1;
  func_0x00010c06eb40();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105331074;
  puStack_38 = &UNK_110845ce0;
  uStack_28 = (undefined1)lVar1;
  lStack_30 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_50);
  return;
}



/* Entry: 105331074; end: 10533128b;  */

void FUN_105331074(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  func_0x00010c0aca60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe8),param_2,3,
                      *(undefined1 *)(param_1 + 0x28),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),3);
  *(long *)(*(long *)(param_1 + 0x20) + 0x40) = *(long *)(*(long *)(param_1 + 0x20) + 0x40) + 1;
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  _objc_initWeak(auStack_58);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10533128c;
  puStack_80 = &UNK_11087b9c8;
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_60 = *(undefined1 *)(param_1 + 0x28);
  uStack_78 = *(undefined8 *)(param_1 + 0x20);
  ppuVar2 = &puStack_98;
  uStack_68 = uVar8;
  _objc_retainBlock();
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c06ca40();
  if (iVar1 == 0) {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b7408;
    puVar5 = PTR_PTR_1126ae960;
    puVar3 = PTR_PTR_1126b7838;
    func_0x00010bfef060(PTR_PTR_1126b7838);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf46040(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3f140(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae970;
    func_0x00010bfe2ec0(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010c11de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a1620(uVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar8);
  }
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10533128c; end: 1053313ff;  */

void FUN_10533128c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0aca60(*(undefined8 *)(lVar1 + 0xe8));
    if ((*(long *)(param_2 + 0x30) == *(long *)(lVar1 + 0x40)) &&
       (lVar2 = lVar1, func_0x00010be43260(), (int)lVar2 != 0)) {
      lVar2 = lVar1;
      func_0x00010bdd6920();
      _objc_retainAutoreleasedReturnValue();
      _CACurrentMediaTime();
      uVar3 = *(undefined8 *)(lVar1 + 0x70);
      uStack_58 = *(undefined1 *)(param_2 + 0x38);
      _objc_retain(lVar2);
      uStack_60 = param_1;
      _objc_copyWeak(auStack_68,param_2 + 0x28);
      func_0x00010c125140(uVar3);
      func_0x00010c0aca60(*(undefined8 *)(lVar1 + 0xe8));
      _objc_destroyWeak(auStack_68);
      _objc_release(lVar2);
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105331400; end: 105331573;  */

void FUN_105331400(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  double dStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0xe8);
  func_0x00010bf462a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  param_1 = param_1 - *(double *)(param_2 + 0x38);
  func_0x00010c0ac7a0(uVar3);
  _objc_release(uVar2);
  _CACurrentMediaTime();
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_68,param_2 + 0x30);
  uStack_58 = *(undefined1 *)(param_2 + 0x40);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar2);
  dStack_60 = param_1;
  func_0x00010bed6980(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 105331574; end: 10533163b;  */

void FUN_105331574(double param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0xe8);
    if (param_3 == 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bf462a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b1680(uVar3);
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bf462a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _CACurrentMediaTime();
      func_0x00010c0ac7a0(param_1 - *(double *)(param_2 + 0x38),uVar3);
    }
    _objc_release(uVar2);
    func_0x00010be0b480(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10533163c; end: 105331643; -[SCConfigManagerImpl _ignoreAssertion] */

undefined8 FUN_10533163c(void)

{
  return 0;
}



/* Entry: 105331644; end: 105331943; -[SCConfigManagerImpl _refreshCacheWithUpdateConfigIds:] */

void FUN_105331644(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined **unaff_x27;
  long unaff_x28;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined1 *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined1 uStack_267;
  undefined1 uStack_266;
  undefined1 uStack_265;
  long lStack_260;
  undefined **ppuStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined **ppuStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010beffce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_3 != (undefined *)0x0) {
    func_0x00010c069840(puVar2,param_2,param_3);
  }
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_1f8 = param_3;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  puStack_1a0 = (undefined8 *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(puVar2);
  puVar4 = puVar2;
  func_0x00010bf52a60(puVar2,param_2,&uStack_1b0,auStack_f0,0x10);
  if (puVar4 != (undefined *)0x0) {
    unaff_x26 = (undefined *)*puStack_1a0;
    unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      param_3 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_1a0 != unaff_x26) {
          _objc_enumerationMutation(puVar2);
        }
        unaff_x24 = *(undefined8 *)(lStack_1a8 + (long)param_3 * 8);
        unaff_x25 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar3,param_2,unaff_x25,unaff_x24);
        _objc_release(unaff_x25);
        param_3 = param_3 + 1;
      } while (puVar4 != param_3);
      puVar4 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar5 = *(undefined **)(param_1 + 0x30);
  func_0x00010bfa5c40(puVar5,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  puVar7 = auStack_170;
  uVar8 = 0x10;
  puVar4 = puVar5;
  func_0x00010bf52a60();
  uVar9 = (undefined1)param_6;
  uVar10 = (undefined1)param_8;
  if (puVar4 != (undefined *)0x0) {
    unaff_x28 = *plStack_1e0;
    do {
      param_3 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != unaff_x28) {
          _objc_enumerationMutation(puVar5);
        }
        unaff_x25 = *(undefined **)(lStack_1e8 + (long)param_3 * 8);
        unaff_x26 = unaff_x25;
        func_0x00010bf45ee0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = ppuVar3;
        func_0x00010c0e00e0(ppuVar3,param_2,unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x26);
        func_0x00010befa120(unaff_x27,param_2,unaff_x25);
        func_0x00010bf45ee0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(ppuVar3,param_2,unaff_x27,unaff_x25);
        _objc_release(unaff_x25);
        _objc_release(unaff_x27);
        param_3 = param_3 + 1;
      } while (puVar4 != param_3);
      puVar7 = auStack_170;
      uVar8 = 0x10;
      puVar4 = puVar5;
      func_0x00010bf52a60(puVar5,param_2,&uStack_1f0);
      uVar9 = (undefined1)param_6;
      uVar10 = (undefined1)param_8;
      unaff_x24 = 0;
    } while (puVar4 != (undefined *)0x0);
  }
  func_0x00010bf17200(*(undefined8 *)(param_1 + 0x80),param_2,ppuVar3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf529e0();
  uVar6 = SUB81(puVar4,0);
  func_0x00010bf3f1a0(uVar1);
  _objc_release(uVar1);
  _objc_release(puVar5);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  puVar4 = puStack_1f8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_105331944;
  lStack_260 = unaff_x28;
  ppuStack_258 = unaff_x27;
  puStack_250 = unaff_x26;
  puStack_248 = unaff_x25;
  uStack_240 = unaff_x24;
  puStack_238 = puVar5;
  ppuStack_230 = ppuVar3;
  uStack_228 = uVar1;
  puStack_220 = puVar2;
  puStack_218 = param_3;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(param_7);
  _objc_retain(uStack_200);
  uVar1 = *(undefined8 *)(puVar4 + 0x38);
  puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2a0 = 0xc2000000;
  pcStack_298 = FUN_105331a58;
  puStack_290 = &UNK_11087b9f8;
  uStack_270 = uStack_200;
  puStack_288 = puVar4;
  puStack_280 = puVar7;
  uStack_278 = param_7;
  uStack_268 = uVar8;
  uStack_267 = uVar10;
  uStack_266 = uVar6;
  uStack_265 = uVar9;
  _objc_retain(param_7);
  _objc_retain(uStack_200);
  _objc_retain(puVar7);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_2a8);
  _objc_release(uStack_278);
  _objc_release(uStack_270);
  _objc_release(puStack_280);
  _objc_release(param_7);
  _objc_release(uStack_200);
  _objc_release(puVar7);
  return;
}



/* Entry: 105331944; end: 105331a57; -[SCConfigManagerImpl _onSyncCompleteWithSuccess:updatedConfigIds:fromUserSession:tweakSync:cofGrapheneContext:loginSync:completionHandler:] */

void FUN_105331944(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_9);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105331a58;
  puStack_90 = &UNK_11087b9f8;
  uStack_70 = param_9;
  lStack_88 = param_1;
  uStack_80 = param_4;
  uStack_78 = param_7;
  uStack_68 = param_5;
  uStack_67 = param_8;
  uStack_66 = param_3;
  uStack_65 = param_6;
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a8);
  _objc_release(uStack_78);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(param_7);
  _objc_release(param_9);
  _objc_release(param_4);
  return;
}



/* Entry: 105331a58; end: 105331c3f;  */

void FUN_105331a58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x00010be883a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
  _objc_release(puVar1);
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0));
  if (*(char *)(param_1 + 0x41) == '\x01') {
    if (*(char *)(param_1 + 0x42) == '\x01') {
      lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
      func_0x00010bfc3f60();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf529e0();
      if (lVar4 == 1) {
        lVar4 = lVar2;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar4;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        _objc_release(lVar3);
        _objc_release(lVar4);
      }
      _objc_release(lVar2);
    }
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3f560(uVar5);
    _objc_release(puVar1);
    _objc_release(uVar5);
  }
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,*(undefined1 *)(param_1 + 0x42));
  }
  func_0x00010bf07d60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8));
  func_0x00010be0b4a0(*(undefined8 *)(param_1 + 0x20));
  if ((*(char *)(param_1 + 0x42) == '\x01') && ((*(byte *)(param_1 + 0x43) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c183590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf0),PTR_s_setContextWithData__11263e780
               ,*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 105331c40; end: 105331e03; -[SCConfigManagerImpl _fullSyncFromConfigResults:fromUserSession:crashRecovery:updateAserImmediately:tweakSync:loginSync:cofGrapheneContext:bitmap:completionHandler:] */

void FUN_105331c40(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [8];
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_initWeak(auStack_80,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105331e04;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_copyWeak(auStack_b8,auStack_80);
  uStack_b0 = param_4;
  uStack_af = param_7;
  _objc_retain(param_9);
  uStack_ae = param_8;
  _objc_retain(param_11);
  func_0x00010c2bde40(uVar1);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_3);
  return;
}



/* Entry: 105331e04; end: 105331e77;  */

void FUN_105331e04(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105331e78;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 105331e78; end: 105331e83;  */

void FUN_105331e78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c197590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_setEtag__112643780,0)
  ;
  return;
}



/* Entry: 105331e84; end: 105331eff;  */

void FUN_105331e84(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be6bc80(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105331f00; end: 1053320c3; -[SCConfigManagerImpl _deltaSyncFromConfigResults:fromUserSession:crashRecovery:updateAserImmediately:tweakSync:loginSync:cofGrapheneContext:bitmap:completionHandler:] */

void FUN_105331f00(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [8];
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_initWeak(auStack_80,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1053320c4;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_copyWeak(auStack_b8,auStack_80);
  uStack_b0 = param_4;
  uStack_af = param_7;
  _objc_retain(param_9);
  uStack_ae = param_8;
  _objc_retain(param_11);
  func_0x00010c2bdb80(uVar1);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_3);
  return;
}



/* Entry: 1053320c4; end: 105332137;  */

void FUN_1053320c4(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105332138;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 105332138; end: 105332143;  */

void FUN_105332138(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c197590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_setEtag__112643780,0)
  ;
  return;
}



/* Entry: 105332144; end: 1053321bf;  */

void FUN_105332144(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be6bc80(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053321c0; end: 1053322cb; -[SCConfigManagerImpl _syncFromConfigResults:fullResponse:fromUserSession:crashRecovery:updateAserImmediately:tweakSync:loginSync:cofGrapheneContext:bitmap:completionHandler:] */

void FUN_1053321c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_3);
  func_0x00010be0dc40(param_1,param_2,param_3,0);
  if (param_4 == 0) {
    func_0x00010bdfab60(param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_11,
                        param_12,param_13);
  }
  else {
    func_0x00010be19d80(param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_11,
                        param_12,param_13);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053322cc; end: 10533234b; -[SCConfigManagerImpl _recoveryConfigIds] */

void FUN_1053322cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x108);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                        &PTR____CFConstantStringClassReference_110dd28d8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x108);
    *(undefined **)(param_1 + 0x108) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x108);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10533234c; end: 1053325db; -[SCConfigManagerImpl _getRecoveryStrategyWithConfigResult:updateConfig:] */

void FUN_10533234c(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf45ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  lVar3 = param_3;
  if ((int)lVar2 == 0) {
    lVar2 = lVar1;
    func_0x00010c0720c0(lVar1,param_2,&PTR____CFConstantStringClassReference_110dd28f8);
    if ((int)lVar2 == 0) {
      lVar2 = lVar1;
      func_0x00010c0720c0(lVar1,param_2,&PTR____CFConstantStringClassReference_110dd2918);
      if ((int)lVar2 == 0) goto LAB_1053325b0;
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c0870e0();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)lVar2 == 1) {
        lVar2 = lVar3;
        func_0x00010c067ec0(lVar3);
        func_0x00010c0df760(puVar4,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f51c0(param_4,param_2,puVar4);
        _objc_release(puVar4);
      }
      lVar2 = param_3;
      func_0x00010c25df20();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      if (lVar5 != 0) {
        lVar2 = param_3;
        func_0x00010c25df20(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar2;
        func_0x00010bf51e00();
        func_0x00010c1f51e0(param_4,param_2,lVar5);
        _objc_release(lVar5);
        _objc_release(lVar2);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lVar2 = param_3;
        func_0x00010bf9c4e0(param_3);
        func_0x00010c0df760(puVar4,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f5200(param_4,param_2,puVar4);
        goto LAB_1053325a0;
      }
    }
    else {
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c0870e0();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)lVar2 == 1) {
        lVar2 = lVar3;
        func_0x00010c067ec0(lVar3);
        func_0x00010c0df760(puVar4,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16b4e0(param_4,param_2,puVar4);
        goto LAB_1053325a0;
      }
    }
  }
  else {
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0870e0();
    if ((int)lVar2 == 8) {
      lVar2 = lVar3;
      func_0x00010c067e80(lVar3);
      func_0x00010be70320(param_1,param_2,lVar2);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c210be0(param_4,param_2,puVar4);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_1 >> 0x20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b500(param_4,param_2,puVar4);
LAB_1053325a0:
      _objc_release(puVar4);
    }
  }
  _objc_release(lVar3);
LAB_1053325b0:
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053325dc; end: 1053328ef; -[SCConfigManagerImpl _extractRecoveryStrategy:containsTweakOverrides:] */

ulong FUN_1053325dc(ulong param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
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
  uVar1 = param_1;
  func_0x00010be87dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  puVar9 = &uStack_1b0;
  uVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,puVar9,auStack_f0,0x10);
  if (uVar3 != 0) {
    uVar15 = 0;
    lVar10 = *plStack_1a0;
    do {
      uVar12 = 0;
      do {
        if (*plStack_1a0 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        puVar14 = *(undefined8 **)(lStack_1a8 + uVar12 * 8);
        puVar4 = puVar14;
        func_0x00010bf45ee0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        func_0x00010bf4b900(uVar1,param_2,puVar4);
        if ((int)uVar5 != 0) {
          puVar6 = puVar2;
          puVar9 = puVar4;
          func_0x00010c0e00e0(puVar2,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
          if ((puVar6 == (undefined *)0x0) ||
             (puVar7 = puVar14, func_0x00010bf6ce60(), ((ulong)puVar7 & 1) == 0)) {
            puVar9 = puVar14;
            func_0x00010c1d0640(puVar2,param_2,puVar14,puVar4);
          }
          func_0x00010bf6ce60();
          if (((param_4 & 1) == 0) && ((int)puVar14 == 0)) {
            uVar15 = uVar15 + 1;
            uVar5 = uVar1;
            func_0x00010bf529e0();
            _objc_release(puVar6);
            if (uVar5 <= uVar15) {
              _objc_release(puVar4);
              goto LAB_105332788;
            }
          }
          else {
            _objc_release(puVar6);
          }
        }
        _objc_release(puVar4);
        uVar12 = uVar12 + 1;
      } while (uVar3 != uVar12);
      puVar9 = &uStack_1b0;
      uVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,puVar9,auStack_f0,0x10);
    } while (uVar3 != 0);
  }
LAB_105332788:
  _objc_release(param_3);
  puVar6 = puVar2;
  func_0x00010bf529e0();
  if (puVar6 != (undefined *)0x0) {
    puVar4 = (undefined8 *)PTR_PTR_1126b7868;
    _objc_alloc_init(PTR_PTR_1126b7868);
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    _objc_retain(puVar2);
    puVar6 = puVar2;
    func_0x00010bf52a60(puVar2,param_2,&uStack_1f0,auStack_170,0x10);
    if (puVar6 != (undefined *)0x0) {
      lVar10 = *plStack_1e0;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_1e0 != lVar10) {
            _objc_enumerationMutation(puVar2);
          }
          puVar8 = puVar2;
          func_0x00010c0e00e0(puVar2,param_2,*(undefined8 *)(lStack_1e8 + (long)puVar13 * 8));
          _objc_retainAutoreleasedReturnValue();
          if (puVar8 != (undefined *)0x0) {
            func_0x00010be21f80(param_1,param_2,puVar8,puVar4);
          }
          _objc_release(puVar8);
          puVar13 = puVar13 + 1;
        } while (puVar6 != puVar13);
        puVar6 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_1f0,auStack_170,0x10);
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    uVar11 = *(undefined8 *)(param_1 + 200);
    puVar14 = puVar4;
    func_0x00010bfe9d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar14;
    func_0x00010c284800(uVar11,param_2,puVar14);
    _objc_release(puVar14);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    return (ulong)puVar9 >> 0x20 | (long)puVar9 << 0x20;
  }
  return param_3;
}



/* Entry: 1053328f0; end: 1053328f7; -[SCConfigManagerImpl _parseIntPairFromValue:] */

ulong FUN_1053328f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return param_3 >> 0x20 | param_3 << 0x20;
}



/* Entry: 1053328f8; end: 105332c43; -[SCConfigManagerImpl _updateDBWithCofConfigTargetingResponse:fromUserSession:crashRecovery:isLoginSync:updateAserImmediately:cofTriggerEventType:completionHandler:] */

void FUN_1053328f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,ulong param_6)

{
  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_stack_00000000;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(in_stack_00000000);
  pcVar2 = "COFManager:updateDbWithCofConfig";
  func_0x0001000ba800("COFManager:updateDbWithCofConfig");
  if ((param_6 & 1) == 0) {
    func_0x00010c1394a0(*(undefined8 *)(param_2 + 200));
    iVar1 = (int)*(undefined8 *)(param_2 + 0x18);
    func_0x00010c06ca40();
    if (param_5 != iVar1) {
      if (in_stack_00000000 != 0) {
        (**(code **)(in_stack_00000000 + 0x10))(in_stack_00000000,0);
      }
      goto LAB_105332bcc;
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8da0(param_2);
  _objc_release(puVar3);
  func_0x00010c1b8b80(param_2);
  if ((param_6 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x48);
    uVar6 = param_4;
    func_0x00010bf462a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar6);
    if (iVar1 == 0) goto LAB_105332ad0;
    uVar6 = *(undefined8 *)(param_2 + 0x48);
    _objc_retain(uVar6);
    func_0x00010c26f320(*(undefined8 *)(param_2 + 0x88));
    _objc_initWeak(auStack_78,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(in_stack_00000000);
    func_0x00010c2859c0(param_1,uVar4);
    uVar5 = *(undefined8 *)(param_2 + 0xf0);
    uVar4 = param_4;
    func_0x00010bf3f440(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183580(uVar5);
    _objc_release(uVar4);
    _objc_release(in_stack_00000000);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  else {
LAB_105332ad0:
    uVar6 = param_4;
    func_0x00010bf462a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c197580(param_2);
    _objc_release(uVar6);
    if ((param_6 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_2 + 0xa0);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_4;
      func_0x00010c083ee0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c284b00(uVar4);
      _objc_release(uVar6);
      _objc_release(uVar4);
    }
    uVar6 = param_4;
    func_0x00010bf46260(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbbb20(param_4);
    uVar4 = param_4;
    func_0x00010bf3f440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010bf1a940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec99e0(param_2);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar6);
LAB_105332bcc:
  func_0x0001000e2a84(pcVar2);
  _objc_release(in_stack_00000000);
  _objc_release(param_4);
  return;
}



/* Entry: 105332c44; end: 105332c8f;  */

void FUN_105332c44(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  func_0x00010bf07d60(*(undefined8 *)(lVar1 + 0xa8));
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105332c90; end: 105332c93; -[SCConfigManagerImpl _isRefreshPreferred] */

void FUN_105332c90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be43290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isRefreshPreferredInternal_11256e640);
  return;
}



/* Entry: 105332c94; end: 105332d37; -[SCConfigManagerImpl _isRefreshPreferredInternal] */

uint FUN_105332c94(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (((*(long *)(param_1 + 0x88) == 0) || (lVar1 = param_1, func_0x00010bfc6d60(), (int)lVar1 == 4)
      ) || (lVar1 = param_1, func_0x00010bfc6d60(), (int)lVar1 == 0)) {
    uVar5 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010bf64e40(0x408c200000000000,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c06bb60(uVar2,param_2,puVar3);
    uVar5 = (uint)uVar4 ^ 1;
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  return uVar5;
}



/* Entry: 105332d38; end: 105332df7; -[SCConfigManagerImpl _evaluateAbConfig] */

void FUN_105332d38(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bfaf1a0(param_1,param_2,&PTR____CFConstantStringClassReference_110dd2938);
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010bf529e0(), lVar2 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c108ca0();
    func_0x00010010f694(&PTR____CFConstantStringClassReference_110dd2938,5,0,0,uVar3,lVar1,uVar4,
                        uVar5,(int)param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105332df8; end: 105332eb7; -[SCConfigManagerImpl _evaluateFroPayloadOptimizationConfig] */

void FUN_105332df8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bfaf1a0(param_1,param_2,&PTR____CFConstantStringClassReference_110dd2958);
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010bf529e0(), lVar2 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c108ca0();
    func_0x00010010f694(&PTR____CFConstantStringClassReference_110dd2958,4,0,0,uVar3,lVar1,uVar4,
                        uVar5,(int)param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105332eb8; end: 105332efb; -[SCConfigManagerImpl bulkLoadNamespaceBytes:exposeAll:] */

void FUN_105332eb8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf248c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105332efc; end: 105332f33;  */

void FUN_105332efc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd2978);
  return;
}



/* Entry: 105332f34; end: 105332fc7; -[SCConfigManagerImpl performDeltaSyncUpdateWithTweaks:] */

void FUN_105332f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  _objc_retain(param_3);
  func_0x00010c0fa2a0(uVar1,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfc3040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec99e0(param_1,param_2,param_3,0,1,0,0,1,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105332fc8; end: 105332fcf; -[SCConfigManagerImpl getAllConfigs] */

void FUN_105332fc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc21d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_getAllConfigs_1125ce218);
  return;
}



/* Entry: 105332fd0; end: 105332ff7; -[SCConfigManagerImpl getLastUpdateTimestamp] */

void FUN_105332fd0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105332ff8; end: 105332fff; -[SCConfigManagerImpl getLastSyncTriggerType] */

undefined4 FUN_105332ff8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xd8);
}



/* Entry: 105333000; end: 105333007; -[SCConfigManagerImpl setLastSyncTriggerType:] */

void FUN_105333000(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xd8) = param_3;
  return;
}



/* Entry: 105333008; end: 10533301f; -[SCConfigManagerImpl etag] */

void FUN_105333008(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105333020; end: 105333027; -[SCConfigManagerImpl userInSafeMode] */

undefined1 FUN_105333020(long param_1)

{
  return *(undefined1 *)(param_1 + 0x110);
}



/* Entry: 105333028; end: 1053331fb; -[SCConfigManagerImpl .cxx_destruct] */

void FUN_105333028(long param_1)

{
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
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
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 1053331fc; end: 105333207;  */

void FUN_1053331fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfca250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b7870,PTR_s_getSetOfAppStartExperimentReader_1125d0238);
  return;
}



/* Entry: 105333208; end: 10533325f; -[SCConfigRepository dealloc] */

void FUN_105333208(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 8))();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  puStack_28 = PTR_PTR_1126e7938;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105333260; end: 1053332bb; -[SCConfigRepository _markAserSynced] */

void FUN_105333260(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1053332bc;
  puStack_20 = &UNK_11087bb00;
  lStack_18 = param_1;
  func_0x00010c0f88c0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1053332bc; end: 105333383;  */

void FUN_1053332bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  _objc_retain(uVar3);
  uVar1 = uVar3;
  func_0x00010bfedc40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,uVar2,
                      &PTR____CFConstantStringClassReference_110dd29b8);
  func_0x00010c1cbc80(*(undefined8 *)(param_1 + 0x20),param_2,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105333384; end: 1053333d7; -[SCConfigRepository fetchConfigRulesForConfigIDs:] */

void FUN_105333384(void)

{
  func_0x00010be10780();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053333d8; end: 10533347b; -[SCConfigRepository updateEtag:lastUpdateTimestampSeconds:completion:] */

void FUN_1053333d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10533347c;
  puStack_30 = &UNK_11087bb60;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 10533347c; end: 105333487;  */

void FUN_10533347c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105333484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105333488; end: 10533348f; -[SCConfigRepository _ignoreAssertion] */

undefined8 FUN_105333488(void)

{
  return 0;
}



/* Entry: 105333490; end: 1053335cb; -[SCConfigRepository writeFullSync:crashRecovery:loginSync:updateAserImmediately:lastUpdatedTimestamp:etag:bitmap:etagDeleteBlock:syncCompleteBlock:] */

void FUN_105333490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x00010bec9740(param_1,param_2,param_3,param_6,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010beeba40(param_1,param_2,param_3,param_4,param_5,param_7,param_8,param_9,param_10,
                      param_11);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053335cc; end: 105333727; -[SCConfigRepository writeDeltaSync:crashRecovery:loginSync:updateAserImmediately:lastUpdatedTimestamp:etag:bitmap:etagDeleteBlock:syncCompleteBlock:] */

void FUN_1053335cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  uVar1 = param_1;
  func_0x00010bec9740(param_1,param_2,param_3,param_6,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeb960(param_1,param_2,param_3,param_4,param_5,param_7,param_8,param_9,uVar1,param_10
                      ,param_11);
  _objc_release(uVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105333728; end: 105333ceb; -[SCConfigRepository _writeFullSyncToFileSystem:crashRecovery:loginSync:lastUpdatedTimestamp:etag:bitmap:etagDeleteBlock:syncCompleteBlock:] */

void FUN_105333728(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,char *param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  long lStack_250;
  long lStack_248;
  undefined **ppuStack_238;
  long lStack_230;
  undefined7 uStack_228;
  char cStack_221;
  undefined **ppuStack_220;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  char *pcStack_110;
  undefined8 *apuStack_108 [17];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uVar12 = 0xc2000000;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_105333cec;
  puStack_118 = &UNK_11087bb90;
  _objc_retain(param_7);
  ppuVar1 = &puStack_130;
  pcStack_110 = param_7;
  func_0x0001001071d4();
  _objc_release(pcStack_110);
  _CACurrentMediaTime();
  puStack_148 = (undefined *)0x0;
  lStack_140 = 0;
  uStack_138 = 0;
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_180;
    do {
      lVar11 = 0;
      do {
        if (*plStack_180 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        ppuVar10 = *(undefined ***)(lStack_188 + lVar11 * 8);
        ppuStack_220 = &PTR_DAT_110cf7e70;
        lStack_218 = 0;
        uStack_208 = 0;
        uStack_200 = 0;
        lStack_210 = 0;
        uStack_1f8 = uStack_1f8 & 0xffffffff00000000;
        puStack_1f0 = &DAT_11383d918;
        puStack_1e8 = &DAT_11383d918;
        puStack_1e0 = &DAT_11383d918;
        uStack_1d0 = 0;
        lStack_1d8 = 0;
        uStack_1c0 = 0;
        lStack_1c8 = 0;
        uStack_1b0 = 0;
        uStack_1b8 = 0;
        uStack_1a0 = 0;
        uStack_1a8 = 0;
        ppuVar3 = ppuVar10;
        func_0x00010bf63640();
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        ppuVar4 = ppuVar3;
        func_0x00010bf25f00();
        func_0x00010bf63640();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar10;
        func_0x00010c08fa60();
        lStack_230 = (long)(int)ppuVar5;
        pppuVar6 = &ppuStack_220;
        ppuStack_238 = ppuVar4;
        func_0x000100063660(pppuVar6,&ppuStack_238);
        _objc_release(ppuVar10);
        _objc_release(ppuVar3);
        if ((int)pppuVar6 == 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf3f580();
          _objc_release(uVar7);
        }
        else {
          FUN_105333d24(&puStack_148,&ppuStack_220);
        }
        func_0x0001002a1b38(&ppuStack_220);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  if (param_7 == (char *)0x0) {
    pcVar8 = "";
  }
  else {
    _objc_retainAutorelease();
    pcVar8 = param_7;
    func_0x00010bdc3520(param_7);
  }
  func_0x00010002b838(&ppuStack_238,pcVar8);
  func_0x00010bdd44e0(&lStack_250,param_1);
  if (cStack_221 < '\0') {
    func_0x000100033dac(&ppuStack_220,ppuStack_238,lStack_230);
  }
  else {
    lStack_218 = lStack_230;
    ppuStack_220 = ppuStack_238;
    lStack_210 = CONCAT17(cStack_221,uStack_228);
  }
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  FUN_105335e68(&uStack_208,puStack_148,lStack_140,
                (lStack_140 - (long)puStack_148 >> 3) * -0xf0f0f0f0f0f0f0f);
  puStack_1f0 = (undefined *)0x0;
  puStack_1e8 = (undefined *)0x0;
  puStack_1e0 = (undefined *)0x0;
  func_0x000100292164(&puStack_1f0,lStack_250,lStack_248,lStack_248 - lStack_250);
  _objc_retain(param_1);
  uVar7 = param_9;
  lStack_1d8 = param_1;
  _objc_retainBlock();
  uStack_1d0 = uVar7;
  _objc_retain(param_3);
  uStack_1b8 = CONCAT71(uStack_1b8._1_7_,param_5);
  uVar7 = param_10;
  lStack_1c8 = param_3;
  uStack_1c0 = uVar12;
  _objc_retainBlock();
  uStack_1b0 = uVar7;
  FUN_105333d80(apuStack_108,&ppuStack_220);
  func_0x00010054ebfc(apuStack_108);
  _objc_release(uStack_1b0);
  _objc_release(lStack_1c8);
  _objc_release(uStack_1d0);
  _objc_release(lStack_1d8);
  if (puStack_1f0 != (undefined *)0x0) {
    puStack_1e8 = puStack_1f0;
    __ZdlPv();
  }
  apuStack_108[0] = &uStack_208;
  FUN_105335fc8(apuStack_108);
  if (lStack_210 < 0) {
    __ZdlPv(ppuStack_220);
  }
  if (lStack_250 != 0) {
    lStack_248 = lStack_250;
    __ZdlPv();
  }
  if (cStack_221 < '\0') {
    __ZdlPv(ppuStack_238);
  }
  ppuStack_220 = &puStack_148;
  FUN_105335fc8(&ppuStack_220);
  func_0x0001000e2a84(ppuVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_250 != 0) {
    lStack_248 = lStack_250;
    __ZdlPv();
  }
  if (cStack_221 < '\0') {
    __ZdlPv(ppuStack_238);
  }
  ppuStack_220 = &puStack_148;
  FUN_105335fc8(&ppuStack_220);
  func_0x0001000e2a84(ppuVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  __Unwind_Resume();
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  return;
}



/* Entry: 105333cec; end: 105333d23;  */

void FUN_105333cec(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd2ab8);
  return;
}



/* Entry: 105333d24; end: 105333d7f;  */

void FUN_105333d24(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001002a0cf8(uVar1,0);
    lVar2 = uVar1 + 0x88;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_105335b70(param_1,param_2);
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 105333d80; end: 1053342bf;  */

/* WARNING: Removing unreachable block (ram,0x000105333f20) */

void FUN_105333d80(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  byte *pbVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  double dVar18;
  undefined8 *puStack_68;
  
  puVar7 = (undefined8 *)0xb8;
  __Znwm();
  *puVar7 = FUN_1053366b0;
  puVar7[1] = FUN_105336998;
  puVar7[0x15] = param_2;
  func_0x00010054f3f8(puVar7 + 2);
  lVar12 = puVar7[2];
  if (lVar12 != 0) {
    plVar1 = (long *)(lVar12 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = lVar12;
  puStack_68 = (undefined8 *)0x0;
  func_0x00010054ebfc(&puStack_68);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000100033dac(puVar7 + 4,*param_2,param_2[1]);
  }
  else {
    uVar9 = *param_2;
    puVar7[5] = param_2[1];
    puVar7[4] = uVar9;
    puVar7[6] = param_2[2];
  }
  puVar7[8] = 0;
  puVar7[7] = 0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  FUN_105335e68(puVar7 + 10,param_2[3],param_2[4],
                ((long)(param_2[4] - param_2[3]) >> 3) * -0xf0f0f0f0f0f0f0f);
  dVar18 = 0.0;
  puVar7[0xe] = 0;
  puVar7[0xd] = 0;
  puVar7[0x10] = 0;
  puVar7[0xf] = 0;
  puVar7[0x12] = 0;
  puVar7[0x11] = 0;
  if (puVar7 + 0x10 != param_2 + 6) {
    func_0x0001006202f4();
  }
  (**(code **)(**(long **)(param_2[9] + 0x38) + 0x10))
            (puVar7 + 0x14,*(long **)(param_2[9] + 0x38),puVar7 + 4,0);
  puVar7[0x13] = puVar7[0x14];
  plVar1 = (long *)(puVar7[0x14] + 8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((uint)*(undefined8 *)(puVar7[0x13] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar7 + 0x16) = 0;
    lVar12 = puVar7[0x13];
    ppuVar8 = &PTR___tlv_bootstrap_11340e278;
    (*(code *)PTR___tlv_bootstrap_11340e278)();
    puVar17 = *ppuVar8;
    if (puVar17 == (undefined *)0x0) {
      func_0x00010054ef74();
      puVar17 = *ppuVar8;
    }
    plVar1 = (long *)(lVar12 + 0x10);
    do {
      lVar14 = *plVar1;
      if (lVar14 == 0) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          pbVar15 = *(byte **)(lVar12 + 0x90);
          bVar2 = pbVar15[1];
          uVar13 = (ulong)bVar2;
          pbVar10 = pbVar15;
          if (bVar2 == *pbVar15) {
            uVar11 = (uint)bVar2 << 1;
            if (0x7f < uVar11) {
              uVar11 = 0x80;
            }
            pbVar10 = (byte *)(ulong)(uVar11 * 0x18 + 0x10);
            _malloc();
            uVar13 = 0;
            *pbVar10 = (byte)uVar11;
            pbVar10[1] = 0;
            pbVar10[8] = 0;
            pbVar10[9] = 0;
            pbVar10[10] = 0;
            pbVar10[0xb] = 0;
            pbVar10[0xc] = 0;
            pbVar10[0xd] = 0;
            pbVar10[0xe] = 0;
            pbVar10[0xf] = 0;
            *(byte **)(pbVar15 + 8) = pbVar10;
            *(byte **)(lVar12 + 0x90) = pbVar10;
          }
          pbVar15 = pbVar10 + uVar13 * 0x18 + 0x10;
          pbVar15[0] = 0;
          pbVar15[1] = 0;
          pbVar15[2] = 0;
          pbVar15[3] = 0;
          pbVar15[4] = 0;
          pbVar15[5] = 0;
          pbVar15[6] = 0;
          pbVar15[7] = 0;
          *(undefined8 **)(pbVar10 + uVar13 * 0x18 + 0x18) = puVar7;
          *(undefined **)(pbVar10 + uVar13 * 0x18 + 0x20) = puVar17;
          *(char *)(*(long *)(lVar12 + 0x90) + 1) = *(char *)(*(long *)(lVar12 + 0x90) + 1) + '\x01'
          ;
          *(undefined8 *)(lVar12 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar14 >> 1 & 1) == 0);
  }
  if (((uint)*(undefined8 *)(puVar7[0x13] + 0x10) >> 5 & 1) == 0) {
    iVar3 = *(int *)(puVar7[0x13] + 0x98);
    func_0x00010054ebfc(puVar7 + 0x13);
    func_0x00010054ebfc(puVar7 + 0x14);
    uVar9 = *(undefined8 *)(*(long *)(puVar7[0x15] + 0x48) + 0x10);
    if (iVar3 == 0) {
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65a80();
      _objc_release(uVar9);
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3f360();
      lVar12 = puVar7[0x15];
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(*(long *)(lVar12 + 0x48) + 0x10);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65a80();
      lVar12 = puVar7[0x15];
      _objc_release(uVar9);
      (**(code **)(*(long *)(lVar12 + 0x50) + 0x10))();
    }
    _CACurrentMediaTime();
    uVar9 = *(undefined8 *)(*(long *)(puVar7[0x15] + 0x48) + 0x10);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(*(undefined8 *)(puVar7[0x15] + 0x58));
    lVar12 = puVar7[0x15];
    func_0x00010bf3f200(dVar18 - *(double *)(lVar12 + 0x60),uVar9);
    lVar14 = puVar7[0x15];
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(*(long *)(lVar14 + 0x48) + 0x10);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3f740(dVar18 - *(double *)(lVar12 + 0x60));
    lVar12 = puVar7[0x15];
    _objc_release(uVar9);
    (**(code **)(*(long *)(lVar12 + 0x70) + 0x10))(*(long *)(lVar12 + 0x70),iVar3 == 0,0);
    puVar16 = puVar7 + 3;
    func_0x0001005ed54c(*puVar16,puVar16);
    func_0x0001005f9520(puVar16,0);
    if (puVar7[0x10] != 0) {
      puVar7[0x11] = puVar7[0x10];
      __ZdlPv();
    }
    if (*(char *)((long)puVar7 + 0x7f) < '\0') {
      __ZdlPv(puVar7[0xd]);
    }
    puStack_68 = puVar7 + 10;
    FUN_105335fc8(&puStack_68);
    if (*(char *)((long)puVar7 + 0x4f) < '\0') {
      __ZdlPv(puVar7[7]);
    }
    if (*(char *)((long)puVar7 + 0x37) < '\0') {
      __ZdlPv(puVar7[4]);
    }
    func_0x00010054ec98(puVar7 + 3);
    func_0x00010054ebfc(puVar7 + 2);
    __ZdlPv(puVar7);
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(&puStack_68,puVar7[0x13] + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(&puStack_68);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1053341f8);
  (*pcVar6)();
}



/* Entry: 1053342c0; end: 105334337;  */

undefined8 * FUN_1053342c0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  _objc_release(param_1[0xe]);
  _objc_release(param_1[0xb]);
  _objc_release(param_1[10]);
  _objc_release(param_1[9]);
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  FUN_105335fc8(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 105334338; end: 105334a1b; -[SCConfigRepository _writeDeltaSyncToFileSystem:crashRecovery:loginSync:lastUpdatedTimestamp:etag:bitmap:updatedConfigIds:etagDeleteBlock:syncCompleteBlock:] */

void FUN_105334338(long param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,char *param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_2d0;
  long lStack_2c8;
  undefined **ppuStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  ulong uStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined7 uStack_1c8;
  char cStack_1c1;
  undefined **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined7 uStack_1b0;
  char cStack_1a9;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined7 uStack_198;
  char cStack_191;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  char *pcStack_118;
  long alStack_110 [17];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uVar12 = 0xc2000000;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_105334a1c;
  puStack_120 = &UNK_11087bb90;
  _objc_retain(param_7);
  ppuVar1 = &puStack_138;
  pcStack_118 = param_7;
  func_0x0001001071d4();
  _objc_release(pcStack_118);
  _CACurrentMediaTime();
  puStack_150 = (undefined *)0x0;
  lStack_148 = 0;
  uStack_140 = 0;
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    lStack_2d0 = 0;
    lStack_2c8 = 0;
  }
  else {
    lStack_2d0 = 0;
    lStack_2c8 = 0;
    lVar9 = *plStack_180;
    do {
      lVar10 = 0;
      do {
        if (*plStack_180 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar11 = *(undefined8 *)(lStack_188 + lVar10 * 8);
        ppuStack_2b0 = &PTR_DAT_110cf7e70;
        uStack_2a8 = 0;
        uStack_298 = 0;
        lStack_290 = 0;
        lStack_2a0 = 0;
        uStack_288 = uStack_288 & 0xffffffff00000000;
        puStack_280 = &DAT_11383d918;
        puStack_278 = &DAT_11383d918;
        puStack_270 = &DAT_11383d918;
        uStack_260 = 0;
        uStack_268 = 0;
        uStack_250 = 0;
        uStack_258 = 0;
        uStack_240 = 0;
        uStack_248 = 0;
        uStack_230 = 0;
        lStack_238 = 0;
        uVar7 = uVar11;
        func_0x00010bf63640();
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        uVar3 = uVar7;
        func_0x00010bf25f00();
        uVar4 = uVar11;
        func_0x00010bf63640();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c08fa60();
        lStack_1a0 = (long)(int)uVar5;
        pppuVar6 = &ppuStack_2b0;
        uStack_1a8 = uVar3;
        func_0x000100063660(pppuVar6,&uStack_1a8);
        _objc_release(uVar4);
        _objc_release(uVar7);
        if ((int)pppuVar6 == 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf3f580();
          _objc_release(uVar7);
        }
        else {
          FUN_105333d24(&puStack_150,&ppuStack_2b0);
          func_0x00010bf6ce60();
          if ((int)uVar11 == 0) {
            lStack_2c8 = lStack_2c8 + 1;
          }
          else {
            lStack_2d0 = lStack_2d0 + 1;
          }
        }
        func_0x0001002a1b38(&ppuStack_2b0);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  (**(code **)(**(long **)(param_1 + 0x38) + 0x60))(&uStack_1a8);
  if (param_7 == (char *)0x0) {
    pcVar8 = "";
  }
  else {
    _objc_retainAutorelease();
    pcVar8 = param_7;
    func_0x00010bdc3520(param_7);
  }
  func_0x00010002b838(&ppuStack_1c0,pcVar8);
  FUN_10533a6e0(&uStack_1d8,*(undefined8 *)(param_1 + 0x38));
  func_0x00010bdd44e0(&lStack_1f0,param_1);
  if (cStack_1a9 < '\0') {
    func_0x000100033dac(&ppuStack_2b0,ppuStack_1c0,uStack_1b8);
  }
  else {
    uStack_2a8 = uStack_1b8;
    ppuStack_2b0 = ppuStack_1c0;
    lStack_2a0 = CONCAT17(cStack_1a9,uStack_1b0);
  }
  if (cStack_191 < '\0') {
    func_0x000100033dac(&uStack_298,uStack_1a8,lStack_1a0);
  }
  else {
    lStack_290 = lStack_1a0;
    uStack_298 = uStack_1a8;
    uStack_288 = CONCAT17(cStack_191,uStack_198);
  }
  puStack_280 = (undefined *)0x0;
  puStack_278 = (undefined *)0x0;
  puStack_270 = (undefined *)0x0;
  FUN_105335e68(&puStack_280,puStack_150,lStack_148,
                (lStack_148 - (long)puStack_150 >> 3) * -0xf0f0f0f0f0f0f0f);
  if (cStack_1c1 < '\0') {
    func_0x000100033dac(&uStack_268,uStack_1d8,uStack_1d0);
  }
  else {
    uStack_260 = uStack_1d0;
    uStack_268 = uStack_1d8;
    uStack_258 = CONCAT17(cStack_1c1,uStack_1c8);
  }
  uStack_250 = 0;
  uStack_248 = 0;
  uStack_240 = 0;
  func_0x000100292164(&uStack_250,lStack_1f0,lStack_1e8,lStack_1e8 - lStack_1f0);
  _objc_retain(param_1);
  uStack_230 = CONCAT71(uStack_230._1_7_,param_4);
  uVar7 = param_10;
  lStack_238 = param_1;
  _objc_retainBlock();
  lStack_220 = lStack_2c8;
  lStack_218 = lStack_2d0;
  uVar3 = param_11;
  uStack_228 = uVar7;
  uStack_210 = uVar12;
  uStack_208 = param_5;
  _objc_retainBlock();
  uStack_200 = uVar3;
  _objc_retain(param_9);
  uStack_1f8 = param_9;
  FUN_105334a54(alStack_110,&ppuStack_2b0);
  func_0x00010054ebfc(alStack_110);
  FUN_105335020(&ppuStack_2b0);
  if (lStack_1f0 != 0) {
    lStack_1e8 = lStack_1f0;
    __ZdlPv();
  }
  if (cStack_1c1 < '\0') {
    __ZdlPv(uStack_1d8);
  }
  if (cStack_1a9 < '\0') {
    __ZdlPv(ppuStack_1c0);
  }
  if (cStack_191 < '\0') {
    __ZdlPv(uStack_1a8);
  }
  ppuStack_2b0 = &puStack_150;
  FUN_105335fc8(&ppuStack_2b0);
  func_0x0001000e2a84(ppuVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    alStack_110[0] = param_1;
    FUN_105335fc8(alStack_110);
    if ((long)uStack_288 < 0) {
      __ZdlPv(uStack_298);
    }
    if (lStack_2a0 < 0) {
      __ZdlPv(ppuStack_2b0);
    }
    if (lStack_1f0 != 0) {
      lStack_1e8 = lStack_1f0;
      __ZdlPv();
    }
    if (cStack_1c1 < '\0') {
      __ZdlPv(uStack_1d8);
    }
    if (cStack_1a9 < '\0') {
      __ZdlPv(ppuStack_1c0);
    }
    if (cStack_191 < '\0') {
      __ZdlPv(uStack_1a8);
    }
    ppuStack_2b0 = &puStack_150;
    FUN_105335fc8(&ppuStack_2b0);
    func_0x0001000e2a84(ppuVar1);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_3);
    __Unwind_Resume();
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    return;
  }
  return;
}



/* Entry: 105334a1c; end: 105334a53;  */

void FUN_105334a1c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd2af8);
  return;
}



/* Entry: 105334a54; end: 10533501f;  */

/* WARNING: Removing unreachable block (ram,0x000105334c38) */

void FUN_105334a54(long *param_1,double param_2,double *param_3)

{
  double *pdVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined8 *puStack_68;
  
  puVar8 = (undefined8 *)0xb8;
  __Znwm();
  *puVar8 = FUN_105336304;
  puVar8[1] = FUN_105336614;
  pdVar1 = (double *)(puVar8 + 4);
  puVar8[0x15] = param_3;
  func_0x00010054f3f8(puVar8 + 2);
  lVar13 = puVar8[2];
  if (lVar13 != 0) {
    plVar2 = (long *)(lVar13 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = *plVar2 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *param_1 = lVar13;
  puStack_68 = (undefined8 *)0x0;
  func_0x00010054ebfc(&puStack_68);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000100033dac(pdVar1,*param_3,param_3[1]);
  }
  else {
    param_2 = *param_3;
    puVar8[5] = param_3[1];
    *pdVar1 = param_2;
    puVar8[6] = param_3[2];
  }
  if (*(char *)((long)param_3 + 0x2f) < '\0') {
    func_0x000100033dac(puVar8 + 7,param_3[3],param_3[4]);
  }
  else {
    param_2 = param_3[3];
    puVar8[8] = param_3[4];
    puVar8[7] = param_2;
    puVar8[9] = param_3[5];
  }
  puVar17 = puVar8 + 10;
  *puVar17 = 0;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0;
  FUN_105335e68(puVar17,param_3[6],param_3[7],
                ((long)param_3[7] - (long)param_3[6] >> 3) * -0xf0f0f0f0f0f0f0f);
  if (*(char *)((long)param_3 + 0x5f) < '\0') {
    func_0x000100033dac(puVar8 + 0xd,param_3[9],param_3[10]);
  }
  else {
    param_2 = param_3[9];
    puVar8[0xe] = param_3[10];
    puVar8[0xd] = param_2;
    puVar8[0xf] = param_3[0xb];
  }
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  if (pdVar1 != param_3) {
    func_0x0001006202f4();
  }
  (**(code **)(**(long **)((long)param_3[0xf] + 0x38) + 0x18))
            (puVar8 + 0x14,*(long **)((long)param_3[0xf] + 0x38),pdVar1,
             *(undefined1 *)(param_3 + 0x10),0);
  puVar8[0x13] = puVar8[0x14];
  plVar2 = (long *)(puVar8[0x14] + 8);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = *plVar2 + 4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (((uint)*(undefined8 *)(puVar8[0x13] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar8 + 0x16) = 0;
    lVar13 = puVar8[0x13];
    ppuVar9 = &PTR___tlv_bootstrap_11340e278;
    (*(code *)PTR___tlv_bootstrap_11340e278)();
    puVar19 = *ppuVar9;
    if (puVar19 == (undefined *)0x0) {
      func_0x00010054ef74();
      puVar19 = *ppuVar9;
    }
    plVar2 = (long *)(lVar13 + 0x10);
    do {
      lVar15 = *plVar2;
      if (lVar15 == 0) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          pbVar16 = *(byte **)(lVar13 + 0x90);
          bVar3 = pbVar16[1];
          uVar14 = (ulong)bVar3;
          pbVar11 = pbVar16;
          if (bVar3 == *pbVar16) {
            uVar12 = (uint)bVar3 << 1;
            if (0x7f < uVar12) {
              uVar12 = 0x80;
            }
            pbVar11 = (byte *)(ulong)(uVar12 * 0x18 + 0x10);
            _malloc();
            uVar14 = 0;
            *pbVar11 = (byte)uVar12;
            pbVar11[1] = 0;
            pbVar11[8] = 0;
            pbVar11[9] = 0;
            pbVar11[10] = 0;
            pbVar11[0xb] = 0;
            pbVar11[0xc] = 0;
            pbVar11[0xd] = 0;
            pbVar11[0xe] = 0;
            pbVar11[0xf] = 0;
            *(byte **)(pbVar16 + 8) = pbVar11;
            *(byte **)(lVar13 + 0x90) = pbVar11;
          }
          pbVar16 = pbVar11 + uVar14 * 0x18 + 0x10;
          pbVar16[0] = 0;
          pbVar16[1] = 0;
          pbVar16[2] = 0;
          pbVar16[3] = 0;
          pbVar16[4] = 0;
          pbVar16[5] = 0;
          pbVar16[6] = 0;
          pbVar16[7] = 0;
          *(undefined8 **)(pbVar11 + uVar14 * 0x18 + 0x18) = puVar8;
          *(undefined **)(pbVar11 + uVar14 * 0x18 + 0x20) = puVar19;
          *(char *)(*(long *)(lVar13 + 0x90) + 1) = *(char *)(*(long *)(lVar13 + 0x90) + 1) + '\x01'
          ;
          *(undefined8 *)(lVar13 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar15 >> 1 & 1) == 0);
  }
  if (((uint)*(undefined8 *)(puVar8[0x13] + 0x10) >> 5 & 1) == 0) {
    iVar4 = *(int *)(puVar8[0x13] + 0x98);
    func_0x00010054ebfc(puVar8 + 0x13);
    func_0x00010054ebfc(puVar8 + 0x14);
    uVar10 = *(undefined8 *)(*(long *)(puVar8[0x15] + 0x78) + 0x10);
    if (iVar4 == 0) {
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65a80();
      _objc_release(uVar10);
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3f360();
      lVar13 = puVar8[0x15];
      _objc_release(uVar10);
      uVar10 = *(undefined8 *)(*(long *)(lVar13 + 0x78) + 0x10);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65a80();
      lVar13 = puVar8[0x15];
      _objc_release(uVar10);
      (**(code **)(*(long *)(lVar13 + 0x88) + 0x10))();
    }
    _CACurrentMediaTime();
    uVar10 = *(undefined8 *)(*(long *)(puVar8[0x15] + 0x78) + 0x10);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = puVar8[0x15];
    func_0x00010bf3f200(param_2 - *(double *)(lVar13 + 0xa0));
    lVar15 = puVar8[0x15];
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(*(long *)(lVar15 + 0x78) + 0x10);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3f740(param_2 - *(double *)(lVar13 + 0xa0));
    lVar13 = puVar8[0x15];
    _objc_release(uVar10);
    lVar13 = *(long *)(lVar13 + 0xb0);
    if (iVar4 == 0) {
      puVar19 = *(undefined **)(puVar8[0x15] + 0xb8);
    }
    else {
      puVar19 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      _objc_retainAutoreleasedReturnValue();
    }
    (**(code **)(lVar13 + 0x10))(lVar13,iVar4 == 0,puVar19);
    if (iVar4 != 0) {
      _objc_release(puVar19);
    }
    puVar18 = puVar8 + 3;
    func_0x0001005ed54c(*puVar18,puVar18);
    func_0x0001005f9520(puVar18,0);
    if (puVar8[0x10] != 0) {
      puVar8[0x11] = puVar8[0x10];
      __ZdlPv();
    }
    if (*(char *)((long)puVar8 + 0x7f) < '\0') {
      __ZdlPv(puVar8[0xd]);
    }
    puStack_68 = puVar17;
    FUN_105335fc8(&puStack_68);
    if (*(char *)((long)puVar8 + 0x4f) < '\0') {
      __ZdlPv(puVar8[7]);
    }
    if (*(char *)((long)puVar8 + 0x37) < '\0') {
      __ZdlPv(*pdVar1);
    }
    func_0x00010054ec98(puVar8 + 3);
    func_0x00010054ebfc(puVar8 + 2);
    __ZdlPv(puVar8);
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(&puStack_68,puVar8[0x13] + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(&puStack_68);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x105334f30);
  (*pcVar7)();
}



/* Entry: 105335020; end: 1053350b7;  */

undefined8 * FUN_105335020(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  _objc_release(param_1[0x17]);
  _objc_release(param_1[0x16]);
  _objc_release(param_1[0x11]);
  _objc_release(param_1[0xf]);
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  puStack_28 = param_1 + 6;
  FUN_105335fc8(&puStack_28);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1053350b8; end: 1053350d3; -[SCConfigRepository getAllConfigs] */

void FUN_1053350b8(void)

{
  func_0x00010be1cde0();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053350d4; end: 1053354f7; -[SCConfigRepository _syncAserAndRegisterUpdatedIds:updateImmediately:isFullSync:] */

void FUN_1053350d4(long param_1,undefined8 param_2,long param_3,undefined4 param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lVar4 != 0) {
    lVar15 = *plStack_1a0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_1a0 != lVar15) {
          _objc_enumerationMutation(param_3);
        }
        uVar16 = *(undefined8 *)(lStack_1a8 + lVar13 * 8);
        uVar7 = uVar16;
        func_0x00010c0d54e0();
        if ((int)uVar7 != 5) {
          uVar7 = uVar16;
          func_0x00010bf45ee0(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,uVar7);
          _objc_release(uVar7);
          uVar5 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar16;
          func_0x00010bf45ee0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf4b900(uVar5,param_2,uVar7);
          _objc_release(uVar7);
          _objc_release(uVar5);
          if ((int)uVar6 != 0) {
            uVar7 = uVar16;
            func_0x00010bf6ce60();
            puVar8 = puVar3;
            if ((int)uVar7 == 0) {
              puVar8 = puVar2;
            }
            func_0x00010befa120(puVar8,param_2,uVar16);
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar4 != lVar13);
      lVar4 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar4 != 0);
  }
  lVar15 = 0;
  _objc_release(param_3);
  lVar4 = param_1;
  func_0x00010c0d7200();
  if ((int)lVar4 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06000();
    _objc_release(uVar7);
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    lVar15 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar15;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar13 = *plStack_1e0;
      do {
        lVar14 = 0;
        do {
          if (*plStack_1e0 != lVar13) {
            _objc_enumerationMutation(lVar15);
          }
          uVar7 = *(undefined8 *)(lStack_1e8 + lVar14 * 8);
          puVar8 = puVar1;
          func_0x00010bf4b900(puVar1,param_2,uVar7);
          if (((ulong)puVar8 & 1) == 0) {
            lVar9 = param_1;
            func_0x00010bfc3f60(param_1,param_2,uVar7);
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar9;
            func_0x00010bf529e0();
            if (lVar10 == 0) {
              uVar7 = *(undefined8 *)(param_1 + 0x10);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf06020();
              _objc_release(uVar7);
            }
            else {
              func_0x00010befa160(puVar2,param_2,lVar9);
            }
            _objc_release(lVar9);
          }
          lVar14 = lVar14 + 1;
        } while (lVar4 != lVar14);
        lVar4 = lVar15;
        func_0x00010bf52a60(lVar15,param_2,&uStack_1f0,auStack_170,0x10);
      } while (lVar4 != 0);
    }
    _objc_release(lVar15);
    func_0x00010be5d200(param_1);
  }
  puVar8 = puVar3;
  if (param_5 == 0) {
    puVar8 = (undefined *)0x0;
  }
  func_0x00010c285ae0(*(undefined8 *)(param_1 + 0x18),param_2,puVar2,puVar8,param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(lVar15);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(param_3);
    __Unwind_Resume();
    if (*(long *)(lVar4 + 0x38) == 0) {
      uVar7 = *(undefined8 *)(lVar4 + 0x10);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3f340();
      _objc_release(uVar7);
      puVar1 = PTR____NSArray0__struct_11034ab48;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      plVar11 = *(long **)(lVar4 + 0x38);
      (**(code **)(*plVar11 + 0x78))();
      if (-1 < (int)plVar11) {
        iVar12 = 0;
        do {
          lVar15 = lVar4;
          func_0x00010be1dfe0(lVar4,param_2,iVar12);
          _objc_retainAutoreleasedReturnValue();
          if ((lVar15 != 0) && (lVar13 = lVar15, func_0x00010bf529e0(), lVar13 != 0)) {
            func_0x00010befa160(puVar1,param_2,lVar15);
          }
          _objc_release(lVar15);
          iVar12 = iVar12 + 1;
        } while ((int)plVar11 + 1 != iVar12);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053354f8; end: 105335607; -[SCConfigRepository _getAllConfigsFromFileSystem] */

void FUN_1053354f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3f340();
    _objc_release(uVar5);
    puVar1 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    plVar2 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar2 + 0x78))();
    if (-1 < (int)plVar2) {
      iVar6 = 0;
      do {
        lVar3 = param_1;
        func_0x00010be1dfe0(param_1,param_2,iVar6);
        _objc_retainAutoreleasedReturnValue();
        if ((lVar3 != 0) && (lVar4 = lVar3, func_0x00010bf529e0(), lVar4 != 0)) {
          func_0x00010befa160(puVar1,param_2,lVar3);
        }
        _objc_release(lVar3);
        iVar6 = iVar6 + 1;
      } while ((int)plVar2 + 1 != iVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105335608; end: 1053356a7; -[SCConfigRepository _bitmapVectorFromData:] */

void FUN_105335608(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_4;
    _objc_retainAutorelease(param_4);
    func_0x00010bf25f00();
    lVar2 = param_4;
    func_0x00010c08fa60(param_4);
    FUN_105336148(param_1,lVar1,lVar1 + lVar2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053356a8; end: 1053356eb; -[SCConfigRepository _dataFromBitmap:] */

void FUN_1053356a8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *param_3;
  if (lVar1 != param_3[1]) {
    func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar1,param_3[1] - lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053356ec; end: 105335783; -[SCConfigRepository getBitmapForTweakSync] */

void FUN_1053356ec(long param_1,undefined8 param_2)

{
  undefined8 auStack_50 [2];
  char cStack_39;
  long lStack_38;
  long lStack_30;
  
  if (*(long **)(param_1 + 0x38) == (long *)0x0) {
    param_1 = 0;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x50))(auStack_50);
    func_0x00010bdf7c80(param_1,param_2,&lStack_38);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_38 != 0) {
      lStack_30 = lStack_38;
      __ZdlPv();
    }
    if (cStack_39 < '\0') {
      __ZdlPv(auStack_50[0]);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105335784; end: 1053357c3;  */

undefined8 * FUN_105335784(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1053357c4; end: 105335903; -[SCConfigRepository getBitmapForNextSyncMatchingEtag:] */

void FUN_1053357c4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  long lStack_40;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x38) == 0) || (uVar1 = param_3, func_0x00010c08fa60(), uVar1 == 0)) {
    param_1 = 0;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x50))(auStack_60);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    func_0x00010bffa180();
    if ((puVar2 == (undefined *)0x0) ||
       (uVar1 = param_3, func_0x00010c0720c0(param_3,param_2,puVar2), (uVar1 & 1) == 0)) {
      param_1 = 0;
    }
    else {
      func_0x00010bdf7c80(param_1,param_2,&lStack_48);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
    if (lStack_48 != 0) {
      lStack_40 = lStack_48;
      __ZdlPv();
    }
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105335904; end: 105335b03; -[SCConfigRepository _fetchConfigRulesFromFileSystemForConfigIDs:] */

void FUN_105335904(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if ((param_3 != 0) &&
     (lVar2 = param_3, func_0x00010bf529e0(), puVar3 = PTR____NSArray0__struct_11034ab48, lVar2 != 0
     )) {
    if (*(long *)(param_1 + 0x38) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3f340();
      _objc_release(uVar6);
      puVar3 = PTR____NSArray0__struct_11034ab48;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      _objc_retain(param_3);
      lVar2 = param_3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_3);
          }
          lVar4 = param_1;
          func_0x00010be1dfc0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bf529e0();
          if (lVar5 != 0) {
            func_0x00010befa160(puVar3);
          }
          _objc_release(lVar4);
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        lVar2 = param_3;
        func_0x00010bf52a60();
      }
      _objc_release(param_3);
    }
  }
  lVar2 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(param_3);
  __Unwind_Resume(lVar2);
  _objc_storeStrong(lVar2 + 0x40,0);
  _objc_storeStrong(lVar2 + 0x30,0);
  _objc_storeStrong(lVar2 + 0x28,0);
  _objc_storeStrong(lVar2 + 0x20,0);
  _objc_storeStrong(lVar2 + 0x18,0);
  _objc_storeStrong(lVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + 8,0);
  return;
}



/* Entry: 105335b04; end: 105335b6f; -[SCConfigRepository .cxx_destruct] */

void FUN_105335b04(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 105335b70; end: 105335c9f;  */

undefined1  [16] FUN_105335b70(long *param_1,char *param_2,char *param_3,long param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar9 = param_1[1] - *param_1;
  uVar5 = (lVar9 >> 3) * -0xf0f0f0f0f0f0f0f + 1;
  if (uVar5 < 0x1e1e1e1e1e1e1e2) {
    plVar7 = param_1 + 2;
    lVar4 = *plVar7 - *param_1 >> 3;
    uVar6 = lVar4 * -0x1e1e1e1e1e1e1e1e;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0xf0f0f0f0f0f0ef < (ulong)(lVar4 * -0xf0f0f0f0f0f0f0f)) {
      uVar6 = 0x1e1e1e1e1e1e1e1;
    }
    plStack_38 = plVar7;
    if (uVar6 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = plVar7;
      FUN_105335cb4();
    }
    lVar9 = (long)plVar3 + lVar9;
    plStack_40 = plVar3 + uVar6 * 0x11;
    plStack_58 = plVar3;
    plStack_50 = (long *)lVar9;
    plStack_48 = (long *)lVar9;
    func_0x0001002a0cf8(lVar9,0,param_2);
    plStack_48 = (long *)(lVar9 + 0x88);
    lVar4 = *param_1;
    lVar9 = lVar9 + (lVar4 - param_1[1]);
    FUN_105335cf4(plVar7,lVar4,param_1[1],lVar9);
    plVar7 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar9;
    lVar9 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar9;
    FUN_105335e1c(&plStack_58);
    auVar10._8_8_ = lVar4;
    auVar10._0_8_ = plVar7;
    return auVar10;
  }
  FUN_105335ca0();
  FUN_105335e1c(&plStack_58);
  __Unwind_Resume(param_1);
  pcVar1 = "vector";
  func_0x000104bd47e8("vector");
  if ((char *)0x1e1e1e1e1e1e1e1 < param_2) {
    func_0x000104bd35f4();
    pcVar2 = param_2;
    pcVar8 = param_2;
    if (param_2 != param_3) {
      do {
        pcVar2 = (char *)0x0;
        FUN_105335d5c(param_4,0,pcVar8);
        pcVar8 = pcVar8 + 0x88;
        param_4 = param_4 + 0x88;
      } while (pcVar8 != param_3);
      do {
        pcVar1 = param_2;
        func_0x0001002a1b38(param_2);
        param_2 = param_2 + 0x88;
      } while (param_2 != param_3);
    }
    auVar12._8_8_ = pcVar2;
    auVar12._0_8_ = pcVar1;
    return auVar12;
  }
  lVar9 = (long)param_2 * 0x88;
  __Znwm(lVar9);
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = lVar9;
  return auVar11;
}



/* Entry: 105335ca0; end: 105335cb3;  */

void FUN_105335ca0(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  func_0x000104bd47e8("vector");
  if (0x1e1e1e1e1e1e1e1 < param_2) {
    func_0x000104bd35f4();
    uVar1 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_105335d5c(param_4,0,uVar1);
        uVar1 = uVar1 + 0x88;
        param_4 = param_4 + 0x88;
      } while (uVar1 != param_3);
      do {
        func_0x0001002a1b38(param_2);
        param_2 = param_2 + 0x88;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm(param_2 * 0x88);
  return;
}



/* Entry: 105335cb4; end: 105335cf3;  */

void FUN_105335cb4(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  if (0x1e1e1e1e1e1e1e1 < param_2) {
    func_0x000104bd35f4();
    uVar1 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_105335d5c(param_4,0,uVar1);
        uVar1 = uVar1 + 0x88;
        param_4 = param_4 + 0x88;
      } while (uVar1 != param_3);
      do {
        func_0x0001002a1b38(param_2);
        param_2 = param_2 + 0x88;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm(param_2 * 0x88);
  return;
}



/* Entry: 105335cf4; end: 105335d5b;  */

void FUN_105335cf4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  if (param_2 != param_3) {
    do {
      FUN_105335d5c(param_4,0,lVar1);
      lVar1 = lVar1 + 0x88;
      param_4 = param_4 + 0x88;
    } while (lVar1 != param_3);
    do {
      func_0x0001002a1b38(param_2);
      param_2 = param_2 + 0x88;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 105335d5c; end: 105335e1b;  */

undefined8 * FUN_105335d5c(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  
  *param_1 = &PTR_DAT_110cf7e70;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = &DAT_11383d918;
  param_1[7] = &DAT_11383d918;
  param_1[8] = &DAT_11383d918;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  if (param_1 != param_3) {
    if ((param_2 & 1) != 0) {
      param_2 = *(ulong *)(param_2 & 0xfffffffffffffffe);
    }
    uVar1 = param_3[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (param_2 == uVar1) {
      func_0x00010b50c090(param_1,param_3);
    }
    else {
      func_0x00010b50b8d0(param_1);
      func_0x00010b50be84(param_1,param_3);
    }
  }
  return param_1;
}



/* Entry: 105335e1c; end: 105335e67;  */

long * FUN_105335e1c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar1 != lVar2) {
    param_1[2] = lVar2 + -0x88;
    func_0x0001002a1b38();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 105335e68; end: 105335eeb;  */

void FUN_105335e68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_105335eec(param_1,param_4);
    lVar1 = param_1 + 0x10;
    FUN_105335f34(lVar1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 105335eec; end: 105335f33;  */

long * FUN_105335eec(long *param_1,ulong param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 < 0x1e1e1e1e1e1e1e2) {
    plVar1 = param_1 + 2;
    FUN_105335cb4();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x11);
    return plVar1;
  }
  FUN_105335ca0();
  if (param_2 != param_3) {
    lVar2 = 0;
    do {
      func_0x0001002a0cf8((long)param_4 + lVar2,0,param_2 + lVar2);
      lVar2 = lVar2 + 0x88;
    } while (param_2 + lVar2 != param_3);
    param_4 = (long *)((long)param_4 + lVar2);
  }
  return param_4;
}



/* Entry: 105335f34; end: 105335fc7;  */

long FUN_105335f34(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_2 != param_3) {
    lVar1 = 0;
    do {
      func_0x0001002a0cf8(param_4 + lVar1,0,param_2 + lVar1);
      lVar1 = lVar1 + 0x88;
    } while (param_2 + lVar1 != param_3);
    param_4 = param_4 + lVar1;
  }
  return param_4;
}



/* Entry: 105335fc8; end: 105336037;  */

void FUN_105335fc8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar4 != lVar1) {
      do {
        lVar1 = lVar1 + -0x88;
        func_0x0001002a1b38();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 105336038; end: 105336147;  */

undefined8 * FUN_105336038(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  puStack_28 = param_1 + 6;
  FUN_105335fc8(&puStack_28);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 105336148; end: 105336273;  */

void FUN_105336148(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  
  uVar2 = param_1[2];
  puVar7 = (undefined8 *)*param_1;
  if (uVar2 - (long)puVar7 < param_4) {
    puVar4 = param_1;
    if (puVar7 != (undefined8 *)0x0) {
      param_1[1] = puVar7;
      __ZdlPv();
      uVar2 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar4 = puVar7;
    }
    if ((long)param_4 < 0) {
      func_0x000104bd9bc0();
      *puVar4 = &PTR_FUN_11087bbd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
      return;
    }
    uVar5 = uVar2 * 2;
    if (uVar5 < param_4 || uVar5 - param_4 == 0) {
      uVar5 = param_4;
    }
    if (0x3ffffffffffffffe < uVar2) {
      uVar5 = 0x7fffffffffffffff;
    }
    func_0x00010002b958(param_1,uVar5);
    puVar3 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined1 *)puVar3 = *param_2;
      puVar3 = (undefined8 *)((long)puVar3 + 1);
    }
  }
  else {
    puVar4 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar4 - (long)puVar7) < param_4) {
      puVar6 = param_2 + ((long)puVar4 - (long)puVar7);
      puVar3 = puVar4;
      if (puVar4 != puVar7) {
        _memmove(puVar7,param_2);
        puVar4 = (undefined8 *)param_1[1];
        puVar3 = puVar4;
      }
      for (; puVar6 != param_3; puVar6 = puVar6 + 1) {
        *(undefined1 *)puVar4 = *puVar6;
        puVar4 = (undefined8 *)((long)puVar4 + 1);
        puVar3 = (undefined8 *)((long)puVar3 + 1);
      }
    }
    else {
      lVar1 = (long)param_3 - (long)param_2;
      if (lVar1 != 0) {
        _memmove(puVar7,param_2,lVar1);
      }
      puVar3 = (undefined8 *)((long)puVar7 + lVar1);
    }
  }
  param_1[1] = puVar3;
  return;
}



/* Entry: 105336274; end: 105336283;  */

void FUN_105336274(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087bbd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105336284; end: 1053362a3;  */

void FUN_105336284(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087bbd0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053362a4; end: 1053362ab;  */

void FUN_1053362a4(void)

{
  return;
}



/* Entry: 1053362ac; end: 105336303;  */

long FUN_1053362ac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 105336304; end: 105336613;  */

void FUN_105336304(double param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lStack_68;
  
  plVar3 = (long *)(param_2 + 0x98);
  if (((uint)*(undefined8 *)(*plVar3 + 0x10) >> 5 & 1) == 0) {
    iVar1 = *(int *)(*plVar3 + 0x98);
    func_0x00010054ebfc();
    func_0x00010054ebfc(plVar3 + 1);
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0xa8) + 0x78) + 0x10);
    if (iVar1 == 0) {
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65a80();
      _objc_release(uVar4);
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3f360();
      lVar6 = *(long *)(param_2 + 0xa8);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(*(long *)(lVar6 + 0x78) + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65a80();
      lVar6 = *(long *)(param_2 + 0xa8);
      _objc_release(uVar4);
      (**(code **)(*(long *)(lVar6 + 0x88) + 0x10))();
    }
    _CACurrentMediaTime();
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0xa8) + 0x78) + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_2 + 0xa8);
    func_0x00010bf3f200(param_1 - *(double *)(lVar6 + 0xa0));
    lVar8 = *(long *)(param_2 + 0xa8);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(*(long *)(lVar8 + 0x78) + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3f740(param_1 - *(double *)(lVar6 + 0xa0));
    lVar6 = *(long *)(param_2 + 0xa8);
    _objc_release(uVar4);
    lVar6 = *(long *)(lVar6 + 0xb0);
    if (iVar1 == 0) {
      puVar7 = *(undefined **)(*(long *)(param_2 + 0xa8) + 0xb8);
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      _objc_retainAutoreleasedReturnValue();
    }
    (**(code **)(lVar6 + 0x10))(lVar6,iVar1 == 0,puVar7);
    if (iVar1 != 0) {
      _objc_release(puVar7);
    }
    puVar5 = (undefined8 *)(param_2 + 0x18);
    func_0x0001005ed54c(*puVar5,puVar5);
    func_0x0001005f9520(puVar5,0);
    if (*(long *)(param_2 + 0x80) != 0) {
      *(long *)(param_2 + 0x88) = *(long *)(param_2 + 0x80);
      __ZdlPv();
    }
    if (*(char *)(param_2 + 0x7f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x68));
    }
    lStack_68 = param_2 + 0x50;
    FUN_105335fc8(&lStack_68);
    if (*(char *)(param_2 + 0x4f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x38));
    }
    if (*(char *)(param_2 + 0x37) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x20));
    }
    func_0x00010054ec98(param_2 + 0x18);
    func_0x00010054ebfc(param_2 + 0x10);
    __ZdlPv(param_2);
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(&lStack_68,*plVar3 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(&lStack_68);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x105336598);
  (*pcVar2)();
}



/* Entry: 105336614; end: 1053366af;  */

void FUN_105336614(long param_1)

{
  long lStack_28;
  
  func_0x00010054ebfc(param_1 + 0x98);
  func_0x00010054ebfc(param_1 + 0xa0);
  if (*(long *)(param_1 + 0x80) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x80);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  lStack_28 = param_1 + 0x50;
  FUN_105335fc8(&lStack_28);
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  func_0x00010054ec98(param_1 + 0x18);
  func_0x00010054ebfc(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 1053366b0; end: 105336997;  */

void FUN_1053366b0(double param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lStack_68;
  
  plVar5 = (long *)(param_2 + 0x98);
  if (((uint)*(undefined8 *)(*plVar5 + 0x10) >> 5 & 1) == 0) {
    iVar1 = *(int *)(*plVar5 + 0x98);
    func_0x00010054ebfc(plVar5);
    func_0x00010054ebfc(param_2 + 0xa0);
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0xa8) + 0x48) + 0x10);
    if (iVar1 == 0) {
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65a80();
      _objc_release(uVar3);
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3f360();
      lVar6 = *(long *)(param_2 + 0xa8);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(*(long *)(lVar6 + 0x48) + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65a80();
      lVar6 = *(long *)(param_2 + 0xa8);
      _objc_release(uVar3);
      (**(code **)(*(long *)(lVar6 + 0x50) + 0x10))();
    }
    _CACurrentMediaTime();
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0xa8) + 0x48) + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(*(undefined8 *)(*(long *)(param_2 + 0xa8) + 0x58));
    lVar6 = *(long *)(param_2 + 0xa8);
    func_0x00010bf3f200(param_1 - *(double *)(lVar6 + 0x60),uVar3);
    lVar7 = *(long *)(param_2 + 0xa8);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(*(long *)(lVar7 + 0x48) + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3f740(param_1 - *(double *)(lVar6 + 0x60));
    lVar6 = *(long *)(param_2 + 0xa8);
    _objc_release(uVar3);
    lVar6 = *(long *)(lVar6 + 0x70);
    (**(code **)(lVar6 + 0x10))(lVar6,iVar1 == 0,0);
    puVar4 = (undefined8 *)(param_2 + 0x18);
    func_0x0001005ed54c(*puVar4,puVar4);
    func_0x0001005f9520(puVar4,0);
    if (*(long *)(param_2 + 0x80) != 0) {
      *(long *)(param_2 + 0x88) = *(long *)(param_2 + 0x80);
      __ZdlPv();
    }
    if (*(char *)(param_2 + 0x7f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x68));
    }
    lStack_68 = param_2 + 0x50;
    FUN_105335fc8(&lStack_68);
    if (*(char *)(param_2 + 0x4f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x38));
    }
    if (*(char *)(param_2 + 0x37) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x20));
    }
    func_0x00010054ec98(param_2 + 0x18);
    func_0x00010054ebfc(param_2 + 0x10);
    __ZdlPv(param_2);
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(&lStack_68,*plVar5 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(&lStack_68);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x105336928);
  (*pcVar2)();
}



/* Entry: 105336998; end: 105336a33;  */

void FUN_105336998(long param_1)

{
  long lStack_28;
  
  func_0x00010054ebfc(param_1 + 0x98);
  func_0x00010054ebfc(param_1 + 0xa0);
  if (*(long *)(param_1 + 0x80) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x80);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  lStack_28 = param_1 + 0x50;
  FUN_105335fc8(&lStack_28);
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  func_0x00010054ec98(param_1 + 0x18);
  func_0x00010054ebfc(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 105336a34; end: 105336a3f; +[SCCircumstanceEngineConfig table] */

char * FUN_105336a34(void)

{
  return "circumstanceengine__config";
}



/* Entry: 105336a40; end: 105336c63; +[SCCircumstanceEngineConfig immutableObjectParse:bufferSize:] */

void FUN_105336a40(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126b7840;
  _objc_alloc(PTR_PTR_1126b7840);
  lVar6 = (long)*piVar1;
  uVar5 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar5 < 5) {
    puVar8 = (undefined *)0x0;
LAB_105336b24:
    puVar9 = (undefined *)0x0;
LAB_105336b28:
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar6);
    }
    lVar6 = -lVar6;
    if (uVar5 < 7) goto LAB_105336b24;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 6);
    if (uVar7 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar5 < 9) goto LAB_105336b28;
    if (*(short *)((long)piVar1 + lVar6 + 8) == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      lVar6 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (10 < uVar5) {
      uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 10);
      uVar12 = 0;
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = *(undefined8 *)((long)piVar1 + uVar7);
      }
      if (0xc < uVar5) {
        uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 0xc);
        if (uVar7 != 0) {
          uVar12 = *(undefined8 *)((long)piVar1 + uVar7);
        }
        if ((0xe < uVar5) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 0xe), uVar7 != 0)) {
          uVar4 = *(undefined4 *)((long)piVar1 + uVar7);
          goto LAB_105336b38;
        }
      }
      uVar4 = 0;
      goto LAB_105336b38;
    }
  }
  uVar4 = 0;
  uVar12 = 0;
  uVar11 = 0;
LAB_105336b38:
  func_0x00010c001080(uVar11,uVar12,puVar3,param_2,puVar8,puVar9,puVar10,uVar4);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105336c64; end: 105336c77; +[SCCircumstanceEngineConfig objectClassFunctionPointer] */

undefined1  [16] FUN_105336c64(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_105336ca0;
  auVar1._0_8_ = FUN_105336c78;
  return auVar1;
}



/* Entry: 105336c78; end: 105336c9f;  */

int FUN_105336c78(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf2a4f22;
  _strcmp("configNamespace",param_1);
  return -(uint)(iVar1 != 0);
}



/* Entry: 105336ca0; end: 105336d3f;  */

bool FUN_105336ca0(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    return false;
  }
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  func_0x0001001b9e08(param_2,
                      "INSERT INTO index_circumstanceengine__configconfigNamespace (rowid, configNamespace) VALUES (?1, ?2)"
                     );
  _sqlite3_bind_int64();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar3 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = (long)*(int *)((long)piVar1 + uVar3);
  }
  _sqlite3_bind_int64(param_2,2,lVar2);
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 105336d40; end: 105336dab;  */

void FUN_105336d40(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b7840;
    _objc_alloc(PTR_PTR_1126b7840);
    func_0x00010c001080(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105336dac; end: 105336de7; -[SCCircumstanceEngineConfigChangeRequest .cxx_destruct] */

void FUN_105336dac(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105336de8; end: 105336df3; -[SCCircumstanceEngineConfigChangeRequest table] */

char * FUN_105336de8(void)

{
  return "circumstanceengine__config";
}



/* Entry: 105336df4; end: 105336ea7; -[SCCircumstanceEngineConfigChangeRequest createTableWithSQLite:] */

void FUN_105336df4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dd963df,0xa3,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dd96482,0x80,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10dd96502,0x9d,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 105336ea8; end: 105337497; -[SCCircumstanceEngineConfigChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_105336ea8(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar6 = param_1;
  if (iVar3 == 1) {
    FUN_105336d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    FUN_105337498(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar8,0,0);
    puVar12 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar12;
    puVar10 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar10;
    func_0x00010bf636c0();
    FUN_10507cae4();
    _objc_release(puVar10);
    lVar8 = param_3;
    func_0x0001001b9e08(param_3,
                        "INSERT INTO circumstanceengine__config (p, configId, ruleId) VALUES (?1, ?2, ?3)"
                       );
    if (lVar8 == 0) goto LAB_1053373f4;
    _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar12 + (ulong)uVar4);
    puVar12 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar12 + (ulong)*puVar12);
    _sqlite3_bind_text(lVar8,2,puVar2 + 1,*puVar2,0);
    puVar12 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar12 + (ulong)*puVar12);
    _sqlite3_bind_text(lVar8,3,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar8 != 0x65) goto LAB_1053373f4;
    uVar11 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar7 & 1) != 0) {
      func_0x0001001b9e08(param_3,
                          "INSERT INTO index_circumstanceengine__configconfigNamespace (rowid, configNamespace) VALUES (?1, ?2)"
                         );
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) ||
         (uVar9 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar9 == 0)) {
        lVar8 = 0;
      }
      else {
        lVar8 = (long)*(int *)((long)piVar1 + uVar9);
      }
      _sqlite3_bind_int64(param_3,2,lVar8);
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_1053373f4;
    }
    *(undefined8 *)(param_1 + 8) = uVar11;
    func_0x00010c1eeb60(puVar6);
    puVar10 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b7840);
    func_0x00010c21c9a0(puVar10);
LAB_1053373cc:
    _objc_release(puVar10);
    _objc_retain(puVar6);
    puVar10 = puVar6;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar8 = param_3;
        func_0x0001001b9e08(param_3,"DELETE FROM circumstanceengine__config WHERE rowid=?1");
        if (lVar8 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar8 == 0x65) {
            func_0x0001001b9e08(param_3,
                                "DELETE FROM index_circumstanceengine__configconfigNamespace WHERE rowid=?1"
                               );
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_105336fd4;
            }
            puVar6 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b7840);
            func_0x00010c21c9a0(puVar6);
            _objc_release(puVar10);
            _objc_release(puVar6);
            puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105337400;
          }
        }
      }
LAB_105336fd4:
      puVar10 = (undefined *)0x0;
      goto LAB_105337400;
    }
    FUN_105336d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    FUN_105337498(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar8,0,0);
    puVar12 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar12;
    uVar11 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar6);
    lVar8 = param_3;
    func_0x0001001b9e08(param_3,
                        "UPDATE circumstanceengine__config SET p=?1, configId=?3, ruleId=?4 WHERE rowid=?2 LIMIT 1"
                       );
    if (lVar8 != 0) {
      _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(lVar8,2,uVar11);
      piVar1 = (int *)((long)puVar12 + (ulong)uVar4);
      puVar12 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar12 + (ulong)*puVar12);
      _sqlite3_bind_text(lVar8,3,puVar2 + 1,*puVar2,0);
      puVar12 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar12 + (ulong)*puVar12);
      _sqlite3_bind_text(lVar8,4,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar8 == 0x65) {
        puVar10 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b7840);
        puVar7 = puVar10;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        puVar10 = puVar7;
        func_0x00010bf46100();
        puVar5 = puVar6;
        func_0x00010bf46100();
        if ((int)puVar10 != (int)puVar5) {
          func_0x0001001b9e08(param_3,
                              "UPDATE index_circumstanceengine__configconfigNamespace SET configNamespace=?1 WHERE rowid=?2 LIMIT 1"
                             );
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) ||
             (uVar9 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar9 == 0)) {
            lVar8 = 0;
          }
          else {
            lVar8 = (long)*(int *)((long)piVar1 + uVar9);
          }
          _sqlite3_bind_int64(param_3,1,lVar8);
          _sqlite3_bind_int64(param_3,2,uVar11);
          _sqlite3_step();
          if ((int)param_3 != 0x65) {
            _objc_release(puVar7);
            goto LAB_1053373ec;
          }
        }
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar10 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b7840);
        func_0x00010c21c9a0(puVar10);
        goto LAB_1053373cc;
      }
    }
LAB_1053373ec:
    _objc_release(puVar6);
LAB_1053373f4:
    puVar10 = (undefined *)0x0;
  }
  _objc_release(puVar6);
LAB_105337400:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}


