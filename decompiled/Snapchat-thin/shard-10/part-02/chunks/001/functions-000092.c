/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b731a0; end: 107b731f3; -[SCOperaRemoteWebLayerView resetURLBarTransform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b731a0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((*(byte *)(param_1 + _DAT_11276b0d4) & 1) == 0) {
    uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960(*(undefined8 *)(param_1 + _DAT_11276b0e0),param_2,&uStack_40);
  }
  return;
}



/* Entry: 107b731f4; end: 107b73233; -[SCOperaRemoteWebLayerView scrollToTop:] */

void FUN_107b731f4(undefined8 param_1)

{
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182300(0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b73234; end: 107b73503; -[SCOperaRemoteWebLayerView attachmentPulled:] */

/* WARNING: Possible PIC construction at 0x000107b7348c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b73490) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b73234(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf83c40();
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_11276b0cc));
  param_4 = param_1 / param_4;
  *(double *)(param_5 + _DAT_11276b134) = -param_1;
  if (0.5 <= param_4) {
    if ((*(byte *)(param_5 + _DAT_11276b184) & 1) == 0) {
      func_0x00010bfe2400(param_5);
    }
    puVar1 = PTR_PTR_1126d6be0;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9f8e0(puVar1);
    _objc_release(puVar2);
  }
  else if (param_4 != 0.0) {
    func_0x00010c235e20(param_5);
  }
  if (param_4 == 0.0) {
    func_0x00010c138d40(param_5);
  }
  *(double *)(param_5 + _DAT_11276b118) = -param_1;
  puVar1 = PTR_PTR_1126d6be0;
  if (36.0 <= ABS(param_1)) {
    lVar3 = (long)_DAT_11276b188;
    if ((*(byte *)(param_5 + lVar3) & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9f900(0x3fe3333333333333,puVar1);
      _objc_release(puVar2);
      *(undefined1 *)(param_5 + lVar3) = 1;
    }
    *(undefined1 *)(param_5 + _DAT_11276b18c) = 1;
    func_0x00010be0e020(param_5);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9f760(0x3fe3333333333333,puVar1);
    _objc_release(puVar2);
    *(undefined1 *)(param_5 + _DAT_11276b188) = 0;
    *(undefined1 *)(param_5 + _DAT_11276b18c) = 0;
    if (*(char *)(param_5 + _DAT_11276b104) == '\x01') {
      func_0x00010be0df00(param_5);
    }
  }
  func_0x00010c22c7a0(param_1,-param_4,param_5);
  if ((*(byte *)(param_5 + _DAT_11276b0d4) & 1) == 0) {
    lVar3 = *(long *)(param_5 + _DAT_11276b0e0);
    func_0x00010c074c20();
    if ((int)lVar3 == 0) {
      *(undefined8 *)(param_5 + _DAT_11276b190) = 0x4042000000000000;
      dVar6 = 0.0;
      dVar5 = 0.0;
      if (*(char *)(param_5 + _DAT_11276b104) == '\0') {
        dVar5 = 36.0;
      }
      *(double *)(param_5 + _DAT_11276b194) = dVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return;
      }
      ___stack_chk_fail();
      *(double *)(lVar3 + _DAT_11276b154) = (dVar6 * 36.0 + dVar6 * 36.0) - dVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107b73504; end: 107b73527; -[SCOperaRemoteWebLayerView shiftURLBar:withPercentOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b73504(double param_1,double param_2,long param_3)

{
  *(double *)(param_3 + _DAT_11276b154) = (param_2 * 36.0 + param_2 * 36.0) - param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107b73528; end: 107b7354b; -[SCOperaRemoteWebLayerView didSwipeDown:] */

void FUN_107b73528(undefined8 param_1)

{
  func_0x00010c138d40();
                    /* WARNING: Could not recover jumptable at 0x00010c235e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showApplicableButtons_11266b1b0);
  return;
}



/* Entry: 107b7354c; end: 107b7356f; -[SCOperaRemoteWebLayerView didSwipeUp:] */

void FUN_107b7354c(undefined8 param_1)

{
  func_0x00010c138d40();
                    /* WARNING: Could not recover jumptable at 0x00010bfe2410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hideNavButtons_1125d62c0);
  return;
}



/* Entry: 107b73570; end: 107b73593; -[SCOperaRemoteWebLayerView didTap:] */

void FUN_107b73570(undefined8 param_1)

{
  func_0x00010c138d40();
                    /* WARNING: Could not recover jumptable at 0x00010c235e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showApplicableButtons_11266b1b0);
  return;
}



/* Entry: 107b73594; end: 107b73647; -[SCOperaRemoteWebLayerView buttonPressed:] */

void FUN_107b73594(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_7,param_6,uVar1);
  _objc_release(uVar1);
  uVar1 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010bf20c00(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)
            (-param_3,-param_4,param_3 * 3.0,param_4 * 3.0,param_1,param_2);
  return;
}



/* Entry: 107b73648; end: 107b73757; -[SCOperaRemoteWebLayerView didLongPressBackButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b73648(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf25860(param_1,param_2,param_3);
  lVar2 = param_3;
  func_0x00010c252440();
  if (lVar2 == 1) {
    *(undefined1 *)(param_1 + _DAT_11276b178) = 1;
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276b138);
    uVar4 = 0x3ff3333333333333;
  }
  else {
    lVar2 = param_3;
    func_0x00010c252440();
    if (lVar2 != 2) {
      lVar1 = param_3;
      func_0x00010c252440();
      if ((lVar1 == 3) && (*(char *)(param_1 + _DAT_11276b178) == '\x01')) {
        *(undefined1 *)(param_1 + _DAT_11276b178) = 0;
        func_0x00010bf02ce0(0x3ff0000000000000,param_1,param_2,
                            *(undefined8 *)(param_1 + _DAT_11276b138));
        func_0x00010bfcd2c0(*(undefined8 *)(param_1 + _DAT_11276b0fc));
      }
      goto LAB_107b736b4;
    }
    if ((uint)*(byte *)(param_1 + _DAT_11276b178) == (uint)lVar1) goto LAB_107b736b4;
    *(char *)(param_1 + _DAT_11276b178) = (char)lVar1;
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276b138);
    uVar4 = 0x3ff0000000000000;
  }
  func_0x00010bf02ce0(uVar4,param_1,param_2,uVar3);
LAB_107b736b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b73758; end: 107b73867; -[SCOperaRemoteWebLayerView didLongPressForwardButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b73758(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf25860(param_1,param_2,param_3);
  lVar2 = param_3;
  func_0x00010c252440();
  if (lVar2 == 1) {
    *(undefined1 *)(param_1 + _DAT_11276b178) = 1;
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276b140);
    uVar4 = 0x3ff3333333333333;
  }
  else {
    lVar2 = param_3;
    func_0x00010c252440();
    if (lVar2 != 2) {
      lVar1 = param_3;
      func_0x00010c252440();
      if ((lVar1 == 3) && (*(char *)(param_1 + _DAT_11276b178) == '\x01')) {
        *(undefined1 *)(param_1 + _DAT_11276b178) = 0;
        func_0x00010bf02ce0(0x3ff0000000000000,param_1,param_2,
                            *(undefined8 *)(param_1 + _DAT_11276b140));
        func_0x00010bfcd320(*(undefined8 *)(param_1 + _DAT_11276b0fc));
      }
      goto LAB_107b737c4;
    }
    if ((uint)*(byte *)(param_1 + _DAT_11276b178) == (uint)lVar1) goto LAB_107b737c4;
    *(char *)(param_1 + _DAT_11276b178) = (char)lVar1;
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276b140);
    uVar4 = 0x3ff0000000000000;
  }
  func_0x00010bf02ce0(uVar4,param_1,param_2,uVar3);
LAB_107b737c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b73868; end: 107b739d3; -[SCOperaRemoteWebLayerView didLongPressShareButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b73868(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf25860(param_1,param_2,param_3);
  lVar3 = param_3;
  func_0x00010c252440();
  if (lVar3 == 1) {
    *(undefined1 *)(param_1 + _DAT_11276b178) = 1;
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276b144);
    uVar4 = 0x3ff3333333333333;
  }
  else {
    lVar3 = param_3;
    func_0x00010c252440();
    if (lVar3 != 2) {
      lVar1 = param_3;
      func_0x00010c252440();
      if ((lVar1 == 3) && (*(char *)(param_1 + _DAT_11276b178) == '\x01')) {
        *(undefined1 *)(param_1 + _DAT_11276b178) = 0;
        func_0x00010bf02ce0(0x3ff0000000000000,param_1,param_2,
                            *(undefined8 *)(param_1 + _DAT_11276b144));
        lVar3 = (long)_DAT_11276b0fc;
        lVar1 = *(long *)(param_1 + lVar3);
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar1 != 0) {
          lVar1 = param_1 + _DAT_11276b17c;
          _objc_loadWeakRetained(lVar1);
          uVar2 = *(undefined8 *)(param_1 + lVar3);
          func_0x00010bdc2b80(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12a7e0(lVar1,param_2,param_1,uVar2);
          _objc_release(uVar2);
          _objc_release(lVar1);
        }
      }
      goto LAB_107b738d4;
    }
    if ((uint)*(byte *)(param_1 + _DAT_11276b178) == (uint)lVar1) goto LAB_107b738d4;
    *(char *)(param_1 + _DAT_11276b178) = (char)lVar1;
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276b144);
    uVar4 = 0x3ff0000000000000;
  }
  func_0x00010bf02ce0(uVar4,param_1,param_2,uVar2);
LAB_107b738d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b739d4; end: 107b73acf; -[SCOperaRemoteWebLayerView didLongPressExitButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b739d4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf25860(param_1,param_2,param_3);
  lVar2 = param_3;
  func_0x00010c252440();
  if (lVar2 == 1) {
    *(undefined1 *)(param_1 + _DAT_11276b178) = 1;
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276b150);
    uVar4 = 1;
  }
  else {
    lVar2 = param_3;
    func_0x00010c252440();
    if (lVar2 != 2) {
      lVar1 = param_3;
      func_0x00010c252440();
      if ((lVar1 == 3) && (*(char *)(param_1 + _DAT_11276b178) == '\x01')) {
        *(undefined1 *)(param_1 + _DAT_11276b178) = 0;
        func_0x00010c1a8860(*(undefined8 *)(param_1 + _DAT_11276b150),param_2,0);
        func_0x00010bf9b520(param_1);
      }
      goto LAB_107b73a38;
    }
    if ((uint)*(byte *)(param_1 + _DAT_11276b178) == (uint)lVar1) goto LAB_107b73a38;
    *(char *)(param_1 + _DAT_11276b178) = (char)lVar1;
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276b150);
    uVar4 = 0;
  }
  func_0x00010c1a8860(uVar3,param_2,uVar4);
LAB_107b73a38:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b73ad0; end: 107b73bff; -[SCOperaRemoteWebLayerView didLongPressXExitButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b73ad0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf25860(param_1,param_2,param_3);
  lVar2 = 0x88;
  if (*(char *)(param_1 + _DAT_11276b0e4) == '\0') {
    lVar2 = 0x68;
  }
  uVar3 = *(undefined8 *)(param_1 + *(int *)(&DAT_11276b0c8 + lVar2));
  _objc_retain(uVar3);
  lVar2 = param_3;
  func_0x00010c252440();
  if (lVar2 == 1) {
    *(undefined1 *)(param_1 + _DAT_11276b178) = 1;
    uVar4 = 0x3ff3333333333333;
  }
  else {
    lVar2 = param_3;
    func_0x00010c252440();
    if (lVar2 != 2) {
      lVar2 = param_3;
      func_0x00010c252440();
      if (lVar2 == 3) {
        if (*(char *)(param_1 + _DAT_11276b178) == '\x01') {
          *(undefined1 *)(param_1 + _DAT_11276b178) = 0;
          *(undefined1 *)(param_1 + _DAT_11276b198) = 1;
          func_0x00010bf02ce0(0x3ff0000000000000,param_1,param_2,uVar3);
          func_0x00010bf9b520(param_1);
        }
      }
      goto LAB_107b73b64;
    }
    if ((uint)*(byte *)(param_1 + _DAT_11276b178) == (uint)lVar1) goto LAB_107b73b64;
    *(char *)(param_1 + _DAT_11276b178) = (char)lVar1;
    uVar4 = 0x3ff0000000000000;
  }
  func_0x00010bf02ce0(uVar4,param_1,param_2,uVar3);
LAB_107b73b64:
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b73c00; end: 107b73c0f; -[SCOperaRemoteWebLayerView isLongPressingNavButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b73c00(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b178);
}



/* Entry: 107b73c10; end: 107b73c1f; -[SCOperaRemoteWebLayerView didPressImmersiveModeExitButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b73c10(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b198);
}



/* Entry: 107b73c20; end: 107b73cd3; -[SCOperaRemoteWebLayerView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107b73c20(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  
  _objc_retain(param_3);
  if ((((*(long *)(param_1 + _DAT_11276b15c) == param_3) ||
       (*(long *)(param_1 + _DAT_11276b160) == param_3)) ||
      (*(long *)(param_1 + _DAT_11276b164) == param_3)) ||
     ((*(long *)(param_1 + _DAT_11276b168) == param_3 ||
      (*(long *)(param_1 + _DAT_11276b16c) == param_3)))) {
    bVar1 = true;
  }
  else {
    bVar1 = *(long *)(param_1 + _DAT_11276b170) == param_3;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107b73cd4; end: 107b73d4f; -[SCOperaRemoteWebLayerView webViewDidStartLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b73cd4(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + _DAT_11276b0c8) == '\x01') {
    func_0x00010bfe2d80(param_1);
  }
  if ((*(byte *)(param_1 + _DAT_11276b0d4) & 1) != 0) {
    return;
  }
  lVar1 = (long)_DAT_11276b11c;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1ff530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setShimmering__11265d770,1);
  return;
}



/* Entry: 107b73d50; end: 107b73daf; -[SCOperaRemoteWebLayerView webViewDidFinishLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b73d50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf83c40();
  uVar2 = *(undefined8 *)PTR__CGPointZero_110347540;
  uVar3 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b0fc);
  func_0x00010c152980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822e0(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b73db0; end: 107b73ee7; -[SCOperaRemoteWebLayerView operaWebViewHeaderViewDidPressExitButton:buttonRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b73db0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bf25860(param_1,param_2,param_4);
  lVar2 = param_4;
  func_0x00010c252440();
  uVar3 = param_3;
  if (lVar2 == 1) {
    *(undefined1 *)(param_1 + _DAT_11276b178) = 1;
    func_0x00010bf9b500(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_4;
    func_0x00010c252440();
    if (lVar2 != 2) {
      lVar1 = param_4;
      func_0x00010c252440();
      if ((lVar1 == 3) && (*(char *)(param_1 + _DAT_11276b178) == '\x01')) {
        *(undefined1 *)(param_1 + _DAT_11276b178) = 0;
        func_0x00010bf9b500(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a8860();
        _objc_release(uVar3);
        func_0x00010bf9b520(param_1);
      }
      goto LAB_107b73e30;
    }
    if ((uint)*(byte *)(param_1 + _DAT_11276b178) == (uint)lVar1) goto LAB_107b73e30;
    *(char *)(param_1 + _DAT_11276b178) = (char)lVar1;
    func_0x00010bf9b500(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1a8860();
  _objc_release(uVar3);
LAB_107b73e30:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b73ee8; end: 107b73f1b; -[SCOperaRemoteWebLayerView operaWebViewHeaderViewDidPressActionMenuButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b73ee8(long param_1)

{
  param_1 = param_1 + _DAT_11276b17c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eb8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b73f1c; end: 107b73f23; -[SCOperaRemoteWebLayerView operaWebViewHeaderViewDidPressOutsideExitButton:] */

void FUN_107b73f1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_scrollToTop__112632438,1);
  return;
}



/* Entry: 107b73f24; end: 107b73f33; -[SCOperaRemoteWebLayerView errorStateViewDidTapToRetry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b73f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1288f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b0fc),PTR_s_reload_112627c58);
  return;
}



/* Entry: 107b73f34; end: 107b7414b; -[SCOperaRemoteWebLayerView updateNavButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b73f34(undefined *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  if ((param_1[_DAT_11276b0d4] & 1) != 0) goto LAB_107b74118;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  if ((param_1[_DAT_11276b0f8] & 1) == 0) {
    func_0x00010befa120(puVar2,param_2,*(undefined8 *)(param_1 + _DAT_11276b150));
  }
  if (*(long *)(param_1 + _DAT_11276b144) != 0) {
    func_0x00010befa120(puVar2);
  }
  puVar3 = puVar2;
  func_0x00010bf529e0();
  puVar5 = PTR_PTR_1126d6be0;
  if (puVar3 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x00010bf51e00();
    func_0x00010bf9f8e0(puVar5,param_2,puVar3,1);
    _objc_release(puVar3);
  }
  lVar6 = (long)_DAT_11276b0fc;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010bf2cac0();
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
    func_0x00010bf2cae0();
    puVar5 = PTR_PTR_1126d6be0;
    if (iVar1 != 0) {
      func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_11276b138),param_2,0);
      lVar6 = (long)_DAT_11276b140;
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      goto LAB_107b7408c;
    }
    lVar6 = (long)_DAT_11276b138;
    uStack_58 = *(undefined8 *)(param_1 + lVar6);
    lVar7 = (long)_DAT_11276b140;
    uStack_50 = *(undefined8 *)(param_1 + lVar7);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_58,2);
    _objc_retainAutoreleasedReturnValue();
    param_4 = 1;
    func_0x00010bf9f8e0(puVar5,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c195460(*(undefined8 *)(param_1 + lVar6),param_2,0);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
LAB_107b74108:
    param_3 = 0;
  }
  else {
    lVar7 = (long)_DAT_11276b138;
    func_0x00010bf9f720(PTR_PTR_1126d6be0,param_2,*(undefined8 *)(param_1 + lVar7),1);
    func_0x00010c195460(*(undefined8 *)(param_1 + lVar7),param_2,1);
    iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
    func_0x00010bf2cae0();
    lVar6 = (long)_DAT_11276b140;
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    if (iVar1 == 0) {
      param_4 = 1;
      func_0x00010bf9f8c0();
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      goto LAB_107b74108;
    }
LAB_107b7408c:
    param_4 = 1;
    func_0x00010bf9f720(PTR_PTR_1126d6be0,param_2,uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    param_3 = 1;
  }
  func_0x00010c195460(uVar4);
  _objc_release();
LAB_107b74118:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (param_4 == 0) {
    puVar5 = puVar2;
    func_0x00010c082400(puVar2,param_2,param_3);
  }
  else {
    lVar6 = (long)_DAT_11276b0ec;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(puVar2 + lVar6);
    *(undefined8 *)(puVar2 + lVar6) = param_3;
    _objc_release(uVar4);
    puVar5 = (undefined *)0x1;
  }
  func_0x00010bee2f40(puVar2,param_2,puVar5);
  if ((puVar2[_DAT_11276b0d4] & 1) == 0) {
    lVar6 = (long)_DAT_11276b0e0;
    iVar1 = (int)*(undefined8 *)(puVar2 + lVar6);
    func_0x00010c074c20();
    if ((iVar1 != 0) && (puVar2[_DAT_11276b104] == '\x01')) {
      func_0x00010be0df00(puVar2,param_2,1);
    }
    func_0x00010c1ff520(*(undefined8 *)(puVar2 + lVar6),param_2,0);
    func_0x00010c19a4c0(puVar2,param_2,param_3);
    func_0x00010c28b860(*(undefined8 *)(puVar2 + lVar6),param_2,param_3);
    func_0x00010c1cbe20(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b7414c; end: 107b74233; -[SCOperaRemoteWebLayerView updateUrl:overrideAllowlisted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7414c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    lVar3 = param_1;
    func_0x00010c082400(param_1,param_2,param_3);
  }
  else {
    lVar3 = (long)_DAT_11276b0ec;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = 1;
  }
  func_0x00010bee2f40(param_1,param_2,lVar3);
  if ((*(byte *)(param_1 + _DAT_11276b0d4) & 1) == 0) {
    lVar3 = (long)_DAT_11276b0e0;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
    func_0x00010c074c20();
    if ((iVar1 != 0) && (*(char *)(param_1 + _DAT_11276b104) == '\x01')) {
      func_0x00010be0df00(param_1,param_2,1);
    }
    func_0x00010c1ff520(*(undefined8 *)(param_1 + lVar3),param_2,0);
    func_0x00010c19a4c0(param_1,param_2,param_3);
    func_0x00010c28b860(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b74234; end: 107b742e3; -[SCOperaRemoteWebLayerView setUrlBarLoadingText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b74234(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + _DAT_11276b0d4) & 1) != 0) {
    return;
  }
  lVar2 = (long)_DAT_11276b0e0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c074c20();
  if ((iVar1 != 0) && (*(char *)(param_1 + _DAT_11276b104) == '\x01')) {
    func_0x00010be0df00(param_1);
  }
  func_0x00010c1ff520(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c21d380(*(undefined8 *)(param_1 + lVar2));
  _objc_release(param_3);
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + _DAT_11276b124));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107b742e4; end: 107b7434b; -[SCOperaRemoteWebLayerView setFaviconForURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b742e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276b19c),param_2,1);
  lVar2 = (long)_DAT_11276b0e0;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x00010c074c20();
  if ((uVar1 & 1) == 0) {
    func_0x00010c19a4c0(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b7434c; end: 107b7450f; -[SCOperaRemoteWebLayerView updateProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107b7434c(float param_1,ulong param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_11276b1a0;
  dVar7 = *(double *)(param_2 + lVar5);
  dVar8 = (double)param_1;
  if (dVar7 != dVar8) {
    lVar6 = (long)_DAT_11276b11c;
    func_0x00010bf01b40(*(undefined8 *)(param_2 + lVar6));
    puVar3 = PTR_PTR_1126d6be0;
    if ((dVar7 == 0.0) && ((*(byte *)(param_2 + (long)_DAT_11276b18c) & 1) == 0)) {
      uStack_60 = *(undefined8 *)(param_2 + lVar6);
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_60,1);
      _objc_retainAutoreleasedReturnValue();
      param_4 = puVar1;
      func_0x00010bf9f740(puVar3,param_3,puVar1,0);
      _objc_release(puVar1);
      *(undefined1 *)(param_2 + (long)_DAT_11276b188) = 0;
    }
    lVar4 = (long)_DAT_11276b114;
    func_0x00010c1e4680(dVar8,*(undefined8 *)(param_2 + lVar4));
    dVar7 = 1.0;
    if (*(char *)(param_2 + (long)_DAT_11276b128) == '\0') {
      dVar7 = 0.7;
    }
    if ((dVar7 <= dVar8) &&
       (func_0x00010c2558c0(*(undefined8 *)(param_2 + (long)_DAT_11276b124)),
       *(long *)(param_2 + (long)_DAT_11276b120) != 0)) {
      func_0x00010c12c960();
    }
    if (1.0 <= param_1) {
      if ((*(byte *)(param_2 + (long)_DAT_11276b0d4) & 1) == 0) {
        param_4 = (undefined *)0x0;
        func_0x00010c1ff520(*(undefined8 *)(param_2 + lVar6),param_3,0);
      }
      func_0x00010c1e4680(0,*(undefined8 *)(param_2 + lVar4));
      if (*(char *)(param_2 + (long)_DAT_11276b0d8) == '\x01') {
        func_0x00010c235900(*(undefined8 *)(param_2 + (long)_DAT_11276b0e0));
      }
    }
    *(double *)(param_2 + lVar5) = dVar8;
  }
  func_0x00010c287f60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010bfe4420(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + (long)_DAT_11276b0ec);
  func_0x00010bfe4420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_4;
  func_0x00010bf32ee0(param_4,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(param_4);
  return (ulong)(puVar3 == (undefined *)0x0);
}



/* Entry: 107b74510; end: 107b7458b; -[SCOperaRemoteWebLayerView isUrlAllowlisted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107b74510(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bfe4420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b0ec);
  func_0x00010bfe4420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf32ee0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  return lVar2 == 0;
}



/* Entry: 107b7458c; end: 107b745db; -[SCOperaRemoteWebLayerView _showUrlBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7458c(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_11276b104) = 1;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b0e0);
  func_0x00010c28f3a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b745dc; end: 107b7463f; -[SCOperaRemoteWebLayerView _hideUrlBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b745dc(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + _DAT_11276b104) = 0;
  if ((*(byte *)(param_1 + _DAT_11276b0d4) & 1) == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276b0e0),param_2,1);
  }
  *(undefined8 *)(param_1 + _DAT_11276b190) = 0;
  *(undefined8 *)(param_1 + _DAT_11276b194) = 0;
  return;
}



/* Entry: 107b74640; end: 107b7466b; -[SCOperaRemoteWebLayerView _updateUrlBarState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b74640(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11276b0f0);
  if ((lVar1 != 1) && ((lVar1 == 0 || (((param_3 & 1) == 0 && (lVar1 == 2)))))) {
                    /* WARNING: Could not recover jumptable at 0x00010bebbb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showUrlBar_11258c870);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be35f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideUrlBar_11256b180);
  return;
}



/* Entry: 107b7466c; end: 107b74857; -[SCOperaRemoteWebLayerView setShareButtonVisibility:] */

/* WARNING: Possible PIC construction at 0x000107b747b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b747bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7466c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_3 & 1) == 0) {
    lVar5 = (long)_DAT_11276b144;
    lVar1 = 0;
    if (*(long *)(param_1 + lVar5) == 0) goto LAB_107b74828;
    func_0x00010c12c960();
    lVar1 = *(long *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  else {
    lVar1 = param_1;
    if ((*(byte *)(param_1 + _DAT_11276b0d4) & 1) == 0) {
      lVar5 = (long)_DAT_11276b144;
      if (*(long *)(param_1 + lVar5) == 0) {
        puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
        func_0x00010bf25cc0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + lVar5);
        *(undefined **)(param_1 + lVar5) = puVar2;
        _objc_release(uVar4);
        func_0x00010c165e80(*(undefined8 *)(param_1 + lVar5));
        uVar4 = *(undefined8 *)(param_1 + lVar5);
        puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e720(uVar4);
        _objc_release(puVar2);
        lVar1 = *(long *)(param_1 + _DAT_11276b0cc);
        uVar4 = *(undefined8 *)(param_1 + lVar5);
        goto code_r0x00010befbb60;
      }
      lVar1 = *(long *)(param_1 + _DAT_11276b0cc);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bf21310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_bringSubviewToFront__1125a5e68);
        return;
      }
    }
    else {
LAB_107b74828:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
        return;
      }
    }
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126c3e80;
  _objc_alloc();
  func_0x00010c00b240();
  lVar3 = (long)_DAT_11276b148;
  uVar4 = *(undefined8 *)(lVar1 + lVar3);
  *(undefined **)(lVar1 + lVar3) = puVar2;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(lVar1 + lVar3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar4);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(lVar1 + lVar3);
code_r0x00010befbb60:
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_addSubview__11259c880,uVar4);
  return;
}



/* Entry: 107b74858; end: 107b748e3; -[SCOperaRemoteWebLayerView createSafeBrowsingWarningView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b74858(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c3e80;
  _objc_alloc();
  func_0x00010c00b240();
  lVar3 = (long)_DAT_11276b148;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107b748e4; end: 107b74923; -[SCOperaRemoteWebLayerView hideSafeBrowsingWarning] */

/* WARNING: Possible PIC construction at 0x000107b74908: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b7490c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b748e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b148),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 107b74924; end: 107b7499f; -[SCOperaRemoteWebLayerView showSafeBrowsingWarning:urlType:] */

/* WARNING: Possible PIC construction at 0x000107b74968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b7496c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b74924(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b148;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 == 0) {
    func_0x00010bf589a0(param_1);
    lVar1 = *(long *)(param_1 + lVar2);
  }
  func_0x00010c28c320(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 107b749a0; end: 107b74adf; -[SCOperaRemoteWebLayerView createConnectionErrorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b749a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d6be8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff64a0(puVar1,param_2,puVar2,puVar3);
  lVar5 = (long)_DAT_11276b14c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar4,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_11276b148));
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276b1a4);
  *(undefined **)(param_1 + _DAT_11276b1a4) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107b74ae0; end: 107b74b2f; -[SCOperaRemoteWebLayerView hideConnectionErrorView] */

/* WARNING: Possible PIC construction at 0x000107b74b04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b74b08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b74ae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b14c),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 107b74b30; end: 107b74b5b; -[SCOperaRemoteWebLayerView showConnectionError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b74b30(long param_1)

{
  func_0x00010be7ac60();
                    /* WARNING: Could not recover jumptable at 0x00010c238a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b14c),PTR_s_showNetworkError_11266bcc0);
  return;
}



/* Entry: 107b74b5c; end: 107b74b87; -[SCOperaRemoteWebLayerView showGeneralError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b74b5c(long param_1)

{
  func_0x00010be7ac60();
                    /* WARNING: Could not recover jumptable at 0x00010c237a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b14c),PTR_s_showGeneralError_11266b8a8);
  return;
}



/* Entry: 107b74b88; end: 107b74beb; -[SCOperaRemoteWebLayerView _presentConnectionErrorView] */

/* WARNING: Possible PIC construction at 0x000107b74bb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b74bbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b74b88(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b14c;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 == 0) {
    func_0x00010bf554e0(param_1);
    lVar1 = *(long *)(param_1 + lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 107b74bec; end: 107b74c97; -[SCOperaRemoteWebLayerView goBackFromSafeBrowsing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b74bec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276b0fc;
  lVar1 = *(long *)(param_1 + lVar3);
  if (*(char *)(param_1 + _DAT_11276b0d0) == '\x01') {
    func_0x00010bf2cac0();
    if ((int)lVar1 == 0) {
LAB_107b74c84:
                    /* WARNING: Could not recover jumptable at 0x00010bf9b530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_exitButtonTouchUp_1125c46f0);
      return;
    }
    func_0x00010bfcd2c0(*(undefined8 *)(param_1 + lVar3));
  }
  else {
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar2 == 0) goto LAB_107b74c84;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe2750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hideSafeBrowsingWarning_1125d6390);
  return;
}



/* Entry: 107b74c98; end: 107b74cef; -[SCOperaRemoteWebLayerView learnMoreFromSafeBrowsing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b74c98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0,param_2,
                      *(undefined8 *)(param_1 + _DAT_11276b1a8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c060(param_1,param_2,puVar1);
  func_0x00010bfe2740(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b74cf0; end: 107b74d5f; -[SCOperaRemoteWebLayerView didIgnoreSafeBrowsingWarning:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b74cf0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + _DAT_11276b0d0) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276b0fc);
    puVar1 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
    func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c060(uVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe2750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hideSafeBrowsingWarning_1125d6390);
  return;
}



/* Entry: 107b74d60; end: 107b74e23; -[SCOperaRemoteWebLayerView hideWebView] */

/* WARNING: Possible PIC construction at 0x000107b74da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107b74dd4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b74d60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276b0e0;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 != 0) {
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == param_1) {
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      goto code_r0x00010c12c960;
    }
  }
  lVar3 = (long)_DAT_11276b0cc;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == param_1) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
  }
  else {
    lVar3 = (long)_DAT_11276b11c;
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != param_1) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + lVar3);
  }
code_r0x00010c12c960:
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 107b74e24; end: 107b74f17; -[SCOperaRemoteWebLayerView showWebView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b74e24(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + _DAT_11276b0cc);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != param_1) {
    if (*(char *)(param_1 + _DAT_11276b12c) == '\x01') {
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc2000000;
      pcStack_38 = FUN_107b74f18;
      puStack_30 = &UNK_110842e18;
      lStack_28 = param_1;
      func_0x000100162d98("APPSTORE",&puStack_48);
    }
    else {
      func_0x00010c229a60(param_1);
    }
  }
  if (*(long *)(param_1 + _DAT_11276b0f0) != 0) {
    func_0x00010be0e020(param_1);
  }
  *(undefined1 *)(param_1 + _DAT_11276b0c8) = 0;
  *(undefined1 *)(param_1 + _DAT_11276b12c) = 0;
  *(undefined1 *)(param_1 + _DAT_11276b198) = 0;
  func_0x00010bf83c40(param_1);
  return;
}



/* Entry: 107b74f18; end: 107b74f23;  */

void FUN_107b74f18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c229a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setupWebViewAfterBackground__1126680c0,1);
  return;
}



