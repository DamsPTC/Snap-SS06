/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cc4a04; end: 108cc4beb; -[SCPreviewView setActionButtonsEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc4a04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010beee200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  _objc_release(lVar1);
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_11277a48c),param_2,param_3);
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_11277a490),param_2,param_3);
  return;
}



/* Entry: 108cc4bec; end: 108cc4c63; -[SCPreviewView setOpacityForActionButtons:] */

void FUN_108cc4bec(undefined8 param_1)

{
  func_0x00010beee200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cc4c64; end: 108cc4c6f;  */

void FUN_108cc4c64(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),param_2,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108cc4c70; end: 108cc4cf3; -[SCPreviewView setActionButtonsHidden:] */

void FUN_108cc4c70(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  if (param_3 == 0) {
    uStack_18 = 0x3ff0000000000000;
  }
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_108cc4cf4;
  puStack_28 = &UNK_110848c48;
  uStack_20 = param_1;
  func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,2,&puStack_40,
                      0);
  return;
}



/* Entry: 108cc4cf4; end: 108cc4d03;  */

void FUN_108cc4cf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d4bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s_setOpacityForActionButtons__112652d20);
  return;
}



/* Entry: 108cc4d04; end: 108cc4e1b; -[SCPreviewView setActionButtonsHidden:excludeViews:] */

void FUN_108cc4d04(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  func_0x00010beee200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c12d500(puVar2,param_2,param_4);
  _objc_release(param_4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uStack_48 = 0;
  if (param_3 == 0) {
    uStack_48 = 0x3ff0000000000000;
  }
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108cc4e1c;
  puStack_58 = &UNK_110848c48;
  puStack_50 = puVar2;
  _objc_retain(puVar2);
  func_0x00010bf03440(0x3fc999999999999a,0,puVar1,param_2,2,&puStack_70,0);
  _objc_release(puStack_50);
  _objc_release(puVar2);
  return;
}



/* Entry: 108cc4e1c; end: 108cc4e77;  */

void FUN_108cc4e1c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_108cc4e78;
  puStack_20 = &UNK_110929e90;
  uStack_18 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf97e80(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 108cc4e78; end: 108cc4e83;  */

void FUN_108cc4e78(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),param_2,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108cc4e84; end: 108cc5037; -[SCPreviewView setActionButtonsForDrawingHidden:reappearAfterDelay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc4e84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined1 uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
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
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = *(long *)(param_1 + _DAT_11277a400);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010c21e900(*(undefined8 *)(lStack_118 + lVar5 * 8),param_2,(uint)param_3 ^ 1);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  uVar2 = (uint)param_3 ^ 1;
  _objc_release(lVar3);
  lVar1 = param_1 + _DAT_11277a38c;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c1124a0();
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    func_0x00010c21e900(*(undefined8 *)(param_1 + _DAT_11277a428),param_2,uVar2);
  }
  func_0x00010c21e900(*(undefined8 *)(param_1 + _DAT_11277a404),param_2,uVar2);
  func_0x00010c21e900(*(undefined8 *)(param_1 + _DAT_11277a408),param_2,uVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277a3f4),param_2,param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277a3f8),param_2,param_3);
  func_0x00010c161880();
  uStack_138 = (undefined1)param_3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pcStack_128 = FUN_108cc5038;
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_108cc50ac;
    puStack_148 = &UNK_110845ce0;
    lStack_140 = param_1;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,2,
                        &puStack_160,0);
    return;
  }
  return;
}



/* Entry: 108cc5038; end: 108cc50ab; -[SCPreviewView setIconsContainerViewHidden:] */

void FUN_108cc5038(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_108cc50ac;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,2,&puStack_40,
                      0);
  return;
}



