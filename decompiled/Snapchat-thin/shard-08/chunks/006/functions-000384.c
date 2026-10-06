/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062c748c; end: 1062c7493;  */

void FUN_1062c748c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be84850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__pulsatingAnimation_11257ebb0);
  return;
}



/* Entry: 1062c7494; end: 1062c7533; -[SCContextSpotlightShareActionButton _pulsatingAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c7494(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  *(undefined1 *)(param_1 + _DAT_11274503c) = 1;
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1062c7534;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1062c7594;
  puStack_48 = &UNK_110841f20;
  lStack_40 = param_1;
  lStack_18 = param_1;
  func_0x00010bf03440(0x3fe6666666666666,0x3fd5c28f5c28f5c3,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,0x1e,&puStack_38,&puStack_60);
  return;
}



/* Entry: 1062c7534; end: 1062c7593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c7534(long param_1,undefined8 param_2)

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
  
  _CGAffineTransformMakeScale(&uStack_50,0x3feccccccccccccd,0x3feccccccccccccd);
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



/* Entry: 1062c7594; end: 1062c759b;  */

void FUN_1062c7594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resetAnimation_112582230);
  return;
}



/* Entry: 1062c759c; end: 1062c761f; -[SCContextSpotlightShareActionButton _resetAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c759c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = (long)_DAT_112745024;
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_60);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_11274503c) = 0;
  return;
}



/* Entry: 1062c7620; end: 1062c762f; -[SCContextSpotlightShareActionButton isShareUpsold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1062c7620(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745034);
}



/* Entry: 1062c7630; end: 1062c76af; -[SCContextSpotlightShareActionButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c7630(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112745030,0);
  _objc_storeStrong(param_1 + _DAT_11274501c,0);
  _objc_storeStrong(param_1 + _DAT_112745020,0);
  _objc_storeStrong(param_1 + _DAT_11274502c,0);
  _objc_storeStrong(param_1 + _DAT_112745028,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112745024,0);
  return;
}



/* Entry: 1062c76b0; end: 1062c76ff; -[SCContextSpotlightSoundActionButton initWithStyle:] */

undefined1 * FUN_1062c76b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0c20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithStyle__1125f14a8);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062c7700; end: 1062c79bf; -[SCContextSpotlightSoundActionButton setSoundActionButtonView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c7700(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = param_1;
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010c219b60(param_3);
    lVar15 = param_3;
    func_0x00010c08c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(lVar15);
    lVar15 = param_3;
    func_0x00010c08c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(lVar15);
    lVar15 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_112745040;
    func_0x00010c066fe0();
    _objc_release(lVar15);
    puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar15 = param_3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar8 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar10);
    _objc_release(puVar9);
    _objc_release(lVar18);
    _objc_release(uVar8);
    _objc_release(lVar7);
    _objc_release(lVar19);
    _objc_release(uVar6);
    _objc_release(lVar17);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar19 = (long)_DAT_112745040;
  uVar1 = *(undefined8 *)(lVar15 + lVar19);
  *(undefined **)(lVar15 + lVar19) = puVar10;
  _objc_release(uVar1);
  func_0x00010c219b60(*(undefined8 *)(lVar15 + lVar19));
  func_0x00010c160fc0(*(undefined8 *)(lVar15 + lVar19));
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar10;
  func_0x00010bf414e0(0x3fb999999999999a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar15 + lVar19));
  _objc_release(puVar9);
  _objc_release(puVar10);
  uVar1 = *(undefined8 *)(lVar15 + lVar19);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(lVar15 + lVar19);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar1);
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar10;
  func_0x00010bf414e0(0x3fb999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar1 = *(undefined8 *)(lVar15 + lVar19);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar1);
  _objc_release(puVar9);
  _objc_release(puVar10);
  uVar1 = *(undefined8 *)(lVar15 + lVar19);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe8000000000000);
  _objc_release(uVar1);
  lVar16 = lVar15;
  func_0x00010bf4dce0(lVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar16);
  puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar11 = *(undefined8 *)(lVar15 + lVar19);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar16;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar15 + lVar19);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x00010bf4dce0(lVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar15 + lVar19);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar13;
  func_0x00010bf49420(0x4041000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar15 + lVar19);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar14;
  func_0x00010bf49420(0x4041000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar14);
  _objc_release(uVar6);
  _objc_release(uVar13);
  _objc_release(uVar4);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(uVar12);
  _objc_release(uVar1);
  _objc_release(lVar2);
  _objc_release(lVar16);
  _objc_release(uVar11);
  puVar10 = PTR_PTR_1126c96c0;
  _objc_alloc();
  func_0x00010c062aa0(0x4010000000000000,0x4024000000000000);
  lVar19 = (long)_DAT_112745044;
  uVar1 = *(undefined8 *)(lVar15 + lVar19);
  *(undefined **)(lVar15 + lVar19) = puVar10;
  _objc_release(uVar1);
  func_0x00010c219b60(*(undefined8 *)(lVar15 + lVar19));
  lVar16 = lVar15;
  func_0x00010bf4dce0(lVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar16);
  puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar6 = *(undefined8 *)(lVar15 + lVar19);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar16;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar15 + lVar19);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar4);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_release(lVar2);
  _objc_release(lVar16);
  _objc_release(uVar6);
  lVar15 = *(long *)(lVar15 + lVar19);
  func_0x00010c24dbc0(lVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar15 + _DAT_112745044,0);
  _objc_storeStrong(lVar15 + _DAT_112745048,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar15 + _DAT_112745040,0);
  return;
}



/* Entry: 1062c79c0; end: 1062c7f13; -[SCContextSpotlightSoundActionButton _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c79c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar16 = (long)_DAT_112745040;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar16));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fb999999999999a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar16));
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar15);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fb999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar15);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe8000000000000);
  _objc_release(uVar15);
  lVar13 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar13);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar13;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf49420(0x4041000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf49420(0x4041000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar15);
  _objc_release(lVar4);
  _objc_release(lVar13);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126c96c0;
  _objc_alloc();
  func_0x00010c062aa0(0x4010000000000000,0x4024000000000000);
  lVar16 = (long)_DAT_112745044;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
  lVar13 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar13);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar11 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar13;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar12);
  _objc_release(uVar15);
  _objc_release(lVar4);
  _objc_release(lVar13);
  _objc_release(uVar11);
  lVar13 = *(long *)(param_1 + lVar16);
  func_0x00010c24dbc0(lVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar13 + _DAT_112745044,0);
  _objc_storeStrong(lVar13 + _DAT_112745048,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar13 + _DAT_112745040,0);
  return;
}



/* Entry: 1062c7f14; end: 1062c7f63; -[SCContextSpotlightSoundActionButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c7f14(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112745044,0);
  _objc_storeStrong(param_1 + _DAT_112745048,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112745040,0);
  return;
}



/* Entry: 1062c7f64; end: 1062c7fc3; -[SCContextSpotlightSponsorAttributionControl initWithFrame:] */

