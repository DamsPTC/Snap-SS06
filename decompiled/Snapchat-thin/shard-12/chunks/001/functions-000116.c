/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e16e94; end: 108e1710b; -[SCCaptionBigTextPlusView _findRightFontSize:] */

double FUN_108e16e94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  double dVar14;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  double dVar15;
  double dVar16;
  double dStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    dVar15 = 65.0;
  }
  else {
    dVar15 = 0.0;
    uStack_138 = 0;
    uStack_140 = 0;
    _objc_retain(lVar1);
    lVar3 = lVar1;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (lVar3 == 0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8;
      dVar16 = 0.0;
      do {
        lVar13 = 0;
        do {
          dVar14 = dVar15;
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar1);
            dVar14 = dVar15;
          }
          ppuVar12 = *(undefined ***)(lVar13 * 8);
          ppuVar4 = ppuVar12;
          func_0x00010c08fa60();
          puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          dVar15 = dVar14;
          if (ppuVar4 != (undefined **)0x0) {
            lVar5 = param_1;
            func_0x00010c26ca80(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010bfb3a80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2a51a0(puVar9);
            dVar15 = dVar14;
            _objc_release(lVar6);
            _objc_release(lVar5);
            if (dVar16 < dVar14) {
              _objc_retain(ppuVar12);
              _objc_release(ppuVar11);
              ppuVar11 = ppuVar12;
              dVar16 = dVar14;
            }
          }
          lVar13 = lVar13 + 1;
        } while (lVar3 != lVar13);
        lVar3 = lVar1;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar1);
    lVar2 = param_1;
    func_0x00010be5dd20(param_1);
    ppuVar4 = ppuVar11;
    func_0x00010c08fa60();
    if (ppuVar4 == (undefined **)0x0) {
      dVar15 = 65.0;
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bfb40c0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bfb3f20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0c2220((double)lVar2);
      dVar15 = (double)(long)puVar9;
      _objc_release(uVar8);
    }
    _objc_release(ppuVar11);
    lStack_148 = param_3;
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return dVar15;
  }
  ___stack_chk_fail();
  func_0x00010c20fde0();
  func_0x00010c20fe00(in_d4,in_d5,in_d6,in_d7,param_3);
  *(long *)(param_3 + 0xa8) = lStack_148;
  *(double *)(param_3 + 0xa0) = dStack_150;
  *(undefined8 *)(param_3 + 0xb0) = uStack_140;
  *(undefined8 *)(param_3 + 0xb8) = uStack_138;
  lVar1 = param_3;
  func_0x00010c071280();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be94670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__resize_112582b38);
    return dStack_150;
  }
  return dStack_150;
}



/* Entry: 108e1710c; end: 108e171b7; -[SCCaptionBigTextPlusView viewDidLayoutSubviewsWithSuperviewBounds:superviewContentBounds:superviewEdgeInsets:] */

void FUN_108e1710c(long param_1)

{
  long lVar1;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  func_0x00010c20fde0();
  func_0x00010c20fe00(in_d4,in_d5,in_d6,in_d7,param_1);
  *(undefined8 *)(param_1 + 0xa8) = in_stack_00000008;
  *(undefined8 *)(param_1 + 0xa0) = in_stack_00000000;
  *(undefined8 *)(param_1 + 0xb0) = in_stack_00000010;
  *(undefined8 *)(param_1 + 0xb8) = in_stack_00000018;
  lVar1 = param_1;
  func_0x00010c071280();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be94670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resize_112582b38);
    return;
  }
  return;
}



/* Entry: 108e171b8; end: 108e17237; -[SCCaptionBigTextPlusView colorChanged:] */

void FUN_108e171b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 199) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bed4da0(param_1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010bed4d60(param_1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c26b900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e17238; end: 108e1723f; -[SCCaptionBigTextPlusView isPinningSupported] */

undefined8 FUN_108e17238(void)

{
  return 1;
}



/* Entry: 108e17240; end: 108e17247; -[SCCaptionBigTextPlusView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_108e17240(void)

{
  return 1;
}



/* Entry: 108e17248; end: 108e17297; -[SCCaptionBigTextPlusView gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

uint FUN_108e17248(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  puVar1 = PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868;
  _objc_retain(in_x3);
  _objc_opt_class(puVar1);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  _objc_release(in_x3);
  return (uint)uVar2 & 1;
}



/* Entry: 108e17298; end: 108e1751b; -[SCCaptionBigTextPlusView _adjustAnimationsSpeedForView:withSpeed:] */

void FUN_108e17298(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long unaff_x23;
  long unaff_x24;
  undefined *puVar8;
  long unaff_x25;
  long unaff_x26;
  long lVar9;
  long lVar10;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2e8 [128];
  undefined8 uStack_268;
  undefined *puStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
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
  undefined1 auStack_100 [128];
  long lStack_80;
  
  puVar7 = &uStack_200;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lVar10 = param_4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar10;
  func_0x00010bf03d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_3,&uStack_1c0,auStack_100,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_1b0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1b0 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        unaff_x23 = *(long *)(lStack_1b8 + lVar10 * 8);
        lVar3 = param_4;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = lVar3;
        func_0x00010bf03c40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        unaff_x24 = unaff_x25;
        func_0x00010bf51e00();
        func_0x00010c207c40((float)param_1);
        lVar3 = param_4;
        func_0x00010c08c0e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12b200();
        _objc_release(lVar3);
        unaff_x26 = param_4;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6c20();
        _objc_release(unaff_x26);
        _objc_release(unaff_x24);
        _objc_release(unaff_x25);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_3,&uStack_1c0,auStack_100,0x10);
      lVar10 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  lVar1 = param_4;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x23 = *plStack_1f0;
    do {
      unaff_x24 = 0;
      do {
        if (*plStack_1f0 != unaff_x23) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010bdc9280(param_1,param_2,param_3,*(undefined8 *)(lStack_1f8 + unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (lVar2 != unaff_x24);
      lVar2 = lVar1;
      puVar7 = &uStack_200;
      func_0x00010bf52a60();
      lVar10 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  lVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_108e1751c;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_250 = unaff_x26;
  lStack_248 = unaff_x25;
  lStack_240 = unaff_x24;
  lStack_238 = unaff_x23;
  lStack_230 = lVar10;
  lStack_228 = lVar1;
  uStack_220 = param_2;
  lStack_218 = param_4;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c17fb40(PTR__OBJC_CLASS___CATransaction_1126b5718,param_3,puVar7);
  uStack_268 = *(undefined8 *)(lVar2 + 0xf8);
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar8;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_260 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_268,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar4);
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  _objc_retain(puVar6);
  puVar4 = puVar6;
  func_0x00010bf52a60(puVar6,param_3,&uStack_330,auStack_2e8,0x10);
  if (puVar4 != (undefined *)0x0) {
    lVar10 = *plStack_320;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_320 != lVar10) {
          _objc_enumerationMutation(puVar6);
        }
        func_0x00010bdc9280(0x4000000000000000,lVar2,param_3,
                            *(undefined8 *)(lStack_328 + (long)puVar8 * 8));
        puVar8 = puVar8 + 1;
      } while (puVar4 != puVar8);
      puVar4 = puVar6;
      func_0x00010bf52a60(puVar6,param_3,&uStack_330,auStack_2e8,0x10);
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar6);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)((long)puVar7 + 0xc2) = 1;
  return;
}



/* Entry: 108e1751c; end: 108e176d3; -[SCCaptionBigTextPlusView _adjustKeyboardAnimationSpeed:] */

void FUN_108e1751c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c17fb40(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,param_3);
  uStack_68 = *(undefined8 *)(param_1 + 0xf8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar3);
  puVar1 = puVar3;
  func_0x00010bf52a60(puVar3,param_2,&uStack_130,auStack_e8,0x10);
  if (puVar1 != (undefined *)0x0) {
    lVar4 = *plStack_120;
    do {
      puVar5 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar4) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010bdc9280(0x4000000000000000,param_1,param_2,
                            *(undefined8 *)(lStack_128 + (long)puVar5 * 8));
        puVar5 = puVar5 + 1;
      } while (puVar1 != puVar5);
      puVar1 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_130,auStack_e8,0x10);
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(param_3 + 0xc2) = 1;
  return;
}