/* Entry: 108cc50ac; end: 108cc515b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc50ac(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a398);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    bVar1 = *(byte *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a410);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0((float)(bVar1 ^ 1));
    _objc_release(uVar3);
  }
  bVar1 = *(byte *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a3f0);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0((float)(bVar1 ^ 1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108cc515c; end: 108cc5287; -[SCPreviewView setElementsHiddenForDurationEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc515c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277a3fc);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  lVar5 = (long)_DAT_11277a394;
  lVar3 = param_1 + lVar5;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf30e80();
  _objc_release(lVar3);
  if (lVar4 < 3) {
    if (lVar4 == 0) {
      lVar5 = param_1 + lVar5;
      _objc_loadWeakRetained();
      lVar3 = lVar5;
      func_0x00010c06ba20();
      _objc_release(lVar5);
      iVar1 = _DAT_11277a43c;
      if ((int)lVar3 == 0) goto LAB_108cc526c;
    }
    else {
      iVar1 = _DAT_11277a438;
      if (lVar4 != 1) goto LAB_108cc526c;
    }
  }
  else {
    iVar1 = _DAT_11277a43c;
    if (lVar4 != 3) {
      if (lVar4 == 4) {
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277a410));
      }
      goto LAB_108cc526c;
    }
  }
  lVar3 = param_1 + iVar1;
  _objc_loadWeakRetained(lVar3);
  lVar5 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar5);
  _objc_release(lVar3);
LAB_108cc526c:
                    /* WARNING: Could not recover jumptable at 0x00010c1e1a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPreviewButtonsHidden__1126560b0,param_3);
  return;
}



/* Entry: 108cc5288; end: 108cc5297; -[SCPreviewView setTopContainerViewHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277a40c),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 108cc5298; end: 108cc537f; -[SCPreviewView _handlePreviewCarouselExpanded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5298(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(byte *)(param_1 + _DAT_11277a434) != param_3) {
    *(char *)(param_1 + _DAT_11277a434) = (char)param_3;
    lVar2 = (long)_DAT_11277a494;
    ((undefined8 *)(param_1 + lVar2))[1] = 0xc03e000000000000;
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_initWeak(auStack_28,param_1);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bf03440(0x3fb999999999999a,0,puVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 108cc5380; end: 108cc5513;  */

