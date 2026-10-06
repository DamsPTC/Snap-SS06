/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061c6bec; end: 1061c6cb3; -[SCLensesTooltipManager swipeTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c6bec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (*(char *)(param_1 + _DAT_112742400) == '\x01') {
    lVar6 = (long)_DAT_112742410;
    lVar4 = *(long *)(param_1 + lVar6);
    if (lVar4 == 0) {
      lVar5 = (long)_DAT_112742408;
      lVar1 = param_1 + lVar5;
      _objc_loadWeakRetained();
      _objc_release();
      lVar4 = 0;
      if (lVar1 == 0) goto LAB_1061c6ca0;
      puVar2 = PTR_PTR_1126c89b8;
      _objc_alloc();
      lVar5 = param_1 + lVar5;
      _objc_loadWeakRetained(lVar5);
      func_0x00010c033e60(puVar2,param_2,lVar5,*(undefined8 *)(param_1 + _DAT_1127423fc));
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      *(undefined **)(param_1 + lVar6) = puVar2;
      _objc_release(uVar3);
      _objc_release(lVar5);
      lVar4 = *(long *)(param_1 + lVar6);
    }
    _objc_retain(lVar4);
  }
  else {
    lVar4 = 0;
  }
LAB_1061c6ca0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1061c6cb4; end: 1061c6d0b; -[SCLensesTooltipManager _didSelectAnotherLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1061c6cb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112742418);
  uVar1 = 0;
  if (lVar2 != 0) {
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(lVar2,param_2,param_3);
    uVar1 = (uint)lVar2 ^ 1;
    _objc_release(param_3);
  }
  return uVar1;
}



/* Entry: 1061c6d0c; end: 1061c6ddb; -[SCLensesTooltipManager _showSwipeTooltipCheckingSuppression] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c6d0c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((*(byte *)(param_2 + _DAT_11274240c) & 1) == 0) {
    lVar1 = param_2 + _DAT_112742408;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf2b240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMinY();
    lVar3 = param_2;
    func_0x00010c264fc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c177340(param_1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c264fc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235840();
    _objc_release(lVar1);
  }
  *(undefined1 *)(param_2 + _DAT_112742414) = 1;
  return;
}



/* Entry: 1061c6ddc; end: 1061c6e13; -[SCLensesTooltipManager _hideSwipeTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c6ddc(long param_1)

{
  func_0x00010bfe1560(*(undefined8 *)(param_1 + _DAT_112742410));
  *(undefined1 *)(param_1 + _DAT_112742414) = 0;
  return;
}



/* Entry: 1061c6e14; end: 1061c6e17; -[SCLensesTooltipManager didEndDisplayingLens:withContext:] */

void FUN_1061c6e14(void)

{
  return;
}



/* Entry: 1061c6e18; end: 1061c6e1b; -[SCLensesTooltipManager didDrawIcon:forLens:atIndex:withContext:] */

void FUN_1061c6e18(void)

{
  return;
}



/* Entry: 1061c6e1c; end: 1061c6e87; -[SCLensesTooltipManager didHideLensesWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c6e1c(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(char *)(param_1 + _DAT_112742400) == '\x01') {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_1061c6e88;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_38);
  }
  return;
}



/* Entry: 1061c6e88; end: 1061c6ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c6e88(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be35e40(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112742418);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112742418) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061c6ec0; end: 1061c701f; -[SCLensesTooltipManager didActivateLens:withContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c6ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + _DAT_112742400) == '\x01') {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112742410);
    func_0x00010c07df00();
    if (iVar1 != 0) {
      puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_48 = 0xc2000000;
      uStack_40 = 0x1061c6f74;
      puStack_38 = &UNK_110841f80;
      lStack_30 = param_1;
      _objc_retain(param_3);
      uStack_28 = param_3;
      func_0x0001000d76cc("APPSTORE",&puStack_50);
      _objc_release(uStack_28);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1061c7020; end: 1061c7023; -[SCLensesTooltipManager didSelectLens:withContext:] */

void FUN_1061c7020(void)

{
  return;
}



/* Entry: 1061c7024; end: 1061c7027; -[SCLensesTooltipManager didUpdateActiveLensOrder:withContext:] */

void FUN_1061c7024(void)

{
  return;
}



/* Entry: 1061c7028; end: 1061c7093; -[SCLensesTooltipManager willDisplayLens:withContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c7028(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(char *)(param_1 + _DAT_112742400) == '\x01') {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_1061c7094;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_38);
  }
  return;
}



/* Entry: 1061c7094; end: 1061c70d7;  */

void FUN_1061c7094(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be9d400();
  if (iVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010be9d420();
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bebb550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s__showSwipeTooltipCheckingSuppres_11258c6f8);
      return;
    }
  }
  return;
}



/* Entry: 1061c70d8; end: 1061c70db; -[SCLensesTooltipManager didUpdateDisplayedLens:withContext:] */

void FUN_1061c70d8(void)

{
  return;
}



/* Entry: 1061c70dc; end: 1061c70df; -[SCLensesTooltipManager willShowLensesWithContext:] */

void FUN_1061c70dc(void)

{
  return;
}



/* Entry: 1061c70e0; end: 1061c711f; -[SCLensesTooltipManager setSwipeTooltip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c70e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112742410;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061c7120; end: 1061c717b; -[SCLensesTooltipManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c7120(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742410,0);
  _objc_storeStrong(param_1 + _DAT_112742418,0);
  _objc_destroyWeak(param_1 + _DAT_112742408);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127423fc,0);
  return;
}



/* Entry: 1061c717c; end: 1061c72f7; -[SCFeatureLensCloseButtonV2Impl initWithLensCarouselManager:layoutStrategy:lensPerformerProvider:arBar:uiFeatureRegistry:closeButtonCircleDiameter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1061c717c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f0300;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11274241c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742420;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742424;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742428;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274242c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112742430) = param_1;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742434);
    *(undefined **)((long)puVar1 + (long)_DAT_112742434) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1061c72f8; end: 1061c73a7; -[SCFeatureLensCloseButtonV2Impl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c72f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_112742438;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  lVar4 = (long)_DAT_112742420;
  func_0x00010bf47d20(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126c89c0;
  func_0x00010bf55260(*(undefined8 *)(param_1 + _DAT_112742430));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c08ccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_layoutFeatureContainer__112600d40,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 1061c73a8; end: 1061c7403; -[SCFeatureLensCloseButtonV2Impl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c73a8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0300;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_activate_112599760);
  func_0x00010c126480(*(undefined8 *)(param_1 + _DAT_11274242c));
  func_0x00010bec0940(param_1);
  return;
}



/* Entry: 1061c7404; end: 1061c747b; -[SCFeatureLensCloseButtonV2Impl isPointInsideView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061c7404(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112742438;
  uVar1 = *(ulong *)(param_3 + lVar3);
  if ((uVar1 != 0) && (func_0x00010c074c20(), (uVar1 & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010bf51200(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c102b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_pointInside_withEvent__11261e4e8,0);
    return uVar2;
  }
  return 0;
}



/* Entry: 1061c747c; end: 1061c748b; -[SCFeatureLensCloseButtonV2Impl setUIHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c747c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742438),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 1061c748c; end: 1061c74cf; -[SCFeatureLensCloseButtonV2Impl _didTapCloseButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c748c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742428);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beefb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061c74d0; end: 1061c750f; -[SCFeatureLensCloseButtonV2Impl _didActivateLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c74d0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 1;
  }
  else {
    func_0x00010c079580(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742438),PTR_s_setHidden__1126479f8,param_3);
  return;
}



/* Entry: 1061c7510; end: 1061c768f; -[SCFeatureLensCloseButtonV2Impl _startObserveLensesEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c7510(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274241c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef0b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112742424);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1061c7690; end: 1061c76ff;  */

