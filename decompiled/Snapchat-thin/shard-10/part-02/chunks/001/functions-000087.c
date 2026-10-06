/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b5c974; end: 107b5ca53; -[SCOperaChromeLayerViewController _didTapOnTappableSubtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_107b5c974(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_5);
  lVar5 = (long)_DAT_11276ad7c;
  uVar1 = *(ulong *)(param_3 + lVar5);
  func_0x00010bfe01e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074c20();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_3 + lVar5);
    func_0x00010bfe01e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_5,param_4,uVar4);
    _objc_release(uVar4);
    uVar3 = *(undefined8 *)(param_3 + lVar5);
    func_0x00010bfe01e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf7d620(param_1,param_2);
    _objc_release(uVar3);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_5);
  return uVar4;
}



/* Entry: 107b5ca54; end: 107b5cb33; -[SCOperaChromeLayerViewController _didTapOnHeaderAvatar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_107b5ca54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_5);
  lVar5 = (long)_DAT_11276ad7c;
  uVar1 = *(ulong *)(param_3 + lVar5);
  func_0x00010bfe01e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074c20();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_3 + lVar5);
    func_0x00010bfe01e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_5,param_4,uVar4);
    _objc_release(uVar4);
    uVar3 = *(undefined8 *)(param_3 + lVar5);
    func_0x00010bfe01e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf7cbe0(param_1,param_2);
    _objc_release(uVar3);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_5);
  return uVar4;
}



/* Entry: 107b5cb34; end: 107b5cb3b; -[SCOperaChromeLayerViewController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_107b5cb34(void)

{
  return 1;
}



/* Entry: 107b5cb3c; end: 107b5cd6f; -[SCOperaChromeLayerViewController image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5cb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = (long)_DAT_11276ad7c;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  func_0x00010bc850d8();
  uVar6 = 0;
  uVar4 = param_3;
  uVar5 = param_4;
  uVar7 = param_4;
  _UIGraphicsBeginImageContextWithOptions(param_3,param_4,0,0);
  uVar1 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010bfe01e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010bfe01e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bc852e4();
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010bfe01e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(uVar4,uVar5,uVar6,uVar7);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _UIGraphicsGetCurrentContext();
  func_0x00010c12fc60(uVar2,param_6,uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010bfe01e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bc852e4();
  uVar1 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010bfe01e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(uVar4,uVar5,uVar6,uVar7);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _UIGraphicsBeginImageContextWithOptions(uVar6,uVar7,0,0);
  _objc_release(param_5);
  uVar1 = uVar2;
  func_0x00010bf89920(param_1,param_2,param_3,param_4,uVar2);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b5cd70; end: 107b5cd77; -[SCOperaChromeLayerViewController movingViewsForFadeTransition] */

undefined8 FUN_107b5cd70(void)

{
  return 0;
}



/* Entry: 107b5cd78; end: 107b5cdbf; -[SCOperaChromeLayerViewController fadingViewsForFadeTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5cd78(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x00010c2a2b60(PTR__OBJC_CLASS___NSHashTable_1126b4538);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b5cdc0; end: 107b5cdff; -[SCOperaChromeLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5cdc0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276ad80,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ad7c,0);
  return;
}



/* Entry: 107b5ce00; end: 107b5cedf; -[SCOperaActionMenuV2HDButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107b5ce00(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f9fb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar5 = (long)_DAT_11276ad84;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276ad88) = 0xffffffffffffffff;
    func_0x00010c1a4ea0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b5cee0; end: 107b5ceef; -[SCOperaActionMenuV2HDButton hdState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b5cee0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ad88);
}



/* Entry: 107b5cef0; end: 107b5d007; -[SCOperaActionMenuV2HDButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5cef0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f9fb8;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  lVar1 = (long)_DAT_11276ad84;
  if (*(long *)(param_5 + lVar1) != 0) {
    lVar2 = *(long *)(param_5 + _DAT_11276ad88);
    func_0x00010bf20c00(param_5);
    _CGRectGetWidth();
    if (lVar2 == 1) {
      func_0x00010c2256c0(*(undefined8 *)(param_5 + lVar1));
      func_0x00010bf20c00(param_5);
      _CGRectGetHeight();
    }
    else {
      param_1 = param_1 * 0.7;
      func_0x00010c2256c0(param_1,*(undefined8 *)(param_5 + lVar1));
      func_0x00010bf20c00(param_5);
      _CGRectGetHeight();
      param_1 = param_1 * 0.7;
    }
    func_0x00010c1a7d00(*(undefined8 *)(param_5 + lVar1));
    func_0x00010bf20c00(param_5);
    dVar3 = param_1;
    _CGRectGetMidX();
    _CGRectGetMidY(param_1,param_2,param_3,param_4);
    func_0x00010c17a6a0(dVar3,param_1,*(undefined8 *)(param_5 + lVar1));
  }
  return;
}



/* Entry: 107b5d008; end: 107b5d077; -[SCOperaActionMenuV2HDButton setHDButtonState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5d008(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11276ad88;
  if (*(long *)(param_1 + lVar1) == param_3) {
    return;
  }
  func_0x00010c1a7f60(param_1,param_2,param_3 == 0);
  *(long *)(param_1 + lVar1) = param_3;
  func_0x00010bed45c0(param_1);
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 107b5d078; end: 107b5d0df; -[SCOperaActionMenuV2HDButton setVisible:duration:delay:] */

void FUN_107b5d078(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_107b5d0e0;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010bf03440(PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x30000,&puStack_40,0);
  return;
}



/* Entry: 107b5d0e0; end: 107b5d0fb;  */

void FUN_107b5d0e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b5d0fc; end: 107b5d133; -[SCOperaActionMenuV2HDButton _updateButtonState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5d0fc(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + _DAT_11276ad88) == 0) {
    uVar1 = 0;
  }
  else {
    if (*(long *)(param_1 + _DAT_11276ad88) != 1) {
      return;
    }
    uVar1 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + _DAT_11276ad84),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b5d134; end: 107b5d147; -[SCOperaActionMenuV2HDButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5d134(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ad84,0);
  return;
}



/* Entry: 107b5d148; end: 107b5d26b; -[SCChromeTitleSlug init] */

undefined1 * FUN_107b5d148(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f9fc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4010000000000000);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b5d26c; end: 107b5d2a7; -[SCChromeTitleSlug sizeThatFits:] */

double FUN_107b5d26c(double param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f9fc0;
  uStack_20 = param_2;
  _objc_msgSendSuper2(&uStack_20,PTR_s_sizeThatFits__11266cf90);
  return param_1 + 8.0;
}



/* Entry: 107b5d2a8; end: 107b5d2f3; -[SCChromeTitleSlug drawTextInRect:] */

void FUN_107b5d2a8(double param_1,double param_2,double param_3,undefined8 param_4)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f9fc0;
  uStack_20 = param_4;
  _objc_msgSendSuper2(param_1 + 4.0,param_2 + 0.0,param_3 + -8.0,&uStack_20,
                      PTR_s_drawTextInRect__11252d418);
  return;
}



/* Entry: 107b5d2f4; end: 107b5d353; -[SCChromeTitleSlug setTitleSlug:] */