void FUN_108cc5380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained();
  if (param_5 != 0) {
    func_0x00010c0d2620(param_5);
    lVar1 = param_5;
    func_0x00010c0d2600(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bf16dc0(param_5);
    lVar1 = param_5;
    func_0x00010bf16da0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c270420(param_5);
    lVar1 = param_5;
    func_0x00010c270400(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c07ba00();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      func_0x00010be48e40(param_5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108cc5514; end: 108cc566b; -[SCPreviewView setBorderContentBounds:cornerRadius:] */

void FUN_108cc5514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_6;
  func_0x00010bf1fbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181c80(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  func_0x00010c2351e0(PTR_PTR_1126b9aa0);
  func_0x00010bde9d40(param_5,param_6);
  uVar1 = param_6;
  func_0x00010beb5d20();
  uVar3 = param_6;
  if ((int)uVar1 == 0) {
    func_0x00010bf1fbc0(param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126b9aa0;
    func_0x00010c230680();
    func_0x00010bf1fbc0(param_6);
    _objc_retainAutoreleasedReturnValue();
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010c217480(param_5);
      _objc_release(uVar3);
      uVar3 = param_6;
      func_0x00010bf1fbc0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2175e0(param_5);
      goto LAB_108cc5610;
    }
  }
  func_0x00010c166d60(param_5);
LAB_108cc5610:
  _objc_release(uVar3);
  uVar1 = param_6;
  func_0x00010bf1fbc0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bedb450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_6,PTR_s__updateMediaContainerCornerRadiu_1125946b8);
  return;
}



/* Entry: 108cc566c; end: 108cc5773; -[SCPreviewView _updateMediaContainerCornerRadiusForCustomTheme] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc566c(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = param_2;
  func_0x00010bf1fbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c274560();
  lVar1 = lRam00000001138466f0;
  lVar4 = (long)_DAT_11277a3e0;
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 < 3) || (param_1 <= 0.0)) {
    func_0x00010c1842e0(0,uVar3);
    _objc_release(uVar3);
  }
  else {
    func_0x00010c1842e0(param_1,uVar3);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2ce0();
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108cc5774; end: 108cc57df; -[SCPreviewView _cornerRadiusWithInputCornerRadius:useCapriStyle:] */

double FUN_108cc5774(double param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
  if ((param_1 == -1.0) && (param_1 = 20.0, (param_4 & 1) == 0)) {
    func_0x00010bf46560(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c4080();
    func_0x00010c11cae0(puVar1);
    _objc_release(param_2);
  }
  return param_1;
}



/* Entry: 108cc57e0; end: 108cc57ef; -[SCPreviewView showClipLevelTools] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc57e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277a3fc),PTR_s_showClipLevelTools_11266b478);
  return;
}



/* Entry: 108cc57f0; end: 108cc57f7; -[SCPreviewView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_108cc57f0(void)

{
  return 0;
}



/* Entry: 108cc57f8; end: 108cc5807; -[SCPreviewView saveButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc57f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a474);
}



/* Entry: 108cc5808; end: 108cc5817; -[SCPreviewView borderOverlayView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc5808(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a3ec);
}



/* Entry: 108cc5818; end: 108cc5827; -[SCPreviewView iconsContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc5818(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a3f0);
}



/* Entry: 108cc5828; end: 108cc5837; -[SCPreviewView saveButtonController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc5828(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a458);
}



/* Entry: 108cc5838; end: 108cc5847; -[SCPreviewView containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc5838(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a3e0);
}



/* Entry: 108cc5848; end: 108cc5857; -[SCPreviewView toolbar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc5848(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a3fc);
}



/* Entry: 108cc5858; end: 108cc5867; -[SCPreviewView bottomViewComponents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5858(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11277a398,1);
  return;
}



/* Entry: 108cc5868; end: 108cc5873; -[SCPreviewView setBottomViewComponents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5868(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 108cc5874; end: 108cc5883; -[SCPreviewView topContentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc5874(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a468);
}



/* Entry: 108cc5884; end: 108cc5893; -[SCPreviewView footerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc5884(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a450);
}



/* Entry: 108cc5894; end: 108cc58a3; -[SCPreviewView footerColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc5894(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a3c0);
}



/* Entry: 108cc58a4; end: 108cc58b3; -[SCPreviewView topLeftCornerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc58a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a46c);
}



/* Entry: 108cc58b4; end: 108cc58c3; -[SCPreviewView rightGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc58b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a3f4);
}



/* Entry: 108cc58c4; end: 108cc58d3; -[SCPreviewView bottomGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc58c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a3f8);
}



/* Entry: 108cc58d4; end: 108cc58e3; -[SCPreviewView navBarTheme] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc58d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a478);
}



/* Entry: 108cc58e4; end: 108cc58f3; -[SCPreviewView customThemeBackgroundImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc58e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a47c);
}



/* Entry: 108cc58f4; end: 108cc5903; -[SCPreviewView toolbarTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc58f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a498);
}



/* Entry: 108cc5904; end: 108cc591b; -[SCPreviewView contentPortraitBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc5904(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a384);
}



/* Entry: 108cc591c; end: 108cc5933; -[SCPreviewView setContentPortraitBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc591c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11277a384);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 108cc5934; end: 108cc594b; -[SCPreviewView containerPortraitBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc5934(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a3e8);
}



/* Entry: 108cc594c; end: 108cc595b; -[SCPreviewView transparentExternalShareSheetPopUpView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc594c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a49c);
}



/* Entry: 108cc595c; end: 108cc599b; -[SCPreviewView setTransparentExternalShareSheetPopUpView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc595c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a49c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc599c; end: 108cc59ab; -[SCPreviewView doneButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc599c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a408);
}



/* Entry: 108cc59ac; end: 108cc59eb; -[SCPreviewView setDoneButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc59ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a408;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc59ec; end: 108cc59fb; -[SCPreviewView xButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc59ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a404);
}



/* Entry: 108cc59fc; end: 108cc5a3b; -[SCPreviewView setXButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc59fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a404;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc5a3c; end: 108cc5a7b; -[SCPreviewView setShareButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a44c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc5a7c; end: 108cc5abb; -[SCPreviewView setSendConfirmationView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5a7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a428;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc5abc; end: 108cc5acb; -[SCPreviewView storyButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc5abc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a418);
}



/* Entry: 108cc5acc; end: 108cc5b0b; -[SCPreviewView setStoryButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5acc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a418;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc5b0c; end: 108cc5b1b; -[SCPreviewView spotlightButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc5b0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a470);
}



/* Entry: 108cc5b1c; end: 108cc5b5b; -[SCPreviewView setSpotlightButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5b1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a470;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc5b5c; end: 108cc5b6b; -[SCPreviewView sendButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc5b5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a424);
}



/* Entry: 108cc5b6c; end: 108cc5bab; -[SCPreviewView setSendButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5b6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a424;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc5bac; end: 108cc5bbb; -[SCPreviewView recipientNameReplyView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc5bac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a4a0);
}



/* Entry: 108cc5bbc; end: 108cc5bfb; -[SCPreviewView setRecipientNameReplyView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5bbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a4a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc5bfc; end: 108cc5c0b; -[SCPreviewView transitionalImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc5bfc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a4a4);
}



/* Entry: 108cc5c0c; end: 108cc5c4b; -[SCPreviewView setTransitionalImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5c0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a4a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc5c4c; end: 108cc5c5b; -[SCPreviewView saveLongPressGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc5c4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a48c);
}



/* Entry: 108cc5c5c; end: 108cc5c9b; -[SCPreviewView setSaveLongPressGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5c5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a48c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc5c9c; end: 108cc5cab; -[SCPreviewView storyButtonLongPressGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc5c9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a490);
}



/* Entry: 108cc5cac; end: 108cc5ceb; -[SCPreviewView setStoryButtonLongPressGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5cac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a490;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc5cec; end: 108cc5d0b; -[SCPreviewView thumbnailsViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5cec(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277a440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cc5d0c; end: 108cc5d1f; -[SCPreviewView setThumbnailsViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5d0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277a440,param_3);
  return;
}



/* Entry: 108cc5d20; end: 108cc5d3f; -[SCPreviewView multiSnapV2ViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5d20(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277a438);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cc5d40; end: 108cc5d53; -[SCPreviewView setMultiSnapV2ViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5d40(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277a438,param_3);
  return;
}



/* Entry: 108cc5d54; end: 108cc5d73; -[SCPreviewView batchCaptureViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5d54(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277a42c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cc5d74; end: 108cc5d87; -[SCPreviewView setBatchCaptureViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5d74(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277a42c,param_3);
  return;
}



/* Entry: 108cc5d88; end: 108cc5da7; -[SCPreviewView timelineThumbnailsViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5d88(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277a43c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cc5da8; end: 108cc5dbb; -[SCPreviewView setTimelineThumbnailsViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5da8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277a43c,param_3);
  return;
}



/* Entry: 108cc5dbc; end: 108cc5ddb; -[SCPreviewView creativeToolsDurationViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5dbc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277a444);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cc5ddc; end: 108cc5def; -[SCPreviewView setCreativeToolsDurationViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5ddc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277a444,param_3);
  return;
}



/* Entry: 108cc5df0; end: 108cc5e0f; -[SCPreviewView videoPlaybackControlsViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5df0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277a448);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cc5e10; end: 108cc5e23; -[SCPreviewView setVideoPlaybackControlsViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5e10(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277a448,param_3);
  return;
}



/* Entry: 108cc5e24; end: 108cc5e43; -[SCPreviewView previewCarouselView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5e24(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277a430);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cc5e44; end: 108cc5e57; -[SCPreviewView setPreviewCarouselView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5e44(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277a430,param_3);
  return;
}



/* Entry: 108cc5e58; end: 108cc5e67; -[SCPreviewView bottomLeftButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cc5e58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a400);
}



/* Entry: 108cc5e68; end: 108cc5ea7; -[SCPreviewView setBottomLeftButtons:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5e68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a400;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc5ea8; end: 108cc5ebb; -[SCPreviewView thumbnailsOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108cc5ea8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277a494);
}



/* Entry: 108cc5ebc; end: 108cc5ecf; -[SCPreviewView setThumbnailsOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5ebc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277a494;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 108cc5ed0; end: 108cc5eef; -[SCPreviewView configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5ed0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277a394);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cc5ef0; end: 108cc5f03; -[SCPreviewView setConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5ef0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277a394,param_3);
  return;
}



/* Entry: 108cc5f04; end: 108cc5f23; -[SCPreviewView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5f04(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277a38c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cc5f24; end: 108cc5f37; -[SCPreviewView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5f24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277a38c,param_3);
  return;
}



/* Entry: 108cc5f38; end: 108cc63b7; -[SCPreviewView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cc5f38(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277a38c);
  _objc_destroyWeak(param_1 + _DAT_11277a394);
  _objc_storeStrong(param_1 + _DAT_11277a400,0);
  _objc_destroyWeak(param_1 + _DAT_11277a430);
  _objc_destroyWeak(param_1 + _DAT_11277a448);
  _objc_destroyWeak(param_1 + _DAT_11277a444);
  _objc_destroyWeak(param_1 + _DAT_11277a43c);
  _objc_destroyWeak(param_1 + _DAT_11277a42c);
  _objc_destroyWeak(param_1 + _DAT_11277a438);
  _objc_destroyWeak(param_1 + _DAT_11277a440);
  _objc_storeStrong(param_1 + _DAT_11277a490,0);
  _objc_storeStrong(param_1 + _DAT_11277a48c,0);
  _objc_storeStrong(param_1 + _DAT_11277a4a4,0);
  _objc_storeStrong(param_1 + _DAT_11277a4a0,0);
  _objc_storeStrong(param_1 + _DAT_11277a424,0);
  _objc_storeStrong(param_1 + _DAT_11277a470,0);
  _objc_storeStrong(param_1 + _DAT_11277a418,0);
  _objc_storeStrong(param_1 + _DAT_11277a428,0);
  _objc_storeStrong(param_1 + _DAT_11277a44c,0);
  _objc_storeStrong(param_1 + _DAT_11277a404,0);
  _objc_storeStrong(param_1 + _DAT_11277a408,0);
  _objc_storeStrong(param_1 + _DAT_11277a49c,0);
  _objc_storeStrong(param_1 + _DAT_11277a498,0);
  _objc_storeStrong(param_1 + _DAT_11277a47c,0);
  _objc_storeStrong(param_1 + _DAT_11277a478,0);
  _objc_storeStrong(param_1 + _DAT_11277a3f8,0);
  _objc_storeStrong(param_1 + _DAT_11277a3f4,0);
  _objc_storeStrong(param_1 + _DAT_11277a46c,0);
  _objc_storeStrong(param_1 + _DAT_11277a450,0);
  _objc_storeStrong(param_1 + _DAT_11277a468,0);
  _objc_storeStrong(param_1 + _DAT_11277a398,0);
  _objc_storeStrong(param_1 + _DAT_11277a3fc,0);
  _objc_storeStrong(param_1 + _DAT_11277a3e0,0);
  _objc_storeStrong(param_1 + _DAT_11277a458,0);
  _objc_storeStrong(param_1 + _DAT_11277a3f0,0);
  _objc_storeStrong(param_1 + _DAT_11277a3ec,0);
  _objc_storeStrong(param_1 + _DAT_11277a474,0);
  _objc_storeStrong(param_1 + _DAT_11277a454,0);
  _objc_storeStrong(param_1 + _DAT_11277a3d8,0);
  _objc_storeStrong(param_1 + _DAT_11277a3d4,0);
  _objc_storeStrong(param_1 + _DAT_11277a4a8,0);
  _objc_storeStrong(param_1 + _DAT_11277a488,0);
  _objc_storeStrong(param_1 + _DAT_11277a484,0);
  _objc_storeStrong(param_1 + _DAT_11277a480,0);
  _objc_storeStrong(param_1 + _DAT_11277a3dc,0);
  _objc_storeStrong(param_1 + _DAT_11277a3d0,0);
  _objc_storeStrong(param_1 + _DAT_11277a41c,0);
  _objc_storeStrong(param_1 + _DAT_11277a3cc,0);
  _objc_storeStrong(param_1 + _DAT_11277a3c8,0);
  _objc_storeStrong(param_1 + _DAT_11277a3c4,0);
  _objc_storeStrong(param_1 + _DAT_11277a3bc,0);
  _objc_storeStrong(param_1 + _DAT_11277a3b8,0);
  _objc_storeStrong(param_1 + _DAT_11277a390,0);
  _objc_storeStrong(param_1 + _DAT_11277a40c,0);
  _objc_storeStrong(param_1 + _DAT_11277a3b4,0);
  _objc_storeStrong(param_1 + _DAT_11277a3b0,0);
  _objc_storeStrong(param_1 + _DAT_11277a3ac,0);
  _objc_storeStrong(param_1 + _DAT_11277a3a8,0);
  _objc_storeStrong(param_1 + _DAT_11277a3a4,0);
  _objc_storeStrong(param_1 + _DAT_11277a3a0,0);
  _objc_storeStrong(param_1 + _DAT_11277a39c,0);
  _objc_storeStrong(param_1 + _DAT_11277a410,0);
  _objc_storeStrong(param_1 + _DAT_11277a414,0);
  _objc_storeStrong(param_1 + _DAT_11277a4ac,0);
  _objc_storeStrong(param_1 + _DAT_11277a45c,0);
  _objc_storeStrong(param_1 + _DAT_11277a420,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277a388,0);
  return;
}



/* Entry: 108cc63b8; end: 108cc642b; -[SCGrapheneUnlockableFiltersMetric2 init] */

undefined1 * FUN_108cc63b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe2d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108cc642c; end: 108cc665b;  */

undefined * FUN_108cc642c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  uVar11 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f5122ab;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f5122ab;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110ac19c8;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110ac19c8,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar12 = 0;
    puVar5 = auStack_78;
    uVar11 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_108cc665c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f5122ab;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x000107c278b8(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f5122ab;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x000107c27984(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_110ac1a18;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110ac1a18,puVar8,uVar11);
    puStack_120 = unaff_x23;
    func_0x000107c278ac(&puStack_120);
    lVar12 = 0;
    puVar5 = auStack_118;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar10 = &uStack_1c0;
  pcStack_148 = FUN_108cc688c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f5122ab;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_1a0,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x000107c27984(&uStack_1c0,auStack_1a0,&lStack_188,1);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110ac1a68,&uStack_1c0,puVar8);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x000107c278ac(&puStack_1a8);
    puVar9 = puVar10;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar9 = puVar10;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar3 = puVar1;
  __Unwind_Resume();
  ppuVar6 = &puStack_1f0;
  pcStack_1c8 = FUN_108cc6a00;
  puStack_1e0 = puVar1;
  puStack_1d8 = puVar7;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(puVar9);
  puStack_1e8 = PTR_PTR_1126fe2d8;
  puStack_1f0 = puVar3;
  _objc_msgSendSuper2(&puStack_1f0,PTR_s_init_1125d9248);
  if (ppuVar6 != (undefined **)0x0) {
    puVar2 = puVar9;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)ppuVar6 + 0x10);
    *(undefined8 **)((long)ppuVar6 + 0x10) = puVar2;
    _objc_release(uVar11);
    puVar2 = puVar9;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)ppuVar6 + 0x18);
    *(undefined8 **)((long)ppuVar6 + 0x18) = puVar2;
    _objc_release(uVar11);
    puVar2 = puVar9;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)ppuVar6 + 0x20);
    *(undefined8 **)((long)ppuVar6 + 0x20) = puVar2;
    _objc_release(uVar11);
    puVar2 = puVar9;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)ppuVar6 + 0x28);
    *(undefined8 **)((long)ppuVar6 + 0x28) = puVar2;
    _objc_release(uVar11);
    puVar2 = puVar9;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)ppuVar6 + 0x30);
    *(undefined8 **)((long)ppuVar6 + 0x30) = puVar2;
    _objc_release(uVar11);
    puVar2 = puVar9;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)ppuVar6 + 0x38);
    *(undefined8 **)((long)ppuVar6 + 0x38) = puVar2;
    _objc_release(uVar11);
    puVar2 = puVar9;
    func_0x00010bf66f40();
    *(undefined8 **)((long)ppuVar6 + 0x40) = puVar2;
    puVar2 = puVar9;
    func_0x00010bf66f40();
    *(undefined8 **)((long)ppuVar6 + 0x48) = puVar2;
    puVar2 = puVar9;
    func_0x00010bf66f40();
    *(undefined8 **)((long)ppuVar6 + 0x50) = puVar2;
    puVar2 = puVar9;
    func_0x00010bf66f40();
    *(undefined8 **)((long)ppuVar6 + 0x58) = puVar2;
    puVar2 = puVar9;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)ppuVar6 + 0x60);
    *(undefined8 **)((long)ppuVar6 + 0x60) = puVar2;
    _objc_release(uVar11);
    puVar2 = puVar9;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)ppuVar6 + 0x68);
    *(undefined8 **)((long)ppuVar6 + 0x68) = puVar2;
    _objc_release(uVar11);
    puVar2 = puVar9;
    func_0x00010bf66f40();
    *(undefined8 **)((long)ppuVar6 + 0x70) = puVar2;
    puVar2 = puVar9;
    func_0x00010bf66f40();
    *(undefined8 **)((long)ppuVar6 + 0x78) = puVar2;
    puVar2 = puVar9;
    func_0x00010bf66f40();
    *(undefined8 **)((long)ppuVar6 + 0x80) = puVar2;
    puVar2 = puVar9;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)ppuVar6 + 0x88);
    *(undefined8 **)((long)ppuVar6 + 0x88) = puVar2;
    _objc_release(uVar11);
    puVar2 = puVar9;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)ppuVar6 + 0x90);
    *(undefined8 **)((long)ppuVar6 + 0x90) = puVar2;
    _objc_release(uVar11);
    puVar2 = puVar9;
    func_0x00010bf66ce0();
    *(char *)((long)ppuVar6 + 8) = (char)puVar2;
  }
  _objc_release(puVar9);
  return (undefined *)ppuVar6;
}