void FUN_1061c7690(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bdfc200(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061c7700; end: 1061c778f; -[SCFeatureLensCloseButtonV2Impl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c7700(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742438,0);
  _objc_storeStrong(param_1 + _DAT_112742434,0);
  _objc_storeStrong(param_1 + _DAT_11274242c,0);
  _objc_storeStrong(param_1 + _DAT_112742428,0);
  _objc_storeStrong(param_1 + _DAT_112742424,0);
  _objc_storeStrong(param_1 + _DAT_112742420,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274241c,0);
  return;
}



/* Entry: 1061c7790; end: 1061c77df; +[SCLensCloseButtonV2 createCloseButtonWithCircleDiameter:] */

void FUN_1061c7790(double param_1)

{
  _objc_alloc(PTR_PTR_1126c89c0);
  func_0x00010c046a40(param_1 + 20.0,param_1 + 28.0,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061c77e0; end: 1061c78a3; -[SCLensCloseButtonV2 initWithSize:circleDiameter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1061c77e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f0308;
  uStack_40 = param_4;
  _objc_msgSendSuper2(0,0,param_1,param_2,&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274243c) = param_3;
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bdec040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742440);
    *(undefined1 **)((long)puVar1 + (long)_DAT_112742440) = puVar2;
    _objc_release(uVar3);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bdec0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742444);
    *(undefined1 **)((long)puVar1 + (long)_DAT_112742444) = puVar2;
    _objc_release(uVar3);
  }
  func_0x00010be49800(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 1061c78a4; end: 1061c7977; -[SCLensCloseButtonV2 _createCircleView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c78a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  lVar3 = (long)_DAT_11274243c;
  uVar5 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c013de0(0,0,uVar5,uVar5);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x69);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  dVar4 = *(double *)(param_1 + lVar3);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar4 * 0.5);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c21e900(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061c7978; end: 1061c79eb; -[SCLensCloseButtonV2 _createCloseIconImageView] */

void FUN_1061c7978(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010bde1620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar1,param_2,param_1);
  _objc_release(param_1);
  func_0x00010c182220(puVar1,param_2,1);
  func_0x00010c219b60(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061c79ec; end: 1061c7a57; -[SCLensCloseButtonV2 _closeIconImage] */

void FUN_1061c79ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x57);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar2,param_2,0x2f3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061c7a58; end: 1061c7de3; -[SCLensCloseButtonV2 _layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c7a58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_112742440;
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar15));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_11274243c;
  uVar8 = uVar7;
  func_0x00010bf49420(*(undefined8 *)(param_1 + lVar14));
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf49420(*(undefined8 *)(param_1 + lVar14));
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar10);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar11);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  lVar14 = (long)_DAT_112742444;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar15));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar11 = *(long *)(param_1 + lVar14);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf348e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar10);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(lVar3);
  _objc_release(uVar12);
  _objc_release(lVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar11 + _DAT_112742444,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar11 + _DAT_112742440,0);
  return;
}



/* Entry: 1061c7de4; end: 1061c7e23; -[SCLensCloseButtonV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c7de4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742444,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742440,0);
  return;
}



/* Entry: 1061c7e24; end: 1061c814f; -[SCFeatureLensFavoritesButtonImpl initWithLensFavoritesObservable:lensFavoritesUpdater:lensFavoritesButtonLogger:lensExplorerNavigation:lensFavoritesNotifications:navigationDelegate:lensIconRepository:layoutStrategy:lensPerformerProvider:controlStyle:isTextEnabled:ringFlashInfoProvider:lensCarouselManager:lensInfoButtonVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1061c7e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_68 = PTR_PTR_1126f0310;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112742448;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274244c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742450;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742454;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742458;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274245c,uVar2);
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742460;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742464;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742468;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274246c) = param_12;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112742470) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112742474) = param_13;
    lVar4 = (long)_DAT_112742478;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_15;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274247c;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742480;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_17;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742484);
    *(undefined **)((long)puVar1 + (long)_DAT_112742484) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1061c8150; end: 1061c815f; -[SCFeatureLensFavoritesButtonImpl lensFavoritesObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c8150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742448),PTR_s_target_112678178);
  return;
}



/* Entry: 1061c8160; end: 1061c816f; -[SCFeatureLensFavoritesButtonImpl lensFavoritesUpdater] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c8160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274244c),PTR_s_target_112678178);
  return;
}



/* Entry: 1061c8170; end: 1061c817f; -[SCFeatureLensFavoritesButtonImpl lensFavoritesButtonLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c8170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742450),PTR_s_target_112678178);
  return;
}



/* Entry: 1061c8180; end: 1061c818f; -[SCFeatureLensFavoritesButtonImpl lensExplorerNavigation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c8180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742454),PTR_s_target_112678178);
  return;
}



/* Entry: 1061c8190; end: 1061c819f; -[SCFeatureLensFavoritesButtonImpl lensFavoritesNotifications] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c8190(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742458),PTR_s_target_112678178);
  return;
}



/* Entry: 1061c81a0; end: 1061c81bf; -[SCFeatureLensFavoritesButtonImpl navigationDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c81a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274245c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061c81c0; end: 1061c81cf; -[SCFeatureLensFavoritesButtonImpl lensIconRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c81c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742460),PTR_s_target_112678178);
  return;
}



/* Entry: 1061c81d0; end: 1061c81df; -[SCFeatureLensFavoritesButtonImpl lensPerformerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c81d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742464),PTR_s_target_112678178);
  return;
}



/* Entry: 1061c81e0; end: 1061c82bf; -[SCFeatureLensFavoritesButtonImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c81e0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_112742488;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  lVar4 = (long)_DAT_112742468;
  func_0x00010bf47d20(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126c89c8;
  func_0x00010bf56160();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1d4c20(*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c08ccc0(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c19a690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setFavoriteState_animated__1126443c0,0,0);
  return;
}



/* Entry: 1061c82c0; end: 1061c831f; -[SCFeatureLensFavoritesButtonImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c82c0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0310;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_activate_112599760);
  if (*(long *)(param_1 + _DAT_112742470) == 0) {
    func_0x00010bec0940(param_1);
    func_0x00010bec0c60(param_1);
  }
  return;
}



/* Entry: 1061c8320; end: 1061c8487; -[SCFeatureLensFavoritesButtonImpl _didUpdateFavoritesWithDifference:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c8320(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c247520();
  if (lVar1 == 3) {
    lVar1 = param_3;
    func_0x00010bfa10a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      lVar1 = param_3;
      func_0x00010c27f100();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (lVar3 != 0) {
        func_0x00010c19a680(*(undefined8 *)(param_1 + _DAT_112742488),param_2,0,1);
        func_0x00010bed7d40(param_1);
      }
      _objc_release(lVar3);
    }
    else {
      func_0x00010c19a680(*(undefined8 *)(param_1 + _DAT_112742488),param_2,1,1);
      func_0x00010bed7d40(param_1);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061c8488; end: 1061c857f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061c8488(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274248c);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1061c8580; end: 1061c8793; -[SCFeatureLensFavoritesButtonImpl _didActivateLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c8580(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (param_3 == 0) {
LAB_1061c871c:
    lVar5 = (long)_DAT_11274248c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(long *)(param_1 + lVar5) = param_3;
    _objc_release(uVar2);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112742480);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2339c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) goto LAB_1061c871c;
    lVar5 = *(long *)(param_1 + _DAT_112742470);
    lVar6 = (long)_DAT_11274248c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(long *)(param_1 + lVar6) = param_3;
    _objc_release(uVar2);
    if (lVar5 == 1) {
      lVar5 = param_3;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_58,param_1);
      lVar6 = param_1;
      func_0x00010c093ba0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010c093c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(lVar5);
      func_0x00010c095b60(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c0b6bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(lVar3);
      _objc_release(lVar4);
      _objc_release(param_1);
      _objc_release(lVar3);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(lVar5);
      goto LAB_1061c874c;
    }
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112742488));
LAB_1061c874c:
  _objc_release(param_3);
  return;
}



/* Entry: 1061c8794; end: 1061c8897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c8794(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_1061c887c;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274248c);
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar3 == 0) goto LAB_1061c887c;
  uVar2 = param_2;
  func_0x00010c252d60();
  if (uVar2 < 2) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112742488));
  }
  else {
    if (uVar2 == 3) {
      lVar4 = (long)_DAT_112742488;
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
      uVar3 = *(undefined8 *)(param_1 + lVar4);
    }
    else {
      if (uVar2 != 2) goto LAB_1061c8874;
      lVar4 = (long)_DAT_112742488;
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
      uVar3 = *(undefined8 *)(param_1 + lVar4);
    }
    func_0x00010c19a680(uVar3);
  }
LAB_1061c8874:
  func_0x00010bed7d40(param_1);
LAB_1061c887c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061c8898; end: 1061c88d7; -[SCFeatureLensFavoritesButtonImpl pointInsideLensFavoriteButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c8898(long param_1)

{
  if (*(long *)(param_1 + _DAT_112742488) != 0) {
    func_0x00010bfb68e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectContainsPoint_110347550)();
    return;
  }
  return;
}



/* Entry: 1061c88d8; end: 1061c8907; -[SCFeatureLensFavoritesButtonImpl container] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c88d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742488);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061c8908; end: 1061c8987; -[SCFeatureLensFavoritesButtonImpl setCameraUIVisible:animated:arbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c8908(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112742484));
  uVar1 = 1;
  if (param_3 == 0) {
    uVar1 = 2;
  }
  *(undefined8 *)(param_1 + _DAT_112742470) = uVar1;
  if (param_3 != 0) {
    func_0x00010bec0940(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bec0c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startObservingRingFlashSelectio_11258dcc0)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742488),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 1061c8988; end: 1061c8a23; -[SCFeatureLensFavoritesButtonImpl _didChangeRingFlashActive:] */

