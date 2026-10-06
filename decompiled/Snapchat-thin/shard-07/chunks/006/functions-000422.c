/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057c4fd0; end: 1057c4fdf; +[SCProductTheme labelWithFontSize:textColor:textAlignment:] */

void FUN_1057c4fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0878d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_labelWithFontSize_fontWeight_tex_1125ff840,0,param_3,param_4);
  return;
}



/* Entry: 1057c4fe0; end: 1057c50cb; +[SCProductTheme labelWithFontSize:fontWeight:textColor:textAlignment:] */

void FUN_1057c4fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c213040();
  func_0x00010bfc5b00(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_3,param_2);
  _objc_release(param_2);
  func_0x00010c213180(puVar1,param_3,param_5);
  _objc_release(param_5);
  func_0x00010c1bdb00(puVar1,param_3,4);
  func_0x00010c1c83a0(0x3fe6666660000000,puVar1);
  func_0x00010c165e20(puVar1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057c50cc; end: 1057c512f; +[SCProductTheme labelForAttributedText] */

void FUN_1057c50cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1bdb00();
  func_0x00010c1c83a0(0x3fe6666660000000,puVar1);
  func_0x00010c165e20(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057c5130; end: 1057c529b; +[SCProductTheme attributedStringWithFontSize:fontWeight:textColor:characterSpacing:text:] */

void FUN_1057c5130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = param_2;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bfc5b00(param_1,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  uStack_88 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uStack_80 = *(undefined8 *)PTR__NSKernAttributeName_110345808;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar12 = param_2;
  uStack_70 = param_3;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  uVar11 = 3;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_68 = puVar2;
  uStack_60 = param_6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&uStack_70,&uStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar4 = puVar1;
  uVar6 = param_7;
  puVar9 = puVar3;
  func_0x00010c04e840(puVar1,param_4,param_7);
  _objc_release(param_7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_98 = FUN_1057c529c;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_e0 = param_1;
    uStack_d8 = param_2;
    puStack_d0 = puVar3;
    puStack_c8 = puVar2;
    puStack_c0 = puVar1;
    puStack_b8 = puVar4;
    uStack_b0 = param_3;
    uStack_a8 = param_7;
    puStack_a0 = &stack0xfffffffffffffff0;
    _objc_retain(uVar11);
    _objc_retain(puVar9);
    func_0x00010bfc5b00(uVar5,param_4,uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar6 = uVar5;
    func_0x00010bfb3f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c102de0(uVar5);
    func_0x00010c14de00(puVar1,param_4,&PTR____CFConstantStringClassReference_110e02af8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    uVar7 = uVar11;
    func_0x00010c25ce40(uVar11,param_4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(puVar1);
    _objc_release(uVar6);
    puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    uVar6 = uVar7;
    func_0x00010bf64920(uVar7,param_4,10);
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = *(undefined8 *)PTR__NSDocumentTypeDocumentAttribute_1103457e0;
    uStack_f8 = *(undefined8 *)PTR__NSHTMLTextDocumentType_110345800;
    uStack_100 = *(undefined8 *)PTR__NSKernAttributeName_110345808;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar13 = uVar14;
    func_0x00010c0df720(uVar14);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_f0 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&uStack_f8,&uStack_108,2);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    ppuVar10 = ppuVar8;
    func_0x00010c008460(puVar1,param_4,uVar6,ppuVar8,0,0);
    _objc_release(ppuVar8);
    _objc_release(puVar2);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_180 = uVar12;
      uStack_178 = uVar14;
      _objc_retain(ppuVar10);
      _objc_alloc(puVar1);
      ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar10 != (undefined **)0x0) {
        ppuVar8 = ppuVar10;
      }
      uStack_1b8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
      puVar2 = PTR_PTR_1126b0618;
      func_0x00010bfb41e0(uVar13,PTR_PTR_1126b0618,param_4,uVar11);
      _objc_retainAutoreleasedReturnValue();
      uStack_1b0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      puStack_1a0 = puVar2;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0x80);
      _objc_retainAutoreleasedReturnValue();
      uStack_1a8 = *(undefined8 *)PTR__NSStrikethroughStyleAttributeName_110345838;
      ppuStack_190 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c19c0;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_198 = puVar3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_1a0,&uStack_1b8,
                          3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(puVar1,param_4,ppuVar8,puVar4);
      _objc_release(ppuVar10);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
        ___stack_chk_fail();
        if (ppuVar8 == (undefined **)0x2) {
          func_0x00010bf1ecc0(PTR__OBJC_CLASS___UIFont_1126aec38);
          _objc_retainAutoreleasedReturnValue();
        }
        else if (ppuVar8 == (undefined **)0x1) {
          func_0x00010bf6d680();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c0c7340();
          _objc_retainAutoreleasedReturnValue();
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057c529c; end: 1057c54a3; +[SCProductTheme attributedHtmlStringWithFontSize:fontWeight:textColorCode:characterSpacing:text:] */

void FUN_1057c529c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bfc5b00(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010bfb3f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102de0(param_3);
  func_0x00010c14de00(puVar2,param_4,&PTR____CFConstantStringClassReference_110e02af8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar3 = param_7;
  func_0x00010c25ce40(param_7,param_4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  uVar1 = uVar3;
  func_0x00010bf64920(uVar3,param_4,10);
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = *(undefined8 *)PTR__NSDocumentTypeDocumentAttribute_1103457e0;
  uStack_68 = *(undefined8 *)PTR__NSHTMLTextDocumentType_110345800;
  uStack_70 = *(undefined8 *)PTR__NSKernAttributeName_110345808;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar10 = param_2;
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&uStack_68,&uStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  ppuVar9 = ppuVar5;
  func_0x00010c008460(puVar2,param_4,uVar1,ppuVar5,0,0);
  _objc_release(ppuVar5);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_f0 = param_1;
    uStack_e8 = param_2;
    _objc_retain(ppuVar9);
    _objc_alloc(puVar2);
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar5 = ppuVar9;
    }
    uStack_128 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar4 = PTR_PTR_1126b0618;
    func_0x00010bfb41e0(uVar10,PTR_PTR_1126b0618,param_4,uVar8);
    _objc_retainAutoreleasedReturnValue();
    uStack_120 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_110 = puVar4;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0x80);
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = *(undefined8 *)PTR__NSStrikethroughStyleAttributeName_110345838;
    ppuStack_100 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c19c0;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_108 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_110,&uStack_128,3)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar2,param_4,ppuVar5,puVar7);
    _objc_release(ppuVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      if (ppuVar5 == (undefined **)0x2) {
        func_0x00010bf1ecc0(PTR__OBJC_CLASS___UIFont_1126aec38);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (ppuVar5 == (undefined **)0x1) {
        func_0x00010bf6d680();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c0c7340();
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057c54a4; end: 1057c561f; +[SCProductTheme strikethroughStringWithFontSize:fontWeight:text:] */

void FUN_1057c54a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_5 != (undefined **)0x0) {
    ppuVar5 = param_5;
  }
  uStack_98 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar2 = PTR_PTR_1126b0618;
  func_0x00010bfb41e0(param_1,PTR_PTR_1126b0618,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_80 = puVar2;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x80);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = *(undefined8 *)PTR__NSStrikethroughStyleAttributeName_110345838;
  ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c19c0;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_80,&uStack_98,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar1,param_3,ppuVar5,puVar4);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (ppuVar5 == (undefined **)0x2) {
      func_0x00010bf1ecc0(PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (ppuVar5 == (undefined **)0x1) {
      func_0x00010bf6d680();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0c7340();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057c5620; end: 1057c5673; +[SCProductTheme getFontWithFontWeight:size:] */

void FUN_1057c5620(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 2) {
    func_0x00010bf1ecc0(PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 1) {
    func_0x00010bf6d680();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0c7340();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057c5674; end: 1057c589b; +[SCCommerceProductViewModelValidator isProductViewModelValid:] */

undefined * FUN_1057c5674(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c115f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = (undefined *)0x0;
  if (uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010c115f60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0f4c80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((uVar3 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078d80(puVar5,param_2,uVar1);
      _objc_release(uVar1);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((int)puVar5 != 0) {
        uVar1 = param_3;
        func_0x00010c246820(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c078d80(puVar4,param_2,uVar1);
        _objc_release(uVar1);
        puVar5 = puVar4;
        if ((int)puVar4 != 0) {
          uVar1 = param_3;
          func_0x00010bf12b00();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010bf529e0();
          _objc_release(uVar1);
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (uVar2 != 0) {
            uVar1 = param_3;
            func_0x00010bf02460(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c078d80(puVar5,param_2,uVar1);
            _objc_release(uVar1);
            if ((int)puVar5 == 0) goto LAB_1057c5880;
          }
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar1 = param_3;
          func_0x00010c115de0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c078d80(puVar5,param_2,uVar1);
          _objc_release(uVar1);
          if ((int)puVar5 != 0) {
            uVar1 = param_3;
            func_0x00010bfe9920();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010bf529e0();
            _objc_release(uVar1);
            if (uVar2 != 0) {
              uVar1 = param_3;
              func_0x00010bfe7420();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar1;
              func_0x00010bf529e0();
              _objc_release(uVar1);
              puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              if (uVar2 != 0) {
                uVar1 = param_3;
                func_0x00010c257800(param_3);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c078d80(puVar5,param_2,uVar1);
                _objc_release(uVar1);
                goto LAB_1057c5880;
              }
            }
            puVar5 = (undefined *)0x0;
          }
        }
      }
    }
    else {
      puVar5 = (undefined *)0x1;
    }
  }
LAB_1057c5880:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 1057c589c; end: 1057c59bf; +[SCCommerceProductViewModelValidator isTintableProductViewModelValid:] */

undefined8 FUN_1057c589c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  func_0x00010c07b3a0(param_1,param_2,param_3);
  if ((int)param_1 != 0) {
    lVar1 = param_3;
    func_0x00010c081240();
    lVar2 = param_3;
    func_0x00010bf40d00();
    _objc_retainAutoreleasedReturnValue();
    if ((int)lVar1 == 0) {
      _objc_release(lVar2);
      if (lVar2 == 0) {
LAB_1057c59b8:
        uVar5 = 1;
        goto LAB_1057c5998;
      }
    }
    else {
      uVar5 = 0;
      if (lVar2 == 0) goto LAB_1057c5998;
      lVar1 = param_3;
      func_0x00010bf40d00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c0ec860();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      _objc_release(lVar1);
      _objc_release(lVar2);
      if (lVar4 != 0) {
        lVar1 = param_3;
        func_0x00010bf416c0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf529e0();
        _objc_release(lVar1);
        if (lVar2 != 0) {
          lVar1 = param_3;
          func_0x00010bf69020();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          uVar5 = 0;
          if (lVar1 == 0) goto LAB_1057c5998;
          goto LAB_1057c59b8;
        }
      }
    }
  }
  uVar5 = 0;
LAB_1057c5998:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1057c59c0; end: 1057c5d73; -[SCCommerceBitmojiProductViewModel initWithSOJU:title:soldBy:amount:strikethroughPrice:variantOptionCategories:visibleVariantOptionCategories:availableVariants:defaultVariantOptions:productDetailsHtml:images:imageDetails:doesShipToUserLocation:shouldUseWebview:storeId:isTintable:colorCategory:colors:defaultColor:productImageOverlayImageModels:] */

undefined8 *
FUN_1057c59c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  _objc_retain(param_17);
  _objc_retain(param_20);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_70 = PTR_PTR_1126ea430;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_15;
    *(undefined1 *)((long)puVar1 + 9) = param_15._1_1_;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_18;
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_23;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_17);
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



/* Entry: 1057c5d74; end: 1057c5d97; -[SCCommerceBitmojiProductViewModel copyWithZone:] */

undefined8 FUN_1057c5d74(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1057c5d98; end: 1057c5da3; -[SCCommerceBitmojiProductViewModel productInfo] */

void FUN_1057c5d98(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 1057c5da4; end: 1057c5daf; -[SCCommerceBitmojiProductViewModel title] */

void FUN_1057c5da4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 1057c5db0; end: 1057c5dbb; -[SCCommerceBitmojiProductViewModel soldBy] */

void FUN_1057c5db0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 1057c5dbc; end: 1057c5dc7; -[SCCommerceBitmojiProductViewModel amount] */

void FUN_1057c5dbc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 1057c5dc8; end: 1057c5dd3; -[SCCommerceBitmojiProductViewModel strikethroughPrice] */

void FUN_1057c5dc8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 1057c5dd4; end: 1057c5ddf; -[SCCommerceBitmojiProductViewModel variantOptionCategories] */

void FUN_1057c5dd4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x38,1);
  return;
}



/* Entry: 1057c5de0; end: 1057c5deb; -[SCCommerceBitmojiProductViewModel visibleVariantOptionCategories] */

void FUN_1057c5de0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x40,1);
  return;
}



/* Entry: 1057c5dec; end: 1057c5df7; -[SCCommerceBitmojiProductViewModel availableVariants] */

void FUN_1057c5dec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x48,1);
  return;
}



/* Entry: 1057c5df8; end: 1057c5e03; -[SCCommerceBitmojiProductViewModel defaultVariantOptions] */

void FUN_1057c5df8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x50,1);
  return;
}



/* Entry: 1057c5e04; end: 1057c5e0f; -[SCCommerceBitmojiProductViewModel productDetailsHtml] */

void FUN_1057c5e04(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x58,1);
  return;
}



/* Entry: 1057c5e10; end: 1057c5e1b; -[SCCommerceBitmojiProductViewModel images] */

void FUN_1057c5e10(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x60,1);
  return;
}



/* Entry: 1057c5e1c; end: 1057c5e27; -[SCCommerceBitmojiProductViewModel imageDetails] */

void FUN_1057c5e1c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x68,1);
  return;
}



/* Entry: 1057c5e28; end: 1057c5e33; -[SCCommerceBitmojiProductViewModel doesShipToUserLocation] */

byte FUN_1057c5e28(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



/* Entry: 1057c5e34; end: 1057c5e3f; -[SCCommerceBitmojiProductViewModel shouldUseWebview] */

byte FUN_1057c5e34(long param_1)

{
  return *(byte *)(param_1 + 9) & 1;
}



/* Entry: 1057c5e40; end: 1057c5e4b; -[SCCommerceBitmojiProductViewModel storeId] */

void FUN_1057c5e40(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x70,1);
  return;
}



/* Entry: 1057c5e4c; end: 1057c5e57; -[SCCommerceBitmojiProductViewModel colorCategory] */

void FUN_1057c5e4c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x78,1);
  return;
}



/* Entry: 1057c5e58; end: 1057c5e63; -[SCCommerceBitmojiProductViewModel isTintable] */

byte FUN_1057c5e58(long param_1)

{
  return *(byte *)(param_1 + 10) & 1;
}



/* Entry: 1057c5e64; end: 1057c5e6f; -[SCCommerceBitmojiProductViewModel colors] */

void FUN_1057c5e64(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x80,1);
  return;
}



