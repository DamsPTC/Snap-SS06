/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b84cec8; end: 10b84cef3;  */

void FUN_10b84cec8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf82f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b84cef4; end: 10b84d017; -[SIGTooltip presentInView:forDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84cef4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  func_0x00010c1677c0(0,param_2);
  func_0x00010befbb60(param_4);
  _objc_initWeak(auStack_48,param_2);
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c150360(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + _DAT_1127948a8);
  *(undefined **)(param_2 + _DAT_1127948a8) = puVar1;
  _objc_release(uVar2);
  func_0x00010bdcad80(param_2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10b84d018; end: 10b84d043;  */

void FUN_10b84d018(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf82f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b84d044; end: 10b84d0e3; -[SIGTooltip setCaretCanSlideToImproveLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84d044(long param_1,undefined8 param_2,uint param_3)

{
  if ((*(byte *)(param_1 + _DAT_112794890) != param_3) &&
     (8 < *(ulong *)(param_1 + _DAT_112794884) ||
      (1L << (*(ulong *)(param_1 + _DAT_112794884) & 0x3f) & 0x118U) == 0)) {
    *(char *)(param_1 + _DAT_112794890) = (char)param_3;
    func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_1127948ac));
    func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_1127948b0));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 10b84d0e4; end: 10b84d1d7; -[SIGTooltip setHidden:] */

void FUN_10b84d0e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010c074c20();
  if ((int)param_3 != (int)lVar1) {
    lVar1 = param_1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puStack_38 = PTR_PTR_11270b4a8;
      lStack_40 = param_1;
      _objc_msgSendSuper2(&lStack_40,PTR_s_setHidden__1126479f8,param_3);
    }
    else if ((int)param_3 == 0) {
      func_0x00010bdcaea0(param_1);
    }
    else {
      func_0x00010bdcad80(param_1);
    }
  }
  return;
}



/* Entry: 10b84d1d8; end: 10b84d24f;  */

void FUN_10b84d1d8(long param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  uStack_20 = *(undefined8 *)(param_1 + 0x20);
  puStack_18 = PTR_PTR_11270b4a8;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 10b84d250; end: 10b84d26f; -[SIGTooltip setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84d250(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_112794880) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_112794880) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bea8110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setStyle__1125879e8);
  return;
}



/* Entry: 10b84d270; end: 10b84d2d7; -[SIGTooltip setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84d270(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11279488c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != param_3) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b84d2d8; end: 10b84d2e7; -[SIGTooltip text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84d2d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279488c),PTR_s_text_1126787e8);
  return;
}



/* Entry: 10b84d2e8; end: 10b84d2f7; -[SIGTooltip setTextAlignment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84d2e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c213050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279488c),PTR_s_setTextAlignment__112662638);
  return;
}



/* Entry: 10b84d2f8; end: 10b84d37b; -[SIGTooltip setTrailingAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84d2f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_1127948b4;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_1127948a4),param_2,
                        *(undefined8 *)(param_1 + lVar3));
    func_0x00010bdc4ae0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b84d37c; end: 10b84d3ff; -[SIGTooltip setLeadingAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84d37c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_1127948b8;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_1127948a4),param_2,
                        *(undefined8 *)(param_1 + lVar3));
    func_0x00010bdc4ae0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b84d400; end: 10b84d40f; -[SIGTooltip textAlignment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84d400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279488c),PTR_s_textAlignment_112678810);
  return;
}



/* Entry: 10b84d410; end: 10b84d48b; -[SIGTooltip tappedTooltipView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84d410(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127948bc;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c274020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b84d48c; end: 10b84d4cb; -[SIGTooltip gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10b84d48c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127948b4);
  func_0x00010c09ef00(param_4,param_2,uVar1);
  func_0x00010c102b20(uVar1,param_2,0);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10b84d4cc; end: 10b84d50f; -[SIGTooltip _completeDismissal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84d4cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_1127948bc;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c273dc0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 10b84d510; end: 10b84d603; -[SIGTooltip _animateIn:] */

void FUN_10b84d510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
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
  
  _objc_retain(param_3);
  func_0x00010c1677c0(0,param_1);
  _CGAffineTransformMakeScale(&uStack_60,0x3fe0000000000000,0x3fe0000000000000);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(param_1,param_2,&uStack_90);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10b84d604;
  puStack_a0 = &UNK_110842e18;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10b84d658;
  puStack_c8 = &UNK_110842508;
  uStack_c0 = param_3;
  uStack_98 = param_1;
  _objc_retain(param_3);
  func_0x00010bf03420(0x3fb999999999999a,puVar1,param_2,&puStack_b8,&puStack_e0);
  _objc_release(uStack_c0);
  _objc_release(param_3);
  return;
}



/* Entry: 10b84d604; end: 10b84d657;  */

void FUN_10b84d604(long param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20));
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_50);
  return;
}



/* Entry: 10b84d658; end: 10b84d66b;  */

void FUN_10b84d658(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b84d664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b84d66c; end: 10b84d75b; -[SIGTooltip _animateOut:] */

void FUN_10b84d66c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c1677c0(0x3ff0000000000000,param_1);
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(param_1,param_2,&uStack_60);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10b84d75c;
  puStack_70 = &UNK_110842e18;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x10b84d7b8;
  puStack_a0 = &UNK_110858070;
  uStack_98 = param_1;
  uStack_90 = param_3;
  uStack_68 = param_1;
  _objc_retain(param_3);
  func_0x00010bf03420(0x3fb999999999999a,puVar1,param_2,&puStack_88,&puStack_b8);
  _objc_release(uStack_90);
  _objc_release(param_3);
  return;
}



/* Entry: 10b84d75c; end: 10b84d80f;  */

