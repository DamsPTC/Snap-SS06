/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d598f0; end: 105d598ff;  */

void FUN_105d598f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105d59900; end: 105d5993f;  */

void FUN_105d59900(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d59940; end: 105d59a87; -[SCPopover _animateOut:] */

void FUN_105d59940(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  func_0x00010c2559c0(*(undefined8 *)(param_1 + 8));
  puVar1 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105d59a88;
  puStack_50 = &UNK_110842e18;
  lStack_48 = param_1;
  func_0x00010c00ea00(0x3fb999999999999a);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  _objc_initWeak(auStack_70,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_78,auStack_70);
  _objc_retain(param_3);
  func_0x00010bef78c0(uVar2);
  func_0x00010c24dc40(*(undefined8 *)(param_1 + 8));
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_3);
  return;
}



/* Entry: 105d59a88; end: 105d59a97;  */

void FUN_105d59a88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105d59a98; end: 105d59ad7;  */

void FUN_105d59a98(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d59ad8; end: 105d59bb7; -[SCPopover _makeHostRectFromHostView:insetBy:] */

double FUN_105d59ad8(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  double dVar1;
  
  dVar1 = param_2;
  _objc_retain(param_5);
  func_0x00010bfb68e0(param_5);
  func_0x00010c148fc0(param_5);
  _objc_release(param_5);
  return param_2 + param_1 + dVar1 + 11.0;
}



/* Entry: 105d59bb8; end: 105d59bd3; -[SCPopover _makeSourceRectFromRect:] */

double FUN_105d59bb8(double param_1)

{
  return param_1 + -8.0;
}



/* Entry: 105d59bd4; end: 105d59c43; -[SCPopover _createView] */

void FUN_105d59bd4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010c12c960();
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c16e440();
  func_0x00010c219b60(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x10));
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar2);
  func_0x00010beb11c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdf57f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createViewConstraints_11255af98);
  return;
}



/* Entry: 105d59c44; end: 105d59cfb; -[SCPopover _createContainerView] */

void FUN_105d59c44(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227960(0x47efffffe0000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0,0x4000000000000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3e23d70a);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x10),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105d59cfc; end: 105d59ddb; -[SCPopover _createCaretView] */

void FUN_105d59cfc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + 0x18),param_2,1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4008000000000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2ce0();
  _objc_release(uVar2);
  _CGAffineTransformMakeRotation(&uStack_50,0x3fe921fb54442d18);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x18),param_2,&uStack_80);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x18),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 105d59ddc; end: 105d59e6b; -[SCPopover _setupViewCorners] */

void FUN_105d59ddc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x402a000000000000);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d59e6c; end: 105d59ea7; -[SCPopover _resetConstraintsWithPresentationPoint:] */

void FUN_105d59e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bdf5a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdebd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,PTR_s__createCaretConstraintsWithPrese_1125588f8);
  return;
}



/* Entry: 105d59ea8; end: 105d5a1e7; -[SCPopover _createViewToContainerConstraints] */

double FUN_105d59ea8(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    double param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  double dStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_7,
                      *(undefined8 *)(param_6 + 0x28));
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = *(undefined8 *)(param_6 + 0x38);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_6 + 0x10);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bf493a0(uVar1,param_7,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_6 + 0x38);
  uStack_78 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_6 + 0x10);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bf493a0(uVar3,param_7,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_7,&uStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar6,param_7,puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_6 + 0x28);
  *(undefined **)(param_6 + 0x28) = puVar6;
  _objc_release(uVar11);
  _objc_release(puVar5);
  _objc_release(uVar13);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)(param_6 + 0x48) == 0) {
    uVar11 = *(undefined8 *)(param_6 + 0x28);
    uVar1 = *(undefined8 *)(param_6 + 0x38);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_6 + 0x10);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010bf493a0(uVar1,param_7,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_6 + 0x38);
    uStack_98 = uVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_6 + 0x10);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    param_1 = -8.485280990600586;
    uVar13 = uVar3;
    func_0x00010bf493c0(uVar3,param_7,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = &uStack_98;
    uStack_90 = uVar13;
LAB_105d5a144:
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_7,puVar10,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar11,param_7,puVar6);
    _objc_release(puVar6);
    _objc_release(uVar13);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else if (*(long *)(param_6 + 0x48) == 1) {
    uVar11 = *(undefined8 *)(param_6 + 0x28);
    uVar1 = *(undefined8 *)(param_6 + 0x38);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_6 + 0x10);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010bf493a0(uVar1,param_7,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_6 + 0x38);
    uStack_88 = uVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_6 + 0x10);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 8.485280990600586;
    uVar13 = uVar3;
    func_0x00010bf493c0(uVar3,param_7,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = &uStack_88;
    uStack_80 = uVar13;
    goto LAB_105d5a144;
  }
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_7,
                      *(undefined8 *)(param_6 + 0x28));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_105d5a1e8;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar16 = param_1;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_7,
                      *(undefined8 *)(puVar6 + 0x30));
  func_0x00010bfb68e0(*(undefined8 *)(puVar6 + 0x10));
  _CGRectGetMidX();
  func_0x00010bfb68e0(*(undefined8 *)(puVar6 + 0x10));
  dVar17 = (16.0 - param_3 * 0.5) + 8.485280990600586;
  func_0x00010bfb68e0(*(undefined8 *)(puVar6 + 0x10));
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  dVar14 = param_3 * 0.5 + -16.0 + -8.485280990600586;
  dVar15 = param_1 - dVar16;
  if (param_1 - dVar16 <= dVar17) {
    dVar15 = dVar17;
  }
  if (dVar15 <= dVar14) {
    dVar14 = dVar15;
  }
  uVar3 = *(undefined8 *)(puVar6 + 0x18);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(puVar6 + 0x18);
  uStack_140 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar6 + 0x18);
  uStack_138 = uVar13;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar6 + 0x10);
  func_0x00010bf34860(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  dVar16 = dVar14;
  func_0x00010bf493c0(dVar14,uVar4,param_7,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_130 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_7,&uStack_140,3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bf0a0c0(puVar5,param_7,puVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar6 + 0x30);
  *(undefined **)(puVar6 + 0x30) = puVar8;
  _objc_release(uVar12);
  _objc_release(puVar7);
  _objc_release(uVar1);
  _objc_release(uVar11);
  _objc_release(uVar4);
  _objc_release(uVar13);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release(uVar3);
  if (*(long *)(puVar6 + 0x48) == 0) {
    uVar13 = *(undefined8 *)(puVar6 + 0x30);
    uVar3 = *(undefined8 *)(puVar6 + 0x18);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar6 + 0x38);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(long *)(puVar6 + 0x48) != 1) goto LAB_105d5a46c;
    uVar13 = *(undefined8 *)(puVar6 + 0x30);
    uVar3 = *(undefined8 *)(puVar6 + 0x18);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar6 + 0x38);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = uVar3;
  func_0x00010bf493a0(uVar3,param_7,uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar13,param_7,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release(uVar3);
LAB_105d5a46c:
  puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_7,
                      *(undefined8 *)(puVar6 + 0x30));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return dVar16;
  }
  ___stack_chk_fail();
  uStack_190 = 0x3fe0000000000000;
  puStack_180 = puVar5;
  pcStack_148 = FUN_105d5a4c0;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_188 = dVar14;
  uStack_178 = uVar13;
  uStack_170 = uVar2;
  uStack_168 = uVar9;
  uStack_160 = uVar3;
  puStack_158 = puVar6;
  ppuStack_150 = &puStack_b0;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_7,
                      *(undefined8 *)(puVar7 + 0x20));
  uVar1 = *(undefined8 *)(puVar7 + 0x38);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  dVar16 = 48.97056198120117;
  uVar9 = uVar1;
  func_0x00010bf494e0(0x40487c3b60000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(puVar7 + 0x38);
  uStack_1a8 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf494e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1a0 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_7,&uStack_1a8,2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar7 + 0x20);
  *(undefined **)(puVar7 + 0x20) = puVar6;
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release(uVar1);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_7,
                      *(undefined8 *)(puVar7 + 0x20));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return dVar16;
  }
  ___stack_chk_fail();
  dVar14 = dVar16;
  func_0x00010bde7840();
  param_5 = param_5 + dVar14 * -0.5;
  dVar17 = dVar16;
  _CGRectGetMinX(dVar16,dVar15,param_3,param_4);
  if (dVar17 <= param_5) {
    dVar17 = dVar16;
    _CGRectGetMaxX(dVar16,dVar15,param_3,param_4);
    if (dVar17 < dVar14 + param_5) {
      _CGRectGetMaxX(dVar16,dVar15,param_3,param_4);
      param_5 = dVar16 - dVar14;
    }
  }
  else {
    _CGRectGetMinX(dVar16,dVar15,param_3,param_4);
    param_5 = dVar16;
  }
  return param_5;
}