/* Entry: 1057c5e70; end: 1057c5e7b; -[SCCommerceBitmojiProductViewModel defaultColor] */

void FUN_1057c5e70(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x88,1);
  return;
}



/* Entry: 1057c5e7c; end: 1057c5e87; -[SCCommerceBitmojiProductViewModel productImageOverlayImageModels] */

void FUN_1057c5e7c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x90,1);
  return;
}



/* Entry: 1057c5e88; end: 1057c5f6b; -[SCCommerceBitmojiProductViewModel .cxx_destruct] */

void FUN_1057c5e88(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1057c5f6c; end: 1057c612b; -[SCCommerceProductVariantViewModel initWithSOJU:title:productId:isTaxable:amount:strikethroughPrice:currency:requiresShipping:imageDetails:isAvailable:] */

undefined8 *
FUN_1057c5f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126ea438;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_10;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_13;
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1057c612c; end: 1057c614f; -[SCCommerceProductVariantViewModel copyWithZone:] */

undefined8 FUN_1057c612c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1057c6150; end: 1057c615b; -[SCCommerceProductVariantViewModel productInfo] */

void FUN_1057c6150(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 1057c615c; end: 1057c6167; -[SCCommerceProductVariantViewModel title] */

void FUN_1057c615c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 1057c6168; end: 1057c6173; -[SCCommerceProductVariantViewModel productId] */

void FUN_1057c6168(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 1057c6174; end: 1057c617f; -[SCCommerceProductVariantViewModel isTaxable] */

byte FUN_1057c6174(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



/* Entry: 1057c6180; end: 1057c618b; -[SCCommerceProductVariantViewModel amount] */

void FUN_1057c6180(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 1057c618c; end: 1057c6197; -[SCCommerceProductVariantViewModel strikethroughPrice] */

void FUN_1057c618c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 1057c6198; end: 1057c61a3; -[SCCommerceProductVariantViewModel currency] */

void FUN_1057c6198(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x38,1);
  return;
}



/* Entry: 1057c61a4; end: 1057c61af; -[SCCommerceProductVariantViewModel requiresShipping] */

byte FUN_1057c61a4(long param_1)

{
  return *(byte *)(param_1 + 9) & 1;
}



/* Entry: 1057c61b0; end: 1057c61bb; -[SCCommerceProductVariantViewModel imageDetails] */

void FUN_1057c61b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x40,1);
  return;
}



/* Entry: 1057c61bc; end: 1057c61c7; -[SCCommerceProductVariantViewModel isAvailable] */

byte FUN_1057c61bc(long param_1)

{
  return *(byte *)(param_1 + 10) & 1;
}



/* Entry: 1057c61c8; end: 1057c6233; -[SCCommerceProductVariantViewModel .cxx_destruct] */

void FUN_1057c61c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1057c6234; end: 1057c651b; -[SCCommerceProductViewModel initWithSOJU:title:soldBy:amount:strikethroughPrice:variantOptionCategories:visibleVariantOptionCategories:availableVariants:defaultVariantOptions:productDetailsHtml:images:imageDetails:doesShipToUserLocation:shouldUseWebview:storeId:] */

undefined8 *
FUN_1057c6234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  _objc_retain();
  puStack_68 = PTR_PTR_1126ea440;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_15;
    *(undefined1 *)((long)puVar1 + 9) = param_15._1_1_;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_17);
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



/* Entry: 1057c651c; end: 1057c653f; -[SCCommerceProductViewModel copyWithZone:] */

undefined8 FUN_1057c651c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1057c6540; end: 1057c654b; -[SCCommerceProductViewModel productInfo] */

void FUN_1057c6540(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 1057c654c; end: 1057c6557; -[SCCommerceProductViewModel title] */

void FUN_1057c654c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 1057c6558; end: 1057c6563; -[SCCommerceProductViewModel soldBy] */

void FUN_1057c6558(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 1057c6564; end: 1057c656f; -[SCCommerceProductViewModel amount] */

void FUN_1057c6564(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 1057c6570; end: 1057c657b; -[SCCommerceProductViewModel strikethroughPrice] */

void FUN_1057c6570(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 1057c657c; end: 1057c6587; -[SCCommerceProductViewModel variantOptionCategories] */

void FUN_1057c657c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x38,1);
  return;
}



/* Entry: 1057c6588; end: 1057c6593; -[SCCommerceProductViewModel visibleVariantOptionCategories] */

void FUN_1057c6588(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x40,1);
  return;
}



/* Entry: 1057c6594; end: 1057c659f; -[SCCommerceProductViewModel availableVariants] */

void FUN_1057c6594(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x48,1);
  return;
}



/* Entry: 1057c65a0; end: 1057c65ab; -[SCCommerceProductViewModel defaultVariantOptions] */

void FUN_1057c65a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x50,1);
  return;
}



