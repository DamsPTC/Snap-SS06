/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e681d0; end: 108e68347; -[SCInfoStickerEditorSelectorOptionCell setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e681d0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fec48;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_setSelected__11265c598);
  if (param_3 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    lVar3 = (long)_DAT_11277c7f8;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar1);
    _objc_release(puVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = (long)_DAT_11277c7f8;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0);
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(*(undefined8 *)(param_1 + _DAT_11277c7fc));
  _objc_release(puVar2);
  return;
}



/* Entry: 108e68348; end: 108e6843f; -[SCInfoStickerEditorSelectorOptionCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e68348(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126dc378;
  _objc_opt_class(PTR_PTR_1126dc378);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar5 = (long)_DAT_11277c800;
  uVar3 = uVar1;
  func_0x00010c071ae0();
  if ((uVar3 & 1) == 0) {
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar1;
    _objc_release(uVar4);
    uVar3 = uVar1;
    func_0x00010c2711a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11277c804));
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c25e840(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11277c808));
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e68440; end: 108e68663; +[SCInfoStickerEditorSelectorOptionCell sizeWithViewModel:constrainedToSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108e68440(double param_1,undefined8 param_2,undefined8 param_3,double param_4,undefined8 param_5
             ,undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126dc378;
  _objc_opt_class(PTR_PTR_1126dc378);
  uVar2 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar1);
  uVar4 = param_7;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  dVar27 = param_1 + -49.0 + -16.0;
  uVar2 = uVar4;
  func_0x00010c2711a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ba0(dVar27,param_2,uVar2);
  dVar26 = param_4;
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010c25e840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ba0(dVar27,param_2,uVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    auVar28._8_8_ = (double)(float)(int)(param_4 + dVar26 + 10.0 + 5.0);
    auVar28._0_8_ = param_1;
    return auVar28;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar23 = (long)_DAT_11277c804;
  uVar19 = *(undefined8 *)(param_7 + lVar23);
  *(undefined **)(param_7 + lVar23) = puVar1;
  _objc_release(uVar19);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_7 + lVar23));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_7 + lVar23));
  _objc_release(puVar1);
  uVar4 = param_7;
  func_0x00010bf4dce0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_7 + lVar23));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar5 = *(long *)(param_7 + lVar23);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_7;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar5;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_7 + lVar23);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_7;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar6;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_7 + lVar23);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_7 + (long)_DAT_11277c7f8);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = 0xc024000000000000;
  uVar15 = uVar9;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar15);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar19);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar17);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    auVar29._8_8_ = param_2;
    auVar29._0_8_ = uVar24;
    return auVar29;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar21 = (long)_DAT_11277c808;
  uVar19 = *(undefined8 *)(lVar5 + lVar21);
  *(undefined **)(lVar5 + lVar21) = puVar1;
  _objc_release(uVar19);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar5 + lVar21));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar5 + lVar21));
  _objc_release(puVar1);
  func_0x00010c1bdb00(*(undefined8 *)(lVar5 + lVar21));
  func_0x00010c1cfce0(*(undefined8 *)(lVar5 + lVar21));
  lVar17 = lVar5;
  func_0x00010bf4dce0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  func_0x00010c219b60(*(undefined8 *)(lVar5 + lVar21));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar11 = *(long *)(lVar5 + lVar21);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_11277c804;
  uVar9 = *(undefined8 *)(lVar5 + lVar22);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar5 + lVar21);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar5;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = 0xc014000000000000;
  uVar19 = uVar10;
  func_0x00010bf493c0(0xc014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar5 + lVar21);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar5 + lVar22);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar24;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar5 + lVar21);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar5 + lVar22);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar15);
  _objc_release(uVar12);
  _objc_release(uVar24);
  _objc_release(uVar19);
  _objc_release(lVar23);
  _objc_release(lVar18);
  _objc_release(uVar10);
  _objc_release(lVar17);
  _objc_release(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    auVar30._8_8_ = param_2;
    auVar30._0_8_ = uVar25;
    return auVar30;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar18 = (long)_DAT_11277c7f8;
  uVar19 = *(undefined8 *)(lVar11 + lVar18);
  *(undefined **)(lVar11 + lVar18) = puVar1;
  _objc_release(uVar19);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar11 + lVar18));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar19 = *(undefined8 *)(lVar11 + lVar18);
  func_0x00010c08c0e0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar19);
  _objc_release(puVar1);
  uVar19 = *(undefined8 *)(lVar11 + lVar18);
  func_0x00010c08c0e0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(lVar11 + lVar18);
  func_0x00010c08c0e0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4026000000000000);
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(lVar11 + lVar18);
  func_0x00010c08c0e0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar19);
  lVar17 = lVar11;
  func_0x00010bf4dce0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  func_0x00010c219b60(*(undefined8 *)(lVar11 + lVar18));
  uVar15 = *(undefined8 *)(lVar11 + lVar18);
  func_0x00010bf348e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar11;
  func_0x00010bf4dce0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar17;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar15;
  func_0x00010bf493a0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar19);
  _objc_release(lVar5);
  _objc_release(lVar17);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(lVar11 + lVar18);
  func_0x00010c2793a0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar11;
  func_0x00010bf4dce0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar15;
  func_0x00010bf493c0(0xc031000000000000,uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar19);
  _objc_release(lVar5);
  _objc_release(lVar17);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(lVar11 + lVar18);
  func_0x00010c2a5060(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar15;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar19);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(lVar11 + lVar18);
  func_0x00010bfe0660(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar15;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar19);
  _objc_release(uVar15);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199c0(0,0,0x4036000000000000,0x4036000000000000,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = 0x401c000000000000;
  uVar6 = 0x401c000000000000;
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(0x401c000000000000,0x401c000000000000,0x4020000000000000,0x4020000000000000,
                      0x4010000000000000,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06f40(puVar1);
  func_0x00010c21fa00(puVar1);
  puVar16 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_opt_new();
  lVar17 = (long)_DAT_11277c7fc;
  uVar19 = *(undefined8 *)(lVar11 + lVar17);
  *(undefined **)(lVar11 + lVar17) = puVar16;
  _objc_release(uVar19);
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(lVar11 + lVar17));
  func_0x00010c19bc80(*(undefined8 *)(lVar11 + lVar17));
  puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(*(undefined8 *)(lVar11 + lVar17));
  _objc_release(puVar16);
  uVar19 = *(undefined8 *)(lVar11 + lVar18);
  func_0x00010c08c0e0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(uVar19);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  auVar31._8_8_ = uVar6;
  auVar31._0_8_ = uVar15;
  return auVar31;
}



/* Entry: 108e68664; end: 108e6891f; -[SCInfoStickerEditorSelectorOptionCell _setupTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e68664(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar20 = (long)_DAT_11277c804;
  uVar15 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar1;
  _objc_release(uVar15);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar20),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar20),param_2,puVar1);
  _objc_release(puVar1);
  lVar18 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar18);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20),param_2,0);
  puStack_98 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  lStack_90 = lVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_88 = lVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4024000000000000,lVar2,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar20);
  lStack_80 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar3;
  func_0x00010bf493c0(0x4030000000000000,uVar3,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar20);
  uStack_78 = uVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11277c7f8);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar5;
  func_0x00010bf493c0(0xc024000000000000,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_98,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar12);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar15);
  _objc_release(lVar19);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar18);
  _objc_release(lStack_88);
  lVar20 = lStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_108e68920;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = PTR__OBJC_CLASS___UILabel_1126aec30;
  uStack_100 = uVar15;
  lStack_f8 = lVar19;
  lStack_f0 = lVar4;
  uStack_e8 = uVar5;
  uStack_e0 = uVar3;
  lStack_d8 = lVar2;
  lStack_d0 = lVar18;
  puStack_c8 = puVar1;
  uStack_c0 = uVar12;
  uStack_b8 = uVar6;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  lVar16 = (long)_DAT_11277c808;
  uVar15 = *(undefined8 *)(lVar20 + lVar16);
  *(undefined **)(lVar20 + lVar16) = puVar7;
  _objc_release(uVar15);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa0a6ac);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar20 + lVar16),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar20 + lVar16),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1bdb00(*(undefined8 *)(lVar20 + lVar16),param_2,0);
  func_0x00010c1cfce0(*(undefined8 *)(lVar20 + lVar16),param_2,0);
  lVar18 = lVar20;
  func_0x00010bf4dce0(lVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar18);
  func_0x00010c219b60(*(undefined8 *)(lVar20 + lVar16),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(lVar20 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11277c804;
  uVar5 = *(undefined8 *)(lVar20 + lVar17);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar20 + lVar16);
  lStack_128 = lVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar20;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar6;
  func_0x00010bf493c0(0xc014000000000000,uVar6,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar20 + lVar16);
  uStack_120 = uVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar20 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar20 + lVar16);
  uStack_118 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar20 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_110 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_128,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar15);
  _objc_release(lVar19);
  _objc_release(lVar4);
  _objc_release(uVar6);
  _objc_release(lVar18);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar19 = (long)_DAT_11277c7f8;
  uVar15 = *(undefined8 *)(lVar2 + lVar19);
  *(undefined **)(lVar2 + lVar19) = puVar1;
  _objc_release(uVar15);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar2 + lVar19),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar15 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar15);
  _objc_release(puVar1);
  uVar15 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4026000000000000);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar15);
  lVar18 = lVar2;
  func_0x00010bf4dce0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar18);
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar19),param_2,0);
  uVar12 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010bf348e0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar2;
  func_0x00010bf4dce0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar18;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar15);
  _objc_release(lVar4);
  _objc_release(lVar18);
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c2793a0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar2;
  func_0x00010bf4dce0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493c0(0xc031000000000000,uVar12,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar15);
  _objc_release(lVar4);
  _objc_release(lVar18);
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c2a5060(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar15);
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010bfe0660(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar15);
  _objc_release(uVar12);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199c0(0,0,0x4036000000000000,0x4036000000000000,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(0x401c000000000000,0x401c000000000000,0x4020000000000000,0x4020000000000000,
                      0x4010000000000000,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06f40(puVar1,param_2,puVar7);
  func_0x00010c21fa00(puVar1,param_2,1);
  puVar13 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_opt_new();
  lVar18 = (long)_DAT_11277c7fc;
  uVar15 = *(undefined8 *)(lVar2 + lVar18);
  *(undefined **)(lVar2 + lVar18) = puVar13;
  _objc_release(uVar15);
  puVar13 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(lVar2 + lVar18),param_2,puVar13);
  func_0x00010c19bc80(*(undefined8 *)(lVar2 + lVar18),param_2,
                      *(undefined8 *)PTR__kCAFillRuleEvenOdd_110346ce8);
  puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(*(undefined8 *)(lVar2 + lVar18),param_2,puVar14);
  _objc_release(puVar13);
  uVar15 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(uVar15);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e68920; end: 108e68c3b; -[SCInfoStickerEditorSelectorOptionCell _setupSubTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e68920(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar16 = (long)_DAT_11277c808;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar15);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa0a6ac);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar16),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar16),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar16),param_2,0);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar16),param_2,0);
  lVar18 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar18);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11277c804;
  uVar3 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  lStack_88 = lVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar4;
  func_0x00010bf493c0(0xc014000000000000,uVar4,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar16);
  uStack_80 = uVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar16);
  uStack_78 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar12);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar15);
  _objc_release(lVar19);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar18);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar19 = (long)_DAT_11277c7f8;
  uVar15 = *(undefined8 *)(lVar2 + lVar19);
  *(undefined **)(lVar2 + lVar19) = puVar1;
  _objc_release(uVar15);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar2 + lVar19),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar15 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar15);
  _objc_release(puVar1);
  uVar15 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4026000000000000);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar15);
  lVar18 = lVar2;
  func_0x00010bf4dce0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar18);
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar19),param_2,0);
  uVar12 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010bf348e0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar2;
  func_0x00010bf4dce0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar18;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar15);
  _objc_release(lVar5);
  _objc_release(lVar18);
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c2793a0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar2;
  func_0x00010bf4dce0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493c0(0xc031000000000000,uVar12,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar15);
  _objc_release(lVar5);
  _objc_release(lVar18);
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c2a5060(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar15);
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010bfe0660(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar15);
  _objc_release(uVar12);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199c0(0,0,0x4036000000000000,0x4036000000000000,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(0x401c000000000000,0x401c000000000000,0x4020000000000000,0x4020000000000000,
                      0x4010000000000000,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06f40(puVar1,param_2,puVar11);
  func_0x00010c21fa00(puVar1,param_2,1);
  puVar13 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_opt_new();
  lVar18 = (long)_DAT_11277c7fc;
  uVar15 = *(undefined8 *)(lVar2 + lVar18);
  *(undefined **)(lVar2 + lVar18) = puVar13;
  _objc_release(uVar15);
  puVar13 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(lVar2 + lVar18),param_2,puVar13);
  func_0x00010c19bc80(*(undefined8 *)(lVar2 + lVar18),param_2,
                      *(undefined8 *)PTR__kCAFillRuleEvenOdd_110346ce8);
  puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(*(undefined8 *)(lVar2 + lVar18),param_2,puVar14);
  _objc_release(puVar13);
  uVar15 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(uVar15);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e68c3c; end: 108e69033; -[SCInfoStickerEditorSelectorOptionCell _setupRadioButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e68c3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar9 = (long)_DAT_11277c7f8;
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar7);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar9),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c08c0e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar7);
  _objc_release(puVar1);
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c08c0e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c08c0e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4026000000000000);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c08c0e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar7);
  lVar8 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar8);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9),param_2,0);
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf348e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c2793a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf493c0(0xc031000000000000,uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c2a5060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar7);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bfe0660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar7);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199c0(0,0,0x4036000000000000,0x4036000000000000,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(0x401c000000000000,0x401c000000000000,0x4020000000000000,0x4020000000000000,
                      0x4010000000000000,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06f40(puVar1,param_2,puVar4);
  func_0x00010c21fa00(puVar1,param_2,1);
  puVar5 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_opt_new();
  lVar8 = (long)_DAT_11277c7fc;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar5;
  _objc_release(uVar7);
  puVar5 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_1 + lVar8),param_2,puVar5);
  func_0x00010c19bc80(*(undefined8 *)(param_1 + lVar8),param_2,
                      *(undefined8 *)PTR__kCAFillRuleEvenOdd_110346ce8);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar8),param_2,puVar6);
  _objc_release(puVar5);
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c08c0e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(uVar7);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e69034; end: 108e69043; -[SCInfoStickerEditorSelectorOptionCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e69034(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c800);
}



/* Entry: 108e69044; end: 108e690b3; -[SCInfoStickerEditorSelectorOptionCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e69044(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c800,0);
  _objc_storeStrong(param_1 + _DAT_11277c7fc,0);
  _objc_storeStrong(param_1 + _DAT_11277c7f8,0);
  _objc_storeStrong(param_1 + _DAT_11277c808,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c804,0);
  return;
}



/* Entry: 108e690b4; end: 108e6928f; -[SCStoryInviteStickerSelectorManager initWithEditingSticker:] */