/* Entry: 105d5a1e8; end: 105d5a4bf; -[SCPopover _createCaretConstraintsWithPresentationPoint:] */

double FUN_105d5a1e8(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    double param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  double dStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar14 = param_1;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_7,
                      *(undefined8 *)(param_6 + 0x30));
  func_0x00010bfb68e0(*(undefined8 *)(param_6 + 0x10));
  _CGRectGetMidX();
  func_0x00010bfb68e0(*(undefined8 *)(param_6 + 0x10));
  dVar15 = (16.0 - param_3 * 0.5) + 8.485280990600586;
  func_0x00010bfb68e0(*(undefined8 *)(param_6 + 0x10));
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  dVar12 = param_3 * 0.5 + -16.0 + -8.485280990600586;
  dVar13 = param_1 - dVar14;
  if (param_1 - dVar14 <= dVar15) {
    dVar13 = dVar15;
  }
  if (dVar13 <= dVar12) {
    dVar12 = dVar13;
  }
  uVar1 = *(undefined8 *)(param_6 + 0x18);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_6 + 0x18);
  uStack_a0 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_6 + 0x18);
  uStack_98 = uVar11;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_6 + 0x10);
  func_0x00010bf34860(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  dVar14 = dVar12;
  func_0x00010bf493c0(dVar12,uVar3,param_7,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_7,&uStack_a0,3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar9;
  func_0x00010bf0a0c0(puVar9,param_7,puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_6 + 0x30);
  *(undefined **)(param_6 + 0x30) = puVar6;
  _objc_release(uVar10);
  _objc_release(puVar5);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar1);
  if (*(long *)(param_6 + 0x48) == 0) {
    uVar11 = *(undefined8 *)(param_6 + 0x30);
    uVar1 = *(undefined8 *)(param_6 + 0x18);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_6 + 0x38);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(long *)(param_6 + 0x48) != 1) goto LAB_105d5a46c;
    uVar11 = *(undefined8 *)(param_6 + 0x30);
    uVar1 = *(undefined8 *)(param_6 + 0x18);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_6 + 0x38);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = uVar1;
  func_0x00010bf493a0(uVar1,param_7,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar11,param_7,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar1);
LAB_105d5a46c:
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_7,
                      *(undefined8 *)(param_6 + 0x30));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return dVar14;
  }
  ___stack_chk_fail();
  uStack_f0 = 0x3fe0000000000000;
  puStack_e0 = puVar9;
  pcStack_a8 = FUN_105d5a4c0;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_e8 = dVar12;
  uStack_d8 = uVar11;
  uStack_d0 = uVar2;
  uStack_c8 = uVar7;
  uStack_c0 = uVar1;
  lStack_b8 = param_6;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_7,
                      *(undefined8 *)(puVar5 + 0x20));
  uVar8 = *(undefined8 *)(puVar5 + 0x38);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  dVar14 = 48.97056198120117;
  uVar7 = uVar8;
  func_0x00010bf494e0(0x40487c3b60000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(puVar5 + 0x38);
  uStack_108 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010bf494e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_100 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_7,&uStack_108,2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(puVar5 + 0x20);
  *(undefined **)(puVar5 + 0x20) = puVar9;
  _objc_release(uVar1);
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar8);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_7,
                      *(undefined8 *)(puVar5 + 0x20));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return dVar14;
  }
  ___stack_chk_fail();
  dVar12 = dVar14;
  func_0x00010bde7840();
  param_5 = param_5 + dVar12 * -0.5;
  dVar15 = dVar14;
  _CGRectGetMinX(dVar14,dVar13,param_3,param_4);
  if (dVar15 <= param_5) {
    dVar15 = dVar14;
    _CGRectGetMaxX(dVar14,dVar13,param_3,param_4);
    if (dVar15 < dVar12 + param_5) {
      _CGRectGetMaxX(dVar14,dVar13,param_3,param_4);
      param_5 = dVar14 - dVar12;
    }
  }
  else {
    _CGRectGetMinX(dVar14,dVar13,param_3,param_4);
    param_5 = dVar14;
  }
  return param_5;
}



/* Entry: 105d5a4c0; end: 105d5a5ef; -[SCPopover _createViewConstraints] */

