/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c2c138; end: 100c2c1f7; -[SIGContainerView traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2c138(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112705620;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x000107c3c7b4(param_1);
  lVar3 = (long)_DAT_11278c79c;
  func_0x000107c550d8(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af8c(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ab24();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x000107c5a92c(uVar2);
  func_0x000107c61180();
  func_0x000107c549b4();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 100c2c1f8; end: 100c2c37b; -[SIGSubscreenViewControllerContentFade traitCollectionDidChange:] */

void FUN_100c2c1f8(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_80;
  code *pcStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_68 = PTR_PTR_11270b680;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x000107c61158(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  uVar3 = param_1;
  func_0x000107c6115c(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(param_1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c61178();
  func_0x000107c3ab24();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_60 = puVar4;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar4 = puVar5;
  func_0x000107c61178();
  func_0x000107c3ab24();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_58 = puVar4;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar4 = puVar6;
  func_0x000107c61178();
  func_0x000107c3ab24();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar4;
  func_0x000107c3e17c();
  func_0x000107c61180();
  func_0x000107c535a0(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  pcStack_78 = FUN_100c2c37c;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = PTR_PTR_11270b4f8;
  puStack_d8 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000107c61154(&puStack_d8,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3fdd0(0x3fb999999999999a);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c61178();
  func_0x000107c3ab24();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_c8 = puVar6;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar6 = puVar7;
  func_0x000107c3fdd0(0);
  func_0x000107c61180();
  puVar8 = puVar6;
  func_0x000107c61178();
  func_0x000107c3ab24();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c0 = puVar8;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c535a0(puVar2);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  puVar5 = puVar2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  func_0x000107c60e78();
  pcStack_e8 = FUN_100c2c4e0;
  puStack_108 = PTR_PTR_11270b560;
  puStack_110 = puVar5;
  puStack_100 = puVar4;
  puStack_f8 = puVar2;
  ppuStack_f0 = &puStack_80;
  func_0x000107c61154(&puStack_110,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x000107c56a14(puVar5);
  return;
}



/* Entry: 100c2c37c; end: 100c2c4df; -[SIGHeaderBackgroundShadowView traitCollectionDidChange:] */

void FUN_100c2c37c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = PTR_PTR_11270b4f8;
  uStack_68 = param_1;
  func_0x000107c61154(&uStack_68,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3fdd0(0x3fb999999999999a);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c61178();
  func_0x000107c3ab24();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_58 = puVar3;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar3 = puVar4;
  func_0x000107c3fdd0(0);
  func_0x000107c61180();
  puVar5 = puVar3;
  func_0x000107c61178();
  func_0x000107c3ab24();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar5;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c535a0(param_1);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  uVar7 = param_1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  pcStack_78 = FUN_100c2c4e0;
  puStack_98 = PTR_PTR_11270b560;
  uStack_a0 = uVar7;
  puStack_90 = puVar1;
  uStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000107c61154(&uStack_a0,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x000107c56a14(uVar7);
  return;
}



/* Entry: 100c2c4e0; end: 100c2c527; -[SIGHeaderItemView traitCollectionDidChange:] */

void FUN_100c2c4e0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b560;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x000107c56a14(param_1);
  return;
}



/* Entry: 100c2c528; end: 100c2c5df; -[SIGHeaderTitle didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2c528(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270b570;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_didMoveToWindow_112527020);
  lVar2 = (long)_DAT_112794d40;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x000107c5cad8();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x000107c5cad8();
    func_0x000107c61180();
    func_0x000107c5e3f8(param_1);
    func_0x000107c61180();
    (**(code **)(lVar1 + 0x10))(lVar1,param_1 != 0);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100c2c5e0; end: 100c2c643; -[SIGHeaderItemView didMoveToWindow] */

void FUN_100c2c5e0(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b560;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_didMoveToWindow_112527020);
  lVar1 = param_1;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 != 0) {
    func_0x000107c49908(param_1);
  }
  return;
}



/* Entry: 100c2c644; end: 100c2c6a3; -[SCSwipeViewContainerViewController traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2c644(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fce80;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112776b1c);
  func_0x000107c3c7b4(param_1);
  func_0x000107c52e08(uVar1);
  return;
}



/* Entry: 100c2c6a4; end: 100c2c74b; -[SCSwipeViewContainerView traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2c6a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fce78;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_traitCollectionDidChange__11267bf88);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af8c(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ab24();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112776af8);
  func_0x000107c5a92c(uVar2);
  func_0x000107c61180();
  func_0x000107c59a18();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 100c2c74c; end: 100c2c757; -[_TtC41CameraFeatureLayoutServicesImplementationP33_13ABE80AA61DF42884218A03B636293E28CameraFeatureLayoutContainer didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2c74c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_didMoveToWindow_112527020;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1);
  pcVar4 = *(code **)(param_1 + _DAT_112ee2aa8);
  if (pcVar4 == (code *)0x0) {
    func_0x000107c61170(param_1);
  }
  else {
    uVar3 = ((undefined8 *)(param_1 + _DAT_112ee2aa8))[1];
    func_0x000107c6157c(uVar3);
    (*pcVar4)();
    func_0x000107c61170(param_1);
    func_0x00010058d43c(pcVar4,uVar3);
  }
  return;
}



/* Entry: 100c2c758; end: 100c2c7ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2c758(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *param_3;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,uVar2);
  pcVar3 = *(code **)(param_1 + _DAT_112ee2aa8);
  if (pcVar3 == (code *)0x0) {
    func_0x000107c61170(param_1);
  }
  else {
    uVar2 = ((undefined8 *)(param_1 + _DAT_112ee2aa8))[1];
    func_0x000107c6157c(uVar2);
    (*pcVar3)();
    func_0x000107c61170(param_1);
    func_0x00010058d43c(pcVar3,uVar2);
  }
  return;
}



/* Entry: 100c2c7f0; end: 100c2c837; -[SCCameraToolbarButtonImpl didMoveToWindow] */

void FUN_100c2c7f0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0488;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_didMoveToWindow_112527020);
  func_0x000107c3cce8(param_1);
  return;
}



/* Entry: 100c2c838; end: 100c2c83f;  */

void FUN_100c2c838(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x0001008482d0();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100c2c840; end: 100c2c893;  */

void FUN_100c2c840(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x0001008482d0();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 100c2c894; end: 100c2c8f7; -[SCCameraOverlayView didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2c894(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f83c8;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_didMoveToWindow_112527020);
  if (*(char *)(param_1 + _DAT_112762848) == '\x01') {
    func_0x000107c4e170(*(undefined8 *)(param_1 + _DAT_11276284c));
  }
  return;
}



/* Entry: 100c2c8f8; end: 100c2c8ff; -[SIGHeaderItem titleViewDidBecomeVisible] */

undefined8 FUN_100c2c8f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 100c2c900; end: 100c2c96f; -[SIGHeaderButtonOptionView traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2c900(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b538;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x000107c59cb0(param_1);
  func_0x000107c3cc00(param_1);
  return;
}



/* Entry: 100c2c970; end: 100c2ca1f; -[SIGHeaderButtonOptionView setTheme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2c970(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + _DAT_112794b08) = param_3;
  lVar1 = (long)_DAT_112794b68;
  func_0x000107c3b144(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112794b34),
                      *(undefined8 *)(param_1 + _DAT_112794b44),*(undefined8 *)(param_1 + lVar1),
                      param_3,0);
  func_0x000107c3b130(param_1);
  func_0x000107c3b104(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde5310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__configureLoadingIndicatorView_f_112556e60,
             *(undefined8 *)(param_1 + _DAT_112794b4c),*(undefined8 *)(param_1 + lVar1),param_3);
  return;
}



/* Entry: 100c2ca20; end: 100c2ca73; -[SIGHeaderButtonBackgroundView traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2ca20(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b540;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x000107c59a2c(param_1);
  return;
}



/* Entry: 100c2ca74; end: 100c2cb23; -[SIGHeaderButtonOptionView didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2ca74(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b538;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_didMoveToWindow_112527020);
  lVar1 = param_1;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    if (*(long *)(param_1 + _DAT_112794b60) != 0) {
      func_0x000107c3b530(param_1);
      return;
    }
  }
  else {
    func_0x000107c61170();
  }
  lVar1 = param_1;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  if ((lVar1 != 0) &&
     (lVar1 = *(long *)(param_1 + _DAT_112794b60), func_0x000107c61170(), lVar1 == 0)) {
    func_0x000107c4eff8(param_1);
  }
  return;
}



/* Entry: 100c2cb24; end: 100c2cb7f; -[SIGFooter traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2cb24(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b4b8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x000107c3cce4(param_1);
  func_0x000107c3cd08(param_1);
  return;
}



/* Entry: 100c2cb80; end: 100c2ccf7; -[SIGFooter _updateThemeBackgroundGradientLayer] */

/* WARNING: Possible PIC construction at 0x000100c2cbfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c2cc34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c2cc64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c2ccac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c2ccd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c2ccb0) */
/* WARNING: Removing unreachable block (ram,0x000100c2cc68) */
/* WARNING: Removing unreachable block (ram,0x000100c2cc38) */
/* WARNING: Removing unreachable block (ram,0x000100c2cc00) */
/* WARNING: Removing unreachable block (ram,0x000100c2ccd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2cb80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_1127948f0;
  func_0x000107c4ff30(*(undefined8 *)(param_1 + lVar3));
  lVar4 = (long)_DAT_11279492c;
  if (*(long *)(param_1 + lVar4) == 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x000107c61160(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
    func_0x000107c3ec60(param_1);
    func_0x000107c54b80(puVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x000107c5d0f0(uVar2);
    func_0x000107c61180();
    func_0x000107c5a0f8(puVar1,param_2,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100c2ccf8; end: 100c2cd9b; -[SIGNavigationBarButton didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2ccf8(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b628;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_didMoveToWindow_112527020);
  lVar1 = param_1;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    if (*(long *)(param_1 + _DAT_112795004) != 0) {
      func_0x000107c3b530(param_1);
      return;
    }
  }
  else {
    func_0x000107c61170();
  }
  lVar1 = param_1;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  if ((lVar1 != 0) &&
     (lVar1 = *(long *)(param_1 + _DAT_112795004), func_0x000107c61170(), lVar1 == 0)) {
    func_0x000107c3c178(param_1);
  }
  return;
}



/* Entry: 100c2cd9c; end: 100c2cda3; -[SIGNavigationBarButtonItem tooltipOption] */

undefined8 FUN_100c2cd9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 100c2cda4; end: 100c2ce27; -[SCContainerViewControllerView didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2cda4(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112705628;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_didMoveToWindow_112527020);
  lVar1 = param_1 + _DAT_11278c7dc;
  func_0x000107c61148(lVar1);
  func_0x000107c5e3f8(param_1);
  func_0x000107c61180();
  func_0x000107c41c38(lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 100c2ce28; end: 100c2ce47; -[SCContainerViewController didMoveToWindow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2ce28(long param_1,undefined8 param_2,long param_3)

{
  *(bool *)(param_1 + _DAT_11278c734) = param_3 != 0;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c23bb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_sig_container_needsStatusBarAppe_11266c900)
    ;
    return;
  }
  return;
}



/* Entry: 100c2ce48; end: 100c2ce4f; -[SCManagedVideoCapturerImpl status] */

undefined8 FUN_100c2ce48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x298);
}



/* Entry: 100c2ce50; end: 100c2ce5b; -[SCARImageCapturer isCapturingPhoto] */

undefined1 FUN_100c2ce50(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 100c2ce5c; end: 100c2cf57;  */

void FUN_100c2ce5c(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x100c76a58;
  puStack_50 = &UNK_110849200;
  func_0x000107c6111c(auStack_48,param_1 + 0x20);
  func_0x000107c6111c(auStack_70,param_1 + 0x20);
  func_0x000107c4c5dc(param_2);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c2cf58; end: 100c2cf5b;  */

void FUN_100c2cf58(void)

{
  return;
}



/* Entry: 100c2cf5c; end: 100c2d007;  */

void FUN_100c2cf5c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4c5e8(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c2d008; end: 100c2d09b;  */

void FUN_100c2d008(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c515d4(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c3b4ec(param_1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100c2d09c; end: 100c2d163; -[SCBlackCameraNoOutputDetectorImpl _didReceiveManagedVideoDataSouceEvent:sampleTimestamp:devicePosition:] */

void FUN_100c2d09c(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  func_0x000107c4f7e8(param_1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4e524(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 100c2d164; end: 100c2d16b; -[SCBlackCameraNoOutputDetectorImpl queuePerformer] */

undefined8 FUN_100c2d164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100c2d16c; end: 100c2d217;  */

void FUN_100c2d16c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4c5e8(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c2d218; end: 100c2d277;  */

/* WARNING: Possible PIC construction at 0x000100c2d260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c2d264) */

void FUN_100c2d218(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c3b4f0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c2d278; end: 100c2d30b; -[SCCaptureVideoDataSourceObserver _didReceiveManagedVideoDataSourceEvent:devicePosition:] */

/* WARNING: Possible PIC construction at 0x000100c2d2e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c2d2ec) */

void FUN_100c2d278(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) goto code_r0x000107c61170;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar1 = param_3;
    func_0x000107c4a278();
    if ((int)uVar1 == 0) goto code_r0x000107c61170;
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) goto LAB_100c2d2c4;
    param_3 = 0;
  }
  else {
LAB_100c2d2c4:
    func_0x000107c515d4(param_3);
    (**(code **)(lVar2 + 0x10))(lVar2,param_3,param_4);
    param_3 = *(undefined8 *)(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c2d30c; end: 100c2d3b7;  */

void FUN_100c2d30c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4c5e8(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c2d3b8; end: 100c2d433;  */

void FUN_100c2d3b8(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3b4f4();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100c2d434; end: 100c2d73f; -[SCARImageCapturer _didReceiveManagedVideoDataSourceEvent:sampleTimestamp:devicePosition:] */

void FUN_100c2d434(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  double dVar12;
  float fVar13;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61174(param_3);
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = param_3, func_0x000107c4a278(), (int)uVar1 != 0))
  {
    func_0x000107c5e330(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c61184();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    func_0x000107c61170(uVar3);
    func_0x000107c555ac(param_1);
    lVar4 = param_1 + 8;
    func_0x000107c61148(lVar4);
    lVar5 = lVar4;
    func_0x000107c5dd84();
    func_0x000107c61180();
    func_0x000107c59144();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    uVar1 = param_3;
    func_0x000107c515d4(param_3);
    func_0x000107c60a1c();
    puVar6 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c45140();
    func_0x000107c61180();
    puVar7 = PTR__OBJC_CLASS___CIContext_1126b3120;
    func_0x000107c40618(PTR__OBJC_CLASS___CIContext_1126b3120);
    func_0x000107c61180();
    uVar8 = uVar1;
    func_0x000107c60ac8(uVar1);
    func_0x000107c60ab8(uVar1);
    puVar9 = puVar7;
    func_0x000107c4094c(0,0,(double)uVar8,(double)uVar1,puVar7);
    func_0x000107c3c084(param_1);
    dVar12 = 1.0;
    puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c4513c(0x3ff0000000000000,PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c61180();
    func_0x000107c60984(puVar9);
    func_0x000107c61174(puVar10);
    func_0x000107c5ea14(*(undefined8 *)(param_1 + 0x20));
    fVar13 = (float)dVar12;
    func_0x000107c3e1f4(*(undefined8 *)(param_1 + 0x20));
    puVar9 = puVar10;
    func_0x000107c2aaf4(fVar13,dVar12,0x4094000000000000,puVar10);
    func_0x000107c61180();
    puVar11 = PTR_PTR_1126b9e70;
    func_0x000107c610f4();
    func_0x000107c46dc4();
    func_0x000107c61144(auStack_78,param_1);
    param_1 = param_1 + 8;
    func_0x000107c61148(param_1);
    lVar4 = param_1;
    func_0x000107c4f7e8();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_80,auStack_78);
    func_0x000107c61174(uVar2);
    func_0x000107c61174(puVar11);
    func_0x000107c4e524(lVar4);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(0);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c2d740; end: 100c2d777;  */

void FUN_100c2d740(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if ((param_1 != 0) && (*(undefined1 *)(param_1 + 0x28) = 1, *(char *)(param_1 + 8) == '\x01')) {
    *(undefined2 *)(param_1 + 8) = 0x100;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100c2d778; end: 100c2d7bf; -[SIGSubscreenView safeAreaInsetsDidChange] */

void FUN_100c2d778(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b678;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_safeAreaInsetsDidChange_11252f690);
  func_0x000107c5d5ec(param_1);
  return;
}



/* Entry: 100c2d7c0; end: 100c2da7f; -[SIGContainerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2d7c0(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  double dVar9;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_112705620;
  lStack_70 = param_5;
  func_0x000107c61154(&lStack_70,PTR_s_layoutSubviews_112600e60);
  lVar7 = (long)_DAT_11278c798;
  if (*(char *)(param_5 + lVar7) == '\x01') {
    func_0x000107c3ec8c(param_5);
    func_0x000107c3ec8c(param_5);
    func_0x000107c3ec8c(param_5);
    *(undefined1 *)(param_5 + lVar7) = 0;
  }
  lVar7 = param_5 + _DAT_11278c7a8;
  func_0x000107c61148(lVar7);
  func_0x000107c3ec60();
  func_0x000107c609d0();
  func_0x000107c61170(lVar7);
  pdVar1 = (double *)(param_5 + _DAT_11278c7ac);
  bVar2 = false;
  if ((*pdVar1 == param_3) && (bVar2 = false, !NAN(pdVar1[1]) && !NAN(param_4))) {
    bVar2 = pdVar1[1] == param_4;
  }
  if (!bVar2) {
    param_2 = param_2 + -0.5;
    *pdVar1 = param_3;
    pdVar1[1] = param_4;
    dVar9 = param_1;
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    if ((dVar9 <= 1.0) ||
       (dVar9 = param_1, func_0x000107c609b0(param_1,param_2,param_3,param_4), dVar9 <= 1.0)) {
      func_0x000107c550d8(*(undefined8 *)(param_5 + _DAT_11278c79c));
    }
    else {
      lVar7 = param_5 + _DAT_11278c7b0;
      func_0x000107c61148();
      func_0x000107c61170();
      if (lVar7 == 0) {
        func_0x000107c3c7b4(param_5);
        func_0x000107c550d8(*(undefined8 *)(param_5 + _DAT_11278c79c));
      }
      puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      func_0x000107c3c400(param_5);
      func_0x000107c3e8b0(param_1,param_2,param_3,param_4,dVar9,puVar3);
      func_0x000107c61180();
      puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      func_0x000107c609d0(param_1,param_2,param_3,param_4,0x3ff0000000000000,0x3ff0000000000000);
      dVar9 = param_1;
      func_0x000107c3c400(param_5);
      fVar8 = (float)(dVar9 + -1.0);
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      func_0x000107c3e8b0(param_1,param_2,param_3,param_4,(double)fVar8,puVar4);
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c3e89c();
      func_0x000107c61180();
      func_0x000107c3df0c(puVar3);
      func_0x000107c61170(puVar5);
      func_0x000107c61178(puVar3);
      func_0x000107c3ab30();
      uVar6 = *(undefined8 *)(param_5 + _DAT_11278c79c);
      func_0x000107c5a92c(uVar6);
      func_0x000107c61180();
      func_0x000107c57274();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
    }
  }
  return;
}



/* Entry: 100c2da80; end: 100c2daa3; -[SIGContainerView _roundedCornerRadius] */

undefined8 FUN_100c2da80(int param_1)

{
  undefined8 uVar1;
  
  func_0x000100478f84();
  uVar1 = 0x402a000000000000;
  if (param_1 == 0) {
    uVar1 = 0x4020000000000000;
  }
  return uVar1;
}



/* Entry: 100c2daa4; end: 100c2daeb; -[SIGHeaderItemView layoutMarginsDidChange] */

void FUN_100c2daa4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b560;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_layoutMarginsDidChange_1125486b8);
  func_0x000107c56a14(param_1);
  return;
}



/* Entry: 100c2daec; end: 100c2db33; -[SIGHeaderItemView safeAreaInsetsDidChange] */

void FUN_100c2daec(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b560;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_safeAreaInsetsDidChange_11252f690);
  func_0x000107c49908(param_1);
  return;
}



/* Entry: 100c2db34; end: 100c2dd73; -[SIGHeaderItemView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2db34(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_11270b560;
  lStack_90 = param_5;
  func_0x000107c61154(&lStack_90,PTR_s_layoutSubviews_112600e60);
  lVar5 = (long)_DAT_112794cdc;
  if (*(long *)(param_5 + lVar5) != 0) {
    func_0x000107c5be08();
  }
  func_0x000107c3b594(param_5);
  dVar6 = param_3;
  func_0x000107c3bc04(param_5);
  lVar4 = *(long *)(param_5 + _DAT_112794cac);
  if (lVar4 != 0) {
    func_0x000107c61174(lVar4);
    func_0x000107c438d4(lVar4);
    dVar6 = param_3 - dVar6;
    dVar7 = -dVar6;
    if (0.0 <= dVar6) {
      dVar7 = dVar6;
    }
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    puStack_c8 = &UNK_10b859314;
    puStack_c0 = &UNK_110870f70;
    func_0x000107c61174(lVar4);
    ppuVar1 = &puStack_d8;
    lStack_b8 = lVar4;
    uStack_b0 = param_1;
    uStack_a8 = param_2;
    dStack_a0 = param_3;
    uStack_98 = param_4;
    func_0x000107c61184();
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61174(lVar4);
    func_0x000107c61174(ppuVar1);
    func_0x000107c4e5fc(puVar2);
    if (0.01 < dVar7 / 1000.0) {
      uVar8 = NEON_fminnm(dVar7 / 1000.0,0x3fb999999999999a);
      puVar2 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
      func_0x000107c610f4();
      func_0x000107c4670c(uVar8);
      uVar8 = *(undefined8 *)(param_5 + lVar5);
      *(undefined **)(param_5 + lVar5) = puVar2;
      func_0x000107c61170(uVar8);
      func_0x000107c3d62c(*(undefined8 *)(param_5 + lVar5));
      func_0x000107c3d5ac(*(undefined8 *)(param_5 + lVar5));
      uVar3 = *(ulong *)(param_5 + lVar5);
      func_0x000107c4a360();
      if ((uVar3 & 1) == 0) {
        func_0x000107c5ba5c(*(undefined8 *)(param_5 + lVar5));
      }
    }
    func_0x000107c61170(ppuVar1);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(ppuVar1);
    func_0x000107c61170(lStack_b8);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 100c2dd74; end: 100c2decb; -[SIGHeaderItemView _effectiveSearchFieldFrame] */

double FUN_100c2dd74(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double extraout_d16;
  
  func_0x000107c3b774();
  dVar2 = param_1;
  func_0x000107c3ba70(param_2);
  dVar3 = 1.0;
  if ((param_1 != 1.0) && (func_0x000107c3cab0(param_2), dVar2 = dVar3, param_1 != 0.0)) {
    lVar1 = param_2;
    func_0x000107c3ba64();
    if (lVar1 == 1) {
      func_0x000107c3cab4(param_2);
      func_0x000107c3caac(param_2);
      dVar2 = dVar3;
    }
    else {
      dVar2 = extraout_d16;
      if (lVar1 == 0) {
        func_0x000107c3caac(param_2);
        func_0x000107c3cab4(param_2);
        dVar2 = dVar3;
      }
    }
    func_0x000107c498e0(dVar2,PTR_PTR_1126e17c8);
  }
  return dVar2;
}



/* Entry: 100c2decc; end: 100c2df53; -[SIGHeaderItemView _intrinsicSearchFieldFrame] */

undefined8
FUN_100c2decc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c3caa8();
  func_0x000107c609b8();
  uVar1 = param_1;
  func_0x000107c609c4(param_1,param_2,param_3,param_4);
  func_0x000107c609cc(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* Entry: 100c2df54; end: 100c2e00f; -[SIGHeaderItemView _topRowBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_100c2df54(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  double dVar1;
  double dVar2;
  
  func_0x000107c3c3b4();
  func_0x000107c3b994(param_5);
  dVar1 = param_1;
  func_0x000107c609c4();
  dVar2 = *(double *)(param_5 + _DAT_112794c94 + 8);
  func_0x000107c609cc(param_1,param_2,param_3,param_4);
  return dVar1 + dVar2;
}



/* Entry: 100c2e010; end: 100c2e1c3; -[SIGHeaderItemView _horizontalContentBoundsWithSafeAreaInsets:] */

double FUN_100c2e010(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    ulong param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar10 = param_2;
  func_0x000107c3ec60();
  func_0x000107c609cc();
  iVar4 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  dVar9 = param_2;
  if (iVar4 != 0) {
    uVar5 = param_5;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    func_0x000107c61170();
    if (uVar5 != 0) {
      uVar5 = param_5;
      func_0x000107c3b1ac();
      func_0x000107c609e0();
      if ((((uVar5 & 1) == 0) &&
          (dVar6 = param_1, func_0x000107c609c4(param_1,dVar10,param_3,param_4),
          (ulong)ABS(dVar6) < 0x7ff0000000000000)) &&
         (dVar6 = param_1, func_0x000107c609b4(param_1,dVar10,param_3,param_4),
         (ulong)ABS(dVar6) < 0x7ff0000000000000)) {
        dVar6 = param_1;
        func_0x000107c609c4(param_1,dVar10,param_3,param_4);
        dVar7 = dVar6;
        func_0x000107c3ec60(param_5);
        func_0x000107c609cc();
        dVar8 = param_1;
        func_0x000107c609b4(param_1,dVar10,param_3,param_4);
        dVar9 = param_1;
        func_0x000107c609c4(param_1,dVar10,param_3,param_4);
        func_0x000107c609b4(param_1,dVar10,param_3,param_4);
        dVar10 = ABS(dVar6 - (dVar7 - dVar8));
        bVar1 = false;
        bVar2 = true;
        bVar3 = false;
        if (param_2 < dVar9) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(dVar10)) {
            bVar1 = dVar10 < 2.0;
            bVar2 = dVar10 == 2.0;
            bVar3 = false;
          }
        }
        if (bVar2 || bVar1 != bVar3) {
          dVar9 = param_2;
        }
      }
    }
  }
  func_0x000107c3ec60(param_5);
  func_0x000107c609b0();
  return dVar9;
}



/* Entry: 100c2e1c4; end: 100c2e1d3; -[SIGHeaderItemView _cornerAdaptiveHorizontalLayoutFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2e1c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794c9c),PTR_s_layoutFrame_112600d58);
  return;
}



/* Entry: 100c2e1d4; end: 100c2e28f; -[SIGHeaderItemView _topRowTitleFrame] */

void FUN_100c2e1d4(undefined8 param_1)

{
  func_0x000107c3caac();
  func_0x000107c3cab4(param_1);
  func_0x000107c3caa8(param_1);
  func_0x000107c3ba64();
  return;
}



/* Entry: 100c2e290; end: 100c2e343; -[SIGHeaderItemView _topRowLeadingAccessoryViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_100c2e290(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    long param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)(param_5 + _DAT_112794ca8);
  func_0x000107c4acb4(uVar1);
  func_0x000107c61180();
  func_0x000107c438d4();
  dVar2 = param_3;
  func_0x000107c61170(uVar1);
  func_0x000107c3caa8(param_5);
  func_0x000107c3ba64();
  if (param_5 == 1) {
    func_0x000107c609b4(param_1,param_2,dVar2,param_4);
    param_1 = param_1 - param_3;
  }
  return param_1;
}



/* Entry: 100c2e344; end: 100c2e353; -[SIGHeaderTitleRow leadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2e344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794dac),PTR_s_accessoryView_112598e80);
  return;
}



/* Entry: 100c2e354; end: 100c2e397; -[SIGHeaderItemView _interfaceLayoutDirection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100c2e354(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112794cd0);
  func_0x000107c45020();
  if ((uVar1 & 1) != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf8d070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_effectiveUserInterfaceLayoutDire_1125c0dc0);
  return param_1;
}



/* Entry: 100c2e398; end: 100c2e44f; -[SIGHeaderItemView _topRowTrailingAccessoryViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_100c2e398(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    long param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)(param_5 + _DAT_112794ca8);
  func_0x000107c5ce90(uVar1);
  func_0x000107c61180();
  func_0x000107c438d4();
  dVar2 = param_3;
  func_0x000107c61170(uVar1);
  func_0x000107c3caa8(param_5);
  func_0x000107c3ba64();
  if ((param_5 != 1) && (param_5 == 0)) {
    func_0x000107c609b4(param_1,param_2,dVar2,param_4);
    param_1 = param_1 - param_3;
  }
  return param_1;
}



/* Entry: 100c2e450; end: 100c2e45f; -[SIGHeaderTitleRow trailingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2e450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794db0),PTR_s_accessoryView_112598e80);
  return;
}



/* Entry: 100c2e460; end: 100c2e57f; -[SIGHeaderItemView _layoutSubviewsInternalWithSearchFieldFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2e460(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = param_1;
  dVar3 = param_2;
  func_0x000107c3cca8();
  func_0x000107c3ba74(param_5);
  lVar1 = (long)_DAT_112794c98;
  func_0x000107c40268(*(undefined8 *)(param_5 + lVar1));
  func_0x000107c5378c(dVar3,*(undefined8 *)(param_5 + lVar1));
  func_0x000107c3ca4c(param_1,param_2,param_3,param_4,param_5);
  func_0x000107c54b80(*(undefined8 *)(param_5 + _DAT_112794ca0));
  func_0x000107c3caa8(param_5);
  func_0x000107c54b80(*(undefined8 *)(param_5 + _DAT_112794ca8));
  func_0x000107c3af34(param_5);
  func_0x000107c54b80(*(undefined8 *)(param_5 + _DAT_112794cc0));
  if (2.220446049250313e-16 < ABS(dVar2 - dVar3)) {
    param_5 = param_5 + _DAT_112794cd8;
    func_0x000107c61148(param_5);
    func_0x000107c44d5c(dVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
  return;
}



/* Entry: 100c2e580; end: 100c2e62b; -[SIGHeaderItemView _tabBarFrameWithSearchFieldFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100c2e580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_1;
  uVar3 = param_2;
  uVar4 = param_3;
  uVar5 = param_4;
  func_0x000107c498ec(*(undefined8 *)(param_5 + _DAT_112794ca0));
  lVar1 = param_5;
  func_0x000107c3bb90();
  if ((int)lVar1 == 0) {
    func_0x000107c3caa8(param_5);
    param_4 = uVar5;
    param_3 = uVar4;
    param_2 = uVar3;
    param_1 = uVar2;
  }
  func_0x000107c609b8(param_1,param_2,param_3,param_4);
  func_0x000107c3ec60(param_5);
  return 0;
}



/* Entry: 100c2e62c; end: 100c2e63b; -[SIGHeaderTabBarRow intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2e62c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794cf0),PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 100c2e63c; end: 100c2e657; -[SIGHeaderItemView _isShowingSearchRow] */

bool FUN_100c2e63c(double param_1)

{
  func_0x000107c3b774();
  return param_1 != 0.0;
}



/* Entry: 100c2e658; end: 100c2e6b3; -[SIGHeaderTitleRowAccessoryViewContainer presentTooltips] */

/* WARNING: Possible PIC construction at 0x000100c2e698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c2e69c) */

void FUN_100c2e658(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_1126a5cc0;
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c61174(uVar4);
  uVar3 = uVar4;
  func_0x00010010fab4(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 100c2e6b4; end: 100c2e7cb; -[SIGHeaderButtonGroup presentTooltips] */

/* WARNING: Possible PIC construction at 0x000100c2e764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c2e768) */
/* WARNING: Removing unreachable block (ram,0x000100c2e774) */
/* WARNING: Removing unreachable block (ram,0x000100c2e754) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2e6b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + _DAT_112794a54;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c61170();
  if (lVar1 != 0) {
    lVar4 = *(long *)(param_1 + _DAT_112794a50);
    func_0x000107c61174(lVar4);
    lVar1 = lVar4;
    func_0x000107c4080c();
    uVar2 = uRam0000000000000000;
    if (lVar1 != 0) goto code_r0x000107c4eff4;
    func_0x000107c61170();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  func_0x000107c60e78();
  uVar2 = *(undefined8 *)(lVar4 + _DAT_112794a08);
code_r0x000107c4eff4:
                    /* WARNING: Could not recover jumptable at 0x00010c10e830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_presentTooltip_112621428);
  return;
}



/* Entry: 100c2e7cc; end: 100c2e7db; -[SIGHeaderButton presentTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2e7cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794a08),PTR_s_presentTooltip_112621428);
  return;
}



/* Entry: 100c2e7dc; end: 100c2e8d3; -[SIGHeaderButtonItemView presentTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2e7dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + _DAT_112794a9c);
  func_0x000107c61174(lVar4);
  lVar2 = lVar4;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar4);
      }
      func_0x000107c4eff4(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x000107c4080c();
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c10e8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 100c2e8d4; end: 100c2e8e3; -[SIGHeaderButtonOptionView presentTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2e8d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentTooltipOption__112621458,*(undefined8 *)(param_1 + _DAT_112794b64)
            );
  return;
}



/* Entry: 100c2e8e4; end: 100c2ea87; -[SIGHeaderItemView _bottomAccessoryViewRowFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100c2e8e4(double param_1,double param_2,double param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  lVar3 = (long)_DAT_112794ca0;
  iVar2 = (int)*(undefined8 *)(param_5 + lVar3);
  func_0x000107c49eac();
  puVar1 = PTR__CGRectZero_110347608;
  if (iVar2 == 0) {
    func_0x000107c438d4(*(undefined8 *)(param_5 + lVar3));
    uVar5 = param_4;
    dStack_88 = param_3;
    dStack_80 = param_2;
    dStack_78 = param_1;
  }
  else {
    param_2 = *(double *)PTR__CGRectZero_110347608;
    dStack_80 = *(double *)(PTR__CGRectZero_110347608 + 8);
    param_1 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
    uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    dStack_88 = param_1;
    dStack_78 = param_2;
  }
  if (*(char *)(param_5 + _DAT_112794cb0) == '\x01') {
    func_0x000107c438d4(*(undefined8 *)(param_5 + _DAT_112794cac));
    dVar6 = param_2;
    dVar7 = param_3;
    uVar8 = param_4;
  }
  else {
    param_1 = *(double *)puVar1;
    dVar6 = *(double *)(puVar1 + 8);
    dVar7 = *(double *)(puVar1 + 0x10);
    uVar8 = *(undefined8 *)(puVar1 + 0x18);
  }
  dVar4 = param_1;
  func_0x000107c438d4(*(undefined8 *)(param_5 + _DAT_112794ca8));
  func_0x000107c609b8(dStack_78,dStack_80,dStack_88,uVar5);
  func_0x000107c609b8(param_1,dVar6,dVar7,uVar8);
  func_0x000107c609b8(dVar4,param_2,param_3,param_4);
  func_0x000107c3b76c(param_5);
  if (2.220446049250313e-16 <= dVar4) {
    func_0x000107c3ec60(param_5);
    func_0x000107c498ec(*(undefined8 *)(param_5 + _DAT_112794cc0));
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)puVar1;
  }
  return uVar5;
}



/* Entry: 100c2ea88; end: 100c2eacb; -[SIGTabBarView layoutSubviews] */

void FUN_100c2ea88(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c4f9ec();
  puStack_28 = PTR_PTR_11270b700;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_layoutSubviews_112600e60);
  return;
}



/* Entry: 100c2eacc; end: 100c2eae7; -[SIGTabBarView recalculateLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2eacc(long param_1)

{
  if (*(char *)(param_1 + _DAT_1127952e8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be86bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__recalculateTabLayoutsScrollSpan_11257f498)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be86c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__recalculateTabLayoutsScrollSpan_11257f4a0);
  return;
}



/* Entry: 100c2eae8; end: 100c2ee07; -[SIGTabBarView _recalculateTabLayoutsScrollSpanTextAndNotCentered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2eae8(double param_1,undefined8 param_2,double param_3,double param_4,ulong param_5)

{
  double *pdVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  ulong unaff_x20;
  ulong unaff_x21;
  long lVar8;
  long unaff_x22;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  ulong uStack_1b0;
  undefined *puStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  long lStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_1127952d8;
  lVar3 = *(long *)(param_5 + lVar9);
  func_0x000107c40808();
  uVar5 = 0;
  if ((lVar3 != 0) && (uVar5 = param_5, func_0x000107c438d4(), 0.0 < param_3)) {
    uVar5 = param_5;
    func_0x000107c5ce94();
    func_0x000107c61180();
    unaff_x20 = uVar5;
    func_0x000107c4eca0();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    unaff_x22 = (long)_DAT_1127952c4;
    unaff_x21 = *(ulong *)(param_5 + unaff_x22);
    func_0x000107c49d0c();
    lVar3 = (long)_DAT_1127952e4;
    unaff_d8 = *(double *)(param_5 + lVar3);
    func_0x000107c438d4(param_5);
    if ((unaff_d8 != param_3) || ((unaff_x21 & 1) == 0)) {
      func_0x000107c438d4(param_5);
      *(double *)(param_5 + lVar3) = param_3;
      dVar12 = param_3;
      func_0x000107c61174(unaff_x20);
      uVar4 = *(undefined8 *)(param_5 + unaff_x22);
      *(ulong *)(param_5 + unaff_x22) = unaff_x20;
      func_0x000107c61170(uVar4);
      lVar3 = (long)_DAT_1127952f4;
      if (*(long *)(param_5 + lVar3) != 0) {
        func_0x000107c413a0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      }
      func_0x000107c3bf48(param_5);
      unaff_d8 = param_1;
      func_0x000107c3c3f8(param_5);
      dVar14 = 0.0;
      lStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      lVar8 = *(long *)(param_5 + lVar9);
      func_0x000107c61174(lVar8);
      lVar6 = lVar8;
      func_0x000107c4080c();
      if (lVar6 == 0) {
        unaff_d11 = 0.0;
      }
      else {
        lVar10 = *plStack_140;
        unaff_d11 = 0.0;
        do {
          lVar11 = 0;
          do {
            if (*plStack_140 != lVar10) {
              func_0x000107c61128(lVar8);
            }
            func_0x000107c498ec(*(undefined8 *)(lStack_148 + lVar11 * 8));
            unaff_d11 = unaff_d11 + dVar14;
            lVar11 = lVar11 + 1;
          } while (lVar6 != lVar11);
          lVar6 = lVar8;
          func_0x000107c4080c();
        } while (lVar6 != 0);
        unaff_x22 = 0;
      }
      func_0x000107c61170(lVar8);
      unaff_d9 = (param_3 - unaff_d11) + -32.0;
      uVar5 = *(ulong *)(param_5 + lVar9);
      func_0x000107c40808();
      param_3 = dVar12;
      if (1 < uVar5) {
        lVar6 = *(long *)(param_5 + lVar9);
        func_0x000107c40808();
        unaff_d9 = unaff_d9 / (double)(lVar6 - 1);
        param_3 = dVar12;
      }
      unaff_x21 = param_5;
      if (param_1 <= unaff_d9) {
        uVar5 = *(ulong *)(param_5 + lVar9);
        func_0x000107c40808();
        dVar12 = unaff_d9;
        if (unaff_d8 <= unaff_d9) {
          dVar12 = unaff_d8;
        }
        unaff_d8 = dVar12;
        if (2 < uVar5) {
          unaff_d8 = unaff_d9;
        }
        lVar9 = *(long *)(param_5 + lVar9);
        func_0x000107c40808();
        unaff_d9 = unaff_d11 + unaff_d8 * (double)(lVar9 - 1);
        func_0x000107c3bc0c(unaff_d9,unaff_d8);
        func_0x000107c61180();
        func_0x000107c3b518(unaff_d9,param_5);
      }
      else {
        func_0x000107c3bc08();
        func_0x000107c61180();
        lVar9 = *(long *)(param_5 + lVar9);
        func_0x000107c40808(lVar9);
        func_0x000107c3b5c0(unaff_d11 + unaff_d8 * (double)(lVar9 - 1) + 32.0,param_5);
      }
      func_0x000107c61174(unaff_x21);
      uVar4 = *(undefined8 *)(param_5 + lVar3);
      *(ulong *)(param_5 + lVar3) = unaff_x21;
      func_0x000107c61170(uVar4);
      func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      if (*(long *)(param_5 + (long)_DAT_1127952f0) != 0) {
        func_0x000107c3abec(param_5);
      }
      func_0x000107c61170(unaff_x21);
      unaff_d10 = param_1;
    }
    uVar5 = unaff_x20;
    func_0x000107c61170();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  func_0x000107c60e78();
  pcStack_158 = FUN_100c2ee08;
  puStack_1a8 = PTR_PTR_1126fce78;
  uStack_1b0 = uVar5;
  dStack_1a0 = unaff_d11;
  dStack_198 = unaff_d10;
  dStack_190 = unaff_d9;
  dStack_188 = unaff_d8;
  lStack_180 = unaff_x22;
  uStack_178 = unaff_x21;
  uStack_170 = unaff_x20;
  uStack_168 = param_5;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x000107c61154(&uStack_1b0,PTR_s_layoutSubviews_112600e60);
  pdVar1 = (double *)(uVar5 + (long)_DAT_112776b00);
  func_0x000107c3ec60(uVar5);
  dVar12 = *pdVar1;
  dVar14 = pdVar1[1];
  bVar2 = false;
  if ((dVar12 == param_3) && (bVar2 = false, !NAN(dVar14) && !NAN(param_4))) {
    bVar2 = dVar14 == param_4;
  }
  if (!bVar2) {
    func_0x000107c3ec60(uVar5);
    *pdVar1 = param_3;
    pdVar1[1] = param_4;
    func_0x000107c3ec60(uVar5);
    func_0x000107c609d0();
    lVar3 = (long)_DAT_112776af8;
    uVar4 = *(undefined8 *)(uVar5 + lVar3);
    dVar13 = dVar12;
    func_0x000107c5a92c(uVar4);
    func_0x000107c61180();
    func_0x000107c4b644();
    dVar13 = dVar13 * 0.5;
    param_4 = param_4 + dVar13;
    func_0x000107c61170(uVar4);
    puVar7 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x000107c3c400(uVar5);
    func_0x000107c3e8b0(dVar12,dVar14 + -1.0,param_3,param_4,dVar13,puVar7);
    func_0x000107c61180();
    func_0x000107c61178();
    func_0x000107c3ab30();
    uVar4 = *(undefined8 *)(uVar5 + lVar3);
    func_0x000107c5a92c(uVar4);
    func_0x000107c61180();
    func_0x000107c57274();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar7);
  }
  return;
}



/* Entry: 100c2ee08; end: 100c2ef5b; -[SCSwipeViewContainerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2ee08(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126fce78;
  lStack_60 = param_5;
  func_0x000107c61154(&lStack_60,PTR_s_layoutSubviews_112600e60);
  pdVar1 = (double *)(param_5 + _DAT_112776b00);
  func_0x000107c3ec60(param_5);
  dVar6 = *pdVar1;
  dVar8 = pdVar1[1];
  bVar2 = false;
  if ((dVar6 == param_3) && (bVar2 = false, !NAN(dVar8) && !NAN(param_4))) {
    bVar2 = dVar8 == param_4;
  }
  if (!bVar2) {
    func_0x000107c3ec60(param_5);
    *pdVar1 = param_3;
    pdVar1[1] = param_4;
    func_0x000107c3ec60(param_5);
    func_0x000107c609d0();
    lVar5 = (long)_DAT_112776af8;
    uVar3 = *(undefined8 *)(param_5 + lVar5);
    dVar7 = dVar6;
    func_0x000107c5a92c(uVar3);
    func_0x000107c61180();
    func_0x000107c4b644();
    dVar7 = dVar7 * 0.5;
    param_4 = param_4 + dVar7;
    func_0x000107c61170(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x000107c3c400(param_5);
    func_0x000107c3e8b0(dVar6,dVar8 + -1.0,param_3,param_4,dVar7,puVar4);
    func_0x000107c61180();
    func_0x000107c61178();
    func_0x000107c3ab30();
    uVar3 = *(undefined8 *)(param_5 + lVar5);
    func_0x000107c5a92c(uVar3);
    func_0x000107c61180();
    func_0x000107c57274();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 100c2ef5c; end: 100c2efaf; -[SCCameraViewController viewSafeAreaInsetsDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2ef5c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f8378;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_viewSafeAreaInsetsDidChange_11252f568);
  func_0x000107c4e5e0(*(undefined8 *)(param_1 + _DAT_1127624cc));
  return;
}



/* Entry: 100c2efb0; end: 100c2efbf; -[SCCameraViewControllerStartupWorkflow performViewSafeAreaInsetsDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2efb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127626e8),
             PTR_s_containingViewSafeAreaInsetsDidC_1125b06c8);
  return;
}



/* Entry: 100c2efc0; end: 100c2efc3; -[SCCameraViewfinderLayoutController containingViewSafeAreaInsetsDidChange] */

void FUN_100c2efc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec96d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__syncAndEvaluate_11258ff58);
  return;
}



/* Entry: 100c2efc4; end: 100c2f017; -[SCCameraViewfinderGeometryEnvironmentProvider currentFooterConfiguration] */

double FUN_100c2efc4(int param_1)

{
  double dVar1;
  double dVar2;
  
  func_0x00010052b600();
  dVar2 = 60.0;
  if ((double)param_1 <= 60.0) {
    dVar2 = (double)param_1;
  }
  if (0x21 < param_1 - 0x33U) {
    dVar2 = 60.0;
  }
  func_0x000100456ca0();
  dVar1 = 1.5;
  if (param_1 == 0) {
    dVar1 = 1.0;
  }
  return dVar1 * dVar2;
}



/* Entry: 100c2f018; end: 100c2f10f;  */

void FUN_100c2f018(double *param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  double param_5,undefined8 param_6,double param_7,undefined8 param_8,double param_9
                  )

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double in_stack_00000000;
  
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_3;
  auVar4 = NEON_fmaxnm(auVar4,ZEXT216(0),8);
  dVar3 = auVar4._0_8_;
  dVar2 = auVar4._8_8_;
  dVar6 = dVar2;
  if (param_4 * dVar3 <= dVar2) {
    dVar6 = param_4 * dVar3;
  }
  dVar5 = (dVar6 / param_4) * in_stack_00000000;
  dVar6 = dVar6 * in_stack_00000000;
  auVar7._0_8_ = -(ulong)(dVar5 < 0.0);
  auVar7._8_8_ = -(ulong)(dVar6 < 0.0);
  auVar8._0_8_ = -dVar5;
  auVar8._8_8_ = -dVar6;
  auVar9._8_8_ = dVar6;
  auVar9._0_8_ = dVar5;
  auVar1._8_8_ = dVar6;
  auVar1._0_8_ = dVar5;
  auVar4 = NEON_fmov(0x3ff0000000000000,8);
  auVar4 = NEON_fmaxnm(auVar1 ^ (auVar9 ^ auVar8) & auVar7,auVar4,8);
  auVar9 = NEON_fmov(0x4010000000000000,8);
  dVar5 = (double)(long)(dVar5 + auVar4._0_8_ * 2.220446049250313e-16 * auVar9._0_8_) /
          in_stack_00000000;
  in_stack_00000000 =
       (double)(long)(dVar6 + auVar4._8_8_ * 2.220446049250313e-16 * auVar9._8_8_) /
       in_stack_00000000;
  if (in_stack_00000000 <= dVar2) {
    dVar2 = in_stack_00000000;
  }
  dVar6 = dVar3;
  if (dVar5 <= dVar3) {
    dVar6 = dVar5;
  }
  *param_1 = dVar2;
  param_1[1] = dVar6;
  if (param_7 + param_5 + param_9 + 52.0 + -1.1920928955078125e-07 <= dVar3 - dVar6) {
    dVar2 = 0.0;
  }
  else {
    param_9 = param_9 + -4.0;
    if (param_9 <= 0.0) {
      param_9 = 0.0;
    }
    dVar2 = 9.88131291682493e-324;
    if (param_7 + param_5 + param_9 + -1.1920928955078125e-07 <= dVar3 - dVar6) {
      dVar2 = 4.94065645841247e-324;
    }
  }
  param_1[2] = dVar2;
  param_1[3] = param_4;
  return;
}



/* Entry: 100c2f110; end: 100c2f217; -[SCCameraViewfinderGeometrySnapshot initWithContainerBoundsSize:systemSafeAreaInsets:displayScale:targetAspectRatio:minimumOpaqueFooterHeight:fittedSize:positionTier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2f110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_9;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_9 + _DAT_112fe9698);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_9 + _DAT_112fe96a0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = param_5;
  puVar1[3] = param_6;
  *(undefined8 *)(param_9 + _DAT_112fe96a8) = param_7;
  *(undefined8 *)(param_9 + _DAT_112fe96b0) = param_8;
  *(undefined8 *)(param_9 + _DAT_112fe96b8) = in_stack_00000000;
  puVar1 = (undefined8 *)(param_9 + _DAT_112fe96c0);
  *puVar1 = in_stack_00000008;
  puVar1[1] = in_stack_00000010;
  *(undefined8 *)(param_9 + _DAT_112fe96c8) = param_11;
  lStack_70 = param_9;
  lStack_68 = lVar2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c2f218; end: 100c2f24b; -[SCCameraViewfinderGeometrySnapshotStore updateSnapshot:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2f218(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ee2a20);
  *(undefined8 *)(param_1 + _DAT_112ee2a20) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c2f24c; end: 100c2f2af; -[SCCameraOverlayView safeAreaInsetsDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2f24c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f83c8;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_safeAreaInsetsDidChange_11252f690);
  if (*(char *)(param_1 + _DAT_112762848) == '\x01') {
    func_0x000107c4e1a4(*(undefined8 *)(param_1 + _DAT_11276284c));
  }
  return;
}



/* Entry: 100c2f2b0; end: 100c2f2bb; -[_TtC41CameraFeatureLayoutServicesImplementationP33_13ABE80AA61DF42884218A03B636293E28CameraFeatureLayoutContainer safeAreaInsetsDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2f2b0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_safeAreaInsetsDidChange_11252f690;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1);
  pcVar4 = *(code **)(param_1 + _DAT_112ee2aa8);
  if (pcVar4 == (code *)0x0) {
    func_0x000107c61170(param_1);
  }
  else {
    uVar3 = ((undefined8 *)(param_1 + _DAT_112ee2aa8))[1];
    func_0x000107c6157c(uVar3);
    (*pcVar4)();
    func_0x000107c61170(param_1);
    func_0x00010058d43c(pcVar4,uVar3);
  }
  return;
}



/* Entry: 100c2f2bc; end: 100c2f30f; -[SCLensCarouselPlaceholderView layoutSubviews] */

void FUN_100c2f2bc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112700d08;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x000107c3ca58(param_1);
  func_0x000107c3cc64(param_1);
  return;
}



/* Entry: 100c2f310; end: 100c2f367; -[SCLensCarouselPlaceholderView _targetPlaceholdersCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100c2f310(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  func_0x000107c3ec60();
  func_0x000107c609cc();
  lVar1 = (long)_DAT_112782fe4;
  dVar2 = param_1;
  func_0x000107c4a774(*(undefined8 *)(param_2 + lVar1));
  dVar3 = dVar2;
  func_0x000107c4989c(*(undefined8 *)(param_2 + lVar1));
  return (long)(param_1 / (dVar2 + dVar3));
}



/* Entry: 100c2f368; end: 100c2f44b; -[SCLensCarouselPlaceholderView _updatePlaceholdersCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2f368(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112782fec;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x000107c3e158();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c40808();
  func_0x000107c61170(uVar1);
  lVar6 = param_3 - uVar2;
  if (lVar6 != 0) {
    if (param_3 < uVar2) {
      lVar6 = uVar2 - param_3;
      do {
        uVar3 = *(undefined8 *)(param_1 + lVar7);
        func_0x000107c3e158(uVar3);
        func_0x000107c61180();
        uVar5 = uVar3;
        func_0x000107c43638();
        func_0x000107c61180();
        func_0x000107c4ff34();
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar3);
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    else {
      do {
        uVar5 = *(undefined8 *)(param_1 + lVar7);
        lVar4 = param_1;
        func_0x000107c3b308(param_1);
        func_0x000107c61180();
        func_0x000107c3d5b4(uVar5,param_2,lVar4);
        func_0x000107c61170(lVar4);
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  return;
}



/* Entry: 100c2f44c; end: 100c2f7df; -[SCLensCarouselPlaceholderView _createPlaceholderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_100c2f44c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61160();
  lVar20 = (long)_DAT_112782fe8;
  func_0x000107c5b078(*(undefined8 *)(param_3 + lVar20));
  func_0x000107c5b078(*(undefined8 *)(param_3 + lVar20));
  uVar22 = 0;
  func_0x000107c52e44(0,0,param_1,param_2,puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0xd5);
  func_0x000107c61180();
  uVar21 = 0x3fd0000000000000;
  puVar3 = puVar2;
  func_0x000107c3fdd0(0x3fd0000000000000);
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_4,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c407dc(*(undefined8 *)(param_3 + lVar20));
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(uVar21);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(puVar1,param_4,0);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61160();
  func_0x000107c5a050();
  func_0x000107c3d89c(puVar3,param_4,puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar3;
  func_0x000107c5e308();
  func_0x000107c61180();
  lVar19 = (long)_DAT_112782fe4;
  func_0x000107c4a774(*(undefined8 *)(param_3 + lVar19));
  puVar5 = puVar4;
  func_0x000107c40290();
  func_0x000107c61180();
  puVar6 = puVar3;
  puStack_a8 = puVar5;
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c4a774(*(undefined8 *)(param_3 + lVar19));
  puVar7 = puVar6;
  func_0x000107c40290();
  func_0x000107c61180();
  puVar8 = puVar1;
  puStack_a0 = puVar7;
  func_0x000107c5e308();
  func_0x000107c61180();
  func_0x000107c5b078(*(undefined8 *)(param_3 + lVar20));
  puVar9 = puVar8;
  func_0x000107c40290();
  func_0x000107c61180();
  puVar10 = puVar1;
  puStack_98 = puVar9;
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c5b078(*(undefined8 *)(param_3 + lVar20));
  puVar11 = puVar10;
  uVar21 = uVar22;
  func_0x000107c40290(uVar22);
  func_0x000107c61180();
  puVar12 = puVar1;
  puStack_90 = puVar11;
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar13 = puVar3;
  func_0x000107c3f75c(puVar3);
  func_0x000107c61180();
  puVar14 = puVar12;
  func_0x000107c40280(puVar12,param_4,puVar13);
  func_0x000107c61180();
  puVar15 = puVar1;
  puStack_88 = puVar14;
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar16 = puVar3;
  func_0x000107c3f764(puVar3);
  func_0x000107c61180();
  puVar17 = puVar15;
  func_0x000107c40280(puVar15,param_4,puVar16);
  func_0x000107c61180();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar17;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_a8,6);
  func_0x000107c61180();
  func_0x000107c3d048(puVar2,param_4,puVar18);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    auVar23._8_8_ = uVar21;
    auVar23._0_8_ = uVar22;
    return auVar23;
  }
  func_0x000107c60e78();
  return *(undefined1 (*) [16])(puVar1 + _DAT_113039188);
}



/* Entry: 100c2f7e0; end: 100c2f7f3; -[SCLensCarouselItemLayout size] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100c2f7e0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_113039188);
}



/* Entry: 100c2f7f4; end: 100c2f803; -[SCLensCarouselItemLayout cornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c2f7f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113039190);
}



/* Entry: 100c2f804; end: 100c2faf7;  */

void FUN_100c2f804(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  cVar1 = *(char *)((long)param_3 + 0x17);
  puStack_48 = (undefined8 *)*param_3;
  if (-1 < (long)cVar1) {
    puStack_48 = param_3;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  lStack_40 = param_3[1];
  if (-1 < cVar1) {
    lStack_40 = (long)cVar1;
  }
  param_2 = param_2 + 0x160;
  func_0x000100697be4(param_2,&puStack_48,&uStack_38);
  if ((int)param_2 != 0) {
    param_1[1] = uStack_30;
    *param_1 = uStack_38;
    param_1[2] = uStack_28;
    param_1 = &uStack_38;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c60ca0(&uStack_38);
  return;
}



/* Entry: 100c2faf8; end: 100c2fbc7;  */

undefined8
FUN_100c2faf8(undefined8 *param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  bool bVar4;
  
  bVar4 = param_2 != (undefined *)0x0;
  puVar1 = &UNK_100a3dc94;
  if (bVar4) {
    puVar1 = param_2;
  }
  puVar2 = &UNK_100a412c8;
  if (bVar4) {
    puVar2 = param_3;
  }
  param_1[5] = puVar1;
  param_1[6] = puVar2;
  uVar3 = 0;
  if (bVar4) {
    uVar3 = param_4;
  }
  param_1[7] = uVar3;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 2) = 0x40;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[9] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x2a] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  *(ushort *)(param_1 + 0x53) = *(ushort *)(param_1 + 0x53) & 0xffc0 | 0x10;
  *(undefined4 *)((long)param_1 + 0x29c) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0x40000000b;
  *(undefined8 *)((long)param_1 + 100) = 0xf00000010;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f;
  param_1[0x57] = &UNK_110ce14e8;
  param_1[0x58] = &UNK_110ce1598;
  return 1;
}



/* Entry: 100c2fbc8; end: 100c2ff6f;  */

long FUN_100c2fbc8(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar1 = &UNK_10e5895e0;
    func_0x0001007869ec(&UNK_10e5895e0);
    uStack_48 = 0;
    func_0x0001001f3124((long *)(param_1 + 0x20),puVar1);
    func_0x000100786be8(&uStack_48);
    uVar3 = 1;
  }
  else {
    uVar3 = 3;
  }
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  func_0x000100648ab8(param_1 + 0x30,param_2);
  *(undefined4 *)(param_1 + 0x38) = param_3;
  lVar2 = param_1;
  func_0x000100c2fc80(param_1,0);
  if ((int)lVar2 == -1) {
    func_0x0001001c2158(param_1 + 0x40,param_4);
  }
  return lVar2;
}



/* Entry: 100c2ff70; end: 100c30107;  */

long FUN_100c2ff70(byte *param_1,byte *param_2,uint param_3,long param_4,uint param_5)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined2 uVar5;
  byte *pbVar6;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  
  lVar1 = *(long *)(param_4 + 8);
  pbVar7 = (byte *)(*(long *)(param_4 + 0x20) +
                   (-(ulong)(param_5 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_5 << 1) +
                   (long)(int)param_5);
  pbVar6 = (byte *)(lVar1 + (ulong)*(ushort *)(*(long *)(param_4 + 0x10) + (ulong)*pbVar7 * 2));
  bVar3 = pbVar7[1];
  uVar4 = *(ushort *)(*(long *)(param_4 + 0x10) + (ulong)pbVar7[2] * 2);
  bVar2 = *pbVar6;
  pbVar7 = param_1;
  for (lVar9 = 0; (uint)bVar2 != (uint)lVar9; lVar9 = lVar9 + 1) {
    *pbVar7 = pbVar6[lVar9 + 1];
    pbVar7 = pbVar7 + 1;
  }
  lVar9 = -lVar9;
  uVar8 = bVar3 - 0xb;
  pbVar6 = param_2;
  uVar11 = param_3;
  if (bVar3 - 0xc < 9) {
    pbVar6 = param_2 + uVar8;
    uVar11 = param_3 - uVar8;
  }
  uVar8 = (uint)bVar3;
  if (uVar8 < 10) {
    pbVar6 = param_2;
    uVar11 = param_3 - uVar8;
  }
  for (uVar10 = (ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)); uVar10 != 0;
      uVar10 = uVar10 - 1) {
    *pbVar7 = *pbVar6;
    lVar9 = lVar9 + -1;
    pbVar6 = pbVar6 + 1;
    pbVar7 = pbVar7 + 1;
  }
  lVar9 = -lVar9;
  if (uVar8 == 0x16) {
    uVar5 = *(undefined2 *)(*(long *)(param_4 + 0x28) + (long)(int)param_5 * 2);
    func_0x000107c37cdc();
    pbVar7 = param_1 + extraout_w8_02;
    for (; 0 < (int)uVar11; uVar11 = uVar11 - (int)pbVar6) {
      pbVar6 = pbVar7;
      func_0x000107c2f07c(pbVar7,uVar11,uVar5);
      pbVar7 = pbVar7 + (int)pbVar6;
    }
  }
  else if (bVar3 == 0xb) {
    func_0x000107c37cdc();
    pbVar7 = param_1 + extraout_w8_00;
    for (; 0 < (int)uVar11; uVar11 = uVar11 - (int)pbVar6) {
      pbVar6 = pbVar7;
      func_0x000107c2f078();
      pbVar7 = pbVar7 + ((ulong)pbVar6 & 0xffffffff);
    }
  }
  else if (bVar3 == 0x15) {
    func_0x000107c37cdc(param_1,param_2,
                        *(undefined2 *)(*(long *)(param_4 + 0x28) + (long)(int)param_5 * 2));
    func_0x000107c2f07c(param_1 + extraout_w8_01,uVar11);
  }
  else if (bVar3 == 10) {
    func_0x000107c37cdc();
    func_0x000107c2f078(param_1 + extraout_w8);
  }
  pbVar7 = (byte *)(lVar1 + (ulong)uVar4);
  uVar8 = (uint)*pbVar7;
  if (*pbVar7 != 0) {
    do {
      pbVar7 = pbVar7 + 1;
      uVar8 = uVar8 - 1;
      param_1[lVar9] = *pbVar7;
      lVar9 = lVar9 + 1;
    } while (uVar8 != 0);
  }
  return lVar9;
}



/* Entry: 100c30108; end: 100c3013b;  */

void FUN_100c30108(long param_1,long param_2)

{
  if (param_2 != 0) {
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) - *(long *)(param_2 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)((long *)(param_2 + -8));
    return;
  }
  return;
}



/* Entry: 100c3013c; end: 100c301ff;  */

void FUN_100c3013c(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    (*UNRECOVERED_JUMPTABLE)(uVar1,*(undefined8 *)(param_1 + 0x2b0));
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x2a8));
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x150));
    *(undefined8 *)(param_1 + 0x150) = 0;
    (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0xa8) = 0;
    (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0xc0) = 0;
    (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
    (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100c301f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,param_1);
    return;
  }
  return;
}



/* Entry: 100c30200; end: 100c303c3;  */

undefined8 * FUN_100c30200(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_110ce0430;
  iVar1 = *(int *)(param_1[10] + 0x74);
  FUN_100c3013c();
  param_1[10] = 0;
  if (puRam00000001137f6188 == (undefined *)0x0) {
    puVar2 = &UNK_10f75ca78;
    func_0x000100c3035c(&UNK_10f75ca78,1,3,4);
    puRam00000001137f6188 = puVar2;
  }
  func_0x000100c30364();
  if ((*(int *)(param_1 + 0xb) == 1) && (param_1[0xf] != 0)) {
    if (plRam00000001137f6190 == (long *)0x0) {
      plVar3 = (long *)&UNK_10f75ca8c;
      func_0x000100c3035c(&UNK_10f75ca8c,1,0x65,0x66);
      plRam00000001137f6190 = plVar3;
    }
    (**(code **)(*plRam00000001137f6190 + 0x30))();
  }
  if (iVar1 < 0) {
    if (puRam00000001137f6198 == (undefined *)0x0) {
      puVar2 = &UNK_10f75caac;
      func_0x000100c3035c(&UNK_10f75caac,1,0x20,0x21);
      puRam00000001137f6198 = puVar2;
    }
    func_0x000100c30364();
  }
  if (puRam00000001137f61a0 == (undefined *)0x0) {
    puVar2 = &UNK_10f75cac3;
    func_0x000100161ea0(&UNK_10f75cac3,1,0x10000,0x30,1);
    puRam00000001137f61a0 = puVar2;
  }
  func_0x000100c30364();
  *param_1 = &PTR_DAT_110cd8da0;
  func_0x000100140e00(param_1 + 8);
  func_0x0001001f1ba4(param_1 + 6);
  func_0x000100660b8c(param_1 + 5);
  func_0x0001001f1ba4(param_1 + 4);
  func_0x00010089ce1c(param_1 + 2);
  return param_1;
}



/* Entry: 100c303c4; end: 100c3046b; -[SCRequestSingleCompletionTask completeTask] */

void FUN_100c303c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar2 = &puStack_50;
  uVar1 = param_1;
  func_0x000107c50300();
  func_0x000107c61180();
  func_0x000107c41aa8();
  func_0x000107c61170(uVar1);
  func_0x000107c61144(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_100c3046c;
  puStack_38 = &UNK_1108b22a8;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c61184(&puStack_50);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 100c3046c; end: 100c3082b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3046c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar1 = param_1 + 0x20;
  func_0x000107c61148();
  if ((uVar1 != 0) && (uVar8 = uVar1, func_0x000107c49b80(), (uVar8 & 1) == 0)) {
    func_0x000107c4d8c8(uVar1);
    func_0x000107c56b78(uVar1);
    uVar8 = uVar1;
    func_0x000107c4d8c8();
    uVar7 = uVar1;
    func_0x000107c4d8e0();
    if (uVar7 < uVar8) {
      uVar8 = uVar1;
      func_0x000107c4bfcc(uVar1);
      func_0x000107c61180();
      func_0x000107c5c778();
      func_0x000107c61170(uVar8);
      lVar9 = (long)_DAT_11278dd30;
      lVar2 = *(long *)(uVar1 + lVar9);
      func_0x000107c40808();
      if (lVar2 != 0) {
        uVar8 = 0;
        do {
          func_0x000107c3f984(uVar1);
          uVar3 = *(undefined8 *)(uVar1 + (long)_DAT_11278dd34);
          func_0x000107c4d9a4();
          func_0x000107c61180();
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c61180();
          uVar5 = param_2;
          func_0x000107c4a8c4(param_2);
          func_0x000107c61180();
          func_0x000107c4bbe0(param_2);
          func_0x000107c61180();
          func_0x000107c61170();
          func_0x000107c61170(uVar5);
          func_0x000107c61170(puVar4);
          uVar5 = param_2;
          func_0x000107c50384(param_2);
          func_0x000107c61180();
          puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
          func_0x000107c61180();
          func_0x000107c5c9e4();
          func_0x000107c59ddc(uVar5);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(uVar5);
          uVar5 = *(undefined8 *)(uVar1 + lVar9);
          func_0x000107c4d9a4(uVar5);
          func_0x000107c61180();
          puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b8 = 0xc2000000;
          pcStack_b0 = FUN_100c30880;
          puStack_a8 = &UNK_110866740;
          func_0x000107c61174(param_2);
          uStack_a0 = param_2;
          uStack_98 = uVar1;
          func_0x000107c61174(param_5);
          lStack_90 = param_5;
          uStack_78 = uVar3;
          func_0x000107c61174(param_3);
          uStack_88 = param_3;
          func_0x000107c61174(param_4);
          uStack_80 = param_4;
          func_0x000107c61174(uVar3);
          func_0x00010007380c(uVar5,&puStack_c0);
          func_0x000107c61170(uVar5);
          uVar10 = *(undefined8 *)(uVar1 + (long)_DAT_11278dd28);
          uVar5 = param_2;
          func_0x000107c50384(param_2);
          func_0x000107c61180();
          uVar6 = param_2;
          func_0x000107c4e430(param_2);
          func_0x000107c61180();
          func_0x0001008a2e48(uVar10,uVar5,uVar6,param_5 == 0,0);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(uStack_80);
          func_0x000107c61170(uStack_88);
          func_0x000107c61170(uStack_78);
          func_0x000107c61170(lStack_90);
          func_0x000107c61170(uStack_a0);
          func_0x000107c61170(uVar3);
          uVar8 = uVar8 + 1;
          uVar7 = *(ulong *)(uVar1 + lVar9);
          func_0x000107c40808();
        } while (uVar8 < uVar7);
      }
      uVar5 = param_2;
      func_0x000107c4a8c4(param_2);
      func_0x000107c61180();
      func_0x000107c4bbe0(param_2);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(uVar5);
      func_0x000107c555c8(uVar1);
    }
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c3082c; end: 100c3087f;  */

void FUN_100c3082c(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x30));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x38));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
  return;
}



/* Entry: 100c30880; end: 100c30953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c30880(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c5c9e4();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  dVar4 = param_1;
  func_0x000107c50384(uVar2);
  func_0x000107c61180();
  func_0x000107c5ca78();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x28) + (long)_DAT_11278dd28);
  func_0x000107c4e430(uVar2);
  func_0x000107c61180();
  func_0x0001008a32b4(param_1 - dVar4,uVar3,uVar2,*(long *)(param_2 + 0x30) == 0);
  func_0x000107c61170(uVar2);
  (**(code **)(*(long *)(param_2 + 0x48) + 0x10))
            (*(long *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x20),
             *(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40),
             *(undefined8 *)(param_2 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bf39f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_2 + 0x20),PTR_s_cleanUp_1125ac188);
  return;
}



/* Entry: 100c30954; end: 100c30bcf;  */

/* WARNING: Possible PIC construction at 0x000100c309f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c30a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c30a28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c30a1c) */
/* WARNING: Removing unreachable block (ram,0x000100c309f4) */
/* WARNING: Removing unreachable block (ram,0x000100c30a2c) */

void FUN_100c30954(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if (param_5 != 0) {
    func_0x000107c3fcb0();
  }
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x000107c61174(param_4);
  func_0x000107c61158(puVar2);
  uVar3 = param_4;
  func_0x000107c6115c(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100c30bd0; end: 100c30c17; -[SCRecipientNameReplyView layoutSubviews] */

void FUN_100c30bd0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eff58;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x000107c3cc0c(param_1);
  return;
}



/* Entry: 100c30c18; end: 100c314af; -[SCRecipientNameReplyView _updateLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c30c18(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_112741060;
  uVar1 = *(undefined8 *)(param_2 + lVar17);
  func_0x000107c4fa4c();
  func_0x000107c61180();
  lVar18 = (long)_DAT_112741064;
  uVar16 = *(undefined8 *)(param_2 + lVar18);
  *(undefined8 *)(param_2 + lVar18) = uVar1;
  func_0x000107c61170(uVar16);
  uVar1 = *(undefined8 *)(param_2 + lVar17);
  func_0x000107c42120();
  func_0x000107c61180();
  lVar19 = (long)_DAT_112741068;
  uVar16 = *(undefined8 *)(param_2 + lVar19);
  *(undefined8 *)(param_2 + lVar19) = uVar1;
  func_0x000107c61170(uVar16);
  func_0x000107c438d4(param_2);
  func_0x000107c609cc();
  lVar2 = *(long *)(param_2 + _DAT_112741054);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar16 = *(undefined8 *)(param_2 + lVar18);
  lVar19 = *(long *)(param_2 + lVar19);
  lVar18 = *(long *)(param_2 + lVar17);
  func_0x000107c5bce0();
  uVar3 = *(ulong *)(param_2 + lVar17);
  func_0x000107c49e9c();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112741058);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61174(lVar2);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(lVar19);
  func_0x000107c61174(uVar1);
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c4179c(0x4030000000000000);
  func_0x000107c61180();
  if ((uVar3 & 1) == 0) {
    func_0x000107c61174(lVar19);
    lVar17 = lVar19;
  }
  else {
    func_0x000107c61174(uVar1);
    lVar5 = lVar2;
    func_0x000107c440ac();
    func_0x000107c61180();
    uVar6 = uVar1;
    func_0x000107c5da98(uVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    lVar17 = lVar5;
    func_0x000107c2a9d0(param_1 + -10.0,lVar5,puVar4,uVar6);
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(lVar5);
  }
  if (lVar18 != 4 && lVar17 == 0) {
    puVar20 = (undefined *)0x0;
    goto LAB_100c31410;
  }
  puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c3eb8c(0x4034000000000000);
  func_0x000107c61180();
  puVar8 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  func_0x000107c610fc();
  func_0x000107c59038(0,0x4010000000000000);
  func_0x000107c5902c(0x4020000000000000,puVar8);
  puVar20 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61180();
  puVar9 = puVar20;
  func_0x000107c3fdd0(0x3fb99999a0000000);
  func_0x000107c61180();
  func_0x000107c59030(puVar8);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar20);
  puVar9 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  func_0x000107c61160();
  puVar10 = puVar9;
  func_0x000107c52610();
  puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar18 < 3) {
    if (lVar18 == 0) {
      ppuVar14 = &PTR____CFConstantStringClassReference_110e433b8;
LAB_100c31120:
      func_0x000107c312f4(ppuVar14,0);
      func_0x000107c61180();
      func_0x000107c51804();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar14);
      if (puVar20 == (undefined *)0x0) goto LAB_100c31318;
      puVar10 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
      func_0x000107c610f4(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
      puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88();
      func_0x000107c61180();
      puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      func_0x000107c61180();
      func_0x000107c48af8(puVar10);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar11);
      puVar11 = puVar10;
      func_0x000107c5c158(puVar10);
      func_0x000107c61180();
      func_0x000107c4f890();
      func_0x000107c61170(puVar11);
      puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88();
      func_0x000107c61180();
      puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      func_0x000107c61180();
      func_0x000107c529d4(puVar10);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar11);
      func_0x000107c50158(puVar10);
    }
    else {
      if (lVar18 == 1) {
        ppuVar14 = &PTR____CFConstantStringClassReference_110e43398;
        goto LAB_100c31120;
      }
LAB_100c31318:
      puVar10 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
      func_0x000107c610f4(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
      puVar20 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88();
      func_0x000107c61180();
      puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      func_0x000107c61180();
      func_0x000107c48af8(puVar10);
      func_0x000107c61170(puVar11);
    }
    func_0x000107c61170(puVar20);
    puVar20 = puVar10;
    func_0x000107c40794(puVar10);
  }
  else {
    if (lVar18 == 3) {
      ppuVar14 = &PTR____CFConstantStringClassReference_110e433d8;
      goto LAB_100c31120;
    }
    if (lVar18 != 4) goto LAB_100c31318;
    func_0x00010703cf68();
    func_0x000107c61180();
    func_0x000107c61174(puVar7);
    func_0x000107c61174(puVar4);
    func_0x000107c61174(puVar8);
    func_0x000107c61174(puVar9);
    puVar11 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    func_0x000107c610f4();
    puVar20 = puVar11;
    func_0x00010703cf50();
    func_0x000107c61180();
    puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x000107c61180();
    func_0x000107c48af8(puVar11);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar20);
    puVar20 = puVar10;
    func_0x000107c4adac();
    if (puVar20 != (undefined *)0x0) {
      puVar20 = puVar11;
      func_0x000107c4d2e8(puVar11);
      func_0x000107c61180();
      func_0x000107c3df20();
      func_0x000107c61170(puVar20);
      puVar20 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      func_0x000107c610f4(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88();
      func_0x000107c61180();
      puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      func_0x000107c61180();
      func_0x000107c48af8(puVar20);
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar12);
      func_0x000107c3dee8(puVar11);
      func_0x000107c61170(puVar20);
    }
    puVar20 = puVar11;
    func_0x000107c40794(puVar11);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar7);
  }
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
LAB_100c31410:
  func_0x000107c61170(lVar17);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(lVar2);
  func_0x000107c529c4(*(undefined8 *)(param_2 + _DAT_11274105c));
  func_0x000107c61170(puVar20);
  func_0x000107c61170(uVar1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  func_0x000107c60e78();
  lVar2 = lVar2 + 0x20;
  func_0x000107c61148();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + _DAT_1127250f4);
    func_0x000107c61174(uVar1);
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


