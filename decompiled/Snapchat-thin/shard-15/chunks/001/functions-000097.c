/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b86150c; end: 10b861617; -[SIGTextFieldPillView _stylize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86150c(long param_1)

{
  undefined *puVar1;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_11270b5b8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_isSelected_1125fcfa8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(*(undefined8 *)(param_1 + _DAT_112794e84));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_112794e88));
  _objc_release(puVar1);
  return;
}



/* Entry: 10b861618; end: 10b861637; -[SIGTextFieldPillView observer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b861618(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112794e90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b861638; end: 10b86164b; -[SIGTextFieldPillView setObserver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b861638(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112794e90,param_3);
  return;
}



/* Entry: 10b86164c; end: 10b86165b; -[SIGTextFieldPillView pill] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86164c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794e8c);
}



/* Entry: 10b86165c; end: 10b86166b; -[SIGTextFieldPillView designVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86165c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794e80);
}



/* Entry: 10b86166c; end: 10b8616c7; -[SIGTextFieldPillView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86166c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794e8c,0);
  _objc_destroyWeak(param_1 + _DAT_112794e90);
  _objc_storeStrong(param_1 + _DAT_112794e84,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794e88,0);
  return;
}



/* Entry: 10b8616c8; end: 10b861943; -[SIGTextView initWithFrame:textContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b8616c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_11270b5c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame_textContainer__1125e2dd8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(puVar2);
    func_0x00010c2131e0(0x4030000000000000,0x4030000000000000,0x4030000000000000,0x4030000000000000,
                        puVar1);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1);
    _objc_release(puVar3);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c279540(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb3ea0(0x403b000000000000,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
    func_0x00010c165e00(puVar1);
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    func_0x00010c219b60();
    func_0x00010c1bdb00(puVar3);
    func_0x00010c1cfce0(puVar3);
    func_0x00010c21ad00(puVar3);
    func_0x00010c1c3ae0(0x403b000000000000,puVar3);
    func_0x00010c165e00(puVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar3);
    _objc_release(puVar4);
    func_0x00010c21e900(puVar3);
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794e98);
    *(undefined **)((long)puVar1 + (long)_DAT_112794e98) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar5);
    func_0x00010befbb60(puVar1);
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b861944; end: 10b861953; -[SIGTextView setPlaceholder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b861944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794e98),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 10b861954; end: 10b8619bb; -[SIGTextView setPlaceholderTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b861954(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794e9c);
  *(undefined8 *)(param_1 + _DAT_112794e9c) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_112794e98),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b8619bc; end: 10b8619cb; -[SIGTextView placeholder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8619bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794e98),PTR_s_text_1126787e8);
  return;
}



/* Entry: 10b8619cc; end: 10b861a17; -[SIGTextView _didChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8619cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112794e98),param_2,lVar2 != 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b861a18; end: 10b861ac3; -[SIGTextView setTypeStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b861a18(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + _DAT_112794e94) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_112794e94) = param_3;
  lVar1 = param_1;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c279540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfb3ea0(0x403b000000000000,lVar1,param_2,param_3,1,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(param_1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b861ac4; end: 10b861b47; -[SIGTextView setText:withPlaceholders:urlStrings:] */