undefined1 * FUN_1062c7f64(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0c28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    func_0x00010bdeab00(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062c7fc4; end: 1062c8137; -[SCContextSpotlightSponsorAttributionControl configureWithParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c7fc4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c50b0;
  lVar1 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfca940(puVar2,param_2,lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11274504c;
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar7),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    pbVar8 = (byte *)(param_1 + _DAT_112745050);
    *pbVar8 = 0;
  }
  else {
    lVar4 = param_3;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c08fa60();
    pbVar8 = (byte *)(param_1 + _DAT_112745050);
    *pbVar8 = lVar3 != 0;
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112745054);
  *(long *)(param_1 + _DAT_112745054) = lVar1;
  _objc_release(uVar6);
  lVar4 = *(long *)(param_1 + lVar7);
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *pbVar8;
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112745058),param_2,bVar5 & 1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062c8138; end: 1062c821f; -[SCContextSpotlightSponsorAttributionControl _didTapLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c8138(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 != (undefined *)0x0) {
    if (param_1[_DAT_112745050] == '\x01') {
      puVar1 = PTR_PTR_1126b5b00;
      func_0x00010c0cb140(PTR_PTR_1126b5b00);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c11a660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4140();
      _objc_release(puVar2);
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7d540();
      _objc_release(param_1);
      param_1 = puVar1;
    }
    else {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237e40();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1062c8220; end: 1062c8393; -[SCContextSpotlightSponsorAttributionControl _createAndConstrainSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c8220(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4018000000000000);
  _objc_release(lVar2);
  func_0x00010c1b9b80(0,0x4018000000000000,0,0,param_1);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  lVar4 = (long)_DAT_11274505c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1);
  lVar2 = param_1;
  func_0x00010be5bcc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274504c);
  *(long *)(param_1 + _DAT_11274504c) = lVar2;
  _objc_release(uVar3);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar4));
  lVar2 = param_1;
  func_0x00010be5bba0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112745058);
  *(long *)(param_1 + _DAT_112745058) = lVar2;
  _objc_release(uVar3);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bde65d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__constrainSubviews_112557310);
  return;
}



/* Entry: 1062c8394; end: 1062c844f; -[SCContextSpotlightSponsorAttributionControl _makeLabel] */