/* Entry: 108e176d4; end: 108e176df; -[SCCaptionBigTextPlusView setCaptionDismissedPollsSuggestion] */

void FUN_108e176d4(long param_1)

{
  *(undefined1 *)(param_1 + 0xc2) = 1;
  return;
}



/* Entry: 108e176e0; end: 108e176e7; -[SCCaptionBigTextPlusView setCaptionStylePreference:] */

void FUN_108e176e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108e176e8; end: 108e17d63; -[SCCaptionBigTextPlusView _updateCaptionStyleColor:] */

/* WARNING: Removing unreachable block (ram,0x000108e17cb4) */

void FUN_108e176e8(double param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puStack_100;
  undefined8 uStack_f8;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar4 = PTR_PTR_1126c4438;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010bfb40c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c26b920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06ebe0(*(undefined8 *)(param_2 + 0x18));
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010bf15ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc3d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar8 = puVar4;
  func_0x00010bf529e0();
  if (puVar8 != (undefined *)0x0) {
    _objc_retain(puVar4);
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    *(undefined **)(param_2 + 0x30) = puVar4;
    _objc_release(uVar5);
  }
  lVar6 = *(long *)(param_2 + 0x18);
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar6;
  func_0x00010c26c7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar10;
  func_0x00010bf529e0();
  _objc_release(lVar10);
  _objc_release(lVar6);
  if (lVar7 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010bfb40c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c26c7e0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 1.60807493534087e-314;
    _objc_retain(param_4);
    uVar2 = uVar5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = uVar2;
    _objc_release(uVar18);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(param_4);
  }
  puVar8 = *(undefined **)(param_2 + 0x18);
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf1fb20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar9 == (undefined *)0x0) {
LAB_108e179c0:
    _objc_release(puVar8);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010bfb40c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb3bc0();
    _objc_release(uVar5);
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126c4438;
    if (0.0 < param_1) {
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010bfb40c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010bf1fb20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06ebe0(*(undefined8 *)(param_2 + 0x18));
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010bf15ec0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfc3d20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(uVar2);
      puVar9 = puVar8;
      func_0x00010bf529e0();
      if (puVar9 != (undefined *)0x0) {
        puVar9 = puVar8;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_2 + 0x48);
        *(undefined **)(param_2 + 0x48) = puVar9;
        _objc_release(uVar5);
      }
      goto LAB_108e179c0;
    }
  }
  lVar10 = *(long *)(param_2 + 0x18);
  func_0x00010bf144e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar8 = PTR_PTR_1126c4438;
  if (lVar10 == 0) goto LAB_108e17d14;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010bf144e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06ebe0(*(undefined8 *)(param_2 + 0x18));
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010bf15ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc3d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar9 = puVar8;
  func_0x00010bf529e0();
  if (puVar9 != (undefined *)0x0) {
    puVar9 = puVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    *(undefined **)(param_2 + 0x40) = puVar9;
    _objc_release(uVar5);
    lVar10 = *(long *)(param_2 + 0x30);
    func_0x00010bf529e0();
    if (lVar10 == 1) {
      lVar6 = *(long *)(param_2 + 0x18);
      func_0x00010bfb40c0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar6;
      func_0x00010c26b920();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar10;
      func_0x00010bf413c0();
      if (lVar7 == 3) {
        uVar11 = *(ulong *)(param_2 + 0x30);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c071ae0();
        if ((uVar12 & 1) == 0) {
          uStack_f8 = *(undefined8 *)(param_2 + 0x30);
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puStack_100 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uStack_f8;
          func_0x00010c071ae0();
          if ((int)uVar5 != 0) goto LAB_108e17b58;
          bVar1 = false;
LAB_108e17be4:
          _objc_release(puStack_100);
          _objc_release(uStack_f8);
        }
        else {
LAB_108e17b58:
          lVar13 = *(long *)(param_2 + 0x18);
          func_0x00010bfb40c0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar13;
          func_0x00010c26b920();
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar7;
          func_0x00010bf41420();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar14;
          func_0x00010bf529e0();
          bVar1 = lVar15 != 0;
          _objc_release(lVar14);
          _objc_release(lVar7);
          _objc_release(lVar13);
          if ((uVar12 & 1) == 0) goto LAB_108e17be4;
        }
        _objc_release(puVar9);
        _objc_release(uVar11);
      }
      else {
        bVar1 = false;
      }
      _objc_release(lVar10);
      _objc_release(lVar6);
    }
    else {
      bVar1 = false;
    }
    lVar10 = *(long *)(param_2 + 0x18);
    func_0x00010c25e260();
    if ((bVar1) && (lVar10 == 7)) {
      func_0x00010bfc9760(*(undefined8 *)(param_2 + 0x40));
      puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      *(undefined **)(param_2 + 0x30) = puVar16;
      _objc_release(uVar5);
      _objc_release(puVar9);
    }
  }
  _objc_release(puVar8);
LAB_108e17d14:
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126c4438;
  func_0x00010bf40c40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06ebe0(*(undefined8 *)(*(long *)(param_4 + 0x28) + 0x18));
  uVar5 = *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x18);
  func_0x00010bf15ec0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc3d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(param_3);
  func_0x00010bf529e0(puVar4);
  puVar8 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar8);
    puVar9 = puVar8;
  }
  _objc_release(puVar8);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108e17d64; end: 108e17e67;  */