void FUN_10b861ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c16b720(param_1,param_2,0);
  func_0x00010c212f20(param_1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010bfb5e80(param_1,param_2,param_4,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b861b48; end: 10b861e83; -[SIGTextView formatTextWithPlaceholders:urlStrings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b861b48(double param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,long param_6,ulong param_7,long param_8)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  ulong uStack_120;
  undefined *puStack_118;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar12 = param_7;
  func_0x00010bf529e0();
  if ((uVar12 != 0) && (lVar2 = param_8, func_0x00010bf529e0(), lVar2 != 0)) {
    uVar10 = param_5;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar10;
    func_0x00010c0d3c80();
    _objc_release(uVar10);
    uVar12 = param_7;
    func_0x00010bf529e0();
    if (uVar12 != 0) {
      uVar12 = 0;
      do {
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar12 = uVar12 + 1;
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        uVar10 = param_5;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c11f420();
        lVar2 = param_6;
        _objc_release(uVar10);
        if (param_6 != 0) {
          uVar6 = param_7;
          func_0x00010c0dfd40(param_7);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = param_8;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = param_5;
          func_0x00010bfb3a80();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(lVar7);
          puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          _objc_retain(uVar6);
          _objc_alloc(puVar4);
          puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c00c560(puVar4);
          _objc_release(puVar8);
          lVar9 = lVar7;
          func_0x00010c08fa60();
          if (lVar9 != 0) {
            puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
            _objc_alloc();
            func_0x00010c04e820();
            if (puVar8 != (undefined *)0x0) {
              func_0x00010c1d0560(puVar4);
              func_0x00010c1d0560(puVar4);
            }
            _objc_release(puVar8);
          }
          puVar8 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
          _objc_alloc();
          func_0x00010c04e840();
          _objc_release(uVar6);
          _objc_release(puVar4);
          _objc_release(lVar7);
          func_0x00010c130d00(uVar3);
          _objc_release(puVar8);
          _objc_release(uVar10);
          _objc_release(lVar7);
          _objc_release(uVar6);
        }
        func_0x00010c16b720(param_5);
        _objc_release(puVar5);
        uVar6 = param_7;
        func_0x00010bf529e0();
        param_6 = lVar2;
      } while (uVar12 < uVar6);
    }
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puStack_118 = PTR_PTR_11270b5c0;
  uStack_120 = param_7;
  _objc_msgSendSuper2(&uStack_120,PTR_s_layoutSubviews_112600e60);
  uVar12 = param_7;
  func_0x00010c26ba00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099240();
  dVar13 = param_1;
  _objc_release(uVar12);
  uVar12 = param_7;
  func_0x00010bf20c00();
  _CGRectIsEmpty();
  iVar1 = (int)uVar12;
  if ((uVar12 & 1) == 0) {
    _CGRectInset(dVar13,param_2,param_3,param_4,param_1 + 16.0,0x4030000000000000);
    dVar14 = param_3;
    _CGRectIsEmpty();
    if (iVar1 == 0) {
      lVar11 = (long)_DAT_112794e98;
      dVar15 = param_3;
      dVar16 = param_4;
      func_0x00010c23d5a0(*(undefined8 *)(param_7 + lVar11));
      if (param_3 <= dVar15) {
        dVar15 = param_3;
      }
      if (param_4 <= dVar16) {
        dVar16 = param_4;
      }
      uVar12 = param_7;
      func_0x00010bf8d060();
      if (uVar12 == 1) {
        func_0x00010bf20c00(param_7);
        dVar13 = dVar13 + ((param_1 + dVar14 + -16.0) - (dVar13 + dVar15));
      }
      uVar10 = *(undefined8 *)(param_7 + lVar11);
    }
    else {
      dVar13 = *(double *)PTR__CGRectZero_110347608;
      param_2 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      dVar15 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
      dVar16 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
      uVar10 = *(undefined8 *)(param_7 + (long)_DAT_112794e98);
    }
    func_0x00010c19f0e0(dVar13,param_2,dVar15,dVar16,uVar10);
  }
  return;
}



/* Entry: 10b861e84; end: 10b861fe7; -[SIGTextView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b861e84(double param_1,undefined8 param_2,double param_3,double param_4,ulong param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulong uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_11270b5c0;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_layoutSubviews_112600e60);
  uVar2 = param_5;
  func_0x00010c26ba00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099240();
  dVar5 = param_1;
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010bf20c00();
  _CGRectIsEmpty();
  iVar1 = (int)uVar2;
  if ((uVar2 & 1) == 0) {
    _CGRectInset(dVar5,param_2,param_3,param_4,param_1 + 16.0,0x4030000000000000);
    dVar6 = param_3;
    _CGRectIsEmpty();
    if (iVar1 == 0) {
      lVar4 = (long)_DAT_112794e98;
      dVar7 = param_3;
      dVar8 = param_4;
      func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar4));
      if (param_3 <= dVar7) {
        dVar7 = param_3;
      }
      if (param_4 <= dVar8) {
        dVar8 = param_4;
      }
      uVar2 = param_5;
      func_0x00010bf8d060();
      if (uVar2 == 1) {
        func_0x00010bf20c00(param_5);
        dVar5 = dVar5 + ((param_1 + dVar6 + -16.0) - (dVar5 + dVar7));
      }
      uVar3 = *(undefined8 *)(param_5 + lVar4);
    }
    else {
      dVar5 = *(double *)PTR__CGRectZero_110347608;
      param_2 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      dVar7 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
      dVar8 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
      uVar3 = *(undefined8 *)(param_5 + (long)_DAT_112794e98);
    }
    func_0x00010c19f0e0(dVar5,param_2,dVar7,dVar8,uVar3);
  }
  return;
}



/* Entry: 10b861fe8; end: 10b861ff7; -[SIGTextView typeStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b861fe8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794e94);
}



/* Entry: 10b861ff8; end: 10b862007; -[SIGTextView placeholderTextColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b861ff8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794e9c);
}



/* Entry: 10b862008; end: 10b862047; -[SIGTextView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b862008(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794e9c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794e98,0);
  return;
}



/* Entry: 10b862048; end: 10b862433; -[SIGActivityIndicatorView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b862048(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = &uStack_a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_11270b5c8;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(&uStack_a0,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c17d4c0(puVar1);
    func_0x00010c1a7f60(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112794ea0) = 1;
    puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    _objc_alloc_init();
    lVar11 = (long)_DAT_112794ea4;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar2;
    _objc_release(uVar10);
    FUN_10b862e90();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)((long)puVar1 + lVar11));
    _objc_release(uVar10);
    func_0x00010c209760(0,0,*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c196020(0x3ff0000000000000,0,*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c167d20(0,0,*(undefined8 *)((long)puVar1 + lVar11));
    puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    _objc_alloc_init();
    lVar11 = (long)_DAT_112794ea8;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar2;
    _objc_release(uVar10);
    FUN_10b862e90();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)((long)puVar1 + lVar11));
    _objc_release(uVar10);
    func_0x00010c209760(0,0,*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c196020(0x3ff0000000000000,0,*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c167d20(0,0,*(undefined8 *)((long)puVar1 + lVar11));
    puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    _objc_alloc_init();
    lVar11 = (long)_DAT_112794eac;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar2;
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_90 = puVar3;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_88 = puVar3;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_80 = puVar3;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_78 = puVar3;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010c17eb60(*(undefined8 *)((long)puVar1 + lVar11));
    _objc_release(puVar8);
    func_0x00010c209760(0,0,*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c196020(0x3fe0000000000000,0,*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c167d20(0,0,*(undefined8 *)((long)puVar1 + lVar11));
    puVar9 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar9);
    puVar9 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar9);
    puVar9 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar9);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  return puVar2;
}



/* Entry: 10b862434; end: 10b862447; -[SIGActivityIndicatorView intrinsicContentSize] */

undefined1  [16] FUN_10b862434(void)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar1._8_8_ = 0x4000000000000000;
  return auVar1;
}



/* Entry: 10b862448; end: 10b86251f; -[SIGActivityIndicatorView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b862448(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_11270b5c8;
  lStack_50 = param_4;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  *(undefined1 *)(param_4 + _DAT_112794eb0) = 1;
  func_0x00010bf20c00(param_4);
  param_3 = param_3 + param_3;
  func_0x00010c19f0e0(0,0,param_3,0x4000000000000000,*(undefined8 *)(param_4 + _DAT_112794ea4));
  lVar1 = (long)_DAT_112794ea8;
  func_0x00010c19f0e0(param_3,0,param_3,0x4000000000000000,*(undefined8 *)(param_4 + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar1));
  func_0x00010c19f0e0(*(undefined8 *)(param_4 + _DAT_112794eac));
  if (*(char *)(param_4 + _DAT_112794eb4) == '\x01') {
    *(undefined1 *)(param_4 + _DAT_112794eb4) = 0;
    func_0x00010c24dbc0(param_4);
  }
  return;
}



/* Entry: 10b862520; end: 10b8625eb; -[SIGActivityIndicatorView startAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b862520(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + _DAT_112794eb0) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112794eb4) = 1;
  }
  else {
    if (*(char *)(param_1 + _DAT_112794ea0) == '\x01') {
      func_0x00010c1a7f60(param_1,param_2,0);
    }
    if (*(char *)(param_1 + _DAT_112794eb8) != '\x01') {
      *(undefined1 *)(param_1 + _DAT_112794eb8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bde8770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__continueAnimating_112557b78);
      return;
    }
    if (*(char *)(param_1 + _DAT_112794ebc) == '\x01') {
      *(undefined1 *)(param_1 + _DAT_112794ebc) = 0;
      lVar2 = (long)_DAT_112794ec0;
      if (*(long *)(param_1 + lVar2) != 0) {
        (**(code **)(*(long *)(param_1 + lVar2) + 0x10))();
        uVar1 = *(undefined8 *)(param_1 + lVar2);
        *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar1);
        return;
      }
    }
  }
  return;
}



/* Entry: 10b8625ec; end: 10b862703; -[SIGActivityIndicatorView stopAnimatingWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8625ec(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  _objc_retain(param_3);
  if (*(char *)(param_1 + _DAT_112794eb8) == '\x01') {
    if ((param_3 == 0) || ((*(byte *)(param_1 + _DAT_112794ebc) & 1) == 0)) {
      *(undefined1 *)(param_1 + _DAT_112794ebc) = 1;
      lVar4 = param_3;
      _objc_retainBlock();
      uVar1 = *(undefined8 *)(param_1 + _DAT_112794ec0);
      *(long *)(param_1 + _DAT_112794ec0) = lVar4;
    }
    else {
      lVar4 = (long)_DAT_112794ec0;
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      _objc_retainBlock();
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_10b862704;
      puStack_48 = &UNK_11088fcb8;
      uStack_40 = uVar1;
      _objc_retain(param_3);
      lStack_38 = param_3;
      _objc_retain(uVar1);
      _objc_retainBlock();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined ***)(param_1 + lVar4) = ppuVar2;
      _objc_release(uVar3);
      _objc_release(lStack_38);
      _objc_release(uStack_40);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b862704; end: 10b862733;  */

void FUN_10b862704(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010b862730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 10b862734; end: 10b862b6f; -[SIGActivityIndicatorView _continueAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b862734(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  
  lVar7 = param_4;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 != 0) {
    lVar8 = param_4;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar7);
    if (lVar8 != 0) goto LAB_10b86279c;
  }
  func_0x00010c255980(param_4,param_5,0);
LAB_10b86279c:
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_5,1);
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_5,
                      &PTR____CFConstantStringClassReference_110f8aa38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(0x3ff0000000000000);
  uVar5 = *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88;
  puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_5,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar1,param_5,puVar2);
  _objc_release(puVar2);
  func_0x00010c1a1180(puVar1,param_5,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d4260);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar8 = (long)_DAT_112794ea4;
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar8));
  func_0x00010c0df720(-param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar1,param_5,puVar2);
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)PTR__kCAFillModeForwards_110346ce0;
  func_0x00010c19bc40(puVar1,param_5,uVar6);
  func_0x00010c1ea580(puVar1,param_5,0);
  func_0x00010bef6c20(*(undefined8 *)(param_4 + lVar8),param_5,puVar1,
                      &PTR____CFConstantStringClassReference_110daf598);
  puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_5,
                      &PTR____CFConstantStringClassReference_110f8aa38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(0x3ff0000000000000);
  puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_5,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar3,param_5,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = (long)_DAT_112794ea8;
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar7));
  func_0x00010c0df720(param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar3,param_5,puVar2);
  _objc_release(puVar2);
  func_0x00010c216920(puVar3,param_5,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d4260);
  func_0x00010c19bc40(puVar3,param_5,uVar6);
  func_0x00010c1ea580(puVar3,param_5,0);
  if (*(char *)(param_4 + _DAT_112794ebc) == '\x01') {
    *(undefined1 *)(param_4 + _DAT_112794ebc) = 0;
    func_0x00010c1a7f60(*(undefined8 *)(param_4 + lVar8),param_5,1);
    func_0x00010c1a7f60(*(undefined8 *)(param_4 + lVar7),param_5,1);
    lVar7 = (long)_DAT_112794eac;
    func_0x00010c1a7f60(*(undefined8 *)(param_4 + lVar7),param_5,0);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10b862b70;
    puStack_70 = &UNK_110842e18;
    lStack_68 = param_4;
    func_0x00010c17fb40(PTR__OBJC_CLASS___CATransaction_1126b5718,param_5,&puStack_88);
    puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_5,
                        &PTR____CFConstantStringClassReference_110f8aa38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192d40(0x3ff0000000000000);
    puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_5,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar4,param_5,puVar2);
    _objc_release(puVar2);
    func_0x00010c1a1180(puVar4,param_5,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d4260);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar8));
    func_0x00010c0df720(-param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar4,param_5,puVar2);
    _objc_release(puVar2);
    func_0x00010c19bc40(puVar4,param_5,uVar6);
    func_0x00010c1ea580(puVar4,param_5,0);
    func_0x00010bef6c20(*(undefined8 *)(param_4 + lVar7),param_5,puVar4,
                        &PTR____CFConstantStringClassReference_110daf598);
    _objc_release(puVar4);
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_4 + lVar8),param_5,0);
    func_0x00010c1a7f60(*(undefined8 *)(param_4 + lVar7),param_5,0);
    func_0x00010c1a7f60(*(undefined8 *)(param_4 + _DAT_112794eac),param_5,1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x10b862b78;
    puStack_98 = &UNK_110842e18;
    lStack_90 = param_4;
    func_0x00010c17fb40(PTR__OBJC_CLASS___CATransaction_1126b5718,param_5,&puStack_b0);
    func_0x00010bef6c20(*(undefined8 *)(param_4 + lVar7),param_5,puVar3,
                        &PTR____CFConstantStringClassReference_110daf598);
  }
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 10b862b70; end: 10b862b7f;  */