/* WARNING: Possible PIC construction at 0x0001061c89ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001061c89f0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c8988(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_3 & 0xfffffffffffffffe) == 2) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112742478);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c141080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112742488);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112742488);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d79d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setOverrideTintColor__112653898,uVar2);
  return;
}



/* Entry: 1061c8a24; end: 1061c8e0b; -[SCFeatureLensFavoritesButtonImpl _startObserveLensesEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c8a24(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  lVar2 = param_1;
  func_0x00010c093ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c093ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c095b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar12;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0e0ea0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1061c8e0c;
  puStack_88 = &UNK_110914b38;
  _objc_copyWeak(auStack_80,auStack_78);
  lVar6 = lVar5;
  func_0x00010c25ff60(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar12 = (long)_DAT_11274247c;
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bef0b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c095b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0e0ea0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1061c8e54;
  puStack_b0 = &UNK_11084eff0;
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar10 = uVar9;
  func_0x00010c25ff60(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bef1060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar11;
  func_0x00010bef0b80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf41860(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar7);
  func_0x00010c095b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c0e0ec0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d0,auStack_78);
  uVar9 = uVar8;
  func_0x00010c25ff60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_d0);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 1061c8e0c; end: 1061c8f7f;  */

void FUN_1061c8e0c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01600();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061c8f80; end: 1061c909b; -[SCFeatureLensFavoritesButtonImpl _startObservingRingFlashSelectionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c8f80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = (long)_DAT_112742478;
  if (*(long *)(param_1 + lVar3) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1410e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_copyWeak(auStack_40,auStack_38);
    uVar1 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1061c909c; end: 1061c90fb;  */

void FUN_1061c909c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c141120(param_2);
  _objc_release(param_2);
  func_0x00010bdfca80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061c90fc; end: 1061c93bf; -[SCFeatureLensFavoritesButtonImpl _didTapFavoriteButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c90fc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [8];
  byte bStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf5e8e0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274248c);
  func_0x00010c094540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a680(param_3);
  func_0x00010bed7d40(param_1);
  func_0x00010c21e900(param_3);
  _objc_initWeak(auStack_78,param_1);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1061c93c0;
  puStack_98 = &UNK_110914bd8;
  _objc_retain(param_3);
  uStack_90 = param_3;
  bStack_80 = (byte)uVar1 ^ 1;
  _objc_copyWeak(auStack_88,auStack_78);
  ppuVar3 = &puStack_b0;
  _objc_retainBlock();
  func_0x00010be52c80(param_1);
  if ((uVar1 & 1) == 0) {
    lVar4 = param_1;
    func_0x00010c093c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfa1080();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar3);
    func_0x00010c095b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c0b6bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar5);
    _objc_release(lVar6);
    _objc_release(param_1);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  else {
    lVar4 = param_1;
    func_0x00010c093c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c27faa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar3);
    func_0x00010c095b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c0b6bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar5);
    _objc_release(lVar6);
    _objc_release(param_1);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1061c93c0; end: 1061c945f;  */