void FUN_1062c8394(undefined8 param_1,undefined8 param_2)

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
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c181f00(0x443b8000,puVar1,param_2,0);
  func_0x00010c181cc0(0x437a0000,puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062c8450; end: 1062c84e7; -[SCContextSpotlightSponsorAttributionControl _makeIcon] */

void FUN_1062c8450(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new(PTR__OBJC_CLASS___UIImageView_1126aec28);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e48438);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe77e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c1a7f60(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062c84e8; end: 1062c893b; -[SCContextSpotlightSponsorAttributionControl _constrainSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c84e8(long param_1,undefined8 param_2)

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
  long lVar12;
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
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined *puVar30;
  long lVar31;
  long lVar32;
  long lStack_c0;
  undefined8 uStack_b8;
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
  func_0x00010c219b60(param_1,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar31 = (long)_DAT_11274505c;
  lVar2 = *(long *)(param_1 + lVar31);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0x4014000000000000,lVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar31);
  lStack_c0 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493c0(0xc014000000000000,uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar31);
  uStack_b8 = uVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493c0(0x4010000000000000,uVar8,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar31);
  uStack_b0 = uVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493c0(0xc010000000000000,uVar11,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar32 = (long)_DAT_11274504c;
  uVar14 = *(undefined8 *)(param_1 + lVar32);
  uStack_a8 = uVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar32);
  uStack_a0 = uVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf493a0(uVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar32);
  uStack_98 = uVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010bf1ff80(uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar20;
  func_0x00010bf493a0(uVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  lVar31 = (long)_DAT_112745058;
  uVar23 = *(undefined8 *)(param_1 + lVar31);
  uStack_90 = uVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c2793a0(uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar23;
  func_0x00010bf493c0(0x4014000000000000,uVar23,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar31);
  uStack_88 = uVar25;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar26;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar31);
  uStack_80 = uVar27;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar28;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar29;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_c0,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar30);
  _objc_release(puVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
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
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(lVar2 + _DAT_112745060);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062c893c; end: 1062c895b; -[SCContextSpotlightSponsorAttributionControl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c893c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112745060);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062c895c; end: 1062c896f; -[SCContextSpotlightSponsorAttributionControl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c895c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112745060,param_3);
  return;
}



/* Entry: 1062c8970; end: 1062c89db; -[SCContextSpotlightSponsorAttributionControl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c8970(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112745060);
  _objc_storeStrong(param_1 + _DAT_112745054,0);
  _objc_storeStrong(param_1 + _DAT_112745058,0);
  _objc_storeStrong(param_1 + _DAT_11274504c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274505c,0);
  return;
}



/* Entry: 1062c89dc; end: 1062c8a5b; -[SCContextSpotlightStackView initWithHitTestInsets:] */

undefined1 *
FUN_1062c89dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f0c30;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1a8c40(param_1,param_2,param_3,param_4,puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062c8a5c; end: 1062c8c33; -[SCContextSpotlightStackView pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1062c8a5c(double param_1,double param_2,double param_3,double param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar8 = param_1;
  dVar10 = param_2;
  _objc_retain(param_7);
  func_0x00010bf20c00(param_5);
  uVar1 = param_5;
  dVar9 = dVar8;
  dVar11 = dVar10;
  dVar12 = param_3;
  dVar13 = param_4;
  func_0x00010bfe3a80();
  _CGRectContainsPoint
            (dVar8 + dVar11,dVar10 + dVar9,param_3 - (dVar11 + dVar13),param_4 - (dVar9 + dVar12),
             param_1,param_2);
  if ((uVar1 & 1) == 0) {
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uVar1 = param_5;
    func_0x00010bf09ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf52a60();
    if (uVar2 != 0) {
      lVar6 = *plStack_140;
      do {
        uVar7 = 0;
        do {
          if (*plStack_140 != lVar6) {
            _objc_enumerationMutation(uVar1);
          }
          uVar5 = *(ulong *)(lStack_148 + uVar7 * 8);
          uVar3 = uVar5;
          func_0x00010c074c20();
          if (((uVar3 & 1) == 0) && (uVar3 = uVar5, func_0x00010c082800(), (int)uVar3 != 0)) {
            func_0x00010bf512a0(param_1,param_2,param_5,param_6,uVar5);
            func_0x00010c102b20(uVar5,param_6,param_7);
            if ((uVar5 & 1) != 0) {
              uVar4 = 1;
              goto LAB_1062c8bdc;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar2 != uVar7);
        uVar2 = uVar1;
        func_0x00010bf52a60(uVar1,param_6,&uStack_150,auStack_108,0x10);
      } while (uVar2 != 0);
    }
    uVar4 = 0;
LAB_1062c8bdc:
    _objc_release(uVar1);
  }
  else {
    uVar4 = 1;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return uVar4;
  }
  ___stack_chk_fail();
  return param_7;
}



/* Entry: 1062c8c34; end: 1062c8c4b; -[SCContextSpotlightStackView hitTestInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062c8c34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745064);
}



/* Entry: 1062c8c4c; end: 1062c8c63; -[SCContextSpotlightStackView setHitTestInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c8c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112745064);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 1062c8c64; end: 1062c8ecf; -[SCContextSpotlightSurveyButton init] */

undefined1 * FUN_1062c8c64(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f0c38;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c219b60(puVar1);
    func_0x00010052bbec();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar1);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar1);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf414e0(0x3fd3333333333333);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4030000000000000);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar2);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf414e0(0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(puVar2);
    func_0x00010c181e40(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000,
                        puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062c8ed0; end: 1062c8f6b; -[SCContextSpotlightSurveyButton setHighlighted:] */

void FUN_1062c8ed0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0c38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setHighlighted__112647c38,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe3333333333333);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1062c8f6c; end: 1062c8fbb; -[SCContextSpotlightTrendSourceDebugOverlayView init] */

undefined1 * FUN_1062c8f6c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0c40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb1160(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062c8fbc; end: 1062c932f; -[SCContextSpotlightTrendSourceDebugOverlayView _setupView] */

/* WARNING: Possible PIC construction at 0x0001062c92f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001062c948c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062c92f4) */
/* WARNING: Removing unreachable block (ram,0x0001062c932c) */
/* WARNING: Removing unreachable block (ram,0x0001062c94bc) */
/* WARNING: Removing unreachable block (ram,0x0001062c9358) */
/* WARNING: Removing unreachable block (ram,0x0001062c93a4) */
/* WARNING: Removing unreachable block (ram,0x0001062c93c8) */
/* WARNING: Removing unreachable block (ram,0x0001062c947c) */
/* WARNING: Removing unreachable block (ram,0x0001062c930c) */
/* WARNING: Removing unreachable block (ram,0x0001062c9490) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c8fbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  
  func_0x00010c219b60(param_1,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe6666666666666);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar15 = (long)_DAT_112745068;
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar14);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar15));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar15));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar15));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar14);
  _objc_release(lVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar15),PTR_s_setText__1126625f0,
             &PTR____CFConstantStringClassReference_110e48458);
  return;
}



/* Entry: 1062c9330; end: 1062c94ef; -[SCContextSpotlightTrendSourceDebugOverlayView updateWithTrendingLoggingInfo:] */

/* WARNING: Possible PIC construction at 0x0001062c948c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062c9490) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c9330(long param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (param_3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112745068);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e48478;
  }
  else {
    func_0x00010c27bae0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010bf529e0();
    func_0x00010c14de00(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010bf529e0();
    if (uVar5 != 0) {
      uVar5 = 0;
      do {
        uVar2 = param_3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ba0(ppuVar1);
        uVar3 = uVar2;
        func_0x00010c280360();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ba0(ppuVar1);
        _objc_release(uVar3);
        func_0x00010c27b880();
        func_0x00010bf06ba0(ppuVar1);
        uVar3 = uVar2;
        func_0x00010c27b8c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ba0(ppuVar1);
        _objc_release(uVar3);
        _objc_release(uVar2);
        uVar5 = uVar5 + 1;
        uVar2 = param_3;
        func_0x00010bf529e0();
      } while (uVar5 < uVar2);
    }
    uVar4 = *(undefined8 *)(param_1 + _DAT_112745068);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_setText__1126625f0,ppuVar1);
  return;
}



/* Entry: 1062c94f0; end: 1062c9503; -[SCContextSpotlightTrendSourceDebugOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c94f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112745068,0);
  return;
}



/* Entry: 1062c9504; end: 1062c9553; -[SCContextSpotlightTrendingDebugOverlayView init] */

undefined1 * FUN_1062c9504(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0c48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb1160(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062c9554; end: 1062c98cf; -[SCContextSpotlightTrendingDebugOverlayView _setupView] */

/* WARNING: Possible PIC construction at 0x0001062c9890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062c9894) */
/* WARNING: Removing unreachable block (ram,0x0001062c98cc) */
/* WARNING: Removing unreachable block (ram,0x0001062c98ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c9554(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  
  func_0x00010c219b60(param_1,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe6666666666666);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(lVar3);
  func_0x00010c17d4c0(param_1);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar14 = (long)_DAT_11274506c;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar14));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar14));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar14));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar14));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar12);
  _objc_release(lVar14);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release(lVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010beda210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateLabelText__112594228,0);
  return;
}



/* Entry: 1062c98d0; end: 1062c98d3; -[SCContextSpotlightTrendingDebugOverlayView updateWithTrendingLabelMetadata:] */

void FUN_1062c98d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beda210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateLabelText__112594228);
  return;
}



/* Entry: 1062c98d4; end: 1062c9b6b; -[SCContextSpotlightTrendingDebugOverlayView _updateLabelText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c98d4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e485d8);
  }
  else {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e48538);
    uVar7 = param_3;
    func_0x00010c087920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e48558);
    _objc_release(uVar7);
    uVar7 = param_3;
    func_0x00010c087920();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bf529e0();
    _objc_release(uVar7);
    if (uVar2 != 0) {
      uVar7 = 0;
      do {
        uVar2 = param_3;
        func_0x00010c087920();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        func_0x00010c27dd80();
        func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e48578);
        uVar2 = uVar3;
        func_0x00010c0d2940();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar2 != 0) {
          uVar2 = uVar3;
          func_0x00010c0d2940();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d2fa0();
          func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e48598);
          _objc_release(uVar2);
        }
        uVar2 = uVar3;
        func_0x00010c08fb40();
        _objc_retainAutoreleasedReturnValue();
        if (uVar2 != 0) {
          uVar4 = uVar3;
          func_0x00010c08fb40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c08fa60();
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar2);
          if (uVar6 != 0) {
            uVar2 = uVar3;
            func_0x00010c08fb40();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar2;
            func_0x00010c094540();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e485b8);
            _objc_release(uVar4);
            _objc_release(uVar2);
          }
        }
        _objc_release(uVar3);
        uVar7 = uVar7 + 1;
        uVar2 = param_3;
        func_0x00010c087920();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf529e0();
        _objc_release(uVar2);
      } while (uVar7 < uVar3);
    }
  }
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11274506c),param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062c9b6c; end: 1062c9b7f; -[SCContextSpotlightTrendingDebugOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c9b6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274506c,0);
  return;
}



/* Entry: 1062c9b80; end: 1062c9bcf; -[SCContextSpotlightViewCountView init] */

undefined1 * FUN_1062c9b80(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0c50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb1160(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062c9bd0; end: 1062c9dff; -[SCContextSpotlightViewCountView _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c9bd0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(lVar4);
  func_0x00010c219b60(param_1);
  lVar4 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar4);
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ee20();
  lVar4 = (long)_DAT_112745070;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c066fa0(param_1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar4 = (long)_DAT_112745074;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126b0c40;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4024000000000000,0x4024000000000000,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010befbb60(param_1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar4 = (long)_DAT_112745078;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bea9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setUpConstraints_112587db8);
  return;
}



/* Entry: 1062c9e00; end: 1062ca25f; -[SCContextSpotlightViewCountView _setUpConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c9e00(long param_1)

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
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined *puVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar29 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar31 = (long)_DAT_112745070;
  lVar2 = *(long *)(param_1 + lVar31);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar32 = (long)_DAT_112745074;
  uVar16 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf493c0(0x4022000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = (long)_DAT_112745078;
  uVar21 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c2793a0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar21;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar26;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar28);
  _objc_release(uVar27);
  _objc_release(param_1);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(lVar32);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(lVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(lVar31);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
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
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar29) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + _DAT_112745078),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 1062ca260; end: 1062ca26f; -[SCContextSpotlightViewCountView setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ca260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745078),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 1062ca270; end: 1062ca2bf; -[SCContextSpotlightViewCountView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ca270(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112745074,0);
  _objc_storeStrong(param_1 + _DAT_112745078,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112745070,0);
  return;
}



/* Entry: 1062ca2c0; end: 1062ca32b;  */

undefined8 FUN_1062ca2c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b1270;
  func_0x00010c134480(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf1f320(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1062ca32c; end: 1062ca39b;  */

void FUN_1062ca32c(long param_1,int param_2)

{
  if (param_1 == 3) {
    func_0x00010723c910();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 2) {
    func_0x00010723c8f8();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 1) {
    func_0x00010723c8e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_2 != 0) {
    func_0x00010723c8c8();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062ca39c; end: 1062ca423; -[SCSpotlightUpNextHorizontalActionBarView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1062ca39c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0c58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c219b60(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112745080) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112745084) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112745088) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274508c) = 1;
    func_0x00010beb0340(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062ca424; end: 1062caa67; -[SCSpotlightUpNextHorizontalActionBarView _setupSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ca424(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined1 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  undefined *puVar26;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bdd5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_112745090;
  uVar21 = *(undefined8 *)(param_1 + lVar25);
  *(long *)(param_1 + lVar25) = lVar2;
  _objc_release(uVar21);
  func_0x0001062ccd5c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdd6380();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + _DAT_112745094);
  *(long *)(param_1 + _DAT_112745094) = lVar2;
  _objc_release(uVar22);
  _objc_release(uVar21);
  func_0x0001062ccd74();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdd6380();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + _DAT_112745098);
  *(long *)(param_1 + _DAT_112745098) = lVar2;
  _objc_release(uVar22);
  _objc_release(uVar21);
  lVar2 = param_1;
  func_0x00010bdd6a60();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + _DAT_11274509c);
  *(long *)(param_1 + _DAT_11274509c) = lVar2;
  _objc_release(uVar21);
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  lVar23 = (long)_DAT_1127450a0;
  uVar21 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar3;
  _objc_release(uVar21);
  _objc_release(puVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c207380(0x4024000000000000,*(undefined8 *)(param_1 + lVar23));
  func_0x00010befbb60(param_1);
  func_0x00010befbb60(param_1);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf49420(0x4050000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar6;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c08de00(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar12;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar4);
  _objc_release(uVar17);
  _objc_release(param_1);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(lVar25);
  _objc_release(uVar14);
  _objc_release(uVar24);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar22);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar21);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = 0x40;
  puVar3 = puVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar26 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar4);
      }
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar24 = *(undefined8 *)((long)puVar26 * 8);
      uVar21 = uVar24;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar21;
      func_0x00010bf49420(0x404e000000000000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar24;
      func_0x00010bf49420(0x4048000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar18);
      _objc_release(uVar11);
      _objc_release(uVar24);
      _objc_release(uVar22);
      _objc_release(uVar21);
      puVar26 = puVar26 + 1;
    } while (puVar3 != puVar26);
    uVar19 = 0x40;
    puVar3 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  puVar4[_DAT_112745080] = uVar19;
                    /* WARNING: Could not recover jumptable at 0x00010bed2790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1062caa68; end: 1062caa77; -[SCSpotlightUpNextHorizontalActionBarView setComposerPillEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062caa68(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112745080) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed2790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateActionVisibility_112592388);
  return;
}



/* Entry: 1062caa78; end: 1062caa87; -[SCSpotlightUpNextHorizontalActionBarView setFavoriteEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062caa78(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112745084) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed2790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateActionVisibility_112592388);
  return;
}



/* Entry: 1062caa88; end: 1062caa97; -[SCSpotlightUpNextHorizontalActionBarView setRepostEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062caa88(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112745088) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed2790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateActionVisibility_112592388);
  return;
}



/* Entry: 1062caa98; end: 1062caaa7; -[SCSpotlightUpNextHorizontalActionBarView setShareEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062caa98(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274508c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed2790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateActionVisibility_112592388);
  return;
}



/* Entry: 1062caaa8; end: 1062caaaf; -[SCSpotlightUpNextHorizontalActionBarView setFavorited:] */

void FUN_1062caaa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19a6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFavorited_animated__1126443d8,param_3,0);
  return;
}



/* Entry: 1062caab0; end: 1062cab4f; -[SCSpotlightUpNextHorizontalActionBarView setFavorited:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062caab0(long param_1,undefined8 param_2,uint param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  
  bVar3 = *(byte *)(param_1 + _DAT_1127450a4);
  *(char *)(param_1 + _DAT_1127450a4) = (char)param_3;
  uVar1 = 0x14d;
  if (param_3 == 0) {
    uVar1 = 0x14e;
  }
  uVar2 = 0x90;
  if (param_3 == 0) {
    uVar2 = 0xd5;
  }
  func_0x00010bea4720(param_1,param_2,uVar1,uVar2,*(undefined8 *)(param_1 + _DAT_112745094));
  if (((param_3 != 0) && (param_4 != 0)) && (bVar3 != param_3)) {
                    /* WARNING: Could not recover jumptable at 0x00010be74670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__playFavoriteAnimation_11257ab38);
    return;
  }
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdda830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelFavoriteAnimation_1125543a8);
  return;
}



/* Entry: 1062cab50; end: 1062cab57; -[SCSpotlightUpNextHorizontalActionBarView setReposted:] */

void FUN_1062cab50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1eb870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setReposted_animated__112658840,param_3,0);
  return;
}



/* Entry: 1062cab58; end: 1062cacd3; -[SCSpotlightUpNextHorizontalActionBarView setReposted:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062cab58(long param_1,undefined8 param_2,uint param_3,int param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  bVar1 = *(byte *)(param_1 + _DAT_1127450a8);
  *(char *)(param_1 + _DAT_1127450a8) = (char)param_3;
  uVar3 = 0xa1;
  if (param_3 == 0) {
    uVar3 = 0xd5;
  }
  lVar4 = (long)_DAT_112745098;
  func_0x00010bea4720(param_1,param_2,0x3e,uVar3,*(undefined8 *)(param_1 + lVar4));
  uVar5 = (uint)bVar1;
  if ((param_4 == 0) || (uVar5 == param_3)) {
    if (uVar5 == param_3) {
      return;
    }
    if (param_3 == 0) {
      uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    }
    else {
      _CGAffineTransformMakeRotation(&uStack_b0,0x400921fb54442d18);
    }
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfe90c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
  }
  else {
    uVar6 = 0x400921fb54442d18;
    if (param_3 == 0) {
      uVar6 = 0xc022d97c7f3321d2;
    }
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfe90c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1062cacd4;
    puStack_68 = &UNK_110848c48;
    uStack_60 = uVar3;
    uStack_58 = uVar6;
    _objc_retain();
    func_0x00010bf03400(0x3fc999999999999a,puVar2,param_2,&puStack_80);
    _objc_release(uStack_60);
  }
  _objc_release(uVar3);
  return;
}



/* Entry: 1062cacd4; end: 1062cad4b;  */

void FUN_1062cacd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
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
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_80);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  _CGAffineTransformRotate(&uStack_50,*(undefined8 *)(param_1 + 0x28),&uStack_80);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(uVar1,param_2,&uStack_80);
  return;
}



/* Entry: 1062cad4c; end: 1062cafa3; -[SCSpotlightUpNextHorizontalActionBarView _playFavoriteAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062cad4c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
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
  
  lVar8 = (long)_DAT_112745094;
  uVar1 = *(ulong *)(param_1 + lVar8);
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010bf20c00();
    _CGRectIsEmpty();
    if ((uVar2 & 1) == 0) {
      lVar7 = (long)_DAT_1127450ac;
      lVar3 = *(long *)(param_1 + lVar7);
      if (lVar3 == 0) {
        puVar4 = PTR_PTR_1126c96a8;
        _objc_alloc();
        func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
        uVar5 = *(undefined8 *)(param_1 + lVar7);
        *(undefined **)(param_1 + lVar7) = puVar4;
        _objc_release(uVar5);
        func_0x00010c21e900(*(undefined8 *)(param_1 + lVar7),param_2,0);
        func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar7));
        lVar3 = *(long *)(param_1 + lVar7);
      }
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = *(long *)(param_1 + lVar8);
      _objc_release();
      if (lVar3 != lVar9) {
        func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8),param_2,
                            *(undefined8 *)(param_1 + lVar7));
      }
      uVar10 = 0;
      func_0x00010c1739e0(0,0,0x4036000000000000,0x4036000000000000,*(undefined8 *)(param_1 + lVar7)
                         );
      uVar6 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010bf20c00(uVar1);
      _CGRectGetMidX();
      uVar5 = uVar10;
      func_0x00010bf20c00(uVar1);
      _CGRectGetMidY();
      func_0x00010bf51200(uVar10,uVar5,uVar6,param_2,uVar1);
      func_0x00010c17a6a0(*(undefined8 *)(param_1 + lVar7));
      func_0x00010bdda820(param_1);
      _CGAffineTransformMakeScale(&uStack_90,0x3fd3333333333333,0x3fd3333333333333);
      uStack_b8 = uStack_88;
      uStack_c0 = uStack_90;
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      func_0x00010c219960(*(undefined8 *)(param_1 + lVar7),param_2,&uStack_c0);
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_1062cafa4;
      puStack_d0 = &UNK_110842e18;
      puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_108 = 0xc2000000;
      pcStack_100 = FUN_1062cb014;
      puStack_f8 = &UNK_110841f20;
      uVar6 = 0x3fc47ae147ae147b;
      lStack_f0 = param_1;
      lStack_c8 = param_1;
      func_0x00010bf03440(0x3fc47ae147ae147b,0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,
                          param_2,0x20000,&puStack_e8,&puStack_110);
      func_0x00010bf20c00(uVar1);
      _CGRectGetMidX();
      uVar5 = uVar6;
      func_0x00010bf20c00(uVar1);
      _CGRectGetMidY();
      func_0x00010bf51200(uVar6,uVar5,param_1,param_2,uVar1);
      func_0x00010be74940(param_1);
      func_0x00010be74720(uVar6,uVar5,param_1,param_2,uVar1);
    }
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 1062cafa4; end: 1062cb013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062cafa4(long param_1,undefined8 param_2)

{
  long lVar1;
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
  
  lVar1 = (long)_DAT_1127450ac;
  func_0x00010c1677c0(0x3fd0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
  _CGAffineTransformMakeScale(&uStack_50,0x3ffccccccccccccd,0x3ffccccccccccccd);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),param_2,&uStack_80);
  return;
}



/* Entry: 1062cb014; end: 1062cb08b;  */

void FUN_1062cb014(long param_1,int param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_2 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_1062cb08c;
    puStack_20 = &UNK_110842e18;
    uStack_18 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf03440(0x3fc47ae147ae147b,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0,
                        &puStack_38,0);
  }
  return;
}



/* Entry: 1062cb08c; end: 1062cb0fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062cb08c(long param_1,undefined8 param_2)

{
  long lVar1;
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
  
  lVar1 = (long)_DAT_1127450ac;
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
  _CGAffineTransformMakeScale(&uStack_50,0x3fd3333333333333,0x3fd3333333333333);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),param_2,&uStack_80);
  return;
}



/* Entry: 1062cb0fc; end: 1062cb32f; -[SCSpotlightUpNextHorizontalActionBarView _playHeartPopWithIconView:atCenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062cb0fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  lVar4 = (long)_DAT_1127450b0;
  if (*(long *)(param_3 + lVar4) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_3 + lVar4);
    *(undefined **)(param_3 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c21e900(*(undefined8 *)(param_3 + lVar4));
    func_0x00010c182220(*(undefined8 *)(param_3 + lVar4));
    puVar2 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4036000000000000,0x4036000000000000,PTR_PTR_1126b0c40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_3 + lVar4));
    _objc_release(puVar2);
  }
  func_0x00010befbb60(param_3);
  func_0x00010c1739e0(0,0,0x4036000000000000,0x4036000000000000,*(undefined8 *)(param_3 + lVar4));
  func_0x00010c17a6a0(param_1,param_2,*(undefined8 *)(param_3 + lVar4));
  func_0x00010c1a7f60(*(undefined8 *)(param_3 + lVar4));
  func_0x00010c1a7f60(param_5);
  lVar1 = *(long *)(param_3 + _DAT_1127450b4) + 1;
  *(long *)(param_3 + _DAT_1127450b4) = lVar1;
  _objc_initWeak(auStack_68,param_3);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  puVar2 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  _objc_copyWeak(auStack_78,auStack_68);
  lStack_70 = lVar1;
  func_0x00010c17fb40(puVar2);
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be34f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20(uVar3);
  _objc_release(param_3);
  _objc_release(uVar3);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  return;
}



/* Entry: 1062cb330; end: 1062cb37f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062cb330(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + _DAT_1127450b4) == *(long *)(param_1 + 0x28))) {
    func_0x00010be955c0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062cb380; end: 1062cb3ff; -[SCSpotlightUpNextHorizontalActionBarView _restoreFavoriteIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062cb380(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745094);
  func_0x00010bfe90c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar2 = (long)_DAT_1127450b0;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062cb400; end: 1062cb8cf; -[SCSpotlightUpNextHorizontalActionBarView _playSmallHeartsFanAtCenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062cb400(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  double dVar12;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_1127450b8;
  lVar8 = *(long *)(param_3 + lVar11);
  if (lVar8 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar9 = *(undefined8 *)(param_3 + lVar11);
    *(undefined **)(param_3 + lVar11) = puVar1;
    _objc_release(uVar9);
    func_0x00010c21e900(*(undefined8 *)(param_3 + lVar11),param_4,0);
    func_0x00010c1a7f60(*(undefined8 *)(param_3 + lVar11),param_4,1);
    puVar1 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4028000000000000,0x4028000000000000,PTR_PTR_1126b0c40,param_4,0x14d,0x90);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = 8;
    do {
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
      func_0x00010c01bf60();
      func_0x00010c182220();
      func_0x00010befbb60(*(undefined8 *)(param_3 + lVar11),param_4,puVar2);
      _objc_release(puVar2);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    _objc_release(puVar1);
    lVar8 = *(long *)(param_3 + lVar11);
  }
  func_0x00010befbb60(param_3,param_4,lVar8);
  func_0x00010c1739e0(0,0,0x4036000000000000,0x4036000000000000,*(undefined8 *)(param_3 + lVar11));
  func_0x00010c17a6a0(param_1,param_2,*(undefined8 *)(param_3 + lVar11));
  func_0x00010c1a7f60(*(undefined8 *)(param_3 + lVar11),param_4,0);
  func_0x00010c1677c0(0,*(undefined8 *)(param_3 + lVar11));
  puVar1 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_4,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(0x3fe3333333333333);
  func_0x00010c220360(puVar1,param_4,&PTR__OBJC_CLASS___NSConstantArray_1111808c0);
  ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c54b8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x3fe1111111111111);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_c0 = puVar2;
  func_0x00010c0df720(0x3fe7777777777778);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c54d0;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b8 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&ppuStack_c8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6d00(puVar1,param_4,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar9 = *(undefined8 *)(param_3 + lVar11);
  func_0x00010c08c0e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puStack_258 = puVar1;
  func_0x00010bef6c20();
  _objc_release(uVar9);
  uVar5 = *(ulong *)(param_3 + lVar11);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bf529e0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (uVar10 != 0) {
    uVar10 = 0;
    uStack_228 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_230 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_238 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_240 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_248 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_250 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    do {
      uVar6 = uVar5;
      func_0x00010c0dfd40(uVar5,param_4,uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1739e0(0,0,0x4028000000000000,0x4028000000000000);
      func_0x00010c17a6a0(0x4026000000000000,0x4026000000000000,uVar6);
      uVar7 = uVar5;
      func_0x00010bf529e0(uVar5);
      dVar12 = (6.283185307179586 / (double)uVar7) * (double)uVar10;
      _CGAffineTransformMakeScale(&uStack_f8,0x3fe0000000000000,0x3fe0000000000000);
      _CGAffineTransformRotate(&uStack_130,dVar12,&uStack_f8);
      _CGAffineTransformTranslate(&uStack_f8,0,0xc024000000000000,&uStack_130);
      uStack_128 = uStack_228;
      uStack_130 = uStack_230;
      uStack_118 = uStack_238;
      uStack_120 = uStack_240;
      uStack_108 = uStack_248;
      uStack_110 = uStack_250;
      _CGAffineTransformRotate(&uStack_160,dVar12,&uStack_130);
      _CGAffineTransformTranslate(&uStack_130,0,0xc044000000000000,&uStack_160);
      uStack_158 = uStack_f0;
      uStack_160 = uStack_f8;
      uStack_148 = uStack_e0;
      uStack_150 = uStack_e8;
      uStack_138 = uStack_d0;
      uStack_140 = uStack_d8;
      func_0x00010c219960(uVar6,param_4,&uStack_160);
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      puStack_1b8 = puVar1;
      uStack_1b0 = 0xc2000000;
      pcStack_1a8 = FUN_1062cb8d0;
      puStack_1a0 = &UNK_1108700e8;
      _objc_retain(uVar6);
      uStack_188 = uStack_128;
      uStack_190 = uStack_130;
      uStack_178 = uStack_118;
      uStack_180 = uStack_120;
      uStack_168 = uStack_108;
      uStack_170 = uStack_110;
      puStack_218 = puVar1;
      uStack_210 = 0xc2000000;
      pcStack_208 = FUN_1062cb908;
      puStack_200 = &UNK_11091a938;
      uStack_1f0 = 0x3fc47ae147ae147a;
      uStack_1e0 = uStack_f0;
      uStack_1e8 = uStack_f8;
      uStack_1d0 = uStack_e0;
      uStack_1d8 = uStack_e8;
      uStack_1c0 = uStack_d0;
      uStack_1c8 = uStack_d8;
      uStack_1f8 = uVar6;
      uStack_198 = uVar6;
      _objc_retain(uVar6);
      func_0x00010bf03440(0x3fceb851eb851eb8,0x3fc999999999999a,puVar2,param_4,0x20000,&puStack_1b8,
                          &puStack_218);
      _objc_release(uStack_1f8);
      _objc_release(uStack_198);
      _objc_release(uVar6);
      uVar10 = uVar10 + 1;
      uVar6 = uVar5;
      func_0x00010bf529e0();
    } while (uVar10 < uVar6);
  }
  _objc_release(uVar5);
  puVar1 = puStack_258;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_1062cb8d0;
  uStack_298 = *(undefined8 *)(puVar1 + 0x30);
  uStack_2a0 = *(undefined8 *)(puVar1 + 0x28);
  uStack_288 = *(undefined8 *)(puVar1 + 0x40);
  uStack_290 = *(undefined8 *)(puVar1 + 0x38);
  uStack_278 = *(undefined8 *)(puVar1 + 0x50);
  uStack_280 = *(undefined8 *)(puVar1 + 0x48);
  puStack_270 = &stack0xfffffffffffffff0;
  func_0x00010c219960(*(undefined8 *)(puVar1 + 0x20),param_4,&uStack_2a0);
  return;
}



/* Entry: 1062cb8d0; end: 1062cb907;  */

void FUN_1062cb8d0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uStack_28 = *(undefined8 *)(param_1 + 0x40);
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  uStack_18 = *(undefined8 *)(param_1 + 0x50);
  uStack_20 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_40);
  return;
}