/* Entry: 108cc665c; end: 108cc688b;  */

undefined * FUN_108cc665c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f5122ab;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f5122ab;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110ac1a18;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110ac1a18,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar7 = &uStack_120;
  pcStack_a8 = FUN_108cc688c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f5122ab;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110ac1a68,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar6 = puVar7;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar6 = puVar7;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = puVar3;
  __Unwind_Resume();
  ppuVar5 = &puStack_150;
  pcStack_128 = FUN_108cc6a00;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar6);
  puStack_148 = PTR_PTR_1126fe2d8;
  puStack_150 = puVar4;
  _objc_msgSendSuper2(&puStack_150,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    puVar2 = puVar6;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x10);
    *(undefined8 **)((long)ppuVar5 + 0x10) = puVar2;
    _objc_release(uVar8);
    puVar2 = puVar6;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x18);
    *(undefined8 **)((long)ppuVar5 + 0x18) = puVar2;
    _objc_release(uVar8);
    puVar2 = puVar6;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x20);
    *(undefined8 **)((long)ppuVar5 + 0x20) = puVar2;
    _objc_release(uVar8);
    puVar2 = puVar6;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x28);
    *(undefined8 **)((long)ppuVar5 + 0x28) = puVar2;
    _objc_release(uVar8);
    puVar2 = puVar6;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x30);
    *(undefined8 **)((long)ppuVar5 + 0x30) = puVar2;
    _objc_release(uVar8);
    puVar2 = puVar6;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x38);
    *(undefined8 **)((long)ppuVar5 + 0x38) = puVar2;
    _objc_release(uVar8);
    puVar2 = puVar6;
    func_0x00010bf66f40();
    *(undefined8 **)((long)ppuVar5 + 0x40) = puVar2;
    puVar2 = puVar6;
    func_0x00010bf66f40();
    *(undefined8 **)((long)ppuVar5 + 0x48) = puVar2;
    puVar2 = puVar6;
    func_0x00010bf66f40();
    *(undefined8 **)((long)ppuVar5 + 0x50) = puVar2;
    puVar2 = puVar6;
    func_0x00010bf66f40();
    *(undefined8 **)((long)ppuVar5 + 0x58) = puVar2;
    puVar2 = puVar6;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x60);
    *(undefined8 **)((long)ppuVar5 + 0x60) = puVar2;
    _objc_release(uVar8);
    puVar2 = puVar6;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x68);
    *(undefined8 **)((long)ppuVar5 + 0x68) = puVar2;
    _objc_release(uVar8);
    puVar2 = puVar6;
    func_0x00010bf66f40();
    *(undefined8 **)((long)ppuVar5 + 0x70) = puVar2;
    puVar2 = puVar6;
    func_0x00010bf66f40();
    *(undefined8 **)((long)ppuVar5 + 0x78) = puVar2;
    puVar2 = puVar6;
    func_0x00010bf66f40();
    *(undefined8 **)((long)ppuVar5 + 0x80) = puVar2;
    puVar2 = puVar6;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x88);
    *(undefined8 **)((long)ppuVar5 + 0x88) = puVar2;
    _objc_release(uVar8);
    puVar2 = puVar6;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x90);
    *(undefined8 **)((long)ppuVar5 + 0x90) = puVar2;
    _objc_release(uVar8);
    puVar2 = puVar6;
    func_0x00010bf66ce0();
    *(char *)((long)ppuVar5 + 8) = (char)puVar2;
  }
  _objc_release(puVar6);
  return (undefined *)ppuVar5;
}