/* Entry: 1057c65ac; end: 1057c65b7; -[SCCommerceProductViewModel productDetailsHtml] */

void FUN_1057c65ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x58,1);
  return;
}



/* Entry: 1057c65b8; end: 1057c65c3; -[SCCommerceProductViewModel images] */

void FUN_1057c65b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x60,1);
  return;
}



/* Entry: 1057c65c4; end: 1057c65cf; -[SCCommerceProductViewModel imageDetails] */

void FUN_1057c65c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x68,1);
  return;
}



/* Entry: 1057c65d0; end: 1057c65db; -[SCCommerceProductViewModel doesShipToUserLocation] */

byte FUN_1057c65d0(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



/* Entry: 1057c65dc; end: 1057c65e7; -[SCCommerceProductViewModel shouldUseWebview] */

byte FUN_1057c65dc(long param_1)

{
  return *(byte *)(param_1 + 9) & 1;
}



/* Entry: 1057c65e8; end: 1057c65f3; -[SCCommerceProductViewModel storeId] */

void FUN_1057c65e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x70,1);
  return;
}



/* Entry: 1057c65f4; end: 1057c66a7; -[SCCommerceProductViewModel .cxx_destruct] */

void FUN_1057c65f4(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1057c66a8; end: 1057c677f; -[SCCommerceBitmojiOptions initWithUserModels:solomojiTemplateId:friendmojiTemplateId:] */

undefined1 *
FUN_1057c66a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ea448;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057c6780; end: 1057c67a3; -[SCCommerceBitmojiOptions copyWithZone:] */

undefined8 FUN_1057c6780(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1057c67a4; end: 1057c6823; -[SCCommerceBitmojiOptions hash] */

undefined8 * FUN_1057c67a4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1057c68bc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1057c68c8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_1057c68c8;
          }
          goto LAB_1057c68bc;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1057c68c8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1057c6824; end: 1057c68e3; -[SCCommerceBitmojiOptions isEqual:] */

long FUN_1057c6824(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1057c68bc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1057c68c8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_1057c68c8;
          }
          goto LAB_1057c68bc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1057c68c8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1057c68e4; end: 1057c68eb; -[SCCommerceBitmojiOptions userModels] */

undefined8 FUN_1057c68e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057c68ec; end: 1057c68f3; -[SCCommerceBitmojiOptions solomojiTemplateId] */

undefined8 FUN_1057c68ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057c68f4; end: 1057c68fb; -[SCCommerceBitmojiOptions friendmojiTemplateId] */

undefined8 FUN_1057c68f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1057c68fc; end: 1057c6937; -[SCCommerceBitmojiOptions .cxx_destruct] */

void FUN_1057c68fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057c6938; end: 1057c6a4b; -[SCCommerceBitmojiUserModel initWithUserId:displayName:avatarId:selfieId:isPlaceholder:] */

undefined1 *
FUN_1057c6938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ea450;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057c6a4c; end: 1057c6a6f; -[SCCommerceBitmojiUserModel copyWithZone:] */

undefined8 FUN_1057c6a4c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1057c6a70; end: 1057c6aff; -[SCCommerceBitmojiUserModel hash] */

undefined8 * FUN_1057c6a70(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1057c6bc0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1057c6bcc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_1057c6bcc;
            }
            goto LAB_1057c6bc0;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1057c6bcc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1057c6b00; end: 1057c6be7; -[SCCommerceBitmojiUserModel isEqual:] */

long FUN_1057c6b00(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1057c6bc0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1057c6bcc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_1057c6bcc;
            }
            goto LAB_1057c6bc0;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1057c6bcc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1057c6be8; end: 1057c6bef; -[SCCommerceBitmojiUserModel userId] */

undefined8 FUN_1057c6be8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057c6bf0; end: 1057c6bf7; -[SCCommerceBitmojiUserModel displayName] */

undefined8 FUN_1057c6bf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1057c6bf8; end: 1057c6bff; -[SCCommerceBitmojiUserModel avatarId] */

undefined8 FUN_1057c6bf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1057c6c00; end: 1057c6c07; -[SCCommerceBitmojiUserModel selfieId] */

undefined8 FUN_1057c6c00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1057c6c08; end: 1057c6c0f; -[SCCommerceBitmojiUserModel isPlaceholder] */

undefined1 FUN_1057c6c08(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1057c6c10; end: 1057c6c57; -[SCCommerceBitmojiUserModel .cxx_destruct] */

void FUN_1057c6c10(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1057c6c58; end: 1057c6d0b; -[SCCommerceProductImageDataModel initWithImage:loaded:error:] */

undefined1 *
FUN_1057c6c58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ea458;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057c6d0c; end: 1057c6d2f; -[SCCommerceProductImageDataModel copyWithZone:] */

undefined8 FUN_1057c6d0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1057c6d30; end: 1057c6da7; -[SCCommerceProductImageDataModel hash] */

undefined8 * FUN_1057c6d30(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1057c6e38:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1057c6e44;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1057c6e44;
        }
        goto LAB_1057c6e38;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1057c6e44:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1057c6da8; end: 1057c6e5f; -[SCCommerceProductImageDataModel isEqual:] */

long FUN_1057c6da8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1057c6e38:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1057c6e44;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1057c6e44;
        }
        goto LAB_1057c6e38;
      }
    }
    lVar3 = 0;
  }
