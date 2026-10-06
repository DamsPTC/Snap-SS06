/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2c5e88; end: 10b2c5eab;  */

void FUN_10b2c5e88(void)

{
  func_0x00010c14cb60();
  return;
}



/* Entry: 10b2c5eac; end: 10b2c5fef;  */

void FUN_10b2c5eac(long param_1,undefined8 param_2,ulong param_3,byte *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_4);
  if ((*param_4 & 1) == 0) {
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c14cb60(*(undefined8 *)(lVar6 * 8));
        if ((*param_4 & 1) != 0) goto LAB_10b2c5fa8;
        lVar6 = lVar6 + 1;
      } while (lVar4 != lVar6);
      lVar4 = param_1;
      func_0x00010bf52a60();
    }
LAB_10b2c5fa8:
    _objc_release(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(param_3);
      }
      func_0x00010c12c960(*(undefined8 *)(uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
    uVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = param_3;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1fbe10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_setSemanticContentAttribute__11265c9a8,3);
    return;
  }
  return;
}



/* Entry: 10b2c5ff0; end: 10b2c60df;  */

void FUN_10b2c5ff0(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c12c960(*(undefined8 *)(uVar4 * 8));
      uVar4 = uVar4 + 1;
    } while (uVar2 != uVar4);
    uVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1fbe10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSemanticContentAttribute__11265c9a8,3);
    return;
  }
  return;
}



/* Entry: 10b2c60e0; end: 10b2c611f;  */

void FUN_10b2c60e0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  _objc_opt_respondsToSelector(param_1,PTR_s_setSemanticContentAttribute__11265c9a8);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1fbe10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSemanticContentAttribute__11265c9a8,3);
    return;
  }
  return;
}



/* Entry: 10b2c6120; end: 10b2c61ef;  */

void FUN_10b2c6120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00();
  func_0x00010bf199e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(puVar2);
  puVar3 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar2,param_2,puVar3);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2c61f0; end: 10b2c62bf;  */

/* WARNING: Possible PIC construction at 0x00010b2c6210: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2c6214) */

void FUN_10b2c61f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07d3e0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1f7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setScrollEnabled__11265b8f0,0);
    return;
  }
  return;
}



/* Entry: 10b2c62c0; end: 10b2c632f;  */

double FUN_10b2c62c0(double param_1,undefined8 param_2)

{
  double dVar1;
  
  func_0x00010c23d0a0();
  dVar1 = param_1;
  func_0x00010c14e120(param_2);
  return param_1 * dVar1;
}



/* Entry: 10b2c6330; end: 10b2c6373;  */

/* WARNING: Possible PIC construction at 0x00010b2c6350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2c6354) */

void FUN_10b2c6330(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c071800();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setEnabled__112642f38,0);
    return;
  }
  return;
}



/* Entry: 10b2c6374; end: 10b2c637f; -[SCViewControllerSlideAnimator transitionDuration:] */

undefined8 FUN_10b2c6374(void)

{
  return 0x3fc999999999999a;
}



/* Entry: 10b2c6380; end: 10b2c65c3; -[SCViewControllerSlideAnimator animateTransition:] */

void FUN_10b2c6380(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x00010c29c220(param_7,param_6,
                      *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_7;
  func_0x00010c29c220(param_7,param_6,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar4,param_6,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar4,param_6,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar4);
  dVar6 = param_1 + 320.0;
  uVar4 = uVar3;
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar6,param_2,param_3,param_4);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c27a940(param_5,param_6,param_7);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10b2c65c4;
  puStack_a0 = &UNK_110870f70;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10b2c6620;
  puStack_c8 = &UNK_110841f20;
  uStack_c0 = param_7;
  uStack_98 = uVar3;
  dStack_90 = param_1;
  uStack_88 = param_2;
  uStack_80 = param_3;
  uStack_78 = param_4;
  _objc_retain(param_7);
  _objc_retain(uVar3);
  func_0x00010bf03420(dVar6,puVar1,param_6,&puStack_b8,&puStack_e0);
  _objc_release(uStack_c0);
  _objc_release(uStack_98);
  _objc_release(param_7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10b2c65c4; end: 10b2c661f;  */

void FUN_10b2c65c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(uVar2,uVar3,uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2c6620; end: 10b2c662b;  */

void FUN_10b2c6620(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeTransition__1125ae898,1);
  return;
}



/* Entry: 10b2c662c; end: 10b2c668b; -[SCViewControllerStructuredStartupWorkflow performInitialization:] */

void FUN_10b2c662c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  uVar3 = param_2;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar2);
  uVar4 = uVar3;
  _objc_retain(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  uVar3 = uVar4;
  _objc_retain(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  uVar4 = uVar3;
  _objc_retain(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  uVar5 = uVar4;
  _objc_retain(uVar12);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  uVar3 = uVar5;
  _objc_retain(uVar12);
  _objc_retain(param_4);
  puVar6 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar5);
  _objc_exception_throw();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar4);
  puVar7 = PTR_PTR_1126d0ca8;
  _objc_alloc();
  func_0x00010c028a20();
  puVar2 = puVar7;
  func_0x00010bf86540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar6);
  _objc_release(puVar2);
  puVar8 = puVar7;
  func_0x00010c099a20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar8);
      }
      uVar12 = *(undefined8 *)((long)puVar11 * 8);
      uVar5 = uVar12;
      func_0x00010c0e00e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f4c0();
      _objc_release(uVar5);
      puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010c0e00e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9900(puVar6);
      _objc_release(puVar9);
      _objc_release(uVar12);
      puVar11 = puVar11 + 1;
    } while (puVar2 != puVar11);
    puVar2 = puVar8;
    func_0x00010bf52a60();
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  while( true ) {
    uVar5 = uVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      return;
    }
    ___stack_chk_fail();
    if ((int)uVar3 != 1) break;
    _objc_begin_catch();
    _objc_retain();
    func_0x00010c212f20(puVar6);
    _objc_release(uVar5);
    _objc_end_catch();
  }
  __Unwind_Resume(uVar5);
  func_0x00010c1a7d00();
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGRectZero_110347608,*(undefined8 *)(PTR__CGRectZero_110347608 + 8)
             ,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),uVar5,PTR_s_initWithFrame__1125e2948)
  ;
  return;
}