undefined ** FUN_108e690b4(undefined *param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_3;
  _objc_retain(param_3);
  puStack_60 = PTR_PTR_1126fec50;
  ppuVar5 = &puStack_68;
  puStack_68 = param_1;
  _objc_msgSendSuper2(ppuVar5,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126bb320;
  if (ppuVar5 != (undefined **)0x0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    ppuVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    ppuVar6 = param_3;
    if (((ulong)ppuVar1 & 1) == 0) {
      ppuVar6 = (undefined **)0x0;
    }
    _objc_retain(ppuVar6);
    _objc_release(param_3);
    puVar2 = ppuVar5[1];
    ppuVar5[1] = (undefined *)ppuVar6;
    _objc_release(puVar2);
    puVar2 = ppuVar5[1];
    func_0x00010c25b720();
    ppuVar5[2] = (undefined *)(ulong)(puVar2 == (undefined *)0x0);
    puVar2 = PTR_PTR_1126dc378;
    _objc_alloc();
    puVar3 = puVar2;
    func_0x0001092019e8();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000108ea24e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0534a0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126dc378;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x000109201a00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x000108ea24c8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0534a0();
    _objc_release(puVar8);
    _objc_release(puVar4);
    ppuVar6 = &puStack_58;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_58 = puVar2;
    puStack_50 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = ppuVar5[3];
    ppuVar5[3] = puVar4;
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  if (ppuVar6 == (undefined **)0x0) {
    uVar7 = 3;
  }
  else {
    if (ppuVar6 != (undefined **)0x1) {
      return param_3;
    }
    uVar7 = 0;
  }
  ppuVar5 = (undefined **)param_3[1];
                    /* WARNING: Could not recover jumptable at 0x00010c20ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(ppuVar5,PTR_s_setStoryType__112661198,uVar7);
  return ppuVar5;
}



/* Entry: 108e69290; end: 108e692b3; -[SCStoryInviteStickerSelectorManager optionSelectedAtIndex:] */

void FUN_108e69290(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 3;
  }
  else {
    if (param_3 != 1) {
      return;
    }
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c20ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setStoryType__112661198,uVar1);
  return;
}



/* Entry: 108e692b4; end: 108e692bb; -[SCStoryInviteStickerSelectorManager startIndex] */

undefined8 FUN_108e692b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e692bc; end: 108e692c3; -[SCStoryInviteStickerSelectorManager viewModels] */

undefined8 FUN_108e692bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e692c4; end: 108e692f3; -[SCStoryInviteStickerSelectorManager .cxx_destruct] */

void FUN_108e692c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e692f4; end: 108e692fb; -[SCTopicInfoSticker topics] */

undefined8 FUN_108e692f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e692fc; end: 108e69303; -[SCTopicInfoSticker stickerPillType] */

undefined8 FUN_108e692fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e69304; end: 108e6930b; -[SCTopicInfoSticker setStickerPillType:] */

void FUN_108e69304(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 108e6930c; end: 108e69317; -[SCTopicInfoSticker .cxx_destruct] */

void FUN_108e6930c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e69318; end: 108e6934b; +[SCTopicStickerView placeholderTopic] */

void FUN_108e69318(void)

{
  _objc_alloc(PTR_PTR_1126d2ab8);
  func_0x00010c054400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e6934c; end: 108e693d3; +[SCTopicStickerView viewForStickerPickerWithInteractiveStickerPillType:] */

void FUN_108e6934c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_108e693d4;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_3;
  if (lRam000000011372ea40 != -1) {
    func_0x000107c27d9c(0x11372ea40,&puStack_48);
  }
  uVar1 = uRam000000011372ea38;
  _objc_retain(uRam000000011372ea38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e693d4; end: 108e69443;  */

void FUN_108e693d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126c49c0;
  _objc_alloc();
  puVar3 = PTR_PTR_1126c49c0;
  func_0x00010c0fda40(PTR_PTR_1126c49c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c054360(puVar2,param_2,puVar3,*(undefined8 *)(param_1 + 0x20));
  uVar1 = puRam000000011372ea38;
  puRam000000011372ea38 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108e69444; end: 108e6944b; -[SCTopicStickerView initWithTopicStyle:] */

void FUN_108e69444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c054650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithTopicStyle_pillType__1125f2ba0,param_3,0);
  return;
}



/* Entry: 108e6944c; end: 108e6952f; -[SCTopicStickerView initWithTopicStyle:pillType:] */

undefined8
FUN_108e6944c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d2ab8;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c275660(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c054560(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  if (puVar1 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_3;
    func_0x00010c27dd80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010b780240();
    _objc_release(uVar3);
    func_0x00010c0543e0(param_1,param_2,puVar1,uVar2,param_4);
    _objc_retain();
    uVar3 = param_1;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 108e69530; end: 108e69537; -[SCTopicStickerView initWithTopic:] */

void FUN_108e69530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c054370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithTopic_pillType__1125f2ae8,param_3,0);
  return;
}



/* Entry: 108e69538; end: 108e69547; -[SCTopicStickerView initWithTopic:pillType:] */

void FUN_108e69538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0543f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithTopic_viewType_pillType__1125f2b08,param_3,0x2eef76,param_4);
  return;
}



/* Entry: 108e69548; end: 108e695ff; -[SCTopicStickerView initWithTopic:viewType:pillType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e69548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fec58;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11277c820;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277c824) = param_5;
    func_0x00010c222da0(puVar1);
    func_0x00010c08cdc0(*(undefined8 *)((long)puVar1 + (long)_DAT_11277c828));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e69600; end: 108e69633; -[SCTopicStickerView initWithCoder:] */

void FUN_108e69600(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fec58;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 108e69634; end: 108e69637; -[SCTopicStickerView encodeWithCoder:] */

void FUN_108e69634(void)

{
  return;
}



/* Entry: 108e69638; end: 108e6965b; -[SCTopicStickerView copyWithZone:] */

undefined8 FUN_108e69638(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e6965c; end: 108e6966b; -[SCTopicStickerView displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6965c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf85d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c820),PTR_s_displayName_1125bf108);
  return;
}



/* Entry: 108e6966c; end: 108e696bb; -[SCTopicStickerView text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6966c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c820);
  func_0x00010bf85d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108e696bc; end: 108e69733; -[SCTopicStickerView loggingParameters] */

undefined ** FUN_108e696bc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dad058;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e3deb8;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110e3deb8;
}



/* Entry: 108e69734; end: 108e6973f; -[SCTopicStickerView packId] */

undefined ** FUN_108e69734(void)

{
  return &PTR____CFConstantStringClassReference_110e3deb8;
}



/* Entry: 108e69740; end: 108e697a3; -[SCTopicStickerView shortLoggingName] */

void FUN_108e69740(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110efc618);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e697a4; end: 108e697b3; -[SCTopicStickerView stickerId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e697a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c275290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c820),PTR_s_topicId_11267aec8);
  return;
}