/* Entry: 107b74f24; end: 107b74f37; -[SCOperaRemoteWebLayerView viewDidEnterBackgroundNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b74f24(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11276b12c) = 1;
  return;
}



/* Entry: 107b74f38; end: 107b74feb; -[SCOperaRemoteWebLayerView setupWebViewAfterBackground:] */

/* WARNING: Possible PIC construction at 0x000107b74f60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107b74f80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b74f64) */
/* WARNING: Removing unreachable block (ram,0x000107b74f84) */
/* WARNING: Removing unreachable block (ram,0x000107b74f88) */
/* WARNING: Removing unreachable block (ram,0x000107b74f98) */
/* WARNING: Removing unreachable block (ram,0x000107b74fa4) */
/* WARNING: Removing unreachable block (ram,0x000107b74fd8) */
/* WARNING: Removing unreachable block (ram,0x00010c12c960) */
/* WARNING: Removing unreachable block (ram,0x000107b74fc4) */
/* WARNING: Removing unreachable block (ram,0x000107b74f7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b74f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + _DAT_11276b0cc));
  return;
}



/* Entry: 107b74fec; end: 107b750ff; -[SCOperaRemoteWebLayerView resetWebView:webView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b74fec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  func_0x00010be35f80(param_1);
  *(undefined8 *)(param_1 + _DAT_11276b154) = 0;
  lVar2 = (long)_DAT_11276b0fc;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11276b0cc;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c15cda0(*(undefined8 *)(param_1 + lVar2));
  lVar2 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(param_4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c287f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateNavButtons_11267fa00);
  return;
}



/* Entry: 107b75100; end: 107b752e3; -[SCOperaRemoteWebLayerView _fadeOutHeaderView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b75100(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (param_3 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x107b75204;
    puStack_40 = &UNK_110842e18;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x107b75274;
    puStack_68 = &UNK_110841f20;
    lStack_60 = param_1;
    lStack_38 = param_1;
    func_0x00010bf03440(0x3fe3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,6,
                        &puStack_58,&puStack_80);
    return;
  }
  lVar2 = (long)_DAT_11276b0e0;
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar2));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11276b0cc),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b752e4; end: 107b75447; -[SCOperaRemoteWebLayerView _fadeInHeaderView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b752e4(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar2 = (long)_DAT_11276b0e0;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,0);
  if (param_3 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x107b753d4;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x00010bf03440(0x3fe3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,6,
                        &puStack_58,0);
    return;
  }
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar2));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11276b0cc),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b75448; end: 107b75457; -[SCOperaRemoteWebLayerView didResetWebview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b75448(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_11276b1a0) = 0;
  return;
}



/* Entry: 107b75458; end: 107b75473; -[SCOperaRemoteWebLayerView getCurrentLoadProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107b75458(long param_1)

{
  return *(double *)(param_1 + _DAT_11276b1a0) * 100.0;
}



/* Entry: 107b75474; end: 107b7548f; -[SCOperaRemoteWebLayerView isLoadComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107b75474(long param_1)

{
  return *(double *)(param_1 + _DAT_11276b1a0) == 1.0;
}



/* Entry: 107b75490; end: 107b754af; -[SCOperaRemoteWebLayerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b75490(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b17c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b754b0; end: 107b754c3; -[SCOperaRemoteWebLayerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b754b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b17c,param_3);
  return;
}



/* Entry: 107b754c4; end: 107b754d3; -[SCOperaRemoteWebLayerView learnAboutSafeBrowsingMoreUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b754c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b1a8);
}



/* Entry: 107b754d4; end: 107b75513; -[SCOperaRemoteWebLayerView setLearnAboutSafeBrowsingMoreUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b754d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b1a8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b75514; end: 107b75523; -[SCOperaRemoteWebLayerView webView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b75514(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b0fc);
}



/* Entry: 107b75524; end: 107b7576f; -[SCOperaRemoteWebLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b75524(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276b1a8,0);
  _objc_destroyWeak(param_1 + _DAT_11276b17c);
  _objc_storeStrong(param_1 + _DAT_11276b100,0);
  _objc_storeStrong(param_1 + _DAT_11276b124,0);
  _objc_storeStrong(param_1 + _DAT_11276b120,0);
  _objc_storeStrong(param_1 + _DAT_11276b0e0,0);
  _objc_storeStrong(param_1 + _DAT_11276b0f4,0);
  _objc_storeStrong(param_1 + _DAT_11276b108,0);
  _objc_storeStrong(param_1 + _DAT_11276b158,0);
  _objc_storeStrong(param_1 + _DAT_11276b130,0);
  _objc_storeStrong(param_1 + _DAT_11276b180,0);
  _objc_storeStrong(param_1 + _DAT_11276b1ac,0);
  _objc_storeStrong(param_1 + _DAT_11276b1b0,0);
  _objc_storeStrong(param_1 + _DAT_11276b19c,0);
  _objc_storeStrong(param_1 + _DAT_11276b11c,0);
  _objc_storeStrong(param_1 + _DAT_11276b114,0);
  _objc_storeStrong(param_1 + _DAT_11276b1b4,0);
  _objc_storeStrong(param_1 + _DAT_11276b0fc,0);
  _objc_storeStrong(param_1 + _DAT_11276b0ec,0);
  _objc_storeStrong(param_1 + _DAT_11276b174,0);
  _objc_storeStrong(param_1 + _DAT_11276b170,0);
  _objc_storeStrong(param_1 + _DAT_11276b16c,0);
  _objc_storeStrong(param_1 + _DAT_11276b168,0);
  _objc_storeStrong(param_1 + _DAT_11276b164,0);
  _objc_storeStrong(param_1 + _DAT_11276b160,0);
  _objc_storeStrong(param_1 + _DAT_11276b15c,0);
  _objc_storeStrong(param_1 + _DAT_11276b13c,0);
  _objc_storeStrong(param_1 + _DAT_11276b144,0);
  _objc_storeStrong(param_1 + _DAT_11276b140,0);
  _objc_storeStrong(param_1 + _DAT_11276b138,0);
  _objc_storeStrong(param_1 + _DAT_11276b150,0);
  _objc_storeStrong(param_1 + _DAT_11276b0cc,0);
  _objc_storeStrong(param_1 + _DAT_11276b1a4,0);
  _objc_storeStrong(param_1 + _DAT_11276b14c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276b148,0);
  return;
}



/* Entry: 107b75770; end: 107b7577f; -[SCOperaRemoteWebLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:bandwidthEstimator:] */