void FUN_10b84d75c(long param_1,undefined8 param_2)

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
  
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x20));
  _CGAffineTransformMakeScale(&uStack_50,0x3fe0000000000000,0x3fe0000000000000);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 10b84d810; end: 10b84d843; -[SIGTooltip _invalidateDismissalTimerIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84d810(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127948a8;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b84d844; end: 10b84d90b; -[SIGTooltip _setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84d844(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (param_3 < 4) {
    uVar2 = *(undefined8 *)(&UNK_10e5f32c0 + param_3 * 8);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        *(undefined8 *)(&UNK_10e5f32a0 + param_3 * 8));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = (undefined *)0x0;
    puVar3 = (undefined *)0x0;
  }
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_1127948a0),param_2,puVar1);
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_1127948a4),param_2,puVar1);
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11279488c),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b84d90c; end: 10b84e14f; -[SIGTooltip _activateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b84d90c(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                    undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  double dVar22;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_1127948a0;
  if (*(long *)(param_4 + lVar10) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_5,
                        *(undefined8 *)(param_4 + _DAT_11279489c));
  }
  lVar19 = (long)_DAT_112794898;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_5,
                      *(undefined8 *)(param_4 + lVar19));
  lVar11 = (long)_DAT_112794894;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_5,
                      *(undefined8 *)(param_4 + lVar11));
  func_0x00010c162480(*(undefined8 *)(param_4 + _DAT_1127948ac),param_5,0);
  func_0x00010c162480(*(undefined8 *)(param_4 + _DAT_1127948b0),param_5,0);
  lVar16 = (long)_DAT_1127948c0;
  func_0x00010c162480(*(undefined8 *)(param_4 + lVar16),param_5,0);
  lVar15 = param_4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5dd40(param_4);
  lVar14 = lVar15;
  func_0x00010bf49580();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_4 + lVar16);
  *(long *)(param_4 + lVar16) = lVar14;
  _objc_release(uVar12);
  _objc_release(lVar15);
  func_0x00010c1e3380(0x446d8000,*(undefined8 *)(param_4 + lVar16));
  lVar20 = (long)_DAT_1127948a4;
  uVar1 = *(undefined8 *)(param_4 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar1;
  func_0x00010bf493a0(uVar1,param_5,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_4 + lVar20);
  uStack_90 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar2;
  func_0x00010bf493a0(uVar2,param_5,lVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_4 + lVar20);
  uStack_88 = uVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_4;
  func_0x00010c2793a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0(uVar3,param_5,lVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_4 + lVar20);
  uStack_80 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_4;
  func_0x00010c08de00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf493a0(uVar4,param_5,lVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_90,4);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_4 + lVar19);
  *(undefined **)(param_4 + lVar19) = puVar5;
  _objc_release(uVar13);
  _objc_release(uVar7);
  _objc_release(lVar18);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(lVar21);
  _objc_release(uVar3);
  _objc_release(uVar17);
  _objc_release(lVar14);
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(lVar15);
  _objc_release(uVar1);
  lVar15 = param_4;
  func_0x00010bddbb60();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_11279489c;
  uVar12 = *(undefined8 *)(param_4 + lVar14);
  *(long *)(param_4 + lVar14) = lVar15;
  _objc_release(uVar12);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar21 = (long)_DAT_11279488c;
  uVar6 = *(undefined8 *)(param_4 + lVar21);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_4 + lVar20);
  func_0x00010c274200(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar6;
  func_0x00010bf493c0(0x4010000000000000,uVar6,param_5,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_4 + lVar21);
  uStack_a0 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_4 + lVar20);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar1;
  func_0x00010bf493c0(0xc010000000000000,uVar1,param_5,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar17;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_a0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar5,param_5,puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_4 + lVar11);
  *(undefined **)(param_4 + lVar11) = puVar5;
  _objc_release(uVar3);
  _objc_release(puVar8);
  _objc_release(uVar17);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar12);
  _objc_release(uVar7);
  _objc_release(uVar6);
  lVar15 = (long)_DAT_1127948b4;
  uVar17 = *(undefined8 *)(param_4 + lVar11);
  uVar12 = *(undefined8 *)(param_4 + lVar21);
  if (*(long *)(param_4 + lVar15) == 0) {
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_4 + lVar20);
    func_0x00010c2793a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar12;
    func_0x00010bf493c0(0xc020000000000000,uVar12,param_5,uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar17,param_5,uVar6);
  }
  else {
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_4 + lVar15);
    func_0x00010c08e400(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar12;
    func_0x00010bf493c0(0xc024000000000000,uVar12,param_5,uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_4 + lVar15);
    uStack_b8 = uVar6;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_4 + lVar20);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf493c0(0xc020000000000000,uVar3,param_5,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_4 + lVar15);
    uStack_b0 = uVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_4 + lVar20);
    func_0x00010bf348e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar13;
    func_0x00010bf493a0(uVar13,param_5,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_b8,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar17,param_5,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_release(uVar13);
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar12);
  lVar15 = (long)_DAT_1127948b8;
  uVar17 = *(undefined8 *)(param_4 + lVar11);
  uVar12 = *(undefined8 *)(param_4 + lVar21);
  if (*(long *)(param_4 + lVar15) == 0) {
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_4 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    dVar22 = 8.0;
    uVar6 = uVar12;
    func_0x00010bf493c0(0x4020000000000000,uVar12,param_5,uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar17,param_5,uVar6);
  }
  else {
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_4 + lVar15);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar12;
    func_0x00010bf493c0(0x4010000000000000,uVar12,param_5,uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_4 + lVar15);
    uStack_d0 = uVar6;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_4 + lVar20);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    dVar22 = 4.0;
    uVar1 = uVar3;
    func_0x00010bf493c0(0x4010000000000000,uVar3,param_5,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_4 + lVar15);
    uStack_c8 = uVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_4 + lVar20);
    func_0x00010bf348e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar13;
    func_0x00010bf493a0(uVar13,param_5,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c0 = uVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_d0,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar17,param_5,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_release(uVar13);
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar12);
  if (*(long *)(param_4 + lVar10) != 0) {
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_5,
                        *(undefined8 *)(param_4 + lVar14));
  }
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_5,
                      *(undefined8 *)(param_4 + lVar19));
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_5,
                      *(undefined8 *)(param_4 + lVar11));
  lVar10 = *(long *)(param_4 + lVar16);
  func_0x00010c162480(lVar10,param_5,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return dVar22;
  }
  ___stack_chk_fail();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_1127948a0;
  lVar15 = *(long *)(lVar10 + lVar14);
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (lVar15 == 0) goto LAB_10b84e84c;
  lVar21 = *(long *)(lVar10 + _DAT_112794884);
  if (lVar21 < 4) {
    if (lVar21 < 2) {
      if (lVar21 == 0) {
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        lVar21 = (long)_DAT_1127948a4;
        uVar12 = *(undefined8 *)(lVar10 + lVar21);
        func_0x00010bf1ff80(uVar12);
        _objc_retainAutoreleasedReturnValue();
LAB_10b84e374:
        lVar18 = lVar15;
        func_0x00010bf493a0(lVar15,param_5,uVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        _objc_release(lVar15);
        uVar17 = *(undefined8 *)(lVar10 + lVar14);
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(lVar10 + lVar21);
        func_0x00010c08e400(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar17;
        func_0x00010bf49480(0x4028000000000000,uVar17,param_5,uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = (long)_DAT_1127948ac;
        uVar7 = *(undefined8 *)(lVar10 + lVar11);
        *(undefined8 *)(lVar10 + lVar11) = uVar12;
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar17);
        uVar12 = *(undefined8 *)(lVar10 + lVar14);
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(lVar10 + lVar21);
        func_0x00010c08e400(uVar17);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = 0x4028000000000000;
        goto LAB_10b84e54c;
      }
      if (lVar21 == 1) {
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        lVar21 = (long)_DAT_1127948a4;
        uVar12 = *(undefined8 *)(lVar10 + lVar21);
        func_0x00010bf1ff80(uVar12);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b84e490;
      }
      goto LAB_10b84e888;
    }
    if (lVar21 == 2) {
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = (long)_DAT_1127948a4;
      uVar12 = *(undefined8 *)(lVar10 + lVar21);
      func_0x00010bf1ff80(uVar12);
      _objc_retainAutoreleasedReturnValue();
LAB_10b84e670:
      lVar18 = lVar15;
      func_0x00010bf493a0(lVar15,param_5,uVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      _objc_release(lVar15);
      uVar17 = *(undefined8 *)(lVar10 + lVar14);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(lVar10 + lVar21);
      func_0x00010bf34860(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar17;
      func_0x00010bf493a0(uVar17,param_5,uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = (long)_DAT_1127948ac;
      uVar7 = *(undefined8 *)(lVar10 + lVar11);
      *(undefined8 *)(lVar10 + lVar11) = uVar12;
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar17);
      uVar12 = *(undefined8 *)(lVar10 + lVar14);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)(lVar10 + lVar21);
      func_0x00010bf34860(uVar17);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar21 != 3) goto LAB_10b84e888;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = (long)_DAT_1127948a4;
      uVar12 = *(undefined8 *)(lVar10 + lVar21);
      func_0x00010bf348e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar15;
      func_0x00010bf493a0(lVar15,param_5,uVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      _objc_release(lVar15);
      uVar17 = *(undefined8 *)(lVar10 + lVar14);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(lVar10 + lVar21);
      func_0x00010c08e400(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar17;
      func_0x00010bf493a0(uVar17,param_5,uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = (long)_DAT_1127948ac;
      uVar7 = *(undefined8 *)(lVar10 + lVar11);
      *(undefined8 *)(lVar10 + lVar11) = uVar12;
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar17);
      uVar12 = *(undefined8 *)(lVar10 + lVar14);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)(lVar10 + lVar21);
      func_0x00010c08e400(uVar17);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_10b84e720:
    uVar7 = uVar12;
    func_0x00010bf493a0(uVar12,param_5,uVar17);
    _objc_retainAutoreleasedReturnValue();
LAB_10b84e738:
    uVar6 = *(undefined8 *)(lVar10 + _DAT_1127948b0);
    *(undefined8 *)(lVar10 + _DAT_1127948b0) = uVar7;
    _objc_release(uVar6);
    _objc_release(uVar17);
    _objc_release(uVar12);
    lVar15 = lVar18;
  }
  else {
    if (lVar21 < 6) {
      if (lVar21 == 4) {
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        lVar21 = (long)_DAT_1127948a4;
        uVar12 = *(undefined8 *)(lVar10 + lVar21);
        func_0x00010bf348e0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar15;
        func_0x00010bf493a0(lVar15,param_5,uVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        _objc_release(lVar15);
        uVar17 = *(undefined8 *)(lVar10 + lVar14);
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(lVar10 + lVar21);
        func_0x00010c1408a0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar17;
        func_0x00010bf493a0(uVar17,param_5,uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = (long)_DAT_1127948ac;
        uVar7 = *(undefined8 *)(lVar10 + lVar11);
        *(undefined8 *)(lVar10 + lVar11) = uVar12;
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar17);
        uVar12 = *(undefined8 *)(lVar10 + lVar14);
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(lVar10 + lVar21);
        func_0x00010c1408a0(uVar17);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b84e720;
      }
      if (lVar21 == 5) {
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        lVar21 = (long)_DAT_1127948a4;
        uVar12 = *(undefined8 *)(lVar10 + lVar21);
        func_0x00010c274200(uVar12);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b84e374;
      }
    }
    else {
      if (lVar21 == 6) {
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        lVar21 = (long)_DAT_1127948a4;
        uVar12 = *(undefined8 *)(lVar10 + lVar21);
        func_0x00010c274200(uVar12);
        _objc_retainAutoreleasedReturnValue();
LAB_10b84e490:
        lVar18 = lVar15;
        func_0x00010bf493a0(lVar15,param_5,uVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        _objc_release(lVar15);
        uVar17 = *(undefined8 *)(lVar10 + lVar14);
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(lVar10 + lVar21);
        func_0x00010c1408a0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar17;
        func_0x00010bf49520(0xc028000000000000,uVar17,param_5,uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = (long)_DAT_1127948ac;
        uVar7 = *(undefined8 *)(lVar10 + lVar11);
        *(undefined8 *)(lVar10 + lVar11) = uVar12;
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar17);
        uVar12 = *(undefined8 *)(lVar10 + lVar14);
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(lVar10 + lVar21);
        func_0x00010c1408a0(uVar17);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = 0xc028000000000000;
LAB_10b84e54c:
        uVar7 = uVar12;
        func_0x00010bf493c0(uVar6,uVar12,param_5,uVar17);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b84e738;
      }
      if (lVar21 == 7) {
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        lVar21 = (long)_DAT_1127948a4;
        uVar12 = *(undefined8 *)(lVar10 + lVar21);
        func_0x00010c274200(uVar12);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b84e670;
      }
      if (lVar21 == 8) goto LAB_10b84e84c;
    }
LAB_10b84e888:
    lVar11 = (long)_DAT_1127948ac;
    lVar15 = 0;
  }
  func_0x00010c1e3380(0x44610000,*(undefined8 *)(lVar10 + lVar11));
  lVar18 = (long)_DAT_1127948b0;
  func_0x00010c1e3380(0x44610000,*(undefined8 *)(lVar10 + lVar18));
  lVar21 = (long)_DAT_112794890;
  func_0x00010c162480(*(undefined8 *)(lVar10 + lVar11),param_5,*(undefined1 *)(lVar10 + lVar21));
  func_0x00010c162480(*(undefined8 *)(lVar10 + lVar18),param_5,
                      (*(byte *)(lVar10 + lVar21) ^ 0xff) & 1);
  uVar6 = *(undefined8 *)(lVar10 + lVar14);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar6;
  func_0x00010bf49420(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar10 + lVar14);
  uStack_1a0 = uVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar22 = 10.0;
  uVar17 = uVar7;
  func_0x00010bf49420(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_198 = uVar17;
  lStack_190 = lVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_1a0,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar17);
  _objc_release(uVar7);
  _objc_release(uVar12);
  _objc_release(uVar6);
  _objc_release();
LAB_10b84e84c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return dVar22;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar15 + _DAT_112794888) == 0) {
    dVar22 = 1.5;
  }
  else {
    if (*(long *)(lVar15 + _DAT_112794888) != 1) {
      return NAN;
    }
    dVar22 = 2.5;
  }
  puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar5);
  return (double)(long)(param_3 / dVar22) + -16.0;
}



/* Entry: 10b84e150; end: 10b84e89b; -[SIGTooltip _caretConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b84e150(double param_1,undefined8 param_2,double param_3,long param_4,
                    undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_1127948a0;
  lVar1 = *(long *)(param_4 + lVar9);
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 == 0) goto LAB_10b84e84c;
  lVar7 = *(long *)(param_4 + _DAT_112794884);
  if (lVar7 < 4) {
    if (lVar7 < 2) {
      if (lVar7 == 0) {
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = (long)_DAT_1127948a4;
        uVar2 = *(undefined8 *)(param_4 + lVar7);
        func_0x00010bf1ff80(uVar2);
        _objc_retainAutoreleasedReturnValue();
LAB_10b84e374:
        lVar8 = lVar1;
        func_0x00010bf493a0(lVar1,param_5,uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        _objc_release(lVar1);
        uVar3 = *(undefined8 *)(param_4 + lVar9);
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_4 + lVar7);
        func_0x00010c08e400(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010bf49480(0x4028000000000000,uVar3,param_5,uVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = (long)_DAT_1127948ac;
        uVar5 = *(undefined8 *)(param_4 + lVar10);
        *(undefined8 *)(param_4 + lVar10) = uVar2;
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        uVar2 = *(undefined8 *)(param_4 + lVar9);
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_4 + lVar7);
        func_0x00010c08e400(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = 0x4028000000000000;
        goto LAB_10b84e54c;
      }
      if (lVar7 == 1) {
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = (long)_DAT_1127948a4;
        uVar2 = *(undefined8 *)(param_4 + lVar7);
        func_0x00010bf1ff80(uVar2);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b84e490;
      }
      goto LAB_10b84e888;
    }
    if (lVar7 == 2) {
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)_DAT_1127948a4;
      uVar2 = *(undefined8 *)(param_4 + lVar7);
      func_0x00010bf1ff80(uVar2);
      _objc_retainAutoreleasedReturnValue();
LAB_10b84e670:
      lVar8 = lVar1;
      func_0x00010bf493a0(lVar1,param_5,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(lVar1);
      uVar3 = *(undefined8 *)(param_4 + lVar9);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_4 + lVar7);
      func_0x00010bf34860(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010bf493a0(uVar3,param_5,uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = (long)_DAT_1127948ac;
      uVar5 = *(undefined8 *)(param_4 + lVar10);
      *(undefined8 *)(param_4 + lVar10) = uVar2;
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar2 = *(undefined8 *)(param_4 + lVar9);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_4 + lVar7);
      func_0x00010bf34860(uVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar7 != 3) goto LAB_10b84e888;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)_DAT_1127948a4;
      uVar2 = *(undefined8 *)(param_4 + lVar7);
      func_0x00010bf348e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar1;
      func_0x00010bf493a0(lVar1,param_5,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(lVar1);
      uVar3 = *(undefined8 *)(param_4 + lVar9);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_4 + lVar7);
      func_0x00010c08e400(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010bf493a0(uVar3,param_5,uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = (long)_DAT_1127948ac;
      uVar5 = *(undefined8 *)(param_4 + lVar10);
      *(undefined8 *)(param_4 + lVar10) = uVar2;
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar2 = *(undefined8 *)(param_4 + lVar9);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_4 + lVar7);
      func_0x00010c08e400(uVar3);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_10b84e720:
    uVar5 = uVar2;
    func_0x00010bf493a0(uVar2,param_5,uVar3);
    _objc_retainAutoreleasedReturnValue();
LAB_10b84e738:
    uVar4 = *(undefined8 *)(param_4 + _DAT_1127948b0);
    *(undefined8 *)(param_4 + _DAT_1127948b0) = uVar5;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar1 = lVar8;
  }
  else {
    if (lVar7 < 6) {
      if (lVar7 == 4) {
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = (long)_DAT_1127948a4;
        uVar2 = *(undefined8 *)(param_4 + lVar7);
        func_0x00010bf348e0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar1;
        func_0x00010bf493a0(lVar1,param_5,uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        _objc_release(lVar1);
        uVar3 = *(undefined8 *)(param_4 + lVar9);
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_4 + lVar7);
        func_0x00010c1408a0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010bf493a0(uVar3,param_5,uVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = (long)_DAT_1127948ac;
        uVar5 = *(undefined8 *)(param_4 + lVar10);
        *(undefined8 *)(param_4 + lVar10) = uVar2;
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        uVar2 = *(undefined8 *)(param_4 + lVar9);
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_4 + lVar7);
        func_0x00010c1408a0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b84e720;
      }
      if (lVar7 == 5) {
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = (long)_DAT_1127948a4;
        uVar2 = *(undefined8 *)(param_4 + lVar7);
        func_0x00010c274200(uVar2);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b84e374;
      }
    }
    else {
      if (lVar7 == 6) {
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = (long)_DAT_1127948a4;
        uVar2 = *(undefined8 *)(param_4 + lVar7);
        func_0x00010c274200(uVar2);
        _objc_retainAutoreleasedReturnValue();
LAB_10b84e490:
        lVar8 = lVar1;
        func_0x00010bf493a0(lVar1,param_5,uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        _objc_release(lVar1);
        uVar3 = *(undefined8 *)(param_4 + lVar9);
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_4 + lVar7);
        func_0x00010c1408a0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010bf49520(0xc028000000000000,uVar3,param_5,uVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = (long)_DAT_1127948ac;
        uVar5 = *(undefined8 *)(param_4 + lVar10);
        *(undefined8 *)(param_4 + lVar10) = uVar2;
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        uVar2 = *(undefined8 *)(param_4 + lVar9);
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_4 + lVar7);
        func_0x00010c1408a0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = 0xc028000000000000;
LAB_10b84e54c:
        uVar5 = uVar2;
        func_0x00010bf493c0(uVar4,uVar2,param_5,uVar3);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b84e738;
      }
      if (lVar7 == 7) {
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = (long)_DAT_1127948a4;
        uVar2 = *(undefined8 *)(param_4 + lVar7);
        func_0x00010c274200(uVar2);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b84e670;
      }
      if (lVar7 == 8) goto LAB_10b84e84c;
    }
LAB_10b84e888:
    lVar10 = (long)_DAT_1127948ac;
    lVar1 = 0;
  }
  func_0x00010c1e3380(0x44610000,*(undefined8 *)(param_4 + lVar10));
  lVar8 = (long)_DAT_1127948b0;
  func_0x00010c1e3380(0x44610000,*(undefined8 *)(param_4 + lVar8));
  lVar7 = (long)_DAT_112794890;
  func_0x00010c162480(*(undefined8 *)(param_4 + lVar10),param_5,*(undefined1 *)(param_4 + lVar7));
  func_0x00010c162480(*(undefined8 *)(param_4 + lVar8),param_5,
                      (*(byte *)(param_4 + lVar7) ^ 0xff) & 1);
  uVar4 = *(undefined8 *)(param_4 + lVar9);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf49420(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_4 + lVar9);
  uStack_80 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  param_1 = 10.0;
  uVar3 = uVar5;
  func_0x00010bf49420(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar3;
  lStack_70 = lVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release();
LAB_10b84e84c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return param_1;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar1 + _DAT_112794888) == 0) {
    dVar11 = 1.5;
  }
  else {
    if (*(long *)(lVar1 + _DAT_112794888) != 1) {
      return NAN;
    }
    dVar11 = 2.5;
  }
  puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar6);
  return (double)(long)(param_3 / dVar11) + -16.0;
}



/* Entry: 10b84e89c; end: 10b84e91f; -[SIGTooltip _maxTooltipWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b84e89c(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined *puVar1;
  double dVar2;
  
  if (*(long *)(param_4 + _DAT_112794888) == 0) {
    dVar2 = 1.5;
  }
  else {
    if (*(long *)(param_4 + _DAT_112794888) != 1) {
      return NAN;
    }
    dVar2 = 2.5;
  }
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  return (double)(long)(param_3 / dVar2) + -16.0;
}



/* Entry: 10b84e920; end: 10b84eb77; -[SIGTooltip _setupCaretCenterWithPresentationPoint:inView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84e920(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  
  _objc_retain(param_5);
  lVar7 = (long)_DAT_1127948a0;
  if (*(long *)(param_3 + lVar7) == 0) goto LAB_10b84eb1c;
  lVar8 = (long)_DAT_112794884;
  if (*(long *)(param_3 + lVar8) == 8) goto LAB_10b84eb1c;
  lVar5 = (long)_DAT_1127948c4;
  func_0x00010c162480(*(undefined8 *)(param_3 + lVar5),param_4,0);
  lVar6 = (long)_DAT_1127948c8;
  func_0x00010c162480(*(undefined8 *)(param_3 + lVar6),param_4,0);
  lVar9 = *(long *)(param_3 + lVar8);
  uVar1 = *(undefined8 *)(param_3 + lVar7);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c08e400(param_5);
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 == 4) {
    dVar10 = -7.0710678118654755;
LAB_10b84e9f4:
    param_1 = param_1 + dVar10;
  }
  else if (lVar9 == 3) {
    dVar10 = 7.0710678118654755;
    goto LAB_10b84e9f4;
  }
  uVar3 = uVar1;
  func_0x00010bf493c0(param_1,uVar1,param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + lVar5);
  *(undefined8 *)(param_3 + lVar5) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = param_5;
  if (*(ulong *)(param_3 + lVar8) < 3) {
    uVar1 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200(param_5);
    _objc_retainAutoreleasedReturnValue();
    dVar10 = -7.0710678118654755;
LAB_10b84eaac:
    param_2 = param_2 + dVar10;
  }
  else {
    if (*(ulong *)(param_3 + lVar8) - 5 < 3) {
      uVar1 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c274200(param_5);
      _objc_retainAutoreleasedReturnValue();
      dVar10 = 7.0710678118654755;
      goto LAB_10b84eaac;
    }
    uVar1 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = uVar1;
  func_0x00010bf493c0(param_2,uVar1,param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + lVar6);
  *(undefined8 *)(param_3 + lVar6) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1e3380(0x446d8000,*(undefined8 *)(param_3 + lVar5));
  func_0x00010c1e3380(0x446d8000,*(undefined8 *)(param_3 + lVar6));
  func_0x00010c162480(*(undefined8 *)(param_3 + lVar5),param_4,1);
  func_0x00010c162480(*(undefined8 *)(param_3 + lVar6),param_4,1);
LAB_10b84eb1c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b84eb78; end: 10b84eb87; -[SIGTooltip caretCanSlideToImproveLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b84eb78(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794890);
}



/* Entry: 10b84eb88; end: 10b84eb97; -[SIGTooltip caretView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b84eb88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127948a0);
}



/* Entry: 10b84eb98; end: 10b84ebb7; -[SIGTooltip delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84eb98(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127948bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b84ebb8; end: 10b84ebcb; -[SIGTooltip setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84ebb8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127948bc,param_3);
  return;
}



/* Entry: 10b84ebcc; end: 10b84ebdb; -[SIGTooltip position] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b84ebcc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794884);
}



/* Entry: 10b84ebdc; end: 10b84ebeb; -[SIGTooltip shouldAnimateDismissal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b84ebdc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11279487c);
}



/* Entry: 10b84ebec; end: 10b84ebfb; -[SIGTooltip setShouldAnimateDismissal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84ebec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11279487c) = param_3;
  return;
}



/* Entry: 10b84ebfc; end: 10b84ec0b; -[SIGTooltip style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b84ebfc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794880);
}



/* Entry: 10b84ec0c; end: 10b84ec1b; -[SIGTooltip leadingAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b84ec0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127948b8);
}



/* Entry: 10b84ec1c; end: 10b84ec2b; -[SIGTooltip trailingAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b84ec1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127948b4);
}



/* Entry: 10b84ec2c; end: 10b84ed37; -[SIGTooltip .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84ec2c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127948b4,0);
  _objc_storeStrong(param_1 + _DAT_1127948b8,0);
  _objc_destroyWeak(param_1 + _DAT_1127948bc);
  _objc_storeStrong(param_1 + _DAT_1127948ac,0);
  _objc_storeStrong(param_1 + _DAT_1127948b0,0);
  _objc_storeStrong(param_1 + _DAT_1127948c0,0);
  _objc_storeStrong(param_1 + _DAT_1127948c8,0);
  _objc_storeStrong(param_1 + _DAT_1127948c4,0);
  _objc_storeStrong(param_1 + _DAT_11279489c,0);
  _objc_storeStrong(param_1 + _DAT_112794898,0);
  _objc_storeStrong(param_1 + _DAT_112794894,0);
  _objc_storeStrong(param_1 + _DAT_1127948a8,0);
  _objc_storeStrong(param_1 + _DAT_1127948a0,0);
  _objc_storeStrong(param_1 + _DAT_11279488c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127948a4,0);
  return;
}



/* Entry: 10b84ed38; end: 10b84ee1f; -[SIGTooltipOption initWithText:style:trailingAccessoryView:delegate:duration:] */

undefined1 *
FUN_10b84ed38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_11270b4b0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_7);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b84ee20; end: 10b84ee27; -[SIGTooltipOption text] */

undefined8 FUN_10b84ee20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b84ee28; end: 10b84ee2f; -[SIGTooltipOption style] */

undefined8 FUN_10b84ee28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b84ee30; end: 10b84ee37; -[SIGTooltipOption trailingAccessoryView] */

undefined8 FUN_10b84ee30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b84ee38; end: 10b84ee4f; -[SIGTooltipOption delegate] */

void FUN_10b84ee38(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b84ee50; end: 10b84ee57; -[SIGTooltipOption duration] */

undefined8 FUN_10b84ee50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b84ee58; end: 10b84ee8f; -[SIGTooltipOption .cxx_destruct] */

void FUN_10b84ee58(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b84ee90; end: 10b84ee97; -[SIGFooter initWithDefaultBackgroundColor:] */

void FUN_10b84ee90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c009ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDefaultBackgroundColor_b_1125e0180,param_3,0);
  return;
}



/* Entry: 10b84ee98; end: 10b84eefb; -[SIGFooter dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84ee98(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  if ((*(byte *)(param_1 + _DAT_1127948e0) & 1) == 0) {
    func_0x00010c12d560(*(undefined8 *)(param_1 + _DAT_1127948ec),param_2,param_1);
  }
  puStack_28 = PTR_PTR_11270b4b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b84eefc; end: 10b84f197; -[SIGFooter interactionComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84eefc(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112794904);
  func_0x00010c0841c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + _DAT_11279490c);
  func_0x00010c0841c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c084de0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c084de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar3);
  if (uVar3 == uVar4) {
    uVar3 = uVar1;
    func_0x00010c084de0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      uVar4 = uVar1;
      func_0x00010c084de0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      if (param_3 == 0) {
        uVar3 = uVar2;
      }
      func_0x00010c27a720(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8fe60(uVar1);
      func_0x00010bf94b40(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar4);
    }
  }
  if (param_3 != 0) {
    uVar3 = uVar1;
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar5 = uVar2;
    func_0x00010bf13d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    _CGColorEqualToColor(uVar4,uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      uVar3 = uVar2;
      func_0x00010c236ba0();
      uVar9 = 0;
      if ((uVar3 & 1) == 0) {
        uVar3 = uVar1;
        func_0x00010bf13d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        _CGColorEqualToColor(uVar4,puVar8);
        uVar9 = 0x3fc3333333333333;
        if ((int)uVar4 == 0) {
          uVar9 = 0;
        }
        _objc_release(puVar7);
        _objc_release(uVar3);
      }
      puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_retain(uVar1);
      func_0x00010bf03440(0x3fb999999999999a,uVar9,puVar7);
      _objc_release(uVar1);
    }
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b84f198; end: 10b84f1c7;  */

void FUN_10b84f198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed3ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateBackgroundColorAndDropSha_112592850,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b84f1c8; end: 10b84f25f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84f1c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  func_0x00010c16e440();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b84f260; end: 10b84f277;  */

void FUN_10b84f260(undefined8 param_1,undefined8 param_2)

{
  _objc_retainAutorelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b84f278; end: 10b84f29b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84f278(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127948e0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be09f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__endTransitionToItemConfig_fromI_112560170,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),1);
  return;
}