double FUN_105d5a4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    double param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_7,
                      *(undefined8 *)(param_6 + 0x20));
  uVar1 = *(undefined8 *)(param_6 + 0x38);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  dVar9 = 48.97056198120117;
  uVar2 = uVar1;
  func_0x00010bf494e0(0x40487c3b60000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_6 + 0x38);
  uStack_68 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf494e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_7,&uStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_6 + 0x20);
  *(undefined **)(param_6 + 0x20) = puVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_7,
                      *(undefined8 *)(param_6 + 0x20));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return dVar9;
  }
  ___stack_chk_fail();
  dVar7 = dVar9;
  func_0x00010bde7840();
  param_5 = param_5 + dVar7 * -0.5;
  dVar8 = dVar9;
  _CGRectGetMinX(dVar9,param_2,param_3,param_4);
  if (dVar8 <= param_5) {
    dVar8 = dVar9;
    _CGRectGetMaxX(dVar9,param_2,param_3,param_4);
    if (dVar8 < dVar7 + param_5) {
      _CGRectGetMaxX(dVar9,param_2,param_3,param_4);
      param_5 = dVar9 - dVar7;
    }
  }
  else {
    _CGRectGetMinX(dVar9,param_2,param_3,param_4);
    param_5 = dVar9;
  }
  return param_5;
}



/* Entry: 105d5a5f0; end: 105d5a6f7; -[SCPopover _makeContainerViewFrameWithinHost:presentationPoint:] */

double FUN_105d5a5f0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    double param_5)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1;
  func_0x00010bde7840();
  param_5 = param_5 + dVar1 * -0.5;
  dVar2 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  if (dVar2 <= param_5) {
    dVar2 = param_1;
    _CGRectGetMaxX(param_1,param_2,param_3,param_4);
    if (dVar2 < dVar1 + param_5) {
      _CGRectGetMaxX(param_1,param_2,param_3,param_4);
      param_5 = param_1 - dVar1;
    }
  }
  else {
    _CGRectGetMinX(param_1,param_2,param_3,param_4);
    param_5 = param_1;
  }
  return param_5;
}



/* Entry: 105d5a6f8; end: 105d5a8f7; -[SCPopover _makePresentationPointAnchoredOn:withinHost:] */

undefined1  [16]
FUN_105d5a6f8(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6,double *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar1 = *param_7;
  dVar3 = param_7[2];
  dVar4 = dVar1 + (dVar3 - dVar1) * 0.5;
  dVar2 = dVar1;
  if (dVar3 <= dVar1) {
    dVar2 = dVar3;
    dVar3 = dVar1;
  }
  if (dVar4 <= dVar2) {
    dVar4 = dVar2;
  }
  if (dVar4 <= dVar3) {
    dVar3 = dVar4;
  }
  dVar4 = param_1;
  _CGRectGetMaxX(param_1,param_2,param_3,param_4);
  dVar2 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  if (dVar3 <= dVar2 + 24.485280990600586) {
    dVar3 = dVar2 + 24.485280990600586;
  }
  dVar2 = dVar4 + -24.485280990600586;
  if (dVar3 <= dVar4 + -24.485280990600586) {
    dVar2 = dVar3;
  }
  dVar1 = *param_7;
  FUN_105d5b3c4(dVar2,dVar1,param_7[1],param_7[2],param_7[3]);
  *(undefined8 *)(param_5 + 0x48) = 0;
  dVar4 = dVar1;
  func_0x00010bde7840(param_5);
  dVar3 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  if (dVar1 - dVar4 < dVar3) {
    dVar1 = param_7[4];
    dVar3 = param_7[6];
    dVar4 = dVar1 + (dVar3 - dVar1) * 0.5;
    dVar2 = dVar1;
    if (dVar3 <= dVar1) {
      dVar2 = dVar3;
      dVar3 = dVar1;
    }
    if (dVar4 <= dVar2) {
      dVar4 = dVar2;
    }
    if (dVar4 <= dVar3) {
      dVar3 = dVar4;
    }
    dVar4 = param_1;
    _CGRectGetMaxX(param_1,param_2,param_3,param_4);
    dVar2 = param_1;
    _CGRectGetMinX(param_1,param_2,param_3,param_4);
    if (dVar3 <= dVar2 + 24.485280990600586) {
      dVar3 = dVar2 + 24.485280990600586;
    }
    dVar2 = dVar4 + -24.485280990600586;
    if (dVar3 <= dVar4 + -24.485280990600586) {
      dVar2 = dVar3;
    }
    dVar1 = param_7[4];
    FUN_105d5b3c4(dVar2,dVar1,param_7[5],param_7[6],param_7[7]);
    *(undefined8 *)(param_5 + 0x48) = 1;
    dVar4 = dVar1;
    func_0x00010bde7840(param_5);
    dVar3 = param_1;
    _CGRectGetMaxY(param_1,param_2,param_3,param_4);
    if (dVar3 < dVar1 + dVar4) {
      _CGRectGetMaxY(param_1,param_2,param_3,param_4);
      func_0x00010bde7840(param_5);
      dVar1 = param_1 - param_2;
    }
  }
  auVar5._8_8_ = dVar1;
  auVar5._0_8_ = dVar2;
  return auVar5;
}



/* Entry: 105d5a8f8; end: 105d5a93f; -[SCPopover _containerViewSize] */

undefined1  [16]
FUN_105d5a8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5)

{
  undefined1 auVar1 [16];
  
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x38));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x38));
  auVar1._8_8_ = param_4 + 8.485280990600586;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 105d5a940; end: 105d5a947; -[SCPopover position] */

undefined8 FUN_105d5a940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105d5a948; end: 105d5a9bf; -[SCPopover .cxx_destruct] */

