/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107059d78; end: 107059dbf; -[SCChatRoundedCornersView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107059d78(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126f8670;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276355c) = 1;
  }
  return;
}



/* Entry: 107059dc0; end: 107059e07; -[SCChatRoundedCornersView setBackgroundColor:] */

void FUN_107059dc0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f8670;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setBackgroundColor__112639330);
  func_0x00010bea2540(param_1);
  return;
}



/* Entry: 107059e08; end: 107059eaf; -[SCChatRoundedCornersView setShouldShowBorder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107059e08(long param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  if (*(byte *)(param_1 + _DAT_11276355c) != param_3) {
    *(char *)(param_1 + _DAT_11276355c) = (char)param_3;
    if (param_3 == 0) {
      lVar3 = (long)_DAT_112763568;
      if (*(long *)(param_1 + lVar3) != 0) {
        func_0x00010c12c940();
        uVar2 = *(undefined8 *)(param_1 + lVar3);
        *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar2);
        return;
      }
    }
    else if (*(long *)(param_1 + _DAT_112763560) != 0) {
      dVar4 = ((double *)(param_1 + _DAT_112763564))[1];
      bVar1 = false;
      if ((*(double *)(param_1 + _DAT_112763564) == *(double *)PTR__CGSizeZero_110347620) &&
         (bVar1 = false, !NAN(dVar4) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
        bVar1 = dVar4 == *(double *)(PTR__CGSizeZero_110347620 + 8);
      }
      if (!bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bed42b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__updateBorderLayerForCornerRadii_112592a50);
        return;
      }
    }
  }
  return;
}



/* Entry: 107059eb0; end: 10705a093; -[SCChatRoundedCornersView setCornerRadii:size:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107059eb0(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  double *pdVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  
  _objc_retain(param_5);
  lVar6 = (long)_DAT_112763560;
  if ((param_5 == *(long *)(param_3 + lVar6)) ||
     (lVar3 = param_5, func_0x00010c071ae0(), (int)lVar3 != 0)) {
    dVar7 = ((double *)(param_3 + _DAT_112763564))[1];
    bVar2 = false;
    if ((param_1 == *(double *)(param_3 + _DAT_112763564)) &&
       (bVar2 = false, !NAN(param_2) && !NAN(dVar7))) {
      bVar2 = param_2 == dVar7;
    }
    if (bVar2) goto LAB_10705a070;
  }
  _objc_retain(param_5);
  uVar4 = *(undefined8 *)(param_3 + lVar6);
  *(long *)(param_3 + lVar6) = param_5;
  _objc_release(uVar4);
  lVar6 = param_5;
  FUN_107059be8();
  if ((int)lVar6 == 0) {
    pdVar1 = (double *)(param_3 + _DAT_112763564);
    if (param_5 == 0) {
      dVar7 = *(double *)PTR__CGSizeZero_110347620;
      pdVar1[1] = *(double *)(PTR__CGSizeZero_110347620 + 8);
      *pdVar1 = dVar7;
      func_0x00010c12d0c0(param_3);
    }
    else {
      *pdVar1 = param_1;
      pdVar1[1] = param_2;
      func_0x00010be8c7a0(param_3);
      func_0x00010bed42a0(param_1,param_2,param_3,param_4,param_5);
    }
  }
  else {
    lVar6 = (long)_DAT_112763564;
    *(double *)(param_3 + lVar6) = param_1;
    ((double *)(param_3 + lVar6))[1] = param_2;
    lVar6 = param_5;
    FUN_107059a28(param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
    uVar8 = 0;
    dVar7 = param_1;
    dVar9 = param_2;
    _CGRectIntegral(0,0,param_1,param_2);
    lVar3 = lVar6;
    func_0x00010b2ad780(param_1,param_2,lVar6);
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    lVar5 = param_3;
    func_0x00010be5daa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(lVar5);
    lVar5 = param_3;
    func_0x00010be5daa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(uVar4,uVar8,dVar7,dVar9);
    _objc_release(lVar5);
    func_0x00010bed42a0(param_1,param_2,param_3,param_4,param_5);
    _objc_release(lVar3);
    _objc_release(lVar6);
  }
LAB_10705a070:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10705a094; end: 10705a10f; -[SCChatRoundedCornersView removeMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705a094(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276356c;
  func_0x00010c12c940(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112763568;
  func_0x00010c12c940(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10705a110; end: 10705a1ef; -[SCChatRoundedCornersView _borderLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705a110(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1;
  func_0x00010c2333c0();
  if ((int)lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar4 = (long)_DAT_112763568;
    lVar3 = *(long *)(param_1 + lVar4);
    if (lVar3 == 0) {
      puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar1;
      _objc_release(uVar2);
      func_0x00010bea2540(param_1);
      func_0x00010c1bdd00(0x3fe0000000000000,*(undefined8 *)(param_1 + lVar4));
      puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      func_0x00010c182d20(*(undefined8 *)(param_1 + lVar4));
      _objc_release(puVar1);
      lVar3 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066f40();
      _objc_release(lVar3);
      lVar3 = *(long *)(param_1 + lVar4);
    }
    _objc_retain(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10705a1f0; end: 10705a29b; -[SCChatRoundedCornersView _setBorderColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705a1f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112763568;
  if (*(long *)(param_1 + lVar3) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar3),param_2,puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(*(undefined8 *)(param_1 + lVar3),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10705a29c; end: 10705a333; -[SCChatRoundedCornersView _updateBorderLayerForCornerRadii:size:] */