/* Entry: 10b84f29c; end: 10b84f2bb; -[SIGFooter footerHeightObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84f29c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112794910);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b84f2bc; end: 10b84f2db; -[SIGFooter tooltipPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84f2bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112794914);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b84f2dc; end: 10b84f413; -[SIGFooter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b84f2dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112794914);
  _objc_destroyWeak(param_1 + _DAT_112794910);
  _objc_storeStrong(param_1 + _DAT_112794928,0);
  _objc_storeStrong(param_1 + _DAT_1127948e8,0);
  _objc_storeStrong(param_1 + _DAT_1127948f4,0);
  _objc_storeStrong(param_1 + _DAT_1127948f0,0);
  _objc_storeStrong(param_1 + _DAT_11279492c,0);
  _objc_storeStrong(param_1 + _DAT_112794924,0);
  _objc_storeStrong(param_1 + _DAT_112794920,0);
  _objc_storeStrong(param_1 + _DAT_1127948e4,0);
  _objc_storeStrong(param_1 + _DAT_112794918,0);
  _objc_storeStrong(param_1 + _DAT_1127948fc,0);
  _objc_storeStrong(param_1 + _DAT_112794904,0);
  _objc_storeStrong(param_1 + _DAT_112794900,0);
  _objc_storeStrong(param_1 + _DAT_11279490c,0);
  _objc_storeStrong(param_1 + _DAT_112794908,0);
  _objc_storeStrong(param_1 + _DAT_1127948f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127948ec,0);
  return;
}



/* Entry: 10b84f414; end: 10b84f4c3; -[SIGFooterItem initWithItemView:transitionContext:] */