void FUN_105d5a948(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 105d5a9c0; end: 105d5aa83; -[SCPopoverMenu initWithActions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105d5a9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ed018;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127355e8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    func_0x00010bdea520(puVar1);
    func_0x00010bdf3dc0(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcde0(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d5aa84; end: 105d5abbb; -[SCPopoverMenu setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5aa84(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_d8;
  undefined *puStack_d0;
  long lStack_48;
  
  puVar3 = &uStack_120;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_d0 = PTR_PTR_1126ed018;
  lStack_d8 = param_1;
  _objc_msgSendSuper2(&lStack_d8,PTR_s_setBackgroundColor__112639330,param_3);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar5 = *(long *)(param_1 + _DAT_1127355ec);
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
        func_0x00010c16e460(*(undefined8 *)(lStack_118 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar5;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  puVar2 = (undefined1 *)puVar3;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_3 + _DAT_1127355f0);
  *(undefined1 **)(param_3 + _DAT_1127355f0) = puVar2;
  _objc_release(uVar4);
  func_0x00010c16e440(*(undefined8 *)(param_3 + _DAT_1127355f4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105d5abbc; end: 105d5ac23; -[SCPopoverMenu setSeparatorColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5abbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127355f0);
  *(undefined8 *)(param_1 + _DAT_1127355f0) = uVar1;
  _objc_release(uVar2);
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_1127355f4),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d5ac24; end: 105d5ac53; -[SCPopoverMenu separatorColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5ac24(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127355f0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d5ac54; end: 105d5ad73; -[SCPopoverMenu _handleActionTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5ac54(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_1127355f8;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_3;
    func_0x00010beedca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a64c0(lVar1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf440c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_3;
    func_0x00010beedca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf75f40(param_1,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d5ad74; end: 105d5ade7; -[SCPopoverMenu _createSeparatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5ad74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar3 = (long)_DAT_1127355fc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar3),param_2,0x12);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d5ade8; end: 105d5afcf; -[SCPopoverMenu _createActionViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5ade8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lVar10 = (long)_DAT_1127355ec;
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar2;
  _objc_release(uVar6);
  lVar7 = *(long *)(param_1 + _DAT_1127355e8);
  _objc_retain(lVar7);
  lVar9 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      puVar2 = PTR_PTR_1126c44e0;
      _objc_alloc(PTR_PTR_1126c44e0);
      func_0x00010bfeffa0();
      func_0x00010befbd60();
      lVar3 = param_1;
      func_0x00010bf13d40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar2);
      _objc_release(lVar3);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0(puVar2);
      _objc_release(puVar4);
      func_0x00010befa120(*(undefined8 *)(param_1 + lVar10));
      _objc_release(puVar2);
      lVar8 = lVar8 + 1;
    } while (lVar9 != lVar8);
    lVar9 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  func_0x00010bff3fe0();
  lVar9 = (long)_DAT_1127355f4;
  uVar6 = *(undefined8 *)(lVar7 + lVar9);
  *(undefined **)(lVar7 + lVar9) = puVar2;
  _objc_release(uVar6);
  func_0x00010c190b80(*(undefined8 *)(lVar7 + lVar9));
  func_0x00010c166c00(*(undefined8 *)(lVar7 + lVar9));
  func_0x00010c16e060(*(undefined8 *)(lVar7 + lVar9));
  func_0x00010c207380(0x3ff0000000000000,*(undefined8 *)(lVar7 + lVar9));
  func_0x00010c219b60(*(undefined8 *)(lVar7 + lVar9));
  lVar9 = lVar7;
  func_0x00010c29bf00(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bde65b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar7,PTR_s__constrainStackView_112557308);
  return;
}



/* Entry: 105d5afd0; end: 105d5b08b; -[SCPopoverMenu _createStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5afd0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  func_0x00010bff3fe0();
  lVar3 = (long)_DAT_1127355f4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c190b80(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c207380(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bde65b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__constrainStackView_112557308);
  return;
}



/* Entry: 105d5b08c; end: 105d5b313; -[SCPopoverMenu _constrainStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5b08c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = (long)_DAT_1127355f4;
  uVar1 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  uStack_88 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar16);
  uStack_80 = uVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  uStack_78 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf493a0(uVar13,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_release(lVar16);
  _objc_release(param_1);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar15);
  _objc_release(puVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(puVar15 + _DAT_1127355f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d5b314; end: 105d5b333; -[SCPopoverMenu delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5b314(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127355f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d5b334; end: 105d5b347; -[SCPopoverMenu setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5b334(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127355f8,param_3);
  return;
}



/* Entry: 105d5b348; end: 105d5b3c3; -[SCPopoverMenu .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5b348(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127355f8);
  _objc_storeStrong(param_1 + _DAT_1127355f0,0);
  _objc_storeStrong(param_1 + _DAT_1127355ec,0);
  _objc_storeStrong(param_1 + _DAT_1127355e8,0);
  _objc_storeStrong(param_1 + _DAT_1127355f4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127355fc,0);
  return;
}



/* Entry: 105d5b3c4; end: 105d5b45f;  */

undefined1  [16]
FUN_105d5b3c4(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  bVar1 = false;
  if ((param_1 == param_2) && (bVar1 = false, !NAN(param_1) && !NAN(param_4))) {
    bVar1 = param_1 == param_4;
  }
  if (bVar1) {
    dVar2 = param_2 + (param_4 - param_2) * 0.5;
    dVar3 = param_2;
    if (param_4 <= param_2) {
      dVar3 = param_4;
      param_4 = param_2;
    }
    if (dVar2 <= dVar3) {
      dVar2 = dVar3;
    }
    if (dVar2 <= param_4) {
      param_4 = dVar2;
    }
    dVar2 = param_3 + (param_5 - param_3) * 0.5;
    dVar3 = param_3;
    if (param_5 <= param_3) {
      dVar3 = param_5;
      param_5 = param_3;
    }
    if (dVar2 <= dVar3) {
      dVar2 = dVar3;
    }
    dVar3 = param_4;
    dVar4 = param_5;
    if (dVar2 <= param_5) {
      dVar4 = dVar2;
    }
  }
  else {
    dVar3 = param_2;
    dVar4 = param_3;
    if ((param_2 < param_1) && (dVar3 = param_4, dVar4 = param_5, param_1 < param_4)) {
      dVar3 = param_1;
      dVar4 = param_3 + (param_5 - param_3) * ((param_1 - param_2) / (param_4 - param_2));
    }
  }
  auVar5._8_8_ = dVar4;
  auVar5._0_8_ = dVar3;
  return auVar5;
}



/* Entry: 105d5b460; end: 105d5b707;  */

void FUN_105d5b460(double *param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,double param_6)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  for (; param_6 < 0.0; param_6 = param_6 + 6.283185307179586) {
  }
  for (; 6.283185307179586 < param_6; param_6 = param_6 + -6.283185307179586) {
  }
  dVar7 = param_2;
  _CGRectGetMidX(param_2,param_3,param_4,param_5);
  dVar8 = param_2;
  _CGRectGetMidY(param_2,param_3,param_4,param_5);
  dVar4 = param_2;
  _CGRectGetMinX(param_2,param_3,param_4,param_5);
  dVar5 = param_2;
  dVar9 = param_3;
  _CGRectGetMinY(param_2,param_3,param_4,param_5);
  dVar6 = param_6;
  ___sincos_stret();
  *param_1 = dVar7 + -(dVar6 * (dVar5 - dVar8)) + dVar9 * (dVar4 - dVar7);
  param_1[1] = dVar8 + dVar9 * (dVar5 - dVar8) + dVar6 * (dVar4 - dVar7);
  dVar4 = param_2;
  _CGRectGetMaxX(param_2,param_3,param_4,param_5);
  dVar5 = param_2;
  _CGRectGetMinY(param_2,param_3,param_4,param_5);
  pdVar2 = param_1 + 2;
  *pdVar2 = dVar7 + -(dVar6 * (dVar5 - dVar8)) + dVar9 * (dVar4 - dVar7);
  param_1[3] = dVar8 + dVar9 * (dVar5 - dVar8) + dVar6 * (dVar4 - dVar7);
  dVar4 = param_2;
  _CGRectGetMinX(param_2,param_3,param_4,param_5);
  dVar5 = param_2;
  _CGRectGetMaxY(param_2,param_3,param_4,param_5);
  pdVar3 = param_1 + 4;
  *pdVar3 = dVar7 + -(dVar6 * (dVar5 - dVar8)) + dVar9 * (dVar4 - dVar7);
  param_1[5] = dVar8 + dVar9 * (dVar5 - dVar8) + dVar6 * (dVar4 - dVar7);
  dVar4 = param_2;
  _CGRectGetMaxX(param_2,param_3,param_4,param_5);
  _CGRectGetMaxY(param_2,param_3,param_4,param_5);
  pdVar1 = param_1 + 6;
  *pdVar1 = dVar7 + -(dVar6 * (param_2 - dVar8)) + dVar9 * (dVar4 - dVar7);
  param_1[7] = dVar8 + dVar9 * (param_2 - dVar8) + dVar6 * (dVar4 - dVar7);
  if ((1.5707963267948966 < param_6) && (param_6 < 4.71238898038469)) {
    dVar8 = param_1[7];
    dVar7 = *pdVar1;
    param_1[7] = param_1[1];
    *pdVar1 = *param_1;
    param_1[1] = dVar8;
    *param_1 = dVar7;
    dVar8 = param_1[5];
    dVar7 = *pdVar3;
    param_1[5] = param_1[3];
    *pdVar3 = *pdVar2;
    param_1[3] = dVar8;
    *pdVar2 = dVar7;
  }
  return;
}



/* Entry: 105d5b708; end: 105d5b9c7; -[SCActionView initWithAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105d5b708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126ed020;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112735600;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    func_0x00010c219b60(puVar1);
    func_0x00010bdee920(puVar1);
    func_0x00010bdf4ca0(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e460(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e460(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e460(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2131a0(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2131a0(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2131a0(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9700(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9700(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9700(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d5b9c8; end: 105d5ba87; -[SCActionView setBackgroundColor:forControlState:] */

void FUN_105d5b9c8(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  
  _objc_retain(param_3);
  if (param_4 == 5) {
    piVar4 = (int *)&DAT_112735604;
  }
  else if (param_4 == 2) {
    piVar4 = (int *)&DAT_11273560c;
  }
  else {
    if (param_4 != 0) goto LAB_105d5ba38;
    piVar4 = (int *)&DAT_112735608;
  }
  iVar1 = *piVar4;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + (long)iVar1);
  *(undefined8 *)(param_1 + (long)iVar1) = param_3;
  _objc_release(uVar2);
LAB_105d5ba38:
  uVar3 = param_1;
  func_0x00010c071800(param_1);
  func_0x00010be28da0(param_1,param_2,uVar3);
  uVar3 = param_1;
  func_0x00010c074da0();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010c07d660(param_1);
  }
  else {
    uVar3 = 1;
  }
  func_0x00010be2a860(param_1,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d5ba88; end: 105d5bb47; -[SCActionView setTextColor:forControlState:] */

void FUN_105d5ba88(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  
  _objc_retain(param_3);
  if (param_4 == 5) {
    piVar4 = (int *)&DAT_112735610;
  }
  else if (param_4 == 2) {
    piVar4 = (int *)&DAT_112735618;
  }
  else {
    if (param_4 != 0) goto LAB_105d5baf8;
    piVar4 = (int *)&DAT_112735614;
  }
  iVar1 = *piVar4;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + (long)iVar1);
  *(undefined8 *)(param_1 + (long)iVar1) = param_3;
  _objc_release(uVar2);
LAB_105d5baf8:
  uVar3 = param_1;
  func_0x00010c071800(param_1);
  func_0x00010be28da0(param_1,param_2,uVar3);
  uVar3 = param_1;
  func_0x00010c074da0();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010c07d660(param_1);
  }
  else {
    uVar3 = 1;
  }
  func_0x00010be2a860(param_1,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d5bb48; end: 105d5bc07; -[SCActionView setIconColor:forControlState:] */

void FUN_105d5bb48(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  
  _objc_retain(param_3);
  if (param_4 == 5) {
    piVar4 = (int *)&DAT_11273561c;
  }
  else if (param_4 == 2) {
    piVar4 = (int *)&DAT_112735624;
  }
  else {
    if (param_4 != 0) goto LAB_105d5bbb8;
    piVar4 = (int *)&DAT_112735620;
  }
  iVar1 = *piVar4;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + (long)iVar1);
  *(undefined8 *)(param_1 + (long)iVar1) = param_3;
  _objc_release(uVar2);
LAB_105d5bbb8:
  uVar3 = param_1;
  func_0x00010c071800(param_1);
  func_0x00010be28da0(param_1,param_2,uVar3);
  uVar3 = param_1;
  func_0x00010c074da0();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010c07d660(param_1);
  }
  else {
    uVar3 = 1;
  }
  func_0x00010be2a860(param_1,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d5bc08; end: 105d5bc67; -[SCActionView setSelected:] */

void FUN_105d5bc08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c07d660();
  if ((int)param_3 != (int)uVar1) {
    puStack_28 = PTR_PTR_1126ed020;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_setSelected__11265c598,param_3);
    func_0x00010be2a860(param_1);
  }
  return;
}



/* Entry: 105d5bc68; end: 105d5bcc7; -[SCActionView setHighlighted:] */

void FUN_105d5bc68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c074da0();
  if ((int)param_3 != (int)uVar1) {
    puStack_28 = PTR_PTR_1126ed020;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_setHighlighted__112647c38,param_3);
    func_0x00010be2a860(param_1);
  }
  return;
}



/* Entry: 105d5bcc8; end: 105d5bd27; -[SCActionView setEnabled:] */

void FUN_105d5bcc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c071800();
  if ((int)param_3 != (int)uVar1) {
    puStack_28 = PTR_PTR_1126ed020;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_setEnabled__112642f38,param_3);
    func_0x00010be28da0(param_1);
  }
  return;
}



/* Entry: 105d5bd28; end: 105d5bdab; -[SCActionView _handleHighlight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5bd28(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 4;
  if (param_3 == 0) {
    lVar1 = 8;
  }
  lVar2 = 0x20;
  if (param_3 == 0) {
    lVar2 = 0x1c;
  }
  func_0x00010c16e440(param_1,param_2,*(undefined8 *)(param_1 + *(int *)(&DAT_112735600 + lVar1)));
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_112735628));
                    /* WARNING: Could not recover jumptable at 0x00010c216170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273562c),PTR_s_setTintColor__112663280,
             *(undefined8 *)(param_1 + *(int *)(&DAT_112735600 + lVar2)));
  return;
}



/* Entry: 105d5bdac; end: 105d5be2f; -[SCActionView _handleEnable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5bdac(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 8;
  if (param_3 == 0) {
    lVar1 = 0xc;
  }
  lVar2 = 0x1c;
  if (param_3 == 0) {
    lVar2 = 0x24;
  }
  func_0x00010c16e440(param_1,param_2,*(undefined8 *)(param_1 + *(int *)(&DAT_112735600 + lVar1)));
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_112735628));
                    /* WARNING: Could not recover jumptable at 0x00010c216170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273562c),PTR_s_setTintColor__112663280,
             *(undefined8 *)(param_1 + *(int *)(&DAT_112735600 + lVar2)));
  return;
}



/* Entry: 105d5be30; end: 105d5bee7; -[SCActionView _createIconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5be30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112735600);
  func_0x00010bfe6ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  lVar4 = (long)_DAT_11273562c;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar3;
  _objc_release(uVar1);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
  func_0x00010bde6500(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d5bee8; end: 105d5bfb7; -[SCActionView _createTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5bee8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_112735628;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112735600);
  func_0x00010c2711a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23b9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar4));
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde6610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__constrainTitleLabel_112557320);
  return;
}



/* Entry: 105d5bfb8; end: 105d5c26f; -[SCActionView _constrainIconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105d5bfb8(long param_1,undefined8 param_2)

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
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar15 = (long)_DAT_11273562c;
  lVar2 = *(long *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  lStack_a0 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_a8 = lVar3;
  func_0x00010bf49480(0x4020000000000000,lVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  lStack_b0 = lVar2;
  lStack_98 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_b8 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar3;
  func_0x00010bf49520(0xc020000000000000,uVar4,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  uStack_c8 = uVar4;
  uStack_90 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_d8 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4020000000000000,uVar5,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  uStack_88 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  uStack_80 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar15);
  uStack_78 = uVar8;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_98,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d0,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(uStack_d8);
  _objc_release(uStack_c8);
  _objc_release(lStack_c0);
  _objc_release(uStack_b8);
  _objc_release(lStack_b0);
  _objc_release(lStack_a8);
  lVar15 = lStack_a0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar15;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  pcStack_e8 = FUN_105d5c270;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_112735628;
  lVar12 = *(long *)(lVar15 + lVar14);
  uStack_140 = uVar9;
  lStack_138 = lVar3;
  puStack_130 = puVar11;
  uStack_128 = uVar5;
  uStack_120 = uVar10;
  uStack_118 = uVar8;
  uStack_110 = uVar7;
  uStack_108 = uVar4;
  lStack_100 = lVar2;
  uStack_f8 = uVar6;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar12;
  func_0x00010bf493c0(0x4028000000000000,lVar12,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar15 + lVar14);
  lStack_168 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar15;
  func_0x00010bf1ff80(lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf493c0(0xc028000000000000,uVar5,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar15 + lVar14);
  uStack_160 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar15 + _DAT_11273562c);
  func_0x00010c2793a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493c0(0x401c000000000000,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar15 + lVar14);
  uStack_158 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0(lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf49520(0xc028000000000000,uVar9,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_150 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_168,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(lVar15);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(lVar13);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return lVar12;
  }
  ___stack_chk_fail();
  return *(long *)(lVar12 + _DAT_112735600);
}



/* Entry: 105d5c270; end: 105d5c4b3; -[SCActionView _constrainTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105d5c270(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  lVar14 = (long)_DAT_112735628;
  lVar2 = *(long *)(param_1 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0x4028000000000000,lVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  lStack_88 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493c0(0xc028000000000000,uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  uStack_80 = uVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11273562c);
  func_0x00010c2793a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493c0(0x401c000000000000,uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  uStack_78 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf49520(0xc028000000000000,uVar11,param_2,param_1);
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
  _objc_release(uVar9);
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
  return *(long *)(lVar2 + _DAT_112735600);
}



/* Entry: 105d5c4b4; end: 105d5c4c3; -[SCActionView action] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105d5c4b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112735600);
}



/* Entry: 105d5c4c4; end: 105d5c503; -[SCActionView setAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5c4c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112735600;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d5c504; end: 105d5c5e3; -[SCActionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5c504(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112735600,0);
  _objc_storeStrong(param_1 + _DAT_112735624,0);
  _objc_storeStrong(param_1 + _DAT_112735620,0);
  _objc_storeStrong(param_1 + _DAT_11273561c,0);
  _objc_storeStrong(param_1 + _DAT_112735618,0);
  _objc_storeStrong(param_1 + _DAT_112735614,0);
  _objc_storeStrong(param_1 + _DAT_112735610,0);
  _objc_storeStrong(param_1 + _DAT_11273560c,0);
  _objc_storeStrong(param_1 + _DAT_112735604,0);
  _objc_storeStrong(param_1 + _DAT_112735608,0);
  _objc_storeStrong(param_1 + _DAT_112735628,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273562c,0);
  return;
}



/* Entry: 105d5c5e4; end: 105d5c6bb; -[SCPopoverMenuAction initWithTitle:image:completionHandler:] */

undefined1 *
FUN_105d5c5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ed028;
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



/* Entry: 105d5c6bc; end: 105d5c6df; -[SCPopoverMenuAction copyWithZone:] */

undefined8 FUN_105d5c6bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105d5c6e0; end: 105d5c75f; -[SCPopoverMenuAction hash] */

undefined8 * FUN_105d5c6e0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
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
LAB_105d5c810:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105d5c81c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar5 & 1) != 0) {
      lVar4 = *(long *)((long)puVar3 + 8);
      if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = *(long *)((long)puVar3 + 0x10);
        if ((lVar4 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          puVar5 = *(undefined1 **)(param_3 + 0x18);
          if (puVar6 != puVar5) {
            _objc_retainBlock();
            func_0x00010c071ae0(puVar6);
            _objc_release(puVar5);
            goto LAB_105d5c81c;
          }
          goto LAB_105d5c810;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105d5c81c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105d5c760; end: 105d5c837; -[SCPopoverMenuAction isEqual:] */

long FUN_105d5c760(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105d5c810:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105d5c81c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 8);
      if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = *(long *)(param_1 + 0x10);
        if ((lVar4 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          lVar4 = *(long *)(param_1 + 0x18);
          lVar3 = *(long *)(param_3 + 0x18);
          if (lVar4 != lVar3) {
            _objc_retainBlock();
            func_0x00010c071ae0(lVar4);
            _objc_release(lVar3);
            goto LAB_105d5c81c;
          }
          goto LAB_105d5c810;
        }
      }
    }
    lVar4 = 0;
  }
LAB_105d5c81c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 105d5c838; end: 105d5c83f; -[SCPopoverMenuAction title] */

undefined8 FUN_105d5c838(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105d5c840; end: 105d5c847; -[SCPopoverMenuAction image] */

undefined8 FUN_105d5c840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105d5c848; end: 105d5c84f; -[SCPopoverMenuAction completionHandler] */

undefined8 FUN_105d5c848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105d5c850; end: 105d5c88b; -[SCPopoverMenuAction .cxx_destruct] */

void FUN_105d5c850(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d5c88c; end: 105d5c99f;  */

void FUN_105d5c88c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126aed70;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000108edeaf8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar3 = puVar2;
  func_0x000108edef18();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105d5c9a0; end: 105d5c9af;  */

void FUN_105d5c9a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105d5c9b0; end: 105d5cc0b;  */

void FUN_105d5c9b0(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retain(param_2);
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if (((int)puVar2 != 0) &&
       (((((puVar1 = param_1, func_0x00010bf3ec40(), puVar1 == (undefined *)0xfffffffffffffc17 ||
           (puVar1 = param_1, func_0x00010bf3ec40(), puVar1 == (undefined *)0xfffffffffffffc15)) ||
          (puVar1 = param_1, func_0x00010bf3ec40(), puVar1 == (undefined *)0xfffffffffffffc14)) ||
         ((puVar1 = param_1, func_0x00010bf3ec40(), puVar1 == (undefined *)0xfffffffffffffc13 ||
          (puVar1 = param_1, func_0x00010bf3ec40(), puVar1 == (undefined *)0xfffffffffffffc12)))) ||
        ((puVar1 = param_1, func_0x00010bf3ec40(), puVar1 == (undefined *)0xfffffffffffffc0f ||
         ((puVar1 = param_1, func_0x00010bf3ec40(), puVar1 == (undefined *)0xffffffffffffef6e ||
          (lVar3 = param_2, func_0x00010bf48f60(), lVar3 == 0)))))))) {
      _objc_release(param_2);
      puVar2 = param_1;
      _objc_release(param_1);
      puVar1 = PTR_PTR_1126aed70;
      func_0x000108edeaf8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beff480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126aed78;
      _objc_alloc(PTR_PTR_1126aed78);
      puVar4 = puVar2;
      func_0x000108ede7e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x000108ede7b0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c052ec0(puVar2);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar1);
      goto LAB_105d5cbc0;
    }
  }
  _objc_release(param_2);
  puVar2 = param_1;
  _objc_release(param_1);
  FUN_105d5c88c();
  _objc_retainAutoreleasedReturnValue();
LAB_105d5cbc0:
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar7,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 105d5cc0c; end: 105d5cc1b;  */

void FUN_105d5cc0c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105d5cc1c; end: 105d5cc8f; -[SCPreviewFeatureDialogCoordinatorImpl initWithNetworkConnectivityAnnouncer:] */

undefined1 * FUN_105d5cc1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed030;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d5cc90; end: 105d5cc97; -[SCPreviewFeatureDialogCoordinatorImpl responderChainPriority] */

undefined8 FUN_105d5cc90(void)

{
  return 0x7fffffff;
}



/* Entry: 105d5cc98; end: 105d5ccef; -[SCPreviewFeatureDialogCoordinatorImpl showDialog:] */

void FUN_105d5cc98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be6fee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d5ccf0; end: 105d5cd2b; -[SCPreviewFeatureDialogCoordinatorImpl showSomethingWrongDialog] */

void FUN_105d5ccf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_105d5c88c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237000(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d5cd2c; end: 105d5cd6f; -[SCPreviewFeatureDialogCoordinatorImpl showGenericErrorDialog:] */

void FUN_105d5cd2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_105d5c9b0(param_3,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237000(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d5cd70; end: 105d5cdb3; -[SCPreviewFeatureDialogCoordinatorImpl _parentVC] */

void FUN_105d5cd70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f3ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f3d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d5cdb4; end: 105d5cdcb; -[SCPreviewFeatureDialogCoordinatorImpl parentViewControllerDelegate] */

void FUN_105d5cdb4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d5cdcc; end: 105d5cdd7; -[SCPreviewFeatureDialogCoordinatorImpl setParentViewControllerDelegate:] */

void FUN_105d5cdcc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 105d5cdd8; end: 105d5ce03; -[SCPreviewFeatureDialogCoordinatorImpl .cxx_destruct] */

void FUN_105d5cdd8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d5ce04; end: 105d5cf1b; -[SCPreviewFeatureDialogCoordinatorServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5ce04(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_112735648;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar5;
  func_0x00010c0d7980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar2 = PTR_PTR_1126ae720;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105d5cf1c;
  puStack_40 = &UNK_1108e7078;
  _objc_retain(lVar1);
  lStack_38 = lVar1;
  func_0x00010bf11fe0(puVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c44f0;
  _objc_alloc(PTR_PTR_1126c44f0);
  func_0x00010c00c4c0();
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273564c);
  }
  func_0x00010bf9d660(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lStack_38);
  _objc_release(lVar1);
  return;
}



/* Entry: 105d5cf1c; end: 105d5cf4b;  */

void FUN_105d5cf1c(void)

{
  _objc_alloc(PTR_PTR_1126c44e8);
  func_0x00010c02f100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d5cf4c; end: 105d5cf93; -[SCPreviewFeatureDialogCoordinatorServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5cf4c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273564c,0);
  _objc_destroyWeak(param_1 + _DAT_112735648);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735644);
  return;
}



/* Entry: 105d5cf94; end: 105d5d03f; -[SCPreviewFeatureDialogCoordinatorServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5cf94(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112735650;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112735658;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf71d60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105d5d040; end: 105d5d083; -[SCPreviewFeatureDialogCoordinatorServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5d040(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112735658);
  _objc_destroyWeak(param_1 + _DAT_112735654);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735650);
  return;
}



/* Entry: 105d5d084; end: 105d5d0e3; -[SCPreviewHelpLabel drawTextInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5d084(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  long lStack_20;
  undefined *puStack_18;
  
  pdVar1 = (double *)(param_5 + _DAT_11273565c);
  puStack_18 = PTR_PTR_1126ed038;
  lStack_20 = param_5;
  _objc_msgSendSuper2(param_1 + pdVar1[1],param_2 + *pdVar1,param_3 - (pdVar1[1] + pdVar1[3]),
                      param_4 - (*pdVar1 + pdVar1[2]),&lStack_20,PTR_s_drawTextInRect__11252d418);
  return;
}



/* Entry: 105d5d0e4; end: 105d5d0fb; -[SCPreviewHelpLabel edgeInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105d5d0e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273565c);
}



/* Entry: 105d5d0fc; end: 105d5d113; -[SCPreviewHelpLabel setEdgeInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5d0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11273565c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 105d5d114; end: 105d5d33f; -[SCPreviewFeatureHelpLabelImpl initWithConfiguration:tooltipsProvider:] */

undefined1 *
FUN_105d5d114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ed040;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) goto LAB_105d5d314;
  _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
  *(undefined8 *)((long)puVar1 + 0x38) = param_4;
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c44f8;
  _objc_opt_new();
  uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
  *(undefined **)((long)puVar1 + 0x28) = puVar3;
  _objc_release(uVar2);
  func_0x00010c165e20(*(undefined8 *)((long)puVar1 + 0x28));
  func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + 0x28));
  func_0x00010c213040(*(undefined8 *)((long)puVar1 + 0x28));
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)((long)puVar1 + 0x28));
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)((long)puVar1 + 0x28));
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(uVar2);
  func_0x00010c193400(0x4024000000000000,0x402e000000000000,0x4024000000000000,0x402e000000000000,
                      *(undefined8 *)((long)puVar1 + 0x28));
  uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c22f400();
  _objc_release(uVar4);
  if ((uint)uVar2 == 0) {
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c22fd20();
    _objc_release(uVar4);
    if ((int)uVar5 != 0) {
      func_0x000108edef60();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105d5d2d0;
    }
  }
  else {
    func_0x000108ede678();
    _objc_retainAutoreleasedReturnValue();
LAB_105d5d2d0:
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + 0x28));
    _objc_release(uVar4);
  }
  func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + 0x28));
  func_0x00010c1677c0((double)((uint)uVar2 ^ 1),*(undefined8 *)((long)puVar1 + 0x28));
