/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062c1b00; end: 1062c1cdf; -[SCContextSpotlightHeroContextLabelView _generateBitmojisWithGroupAvatarParticipants:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c1b00(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c2ec0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c004820();
  puVar2 = PTR_PTR_1126c93b0;
  func_0x00010c0f4b40(PTR_PTR_1126c93b0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x20);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c96b8;
  func_0x00010c246860(0,PTR_PTR_1126c96b8,param_2,puVar3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c93a8;
  _objc_alloc(PTR_PTR_1126c93a8);
  func_0x00010c0509a0();
  puVar6 = PTR_PTR_1126c93b8;
  _objc_alloc(PTR_PTR_1126c93b8);
  puVar7 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112744f78;
  func_0x00010c001fc0(puVar6,param_2,puVar7,0,puVar1,0,*(undefined8 *)(param_1 + lVar8),0);
  _objc_release(puVar7);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112744f14),param_2,puVar6);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8),param_2,0);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062c1ce0; end: 1062c1eb7; -[SCContextSpotlightHeroContextLabelView _textToShowWithCalloutText:nameToDisplay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1062c1ce0(double param_1,undefined8 param_2,double param_3,long param_4,
                    undefined8 param_5,ulong param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  if ((*(ulong *)(param_4 + _DAT_112744f08) & 0xfffffffffffffffe) == 4) {
    uStack_78 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar3 = puVar2;
    func_0x00010052bbec();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_5,&puStack_70,&uStack_78,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010beeae60(param_4);
    dVar15 = param_1;
    func_0x00010c23d660(puVar2,param_5,puVar5);
    if (param_1 <= dVar15) {
      func_0x00010be18a60(param_1,param_4,param_5,param_7,param_6,puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_5,param_6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
    }
    else {
      _objc_retain(puVar2);
      param_1 = dVar15;
    }
    _objc_release(puVar5);
  }
  else {
    _objc_retain(puVar2);
  }
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar2);
  uVar7 = param_6;
  func_0x00010beb5d80();
  dVar15 = 0.0;
  if ((int)uVar7 != 0) {
    func_0x00010c0699c0(*(undefined8 *)(param_6 + (long)_DAT_112744f94));
    dVar15 = param_1;
  }
  uVar7 = param_6;
  func_0x00010beb6120();
  lVar13 = (long)_DAT_112744f90;
  uVar8 = *(ulong *)(param_6 + lVar13);
  func_0x00010c074c20();
  dVar16 = 0.0;
  if ((uVar8 & 1) == 0) {
    func_0x00010c0699c0(*(undefined8 *)(param_6 + lVar13));
    dVar16 = param_1;
  }
  dVar18 = 16.0;
  if ((int)uVar7 == 0) {
    dVar18 = 0.0;
  }
  lVar14 = (long)_DAT_112744f8c;
  iVar1 = (int)*(undefined8 *)(param_6 + lVar14);
  func_0x00010c074c20();
  dVar17 = 0.0;
  if (iVar1 == 0) {
    dVar17 = 1.5;
  }
  lVar9 = *(long *)(param_6 + (long)_DAT_112744f70);
  func_0x00010c261580(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf529e0();
  uVar7 = param_6;
  func_0x00010beb5d80(param_6);
  uVar8 = param_6;
  func_0x00010beb6120(param_6);
  uVar11 = *(ulong *)(param_6 + lVar13);
  func_0x00010c074c20(uVar11);
  uVar12 = *(ulong *)(param_6 + lVar14);
  func_0x00010c074c20(uVar12);
  _objc_release(lVar9);
  return (((((param_3 * 0.8 - dVar15) - dVar18) - dVar16) - dVar17) + -20.0 + -14.0) -
         (double)(long)((((lVar10 + (uVar7 & 0xffffffff) + (uVar8 & 0xffffffff)) -
                         (uVar11 & 0xffffffff)) - (uVar12 & 0xffffffff)) * 4 + -0xc);
}



/* Entry: 1062c1eb8; end: 1062c204f; -[SCContextSpotlightHeroContextLabelView _widthForText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1062c1eb8(double param_1,undefined8 param_2,double param_3,ulong param_4)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar2);
  uVar3 = param_4;
  func_0x00010beb5d80();
  dVar12 = 0.0;
  if ((int)uVar3 != 0) {
    func_0x00010c0699c0(*(undefined8 *)(param_4 + (long)_DAT_112744f94));
    dVar12 = param_1;
  }
  uVar3 = param_4;
  func_0x00010beb6120();
  lVar9 = (long)_DAT_112744f90;
  uVar4 = *(ulong *)(param_4 + lVar9);
  func_0x00010c074c20();
  dVar11 = 0.0;
  if ((uVar4 & 1) == 0) {
    func_0x00010c0699c0(*(undefined8 *)(param_4 + lVar9));
    dVar11 = param_1;
  }
  dVar14 = 16.0;
  if ((int)uVar3 == 0) {
    dVar14 = 0.0;
  }
  lVar10 = (long)_DAT_112744f8c;
  iVar1 = (int)*(undefined8 *)(param_4 + lVar10);
  func_0x00010c074c20();
  dVar13 = 0.0;
  if (iVar1 == 0) {
    dVar13 = 1.5;
  }
  lVar5 = *(long *)(param_4 + (long)_DAT_112744f70);
  func_0x00010c261580(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf529e0();
  uVar3 = param_4;
  func_0x00010beb5d80(param_4);
  uVar4 = param_4;
  func_0x00010beb6120(param_4);
  uVar7 = *(ulong *)(param_4 + lVar9);
  func_0x00010c074c20(uVar7);
  uVar8 = *(ulong *)(param_4 + lVar10);
  func_0x00010c074c20(uVar8);
  _objc_release(lVar5);
  return (((((param_3 * 0.8 - dVar12) - dVar14) - dVar11) - dVar13) + -20.0 + -14.0) -
         (double)(long)((((lVar6 + (uVar3 & 0xffffffff) + (uVar4 & 0xffffffff)) -
                         (uVar7 & 0xffffffff)) - (uVar8 & 0xffffffff)) * 4 + -0xc);
}



/* Entry: 1062c2050; end: 1062c225b; -[SCContextSpotlightHeroContextLabelView _formatNameToFit:calloutText:widthForText:attributes:] */

void FUN_1062c2050(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  
  dVar5 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010c08fa60();
  if (uVar1 < 2) {
    _objc_retain(param_4);
    uVar1 = param_4;
  }
  else {
    uVar1 = param_4;
    func_0x00010c08fa60(param_4);
    uVar2 = param_4;
    func_0x00010c260c80(param_4,param_3,0,uVar1 - 1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar1 = uVar2;
    func_0x00010c25ce40(uVar2,param_3,&PTR____CFConstantStringClassReference_110dde298);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c23d660(puVar3,param_3,param_6);
    param_4 = uVar2;
    while ((param_1 < dVar5 && (uVar1 = param_4, func_0x00010c08fa60(), 1 < uVar1))) {
      uVar1 = param_4;
      func_0x00010c08fa60(param_4);
      uVar2 = param_4;
      func_0x00010c260c80(param_4,param_3,0,uVar1 - 1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar1 = uVar2;
      func_0x00010c25ce40(uVar2,param_3,&PTR____CFConstantStringClassReference_110dde298);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4,param_3,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(uVar1);
      func_0x00010c23d660(puVar4,param_3,param_6);
      param_4 = uVar2;
      puVar3 = puVar4;
    }
    uVar1 = param_4;
    func_0x00010c25ce40(param_4,param_3,&PTR____CFConstantStringClassReference_110dde298);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062c225c; end: 1062c230b; -[SCContextSpotlightHeroContextLabelView _shouldShowChevronView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1062c225c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar3 = (ulong)(1 < *(long *)(param_1 + _DAT_112744f34));
  if (*(long *)(param_1 + _DAT_112744f34) == 1) {
    if (*(long *)(param_1 + _DAT_112744f08) == 3) {
      uVar1 = *(ulong *)(param_1 + _DAT_112744f50);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126c9500;
      func_0x00010c24b440(PTR_PTR_1126c9500);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf1f320(uVar1,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(uVar1);
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1062c230c; end: 1062c2363; -[SCContextSpotlightHeroContextLabelView _shouldShowIconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062c230c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = 1;
  uVar1 = *(long *)(param_1 + _DAT_112744f08) + 1;
  if (uVar1 < 0x14) {
    if ((1L << (uVar1 & 0x3f) & 0x80065U) == 0) {
      if (uVar1 == 1) {
        uVar2 = *(undefined8 *)(param_1 + _DAT_112744f50);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b1270;
        func_0x00010c134480(PTR_PTR_1126b1270);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010bf1f320(uVar2,param_2,puVar3);
        _objc_release(puVar3);
        _objc_release(uVar2);
        return uVar4;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* Entry: 1062c2364; end: 1062c2477; -[SCContextSpotlightHeroContextLabelView _iconImageForHeroContextCardType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c2364(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar3 = 0xa8;
  puVar4 = (undefined *)0x0;
  switch(*(undefined8 *)(param_1 + _DAT_112744f08)) {
  case 0:
    func_0x0001062cd220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    goto code_r0x0001062c2464;
  case 2:
    uVar3 = 0x22;
    break;
  case 3:
    uVar3 = 0x77;
    break;
  case 6:
    uVar3 = 0x1d;
    break;
  case 7:
  case 8:
  case 9:
    uVar3 = 0x192;
    break;
  case 10:
    uVar3 = 0x1a6;
    break;
  case 0xb:
  case 0xd:
    uVar3 = 0x105;
    break;
  case 0xe:
    uVar3 = 0x48;
    break;
  case 0xf:
    uVar3 = 0x196;
    break;
  case 0x10:
    uVar3 = 0x72;
    break;
  case 0x11:
    uVar3 = 0x294;
    break;
  case 0xffffffffffffffff:
  case 1:
  case 4:
  case 5:
  case 0x12:
    goto code_r0x0001062c2464;
  }
  func_0x00010bde1ee0();
  func_0x00010c23ba80(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4030000000000000,0x4030000000000000,puVar2,param_2,uVar3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = puVar2;
code_r0x0001062c2464:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1062c2478; end: 1062c24ab; -[SCContextSpotlightHeroContextLabelView _shouldShowLeadingIconView] */

bool FUN_1062c2478(long param_1)

{
  func_0x00010be49d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1062c24ac; end: 1062c25ab; -[SCContextSpotlightHeroContextLabelView _leadingIconImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c24ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (*(long *)(param_1 + _DAT_112744f08) - 10U < 2) {
    func_0x00010bee73e0();
    puVar3 = PTR_PTR_1126b0c40;
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if ((int)param_1 == 0) {
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 0x4030000000000000;
      uVar5 = 0x4030000000000000;
    }
    else {
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 0x4028000000000000;
      uVar5 = 0x4028000000000000;
    }
    uVar2 = 0x2d;
  }
  else {
    if (*(long *)(param_1 + _DAT_112744f08) != 5) {
      puVar3 = (undefined *)0x0;
      goto LAB_1062c259c;
    }
    func_0x00010bde1ee0();
    func_0x00010c23ba80(puVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x4030000000000000;
    uVar5 = 0x4030000000000000;
    uVar2 = 0x3e;
  }
  func_0x00010bfe7aa0(uVar4,uVar5,puVar3,param_2,uVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
LAB_1062c259c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1062c25ac; end: 1062c25bb; -[SCContextSpotlightHeroContextLabelView hasResolvedRenderableText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1062c25ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112744f9c);
}



/* Entry: 1062c25bc; end: 1062c25cb; -[SCContextSpotlightHeroContextLabelView onRenderableTextResolved] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062c25bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744fa4);
}



/* Entry: 1062c25cc; end: 1062c25d7; -[SCContextSpotlightHeroContextLabelView setOnRenderableTextResolved:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c25cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1062c25d8; end: 1062c27f7; -[SCContextSpotlightHeroContextLabelView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c25d8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744fa4,0);
  _objc_storeStrong(param_1 + _DAT_112744f68,0);
  _objc_storeStrong(param_1 + _DAT_112744f54,0);
  _objc_storeStrong(param_1 + _DAT_112744f50,0);
  _objc_storeStrong(param_1 + _DAT_112744f58,0);
  _objc_storeStrong(param_1 + _DAT_112744f4c,0);
  _objc_storeStrong(param_1 + _DAT_112744f48,0);
  _objc_storeStrong(param_1 + _DAT_112744f44,0);
  _objc_storeStrong(param_1 + _DAT_112744f40,0);
  _objc_storeStrong(param_1 + _DAT_112744f3c,0);
  _objc_storeStrong(param_1 + _DAT_112744f38,0);
  _objc_storeStrong(param_1 + _DAT_112744f84,0);
  _objc_storeStrong(param_1 + _DAT_112744f30,0);
  _objc_storeStrong(param_1 + _DAT_112744fa0,0);
  _objc_storeStrong(param_1 + _DAT_112744f80,0);
  _objc_storeStrong(param_1 + _DAT_112744f2c,0);
  _objc_storeStrong(param_1 + _DAT_112744f1c,0);
  _objc_storeStrong(param_1 + _DAT_112744f20,0);
  _objc_storeStrong(param_1 + _DAT_112744f7c,0);
  _objc_storeStrong(param_1 + _DAT_112744f74,0);
  _objc_storeStrong(param_1 + _DAT_112744f94,0);
  _objc_storeStrong(param_1 + _DAT_112744f8c,0);
  _objc_storeStrong(param_1 + _DAT_112744f70,0);
  _objc_storeStrong(param_1 + _DAT_112744f14,0);
  _objc_storeStrong(param_1 + _DAT_112744f78,0);
  _objc_storeStrong(param_1 + _DAT_112744f18,0);
  _objc_storeStrong(param_1 + _DAT_112744f10,0);
  _objc_storeStrong(param_1 + _DAT_112744f0c,0);
  _objc_storeStrong(param_1 + _DAT_112744f98,0);
  _objc_storeStrong(param_1 + _DAT_112744f64,0);
  _objc_storeStrong(param_1 + _DAT_112744f90,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744f88,0);
  return;
}



/* Entry: 1062c27f8; end: 1062c2847; -[SCContextSpotlightOneTapToShareView init] */

undefined1 * FUN_1062c27f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0be8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062c2848; end: 1062c28cb; -[SCContextSpotlightOneTapToShareView layoutSubviews] */

void FUN_1062c2848(undefined8 param_1)

{
  undefined8 uVar1;
  double in_d3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0be8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(in_d3 * 0.5);
  _objc_release(uVar1);
  func_0x00010be17e40(param_1);
  return;
}



/* Entry: 1062c28cc; end: 1062c2983; -[SCContextSpotlightOneTapToShareView configureButtonWithImage:title:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c28cc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744fa8);
  *(undefined8 *)(param_1 + _DAT_112744fa8) = 0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744fac);
  *(undefined8 *)(param_1 + _DAT_112744fac) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112744fb0;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,param_3 == 0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744fb4),param_2,1);
  func_0x00010bde5d20(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062c2984; end: 1062c2a1b; -[SCContextSpotlightOneTapToShareView configureButtonWithGroupAvatarAndTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c2984(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744fa8);
  *(undefined8 *)(param_1 + _DAT_112744fa8) = 0;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744fac);
  *(undefined8 *)(param_1 + _DAT_112744fac) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112744fb0;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744fb4),param_2,0);
  func_0x00010bde5d20(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062c2a1c; end: 1062c2ae3; -[SCContextSpotlightOneTapToShareView configureButtonWithParticipantNames:formatter:showsGroupAvatar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c2a1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_112744fb0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c1a9f00(uVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744fb4));
  uVar2 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744fa8);
  *(undefined8 *)(param_1 + _DAT_112744fa8) = uVar2;
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744fac);
  *(undefined8 *)(param_1 + _DAT_112744fac) = param_4;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + _DAT_112744fb8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1062c2ae4; end: 1062c2c93; -[SCContextSpotlightOneTapToShareView _fitParticipantNamesIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c2ae4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  double dVar8;
  
  lVar7 = (long)_DAT_112744fa8;
  lVar1 = *(long *)(param_2 + lVar7);
  func_0x00010bf529e0();
  if (((lVar1 != 0) && (lVar1 = (long)_DAT_112744fac, *(long *)(param_2 + lVar1) != 0)) &&
     (func_0x00010bdd1be0(param_2), 0.0 < param_1)) {
    dVar8 = *(double *)(param_2 + _DAT_112744fb8);
    if (param_1 != dVar8) {
      *(double *)(param_2 + _DAT_112744fb8) = param_1;
      lVar2 = param_2;
      func_0x00010becc420();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x0001062ccf9c();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010c25cfc0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar5;
        func_0x00010c25cfc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        func_0x00010c14dce0(lVar4,param_3,lVar2);
        if (0.0 < param_1 - dVar8) {
          lVar5 = *(long *)(param_2 + lVar1);
          func_0x00010bfcefa0(lVar5,param_3,*(undefined8 *)(param_2 + lVar7),lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar1 = lVar5;
          func_0x00010c08fa60();
          if (lVar1 != 0) {
            puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,lVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bde5d20(param_2,param_3,puVar6);
            _objc_release(puVar6);
          }
          _objc_release(lVar5);
        }
        _objc_release(lVar4);
        _objc_release(lVar3);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 1062c2c94; end: 1062c2cbb; -[SCContextSpotlightOneTapToShareView _availableTitleWidth] */

double FUN_1062c2c94(undefined8 param_1,undefined8 param_2,double param_3)

{
  func_0x00010bf20c00();
  param_3 = param_3 + -72.0;
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  return param_3;
}



/* Entry: 1062c2cbc; end: 1062c2d3b; -[SCContextSpotlightOneTapToShareView _titleFont] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c2cbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126c4e78;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744fbc);
  func_0x00010befdb20(uVar1);
  func_0x00010bf0e8e0(puVar2,param_2,7,0,4,4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1062c2d3c; end: 1062c2dc7; -[SCContextSpotlightOneTapToShareView _configureTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c2d3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112744fbc));
  puVar1 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x4028000000000000,0x4028000000000000,PTR_PTR_1126b0c40,param_2,0x25,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe77e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112744fc0),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062c2dc8; end: 1062c31b7; -[SCContextSpotlightOneTapToShareView _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c2dc8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010c219b60(param_1,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar5 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar5);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fc999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar5 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(lVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar5 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(lVar5);
  func_0x00010c160fc0(param_1);
  func_0x00010c198080(param_1);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar4 = (long)_DAT_112744fc4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c207380(0x4010000000000000,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar5 = (long)_DAT_112744fb0;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar5));
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126b0870;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar5 = (long)_DAT_112744fb4;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c160f00(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar5 = (long)_DAT_112744fbc;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar5 = (long)_DAT_112744fc0;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010beaba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupConstaints_112588848);
  return;
}



/* Entry: 1062c31b8; end: 1062c357b; -[SCContextSpotlightOneTapToShareView _setupConstaints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c31b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_110 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar12 = (long)_DAT_112744fc4;
  uVar1 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_c8 = uVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar13;
  func_0x00010bf493a0(uVar1,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_d8 = uVar1;
  uStack_c0 = uVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_e0 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_e8 = lVar13;
  func_0x00010bf493a0(uVar2,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar12);
  uStack_f0 = uVar2;
  uStack_b8 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_100 = uVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = lVar13;
  func_0x00010bf49480(0x4030000000000000,uVar1,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_118 = uVar1;
  uStack_b0 = uVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_128 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_130 = lVar13;
  func_0x00010bf49520(0xc030000000000000,uVar2,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_112744fb0;
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_138 = uVar2;
  lStack_f8 = lVar13;
  uStack_a8 = uVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_a0 = uVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_112744fb4;
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  lStack_120 = lVar13;
  uStack_98 = uVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar13);
  uStack_90 = uVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c0,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_110,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uStack_138);
  _objc_release(lStack_130);
  _objc_release(uStack_128);
  _objc_release(uStack_118);
  _objc_release(lStack_108);
  _objc_release(uStack_100);
  _objc_release(uStack_f0);
  _objc_release(lStack_e8);
  _objc_release(uStack_e0);
  _objc_release(uStack_d8);
  _objc_release(lStack_d0);
  _objc_release(uStack_c8);
  lVar13 = (long)_DAT_112744fbc;
  func_0x00010c181cc0(0x437a0000,*(undefined8 *)(param_1 + lVar13),param_2,0);
  func_0x00010c181f00(0x437a0000,*(undefined8 *)(param_1 + lVar13),param_2,0);
  func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lStack_f8),param_2,0);
  func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lStack_120),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744fc0);
  func_0x00010c181cc0(0x447a0000,uVar1,param_2,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puStack_168 = &DAT_112744fb0;
  pcStack_148 = FUN_1062c357c;
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_170 = puVar9;
  lStack_160 = lVar13;
  lStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf414e0(0x3fe3333333333333);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf414e0(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_1062c36c4;
  puStack_188 = &UNK_110841f80;
  puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_1062c36cc;
  puStack_1b8 = &UNK_110848bd8;
  uStack_1b0 = uVar1;
  puStack_1a8 = puVar10;
  uStack_180 = uVar1;
  puStack_178 = puVar11;
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  func_0x00010bf03440(0x3fc1eb851eb851ec,0,puVar9,param_2,0x20000,&puStack_1a0,&puStack_1d0);
  _objc_release(puStack_1a8);
  _objc_release(puStack_178);
  _objc_release(puVar10);
  _objc_release(puVar11);
  return;
}



/* Entry: 1062c357c; end: 1062c36c3; -[SCContextSpotlightOneTapToShareView animateTapFeedback] */

void FUN_1062c357c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe3333333333333);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf414e0(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1062c36c4;
  puStack_48 = &UNK_110841f80;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1062c36cc;
  puStack_78 = &UNK_110848bd8;
  uStack_70 = param_1;
  puStack_68 = puVar3;
  uStack_40 = param_1;
  puStack_38 = puVar2;
  _objc_retain(puVar3);
  _objc_retain(puVar2);
  func_0x00010bf03440(0x3fc1eb851eb851ec,0,puVar1,param_2,0x20000,&puStack_60,&puStack_90);
  _objc_release(puStack_68);
  _objc_release(puStack_38);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 1062c36c4; end: 1062c36cb;  */

void FUN_1062c36c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setBackgroundColor__112639330,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1062c36cc; end: 1062c3763;  */

void FUN_1062c36cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1062c3764;
  puStack_38 = &UNK_110841f80;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x00010bf03440(0x3fceb851eb851eb8,0,puVar1,param_2,0,&puStack_50,0);
  _objc_release(uStack_28);
  return;
}



/* Entry: 1062c3764; end: 1062c376b;  */

void FUN_1062c3764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setBackgroundColor__112639330,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1062c376c; end: 1062c377b; -[SCContextSpotlightOneTapToShareView groupAvatarContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062c376c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744fb4);
}



/* Entry: 1062c377c; end: 1062c380b; -[SCContextSpotlightOneTapToShareView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c377c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744fb4,0);
  _objc_storeStrong(param_1 + _DAT_112744fac,0);
  _objc_storeStrong(param_1 + _DAT_112744fa8,0);
  _objc_storeStrong(param_1 + _DAT_112744fc0,0);
  _objc_storeStrong(param_1 + _DAT_112744fbc,0);
  _objc_storeStrong(param_1 + _DAT_112744fb0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744fc4,0);
  return;
}



/* Entry: 1062c380c; end: 1062c3873; -[SCContextSpotlightPillSubscribeButton initWithButtonStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1062c380c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0bf0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112744fcc) = param_3;
    func_0x00010beb14e0(puVar1);
    func_0x00010bea8520(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062c3874; end: 1062c395f; -[SCContextSpotlightPillSubscribeButton setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c3874(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(char *)(param_1 + _DAT_112744fd0) = (char)param_3;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744fd4);
  lVar1 = param_1;
  func_0x00010bdd2260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar2,param_2,lVar1);
  _objc_release(lVar1);
  lVar3 = (long)_DAT_112744fd8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  lVar1 = param_1;
  func_0x00010becb400(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar2,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = 0x10;
  if ((int)param_3 == 0) {
    lVar1 = 0x14;
  }
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,
                      *(undefined8 *)(param_1 + *(int *)(&DAT_112744fcc + lVar1)));
  lVar1 = param_1;
  func_0x00010be371e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112744fe4),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062c3960; end: 1062c3a93; -[SCContextSpotlightPillSubscribeButton setStateObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c3960(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112744fe8;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar5));
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1062c3a94; end: 1062c3adb;  */

void FUN_1062c3a94(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea26a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062c3adc; end: 1062c3b13; -[SCContextSpotlightPillSubscribeButton pointInside:withEvent:] */

void FUN_1062c3adc(void)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 1062c3b14; end: 1062c40ff; -[SCContextSpotlightPillSubscribeButton _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c3b14(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar30 = (long)_DAT_112744fd4;
  uVar27 = *(undefined8 *)(param_1 + lVar30);
  *(undefined **)(param_1 + lVar30) = puVar1;
  _objc_release(uVar27);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar30));
  uVar27 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c08c0e0(uVar27);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4018000000000000);
  _objc_release(uVar27);
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  lVar29 = (long)_DAT_112744fec;
  uVar27 = *(undefined8 *)(param_1 + lVar29);
  *(undefined **)(param_1 + lVar29) = puVar1;
  _objc_release(uVar27);
  func_0x00010c207380(0x4000000000000000,*(undefined8 *)(param_1 + lVar29));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar29));
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar29));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar29));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar30));
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar28 = (long)_DAT_112744fe4;
  uVar27 = *(undefined8 *)(param_1 + lVar28);
  *(undefined **)(param_1 + lVar28) = puVar1;
  _objc_release(uVar27);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar28));
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar28));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar29));
  func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar28));
  func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar28));
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar28 = (long)_DAT_112744fd8;
  uVar27 = *(undefined8 *)(param_1 + lVar28);
  *(undefined **)(param_1 + lVar28) = puVar1;
  _objc_release(uVar27);
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar28));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar28));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar29));
  func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar28));
  func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar28));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar30);
  uStack_c0 = uVar27;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar30);
  uStack_b8 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar30);
  uStack_b0 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar29);
  uStack_a8 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar29);
  uStack_a0 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bf493c0(0xc01c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar29);
  uStack_98 = uVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar29);
  uStack_90 = uVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar23;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar27);
  _objc_release(lVar28);
  _objc_release(uVar2);
  _objc_initWeak(auStack_c8,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_d0,auStack_c8);
  func_0x00010c0b8440();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + _DAT_112744ff0);
  *(undefined **)(param_1 + _DAT_112744ff0) = puVar1;
  _objc_release(uVar27);
  _objc_destroyWeak(auStack_d0);
  puVar25 = auStack_c8;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  __Unwind_Resume(puVar25);
  puVar25 = puVar25 + 0x20;
  _objc_loadWeakRetained(puVar25);
  puVar26 = puVar25;
  func_0x00010be4f0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar26);
  return;
}