void FUN_107b5d2f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010c1a7f60(param_1,param_2,1);
  }
  else {
    func_0x00010c1a7f60(param_1,param_2,0);
    func_0x00010c212f20(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b5d354; end: 107b5d363; -[SCChromeTitleSlug titleSlug] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b5d354(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ad8c);
}



/* Entry: 107b5d364; end: 107b5d377; -[SCChromeTitleSlug .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5d364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ad8c,0);
  return;
}



/* Entry: 107b5d378; end: 107b5d81f; -[SCOperaChromeHeaderView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107b5d378(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  puStack_88 = PTR_PTR_1126f9fc8;
  uStack_90 = param_1;
  _objc_msgSendSuper2(&uStack_90,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276ad94;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar6 = (long)_DAT_11276ad98;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar6));
    ppuVar3 = &PTR____CFConstantStringClassReference_110e1af98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1af98,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(ppuVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4000000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4020000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3e800000);
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar6 = (long)_DAT_11276ad9c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4000000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4018000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3e99999a);
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar6 = (long)_DAT_11276ada0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar6 = (long)_DAT_11276ada4;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar6));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4000000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4020000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3e800000);
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar6 = (long)_DAT_11276ada8;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar6));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4000000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4018000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3e99999a);
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar5 = (long)_DAT_11276adac;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010beb0320(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b5d820; end: 107b5d8db; -[SCOperaChromeHeaderView _setupSubtitleLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5d820(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0,0x4000000000000000);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x4018000000000000);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3e99999a);
  _objc_release(uVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11276ad94),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b5d8dc; end: 107b5d9c3; -[SCOperaChromeHeaderView teardown] */

/* WARNING: Possible PIC construction at 0x000107b5d96c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107b5d984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107b5d9a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b5d988) */
/* WARNING: Removing unreachable block (ram,0x000107b5d970) */
/* WARNING: Removing unreachable block (ram,0x000107b5d9a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5d8dc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c1a98c0(param_1,param_2,0,0,0);
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11276ad9c));
  lVar1 = (long)_DAT_11276ada4;
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11276adac));
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11276ada8));
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11276adb0));
  *(undefined1 *)(param_1 + _DAT_11276adb4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + lVar1),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b5d9c4; end: 107b5da0f; -[SCOperaChromeHeaderView closeLabelDisplayCount] */

undefined * FUN_107b5d9c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c067f80();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 107b5da10; end: 107b5da57; -[SCOperaChromeHeaderView setCloseLabelDisplayCount:] */

void FUN_107b5da10(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1add40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b5da58; end: 107b5ea67; -[SCOperaChromeHeaderView setupWithPageProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5da58(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined **ppuStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  puVar3 = puVar2;
  _objc_opt_isKindOfClass();
  puStack_e8 = puVar2;
  if (((ulong)puVar3 & 1) == 0) {
    puStack_e8 = (undefined *)0x0;
  }
  _objc_retain();
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf51e00();
  puStack_100 = puVar3;
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf51e00();
  puStack_d0 = puVar3;
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf51e00();
  puStack_d8 = puVar3;
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf51e00();
  puStack_108 = puVar4;
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf51e00();
  puStack_110 = puVar4;
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf51e00();
  uVar16 = *(undefined8 *)(param_2 + _DAT_11276adc0);
  *(undefined **)(param_2 + _DAT_11276adc0) = puVar4;
  _objc_release(uVar16);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf51e00();
  puStack_118 = puVar5;
  _objc_release(puVar4);
  puVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar19 = (long)_DAT_11276adc4;
  _objc_retain(puVar5);
  uVar16 = *(undefined8 *)(param_2 + lVar19);
  *(undefined **)(param_2 + lVar19) = puVar5;
  _objc_release(uVar16);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  puVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar5;
  }
  else {
    _objc_retain(puVar4);
    puStack_f8 = puVar4;
  }
  _objc_release(puVar4);
  puVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = puVar2;
  puStack_f0 = puVar3;
  if (puVar4 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar2;
  }
  else {
    _objc_retain(puVar4);
    puStack_e0 = puVar4;
  }
  _objc_release(puVar4);
  puVar2 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf1f3c0();
  *(char *)(param_2 + _DAT_11276adc8) = (char)puVar3;
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_2 + _DAT_11276adcc);
  *(undefined **)(param_2 + _DAT_11276adcc) = puVar2;
  _objc_release(uVar16);
  puVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar16 = 0x7fefffffffffffff;
  if (param_1 == 0.0) {
    param_1 = 1.79769313486232e+308;
  }
  *(double *)(param_2 + _DAT_11276add0) = param_1;
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    *(undefined8 *)(param_2 + _DAT_11276add4) = 0x403e000000000000;
  }
  else {
    puVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    fVar20 = SUB84(param_1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    param_1 = (double)fVar20;
    *(double *)(param_2 + _DAT_11276add4) = param_1;
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf51e00();
  puStack_c8 = puVar4;
  _objc_release(puVar3);
  func_0x00010bea7640(param_2);
  puVar3 = puStack_100;
  if (puStack_e8 != (undefined *)0x0) {
    puVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      param_7 = (undefined *)0x0;
    }
    else {
      puVar5 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c067ec0();
      param_7 = (undefined *)(long)(int)puVar6;
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    func_0x00010bea8800(param_2);
  }
  puVar5 = puStack_d0;
  func_0x00010c08fa60();
  puVar4 = PTR__NSFontAttributeName_1103457f0;
  lVar19 = (long)_DAT_11276ada8;
  if (puVar5 == (undefined *)0x0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar19));
    puVar5 = puStack_f0;
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar19));
    puVar5 = puStack_f0;
    uStack_a0 = *(undefined8 *)puVar4;
    puVar4 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      param_1 = 12.0;
      puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c0c7340();
      _objc_retainAutoreleasedReturnValue();
    }
    uStack_98 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puStack_88 = puStack_f8;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_90 = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar4);
    }
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e840();
    func_0x00010c16b720(*(undefined8 *)(param_2 + lVar19));
    func_0x00010c23d620(*(undefined8 *)(param_2 + lVar19));
    _objc_release(puVar4);
    _objc_release(puVar6);
  }
  puVar6 = puStack_e0;
  puVar4 = puStack_110;
  puVar7 = puVar4;
  if (puVar5 == (undefined *)0x0) {
    if (puStack_110 != (undefined *)0x0) {
      puVar5 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c067ec0();
      _objc_release(puVar5);
      if ((int)puVar6 != 0) {
        puVar11 = (undefined *)(long)(int)puVar6;
        func_0x000108f472f8();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
      }
      lVar19 = (long)_DAT_11276adac;
      uVar16 = *(undefined8 *)(param_2 + lVar19);
      puVar4 = puVar7;
      func_0x00010bf51e00(puVar7);
      func_0x00010c16b720(uVar16);
      _objc_release(puVar4);
      func_0x00010c23d620(*(undefined8 *)(param_2 + lVar19));
      goto LAB_107b5e444;
    }
    if (puStack_108 != (undefined *)0x0) {
      puVar4 = puVar2;
      puVar11 = puStack_e0;
      FUN_107b5ea68();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
      _objc_alloc();
      func_0x00010c04e840();
      if (((puStack_118 != (undefined *)0x0) &&
          (puVar7 = puStack_118, func_0x00010c11f4c0(), puVar7 != (undefined *)0x7fffffffffffffff))
         && (puVar7 = puVar7 + (long)puVar11, puVar8 = puVar5, func_0x00010c08fa60(),
            puVar7 <= puVar8)) {
        func_0x00010c11f4c0(puStack_118);
        param_7 = puVar11;
        func_0x00010bef6f20(puVar5);
      }
      puVar7 = puStack_120;
      puStack_110 = puVar4;
      if (puStack_120 != (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
        puStack_e0 = puVar6;
        _objc_opt_new(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
        func_0x00010c1a9f00();
        func_0x00010c23d0a0(puVar7);
        func_0x00010c23d0a0(puVar7);
        func_0x00010c1739e0(0,0xc006000000000000,param_1,uVar16,puVar4);
        puVar6 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
        func_0x00010bf0e420();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
        _objc_alloc_init();
        puStack_128 = puVar6;
        func_0x00010bf069e0();
        puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
        func_0x00010c04e820();
        func_0x00010bf069e0(puVar7);
        _objc_release(puVar6);
        func_0x00010bf069e0(puVar7);
        puVar6 = puVar7;
        func_0x00010c08fa60();
        if (puVar6 != (undefined *)0x0) {
          param_7 = puVar7;
          func_0x00010c08fa60();
          if ((undefined *)0x2 < param_7) {
            param_7 = (undefined *)0x3;
          }
          func_0x00010bef6f20(puVar7);
        }
        _objc_release(puVar5);
        _objc_release(puStack_128);
        _objc_release(puVar4);
        puVar5 = puVar7;
      }
      lVar19 = (long)_DAT_11276adac;
      uVar16 = *(undefined8 *)(param_2 + lVar19);
      puVar4 = puVar5;
      func_0x00010bf51e00(puVar5);
      func_0x00010c16b720(uVar16);
      _objc_release(puVar4);
      func_0x00010c23d620(*(undefined8 *)(param_2 + lVar19));
      _objc_release(puVar5);
      puVar7 = puStack_110;
      goto LAB_107b5e444;
    }
  }
  else {
    puVar4 = puVar2;
    puVar11 = puStack_e0;
    FUN_107b5ea68(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e840();
    lVar19 = (long)_DAT_11276adac;
    func_0x00010c16b720(*(undefined8 *)(param_2 + lVar19));
    func_0x00010c23d620(*(undefined8 *)(param_2 + lVar19));
    _objc_release(puVar5);
    _objc_release(puVar4);
LAB_107b5e444:
    _objc_release(puVar7);
  }
  lVar18 = (long)_DAT_11276adb0;
  lVar19 = *(long *)(param_2 + lVar18);
  if (puStack_d8 == (undefined *)0x0) {
    func_0x00010c1a7f60();
  }
  else {
    if (lVar19 == 0) {
      puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar16 = *(undefined8 *)(param_2 + lVar18);
      *(undefined **)(param_2 + lVar18) = puVar4;
      _objc_release(uVar16);
      func_0x00010c160fc0(*(undefined8 *)(param_2 + lVar18));
      uVar16 = *(undefined8 *)(param_2 + lVar18);
      func_0x00010c08c0e0(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe7a0(0,0x4000000000000000);
      _objc_release(uVar16);
      uVar16 = *(undefined8 *)(param_2 + lVar18);
      func_0x00010c08c0e0(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe840(0x4018000000000000);
      _objc_release(uVar16);
      uVar16 = *(undefined8 *)(param_2 + lVar18);
      func_0x00010c08c0e0(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe800(0x3e99999a);
      _objc_release(uVar16);
      func_0x00010befbb60(*(undefined8 *)(param_2 + _DAT_11276ad94));
      lVar19 = *(long *)(param_2 + lVar18);
    }
    func_0x00010c1a7f60(lVar19);
    uStack_c0 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puStack_e0;
    uStack_b8 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar6 = puStack_e0;
    puStack_b0 = puVar5;
    if (puStack_e0 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_a8 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
    uVar16 = *(undefined8 *)(param_2 + lVar18);
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e840();
    func_0x00010c16b720(uVar16);
    _objc_release(puVar4);
    func_0x00010c23d620(*(undefined8 *)(param_2 + lVar18));
    _objc_release(puVar7);
  }
  lVar19 = (long)_DAT_11276add8;
  if ((puStack_c8 != (undefined *)0x0) && (*(long *)(param_2 + lVar19) == 0)) {
    puVar4 = PTR_PTR_1126d6b50;
    _objc_opt_new();
    uVar16 = *(undefined8 *)(param_2 + lVar19);
    *(undefined **)(param_2 + lVar19) = puVar4;
    _objc_release(uVar16);
    func_0x00010befbb60(*(undefined8 *)(param_2 + _DAT_11276ad94));
  }
  func_0x00010c216520(*(undefined8 *)(param_2 + lVar19));
  func_0x00010c23d620(*(undefined8 *)(param_2 + lVar19));
  lVar18 = (long)_DAT_11276addc;
  lVar19 = *(long *)(param_2 + lVar18);
  if (puVar3 == (undefined *)0x0) {
    func_0x00010c1a7f60();
  }
  else {
    if (lVar19 == 0) {
      puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_opt_new();
      uVar16 = *(undefined8 *)(param_2 + lVar18);
      *(undefined **)(param_2 + lVar18) = puVar4;
      _objc_release(uVar16);
      if (*(char *)(param_2 + _DAT_11276ade0) == '\x01') {
        uVar16 = *(undefined8 *)(param_2 + lVar18);
        func_0x00010c08c0e0(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fe7a0(0,0x4000000000000000);
        _objc_release(uVar16);
        uVar16 = *(undefined8 *)(param_2 + lVar18);
        func_0x00010c08c0e0(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fe840(0x4020000000000000);
        _objc_release(uVar16);
        uVar16 = *(undefined8 *)(param_2 + lVar18);
        func_0x00010c08c0e0(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fe800(0x3e800000);
        _objc_release(uVar16);
      }
      func_0x00010befbb60(param_2);
      lVar19 = *(long *)(param_2 + lVar18);
    }
    func_0x00010c1a7f60(lVar19);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_2 + lVar18));
    _objc_release(puVar4);
  }
  *(undefined1 *)(param_2 + _DAT_11276ade4) = 0;
  puVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf1f3c0();
  _objc_release(puVar4);
  puVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf1f3c0();
  _objc_release();
  if ((int)puVar6 == 0) {
    if ((int)puVar5 != 0) {
      *(undefined1 *)(param_2 + _DAT_11276ade8) = 0;
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = (long)_DAT_11276ad98;
      func_0x00010c1a9f00(*(undefined8 *)(param_2 + lVar19));
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar19));
      ppuVar17 = (undefined **)(long)_DAT_11276ada0;
      func_0x00010c1a7f60(*(undefined8 *)(param_2 + (long)ppuVar17));
      func_0x00010c236980(param_2);
      goto LAB_107b5e944;
    }
    lVar19 = (long)_DAT_11276ad98;
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar19));
  }
  else {
    *(undefined1 *)(param_2 + _DAT_11276ade8) = 1;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bf138e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = (long)_DAT_11276ad98;
    func_0x00010c1a9f00(*(undefined8 *)(param_2 + lVar19));
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar19));
    puVar3 = puStack_100;
  }
  ppuVar17 = (undefined **)(long)_DAT_11276ada0;
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + (long)ppuVar17));
LAB_107b5e944:
  lVar18 = (long)_DAT_11276ad9c;
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar18));
  func_0x00010c216160(*(undefined8 *)(param_2 + lVar19));
  func_0x00010c16e440(*(undefined8 *)(param_2 + (long)ppuVar17));
  uVar9 = *(ulong *)(param_2 + lVar18);
  func_0x00010c074c20();
  puVar4 = puStack_e0;
  if ((uVar9 & 1) == 0) {
    ppuVar17 = &PTR____CFConstantStringClassReference_110eafd58;
    puVar11 = (undefined *)0x0;
    func_0x00010bcbeaa8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea2ae0(param_2);
    _objc_release(ppuVar17);
  }
  func_0x00010c1cbe20(param_2);
  _objc_release(puStack_c8);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puStack_f8);
  _objc_release(puStack_118);
  _objc_release(puStack_120);
  _objc_release(puStack_108);
  _objc_release(puStack_f0);
  _objc_release(puStack_d8);
  _objc_release(puStack_d0);
  _objc_release(puVar3);
  _objc_release(puStack_e8);
  puVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puStack_160 = puVar4;
  pcStack_138 = FUN_107b5ea68;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_158 = param_2;
  ppuStack_150 = ppuVar17;
  puStack_148 = param_4;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(puVar11);
  uStack_188 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  uStack_180 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  ppuVar17 = &puStack_178;
  puVar14 = &uStack_188;
  uVar16 = 2;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_178 = puVar3;
  puStack_170 = puVar11;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar17);
  _objc_retain(puVar14);
  _objc_retain(uVar16);
  puVar10 = puVar14;
  if (puVar14 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar15 = 2;
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (puVar14 == (undefined8 *)0x0) {
    _objc_release(puVar10);
  }
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar5 = puVar11;
  func_0x00010c04e840();
  lVar18 = (long)_DAT_11276ad9c;
  puVar4 = puVar3;
  func_0x00010c16b720(*(undefined8 *)(puVar2 + lVar18));
  func_0x00010c23d620(*(undefined8 *)(puVar2 + lVar18));
  _objc_release(puVar3);
  _objc_release(puVar11);
  _objc_release(uVar16);
  _objc_release(puVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  _objc_retain(uVar15);
  puVar2 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar3 = puVar11;
  func_0x00010c04e840();
  iVar13 = (int)puVar3;
  puVar3 = puVar2;
  if (param_7 != (undefined *)0x0) {
    func_0x000108f472f8(puVar2,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  lVar18 = (long)_DAT_11276ada4;
  puVar2 = puVar3;
  func_0x00010c16b720(*(undefined8 *)((long)ppuVar17 + lVar18));
  iVar12 = (int)puVar2;
  func_0x00010c23d620(*(undefined8 *)((long)ppuVar17 + lVar18));
  _objc_release(puVar3);
  _objc_release(puVar11);
  _objc_release(uVar15);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  puVar4[_DAT_11276ade0] = (char)iVar12;
  uVar16 = *(undefined8 *)(puVar4 + _DAT_11276ad98);
  func_0x00010c08c0e0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  if (iVar12 == 0) {
    func_0x00010c1fe800(0,uVar16);
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)(puVar4 + _DAT_11276ad9c);
    func_0x00010c08c0e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0);
    _objc_release(uVar16);
    uVar22 = 0;
    uVar21 = 0;
    uVar1 = 0;
  }
  else {
    uVar22 = 0x3e800000;
    func_0x00010c1fe800(0x3e800000,uVar16);
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)(puVar4 + _DAT_11276ad9c);
    func_0x00010c08c0e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = 0x3e99999a;
    func_0x00010c1fe800(0x3e99999a);
    _objc_release(uVar16);
    uVar1 = 0x3f000000;
    if (iVar13 == 0) {
      uVar1 = 0x3e23d70a;
    }
  }
  uVar16 = *(undefined8 *)(puVar4 + _DAT_11276adb8);
  func_0x00010c08c0e0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(uVar1);
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(puVar4 + _DAT_11276addc);
  func_0x00010c08c0e0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(uVar22);
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(puVar4 + _DAT_11276ada4);
  func_0x00010c08c0e0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(uVar22);
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(puVar4 + _DAT_11276ada8);
  func_0x00010c08c0e0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(uVar21);
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(puVar4 + _DAT_11276adac);
  func_0x00010c08c0e0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(uVar21);
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(puVar4 + _DAT_11276adb0);
  func_0x00010c08c0e0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(uVar21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar16);
  return;
}