LAB_105d5d314:
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d5d340; end: 105d5d3c7; -[SCPreviewFeatureHelpLabelImpl configureWithView:] */

void FUN_105d5d340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  _objc_storeWeak(param_5 + 0x40,param_7);
  func_0x00010bf20c00(param_7);
  *(undefined8 *)(param_5 + 8) = param_1;
  *(undefined8 *)(param_5 + 0x10) = param_2;
  *(undefined8 *)(param_5 + 0x18) = param_3;
  *(undefined8 *)(param_5 + 0x20) = param_4;
  func_0x00010bf20c00(param_7);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010beb16b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,param_5,PTR_s__setupWithContainerViewBounds__112589f50)
  ;
  return;
}



/* Entry: 105d5d3c8; end: 105d5d4bf; -[SCPreviewFeatureHelpLabelImpl activate] */

void FUN_105d5d3c8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c07e920();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf1fbc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar3);
  lVar5 = param_1;
  func_0x00010bfe0a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    func_0x00010befbb60(lVar3,param_2,lVar5);
  }
  else {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010bf1fbc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fe0(lVar3,param_2,lVar5,lVar4);
    _objc_release(lVar4);
    _objc_release(param_1);
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105d5d4c0; end: 105d5d4c7; -[SCPreviewFeatureHelpLabelImpl responderChainPriority] */

undefined8 FUN_105d5d4c0(void)

{
  return 0x7fffffff;
}



/* Entry: 105d5d4c8; end: 105d5d4d7; -[SCPreviewFeatureHelpLabelImpl snapEditor:didChangeToolBarButtonItemType:selected:] */

void FUN_105d5d4c8(undefined8 param_1)

{
  int in_w4;
  
  if (in_w4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfe2dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hideWithAnimation__1125d6530,1);
    return;
  }
  return;
}