/* Entry: 108cc688c; end: 108cc69ff;  */

undefined * FUN_108cc688c(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f5122ab;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110ac1a68,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar3 = &puStack_b0;
  pcStack_88 = FUN_108cc6a00;
  puStack_a0 = puVar1;
  puStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puStack_a8 = PTR_PTR_1126fe2d8;
  puStack_b0 = puVar2;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    puVar4 = puVar5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x10);
    *(undefined1 **)((long)ppuVar3 + 0x10) = puVar4;
    _objc_release(uVar7);
    puVar4 = puVar5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x18);
    *(undefined1 **)((long)ppuVar3 + 0x18) = puVar4;
    _objc_release(uVar7);
    puVar4 = puVar5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x20);
    *(undefined1 **)((long)ppuVar3 + 0x20) = puVar4;
    _objc_release(uVar7);
    puVar4 = puVar5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x28);
    *(undefined1 **)((long)ppuVar3 + 0x28) = puVar4;
    _objc_release(uVar7);
    puVar4 = puVar5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x30);
    *(undefined1 **)((long)ppuVar3 + 0x30) = puVar4;
    _objc_release(uVar7);
    puVar4 = puVar5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x38);
    *(undefined1 **)((long)ppuVar3 + 0x38) = puVar4;
    _objc_release(uVar7);
    puVar4 = puVar5;
    func_0x00010bf66f40();
    *(undefined1 **)((long)ppuVar3 + 0x40) = puVar4;
    puVar4 = puVar5;
    func_0x00010bf66f40();
    *(undefined1 **)((long)ppuVar3 + 0x48) = puVar4;
    puVar4 = puVar5;
    func_0x00010bf66f40();
    *(undefined1 **)((long)ppuVar3 + 0x50) = puVar4;
    puVar4 = puVar5;
    func_0x00010bf66f40();
    *(undefined1 **)((long)ppuVar3 + 0x58) = puVar4;
    puVar4 = puVar5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x60);
    *(undefined1 **)((long)ppuVar3 + 0x60) = puVar4;
    _objc_release(uVar7);
    puVar4 = puVar5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x68);
    *(undefined1 **)((long)ppuVar3 + 0x68) = puVar4;
    _objc_release(uVar7);
    puVar4 = puVar5;
    func_0x00010bf66f40();
    *(undefined1 **)((long)ppuVar3 + 0x70) = puVar4;
    puVar4 = puVar5;
    func_0x00010bf66f40();
    *(undefined1 **)((long)ppuVar3 + 0x78) = puVar4;
    puVar4 = puVar5;
    func_0x00010bf66f40();
    *(undefined1 **)((long)ppuVar3 + 0x80) = puVar4;
    puVar4 = puVar5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x88);
    *(undefined1 **)((long)ppuVar3 + 0x88) = puVar4;
    _objc_release(uVar7);
    puVar4 = puVar5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x90);
    *(undefined1 **)((long)ppuVar3 + 0x90) = puVar4;
    _objc_release(uVar7);
    puVar4 = puVar5;
    func_0x00010bf66ce0();
    *(char *)((long)ppuVar3 + 8) = (char)puVar4;
  }
  _objc_release(puVar5);
  return (undefined *)ppuVar3;
}