void FUN_10b862b70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0a030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__endingAnimationCompleted_1125601a8);
  return;
}



/* Entry: 10b862b80; end: 10b862be7; -[SIGActivityIndicatorView _endingAnimationCompleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b862b80(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + _DAT_112794eb8) = 0;
  if (*(char *)(param_1 + _DAT_112794ea0) == '\x01') {
    func_0x00010c1a7f60(param_1,param_2,1);
  }
  if (*(long *)(param_1 + _DAT_112794ec0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b862bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + _DAT_112794ec0) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b862be8; end: 10b862c3b; -[SIGActivityIndicatorView willMoveToSuperview:] */

void FUN_10b862be8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b5c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_willMoveToSuperview__112528100);
  if (param_3 == 0) {
    func_0x00010c255980(param_1);
  }
  return;
}



/* Entry: 10b862c3c; end: 10b862c8f; -[SIGActivityIndicatorView willMoveToWindow:] */

void FUN_10b862c3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b5c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_willMoveToWindow__112687408);
  if (param_3 == 0) {
    func_0x00010c255980(param_1);
  }
  return;
}



/* Entry: 10b862c90; end: 10b862ceb; -[SIGActivityIndicatorView pauseAnimation:] */

void FUN_10b862c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _CACurrentMediaTime();
  func_0x00010bf514c0(param_4,param_3,0);
  func_0x00010c207c40(0,param_4);
  func_0x00010c214e40(param_1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b862cec; end: 10b862d67; -[SIGActivityIndicatorView resumeAnimation:] */

void FUN_10b862cec(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  _objc_retain(param_4);
  func_0x00010c26f540(param_4);
  func_0x00010c207c40(0x3f800000,param_4);
  func_0x00010c214e40(0,param_4);
  dVar1 = 0.0;
  func_0x00010c16fd40(0,param_4);
  _CACurrentMediaTime();
  func_0x00010bf514c0(param_4,param_3,0);
  func_0x00010c16fd40(dVar1 - param_1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b862d68; end: 10b862db3; -[SIGActivityIndicatorView willResignActive:] */

/* WARNING: Possible PIC construction at 0x00010b862d88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b862d8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b862d68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f5bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_pauseAnimation__11261b118,*(undefined8 *)(param_1 + _DAT_112794ea4));
  return;
}



/* Entry: 10b862db4; end: 10b862dff; -[SIGActivityIndicatorView didBecomeActive:] */

/* WARNING: Possible PIC construction at 0x00010b862dd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b862dd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b862db4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13d2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_resumeAnimation__11262ced0,*(undefined8 *)(param_1 + _DAT_112794ea4));
  return;
}



/* Entry: 10b862e00; end: 10b862e0f; -[SIGActivityIndicatorView isAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b862e00(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794eb8);
}



/* Entry: 10b862e10; end: 10b862e1f; -[SIGActivityIndicatorView hidesWhenStopped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b862e10(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794ea0);
}



/* Entry: 10b862e20; end: 10b862e2f; -[SIGActivityIndicatorView setHidesWhenStopped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b862e20(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112794ea0) = param_3;
  return;
}



/* Entry: 10b862e30; end: 10b862e8f; -[SIGActivityIndicatorView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b862e30(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794eac,0);
  _objc_storeStrong(param_1 + _DAT_112794ea8,0);
  _objc_storeStrong(param_1 + _DAT_112794ea4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794ec0,0);
  return;
}



/* Entry: 10b862e90; end: 10b862fef;  */

void FUN_10b862e90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf43810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b862ff0; end: 10b862ff7; -[SIGAnimationContext cancel] */

void FUN_10b862ff0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_completeAnimation__1125ae7a8,0);
  return;
}



/* Entry: 10b862ff8; end: 10b862fff; -[SIGAnimationContext complete] */

void FUN_10b862ff8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_completeAnimation__1125ae7a8,1);
  return;
}



/* Entry: 10b863000; end: 10b863043; -[SIGLoadingIndicatorLayer visibleProgress] */

undefined8 FUN_10b863000(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c10f4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25dc60();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b863044; end: 10b863047; -[SIGLoadingIndicatorLayer progress] */

void FUN_10b863044(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25dc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_strokeEnd_112675140);
  return;
}



/* Entry: 10b863048; end: 10b86304f; -[SIGLoadingArcConfiguration animationStartLineWidth] */

undefined8 FUN_10b863048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b863050; end: 10b863057; -[SIGLoadingArcConfiguration setAnimationStartLineWidth:] */

