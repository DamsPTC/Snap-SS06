/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b834388; end: 10b8343b7; -[SIGToggleColorModel .cxx_destruct] */

void FUN_10b834388(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b8343b8; end: 10b834423; +[SIGToggleSwitch switchWithAccessibilityLabel:andAccessibilityHint:] */

void FUN_10b8343b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0d78;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bfefda0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b834424; end: 10b8344ab; -[SIGToggleSwitch initWithAccessibilityLabel:andAccessibilityHint:] */

long FUN_10b834424(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  if (param_1 != 0) {
    func_0x00010c161020(param_1,param_2,param_3);
    func_0x00010c160f80(param_1,param_2,param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b8344ac; end: 10b83490f; -[SIGToggleSwitch initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b8344ac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_11270b3e0;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112794610) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794614) = 0x4020000000000000;
    puVar2 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_1126dbbe0;
    _objc_alloc();
    func_0x00010c04ea80();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794618);
    *(undefined **)((long)puVar1 + (long)_DAT_112794618) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279461c);
    *(undefined **)((long)puVar1 + (long)_DAT_11279461c) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___CALayer_1126b1750;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794620);
    *(undefined **)((long)puVar1 + (long)_DAT_112794620) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794624);
    *(undefined **)((long)puVar1 + (long)_DAT_112794624) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126e16c0;
    _objc_opt_new();
    lVar7 = (long)_DAT_112794628;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c0e2f60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e29e0();
    _objc_release(uVar6);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126e16b8;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3fc47ae147ae147b,0x3fe28f5c28f5c28f,0x3fd7ae147ae147ae,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3fd51eb851eb851f,0x3fe9eb851eb851ec,0x3fe28f5c28f5c28f,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b660(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c0e2f60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8f40();
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126e16b8;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3fd47ae147ae147b,0x3fd47ae147ae147b,0x3fd47ae147ae147b,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b660(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c0e1820(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e29e0();
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126e16b8;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3fe47ae147ae147b,0x3fe4cccccccccccd,0x3fe570a3d70a3d71,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3fd851eb851eb852,0x3fd851eb851eb852,0x3fd851eb851eb852,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b660(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c0e1820(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8f40();
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279462c);
    *(undefined **)((long)puVar1 + (long)_DAT_11279462c) = puVar2;
    _objc_release(uVar6);
    puVar5 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar5);
    func_0x00010c181f00(0x447a0000,puVar1);
    func_0x00010c181f00(0x447a0000,puVar1);
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 10b834910; end: 10b83493f; -[SIGToggleSwitch setOn:] */

void FUN_10b834910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _UIAccessibilityIsReduceMotionEnabled();
                    /* WARNING: Could not recover jumptable at 0x00010c1b2f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setIsOn_animated__11264a5f8,param_3,(uint)uVar1 ^ 1);
  return;
}



/* Entry: 10b834940; end: 10b834987; -[SIGToggleSwitch setHighlighted:] */

void FUN_10b834940(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b3e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setHighlighted__112647c38);
  func_0x00010c125120(param_1);
  return;
}



/* Entry: 10b834988; end: 10b8349ef; -[SIGToggleSwitch switchFrame] */

double FUN_10b834988(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  func_0x00010c0699c0();
  func_0x00010bf20c00(param_4);
  func_0x00010bf20c00(param_4);
  return ABS(param_3 - param_1) * 0.5;
}



/* Entry: 10b8349f0; end: 10b834a53; -[SIGToggleSwitch setOnColor:] */

void FUN_10b8349f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf416c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d1c00();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c125130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_refreshColors_112626e68);
  return;
}



/* Entry: 10b834a54; end: 10b834aab; -[SIGToggleSwitch onColor] */

void FUN_10b834a54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf416c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074da0(param_1);
  uVar2 = uVar1;
  func_0x00010c0e2f40(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b834aac; end: 10b834b0f; -[SIGToggleSwitch setOffColor:] */

void FUN_10b834aac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf416c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0a40();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c125130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_refreshColors_112626e68);
  return;
}



/* Entry: 10b834b10; end: 10b834b67; -[SIGToggleSwitch offColor] */

void FUN_10b834b10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf416c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074da0(param_1);
  uVar2 = uVar1;
  func_0x00010c0e1800(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b834b68; end: 10b834ba7; -[SIGToggleSwitch setHandleColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b834b68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11279462c);
  *(undefined8 *)(param_1 + _DAT_11279462c) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c125130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_refreshColors_112626e68);
  return;
}



/* Entry: 10b834ba8; end: 10b834be7; -[SIGToggleSwitch setHandleRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b834ba8(double param_1,long param_2)

{
  if (*(double *)(param_2 + _DAT_112794614) != param_1) {
    *(double *)(param_2 + _DAT_112794614) = param_1;
    func_0x00010c08d160();
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
    return;
  }
  return;
}



/* Entry: 10b834be8; end: 10b834c03; -[SIGToggleSwitch handleTravel] */

double FUN_10b834be8(double param_1)

{
  func_0x00010bfd2340();
  return param_1 * 1.5;
}



/* Entry: 10b834c04; end: 10b834c53; -[SIGToggleSwitch layoutSubviews] */

void FUN_10b834c04(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b3e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010c125120(param_1);
  func_0x00010c08d160(param_1);
  return;
}