/* Entry: 10b2c668c; end: 10b2c66eb; -[SCViewControllerStructuredStartupWorkflow performLoadView:] */

void FUN_10b2c668c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  uVar3 = param_2;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar2);
  uVar4 = uVar3;
  _objc_retain(uVar9);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  uVar3 = uVar4;
  _objc_retain(uVar9);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  uVar4 = uVar3;
  _objc_retain(uVar9);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  uVar3 = uVar4;
  _objc_retain(uVar9);
  _objc_retain(param_4);
  puVar5 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar4);
  _objc_exception_throw();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar9);
  puVar6 = PTR_PTR_1126d0ca8;
  _objc_alloc();
  func_0x00010c028a20();
  puVar2 = puVar6;
  func_0x00010bf86540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar5);
  _objc_release(puVar2);
  puVar7 = puVar6;
  func_0x00010c099a20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar7);
      }
      uVar12 = *(undefined8 *)((long)puVar11 * 8);
      uVar4 = uVar12;
      func_0x00010c0e00e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f4c0();
      _objc_release(uVar4);
      puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010c0e00e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9900(puVar5);
      _objc_release(puVar8);
      _objc_release(uVar12);
      puVar11 = puVar11 + 1;
    } while (puVar2 != puVar11);
    puVar2 = puVar7;
    func_0x00010bf52a60();
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  while( true ) {
    uVar4 = uVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      return;
    }
    ___stack_chk_fail();
    if ((int)uVar3 != 1) break;
    _objc_begin_catch();
    _objc_retain();
    func_0x00010c212f20(puVar5);
    _objc_release(uVar4);
    _objc_end_catch();
  }
  __Unwind_Resume(uVar4);
  func_0x00010c1a7d00();
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGRectZero_110347608,*(undefined8 *)(PTR__CGRectZero_110347608 + 8)
             ,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),uVar4,PTR_s_initWithFrame__1125e2948)
  ;
  return;
}



/* Entry: 10b2c66ec; end: 10b2c674b; -[SCViewControllerStructuredStartupWorkflow performViewDidLoad:] */

void FUN_10b2c66ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  uVar3 = param_2;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar2);
  uVar4 = uVar3;
  _objc_retain(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  uVar5 = uVar4;
  _objc_retain(uVar12);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  uVar3 = uVar5;
  _objc_retain(uVar12);
  _objc_retain(param_4);
  puVar6 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar5);
  _objc_exception_throw();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar4);
  puVar7 = PTR_PTR_1126d0ca8;
  _objc_alloc();
  func_0x00010c028a20();
  puVar2 = puVar7;
  func_0x00010bf86540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar6);
  _objc_release(puVar2);
  puVar8 = puVar7;
  func_0x00010c099a20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar8);
      }
      uVar12 = *(undefined8 *)((long)puVar11 * 8);
      uVar5 = uVar12;
      func_0x00010c0e00e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f4c0();
      _objc_release(uVar5);
      puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010c0e00e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9900(puVar6);
      _objc_release(puVar9);
      _objc_release(uVar12);
      puVar11 = puVar11 + 1;
    } while (puVar2 != puVar11);
    puVar2 = puVar8;
    func_0x00010bf52a60();
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  while( true ) {
    uVar5 = uVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      return;
    }
    ___stack_chk_fail();
    if ((int)uVar3 != 1) break;
    _objc_begin_catch();
    _objc_retain();
    func_0x00010c212f20(puVar6);
    _objc_release(uVar5);
    _objc_end_catch();
  }
  __Unwind_Resume(uVar5);
  func_0x00010c1a7d00();
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGRectZero_110347608,*(undefined8 *)(PTR__CGRectZero_110347608 + 8)
             ,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),uVar5,PTR_s_initWithFrame__1125e2948)
  ;
  return;
}



/* Entry: 10b2c674c; end: 10b2c67ab; -[SCViewControllerStructuredStartupWorkflow performViewWillAppear:animated:] */

void FUN_10b2c674c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  uVar3 = param_2;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar2);
  uVar4 = uVar3;
  _objc_retain(uVar9);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  uVar3 = uVar4;
  _objc_retain(uVar9);
  _objc_retain(param_4);
  puVar5 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar4);
  _objc_exception_throw();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar9);
  puVar6 = PTR_PTR_1126d0ca8;
  _objc_alloc();
  func_0x00010c028a20();
  puVar2 = puVar6;
  func_0x00010bf86540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar5);
  _objc_release(puVar2);
  puVar7 = puVar6;
  func_0x00010c099a20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar7);
      }
      uVar12 = *(undefined8 *)((long)puVar11 * 8);
      uVar4 = uVar12;
      func_0x00010c0e00e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f4c0();
      _objc_release(uVar4);
      puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010c0e00e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9900(puVar5);
      _objc_release(puVar8);
      _objc_release(uVar12);
      puVar11 = puVar11 + 1;
    } while (puVar2 != puVar11);
    puVar2 = puVar7;
    func_0x00010bf52a60();
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  while( true ) {
    uVar4 = uVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      return;
    }
    ___stack_chk_fail();
    if ((int)uVar3 != 1) break;
    _objc_begin_catch();
    _objc_retain();
    func_0x00010c212f20(puVar5);
    _objc_release(uVar4);
    _objc_end_catch();
  }
  __Unwind_Resume(uVar4);
  func_0x00010c1a7d00();
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGRectZero_110347608,*(undefined8 *)(PTR__CGRectZero_110347608 + 8)
             ,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),uVar4,PTR_s_initWithFrame__1125e2948)
  ;
  return;
}



/* Entry: 10b2c67ac; end: 10b2c680b; -[SCViewControllerStructuredStartupWorkflow performViewDidAppear:animated:] */