/* Entry: 107b5ea68; end: 107b5eb5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5ea68(undefined *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long in_x5;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar2 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  uStack_50 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  ppuVar5 = &puStack_48;
  puVar10 = &uStack_58;
  uVar12 = 2;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_48 = puVar2;
  uStack_40 = param_2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar5);
  _objc_retain(puVar10);
  _objc_retain(uVar12);
  puVar4 = puVar10;
  if (puVar10 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar13 = 2;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (puVar10 == (undefined8 *)0x0) {
    _objc_release(puVar4);
  }
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar11 = puVar2;
  func_0x00010c04e840();
  lVar15 = (long)_DAT_11276ad9c;
  puVar7 = puVar3;
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar15));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar12);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  _objc_retain(puVar11);
  _objc_retain(uVar13);
  puVar2 = puVar11;
  if (puVar11 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (puVar11 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar6 = puVar3;
  func_0x00010c04e840();
  iVar9 = (int)puVar6;
  puVar6 = puVar2;
  if (in_x5 != 0) {
    func_0x000108f472f8(puVar2,in_x5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  lVar15 = (long)_DAT_11276ada4;
  puVar2 = puVar6;
  func_0x00010c16b720(*(undefined8 *)((long)ppuVar5 + lVar15));
  iVar8 = (int)puVar2;
  func_0x00010c23d620(*(undefined8 *)((long)ppuVar5 + lVar15));
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(uVar13);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    puVar7[_DAT_11276ade0] = (char)iVar8;
    uVar12 = *(undefined8 *)(puVar7 + _DAT_11276ad98);
    func_0x00010c08c0e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    if (iVar8 == 0) {
      func_0x00010c1fe800(0,uVar12);
      _objc_release(uVar12);
      uVar12 = *(undefined8 *)(puVar7 + _DAT_11276ad9c);
      func_0x00010c08c0e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe800(0);
      _objc_release(uVar12);
      uVar17 = 0;
      uVar16 = 0;
      uVar1 = 0;
    }
    else {
      uVar17 = 0x3e800000;
      func_0x00010c1fe800(0x3e800000,uVar12);
      _objc_release(uVar12);
      uVar12 = *(undefined8 *)(puVar7 + _DAT_11276ad9c);
      func_0x00010c08c0e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = 0x3e99999a;
      func_0x00010c1fe800(0x3e99999a);
      _objc_release(uVar12);
      uVar1 = 0x3f000000;
      if (iVar9 == 0) {
        uVar1 = 0x3e23d70a;
      }
    }
    uVar12 = *(undefined8 *)(puVar7 + _DAT_11276adb8);
    func_0x00010c08c0e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(uVar1);
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(puVar7 + _DAT_11276addc);
    func_0x00010c08c0e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(uVar17);
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(puVar7 + _DAT_11276ada4);
    func_0x00010c08c0e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(uVar17);
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(puVar7 + _DAT_11276ada8);
    func_0x00010c08c0e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(uVar16);
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(puVar7 + _DAT_11276adac);
    func_0x00010c08c0e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(uVar16);
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(puVar7 + _DAT_11276adb0);
    func_0x00010c08c0e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar12);
    return;
  }
  return;
}



/* Entry: 107b5eb5c; end: 107b5ecbf; -[SCOperaChromeHeaderView _setCloseText:font:color:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5eb5c(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,long param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_4;
  if (param_4 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar9 = 2;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar8 = puVar3;
  func_0x00010c04e840();
  lVar11 = (long)_DAT_11276ad9c;
  puVar5 = puVar2;
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar11));
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar5);
    _objc_retain(puVar8);
    _objc_retain(uVar9);
    puVar2 = puVar8;
    if (puVar8 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680(0x402c000000000000);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x00010c04e840();
    iVar7 = (int)puVar4;
    puVar4 = puVar2;
    if (param_6 != 0) {
      func_0x000108f472f8(puVar2,param_6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    lVar11 = (long)_DAT_11276ada4;
    puVar2 = puVar4;
    func_0x00010c16b720(*(undefined8 *)(param_3 + lVar11));
    iVar6 = (int)puVar2;
    func_0x00010c23d620(*(undefined8 *)(param_3 + lVar11));
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
      puVar5[_DAT_11276ade0] = (char)iVar6;
      uVar9 = *(undefined8 *)(puVar5 + _DAT_11276ad98);
      func_0x00010c08c0e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      if (iVar6 == 0) {
        func_0x00010c1fe800(0,uVar9);
        _objc_release(uVar9);
        uVar9 = *(undefined8 *)(puVar5 + _DAT_11276ad9c);
        func_0x00010c08c0e0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fe800(0);
        _objc_release(uVar9);
        uVar13 = 0;
        uVar12 = 0;
        uVar1 = 0;
      }
      else {
        uVar13 = 0x3e800000;
        func_0x00010c1fe800(0x3e800000,uVar9);
        _objc_release(uVar9);
        uVar9 = *(undefined8 *)(puVar5 + _DAT_11276ad9c);
        func_0x00010c08c0e0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = 0x3e99999a;
        func_0x00010c1fe800(0x3e99999a);
        _objc_release(uVar9);
        uVar1 = 0x3f000000;
        if (iVar7 == 0) {
          uVar1 = 0x3e23d70a;
        }
      }
      uVar9 = *(undefined8 *)(puVar5 + _DAT_11276adb8);
      func_0x00010c08c0e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe800(uVar1);
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(puVar5 + _DAT_11276addc);
      func_0x00010c08c0e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe800(uVar13);
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(puVar5 + _DAT_11276ada4);
      func_0x00010c08c0e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe800(uVar13);
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(puVar5 + _DAT_11276ada8);
      func_0x00010c08c0e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe800(uVar12);
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(puVar5 + _DAT_11276adac);
      func_0x00010c08c0e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe800(uVar12);
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(puVar5 + _DAT_11276adb0);
      func_0x00010c08c0e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe800(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar9);
      return;
    }
    return;
  }
  return;
}



/* Entry: 107b5ecc0; end: 107b5ee4f; -[SCOperaChromeHeaderView _setTitleText:font:color:officialBadgeType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5ecc0(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,long param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_4;
  if (param_4 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x00010c04e840();
  iVar7 = (int)puVar4;
  puVar4 = puVar2;
  if (param_6 != 0) {
    func_0x000108f472f8(puVar2,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  lVar9 = (long)_DAT_11276ada4;
  puVar2 = puVar4;
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar9));
  iVar6 = (int)puVar2;
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar9));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    *(char *)(param_3 + _DAT_11276ade0) = (char)iVar6;
    uVar5 = *(undefined8 *)(param_3 + _DAT_11276ad98);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    if (iVar6 == 0) {
      func_0x00010c1fe800(0,uVar5);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_3 + _DAT_11276ad9c);
      func_0x00010c08c0e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe800(0);
      _objc_release(uVar5);
      uVar11 = 0;
      uVar10 = 0;
      uVar1 = 0;
    }
    else {
      uVar11 = 0x3e800000;
      func_0x00010c1fe800(0x3e800000,uVar5);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_3 + _DAT_11276ad9c);
      func_0x00010c08c0e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = 0x3e99999a;
      func_0x00010c1fe800(0x3e99999a);
      _objc_release(uVar5);
      uVar1 = 0x3f000000;
      if (iVar7 == 0) {
        uVar1 = 0x3e23d70a;
      }
    }
    uVar5 = *(undefined8 *)(param_3 + _DAT_11276adb8);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(uVar1);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_3 + _DAT_11276addc);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(uVar11);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_3 + _DAT_11276ada4);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(uVar11);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_3 + _DAT_11276ada8);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(uVar10);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_3 + _DAT_11276adac);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(uVar10);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_3 + _DAT_11276adb0);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 107b5ee50; end: 107b5f05b; -[SCOperaChromeHeaderView _setShadowVisible:storyFullyViewed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5ee50(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(char *)(param_1 + _DAT_11276ade0) = (char)param_3;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276ad98);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c1fe800(0,uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276ad9c);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0);
    _objc_release(uVar2);
    uVar4 = 0;
    uVar3 = 0;
    uVar1 = 0;
  }
  else {
    uVar4 = 0x3e800000;
    func_0x00010c1fe800(0x3e800000,uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276ad9c);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x3e99999a;
    func_0x00010c1fe800(0x3e99999a);
    _objc_release(uVar2);
    uVar1 = 0x3f000000;
    if (param_4 == 0) {
      uVar1 = 0x3e23d70a;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276adb8);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276addc);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(uVar4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276ada4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(uVar4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276ada8);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276adac);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276adb0);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107b5f05c; end: 107b5f1a3; -[SCOperaChromeHeaderView _setupLayoutManagerIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5f05c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = (long)_DAT_11276adec;
  if (*(long *)(param_1 + lVar5) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSLayoutManager_1126b51e8;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSTextContainer_1126b51f0;
  _objc_alloc();
  func_0x00010c0469e0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  lVar6 = (long)_DAT_11276adf0;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSTextStorage_1126b51e0;
  _objc_alloc();
  lVar7 = (long)_DAT_11276adac;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf0e540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4f40();
  lVar4 = (long)_DAT_11276adf4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010befbe20(*(undefined8 *)(param_1 + lVar5));
  func_0x00010bef96a0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1bdbc0(0,*(undefined8 *)(param_1 + lVar6));
  func_0x00010c099180(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar6));
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c0def20(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1c3c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar6),PTR_s_setMaximumNumberOfLines__11264e928,uVar2);
  return;
}



/* Entry: 107b5f1a4; end: 107b5f2a3; -[SCOperaChromeHeaderView setTitleViewFadeAnimation:shortAnimationDuration:longAnimationDuration:delay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5f1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,uint param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  double dStack_68;
  
  *(char *)(param_4 + _DAT_11276adb4) = (char)param_6;
  uVar2 = 0;
  if (param_6 == 0) {
    uVar2 = param_3;
  }
  func_0x00010c1cbe20();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107b5f2a4;
  puStack_78 = &UNK_110848c48;
  lStack_70 = param_4;
  dStack_68 = (double)(param_6 ^ 1);
  func_0x00010bf03440(param_1,uVar2,PTR__OBJC_CLASS___UIView_1126aec20,param_5,0x30000,&puStack_90,0
                     );
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_107b5f33c;
  puStack_a0 = &UNK_110842e18;
  lStack_98 = param_4;
  func_0x00010bf03440(param_2,0,PTR__OBJC_CLASS___UIView_1126aec20,param_5,0x10000,&puStack_b8,0);
  return;
}



/* Entry: 107b5f2a4; end: 107b5f33b;  */