/* Entry: 1062cb908; end: 1062cb9bb;  */

void FUN_1062cb908(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010bf03440(uVar3,0,puVar1);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 1062cb9bc; end: 1062cb9f3;  */

void FUN_1062cb9bc(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uStack_28 = *(undefined8 *)(param_1 + 0x40);
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  uStack_18 = *(undefined8 *)(param_1 + 0x50);
  uStack_20 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_40);
  return;
}



/* Entry: 1062cb9f4; end: 1062cbcab; -[SCSpotlightUpNextHorizontalActionBarView _heartPopAnimation] */

void FUN_1062cb9f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110dc8938);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(0x3fe3333333333333);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010befa120(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111184990);
  func_0x00010befa120(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c54b8);
  func_0x00010befa120(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_1111849a0);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x3fd5555555555556,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc0c0(0,0,0x3e4ccccd,0x3f800000,PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010befa120(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_1111849b0);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x3fe1111111111111,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc0c0(0x3ecccccd,0,0x3f800000,0x3f800000,
                      PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010befa120(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c54d0);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x3fe7777777777778,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc0c0(0,0,0x3e4ccccd,0x3f800000,PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010befa120(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111184990);
  func_0x00010befa120(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111184990);
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c220360(puVar1,param_2,puVar2);
  func_0x00010c1b6d00(puVar1,param_2,puVar3);
  func_0x00010c2160a0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062cbcac; end: 1062cbe6f; -[SCSpotlightUpNextHorizontalActionBarView _cancelFavoriteAnimation] */

/* WARNING: Possible PIC construction at 0x0001062cbe28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001062cbeac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001062cbedc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062cbeb0) */
/* WARNING: Removing unreachable block (ram,0x0001062cbe2c) */
/* WARNING: Removing unreachable block (ram,0x0001062cbe6c) */
/* WARNING: Removing unreachable block (ram,0x0001062cbe50) */
/* WARNING: Removing unreachable block (ram,0x0001062cbee0) */
/* WARNING: Removing unreachable block (ram,0x0001062cbf00) */
/* WARNING: Removing unreachable block (ram,0x0001062cbf08) */
/* WARNING: Removing unreachable block (ram,0x0001062cbf34) */
/* WARNING: Removing unreachable block (ram,0x0001062cbf10) */
/* WARNING: Removing unreachable block (ram,0x0001062cbf14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062cbcac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  *(long *)(param_1 + _DAT_1127450b4) = *(long *)(param_1 + _DAT_1127450b4) + 1;
  func_0x00010be955c0();
  lVar4 = (long)_DAT_1127450ac;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar2);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar4));
  lVar5 = (long)_DAT_1127450b8;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + lVar5);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar2 = *(undefined8 *)(lVar6 * 8);
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12aaa0();
      _objc_release(uVar2);
      lVar6 = lVar6 + 1;
    } while (lVar4 != lVar6);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar5),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 1062cbe70; end: 1062cbf3f; -[SCSpotlightUpNextHorizontalActionBarView _updateActionVisibility] */

/* WARNING: Possible PIC construction at 0x0001062cbeac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001062cbedc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062cbeb0) */
/* WARNING: Removing unreachable block (ram,0x0001062cbee0) */
/* WARNING: Removing unreachable block (ram,0x0001062cbf00) */
/* WARNING: Removing unreachable block (ram,0x0001062cbf08) */
/* WARNING: Removing unreachable block (ram,0x0001062cbf34) */
/* WARNING: Removing unreachable block (ram,0x0001062cbf10) */
/* WARNING: Removing unreachable block (ram,0x0001062cbf14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062cbe70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745090),PTR_s_setHidden__1126479f8,
             (*(byte *)(param_1 + _DAT_112745080) ^ 0xff) & 1);
  return;
}



/* Entry: 1062cbf40; end: 1062cbf4f; -[SCSpotlightUpNextHorizontalActionBarView setShowActionCounts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062cbf40(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274507c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be88190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshActionCounts_11257fa00);
  return;
}



/* Entry: 1062cbf50; end: 1062cbf8f; -[SCSpotlightUpNextHorizontalActionBarView setFavoriteCountText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062cbf50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127450bc);
  *(undefined8 *)(param_1 + _DAT_1127450bc) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be88190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshActionCounts_11257fa00);
  return;
}



/* Entry: 1062cbf90; end: 1062cbfcf; -[SCSpotlightUpNextHorizontalActionBarView setRepostCountText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062cbf90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127450c0);
  *(undefined8 *)(param_1 + _DAT_1127450c0) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be88190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshActionCounts_11257fa00);
  return;
}



/* Entry: 1062cbfd0; end: 1062cc00f; -[SCSpotlightUpNextHorizontalActionBarView setShareCountText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062cbfd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127450c4);
  *(undefined8 *)(param_1 + _DAT_1127450c4) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be88190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshActionCounts_11257fa00);
  return;
}



/* Entry: 1062cc010; end: 1062cc073; -[SCSpotlightUpNextHorizontalActionBarView _refreshActionCounts] */

/* WARNING: Possible PIC construction at 0x0001062cc038: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062cc03c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062cc010(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea30f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setCountText_onButton__1125865e0,
             *(undefined8 *)(param_1 + _DAT_1127450bc),*(undefined8 *)(param_1 + _DAT_112745094));
  return;
}



/* Entry: 1062cc074; end: 1062cc24f; -[SCSpotlightUpNextHorizontalActionBarView _setCountText:onButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062cc074(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  if (((*(char *)(param_1 + _DAT_11274507c) == '\x01') &&
      (lVar2 = param_3, func_0x00010c08fa60(), lVar2 != 0)) && (_objc_retain(param_3), param_3 != 0)
     ) {
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    uStack_78 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c266f60(0x4028000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_110345c48);
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_68 = puVar4;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    param_5 = 2;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_68,&uStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c04e840(puVar3,param_2,param_3,puVar6);
    func_0x00010c16b760(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_3);
  }
  else {
    func_0x00010c16b760(puVar1,param_2,0);
  }
  puVar3 = puVar1;
  func_0x00010c180a40(param_4,param_2,puVar1);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  uVar7 = param_5;
  func_0x00010bf46560(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0c40;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4036000000000000,0x4036000000000000,puVar1,param_2,puVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar7,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar4);
  func_0x00010c180a40(param_5,param_2,uVar7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 1062cc250; end: 1062cc31b; -[SCSpotlightUpNextHorizontalActionBarView _setIconType:color:onButton:] */

void FUN_1062cc250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bf46560(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0c40;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4036000000000000,0x4036000000000000,puVar3,param_2,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c180a40(param_5,param_2,uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062cc31c; end: 1062cc617; -[SCSpotlightUpNextHorizontalActionBarView _buildComposerPill] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062cc31c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  _objc_alloc_init();
  func_0x00010bdce6a0(param_1);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar15 = (long)_DAT_1127450c8;
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar2;
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c219b60(uVar14);
  func_0x0001062ccd2c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar15));
  _objc_release(uVar14);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar15));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f60(0x4030000000000000,*(undefined8 *)PTR__UIFontWeightRegular_110345c40,
                      PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar15));
  _objc_release(puVar2);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar15));
  func_0x00010befbb60(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c08de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c2793a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010bf49520(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf348e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar14);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf51e00();
  uVar14 = *(undefined8 *)(lVar3 + _DAT_1127450cc);
  *(undefined **)(lVar3 + _DAT_1127450cc) = puVar12;
  _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010be88870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar3,PTR_s__refreshPillText_11257fbb8);
  return;
}



