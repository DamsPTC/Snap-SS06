/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd4f70c; end: 10bd4f74f;  */

void FUN_10bd4f70c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf529e0(param_1);
    _arc4random_uniform();
    func_0x00010c0dfd40(param_1,param_2,uVar1 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd4f750; end: 10bd4f77b;  */

void FUN_10bd4f750(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_alloc_init();
  uVar1 = puRam00000001137fe2f0;
  puRam00000001137fe2f0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd4f77c; end: 10bd4facb;  */

void FUN_10bd4f77c(double param_1,undefined *param_2,undefined **param_3,undefined *param_4,
                  int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_4);
  puVar1 = param_2;
  func_0x00010bf51e00();
  puVar7 = param_4;
  func_0x00010bf51e00();
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  dVar8 = param_1;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar1);
  if (lRam00000001137fe2e8 != -1) {
    param_3 = &PTR___NSConcreteGlobalBlock_110d9ed30;
    func_0x000107c27d9c(0x1137fe2e8);
  }
  puVar1 = puRam00000001137fe2f0;
  _objc_retain(puRam00000001137fe2f0);
  puVar7 = puVar1;
  puVar2 = puVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
    func_0x00010c23d0a0(param_2);
    if (param_1 < dVar8) {
      puVar7 = param_2;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar7;
      func_0x00010c11f420();
      _objc_release(puVar7);
      if (puVar2 != (undefined *)0x7fffffffffffffff) {
        puVar2 = param_2;
        func_0x00010c25cd40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010c09e780();
        ppuVar4 = param_3;
        _objc_release(puVar2);
        if (param_5 == 0) {
          puVar6 = (undefined *)0x0;
        }
        else {
          puVar2 = param_2;
          func_0x00010bf0e760(param_2);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
          _objc_alloc();
          func_0x00010c04e840();
          func_0x00010c23d0a0();
          param_1 = param_1 - dVar8;
          _objc_release(puVar2);
        }
        func_0x00010c0d3c80();
        func_0x00010c23d0a0();
        if ((param_1 < dVar8) && (puVar7 + (long)param_3 != (undefined *)0x0)) {
          puVar7 = puVar7 + (long)param_3;
          do {
            puVar7 = puVar7 + -1;
            func_0x00010bf6b860(param_2);
            func_0x00010c23d0a0(param_2);
            if (dVar8 <= param_1) break;
          } while (puVar7 != (undefined *)0x0);
        }
        param_3 = ppuVar4;
        if (param_5 != 0) {
          func_0x00010c130d00(param_2);
          param_3 = ppuVar4;
        }
        puVar7 = param_2;
        func_0x00010bf51e00(param_2);
        puVar2 = puVar7;
        func_0x00010c1d0560(puVar1);
        _objc_retain(puVar7);
        _objc_release(param_2);
        _objc_release(puVar6);
        _objc_release(puVar7);
        goto LAB_10bd4fa58;
      }
    }
    puVar7 = param_2;
    func_0x00010bf51e00();
    puVar2 = puVar7;
    func_0x00010c1d0560(puVar1);
    _objc_release(puVar7);
    _objc_retain(param_2);
    puVar7 = param_2;
  }