/* Entry: 1062c4100; end: 1062c413f;  */

void FUN_1062c4100(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4f0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1062c4140; end: 1062c41b7; -[SCContextSpotlightPillSubscribeButton _loadingIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c4140(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc(PTR_PTR_1126aeff0);
  func_0x00010bfffb60();
  func_0x00010c161020();
  func_0x00010c1a8560(puVar1,param_2,1);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c066580(*(undefined8 *)(param_1 + _DAT_112744fec),param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062c41b8; end: 1062c41fb; -[SCContextSpotlightPillSubscribeButton _imageForSelectedSubsState:] */

void FUN_1062c41b8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    uVar1 = 0x21b;
    uVar2 = 0xd4;
  }
  else {
    uVar1 = 0x81;
    uVar2 = 0xd5;
  }
  func_0x00010bfe7b00(0x4028000000000000,0x4028000000000000,PTR_PTR_1126b0c40,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062c41fc; end: 1062c422b; -[SCContextSpotlightPillSubscribeButton _textColorForSelectedSubsState:] */

void FUN_1062c41fc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0xd4;
  if (param_3 != 0) {
    uVar1 = 0xd5;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062c422c; end: 1062c425f; -[SCContextSpotlightPillSubscribeButton _backgroundColorForSelectedSubsState:] */

void FUN_1062c422c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x49;
  if (param_3 == 0) {
    uVar1 = 0x62;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062c4260; end: 1062c43c7; -[SCContextSpotlightPillSubscribeButton _setButtonStateBySubscriptionState:] */

/* WARNING: Possible PIC construction at 0x0001062c42cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001062c43a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062c42d0) */
/* WARNING: Removing unreachable block (ram,0x0001062c43ac) */
/* WARNING: Removing unreachable block (ram,0x00010c21e900) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c4260(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  
  func_0x00010c067fc0();
  lVar1 = param_1;
  func_0x00010bfd4e00();
  if (((int)lVar1 == 0) && (param_3 == 1)) {
    uVar3 = 1;
  }
  else if (param_3 == -1) {
    func_0x00010c1a7f60(*(long *)(param_1 + _DAT_112744fe4));
    lVar4 = (long)_DAT_112744ff0;
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c159240();
    func_0x00010c216160(uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dbc0();
    _objc_release(uVar2);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    param_1 = *(long *)(param_1 + _DAT_112744fe4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8,uVar3);
  return;
}



/* Entry: 1062c43c8; end: 1062c448b; -[SCContextSpotlightPillSubscribeButton _setTextForButtonStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c43c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + _DAT_112744fcc) - 3U < 2) {
    lVar1 = param_1;
    func_0x000108f59614();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112744fe0);
    *(long *)(param_1 + _DAT_112744fe0) = lVar1;
    _objc_release();
    func_0x000108f5962c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (1 < *(long *)(param_1 + _DAT_112744fcc) - 1U) {
      return;
    }
    lVar1 = param_1;
    func_0x000108f595e4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112744fe0);
    *(long *)(param_1 + _DAT_112744fe0) = lVar1;
    _objc_release();
    func_0x000108f595fc();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744fdc);
  *(undefined8 *)(param_1 + _DAT_112744fdc) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1062c448c; end: 1062c449b; -[SCContextSpotlightPillSubscribeButton hasButtonBeenTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1062c448c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112744fc8);
}



/* Entry: 1062c449c; end: 1062c44ab; -[SCContextSpotlightPillSubscribeButton setHasButtonBeenTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c449c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112744fc8) = param_3;
  return;
}



/* Entry: 1062c44ac; end: 1062c44bb; -[SCContextSpotlightPillSubscribeButton selected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1062c44ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112744fd0);
}



/* Entry: 1062c44bc; end: 1062c44cb; -[SCContextSpotlightPillSubscribeButton stateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062c44bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744ff4);
}



/* Entry: 1062c44cc; end: 1062c457b; -[SCContextSpotlightPillSubscribeButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c44cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744ff4,0);
  _objc_storeStrong(param_1 + _DAT_112744fdc,0);
  _objc_storeStrong(param_1 + _DAT_112744fe0,0);
  _objc_storeStrong(param_1 + _DAT_112744fe4,0);
  _objc_storeStrong(param_1 + _DAT_112744ff0,0);
  _objc_storeStrong(param_1 + _DAT_112744fd8,0);
  _objc_storeStrong(param_1 + _DAT_112744fec,0);
  _objc_storeStrong(param_1 + _DAT_112744fd4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744fe8,0);
  return;
}



/* Entry: 1062c457c; end: 1062c45cb; -[SCContextSpotlightRecommendActionButton initWithStyle:] */

undefined1 * FUN_1062c457c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0bf8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithStyle__1125f14a8);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb1160(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062c45cc; end: 1062c48bb; -[SCContextSpotlightRecommendActionButton _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c45cc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar12 = (long)_DAT_112744ff8;
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar11);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar12));
  lVar2 = param_1;
  func_0x00010be87200(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar12));
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_98 = uVar4;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  uStack_88 = uVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar12);
  uStack_80 = uVar11;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25dfa0(param_1);
  func_0x00010c24d7e0(param_1);
  uVar7 = uVar6;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  uStack_78 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25dfa0(param_1);
  func_0x00010c24d7e0(param_1);
  uVar9 = uVar8;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  iVar10 = 4;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_a8);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar11);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lStack_a0);
  _objc_release(lStack_90);
  uVar11 = uStack_98;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_1062c48bc;
  puStack_e8 = PTR_PTR_1126f0bf8;
  uStack_f0 = uVar11;
  puStack_e0 = puVar1;
  uStack_d8 = uVar8;
  uStack_d0 = uVar7;
  uStack_c8 = uVar9;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&uStack_f0,PTR_s_setSelected__11265c598);
  if (iVar10 == 0) {
    func_0x00010bed4560(uVar11);
  }
  else {
    puVar1 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar1);
    func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
  }
  return;
}