/* Entry: 1062cc618; end: 1062cc657; -[SCSpotlightUpNextHorizontalActionBarView setCommentCountText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062cc618(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127450cc);
  *(undefined8 *)(param_1 + _DAT_1127450cc) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be88870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshPillText_11257fbb8);
  return;
}



/* Entry: 1062cc658; end: 1062cc703; -[SCSpotlightUpNextHorizontalActionBarView _refreshPillText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062cc658(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x0001062ccd2c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + _DAT_1127450cc);
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127450c8),param_2,lVar1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e48678);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127450c8),param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062cc704; end: 1062cc75f; -[SCSpotlightUpNextHorizontalActionBarView _buildShareButton] */

void FUN_1062cc704(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001062ccd44();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd6380(param_1,param_2,0x26,uVar1,PTR_s__shareButtonTapped_11258a058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1062cc760; end: 1062cc93b; -[SCSpotlightUpNextHorizontalActionBarView _buildIconButtonWithSIGIconType:a11yLabel:action:] */

void FUN_1062cc760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_retain(param_4);
  func_0x00010bf25cc0(puVar1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIButtonConfiguration_1126c96c8;
  func_0x00010c0fde00(PTR__OBJC_CLASS___UIButtonConfiguration_1126c96c8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b0c40;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4036000000000000,0x4036000000000000,puVar4,param_2,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c1aa6a0(puVar2,param_2,1);
  func_0x00010c1aa680(0x3ff0000000000000,puVar2);
  func_0x00010c181fe0(*(undefined8 *)PTR__NSDirectionalEdgeInsetsZero_1103457d8,
                      *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 8),
                      *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x10),
                      *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x18),puVar2);
  func_0x00010c216420(puVar2,param_2,4);
  func_0x00010c184300(puVar2,param_2,0xffffffffffffffff);
  puVar4 = puVar2;
  func_0x00010bf13c20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4038000000000000);
  _objc_release(puVar4);
  func_0x00010c180a40(puVar1,param_2,puVar2);
  func_0x00010bdce6a0(param_1,param_2,puVar1);
  puVar4 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4038000000000000);
  _objc_release(puVar4);
  func_0x00010c161020(puVar1,param_2,param_4);
  _objc_release(param_4);
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062cc93c; end: 1062cc973; -[SCSpotlightUpNextHorizontalActionBarView _composerPillTapped] */