void FUN_107b75770(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c001b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithConfiguration_layerViewC_1125de098);
  return;
}



/* Entry: 107b75780; end: 107b758a7; -[SCOperaRemoteWebLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:kvoController:eventAnnouncer:bandwidthEstimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107b75780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fa098;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithConfiguration_layerViewC_1125de040,param_3,param_4,
                      param_5,param_7,param_8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = param_6;
    if (param_6 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126b44c8;
      _objc_alloc();
      func_0x00010c030dc0();
    }
    lVar4 = (long)_DAT_11276b1b8;
    _objc_retain(puVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    if (param_6 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276b1bc) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276b1c0) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276b1c4) = 0;
    puVar2 = PTR_PTR_1126d6bf0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b1c8);
    *(undefined **)((long)puVar1 + (long)_DAT_11276b1c8) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 107b758a8; end: 107b75a2b; -[SCOperaRemoteWebLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b758a8(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fa098;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidFullyAppear_112684c88);
  uVar1 = param_1;
  func_0x00010beb3d60();
  if ((int)uVar1 == 0) {
    func_0x00010be935c0(param_1);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11276b1cc);
    *(undefined **)(param_1 + (long)_DAT_11276b1cc) = puVar2;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11276b1d4;
    func_0x00010bf77ae0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c23ad40(*(undefined8 *)(param_1 + (long)_DAT_11276b1d8));
    uVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf01400();
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      func_0x00010c09c5c0(param_1);
    }
    func_0x00010be8a9c0(param_1);
    *(undefined1 *)(param_1 + (long)_DAT_11276b1c0) = 1;
    func_0x00010be9f700(param_1);
    func_0x00010bf76b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010c0dd800(*(undefined8 *)(param_1 + lVar5));
    uVar1 = param_1;
    func_0x00010c118dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e940(uVar1);
    _objc_release(uVar3);
    _objc_release(param_1);
    _objc_release(uVar1);
  }
  else {
    func_0x00010be6d260(param_1);
  }
  return;
}



/* Entry: 107b75a2c; end: 107b75a87; -[SCOperaRemoteWebLayerViewController neighborViewDidFullyAppearWithCurrentViewRelativePosition:neighborsInfoProvider:] */