/* Entry: 1062c48bc; end: 1062c4a43; -[SCContextSpotlightRecommendActionButton setSelected:animated:] */

void FUN_1062c48bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0bf8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setSelected__11265c598);
  if (param_4 == 0) {
    func_0x00010bed4560(param_1);
  }
  else {
    puVar1 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar1);
    func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
  }
  return;
}



/* Entry: 1062c4a44; end: 1062c4a4f; -[SCContextSpotlightRecommendActionButton titleLabelAccessibilityIdentifier] */

undefined ** FUN_1062c4a44(void)

{
  return &PTR____CFConstantStringClassReference_110e48298;
}



/* Entry: 1062c4a50; end: 1062c4acb; -[SCContextSpotlightRecommendActionButton _recommendImage] */

void FUN_1062c4a50(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c25dfa0();
  if (lVar1 != 2) {
    if (lVar1 == 1) {
      lVar1 = param_1;
      func_0x00010c25dfa0(param_1);
      func_0x00010c24d7e0(param_1,param_2,lVar1);
      func_0x00010bfe7b00(PTR_PTR_1126b0c40,param_2,0x3d,0xd5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1062c4ac0;
    }
    if (lVar1 != 0) goto LAB_1062c4ac0;
  }
  func_0x0001062cd220();
  _objc_retainAutoreleasedReturnValue();
LAB_1062c4ac0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062c4acc; end: 1062c4b43; -[SCContextSpotlightRecommendActionButton _updateButtonColorWithSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c4acc(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = 0xa1;
  if (param_3 == 0) {
    uVar1 = 0xd5;
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744ff8);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c213190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTextColor__112662688,uVar1);
  return;
}



/* Entry: 1062c4b44; end: 1062c4b57; -[SCContextSpotlightRecommendActionButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c4b44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744ff8,0);
  return;
}



/* Entry: 1062c4b58; end: 1062c4bb7; -[SCContextSpotlightRemixAttributionControl initWithFrame:] */

undefined1 * FUN_1062c4b58(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0c00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    func_0x00010bdeab00(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062c4bb8; end: 1062c4e3b; -[SCContextSpotlightRemixAttributionControl configureWithParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c4bb8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1295c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  func_0x00010c1a7f60(param_1);
  if (lVar2 != 0) {
    _objc_retain(lVar1);
    puVar7 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    func_0x00010c127e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(lVar1);
    puVar3 = puVar7;
    func_0x00010c11f400();
    _objc_release(puVar7);
    puVar7 = (undefined *)0x0;
    if (puVar3 != (undefined *)0x7fffffffffffffff || param_2 != 0) {
      lVar2 = lVar1;
      func_0x00010c260c80(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      puVar7 = PTR_PTR_1126c4e78;
      func_0x00010bf0e8a0(PTR_PTR_1126c4e78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(puVar3);
      _objc_release(puVar7);
      func_0x00010c08fa60(lVar1);
      lVar4 = lVar1;
      func_0x00010c260c80(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      puVar7 = PTR_PTR_1126c4e78;
      func_0x00010bf0e8a0(PTR_PTR_1126c4e78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(puVar5);
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
      _objc_opt_new();
      func_0x00010bf069e0();
      func_0x00010bf069e0(puVar7);
      _objc_release(puVar5);
      _objc_release(lVar4);
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    puVar3 = puVar7;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      func_0x00010c1a7f60(param_1);
    }
    else {
      func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_112744ffc));
      lVar2 = param_3;
      func_0x00010beedca0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + _DAT_112745000);
      *(long *)(param_1 + _DAT_112745000) = lVar2;
      _objc_release(uVar6);
    }
    _objc_release(puVar7);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062c4e3c; end: 1062c4e8b; -[SCContextSpotlightRemixAttributionControl _createAndConstrainSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c4e3c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010be5bcc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744ffc);
  *(long *)(param_1 + _DAT_112744ffc) = lVar1;
  _objc_release(uVar2);
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde65d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__constrainSubviews_112557310);
  return;
}



/* Entry: 1062c4e8c; end: 1062c4f17; -[SCContextSpotlightRemixAttributionControl _makeLabel] */

void FUN_1062c4e8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c181f00(0x443b8000,puVar1,param_2,0);
  func_0x00010c181cc0(0x447a0000,puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062c4f18; end: 1062c5143; -[SCContextSpotlightRemixAttributionControl _constrainSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1062c4f18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_112744ffc;
  lVar2 = *(long *)(param_1 + lVar14);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  lStack_88 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  uStack_80 = uVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  uStack_78 = uVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(param_1);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar2;
  }
  ___stack_chk_fail();
  return *(long *)(lVar2 + _DAT_112745000);
}



/* Entry: 1062c5144; end: 1062c5153; -[SCContextSpotlightRemixAttributionControl action] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062c5144(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745000);
}



/* Entry: 1062c5154; end: 1062c5193; -[SCContextSpotlightRemixAttributionControl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c5154(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112745000,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744ffc,0);
  return;
}



/* Entry: 1062c5194; end: 1062c51e3; -[SCContextSpotlightReplyButton initWithStyle:] */

undefined1 * FUN_1062c5194(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0c08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithStyle__1125f14a8);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062c51e4; end: 1062c594b; -[SCContextSpotlightReplyButton _setupViews] */

/* WARNING: Possible PIC construction at 0x0001062c530c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001062c537c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001062c5984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001062c59a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062c5988) */
/* WARNING: Removing unreachable block (ram,0x0001062c5994) */
/* WARNING: Removing unreachable block (ram,0x0001062c5998) */
/* WARNING: Removing unreachable block (ram,0x0001062c5380) */
/* WARNING: Removing unreachable block (ram,0x0001062c5948) */
/* WARNING: Removing unreachable block (ram,0x0001062c5970) */
/* WARNING: Removing unreachable block (ram,0x0001062c5974) */
/* WARNING: Removing unreachable block (ram,0x0001062c5920) */
/* WARNING: Removing unreachable block (ram,0x0001062c5310) */
/* WARNING: Removing unreachable block (ram,0x0001062c59a4) */
/* WARNING: Removing unreachable block (ram,0x0001062c59b0) */
/* WARNING: Removing unreachable block (ram,0x0001062c59b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c51e4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar4 = (long)_DAT_112745008;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4));
  lVar2 = param_1;
  func_0x00010be8f0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar4 = (long)_DAT_11274500c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4));
  lVar2 = param_1;
  func_0x00010bdd2860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + lVar4),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1062c594c; end: 1062c59cb; -[SCContextSpotlightReplyButton updateVisibility] */

/* WARNING: Possible PIC construction at 0x0001062c5984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001062c59a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062c5988) */
/* WARNING: Removing unreachable block (ram,0x0001062c5994) */
/* WARNING: Removing unreachable block (ram,0x0001062c5998) */
/* WARNING: Removing unreachable block (ram,0x0001062c59a4) */
/* WARNING: Removing unreachable block (ram,0x0001062c59b0) */
/* WARNING: Removing unreachable block (ram,0x0001062c59b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c594c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c236060();
  uVar2 = 0;
  if ((int)lVar1 == 0) {
    uVar2 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,*(undefined8 *)(param_1 + _DAT_112745008),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1062c59cc; end: 1062c59eb; -[SCContextSpotlightReplyButton setShowBadge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c59cc(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112745004) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112745004) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c28c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateVisibility_112680aa0);
  return;
}



/* Entry: 1062c59ec; end: 1062c59f7; -[SCContextSpotlightReplyButton titleLabelAccessibilityIdentifier] */

undefined ** FUN_1062c59ec(void)

{
  return &PTR____CFConstantStringClassReference_110e48358;
}



/* Entry: 1062c59f8; end: 1062c5a73; -[SCContextSpotlightReplyButton _replyImage] */

void FUN_1062c59f8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c25dfa0();
  if (lVar1 != 2) {
    if (lVar1 == 1) {
      lVar1 = param_1;
      func_0x00010c25dfa0(param_1);
      func_0x00010c24d7e0(param_1,param_2,lVar1);
      func_0x00010bfe7b00(PTR_PTR_1126b0c40,param_2,0x77,0xd5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1062c5a68;
    }
    if (lVar1 != 0) goto LAB_1062c5a68;
  }
  func_0x0001062cd318();
  _objc_retainAutoreleasedReturnValue();
LAB_1062c5a68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062c5a74; end: 1062c5aef; -[SCContextSpotlightReplyButton _badgedReplyImage] */

void FUN_1062c5a74(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c25dfa0();
  if (lVar1 != 2) {
    if (lVar1 == 1) {
      lVar1 = param_1;
      func_0x00010c25dfa0(param_1);
      func_0x00010c24d7e0(param_1,param_2,lVar1);
      func_0x00010bfe7b00(PTR_PTR_1126b0c40,param_2,0x77,0xd5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1062c5ae4;
    }
    if (lVar1 != 0) goto LAB_1062c5ae4;
  }
  func_0x0001062cd29c();
  _objc_retainAutoreleasedReturnValue();
LAB_1062c5ae4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062c5af0; end: 1062c5b13; -[SCContextSpotlightReplyButton _detachedIndicatorSize] */

undefined8 FUN_1062c5af0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c25dfa0();
  uVar1 = 0x4028000000000000;
  if (param_1 != 1) {
    uVar1 = 0x3ff0000000000000;
  }
  return uVar1;
}



/* Entry: 1062c5b14; end: 1062c5b37; -[SCContextSpotlightReplyButton _detachedIndicatorColor] */

undefined8 FUN_1062c5b14(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c25dfa0();
  uVar1 = 0x8f;
  if (param_1 != 1) {
    uVar1 = 0xd6;
  }
  return uVar1;
}



/* Entry: 1062c5b38; end: 1062c5b6b; -[SCContextSpotlightReplyButton _detachedIndicatorOffset] */

undefined1  [16] FUN_1062c5b38(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  func_0x00010c25dfa0();
  if ((param_1 & 0xfffffffffffffffd) == 0) {
    uVar1 = *(undefined8 *)PTR__CGPointZero_110347540;
    uVar2 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  }
  else {
    uVar2 = 0xc010000000000000;
    uVar1 = 0x4038000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1062c5b6c; end: 1062c5b7b; -[SCContextSpotlightReplyButton showBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1062c5b6c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745004);
}



/* Entry: 1062c5b7c; end: 1062c5b8b; -[SCContextSpotlightReplyButton replyImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062c5b7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745008);
}



/* Entry: 1062c5b8c; end: 1062c5bcb; -[SCContextSpotlightReplyButton setReplyImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c5b8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112745008;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062c5bcc; end: 1062c5c1b; -[SCContextSpotlightReplyButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c5bcc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112745008,0);
  _objc_storeStrong(param_1 + _DAT_112745010,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274500c,0);
  return;
}



/* Entry: 1062c5c1c; end: 1062c5c6b; -[SCContextSpotlightReplyView init] */

undefined1 * FUN_1062c5c1c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0c10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062c5c6c; end: 1062c6047; -[SCContextSpotlightReplyView _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c5c6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  double in_d3;
  undefined *puStack_f0;
  undefined *puStack_e8;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c219b60(param_1,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4031000000000000);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar14 = (long)_DAT_112745014;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar14));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar14));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar14));
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar14));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar14));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar14));
  func_0x00010befbb60(param_1);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf49520(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf49420(0x4041000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(lVar14);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release(lVar2);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puStack_e8 = PTR_PTR_1126f0c10;
  puStack_f0 = puVar3;
  _objc_msgSendSuper2(&puStack_f0,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(puVar3);
  func_0x00010c08c0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(in_d3 * 0.5);
  _objc_release(puVar3);
  return;
}



/* Entry: 1062c6048; end: 1062c60c3; -[SCContextSpotlightReplyView layoutSubviews] */

void FUN_1062c6048(undefined8 param_1)

{
  double in_d3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0c10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(in_d3 * 0.5);
  _objc_release(param_1);
  return;
}



/* Entry: 1062c60c4; end: 1062c616f; -[SCContextSpotlightReplyView configureWithFriendDisplayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c60c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    func_0x0001062cce34();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112745014),param_2,ppuVar2);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062c6170; end: 1062c61a7; -[SCContextSpotlightReplyView _handleTap:] */

void FUN_1062c6170(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7d300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062c61a8; end: 1062c61c7; -[SCContextSpotlightReplyView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c61a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112745018);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062c61c8; end: 1062c61db; -[SCContextSpotlightReplyView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c61c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112745018,param_3);
  return;
}



/* Entry: 1062c61dc; end: 1062c6217; -[SCContextSpotlightReplyView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c61dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112745018);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112745014,0);
  return;
}



/* Entry: 1062c6218; end: 1062c62c7; -[SCContextSpotlightShareActionButton initWithStyle:imageProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1062c6218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0c18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithStyle__1125f14a8,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11274501c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745020);
    *(undefined ***)((long)puVar1 + (long)_DAT_112745020) =
         &PTR____CFConstantStringClassReference_110e48398;
    _objc_release(uVar2);
    func_0x00010beb14e0(puVar1);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1062c62c8; end: 1062c6823; -[SCContextSpotlightShareActionButton _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c62c8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar25 = (long)_DAT_112745024;
  uVar23 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar1;
  _objc_release(uVar23);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar25));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar25));
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar26 = (long)_DAT_112745028;
  uVar23 = *(undefined8 *)(param_1 + lVar26);
  *(undefined **)(param_1 + lVar26) = puVar1;
  _objc_release(uVar23);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar26));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar26));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar26));
  _objc_initWeak(auStack_b8,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_c0,auStack_b8);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + _DAT_11274502c);
  *(undefined **)(param_1 + _DAT_11274502c) = puVar1;
  _objc_release(uVar23);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar25));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar25);
  uStack_a0 = uVar23;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar26);
  uStack_98 = uVar8;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar26);
  uStack_90 = uVar19;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar25);
  uStack_88 = uVar20;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde76e0(param_1);
  uVar24 = uVar15;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar25);
  uStack_80 = uVar24;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde76e0(param_1);
  uVar17 = uVar16;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar17;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar24);
  _objc_release(uVar15);
  _objc_release(uVar20);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar19);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar23);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  uVar19 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36aa0(param_1);
  uVar23 = uVar19;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar26);
  uStack_b0 = uVar23;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36aa0(param_1);
  uVar8 = uVar20;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + _DAT_112745030);
  *(undefined **)(param_1 + _DAT_112745030) = puVar1;
  _objc_release(uVar24);
  _objc_release(uVar8);
  _objc_release(uVar20);
  _objc_release(uVar23);
  _objc_release(uVar19);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  func_0x00010bed9620(param_1);
  _objc_destroyWeak(auStack_c0);
  puVar21 = auStack_b8;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  __Unwind_Resume(puVar21);
  puVar21 = puVar21 + 0x20;
  _objc_loadWeakRetained(puVar21);
  puVar22 = puVar21;
  func_0x00010bdf3380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 1062c6824; end: 1062c6863;  */

void FUN_1062c6824(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1062c6864; end: 1062c68b3; -[SCContextSpotlightShareActionButton startUpsellAnimationWithTrigger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1062c6864(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_112745034);
  if ((bVar1 & 1) == 0) {
    *(long *)(param_1 + _DAT_112745038) = param_3;
    if (param_3 == 1) {
      func_0x00010bea4960();
    }
    else if (param_3 == 0) {
      func_0x00010be724a0();
    }
  }
  return bVar1 ^ 1;
}



/* Entry: 1062c68b4; end: 1062c68df; -[SCContextSpotlightShareActionButton resumeUpsellPulseAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c68b4(long param_1)

{
  if ((*(char *)(param_1 + _DAT_112745034) == '\x01') && (*(long *)(param_1 + _DAT_112745038) == 0))
  {
                    /* WARNING: Could not recover jumptable at 0x00010be84850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pulsatingAnimation_11257ebb0);
    return;
  }
  return;
}



/* Entry: 1062c68e0; end: 1062c68ff; -[SCContextSpotlightShareActionButton resetUpsell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c68e0(long param_1)

{
  if (*(char *)(param_1 + _DAT_112745034) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bea4970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setImageWithIsShareUpsold__112586c00,0);
    return;
  }
  return;
}



/* Entry: 1062c6900; end: 1062c690b; -[SCContextSpotlightShareActionButton titleLabelAccessibilityIdentifier] */

undefined ** FUN_1062c6900(void)

{
  return &PTR____CFConstantStringClassReference_110e483d8;
}



/* Entry: 1062c690c; end: 1062c69d7; -[SCContextSpotlightShareActionButton pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1062c690c(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  uVar2 = 0;
  puStack_38 = PTR_PTR_1126f0c18;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_pointInside_withEvent__11261e4e8);
  if ((uVar2 & 1) == 0) {
    uVar1 = *(ulong *)(param_2 + _DAT_11274502c);
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    if (((uVar1 == 0) || (uVar2 = uVar1, func_0x00010c074c20(), (uVar2 & 1) != 0)) ||
       (func_0x00010bf01b40(uVar1), param_1 < 0.01)) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar1;
      func_0x00010bfb68e0(uVar1);
      _CGRectContainsPoint();
    }
    _objc_release(uVar1);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1062c69d8; end: 1062c6a27; -[SCContextSpotlightShareActionButton _containerSize] */

double FUN_1062c69d8(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  double dVar2;
  
  lVar1 = param_2;
  func_0x00010c25dfa0();
  func_0x00010c24d7e0(param_2,param_3,lVar1);
  func_0x00010c25dfa0();
  dVar2 = param_1 + 6.0;
  if (param_2 != 1) {
    dVar2 = param_1;
  }
  return dVar2;
}



/* Entry: 1062c6a28; end: 1062c6ab7; -[SCContextSpotlightShareActionButton _iconSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062c6a28(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c25dfa0();
  func_0x00010c24d7e0(param_2);
  lVar1 = param_2;
  uVar2 = param_1;
  func_0x00010c25dfa0();
  if (((lVar1 == 1) && (*(char *)(param_2 + _DAT_112745034) == '\x01')) &&
     (*(long *)(param_2 + _DAT_112745038) == 0)) {
    lVar1 = param_2;
    func_0x00010c25dfa0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf39830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_circleInsetIconSizeForStyle__1125abfb0,lVar1);
    return uVar2;
  }
  return param_1;
}



/* Entry: 1062c6ab8; end: 1062c6f3f; -[SCContextSpotlightShareActionButton _updateIconViewForCurrentState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c6ab8(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  undefined1 auStack_2b0 [48];
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be36aa0();
  lVar12 = (long)_DAT_112745034;
  if ((*(char *)(param_2 + lVar12) == '\x01') && (*(long *)(param_2 + _DAT_112745038) == 1)) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_11274502c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c074c20();
    if ((int)uVar7 != 0) {
      func_0x00010bdcade0(param_2);
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + _DAT_11274502c);
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  _objc_release(uVar1);
  lVar11 = param_2;
  func_0x00010c25dfa0();
  if (lVar11 == 2) {
LAB_1062c6b94:
    if (*(char *)(param_2 + lVar12) == '\x01') {
      func_0x0001062cd394();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x0001062cd1a4();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1a9f00(*(undefined8 *)(param_2 + _DAT_112745028));
    _objc_release(lVar11);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_112745024;
    func_0x00010c16e440(*(undefined8 *)(param_2 + lVar12));
    _objc_release(puVar2);
    uVar1 = *(undefined8 *)(param_2 + lVar12);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0);
    _objc_release(uVar1);
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    lStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    plStack_190 = (long *)0x0;
    lVar11 = *(long *)(param_2 + _DAT_112745030);
    _objc_retain(lVar11);
    lVar12 = lVar11;
    func_0x00010bf52a60();
    if (lVar12 != 0) {
      lVar14 = *plStack_190;
      do {
        lVar15 = 0;
        do {
          if (*plStack_190 != lVar14) {
            _objc_enumerationMutation(lVar11);
          }
          func_0x00010c181140(param_1,*(undefined8 *)(lStack_198 + lVar15 * 8));
          lVar15 = lVar15 + 1;
        } while (lVar12 != lVar15);
        lVar12 = lVar11;
        func_0x00010bf52a60();
      } while (lVar12 != 0);
    }
  }
  else {
    if (lVar11 != 1) {
      if (lVar11 != 0) goto LAB_1062c6ef8;
      goto LAB_1062c6b94;
    }
    func_0x00010bf8d060();
    if ((*(char *)(param_2 + lVar12) == '\x01') && (*(long *)(param_2 + _DAT_112745038) != 1)) {
      if (*(long *)(param_2 + _DAT_112745038) == 0) {
        puVar2 = PTR_PTR_1126b0c40;
        dVar16 = param_1;
        func_0x00010bfe7b00(param_1,param_1,PTR_PTR_1126b0c40);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00(*(undefined8 *)(param_2 + _DAT_112745028));
        _objc_release(puVar2);
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = (undefined8 *)(param_2 + _DAT_112745024);
        func_0x00010c16e440(*puVar13);
        _objc_release(puVar2);
        func_0x00010bde76e0(param_2);
        dVar16 = dVar16 * 0.5;
        goto LAB_1062c6e34;
      }
    }
    else {
      puVar2 = PTR_PTR_1126b0c40;
      func_0x00010bfe7b00(param_1,param_1,PTR_PTR_1126b0c40);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(*(undefined8 *)(param_2 + _DAT_112745028));
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = (undefined8 *)(param_2 + _DAT_112745024);
      func_0x00010c16e440(*puVar13);
      _objc_release(puVar2);
      dVar16 = 0.0;
LAB_1062c6e34:
      uVar1 = *puVar13;
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(dVar16);
      _objc_release(uVar1);
    }
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    lStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    lVar11 = *(long *)(param_2 + _DAT_112745030);
    _objc_retain(lVar11);
    lVar12 = lVar11;
    func_0x00010bf52a60();
    if (lVar12 != 0) {
      lVar14 = *plStack_1d0;
      do {
        lVar15 = 0;
        do {
          if (*plStack_1d0 != lVar14) {
            _objc_enumerationMutation(lVar11);
          }
          func_0x00010c181140(param_1,*(undefined8 *)(lStack_1d8 + lVar15 * 8));
          lVar15 = lVar15 + 1;
        } while (lVar12 != lVar15);
        lVar12 = lVar11;
        func_0x00010bf52a60();
      } while (lVar12 != 0);
    }
  }
  _objc_release(lVar11);
LAB_1062c6ef8:
  lVar12 = *(long *)(param_2 + _DAT_112745024);
  func_0x00010c1cbe20();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1e8 = FUN_1062c6f40;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126aea58;
  puStack_1f0 = &stack0xfffffffffffffff0;
  _objc_alloc_init();
  func_0x00010c219b60();
  func_0x00010c21ad00(puVar3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar3);
  _objc_release(puVar2);
  func_0x00010723c928();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar3);
  _objc_release(puVar2);
  func_0x00010c21e900(puVar3);
  func_0x00010c1a7f60(puVar3);
  func_0x00010c181cc0(0x447a0000,puVar3);
  puVar2 = PTR_PTR_1126b08d8;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100b74f58(0x4020000000000000,0x3fd3333333333333,0,0x4000000000000000,puVar2,puVar3,
                      puVar4);
  _objc_release(puVar4);
  func_0x00010befbb60(lVar12);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_112745024;
  uVar1 = *(undefined8 *)(lVar12 + lVar11);
  func_0x00010c08de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493c0(0xc018000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  puStack_258 = puVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar12 + lVar11);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_250 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_1062c71b0;
  uStack_280 = uVar7;
  puStack_278 = puVar3;
  ppuStack_270 = &puStack_1f0;
  _objc_retain(puVar10);
  func_0x00010c1a7f60(puVar10);
  func_0x00010c1677c0(0,puVar10);
  func_0x00010bf8d060();
  uVar1 = 0xc018000000000000;
  if (puVar4 != (undefined *)0x1) {
    uVar1 = 0x4018000000000000;
  }
  _CGAffineTransformMakeTranslation(auStack_2b0,uVar1,0);
  func_0x00010c219960(puVar10);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(puVar10);
  func_0x00010bf03440(0x3fd0000000000000,0,puVar2);
  _objc_release(puVar10);
  _objc_release(puVar10);
  return;
}



/* Entry: 1062c6f40; end: 1062c71af; -[SCContextSpotlightShareActionButton _createShareLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c6f40(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 auStack_d0 [48];
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  func_0x00010c219b60();
  func_0x00010c21ad00(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1);
  _objc_release(puVar2);
  func_0x00010723c928();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1);
  _objc_release(puVar2);
  func_0x00010c21e900(puVar1);
  func_0x00010c1a7f60(puVar1);
  func_0x00010c181cc0(0x447a0000,puVar1);
  puVar2 = PTR_PTR_1126b08d8;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100b74f58(0x4020000000000000,0x3fd3333333333333,0,0x4000000000000000,puVar2,puVar1,
                      puVar3);
  _objc_release(puVar3);
  func_0x00010befbb60(param_1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_112745024;
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c08de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf493c0(0xc018000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_78 = puVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_1062c71b0;
  uStack_a0 = uVar7;
  puStack_98 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  func_0x00010c1a7f60(puVar10);
  func_0x00010c1677c0(0,puVar10);
  func_0x00010bf8d060();
  uVar4 = 0xc018000000000000;
  if (puVar3 != (undefined *)0x1) {
    uVar4 = 0x4018000000000000;
  }
  _CGAffineTransformMakeTranslation(auStack_d0,uVar4,0);
  func_0x00010c219960(puVar10);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(puVar10);
  func_0x00010bf03440(0x3fd0000000000000,0,puVar2);
  _objc_release(puVar10);
  _objc_release(puVar10);
  return;
}



/* Entry: 1062c71b0; end: 1062c72fb; -[SCContextSpotlightShareActionButton _animateInShareLabel:] */

void FUN_1062c71b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010c1a7f60(param_3,param_2,0);
  func_0x00010c1677c0(0,param_3);
  func_0x00010bf8d060();
  uVar2 = 0xc018000000000000;
  if (param_1 != 1) {
    uVar2 = 0x4018000000000000;
  }
  _CGAffineTransformMakeTranslation(&uStack_50,uVar2,0);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(param_3,param_2,&uStack_80);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x1062c72a8;
  puStack_90 = &UNK_110842e18;
  uStack_88 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03440(0x3fd0000000000000,0,puVar1,param_2,0x20004,&puStack_a8,0);
  _objc_release(uStack_88);
  _objc_release(param_3);
  return;
}



/* Entry: 1062c72fc; end: 1062c7343; -[SCContextSpotlightShareActionButton _setImageWithIsShareUpsold:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c72fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112745034) = param_3;
  if (*(char *)(param_1 + _DAT_11274503c) == '\x01') {
    func_0x00010be92240(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed9630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateIconViewForCurrentState_112593f30);
  return;
}



/* Entry: 1062c7344; end: 1062c742f; -[SCContextSpotlightShareActionButton _performPulsatingUpsellAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c7344(long param_1,undefined8 param_2)

{
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _CGAffineTransformMakeScale(&uStack_60,0,0);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(*(undefined8 *)(param_1 + _DAT_112745024),param_2,&uStack_90);
  func_0x00010bea4960(param_1,param_2,1);
  *(undefined1 *)(param_1 + _DAT_11274503c) = 1;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1062c7430;
  puStack_a0 = &UNK_110842e18;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1062c748c;
  puStack_c8 = &UNK_110841f20;
  lStack_c0 = param_1;
  lStack_98 = param_1;
  func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0,&puStack_b8,
                      &puStack_e0);
  return;
}



/* Entry: 1062c7430; end: 1062c748b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c7430(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _CGAffineTransformMakeScale(&uStack_50,0x3ff0000000000000,0x3ff0000000000000);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745024),param_2,
                      &uStack_80);
  return;
}