/* Entry: 108cc6a00; end: 108cc6c8f; -[SCLensConfiguration initWithCoder:] */

undefined1 * FUN_108cc6a00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe2d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cc6c90; end: 108cc6f13; -[SCLensConfiguration initWithLens:lensOptionId:lensRankingId:arBarTabSessionId:arBarTabCategoryId:lensSwipeId:faceFrontCameraCount:faceBackCameraCount:lensIndexPos:lensIndexCount:lensApplicableContext:timelineLensIds:lensOptionSourceType:lensSource:cameraNavigationType:venues:freemiumGroupId:lensSuggestedSpotlight:] */

undefined8 *
FUN_108cc6c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_1126fe2d8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    puVar1[8] = param_9;
    puVar1[9] = param_10;
    puVar1[10] = param_11;
    puVar1[0xb] = param_12;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    puVar1[0xe] = param_15;
    puVar1[0xf] = param_16;
    puVar1[0x10] = param_17;
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_20;
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108cc6f14; end: 108cc6f37; -[SCLensConfiguration copyWithZone:] */

undefined8 FUN_108cc6f14(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108cc6f38; end: 108cc70d7; -[SCLensConfiguration encodeWithCoder:] */

void FUN_108cc6f38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e3ddf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ef16b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ef16d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ef16f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110ef1718);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110ef1738);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110ef1758);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110ef1778);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110ef1798);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110ef17b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110ef17d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110ef17f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110ef1818);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110eeabf8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                      &PTR____CFConstantStringClassReference_110ef1838);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x88),
                      &PTR____CFConstantStringClassReference_110ef1858);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x90),
                      &PTR____CFConstantStringClassReference_110ef1878);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110ef1898);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cc70d8; end: 108cc71db; -[SCLensConfiguration hash] */