void FUN_107b75a2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf01400();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_loadUrlRequest_112604b80);
    return;
  }
  return;
}



/* Entry: 107b75a88; end: 107b75ab7; -[SCOperaRemoteWebLayerViewController viewDidPartiallyAppearWithCurrentViewRelativePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b75a88(long param_1)

{
  func_0x00010c23ad40(*(undefined8 *)(param_1 + _DAT_11276b1d8));
                    /* WARNING: Could not recover jumptable at 0x00010be8a9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadIfNecessary_112580410);
  return;
}



/* Entry: 107b75ab8; end: 107b75d5f; -[SCOperaRemoteWebLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b75ab8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = PTR_PTR_1126fa098;
  uStack_78 = param_1;
  _objc_msgSendSuper2(&uStack_78,PTR_s_viewDidFullyDisappear_112684ca8);
  lVar6 = (long)_DAT_11276b1d8;
  func_0x00010c139b00(*(undefined8 *)(param_1 + lVar6));
  func_0x00010bfe2d80(*(undefined8 *)(param_1 + lVar6));
  lVar7 = param_1 + (long)_DAT_11276b1dc;
  _objc_loadWeakRetained(lVar7);
  uVar1 = param_1;
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a460(lVar7);
  _objc_release(uVar1);
  _objc_release(lVar7);
  uVar1 = param_1;
  func_0x00010bf76b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    *(undefined1 *)(param_1 + (long)_DAT_11276b1bc) = 1;
  }
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c139e00();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar7 = (long)_DAT_11276b1d4;
  }
  else {
    *(undefined1 *)(param_1 + (long)_DAT_11276b1d0) = 0;
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    uVar1 = param_1;
    func_0x00010bde4580();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11276b1d4;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    uVar2 = param_1;
    func_0x00010bde4580(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be08c60(param_1);
    func_0x00010c139de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c139dc0(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c152980(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c152980(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1738c0();
    _objc_release(uVar5);
    func_0x00010bf7a120(param_1);
  }
  *(undefined1 *)(param_1 + (long)_DAT_11276b1c0) = 0;
  func_0x00010c0dd7e0(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c118dc0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f0cef8;
  puStack_60 = PTR____kCFBooleanFalse_11034ab60;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940(param_1);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90d80();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar5 = *(undefined8 *)(param_1 + (long)_DAT_11276b1e0);
    _objc_retain(uVar5);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + (long)_DAT_11276b1c8);
    func_0x00010bf76ba0(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107b75d60; end: 107b75deb; -[SCOperaRemoteWebLayerViewController didFinishLoadingTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b75d60(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf90d80();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276b1e0);
    _objc_retain(uVar3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276b1c8);
    func_0x00010bf76ba0(uVar3,param_2,*(undefined8 *)(param_1 + _DAT_11276b1d4));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107b75dec; end: 107b75e8f; -[SCOperaRemoteWebLayerViewController setDidFinishLoadingTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b75dec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf90d80();
  _objc_release(lVar3);
  if ((int)lVar1 == 0) {
    lVar3 = (long)_DAT_11276b1e0;
    if (*(long *)(param_1 + lVar3) == 0) {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(undefined8 *)(param_1 + lVar3) = param_3;
      _objc_release(uVar2);
    }
  }
  else {
    func_0x00010c18d720(*(undefined8 *)(param_1 + _DAT_11276b1c8),param_2,param_3,
                        *(undefined8 *)(param_1 + _DAT_11276b1d4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b75e90; end: 107b75f8f; -[SCOperaRemoteWebLayerViewController shareableMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b75e90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c90a8;
  _objc_alloc(PTR_PTR_1126c90a8);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  lVar7 = (long)_DAT_11276b1d8;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c2a3bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7c80(puVar4,param_2,uVar2,0,1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c2a3bc0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045b20(puVar1,param_2,puVar4,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b75f90; end: 107b76003; -[SCOperaRemoteWebLayerViewController _enableJavaScriptBridge] */