/* Entry: 105d5d4d8; end: 105d5d4ff; -[SCPreviewFeatureHelpLabelImpl helpLabel] */

void FUN_105d5d4d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d5d500; end: 105d5d507; -[SCPreviewFeatureHelpLabelImpl setAlpha:] */

void FUN_105d5d500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105d5d508; end: 105d5d553; -[SCPreviewFeatureHelpLabelImpl setTransformScale:] */

void FUN_105d5d508(undefined8 param_1,long param_2,undefined8 param_3)

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
  
  _CGAffineTransformMakeScale(&uStack_50,param_1,param_1);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_2 + 0x28),param_3,&uStack_80);
  return;
}



/* Entry: 105d5d554; end: 105d5d5ff; -[SCPreviewFeatureHelpLabelImpl hideWithAnimation:] */

void FUN_105d5d554(long param_1,undefined8 param_2,int param_3)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (param_3 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105d5d600;
    puStack_30 = &UNK_110842e18;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x105d5d610;
    puStack_58 = &UNK_110841f20;
    lStack_50 = param_1;
    lStack_28 = param_1;
    func_0x00010bf03420(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48,
                        &puStack_70);
    return;
  }
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 105d5d600; end: 105d5d61b;  */

void FUN_105d5d600(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105d5d61c; end: 105d5d66f; -[SCPreviewFeatureHelpLabelImpl _setupWithContainerViewBounds:] */

void FUN_105d5d61c(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _CGRectGetHeight();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,(param_1 + -66.0) * 0.5,param_3,0x4050800000000000,*(undefined8 *)(param_4 + 0x28),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 105d5d670; end: 105d5d687; -[SCPreviewFeatureHelpLabelImpl previewView] */

void FUN_105d5d670(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d5d688; end: 105d5d693; -[SCPreviewFeatureHelpLabelImpl setPreviewView:] */

void FUN_105d5d688(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 105d5d694; end: 105d5d6d3; -[SCPreviewFeatureHelpLabelImpl .cxx_destruct] */

void FUN_105d5d694(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 105d5d6d4; end: 105d5d8ab; -[SCPreviewFeatureHelpLabelServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5d6d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112735678;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar8;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_initWeak(auStack_48,param_1);
  lVar8 = param_1 + _DAT_112735674;
  _objc_loadWeakRetained();
  lVar2 = lVar8;
  func_0x00010c274120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c22f7e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar8);
  puVar5 = PTR_PTR_1126ae720;
  uStack_50 = (undefined1)lVar4;
  _objc_retain(lVar1);
  _objc_copyWeak(auStack_58,auStack_48);
  func_0x00010bf11fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c4508;
  _objc_alloc(PTR_PTR_1126c4508);
  func_0x00010c01a420();
  uVar7 = 0;
  if (param_1 != 0) {
    uVar7 = *(undefined8 *)(param_1 + _DAT_11273567c);
  }
  _objc_retain(uVar7);
  func_0x00010bf9d660(uVar7);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar1);
  return;
}



/* Entry: 105d5d8ac; end: 105d5d96f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5d8ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    puVar2 = PTR_PTR_1126c4500;
    _objc_alloc(PTR_PTR_1126c4500);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = param_1 + _DAT_112735674;
      _objc_loadWeakRetained(lVar4);
    }
    lVar1 = lVar4;
    func_0x00010c274120(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c001ee0(puVar2,param_2,uVar3,lVar1);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(param_1);
  }
  else {
    puVar2 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105d5d970; end: 105d5d9b7; -[SCPreviewFeatureHelpLabelServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5d970(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273567c,0);
  _objc_destroyWeak(param_1 + _DAT_112735674);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735678);
  return;
}



/* Entry: 105d5d9b8; end: 105d5da63; -[SCPreviewFeatureHelpLabelServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5d9b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112735680;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112735688;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bfe0a80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105d5da64; end: 105d5daa7; -[SCPreviewFeatureHelpLabelServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5da64(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112735688);
  _objc_destroyWeak(param_1 + _DAT_112735684);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735680);
  return;
}



/* Entry: 105d5daa8; end: 105d5db1b; -[SCPreviewFeatureImagePlaybackImpl initWithImagePlaybackProvider:] */

undefined1 * FUN_105d5daa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed048;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d5db1c; end: 105d5db63; -[SCPreviewFeatureImagePlaybackImpl _imagePlayback] */

void FUN_105d5db1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe8440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