void FUN_108e17d64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126c4438;
  func_0x00010bf40c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06ebe0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
  func_0x00010bf15ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc3d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
  func_0x00010bf529e0(puVar2);
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar3);
    puVar4 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e17e68; end: 108e17ea7; -[SCCaptionBigTextPlusView _updateCaptionStyle] */

void FUN_108e17e68(undefined8 param_1)

{
  func_0x00010bea7660();
  func_0x00010bea4020(param_1);
  func_0x00010bea84e0(param_1);
  func_0x00010bea4040(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be94670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resize_112582b38);
  return;
}



/* Entry: 108e17ea8; end: 108e17f23; -[SCCaptionBigTextPlusView _needUpdateColor] */

bool FUN_108e17ea8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010bfb40c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26b920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf416c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return 1 < uVar4;
}



/* Entry: 108e17f24; end: 108e17fe3; -[SCCaptionBigTextPlusView _setTextTransform] */

void FUN_108e17f24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c159e80(uVar1);
  func_0x00010be5c920(param_1);
  if (*(char *)(param_1 + 0xc6) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x118);
    func_0x00010c26b700(uVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_108e3ebf0(uVar1,param_2,uVar2);
    func_0x00010c1fb500(*(undefined8 *)(param_1 + 0x118));
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 108e17fe4; end: 108e1828b;  */

void FUN_108e17fe4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26ca00();
  _objc_release(lVar1);
  lVar1 = param_2;
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (*(long *)(*(long *)(param_1 + 0x20) + 0x98) != 0) {
        lVar2 = param_2;
        func_0x00010bf0e540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 == 0) {
          func_0x00010c26b700(param_2);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010c14d5e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c212f20(param_2);
        }
        else {
          func_0x00010bf0e540();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = param_2;
          func_0x00010c26b700(param_2);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c14d5e0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar1;
          func_0x00010c14c800(lVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16b720(param_2);
          _objc_release(lVar4);
          _objc_release(lVar3);
        }
        _objc_release(lVar2);
        _objc_release(lVar1);
        *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98) = 0;
      }
      goto LAB_108e1822c;
    }
    if (lVar2 != 1) goto LAB_108e1822c;
    lVar2 = param_2;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010c26b700(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c09e420();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108e1820c;
    }
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
LAB_108e18190:
    lVar2 = lVar1;
    func_0x00010c14c820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(param_2);
  }
  else {
    if (lVar2 != 3) {
      if (lVar2 != 2) goto LAB_108e1822c;
      lVar2 = param_2;
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        func_0x00010c26b700(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c09e940();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_108e1820c;
      }
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108e18190;
    }
    lVar2 = param_2;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108e18190;
    }
    func_0x00010c26b700(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c09e5e0();
    _objc_retainAutoreleasedReturnValue();
LAB_108e1820c:
    func_0x00010c212f20(param_2);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_108e1822c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e1828c; end: 108e1838f; -[SCCaptionBigTextPlusView _setTextBackground] */

/* WARNING: Possible PIC construction at 0x000108e18370: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e18374) */

void FUN_108e1828c(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  func_0x00010c213140(*(undefined8 *)(param_2 + 0x90),param_3,*(undefined8 *)(param_2 + 0x40));
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010bf144e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1fbe0();
  dVar4 = param_1;
  _objc_release(uVar1);
  if (param_1 == 0.0) {
    func_0x00010c213160(0,*(undefined8 *)(param_2 + 0x90));
  }
  else {
    lVar2 = param_2;
    func_0x00010bf8c660();
    if ((int)lVar2 == 0) {
      func_0x00010bfb4000(param_2);
    }
    else {
      func_0x00010bf8c740(param_2);
    }
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    dVar3 = dVar4;
    func_0x00010bfb40c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb4000();
    dVar4 = dVar4 / dVar3;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010bf144e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1fbe0();
    func_0x00010c213160(dVar4 * dVar3,*(undefined8 *)(param_2 + 0x90));
    _objc_release(uVar1);
  }
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108e18390; end: 108e1858f; -[SCCaptionBigTextPlusView _setFontBorderWithTextIsEditing:] */

void FUN_108e18390(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  double dVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  double dStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010bfb40c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb4000();
  if (0.0 < param_1) {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010bfb40c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb3bc0();
    dVar8 = param_1 * 100.0;
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010bfb40c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb4000();
    dVar8 = dVar8 / param_1;
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((0.0 < dVar8) && (*(long *)(param_2 + 0x48) != 0)) {
      lVar4 = param_2;
      func_0x00010c26ca80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c27e220();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0d3c80();
      _objc_release(lVar5);
      _objc_release(lVar4);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(-dVar8,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(lVar6,param_3,puVar7,
                          *(undefined8 *)PTR__NSStrokeWidthAttributeName_110345870);
      _objc_release(puVar7);
      func_0x00010c1d0640(lVar6,param_3,*(undefined8 *)(param_2 + 0x48),
                          *(undefined8 *)PTR__NSStrokeColorAttributeName_110345868);
      puVar7 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_108e18590;
      puStack_60 = &UNK_110ac6290;
      _objc_retain(lVar6);
      lStack_58 = lVar6;
      func_0x00010be5c920(param_2,param_3,&puStack_78);
      if ((param_4 & 1) == 0) {
        puStack_a8 = puVar7;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_108e185dc;
        puStack_90 = &UNK_110ac63e0;
        lStack_88 = param_2;
        dStack_80 = dVar8;
        func_0x00010be5c920(param_2,param_3,&puStack_a8);
      }
      _objc_release(lStack_58);
      _objc_release(lVar6);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e18590; end: 108e185db;  */

void FUN_108e18590(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf51e00(uVar1);
  func_0x00010c21ade0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e185dc; end: 108e1865b;  */

void FUN_108e185dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf0e540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14c7a0(*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e1865c; end: 108e18937; -[SCCaptionBigTextPlusView _setShadows] */

void FUN_108e1865c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  
  func_0x00010be8b4e0();
  lVar1 = param_2;
  func_0x00010bf8c660();
  if ((int)lVar1 == 0) {
    func_0x00010bfb4000(param_2);
  }
  else {
    func_0x00010bf8c740(param_2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  dVar12 = param_1;
  func_0x00010bfb40c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb4000();
  dVar11 = dVar12;
  _objc_release(uVar2);
  lVar3 = *(long *)(param_2 + 0x18);
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c26c7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _objc_release(lVar3);
  if (-1 < lVar10 + -1) {
    param_1 = param_1 / dVar12;
    do {
      lVar10 = lVar10 + -1;
      uVar4 = *(ulong *)(param_2 + 0x38);
      func_0x00010c0dfd40(uVar4,param_3,lVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c071ae0(uVar4,param_3,puVar5);
      _objc_release(puVar5);
      _objc_release(uVar4);
      if ((uVar6 & 1) == 0) {
        uVar7 = *(undefined8 *)(param_2 + 0x18);
        func_0x00010bfb40c0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar7;
        func_0x00010c26c7e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        _objc_release(uVar7);
        lVar1 = param_2;
        func_0x00010bdf4a20(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(*(undefined8 *)(param_2 + 0x88),param_3,lVar1);
        uVar2 = *(undefined8 *)(param_2 + 0x38);
        func_0x00010c0dfd40(uVar2,param_3,lVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        lVar3 = lVar1;
        func_0x00010c08c0e0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fe740();
        _objc_release(lVar3);
        _objc_release(uVar2);
        func_0x00010c2bea40(uVar8);
        dVar12 = param_1 * dVar11;
        func_0x00010c2bec60(uVar8);
        lVar3 = lVar1;
        func_0x00010c08c0e0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fe7a0(dVar12,param_1 * dVar11);
        _objc_release(lVar3);
        func_0x00010c11ef60(uVar8);
        lVar3 = lVar1;
        func_0x00010c08c0e0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fe840(param_1 * dVar12);
        _objc_release(lVar3);
        lVar3 = lVar1;
        func_0x00010c08c0e0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        dVar11 = 5.26354424712089e-315;
        func_0x00010c1fe800();
        _objc_release(lVar3);
        lVar3 = param_2;
        func_0x00010c26c740(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = param_2;
        func_0x00010c26ca80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066fe0(lVar3,param_3,lVar1,lVar9);
        _objc_release(lVar9);
        _objc_release(lVar3);
        _objc_release(lVar1);
        _objc_release(uVar8);
      }
    } while (0 < lVar10);
  }
  return;
}



/* Entry: 108e18938; end: 108e18a8b; -[SCCaptionBigTextPlusView _removeAllShadows] */

void FUN_108e18938(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c26c740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar2);
      }
      uVar8 = *(ulong *)(lVar9 * 8);
      puVar3 = PTR_PTR_1126dc068;
      _objc_opt_class(PTR_PTR_1126dc068);
      uVar4 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar3);
      if (((uVar4 & 1) != 0) && (uVar4 = uVar8, func_0x00010c268120(), uVar4 == 1)) {
        func_0x00010c12c960(uVar8);
        func_0x00010c12d360(*(undefined8 *)(param_1 + 0x88));
      }
      lVar9 = lVar9 + 1;
    } while (lVar1 != lVar9);
    lVar1 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126dc068;
  _objc_alloc();
  lVar1 = lVar2;
  func_0x00010c26ca80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c013de0();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c26ca80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074c20();
  func_0x00010c1a7f60(puVar5);
  _objc_release(lVar1);
  func_0x00010c17d4c0(puVar5);
  puVar3 = puVar5;
  func_0x00010c08c0e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar3);
  lVar1 = lVar2;
  func_0x00010c26ca80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(puVar5);
  _objc_release(lVar6);
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c26ca80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26b7a0();
  func_0x00010c213040(puVar5);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar10 = 0xc2000000;
  _objc_retain(puVar5);
  func_0x00010c0f9680(puVar3);
  func_0x00010c211780(puVar5);
  lVar1 = lVar2;
  func_0x00010c26ca80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c26ba00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099240();
  puVar3 = puVar5;
  func_0x00010c26ba00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdbc0(uVar10);
  _objc_release(puVar3);
  _objc_release(lVar6);
  _objc_release(lVar1);
  func_0x00010c26ca80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ba40();
  func_0x00010c2131e0(puVar5);
  _objc_release(lVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108e18a8c; end: 108e18cb7; -[SCCaptionBigTextPlusView _createTextView] */

void FUN_108e18a8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126dc068;
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c013de0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c074c20();
  func_0x00010c1a7f60(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  func_0x00010c17d4c0(puVar1,param_2,0);
  puVar4 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar4);
  uVar2 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c26b7a0();
  func_0x00010c213040(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uVar5 = 0xc2000000;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108e18cb8;
  puStack_60 = &UNK_110842e18;
  _objc_retain(puVar1);
  puStack_58 = puVar1;
  func_0x00010c0f9680(puVar4,param_2,&puStack_78);
  func_0x00010c211780(puVar1,param_2,1);
  uVar2 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c26ba00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099240();
  puVar4 = puVar1;
  func_0x00010c26ba00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdbc0(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ba40();
  func_0x00010c2131e0(puVar1);
  _objc_release(param_1);
  _objc_release(puStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e18cb8; end: 108e18cff;  */

void FUN_108e18cb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e18d00; end: 108e18e9f; -[SCCaptionBigTextPlusView _manipulateCaptionTextViewsWithActionBlock:] */

void FUN_108e18d00(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x88);
  func_0x00010bf51e00();
  lVar4 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar14 = *(ulong *)(lVar15 * 8);
      puVar13 = PTR_PTR_1126dc068;
      _objc_opt_class(PTR_PTR_1126dc068);
      uVar5 = uVar14;
      _objc_opt_isKindOfClass(uVar14,puVar13);
      if ((uVar5 & 1) != 0) {
        uVar5 = uVar14;
        func_0x00010bf0e540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        uVar3 = uVar14;
        if (uVar5 == 0) {
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c212f20(uVar14);
        }
        else {
          func_0x00010bf0e540();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16b720(uVar14);
        }
        _objc_release(uVar3);
        (**(code **)(param_3 + 0x10))(param_3,uVar14);
      }
      lVar15 = lVar15 + 1;
    } while (lVar4 != lVar15);
    lVar4 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(param_3 + 0x30);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    uVar5 = *(ulong *)(param_3 + 0x30);
    func_0x00010bf529e0();
    puVar13 = *(undefined **)(param_3 + 0x30);
    if (uVar5 < 2) {
      func_0x00010c0dfd40(puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26ca80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180();
    }
    else {
      uVar6 = *(undefined8 *)(param_3 + 0x18);
      func_0x00010bfb40c0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c26b920();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf41360();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_3 + 0x18);
      func_0x00010bfb40c0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c26b920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf41000();
      puVar13 = param_3;
      func_0x00010be70bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41600(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26ca80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180();
      _objc_release(param_3);
      param_3 = puVar11;
    }
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar13);
    return;
  }
  return;
}



/* Entry: 108e18ea0; end: 108e1902f; -[SCCaptionBigTextPlusView _setFontColor] */

void FUN_108e18ea0(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x30);
    func_0x00010bf529e0();
    puVar10 = *(undefined **)(param_1 + 0x30);
    if (uVar2 < 2) {
      func_0x00010c0dfd40(puVar10,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26ca80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180();
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bfb40c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c26b920();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf41360();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bfb40c0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c26b920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf41000();
      puVar8 = param_1;
      func_0x00010be70bc0(param_1,param_2,puVar10,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41600(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26ca80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180();
      _objc_release(param_1);
      puVar10 = puVar8;
      param_1 = puVar9;
    }
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar10);
    return;
  }
  return;
}



/* Entry: 108e19030; end: 108e190f7; -[SCCaptionBigTextPlusView _shouldShowCaptionStyleOptions] */

undefined ** FUN_108e19030(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfb40c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb3f20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110efb098,param_2,uVar2);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bfb40c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfb3f20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110efb158;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110efb158,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  else {
    ppuVar6 = (undefined **)0x1;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return ppuVar6;
}



/* Entry: 108e190f8; end: 108e192af; -[SCCaptionBigTextPlusView _patternImageForGradientColors:colorStops:colorGradientAngleDegree:] */

void FUN_108e190f8(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  uVar1 = param_5;
  func_0x00010c26ca80(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar7 = 1.0;
  if (0.0 < param_3) {
    uVar2 = param_5;
    func_0x00010c26ca80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(uVar2);
    dVar7 = param_3;
  }
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c26ca80(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar6 = 1.0;
  if (0.0 < param_4) {
    uVar2 = param_5;
    func_0x00010c26ca80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(uVar2);
    dVar6 = param_4;
  }
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010c26ca80(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c099400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar3,param_6,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_5);
  puVar5 = PTR_PTR_1126c4438;
  puVar4 = puVar3;
  func_0x00010c140200(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd9a0(param_1,dVar7,dVar6,puVar5,param_6,param_7,param_8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108e192b0; end: 108e19303; -[SCCaptionBigTextPlusView removePromptTextIfNecessary] */

void FUN_108e192b0(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0xc4) == '\x01') {
    func_0x00010c1fb500(*(undefined8 *)(param_1 + 0x118),param_2,0,0);
    if ((*(byte *)(param_1 + 0xc5) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x118),PTR_s_setText__1126625f0,0);
      return;
    }
  }
  return;
}



/* Entry: 108e19304; end: 108e19437; -[SCCaptionBigTextPlusView shareLoggingParameters] */

void FUN_108e19304(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf40d60();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0b85a0(param_2);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    puVar4 = PTR_PTR_1126cbf60;
    _objc_alloc_init(PTR_PTR_1126cbf60);
    func_0x00010beffa20(puVar1);
    func_0x00010c166c00(puVar4);
    func_0x00010c206c40(puVar4);
    puVar2 = puVar1;
    func_0x00010c26b700(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar4);
    _objc_release(puVar2);
    func_0x00010c20eb40(puVar4);
    func_0x00010c1a5d40(puVar4);
    func_0x00010bfb4000(puVar1);
    dVar11 = param_1;
    func_0x00010bfb4060(puVar1);
    param_1 = param_1 * dVar11;
    puVar2 = puVar1;
    func_0x00010be1f240(param_1,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c087020();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar5 = puVar1;
      func_0x00010c087020(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06e1e0();
      _objc_release(puVar5);
    }
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf0e540(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c14c7c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
    func_0x00010bfb4000(puVar1);
    dVar11 = param_1;
    func_0x00010c089ce0(puVar1);
    param_1 = param_1 * dVar11;
    func_0x00010c190940(param_1,puVar4);
    func_0x00010bf8c740(puVar1);
    func_0x00010c193ba0(puVar4);
    func_0x00010c08a540(puVar1);
    dVar11 = param_1;
    func_0x00010c08a560(puVar1);
    func_0x00010bddc640(param_1,dVar11,puVar1);
    dVar10 = *(double *)(puVar1 + 0x1b8);
    _CGRectGetWidth(dVar10,*(undefined8 *)(puVar1 + 0x1c0),*(undefined8 *)(puVar1 + 0x1c8),
                    *(undefined8 *)(puVar1 + 0x1d0));
    func_0x00010c17a840(param_1 / dVar10,puVar4);
    dVar10 = *(double *)(puVar1 + 0x1b8);
    _CGRectGetHeight(dVar10,*(undefined8 *)(puVar1 + 0x1c0),*(undefined8 *)(puVar1 + 0x1c8),
                     *(undefined8 *)(puVar1 + 0x1d0));
    dVar11 = dVar11 / dVar10;
    func_0x00010c17a860(dVar11,puVar4);
    puVar3 = puVar1;
    func_0x00010c26ba60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar10 = dVar11;
    func_0x00010c089ce0(puVar1);
    dVar12 = *(double *)(puVar1 + 0x1b8);
    _CGRectGetWidth(dVar12,*(undefined8 *)(puVar1 + 0x1c0),*(undefined8 *)(puVar1 + 0x1c8),
                    *(undefined8 *)(puVar1 + 0x1d0));
    dVar13 = (dVar11 * dVar10) / dVar12;
    puVar5 = puVar1;
    func_0x00010c26ba60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar11 = dVar12;
    func_0x00010c089ce0(puVar1);
    dVar10 = *(double *)(puVar1 + 0x1b8);
    _CGRectGetHeight(dVar10,*(undefined8 *)(puVar1 + 0x1c0),*(undefined8 *)(puVar1 + 0x1c8),
                     *(undefined8 *)(puVar1 + 0x1d0));
    func_0x00010c1e9aa0(dVar13,(dVar12 * dVar11) / dVar10,puVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
    func_0x00010c089cc0(puVar1);
    func_0x00010c1ee7a0(puVar4);
    func_0x00010c074c20(puVar1);
    func_0x00010c1a7f60(puVar4);
    func_0x00010c071280(puVar1);
    func_0x00010c193b00(puVar4);
    func_0x00010c086c00(puVar1);
    func_0x00010c1b6e20(puVar4);
    func_0x00010c21f580(puVar4);
    uVar6 = *(undefined8 *)(puVar1 + 0x70);
    func_0x00010bf51e00(uVar6);
    func_0x00010c211940(puVar4);
    _objc_release(uVar6);
    puVar3 = puVar1;
    func_0x00010be1dde0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c26ca80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c26ba60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    FUN_108e23654(puVar3,puVar5,puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c211920(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    func_0x00010c217ac0(puVar4);
    puVar5 = puVar1;
    func_0x00010c081660();
    func_0x00010c1b5180(puVar4);
    if ((int)puVar5 != 0) {
      puVar5 = puVar1;
      func_0x00010c279100(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219440(puVar4);
      _objc_release(puVar5);
    }
    func_0x00010c081160(puVar1);
    func_0x00010c1b5080(puVar4);
    func_0x00010c178860(puVar4);
    func_0x00010c169b00(puVar4);
    func_0x00010c1db640(puVar4);
    uVar6 = *(undefined8 *)(puVar1 + 0x18);
    func_0x00010bfb40c0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26ca00();
    func_0x00010c1b8c80(puVar4);
    _objc_release(uVar6);
    func_0x00010c280560(puVar1);
    func_0x00010c21b740(puVar4);
    func_0x00010c0ff520(puVar1);
    func_0x00010c1dd660(puVar4);
    puVar5 = puVar1;
    func_0x00010bf8c1c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193640(puVar4);
    _objc_release(puVar5);
    func_0x00010bfc0860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2740(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e19438; end: 108e198ff; -[SCCaptionBigTextPlusView state] */

void FUN_108e19438(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  puVar1 = PTR_PTR_1126cbf60;
  _objc_alloc_init(PTR_PTR_1126cbf60);
  func_0x00010beffa20(param_2);
  func_0x00010c166c00(puVar1);
  func_0x00010c206c40(puVar1);
  lVar2 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1);
  _objc_release(lVar2);
  func_0x00010c20eb40(puVar1);
  func_0x00010c1a5d40(puVar1);
  func_0x00010bfb4000(param_2);
  dVar9 = param_1;
  func_0x00010bfb4060(param_2);
  param_1 = param_1 * dVar9;
  lVar2 = param_2;
  func_0x00010be1f240(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c087020();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar4 = param_2;
    func_0x00010c087020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06e1e0();
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf0e540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c14c7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010bfb4000(param_2);
  dVar9 = param_1;
  func_0x00010c089ce0(param_2);
  param_1 = param_1 * dVar9;
  func_0x00010c190940(param_1,puVar1);
  func_0x00010bf8c740(param_2);
  func_0x00010c193ba0(puVar1);
  func_0x00010c08a540(param_2);
  dVar9 = param_1;
  func_0x00010c08a560(param_2);
  func_0x00010bddc640(param_1,dVar9,param_2);
  dVar8 = *(double *)(param_2 + 0x1b8);
  _CGRectGetWidth(dVar8,*(undefined8 *)(param_2 + 0x1c0),*(undefined8 *)(param_2 + 0x1c8),
                  *(undefined8 *)(param_2 + 0x1d0));
  func_0x00010c17a840(param_1 / dVar8,puVar1);
  dVar8 = *(double *)(param_2 + 0x1b8);
  _CGRectGetHeight(dVar8,*(undefined8 *)(param_2 + 0x1c0),*(undefined8 *)(param_2 + 0x1c8),
                   *(undefined8 *)(param_2 + 0x1d0));
  dVar9 = dVar9 / dVar8;
  func_0x00010c17a860(dVar9,puVar1);
  lVar3 = param_2;
  func_0x00010c26ba60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar8 = dVar9;
  func_0x00010c089ce0(param_2);
  dVar10 = *(double *)(param_2 + 0x1b8);
  _CGRectGetWidth(dVar10,*(undefined8 *)(param_2 + 0x1c0),*(undefined8 *)(param_2 + 0x1c8),
                  *(undefined8 *)(param_2 + 0x1d0));
  dVar11 = (dVar9 * dVar8) / dVar10;
  lVar4 = param_2;
  func_0x00010c26ba60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar9 = dVar10;
  func_0x00010c089ce0(param_2);
  dVar8 = *(double *)(param_2 + 0x1b8);
  _CGRectGetHeight(dVar8,*(undefined8 *)(param_2 + 0x1c0),*(undefined8 *)(param_2 + 0x1c8),
                   *(undefined8 *)(param_2 + 0x1d0));
  func_0x00010c1e9aa0(dVar11,(dVar10 * dVar9) / dVar8,puVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c089cc0(param_2);
  func_0x00010c1ee7a0(puVar1);
  func_0x00010c074c20(param_2);
  func_0x00010c1a7f60(puVar1);
  func_0x00010c071280(param_2);
  func_0x00010c193b00(puVar1);
  func_0x00010c086c00(param_2);
  func_0x00010c1b6e20(puVar1);
  func_0x00010c21f580(puVar1);
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  func_0x00010bf51e00(uVar5);
  func_0x00010c211940(puVar1);
  _objc_release(uVar5);
  lVar3 = param_2;
  func_0x00010be1dde0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010c26ba60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  FUN_108e23654(lVar3,lVar4,lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211920(puVar1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  func_0x00010c217ac0(puVar1);
  lVar4 = param_2;
  func_0x00010c081660();
  func_0x00010c1b5180(puVar1);
  if ((int)lVar4 != 0) {
    lVar4 = param_2;
    func_0x00010c279100(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219440(puVar1);
    _objc_release(lVar4);
  }
  func_0x00010c081160(param_2);
  func_0x00010c1b5080(puVar1);
  func_0x00010c178860(puVar1);
  func_0x00010c169b00(puVar1);
  func_0x00010c1db640(puVar1);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010bfb40c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ca00();
  func_0x00010c1b8c80(puVar1);
  _objc_release(uVar5);
  func_0x00010c280560(param_2);
  func_0x00010c21b740(puVar1);
  func_0x00010c0ff520(param_2);
  func_0x00010c1dd660(puVar1);
  lVar4 = param_2;
  func_0x00010bf8c1c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193640(puVar1);
  _objc_release(lVar4);
  func_0x00010bfc0860(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2740(puVar1);
  _objc_release(param_2);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e19900; end: 108e19927; -[SCCaptionBigTextPlusView alignableTouchControlView] */

void FUN_108e19900(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e19928; end: 108e199ff; -[SCCaptionBigTextPlusView alignableContentRect] */

undefined8 FUN_108e19928(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_2;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf07f80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf144e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    func_0x00010c26ca80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26c620();
    _objc_release(param_2);
  }
  else {
    func_0x00010c26c620(*(undefined8 *)(param_2 + 0x90));
  }
  return param_1;
}



/* Entry: 108e19a00; end: 108e19b8f; -[SCCaptionBigTextPlusView shouldProcessGesture:] */

ulong FUN_108e19a00(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                   undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar2 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010bf8c660(param_5);
    param_5 = (ulong)((uint)param_5 ^ 1);
  }
  else {
    uVar2 = param_5;
    func_0x00010c26ba60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_7);
    dVar3 = param_1;
    dVar6 = param_2;
    _objc_release(uVar2);
    func_0x00010bfb4000(param_5);
    dVar5 = dVar3;
    func_0x00010bf8c740(param_5);
    uVar2 = param_5;
    dVar4 = dVar5;
    func_0x00010c26ba60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(uVar2);
    func_0x00010bf8c660();
    if ((param_5 & 1) == 0) {
      dVar7 = (dVar3 / dVar5) * 20.0 + -5.0;
      param_4 = param_4 - (dVar7 + dVar7);
      dVar9 = 60.0;
      if (60.0 <= param_4) {
        dVar9 = param_4;
      }
      dVar8 = (dVar7 + dVar6) - (60.0 - param_4) * 0.5;
      if (60.0 <= param_4) {
        dVar8 = dVar7 + dVar6;
      }
      dVar5 = (dVar3 / dVar5) * 15.0 + -5.0;
      param_3 = param_3 - (dVar5 + dVar5);
      dVar3 = 60.0;
      if (60.0 <= param_3) {
        dVar3 = param_3;
      }
      dVar6 = (dVar5 + dVar4) - (60.0 - param_3) * 0.5;
      if (60.0 <= param_3) {
        dVar6 = dVar5 + dVar4;
      }
      _CGRectContainsPoint(dVar6,dVar8,dVar3,dVar9,param_1,param_2);
    }
    else {
      param_5 = 0;
    }
  }
  _objc_release(param_7);
  return param_5;
}



/* Entry: 108e19b90; end: 108e19c63; -[SCCaptionBigTextPlusView updateAnchorState:withGestureRecognizer:] */

void FUN_108e19b90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c27ada0(param_5);
  func_0x00010bdca740(param_3);
  func_0x00010c1b8d00(param_3);
  func_0x00010c1b8d20(param_2,param_3);
  func_0x00010c141a80(param_5);
  _objc_release(param_5);
  func_0x00010c1b8700(param_2,param_3);
  lVar1 = param_6;
  func_0x00010c252440();
  _objc_release(param_6);
  if (lVar1 == 3) {
    param_3 = param_3 + 0x20;
    _objc_loadWeakRetained(param_3);
    func_0x00010bf2fea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 108e19c64; end: 108e19ca3; -[SCCaptionBigTextPlusView deletableView] */

void FUN_108e19c64(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0xe0);
  func_0x00010bf2f800();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x100);
  }
  else {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108e19ca4; end: 108e19ccb; -[SCCaptionBigTextPlusView trackableView] */

void FUN_108e19ca4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e19ccc; end: 108e19cd3; -[SCCaptionBigTextPlusView isTracking] */

void FUN_108e19ccc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c081670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_isTracking_1125fdfa8);
  return;
}



/* Entry: 108e19cd4; end: 108e19d17; -[SCCaptionBigTextPlusView isTimed] */

bool FUN_108e19cd4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x100);
  func_0x00010c2796c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf46340();
  _objc_release(lVar1);
  return lVar2 == 1;
}



/* Entry: 108e19d18; end: 108e19d73; -[SCCaptionBigTextPlusView trackingTrajectoryState] */

void FUN_108e19d18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c081660();
  if ((int)lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c26a1a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2723c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108e19d74; end: 108e19df7; -[SCCaptionBigTextPlusView durationEnabledState] */

void FUN_108e19d74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dc080;
  _objc_alloc(PTR_PTR_1126dc080);
  uVar2 = param_1;
  func_0x00010c252440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c279100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04bfe0(puVar1,param_2,uVar2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e19df8; end: 108e19dff; -[SCCaptionBigTextPlusView durationEnabledToolType] */

undefined8 FUN_108e19df8(void)

{
  return 0;
}



/* Entry: 108e19e00; end: 108e19e07; -[SCCaptionBigTextPlusView isSelfResizing] */

undefined8 FUN_108e19e00(void)

{
  return 1;
}



/* Entry: 108e19e08; end: 108e19e0f; -[SCCaptionBigTextPlusView uniqueId] */

undefined8 FUN_108e19e08(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 108e19e10; end: 108e19e17; -[SCCaptionBigTextPlusView setUniqueId:] */

void FUN_108e19e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  return;
}



/* Entry: 108e19e18; end: 108e19e1f; -[SCCaptionBigTextPlusView playbackLayerId] */

undefined4 FUN_108e19e18(long param_1)

{
  return *(undefined4 *)(param_1 + 0xcc);
}



/* Entry: 108e19e20; end: 108e19e27; -[SCCaptionBigTextPlusView setPlaybackLayerId:] */

void FUN_108e19e20(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xcc) = param_3;
  return;
}



/* Entry: 108e19e28; end: 108e19e2f; -[SCCaptionBigTextPlusView userTaggingStartIndex] */

undefined8 FUN_108e19e28(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 108e19e30; end: 108e19e37; -[SCCaptionBigTextPlusView setUserTaggingStartIndex:] */

void FUN_108e19e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  return;
}



/* Entry: 108e19e38; end: 108e19e3f; -[SCCaptionBigTextPlusView editCapabilities] */

undefined8 FUN_108e19e38(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 108e19e40; end: 108e19e47; -[SCCaptionBigTextPlusView setEditCapabilities:] */

void FUN_108e19e40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e19e48; end: 108e19e4f; -[SCCaptionBigTextPlusView generatedMagicCaptionText] */

undefined8 FUN_108e19e48(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 108e19e50; end: 108e19e57; -[SCCaptionBigTextPlusView setGeneratedMagicCaptionText:] */

void FUN_108e19e50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e19e58; end: 108e19e5f; -[SCCaptionBigTextPlusView hasPromptText] */

undefined1 FUN_108e19e58(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc4);
}



/* Entry: 108e19e60; end: 108e19e77; -[SCCaptionBigTextPlusView killSwitchProvider] */

void FUN_108e19e60(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e19e78; end: 108e19e83; -[SCCaptionBigTextPlusView superviewBounds] */

undefined8 FUN_108e19e78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



/* Entry: 108e19e84; end: 108e19e8f; -[SCCaptionBigTextPlusView setSuperviewBounds:] */

void FUN_108e19e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x178) = param_1;
  *(undefined8 *)(param_5 + 0x180) = param_2;
  *(undefined8 *)(param_5 + 0x188) = param_3;
  *(undefined8 *)(param_5 + 400) = param_4;
  return;
}



/* Entry: 108e19e90; end: 108e19e9b; -[SCCaptionBigTextPlusView superviewContentBounds] */

undefined8 FUN_108e19e90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 108e19e9c; end: 108e19ea7; -[SCCaptionBigTextPlusView setSuperviewContentBounds:] */

void FUN_108e19e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x198) = param_1;
  *(undefined8 *)(param_5 + 0x1a0) = param_2;
  *(undefined8 *)(param_5 + 0x1a8) = param_3;
  *(undefined8 *)(param_5 + 0x1b0) = param_4;
  return;
}



/* Entry: 108e19ea8; end: 108e19eaf; -[SCCaptionBigTextPlusView containerView] */

undefined8 FUN_108e19ea8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 108e19eb0; end: 108e19edf; -[SCCaptionBigTextPlusView setContainerView:] */

void FUN_108e19eb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e19ee0; end: 108e19f0f; -[SCCaptionBigTextPlusView setTextContainerView:] */

void FUN_108e19ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e19f10; end: 108e19f17; -[SCCaptionBigTextPlusView captionCarouselContainerView] */

undefined8 FUN_108e19f10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 108e19f18; end: 108e19f47; -[SCCaptionBigTextPlusView setCaptionCarouselContainerView:] */

void FUN_108e19f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e19f48; end: 108e19f4f; -[SCCaptionBigTextPlusView textScrollView] */

undefined8 FUN_108e19f48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 108e19f50; end: 108e19f7f; -[SCCaptionBigTextPlusView setTextScrollView:] */

void FUN_108e19f50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e19f80; end: 108e19f87; -[SCCaptionBigTextPlusView textView] */

undefined8 FUN_108e19f80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 108e19f88; end: 108e19fb7; -[SCCaptionBigTextPlusView setTextView:] */

void FUN_108e19f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e19fb8; end: 108e19fbf; -[SCCaptionBigTextPlusView editing] */

undefined1 FUN_108e19fb8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc6);
}



/* Entry: 108e19fc0; end: 108e19fc7; -[SCCaptionBigTextPlusView lastTranslationX] */

undefined8 FUN_108e19fc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 108e19fc8; end: 108e19fcf; -[SCCaptionBigTextPlusView setLastTranslationX:] */

void FUN_108e19fc8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x120) = param_1;
  return;
}



/* Entry: 108e19fd0; end: 108e19fd7; -[SCCaptionBigTextPlusView lastTranslationY] */

undefined8 FUN_108e19fd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 108e19fd8; end: 108e19fdf; -[SCCaptionBigTextPlusView setLastTranslationY:] */

void FUN_108e19fd8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x128) = param_1;
  return;
}



/* Entry: 108e19fe0; end: 108e19fe7; -[SCCaptionBigTextPlusView lastRotation] */

undefined8 FUN_108e19fe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 108e19fe8; end: 108e19fef; -[SCCaptionBigTextPlusView setLastRotation:] */

void FUN_108e19fe8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x130) = param_1;
  return;
}



/* Entry: 108e19ff0; end: 108e19ff7; -[SCCaptionBigTextPlusView lastScale] */

undefined8 FUN_108e19ff0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 108e19ff8; end: 108e19fff; -[SCCaptionBigTextPlusView setLastScale:] */

void FUN_108e19ff8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x138) = param_1;
  return;
}



/* Entry: 108e1a000; end: 108e1a007; -[SCCaptionBigTextPlusView lastEditingScale] */

undefined8 FUN_108e1a000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 108e1a008; end: 108e1a00f; -[SCCaptionBigTextPlusView setLastEditingScale:] */

void FUN_108e1a008(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x140) = param_1;
  return;
}



/* Entry: 108e1a010; end: 108e1a017; -[SCCaptionBigTextPlusView lastPreviewScale] */

undefined8 FUN_108e1a010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 108e1a018; end: 108e1a01f; -[SCCaptionBigTextPlusView setLastPreviewScale:] */

void FUN_108e1a018(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x148) = param_1;
  return;
}



/* Entry: 108e1a020; end: 108e1a027; -[SCCaptionBigTextPlusView fontSize] */

undefined8 FUN_108e1a020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 108e1a028; end: 108e1a02f; -[SCCaptionBigTextPlusView setFontSize:] */

void FUN_108e1a028(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x150) = param_1;
  return;
}



/* Entry: 108e1a030; end: 108e1a037; -[SCCaptionBigTextPlusView editingFontSize] */

undefined8 FUN_108e1a030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 108e1a038; end: 108e1a03f; -[SCCaptionBigTextPlusView setEditingFontSize:] */

void FUN_108e1a038(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x158) = param_1;
  return;
}



/* Entry: 108e1a040; end: 108e1a047; -[SCCaptionBigTextPlusView fontSizeMultiplier] */

undefined8 FUN_108e1a040(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 108e1a048; end: 108e1a04f; -[SCCaptionBigTextPlusView setFontSizeMultiplier:] */

void FUN_108e1a048(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x160) = param_1;
  return;
}



/* Entry: 108e1a050; end: 108e1a057; -[SCCaptionBigTextPlusView keyboardHeight] */

undefined8 FUN_108e1a050(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 108e1a058; end: 108e1a05f; -[SCCaptionBigTextPlusView setKeyboardHeight:] */

void FUN_108e1a058(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x168) = param_1;
  return;
}



/* Entry: 108e1a060; end: 108e1a067; -[SCCaptionBigTextPlusView lineFragmentPadding] */

undefined8 FUN_108e1a060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}



/* Entry: 108e1a068; end: 108e1a06f; -[SCCaptionBigTextPlusView setLineFragmentPadding:] */

void FUN_108e1a068(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x170) = param_1;
  return;
}



/* Entry: 108e1a070; end: 108e1a077; -[SCCaptionBigTextPlusView colorChanged] */

undefined1 FUN_108e1a070(long param_1)

{
  return *(undefined1 *)(param_1 + 199);
}



/* Entry: 108e1a078; end: 108e1a07f; -[SCCaptionBigTextPlusView setColorChanged:] */

void FUN_108e1a078(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 199) = param_3;
  return;
}



/* Entry: 108e1a080; end: 108e1a087; -[SCCaptionBigTextPlusView manuallyScaled] */

undefined1 FUN_108e1a080(long param_1)

{
  return *(undefined1 *)(param_1 + 200);
}



/* Entry: 108e1a088; end: 108e1a08f; -[SCCaptionBigTextPlusView setManuallyScaled:] */

void FUN_108e1a088(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 200) = param_3;
  return;
}



/* Entry: 108e1a090; end: 108e1a097; -[SCCaptionBigTextPlusView isLagunaMedia] */

undefined1 FUN_108e1a090(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc9);
}



/* Entry: 108e1a098; end: 108e1a09f; -[SCCaptionBigTextPlusView setIsLagunaMedia:] */

void FUN_108e1a098(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc9) = param_3;
  return;
}



/* Entry: 108e1a0a0; end: 108e1a0ab; -[SCCaptionBigTextPlusView originalContentBounds] */

undefined8 FUN_108e1a0a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b8);
}



/* Entry: 108e1a0ac; end: 108e1a0b7; -[SCCaptionBigTextPlusView setOriginalContentBounds:] */

void FUN_108e1a0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x1b8) = param_1;
  *(undefined8 *)(param_5 + 0x1c0) = param_2;
  *(undefined8 *)(param_5 + 0x1c8) = param_3;
  *(undefined8 *)(param_5 + 0x1d0) = param_4;
  return;
}



/* Entry: 108e1a0b8; end: 108e1a1bf; -[SCCaptionBigTextPlusView .cxx_destruct] */

void FUN_108e1a0b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_destroyWeak(param_1 + 0xf0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