void FUN_10b2c67ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  uVar3 = param_2;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar2);
  uVar8 = uVar3;
  _objc_retain(uVar9);
  _objc_retain(param_4);
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar9);
  puVar5 = PTR_PTR_1126d0ca8;
  _objc_alloc();
  func_0x00010c028a20();
  puVar2 = puVar5;
  func_0x00010bf86540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar4);
  _objc_release(puVar2);
  puVar6 = puVar5;
  func_0x00010c099a20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar6);
      }
      uVar12 = *(undefined8 *)((long)puVar11 * 8);
      uVar3 = uVar12;
      func_0x00010c0e00e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f4c0();
      _objc_release(uVar3);
      puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010c0e00e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9900(puVar4);
      _objc_release(puVar7);
      _objc_release(uVar12);
      puVar11 = puVar11 + 1;
    } while (puVar2 != puVar11);
    puVar2 = puVar6;
    func_0x00010bf52a60();
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  while( true ) {
    uVar3 = uVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      return;
    }
    ___stack_chk_fail();
    if ((int)uVar8 != 1) break;
    _objc_begin_catch();
    _objc_retain();
    func_0x00010c212f20(puVar4);
    _objc_release(uVar3);
    _objc_end_catch();
  }
  __Unwind_Resume(uVar3);
  func_0x00010c1a7d00();
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGRectZero_110347608,*(undefined8 *)(PTR__CGRectZero_110347608 + 8)
             ,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),uVar3,PTR_s_initWithFrame__1125e2948)
  ;
  return;
}



/* Entry: 10b2c680c; end: 10b2c6877; -[SCViewControllerStructuredStartupWorkflow performApplicationWillEnterForeground:notification:] */

void FUN_10b2c680c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  uVar8 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar9);
  puVar3 = PTR_PTR_1126d0ca8;
  _objc_alloc();
  func_0x00010c028a20();
  puVar4 = puVar3;
  func_0x00010bf86540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar2);
  _objc_release(puVar4);
  puVar5 = puVar3;
  func_0x00010c099a20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar5);
      }
      uVar12 = *(undefined8 *)((long)puVar11 * 8);
      uVar6 = uVar12;
      func_0x00010c0e00e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f4c0();
      _objc_release(uVar6);
      puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010c0e00e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9900(puVar2);
      _objc_release(puVar7);
      _objc_release(uVar12);
      puVar11 = puVar11 + 1;
    } while (puVar4 != puVar11);
    puVar4 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  while( true ) {
    uVar6 = uVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      return;
    }
    ___stack_chk_fail();
    if ((int)uVar8 != 1) break;
    _objc_begin_catch();
    _objc_retain();
    func_0x00010c212f20(puVar2);
    _objc_release(uVar6);
    _objc_end_catch();
  }
  __Unwind_Resume(uVar6);
  func_0x00010c1a7d00();
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGRectZero_110347608,*(undefined8 *)(PTR__CGRectZero_110347608 + 8)
             ,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),uVar6,PTR_s_initWithFrame__1125e2948)
  ;
  return;
}



/* Entry: 10b2c6878; end: 10b2c6acb; -[TTTAttributedLabel linkfy:] */

void FUN_10b2c6878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d0ca8;
  _objc_alloc();
  func_0x00010c028a20();
  puVar3 = puVar2;
  func_0x00010bf86540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(param_1);
  _objc_release(puVar3);
  puVar4 = puVar2;
  func_0x00010c099a20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      uVar9 = *(undefined8 *)((long)puVar8 * 8);
      uVar5 = uVar9;
      func_0x00010c0e00e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f4c0();
      _objc_release(uVar5);
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010c0e00e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9900(param_1);
      _objc_release(puVar6);
      _objc_release(uVar9);
      puVar8 = puVar8 + 1;
    } while (puVar3 != puVar8);
    puVar3 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  while( true ) {
    uVar5 = param_3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      return;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 1) break;
    _objc_begin_catch();
    _objc_retain();
    func_0x00010c212f20(param_1);
    _objc_release(uVar5);
    _objc_end_catch();
  }
  __Unwind_Resume(uVar5);
  func_0x00010c1a7d00();
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGRectZero_110347608,*(undefined8 *)(PTR__CGRectZero_110347608 + 8)
             ,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),uVar5,PTR_s_initWithFrame__1125e2948)
  ;
  return;
}



/* Entry: 10b2c6acc; end: 10b2c6aff; -[SCTextView initWithHeight:] */

void FUN_10b2c6acc(undefined8 param_1)

{
  func_0x00010c1a7d00();
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGRectZero_110347608,*(undefined8 *)(PTR__CGRectZero_110347608 + 8)
             ,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),param_1,
             PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 10b2c6b00; end: 10b2c7397; -[SCTextView initWithFrame:] */