/* Entry: 10b834c54; end: 10b834deb; -[SIGToggleSwitch refreshColors] */

void FUN_10b834c54(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10b834d14;
  puStack_40 = &UNK_110842e18;
  ppuVar1 = &puStack_58;
  lStack_38 = param_1;
  _objc_retainBlock();
  lVar2 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    func_0x00010c279540(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f83c0();
    _objc_release(param_1);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 10b834dec; end: 10b8351ef; -[SIGToggleSwitch layoutSwitch] */

/* WARNING: Possible PIC construction at 0x00010b834ee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b834eec) */
/* WARNING: Removing unreachable block (ram,0x00010b834f08) */
/* WARNING: Removing unreachable block (ram,0x00010b834f10) */

void FUN_10b834dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  
  func_0x00010c2656a0();
  uVar3 = param_1;
  uVar4 = param_2;
  uVar5 = param_3;
  dVar6 = param_4;
  func_0x00010bf20c00(param_5);
  uVar1 = param_5;
  func_0x00010c265540(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(uVar3,uVar4,uVar5,dVar6);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(param_1,param_2,param_3,param_4,param_4 * 0.5,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c265540(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(param_5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c18e5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___CATransaction_1126b5718,PTR_s_setDisableActions__112641398,1);
  return;
}



/* Entry: 10b8351f0; end: 10b8351f7; -[SIGToggleSwitch setIsOn:animated:] */

void FUN_10b8351f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea4dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setIsOn_animated_fromUserTap__112586d18,param_3,param_4,0);
  return;
}



/* Entry: 10b8351f8; end: 10b83536b; -[SIGToggleSwitch _setIsOn:animated:fromUserTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8351f8(long param_1,undefined8 param_2,uint param_3,ulong param_4,undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*(byte *)(param_1 + _DAT_112794610) != param_3) {
    *(char *)(param_1 + _DAT_112794610) = (char)param_3;
    lVar3 = param_1;
    func_0x00010bfc0b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9da0();
    _objc_release(lVar3);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10b83536c;
    puStack_58 = &UNK_110845ce0;
    ppuVar4 = &puStack_70;
    lStack_50 = param_1;
    uStack_48 = param_5;
    _objc_retainBlock();
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    if ((param_4 & 1) == 0) {
      puStack_98 = puVar1;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_10b8353f0;
      puStack_80 = &UNK_110849530;
      _objc_retain(ppuVar4);
      ppuStack_78 = ppuVar4;
      func_0x00010c0f9680(puVar2,param_2,&puStack_98);
      _objc_release(ppuStack_78);
    }
    else {
      func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
      lVar3 = param_1;
      func_0x00010c2656c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2725e0(param_1,param_2,lVar3);
      _objc_release(lVar3);
      lVar3 = param_1;
      func_0x00010bfd26a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2725e0(param_1,param_2,lVar3);
      _objc_release(lVar3);
      func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
      (*(code *)ppuVar4[2])(ppuVar4);
    }
    _objc_release(ppuVar4);
  }
  return;
}



/* Entry: 10b83536c; end: 10b8353ef;  */

void FUN_10b83536c(long param_1)

{
  long lVar1;
  
  func_0x00010c08d140(*(undefined8 *)(param_1 + 0x20));
  if (*(char *)(param_1 + 0x28) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c268c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = *(long *)(param_1 + 0x20);
      func_0x00010c268c20();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))();
      _objc_release(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c15b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_sendActionsForControlEvents__112634750,0x1000);
    return;
  }
  return;
}



/* Entry: 10b8353f0; end: 10b8353fb;  */