void FUN_1062cc93c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe40c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062cc974; end: 1062cc9ab; -[SCSpotlightUpNextHorizontalActionBarView _favoriteButtonTapped] */

void FUN_1062cc974(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe40e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062cc9ac; end: 1062cc9e3; -[SCSpotlightUpNextHorizontalActionBarView _repostButtonTapped] */

void FUN_1062cc9ac(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe4100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062cc9e4; end: 1062cca1b; -[SCSpotlightUpNextHorizontalActionBarView _shareButtonTapped] */

void FUN_1062cc9e4(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe4120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062cca1c; end: 1062ccb33; -[SCSpotlightUpNextHorizontalActionBarView _applyPillChromeToView:] */

void FUN_1062cca1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010c219b60(param_3,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fe199999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_3,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4036000000000000);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3ff0000000000000,0x3fc70a3d70a3d70a,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c173280(uVar2,param_2,puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062ccb34; end: 1062ccb53; -[SCSpotlightUpNextHorizontalActionBarView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ccb34(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127450d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062ccb54; end: 1062ccb67; -[SCSpotlightUpNextHorizontalActionBarView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ccb54(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127450d0,param_3);
  return;
}



/* Entry: 1062ccb68; end: 1062ccb77; -[SCSpotlightUpNextHorizontalActionBarView commentCountText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062ccb68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127450cc);
}



/* Entry: 1062ccb78; end: 1062ccb87; -[SCSpotlightUpNextHorizontalActionBarView composerPillEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1062ccb78(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745080);
}



/* Entry: 1062ccb88; end: 1062ccb97; -[SCSpotlightUpNextHorizontalActionBarView favoriteEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1062ccb88(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745084);
}



/* Entry: 1062ccb98; end: 1062ccba7; -[SCSpotlightUpNextHorizontalActionBarView isFavorited] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1062ccb98(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127450a4);
}



/* Entry: 1062ccba8; end: 1062ccbb7; -[SCSpotlightUpNextHorizontalActionBarView repostEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1062ccba8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745088);
}



/* Entry: 1062ccbb8; end: 1062ccbc7; -[SCSpotlightUpNextHorizontalActionBarView isReposted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1062ccbb8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127450a8);
}



/* Entry: 1062ccbc8; end: 1062ccbd7; -[SCSpotlightUpNextHorizontalActionBarView shareEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1062ccbc8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274508c);
}



/* Entry: 1062ccbd8; end: 1062ccbe7; -[SCSpotlightUpNextHorizontalActionBarView showActionCounts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1062ccbd8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274507c);
}



/* Entry: 1062ccbe8; end: 1062ccbf7; -[SCSpotlightUpNextHorizontalActionBarView favoriteCountText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062ccbe8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127450bc);
}



/* Entry: 1062ccbf8; end: 1062ccc07; -[SCSpotlightUpNextHorizontalActionBarView repostCountText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062ccbf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127450c0);
}



/* Entry: 1062ccc08; end: 1062ccc17; -[SCSpotlightUpNextHorizontalActionBarView shareCountText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062ccc08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127450c4);
}



/* Entry: 1062ccc18; end: 1062ccd13; -[SCSpotlightUpNextHorizontalActionBarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ccc18(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127450c4,0);
  _objc_storeStrong(param_1 + _DAT_1127450c0,0);
  _objc_storeStrong(param_1 + _DAT_1127450bc,0);
  _objc_storeStrong(param_1 + _DAT_1127450cc,0);
  _objc_destroyWeak(param_1 + _DAT_1127450d0);
  _objc_storeStrong(param_1 + _DAT_1127450b0,0);
  _objc_storeStrong(param_1 + _DAT_1127450b8,0);
  _objc_storeStrong(param_1 + _DAT_1127450ac,0);
  _objc_storeStrong(param_1 + _DAT_1127450a0,0);
  _objc_storeStrong(param_1 + _DAT_11274509c,0);
  _objc_storeStrong(param_1 + _DAT_112745098,0);
  _objc_storeStrong(param_1 + _DAT_112745094,0);
  _objc_storeStrong(param_1 + _DAT_1127450c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112745090,0);
  return;
}



/* Entry: 1062ccd14; end: 1062ccfb3;  */

void FUN_1062ccd14(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e48698;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e48698,
                      &PTR____CFConstantStringClassReference_110e486b8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}