LAB_1057c6e44:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1057c6e60; end: 1057c6e67; -[SCCommerceProductImageDataModel image] */

undefined8 FUN_1057c6e60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057c6e68; end: 1057c6e6f; -[SCCommerceProductImageDataModel loaded] */

undefined1 FUN_1057c6e68(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1057c6e70; end: 1057c6e77; -[SCCommerceProductImageDataModel error] */

undefined8 FUN_1057c6e70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1057c6e78; end: 1057c6ea7; -[SCCommerceProductImageDataModel .cxx_destruct] */

void FUN_1057c6e78(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1057c6ea8; end: 1057c6fab; -[SCCommerceProductImageOverlayImageModel initWithCoder:] */

undefined1 *
FUN_1057c6ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_7);
  puStack_38 = PTR_PTR_1126ea460;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf67000(param_7);
    _objc_retainAutoreleasedReturnValue();
    _CGSizeFromString();
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf67000(param_7);
    _objc_retainAutoreleasedReturnValue();
    _CGRectFromString();
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_2;
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar2);
    fVar4 = (float)param_1;
    func_0x00010bf66e40(param_7);
    *(double *)((long)puVar1 + 0x10) = (double)fVar4;
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1057c6fac; end: 1057c706f; -[SCCommerceProductImageOverlayImageModel initWithExternalImageId:productImageSize:frame:rotationAngle:] */