/* WARNING: Possible PIC construction at 0x000107b5f2cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107b5f2f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107b5f31c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b5f2f8) */
/* WARNING: Removing unreachable block (ram,0x000107b5f2d0) */
/* WARNING: Removing unreachable block (ram,0x000107b5f320) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5f2a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276ada4),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b5f33c; end: 107b5f343;  */

void FUN_107b5f33c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 107b5f344; end: 107b5f353; -[SCOperaChromeHeaderView setMaxXForView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5f344(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276add0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107b5f354; end: 107b5f403; -[SCOperaChromeHeaderView didTapClose:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5f354(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  lVar3 = (long)_DAT_11276ad94;
  func_0x00010bf51200(*(undefined8 *)(param_2 + lVar3),param_3,param_2);
  iVar1 = (int)*(undefined8 *)(param_2 + lVar3);
  dVar4 = param_1;
  func_0x00010bf20c00();
  _CGRectContainsPoint();
  if (iVar1 != 0) {
    uVar2 = *(ulong *)(param_2 + _DAT_11276ad98);
    func_0x00010c074c20();
    if ((((uVar2 & 1) == 0) &&
        (func_0x00010bf34840(*(undefined8 *)(param_2 + _DAT_11276ada0)), param_1 < dVar4)) &&
       (lVar3 = param_2, func_0x00010c236980(), (int)lVar3 != 0)) {
      lVar3 = param_2;
      func_0x00010bf3dc20(param_2);
      func_0x00010c17d560(param_2,param_3,lVar3 + 1);
    }
  }
  return;
}



/* Entry: 107b5f404; end: 107b5f4fb; -[SCOperaChromeHeaderView didTapTappableSubtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5f404(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_3 + _DAT_11276adc0) != 0) {
    lVar5 = (long)_DAT_11276adac;
    if (*(long *)(param_3 + lVar5) != 0) {
      func_0x00010bf51200(*(long *)(param_3 + lVar5),param_4,param_3);
      iVar1 = (int)*(undefined8 *)(param_3 + lVar5);
      func_0x00010c102b20();
      if (iVar1 != 0) {
        func_0x00010bead740(param_3);
        uVar2 = *(ulong *)(param_3 + _DAT_11276adec);
        func_0x00010bf359a0(param_1,param_2);
        uVar3 = *(ulong *)(param_3 + _DAT_11276adf4);
        func_0x00010c08fa60();
        if (uVar2 < uVar3) {
          uVar4 = *(undefined8 *)(param_3 + lVar5);
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11f420();
          _objc_release(uVar4);
        }
      }
    }
  }
  return;
}



/* Entry: 107b5f4fc; end: 107b5f56f; -[SCOperaChromeHeaderView didTapIconView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b5f4fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276adb8;
  uVar1 = *(ulong *)(param_3 + lVar3);
  if ((uVar1 != 0) && (func_0x00010c074c20(), (uVar1 & 1) == 0)) {
    func_0x00010bf51200(param_1,param_2,*(undefined8 *)(param_3 + lVar3));
    uVar2 = *(undefined8 *)(param_3 + lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c102b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_pointInside_withEvent__11261e4e8,0);
    return uVar2;
  }
  return 0;
}



/* Entry: 107b5f570; end: 107b5f5f3; -[SCOperaChromeHeaderView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5f570(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276ad94;
  uVar1 = *(undefined8 *)(param_3 + lVar2);
  _objc_retain(param_5);
  func_0x00010bf51200(param_1,param_2,uVar1,param_4,param_3);
  uVar1 = *(undefined8 *)(param_3 + lVar2);
  func_0x00010bfe3a40(uVar1,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b5f5f4; end: 107b5f757; -[SCOperaChromeHeaderView setImageIcon:showAddControl:showIconWhenCloseViewIsVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5f5f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11276ad98);
  func_0x00010c074c20();
  if (((param_5 & 1) != 0) || (iVar1 != 0)) {
    lVar2 = param_1;
    func_0x00010bfe90c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bfe90e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bfe90e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(lVar2);
    if ((int)param_4 != 0) {
      lVar2 = param_1;
      func_0x00010bfe90c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(0x401c000000000000,0x4014000000000000,0x4034000000000000,
                          0x4034000000000000);
      _objc_release(lVar2);
      lVar2 = param_1;
      func_0x00010bfe90c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    func_0x00010c1a98c0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11276adfc),0,param_4);
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b5f758; end: 107b5fa13; -[SCOperaChromeHeaderView setIconView:showBackground:showAddControl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5f758(long param_1,undefined8 param_2,undefined *param_3,int param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11276adb8;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar6));
  lVar7 = (long)_DAT_11276adbc;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar7));
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = param_3;
  _objc_release(uVar1);
  if (*(long *)(param_1 + lVar6) != 0) {
    if ((param_5 & 1) == 0) {
      if (param_4 != 0) {
        puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_alloc();
        puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                            &PTR____CFConstantStringClassReference_110eafd98);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01bf60(puVar3,param_2,puVar4);
        uVar1 = *(undefined8 *)(param_1 + lVar7);
        *(undefined **)(param_1 + lVar7) = puVar3;
        _objc_release(uVar1);
        _objc_release(puVar4);
      }
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                          &PTR____CFConstantStringClassReference_110eafd78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60(puVar3,param_2,puVar4);
      uVar1 = *(undefined8 *)(param_1 + lVar7);
      *(undefined **)(param_1 + lVar7) = puVar3;
      _objc_release(uVar1);
      _objc_release(puVar4);
      if (*(long *)(param_1 + lVar6) != 0) {
        puVar3 = PTR__OBJC_CLASS___CALayer_1126b1750;
        func_0x00010c08c0e0(PTR__OBJC_CLASS___CALayer_1126b1750);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                            &PTR____CFConstantStringClassReference_110eafdb8);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar4;
        _objc_retainAutorelease();
        func_0x00010bdc1020();
        func_0x00010c182c80(puVar3,param_2,puVar2);
        _objc_release(puVar4);
        puVar4 = param_3;
        func_0x00010c08c0e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c2c00();
        _objc_release(puVar4);
        puVar4 = param_3;
        func_0x00010c08c0e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c2d20();
        _objc_release(puVar4);
        goto LAB_107b5f958;
      }
    }
  }
  puVar3 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
LAB_107b5f958:
  _objc_release(puVar3);
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 != 0) {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4000000000000000);
    _objc_release(lVar5);
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4020000000000000);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3e23d70a);
    _objc_release(uVar1);
  }
  lVar5 = (long)_DAT_11276ad94;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5),param_2,*(undefined8 *)(param_1 + lVar7));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5),param_2,*(undefined8 *)(param_1 + lVar6));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b5fa14; end: 107b5fac3; -[SCOperaChromeHeaderView imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5fa14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276adf8;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(0x4000000000000000,0x4000000000000000,0x403e000000000000,0x403e000000000000)
    ;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar4),param_2,1);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x402e000000000000);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107b5fac4; end: 107b5fb93; -[SCOperaChromeHeaderView imageViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5fac4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276adfc;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4031000000000000);
    _objc_release(uVar2);
    func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar4),param_2,1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107b5fb94; end: 107b60353; -[SCOperaChromeHeaderView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5fb94(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uStack_d0;
  long lStack_b0;
  undefined *puStack_a8;
  
  puStack_a8 = PTR_PTR_1126f9fc8;
  lStack_b0 = param_5;
  _objc_msgSendSuper2(&lStack_b0,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar8 = (long)_DAT_11276ad94;
  dVar13 = 60.0;
  dVar19 = param_2;
  func_0x00010c1a7d00(*(undefined8 *)(param_5 + lVar8));
  func_0x00010bf20c00(param_5);
  func_0x00010c1d64a0(*(undefined8 *)(param_5 + lVar8));
  func_0x00010be48f80(param_5);
  lVar7 = (long)_DAT_11276addc;
  uVar1 = *(undefined8 *)(param_5 + lVar7);
  dVar18 = dVar13;
  func_0x00010bfe6ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar1);
  lVar6 = (long)_DAT_11276adb8;
  if (*(long *)(param_5 + lVar6) == 0) {
    dVar14 = 13.0;
    func_0x00010c19f0e0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),
                        *(undefined8 *)(param_5 + _DAT_11276adbc));
    uStack_d0 = 0x4022000000000000;
    dVar17 = dVar14;
  }
  else {
    uStack_d0 = 0x4024000000000000;
    dVar15 = 34.0;
    dVar16 = 34.0;
    func_0x00010c19f0e0(dVar13 + 10.0,0x4024000000000000,0x4041000000000000,0x4041000000000000);
    lVar4 = (long)_DAT_11276adbc;
    dVar14 = 54.0;
    dVar17 = 54.0;
    func_0x00010c202c80(0x404b000000000000,0x404b000000000000,*(undefined8 *)(param_5 + lVar4));
    func_0x00010bf345e0(*(undefined8 *)(param_5 + lVar6));
    func_0x00010bf345e0(*(undefined8 *)(param_5 + lVar6));
    dVar14 = dVar14 + 0.0;
    func_0x00010c17a6a0(dVar17,dVar14,*(undefined8 *)(param_5 + lVar4));
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
    uVar2 = *(undefined8 *)(param_5 + lVar6);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar17 + -2.0,dVar14 + -4.0,dVar15 + 6.0,dVar16 + 4.0);
    _objc_release(uVar1);
    _objc_release(uVar2);
    func_0x00010c19f0e0(0x4000000000000000,0x4000000000000000,0x403e000000000000,0x403e000000000000,
                        *(undefined8 *)(param_5 + _DAT_11276adf8));
    dVar14 = 10.0;
    dVar17 = 54.0;
  }
  dVar13 = dVar13 + dVar17;
  uVar3 = *(ulong *)(param_5 + lVar7);
  if ((uVar3 == 0) || (func_0x00010c074c20(), (uVar3 & 1) != 0)) {
    iVar12 = _DAT_11276ada4;
    lVar4 = (long)_DAT_11276ada4;
    func_0x00010c1ba100(dVar13,*(undefined8 *)(param_5 + lVar4));
    func_0x00010c08e360(*(undefined8 *)(param_5 + lVar4));
    iVar10 = _DAT_11276ada8;
    func_0x00010c1ba100(*(undefined8 *)(param_5 + _DAT_11276ada8));
    func_0x00010c08e360(*(undefined8 *)(param_5 + lVar4));
    iVar9 = _DAT_11276adac;
    func_0x00010c1ba100(*(undefined8 *)(param_5 + _DAT_11276adac));
    func_0x00010c08e360(*(undefined8 *)(param_5 + lVar4));
  }
  else {
    dVar17 = (dVar13 - dVar14) + 8.5;
    func_0x00010c19f0e0(dVar17,0x4020000000000000,dVar18,dVar19,*(undefined8 *)(param_5 + lVar7));
    func_0x00010c140820(*(undefined8 *)(param_5 + lVar7));
    iVar12 = _DAT_11276ada4;
    func_0x00010c1ba100(dVar17 + 3.0,*(undefined8 *)(param_5 + _DAT_11276ada4));
    iVar10 = _DAT_11276ada8;
    func_0x00010c1ba100(dVar13,*(undefined8 *)(param_5 + _DAT_11276ada8));
    iVar9 = _DAT_11276adac;
    func_0x00010c1ba100(dVar13,*(undefined8 *)(param_5 + _DAT_11276adac));
  }
  lVar11 = (long)_DAT_11276adb0;
  func_0x00010c1ba100(*(undefined8 *)(param_5 + lVar11));
  lVar4 = (long)_DAT_11276add8;
  if (*(long *)(param_5 + lVar4) != 0) {
    dVar19 = param_3;
    dVar14 = param_4;
    func_0x00010c23d5a0(param_3,param_4);
    dVar17 = dVar19;
    func_0x00010c2a5040(*(undefined8 *)(param_5 + iVar12));
    func_0x00010c1ba100(dVar13 + dVar17,*(undefined8 *)(param_5 + lVar4));
    func_0x00010c1a7d00(dVar14,*(undefined8 *)(param_5 + lVar4));
    func_0x00010c2256c0(dVar19,*(undefined8 *)(param_5 + lVar4));
  }
  lVar5 = (long)iVar12;
  param_1 = param_1 + dVar13;
  dVar17 = 0.0;
  param_2 = param_2 + 0.0;
  dVar14 = param_3 - (dVar13 + *(double *)(param_5 + _DAT_11276add4));
  dVar19 = param_3;
  dVar13 = param_4;
  func_0x00010c23d5a0(param_3,param_4,*(undefined8 *)(param_5 + lVar5));
  func_0x00010c1a7d00(dVar13,*(undefined8 *)(param_5 + lVar5));
  func_0x00010c2172c0(uStack_d0,*(undefined8 *)(param_5 + lVar5));
  if (*(long *)(param_5 + lVar4) != 0) {
    func_0x00010bf348c0(*(undefined8 *)(param_5 + lVar5));
    func_0x00010c17a860(*(undefined8 *)(param_5 + lVar4));
  }
  dVar13 = param_1;
  _CGRectGetWidth(param_1,param_2,dVar14,param_4);
  iVar12 = (int)*(undefined8 *)(param_5 + lVar7);
  func_0x00010c074c20();
  dVar15 = 0.0;
  if (iVar12 == 0) {
    dVar15 = dVar18 + 3.0;
  }
  dVar18 = (dVar13 + -37.0) - dVar15;
  uVar3 = *(ulong *)(param_5 + lVar4);
  func_0x00010c074c20();
  if (((uVar3 & 1) == 0) && (*(long *)(param_5 + lVar4) != 0)) {
    func_0x00010c2a5040();
    dVar17 = dVar15 + 0.0;
  }
  dVar18 = dVar18 - dVar17;
  *(double *)(param_5 + _DAT_11276ae00) = dVar18;
  dVar13 = dVar18;
  if (dVar19 <= dVar18) {
    dVar13 = dVar19;
  }
  lVar4 = (long)_DAT_11276add0;
  dVar19 = *(double *)(param_5 + lVar4);
  func_0x00010c08e360(*(undefined8 *)(param_5 + lVar5));
  dVar19 = dVar19 - dVar18;
  if (dVar19 <= dVar13) {
    dVar13 = dVar19;
  }
  func_0x00010c2256c0(dVar13,*(undefined8 *)(param_5 + lVar5));
  dVar18 = param_3;
  dVar17 = param_4;
  func_0x00010c23d5a0(*(undefined8 *)(param_5 + iVar10));
  func_0x00010c1a7d00(dVar17,*(undefined8 *)(param_5 + iVar10));
  dVar19 = param_1;
  _CGRectGetWidth(param_1,param_2,dVar14,param_4);
  dVar13 = dVar19;
  if (dVar18 <= dVar19) {
    dVar13 = dVar18;
  }
  dVar18 = *(double *)(param_5 + lVar4);
  func_0x00010c08e360(*(undefined8 *)(param_5 + iVar10));
  dVar18 = dVar18 - dVar19;
  if (dVar18 <= dVar13) {
    dVar13 = dVar18;
  }
  func_0x00010c2256c0(dVar13,*(undefined8 *)(param_5 + iVar10));
  dVar18 = param_3;
  dVar19 = param_4;
  func_0x00010c23d5a0(param_3,param_4,*(undefined8 *)(param_5 + iVar9));
  func_0x00010c1a7d00(dVar19,*(undefined8 *)(param_5 + iVar9));
  dVar19 = param_1;
  _CGRectGetWidth(param_1,param_2,dVar14,param_4);
  dVar13 = dVar19;
  if (dVar18 <= dVar19) {
    dVar13 = dVar18;
  }
  dVar18 = *(double *)(param_5 + lVar4);
  func_0x00010c08e360(*(undefined8 *)(param_5 + iVar9));
  dVar18 = dVar18 - dVar19;
  if (dVar18 <= dVar13) {
    dVar13 = dVar18;
  }
  func_0x00010c2256c0(dVar13,*(undefined8 *)(param_5 + iVar9));
  dVar18 = param_4;
  func_0x00010c23d5a0(param_3,param_4,*(undefined8 *)(param_5 + lVar11));
  func_0x00010c1a7d00(dVar18,*(undefined8 *)(param_5 + lVar11));
  dVar18 = param_1;
  _CGRectGetWidth(param_1,param_2,dVar14,param_4);
  dVar19 = dVar18;
  if (param_3 <= dVar18) {
    dVar19 = param_3;
  }
  dVar13 = *(double *)(param_5 + lVar4);
  func_0x00010c08e360(*(undefined8 *)(param_5 + lVar11));
  dVar13 = dVar13 - dVar18;
  if (dVar13 <= dVar19) {
    dVar19 = dVar13;
  }
  func_0x00010c2256c0(dVar19,*(undefined8 *)(param_5 + lVar11));
  _CGRectGetWidth(param_1,param_2,dVar14,param_4);
  func_0x00010c2256c0(*(undefined8 *)(param_5 + lVar8));
  lVar8 = (long)_DAT_11276ad98;
  if (*(char *)(param_5 + _DAT_11276adb4) == '\x01') {
    func_0x00010c1677c0(0,*(undefined8 *)(param_5 + lVar8));
    func_0x00010c1677c0(0,*(undefined8 *)(param_5 + _DAT_11276ad9c));
    func_0x00010c1677c0(0,*(undefined8 *)(param_5 + _DAT_11276ada0));
    func_0x00010c1677c0(0,*(undefined8 *)(param_5 + iVar10));
    func_0x00010c1677c0(0,*(undefined8 *)(param_5 + lVar7));
    func_0x00010c1677c0(0,*(undefined8 *)(param_5 + lVar11));
    if (((*(byte *)(param_5 + _DAT_11276ae04) & 1) == 0) &&
       (*(char *)(param_5 + _DAT_11276adc8) != '\x01')) {
      func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_5 + iVar9));
      func_0x00010c2172c0(0x4010000000000000,*(undefined8 *)(param_5 + iVar9));
      dVar18 = 13.0;
      func_0x00010c1ba100(*(undefined8 *)(param_5 + iVar9));
    }
    else {
      dVar18 = 0.0;
      func_0x00010c1677c0(*(undefined8 *)(param_5 + iVar9));
    }
  }
  else {
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_5 + lVar8));
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_5 + _DAT_11276ad9c));
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_5 + _DAT_11276ada0));
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_5 + iVar10));
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_5 + lVar7));
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_5 + iVar9));
    dVar18 = 1.0;
    func_0x00010c1677c0(*(undefined8 *)(param_5 + lVar11));
    uVar3 = *(ulong *)(param_5 + iVar10);
    func_0x00010c074c20();
    func_0x00010bf1fec0(*(undefined8 *)(param_5 + lVar5));
    dVar18 = dVar18 + -1.5;
    if ((uVar3 & 1) == 0) {
      func_0x00010c2172c0(*(undefined8 *)(param_5 + iVar10));
      func_0x00010bf1fec0(*(undefined8 *)(param_5 + iVar10));
      dVar18 = dVar18 + -1.5;
    }
    func_0x00010c2172c0(*(undefined8 *)(param_5 + iVar9));
    func_0x00010bf1fec0(*(undefined8 *)(param_5 + iVar9));
    dVar18 = dVar18 + -1.5;
    func_0x00010c2172c0(*(undefined8 *)(param_5 + lVar11));
  }
  func_0x00010bfe0640(*(undefined8 *)(param_5 + iVar9));
  if (((ABS(dVar18) < 2.2250738585072014e-308) ||
      (ABS(dVar18) < ABS(dVar18 + 0.0) * 2.220446049250313e-16)) &&
     ((ABS(dVar17) < 2.2250738585072014e-308 ||
      (ABS(dVar17) < ABS(dVar17 + 0.0) * 2.220446049250313e-16)))) {
    uVar3 = *(ulong *)(param_5 + lVar8);
    func_0x00010c074c20();
    if ((uVar3 & 1) == 0) {
      lVar7 = *(long *)(param_5 + lVar8);
    }
    else {
      lVar7 = *(long *)(param_5 + _DAT_11276adfc);
      if ((lVar7 == 0) && (lVar7 = *(long *)(param_5 + lVar6), lVar7 == 0)) goto LAB_107b602f4;
    }
    func_0x00010bf348c0(lVar7);
    func_0x00010c17a860(*(undefined8 *)(param_5 + lVar5));
  }
LAB_107b602f4:
  func_0x00010bedfca0(param_5);
  return;
}



/* Entry: 107b60354; end: 107b60537; -[SCOperaChromeHeaderView _layoutCloseButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107b60354(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar4 = (long)_DAT_11276ad98;
  uVar1 = *(ulong *)(param_3 + lVar4);
  func_0x00010c074c20();
  if ((uVar1 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_3 + lVar4);
    func_0x00010bfe6ac0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(uVar6);
    lVar3 = (long)_DAT_11276ade8;
    uVar6 = 0x402c000000000000;
    if ((*(byte *)(param_3 + lVar3) & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c236980();
      uVar6 = 0x4030000000000000;
      if ((int)lVar2 == 0) {
        uVar6 = 0x4036000000000000;
      }
    }
    dVar7 = 14.0;
    func_0x00010c19f0e0(0x402c000000000000,uVar6,param_1,param_2,*(undefined8 *)(param_3 + lVar4));
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar4));
    _CGRectGetMaxX();
    dVar5 = 4.0;
    if (*(char *)(param_3 + lVar3) == '\0') {
      dVar5 = 14.0;
    }
    dVar7 = dVar7 + dVar5;
    lVar3 = param_3;
    func_0x00010c236980();
    if ((int)lVar3 != 0) {
      func_0x00010bf1fec0(*(undefined8 *)(param_3 + lVar4));
      lVar3 = (long)_DAT_11276ad9c;
      func_0x00010bfe0640(*(undefined8 *)(param_3 + lVar3));
      func_0x00010bf34840(*(undefined8 *)(param_3 + lVar4));
      func_0x00010c17a6a0(*(undefined8 *)(param_3 + lVar3));
    }
    lVar4 = (long)_DAT_11276ada0;
    dVar5 = dVar7;
    func_0x00010c19f0e0(dVar7,0x4028000000000000,0x3ff8000000000000,0x403e000000000000,
                        *(undefined8 *)(param_3 + lVar4));
    func_0x00010c2a5040(*(undefined8 *)(param_3 + lVar4));
    uVar6 = *(undefined8 *)(param_3 + lVar4);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar5 * 0.5);
    _objc_release(uVar6);
  }
  else {
    uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c19f0e0(uVar6,uVar8,uVar9,uVar10,*(undefined8 *)(param_3 + lVar4));
    func_0x00010c19f0e0(uVar6,uVar8,uVar9,uVar10,*(undefined8 *)(param_3 + _DAT_11276ad9c));
    func_0x00010c19f0e0(uVar6,uVar8,uVar9,uVar10,*(undefined8 *)(param_3 + _DAT_11276ada0));
    dVar7 = 0.0;
  }
  return dVar7;
}



/* Entry: 107b60538; end: 107b6099f; -[SCOperaChromeHeaderView _updateShadowPaths] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b60538(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11276ae08);
  lVar4 = (long)_DAT_11276ad98;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf20c00();
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  _CGRectEqualToRect();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar4));
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199c0(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar5 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11276ae0c);
  lVar4 = (long)_DAT_11276ad9c;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf20c00();
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  _CGRectEqualToRect();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar4));
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199c0(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar5 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11276ae10);
  lVar4 = (long)_DAT_11276adb8;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf20c00();
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  _CGRectEqualToRect();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar4));
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199c0(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar5 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11276ae14);
  lVar4 = (long)_DAT_11276ada4;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf20c00();
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  _CGRectEqualToRect();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar4));
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199c0(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar5 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11276ae18);
  lVar4 = (long)_DAT_11276ada8;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf20c00();
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  _CGRectEqualToRect();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar4));
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199c0(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar5 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11276ae1c);
  lVar4 = (long)_DAT_11276adac;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf20c00();
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  _CGRectEqualToRect();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar4));
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199c0(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar5 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11276ae20);
  lVar4 = (long)_DAT_11276adb0;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf20c00();
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  _CGRectEqualToRect();
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar4));
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199c0(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar5 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107b609a0; end: 107b609af; -[SCOperaChromeHeaderView maxXForView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b609a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276add0);
}



/* Entry: 107b609b0; end: 107b609bf; -[SCOperaChromeHeaderView firstLineSubtitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b609b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276adac);
}



/* Entry: 107b609c0; end: 107b609cf; -[SCOperaChromeHeaderView secondLineSubtitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b609c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ae24);
}



/* Entry: 107b609d0; end: 107b609df; -[SCOperaChromeHeaderView iconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b609d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276adb8);
}



/* Entry: 107b609e0; end: 107b609ef; -[SCOperaChromeHeaderView showCloseLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b609e0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276ade4);
}



/* Entry: 107b609f0; end: 107b60b5f; -[SCOperaChromeHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b609f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276ae24,0);
  _objc_storeStrong(param_1 + _DAT_11276adac,0);
  _objc_storeStrong(param_1 + _DAT_11276adcc,0);
  _objc_storeStrong(param_1 + _DAT_11276adc4,0);
  _objc_storeStrong(param_1 + _DAT_11276adc0,0);
  _objc_storeStrong(param_1 + _DAT_11276adf4,0);
  _objc_storeStrong(param_1 + _DAT_11276adec,0);
  _objc_storeStrong(param_1 + _DAT_11276adf0,0);
  _objc_storeStrong(param_1 + _DAT_11276add8,0);
  _objc_storeStrong(param_1 + _DAT_11276adb0,0);
  _objc_storeStrong(param_1 + _DAT_11276adfc,0);
  _objc_storeStrong(param_1 + _DAT_11276adf8,0);
  _objc_storeStrong(param_1 + _DAT_11276adbc,0);
  _objc_storeStrong(param_1 + _DAT_11276adb8,0);
  _objc_storeStrong(param_1 + _DAT_11276addc,0);
  _objc_storeStrong(param_1 + _DAT_11276ada8,0);
  _objc_storeStrong(param_1 + _DAT_11276ada4,0);
  _objc_storeStrong(param_1 + _DAT_11276ada0,0);
  _objc_storeStrong(param_1 + _DAT_11276ad9c,0);
  _objc_storeStrong(param_1 + _DAT_11276ad98,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ad94,0);
  return;
}



/* Entry: 107b60b60; end: 107b60beb; -[SCOperaInteractionButtonsLayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107b60b60(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9fd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ae28);
    *(undefined **)((long)puVar1 + (long)_DAT_11276ae28) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b60bec; end: 107b61237; -[SCOperaInteractionButtonsLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b60bec(double param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_a0;
  undefined *puStack_98;
  
  puStack_98 = PTR_PTR_1126f9fd0;
  lStack_a0 = param_3;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_3);
  func_0x00010c19f0e0(*(undefined8 *)(param_3 + _DAT_11276ae28));
  lVar5 = (long)_DAT_11276ae2c;
  func_0x00010bfe7f60(*(undefined8 *)(param_3 + lVar5));
  uVar1 = *(undefined8 *)(param_3 + lVar5);
  dVar8 = param_1;
  func_0x00010bfe90c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar9 = dVar8 + param_1 * 2.0;
  func_0x00010bfe7f60(*(undefined8 *)(param_3 + lVar5));
  uVar2 = *(undefined8 *)(param_3 + lVar5);
  dVar12 = param_2;
  func_0x00010bfe90c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar12 = dVar12 + param_2 * 2.0;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010bf20c00(param_3);
  _CGRectGetMaxY();
  dVar8 = dVar8 - dVar12;
  dVar7 = 0.0;
  func_0x00010c19f0e0(0,dVar8,dVar9,dVar12,*(undefined8 *)(param_3 + lVar5));
  lVar5 = (long)_DAT_11276ae30;
  func_0x00010bfe7f60(*(undefined8 *)(param_3 + lVar5));
  uVar1 = *(undefined8 *)(param_3 + lVar5);
  dVar12 = dVar7;
  func_0x00010bfe90c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar10 = dVar12 + dVar7 * 2.0;
  func_0x00010bfe7f60(*(undefined8 *)(param_3 + lVar5));
  uVar2 = *(undefined8 *)(param_3 + lVar5);
  dVar7 = dVar8;
  func_0x00010bfe90c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar7 = dVar7 + dVar8 * 2.0;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010bf20c00(param_3);
  _CGRectGetMaxY();
  dVar12 = dVar12 - dVar7;
  dVar9 = 0.0;
  func_0x00010c19f0e0(0,dVar12,dVar10,dVar7,*(undefined8 *)(param_3 + lVar5));
  lVar6 = (long)_DAT_11276ae34;
  func_0x00010bfe7f60(*(undefined8 *)(param_3 + lVar6));
  uVar1 = *(undefined8 *)(param_3 + lVar6);
  dVar8 = dVar9;
  func_0x00010bfe90c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar11 = dVar8 + dVar9 * 2.0;
  func_0x00010bfe7f60(*(undefined8 *)(param_3 + lVar6));
  uVar2 = *(undefined8 *)(param_3 + lVar6);
  dVar10 = dVar12;
  func_0x00010bfe90c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar5));
  _CGRectGetMaxX();
  dVar7 = dVar8;
  func_0x00010bf20c00(param_3);
  _CGRectGetMaxY();
  dVar9 = dVar7;
  func_0x00010bfe0640(*(undefined8 *)(param_3 + lVar6));
  dVar9 = dVar7 - dVar9;
  func_0x00010c19f0e0(dVar8,dVar9,dVar11,dVar10 + dVar12 * 2.0,*(undefined8 *)(param_3 + lVar6));
  lVar5 = (long)_DAT_11276ae38;
  func_0x00010bfe7f60(*(undefined8 *)(param_3 + lVar5));
  uVar1 = *(undefined8 *)(param_3 + lVar5);
  dVar12 = dVar8;
  func_0x00010bfe90c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar11 = dVar12 + dVar8 * 2.0;
  func_0x00010bfe7f60(*(undefined8 *)(param_3 + lVar5));
  uVar2 = *(undefined8 *)(param_3 + lVar5);
  dVar8 = dVar9;
  func_0x00010bfe90c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar8 = dVar8 + dVar9 * 2.0;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010bf20c00(param_3);
  _CGRectGetMaxX();
  dVar10 = dVar12 - dVar11;
  func_0x00010bf20c00(param_3);
  _CGRectGetMaxY();
  dVar12 = dVar12 - dVar8;
  dVar9 = dVar10;
  func_0x00010c19f0e0(dVar10,dVar12,dVar11,dVar8,*(undefined8 *)(param_3 + lVar5));
  lVar5 = (long)_DAT_11276ae3c;
  func_0x00010bfe7f60(*(undefined8 *)(param_3 + lVar5));
  uVar1 = *(undefined8 *)(param_3 + lVar5);
  dVar8 = dVar9;
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar11 = dVar8 + dVar9 * 2.0;
  func_0x00010bfe7f60(*(undefined8 *)(param_3 + lVar5));
  uVar2 = *(undefined8 *)(param_3 + lVar5);
  dVar9 = dVar12;
  func_0x00010bfe90c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar9 = dVar9 + dVar12 * 2.0;
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  if (*(long *)(param_3 + _DAT_11276ae40) == 1) {
    dVar10 = *(double *)PTR__CGPointZero_110347540;
    dVar7 = *(double *)(PTR__CGPointZero_110347540 + 8);
    _CGAffineTransformMakeRotation(&uStack_130,0x3ff921fb54442d18);
    uVar3 = *(undefined8 *)(param_3 + lVar5);
    uStack_f8 = uStack_128;
    uStack_100 = uStack_130;
    uStack_e8 = uStack_118;
    uStack_f0 = uStack_120;
  }
  else {
    if (*(long *)(param_3 + _DAT_11276ae40) != 0) goto LAB_107b61088;
    func_0x00010bf20c00(param_3);
    _CGRectGetMaxX();
    dVar10 = dVar8 - dVar11;
    func_0x00010bf20c00(param_3);
    _CGRectGetMaxY();
    dVar7 = dVar8 - dVar9;
    _CGAffineTransformMakeRotation(&uStack_d0,0xbff921fb54442d18);
    uVar3 = *(undefined8 *)(param_3 + lVar5);
    uStack_f8 = uStack_c8;
    uStack_100 = uStack_d0;
    uStack_e8 = uStack_b8;
    uStack_f0 = uStack_c0;
  }
  func_0x00010c219960(uVar3);
LAB_107b61088:
  func_0x00010c19f0e0(dVar10,dVar7,dVar11,dVar9,*(undefined8 *)(param_3 + lVar5));
  lVar5 = (long)_DAT_11276ae44;
  func_0x00010bfe7f60(*(undefined8 *)(param_3 + lVar5));
  uVar1 = *(undefined8 *)(param_3 + lVar5);
  dVar8 = dVar10;
  func_0x00010bfe90c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar9 = dVar8 + dVar10 * 2.0;
  func_0x00010bfe7f60(*(undefined8 *)(param_3 + lVar5));
  uVar2 = *(undefined8 *)(param_3 + lVar5);
  dVar12 = dVar7;
  func_0x00010bfe90c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar12 = dVar12 + dVar7 * 2.0;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010bf20c00(param_3);
  _CGRectGetMaxY();
  dVar8 = dVar8 - dVar12;
  func_0x00010c19f0e0(0,dVar8,dVar9,dVar12,*(undefined8 *)(param_3 + lVar5));
  dVar9 = *(double *)(param_3 + _DAT_11276ae48);
  func_0x00010c14d760(dVar9,param_3);
  lVar5 = (long)_DAT_11276ae50;
  dVar10 = *(double *)(param_3 + _DAT_11276ae4c);
  uVar4 = *(undefined8 *)(param_3 + lVar5);
  dVar12 = dVar9;
  func_0x00010bfe90c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar7 = dVar12;
  _objc_release(uVar3);
  _objc_release(uVar4);
  func_0x00010bf20c00(param_3);
  _CGRectGetMaxX();
  func_0x00010c19f0e0(((dVar7 - dVar12) + -44.0) - *(double *)(param_3 + _DAT_11276ae54),
                      dVar9 + 11.0 + dVar10 + *(double *)(param_3 + _DAT_11276ae58),dVar12,dVar8,
                      *(undefined8 *)(param_3 + lVar5));
  return;
}



/* Entry: 107b61238; end: 107b612ab; -[SCOperaInteractionButtonsLayerView teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b61238(long param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c1677c0(0x3ff0000000000000);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(param_1,param_2,&uStack_50);
  if (*(char *)(param_1 + _DAT_11276ae5c) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11276ae5c) = 0;
    func_0x00010bee3f80(0,param_1);
  }
  return;
}



/* Entry: 107b612ac; end: 107b61733; -[SCOperaInteractionButtonsLayerView setupViewForLayer:] */

/* WARNING: Possible PIC construction at 0x000107b616b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b616bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b612ac(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar14 = param_4;
  func_0x00010c236620();
  if ((int)lVar14 == 0) {
    lVar16 = (long)_DAT_11276ae2c;
    func_0x00010c12c960(*(undefined8 *)(param_2 + lVar16));
    lVar14 = *(long *)(param_2 + lVar16);
    *(undefined8 *)(param_2 + lVar16) = 0;
  }
  else {
    uVar15 = *(undefined8 *)(param_2 + _DAT_11276ae28);
    lVar14 = param_2;
    func_0x00010bdd9140(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar15);
  }
  _objc_release(lVar14);
  lVar14 = (long)_DAT_11276ae34;
  func_0x00010c12c960(*(undefined8 *)(param_2 + lVar14));
  uVar15 = *(undefined8 *)(param_2 + lVar14);
  *(undefined8 *)(param_2 + lVar14) = 0;
  _objc_release(uVar15);
  lVar14 = param_4;
  func_0x00010c2372c0();
  if ((int)lVar14 == 0) {
    lVar14 = (long)_DAT_11276ae30;
    func_0x00010c12c960(*(undefined8 *)(param_2 + lVar14));
    uVar15 = *(undefined8 *)(param_2 + lVar14);
    *(undefined8 *)(param_2 + lVar14) = 0;
    _objc_release(uVar15);
    lVar16 = (long)_DAT_11276ae60;
    func_0x00010c12c960(*(undefined8 *)(param_2 + lVar16));
    lVar14 = *(long *)(param_2 + lVar16);
    *(undefined8 *)(param_2 + lVar16) = 0;
  }
  else {
    lVar16 = (long)_DAT_11276ae28;
    uVar15 = *(undefined8 *)(param_2 + lVar16);
    lVar14 = param_2;
    func_0x00010be06f00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar15);
    _objc_release(lVar14);
    uVar15 = *(undefined8 *)(param_2 + lVar16);
    lVar14 = param_2;
    func_0x00010be06f20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar15);
    _objc_release(lVar14);
    lVar14 = param_2;
    func_0x00010be06f20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(lVar14);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar14 = param_2;
    func_0x00010be06f20();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar14;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010be06f00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe90c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010be06f20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    func_0x00010be06f00(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bfe90c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar16);
  }
  _objc_release(lVar14);
  lVar14 = param_4;
  func_0x00010c239c80();
  if ((int)lVar14 == 0) {
    lVar16 = (long)_DAT_11276ae38;
    func_0x00010c12c960(*(undefined8 *)(param_2 + lVar16));
    lVar14 = *(long *)(param_2 + lVar16);
    *(undefined8 *)(param_2 + lVar16) = 0;
  }
  else {
    uVar15 = *(undefined8 *)(param_2 + _DAT_11276ae28);
    lVar14 = param_2;
    func_0x00010be9e9e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar15);
  }
  _objc_release(lVar14);
  lVar14 = param_4;
  func_0x00010c236360();
  if ((int)lVar14 == 0) {
    lVar16 = (long)_DAT_11276ae3c;
    func_0x00010c12c960(*(undefined8 *)(param_2 + lVar16));
    lVar14 = *(long *)(param_2 + lVar16);
    *(undefined8 *)(param_2 + lVar16) = 0;
  }
  else {
    lVar14 = param_2;
    func_0x00010bdd5140(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_2);
  }
  _objc_release(lVar14);
  lVar14 = param_4;
  func_0x00010c237740();
  if ((int)lVar14 == 0) {
    lVar14 = (long)_DAT_11276ae50;
    func_0x00010c12c960(*(undefined8 *)(param_2 + lVar14));
    uVar15 = *(undefined8 *)(param_2 + lVar14);
    *(undefined8 *)(param_2 + lVar14) = 0;
    _objc_release(uVar15);
    func_0x00010bfa0f80(param_4);
    *(undefined8 *)(param_2 + _DAT_11276ae4c) = param_1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      return;
    }
    ___stack_chk_fail();
    *(byte *)(param_4 + _DAT_11276ae64) = *(byte *)(param_4 + _DAT_11276ae64) ^ 1;
  }
  else {
    func_0x00010c072ac0();
    *(char *)(param_2 + _DAT_11276ae64) = (char)param_4;
    uVar15 = *(undefined8 *)(param_2 + _DAT_11276ae28);
    func_0x00010be0e640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar15);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed7d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107b61734; end: 107b6174b; -[SCOperaInteractionButtonsLayerView toggleIsFavorited] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b61734(long param_1)

{
  *(byte *)(param_1 + _DAT_11276ae64) = *(byte *)(param_1 + _DAT_11276ae64) ^ 1;
                    /* WARNING: Could not recover jumptable at 0x00010bed7d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFavoriteButtonImage_112593900);
  return;
}



/* Entry: 107b6174c; end: 107b617c3; -[SCOperaInteractionButtonsLayerView _updateFavoriteButtonImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6174c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eafdd8;
  if (*(char *)(param_1 + _DAT_11276ae64) == '\0') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eafdf8;
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11276ae50),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107b617c4; end: 107b6185b; -[SCOperaInteractionButtonsLayerView setShowSaveButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b617c4(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(byte *)(param_1 + _DAT_11276ae68) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11276ae68) = (char)param_3;
  if (param_3 == 0) {
    lVar3 = (long)_DAT_11276ae44;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
    lVar1 = *(long *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276ae28);
    lVar1 = param_1;
    func_0x00010be98be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107b6185c; end: 107b618e7; -[SCOperaInteractionButtonsLayerView animateBoomboxButton:duration:position:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6185c(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,long param_5)

{
  if ((*(long *)(param_2 + _DAT_11276ae3c) != 0) && (*(long *)(param_2 + _DAT_11276ae40) != param_5)
     ) {
    *(long *)(param_2 + _DAT_11276ae40) = param_5;
    func_0x00010c1cbe20(param_2);
  }
  if (*(byte *)(param_2 + _DAT_11276ae5c) == param_4) {
    return;
  }
  *(char *)(param_2 + _DAT_11276ae5c) = (char)param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bee3f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,PTR_s__updateViewsVisibilityDuration__112596988);
  return;
}



/* Entry: 107b618e8; end: 107b6193f; -[SCOperaInteractionButtonsLayerView updateButtonOffsetsForPreviewToolbarEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b618e8(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x404a000000000000;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  *(undefined8 *)(param_1 + _DAT_11276ae54) = uVar1;
  uVar1 = 0x4010000000000000;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  *(undefined8 *)(param_1 + _DAT_11276ae58) = uVar1;
  func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 107b61940; end: 107b61b8f; -[SCOperaInteractionButtonsLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b61940(double param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  double dVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar9 = param_1;
  _objc_retain(param_5);
  lVar7 = param_3;
  func_0x00010c082800();
  if ((int)lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    if ((*(long *)(param_3 + _DAT_11276ae3c) != 0) && (func_0x00010bf01b40(), 0.0 < dVar9)) {
      func_0x00010befa120(puVar2);
    }
    func_0x00010bf01b40(*(undefined8 *)(param_3 + _DAT_11276ae28));
    if (0.0 < dVar9) {
      if (*(long *)(param_3 + _DAT_11276ae2c) != 0) {
        func_0x00010befa120(puVar2);
      }
      if (*(long *)(param_3 + _DAT_11276ae34) != 0) {
        func_0x00010befa120(puVar2);
      }
      if (*(long *)(param_3 + _DAT_11276ae30) != 0) {
        func_0x00010befa120(puVar2);
      }
      if (*(long *)(param_3 + _DAT_11276ae38) != 0) {
        func_0x00010befa120(puVar2);
      }
      if (*(long *)(param_3 + _DAT_11276ae44) != 0) {
        func_0x00010befa120(puVar2);
      }
      if (*(long *)(param_3 + _DAT_11276ae50) != 0) {
        func_0x00010befa120(puVar2);
      }
    }
    _objc_retain(puVar2);
    puVar3 = puVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar2);
        }
        lVar7 = *(long *)((long)puVar8 * 8);
        func_0x00010bf512a0(param_1,param_2,param_3);
        func_0x00010bfe3a40();
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 != 0) goto LAB_107b61b38;
        puVar8 = puVar8 + 1;
      } while (puVar3 != puVar8);
      puVar3 = puVar2;
      func_0x00010bf52a60();
    }
    lVar7 = 0;
LAB_107b61b38:
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar5 = (long)_DAT_11276ae2c;
    lVar7 = *(long *)(param_5 + lVar5);
    if (lVar7 == 0) {
      puVar2 = PTR_PTR_1126b6138;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar6 = *(undefined8 *)(param_5 + lVar5);
      *(undefined **)(param_5 + lVar5) = puVar2;
      _objc_release(uVar6);
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(*(undefined8 *)(param_5 + lVar5));
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(*(undefined8 *)(param_5 + lVar5));
      _objc_release(puVar2);
      func_0x00010c1c3c80(0x3ff199999999999a,*(undefined8 *)(param_5 + lVar5));
      ppuVar4 = &PTR____CFConstantStringClassReference_110eafe38;
      func_0x00010c160fc0(*(undefined8 *)(param_5 + lVar5));
      func_0x00010c1aa420(0x4038000000000000,0x4038000000000000,*(undefined8 *)(param_5 + lVar5));
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eafe38,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020(*(undefined8 *)(param_5 + lVar5));
      _objc_release(ppuVar4);
      func_0x00010befbd40(*(undefined8 *)(param_5 + lVar5));
      lVar7 = *(long *)(param_5 + lVar5);
    }
    _objc_retain(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 107b61b90; end: 107b61cf3; -[SCOperaInteractionButtonsLayerView _cameraButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b61b90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11276ae2c;
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 == 0) {
    puVar1 = PTR_PTR_1126b6138;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar6));
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar6));
    _objc_release(puVar1);
    func_0x00010c1c3c80(0x3ff199999999999a,*(undefined8 *)(param_1 + lVar6));
    ppuVar3 = &PTR____CFConstantStringClassReference_110eafe38;
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c1aa420(0x4038000000000000,0x4038000000000000,*(undefined8 *)(param_1 + lVar6));
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eafe38,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar6));
    _objc_release(ppuVar3);
    func_0x00010befbd40(*(undefined8 *)(param_1 + lVar6));
    lVar5 = *(long *)(param_1 + lVar6);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 107b61cf4; end: 107b61e0f; -[SCOperaInteractionButtonsLayerView _editButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b61cf4(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276ae30;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126b6138;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar1);
    func_0x00010c1c3c80(0x3ff199999999999a,*(undefined8 *)(param_1 + lVar5));
    ppuVar2 = &PTR____CFConstantStringClassReference_110e2eeb8;
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1aa420(0x4036000000000000,0x4035000000000000,*(undefined8 *)(param_1 + lVar5));
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2eeb8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
    _objc_release(ppuVar2);
    func_0x00010befbd40(*(undefined8 *)(param_1 + lVar5));
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107b61e10; end: 107b61f2b; -[SCOperaInteractionButtonsLayerView _postToStoryButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b61e10(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276ae34;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126b6138;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar1);
    func_0x00010c1c3c80(0x3ff199999999999a,*(undefined8 *)(param_1 + lVar5));
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1aa420(0x4036000000000000,0x4035000000000000,*(undefined8 *)(param_1 + lVar5));
    ppuVar2 = &PTR____CFConstantStringClassReference_110eafe98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eafe98,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
    _objc_release(ppuVar2);
    func_0x00010befbd40(*(undefined8 *)(param_1 + lVar5));
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107b61f2c; end: 107b6202b; -[SCOperaInteractionButtonsLayerView _editButtonLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b61f2c(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276ae60;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e2eeb8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2eeb8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
    _objc_release(ppuVar2);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107b6202c; end: 107b6214b; -[SCOperaInteractionButtonsLayerView _sendButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6202c(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276ae38;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126b6138;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar1);
    func_0x00010c1aa420(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),
                        *(undefined8 *)(param_1 + lVar5));
    func_0x00010c1c3c80(0x3ff199999999999a,*(undefined8 *)(param_1 + lVar5));
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5));
    ppuVar2 = &PTR____CFConstantStringClassReference_110e22d58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22d58,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
    _objc_release(ppuVar2);
    func_0x00010befbd40(*(undefined8 *)(param_1 + lVar5));
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107b6214c; end: 107b6229b; -[SCOperaInteractionButtonsLayerView _boomboxButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6214c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276ae3c;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126b6138;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar5));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110eafef8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010c1aa420(0x4034000000000000,0x4034000000000000,*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1c3c80(0x3ff199999999999a,*(undefined8 *)(param_1 + lVar5));
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5),param_2,
                        &PTR____CFConstantStringClassReference_110eaff18);
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar5),param_2,
                        &PTR____CFConstantStringClassReference_110eaff38);
    func_0x00010befbd40(*(undefined8 *)(param_1 + lVar5),param_2,param_1,
                        PTR_s__boomboxButtonPressed__112538700);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107b6229c; end: 107b623b7; -[SCOperaInteractionButtonsLayerView _saveButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6229c(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276ae44;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126b6138;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar1);
    func_0x00010c1aa420(0x4036000000000000,0x4034000000000000,*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1c3c80(0x3ff199999999999a,*(undefined8 *)(param_1 + lVar5));
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5));
    ppuVar2 = &PTR____CFConstantStringClassReference_110e85c38;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85c38,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
    _objc_release(ppuVar2);
    func_0x00010befbd40(*(undefined8 *)(param_1 + lVar5));
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107b623b8; end: 107b624af; -[SCOperaInteractionButtonsLayerView _favoriteButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b623b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276ae50;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126b6138;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c1aa420(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),
                        *(undefined8 *)(param_1 + lVar4));
    func_0x00010c1c3c80(0x3ff199999999999a,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4),param_2,
                        &PTR____CFConstantStringClassReference_110e48018);
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar4),param_2,
                        &PTR____CFConstantStringClassReference_110e48018);
    func_0x00010befbd40(*(undefined8 *)(param_1 + lVar4),param_2,param_1,
                        PTR_s__favoriteButtonPressed__112538708);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107b624b0; end: 107b624eb; -[SCOperaInteractionButtonsLayerView _cameraButtonPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b624b0(long param_1)

{
  param_1 = param_1 + _DAT_11276ae6c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf29040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b624ec; end: 107b62527; -[SCOperaInteractionButtonsLayerView _editButtonPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b624ec(long param_1)

{
  param_1 = param_1 + _DAT_11276ae6c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf8c180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b62528; end: 107b62563; -[SCOperaInteractionButtonsLayerView _sendButtonPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b62528(long param_1)

{
  param_1 = param_1 + _DAT_11276ae6c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c15b740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b62564; end: 107b6259f; -[SCOperaInteractionButtonsLayerView _postToStoryButtonPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b62564(long param_1)

{
  param_1 = param_1 + _DAT_11276ae6c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c105380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b625a0; end: 107b625db; -[SCOperaInteractionButtonsLayerView _boomboxButtonPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b625a0(long param_1)

{
  param_1 = param_1 + _DAT_11276ae6c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b625dc; end: 107b62617; -[SCOperaInteractionButtonsLayerView _saveButtonPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b625dc(long param_1)

{
  param_1 = param_1 + _DAT_11276ae6c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c14a160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b62618; end: 107b62667; -[SCOperaInteractionButtonsLayerView _favoriteButtonPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b62618(long param_1)

{
  param_1 = param_1 + _DAT_11276ae6c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa0f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b62668; end: 107b6276f; -[SCOperaInteractionButtonsLayerView _updateViewsVisibilityDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b62668(double param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  double dVar2;
  double dVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  double dStack_50;
  double dStack_48;
  
  dVar2 = 0.0;
  dVar3 = 1.0;
  if (*(char *)(param_2 + _DAT_11276ae5c) == '\0') {
    dVar3 = 0.0;
  }
  func_0x00010bf01b40(*(undefined8 *)(param_2 + _DAT_11276ae3c));
  if ((dVar2 != dVar3) ||
     (func_0x00010bf01b40(*(undefined8 *)(param_2 + _DAT_11276ae28)), dVar2 != 1.0 - dVar3)) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107b62770;
    puStack_60 = &UNK_110858dc0;
    ppuVar1 = &puStack_78;
    lStack_58 = param_2;
    dStack_50 = dVar3;
    dStack_48 = 1.0 - dVar3;
    _objc_retainBlock();
    if (param_1 <= 0.0) {
      (*(code *)ppuVar1[2])(ppuVar1);
    }
    else {
      func_0x00010bf03440(param_1,0,PTR__OBJC_CLASS___UIView_1126aec20,param_3,4,ppuVar1,0);
    }
    _objc_release(ppuVar1);
  }
  return;
}



/* Entry: 107b62770; end: 107b627b7;  */

/* WARNING: Possible PIC construction at 0x000107b62798: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b6279c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b62770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276ae3c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b627b8; end: 107b627d7; -[SCOperaInteractionButtonsLayerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b627b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276ae6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b627d8; end: 107b627eb; -[SCOperaInteractionButtonsLayerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b627d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276ae6c,param_3);
  return;
}



/* Entry: 107b627ec; end: 107b627fb; -[SCOperaInteractionButtonsLayerView showSaveButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b627ec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276ae68);
}



/* Entry: 107b627fc; end: 107b62813; -[SCOperaInteractionButtonsLayerView operaSafeAreaInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b627fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ae48);
}



/* Entry: 107b62814; end: 107b6282b; -[SCOperaInteractionButtonsLayerView setOperaSafeAreaInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b62814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11276ae48);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 107b6282c; end: 107b628e7; -[SCOperaInteractionButtonsLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6282c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276ae6c);
  _objc_storeStrong(param_1 + _DAT_11276ae60,0);
  _objc_storeStrong(param_1 + _DAT_11276ae50,0);
  _objc_storeStrong(param_1 + _DAT_11276ae44,0);
  _objc_storeStrong(param_1 + _DAT_11276ae3c,0);
  _objc_storeStrong(param_1 + _DAT_11276ae38,0);
  _objc_storeStrong(param_1 + _DAT_11276ae30,0);
  _objc_storeStrong(param_1 + _DAT_11276ae34,0);
  _objc_storeStrong(param_1 + _DAT_11276ae2c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ae28,0);
  return;
}



/* Entry: 107b628e8; end: 107b6291b; -[SCOperaInteractionButtonsLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_107b628e8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f9fd8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithConfiguration_layerViewC_1125de030);
  return;
}



/* Entry: 107b6291c; end: 107b629b3; -[SCOperaInteractionButtonsLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6291c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d6b58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_11276ae70;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010c08c520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1c0();
  func_0x00010c1d5660(*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 107b629b4; end: 107b62a27; -[SCOperaInteractionButtonsLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b629b4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9fd8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_teardown_112678538);
  func_0x00010c26ac40(*(undefined8 *)(param_1 + _DAT_11276ae70));
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(param_1);
  return;
}



/* Entry: 107b62a28; end: 107b62a3b; -[SCOperaInteractionButtonsLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b62a28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2298d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276ae70),PTR_s_setupViewForLayer__112668058,param_4);
  return;
}



/* Entry: 107b62a3c; end: 107b62a43; -[SCOperaInteractionButtonsLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

undefined8 FUN_107b62a3c(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 107b62a44; end: 107b62b17; -[SCOperaInteractionButtonsLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b62a44(undefined8 param_1,long param_2)

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
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_2 + _DAT_11276ae70));
  return;
}



/* Entry: 107b62b18; end: 107b62beb; -[SCOperaInteractionButtonsLayerViewController didUpdateOperaPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b62b18(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c118b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c283f60(*(undefined8 *)(param_1 + _DAT_11276ae70),param_2,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b62bec; end: 107b62bf3; -[SCOperaInteractionButtonsLayerViewController movingViewsForFadeTransition] */

undefined8 FUN_107b62bec(void)

{
  return 0;
}



/* Entry: 107b62bf4; end: 107b62c3b; -[SCOperaInteractionButtonsLayerViewController fadingViewsForFadeTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b62bf4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x00010c2a2b60(PTR__OBJC_CLASS___NSHashTable_1126b4538);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b62c3c; end: 107b62ca7; -[SCOperaInteractionButtonsLayerViewController cameraButtonPressed:] */

void FUN_107b62c3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5b28;
  func_0x00010bf28e60(PTR_PTR_1126b5b28);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf60c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b62ca8; end: 107b62d13; -[SCOperaInteractionButtonsLayerViewController editButtonPressed:] */

void FUN_107b62ca8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5b28;
  func_0x00010bf8c140(PTR_PTR_1126b5b28);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf60c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b62d14; end: 107b62d7f; -[SCOperaInteractionButtonsLayerViewController sendButtonPressed:] */

void FUN_107b62d14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5b28;
  func_0x00010c15b3c0(PTR_PTR_1126b5b28);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf60c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b62d80; end: 107b62deb; -[SCOperaInteractionButtonsLayerViewController postStoryButtonPressed:] */

void FUN_107b62d80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5b28;
  func_0x00010c1052e0(PTR_PTR_1126b5b28);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf60c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b62dec; end: 107b62e57; -[SCOperaInteractionButtonsLayerViewController boomboxButtonPressed:] */

void FUN_107b62dec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf1f540(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf60c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