LAB_10bd4fa58:
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010c06a520(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_4;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c11f340();
    ppuVar4 = param_3;
    _objc_release(puVar1);
    if ((puVar7 == (undefined *)0x7fffffffffffffff) && (param_3 == (undefined **)0x0)) {
      param_4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010c04e820();
    }
    else {
      puVar1 = param_4;
      func_0x00010c25cd40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f360();
      _objc_release(puVar1);
      if (ppuVar4 == (undefined **)0x0) {
        puVar1 = param_4;
        func_0x00010c25cd40(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60();
        _objc_release(puVar1);
      }
      func_0x00010bf0e4e0(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
    puVar7 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10bd4facc; end: 10bd4fbf3;  */

void FUN_10bd4facc(undefined *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  func_0x00010c06a520(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c11f340();
  lVar3 = param_2;
  _objc_release(puVar1);
  if ((puVar2 == (undefined *)0x7fffffffffffffff) && (param_2 == 0)) {
    param_1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e820();
  }
  else {
    puVar1 = param_1;
    func_0x00010c25cd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f360();
    _objc_release(puVar1);
    if (lVar3 == 0) {
      puVar1 = param_1;
      func_0x00010c25cd40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_release(puVar1);
    }
    func_0x00010bf0e4e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bd4fbf4; end: 10bd4fd7b;  */

undefined1  [16]
FUN_10bd4fbf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_5;
  _objc_opt_class();
  func_0x00010c23d0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uVar7 = param_1;
  uVar8 = param_2;
  func_0x00010c2971c0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_5;
  func_0x00010bf51e00();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    func_0x00010bf20bc0(param_1,param_2,param_5);
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uVar7 = param_3;
    uVar8 = param_4;
    func_0x00010c2971c0(param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar2);
  }
  else {
    func_0x00010bdc10a0();
    param_3 = uVar7;
    param_4 = uVar8;
  }
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    auVar9._8_8_ = param_4;
    auVar9._0_8_ = param_3;
    return auVar9;
  }
  ___stack_chk_fail();
  if (lRam00000001137fe2f8 != -1) {
    func_0x000107c27d9c(0x1137fe2f8,&PTR___NSConcreteGlobalBlock_110d9ed50);
  }
  uVar1 = uRam00000001137fe300;
  _objc_retain(uRam00000001137fe300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = uVar7;
  return auVar10;
}



/* Entry: 10bd4fd7c; end: 10bd4fdcf;  */

void FUN_10bd4fd7c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe2f8 != -1) {
    func_0x000107c27d9c(0x1137fe2f8,&PTR___NSConcreteGlobalBlock_110d9ed50);
  }
  uVar1 = uRam00000001137fe300;
  _objc_retain(uRam00000001137fe300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd4fdd0; end: 10bd4fdfb;  */

void FUN_10bd4fdd0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_alloc_init();
  uVar1 = puRam00000001137fe300;
  puRam00000001137fe300 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd4fdfc; end: 10bd4fe1f;  */

void FUN_10bd4fdfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,PTR__OBJC_CLASS___NSAttributedString_1126af068,
             PTR_s_attributedStringForText_font_col_1125a1270);
  return;
}



/* Entry: 10bd4fe20; end: 10bd4ffff;  */

void FUN_10bd4fe20(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  if (param_4 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_4);
    _objc_alloc(puVar1);
    func_0x00010c04e820();
    lVar2 = param_4;
    func_0x00010c08fa60(param_4);
    _objc_release(param_4);
    func_0x00010bef6f20(puVar1,param_3,*(undefined8 *)PTR__NSFontAttributeName_1103457f0,param_5,0,
                        lVar2);
    if (0.0 < param_1) {
      uVar5 = *(undefined8 *)PTR__NSKernAttributeName_110345808;
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6f20(puVar1,param_3,uVar5,puVar4,0,lVar2);
      _objc_release(puVar4);
    }
    func_0x00010bef6f20(puVar1,param_3,*(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8,
                        param_6,0,lVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00);
    func_0x00010c166c00();
    func_0x00010c099280(param_5);
    func_0x00010c1c82e0(puVar3);
    func_0x00010c099280(param_5);
    func_0x00010c1c3ba0(puVar3);
    func_0x00010c1bdc00(0x3ff0000000000000,puVar3);
    func_0x00010bfb17a0(puVar3);
    func_0x00010c1a75e0(puVar3);
    func_0x00010c1bdb00(puVar3,param_3,0);
    func_0x00010bef6f20(puVar1,param_3,*(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820,
                        puVar3,0,lVar2);
    puVar4 = puVar1;
    func_0x00010bf51e00(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10bd50000; end: 10bd5024f;  */

void FUN_10bd50000(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  func_0x00010c04e820();
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80();
  _objc_retainAutoreleasedReturnValue();
  FUN_10bd50250(param_3);
  uVar10 = param_4;
  func_0x00010bf529e0();
  if (uVar10 != 0) {
    uVar10 = 0;
    do {
      func_0x00010c08fa60(puVar1);
      puVar3 = puVar1;
      func_0x00010c25cd40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f400();
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf51e00();
      _objc_release(puVar3);
      puVar3 = puVar4;
      func_0x00010c260c80(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010bf66760(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c06a520();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010bf44700(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      uVar9 = param_4;
      func_0x00010c0dfd20(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c130d00(puVar1);
      _objc_release(uVar9);
      _objc_release(puVar3);
      _objc_release(puVar4);
      uVar10 = uVar10 + 1;
      uVar9 = param_4;
      func_0x00010bf529e0();
    } while (uVar10 < uVar9);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bd50250; end: 10bd502e7;  */

undefined * FUN_10bd50250(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  uStack_38 = 0;
  _objc_retain();
  func_0x00010c127e80(puVar1,param_2,&PTR____CFConstantStringClassReference_11102e358,1,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08fa60(param_1);
  puVar3 = puVar1;
  func_0x00010c0defc0(puVar1,param_2,param_1,1,0,uVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10bd502e8; end: 10bd50427;  */

void FUN_10bd502e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong *puVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_3;
  FUN_10bd50250();
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar4 = 0;
    puVar7 = (ulong *)register0x00000008;
    do {
      uVar6 = *puVar7;
      _objc_retain(uVar6);
      _objc_release(uVar4);
      puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_opt_class(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      uVar4 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar3);
      if ((uVar4 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
        _objc_opt_class(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
        _objc_opt_isKindOfClass(uVar6,puVar3);
      }
      func_0x00010befa120(puVar1);
      lVar2 = lVar2 + -1;
      uVar4 = uVar6;
      puVar7 = puVar7 + 1;
    } while (lVar2 != 0);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c04e820();
  func_0x00010be9a720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10bd50428; end: 10bd504bf;  */

void FUN_10bd50428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110db3638,
                      &PTR____CFConstantStringClassReference_110dae918);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf649c0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bd504c0; end: 10bd5055f;  */

void FUN_10bd504c0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bf15da0(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c25cfc0(param_1,param_2,&PTR____CFConstantStringClassReference_110dacf38,
                        &PTR____CFConstantStringClassReference_110dc1338);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    param_1 = lVar1;
    func_0x00010c25cfc0(lVar1,param_2,&PTR____CFConstantStringClassReference_110dae918,
                        &PTR____CFConstantStringClassReference_110db3638);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_retain(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bd50560; end: 10bd5060f;  */

void FUN_10bd50560(byte *param_1)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  byte *pbVar4;
  long lVar5;
  ushort *puVar6;
  
  pbVar4 = param_1;
  func_0x00010c08fa60();
  lVar5 = (long)pbVar4 << 2;
  _malloc();
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  if (pbVar4 != (byte *)0x0) {
    puVar6 = (ushort *)(lVar5 + 2);
    do {
      bVar3 = *param_1;
      uVar1 = bVar3 >> 4 | 0x30;
      if (0x9f < bVar3) {
        uVar1 = (bVar3 >> 4) + 0x37;
      }
      puVar6[-1] = uVar1;
      uVar1 = bVar3 & 0xf;
      uVar2 = bVar3 & 0xf | 0x30;
      if (9 < uVar1) {
        uVar2 = uVar1 + 0x37;
      }
      *puVar6 = uVar2;
      pbVar4 = pbVar4 + -1;
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 2;
    } while (pbVar4 != (byte *)0x0);
  }
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010bffd780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd50610; end: 10bd5068f;  */

void FUN_10bd50610(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = 3;
    if (param_4 == 0) {
      uVar1 = 1;
    }
    func_0x00010bf64aa0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_3,uVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd50690; end: 10bd5090f;  */

ulong FUN_10bd50690(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bStack_65;
  int iStack_64;
  short sStack_38;
  char cStack_36;
  undefined4 uStack_35;
  int iStack_31;
  undefined1 uStack_2d;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010c08fa60();
  if (uVar1 < 0xc) {
    uVar1 = 0;
  }
  else {
    uStack_2d = 0;
    sStack_38 = 0;
    cStack_36 = '\0';
    uStack_35 = 0;
    iStack_31 = 0;
    func_0x00010bfc3320(param_1,param_2,&sStack_38,0xc);
    if (sStack_38 == -0x2701 && cStack_36 == -1) {
      uVar1 = 1;
    }
    else if (CONCAT17((undefined1)iStack_31,CONCAT43(uStack_35,CONCAT12(cStack_36,sStack_38))) ==
             0xa1a0a0d474e5089) {
      uVar1 = 2;
    }
    else if (((CONCAT17(uStack_2d,CONCAT43(iStack_31,uStack_35._1_3_)) == 0x6369656870797466) ||
             (CONCAT17(uStack_2d,CONCAT43(iStack_31,uStack_35._1_3_)) == 0x3166696d70797466)) ||
            (CONCAT17(uStack_2d,CONCAT43(iStack_31,uStack_35._1_3_)) == 0x3166736d70797466)) {
      uVar1 = 4;
    }
    else if ((CONCAT13((undefined1)uStack_35,CONCAT12(cStack_36,sStack_38)) == 0x46464952) &&
            (CONCAT13(uStack_2d,iStack_31._1_3_) == 0x50424557)) {
      uVar1 = 3;
    }
    else if (CONCAT13((undefined1)uStack_35,CONCAT12(cStack_36,sStack_38)) == 0x38464947) {
      uVar1 = 8;
    }
    else if ((CONCAT13((undefined1)iStack_31,uStack_35._1_3_) == 0x70797466 &&
              iStack_31 == 0x34706d70) ||
            (CONCAT17(uStack_2d,CONCAT43(iStack_31,uStack_35._1_3_)) == 0x6d6f736970797466)) {
      uVar1 = 5;
    }
    else if (sStack_38 == 0x4b50) {
      uVar1 = 6;
    }
    else {
      uVar1 = 0;
      if (CONCAT17(uStack_2d,CONCAT43(iStack_31,uStack_35._1_3_)) == 0x2020747170797466) {
        uVar1 = 7;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar1;
  }
  ___stack_chk_fail();
  uVar2 = uVar1;
  func_0x00010c105b00();
  if ((uVar2 == 3) && (uVar2 = uVar1, func_0x00010c08fa60(), 0x15 < uVar2)) {
    iStack_64 = 0;
    func_0x00010bfc3360(uVar1,param_2,&iStack_64,0xc,4);
    uVar2 = 0;
    if (iStack_64 == 0x58385056) {
      func_0x00010bfc3360(uVar1,param_2,&bStack_65,0x10,1);
      uVar2 = (ulong)(bStack_65 >> 1 & 1);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10bd50910; end: 10bd50937;  */

undefined ** FUN_10bd50910(long param_1)

{
  if (param_1 - 1U < 8) {
    return (undefined **)(&PTR_PTR_110d9ed70)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 10bd50938; end: 10bd509cb;  */

undefined * FUN_10bd50938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain(param_3);
  func_0x00010bf5e300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf44660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2bedc0(puVar2);
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 10bd509cc; end: 10bd50a1f;  */

void FUN_10bd509cc(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe310 != -1) {
    func_0x000107c27d9c(0x1137fe310,&PTR___NSConcreteGlobalBlock_110d9edb0);
  }
  uVar1 = uRam00000001137fe308;
  _objc_retain(uRam00000001137fe308);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd50a20; end: 10bd50a83;  */

void FUN_10bd50a20(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_alloc();
  func_0x00010bffabc0();
  uVar1 = puRam00000001137fe308;
  puRam00000001137fe308 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd50a84; end: 10bd50af7;  */

undefined8 FUN_10bd50a84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_3);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0702e0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10bd50af8; end: 10bd50d0b;  */

bool FUN_10bd50af8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  bVar1 = false;
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    lVar2 = param_1;
    func_0x00010bf27b20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(lVar2);
    func_0x00010bf27b20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(param_1);
    lVar4 = lVar3;
    func_0x00010c0d0e40();
    lVar5 = lVar2;
    func_0x00010c0d0e40();
    if (lVar4 == lVar5) {
      lVar4 = lVar3;
      func_0x00010bf65700(lVar3);
      lVar5 = lVar2;
      func_0x00010bf65700(lVar2);
      bVar1 = lVar4 == lVar5;
    }
    else {
      bVar1 = false;
    }
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  return bVar1;
}



/* Entry: 10bd50d0c; end: 10bd50e57;  */

undefined8 FUN_10bd50d0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010bf27b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf44660(param_1,param_2,0x10,param_3,puVar1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(puVar1);
    _objc_release(param_1);
    uVar3 = uVar2;
    func_0x00010bf65700(uVar2);
    _objc_release(uVar2);
    return uVar3;
  }
  return 0;
}



/* Entry: 10bd50e58; end: 10bd50f37;  */

void FUN_10bd50e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
  func_0x00010c2278a0();
  func_0x00010c1c8fc0(puVar2,param_2,param_4);
  func_0x00010c189d40(puVar2,param_2,param_5);
  func_0x00010c1a9320(puVar2,param_2,param_6);
  func_0x00010c1c8500(puVar2,param_2,param_7);
  func_0x00010c1f8e00(puVar2,param_2,param_8);
  puVar3 = puVar1;
  func_0x00010bf650e0(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10bd50f38; end: 10bd5122b;  */

bool FUN_10bd50f38(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar1);
  return param_1 <= (double)(param_4 * 0x15180);
}



/* Entry: 10bd5122c; end: 10bd5127f;  */

void FUN_10bd5122c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe320 != -1) {
    func_0x000107c27d9c(0x1137fe320,&PTR___NSConcreteGlobalBlock_110d9edd0);
  }
  uVar1 = uRam00000001137fe318;
  _objc_retain(uRam00000001137fe318);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd51280; end: 10bd5130f;  */

void FUN_10bd51280(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  puVar3 = puVar2;
  func_0x00010c09e1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf650c0(puVar4,param_2,&PTR____CFConstantStringClassReference_11102e378,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189b60(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = puRam00000001137fe318;
  puRam00000001137fe318 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd51310; end: 10bd51363;  */

void FUN_10bd51310(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe330 != -1) {
    func_0x000107c27d9c(0x1137fe330,&PTR___NSConcreteGlobalBlock_110d9edf0);
  }
  uVar1 = uRam00000001137fe328;
  _objc_retain(uRam00000001137fe328);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd51364; end: 10bd513f3;  */

void FUN_10bd51364(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  puVar3 = puVar2;
  func_0x00010c09e1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf650c0(puVar4,param_2,&PTR____CFConstantStringClassReference_11102e398,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189b60(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = puRam00000001137fe328;
  puRam00000001137fe328 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd513f4; end: 10bd51447;  */

void FUN_10bd513f4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe340 != -1) {
    func_0x000107c27d9c(0x1137fe340,&PTR___NSConcreteGlobalBlock_110d9ee10);
  }
  uVar1 = uRam00000001137fe338;
  _objc_retain(uRam00000001137fe338);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd51448; end: 10bd514d7;  */

void FUN_10bd51448(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  puVar3 = puVar2;
  func_0x00010c09e1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf650c0(puVar4,param_2,&PTR____CFConstantStringClassReference_110ece4b8,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189b60(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = puRam00000001137fe338;
  puRam00000001137fe338 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd514d8; end: 10bd5152b;  */

void FUN_10bd514d8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe350 != -1) {
    func_0x000107c27d9c(0x1137fe350,&PTR___NSConcreteGlobalBlock_110d9ee30);
  }
  uVar1 = uRam00000001137fe348;
  _objc_retain(uRam00000001137fe348);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd5152c; end: 10bd515bb;  */

void FUN_10bd5152c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  puVar3 = puVar2;
  func_0x00010c09e1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf650c0(puVar4,param_2,&PTR____CFConstantStringClassReference_110ec56b8,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189b60(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = puRam00000001137fe348;
  puRam00000001137fe348 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd515bc; end: 10bd5160f;  */

void FUN_10bd515bc(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe360 != -1) {
    func_0x000107c27d9c(0x1137fe360,&PTR___NSConcreteGlobalBlock_110d9ee50);
  }
  uVar1 = uRam00000001137fe358;
  _objc_retain(uRam00000001137fe358);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd51610; end: 10bd5169f;  */

void FUN_10bd51610(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  puVar3 = puVar2;
  func_0x00010c09e1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf650c0(puVar4,param_2,&PTR____CFConstantStringClassReference_11102e3b8,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189b60(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = puRam00000001137fe358;
  puRam00000001137fe358 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd516a0; end: 10bd516f3;  */

void FUN_10bd516a0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe370 != -1) {
    func_0x000107c27d9c(0x1137fe370,&PTR___NSConcreteGlobalBlock_110d9ee70);
  }
  uVar1 = uRam00000001137fe368;
  _objc_retain(uRam00000001137fe368);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd516f4; end: 10bd51783;  */

void FUN_10bd516f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  puVar3 = puVar2;
  func_0x00010c09e1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf650c0(puVar4,param_2,&PTR____CFConstantStringClassReference_11102e3d8,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189b60(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = puRam00000001137fe368;
  puRam00000001137fe368 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd51784; end: 10bd517d7;  */

void FUN_10bd51784(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe380 != -1) {
    func_0x000107c27d9c(0x1137fe380,&PTR___NSConcreteGlobalBlock_110d9ee90);
  }
  uVar1 = uRam00000001137fe378;
  _objc_retain(uRam00000001137fe378);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd517d8; end: 10bd51867;  */

void FUN_10bd517d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  puVar3 = puVar2;
  func_0x00010c09e1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf650c0(puVar4,param_2,&PTR____CFConstantStringClassReference_110e86718,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189b60(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = puRam00000001137fe378;
  puRam00000001137fe378 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd51868; end: 10bd518bb;  */

void FUN_10bd51868(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe390 != -1) {
    func_0x000107c27d9c(0x1137fe390,&PTR___NSConcreteGlobalBlock_110d9eeb0);
  }
  uVar1 = uRam00000001137fe388;
  _objc_retain(uRam00000001137fe388);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd518bc; end: 10bd5194b;  */

void FUN_10bd518bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  puVar3 = puVar2;
  func_0x00010c09e1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf650c0(puVar4,param_2,&PTR____CFConstantStringClassReference_110ec5698,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189b60(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = puRam00000001137fe388;
  puRam00000001137fe388 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd5194c; end: 10bd5199f;  */

void FUN_10bd5194c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe3a0 != -1) {
    func_0x000107c27d9c(0x1137fe3a0,&PTR___NSConcreteGlobalBlock_110d9eed0);
  }
  uVar1 = uRam00000001137fe398;
  _objc_retain(uRam00000001137fe398);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd519a0; end: 10bd51a2f;  */

void FUN_10bd519a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  puVar3 = puVar2;
  func_0x00010c09e1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf650c0(puVar4,param_2,&PTR____CFConstantStringClassReference_110e866f8,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189b60(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = puRam00000001137fe398;
  puRam00000001137fe398 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd51a30; end: 10bd51a83;  */

void FUN_10bd51a30(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe3b0 != -1) {
    func_0x000107c27d9c(0x1137fe3b0,&PTR___NSConcreteGlobalBlock_110d9eef0);
  }
  uVar1 = uRam00000001137fe3a8;
  _objc_retain(uRam00000001137fe3a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd51a84; end: 10bd51b3f;  */

void FUN_10bd51a84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  puVar3 = puVar2;
  func_0x00010c09e1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf650c0(puVar4,param_2,&PTR____CFConstantStringClassReference_11102e3f8,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189b60(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010bf6a760(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215860(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  uVar1 = puRam00000001137fe3a8;
  puRam00000001137fe3a8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd51b40; end: 10bd51b93;  */

void FUN_10bd51b40(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe3c0 != -1) {
    func_0x000107c27d9c(0x1137fe3c0,&PTR___NSConcreteGlobalBlock_110d9ef10);
  }
  uVar1 = uRam00000001137fe3b8;
  _objc_retain(uRam00000001137fe3b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd51b94; end: 10bd51c4f;  */

void FUN_10bd51b94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  puVar3 = puVar2;
  func_0x00010c09e1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf650c0(puVar4,param_2,&PTR____CFConstantStringClassReference_11102e418,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189b60(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010bf6a760(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215860(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  uVar1 = puRam00000001137fe3b8;
  puRam00000001137fe3b8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd51c50; end: 10bd5211f;  */

void FUN_10bd51c50(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe3e0 != -1) {
    func_0x000107c27d9c(0x1137fe3e0,&PTR___NSConcreteGlobalBlock_110d9ef50);
  }
  uVar1 = uRam00000001137fe3d8;
  _objc_retain(uRam00000001137fe3d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd52120; end: 10bd52127;  */

void FUN_10bd52120(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_errorWithDomain_description_code_1125c3e48);
  return;
}



/* Entry: 10bd52128; end: 10bd5220f;  */

void FUN_10bd52128(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    func_0x00010c220220(puVar1,param_2,param_4,
                        *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
  }
  if (param_6 != 0) {
    func_0x00010c220220(puVar1,param_2,param_6,*(undefined8 *)PTR__NSUnderlyingErrorKey_110345660);
  }
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,param_3,param_5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bd52210; end: 10bd5229b;  */

void FUN_10bd52210(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = *(undefined8 *)PTR__NSInternalInconsistencyException_11034aa48;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e76c58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60(puVar2,param_2,uVar3,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bd5229c; end: 10bd523bb;  */

void FUN_10bd5229c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x00010c2a2b60();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010befa120(puVar1);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_3;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lVar2 = lRam00000001137fe460;
    _objc_retain(puVar3);
    if (lVar2 != -1) {
      func_0x000107c27d9c(0x1137fe460,&PTR___NSConcreteGlobalBlock_110d9f050);
    }
    puVar1 = puRam00000001137fe458;
    func_0x00010c0e00e0(puRam00000001137fe458);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bd523bc; end: 10bd525d3;  */

void FUN_10bd523bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = lRam00000001137fe460;
  _objc_retain(param_3);
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fe460,&PTR___NSConcreteGlobalBlock_110d9f050);
  }
  uVar2 = uRam00000001137fe458;
  func_0x00010c0e00e0(uRam00000001137fe458);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10bd525d4; end: 10bd52653;  */

void FUN_10bd525d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  FUN_10bd52654();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  FUN_10bd528c8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72060(puVar3,param_2,param_1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137fe458;
  puRam00000001137fe458 = puVar3;
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bd52654; end: 10bd526a7;  */

void FUN_10bd52654(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe470 != -1) {
    func_0x000107c27d9c(0x1137fe470,&PTR___NSConcreteGlobalBlock_110d9f070);
  }
  uVar1 = uRam00000001137fe468;
  _objc_retain(uRam00000001137fe468);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd526a8; end: 10bd528c7;  */

void FUN_10bd526a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10bd528c8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar4 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      puVar6 = PTR__OBJC_CLASS___NSLocale_1126af788;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09e240(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSLocale_1126af788;
      _objc_alloc(PTR__OBJC_CLASS___NSLocale_1126af788);
      func_0x00010c026a60();
      puVar7 = puVar5;
      func_0x00010bf85f20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x00010befa120(puVar3);
      _objc_release(puVar7);
      _objc_release(puVar6);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = puRam00000001137fe468;
  puRam00000001137fe468 = puVar6;
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  if (lRam00000001137fe480 != -1) {
    func_0x000107c27d9c(0x1137fe480,&PTR___NSConcreteGlobalBlock_110d9f090);
  }
  uVar2 = uRam00000001137fe478;
  _objc_retain(uRam00000001137fe478);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10bd528c8; end: 10bd5291b;  */

void FUN_10bd528c8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe480 != -1) {
    func_0x000107c27d9c(0x1137fe480,&PTR___NSConcreteGlobalBlock_110d9f090);
  }
  uVar1 = uRam00000001137fe478;
  _objc_retain(uRam00000001137fe478);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd5291c; end: 10bd5294f;  */

void FUN_10bd5291c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bdc17c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137fe478;
  puRam00000001137fe478 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd52950; end: 10bd529cf;  */

void FUN_10bd52950(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  FUN_10bd528c8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  FUN_10bd52654();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72060(puVar3,param_2,param_1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137fe488;
  puRam00000001137fe488 = puVar3;
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bd529d0; end: 10bd52a7f;  */

void FUN_10bd529d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010bd52a2c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137fe498;
  puRam00000001137fe498 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bd52a80; end: 10bd52a97;  */

void FUN_10bd52a80(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001137fe4a8;
  ppuRam00000001137fe4a8 = &PTR__OBJC_CLASS___NSConstantArray_111184148;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd52a98; end: 10bd52af3;  */

void FUN_10bd52a98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  FUN_10bd52654();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137fe4b8;
  puRam00000001137fe4b8 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bd52af4; end: 10bd52c83;  */

void FUN_10bd52af4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
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
  func_0x00010bd52a2c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  lVar2 = param_1;
  func_0x00010bf529e0();
  func_0x00010c225ec0(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
        func_0x00010bf53360(PTR__OBJC_CLASS___NSLocale_1126af788,param_2,
                            *(undefined8 *)(lStack_118 + lVar6 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 != (undefined *)0x0) {
          func_0x00010befa120(puVar3,param_2,puVar4);
        }
        _objc_release(puVar4);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226ce0(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137fe4c8;
  puRam00000001137fe4c8 = puVar4;
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  FUN_10bd528c8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar3,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137fe4d8;
  puRam00000001137fe4d8 = puVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bd52c84; end: 10bd52cdf;  */

void FUN_10bd52c84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  FUN_10bd528c8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137fe4d8;
  puRam00000001137fe4d8 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bd52ce0; end: 10bd52e7b;  */

void FUN_10bd52ce0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  if (lRam00000001137fe4e8 != -1) {
    func_0x000107c27d9c(0x1137fe4e8,&PTR___NSConcreteGlobalBlock_110d9f170);
  }
  ppuVar1 = ppuRam00000001137fe4f0;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c08fa60();
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar3 = ppuVar2;
    func_0x00010c11f440();
    if (ppuVar3 == (undefined **)0x7fffffffffffffff) {
      FUN_10bd52e94();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      ppuVar5 = ppuVar4;
      func_0x00010c08fa60();
      ppuVar3 = ppuVar4;
      if (ppuVar5 != (undefined **)0x0) goto LAB_10bd52d64;
    }
    else {
      ppuVar4 = ppuVar2;
      func_0x00010c260c20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      FUN_10bd52e94();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      ppuVar5 = ppuVar3;
      func_0x00010c08fa60();
      if (ppuVar5 != (undefined **)0x0) {
        _objc_release(ppuVar4);
        goto LAB_10bd52d64;
      }
      _objc_release(ppuVar3);
    }
    _objc_release(ppuVar4);
    ppuVar3 = &PTR____CFConstantStringClassReference_110db1e18;
  }
  else {
    _objc_retain(ppuVar1);
    ppuVar3 = ppuVar1;
  }
LAB_10bd52d64:
  _objc_release(ppuVar1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10bd52e7c; end: 10bd52e93;  */

void FUN_10bd52e7c(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001137fe4f0;
  ppuRam00000001137fe4f0 = &PTR__OBJC_CLASS___NSConstantDictionary_11117e158;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd52e94; end: 10bd52ee7;  */

void FUN_10bd52e94(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe4f8 != -1) {
    func_0x000107c27d9c(0x1137fe4f8,&PTR___NSConcreteGlobalBlock_110d9f190);
  }
  uVar1 = uRam00000001137fe500;
  _objc_retain(uRam00000001137fe500);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd52ee8; end: 10bd52eff;  */

void FUN_10bd52ee8(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001137fe500;
  ppuRam00000001137fe500 = &PTR__OBJC_CLASS___NSConstantDictionary_11117e180;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd52f00; end: 10bd52f5f;  */

void FUN_10bd52f00(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf529e0();
  if (1 < uVar1) {
    uVar2 = param_1;
    func_0x00010bf529e0();
    uVar1 = 0;
    uVar2 = uVar2 - 1;
    do {
      uVar1 = uVar1 + 1;
      uVar2 = uVar2 - 1;
      func_0x00010bf9aac0(param_1);
    } while (uVar1 < uVar2);
  }
  return;
}



/* Entry: 10bd52f60; end: 10bd5303f;  */

void FUN_10bd52f60(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bf529e0(param_1);
    func_0x00010c12d3c0(param_1,param_2,lVar2 + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10bd53040; end: 10bd531db;  */

void FUN_10bd53040(ulong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  func_0x00010c2827c0();
  if (param_1 < 1000) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e6d958;
  }
  else if (param_1 >> 5 < 0xc35) {
    if ((uint)((int)param_1 + (int)((param_1 & 0xffffffff) / 1000) * -1000) < 100) {
      ppuVar1 = &PTR____CFConstantStringClassReference_11102ee98;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_11102ee78;
    }
  }
  else if (param_1 < 1000000) {
    ppuVar1 = &PTR____CFConstantStringClassReference_11102ee98;
  }
  else if (param_1 < 100000000) {
    if ((uint)((int)param_1 + (int)((param_1 & 0xffffffff) / 1000000) * -1000000) >> 5 < 0xc35) {
      ppuVar1 = &PTR____CFConstantStringClassReference_11102eed8;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_11102eeb8;
    }
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_11102eed8;
  }
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd531dc; end: 10bd531df;  */

void FUN_10bd531dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c102e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pointerAtIndex__11261e5a0);
  return;
}



/* Entry: 10bd531e0; end: 10bd53207;  */

void FUN_10bd531e0(void)

{
  func_0x00010bde1a00();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd53208; end: 10bd53313;  */

void FUN_10bd53208(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c08fa60();
  if (param_4 + 1 < uVar2) {
    uVar2 = param_3;
    func_0x00010bf35920(param_3,param_2,param_4);
    uVar1 = param_3;
    func_0x00010bf35920(param_3,param_2,param_4 + 1);
    if ((((uint)uVar2 & 0xfc00) != 0xd800) || (((uint)uVar1 & 0xfc00) != 0xdc00))
    goto LAB_10bd532a4;
    *param_5 = 2;
    uVar2 = (ulong)((uint)uVar1 + (uint)uVar2 * 0x400 + 0x2400) & 0x1fffff;
  }
  else {
LAB_10bd532a4:
    uVar2 = param_3;
    func_0x00010c08fa60();
    if (uVar2 <= param_4) {
      puVar3 = (undefined *)0x0;
      *param_5 = 0;
      goto LAB_10bd532f4;
    }
    uVar2 = param_3;
    func_0x00010bf35920(param_3,param_2,param_4);
    *param_5 = 1;
    uVar2 = uVar2 & 0xffffffff;
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
LAB_10bd532f4:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10bd53314; end: 10bd533a3;  */

undefined8 FUN_10bd53314(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (((0xb5f < param_3 - 0x20a0) && ((param_3 & 0xfffffffffffff000) != 0x1f000)) &&
     (9 < param_3 - 0xfe4e5)) {
    if ((long)param_3 < 0x203c) {
      if ((param_3 != 0xa9) && (param_3 != 0xae)) {
        return 0;
      }
    }
    else if ((param_3 != 0x203c) && (param_3 != 0x2049)) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 10bd533a4; end: 10bd53407;  */

undefined8 FUN_10bd533a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010be3ffc0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010be40020(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010be3ffe0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
      uVar2 = 3;
      if ((int)puVar1 == 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10bd53408; end: 10bd5354b;  */

uint FUN_10bd53408(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  uint uVar8;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (uVar7 = param_3, func_0x00010c08fa60(), uVar7 == 0)) {
LAB_10bd53524:
    uVar8 = 0;
  }
  else {
    uVar7 = 0;
    puVar6 = (undefined *)0x0;
    do {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bde19e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3,uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2827c0();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c27de40(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar3);
      if ((puVar4 != (undefined *)0x1) &&
         ((puVar6 == (undefined *)0x0 || ((long)puVar4 <= (long)puVar6)))) {
        _objc_release(puVar2);
        uVar7 = param_3;
        func_0x00010c08fa60();
        if (uVar7 < 2) goto LAB_10bd53524;
        uVar7 = param_3;
        func_0x00010bf35920(param_3,param_2,0);
        uVar5 = param_3;
        func_0x00010bf35920(param_3,param_2,1);
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010be40020(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar5 & 0xffffffff);
        uVar8 = (uint)(((int)uVar7 == 0x23 || (int)uVar7 - 0x30U < 10) && (int)uVar5 == 0x20e3) |
                (uint)puVar6;
        break;
      }
      uVar8 = 1;
      lVar1 = 1;
      if ((undefined *)0xffff < puVar3) {
        lVar1 = 2;
      }
      uVar7 = lVar1 + uVar7;
      _objc_release(puVar2);
      uVar5 = param_3;
      func_0x00010c08fa60();
      puVar6 = puVar4;
    } while (uVar7 < uVar5);
  }
  _objc_release(param_3);
  return uVar8 & 1;
}



/* Entry: 10bd5354c; end: 10bd5362b;  */

void FUN_10bd5354c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c08fa60(param_3);
  func_0x00010bf98040(param_3);
  uVar1 = param_3;
  func_0x00010c260c00(param_3);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd5362c; end: 10bd5369f;  */

void FUN_10bd5362c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *in_x6;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c071760();
  if ((int)puVar1 == 0) {
    *in_x6 = 1;
  }
  else {
    lVar2 = param_2;
    func_0x00010c08fa60();
    *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar2 + param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10bd536a0; end: 10bd53883;  */

void FUN_10bd536a0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *in_x6;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  func_0x00010c08fa60();
  _objc_retain(puVar2);
  func_0x00010bf98040(param_3);
  _objc_retain(puVar2);
  puVar3 = puVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar4 = param_3;
  while (puVar3 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    puVar6 = puVar4;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar2);
      }
      in_x6 = puVar6;
      func_0x00010c08fa60();
      puVar4 = puVar6;
      func_0x00010c25cfe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar7 = puVar7 + 1;
      puVar6 = puVar4;
    } while (puVar3 != puVar7);
    puVar3 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c071760();
  if ((int)puVar3 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_3 + 0x20));
  }
  *in_x6 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10bd53884; end: 10bd538df;  */

void FUN_10bd53884(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *in_x6;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c071760();
  if ((int)puVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  }
  *in_x6 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10bd538e0; end: 10bd539bf;  */

undefined1 FUN_10bd538e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x00010c25cfc0(param_1,param_2,&PTR____CFConstantStringClassReference_110db2d98,
                      &PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 1;
  func_0x00010c08fa60();
  func_0x00010bf98040(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10bd539c0; end: 10bd53a5b;  */

void FUN_10bd539c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *in_x6;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c071760(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_2);
  if (((ulong)puVar1 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
    *in_x6 = 1;
  }
  return;
}



/* Entry: 10bd53a5c; end: 10bd53a7b;  */

uint FUN_10bd53a5c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  return (uint)puVar1 ^ 1;
}



/* Entry: 10bd53a7c; end: 10bd53ad3;  */

bool FUN_10bd53a7c(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c11f440();
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else if (lVar2 == 0x7fffffffffffffff) {
    bVar1 = false;
  }
  else {
    func_0x00010bf35920(param_1,param_2,lVar2 + -1);
    bVar1 = (int)param_1 == 0x20;
  }
  return bVar1;
}



/* Entry: 10bd53ad4; end: 10bd53b6f;  */

void FUN_10bd53ad4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c06a520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c11f360(param_1,param_2,puVar2,4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (lVar3 != 0x7fffffffffffffff) {
    func_0x00010c260c20(param_1,param_2,lVar3 + 1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd53b70; end: 10bd53c27;  */

undefined8 FUN_10bd53b70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c08fa60();
  func_0x00010bf98040(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 10bd53c28; end: 10bd53c3f;  */

void FUN_10bd53c28(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  return;
}



/* Entry: 10bd53c40; end: 10bd53cf3;  */

void FUN_10bd53c40(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_3 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar1 = param_3;
    func_0x00010c08fae0();
    ppuVar2 = param_3;
    if (0x1e < (long)ppuVar1) {
      func_0x00010c260c40(param_3,param_2,0x1e);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
    }
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar2;
    func_0x00010c25d0a0(ppuVar2,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10bd53cf4; end: 10bd53e0b;  */

void FUN_10bd53cf4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c08fa60();
  func_0x00010c25d900();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  func_0x00010c08fa60(param_1);
  _objc_retain(puVar1);
  func_0x00010bf98040(param_1);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bd53e0c; end: 10bd53e43;  */

void FUN_10bd53e0c(long param_1,undefined8 param_2)

{
  undefined1 *in_x6;
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(ulong *)(lVar1 + 0x18);
  *(ulong *)(lVar1 + 0x18) = uVar2 + 1;
  if (*(ulong *)(param_1 + 0x30) < uVar2) {
    *in_x6 = 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf070f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_appendString__11259f5e0,param_2);
  return;
}



/* Entry: 10bd53e44; end: 10bd53eab;  */

bool FUN_10bd53e44(long param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (func_0x00010c11f440(), param_1 != 0)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c08fa60(param_3);
    bVar1 = param_2 == lVar2;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10bd53eac; end: 10bd53f4b;  */

void FUN_10bd53eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  _objc_retain(param_4);
  func_0x00010c127e80(puVar1,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08fa60(param_1);
  puVar3 = puVar1;
  func_0x00010c25cfa0(puVar1,param_2,param_1,0,0,uVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10bd53f4c; end: 10bd53f5b;  */

void FUN_10bd53f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c150c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_scoreAgainst_fuzziness__112631d38,param_3,0);
  return;
}



/* Entry: 10bd53f5c; end: 10bd543af;  */

double FUN_10bd53f5c(double param_1,ulong param_2,undefined8 param_3,ulong param_4,long param_5,
                    uint param_6)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (lRam00000001137fe508 != -1) {
    func_0x000107c27d9c(0x1137fe508,&PTR___NSConcreteGlobalBlock_110d9f1e0);
  }
  func_0x00010bf67540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf44700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_2);
  uVar3 = param_4;
  func_0x00010bf67540();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf44700();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010c0720c0();
  if ((int)uVar3 != 0) {
    uVar3 = uVar4;
    func_0x00010c08fa60();
    dVar14 = 1.0;
    if (uVar3 != 0) goto LAB_10bd54344;
  }
  uVar3 = uVar6;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    dVar14 = 0.0;
  }
  else {
    uVar3 = uVar6;
    func_0x00010c08fa60();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    if (uVar3 == 0) {
      bVar2 = false;
      dVar14 = 0.0;
      dVar13 = 1.0;
    }
    else {
      bVar2 = false;
      dVar13 = 1.0;
      dVar14 = 0.0;
      dVar15 = 0.1;
      uVar11 = 1;
      do {
        uVar7 = uVar6;
        func_0x00010c260c80(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar4;
        func_0x00010c11f420();
        _objc_release(uVar8);
        uVar8 = uVar7;
        func_0x00010c28ed80(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar4;
        func_0x00010c11f420();
        _objc_release(uVar8);
        fVar12 = SUB84(param_1,0);
        dVar17 = dVar15;
        if ((uVar9 == 0x7fffffffffffffff) && (uVar10 == 0x7fffffffffffffff)) {
          if (param_5 == 0) {
            _objc_release(uVar7);
            dVar14 = 0.0;
            goto LAB_10bd54344;
          }
          func_0x00010bfb2c80(param_5);
          param_1 = (double)(1.0 - fVar12);
          dVar13 = dVar13 + param_1;
        }
        else {
          uVar8 = uVar9;
          if ((uVar9 == 0x7fffffffffffffff) || (uVar10 == 0x7fffffffffffffff)) {
            if (uVar9 == 0x7fffffffffffffff) {
              uVar8 = uVar10;
            }
            if ((uVar10 == 0x7fffffffffffffff && uVar9 == 0x7fffffffffffffff) ||
               (uVar8 == 0x7fffffffffffffff)) goto LAB_10bd5427c;
          }
          else if (uVar10 <= uVar9) {
            uVar8 = uVar10;
          }
          uVar9 = uVar4;
          func_0x00010c260c80();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c0720c0();
          _objc_release(uVar9);
          dVar16 = 0.2;
          if ((uVar10 & 1) == 0) {
            dVar16 = dVar15;
          }
          if (uVar8 == 0) {
            bVar2 = (bool)((int)uVar11 == 1 | bVar2);
            dVar17 = dVar16 + 0.6;
          }
          else {
            uVar8 = uVar4;
            func_0x00010c260c80();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010c0720c0();
            _objc_release(uVar8);
            param_1 = dVar16 + 0.8;
            dVar17 = param_1;
            if ((int)uVar9 == 0) {
              dVar17 = dVar16;
            }
          }
          uVar8 = uVar4;
          func_0x00010c260c00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          uVar4 = uVar8;
        }
LAB_10bd5427c:
        dVar14 = dVar14 + dVar17;
        _objc_release(uVar7);
        bVar1 = uVar11 < uVar3;
        uVar11 = (ulong)((int)uVar11 + 1);
      } while (bVar1);
    }
    if ((param_6 >> 1 & 1) == 0) {
      dVar14 = dVar14 / (double)uVar3;
      uVar11 = 0;
      if (uVar5 != 0) {
        uVar11 = uVar3 / uVar5;
      }
      dVar15 = (double)uVar3 / (double)uVar5;
      if ((param_6 & 4) != 0) {
        dVar15 = (double)uVar11;
      }
      dVar13 = ((dVar14 + dVar15 * dVar14) * 0.5) / dVar13;
      if ((!bVar2) || (dVar14 = dVar13 + 0.15, 1.0 <= dVar14)) {
        dVar14 = dVar13;
      }
    }
    else {
      dVar14 = dVar14 / (double)uVar5;
    }
  }
LAB_10bd54344:
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  return dVar14;
}



/* Entry: 10bd543b0; end: 10bd54473;  */

void FUN_10bd543b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248;
  func_0x00010c0b5aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c28ed60(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb57a0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf66760(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb57a0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010bef7620(puVar2,param_2,&PTR____CFConstantStringClassReference_110db2d98);
  puVar3 = puVar2;
  func_0x00010c06a520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137fe510;
  puRam00000001137fe510 = puVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10bd54474; end: 10bd5471b;  */

undefined1  [16]
FUN_10bd54474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  uVar7 = 3;
  func_0x00010bf20ba0(param_7);
  uVar13 = param_3;
  uVar14 = param_4;
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    auVar15._8_8_ = param_4;
    auVar15._0_8_ = param_3;
    return auVar15;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar7);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar8 = puVar2;
  func_0x00010c23d660(puVar1);
  uVar7 = param_1;
  uVar11 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = param_1;
    return auVar16;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar1;
  func_0x00010c23d680(puVar2);
  uVar10 = uVar7;
  uVar12 = uVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    auVar17._8_8_ = uVar11;
    auVar17._0_8_ = uVar7;
    return auVar17;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  func_0x00010bf69e80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  func_0x00010c1bdb00(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar2;
  func_0x00010c23d680(puVar1);
  uVar7 = uVar10;
  uVar11 = uVar12;
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    auVar18._8_8_ = uVar12;
    auVar18._0_8_ = uVar10;
    return auVar18;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  puVar1 = puVar3;
  _objc_opt_class();
  func_0x00010c23d0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uVar10 = uVar7;
  uVar12 = uVar11;
  func_0x00010c2971c0(uVar7,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf51e00();
  puVar5 = puVar8;
  func_0x00010bf51e00();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    func_0x00010bf20ba0(uVar7,uVar11,puVar3);
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uVar10 = uVar13;
    uVar12 = uVar14;
    func_0x00010c2971c0(uVar13,uVar14,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1);
  }
  else {
    func_0x00010bdc10a0();
    uVar13 = uVar10;
    uVar14 = uVar12;
  }
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    auVar19._8_8_ = uVar14;
    auVar19._0_8_ = uVar13;
    return auVar19;
  }
  ___stack_chk_fail();
  if (lRam00000001137fe518 != -1) {
    func_0x000107c27d9c(0x1137fe518,&PTR___NSConcreteGlobalBlock_110d9f200);
  }
  uVar13 = uRam00000001137fe520;
  _objc_retain(uRam00000001137fe520);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar13);
  auVar20._8_8_ = uVar12;
  auVar20._0_8_ = uVar10;
  return auVar20;
}



/* Entry: 10bd5471c; end: 10bd54853;  */

undefined1  [16]
FUN_10bd5471c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  func_0x00010bf69e80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  func_0x00010c1bdb00(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar7 = puVar1;
  func_0x00010c23d680(param_5);
  uVar9 = param_1;
  uVar11 = param_2;
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = param_1;
    return auVar13;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  puVar1 = puVar2;
  _objc_opt_class();
  func_0x00010c23d0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uVar10 = uVar9;
  uVar12 = uVar11;
  func_0x00010c2971c0(uVar9,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf51e00();
  puVar5 = puVar7;
  func_0x00010bf51e00();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    func_0x00010bf20ba0(uVar9,uVar11,puVar2);
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uVar10 = param_3;
    uVar12 = param_4;
    func_0x00010c2971c0(param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1);
  }
  else {
    func_0x00010bdc10a0();
    param_3 = uVar10;
    param_4 = uVar12;
  }
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    auVar14._8_8_ = param_4;
    auVar14._0_8_ = param_3;
    return auVar14;
  }
  ___stack_chk_fail();
  if (lRam00000001137fe518 != -1) {
    func_0x000107c27d9c(0x1137fe518,&PTR___NSConcreteGlobalBlock_110d9f200);
  }
  uVar9 = uRam00000001137fe520;
  _objc_retain(uRam00000001137fe520);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  auVar15._8_8_ = uVar12;
  auVar15._0_8_ = uVar10;
  return auVar15;
}



/* Entry: 10bd54854; end: 10bd54a0b;  */

undefined1  [16]
FUN_10bd54854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar1 = param_5;
  _objc_opt_class();
  func_0x00010c23d0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uVar7 = param_1;
  uVar8 = param_2;
  func_0x00010c2971c0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_5;
  func_0x00010bf51e00();
  uVar4 = param_7;
  func_0x00010bf51e00();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    func_0x00010bf20ba0(param_1,param_2,param_5);
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uVar7 = param_3;
    uVar8 = param_4;
    func_0x00010c2971c0(param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1);
  }
  else {
    func_0x00010bdc10a0();
    param_3 = uVar7;
    param_4 = uVar8;
  }
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    auVar9._8_8_ = param_4;
    auVar9._0_8_ = param_3;
    return auVar9;
  }
  ___stack_chk_fail();
  if (lRam00000001137fe518 != -1) {
    func_0x000107c27d9c(0x1137fe518,&PTR___NSConcreteGlobalBlock_110d9f200);
  }
  uVar4 = uRam00000001137fe520;
  _objc_retain(uRam00000001137fe520);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = uVar7;
  return auVar10;
}