undefined1 *
FUN_1057c6fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ea460;
  uStack_70 = param_8;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
  }
  _objc_release(param_10);
  return (undefined1 *)puVar1;
}



/* Entry: 1057c7070; end: 1057c7093; -[SCCommerceProductImageOverlayImageModel copyWithZone:] */

undefined8 FUN_1057c7070(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1057c7094; end: 1057c715b; -[SCCommerceProductImageOverlayImageModel encodeWithCoder:] */

void FUN_1057c7094(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c14cb00(param_3,param_2,uVar2,&PTR____CFConstantStringClassReference_110e02b18);
  _NSStringFromCGSize(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e02b38);
  _objc_release(uVar1);
  _NSStringFromCGRect(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e02b58);
  _objc_release(uVar1);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x10),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110e02b78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057c715c; end: 1057c72a7; -[SCCommerceProductImageOverlayImageModel hash] */

undefined8 * FUN_1057c715c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_60 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar5 = &uStack_68;
  uStack_68 = uVar4;
  func_0x000100505190(puVar5,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_1057c7370:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1057c737c;
    puVar8 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    iVar3 = (int)puVar6;
    if (((ulong)puVar6 & 1) != 0) {
      bVar2 = false;
      if (((double)puVar5[3] == (double)param_3[3]) &&
         (bVar2 = false, !NAN((double)puVar5[4]) && !NAN((double)param_3[4]))) {
        bVar2 = (double)puVar5[4] == (double)param_3[4];
      }
      if ((bVar2) &&
         (_CGRectEqualToRect(puVar5[5],puVar5[6],puVar5[7],puVar5[8],param_3[5],param_3[6],
                             param_3[7],param_3[8]), iVar3 != 0)) {
        dVar10 = ABS((double)puVar5[2] - (double)param_3[2]);
        dVar9 = ABS((double)puVar5[2] + (double)param_3[2]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar2 = false, !NAN(dVar10) && !NAN(dVar9))) {
          bVar2 = dVar10 < dVar9;
        }
        if (bVar2) {
          puVar8 = (undefined8 *)puVar5[1];
          if (puVar8 != (undefined8 *)param_3[1]) {
            func_0x00010c071ae0();
            goto LAB_1057c737c;
          }
          goto LAB_1057c7370;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_1057c737c:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 1057c72a8; end: 1057c7397; -[SCCommerceProductImageOverlayImageModel isEqual:] */

long FUN_1057c72a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1057c7370:
    lVar5 = 1;
  }
  else {
    lVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1057c737c;
    uVar3 = param_1;
    _objc_opt_class(param_1);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar3);
    iVar2 = (int)uVar4;
    if ((uVar4 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18)) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 0x20)) && !NAN(*(double *)(param_3 + 0x20)))) {
        bVar1 = *(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20);
      }
      if ((bVar1) &&
         (_CGRectEqualToRect(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30),
                             *(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x40)),
         iVar2 != 0)) {
        dVar7 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
        dVar6 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar6))) {
          bVar1 = dVar7 < dVar6;
        }
        if (bVar1) {
          lVar5 = *(long *)(param_1 + 8);
          if (lVar5 != *(long *)(param_3 + 8)) {
            func_0x00010c071ae0();
            goto LAB_1057c737c;
          }
          goto LAB_1057c7370;
        }
      }
    }
    lVar5 = 0;
  }
LAB_1057c737c:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 1057c7398; end: 1057c739f; -[SCCommerceProductImageOverlayImageModel externalImageId] */

undefined8 FUN_1057c7398(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057c73a0; end: 1057c73a7; -[SCCommerceProductImageOverlayImageModel productImageSize] */

undefined1  [16] FUN_1057c73a0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 1057c73a8; end: 1057c73b3; -[SCCommerceProductImageOverlayImageModel frame] */

undefined8 FUN_1057c73a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1057c73b4; end: 1057c73bb; -[SCCommerceProductImageOverlayImageModel rotationAngle] */

undefined8 FUN_1057c73b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057c73bc; end: 1057c73c7; -[SCCommerceProductImageOverlayImageModel .cxx_destruct] */

void FUN_1057c73bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