void FUN_10b8353f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8353f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10b8353fc; end: 10b8356d7; -[SIGToggleSwitch toggleAnimationForLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8353fc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c2656a0(param_2);
  lVar10 = (long)_DAT_112794610;
  dVar11 = 0.0;
  if (*(char *)(param_2 + lVar10) == '\x01') {
    func_0x00010bfd2f80(param_2);
  }
  dVar16 = param_1 + 4.0 + dVar11;
  func_0x00010bfd2340(param_2);
  dVar16 = dVar16 + dVar11;
  lVar1 = param_2;
  func_0x00010c2656c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c10f4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104260();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2656c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104260();
  func_0x00010c1dee80(dVar16,param_4);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  _objc_opt_new();
  func_0x00010c1b6d00();
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc0c0(0x3ecccccd,0,0x3f800000,0x3f800000);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 0x3e4ccccd;
  uVar15 = 0x3f800000;
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc0c0(0,0,0x3e4ccccd,0x3f800000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c192d40(0x3fd6666666666666,puVar3);
  func_0x00010c1b6c80(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0x4008000000000000;
  dVar11 = 3.0;
  if (*(char *)(param_2 + lVar10) == '\0') {
    dVar11 = -3.0;
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar16 + dVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  ppuVar8 = &PTR____CFConstantStringClassReference_110e58a78;
  puVar4 = puVar3;
  func_0x00010bef6c20(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(ppuVar8);
  puVar5 = puVar4;
  func_0x00010bf04a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(puVar3);
  puVar6 = puVar5;
  dVar11 = dVar16;
  uVar13 = uVar12;
  func_0x00010c09ef00();
  _CGRectContainsPoint(dVar16,uVar12,uVar14,uVar15,dVar11,uVar13);
  if (((ulong)puVar6 & 1) == 0) {
    puStack_f8 = PTR_PTR_11270b3e0;
    puStack_100 = puVar3;
    _objc_msgSendSuper2(&puStack_100,PTR_s_touchesEnded_withEvent__11267b788,puVar4,ppuVar8);
    func_0x00010c15b4c0(puVar3);
  }
  else {
    func_0x00010c079040(puVar3);
    _UIAccessibilityIsReduceMotionEnabled();
    func_0x00010bea4dc0(puVar3);
    func_0x00010c15b4c0(puVar3);
    puStack_108 = PTR_PTR_11270b3e0;
    puStack_110 = puVar3;
    _objc_msgSendSuper2(&puStack_110,PTR_s_touchesEnded_withEvent__11267b788,puVar4,ppuVar8);
  }
  _objc_release(puVar5);
  _objc_release(ppuVar8);
  _objc_release(puVar4);
  return;
}



/* Entry: 10b8356d8; end: 10b83582b; -[SIGToggleSwitch touchesEnded:withEvent:] */

void FUN_10b8356d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_7;
  func_0x00010bf04a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_5);
  uVar2 = uVar1;
  uVar3 = param_1;
  uVar4 = param_2;
  func_0x00010c09ef00();
  _CGRectContainsPoint(param_1,param_2,param_3,param_4,uVar3,uVar4);
  if ((uVar2 & 1) == 0) {
    puStack_68 = PTR_PTR_11270b3e0;
    uStack_70 = param_5;
    _objc_msgSendSuper2(&uStack_70,PTR_s_touchesEnded_withEvent__11267b788,param_7,param_8);
    func_0x00010c15b4c0(param_5);
  }
  else {
    func_0x00010c079040(param_5);
    _UIAccessibilityIsReduceMotionEnabled();
    func_0x00010bea4dc0(param_5);
    func_0x00010c15b4c0(param_5);
    puStack_78 = PTR_PTR_11270b3e0;
    uStack_80 = param_5;
    _objc_msgSendSuper2(&uStack_80,PTR_s_touchesEnded_withEvent__11267b788,param_7,param_8);
  }
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 10b83582c; end: 10b83586f; -[SIGToggleSwitch intrinsicContentSize] */

undefined1  [16] FUN_10b83582c(double param_1,undefined8 param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  func_0x00010bfd2340();
  dVar1 = param_1 * 2.0 + 8.0;
  func_0x00010bfd2f80(param_2);
  auVar2._0_8_ = dVar1 + param_1;
  auVar2._8_8_ = dVar1;
  return auVar2;
}



/* Entry: 10b835870; end: 10b835873; -[SIGToggleSwitch alignmentRectForFrame:] */

void FUN_10b835870(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2656b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_switchFrame_112676fd0);
  return;
}



/* Entry: 10b835874; end: 10b83589b; -[SIGToggleSwitch accessibilityFrame] */

void FUN_10b835874(undefined8 param_1)

{
  func_0x00010c2656a0();
                    /* WARNING: Could not recover jumptable at 0x00010bf51470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_convertRect_toView__1125b1ec0,0);
  return;
}



/* Entry: 10b83589c; end: 10b8358a3; -[SIGToggleSwitch isAccessibilityElement] */

undefined8 FUN_10b83589c(void)

{
  return 1;
}



/* Entry: 10b8358a4; end: 10b83594b; -[SIGToggleSwitch accessibilityValue] */

void FUN_10b8358a4(ulong param_1)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_accessibilityValue_112598d98;
  puStack_38 = PTR_PTR_11270b3e0;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_accessibilityValue_112598d98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (ulong *)0x0) {
    func_0x00010c079040();
    if ((param_1 & 1) == 0) {
      func_0x00010b885050();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010b885038();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puStack_48 = PTR_PTR_11270b3e0;
    uStack_50 = param_1;
    _objc_msgSendSuper2(&uStack_50,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b83594c; end: 10b8359d7; -[SIGToggleSwitch accessibilityLabel] */

void FUN_10b83594c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_accessibilityLabel_112598d68;
  puStack_38 = PTR_PTR_11270b3e0;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_accessibilityLabel_112598d68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined8 *)0x0) {
    func_0x00010b885068();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_48 = PTR_PTR_11270b3e0;
    uStack_50 = param_1;
    _objc_msgSendSuper2(&uStack_50,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b8359d8; end: 10b835a63; -[SIGToggleSwitch accessibilityHint] */

void FUN_10b8359d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_accessibilityHint_112598d40;
  puStack_38 = PTR_PTR_11270b3e0;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_accessibilityHint_112598d40);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined8 *)0x0) {
    func_0x00010b885080();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_48 = PTR_PTR_11270b3e0;
    uStack_50 = param_1;
    _objc_msgSendSuper2(&uStack_50,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b835a64; end: 10b835a73; -[SIGToggleSwitch accessibilityTraits] */

undefined8 FUN_10b835a64(void)

{
  return *(undefined8 *)PTR__UIAccessibilityTraitButton_110345920;
}



/* Entry: 10b835a74; end: 10b835a83; -[SIGToggleSwitch isOn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b835a74(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794610);
}



/* Entry: 10b835a84; end: 10b835a93; -[SIGToggleSwitch tapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b835a84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794630);
}



/* Entry: 10b835a94; end: 10b835a9f; -[SIGToggleSwitch setTapAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b835a94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b835aa0; end: 10b835aaf; -[SIGToggleSwitch switchBackgroundLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b835aa0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279461c);
}



/* Entry: 10b835ab0; end: 10b835aef; -[SIGToggleSwitch setSwitchBackgroundLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b835ab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11279461c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b835af0; end: 10b835aff; -[SIGToggleSwitch switchHandleLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b835af0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794624);
}



/* Entry: 10b835b00; end: 10b835b3f; -[SIGToggleSwitch setSwitchHandleLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b835b00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794624;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b835b40; end: 10b835b4f; -[SIGToggleSwitch handleShadowLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b835b40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794620);
}



/* Entry: 10b835b50; end: 10b835b8f; -[SIGToggleSwitch setHandleShadowLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b835b50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794620;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b835b90; end: 10b835b9f; -[SIGToggleSwitch colors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b835b90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794628);
}



/* Entry: 10b835ba0; end: 10b835bdf; -[SIGToggleSwitch setColors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b835ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794628;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b835be0; end: 10b835bef; -[SIGToggleSwitch generator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b835be0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794618);
}



/* Entry: 10b835bf0; end: 10b835c2f; -[SIGToggleSwitch setGenerator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b835bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794618;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b835c30; end: 10b835c3f; -[SIGToggleSwitch handleColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b835c30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279462c);
}



/* Entry: 10b835c40; end: 10b835c4f; -[SIGToggleSwitch handleRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b835c40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794614);
}



/* Entry: 10b835c50; end: 10b835cdf; -[SIGToggleSwitch .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b835c50(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11279462c,0);
  _objc_storeStrong(param_1 + _DAT_112794618,0);
  _objc_storeStrong(param_1 + _DAT_112794628,0);
  _objc_storeStrong(param_1 + _DAT_112794620,0);
  _objc_storeStrong(param_1 + _DAT_112794624,0);
  _objc_storeStrong(param_1 + _DAT_11279461c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794630,0);
  return;
}



/* Entry: 10b835ce0; end: 10b835f17;  */

void FUN_10b835ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_retain(param_3);
  func_0x00010bf25cc0(puVar1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c23b9c0(param_3,param_2,0x15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c16b780(puVar1,param_2,uVar2,0);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(puVar1,param_2,puVar3,0);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(puVar1,param_2,puVar3,1);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(puVar1,param_2,puVar3,2);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b835f18; end: 10b8360c7;  */

void FUN_10b835f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_retain(param_5);
  func_0x00010bf25cc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar1);
  _objc_release(puVar2);
  func_0x00010c165e60(puVar1);
  func_0x00010c165e80(puVar1);
  uVar3 = param_5;
  func_0x00010bfe9720(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_10b8360c8(uVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c1a9fc0(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  FUN_10b8360c8(uVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c1a9fc0(puVar1);
  func_0x00010c23d0a0(param_5);
  func_0x00010c23d0a0(param_5);
  _objc_release(param_5);
  func_0x00010c19f0e0(0,0,param_1,param_2,puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b8360c8; end: 10b83616f;  */

void FUN_10b8360c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c23d0a0(param_3);
  uVar1 = param_1;
  func_0x00010c14e120(param_3);
  _UIGraphicsBeginImageContextWithOptions(param_1,param_2,uVar1,0);
  func_0x00010c1607a0(param_4);
  _objc_release(param_4);
  func_0x00010bf897c0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_3);
  _objc_release(param_3);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b836170; end: 10b83631f;  */

void FUN_10b836170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_retain(param_5);
  func_0x00010bf25cc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar1);
  _objc_release(puVar2);
  func_0x00010c165e60(puVar1);
  func_0x00010c165e80(puVar1);
  uVar3 = param_5;
  func_0x00010bfe9720(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_10b8360c8(uVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c1a9fc0(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  FUN_10b8360c8(uVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c1a9fc0(puVar1);
  func_0x00010c23d0a0(param_5);
  func_0x00010c23d0a0(param_5);
  _objc_release(param_5);
  func_0x00010c19f0e0(0,0,param_1,param_2,puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b836320; end: 10b836373;  */

void FUN_10b836320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  FUN_10b83340c(param_3);
  func_0x00010c23ba80(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b836374; end: 10b836403;  */

void FUN_10b836374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar1 = param_1;
  func_0x00010b88a460();
  FUN_10b833398(param_3,param_4,uVar1,2 < lRam00000001138466f0);
  func_0x00010c23ba80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b836404; end: 10b836467; -[SIGHorizontalCardGestureHandler init] */

undefined1 * FUN_10b836404(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b3e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIPercentDrivenInteractiveTransition_1126c2cb8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b836468; end: 10b83650b; -[SIGHorizontalCardGestureHandler shouldAllowInteractionWithView:touchLocation:] */

long FUN_10b836468(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_5);
  uVar1 = param_3 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 1;
  }
  else {
    param_3 = param_3 + 0x20;
    _objc_loadWeakRetained(param_3);
    lVar3 = param_3;
    func_0x00010bf32020(param_1,param_2);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  return lVar3;
}



/* Entry: 10b83650c; end: 10b836553; -[SIGHorizontalCardGestureHandler startInteractingWithView:atOffset:velocity:] */

void FUN_10b83650c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf32040();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b836554; end: 10b836623; -[SIGHorizontalCardGestureHandler updateInteractingWithView:atOffset:velocity:] */

void FUN_10b836554(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = param_1 - *(double *)(param_2 + 0x10);
  func_0x00010c2a71e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar3 = dVar3 / param_1;
  _objc_release(param_4);
  dVar4 = 1.0;
  if (dVar3 <= 1.0) {
    dVar4 = dVar3;
  }
  func_0x00010c286a00(dVar4,*(undefined8 *)(param_2 + 8));
  uVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    return;
  }
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf31fe0(dVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b836624; end: 10b8367c7; -[SIGHorizontalCardGestureHandler endInteractingWithView:atOffset:velocity:cancel:] */

void FUN_10b836624(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  uint param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_5);
  dVar5 = *(double *)(param_3 + 0x10);
  param_1 = param_1 - dVar5;
  uVar1 = param_5;
  func_0x00010c2a71e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(uVar1);
  if ((((dVar5 <= 0.0) || ((param_6 & 1) != 0)) || (param_2 <= 0.0)) || (param_1 / dVar5 <= 0.1)) {
    param_1 = ABS(param_1);
    if (param_1 <= 1.0) {
      param_1 = 1.0;
    }
    dVar5 = ABS(param_2) / param_1;
    if (ABS(param_2) / param_1 <= 0.1) {
      dVar5 = 0.1;
    }
    dVar6 = 2.0;
    if (dVar5 <= 2.0) {
      dVar6 = dVar5;
    }
    func_0x00010c17fc20(dVar6,*(undefined8 *)(param_3 + 8));
    func_0x00010bf2e5a0(*(undefined8 *)(param_3 + 8));
  }
  else {
    func_0x00010c17fc20(0x3fd3333333333333,*(undefined8 *)(param_3 + 8));
    puVar2 = PTR__OBJC_CLASS___UICubicTimingParameters_1126c8ab8;
    _objc_alloc(PTR__OBJC_CLASS___UICubicTimingParameters_1126c8ab8);
    func_0x00010c0048a0(0,0,0x3fc999999999999a,0x3ff0000000000000);
    func_0x00010c216060(*(undefined8 *)(param_3 + 8));
    func_0x00010bfaf8e0(*(undefined8 *)(param_3 + 8));
    _objc_release(puVar2);
  }
  if ((param_6 == 0) || (*(char *)(param_3 + 0x18) == '\x01')) {
    uVar3 = param_3 + 0x20;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      param_3 = param_3 + 0x20;
      _objc_loadWeakRetained(param_3);
      func_0x00010bf32000();
      _objc_release(param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b8367c8; end: 10b8367df; -[SIGHorizontalCardGestureHandler cardTransitionDelegate] */

void FUN_10b8367c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b8367e0; end: 10b8367eb; -[SIGHorizontalCardGestureHandler setCardTransitionDelegate:] */

void FUN_10b8367e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10b8367ec; end: 10b8367f3; -[SIGHorizontalCardGestureHandler dismissalTransition] */

undefined8 FUN_10b8367ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b8367f4; end: 10b8367fb; -[SIGHorizontalCardGestureHandler experimentalGestureCancelRecoveryEnabled] */

undefined1 FUN_10b8367f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 10b8367fc; end: 10b836803; -[SIGHorizontalCardGestureHandler setExperimentalGestureCancelRecoveryEnabled:] */

void FUN_10b8367fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b836804; end: 10b83682f; -[SIGHorizontalCardGestureHandler .cxx_destruct] */

void FUN_10b836804(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b836830; end: 10b836893; -[SIGFullscreenCardGestureHandler init] */

undefined1 * FUN_10b836830(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b3f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIPercentDrivenInteractiveTransition_1126c2cb8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b836894; end: 10b836937; -[SIGFullscreenCardGestureHandler shouldAllowInteractionWithView:touchLocation:] */

long FUN_10b836894(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_5);
  uVar1 = param_3 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 1;
  }
  else {
    param_3 = param_3 + 0x20;
    _objc_loadWeakRetained(param_3);
    lVar3 = param_3;
    func_0x00010bf32020(param_1,param_2);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  return lVar3;
}



/* Entry: 10b836938; end: 10b83697f; -[SIGFullscreenCardGestureHandler startInteractingWithView:atOffset:velocity:] */

void FUN_10b836938(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf32040();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b836980; end: 10b836a4f; -[SIGFullscreenCardGestureHandler updateInteractingWithView:atOffset:velocity:] */

void FUN_10b836980(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = param_1 - *(double *)(param_2 + 0x10);
  func_0x00010c2a71e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar3 = dVar3 / param_1;
  _objc_release(param_4);
  dVar4 = 1.0;
  if (dVar3 <= 1.0) {
    dVar4 = dVar3;
  }
  func_0x00010c286a00(dVar4,*(undefined8 *)(param_2 + 8));
  uVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    return;
  }
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf31fe0(dVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b836a50; end: 10b836bf3; -[SIGFullscreenCardGestureHandler endInteractingWithView:atOffset:velocity:cancel:] */

void FUN_10b836a50(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  uint param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_5);
  dVar5 = *(double *)(param_3 + 0x10);
  param_1 = param_1 - dVar5;
  uVar1 = param_5;
  func_0x00010c2a71e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(uVar1);
  if ((((dVar5 <= 0.0) || ((param_6 & 1) != 0)) || (param_2 <= 0.0)) || (param_1 / dVar5 <= 0.1)) {
    param_1 = ABS(param_1);
    if (param_1 <= 1.0) {
      param_1 = 1.0;
    }
    dVar5 = ABS(param_2) / param_1;
    if (ABS(param_2) / param_1 <= 0.1) {
      dVar5 = 0.1;
    }
    dVar6 = 2.0;
    if (dVar5 <= 2.0) {
      dVar6 = dVar5;
    }
    func_0x00010c17fc20(dVar6,*(undefined8 *)(param_3 + 8));
    func_0x00010bf2e5a0(*(undefined8 *)(param_3 + 8));
  }
  else {
    func_0x00010c17fc20(0x3fd3333333333333,*(undefined8 *)(param_3 + 8));
    puVar2 = PTR__OBJC_CLASS___UICubicTimingParameters_1126c8ab8;
    _objc_alloc(PTR__OBJC_CLASS___UICubicTimingParameters_1126c8ab8);
    func_0x00010c0048a0(0,0,0x3fc999999999999a,0x3ff0000000000000);
    func_0x00010c216060(*(undefined8 *)(param_3 + 8));
    func_0x00010bfaf8e0(*(undefined8 *)(param_3 + 8));
    _objc_release(puVar2);
  }
  if ((param_6 == 0) || (*(char *)(param_3 + 0x18) == '\x01')) {
    uVar3 = param_3 + 0x20;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      param_3 = param_3 + 0x20;
      _objc_loadWeakRetained(param_3);
      func_0x00010bf32000();
      _objc_release(param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b836bf4; end: 10b836c0b; -[SIGFullscreenCardGestureHandler cardTransitionDelegate] */

void FUN_10b836bf4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b836c0c; end: 10b836c17; -[SIGFullscreenCardGestureHandler setCardTransitionDelegate:] */

void FUN_10b836c0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10b836c18; end: 10b836c1f; -[SIGFullscreenCardGestureHandler dismissalTransition] */

undefined8 FUN_10b836c18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b836c20; end: 10b836c27; -[SIGFullscreenCardGestureHandler experimentalGestureCancelRecoveryEnabled] */

undefined1 FUN_10b836c20(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 10b836c28; end: 10b836c2f; -[SIGFullscreenCardGestureHandler setExperimentalGestureCancelRecoveryEnabled:] */

void FUN_10b836c28(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b836c30; end: 10b836c5b; -[SIGFullscreenCardGestureHandler .cxx_destruct] */

void FUN_10b836c30(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b836c5c; end: 10b836c9b; -[SIGHalfScreenCardGestureHandler init] */

void FUN_10b836c5c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_11270b3f8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0x3fe0000000000000;
  }
  return;
}



/* Entry: 10b836c9c; end: 10b836dbb; -[SIGHalfScreenCardGestureHandler _updateHeightWithPercentage:] */

void FUN_10b836c9c(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  
  dVar9 = *(double *)(param_5 + 8);
  iVar1 = (int)*(undefined8 *)(param_5 + 0x18);
  dVar4 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release();
  dVar5 = dVar4;
  uVar6 = param_2;
  uVar7 = param_3;
  dVar8 = param_4;
  _CGRectIsEmpty(dVar4,param_2,param_3,param_4);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)*(undefined8 *)(param_5 + 0x18);
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release();
    dVar4 = dVar5;
    param_3 = uVar7;
    param_4 = dVar8;
    param_2 = uVar6;
  }
  dVar5 = dVar4;
  uVar6 = param_3;
  dVar8 = param_4;
  _CGRectIsEmpty(dVar4,param_2,param_3,param_4);
  if (iVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar3);
    dVar4 = dVar5;
    param_3 = uVar6;
    param_4 = dVar8;
  }
  param_1 = param_1 + dVar9;
  dVar5 = 1.0;
  if (param_1 <= 1.0) {
    dVar5 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar4,param_4 - dVar5 * param_4,param_3,*(undefined8 *)(param_5 + 0x18),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10b836dbc; end: 10b836e5f; -[SIGHalfScreenCardGestureHandler shouldAllowInteractionWithView:touchLocation:] */

long FUN_10b836dbc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_5);
  uVar1 = param_3 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 1;
  }
  else {
    param_3 = param_3 + 0x30;
    _objc_loadWeakRetained(param_3);
    lVar3 = param_3;
    func_0x00010bf32020(param_1,param_2);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  return lVar3;
}



/* Entry: 10b836e60; end: 10b836f8b; -[SIGHalfScreenCardGestureHandler startInteractingWithView:atOffset:velocity:] */

void FUN_10b836e60(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  
  dVar6 = param_1;
  _objc_retain(param_4);
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf31f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  _objc_release(uVar5);
  *(double *)(param_2 + 0x10) = param_1;
  uVar5 = param_4;
  func_0x00010c2a71e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf20c00(uVar5);
  _CGRectGetHeight();
  _objc_release(uVar5);
  if (0.0 <= param_1) {
    *(double *)(param_2 + 0x10) = param_1;
  }
  else {
    *(double *)(param_2 + 0x10) = param_1;
    if (*(long *)(param_2 + 0x18) != 0) goto LAB_10b836f64;
  }
  uVar3 = param_2 + 0x30;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    lVar1 = param_2 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf31fe0(0);
    _objc_release(lVar1);
  }
LAB_10b836f64:
  func_0x00010bed93a0((param_1 - param_1) / dVar6,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10b836f8c; end: 10b836feb; -[SIGHalfScreenCardGestureHandler updateInteractingWithView:atOffset:velocity:] */

void FUN_10b836f8c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  dVar1 = param_1 - *(double *)(param_2 + 0x10);
  func_0x00010c2a71e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bed93b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (-dVar1 / param_1,param_2,PTR_s__updateHeightWithPercentage__112593e90);
  return;
}



/* Entry: 10b836fec; end: 10b837227; -[SIGHalfScreenCardGestureHandler endInteractingWithView:atOffset:velocity:cancel:] */

void FUN_10b836fec(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  ulong param_6)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  dVar5 = param_1;
  _objc_retain(param_5);
  *(undefined8 *)(param_3 + 0x10) = 0;
  if ((param_6 & 1) == 0) {
    if (0.0 <= param_1) {
      bVar2 = false;
    }
    else {
      bVar2 = *(long *)(param_3 + 0x18) != 0;
    }
    uVar3 = param_5;
    func_0x00010c2a71e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    if (bVar2) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10b837228;
      puStack_60 = &UNK_110842e18;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_10b83723c;
      puStack_90 = &UNK_110848bd8;
      lStack_88 = param_3;
      lStack_58 = param_3;
      _objc_retain(param_5);
      uStack_80 = param_5;
      func_0x00010bf03420(0x3fd3333333333333,puVar1,param_4,&puStack_78,&puStack_a8);
      uVar3 = uStack_80;
    }
    else {
      if (param_1 / dVar5 <= 0.1 || param_2 <= 0.0) {
        puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_128 = 0xc2000000;
        pcStack_120 = FUN_10b83735c;
        puStack_118 = &UNK_110842e18;
        lStack_110 = param_3;
        func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_4,
                            &puStack_130);
        goto LAB_10b837204;
      }
      lVar4 = param_3 + 0x30;
      _objc_loadWeakRetained(lVar4);
      func_0x00010bf32040();
      _objc_release(lVar4);
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_10b8372cc;
      puStack_b8 = &UNK_110842e18;
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0xc2000000;
      pcStack_f8 = FUN_10b8372d8;
      puStack_f0 = &UNK_1109446f8;
      lStack_e8 = param_3;
      uStack_d8 = 0.1 < param_1 / dVar5 && 0.0 < param_2;
      lStack_b0 = param_3;
      _objc_retain(param_5);
      uStack_e0 = param_5;
      func_0x00010bf03420(0x3fd3333333333333,puVar1,param_4,&puStack_d0,&puStack_108);
      uVar3 = uStack_e0;
    }
    _objc_release(uVar3);
  }
LAB_10b837204:
  _objc_release(param_5);
  return;
}



/* Entry: 10b837228; end: 10b83723b;  */

void FUN_10b837228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed93b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (1.0 - *(double *)(*(long *)(param_1 + 0x20) + 8),*(long *)(param_1 + 0x20),
             PTR_s__updateHeightWithPercentage__112593e90);
  return;
}



/* Entry: 10b83723c; end: 10b8372cb;  */

void FUN_10b83723c(long param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_2 != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = 0x3ff0000000000000;
    uVar1 = *(long *)(param_1 + 0x20) + 0x30;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x20) + 0x30;
      _objc_loadWeakRetained(lVar3);
      func_0x00010bf32000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
  }
  return;
}



/* Entry: 10b8372cc; end: 10b8372d7;  */

void FUN_10b8372cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed93b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s__updateHeightWithPercentage__112593e90);
  return;
}



/* Entry: 10b8372d8; end: 10b83735b;  */

void FUN_10b8372d8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(long *)(param_1 + 0x20) + 0x30;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x20) + 0x30;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf32000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 10b83735c; end: 10b83736f;  */

void FUN_10b83735c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed93b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (1.0 - *(double *)(*(long *)(param_1 + 0x20) + 8),*(long *)(param_1 + 0x20),
             PTR_s__updateHeightWithPercentage__112593e90);
  return;
}



/* Entry: 10b837370; end: 10b837377; -[SIGHalfScreenCardGestureHandler dismissalTransition] */

undefined8 FUN_10b837370(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b837378; end: 10b83738f; -[SIGHalfScreenCardGestureHandler cardTransitionDelegate] */

void FUN_10b837378(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b837390; end: 10b83739b; -[SIGHalfScreenCardGestureHandler setCardTransitionDelegate:] */

void FUN_10b837390(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 10b83739c; end: 10b8373a3; -[SIGHalfScreenCardGestureHandler experimentalGestureCancelRecoveryEnabled] */

undefined1 FUN_10b83739c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 10b8373a4; end: 10b8373ab; -[SIGHalfScreenCardGestureHandler setExperimentalGestureCancelRecoveryEnabled:] */

void FUN_10b8373a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b8373ac; end: 10b8373e3; -[SIGHalfScreenCardGestureHandler .cxx_destruct] */

void FUN_10b8373ac(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b8373e4; end: 10b837437;  */

void FUN_10b8373e4(void)

{
  _objc_opt_new(PTR_PTR_1126e16c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b837438; end: 10b83743f;  */

undefined8 FUN_10b837438(void)

{
  return 0;
}



/* Entry: 10b837440; end: 10b83744b; -[SIGCardCustomDismissTransition transitionDuration:] */

undefined8 FUN_10b837440(void)

{
  return 0x3fc3333333333333;
}



/* Entry: 10b83744c; end: 10b83787b; -[SIGCardCustomDismissTransition animateTransition:] */

void FUN_10b83744c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c1677c0(*(double *)(param_1 + 8) * 0.5,puVar2);
  uVar3 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c29c220(param_3,param_2,
                      *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c29d0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c06c000();
  if ((uVar3 & 1) == 0) {
    func_0x00010c12c960(puVar2);
    func_0x00010bf43bc0(param_3,param_2,1);
  }
  else {
    uVar10 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uVar9 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar13 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar12 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uVar11 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    uStack_b0 = uVar9;
    uStack_a8 = uVar10;
    uStack_a0 = uVar12;
    uStack_98 = uVar13;
    uStack_90 = uVar7;
    uStack_88 = uVar11;
    func_0x00010c219960(uVar5,param_2,&uStack_b0);
    dVar8 = ABS(*(double *)(param_1 + 8) + -1.0);
    uVar14 = 0x10000000000000;
    if ((dVar8 < 2.2250738585072014e-308) ||
       (uVar14 = 0x3cb0000000000000,
       dVar8 < ABS(*(double *)(param_1 + 8) + 1.0) * 2.220446049250313e-16)) {
      func_0x00010bfb68e0(uVar5);
      func_0x00010bfb68e0(uVar5);
      dVar8 = 0.0;
      func_0x00010c19f0e0(0,0,uVar14,uVar5);
    }
    func_0x00010c148fc0(uVar5);
    if (dVar8 != 0.0) {
      uVar3 = uVar5;
      func_0x00010c0bc260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar3 == 0) {
        puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
        func_0x00010bf20c00(uVar5);
        func_0x00010c013de0(puVar4);
        func_0x00010c1c2ca0(uVar5,param_2,puVar4);
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        func_0x00010c0bc260(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440();
        _objc_release(uVar3);
        _objc_release(puVar4);
      }
    }
    uVar3 = uVar5;
    func_0x00010c0bc260(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar9;
    uStack_a8 = uVar10;
    uStack_a0 = uVar12;
    uStack_98 = uVar13;
    uStack_90 = uVar7;
    uStack_88 = uVar11;
    func_0x00010c219960();
    _objc_release(uVar3);
    uVar3 = uVar5;
    func_0x00010c0bc260(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0;
    func_0x00010c1842e0(0);
    _objc_release(uVar6);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010c27a940(param_1,param_2,0);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_10b83787c;
    puStack_d8 = &UNK_11084d788;
    _objc_retain(param_3);
    uStack_d0 = param_3;
    _objc_retain(puVar2);
    puStack_c8 = puVar2;
    _objc_retain(uVar5);
    puStack_128 = puVar4;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_10b837b58;
    puStack_110 = &UNK_1108500c8;
    uStack_c0 = uVar5;
    dStack_b8 = dVar8;
    _objc_retain(puVar2);
    puStack_108 = puVar2;
    _objc_retain(param_3);
    uStack_100 = param_3;
    _objc_retain(uVar5);
    uStack_f8 = uVar5;
    func_0x00010bf03420(uVar9,puVar1,param_2,&puStack_f0,&puStack_128);
    _objc_release(uStack_f8);
    _objc_release(uStack_100);
    _objc_release(puStack_108);
    _objc_release(uStack_c0);
    _objc_release(puStack_c8);
    _objc_release(uStack_d0);
  }
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10b83787c; end: 10b8379eb;  */

void FUN_10b83787c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_d3;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c075b60();
  if (iVar3 != 0) {
    func_0x00010c1680e0(PTR__OBJC_CLASS___UIView_1126aec20,param_2,3);
  }
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x28));
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformTranslate(&uStack_80,0,in_d3,&uStack_b0);
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x30),param_2,&uStack_b0);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10b8379ec;
  puStack_c8 = &UNK_110848c48;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uStack_b8 = *(undefined8 *)(param_1 + 0x38);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_10b837b4c;
  puStack_f0 = &UNK_110841f20;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_c0 = uVar5;
  _objc_retain(uVar4);
  uStack_e8 = uVar4;
  func_0x00010bf02ee0(0,0,puVar2,param_2,0,&puStack_e0,&puStack_108);
  _objc_release(uStack_e8);
  _objc_release(uStack_c0);
  return;
}



/* Entry: 10b8379ec; end: 10b837b4b;  */

void FUN_10b8379ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10b837a84;
  puStack_48 = &UNK_110848c48;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bef95a0(0,0x3fb999999999999a,puVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  return;
}



/* Entry: 10b837b4c; end: 10b837b57;  */

void FUN_10b837b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c2cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setMaskView__11264e550,0);
  return;
}



/* Entry: 10b837b58; end: 10b837bbf;  */

void FUN_10b837b58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = uVar2;
  func_0x00010c27ac00(uVar2);
  func_0x00010bf43bc0(uVar2,param_2,(uint)uVar1 ^ 1);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x30),param_2,&uStack_50);
  return;
}