ulong FUN_107b75f90(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf01200();
  if ((uVar2 & 1) == 0) {
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c085ca0();
    uVar2 = uVar2 >> 1 & 1;
    _objc_release(param_1);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107b76004; end: 107b765ab; -[SCOperaRemoteWebLayerViewController currentViewParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b76004(double param_1,long param_2)

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
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  double dVar26;
  double dVar27;
  long lStack_168;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_11276b1cc;
  func_0x00010c26f380();
  lVar25 = param_2;
  dVar26 = param_1;
  func_0x00010bf76b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  dVar27 = param_1;
  if (lVar25 != 0) {
    lVar25 = param_2;
    func_0x00010bf76b80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(lVar25);
    dVar27 = 0.0;
    if (0.0 <= dVar26) {
      dVar27 = dVar26;
    }
    uVar22 = *(undefined8 *)(param_2 + lVar23);
    lVar25 = param_2;
    func_0x00010bf76b80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf433a0(uVar22);
    _objc_release(lVar25);
    lVar25 = param_2;
    func_0x00010bf76b80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf433a0(puVar1);
    _objc_release(lVar25);
  }
  lVar25 = (long)_DAT_11276b1d8;
  if (*(long *)(param_2 + lVar25) == 0) {
    param_2 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126c9ab0;
    func_0x00010c0f1720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9ab0;
    func_0x00010c0f1740();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c9ab0;
    func_0x00010c0f2320();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar27);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c9ab0;
    func_0x00010c0f15a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar23 = (long)_DAT_11276b1d4;
    func_0x00010c0f15a0(*(undefined8 *)(param_2 + lVar23));
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126c9ab0;
    func_0x00010c0f15c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0f15c0(*(undefined8 *)(param_2 + lVar23));
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126c9ab0;
    func_0x00010c2a4640();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar23 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c081400();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126c9ab0;
    func_0x00010bf1d2c0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar15 = *(ulong *)(param_2 + lVar25);
    func_0x00010c077100();
    if ((uVar15 & 1) == 0) {
      lStack_168 = param_2;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c290260();
    }
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126c9ab0;
    func_0x00010c0f2340();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1 * 1000.0);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010c0d3c80();
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    if ((uVar15 & 1) == 0) {
      _objc_release(lStack_168);
    }
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(lVar23);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    lVar25 = param_2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar25;
    func_0x00010c0d2720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar25);
    if (lVar23 != 0) {
      lVar25 = param_2;
      func_0x00010c08c0e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar23 = lVar25;
      func_0x00010c0d2720();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126ca1a8;
      func_0x00010c2767c0(PTR_PTR_1126ca1a8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(puVar9);
      _objc_release(lVar23);
      _objc_release(lVar25);
      lVar24 = *(long *)(param_2 + _DAT_11276b1e4);
      lVar23 = lVar24;
      if (lVar24 == 0) {
        lVar25 = param_2;
        func_0x00010c08c0e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar23 = lVar25;
        func_0x00010c0d2740();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar9 = PTR_PTR_1126ca1a8;
      func_0x00010c089020(PTR_PTR_1126ca1a8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(puVar9);
      if (lVar24 == 0) {
        _objc_release(lVar23);
        _objc_release(lVar25);
      }
    }
    func_0x00010befc8e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c152990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + _DAT_11276b1d8),PTR_s_scrollView_112632480);
  return;
}



/* Entry: 107b765ac; end: 107b765bb; -[SCOperaRemoteWebLayerViewController scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b765ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b1d8),PTR_s_scrollView_112632480);
  return;
}



/* Entry: 107b765bc; end: 107b7667b; -[SCOperaRemoteWebLayerViewController clearLayerViewRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b765bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_11276b1d0;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    lVar4 = (long)_DAT_11276b1d8;
    func_0x00010c256160(*(undefined8 *)(param_1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                        &PTR____CFConstantStringClassReference_110de02d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137160(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c09c060(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
    *(undefined1 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 107b7667c; end: 107b7679f; -[SCOperaRemoteWebLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7667c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_60;
  undefined *puStack_58;
  
  func_0x00010c26ab80(*(undefined8 *)(param_1 + _DAT_11276b1d4));
  func_0x00010c26ab80(*(undefined8 *)(param_1 + _DAT_11276b1c8));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b1e4);
  *(undefined8 *)(param_1 + _DAT_11276b1e4) = 0;
  _objc_release(uVar1);
  puStack_58 = PTR_PTR_1126fa098;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_teardown_112678538);
  func_0x00010bf3b700(param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276b1b8);
  lVar5 = (long)_DAT_11276b1d8;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c152980(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281a80(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010be935c0(param_1);
  *(undefined1 *)(param_1 + _DAT_11276b1bc) = 0;
  *(undefined1 *)(param_1 + _DAT_11276b1e8) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b1ec);
  *(undefined8 *)(param_1 + _DAT_11276b1ec) = 0;
  _objc_release(uVar1);
  func_0x00010c26ac40(*(undefined8 *)(param_1 + lVar5));
  return;
}



/* Entry: 107b767a0; end: 107b767ef; -[SCOperaRemoteWebLayerViewController _resetOperaPageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b767a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b1cc);
  *(undefined8 *)(param_1 + _DAT_11276b1cc) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b1e0);
  *(undefined8 *)(param_1 + _DAT_11276b1e0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b1f0);
  *(undefined8 *)(param_1 + _DAT_11276b1f0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b767f0; end: 107b768fb; -[SCOperaRemoteWebLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107b767f0(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  uVar2 = param_3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c290260();
  _objc_release(uVar2);
  lVar5 = (long)_DAT_11276b1d8;
  uVar2 = *(ulong *)(param_3 + lVar5);
  uVar4 = (uint)uVar2;
  if ((int)uVar1 == 0) {
    func_0x00010c077100();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010bf83f40();
      _objc_release(uVar2);
      if ((uVar1 & 1) == 0) {
        uVar2 = param_3;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar2;
        func_0x00010c1102c0();
        if ((param_5 == 3) && ((uVar1 & 1) != 0)) {
          uVar3 = *(undefined8 *)(param_3 + lVar5);
          func_0x00010c152980(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4cdc0();
          _objc_release(uVar3);
          _objc_release(uVar2);
          return (uint)(param_2 != 0.0);
        }
        _objc_release(uVar2);
        return 0;
      }
    }
    uVar4 = 1;
  }
  else {
    func_0x00010bf78920();
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



/* Entry: 107b768fc; end: 107b76a83; -[SCOperaRemoteWebLayerViewController triggerContextMenuForWebviewWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b768fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + _DAT_11276b1d4) != param_3) {
    return;
  }
  lVar1 = param_1;
  func_0x00010bf60c40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d3c80();
  _objc_release(lVar1);
  uVar6 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  uVar5 = *(undefined8 *)PTR__CGPointZero_110347540;
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uStack_50 = uVar5;
  uStack_48 = uVar6;
  func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_50,"{CGPoint=dd}");
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2348;
  func_0x00010c0b4f60(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(lVar2,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uStack_60 = uVar5;
  uStack_58 = uVar6;
  func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_60,"{CGPoint=dd}");
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2e48;
  func_0x00010c09ef60(PTR_PTR_1126b2e48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(lVar2,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b2ea8;
  func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf51e00(lVar2);
  func_0x00010bf04440(param_1,param_2,puVar3,lVar1);
  _objc_release(lVar1);
  _objc_release(puVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 107b76a84; end: 107b76b1f; -[SCOperaRemoteWebLayerViewController isShareable] */

undefined8 FUN_107b76a84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 107b76b20; end: 107b76b63; -[SCOperaRemoteWebLayerViewController _reloadIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b76b20(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11276b1bc;
  if (*(char *)(param_1 + lVar1) == '\x01') {
    func_0x00010c1288e0(*(undefined8 *)(param_1 + _DAT_11276b1d8));
  }
  *(undefined1 *)(param_1 + lVar1) = 0;
  return;
}



/* Entry: 107b76b64; end: 107b76b6b; -[SCOperaRemoteWebLayerViewController canHandleRoundCorner] */

undefined8 FUN_107b76b64(void)

{
  return 0;
}



/* Entry: 107b76b6c; end: 107b76b6f; -[SCOperaRemoteWebLayerViewController didUpdateBottomPageViewProperties:] */

void FUN_107b76b6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf79570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didReceiveUpdateProperties__1125bbf00);
  return;
}