/* Entry: 108e697b4; end: 108e697bb; -[SCTopicStickerView toCTPItem] */

undefined8 FUN_108e697b4(void)

{
  return 0;
}



/* Entry: 108e697bc; end: 108e697c3; -[SCTopicStickerView toCTItemInstance] */

undefined8 FUN_108e697bc(void)

{
  return 0;
}



/* Entry: 108e697c4; end: 108e697cb; -[SCTopicStickerView type] */

undefined8 FUN_108e697c4(void)

{
  return 6;
}



/* Entry: 108e697cc; end: 108e697d3; -[SCTopicStickerView infoType] */

undefined8 FUN_108e697cc(void)

{
  return 6;
}



/* Entry: 108e697d4; end: 108e697e3; -[SCTopicStickerView intrinsicSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e697d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c828),PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 108e697e4; end: 108e69883; -[SCTopicStickerView setViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e697e4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == *(long *)(param_1 + _DAT_11277c82c)) {
    return;
  }
  *(long *)(param_1 + _DAT_11277c82c) = param_3;
  if (*(long *)(param_1 + _DAT_11277c828) != 0) {
    func_0x00010c12c960();
  }
  if (param_3 == 0x3a0799b6) {
    uVar1 = 2;
  }
  else if (param_3 == 0x6233516) {
    uVar1 = 1;
  }
  else {
    if (param_3 != 0x2eef76) {
      return;
    }
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beaa1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setViewTypeToPillStyle__112588210,uVar1);
  return;
}



/* Entry: 108e69884; end: 108e69993; -[SCTopicStickerView _setViewTypeToPillStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e69884(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110efc638);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d4fa8;
  _objc_alloc(PTR_PTR_1126d4fa8);
  lVar5 = param_1;
  func_0x00010c26b700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0513e0(puVar2,param_2,lVar5,0,puVar1,*(undefined8 *)(param_1 + _DAT_11277c824));
  _objc_release(lVar5);
  puVar3 = PTR_PTR_1126d4fb0;
  _objc_alloc();
  func_0x00010c061ce0();
  func_0x00010c20eaa0();
  lVar5 = (long)_DAT_11277c828;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar3;
  _objc_retain(puVar3);
  _objc_release(uVar4);
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c19f0e0(param_1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e69994; end: 108e69a27; -[SCTopicStickerView tappableElementBounds] */