void FUN_1061c93c0(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  func_0x00010c21e900(*(undefined8 *)(param_1 + 0x20));
  if ((param_3 != 0) || (lVar1 = param_2, func_0x00010c252d60(), lVar1 != param_4)) {
    func_0x00010c19a680(*(undefined8 *)(param_1 + 0x20));
  }
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdfdca0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061c9460; end: 1061c947f;  */

void FUN_1061c9460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001061c946c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1061c9480; end: 1061c9503; -[SCFeatureLensFavoritesButtonImpl _updateFavoriteButtonAccessability] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c9480(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112742488;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010bf5e8e0();
  lVar1 = 8;
  if (iVar2 == 0) {
    lVar1 = 0x10;
  }
  uVar3 = *(undefined8 *)((long)&PTR_PTR_1109700a8 + lVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(uVar3);
  func_0x00010c160fc0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e83018);
  func_0x00010c1610a0(*(undefined8 *)(param_1 + lVar5),param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1061c9504; end: 1061c96b7; -[SCFeatureLensFavoritesButtonImpl _logEventWithLens:isFavorite:] */

void FUN_1061c9504(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126c89d0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2813a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11fae0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c2813a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c11fa40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c24a2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c2813a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar9 = uVar8;
  func_0x00010bef4d20(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0248c0(puVar1,param_2,uVar2,uVar4,uVar6,uVar7,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c093b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010c2a7180(param_1,param_2,puVar1,1);
  }
  else {
    func_0x00010c2a6520(param_1,param_2,puVar1,1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061c96b8; end: 1061c9a13; -[SCFeatureLensFavoritesButtonImpl _didFavoriteLensWithResult:expectedStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c96b8(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  lVar12 = (long)_DAT_112742488;
  func_0x00010bf5e8e0();
  uVar13 = *(undefined8 *)(param_2 + _DAT_11274248c);
  _objc_retain(uVar13);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b5928;
  _objc_alloc(PTR_PTR_1126b5928);
  uVar3 = uVar13;
  func_0x00010c094540(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar13;
  func_0x00010bfe5b40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar13;
  func_0x00010bf3ec40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024560(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar6 = param_2;
  func_0x00010c094480(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0943c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1061c9a14;
  puStack_88 = &UNK_1108e9370;
  _objc_retain(puVar1);
  lVar8 = param_2;
  puStack_80 = puVar1;
  uStack_78 = param_1;
  func_0x00010c095b60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(lVar7);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_initWeak(auStack_a8,param_2);
  lVar6 = param_2;
  func_0x00010c093b80(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010c10d360(lVar6);
  _objc_release(puVar10);
  _objc_release(lVar6);
  uVar11 = param_4;
  func_0x00010c252d60();
  if (1 < uVar11) {
    if (1 < uVar11 - 2) goto LAB_1061c9984;
    uVar11 = param_4;
    func_0x00010c252d60();
    if (param_5 == uVar11) {
      func_0x00010c252d60(param_4);
      func_0x00010c19a680(*(undefined8 *)(param_2 + lVar12));
      goto LAB_1061c9984;
    }
  }
  func_0x00010c19a680(*(undefined8 *)(param_2 + lVar12));
LAB_1061c9984:
  func_0x00010bed7d40(param_2);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puStack_80);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar13);
  _objc_release(param_4);
  return;
}



/* Entry: 1061c9a14; end: 1061c9aab;  */

void FUN_1061c9a14(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  func_0x00010c14e6c0(0x4045000000000000,0x4045000000000000,*(undefined8 *)(param_1 + 0x28),param_2)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061c9aac; end: 1061c9b97; -[SCFeatureLensFavoritesButtonImpl _didTapNotification] */

void FUN_1061c9aac(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c093320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9b3e0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar1 = param_1;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  if (uVar3 != 0) {
    uVar1 = uVar3;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    func_0x00010c093320(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10cb40();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061c9b98; end: 1061c9ca3; -[SCFeatureLensFavoritesButtonImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c9b98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274248c,0);
  _objc_storeStrong(param_1 + _DAT_112742488,0);
  _objc_storeStrong(param_1 + _DAT_112742484,0);
  _objc_storeStrong(param_1 + _DAT_112742480,0);
  _objc_storeStrong(param_1 + _DAT_11274247c,0);
  _objc_storeStrong(param_1 + _DAT_112742478,0);
  _objc_storeStrong(param_1 + _DAT_112742468,0);
  _objc_storeStrong(param_1 + _DAT_112742464,0);
  _objc_storeStrong(param_1 + _DAT_112742450,0);
  _objc_storeStrong(param_1 + _DAT_112742460,0);
  _objc_destroyWeak(param_1 + _DAT_11274245c);
  _objc_storeStrong(param_1 + _DAT_112742458,0);
  _objc_storeStrong(param_1 + _DAT_112742454,0);
  _objc_storeStrong(param_1 + _DAT_11274244c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742448,0);
  return;
}



/* Entry: 1061c9ca4; end: 1061c9d9b; +[SCLensFavoritesButton createFavoriteButtonWithControlStyle:isTextEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c9ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar4 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  if (param_4 == 0) {
    uVar3 = 0x4048000000000000;
    uVar4 = 0x4042000000000000;
  }
  puVar1 = PTR_PTR_1126c89c8;
  _objc_alloc();
  func_0x00010c0469e0(uVar3,uVar4);
  puVar1[_DAT_112742490] = 0;
  puVar2 = PTR_PTR_1126c89d8;
  func_0x00010c091ea0(PTR_PTR_1126c89d8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar1 + _DAT_112742494);
  *(undefined **)(puVar1 + _DAT_112742494) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c89d8;
  func_0x00010c091ec0(PTR_PTR_1126c89d8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar1 + _DAT_112742498);
  *(undefined **)(puVar1 + _DAT_112742498) = puVar2;
  _objc_release(uVar3);
  puVar1[_DAT_11274249c] = (char)param_4;
  if (param_4 != 0) {
    func_0x00010beb09e0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061c9d9c; end: 1061c9de3; -[SCLensFavoritesButton initWithSize:] */

void FUN_1061c9d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f0318;
  uStack_20 = param_3;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_1,param_2,&uStack_20,
                      PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 1061c9de4; end: 1061c9e83; -[SCLensFavoritesButton setOverrideTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c9de4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_1127424a0;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071c60(uVar1,param_2,param_3);
  if (((uVar1 & 1) == 0) && (*(long *)(param_1 + lVar3) != param_3)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127424a4);
    lVar3 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x00010bdc0fe0();
    func_0x00010c16e440(uVar2,param_2,lVar3);
    func_0x00010c216180(param_1,param_2,param_3 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061c9e84; end: 1061c9f23; -[SCLensFavoritesButton setTintEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c9e84(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)_DAT_1127424a8;
  func_0x00010c12c940(*(undefined8 *)(param_1 + lVar1));
  lVar2 = (long)_DAT_1127424a4;
  func_0x00010c12c940(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c1c2c00(*(undefined8 *)(param_1 + lVar2),param_2,0);
  if (param_3 == 0) {
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1c2c00(*(undefined8 *)(param_1 + lVar2),param_2,*(undefined8 *)(param_1 + lVar1));
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010befbb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061c9f24; end: 1061ca06b; -[SCLensFavoritesButton _setupBackgroundLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061c9f24(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = PTR__OBJC_CLASS___CALayer_1126b1750;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_5);
  func_0x00010c1739e0(puVar2);
  uVar3 = *(undefined8 *)(param_5 + _DAT_112742494);
  func_0x00010bdc0fe0(uVar3);
  func_0x00010c16e440(puVar2,param_6,uVar3);
  func_0x00010c1842e0(0x4032000000000000,puVar2);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c182d20(puVar2);
  _objc_release(puVar4);
  func_0x00010c167d20(0x3fe0000000000000,0x3fe0000000000000,puVar2);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010c1dee80(param_3 * 0.5,param_4 * 0.5,puVar2);
  cVar1 = *(char *)(param_5 + _DAT_11274249c);
  lVar5 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  if (cVar1 == '\x01') {
    func_0x00010c066f60(lVar5,param_6,puVar2,*(undefined8 *)(param_5 + _DAT_1127424ac));
  }
  else {
    func_0x00010befbb20(lVar5,param_6,puVar2);
  }
  _objc_release(lVar5);
  uVar3 = *(undefined8 *)(param_5 + _DAT_1127424b0);
  *(undefined **)(param_5 + _DAT_1127424b0) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1061ca06c; end: 1061ca1e7; -[SCLensFavoritesButton _setupHeartLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ca06c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  dVar5 = 16.0;
  dVar6 = 16.0;
  func_0x00010c1739e0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x4030000000000000,
                      0x4030000000000000);
  func_0x00010c167d20(0x3fe0000000000000,0x3fe0000000000000,puVar1);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c182d20(puVar1);
  _objc_release(puVar2);
  func_0x00010c1dee80(0x4038000000000000,0x4032000000000000,puVar1);
  func_0x00010c182ca0(puVar1,param_2,*(undefined8 *)PTR__kCAGravityCenter_110346d20);
  lVar3 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___CALayer_1126b1750;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_1);
  func_0x00010c1739e0(puVar2);
  func_0x00010c167d20(0x3fe0000000000000,0x3fe0000000000000,puVar2);
  func_0x00010bf20c00(param_1);
  func_0x00010bf20c00(param_1);
  func_0x00010c1dee80(dVar5 * 0.5,dVar6 * 0.5,puVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127424a8);
  *(undefined **)(param_1 + _DAT_1127424a8) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127424a4);
  *(undefined **)(param_1 + _DAT_1127424a4) = puVar2;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061ca1e8; end: 1061ca3eb; -[SCLensFavoritesButton _setupTitleLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ca1e8(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e44698;
  _CTFontCreateWithName(0x402a000000000000,&PTR____CFConstantStringClassReference_110e44698,0);
  puVar2 = PTR__OBJC_CLASS___CATextLayer_1126c8768;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_1061e0978();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e7c0(puVar2);
  _objc_release(puVar3);
  func_0x00010c19e480(puVar2);
  func_0x00010c166c80(puVar2);
  func_0x00010c19e5c0(0x402a000000000000,puVar2);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c182d20(puVar2);
  _objc_release(puVar3);
  dVar5 = 0.5;
  uVar6 = 0x3fe0000000000000;
  func_0x00010c167d20(0x3fe0000000000000,0x3fe0000000000000,puVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19ea60(puVar2);
  _objc_release(puVar3);
  func_0x00010c182ca0(puVar2);
  _CFRelease(ppuVar1);
  func_0x00010c106b00(puVar2);
  uVar7 = *(undefined8 *)PTR__CGPointZero_110347540;
  uVar8 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  func_0x00010c1739e0(uVar7,uVar8,dVar5 + 16.0 + 24.0 + 16.0,0x4042000000000000,param_1);
  func_0x00010c19f0e0(uVar7,uVar8,dVar5,uVar6,puVar2);
  func_0x00010c1dee80(dVar5 * 0.5 + 32.0 + 6.0,0x4032000000000000,puVar2);
  lVar4 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(lVar4);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127424ac);
  *(undefined **)(param_1 + _DAT_1127424ac) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1061ca3ec; end: 1061ca473; -[SCLensFavoritesButton _heartIconForFavoriteState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ca3ec(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  if ((param_3 & 1) == 0) {
    func_0x00010921dd4c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010921dbd8();
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)(param_1 + _DAT_1127424a0) != 0) {
    func_0x00010bfe9720(lVar1,param_2,2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar2 = lVar1;
  _objc_retainAutorelease(lVar1);
  func_0x00010bdc1020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1061ca474; end: 1061ca4fb; -[SCLensFavoritesButton _titleTransformForFavoriteState:] */

void FUN_1061ca474(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar1 = PTR__CATransform3DIdentity_110346c58;
  if (param_4 != 0) {
    uStack_48 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
    uStack_50 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
    uStack_38 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
    uStack_40 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
    uStack_28 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
    uStack_30 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
    uStack_18 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
    uStack_20 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
    uStack_88 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
    uStack_90 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
    uStack_78 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
    uStack_80 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
    uStack_68 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
    uStack_70 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
    uStack_58 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
    uStack_60 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
    _CATransform3DScale(0x3fe6666666666666,0x3fe6666666666666,0x3ff0000000000000,&uStack_90);
    return;
  }
  uVar2 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
  uVar4 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
  uVar3 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
  param_1[9] = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
  param_1[8] = uVar2;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  uVar2 = *(undefined8 *)(puVar1 + 0x60);
  uVar4 = *(undefined8 *)(puVar1 + 0x78);
  uVar3 = *(undefined8 *)(puVar1 + 0x70);
  param_1[0xd] = *(undefined8 *)(puVar1 + 0x68);
  param_1[0xc] = uVar2;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  uVar2 = *(undefined8 *)puVar1;
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  uVar3 = *(undefined8 *)(puVar1 + 0x10);
  param_1[1] = *(undefined8 *)(puVar1 + 8);
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = *(undefined8 *)(puVar1 + 0x20);
  uVar4 = *(undefined8 *)(puVar1 + 0x38);
  uVar3 = *(undefined8 *)(puVar1 + 0x30);
  param_1[5] = *(undefined8 *)(puVar1 + 0x28);
  param_1[4] = uVar2;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  return;
}



/* Entry: 1061ca4fc; end: 1061ca7cf; -[SCLensFavoritesButton _heartAnimationForFavoriteState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ca4fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  double dStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c104260(*(undefined8 *)(param_3 + _DAT_1127424b0));
  uVar9 = (uint)param_5;
  uVar11 = 0x4032000000000000;
  if (uVar9 == 0) {
    uVar11 = param_2;
  }
  uVar15 = param_1;
  uVar16 = 0x4038000000000000;
  if (uVar9 == 0) {
    uVar15 = 0x4038000000000000;
    param_2 = 0x4032000000000000;
    uVar16 = param_1;
  }
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_4,
                      &PTR____CFConstantStringClassReference_110daf598);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(uVar16,uVar11,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar1,param_4,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(uVar15,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar1,param_4,puVar2);
  _objc_release(puVar2);
  func_0x00010c192d40(0x3fd3333333333333,puVar1);
  uVar11 = *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80;
  puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_4,uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar1,param_4,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_4,
                      &PTR____CFConstantStringClassReference_110dbf198);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_3;
  func_0x00010be34f20(param_3,param_4,uVar9 ^ 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar2,param_4,lVar10);
  _objc_release(lVar10);
  lVar10 = param_3;
  func_0x00010be34f20(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar2,param_4,lVar10);
  _objc_release(lVar10);
  func_0x00010c192d40(0x3fd3333333333333,puVar2);
  puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_4,uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar2,param_4,puVar3);
  _objc_release(puVar3);
  lVar12 = (long)_DAT_1127424a8;
  func_0x00010c1dee80(uVar15,param_2,*(undefined8 *)(param_3 + lVar12));
  lVar10 = param_3;
  func_0x00010be34f20(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182c80(*(undefined8 *)(param_3 + lVar12),param_4,lVar10);
  _objc_release(lVar10);
  puVar3 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar1;
  puStack_80 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c168400(puVar3);
  _objc_release(puVar4);
  func_0x00010c192d40(0x3fd3333333333333,puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    uStack_f8 = 0x3fd3333333333333;
    pcStack_98 = FUN_1061ca7d0;
    lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    uStack_110 = uVar16;
    uStack_108 = param_2;
    uStack_100 = uVar15;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_4,
                        &PTR____CFConstantStringClassReference_110dbf258);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uVar9 = (uint)puVar7;
    func_0x00010becc5e0(&uStack_1b0,puVar1,param_4,uVar9 ^ 1);
    func_0x00010c297140(puVar2,param_4,&uStack_1b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar4,param_4,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010becc5e0(&uStack_1b0,puVar1,param_4,puVar7);
    func_0x00010c297140(puVar2,param_4,&uStack_1b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar4,param_4,puVar2);
    _objc_release(puVar2);
    uVar15 = *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80;
    puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_4,uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar4,param_4,puVar2);
    _objc_release(puVar2);
    uVar11 = 0x3fb999999999999a;
    if (uVar9 == 0) {
      uVar11 = 0x3fc999999999999a;
    }
    func_0x00010c192d40(uVar11,puVar4);
    _CACurrentMediaTime();
    dVar14 = 0.0;
    if (uVar9 == 0) {
      dVar14 = 1.0;
    }
    uVar16 = 0x3ff0000000000000;
    if (uVar9 == 0) {
      uVar16 = 0;
    }
    func_0x00010c16fd40(puVar4);
    puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_4,
                        &PTR____CFConstantStringClassReference_110dbf678);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(uVar16,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar2,param_4,puVar3);
    _objc_release(puVar3);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar2,param_4,puVar5);
    _objc_release(puVar5);
    func_0x00010c192d40(uVar11,puVar2);
    puVar6 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_4,uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar2,param_4,puVar6);
    _objc_release(puVar6);
    _CACurrentMediaTime();
    func_0x00010c16fd40(puVar2);
    func_0x00010becc5e0(&uStack_230,puVar1,param_4,puVar7);
    lVar10 = (long)_DAT_1127424ac;
    uStack_168 = uStack_1e8;
    uStack_170 = uStack_1f0;
    uStack_158 = uStack_1d8;
    uStack_160 = uStack_1e0;
    uStack_148 = uStack_1c8;
    uStack_150 = uStack_1d0;
    uStack_138 = uStack_1b8;
    uStack_140 = uStack_1c0;
    uStack_1a8 = uStack_228;
    uStack_1b0 = uStack_230;
    uStack_198 = uStack_218;
    uStack_1a0 = uStack_220;
    uStack_188 = uStack_208;
    uStack_190 = uStack_210;
    uStack_178 = uStack_1f8;
    uStack_180 = uStack_200;
    func_0x00010c219960(*(undefined8 *)(puVar1 + lVar10),param_4,&uStack_1b0);
    func_0x00010c1d4bc0((float)dVar14,*(undefined8 *)(puVar1 + lVar10));
    puVar3 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
    _objc_opt_new();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_128 = puVar4;
    puStack_120 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_128,2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c168400(puVar3);
    iVar8 = (int)puVar7;
    _objc_release(puVar1);
    _objc_release(puVar2);
    puVar7 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      uStack_2a0 = 0x3fb999999999999a;
      ppuStack_280 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      ppuStack_278 = &PTR_PTR_1126b6000;
      pcStack_238 = FUN_1061caaf4;
      uStack_298 = uVar16;
      uStack_290 = uVar11;
      dStack_288 = dVar14;
      puStack_270 = puVar5;
      puStack_268 = puVar6;
      puStack_260 = puVar2;
      puStack_258 = puVar1;
      puStack_250 = puVar3;
      puStack_248 = puVar4;
      ppuStack_240 = &puStack_a0;
      func_0x00010beea6e0();
      lVar12 = (long)_DAT_1127424b0;
      func_0x00010c12aaa0(*(undefined8 *)(puVar7 + lVar12));
      lVar10 = (long)_DAT_1127424a8;
      func_0x00010c12aaa0(*(undefined8 *)(puVar7 + lVar10));
      lVar13 = (long)_DAT_11274249c;
      if (puVar7[lVar13] == '\x01') {
        func_0x00010c12aaa0(*(undefined8 *)(puVar7 + _DAT_1127424ac));
      }
      if (iVar8 == 0) {
        func_0x00010c1739e0(*(undefined8 *)PTR__CGPointZero_110347540,
                            *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x4048000000000000,
                            0x4042000000000000,*(undefined8 *)(puVar7 + lVar12));
        func_0x00010c104260(*(undefined8 *)(puVar7 + lVar12));
        func_0x00010c1dee80(*(undefined8 *)(puVar7 + lVar10));
        puVar1 = puVar7;
        func_0x00010be34f20(puVar7,param_4,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c182c80(*(undefined8 *)(puVar7 + lVar10),param_4,puVar1);
        _objc_release(puVar1);
        if (puVar7[lVar13] == '\x01') {
          func_0x00010becc5e0(&uStack_320,puVar7,param_4,1);
          lVar10 = (long)_DAT_1127424ac;
          uStack_358 = uStack_2d8;
          uStack_360 = uStack_2e0;
          uStack_348 = uStack_2c8;
          uStack_350 = uStack_2d0;
          uStack_338 = uStack_2b8;
          uStack_340 = uStack_2c0;
          uStack_328 = uStack_2a8;
          uStack_330 = uStack_2b0;
          uStack_398 = uStack_318;
          uStack_3a0 = uStack_320;
          uStack_388 = uStack_308;
          uStack_390 = uStack_310;
          uStack_378 = uStack_2f8;
          uStack_380 = uStack_300;
          uStack_368 = uStack_2e8;
          uStack_370 = uStack_2f0;
          func_0x00010c219960(*(undefined8 *)(puVar7 + lVar10),param_4,&uStack_3a0);
          func_0x00010c1d4bc0(0,*(undefined8 *)(puVar7 + lVar10));
        }
        return;
      }
      puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
      func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_4,
                          &PTR____CFConstantStringClassReference_110e41f78);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      uVar11 = *(undefined8 *)PTR__CGPointZero_110347540;
      uVar15 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
      func_0x00010bf20c00(puVar7);
      func_0x00010c2971a0(uVar11,uVar15,puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1180(puVar2,param_4,puVar1);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c2971a0(uVar11,uVar15,0x4048000000000000,0x4042000000000000,
                          PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216920(puVar2,param_4,puVar1);
      _objc_release(puVar1);
      func_0x00010c192d40(0x3fd3333333333333,puVar2);
      puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
      func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_4,
                          *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216080(puVar2,param_4,puVar1);
      _objc_release(puVar1);
      func_0x00010c1739e0(uVar11,uVar15,0x4048000000000000,0x4042000000000000,
                          *(undefined8 *)(puVar7 + lVar12));
      if (puVar7[lVar13] == '\x01') {
        puVar1 = puVar7;
        func_0x00010becc3c0(puVar7,param_4,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6c20(*(undefined8 *)(puVar7 + _DAT_1127424ac),param_4,puVar1,0);
        _objc_release(puVar1);
      }
      puVar1 = puVar7;
      func_0x00010be34f00(puVar7,param_4,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20(*(undefined8 *)(puVar7 + lVar12),param_4,puVar2,0);
      func_0x00010bef6c20(*(undefined8 *)(puVar7 + lVar10),param_4,puVar1,0);
      _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061ca7d0; end: 1061caaf3; -[SCLensFavoritesButton _titleAnimationForFavoriteState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ca7d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  double dStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110dbf258);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uVar9 = (uint)param_3;
  func_0x00010becc5e0(&uStack_120,param_1,param_2,uVar9 ^ 1);
  func_0x00010c297140(puVar2,param_2,&uStack_120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010becc5e0(&uStack_120,param_1,param_2,param_3);
  func_0x00010c297140(puVar2,param_2,&uStack_120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar11 = *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80;
  puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar15 = 0x3fb999999999999a;
  if (uVar9 == 0) {
    uVar15 = 0x3fc999999999999a;
  }
  func_0x00010c192d40(uVar15,puVar1);
  _CACurrentMediaTime();
  dVar14 = 0.0;
  if (uVar9 == 0) {
    dVar14 = 1.0;
  }
  uVar16 = 0x3ff0000000000000;
  if (uVar9 == 0) {
    uVar16 = 0;
  }
  func_0x00010c16fd40(puVar1);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(uVar16,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c192d40(uVar15,puVar2);
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _CACurrentMediaTime();
  func_0x00010c16fd40(puVar2);
  func_0x00010becc5e0(&uStack_1a0,param_1,param_2,param_3);
  lVar10 = (long)_DAT_1127424ac;
  uStack_d8 = uStack_158;
  uStack_e0 = uStack_160;
  uStack_c8 = uStack_148;
  uStack_d0 = uStack_150;
  uStack_b8 = uStack_138;
  uStack_c0 = uStack_140;
  uStack_a8 = uStack_128;
  uStack_b0 = uStack_130;
  uStack_118 = uStack_198;
  uStack_120 = uStack_1a0;
  uStack_108 = uStack_188;
  uStack_110 = uStack_190;
  uStack_f8 = uStack_178;
  uStack_100 = uStack_180;
  uStack_e8 = uStack_168;
  uStack_f0 = uStack_170;
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar10),param_2,&uStack_120);
  func_0x00010c1d4bc0((float)dVar14,*(undefined8 *)(param_1 + lVar10));
  puVar5 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar1;
  puStack_90 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c168400(puVar5);
  iVar8 = (int)puVar7;
  _objc_release(puVar6);
  _objc_release(puVar2);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  uStack_210 = 0x3fb999999999999a;
  ppuStack_1f0 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  ppuStack_1e8 = &PTR_PTR_1126b6000;
  pcStack_1a8 = FUN_1061caaf4;
  uStack_208 = uVar16;
  uStack_200 = uVar15;
  dStack_1f8 = dVar14;
  puStack_1e0 = puVar3;
  puStack_1d8 = puVar4;
  puStack_1d0 = puVar2;
  puStack_1c8 = puVar6;
  puStack_1c0 = puVar5;
  puStack_1b8 = puVar1;
  puStack_1b0 = &stack0xfffffffffffffff0;
  func_0x00010beea6e0();
  lVar12 = (long)_DAT_1127424b0;
  func_0x00010c12aaa0(*(undefined8 *)(puVar7 + lVar12));
  lVar10 = (long)_DAT_1127424a8;
  func_0x00010c12aaa0(*(undefined8 *)(puVar7 + lVar10));
  lVar13 = (long)_DAT_11274249c;
  if (puVar7[lVar13] == '\x01') {
    func_0x00010c12aaa0(*(undefined8 *)(puVar7 + _DAT_1127424ac));
  }
  if (iVar8 == 0) {
    func_0x00010c1739e0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x4048000000000000,
                        0x4042000000000000,*(undefined8 *)(puVar7 + lVar12));
    func_0x00010c104260(*(undefined8 *)(puVar7 + lVar12));
    func_0x00010c1dee80(*(undefined8 *)(puVar7 + lVar10));
    puVar2 = puVar7;
    func_0x00010be34f20(puVar7,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182c80(*(undefined8 *)(puVar7 + lVar10),param_2,puVar2);
    _objc_release(puVar2);
    if (puVar7[lVar13] == '\x01') {
      func_0x00010becc5e0(&uStack_290,puVar7,param_2,1);
      lVar10 = (long)_DAT_1127424ac;
      uStack_2c8 = uStack_248;
      uStack_2d0 = uStack_250;
      uStack_2b8 = uStack_238;
      uStack_2c0 = uStack_240;
      uStack_2a8 = uStack_228;
      uStack_2b0 = uStack_230;
      uStack_298 = uStack_218;
      uStack_2a0 = uStack_220;
      uStack_308 = uStack_288;
      uStack_310 = uStack_290;
      uStack_2f8 = uStack_278;
      uStack_300 = uStack_280;
      uStack_2e8 = uStack_268;
      uStack_2f0 = uStack_270;
      uStack_2d8 = uStack_258;
      uStack_2e0 = uStack_260;
      func_0x00010c219960(*(undefined8 *)(puVar7 + lVar10),param_2,&uStack_310);
      func_0x00010c1d4bc0(0,*(undefined8 *)(puVar7 + lVar10));
    }
    return;
  }
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110e41f78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uVar15 = *(undefined8 *)PTR__CGPointZero_110347540;
  uVar11 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  func_0x00010bf20c00(puVar7);
  func_0x00010c2971a0(uVar15,uVar11,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971a0(uVar15,uVar11,0x4048000000000000,0x4042000000000000,
                      PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c192d40(0x3fd3333333333333,puVar1);
  puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1739e0(uVar15,uVar11,0x4048000000000000,0x4042000000000000,
                      *(undefined8 *)(puVar7 + lVar12));
  if (puVar7[lVar13] == '\x01') {
    puVar2 = puVar7;
    func_0x00010becc3c0(puVar7,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20(*(undefined8 *)(puVar7 + _DAT_1127424ac),param_2,puVar2,0);
    _objc_release(puVar2);
  }
  puVar2 = puVar7;
  func_0x00010be34f00(puVar7,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20(*(undefined8 *)(puVar7 + lVar12),param_2,puVar1,0);
  func_0x00010bef6c20(*(undefined8 *)(puVar7 + lVar10),param_2,puVar2,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061caaf4; end: 1061cae07; -[SCLensFavoritesButton _setupFavoriteStateAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061caaf4(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  
  func_0x00010beea6e0();
  lVar4 = (long)_DAT_1127424b0;
  func_0x00010c12aaa0(*(undefined8 *)(param_1 + lVar4));
  lVar3 = (long)_DAT_1127424a8;
  func_0x00010c12aaa0(*(undefined8 *)(param_1 + lVar3));
  lVar5 = (long)_DAT_11274249c;
  if (*(char *)(param_1 + lVar5) == '\x01') {
    func_0x00010c12aaa0(*(undefined8 *)(param_1 + _DAT_1127424ac));
  }
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                        &PTR____CFConstantStringClassReference_110e41f78);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uVar6 = *(undefined8 *)PTR__CGPointZero_110347540;
    uVar7 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    func_0x00010bf20c00(param_1);
    func_0x00010c2971a0(uVar6,uVar7,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c2971a0(uVar6,uVar7,0x4048000000000000,0x4042000000000000,
                        PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c192d40(0x3fd3333333333333,puVar1);
    puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                        *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c1739e0(uVar6,uVar7,0x4048000000000000,0x4042000000000000,
                        *(undefined8 *)(param_1 + lVar4));
    if (*(char *)(param_1 + lVar5) == '\x01') {
      lVar5 = param_1;
      func_0x00010becc3c0(param_1,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20(*(undefined8 *)(param_1 + _DAT_1127424ac),param_2,lVar5,0);
      _objc_release(lVar5);
    }
    lVar5 = param_1;
    func_0x00010be34f00(param_1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20(*(undefined8 *)(param_1 + lVar4),param_2,puVar1,0);
    func_0x00010bef6c20(*(undefined8 *)(param_1 + lVar3),param_2,lVar5,0);
    _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  func_0x00010c1739e0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x4048000000000000,
                      0x4042000000000000,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c104260(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1dee80(*(undefined8 *)(param_1 + lVar3));
  lVar4 = param_1;
  func_0x00010be34f20(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182c80(*(undefined8 *)(param_1 + lVar3),param_2,lVar4);
  _objc_release(lVar4);
  if (*(char *)(param_1 + lVar5) == '\x01') {
    func_0x00010becc5e0(&uStack_f0,param_1,param_2,1);
    lVar3 = (long)_DAT_1127424ac;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    uStack_148 = uStack_c8;
    uStack_150 = uStack_d0;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    func_0x00010c219960(*(undefined8 *)(param_1 + lVar3),param_2,&uStack_170);
    func_0x00010c1d4bc0(0,*(undefined8 *)(param_1 + lVar3));
  }
  return;
}



/* Entry: 1061cae08; end: 1061cb107; -[SCLensFavoritesButton _setupUnfavoriteStateAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cae08(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010beea6e0();
  lVar4 = (long)_DAT_1127424b0;
  func_0x00010c12aaa0(*(undefined8 *)(param_1 + lVar4));
  lVar3 = (long)_DAT_1127424a8;
  func_0x00010c12aaa0(*(undefined8 *)(param_1 + lVar3));
  lVar5 = (long)_DAT_11274249c;
  if (*(char *)(param_1 + lVar5) == '\x01') {
    func_0x00010c12aaa0(*(undefined8 *)(param_1 + _DAT_1127424ac));
  }
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                        &PTR____CFConstantStringClassReference_110e41f78);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c2971a0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x4048000000000000,
                        0x4042000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010bf20c00(param_1);
    func_0x00010c2971a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c192d40(0x3fd3333333333333,puVar1);
    puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                        *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010bf20c00(param_1);
    func_0x00010c1739e0(*(undefined8 *)(param_1 + lVar4));
    if (*(char *)(param_1 + lVar5) == '\x01') {
      lVar5 = param_1;
      func_0x00010becc3c0(param_1,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20(*(undefined8 *)(param_1 + _DAT_1127424ac),param_2,lVar5,0);
      _objc_release(lVar5);
    }
    lVar5 = param_1;
    func_0x00010be34f00(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20(*(undefined8 *)(param_1 + lVar4),param_2,puVar1,0);
    func_0x00010bef6c20(*(undefined8 *)(param_1 + lVar3),param_2,lVar5,0);
    _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  if (*(char *)(param_1 + lVar5) == '\x01') {
    func_0x00010bf20c00(param_1);
    func_0x00010c1739e0(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c1dee80(0x4038000000000000,0x4032000000000000,*(undefined8 *)(param_1 + lVar3));
    func_0x00010becc5e0(&uStack_d0,param_1,param_2,0);
    lVar4 = (long)_DAT_1127424ac;
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e8 = uStack_68;
    uStack_f0 = uStack_70;
    uStack_d8 = uStack_58;
    uStack_e0 = uStack_60;
    uStack_148 = uStack_c8;
    uStack_150 = uStack_d0;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    func_0x00010c219960(*(undefined8 *)(param_1 + lVar4),param_2,&uStack_150);
    func_0x00010c1d4bc0(0x3f800000,*(undefined8 *)(param_1 + lVar4));
  }
  else {
    func_0x00010c1739e0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x4048000000000000,
                        0x4042000000000000,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c104260(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c1dee80(*(undefined8 *)(param_1 + lVar3));
  }
  lVar4 = param_1;
  func_0x00010be34f20(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182c80(*(undefined8 *)(param_1 + lVar3),param_2,lVar4);
  _objc_release(lVar4);
  return;
}



/* Entry: 1061cb108; end: 1061cb163; -[SCLensFavoritesButton _isWarmuped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1061cb108(long param_1)

{
  if ((*(long *)(param_1 + _DAT_1127424b0) != 0) && (*(long *)(param_1 + _DAT_1127424a8) != 0)) {
    if (*(char *)(param_1 + _DAT_11274249c) == '\x01') {
      return *(long *)(param_1 + _DAT_1127424ac) != 0;
    }
    return true;
  }
  return false;
}



/* Entry: 1061cb164; end: 1061cb1db; -[SCLensFavoritesButton _warmup] */

void FUN_1061cb164(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010be45920();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010beaac40(param_1);
  func_0x00010beacfc0(param_1);
  puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x00010c050900();
  func_0x00010c1c8340(0);
  func_0x00010bef9040(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1061cb1dc; end: 1061cb297; -[SCLensFavoritesButton _didHandleLongTapGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cb1dc(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar4;
  int *piVar5;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c252440();
  func_0x00010c09ef00(param_3);
  _objc_release(param_3);
  lVar3 = param_1;
  func_0x00010bf20c00();
  iVar1 = (int)lVar3;
  _CGRectContainsPoint();
  piVar5 = (int *)&DAT_112742494;
  if (iVar1 != 0) {
    if (lVar2 - 1U < 2) {
      piVar5 = (int *)&DAT_112742498;
    }
    func_0x00010c15b4c0(param_1);
  }
  uVar4 = *(undefined8 *)(param_1 + *piVar5);
  func_0x00010bdc0fe0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c16e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127424b0),PTR_s_setBackgroundColor__112639330,uVar4);
  return;
}



/* Entry: 1061cb298; end: 1061cb2a7; -[SCLensFavoritesButton currentFavoriteState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061cb298(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112742490);
}



/* Entry: 1061cb2a8; end: 1061cb31f; -[SCLensFavoritesButton setFavoriteState:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cb2a8(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be45920();
  if (((int)lVar1 != 0) && (*(byte *)(param_1 + _DAT_112742490) == param_3)) {
    return;
  }
  *(char *)(param_1 + _DAT_112742490) = (char)param_3;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beac950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupFavoriteStateAnimated__112588bf8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beb0e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setupUnfavoriteStateAnimated__112589d38,param_4);
  return;
}



/* Entry: 1061cb320; end: 1061cb3af; -[SCLensFavoritesButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cb320(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127424a0,0);
  _objc_storeStrong(param_1 + _DAT_112742498,0);
  _objc_storeStrong(param_1 + _DAT_112742494,0);
  _objc_storeStrong(param_1 + _DAT_1127424ac,0);
  _objc_storeStrong(param_1 + _DAT_1127424a8,0);
  _objc_storeStrong(param_1 + _DAT_1127424a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127424b0,0);
  return;
}



/* Entry: 1061cb3b0; end: 1061cb3f7; -[SCFeatureLensCloseButtonV2LayoutStrategy initCenteredInFooterArea:] */

void FUN_1061cb3b0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0320;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0x10) = param_3;
  }
  return;
}



/* Entry: 1061cb3f8; end: 1061cb403; -[SCFeatureLensCloseButtonV2LayoutStrategy configureWithView:] */

void FUN_1061cb3f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1061cb404; end: 1061cb4b3; -[SCFeatureLensCloseButtonV2LayoutStrategy layoutFeatureContainer:] */

void FUN_1061cb404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  _objc_retain(param_7);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    if (*(char *)(param_5 + 0x10) == '\x01') {
      func_0x00010be48f40(param_5,param_6,param_7);
    }
    else {
      param_5 = param_5 + 8;
      _objc_loadWeakRetained(param_5);
      lVar1 = param_5;
      func_0x00010bfe1200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00(param_7);
      func_0x00010bf07160(param_3,param_4,lVar1,param_6,param_7,3);
      _objc_release(lVar1);
      _objc_release(param_5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1061cb4b4; end: 1061cb89b; -[SCFeatureLensCloseButtonV2LayoutStrategy _layoutCenteredInFooterArea:] */

void FUN_1061cb4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  param_5 = param_5 + 8;
  _objc_loadWeakRetained();
  lVar1 = param_5;
  func_0x00010bfe12e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bf20c00(param_7);
    func_0x00010c219b60(param_7,param_6,0);
    func_0x00010befbb60(lVar1,param_6,param_7);
    puVar2 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    func_0x00010bef9680(lVar1,param_6,puVar2);
    lVar3 = param_7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf348e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf493a0(lVar3,param_6,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar3);
    func_0x00010c1e3380(0x43790000,lVar5);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010bf2ba60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf493a0(puVar6,param_6,lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    puStack_b8 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bf493a0(puVar8,param_6,lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_7;
    puStack_b0 = puVar11;
    lStack_a8 = lVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar1;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar12;
    func_0x00010bf49500(lVar12,param_6,lVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_7;
    lStack_a0 = lVar15;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar1;
    func_0x00010bf34860(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar16;
    func_0x00010bf493a0(lVar16,param_6,lVar17);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_7;
    lStack_98 = lVar18;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar19;
    func_0x00010bf49420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_7;
    lStack_90 = lVar20;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar21;
    func_0x00010bf49420(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = lVar22;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_b8,7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4,param_6,puVar23);
    _objc_release(puVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(puVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(lVar3);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_7 + 8);
  return;
}



/* Entry: 1061cb89c; end: 1061cb8a3; -[SCFeatureLensCloseButtonV2LayoutStrategy .cxx_destruct] */

void FUN_1061cb89c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1061cb8a4; end: 1061cb917; -[SCFeatureLensCollectionsBackButtonTabBarLayoutStrategy initWithLensCollectionsBarFeature:] */

undefined1 * FUN_1061cb8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0328;
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



/* Entry: 1061cb918; end: 1061cb91f; -[SCFeatureLensCollectionsBackButtonTabBarLayoutStrategy lensCollectionsTabBar] */

void FUN_1061cb918(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa1830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_feature_1125c5fb0);
  return;
}



/* Entry: 1061cb920; end: 1061cb923; -[SCFeatureLensCollectionsBackButtonTabBarLayoutStrategy configureWithView:] */

void FUN_1061cb920(void)

{
  return;
}



/* Entry: 1061cb924; end: 1061cbbbf; -[SCFeatureLensCollectionsBackButtonTabBarLayoutStrategy layoutFeatureContainer:] */

void FUN_1061cb924(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

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
  long lVar12;
  undefined *puVar13;
  long lVar14;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010c091820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2674e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x00010c219b60(param_5);
    func_0x00010c091820(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c2674e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    _objc_release(param_3);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar2 = param_5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0926c0(PTR_PTR_1126c89d8);
    lVar5 = lVar2;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010bf348e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_5;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c091740(PTR_PTR_1126c89d8);
    lVar10 = lVar9;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c091740(PTR_PTR_1126c89d8);
    lVar12 = lVar11;
    func_0x00010bf49420(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_5 + 8,0);
  return;
}



/* Entry: 1061cbbc0; end: 1061cbbcb; -[SCFeatureLensCollectionsBackButtonTabBarLayoutStrategy .cxx_destruct] */

void FUN_1061cbbc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061cbbcc; end: 1061cbc3f; -[SCFeatureLensCollectionsSendToButtonLayoutStrategy initWithLensFavoritesButtonFeature:] */

undefined1 * FUN_1061cbbcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0330;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061cbc40; end: 1061cbc47; -[SCFeatureLensCollectionsSendToButtonLayoutStrategy lensFavoritesButton] */

void FUN_1061cbc40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa1830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_feature_1125c5fb0);
  return;
}



/* Entry: 1061cbc48; end: 1061cbc53; -[SCFeatureLensCollectionsSendToButtonLayoutStrategy configureWithView:] */

void FUN_1061cbc48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1061cbc54; end: 1061cbcfb; -[SCFeatureLensCollectionsSendToButtonLayoutStrategy layoutFeatureContainer:] */

void FUN_1061cbc54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  _objc_retain(param_7);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_5 = param_5 + 8;
    _objc_loadWeakRetained(param_5);
    lVar1 = param_5;
    func_0x00010bfe1200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(param_7);
    func_0x00010bf20c00(param_7);
    func_0x00010bf07160(param_3,param_4,lVar1,param_6,param_7,3);
    _objc_release(lVar1);
    _objc_release(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1061cbcfc; end: 1061cbd27; -[SCFeatureLensCollectionsSendToButtonLayoutStrategy .cxx_destruct] */

void FUN_1061cbcfc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}