undefined1 *
FUN_10b84f414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b4c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x30) = 0x3ff0000000000000;
    puVar2 = PTR_PTR_1126c8700;
    _objc_alloc();
    func_0x00010c020400();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x19) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b84f4c4; end: 10b84f57b; -[SIGFooterItem setItemConfig:] */

void FUN_10b84f4c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b84f57c;
  puStack_48 = &UNK_110d62930;
  lStack_40 = param_1;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x00010bfb47e0(param_1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b84f57c; end: 10b84f643;  */

void FUN_10b84f57c(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_footerItem_itemConfigDidChange__1125caa98);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfb43c0(param_2);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0841c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c0841c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x28);
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 != lVar5) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0841c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa200();
      _objc_release(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b84f644; end: 10b84f697; -[SIGFooterItem setHidden:] */

void FUN_10b84f644(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x28) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b84f698;
  puStack_20 = &UNK_110d62960;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b84f698; end: 10b84f6e7;  */

void FUN_10b84f698(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_footerItem_hiddenDidChange__1125caa90);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfb43a0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b84f6e8; end: 10b84f73b; -[SIGFooterItem setAlpha:] */

void FUN_10b84f6e8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(param_2 + 0x30) = param_1;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b84f73c;
  puStack_20 = &UNK_110d62960;
  lStack_18 = param_2;
  func_0x00010bfb47e0(param_2,param_3,&puStack_38);
  return;
}