undefined8 * FUN_10b2c6b00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_112706338;
  puVar2 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
    func_0x00010bfe0640();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined8 *)0x0) {
      dVar7 = 56.0;
    }
    else {
      puVar4 = puVar2;
      func_0x00010bfe0640(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar7 = (double)(float)param_1;
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    puVar5 = PTR__OBJC_CLASS___UITextField_1126af060;
    _objc_alloc(PTR__OBJC_CLASS___UITextField_1126af060);
    puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _CGRectGetWidth();
    _objc_release(puVar6);
    func_0x00010c013de0(0,0,param_1,dVar7,puVar5);
    func_0x00010c2132e0(puVar2);
    _objc_release(puVar5);
    dVar7 = 17.0;
    puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c26bc20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c26bc20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar3 = puVar2;
    func_0x00010c26bc20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182ae0();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c26bc20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c26bc20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d0a0();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c26bc20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d0c0();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c26bc20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195580();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c26bc20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1edbe0();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c26bc20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c26bc20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(puVar3);
    iVar1 = 2;
    func_0x000107c31924(2,0x1a,0,0);
    if (iVar1 != 0) {
      puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x00010c292b00();
      if (puVar5 == (undefined *)0x1) {
        puVar3 = puVar2;
        func_0x00010c26bc20(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213040();
        _objc_release(puVar3);
      }
    }
    puVar3 = puVar2;
    func_0x00010c26bc20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd60();
    _objc_release(puVar3);
    puVar3 = puVar2;
    _objc_opt_respondsToSelector(puVar2,PTR_s_setAllowsEditingTextAttributes__112637780);
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = puVar2;
      func_0x00010c26bc20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c167580();
      _objc_release(puVar3);
    }
    puVar3 = puVar2;
    func_0x00010c26bc20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar2);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c26bc20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar7 = -dVar7;
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126d5b70;
    func_0x00010bdc2340(dVar7,dVar7,dVar7,dVar7,PTR_PTR_1126d5b70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227520(puVar2);
    _objc_release(puVar5);
    puVar3 = puVar2;
    func_0x00010c2be8a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c2be8a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c2be8a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd60();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c2be8a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar2);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c2be8a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c1fcdc0(puVar2);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c15e420(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar3 = puVar2;
    func_0x00010c15e420(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar2);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c15e420(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar5 = PTR_PTR_1126af270;
    _objc_alloc_init(PTR_PTR_1126af270);
    func_0x00010c197140(puVar2);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf98ce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf98ce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf98ce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar3 = puVar2;
    func_0x00010bf98ce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf98ce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf98ce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf98ce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar2);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf98ce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
  return puVar2;
}



/* Entry: 10b2c7398; end: 10b2c760b;  */

void FUN_10b2c7398(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar7 = "d";
  FUN_10b2c760c("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2c760c; end: 10b2c7993;  */

void FUN_10b2c760c(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *in_stack_00000000;
  
  bVar1 = *param_1;
  if ((bVar1 == 0x40) && (param_1[1] == 0)) {
    _objc_retain(in_stack_00000000);
    puVar3 = in_stack_00000000;
  }
  else {
    pbVar2 = param_1;
    _strcmp(param_1,"{CGPoint=dd}");
    if ((((int)pbVar2 == 0) || (pbVar2 = param_1, _strcmp(param_1,"{CGSize=dd}"), (int)pbVar2 == 0))
       || (pbVar2 = param_1, _strcmp(param_1,"{UIEdgeInsets=dddd}"), (int)pbVar2 == 0)) {
      puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c296da0(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = (undefined *)0x0;
      if (bVar1 < 99) {
        if (bVar1 < 0x49) {
          if (bVar1 == 0x42) {
            if (param_1[1] == 0) {
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_10b2c7954;
            }
          }
          else {
            if (bVar1 != 0x43) goto LAB_10b2c7954;
            if (param_1[1] == 0) {
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df800(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_10b2c7954;
            }
          }
        }
        else if (bVar1 == 0x49) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10b2c7954;
          }
        }
        else if (bVar1 == 0x51) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df860(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10b2c7954;
          }
        }
        else {
          if (bVar1 != 0x53) goto LAB_10b2c7954;
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df8a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10b2c7954;
          }
        }
      }
      else if (bVar1 < 0x69) {
        if (bVar1 == 99) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df700(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10b2c7954;
          }
        }
        else if (bVar1 == 100) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df720(in_stack_00000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10b2c7954;
          }
        }
        else {
          if (bVar1 != 0x66) goto LAB_10b2c7954;
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df740((float)(double)in_stack_00000000,
                                PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10b2c7954;
          }
        }
      }
      else if (bVar1 == 0x69) {
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10b2c7954;
        }
      }
      else if (bVar1 == 0x71) {
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10b2c7954;
        }
      }
      else {
        if (bVar1 != 0x73) goto LAB_10b2c7954;
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10b2c7954;
        }
      }
      puVar3 = (undefined *)0x0;
    }
  }
LAB_10b2c7954:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b2c7994; end: 10b2c7fb3;  */

void FUN_10b2c7994(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26bc20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26bc20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2be8a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf5ef60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  pcVar7 = "{CGSize=dd}";
  FUN_10b2c760c("{CGSize=dd}");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar7);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2c7fb4; end: 10b2c7ff7; -[SCTextView dealloc] */

void FUN_10b2c7fb4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c12be40();
  puStack_28 = PTR_PTR_112706338;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b2c7ff8; end: 10b2c80b7; -[SCTextView setAccessibilityIdentifier:] */

void FUN_10b2c7ff8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112706338;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setAccessibilityIdentifier__112635e10);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010beecec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b2c80b8; end: 10b2c81ab; -[SCTextView intrinsicContentSize] */

undefined1  [16]
FUN_10b2c80b8(double param_1,undefined8 param_2,undefined8 param_3,double param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  uVar1 = param_5;
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf98ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074c20();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_5;
    func_0x00010bf98ce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar3 = param_1;
    func_0x00010bf98ce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099280();
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(uVar1);
    param_4 = param_4 + param_1 + (double)(long)dVar3;
  }
  auVar4._8_8_ = param_4;
  auVar4._0_8_ = param_3;
  return auVar4;
}



/* Entry: 10b2c81ac; end: 10b2c8227; -[SCTextView removeTextFieldInset] */

void FUN_10b2c81ac(undefined8 param_1)