/* Entry: 107b76b70; end: 107b76b83; -[SCOperaRemoteWebLayerViewController setupPlaybackAnalyticsTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b76b70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b1dc,param_3);
  return;
}



/* Entry: 107b76b84; end: 107b76c53; -[SCOperaRemoteWebLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b76b84(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126d6bf8;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar6 = (long)_DAT_11276b1d8;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar5);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6));
  lVar2 = param_1;
  func_0x00010c0ea360(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1490c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08e0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba040(*(undefined8 *)(param_1 + lVar6));
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar6));
  return;
}



/* Entry: 107b76c54; end: 107b7719b; -[SCOperaRemoteWebLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b76c54(float param_1,ulong param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  double dVar15;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010bf32180(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (lVar2 != 0) {
      puVar1 = PTR_PTR_1126c9410;
      func_0x00010bf32180(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      func_0x00010c0e00e0(param_4,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar15 = (double)param_1;
      _objc_release(lVar2);
      _objc_release(puVar1);
      func_0x00010bf0d2a0(dVar15,*(undefined8 *)(param_2 + (long)_DAT_11276b1d8));
      param_1 = SUB84(dVar15,0);
    }
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010bf0d360(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      _objc_release(puVar1);
    }
    else {
      puVar3 = PTR_PTR_1126c9410;
      func_0x00010bf0d380(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_4;
      func_0x00010c0e00e0(param_4,param_3,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar3);
      _objc_release(lVar2);
      _objc_release(puVar1);
      if (lVar4 != 0) {
        puVar1 = PTR_PTR_1126c9410;
        func_0x00010bf0d360(PTR_PTR_1126c9410);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_4;
        func_0x00010c0e00e0(param_4,param_3,puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        dVar15 = (double)param_1;
        _objc_release(lVar2);
        _objc_release(puVar1);
        puVar1 = PTR_PTR_1126c9410;
        func_0x00010bf0d380(PTR_PTR_1126c9410);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_4;
        func_0x00010c0e00e0(param_4,param_3,puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        _objc_release(lVar2);
        _objc_release(puVar1);
        func_0x00010bf31f20(dVar15,(double)param_1,*(undefined8 *)(param_2 + (long)_DAT_11276b1d8));
        param_1 = SUB84(dVar15,0);
      }
    }
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010bf0cb80(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (lVar2 != 0) {
      uVar13 = *(undefined8 *)(param_2 + (long)_DAT_11276b1d8);
      puVar1 = PTR_PTR_1126c9410;
      func_0x00010bf0cb80(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      func_0x00010c0e00e0(param_4,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      func_0x00010c167d20((double)param_1,uVar13);
      _objc_release(lVar2);
      _objc_release(puVar1);
    }
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c2a4460(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (lVar2 != 0) {
      puVar1 = PTR_PTR_1126c9410;
      func_0x00010c2a4460(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      func_0x00010c0e00e0(param_4,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      lVar14 = (long)_DAT_11276b1c8;
      lVar4 = *(long *)(param_2 + lVar14);
      func_0x00010c2a45a0(lVar4,param_3,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == 0) {
        puVar1 = PTR_PTR_1126d6c00;
        _objc_alloc();
        uVar5 = param_2;
        func_0x00010c0ea360();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c28f620();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = param_2;
        func_0x00010be08c60();
        uVar7 = param_2;
        func_0x00010c0ea360(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c1490c0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = param_2;
        func_0x00010bde4580(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = param_2;
        func_0x00010c0ea360(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010bf0fb00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c05a420(puVar1,param_3,uVar6,uVar12 & 0xffffffff,uVar8,uVar9,uVar11);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        func_0x00010c18b5e0(puVar1,param_3,param_2);
        func_0x00010c2251a0(*(undefined8 *)(param_2 + lVar14),param_3,puVar1,lVar2);
        _objc_release(puVar1);
      }
      uVar12 = *(ulong *)(param_2 + lVar14);
      func_0x00010c2a45a0(uVar12,param_3,lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar12;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)_DAT_11276b1d4;
      uVar13 = *(undefined8 *)(param_2 + lVar4);
      func_0x00010be36bc0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0720c0(uVar5,param_3,uVar13);
      _objc_release(uVar13);
      _objc_release(uVar5);
      if ((uVar6 & 1) == 0) {
        func_0x00010bead680(param_2,param_3,uVar12);
      }
      uVar13 = *(undefined8 *)(param_2 + lVar4);
      *(ulong *)(param_2 + lVar4) = uVar12;
      _objc_retain(uVar12);
      _objc_release(uVar13);
      puVar1 = PTR_PTR_1126c9410;
      func_0x00010c089240(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_4;
      func_0x00010c0e00e0(param_4,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_2 + (long)_DAT_11276b1e4);
      *(long *)(param_2 + (long)_DAT_11276b1e4) = lVar4;
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(puVar1);
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b7719c; end: 107b7726f; -[SCOperaRemoteWebLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7719c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [48];
  
  lVar1 = param_2;
  func_0x00010bf69a40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c14e200(param_1);
  _objc_release(lVar1);
  _CGAffineTransformMakeScale(auStack_60,uVar2,uVar2);
  lVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf69a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01be0(param_1);
  _objc_release(lVar1);
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_2 + _DAT_11276b1d8));
  return;
}



/* Entry: 107b77270; end: 107b77587; -[SCOperaRemoteWebLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b77270(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  _objc_retain(param_4);
  func_0x00010c2a3ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010c2a3ba0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar1 = param_3;
  func_0x00010c071ae0(param_3,param_2,uVar11);
  if ((uVar1 & 1) == 0) {
    _objc_release(uVar11);
    _objc_release(param_3);
  }
  else {
    lVar2 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar2;
    func_0x00010bf90d80();
    _objc_release(lVar2);
    _objc_release(uVar11);
    _objc_release(param_3);
    if ((int)lVar12 == 0) goto LAB_107b774c8;
  }
  lVar2 = param_1;
  func_0x00010bde4580(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_11276b1d4;
  lVar12 = *(long *)(param_1 + lVar14);
  if (lVar12 == 0) {
    puVar3 = PTR_PTR_1126d6c00;
    _objc_alloc();
    lVar12 = param_1;
    func_0x00010c0ea360();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar12;
    func_0x00010c28f620();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010be08c60(param_1);
    lVar6 = param_1;
    func_0x00010c0ea360(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c1490c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bde4580(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c0ea360(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf0fb00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a420(puVar3,param_2,lVar4,lVar5,lVar7,lVar8,lVar10);
    uVar11 = *(undefined8 *)(param_1 + lVar14);
    *(undefined **)(param_1 + lVar14) = puVar3;
    _objc_release(uVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar12);
  }
  else {
    lVar4 = param_1;
    func_0x00010be08c60(param_1);
    func_0x00010c139de0(lVar12,param_2,lVar2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar14),param_2,param_1);
  func_0x00010bead680(param_1,param_2,*(undefined8 *)(param_1 + lVar14));
  lVar12 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar12;
  func_0x00010bf01400();
  _objc_release(lVar12);
  if ((int)lVar14 != 0) {
    func_0x00010c09c5c0(param_1);
  }
  _objc_release(lVar2);
LAB_107b774c8:
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar2;
  func_0x00010bf90d80();
  _objc_release(lVar2);
  if ((int)lVar12 == 0) {
    return;
  }
  uVar11 = *(undefined8 *)(param_1 + _DAT_11276b1c8);
  uVar13 = *(undefined8 *)(param_1 + _DAT_11276b1d4);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2a3ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2251a0(uVar11,param_2,uVar13,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b77588; end: 107b78097; -[SCOperaRemoteWebLayerViewController _configDict] */