undefined8 * FUN_108cc70d8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_b8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uStack_88 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  uStack_80 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uStack_78 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x50));
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x70));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x78));
  lVar5 = *(long *)(param_1 + 0x80);
  uStack_40 = *(undefined8 *)(param_1 + 0x88);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_b8;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,0x12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108cc739c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108cc73a8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((puVar3[8] == param_3[8] && (puVar3[9] == param_3[9])) && (puVar3[10] == param_3[10]))
          && ((puVar3[0xb] == param_3[0xb] && (puVar3[0xe] == param_3[0xe])))))) &&
        (puVar3[0xf] == param_3[0xf])) &&
       ((puVar3[0x10] == param_3[0x10] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[0xc];
                  if ((lVar5 == param_3[0xc]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[0xd];
                    if ((lVar5 == param_3[0xd]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = puVar3[0x11];
                      if ((lVar5 == param_3[0x11]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        puVar6 = (undefined8 *)puVar3[0x12];
                        if (puVar6 != (undefined8 *)param_3[0x12]) {
                          func_0x00010c071ae0();
                          goto LAB_108cc73a8;
                        }
                        goto LAB_108cc739c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108cc73a8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108cc71dc; end: 108cc73c3; -[SCLensConfiguration isEqual:] */

long FUN_108cc71dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108cc739c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108cc73a8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40) &&
            (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) &&
           (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))) &&
          ((*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58) &&
           (*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70))))))) &&
        (*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78))) &&
       ((*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x60);
                  if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x68);
                    if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x88);
                      if ((lVar3 == *(long *)(param_3 + 0x88)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x90);
                        if (lVar3 != *(long *)(param_3 + 0x90)) {
                          func_0x00010c071ae0();
                          goto LAB_108cc73a8;
                        }
                        goto LAB_108cc739c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108cc73a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108cc73c4; end: 108cc73cb; -[SCLensConfiguration lens] */

undefined8 FUN_108cc73c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cc73cc; end: 108cc73d3; -[SCLensConfiguration lensOptionId] */

undefined8 FUN_108cc73cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cc73d4; end: 108cc73db; -[SCLensConfiguration lensRankingId] */

undefined8 FUN_108cc73d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108cc73dc; end: 108cc73e3; -[SCLensConfiguration arBarTabSessionId] */

undefined8 FUN_108cc73dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108cc73e4; end: 108cc73eb; -[SCLensConfiguration arBarTabCategoryId] */

undefined8 FUN_108cc73e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