{
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc060();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 10b2c8228; end: 10b2c835f;  */

void FUN_10b2c8228(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2c8360; end: 10b2c83cf; -[SCTextView getTextFieldMASAttribute:] */

void FUN_10b2c8360(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0bbe60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b2c83d0; end: 10b2c8433; -[SCTextView setBackgroundColor:] */

void FUN_10b2c83d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  func_0x00010c1cdae0(param_1);
  puStack_28 = PTR_PTR_112706338;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setBackgroundColor__112639330,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10b2c8434; end: 10b2c8483; -[SCTextView setTextColor:] */

void FUN_10b2c8434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2c8484; end: 10b2c84c7; -[SCTextView shouldShowSeparator:] */

void FUN_10b2c8484(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c201fc0(param_1,param_2,0);
  func_0x00010c15e420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2c84c8; end: 10b2c8503; -[SCTextView isXButtonShown] */

uint FUN_10b2c84c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c074c20();
  _objc_release(param_1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10b2c8504; end: 10b2c858f; -[SCTextView setPlaceholder:] */

void FUN_10b2c8504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_3);
  func_0x00010c23ba80(puVar1,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fd6666666666666);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9e0(param_1,param_2,param_3,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2c8590; end: 10b2c860b; -[SCTextView setPlaceholder:color:] */

void FUN_10b2c8590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04e820();
  _objc_release(param_3);
  func_0x00010c16b6a0(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2c860c; end: 10b2c8693; -[SCTextView setAttributedPlaceholder:] */

void FUN_10b2c860c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_3);
  func_0x00010c14c620(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fd6666666666666);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b6a0(param_1,param_2,param_3,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2c8694; end: 10b2c87ab; -[SCTextView setAttributedPlaceholder:color:] */

void FUN_10b2c8694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff4f40();
  uVar4 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c08fa60(param_3);
  func_0x00010bef6f20(puVar1,param_2,uVar4,puVar2,0,uVar3);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  uVar3 = param_3;
  func_0x00010c08fa60(param_3);
  _objc_release(param_3);
  func_0x00010bef6f20(puVar1,param_2,uVar4,param_4,0,uVar3);
  _objc_release(param_4);
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b680();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2c87ac; end: 10b2c87e3; -[SCTextView setReturnKeyType:] */

void FUN_10b2c87ac(undefined8 param_1)

{
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1edbe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2c87e4; end: 10b2c884f; -[SCTextView clearInput] */

void FUN_10b2c87e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar1);
  func_0x00010c196ee0(param_1,param_2,0);
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15b4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2c8850; end: 10b2c8893; -[SCTextView text] */

void FUN_10b2c8850(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2c8894; end: 10b2c88e3; -[SCTextView setText:] */

void FUN_10b2c8894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2c88e4; end: 10b2c891b; -[SCTextView setKeyboardType:] */

void FUN_10b2c88e4(undefined8 param_1)

{
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2c891c; end: 10b2c8953; -[SCTextView setAutocorrectionType:] */

void FUN_10b2c891c(undefined8 param_1)

{
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d0c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2c8954; end: 10b2c898b; -[SCTextView setSecureTextEntry:] */

void FUN_10b2c8954(undefined8 param_1)

{
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2c898c; end: 10b2c89c7; -[SCTextView isSecureTextEntry] */

undefined8 FUN_10b2c898c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07d600();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b2c89c8; end: 10b2c89ff; -[SCTextView setAutoCapitalizationType:] */

void FUN_10b2c89c8(undefined8 param_1)

{
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d0a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2c8a00; end: 10b2c8a07; -[SCTextView preventTextClearOnError] */

void FUN_10b2c8a00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c200c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setShouldPreventTextClearOnError_11265dd28,1)
  ;
  return;
}



/* Entry: 10b2c8a08; end: 10b2c8a3b; -[SCTextView removeDelegate] */

void FUN_10b2c8a08(undefined8 param_1)

{
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2c8a3c; end: 10b2c8a77; -[SCTextView becomeFirstResponder] */

undefined8 FUN_10b2c8a3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf179a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b2c8a78; end: 10b2c8adf; -[SCTextView resignFirstResponder] */

undefined8 FUN_10b2c8a78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112706338;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_resignFirstResponder_11262c258);
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c13a0e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b2c8ae0; end: 10b2c8b13; -[SCTextView selectAll] */

void FUN_10b2c8ae0(undefined8 param_1)

{
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1586c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2c8b14; end: 10b2c8cbb; -[SCTextView textViewDidChange:] */

void FUN_10b2c8b14(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26cb00();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf193c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf94e60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c26c600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f540(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0b6160();
  if ((uVar1 & 1) == 0) {
    func_0x00010c1c15e0(param_1);
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26cb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10b2c8cbc; end: 10b2c8d57; -[SCTextView textFieldShouldBeginEditing:] */

ulong FUN_10b2c8cbc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c0b6160();
  func_0x00010c1c15e0(param_1);
  uVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c26cc40();
    _objc_release(param_1);
  }
  return uVar1;
}



/* Entry: 10b2c8d58; end: 10b2c8dd7; -[SCTextView textFieldDidBeginEditing:] */

void FUN_10b2c8d58(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26cae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b2c8dd8; end: 10b2c8e57; -[SCTextView textFieldDidEndEditing:] */

void FUN_10b2c8dd8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26cb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b2c8e58; end: 10b2c8ed7; -[SCTextView textFieldDidMakeFirstEdit:] */

void FUN_10b2c8e58(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26cb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b2c8ed8; end: 10b2c8f5b; -[SCTextView textFieldShouldReturn:] */

ulong FUN_10b2c8ed8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 1;
  }
  else {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c26cc60();
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 10b2c8f5c; end: 10b2c9013; -[SCTextView textField:shouldChangeCharactersInRange:replacementString:] */

ulong FUN_10b2c8f5c(ulong param_1)

{
  ulong uVar1;
  undefined8 in_x5;
  ulong uVar2;
  
  _objc_retain(in_x5);
  uVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 1;
  }
  else {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c26bc40();
    _objc_release(param_1);
  }
  _objc_release(in_x5);
  return uVar2;
}



/* Entry: 10b2c9014; end: 10b2c90a7; -[SCTextView attributedLabel:didSelectLinkWithURL:] */

void FUN_10b2c9014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010beec820(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf98ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c069fa0(param_1);
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b2c90a8; end: 10b2c9133; -[SCTextView isInErrorState] */

undefined1 * FUN_10b2c90a8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706338;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_backgroundColor_1125a28f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c440(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined1 *)puVar1;
  func_0x00010c071ae0(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10b2c9134; end: 10b2c913f; -[SCTextView setError:] */

void FUN_10b2c9134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c196f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setError_toggleBackground_toggle_1126435f8,param_3,1,1);
  return;
}



/* Entry: 10b2c9140; end: 10b2c94cb; -[SCTextView setWarningWithText:] */

void FUN_10b2c9140(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined *param_6,ulong param_7,int param_8)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_6;
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010c075400();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3fd0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_4;
    func_0x00010bf98ce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(uVar1);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar3 = &PTR____CFConstantStringClassReference_110f62a38;
    param_8 = 0;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f62a38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_4;
    func_0x00010bf98ce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(uVar1);
    _objc_release(puVar7);
    _objc_release(ppuVar3);
    uVar1 = param_4;
    func_0x00010bf98ce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(uVar1);
    param_3 = 0x3ff0000000000000;
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0,0x3fde9e9e9e9e9e9f,0x3ff0000000000000,0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    uVar1 = param_4;
    func_0x00010bf98ce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdd60();
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010bf98ce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162900();
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010bf98ce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010bf98ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    param_7 = uVar6;
    func_0x00010c11f420();
    func_0x00010bef9900(uVar1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010bf98ce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010bf98ce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(param_4);
    func_0x00010c1e0180(param_3,uVar1);
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010bf98ce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010bf98ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c074c20();
    _objc_release(uVar1);
    if ((int)uVar5 != 0) {
      func_0x00010c069fa0(param_4);
    }
    uVar1 = param_4;
    func_0x00010bf98ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined *)0x0;
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    func_0x00010c1cbe20(param_4);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((puVar7 == (undefined *)0x0) || ((param_7 & 1) != 0)) {
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf41680(0x3fd0000000000000,0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = param_6;
  func_0x00010bf98ce0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = param_6;
  func_0x00010bf98ce0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(puVar2);
  if (puVar7 == (undefined *)0x0) {
    puVar2 = param_6;
    func_0x00010c2be8a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = param_6;
    func_0x00010c2be8a0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar2);
    puVar2 = param_6;
    func_0x00010bf98ce0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar2);
    puVar2 = param_6;
    func_0x00010c239d00();
    if ((int)puVar2 != 0) {
      puVar2 = param_6;
      func_0x00010c15e420(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(puVar2);
    }
    puVar2 = param_6;
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = param_6;
      func_0x00010c0db1a0(param_6);
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_d8 = PTR_PTR_112706338;
    puStack_e0 = param_6;
    _objc_msgSendSuper2(&puStack_e0,PTR_s_setBackgroundColor__112639330,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
LAB_10b2c9854:
    puVar4 = param_6;
    func_0x00010c26bc20(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  else {
    puVar2 = param_6;
    func_0x00010c075400();
    if (((ulong)puVar2 & 1) != 0) goto LAB_10b2c98e4;
    puVar2 = param_6;
    func_0x00010c232140();
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = param_6;
      func_0x00010c26bc20(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13a0e0();
      _objc_release(puVar2);
      puVar2 = param_6;
      func_0x00010c26bc20(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf179a0();
      _objc_release(puVar2);
    }
    if (param_8 != 0) {
      puVar2 = param_6;
      func_0x00010c2be8a0(param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9fc0(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar2);
      puVar2 = param_6;
      func_0x00010c2be8a0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(puVar2);
    }
    puVar2 = param_6;
    func_0x00010bf98ce0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar2);
    puVar2 = param_6;
    func_0x00010c239d00();
    if ((int)puVar2 != 0) {
      puVar2 = param_6;
      func_0x00010c15e420(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(puVar2);
    }
    if ((int)param_7 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c14c440(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puStack_c8 = PTR_PTR_112706338;
      puStack_d0 = param_6;
      _objc_msgSendSuper2(&puStack_d0,PTR_s_setBackgroundColor__112639330,puVar2);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b2c9854;
    }
  }
  puVar2 = param_6;
  func_0x00010bf98ce0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(param_6);
  func_0x00010c1e0180(param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = param_6;
  func_0x00010bf98ce0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(puVar2);
  func_0x00010c069fa0(param_6);
  func_0x00010c1cbe20(param_6);
LAB_10b2c98e4:
  _objc_release(puVar7);
  return;
}



/* Entry: 10b2c94cc; end: 10b2c9907; -[SCTextView setError:toggleBackground:toggleXButton:] */

void FUN_10b2c94cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,long param_6,uint param_7,int param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((param_6 == 0) || ((param_7 & 1) != 0)) {
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf41680(0x3fd0000000000000,0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = param_4;
  func_0x00010bf98ce0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_4;
  func_0x00010bf98ce0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(puVar1);
  if (param_6 == 0) {
    puVar1 = param_4;
    func_0x00010c2be8a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = param_4;
    func_0x00010c2be8a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar1);
    puVar1 = param_4;
    func_0x00010bf98ce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar1);
    puVar1 = param_4;
    func_0x00010c239d00();
    if ((int)puVar1 != 0) {
      puVar1 = param_4;
      func_0x00010c15e420(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(puVar1);
    }
    puVar1 = param_4;
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = param_4;
      func_0x00010c0db1a0(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_68 = PTR_PTR_112706338;
    puStack_70 = param_4;
    _objc_msgSendSuper2(&puStack_70,PTR_s_setBackgroundColor__112639330,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
LAB_10b2c9854:
    puVar2 = param_4;
    func_0x00010c26bc20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    puVar1 = param_4;
    func_0x00010c075400();
    if (((ulong)puVar1 & 1) != 0) goto LAB_10b2c98e4;
    puVar1 = param_4;
    func_0x00010c232140();
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = param_4;
      func_0x00010c26bc20(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13a0e0();
      _objc_release(puVar1);
      puVar1 = param_4;
      func_0x00010c26bc20(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf179a0();
      _objc_release(puVar1);
    }
    if (param_8 != 0) {
      puVar1 = param_4;
      func_0x00010c2be8a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9fc0(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar1 = param_4;
      func_0x00010c2be8a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(puVar1);
    }
    puVar1 = param_4;
    func_0x00010bf98ce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar1);
    puVar1 = param_4;
    func_0x00010c239d00();
    if ((int)puVar1 != 0) {
      puVar1 = param_4;
      func_0x00010c15e420(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(puVar1);
    }
    if (param_7 != 0) {
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c14c440(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puStack_58 = PTR_PTR_112706338;
      puStack_60 = param_4;
      _objc_msgSendSuper2(&puStack_60,PTR_s_setBackgroundColor__112639330,puVar1);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b2c9854;
    }
  }
  puVar1 = param_4;
  func_0x00010bf98ce0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(param_4);
  func_0x00010c1e0180(param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = param_4;
  func_0x00010bf98ce0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(puVar1);
  func_0x00010c069fa0(param_4);
  func_0x00010c1cbe20(param_4);
LAB_10b2c98e4:
  _objc_release(param_6);
  return;
}



/* Entry: 10b2c9908; end: 10b2c9927; -[SCTextView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c9908(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278e554);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2c9928; end: 10b2c993b; -[SCTextView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c9928(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278e554,param_3);
  return;
}



/* Entry: 10b2c993c; end: 10b2c994b; -[SCTextView textField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2c993c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e558);
}



/* Entry: 10b2c994c; end: 10b2c998b; -[SCTextView setTextField:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c994c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e558;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2c998c; end: 10b2c999b; -[SCTextView isHighlighted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2c998c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e544);
}



/* Entry: 10b2c999c; end: 10b2c99ab; -[SCTextView setIsHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c999c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e544) = param_3;
  return;
}



/* Entry: 10b2c99ac; end: 10b2c99bb; -[SCTextView xButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2c99ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e55c);
}



/* Entry: 10b2c99bc; end: 10b2c99fb; -[SCTextView setXButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c99bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e55c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2c99fc; end: 10b2c9a0b; -[SCTextView separator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2c99fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e560);
}



/* Entry: 10b2c9a0c; end: 10b2c9a4b; -[SCTextView setSeparator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c9a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e560;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2c9a4c; end: 10b2c9a5b; -[SCTextView errorLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2c9a4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e564);
}



/* Entry: 10b2c9a5c; end: 10b2c9a9b; -[SCTextView setErrorLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c9a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e564;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2c9a9c; end: 10b2c9aab; -[SCTextView madeFirstChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2c9a9c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e548);
}



/* Entry: 10b2c9aac; end: 10b2c9abb; -[SCTextView setMadeFirstChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c9aac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e548) = param_3;
  return;
}



/* Entry: 10b2c9abc; end: 10b2c9acb; -[SCTextView nonerrorBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2c9abc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e568);
}



/* Entry: 10b2c9acc; end: 10b2c9b0b; -[SCTextView setNonerrorBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c9acc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e568;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2c9b0c; end: 10b2c9b1b; -[SCTextView showSeparator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2c9b0c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e54c);
}



/* Entry: 10b2c9b1c; end: 10b2c9b2b; -[SCTextView setShowSeparator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c9b1c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e54c) = param_3;
  return;
}



/* Entry: 10b2c9b2c; end: 10b2c9b3b; -[SCTextView shouldPreventTextClearOnError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2c9b2c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e550);
}



/* Entry: 10b2c9b3c; end: 10b2c9b4b; -[SCTextView setShouldPreventTextClearOnError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c9b3c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e550) = param_3;
  return;
}



/* Entry: 10b2c9b4c; end: 10b2c9b5b; -[SCTextView height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2c9b4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e56c);
}



/* Entry: 10b2c9b5c; end: 10b2c9b9b; -[SCTextView setHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c9b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e56c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2c9b9c; end: 10b2c9c27; -[SCTextView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c9b9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e56c,0);
  _objc_storeStrong(param_1 + _DAT_11278e568,0);
  _objc_storeStrong(param_1 + _DAT_11278e564,0);
  _objc_storeStrong(param_1 + _DAT_11278e560,0);
  _objc_storeStrong(param_1 + _DAT_11278e55c,0);
  _objc_storeStrong(param_1 + _DAT_11278e558,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11278e554);
  return;
}



/* Entry: 10b2c9c28; end: 10b2c9d1f;  */

void FUN_10b2c9c28(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c26c860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c159e80(param_1);
  if (param_2 == 0) {
    func_0x00010c08fa60(uVar1);
  }
  func_0x00010bef6f20(uVar1);
  uVar2 = param_1;
  func_0x00010c27e220(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d3c80();
  _objc_release(uVar2);
  func_0x00010c1d0640(uVar3);
  uVar2 = uVar3;
  func_0x00010bf51e00(uVar3);
  func_0x00010c21ade0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2c9d20; end: 10b2c9ecb;  */

void FUN_10b2c9d20(undefined8 param_1,undefined *param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = param_2;
  func_0x00010c26c860();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    puVar4 = param_2;
    func_0x00010c27e220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    puVar2 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  }
  else {
    puVar4 = puVar1;
    func_0x00010c08fa60();
    uStack_60 = 0;
    uVar5 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    puVar2 = puVar1;
    puStack_58 = puVar4;
    func_0x00010bf0dde0(puVar1,param_3,uVar5,0,&uStack_60);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  }
  PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00 = puVar4;
  if (puVar2 == (undefined *)0x0) {
    _objc_alloc_init(puVar4);
    puVar2 = param_2;
    func_0x00010c26b7a0(param_2);
    func_0x00010c166c00(puVar4,param_3,puVar2);
    puVar2 = puVar4;
  }
  func_0x00010c1bdcc0(param_1,puVar2);
  if ((param_4 & 1) == 0) {
    func_0x00010bf17fe0(puVar1);
    puVar4 = puVar1;
    func_0x00010c08fa60(puVar1);
    func_0x00010bef6f20(puVar1,param_3,uVar5,puVar2,0,puVar4);
    func_0x00010bf947e0(puVar1);
  }
  puVar4 = param_2;
  func_0x00010c27e220(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c0d3c80();
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar3,param_3,puVar2,uVar5);
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c21ade0(param_2,param_3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10b2c9ecc; end: 10b2ca043;  */

void FUN_10b2c9ecc(double param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2;
  func_0x00010c26c860();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740((float)param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010bf17fe0(uVar1);
    uVar5 = *(undefined8 *)PTR__NSKernAttributeName_110345808;
    uVar3 = uVar1;
    func_0x00010c08fa60(uVar1);
    func_0x00010bef6f20(uVar1,param_3,uVar5,puVar2,0,uVar3);
    uVar6 = *(undefined8 *)PTR__NSLigatureAttributeName_110345810;
    uVar3 = uVar1;
    func_0x00010c08fa60(uVar1);
    func_0x00010bef6f20(uVar1,param_3,uVar6,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d38d0,0,
                        uVar3);
    func_0x00010bf947e0(uVar1);
  }
  else {
    uVar5 = *(undefined8 *)PTR__NSKernAttributeName_110345808;
    uVar6 = *(undefined8 *)PTR__NSLigatureAttributeName_110345810;
  }
  uVar3 = param_2;
  func_0x00010c27e220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d3c80();
  _objc_release(uVar3);
  func_0x00010c1d0640(uVar4,param_3,puVar2,uVar5);
  func_0x00010c1d0640(uVar4,param_3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d38d0,uVar6);
  uVar3 = uVar4;
  func_0x00010bf51e00(uVar4);
  func_0x00010c21ade0(param_2,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2ca044; end: 10b2ca173;  */

void FUN_10b2ca044(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2;
  func_0x00010c073040();
  if ((int)lVar1 == 0) {
    param_1 = 0.0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar3 = *plStack_100;
      do {
        lVar4 = 0;
        do {
          if (*plStack_100 != lVar3) {
            _objc_enumerationMutation(param_2);
          }
          lVar2 = *(long *)(lStack_108 + lVar4 * 8);
          func_0x00010bfaf200();
          _objc_retainAutoreleasedReturnValue();
          if (lVar2 != 0) {
            _objc_release();
            lVar1 = param_2;
            goto LAB_10b2ca13c;
          }
          lVar4 = lVar4 + 1;
        } while (lVar1 != lVar4);
        lVar1 = param_2;
        func_0x00010bf52a60(param_2,param_3,&uStack_110,auStack_c8,0x10);
      } while (lVar1 != 0);
    }
    _objc_release();
    lVar2 = 0;
    lVar1 = param_2;
  }
  else {
    lVar1 = param_2;
    _objc_retain();
    lVar2 = param_2;
  }
LAB_10b2ca13c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  ___stack_chk_fail();
  lVar3 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = lVar1;
    func_0x00010c262ca0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0640();
    dVar5 = param_1;
    func_0x00010bfe0640(lVar1);
    FUN_10b2bd8f4((param_1 - dVar5) * 0.5);
    func_0x00010c2172c0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 10b2ca174; end: 10b2ca28b;  */

void FUN_10b2ca174(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  lVar1 = param_2;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c262ca0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0640();
    dVar2 = param_1;
    func_0x00010bfe0640(param_2);
    FUN_10b2bd8f4((param_1 - dVar2) * 0.5);
    func_0x00010c2172c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b2ca28c; end: 10b2ca373;  */

void FUN_10b2ca28c(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = param_2;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c262ca0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5040();
    dVar5 = param_1;
    func_0x00010c2a5040(param_2);
    dVar3 = (param_1 - dVar5) * 0.5;
    FUN_10b2bd8f4(dVar3);
    lVar2 = param_2;
    dVar5 = dVar3;
    func_0x00010c262ca0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0640();
    dVar4 = dVar5;
    func_0x00010bfe0640(param_2);
    dVar5 = (dVar5 - dVar4) * 0.5;
    FUN_10b2bd8f4(dVar5);
    func_0x00010c1d64a0(dVar3,dVar5,param_2);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b2ca374; end: 10b2ca573;  */

void FUN_10b2ca374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_9);
  puVar1 = param_6;
  func_0x00010c14c980();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_opt_class(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_6;
    func_0x00010bde9d80(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cafa0(puVar1);
    _objc_release(puVar2);
    func_0x00010c19bc80(puVar1);
    _objc_retainAutorelease(param_9);
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(puVar1);
    func_0x00010c08c0e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(param_6);
  }
  uVar4 = param_2;
  _CGRectGetWidth(param_2,param_3,param_4,param_5);
  uVar5 = param_2;
  _CGRectGetHeight(param_2,param_3,param_4,param_5);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199c0(0,0,uVar4,uVar5,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199e0(param_2,param_3,param_4,param_5,param_1,param_1,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06f40(puVar2);
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_9);
  return;
}



/* Entry: 10b2ca574; end: 10b2ca6ef;  */

void FUN_10b2ca574(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010bde9d80();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c25ec40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bf52a60(uVar2,param_2,&uStack_130,auStack_e8,0x10);
  if (uVar3 != 0) {
    lVar7 = *plStack_120;
    do {
      uVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(uVar2);
        }
        uVar6 = *(undefined8 *)(lStack_128 + uVar8 * 8);
        uVar4 = uVar6;
        func_0x00010c0d4f60(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        func_0x00010c0720c0(uVar1,param_2,uVar4);
        _objc_release(uVar4);
        if ((uVar5 & 1) != 0) {
          _objc_retain(uVar6);
          goto LAB_10b2ca6a0;
        }
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
      uVar3 = uVar2;
      func_0x00010bf52a60(uVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (uVar3 != 0);
  }
  uVar6 = 0;
LAB_10b2ca6a0:
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c25cde0(&PTR____CFConstantStringClassReference_110f62a78,param_2,
                      &PTR____CFConstantStringClassReference_110f62a98);
  return;
}



/* Entry: 10b2ca6f0; end: 10b2ca71f;  */

void FUN_10b2ca6f0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c25cde0(&PTR____CFConstantStringClassReference_110f62a78,param_2,
                      &PTR____CFConstantStringClassReference_110f62a98);
  return;
}



/* Entry: 10b2ca720; end: 10b2caa93;  */

void FUN_10b2ca720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uVar2 = param_7;
  _objc_retainAutorelease(param_7);
  func_0x00010bdc0fe0();
  _objc_release(param_7);
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _objc_release(param_8);
  func_0x00010bf0a120(puVar3,param_6,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(puVar1,param_6,puVar3);
  _objc_release(puVar3);
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066f40();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2caa94; end: 10b2caaf3; -[TTTAttributedLabel initWithFrame:] */

undefined1 * FUN_10b2caa94(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706340;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf42980(puVar1);
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 10b2caaf4; end: 10b2caf57; -[TTTAttributedLabel commonInit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2caaf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c21e900(param_1,param_2,1);
  func_0x00010c1c9b40(param_1);
  func_0x00010c213500(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),param_1);
  func_0x00010c1bdc00(0x3ff0000000000000,param_1);
  func_0x00010c1ea460(param_1);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdf80(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_opt_class();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1e540(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    _objc_retainAutorelease(puVar5);
    func_0x00010bdc0fe0();
    func_0x00010c1d0560(puVar1);
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c1d0560(puVar2);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bfce0e0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c1d0560(puVar3);
    _objc_release(puVar4);
    uStack_71 = 0;
    uStack_70 = 6;
    puStack_60 = &uStack_71;
    uStack_68 = 1;
    puVar6 = &uStack_70;
    _CTParagraphStyleCreate(puVar6,1);
    func_0x00010c1d0560(puVar1);
    func_0x00010c1d0560(puVar2);
    func_0x00010c1d0560(puVar3);
    _CFRelease(puVar6);
  }
  else {
    func_0x00010c1d0560(puVar1);
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar2);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bfce0e0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar3);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00);
    func_0x00010c1bdb00();
    func_0x00010c1d0560(puVar1);
    func_0x00010c1d0560(puVar2);
    func_0x00010c1d0560(puVar3);
    _objc_release(puVar4);
  }
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd60(param_1);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162900(param_1);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1abb80(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_10b2caf58;
  puStack_a0 = puVar1;
  uStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  if (*(long *)(puVar2 + _DAT_11278e5a8) != 0) {
    _CFRelease();
  }
  if (*(long *)(puVar2 + _DAT_11278e5ac) != 0) {
    _CFRelease();
  }
  puStack_a8 = PTR_PTR_112706340;
  puStack_b0 = puVar2;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b2caf58; end: 10b2cafbf; -[TTTAttributedLabel dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2caf58(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + _DAT_11278e5a8) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + _DAT_11278e5ac) != 0) {
    _CFRelease();
  }
  puStack_28 = PTR_PTR_112706340;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}