void FUN_107b77588(undefined **param_1,undefined1 *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  undefined **ppuVar25;
  undefined *puVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined *puVar30;
  undefined **ppuVar31;
  undefined *puVar32;
  undefined **ppuVar33;
  undefined *puVar34;
  undefined **ppuVar35;
  undefined *puVar36;
  undefined **ppuVar37;
  undefined *puVar38;
  undefined **ppuVar39;
  undefined *puVar40;
  undefined **ppuVar41;
  undefined *puVar42;
  undefined **ppuVar43;
  undefined *puVar44;
  undefined **ppuVar45;
  undefined *puVar46;
  undefined **ppuVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
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
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1f0 = &PTR____CFConstantStringClassReference_110eb0a38;
  ppuVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01a60();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_1e8 = &PTR____CFConstantStringClassReference_110eb0a58;
  ppuVar3 = param_1;
  puStack_130 = puVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137b80();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_1e0 = &PTR____CFConstantStringClassReference_110eb07d8;
  ppuVar5 = param_1;
  puStack_128 = puVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23aac0();
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110eb07f8;
  ppuVar7 = param_1;
  puStack_120 = puVar6;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290260();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110eb04d8;
  ppuVar9 = param_1;
  puStack_118 = puVar8;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01240();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110eb0518;
  ppuVar11 = param_1;
  puStack_110 = puVar10;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23df40();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110eb0858;
  ppuVar13 = param_1;
  puStack_108 = puVar12;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83f40();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110eb0538;
  ppuVar15 = param_1;
  puStack_100 = puVar14;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4fe80();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110eb0558;
  ppuVar17 = param_1;
  puStack_f8 = puVar16;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01400();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110eb0a78;
  ppuVar19 = param_1;
  puStack_f0 = puVar18;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf013e0();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110eb0578;
  ppuVar21 = param_1;
  puStack_e8 = puVar20;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01120();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_198 = &PTR____CFConstantStringClassReference_110eb0598;
  ppuVar23 = param_1;
  puStack_e0 = puVar22;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01300();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_190 = &PTR____CFConstantStringClassReference_110eb05b8;
  ppuVar25 = param_1;
  puStack_d8 = puVar24;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf80b60();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_188 = &PTR____CFConstantStringClassReference_110eb05d8;
  ppuVar27 = param_1;
  puStack_d0 = puVar26;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar28 = ppuVar27;
  func_0x00010c28f380();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar28 != (undefined **)0x0) {
    ppuStack_c8 = ppuVar28;
  }
  ppuStack_180 = &PTR____CFConstantStringClassReference_110eb0878;
  ppuVar29 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290ea0();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_178 = &PTR____CFConstantStringClassReference_110eb0898;
  ppuVar31 = param_1;
  puStack_c0 = puVar30;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c239620();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110eb08b8;
  ppuVar33 = param_1;
  puStack_b8 = puVar32;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c239e40();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110eb0ad8;
  ppuVar35 = param_1;
  puStack_b0 = puVar34;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01580();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110eb08f8;
  ppuVar37 = param_1;
  puStack_a8 = puVar36;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe68c0();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110eb0918;
  ppuVar39 = param_1;
  puStack_a0 = puVar38;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251b40();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar42 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110eb0938;
  ppuVar41 = param_1;
  puStack_98 = puVar40;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf90240();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar44 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110eb05f8;
  ppuVar43 = param_1;
  puStack_90 = puVar42;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c234a80();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar46 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110eb0958;
  ppuVar45 = param_1;
  puStack_88 = puVar44;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290ec0();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar48 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110eb0978;
  ppuVar47 = param_1;
  puStack_80 = puVar46;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe1e80();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar49 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar48;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar50 = puVar49;
  func_0x00010c0d3c80();
  _objc_release(puVar49);
  _objc_release(puVar48);
  _objc_release(ppuVar47);
  _objc_release(puVar46);
  _objc_release(ppuVar45);
  _objc_release(puVar44);
  _objc_release(ppuVar43);
  _objc_release(puVar42);
  _objc_release(ppuVar41);
  _objc_release(puVar40);
  _objc_release(ppuVar39);
  _objc_release(puVar38);
  _objc_release(ppuVar37);
  _objc_release(puVar36);
  _objc_release(ppuVar35);
  _objc_release(puVar34);
  _objc_release(ppuVar33);
  _objc_release(puVar32);
  _objc_release(ppuVar31);
  _objc_release(puVar30);
  _objc_release(ppuVar29);
  _objc_release(ppuVar28);
  _objc_release(ppuVar27);
  _objc_release(puVar26);
  _objc_release(ppuVar25);
  _objc_release(puVar24);
  _objc_release(ppuVar23);
  _objc_release(puVar22);
  _objc_release(ppuVar21);
  _objc_release(puVar20);
  _objc_release(ppuVar19);
  _objc_release(puVar18);
  _objc_release(ppuVar17);
  _objc_release(puVar16);
  _objc_release(ppuVar15);
  _objc_release(puVar14);
  _objc_release(ppuVar13);
  _objc_release(puVar12);
  _objc_release(ppuVar11);
  _objc_release(puVar10);
  _objc_release(ppuVar9);
  _objc_release(puVar8);
  _objc_release(ppuVar7);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  ppuVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c09cbc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar1);
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00010c09cbc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar50);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010bf62ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar1);
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00010bf62ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar50);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar1);
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar50);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar3 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar3;
  func_0x00010c085ca0();
  _objc_release(ppuVar3);
  if (((ulong)ppuVar1 & 1) != 0) {
    _objc_initWeak(auStack_1f8,param_1);
    puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_218 = 0xc2000000;
    pcStack_210 = FUN_107b78098;
    puStack_208 = &UNK_1108531d0;
    ppuVar1 = &puStack_220;
    param_2 = auStack_1f8;
    _objc_copyWeak(auStack_200,param_2);
    ppuVar3 = &puStack_220;
    _objc_retainBlock(ppuVar3);
    func_0x00010c1d0640(puVar50);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_200);
    _objc_destroyWeak(auStack_1f8);
  }
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_1;
  func_0x00010befd120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar50);
  _objc_release(ppuVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar50);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar1 + 4);
  _objc_destroyWeak(auStack_1f8);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_1 = param_1 + 4;
  _objc_loadWeakRetained();
  if (param_1 != (undefined **)0x0) {
    func_0x00010bef9340(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b78098; end: 107b780e7;  */

void FUN_107b78098(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bef9340(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b780e8; end: 107b78153; -[SCOperaRemoteWebLayerViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b780e8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b1d8);
  func_0x00010c152980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126fa098;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107b78154; end: 107b781ef; -[SCOperaRemoteWebLayerViewController didReceiveMemoryWarning] */

void FUN_107b78154(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fa098;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_didReceiveMemoryWarning_1125bbe28);
  uVar1 = param_1;
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0f13e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x00010bf3b700(param_1);
  }
  return;
}



/* Entry: 107b781f0; end: 107b78293; -[SCOperaRemoteWebLayerViewController loadUrlRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b781f0(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010beb3d60();
  if ((uVar1 & 1) != 0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11276b1f0);
  *(undefined **)(param_1 + (long)_DAT_11276b1f0) = puVar2;
  _objc_release(uVar4);
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf90d80();
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be4ed10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadUrlRequestForMultiWebViews_1125714e0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be4ed30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadUrlRequestForNonMultiWebVie_1125714e8);
  return;
}



/* Entry: 107b78294; end: 107b783a7; -[SCOperaRemoteWebLayerViewController _loadUrlRequestForNonMultiWebViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b78294(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276b1d0;
  if (*(char *)(param_1 + lVar5) == '\x01') {
    lVar1 = param_1;
    func_0x00010bf60d60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a3bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      return;
    }
  }
  puVar4 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  lVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a3ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137160(puVar4,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c09c060(*(undefined8 *)(param_1 + _DAT_11276b1d8),param_2,puVar4);
  *(undefined1 *)(param_1 + lVar5) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107b783a8; end: 107b7848f; -[SCOperaRemoteWebLayerViewController _loadUrlRequestForMultiWebViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b783a8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11276b1c8);
  lVar6 = (long)_DAT_11276b1d4;
  func_0x00010c064000(uVar1,param_2,*(undefined8 *)(param_1 + lVar6));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c2a3bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c071ae0(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
    func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c060(*(undefined8 *)(param_1 + _DAT_11276b1d8),param_2,puVar5);
    *(undefined1 *)(param_1 + _DAT_11276b1d0) = 1;
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b78490; end: 107b785cf; -[SCOperaRemoteWebLayerViewController updateProgress:webviewWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b78490(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  if (*(long *)(param_2 + _DAT_11276b1d4) == param_4) {
    uVar6 = NEON_fminnm((int)param_1,0x3f800000);
    func_0x00010c288d20(uVar6,*(undefined8 *)(param_2 + _DAT_11276b1d8));
    puVar1 = PTR_PTR_1126c9a00;
    func_0x00010c2a3f40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c9ab0;
    func_0x00010c2a3f60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(param_1);
    _objc_retainAutoreleasedReturnValue();
    param_6 = 1;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(param_2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar1 + _DAT_11276b1d4) != param_6) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c28b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + _DAT_11276b1d8),PTR_s_updateUrl_overrideAllowlisted__112680848
            );
  return;
}



/* Entry: 107b785d0; end: 107b785f7; -[SCOperaRemoteWebLayerViewController updateUrl:overrideAllowlisted:webviewWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b785d0(long param_1)

{
  long in_x4;
  
  if (*(long *)(param_1 + _DAT_11276b1d4) != in_x4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c28b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b1d8),
             PTR_s_updateUrl_overrideAllowlisted__112680848);
  return;
}



/* Entry: 107b785f8; end: 107b7861f; -[SCOperaRemoteWebLayerViewController setUrlBarLoadingText:webviewWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b785f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*(long *)(param_1 + _DAT_11276b1d4) != param_4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c21d390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b1d8),PTR_s_setUrlBarLoadingText__112664f08);
  return;
}



/* Entry: 107b78620; end: 107b78647; -[SCOperaRemoteWebLayerViewController didStartLoadForWebviewWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b78620(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11276b1d4) != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2a3f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b1d8),PTR_s_webViewDidStartLoad_1126869e8);
  return;
}



/* Entry: 107b78648; end: 107b78833; -[SCOperaRemoteWebLayerViewController didFinishLoadForWebviewWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b78648(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
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
  
  _objc_retain(param_3);
  lVar7 = param_1;
  func_0x00010bf76b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18d700(param_1,param_2,puVar1);
    _objc_release(puVar1);
    lVar7 = (long)_DAT_11276b1d4;
    if (*(long *)(param_1 + lVar7) != param_3) goto LAB_107b7880c;
    *(undefined1 *)(param_1 + _DAT_11276b1bc) = 0;
    lVar6 = (long)_DAT_11276b1d8;
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c152980(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    lVar5 = (long)_DAT_11276b1b8;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107b78834;
    puStack_70 = &UNK_1109fe4f0;
    lStack_68 = param_1;
    func_0x00010c0e0780(*(undefined8 *)(param_1 + lVar5),param_2,uVar4,
                        &PTR____CFConstantStringClassReference_110e41f78,1,&puStack_88);
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x107b78880;
    puStack_98 = &UNK_1109fe4f0;
    lStack_90 = param_1;
    func_0x00010c0e0780(*(undefined8 *)(param_1 + lVar5),param_2,uVar4,
                        &PTR____CFConstantStringClassReference_110eb0b18,1,&puStack_b0);
    func_0x00010c0dd7c0(*(undefined8 *)(param_1 + lVar7));
    _objc_release(uVar4);
  }
  else {
    if (*(long *)(param_1 + _DAT_11276b1d4) != param_3) goto LAB_107b7880c;
    lVar6 = (long)_DAT_11276b1d8;
  }
  func_0x00010c2a3e60(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c288d20(0x3f800000,*(undefined8 *)(param_1 + lVar6));
  func_0x00010bfe1ce0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010bea11a0(param_1);
  func_0x00010be9f700(param_1);
LAB_107b7880c:
  _objc_release(param_3);
  return;
}



/* Entry: 107b78834; end: 107b788cb;  */

void FUN_107b78834(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dff20(param_4,param_2,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  func_0x00010be49740(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b788cc; end: 107b78a0f; -[SCOperaRemoteWebLayerViewController didReceiveResponseForWebviewWrapper:response:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b788cc(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c9a00;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + _DAT_11276b1d4) == param_3) {
    _objc_retain(param_4);
    func_0x00010c2a3ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c9ab0;
    func_0x00010c2a3ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c252ee0(param_4);
    _objc_release(param_4);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    param_5 = 1;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
    param_1 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_1 + _DAT_11276b1d4) != param_5) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c239b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b1d8),
             PTR_s_showSafeBrowsingWarning_urlType__11266c0e8);
  return;
}