/* Entry: 10b84f73c; end: 10b84f78b;  */

void FUN_10b84f73c(long param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_footerItem_alphaDidChange__1125caa80);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfb4360(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b84f78c; end: 10b84f81f; -[SIGFooterItem setOverridenBackgroundColor:] */

void FUN_10b84f78c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b84f820;
  puStack_40 = &UNK_110d62960;
  lStack_38 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10b84f820; end: 10b84f86f;  */

void FUN_10b84f820(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_footerItem_overridenBackgroundCo_1125caaa8);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfb4400(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b84f870; end: 10b84f903; -[SIGFooterItem setOverrideTintColor:] */

void FUN_10b84f870(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b84f904;
  puStack_40 = &UNK_110d62960;
  lStack_38 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10b84f904; end: 10b84f953;  */

void FUN_10b84f904(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_footerItem_overrideTintColorDidC_1125caaa0);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfb43e0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b84f954; end: 10b84f9a7; -[SIGFooterItem setDimUnselectedIcons:] */

void FUN_10b84f954(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x29) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b84f9a8;
  puStack_20 = &UNK_110d62960;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b84f9a8; end: 10b84f9f7;  */

void FUN_10b84f9a8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_footerItem_dimUnselectedIconsDid_1125caa88);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfb4380(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b84f9f8; end: 10b84fa77; -[SIGFooterItem restoreConfig] */

void FUN_10b84f9f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x19) == '\x01') {
    *(undefined1 *)(param_1 + 0x19) = 0;
    func_0x00010c1d7a40(param_1,param_2,*(undefined8 *)(param_1 + 8));
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar1);
    func_0x00010c1d79c0(param_1,param_2,*(undefined8 *)(param_1 + 0x10));
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
    func_0x00010c0841c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c201980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b84fa78; end: 10b84fb07; -[SIGFooterItem forEachObserver:] */

void FUN_10b84fa78(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (func_0x00010bf529e0(), lVar1 != 0)) {
    lVar3 = 0;
    do {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c102e00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_3 + 0x10))(param_3,uVar2);
      _objc_release(uVar2);
      lVar3 = lVar3 + 1;
    } while (lVar1 != lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b84fb08; end: 10b84fb0f; -[SIGFooterItem alpha] */

undefined8 FUN_10b84fb08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b84fb10; end: 10b84fb17; -[SIGFooterItem overridenBackgroundColor] */

undefined8 FUN_10b84fb10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b84fb18; end: 10b84fb1f; -[SIGFooterItem overrideTintColor] */

undefined8 FUN_10b84fb18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b84fb20; end: 10b84fb27; -[SIGFooterItem dimUnselectedIcons] */

undefined1 FUN_10b84fb20(long param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



/* Entry: 10b84fb28; end: 10b84fb77;  */

void FUN_10b84fb28(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_footerItemConfig_showContentBehi_1125caac0);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfb4460(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b84fb78; end: 10b84fbcb; -[SIGFooterItemConfig setShowBorderAroundView:] */

void FUN_10b84fb78(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x12) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b84fbcc;
  puStack_20 = &UNK_110d62990;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b84fbcc; end: 10b84fcff;  */

void FUN_10b84fbcc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_footerItemConfig_showBorderAroun_1125caab8);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfb4440(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b84fd00; end: 10b84fd53; -[SIGFooterItemConfig setHideBadges:] */

void FUN_10b84fd00(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x14) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b84fd54;
  puStack_20 = &UNK_110d62990;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b84fd54; end: 10b84fd9f;  */

void FUN_10b84fd54(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_hideBadgesDidChangeForFooterItem_1125d6040);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfe1a00(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b84fda0; end: 10b84fdf3; -[SIGFooterItemConfig setHideLabels:] */

void FUN_10b84fda0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x15) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b84fdf4;
  puStack_20 = &UNK_110d62990;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b84fdf4; end: 10b84fe3f;  */

void FUN_10b84fdf4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_hideLabelsDidChangeForFooterItem_1125d6230);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfe21c0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b84fe40; end: 10b84fe97; -[SIGFooterItemConfig dealloc] */

void FUN_10b84fe40(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010c12d580(*(long *)(param_1 + 0x18),param_2,param_1,
                        &PTR____CFConstantStringClassReference_110ebf778);
  }
  puStack_28 = PTR_PTR_11270b4c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b84fe98; end: 10b84ffa3; -[SIGFooterItemConfig observeValueForKeyPath:ofObject:change:context:] */

void FUN_10b84fe98(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if (((int)uVar1 == 0) || (param_4 != *(long *)(param_1 + 0x18))) {
    puStack_48 = PTR_PTR_11270b4c8;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_observeValueForKeyPath_ofObject__112615e88,param_3,param_4,
                        param_5,param_6);
  }
  else {
    uVar1 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b84ffa4; end: 10b84ffab; -[SIGFooterItemConfig setConfigTransitionAnimatable:] */

void FUN_10b84ffa4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b84ffac; end: 10b85000b; -[SIGFooterItemConfig .cxx_destruct] */

void FUN_10b84ffac(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b85000c; end: 10b850017; -[SIGNavigationBarViewTransitionContext .cxx_destruct] */

void FUN_10b85000c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b850018; end: 10b85005b; -[SIGHeader dealloc] */

void FUN_10b850018(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bec33c0();
  puStack_28 = PTR_PTR_11270b4d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b85005c; end: 10b8500b7; -[SIGHeader scrollViewContentOffsetDidChange:] */

void FUN_10b85005c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010bf4cdc0(param_5);
  func_0x00010befda00(param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010c1f7db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_setScrollViewVerticalOffset__11265b990,(long)(param_2 + param_1));
  return;
}



/* Entry: 10b8500b8; end: 10b8500c7; -[SIGHeader titleTextField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8500b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2716f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127949b4),PTR_s_titleTextField_112679fe0);
  return;
}



/* Entry: 10b8500c8; end: 10b8500d7; -[SIGHeader searchField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8500c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c153990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127949b4),PTR_s_searchField_112632880);
  return;
}



/* Entry: 10b8500d8; end: 10b8500e7; -[SIGHeader contentInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8500d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4c7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127949b4),PTR_s_contentInset_1125b0b98);
  return;
}



/* Entry: 10b8500e8; end: 10b8500f7; -[SIGHeader setContentInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8500e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c181f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127949b4),PTR_s_setContentInset__11263e200);
  return;
}



/* Entry: 10b8500f8; end: 10b850107; -[SIGHeader scrollViewVerticalOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8500f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127949b4),PTR_s_scrollViewVerticalOffset_112632530);
  return;
}



/* Entry: 10b850108; end: 10b850153; -[SIGHeader maximumHeightWithFullBottomAccessoryRow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b850108(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010c0c34c0(*(undefined8 *)(param_2 + _DAT_1127949b4));
  dVar1 = 5.0;
  if (*(char *)(param_2 + _DAT_1127949ac) == '\0') {
    dVar1 = 0.0;
  }
  return param_1 + dVar1;
}



/* Entry: 10b850154; end: 10b850163; -[SIGHeader scrollViewScrollingToTopOnTappingStatusBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b850154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127949b4),
             PTR_s_scrollViewScrollingToTopOnTappin_112632520);
  return;
}



/* Entry: 10b850164; end: 10b850223; -[SIGHeader hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b850164(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar1 = &puStack_50;
  puStack_48 = PTR_PTR_11270b4d8;
  puStack_50 = param_1;
  _objc_msgSendSuper2(&puStack_50,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_1127949b4;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf5eee0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c079a40();
  _objc_release(uVar2);
  if (((int)uVar3 == 0) ||
     ((ppuVar1 != (undefined1 **)param_1 &&
      (ppuVar1 != (undefined1 **)*(undefined1 **)(param_1 + lVar5))))) {
    _objc_retain(ppuVar1);
    puVar4 = (undefined1 *)ppuVar1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b850224; end: 10b8502c3; -[SIGHeader pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b850224(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  long *plVar2;
  long lStack_40;
  undefined *puStack_38;
  
  plVar2 = &lStack_40;
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_3 + _DAT_1127949a8);
  func_0x00010c102b20(param_1,param_2);
  if ((uVar1 & 1) == 0) {
    puStack_38 = PTR_PTR_11270b4d8;
    lStack_40 = param_3;
    _objc_msgSendSuper2(param_1,param_2,&lStack_40,PTR_s_pointInside_withEvent__11261e4e8,param_5);
  }
  else {
    plVar2 = (long *)0x1;
  }
  _objc_release(param_5);
  return (undefined1 *)plVar2;
}



/* Entry: 10b8502c4; end: 10b850313; -[SIGHeader disassociateBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8502c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127949a8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  func_0x00010c12c960(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b850314; end: 10b8503ff; -[SIGHeader preCreateHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b850314(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _objc_retain(param_3);
  func_0x00010c2972c0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e1770;
  _objc_alloc(PTR_PTR_1126e1770);
  func_0x00010bf20c00(param_1);
  func_0x00010c013de0(puVar2);
  lVar3 = param_1 + _DAT_1127949b8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c2171c0(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  func_0x00010c187440(puVar2,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c219b60(puVar2,param_2,0);
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_1127949c4),param_2,puVar2,puVar1);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b850400; end: 10b85040f; -[SIGHeader useNewAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b850400(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794994);
}