void FUN_10b863050(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 10b863058; end: 10b86305f; -[SIGLoadingArcConfiguration strokeSecondsPerCycle] */

undefined8 FUN_10b863058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b863060; end: 10b863067; -[SIGLoadingArcConfiguration setStrokeSecondsPerCycle:] */

void FUN_10b863060(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 10b863068; end: 10b86306f; -[SIGLoadingArcConfiguration strokeStartPercent] */

undefined8 FUN_10b863068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b863070; end: 10b863077; -[SIGLoadingArcConfiguration setStrokeStartPercent:] */

void FUN_10b863070(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 10b863078; end: 10b86307f; -[SIGLoadingArcConfiguration strokeEndPercent] */

undefined8 FUN_10b863078(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b863080; end: 10b863087; -[SIGLoadingArcConfiguration setStrokeEndPercent:] */

void FUN_10b863080(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 10b863088; end: 10b86308f; -[SIGLoadingArcConfiguration secondsPerCycle] */

undefined8 FUN_10b863088(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b863090; end: 10b863097; -[SIGLoadingArcConfiguration setSecondsPerCycle:] */

void FUN_10b863090(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 10b863098; end: 10b86309f; -[SIGLoadingArcConfiguration rotationStartAngle] */

undefined8 FUN_10b863098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b8630a0; end: 10b8630a7; -[SIGLoadingArcConfiguration setRotationStartAngle:] */

void FUN_10b8630a0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 10b8630a8; end: 10b8630af; -[SIGLoadingArcConfiguration rotationEndAngle] */

undefined8 FUN_10b8630a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b8630b0; end: 10b8630b7; -[SIGLoadingArcConfiguration setRotationEndAngle:] */

void FUN_10b8630b0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x50) = param_1;
  return;
}



/* Entry: 10b8630b8; end: 10b8630c3; -[SIGLoadingArcConfiguration .cxx_destruct] */

void FUN_10b8630b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b8630c4; end: 10b86322b; -[SIGLoadingIndicatorView initBackupSpinner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b8630c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  func_0x00010bfee200();
  if (param_1 != 0) {
    func_0x00010c1a7f60(param_1,param_2,0);
    puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112794f0c;
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar1;
    _objc_release(uVar6);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf14c60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    func_0x00010c182c80(*(undefined8 *)(param_1 + lVar7),param_2,uVar3);
    _objc_release(uVar2);
    _objc_release(uVar6);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar7),param_2,puVar4);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126e1820;
    _objc_alloc_init(PTR_PTR_1126e1820);
    func_0x00010c18e180();
    func_0x00010c1f90e0(0x4004000000000000,puVar1);
    lVar5 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(lVar5);
    func_0x00010c1d0560(*(undefined8 *)(param_1 + _DAT_112794f10),param_2,
                        *(undefined8 *)(param_1 + lVar7),
                        &PTR____CFConstantStringClassReference_110f8ab18);
    func_0x00010c1d0560(*(undefined8 *)(param_1 + _DAT_112794f14),param_2,puVar1,
                        *(undefined8 *)(param_1 + lVar7));
    _objc_release(puVar1);
  }
  return param_1;
}



/* Entry: 10b86322c; end: 10b8633df; -[SIGLoadingIndicatorView startAnimating] */

/* WARNING: Possible PIC construction at 0x00010b863290: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b863294) */
/* WARNING: Removing unreachable block (ram,0x00010b8632a4) */
/* WARNING: Removing unreachable block (ram,0x00010b8632d8) */
/* WARNING: Removing unreachable block (ram,0x00010b863310) */
/* WARNING: Removing unreachable block (ram,0x00010b86331c) */
/* WARNING: Removing unreachable block (ram,0x00010b863320) */
/* WARNING: Removing unreachable block (ram,0x00010b863330) */
/* WARNING: Removing unreachable block (ram,0x00010b863338) */
/* WARNING: Removing unreachable block (ram,0x00010b863380) */
/* WARNING: Removing unreachable block (ram,0x00010b86339c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86322c(ulong param_1,undefined8 param_2,undefined1 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010c06c0e0();
  if (((int)uVar1 == 0) || (uVar1 = param_1, func_0x00010c074c20(), (int)uVar1 != 0)) {
    *(undefined1 *)(param_1 + (long)_DAT_112794f20) = 1;
    uVar3 = 0;
    uVar1 = param_1;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
      return;
    }
    ___stack_chk_fail();
    *(undefined1 *)(uVar1 + (long)_DAT_112794f1c) = param_3;
    uVar2 = uVar1;
    func_0x00010c06c0e0();
    if ((uVar2 & 1) != 0) {
      return;
    }
    uVar3 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setHidden__1126479f8,uVar3);
  return;
}



/* Entry: 10b8633e0; end: 10b863423; -[SIGLoadingIndicatorView setHidesWhenStopped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8633e0(ulong param_1,undefined8 param_2,undefined1 param_3)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + (long)_DAT_112794f1c) = param_3;
  uVar1 = param_1;
  func_0x00010c06c0e0();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 10b863424; end: 10b8634c7; -[SIGLoadingIndicatorView isAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10b863424(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + _DAT_112794f18);
  func_0x00010bfb1920(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf03d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  lVar4 = *(long *)(param_1 + _DAT_112794f0c);
  func_0x00010bf03d40(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3 + lVar5 != 0;
}



/* Entry: 10b8634c8; end: 10b8635e7; -[SIGLoadingIndicatorView _startAnimatingArcLayer:withConfiguration:] */

void FUN_10b8634c8(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bf03be0(param_7);
  uVar1 = param_4;
  dVar2 = param_1;
  func_0x00010c14e360();
  if ((int)uVar1 != 0) {
    func_0x00010bf20c00(param_4);
    dVar2 = 12.0;
    param_1 = param_3 / 12.0;
  }
  func_0x00010bf03f00(param_7);
  dVar3 = dVar2;
  func_0x00010c25dcc0(param_7);
  dVar4 = dVar3;
  func_0x00010c25dd60(param_7);
  dVar5 = dVar4;
  func_0x00010c25dca0(param_7);
  dVar6 = dVar5;
  func_0x00010c155360(param_7);
  dVar7 = dVar6;
  func_0x00010c141ce0(param_7);
  dVar8 = dVar7;
  func_0x00010c141ba0(param_7);
  uVar1 = param_7;
  func_0x00010bf7f0e0(param_7);
  _objc_release(param_7);
  func_0x00010bebf5e0(dVar2,param_1,dVar3,dVar4,dVar5,dVar6,dVar7,dVar8,param_4,param_5,param_6,
                      uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10b8635e8; end: 10b86369b; -[SIGLoadingIndicatorView _startAnimatingIconLayer:withConfiguration:] */

void FUN_10b8635e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c141ce0(param_5);
  uVar2 = param_1;
  func_0x00010c155360(param_5);
  uVar1 = param_5;
  func_0x00010bf7f0e0(param_5);
  _objc_release(param_5);
  func_0x00010be97700(param_1,uVar2,param_2,param_3,uVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20(param_4,param_3,param_2,&PTR____CFConstantStringClassReference_110de1f58);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b86369c; end: 10b8638db; -[SIGLoadingIndicatorView _startAnimatingCircleArcLayer:startArcWidth:endArcWidth:strokeSecondsPerCycle:strokeStartPercent:strokeEndPercent:secondsPerCycle:rotationStartAngle:rotationEndAngle:direction:] */

void FUN_10b86369c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [128];
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_10);
  uVar1 = param_8;
  func_0x00010be4c460(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_8;
  func_0x00010bec59a0(param_4,param_5,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be97700(param_7,param_6,param_8,param_9,param_11,param_10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e920(param_5,param_10);
  func_0x00010c1bdd00(param_2,param_10);
  uVar7 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_140 = uVar1;
  uStack_138 = uVar2;
  uStack_130 = param_8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_9,&uStack_140,3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar5 = *plStack_170;
    do {
      puVar6 = (undefined *)0x0;
      do {
        if (*plStack_170 != lVar5) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c1ea580(*(undefined8 *)(lStack_178 + (long)puVar6 * 8),param_9,0);
        puVar6 = puVar6 + 1;
      } while (puVar4 != puVar6);
      puVar4 = puVar3;
      func_0x00010bf52a60(puVar3,param_9,&uStack_180,auStack_128,0x10);
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  func_0x00010bef6c20(param_10,param_9,uVar1,&PTR____CFConstantStringClassReference_110ef20b8);
  func_0x00010bef6c20(param_10,param_9,uVar2,&PTR____CFConstantStringClassReference_110ef2078);
  func_0x00010bef6c20(param_10,param_9,param_8,&PTR____CFConstantStringClassReference_110de1f58);
  _objc_release(param_8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_9,
                      &PTR____CFConstantStringClassReference_110ef2138);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(uVar7,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar3,param_9,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_6,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar3,param_9,puVar4);
  _objc_release(puVar4);
  func_0x00010c192d40(0x3fe0000000000000,puVar3);
  func_0x00010c1ea580(puVar3,param_9,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b8638dc; end: 10b8639a3; -[SIGLoadingIndicatorView _lineThicknessAnimationWithStartArcWidth:endArcWidth:] */

void FUN_10b8638dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_4,
                      &PTR____CFConstantStringClassReference_110ef2138);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar1,param_4,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar1,param_4,puVar2);
  _objc_release(puVar2);
  func_0x00010c192d40(0x3fe0000000000000,puVar1);
  func_0x00010c1ea580(puVar1,param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b8639a4; end: 10b863a7b; -[SIGLoadingIndicatorView _strokeEndAnimationWithStrokeStartPercent:strokeEndPercent:secondsPerCycle:] */

void FUN_10b8639a4(double param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_5,
                      &PTR____CFConstantStringClassReference_110e1f3f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar1,param_5,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar1,param_5,puVar2);
  _objc_release(puVar2);
  func_0x00010c1ea580(puVar1,param_5,1);
  func_0x00010c192d40(param_3 * ABS(param_1 - param_2),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b863a7c; end: 10b863b63; -[SIGLoadingIndicatorView _rotateIndefinitelyAnimationWithRotationStartAngle:secondsPerCycle:direction:onLayer:] */

void FUN_10b863a7c(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = 8;
  if (param_5 != 0) {
    lVar1 = 0;
  }
  uVar4 = *(undefined8 *)(&UNK_10df9f9b0 + lVar1);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_4,
                      &PTR____CFConstantStringClassReference_110e44ab8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(uVar4,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar2,param_4,puVar3);
  _objc_release(puVar3);
  func_0x00010c192d40(param_2 * 0.5,puVar2);
  func_0x00010c1eabe0(0x7f800000,puVar2);
  func_0x00010c186980(puVar2,param_4,1);
  func_0x00010c1ea580(puVar2,param_4,1);
  func_0x00010c19bc40(puVar2,param_4,*(undefined8 *)PTR__kCAFillModeForwards_110346ce0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b863b64; end: 10b863bdf; -[SIGLoadingIndicatorView appDidEnterBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b863b64(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112794f18);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf03c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  func_0x00010c2558c0(param_1);
  *(bool *)(param_1 + _DAT_112794f20) = lVar2 != 0;
  return;
}



/* Entry: 10b863be0; end: 10b863bfb; -[SIGLoadingIndicatorView appWillEnterForeground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b863be0(long param_1)

{
  if (*(char *)(param_1 + _DAT_112794f20) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startAnimating_112671118);
    return;
  }
  return;
}



/* Entry: 10b863bfc; end: 10b863bff; -[SIGLoadingIndicatorView sizeThatFits:] */

void FUN_10b863bfc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 10b863c00; end: 10b863c0f; -[SIGLoadingIndicatorView hidesWhenStopped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b863c00(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794f1c);
}



/* Entry: 10b863c10; end: 10b863c1f; -[SIGLoadingIndicatorView setScaleLineWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b863c10(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112794f04) = param_3;
  return;
}



/* Entry: 10b863c20; end: 10b863c7f; -[SIGLoadingIndicatorView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b863c20(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794f14,0);
  _objc_storeStrong(param_1 + _DAT_112794f10,0);
  _objc_storeStrong(param_1 + _DAT_112794f0c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794f18,0);
  return;
}



/* Entry: 10b863c80; end: 10b864a3f; -[SIGPullToRefreshView initWithFrame:hasCustomTheme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b863c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined1 uVar23;
  long lVar24;
  undefined **ppuVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_150 = PTR_PTR_11270b5f0;
  puVar22 = &uStack_158;
  uStack_158 = param_2;
  _objc_msgSendSuper2(puVar22,PTR_s_initWithFrame__1125e2948);
  puVar4 = (undefined *)0x0;
  if (puVar22 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar22 + (long)_DAT_112794f24) = 0x405cc00000000000;
    puVar2 = puVar22;
    func_0x00010c17d4c0();
    if (param_4 == 0) {
      bVar1 = false;
      ppuVar25 = &PTR_PTR_1126e1830;
    }
    else {
      func_0x00010b87f3b0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c11b9e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar2);
      bVar1 = puVar3 != (undefined8 *)0x0;
      ppuVar25 = &PTR_PTR_1126e1828;
      if (!bVar1) {
        ppuVar25 = &PTR_PTR_1126e1830;
      }
    }
    puVar4 = *ppuVar25;
    _objc_alloc();
    uVar26 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar27 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar28 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar29 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar26,uVar27,uVar28,uVar29);
    func_0x00010c219b60();
    func_0x00010befbb60(puVar22);
    puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar22;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    puStack_b0 = puVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar22;
    func_0x00010bf1ff80(puVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    puStack_a8 = puVar8;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar22;
    func_0x00010c08e400(puVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    puStack_a0 = puVar11;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar22;
    func_0x00010c1408a0(puVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar18);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release();
    if (!bVar1) {
      puVar5 = PTR_PTR_1126e1838;
      _objc_alloc();
      func_0x00010c013de0(uVar26,uVar27,uVar28,uVar29);
      func_0x00010c219b60();
      func_0x00010befbb60(puVar22);
      puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar6 = puVar5;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar22;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      puStack_d0 = puVar7;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar22;
      func_0x00010c08e400(puVar22);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar5;
      puStack_c8 = puVar9;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar22;
      func_0x00010c1408a0(puVar22);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar5;
      puStack_c0 = puVar12;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010bf49420(0x4020000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_b8 = puVar15;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar18);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar12);
      _objc_release(puVar10);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar3);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar2);
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126e1840;
      _objc_alloc();
      func_0x00010c013de0(uVar26,uVar27,uVar28,uVar29);
      func_0x00010c219b60();
      func_0x00010befbb60(puVar22);
      puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar7 = puVar6;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar22;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar6;
      puStack_f0 = puVar8;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar22;
      func_0x00010c08e400(puVar22);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar6;
      puStack_e8 = puVar11;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar22;
      func_0x00010c1408a0(puVar22);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar12;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar6;
      puStack_e0 = puVar14;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x00010bf49420(0x4020000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_d8 = puVar16;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar18);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar10);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar3);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar2);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release();
    }
    if (param_4 == 0) {
      *(undefined1 *)((long)puVar22 + (long)_DAT_112794f28) = 0;
    }
    else {
      func_0x00010b87f3b0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar5;
      func_0x00010c11ba20();
      _objc_retainAutoreleasedReturnValue();
      if (puVar18 == (undefined *)0x0) {
        *(undefined1 *)((long)puVar22 + (long)_DAT_112794f28) = 0;
      }
      else {
        puVar6 = puVar18;
        func_0x00010b87f3b0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c11ba60();
        _objc_retainAutoreleasedReturnValue();
        *(bool *)((long)puVar22 + (long)_DAT_112794f28) = puVar7 != (undefined *)0x0;
        _objc_release();
        _objc_release(puVar6);
      }
      _objc_release(puVar18);
      _objc_release(puVar5);
    }
    puVar2 = (undefined8 *)((long)puVar22 + (long)_DAT_112794f2c);
    uVar19 = uRam00000001138466f0;
    func_0x000107c30a90();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010bf04c80();
    uVar21 = uVar19;
    func_0x00010bf04c80();
    if (uVar20 - 0x13 < 2) {
      uVar26 = 0x404b800000000000;
      uStack_198 = 0x404b800000000000;
      puStack_1a0 = (undefined *)0x4056a00000000000;
      if ((uVar21 < 0x22) && ((1L << (uVar21 & 0x3f) & 0x3f4580000U) != 0)) {
        uVar23 = 0;
      }
      else {
        uVar23 = 1;
      }
      uVar27 = 2;
    }
    else {
      uVar26 = 0x403b800000000000;
      uStack_198 = 0x405e000000000000;
      puStack_1a0 = (undefined *)0x404cc00000000000;
      if ((uVar21 < 0x22) && ((1L << (uVar21 & 0x3f) & 0x3f4580000U) != 0)) {
        uVar23 = 0;
      }
      else {
        uVar23 = 1;
      }
      uVar27 = 5;
    }
    _objc_release(uVar19);
    puVar2[1] = uStack_198;
    *puVar2 = puStack_1a0;
    puVar2[2] = uVar26;
    puVar2[3] = uVar27;
    *(undefined1 *)(puVar2 + 4) = uVar23;
    *(undefined4 *)((long)puVar2 + 0x21) = 0;
    *(undefined4 *)((long)puVar2 + 0x24) = 0;
    puVar18 = PTR_PTR_1126e1848;
    _objc_alloc();
    func_0x00010c0462e0();
    uVar26 = *(undefined8 *)((long)puVar22 + (long)_DAT_112794f30);
    *(undefined **)((long)puVar22 + (long)_DAT_112794f30) = puVar18;
    _objc_release(uVar26);
    _objc_retain(puVar18);
    func_0x00010c219b60(puVar18);
    func_0x00010befbb60(puVar22);
    if (*(char *)(puVar2 + 4) == '\x01') {
      puStack_1a0 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar5 = puStack_1a0;
      func_0x00010b87f3b0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c11b8e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60();
      _objc_release(puVar6);
      _objc_release(puVar5);
      func_0x00010c219b60(puStack_1a0);
      func_0x00010befbb60(puVar22);
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar6 = puStack_1a0;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar22;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puStack_1a0;
      puStack_108 = puVar7;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar22;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf49480(0xc01c000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puStack_1a0;
      puStack_100 = puVar9;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar22;
      func_0x00010c274200(puVar22);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf49480(0x4024000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar12;
      func_0x00010c14d8a0(0x437a0000);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_f8 = puVar14;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar5);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar12);
      _objc_release(puVar13);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar3);
      _objc_release(puVar6);
      lVar24 = (long)_DAT_112794f34;
      _objc_retain(puStack_1a0);
      uVar26 = *(undefined8 *)((long)puVar22 + lVar24);
      *(undefined **)((long)puVar22 + lVar24) = puStack_1a0;
      _objc_release(uVar26);
    }
    else {
      puStack_1a0 = (undefined *)0x0;
    }
    puVar5 = puVar18;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar22;
    func_0x00010c274200(puVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf49480(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar5 = puVar18;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar22;
    func_0x00010bf1ff80(puVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf49480(-(double)puVar2[2]);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar5 = puVar18;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar22;
    func_0x00010bf1ff80(puVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bf493c0(0xc05e000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar9 = puVar18;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar22;
    func_0x00010bf34860(puVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar18;
    puStack_130 = puVar11;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf49420(*puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar18;
    puStack_128 = puVar14;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar2[1];
    puVar16 = puVar15;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_120 = puVar16;
    puStack_118 = puVar6;
    puStack_110 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar5);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar3);
    _objc_release(puVar9);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_140 = puVar6;
    puStack_138 = puVar7;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)((long)puVar22 + (long)_DAT_112794f38);
    *(undefined **)((long)puVar22 + (long)_DAT_112794f38) = puVar5;
    _objc_release(uVar26);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_148 = puVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)((long)puVar22 + (long)_DAT_112794f3c);
    *(undefined **)((long)puVar22 + (long)_DAT_112794f3c) = puVar5;
    _objc_release(uVar26);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puStack_1a0);
    _objc_release(puVar18);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    *(undefined8 *)(puVar4 + _DAT_112794f24) = param_1;
    puVar22 = *(undefined8 **)(puVar4 + _DAT_112794f30);
                    /* WARNING: Could not recover jumptable at 0x00010c225b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar22,PTR_s_setWinkThreshold__112667100);
    return puVar22;
  }
  return puVar22;
}



/* Entry: 10b864a40; end: 10b864a5b; -[SIGPullToRefreshView setWinkThreshold:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b864a40(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112794f24) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c225b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + _DAT_112794f30),PTR_s_setWinkThreshold__112667100);
  return;
}



/* Entry: 10b864a5c; end: 10b864a77; -[SIGPullToRefreshView setReliableShakeAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b864a5c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112794f40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1e9c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794f30),PTR_s_setReliableShakeAnimation__112658128);
  return;
}



/* Entry: 10b864a78; end: 10b864b33; -[SIGPullToRefreshView setHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b864a78(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (*(double *)(param_2 + _DAT_112794f44) != param_1) {
    *(double *)(param_2 + _DAT_112794f44) = param_1;
    func_0x00010c069fa0();
    lVar1 = param_2;
    func_0x00010c262ca0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(lVar1);
    func_0x00010c1d0bc0(param_1,*(undefined8 *)(param_2 + _DAT_112794f30));
    dVar2 = param_1 * 0.125;
    if (10.0 <= param_1) {
      dVar2 = 1.0;
    }
    func_0x00010c1677c0(dVar2,param_2);
    lVar1 = (long)_DAT_112794f48;
    if (*(double *)(param_2 + lVar1) < param_1) {
      func_0x00010be93b80(param_2);
    }
    *(double *)(param_2 + lVar1) = param_1;
  }
  return;
}



/* Entry: 10b864b34; end: 10b864d9b; -[SIGPullToRefreshView setCustomGhostImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10b864b34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lVar7 = (long)_DAT_112794f4c;
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_3 + lVar7);
  *(long *)(param_3 + lVar7) = param_5;
  _objc_release(uVar1);
  lVar8 = (long)_DAT_112794f50;
  lVar7 = *(long *)(param_3 + lVar8);
  if (param_5 == 0) {
    func_0x00010c1a7f60(lVar7,param_4,1);
    func_0x00010c1a9f00(*(undefined8 *)(param_3 + lVar8),param_4,0);
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_3 + _DAT_112794f30));
    uVar1 = *(undefined8 *)(param_3 + _DAT_112794f34);
    uVar9 = 0x3ff0000000000000;
  }
  else {
    if (lVar7 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_opt_new();
      uVar1 = *(undefined8 *)(param_3 + lVar8);
      *(undefined **)(param_3 + lVar8) = puVar2;
      _objc_release(uVar1);
      func_0x00010c219b60(*(undefined8 *)(param_3 + lVar8),param_4,0);
      func_0x00010c182220(*(undefined8 *)(param_3 + lVar8),param_4,6);
      func_0x00010befbb60(param_3,param_4,*(undefined8 *)(param_3 + lVar8));
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar3 = *(undefined8 *)(param_3 + lVar8);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010bf34860(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010bf493a0(uVar3,param_4,lVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_3 + lVar8);
      uStack_78 = uVar1;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010bf1ff80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010bf493a0(uVar4,param_4,lVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar9;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_78,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2,param_4,puVar6);
      _objc_release(puVar6);
      _objc_release(uVar9);
      _objc_release(lVar5);
      _objc_release(uVar4);
      _objc_release(uVar1);
      _objc_release(lVar7);
      _objc_release(uVar3);
      lVar7 = *(long *)(param_3 + lVar8);
    }
    func_0x00010c1a9f00(lVar7,param_4,param_5);
    func_0x00010c1a7f60(*(undefined8 *)(param_3 + lVar8),param_4,0);
    func_0x00010c1677c0(0,*(undefined8 *)(param_3 + _DAT_112794f30));
    uVar1 = *(undefined8 *)(param_3 + _DAT_112794f34);
    uVar9 = 0;
  }
  func_0x00010c1677c0(uVar9,uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = uVar9;
    return auVar10;
  }
  ___stack_chk_fail();
  auVar11._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar11._8_8_ = *(undefined8 *)(param_5 + _DAT_112794f44);
  return auVar11;
}



/* Entry: 10b864d9c; end: 10b864db7; -[SIGPullToRefreshView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b864d9c(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar1._8_8_ = *(undefined8 *)(param_1 + _DAT_112794f44);
  return auVar1;
}



/* Entry: 10b864db8; end: 10b864e43; -[SIGPullToRefreshView _resetSmiling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b864db8(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794f30;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c11efc0();
  if (iVar1 != 0) {
    func_0x00010c1e6ee0(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112794f34));
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
               *(undefined8 *)(param_1 + _DAT_112794f38));
    return;
  }
  return;
}



/* Entry: 10b864e44; end: 10b864eb7; -[SIGPullToRefreshView userDidRelease] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10b864e44(long param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(param_1 + _DAT_112794f44);
  dVar2 = *(double *)(param_1 + _DAT_112794f24);
  if (dVar2 <= dVar1) {
    func_0x00010be748a0();
    param_1 = param_1 + _DAT_112794f54;
    _objc_loadWeakRetained(param_1);
    func_0x00010c11bac0();
    _objc_release(param_1);
  }
  return dVar2 <= dVar1;
}



/* Entry: 10b864eb8; end: 10b864ebb; -[SIGPullToRefreshView triggerReleaseAnimation] */

void FUN_10b864eb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be748b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__playRainbowFlyaway_11257abc8);
  return;
}



/* Entry: 10b864ebc; end: 10b864f4b; -[SIGPullToRefreshView _playRainbowFlyaway] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b864ebc(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if ((*(byte *)(param_1 + _DAT_112794f28) & 1) == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112794f34),param_2,1);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10b864f4c;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010bf03400(0x3fd999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48);
  }
  return;
}



/* Entry: 10b864f4c; end: 10b864fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b864f4c(long param_1,undefined8 param_2)

{
  func_0x00010c1e6ee0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794f30),param_2,1);
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
                    /* WARNING: Could not recover jumptable at 0x00010c08d150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutSubviews_112600e60);
  return;
}



/* Entry: 10b864fbc; end: 10b864fdb; -[SIGPullToRefreshView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b864fbc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112794f54);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b864fdc; end: 10b864fef; -[SIGPullToRefreshView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b864fdc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112794f54,param_3);
  return;
}



/* Entry: 10b864ff0; end: 10b864fff; -[SIGPullToRefreshView height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b864ff0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794f44);
}



/* Entry: 10b865000; end: 10b86500f; -[SIGPullToRefreshView winkThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b865000(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794f24);
}



/* Entry: 10b865010; end: 10b86501f; -[SIGPullToRefreshView customGhostImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b865010(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794f4c);
}



/* Entry: 10b865020; end: 10b86502f; -[SIGPullToRefreshView reliableShakeAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b865020(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794f40);
}



/* Entry: 10b865030; end: 10b8650bb; -[SIGPullToRefreshView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b865030(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794f4c,0);
  _objc_destroyWeak(param_1 + _DAT_112794f54);
  _objc_storeStrong(param_1 + _DAT_112794f3c,0);
  _objc_storeStrong(param_1 + _DAT_112794f38,0);
  _objc_storeStrong(param_1 + _DAT_112794f50,0);
  _objc_storeStrong(param_1 + _DAT_112794f34,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794f30,0);
  return;
}



/* Entry: 10b8650bc; end: 10b8653e3; -[SIGPullToRefreshGhostView initWithShouldUseTheme:ghostViewConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b8650bc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &uStack_70;
  puStack_68 = PTR_PTR_11270b5f8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(0,0,*param_4,param_4[1],&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar3 + (long)_DAT_112794f58) = param_3;
    puVar1 = (undefined8 *)((long)puVar3 + (long)_DAT_112794f5c);
    uVar8 = param_4[1];
    uVar7 = *param_4;
    uVar10 = param_4[3];
    uVar9 = param_4[2];
    puVar1[4] = param_4[4];
    puVar1[1] = uVar8;
    *puVar1 = uVar7;
    puVar1[3] = uVar10;
    puVar1[2] = uVar9;
    cVar2 = *(char *)((long)puVar3 + (long)_DAT_112794f58);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar5 = puVar4;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    if (cVar2 == '\x01') {
      puVar6 = puVar5;
      func_0x00010c11ba20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60();
      uVar7 = *(undefined8 *)((long)puVar3 + (long)_DAT_112794f60);
      *(undefined **)((long)puVar3 + (long)_DAT_112794f60) = puVar4;
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar5 = puVar4;
      func_0x00010b87f3b0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c11ba60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar6 = puVar5;
      func_0x00010c11b900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60();
      uVar7 = *(undefined8 *)((long)puVar3 + (long)_DAT_112794f60);
      *(undefined **)((long)puVar3 + (long)_DAT_112794f60) = puVar4;
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar5 = puVar4;
      func_0x00010b87f3b0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c11b960();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c01bf60();
    uVar7 = *(undefined8 *)((long)puVar3 + (long)_DAT_112794f64);
    *(undefined **)((long)puVar3 + (long)_DAT_112794f64) = puVar4;
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar5 = puVar4;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c11b940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    uVar7 = *(undefined8 *)((long)puVar3 + (long)_DAT_112794f68);
    *(undefined **)((long)puVar3 + (long)_DAT_112794f68) = puVar4;
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar5 = puVar4;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c11b920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    uVar7 = *(undefined8 *)((long)puVar3 + (long)_DAT_112794f6c);
    *(undefined **)((long)puVar3 + (long)_DAT_112794f6c) = puVar4;
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010bdc6420(puVar3);
    func_0x00010bdc6420(puVar3);
    func_0x00010bdc6420(puVar3);
    func_0x00010bdc6420(puVar3);
    puVar4 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_1126dbbe0;
    _objc_alloc();
    func_0x00010c04ea80();
    uVar7 = *(undefined8 *)((long)puVar3 + (long)_DAT_112794f70);
    *(undefined **)((long)puVar3 + (long)_DAT_112794f70) = puVar4;
    _objc_release(uVar7);
    puVar4 = PTR__OBJC_CLASS___UINotificationFeedbackGenerator_1126d0928;
    _objc_alloc_init();
    uVar7 = *(undefined8 *)((long)puVar3 + (long)_DAT_112794f74);
    *(undefined **)((long)puVar3 + (long)_DAT_112794f74) = puVar4;
    _objc_release(uVar7);
    *(undefined8 *)((long)puVar3 + (long)_DAT_112794f78) = 0x405cc00000000000;
  }
  return (undefined1 *)puVar3;
}



/* Entry: 10b8653e4; end: 10b8653f7; -[SIGPullToRefreshGhostView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b8653e4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112794f5c);
}



/* Entry: 10b8653f8; end: 10b865663; -[SIGPullToRefreshGhostView _addChild:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8653f8(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *(undefined8 *)(param_2 + _DAT_112794f5c + 0x18);
  _objc_retain(param_4);
  func_0x00010c182220(param_4,param_3,uVar14);
  func_0x00010c219b60(param_4,param_3,0);
  func_0x00010befbb60(param_2,param_3,param_4);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0(lVar2,param_3,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  lStack_88 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010bf1ff80(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf493a0(lVar5,param_3,lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_4;
  lStack_80 = lVar7;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010c08e400(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010bf493a0(lVar8,param_3,lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_4;
  lStack_78 = lVar10;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1408a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf493a0(lVar11,param_3,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = lVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar13);
  _objc_release(puVar13);
  _objc_release(lVar12);
  _objc_release(param_2);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)(lVar2 + _DAT_112794f7c) & 1) == 0) {
    if (*(double *)(lVar2 + _DAT_112794f78) <= param_1) {
      if (263.0 <= param_1) {
        uVar14 = 2;
        if (316.0 <= param_1) {
          uVar14 = 3;
        }
        if (*(char *)(lVar2 + _DAT_112794f58) != '\0') {
          uVar14 = 1;
        }
      }
      else {
        uVar14 = 1;
      }
    }
    else {
      uVar14 = 0;
    }
    func_0x00010bea7e40(lVar2,param_3,uVar14);
    *(double *)(lVar2 + _DAT_112794f80) = param_1;
  }
  return;
}



/* Entry: 10b865664; end: 10b86570f; -[SIGPullToRefreshGhostView setOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b865664(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_2 + _DAT_112794f7c) & 1) == 0) {
    if (*(double *)(param_2 + _DAT_112794f78) <= param_1) {
      if (263.0 <= param_1) {
        uVar1 = 2;
        if (316.0 <= param_1) {
          uVar1 = 3;
        }
        if (*(char *)(param_2 + _DAT_112794f58) != '\0') {
          uVar1 = 1;
        }
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
    func_0x00010bea7e40(param_2,param_3,uVar1);
    *(double *)(param_2 + _DAT_112794f80) = param_1;
  }
  return;
}



/* Entry: 10b865710; end: 10b86572b; -[SIGPullToRefreshGhostView setRainbow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b865710(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if ((param_3 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112794f84);
  }
  else {
    uVar1 = 4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea7e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setState__112587938,uVar1);
  return;
}



/* Entry: 10b86572c; end: 10b865a3f; -[SIGPullToRefreshGhostView _setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86572c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  if (param_3 == 1) {
    lVar5 = (long)_DAT_112794f84;
    lVar3 = *(long *)(param_1 + lVar5);
    *(undefined1 *)(param_1 + _DAT_112794f7c) = 0;
    *(undefined8 *)(param_1 + lVar5) = 1;
    if (lVar3 != 1) {
LAB_10b8658b4:
      func_0x00010bfe9da0(*(undefined8 *)(param_1 + _DAT_112794f70));
    }
  }
  else {
    if (param_3 == 3) {
      lVar5 = (long)_DAT_112794f84;
      lVar3 = *(long *)(param_1 + lVar5);
      *(undefined1 *)(param_1 + _DAT_112794f7c) = 0;
      *(undefined8 *)(param_1 + lVar5) = 3;
      if (lVar3 != 3) {
        func_0x00010c0dc440(*(undefined8 *)(param_1 + _DAT_112794f74),param_2,2);
        _objc_initWeak(auStack_38,param_1);
        _CGAffineTransformMakeTranslation(&uStack_68,0xbff0000000000000,0);
        uStack_98 = uStack_60;
        uStack_a0 = uStack_68;
        uStack_88 = uStack_50;
        uStack_90 = uStack_58;
        uStack_78 = uStack_40;
        uStack_80 = uStack_48;
        func_0x00010c219960(param_1);
        puVar2 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
        if (*(char *)(param_1 + _DAT_112794f88) == '\x01') {
          *(undefined1 *)(param_1 + _DAT_112794f8c) = 1;
          puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
          puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c0 = 0xc2000000;
          pcStack_b8 = FUN_10b865a40;
          puStack_b0 = &UNK_1108434b0;
          puVar4 = auStack_a8;
          _objc_copyWeak(puVar4,auStack_38);
          func_0x00010bf03440(0x3fa999999999999a,0,puVar2);
        }
        else {
          puVar4 = auStack_d0;
          _objc_copyWeak(puVar4,auStack_38);
          func_0x00010c142dc0(0x3fa999999999999a,0);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = *(undefined8 *)(param_1 + _DAT_112794f90);
          *(undefined **)(param_1 + _DAT_112794f90) = puVar2;
          _objc_release(uVar1);
        }
        _objc_destroyWeak(puVar4);
        _objc_destroyWeak(auStack_38);
      }
      goto LAB_10b86595c;
    }
    if (param_3 == 4) {
      *(undefined1 *)(param_1 + _DAT_112794f7c) = 1;
      goto LAB_10b8658b4;
    }
    *(undefined1 *)(param_1 + _DAT_112794f7c) = 0;
    *(long *)(param_1 + _DAT_112794f84) = param_3;
  }
  lVar5 = (long)_DAT_112794f8c;
  if (*(char *)(param_1 + lVar5) == '\x01') {
    lVar3 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b200();
    _objc_release(lVar3);
    *(undefined1 *)(param_1 + lVar5) = 0;
  }
  lVar5 = (long)_DAT_112794f90;
  func_0x00010c2559c0(*(undefined8 *)(param_1 + lVar5));
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar1);
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(param_1);
LAB_10b86595c:
  func_0x00010bea24c0(param_1);
  return;
}



/* Entry: 10b865a40; end: 10b865aff;  */

void FUN_10b865a40(long param_1)

{
  undefined1 auStack_50 [48];
  
  _CGAffineTransformMakeTranslation(auStack_50,0x3ff0000000000000,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c219960();
  _objc_release(param_1);
  return;
}



/* Entry: 10b865b00; end: 10b865bdb; -[SIGPullToRefreshGhostView _setBodyForState:] */

/* WARNING: Possible PIC construction at 0x00010b865b34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b865b5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b865b38) */
/* WARNING: Removing unreachable block (ram,0x00010b865b60) */
/* WARNING: Removing unreachable block (ram,0x00010b865b9c) */
/* WARNING: Removing unreachable block (ram,0x00010b865ba0) */
/* WARNING: Removing unreachable block (ram,0x00010b865b7c) */
/* WARNING: Removing unreachable block (ram,0x00010b865b8c) */
/* WARNING: Removing unreachable block (ram,0x00010b865bc8) */
/* WARNING: Removing unreachable block (ram,0x00010b865b94) */
/* WARNING: Removing unreachable block (ram,0x00010b865bac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b865b00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794f60),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 10b865bdc; end: 10b865c2b; -[SIGPullToRefreshGhostView willMoveToSuperview:] */

void FUN_10b865bdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b5f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_willMoveToSuperview__112528100);
  if (param_3 == 0) {
    func_0x00010bec3920(param_1);
  }
  return;
}