void FUN_10705a29c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  FUN_107059be8();
  if ((int)uVar1 == 0) {
    func_0x00010bed42c0(param_1,param_2,param_3);
  }
  else {
    uVar1 = param_5;
    FUN_107059a28(param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed42e0(param_1,param_2,param_3,param_4,uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10705a334; end: 10705a407; -[SCChatRoundedCornersView _updateBorderLayerWithRoundedPathForCornerRadii:size:] */

void FUN_10705a334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_7);
  lVar1 = param_5;
  func_0x00010bdd53a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bdd5380(param_1,param_2,param_5);
    uVar2 = param_7;
    func_0x00010b2ad780(param_3,param_4,param_7);
    uVar3 = uVar2;
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(lVar1,param_6,uVar3);
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4,lVar1);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10705a408; end: 10705a4c7; -[SCChatRoundedCornersView _updateBorderLayerWithRectangularPathForSize:] */

void FUN_10705a408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_5;
  func_0x00010bdd53a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bdd5380(param_1,param_2,param_5);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199c0(0,0,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(lVar1,param_6,puVar3);
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4,lVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10705a4c8; end: 10705a4df; -[SCChatRoundedCornersView _borderInsetFrameForSize:] */

undefined8 FUN_10705a4c8(void)

{
  return 0x3fe0000000000000;
}



/* Entry: 10705a4e0; end: 10705a5c3; -[SCChatRoundedCornersView _maskLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705a4e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276356c;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    lVar4 = param_1;
    func_0x00010bf13d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar5),param_2,lVar2);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10705a5c4; end: 10705a61b; -[SCChatRoundedCornersView _removeMaskLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705a5c4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276356c;
  func_0x00010c12c940(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10705a61c; end: 10705a62b; -[SCChatRoundedCornersView shouldShowBorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10705a61c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276355c);
}



/* Entry: 10705a62c; end: 10705a67b; -[SCChatRoundedCornersView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705a62c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112763560,0);
  _objc_storeStrong(param_1 + _DAT_112763568,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276356c,0);
  return;
}



/* Entry: 10705a67c; end: 10705a707; -[SCChatStackedComposerContextHolderView initWithViewEventDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10705a67c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8678;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112763570),param_3);
    func_0x00010c16e060(puVar1);
    func_0x00010c207380(0x4010000000000000,puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10705a708; end: 10705aaab; -[SCChatStackedComposerContextHolderView setStackedContextWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705a708(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined **unaff_x22;
  ulong uVar10;
  long unaff_x23;
  undefined **unaff_x24;
  long lVar11;
  undefined **unaff_x25;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long lStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined *puStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  long lStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined1 **ppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_268;
  undefined *puStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  long lStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar12 = (undefined *)(long)_DAT_112763574;
  ppuVar9 = *(undefined ***)((long)param_1 + (long)puVar12);
  _objc_retain(param_3);
  _objc_retain(ppuVar9);
  if (param_3 == ppuVar9) {
    _objc_release(ppuVar9);
    _objc_release(param_3);
  }
  else {
    if (ppuVar9 == (undefined **)0x0) {
      _objc_release();
    }
    else {
      unaff_x22 = param_3;
      func_0x00010c071ae0();
      _objc_release(ppuVar9);
      _objc_release(param_3);
      if (((ulong)unaff_x22 & 1) != 0) goto LAB_10705aa64;
    }
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)((long)param_1 + (long)puVar12);
    *(undefined ***)((long)param_1 + (long)puVar12) = param_3;
    _objc_release(uVar5);
    ppuVar13 = param_3;
    func_0x00010bf137c0();
    ppuVar9 = (undefined **)(ulong)(ppuVar13 != (undefined **)0x1);
    uVar5 = 0x4010000000000000;
    if (ppuVar13 == (undefined **)0x1) {
      uVar5 = 0;
    }
    func_0x00010c16e060(param_1);
    func_0x00010c207380(uVar5,param_1);
    func_0x00010c166c00(param_1);
    ppuStack_210 = param_3;
    func_0x00010c2bd700();
    func_0x00010c1b9ba0(param_1);
    bVar2 = (int)param_3 == 0;
    uVar5 = 0x4020000000000000;
    if (bVar2) {
      uVar5 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    }
    uVar16 = 0x4020000000000000;
    if (bVar2) {
      uVar16 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    }
    uVar15 = 0x4020000000000000;
    if (bVar2) {
      uVar15 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    }
    uVar14 = 0x4020000000000000;
    if (bVar2) {
      uVar14 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    }
    func_0x00010c1b9b80(uVar14,uVar15,uVar16,uVar5,param_1);
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    unaff_x22 = param_1;
    func_0x00010bf09ee0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = unaff_x22;
    func_0x00010bf52a60();
    unaff_x27 = &PTR_PTR_1126cb000;
    if (ppuVar13 != (undefined **)0x0) {
      lVar11 = *plStack_1b0;
      do {
        unaff_x28 = (undefined **)0x0;
        do {
          if (*plStack_1b0 != lVar11) {
            _objc_enumerationMutation(unaff_x22);
          }
          puVar3 = PTR_PTR_1126cb540;
          unaff_x24 = *(undefined ***)(lStack_1b8 + (long)unaff_x28 * 8);
          _objc_retain(unaff_x24);
          _objc_opt_class(puVar3);
          ppuVar4 = unaff_x24;
          _objc_opt_isKindOfClass(unaff_x24,puVar3);
          unaff_x25 = unaff_x24;
          if (((ulong)ppuVar4 & 1) == 0) {
            unaff_x25 = (undefined **)0x0;
          }
          _objc_retain(unaff_x25);
          _objc_release(unaff_x24);
          func_0x00010c1097a0(unaff_x25);
          func_0x00010c12c960(unaff_x24);
          _objc_release(unaff_x25);
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (ppuVar13 != unaff_x28);
        ppuVar13 = unaff_x22;
        func_0x00010bf52a60();
        unaff_x23 = 0;
      } while (ppuVar13 != (undefined **)0x0);
    }
    _objc_release(unaff_x22);
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    lStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    puStack_1f0 = (undefined8 *)0x0;
    ppuVar13 = *(undefined ***)((long)param_1 + (long)puVar12);
    func_0x00010bf4f6a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_208 = ppuVar13;
    func_0x00010bf52a60();
    if (ppuVar13 != (undefined **)0x0) {
      unaff_x28 = (undefined **)*puStack_1f0;
      do {
        unaff_x22 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_1f0 != unaff_x28) {
            _objc_enumerationMutation(ppuStack_208);
          }
          unaff_x24 = *(undefined ***)(lStack_1f8 + (long)unaff_x22 * 8);
          unaff_x25 = (undefined **)PTR_PTR_1126cb540;
          _objc_alloc();
          puVar12 = (undefined *)((long)param_1 + (long)_DAT_112763570);
          _objc_loadWeakRetained();
          func_0x00010c061b40();
          _objc_release(puVar12);
          func_0x00010c219b60(unaff_x25);
          func_0x00010c1835a0(unaff_x25);
          func_0x00010bef6d60(param_1);
          func_0x00010c181f00(0x443b8000,unaff_x25);
          func_0x00010c181cc0(0x443b8000,unaff_x25);
          _objc_release(unaff_x25);
          unaff_x22 = (undefined **)((long)unaff_x22 + 1);
        } while (ppuVar13 != unaff_x22);
        ppuVar13 = ppuStack_208;
        func_0x00010bf52a60();
        unaff_x23 = 0;
      } while (ppuVar13 != (undefined **)0x0);
    }
    _objc_release(ppuStack_208);
    param_3 = ppuStack_210;
  }
LAB_10705aa64:
  ppuVar13 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_218 = FUN_10705aaac;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)((long)ppuVar13 + (long)_DAT_112763574);
  *(undefined8 *)((long)ppuVar13 + (long)_DAT_112763574) = 0;
  puStack_260 = puVar12;
  ppuStack_258 = unaff_x25;
  ppuStack_250 = unaff_x24;
  lStack_248 = unaff_x23;
  ppuStack_240 = unaff_x22;
  ppuStack_238 = ppuVar9;
  ppuStack_230 = param_1;
  ppuStack_228 = param_3;
  puStack_220 = &stack0xfffffffffffffff0;
  _objc_release(uVar5);
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar13;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x23 = *plStack_320;
    unaff_x24 = &PTR_PTR_1126cb000;
    do {
      unaff_x25 = (undefined **)0x0;
      do {
        if (*plStack_320 != unaff_x23) {
          _objc_enumerationMutation(ppuVar13);
        }
        puVar3 = PTR_PTR_1126cb540;
        ppuVar9 = *(undefined ***)(lStack_328 + (long)unaff_x25 * 8);
        _objc_retain(ppuVar9);
        _objc_opt_class(puVar3);
        ppuVar6 = ppuVar9;
        _objc_opt_isKindOfClass(ppuVar9,puVar3);
        unaff_x22 = ppuVar9;
        if (((ulong)ppuVar6 & 1) == 0) {
          unaff_x22 = (undefined **)0x0;
        }
        _objc_retain(unaff_x22);
        _objc_release(ppuVar9);
        func_0x00010c1097a0(unaff_x22);
        func_0x00010c12c960(unaff_x22);
        _objc_release(unaff_x22);
        unaff_x25 = (undefined **)((long)unaff_x25 + 1);
      } while (ppuVar4 != unaff_x25);
      ppuVar4 = ppuVar13;
      func_0x00010bf52a60();
      param_1 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  ppuVar4 = ppuVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_268) {
    ___stack_chk_fail();
    puVar8 = &uStack_460;
    pcStack_338 = FUN_10705ac10;
    lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_458 = 0;
    uStack_460 = 0;
    uStack_448 = 0;
    plStack_450 = (long *)0x0;
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    ppuStack_390 = unaff_x28;
    ppuStack_388 = unaff_x27;
    puStack_380 = puVar12;
    ppuStack_378 = unaff_x25;
    ppuStack_370 = unaff_x24;
    lStack_368 = unaff_x23;
    ppuStack_360 = unaff_x22;
    ppuStack_358 = ppuVar9;
    ppuStack_350 = param_1;
    ppuStack_348 = ppuVar13;
    ppuStack_340 = &puStack_220;
    func_0x00010bf09ee0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar4;
    func_0x00010bf52a60();
    if (ppuVar9 != (undefined **)0x0) {
      lVar11 = *plStack_450;
      do {
        ppuVar13 = (undefined **)0x0;
        do {
          if (*plStack_450 != lVar11) {
            _objc_enumerationMutation(ppuVar4);
          }
          puVar12 = PTR_PTR_1126cb540;
          uVar10 = *(ulong *)(lStack_458 + (long)ppuVar13 * 8);
          _objc_retain(uVar10);
          _objc_opt_class(puVar12);
          uVar7 = uVar10;
          _objc_opt_isKindOfClass(uVar10,puVar12);
          uVar1 = uVar10;
          if ((uVar7 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar10);
          func_0x00010bf73840(uVar1);
          _objc_release(uVar1);
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
        } while (ppuVar9 != ppuVar13);
        ppuVar9 = ppuVar4;
        puVar8 = &uStack_460;
        func_0x00010bf52a60();
      } while (ppuVar9 != (undefined **)0x0);
    }
    _objc_release(ppuVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_398) {
      ___stack_chk_fail();
      _objc_retain(puVar8);
      func_0x00010bf09ee0(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar8);
      func_0x00010bf97e80(ppuVar4);
      _objc_release(ppuVar4);
      _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar8);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10705aaac; end: 10705ac0f; -[SCChatStackedComposerContextHolderView prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705aaac(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112763574);
  *(undefined8 *)(param_1 + _DAT_112763574) = 0;
  _objc_release(uVar2);
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(param_1);
      }
      puVar4 = PTR_PTR_1126cb540;
      uVar8 = *(ulong *)(lVar10 * 8);
      _objc_retain(uVar8);
      _objc_opt_class(puVar4);
      uVar5 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar4);
      uVar1 = uVar8;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar8);
      func_0x00010c1097a0(uVar1);
      func_0x00010c12c960(uVar1);
      _objc_release(uVar1);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_250;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_240;
    do {
      lVar7 = 0;
      do {
        if (*plStack_240 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        puVar4 = PTR_PTR_1126cb540;
        uVar8 = *(ulong *)(lStack_248 + lVar7 * 8);
        _objc_retain(uVar8);
        _objc_opt_class(puVar4);
        uVar5 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar4);
        uVar1 = uVar8;
        if ((uVar5 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar8);
        func_0x00010bf73840(uVar1);
        _objc_release(uVar1);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = param_1;
      puVar6 = &uStack_250;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  func_0x00010bf09ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar6);
  func_0x00010bf97e80(param_1);
  _objc_release(param_1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 10705ac10; end: 10705ad5f; -[SCChatStackedComposerContextHolderView didChangeVisibility:] */

void FUN_10705ac10(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
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
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        puVar3 = PTR_PTR_1126cb540;
        uVar6 = *(ulong *)(lStack_128 + lVar8 * 8);
        _objc_retain(uVar6);
        _objc_opt_class(puVar3);
        uVar4 = uVar6;
        _objc_opt_isKindOfClass(uVar6,puVar3);
        uVar1 = uVar6;
        if ((uVar4 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar6);
        func_0x00010bf73840(uVar1);
        _objc_release(uVar1);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_1;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  func_0x00010bf09ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  func_0x00010bf97e80(param_1);
  _objc_release(param_1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10705ad60; end: 10705adfb; -[SCChatStackedComposerContextHolderView setFocusedIndex:] */

void FUN_10705ad60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010bf09ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10705adfc;
  puStack_30 = &UNK_110914e68;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf97e80(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10705adfc; end: 10705ae63;  */

void FUN_10705adfc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    uVar2 = 0x3ff0000000000000;
  }
  else {
    func_0x00010c2827c0();
    uVar2 = 0x3ff0000000000000;
    if (param_3 != lVar1) {
      uVar2 = 0x3fc99999a0000000;
    }
  }
  func_0x00010c1677c0(uVar2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10705ae64; end: 10705afe7; -[SCChatStackedComposerContextHolderView setSavedStatesPerIndex:renderAsBubble:] */

void FUN_10705ae64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  FUN_10706814c();
  uVar1 = param_4;
  func_0x000107068184();
  func_0x00010bf09ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10705af54;
  puStack_50 = &UNK_1109897f8;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf97e80(param_1,param_2,&puStack_68);
  _objc_release(param_1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10705afe8; end: 10705b023; -[SCChatStackedComposerContextHolderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705afe8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112763574,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112763570);
  return;
}



/* Entry: 10705b024; end: 10705b3fb; -[SCChatTableViewCellParameters initWithReuseIdentifier:parentVC:userSession:composerRuntime:circumstanceEngine:quotedMessageSubject:snapCountDownManager:composerAnimatedImageViewFactory:loadMessageLogger:actionHandler:chatMediaFetchingServices:messagingExperimentService:postSnapProvider:pluginManager:onDemandResourceDownloader:chatActionHandler:performer:mapExternalUrlServices:] */

undefined8 *
FUN_10705b024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

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
  puStack_70 = PTR_PTR_1126f8680;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[6];
    puVar1[6] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
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
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
  }
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



/* Entry: 10705b3fc; end: 10705b403; -[SCChatTableViewCellParameters reuseIdentifier] */

undefined8 FUN_10705b3fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10705b404; end: 10705b433; -[SCChatTableViewCellParameters setReuseIdentifier:] */

void FUN_10705b404(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705b434; end: 10705b44b; -[SCChatTableViewCellParameters parentVC] */

void FUN_10705b434(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10705b44c; end: 10705b457; -[SCChatTableViewCellParameters setParentVC:] */

void FUN_10705b44c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10705b458; end: 10705b45f; -[SCChatTableViewCellParameters userSession] */

undefined8 FUN_10705b458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10705b460; end: 10705b48f; -[SCChatTableViewCellParameters setUserSession:] */

void FUN_10705b460(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10705b490; end: 10705b497; -[SCChatTableViewCellParameters composerRuntime] */

undefined8 FUN_10705b490(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10705b498; end: 10705b4c7; -[SCChatTableViewCellParameters setComposerRuntime:] */

void FUN_10705b498(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10705b4c8; end: 10705b4cf; -[SCChatTableViewCellParameters circumstanceEngine] */

undefined8 FUN_10705b4c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10705b4d0; end: 10705b4ff; -[SCChatTableViewCellParameters setCircumstanceEngine:] */

void FUN_10705b4d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705b500; end: 10705b507; -[SCChatTableViewCellParameters messagingExperimentService] */

undefined8 FUN_10705b500(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10705b508; end: 10705b537; -[SCChatTableViewCellParameters setMessagingExperimentService:] */

void FUN_10705b508(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705b538; end: 10705b53f; -[SCChatTableViewCellParameters quotedMessageSubject] */

undefined8 FUN_10705b538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10705b540; end: 10705b56f; -[SCChatTableViewCellParameters setQuotedMessageSubject:] */

void FUN_10705b540(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10705b570; end: 10705b577; -[SCChatTableViewCellParameters snapCountDownManager] */

undefined8 FUN_10705b570(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10705b578; end: 10705b5a7; -[SCChatTableViewCellParameters setSnapCountDownManager:] */

void FUN_10705b578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705b5a8; end: 10705b5af; -[SCChatTableViewCellParameters composerAnimatedImageViewFactory] */

undefined8 FUN_10705b5a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10705b5b0; end: 10705b5df; -[SCChatTableViewCellParameters setComposerAnimatedImageViewFactory:] */

void FUN_10705b5b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705b5e0; end: 10705b5e7; -[SCChatTableViewCellParameters loadMessageLogger] */

undefined8 FUN_10705b5e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10705b5e8; end: 10705b617; -[SCChatTableViewCellParameters setLoadMessageLogger:] */

void FUN_10705b5e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705b618; end: 10705b61f; -[SCChatTableViewCellParameters actionHandler] */

undefined8 FUN_10705b618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10705b620; end: 10705b64f; -[SCChatTableViewCellParameters setActionHandler:] */

void FUN_10705b620(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705b650; end: 10705b657; -[SCChatTableViewCellParameters chatMediaFetchingServices] */

undefined8 FUN_10705b650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10705b658; end: 10705b687; -[SCChatTableViewCellParameters setChatMediaFetchingServices:] */

void FUN_10705b658(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705b688; end: 10705b68f; -[SCChatTableViewCellParameters postSnapProvider] */

undefined8 FUN_10705b688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10705b690; end: 10705b6bf; -[SCChatTableViewCellParameters setPostSnapProvider:] */

void FUN_10705b690(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10705b6c0; end: 10705b6c7; -[SCChatTableViewCellParameters pluginManager] */

undefined8 FUN_10705b6c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10705b6c8; end: 10705b6f7; -[SCChatTableViewCellParameters setPluginManager:] */

void FUN_10705b6c8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10705b6f8; end: 10705b6ff; -[SCChatTableViewCellParameters onDemandResourceDownloader] */

undefined8 FUN_10705b6f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10705b700; end: 10705b72f; -[SCChatTableViewCellParameters setOnDemandResourceDownloader:] */

void FUN_10705b700(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705b730; end: 10705b737; -[SCChatTableViewCellParameters chatActionHandler] */

undefined8 FUN_10705b730(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10705b738; end: 10705b767; -[SCChatTableViewCellParameters setChatActionHandler:] */

void FUN_10705b738(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705b768; end: 10705b76f; -[SCChatTableViewCellParameters performer] */

undefined8 FUN_10705b768(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10705b770; end: 10705b777; -[SCChatTableViewCellParameters mapExternalUrlServices] */

undefined8 FUN_10705b770(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10705b778; end: 10705b7a7; -[SCChatTableViewCellParameters setMapExternalUrlServices:] */

void FUN_10705b778(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705b7a8; end: 10705b893; -[SCChatTableViewCellParameters .cxx_destruct] */

void FUN_10705b7a8(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10705b894; end: 10705b977; -[SCContextualHeaderView initWithBackgroundColor:onDemandResourceDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10705b894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8688;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127635c0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    func_0x00010c16e440(puVar1);
    func_0x00010c16e060(puVar1);
    func_0x00010c190b80(puVar1);
    func_0x00010c166c00(puVar1);
    func_0x00010c207380(0x4010000000000000,puVar1);
    func_0x00010bdee920(puVar1);
    func_0x00010bdeeea0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10705b978; end: 10705ba3b; -[SCContextualHeaderView _createLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705b978(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar3 = (long)_DAT_1127635c4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c165e00(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bef6d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addArrangedSubview__11259b500,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10705ba3c; end: 10705bbff; -[SCContextualHeaderView _createIconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705ba3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar9 = (long)_DAT_1127635c8;
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar7;
  _objc_release(uVar6);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar9),param_2,1);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xce);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar9),param_2,puVar7);
  _objc_release(puVar7);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar9),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9),param_2,0);
  func_0x00010c066580(param_1,param_2,*(undefined8 *)(param_1 + lVar9),0);
  puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  lStack_68 = lVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010beef8c0(puVar7);
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  lVar10 = (long)_DAT_1127635cc;
  puVar7 = *(undefined **)(lVar1 + lVar10);
  _objc_retain(puVar7);
  _objc_retain(puVar5);
  if (puVar7 == puVar5) {
    _objc_release(puVar5);
  }
  else {
    if (puVar5 == (undefined *)0x0) {
      _objc_release(puVar7);
    }
    else {
      puVar3 = puVar7;
      func_0x00010c071ae0(puVar7,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar7);
      if (((ulong)puVar3 & 1) != 0) goto LAB_10705bd24;
    }
    _objc_retain(puVar5);
    uVar6 = *(undefined8 *)(lVar1 + lVar10);
    *(undefined **)(lVar1 + lVar10) = puVar5;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(lVar1 + lVar10);
    func_0x00010c26b700(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_1127635c4;
    func_0x00010c212f20(*(undefined8 *)(lVar1 + lVar8),param_2,uVar6);
    _objc_release(uVar6);
    lVar4 = *(long *)(lVar1 + lVar10);
    func_0x00010c26b700(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar4;
    func_0x00010c08fa60();
    func_0x00010c1a7f60(*(undefined8 *)(lVar1 + lVar8),param_2,lVar9 == 0);
    _objc_release(lVar4);
    puVar7 = *(undefined **)(lVar1 + lVar10);
    func_0x00010bfe9120(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea4940(lVar1,param_2,puVar7);
  }
  _objc_release(puVar7);
LAB_10705bd24:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10705bc00; end: 10705bd3b; -[SCContextualHeaderView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705bc00(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_1127635cc;
  uVar5 = *(ulong *)(param_1 + lVar7);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  if (uVar5 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar1 = uVar5;
      func_0x00010c071ae0(uVar5,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar1 & 1) != 0) goto LAB_10705bd24;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    *(ulong *)(param_1 + lVar7) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c26b700(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_1127635c4;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,uVar2);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar7);
    func_0x00010c26b700(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6),param_2,lVar4 == 0);
    _objc_release(lVar3);
    uVar5 = *(ulong *)(param_1 + lVar7);
    func_0x00010bfe9120(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea4940(param_1,param_2,uVar5);
  }
  _objc_release(uVar5);
LAB_10705bd24:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10705bd3c; end: 10705be87; -[SCContextualHeaderView _setImageViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705bd3c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  ulong uStack_58;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_1127635d0;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(param_3);
  _objc_retain(uVar4);
  if (param_3 == uVar4) {
    _objc_release(uVar4);
    uVar4 = param_3;
  }
  else {
    if (uVar4 == 0) {
      _objc_release();
    }
    else {
      uVar2 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(param_3);
      if ((uVar2 & 1) != 0) goto LAB_10705be68;
    }
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = param_3;
    _objc_release(uVar3);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10705be88;
    puStack_68 = &UNK_11086a750;
    lStack_60 = param_1;
    _objc_retain(param_3);
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x10705be98;
    puStack_98 = &UNK_110989828;
    lStack_90 = param_1;
    uStack_58 = param_3;
    _objc_retain(param_3);
    uStack_88 = param_3;
    func_0x00010c0bf1e0(param_3,param_2,&puStack_80,&puStack_b0);
    _objc_release(uStack_88);
    uVar4 = uStack_58;
  }
  _objc_release(uVar4);
LAB_10705be68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10705be88; end: 10705beab;  */

void FUN_10705be88(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea4710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setIconResource_imageViewModel__112586b68,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10705beac; end: 10705c033; -[SCContextualHeaderView _setIconResource:imageViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705beac(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x00010bea46e0(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127635c0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar2);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    func_0x00010bf88c20(uVar1);
    _objc_release(puVar2);
    _objc_release(param_1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10705c034; end: 10705c107;  */

void FUN_10705c034(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10705c108;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10705c108; end: 10705c13b;  */

void FUN_10705c108(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea46e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10705c13c; end: 10705c1bf; -[SCContextualHeaderView _setSIGIcon:iconColor:imageViewModel:] */

void FUN_10705c13c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_5);
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c23bc00(0x4030000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_3,
                        param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bea46e0(param_1,param_2,puVar1,param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10705c1c0; end: 10705c2cb; -[SCContextualHeaderView _setIconImage:imageViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705c1c0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + _DAT_1127635d0);
  _objc_retain(param_4);
  _objc_retain(lVar2);
  if (param_4 == lVar2) {
    _objc_release(lVar2);
    _objc_release(param_4);
LAB_10705c250:
    lVar2 = (long)_DAT_1127635c8;
    if (param_3 == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,1);
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2),param_2,0);
      goto LAB_10705c2ac;
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,0);
    lVar1 = param_3;
    func_0x00010bfe9720(param_3,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2),param_2,lVar1);
  }
  else {
    lVar1 = param_4;
    if (lVar2 != 0) {
      func_0x00010c071ae0(param_4,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(param_4);
      if ((int)lVar1 == 0) goto LAB_10705c2ac;
      goto LAB_10705c250;
    }
  }
  _objc_release(lVar1);
LAB_10705c2ac:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10705c2cc; end: 10705c3af; +[SCContextualHeaderView sizeForText:hasIcon:] */

undefined1  [16]
FUN_10705c2cc(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
             uint param_6)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    param_2 = 0.0;
    param_1 = 0.0;
  }
  else {
    lVar2 = param_5;
    func_0x00010c23ba40(param_5,param_4,0x18,0,4,4,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(lVar2);
  }
  dVar4 = param_1 + 16.0;
  if (param_6 == 0) {
    dVar4 = param_1;
  }
  dVar3 = param_1 + 16.0;
  if (lVar1 != 0) {
    dVar3 = dVar4 + 4.0;
  }
  if (param_6 == 0) {
    dVar3 = param_1;
  }
  lVar1 = 0x4030000000000000;
  if ((param_6 & param_2 < 16.0) == 0) {
    lVar1 = (long)param_2;
  }
  _objc_release(param_5);
  auVar5._8_8_ = lVar1;
  auVar5._0_8_ = (long)dVar3;
  return auVar5;
}



/* Entry: 10705c3b0; end: 10705c41f; -[SCContextualHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705c3b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127635c0,0);
  _objc_storeStrong(param_1 + _DAT_1127635d0,0);
  _objc_storeStrong(param_1 + _DAT_1127635cc,0);
  _objc_storeStrong(param_1 + _DAT_1127635c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127635c8,0);
  return;
}



/* Entry: 10705c420; end: 10705c8e3; -[SCHeaderStatusView initWithBackgroundColor:onDemandResourceDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10705c420(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  long lVar9;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_90 = PTR_PTR_1126f8690;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_1127635d4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_4;
    _objc_release(uVar2);
    func_0x00010c16e440(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_opt_new();
    lVar8 = (long)_DAT_1127635d8;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar3;
    _objc_release(uVar2);
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c207380(0x4010000000000000,*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c181f00(0x447a0000,*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127635dc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127635dc) = puVar3;
    _objc_release(uVar2);
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar8));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_1127635e0;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = uVar2;
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf348e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127635e4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127635e4) = uVar2;
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c08e400(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar2;
    uStack_80 = *(undefined8 *)((long)puVar1 + lVar9);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar6);
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_initWeak(auStack_a0,puVar1);
    puVar6 = PTR_PTR_1126ae720;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10705c8e4;
    puStack_b0 = &UNK_110866320;
    unaff_x23 = &puStack_c8;
    _objc_copyWeak(auStack_a8,auStack_a0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127635e8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127635e8) = puVar6;
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126ae720;
    puStack_f0 = puVar3;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x10705c924;
    puStack_d8 = &UNK_110989858;
    unaff_x24 = &puStack_f0;
    _objc_copyWeak(auStack_d0,auStack_a0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127635ec);
    *(undefined **)((long)puVar1 + (long)_DAT_1127635ec) = puVar6;
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126ae720;
    puStack_118 = puVar3;
    uStack_110 = 0xc2000000;
    uStack_108 = 0x10705c964;
    puStack_100 = &UNK_110989888;
    unaff_x25 = &puStack_118;
    _objc_copyWeak(auStack_f8,auStack_a0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127635f0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127635f0) = puVar6;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 4);
  _objc_destroyWeak(unaff_x24 + 4);
  _objc_destroyWeak(unaff_x23 + 4);
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume(param_3);
  puVar1 = (undefined8 *)(param_3 + 0x20);
  _objc_loadWeakRetained(puVar1);
  puVar5 = puVar1;
  func_0x00010bdee920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 10705c8e4; end: 10705c9a3;  */

void FUN_10705c8e4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdee920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10705c9a4; end: 10705cb37; -[SCHeaderStatusView _createIconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705c9a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  func_0x00010c1a7f60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xce);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c182220(puVar1,param_2,0);
  func_0x00010c219b60(puVar1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_68 = puVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar8 = *(long *)(param_1 + _DAT_1127635d8);
  func_0x00010bef6d60(lVar8,param_2,puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126d4340;
    _objc_alloc(PTR_PTR_1126d4340);
    lVar9 = lVar8;
    func_0x00010bf13d40(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6480(puVar1,param_2,lVar9,*(undefined8 *)(lVar8 + _DAT_1127635d4));
    _objc_release(lVar9);
    func_0x00010c1a7f60(puVar1,param_2,1);
    func_0x00010c219b60(puVar1,param_2,0);
    func_0x00010c181f00(0x443b8000,puVar1,param_2,0);
    func_0x00010befbb60(lVar8,param_2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10705cb38; end: 10705cbdf; -[SCHeaderStatusView _createContextualHeaderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705cb38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d4340;
  _objc_alloc(PTR_PTR_1126d4340);
  lVar2 = param_1;
  func_0x00010bf13d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6480(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + _DAT_1127635d4));
  _objc_release(lVar2);
  func_0x00010c1a7f60(puVar1,param_2,1);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c181f00(0x443b8000,puVar1,param_2,0);
  func_0x00010befbb60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10705cbe0; end: 10705cc4b; -[SCHeaderStatusView _createAddButtonView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705cbe0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d4348;
  _objc_opt_new(PTR_PTR_1126d4348);
  func_0x00010c219b60();
  func_0x00010c181f00(0x443b8000,puVar1,param_2,0);
  func_0x00010befbb60(param_1,param_2,puVar1);
  func_0x00010c161980(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_1127635f4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10705cc4c; end: 10705cfcb; -[SCHeaderStatusView _setupContextualHeaderConstraintsWithVerticalStacking:stackEdited:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705cc4c(long param_1,undefined8 param_2,uint param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_1127635f8;
  if ((*(byte *)(param_1 + lVar10) != param_3) ||
     (lVar1 = param_1, *(long *)(param_1 + _DAT_1127635fc) == 0)) {
    func_0x00010bde0120(param_1);
    *(char *)(param_1 + lVar10) = (char)param_3;
    lVar1 = *(long *)(param_1 + _DAT_1127635ec);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = lVar1;
    uStack_a0 = lVar1;
    lVar10 = param_1;
    lVar5 = lVar1;
    lVar6 = param_1;
    if (param_3 == 0) {
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + _DAT_1127635d8);
      func_0x00010c1408a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = uStack_a8;
      func_0x00010bf493c0(0x4010000000000000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c274200(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = uStack_a0;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1408a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010bf49500();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      if (param_4 == 0) {
        uVar2 = *(undefined8 *)(param_1 + _DAT_1127635d8);
        func_0x00010bf1ff80(uVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + _DAT_112763600);
        func_0x00010c274200(uVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      lVar3 = uStack_a8;
      func_0x00010bf493a0(uStack_a8,uVar2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      if (param_4 == 0) {
        func_0x00010c08de00(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = 0;
      }
      else {
        lVar10 = *(long *)(param_1 + _DAT_112763600);
        func_0x00010c2793a0(lVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = 0x4010000000000000;
      }
      lVar4 = uStack_a0;
      func_0x00010bf493c0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1408a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010bf49500();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar11 = *(undefined8 *)(param_1 + _DAT_1127635fc);
    *(undefined **)(param_1 + _DAT_1127635fc) = puVar8;
    _objc_release(uVar11);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar10);
    _objc_release(uStack_a0);
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(uStack_a8);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = (long)_DAT_1127635fc;
  if (*(long *)(lVar1 + lVar9) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar2 = *(undefined8 *)(lVar1 + lVar9);
    *(undefined8 *)(lVar1 + lVar9) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10705cfcc; end: 10705d017; -[SCHeaderStatusView _clearContextualHeaderConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705cfcc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127635fc;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10705d018; end: 10705d3a3; -[SCHeaderStatusView _setupAddButtonConstraintsWithVerticalStacking:stackEdited:] */

/* WARNING: Possible PIC construction at 0x00010705d3e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010705d3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705d018(long param_1,undefined8 param_2,uint param_3,int param_4)

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
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lStack_b0;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_1127635f8;
  if ((*(byte *)(param_1 + lVar11) != param_3) ||
     (lVar1 = param_1, *(long *)(param_1 + _DAT_112763604) == 0)) {
    func_0x00010bddfc80(param_1);
    *(char *)(param_1 + lVar11) = (char)param_3;
    lVar1 = *(long *)(param_1 + _DAT_1127635f0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    lStack_b0 = lVar1;
    lVar8 = param_1;
    lVar5 = lVar1;
    lVar6 = param_1;
    if (param_3 == 0) {
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = *(long *)(param_1 + _DAT_112763600);
      if (lVar2 == 0) {
        lVar2 = *(long *)(param_1 + _DAT_1127635d8);
      }
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar11;
      func_0x00010bf493c0(0x4010000000000000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf348e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lStack_b0;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010bf49500();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      if (param_4 == 0) {
        lVar2 = *(long *)(param_1 + _DAT_1127635d8);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar2 = *(long *)(param_1 + _DAT_112763600);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar3 = lVar11;
      func_0x00010bf493a0(lVar11,lVar2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      if (param_4 == 0) {
        func_0x00010c08e400(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = 0;
      }
      else {
        lVar8 = *(long *)(param_1 + _DAT_112763600);
        func_0x00010c1408a0(lVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = 0x4010000000000000;
      }
      lVar4 = lStack_b0;
      func_0x00010bf493c0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010bf49500();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + _DAT_112763604);
    *(undefined **)(param_1 + _DAT_112763604) = puVar9;
    _objc_release(uVar12);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar8);
    _objc_release(lStack_b0);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar11);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    param_3 = param_3 ^ 1;
    func_0x00010bea50e0(param_1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    lVar10 = 0xc;
    if (param_3 == 0) {
      lVar10 = 0x10;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(lVar1 + *(int *)(&DAT_1127635d4 + lVar10)),PTR_s_setActive__112636340
               ,0);
    return;
  }
  return;
}



/* Entry: 10705d3a4; end: 10705d3ff; -[SCHeaderStatusView _setLabelViewCenteredVertically:] */

/* WARNING: Possible PIC construction at 0x00010705d3e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010705d3e4) */

void FUN_10705d3a4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0xc;
  if (param_3 == 0) {
    lVar1 = 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + *(int *)(&DAT_1127635d4 + lVar1)),PTR_s_setActive__112636340,
             0);
  return;
}



/* Entry: 10705d400; end: 10705d44b; -[SCHeaderStatusView _clearAddButtonConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705d400(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763604;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea50f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setLabelViewCenteredVertically__112586de0,0)
  ;
  return;
}



/* Entry: 10705d44c; end: 10705d713; -[SCHeaderStatusView _setupEditedLabelContraintsWithStack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705d44c(undefined *param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_112763608;
  if (((byte)param_1[lVar13] != param_3) || (*(long *)(param_1 + _DAT_11276360c) == 0)) {
    func_0x00010bde0320(param_1);
    param_1[lVar13] = (char)param_3;
    lVar13 = (long)_DAT_112763600;
    uVar2 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = (long)_DAT_112763610;
    uVar3 = *(undefined8 *)(param_1 + lVar14);
    uVar11 = uVar2;
    if (param_3 == 0) {
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf493a0(uVar2,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar13);
      uStack_90 = uVar11;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010c2793a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010bf493c0(0x4010000000000000,uVar4,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_88 = uVar9;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_90,2);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = (long)_DAT_11276360c;
      uVar6 = *(undefined8 *)(param_1 + lVar13);
      *(undefined **)(param_1 + lVar13) = puVar10;
    }
    else {
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf493a0(uVar2,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar13);
      uStack_80 = uVar11;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010c08de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010bf493a0(uVar4,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar13);
      uStack_78 = uVar9;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + _DAT_1127635d8);
      func_0x00010c2793a0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf49500(uVar6,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = (long)_DAT_11276360c;
      uVar12 = *(undefined8 *)(param_1 + lVar13);
      *(undefined **)(param_1 + lVar13) = puVar10;
      _objc_release(uVar12);
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    _objc_release(uVar6);
    _objc_release(uVar9);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar11);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar1 = (undefined8 *)(param_1 + lVar13);
    param_1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,*puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = (long)_DAT_11276360c;
  if (*(long *)(param_1 + lVar13) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar11 = *(undefined8 *)(param_1 + lVar13);
    *(undefined8 *)(param_1 + lVar13) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar11);
    return;
  }
  return;
}



/* Entry: 10705d714; end: 10705d75f; -[SCHeaderStatusView _clearEditedLabelConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705d714(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276360c;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10705d760; end: 10705d86b; -[SCHeaderStatusView statusLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705d760(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112763610;
  lVar2 = *(long *)(param_1 + lVar4);
  if (lVar2 == 0) {
    puVar1 = PTR_PTR_1126aea58;
    _objc_opt_new();
    func_0x00010c165e00();
    func_0x00010c21ad00(puVar1,param_2,0x18);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    lVar2 = param_1;
    func_0x00010bf13d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010bef6d60(*(undefined8 *)(param_1 + _DAT_1127635d8),param_2,
                        *(undefined8 *)(param_1 + lVar4));
    _objc_release(puVar1);
    lVar2 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10705d86c; end: 10705d947; -[SCHeaderStatusView editedLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705d86c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112763600;
  lVar2 = *(long *)(param_1 + lVar4);
  if (lVar2 == 0) {
    puVar1 = PTR_PTR_1126aea58;
    _objc_opt_new();
    func_0x00010c165e00();
    func_0x00010c21ad00(puVar1,param_2,0x18);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    lVar2 = param_1;
    func_0x00010bf13d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010bef6d60(*(undefined8 *)(param_1 + _DAT_1127635d8),param_2,
                        *(undefined8 *)(param_1 + lVar4));
    _objc_release(puVar1);
    lVar2 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10705d948; end: 10705dc5f; -[SCHeaderStatusView setAttributedStatusText:attributedEditedText:senderIcon:contextualHeaderViewModel:addButtonViewModel:stackVertically:stackEdited:senderTapAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705d948(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined1 param_9
                  ,undefined4 param_10,long param_11)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar3 = param_1;
  func_0x00010c2532c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(param_3);
  _objc_release(lVar3);
  lVar3 = param_4;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    if (*(long *)(param_1 + _DAT_112763600) != 0) {
      func_0x00010c1a7f60(*(long *)(param_1 + _DAT_112763600),param_2,1);
      func_0x00010bde0320(param_1);
    }
  }
  else {
    lVar3 = param_1;
    func_0x00010bf8c5e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(lVar3);
    func_0x00010beac380(param_1,param_2,param_9);
  }
  lVar3 = (long)_DAT_1127635ec;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  if (param_6 == 0) {
    func_0x00010bfe6360(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    func_0x00010bde0120(param_1);
    lVar2 = (long)_DAT_1127635f0;
    if (param_7 != 0) {
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0();
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar1);
      func_0x00010beaa6c0(param_1,param_2,param_8,param_9);
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010bfe6360(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar1);
      func_0x00010bde0120(param_1);
      goto LAB_10705dbd8;
    }
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    func_0x00010beabc60(param_1,param_2,param_8,param_9);
    lVar2 = (long)_DAT_1127635f0;
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010bfe6360(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    func_0x00010bddfc80(param_1);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010bddfc80(param_1);
LAB_10705dbd8:
  func_0x00010bea7560(param_1,param_2,param_5);
  _objc_release(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112763614);
  *(long *)(param_1 + _DAT_112763614) = param_11;
  _objc_retain(param_11);
  _objc_release(uVar1);
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_1127635dc),param_2,param_11 != 0);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10705dc60; end: 10705de4f; -[SCHeaderStatusView _setSenderIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705dc60(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112763618;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(param_3);
  _objc_retain(uVar4);
  if (param_3 == uVar4) {
    _objc_release(uVar4);
    _objc_release(param_3);
  }
  else {
    if (uVar4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_10705de0c;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = param_3;
    _objc_release(uVar2);
    if (param_3 == 0) {
      func_0x00010bea46c0(param_1);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      uVar2 = *(undefined8 *)(param_1 + _DAT_1127635d4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126aebf0;
      _objc_alloc(PTR_PTR_1126aebf0);
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c011b80(puVar3);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      func_0x00010bf88c20(uVar2);
      _objc_release(puVar3);
      _objc_release(param_1);
      _objc_release(uVar2);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
LAB_10705de0c:
  _objc_release(param_3);
  return;
}



/* Entry: 10705de50; end: 10705df23;  */

void FUN_10705de50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10705df24;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10705df24; end: 10705df57;  */

void FUN_10705df24(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea46c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10705df58; end: 10705e0bf; -[SCHeaderStatusView _setIconImage:iconResource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705df58(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = *(long *)(param_1 + _DAT_112763618);
  _objc_retain(param_4);
  _objc_retain(lVar3);
  if (param_4 == lVar3) {
    _objc_release(lVar3);
    _objc_release(param_4);
LAB_10705dfec:
    lVar3 = (long)_DAT_1127635e8;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    if (param_3 == 0) {
      func_0x00010bfe6360(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar1);
      lVar2 = *(long *)(param_1 + lVar3);
      func_0x00010bfe6360(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00();
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar1);
      lVar2 = param_3;
      func_0x00010bfe9720(param_3,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00();
      _objc_release(uVar1);
    }
  }
  else {
    lVar2 = param_4;
    if (lVar3 != 0) {
      func_0x00010c071ae0(param_4,param_2,lVar3);
      _objc_release(lVar3);
      _objc_release(param_4);
      if ((int)lVar2 == 0) goto LAB_10705e0a0;
      goto LAB_10705dfec;
    }
  }
  _objc_release(lVar2);
LAB_10705e0a0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10705e0c0; end: 10705e0f3; -[SCHeaderStatusView _onTapLabelView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705e0c0(long param_1)

{
  if (*(long *)(param_1 + _DAT_112763614) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127635f4),
               PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,
               *(long *)(param_1 + _DAT_112763614),*(undefined8 *)(param_1 + _DAT_1127635d8));
    return;
  }
  return;
}



/* Entry: 10705e0f4; end: 10705e103; -[SCHeaderStatusView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10705e0f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127635f4);
}



/* Entry: 10705e104; end: 10705e143; -[SCHeaderStatusView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705e104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127635f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705e144; end: 10705e263; -[SCHeaderStatusView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705e144(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127635f4,0);
  _objc_storeStrong(param_1 + _DAT_1127635d4,0);
  _objc_storeStrong(param_1 + _DAT_1127635e4,0);
  _objc_storeStrong(param_1 + _DAT_1127635e0,0);
  _objc_storeStrong(param_1 + _DAT_11276360c,0);
  _objc_storeStrong(param_1 + _DAT_112763604,0);
  _objc_storeStrong(param_1 + _DAT_1127635fc,0);
  _objc_storeStrong(param_1 + _DAT_1127635dc,0);
  _objc_storeStrong(param_1 + _DAT_112763614,0);
  _objc_storeStrong(param_1 + _DAT_1127635f0,0);
  _objc_storeStrong(param_1 + _DAT_1127635ec,0);
  _objc_storeStrong(param_1 + _DAT_112763618,0);
  _objc_storeStrong(param_1 + _DAT_1127635e8,0);
  _objc_storeStrong(param_1 + _DAT_112763600,0);
  _objc_storeStrong(param_1 + _DAT_112763610,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127635d8,0);
  return;
}



/* Entry: 10705e264; end: 10705e2cb; -[SCShapeLayer removeAllAnimations] */

void FUN_10705e264(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f8698;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_removeAllAnimations_1126284c8);
  func_0x00010c25ec40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7520();
  _objc_release(param_1);
  return;
}



/* Entry: 10705e2cc; end: 10705e377; -[SCSenderLineView initWithFrame:] */

undefined1 * FUN_10705e2cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f86a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c22a660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(puVar2);
    _objc_release(puVar3);
    func_0x00010c1bdd00(0,puVar2);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10705e378; end: 10705e397; -[SCSenderLineView setCornerMask:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705e378(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11276361c) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_11276361c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsPathUpdate_1126509c0);
  return;
}



/* Entry: 10705e398; end: 10705e3b7; -[SCSenderLineView setCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705e398(double param_1,long param_2)

{
  if (*(double *)(param_2 + _DAT_112763620) != param_1) {
    *(double *)(param_2 + _DAT_112763620) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsPathUpdate_1126509c0);
    return;
  }
  return;
}