undefined * FUN_108e69994(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d91a8;
  _objc_alloc();
  func_0x00010c005f20(0x3fe0000000000000);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 108e69a28; end: 108e69a2f; -[SCTopicStickerView shouldRespondToTap:] */

undefined8 FUN_108e69a28(void)

{
  return 1;
}



/* Entry: 108e69a30; end: 108e69a8f; -[SCTopicStickerView cycleStickerToNextStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e69a30(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_11277c82c);
  if (lVar2 == 0x2eef76) {
    uVar1 = 0x6233516;
  }
  else if (lVar2 == 0x3a0799b6) {
    uVar1 = 0x2eef76;
  }
  else {
    if (lVar2 != 0x6233516) {
      return;
    }
    uVar1 = 0x3a0799b6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c222db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setViewType__112666590,uVar1);
  return;
}



/* Entry: 108e69a90; end: 108e69a97; -[SCTopicStickerView scaleLimit] */

undefined8 FUN_108e69a90(void)

{
  return 0;
}



/* Entry: 108e69a98; end: 108e69aa7; -[SCTopicStickerView topic] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e69a98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c820);
}



/* Entry: 108e69aa8; end: 108e69ab7; -[SCTopicStickerView viewType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e69aa8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c82c);
}



/* Entry: 108e69ab8; end: 108e69ac7; -[SCTopicStickerView stickerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e69ab8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c828);
}



/* Entry: 108e69ac8; end: 108e69b07; -[SCTopicStickerView setStickerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e69ac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c828;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e69b08; end: 108e69b17; -[SCTopicStickerView pillType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e69b08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c824);
}



/* Entry: 108e69b18; end: 108e69b27; -[SCTopicStickerView setPillType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e69b18(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277c824) = param_3;
  return;
}



/* Entry: 108e69b28; end: 108e69b67; -[SCTopicStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e69b28(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c828,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c820,0);
  return;
}



/* Entry: 108e69b68; end: 108e69b73; +[SCStickerTopicPickerCell reuseIdentifier] */

undefined ** FUN_108e69b68(void)

{
  return &PTR____CFConstantStringClassReference_110efc658;
}



/* Entry: 108e69b74; end: 108e69be7; -[SCStickerTopicPickerCell initWithStyle:reuseIdentifier:] */

undefined1 * FUN_108e69b74(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fec60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e69be8; end: 108e69c97; -[SCStickerTopicPickerCell setTopic:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e69be8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277c830;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010c12c960();
  }
  puVar1 = PTR_PTR_1126c49c0;
  _objc_alloc();
  func_0x00010c054320();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  func_0x00010c255280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d620();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e69c98; end: 108e69f63; -[SCStickerTopicPickerCell layoutSubviews] */

void FUN_108e69c98(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_120 [48];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126fec60;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_5;
  func_0x00010c255280(param_5);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960();
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar7 = param_4 + -30.0;
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar5 = param_3;
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c255280(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar6 = param_4;
  _objc_release(lVar1);
  if (param_4 != dVar7) {
    lVar1 = param_5;
    func_0x00010c255280(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(lVar1);
    _CGAffineTransformMakeScale(&uStack_c0,dVar7 / dVar6,dVar7 / dVar6);
    lVar1 = param_5;
    func_0x00010c255280(param_5);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    func_0x00010c219960();
    _objc_release(lVar1);
  }
  lVar1 = param_5;
  func_0x00010c255280(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar6 = dVar5;
  _objc_release(lVar1);
  if (param_3 < dVar5) {
    lVar1 = param_5;
    func_0x00010c255280(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c255280();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x00010c27a460(&uStack_90,lVar1);
    }
    _CGAffineTransformMakeScale(auStack_120,param_3 / dVar6,param_3 / dVar6);
    _CGAffineTransformConcat(&uStack_f0,&uStack_90,auStack_120);
    lVar2 = param_5;
    func_0x00010c255280(param_5);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uStack_e8;
    uStack_90 = uStack_f0;
    uStack_78 = uStack_d8;
    uStack_80 = uStack_e0;
    uStack_68 = uStack_c8;
    uStack_70 = uStack_d0;
    func_0x00010c219960();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar1);
  uVar3 = 0;
  _CGRectGetMidX(0,0x402e000000000000,param_3,dVar7);
  uVar4 = 0;
  _CGRectGetMidY(0,0x402e000000000000,param_3,dVar7);
  func_0x00010c255280(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(uVar3,uVar4);
  _objc_release(param_5);
  return;
}



/* Entry: 108e69f64; end: 108e69f73; -[SCStickerTopicPickerCell stickerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e69f64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c830);
}



/* Entry: 108e69f74; end: 108e69fb3; -[SCStickerTopicPickerCell setStickerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e69f74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c830;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e69fb4; end: 108e69fc7; -[SCStickerTopicPickerCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e69fb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c830,0);
  return;
}



/* Entry: 108e69fc8; end: 108e6a017; -[SCStickerTopicPickerEmptyView initWithFrame:] */

undefined1 * FUN_108e69fc8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fec68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bdf44e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e6a018; end: 108e6a22f; -[SCStickerTopicPickerEmptyView _createSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6a018(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar5 = (long)_DAT_11277c834;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c165e20(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c1c83a0(0x3fe0000000000000,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5),param_2,
                      &PTR____CFConstantStringClassReference_110efc678);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf34860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf348e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf49480(0x4028000000000000,uVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108e6a230; end: 108e6a23f; -[SCStickerTopicPickerEmptyView label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6a230(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c834);
}



/* Entry: 108e6a240; end: 108e6a27f; -[SCStickerTopicPickerEmptyView setLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6a240(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c834;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e6a280; end: 108e6a293; -[SCStickerTopicPickerEmptyView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6a280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c834,0);
  return;
}



/* Entry: 108e6a294; end: 108e6a2e3; -[SCStickerTopicPickerView initWithFrame:] */

undefined1 * FUN_108e6a294(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fec70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb0340(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e6a2e4; end: 108e6a6ff; -[SCStickerTopicPickerView _setupSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6a2e4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar5 = (long)_DAT_11277c844;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3ff0000000000000,0x3fc999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf493a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c2793a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf493a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe0660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf49420(0x4053800000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf348e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf493a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar4);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010bf20c00(param_1);
  func_0x00010c014e80();
  lVar4 = (long)_DAT_11277c848;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1eeb20(0x4053800000000000,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1fce40(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c167a20(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1);
  lVar4 = param_1;
  func_0x00010bdee3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277c84c);
  *(long *)(param_1 + _DAT_11277c84c) = lVar4;
  _objc_release(uVar3);
  lVar4 = param_1;
  func_0x00010bdee3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277c850);
  *(long *)(param_1 + _DAT_11277c850) = lVar4;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11277c854;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11277c858;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010befbb20(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb20(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb20(*(undefined8 *)(param_1 + lVar4));
  lVar4 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be49390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__layoutMaskLayers_11256fe80);
  return;
}



/* Entry: 108e6a700; end: 108e6a8d7; -[SCStickerTopicPickerView _createGradientIsTop:] */

void FUN_108e6a700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  dVar9 = 0.0;
  uVar10 = 0x3ff0000000000000;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_88 = puVar3;
  func_0x00010bf41680(0,0x3fd0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_80 = puVar3;
  func_0x00010bf41680(0,0x3fa999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_78 = puVar3;
  func_0x00010bf41680(0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar6;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  if ((int)param_3 == 0) {
    func_0x00010c209760(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),puVar1);
  }
  else {
    func_0x00010c209760(0,0x3ff0000000000000,puVar1);
    dVar9 = *(double *)PTR__CGPointZero_110347540;
    uVar10 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  }
  puVar2 = puVar1;
  dVar8 = dVar9;
  func_0x00010c196020(dVar9,uVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_108e6a8d8;
  puStack_c8 = PTR_PTR_1126fec70;
  puStack_d0 = puVar2;
  uStack_c0 = uVar10;
  dStack_b8 = dVar9;
  uStack_b0 = param_3;
  puStack_a8 = puVar1;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_d0,PTR_s_layoutSubviews_112600e60);
  func_0x00010be67320(puVar2);
  puVar1 = puVar2;
  func_0x00010c267f00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f80(dVar8,0,dVar8,0);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2329a0();
  if ((int)puVar1 != 0) {
    puVar1 = puVar2;
    func_0x00010c267f00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822e0(0,-dVar8);
    _objc_release(puVar1);
  }
  func_0x00010be49380(puVar2);
  return;
}



/* Entry: 108e6a8d8; end: 108e6a99b; -[SCStickerTopicPickerView layoutSubviews] */

void FUN_108e6a8d8(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fec70;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010be67320(param_2);
  uVar1 = param_2;
  func_0x00010c267f00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f80(param_1,0,param_1,0);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c2329a0();
  if ((int)uVar1 != 0) {
    uVar1 = param_2;
    func_0x00010c267f00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822e0(0,-param_1);
    _objc_release(uVar1);
  }
  func_0x00010be49380(param_2);
  return;
}



/* Entry: 108e6a99c; end: 108e6a9ef; -[SCStickerTopicPickerView _offsetForCenteringCell] */

double FUN_108e6a99c(undefined8 param_1)

{
  double in_d3;
  
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(param_1);
  return (in_d3 + -78.0) * 0.5;
}



/* Entry: 108e6a9f0; end: 108e6aaaf; -[SCStickerTopicPickerView _layoutMaskLayers] */

/* WARNING: Possible PIC construction at 0x000108e6aa20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108e6aa4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108e6aa7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e6aa50) */
/* WARNING: Removing unreachable block (ram,0x000108e6aa24) */
/* WARNING: Removing unreachable block (ram,0x000108e6aa80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6a9f0(long param_1)

{
  func_0x00010bf20c00();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c858),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 108e6aab0; end: 108e6aabf; -[SCStickerTopicPickerView tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6aab0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c848);
}



/* Entry: 108e6aac0; end: 108e6aacf; -[SCStickerTopicPickerView shouldResetScrollOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e6aac0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c838);
}



/* Entry: 108e6aad0; end: 108e6aadf; -[SCStickerTopicPickerView setShouldResetScrollOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6aad0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c838) = param_3;
  return;
}



/* Entry: 108e6aae0; end: 108e6aaef; -[SCStickerTopicPickerView highlightView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6aae0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c844);
}



/* Entry: 108e6aaf0; end: 108e6ab2f; -[SCStickerTopicPickerView setHighlightView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6aaf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c844;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e6ab30; end: 108e6ab3f; -[SCStickerTopicPickerView topFadeGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6ab30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c84c);
}



/* Entry: 108e6ab40; end: 108e6ab7f; -[SCStickerTopicPickerView setTopFadeGradient:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6ab40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c84c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e6ab80; end: 108e6ab8f; -[SCStickerTopicPickerView bottomFadeGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6ab80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c850);
}



/* Entry: 108e6ab90; end: 108e6abcf; -[SCStickerTopicPickerView setBottomFadeGradient:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6ab90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c850;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e6abd0; end: 108e6abdf; -[SCStickerTopicPickerView centerLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6abd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c854);
}



/* Entry: 108e6abe0; end: 108e6ac1f; -[SCStickerTopicPickerView setCenterLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6abe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c854;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e6ac20; end: 108e6ac2f; -[SCStickerTopicPickerView maskLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6ac20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c858);
}



/* Entry: 108e6ac30; end: 108e6ac6f; -[SCStickerTopicPickerView setMaskLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6ac30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c858;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e6ac70; end: 108e6ac7f; -[SCStickerTopicPickerView highlightedRow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6ac70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c83c);
}



/* Entry: 108e6ac80; end: 108e6ac8f; -[SCStickerTopicPickerView setHighlightedRow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6ac80(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277c83c) = param_3;
  return;
}



/* Entry: 108e6ac90; end: 108e6ac9f; -[SCStickerTopicPickerView lastCheckedYOffsetForHaptics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6ac90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c840);
}



/* Entry: 108e6aca0; end: 108e6acaf; -[SCStickerTopicPickerView setLastCheckedYOffsetForHaptics:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6aca0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277c840) = param_1;
  return;
}



/* Entry: 108e6acb0; end: 108e6ad2f; -[SCStickerTopicPickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6acb0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c858,0);
  _objc_storeStrong(param_1 + _DAT_11277c854,0);
  _objc_storeStrong(param_1 + _DAT_11277c850,0);
  _objc_storeStrong(param_1 + _DAT_11277c84c,0);
  _objc_storeStrong(param_1 + _DAT_11277c844,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c848,0);
  return;
}



/* Entry: 108e6ad30; end: 108e6adab; -[SCStickerTopicPickerViewController init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e6ad30(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fec78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c85c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277c85c) = 0;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277c860) = 0x43e0000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277c864) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e6adac; end: 108e6b53f; -[SCStickerTopicPickerViewController viewDidLoad] */

void FUN_108e6adac(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fec78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126dc380;
  _objc_alloc(PTR_PTR_1126dc380);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar1);
  func_0x00010c1948a0(param_1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf8eee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf8eee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf8eee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf8eee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf8eee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf8eee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf8eee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126dc388;
  _objc_alloc(PTR_PTR_1126dc388);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar1);
  func_0x00010c1db7e0(param_1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0fbbc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0fbbc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0fbbc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0fbbc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0fbbc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0fbbc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = param_1;
  func_0x00010c0fbbc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf493a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar2 = param_1;
  func_0x00010c0fbbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200e60();
  _objc_release(uVar2);
  uVar3 = param_1;
  func_0x00010c0fbbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189840();
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c0fbbc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  func_0x00010c0fbbc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126dc390);
  puVar1 = PTR_PTR_1126dc390;
  func_0x00010c13fda0(PTR_PTR_1126dc390);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125fe0(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
  return;
}



/* Entry: 108e6b540; end: 108e6b587; -[SCStickerTopicPickerViewController updateWithTopics:] */

void FUN_108e6b540(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bee09a0(param_1,param_2,lVar1 != 0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e6b588; end: 108e6b73f; -[SCStickerTopicPickerViewController _updateState:topics:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6b588(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277c85c);
  *(undefined8 *)(param_1 + _DAT_11277c85c) = param_4;
  _objc_release(uVar5);
  func_0x00010c09c7a0(param_1);
  lVar3 = param_1;
  func_0x00010c252440();
  if (param_3 != lVar3) {
    lVar3 = param_1;
    func_0x00010c0fbbc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c267f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c252440(param_1);
    lVar4 = param_1;
    func_0x00010bee9640(param_1,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bee9640(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209fc0(param_1,param_2,param_3);
    func_0x00010c1677c0(0,lVar3);
    func_0x00010c1a7f60(lVar3,param_2,0);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108e6b740;
    puStack_58 = &UNK_110841f80;
    lStack_50 = lVar3;
    _objc_retain(lVar4);
    puStack_98 = puVar1;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_108e6b770;
    puStack_80 = &UNK_110841f20;
    lStack_78 = lVar4;
    lStack_48 = lVar4;
    _objc_retain(lVar4);
    _objc_retain(lVar3);
    func_0x00010bf03420(0x3fd3333333333333,puVar2,param_2,&puStack_70,&puStack_98);
    _objc_release(lStack_78);
    _objc_release(lStack_48);
    _objc_release(lStack_50);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 108e6b740; end: 108e6b76f;  */

/* WARNING: Possible PIC construction at 0x000108e6b758: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e6b75c) */

void FUN_108e6b740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108e6b770; end: 108e6b77b;  */

void FUN_108e6b770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 108e6b77c; end: 108e6b7bf; -[SCStickerTopicPickerViewController _viewForState:] */

void FUN_108e6b77c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    func_0x00010c0fbbc0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0) {
    func_0x00010bf8eee0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e6b7c0; end: 108e6b803; -[SCStickerTopicPickerViewController tableView:numberOfRowsInSection:] */

ulong FUN_108e6b7c0(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010c2759e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  if (0x31 < uVar1) {
    uVar1 = 0x32;
  }
  return uVar1;
}



/* Entry: 108e6b804; end: 108e6b8fb; -[SCStickerTopicPickerViewController tableView:cellForRowAtIndexPath:] */

void FUN_108e6b804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126dc390;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c13fda0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e080(param_3,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010c1fbac0(uVar2,param_2,0);
  func_0x00010c2759e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  uVar4 = param_1;
  func_0x00010c0dfd40(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217740(uVar2,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108e6b8fc; end: 108e6b9eb; -[SCStickerTopicPickerViewController tableView:didSelectRowAtIndexPath:] */

void FUN_108e6b8fc(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  func_0x00010c142240();
  uVar1 = param_1;
  func_0x00010c2759e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (param_4 < uVar2) {
    puVar3 = PTR_PTR_1126c49c0;
    _objc_alloc(PTR_PTR_1126c49c0);
    uVar1 = param_1;
    func_0x00010c2759e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054320(puVar3,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255180();
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 108e6b9ec; end: 108e6ba8b; -[SCStickerTopicPickerViewController scrollViewWillEndDragging:withVelocity:targetContentOffset:] */

void FUN_108e6b9ec(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = *(double *)(param_5 + 8);
  _objc_retain(param_4);
  func_0x00010bf4c7c0(param_4);
  dVar4 = dVar4 + param_1;
  lVar1 = (long)(dVar4 / 78.0);
  lVar2 = lVar1 + -1;
  if (0.0 <= dVar4) {
    lVar2 = lVar1 + 1;
  }
  dVar3 = (double)(long)(dVar4 / 78.0);
  if (ABS((double)lVar2 * 78.0 - dVar4) <= ABS(dVar4 - dVar3 * 78.0)) {
    dVar3 = (double)lVar2;
  }
  dVar4 = dVar3 * 78.0;
  func_0x00010bf4c7c0(param_4);
  _objc_release(param_4);
  *(double *)(param_5 + 8) = dVar4 - dVar3;
  return;
}



/* Entry: 108e6ba8c; end: 108e6babf; -[SCStickerTopicPickerViewController scrollViewWillBeginDragging:] */

void FUN_108e6ba8c(undefined8 param_1)

{
  func_0x00010c0fbbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


