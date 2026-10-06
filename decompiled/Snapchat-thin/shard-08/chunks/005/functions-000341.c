/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061df250; end: 1061df2ef;  */

void FUN_1061df250(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1b30;
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    _objc_alloc(puVar1);
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c056660(puVar1);
    _objc_release(param_2);
    _objc_release(lVar2);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1061df2f0; end: 1061df413; -[SCFeatureLensSendToButtonImpl _lensDeeplinkForLensId:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061df2f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112742924);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfbf7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1061df414;
  puStack_50 = &UNK_110857fa0;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010c095b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1,param_2,&puStack_68,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 1061df414; end: 1061df427;  */

void FUN_1061df414(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001061df420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1061df428; end: 1061df4e7; -[SCFeatureLensSendToButtonImpl _didChangeRingFlashActive:] */

/* WARNING: Possible PIC construction at 0x0001061df4b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001061df4b4) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061df428(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + _DAT_11274294c) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_11274294c) = param_3;
  if (param_3 == 2) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112742930);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c141080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112742940);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112742940);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d79d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setOverrideTintColor__112653898,uVar2);
  return;
}



/* Entry: 1061df4e8; end: 1061df5d3; -[SCFeatureLensSendToButtonImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061df4e8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742944,0);
  _objc_storeStrong(param_1 + _DAT_112742948,0);
  _objc_storeStrong(param_1 + _DAT_112742940,0);
  _objc_storeStrong(param_1 + _DAT_112742938,0);
  _objc_storeStrong(param_1 + _DAT_112742934,0);
  _objc_storeStrong(param_1 + _DAT_112742930,0);
  _objc_destroyWeak(param_1 + _DAT_112742928);
  _objc_storeStrong(param_1 + _DAT_11274292c,0);
  _objc_storeStrong(param_1 + _DAT_112742924,0);
  _objc_storeStrong(param_1 + _DAT_112742920,0);
  _objc_storeStrong(param_1 + _DAT_112742918,0);
  _objc_storeStrong(param_1 + _DAT_112742914,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742910,0);
  return;
}



/* Entry: 1061df5d4; end: 1061df613; +[SCLensSendToButton createSendToButtonWithControlStyle:] */

void FUN_1061df5d4(void)

{
  _objc_alloc(PTR_PTR_1126c8ae8);
  func_0x00010c046a80(0x4048000000000000,0x4042000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061df614; end: 1061df6af; -[SCLensSendToButton initWithSize:controlStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1061df614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0448;
  uStack_30 = param_3;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_1,param_2,&uStack_30,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c89d8;
    func_0x00010c091ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742950);
    *(undefined **)((long)puVar1 + (long)_DAT_112742950) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112742954) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1061df6b0; end: 1061df6ff; -[SCLensSendToButton setupButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061df6b0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112742954;
  if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
    func_0x00010beaac40();
    func_0x00010beafb40(param_1);
    func_0x00010c160fc0(param_1,param_2,&PTR____CFConstantStringClassReference_110e447b8);
    *(undefined1 *)(param_1 + lVar1) = 1;
  }
  return;
}



/* Entry: 1061df700; end: 1061df797; -[SCLensSendToButton setOverrideTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061df700(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112742958;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_11274295c;
  lVar2 = *(long *)(param_1 + lVar3);
  if (lVar2 != 0) {
    if (param_3 == 0) {
      lVar2 = param_1;
      func_0x00010bdf9760(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(*(undefined8 *)(param_1 + lVar3),param_2,lVar2);
      _objc_release(lVar2);
    }
    else {
      func_0x00010c216160(lVar2,param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061df798; end: 1061df8bb; -[SCLensSendToButton _setupBackgroundLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061df798(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  
  func_0x00010bf20c00();
  puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CALayer_1126b1750);
  _objc_retainAutoreleasedReturnValue();
  dVar4 = param_4;
  func_0x00010c1739e0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_3,param_4);
  uVar2 = *(undefined8 *)(param_5 + _DAT_112742950);
  func_0x00010bdc0fe0(uVar2);
  func_0x00010c16e440(puVar1,param_6,uVar2);
  func_0x00010c1842e0(param_4 * 0.5,puVar1);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c182d20(puVar1);
  _objc_release(puVar3);
  func_0x00010c167d20(0x3fe0000000000000,0x3fe0000000000000,puVar1);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010c1dee80(param_3 * 0.5,dVar4 * 0.5,puVar1);
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061df8bc; end: 1061dfa17; -[SCLensSendToButton _setupShareIconLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061df8bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dbb538);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  lVar5 = (long)_DAT_11274295c;
  _objc_retain();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c182220(puVar1,param_2,1);
  if (*(long *)(param_1 + _DAT_112742958) == 0) {
    lVar5 = param_1;
    func_0x00010bdf9760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar1,param_2,lVar5);
    _objc_release(lVar5);
  }
  else {
    func_0x00010c216160(puVar1);
  }
  func_0x00010c19f0e0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x4034000000000000,
                      0x4034000000000000,puVar1);
  puVar4 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dee80(0x4038000000000000,0x4032000000000000);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1061dfa18; end: 1061dfa6b; -[SCLensSendToButton _defaultShareIconColor] */

void FUN_1061dfa18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061dfa6c; end: 1061dfacb; -[SCLensSendToButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dfa6c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742958,0);
  _objc_storeStrong(param_1 + _DAT_11274295c,0);
  _objc_storeStrong(param_1 + _DAT_112742960,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742950,0);
  return;
}



/* Entry: 1061dfacc; end: 1061dfc4b; -[SCLensExploreTooltipStatus initWithLensUserProvider:lensPreferences:featureSettingsService:lensesTooltipManager:] */

undefined8 *
FUN_1061dfacc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f0450;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c08f940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar4 = puVar1[1];
    func_0x00010c097c20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1061dfc4c; end: 1061dfd23; -[SCLensExploreTooltipStatus shouldDisplayLensExplorerTooltip] */

uint FUN_1061dfc4c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c097c20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c078a60();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0769c0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0dff20(uVar3,param_2,*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf1f3c0();
      _objc_release(uVar3);
      if ((int)uVar4 == 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c093860();
        _objc_release(uVar3);
        return (uint)uVar4 ^ 1;
      }
      func_0x00010c1f9f20(param_1);
    }
  }
  return 0;
}



/* Entry: 1061dfd24; end: 1061dfd5b; -[SCLensExploreTooltipStatus setSeenLensExplorerTooltip] */

void FUN_1061dfd24(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061dfd5c; end: 1061dfdaf; -[SCLensExploreTooltipStatus .cxx_destruct] */

void FUN_1061dfd5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061dfdb0; end: 1061dfe3f; -[SCLensExplorerSwipeUpTooltip initWithParentView:tooltipStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1061dfdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0458;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithView_appearance__11252f058,param_3,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112742978;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1061dfe40; end: 1061dfe67; -[SCLensExplorerSwipeUpTooltip show] */

void FUN_1061dfe40(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c162320(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010be74930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__playShowAnimation_11257abe8);
  return;
}



/* Entry: 1061dfe68; end: 1061dfe6b; -[SCLensExplorerSwipeUpTooltip hide] */

void FUN_1061dfe68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be74770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__playHideAnimation_11257ab78);
  return;
}



/* Entry: 1061dfe6c; end: 1061dfe7b; -[SCLensExplorerSwipeUpTooltip needsToBeCompleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dfe6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22f8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742978),
             PTR_s_shouldDisplayLensExplorerTooltip_112669850);
  return;
}



/* Entry: 1061dfe7c; end: 1061dfeb7; -[SCLensExplorerSwipeUpTooltip markCompleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dfe7c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bef0100();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1f9f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112742978),PTR_s_setSeenLensExplorerTooltip_11265c1f0)
    ;
    return;
  }
  return;
}



/* Entry: 1061dfeb8; end: 1061dfeef; -[SCLensExplorerSwipeUpTooltip _playShowAnimation] */

void FUN_1061dfeb8(undefined8 param_1)

{
  func_0x00010bfe3840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10b1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061dfef0; end: 1061dff53; -[SCLensExplorerSwipeUpTooltip _playHideAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dfef0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1061dff54;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010bf831a0(*(undefined8 *)(param_1 + _DAT_11274297c),param_2,1,&puStack_38);
  return;
}



/* Entry: 1061dff54; end: 1061dff8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dff54(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274297c;
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061dff90; end: 1061e02e3; -[SCLensExplorerSwipeUpTooltip hintView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dff90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_11274297c;
  uVar16 = *(ulong *)(param_5 + lVar17);
  if (uVar16 == 0) {
    uVar1 = param_5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c85a8;
    _objc_opt_class(PTR_PTR_1126c85a8);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar16 = uVar1;
    if ((uVar3 & 1) == 0) {
      uVar16 = 0;
    }
    _objc_retain(uVar16);
    uVar3 = uVar1;
    _objc_release(uVar1);
    if (uVar16 == 0) {
      uVar16 = 0;
      goto LAB_1061e029c;
    }
    puVar2 = PTR_PTR_1126c8af0;
    _objc_alloc();
    func_0x00010c00c860();
    uVar15 = *(undefined8 *)(param_5 + lVar17);
    *(undefined **)(param_5 + lVar17) = puVar2;
    _objc_release(uVar15);
    func_0x00010c160fc0(*(undefined8 *)(param_5 + lVar17));
    uVar15 = *(undefined8 *)(param_5 + lVar17);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e447f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e447f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216540(uVar15);
    _objc_release(ppuVar4);
    uVar15 = *(undefined8 *)(param_5 + lVar17);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e44818;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e44818,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f760(uVar15);
    _objc_release(ppuVar4);
    func_0x00010c23d620(*(undefined8 *)(param_5 + lVar17));
    func_0x00010befbb60(uVar1);
    func_0x00010c219b60(*(undefined8 *)(param_5 + lVar17));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)(param_5 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar1;
    func_0x00010bf2b240();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar16;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010bf493c0(0xc034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_5 + lVar17);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010bf34860(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_5 + lVar17);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar17));
    uVar10 = uVar9;
    func_0x00010bf49420(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_5 + lVar17);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar17));
    uVar12 = uVar11;
    func_0x00010bf49420(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar15);
    _objc_release(uVar3);
    _objc_release(uVar16);
    _objc_release(uVar5);
    _objc_release(uVar1);
    uVar16 = *(ulong *)(param_5 + lVar17);
  }
  uVar3 = uVar16;
  _objc_retain(uVar16);
LAB_1061e029c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar16);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(uVar3 + (long)_DAT_11274297c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(uVar3 + (long)_DAT_112742978,0);
  return;
}



/* Entry: 1061e02e4; end: 1061e0323; -[SCLensExplorerSwipeUpTooltip .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e02e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274297c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742978,0);
  return;
}



/* Entry: 1061e0324; end: 1061e03d7; -[SCLensExplorerTooltipManager initWithParentView:toolTipStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1061e0324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0460;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithTooltips__1125f2a68,PTR____NSArray0__struct_11034ab48
                     );
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c8af8;
    _objc_alloc();
    func_0x00010c033f00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742980);
    *(undefined **)((long)puVar1 + (long)_DAT_112742980) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061e03d8; end: 1061e0467; -[SCLensExplorerTooltipManager getNextAvailableTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e03d8(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar2 = &lStack_40;
  puStack_38 = PTR_PTR_1126f0460;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_getNextAvailableTooltip_1125cf9a8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined1 *)plVar2;
  if (plVar2 == (long *)0x0) {
    lVar3 = (long)_DAT_112742980;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
    func_0x00010c0d74a0();
    if (iVar1 == 0) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_1061e0440;
    }
    puVar4 = *(undefined1 **)(param_1 + lVar3);
  }
  _objc_retain(puVar4);
LAB_1061e0440:
  _objc_release(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1061e0468; end: 1061e0477; -[SCLensExplorerTooltipManager lensTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061e0468(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742984);
}



/* Entry: 1061e0478; end: 1061e0487; -[SCLensExplorerTooltipManager swipeUpTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061e0478(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742980);
}



/* Entry: 1061e0488; end: 1061e04c7; -[SCLensExplorerTooltipManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e0488(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742980,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742984,0);
  return;
}



/* Entry: 1061e04c8; end: 1061e0637; -[SCCameraHardwareResourceWrapper initWithCameraHardwareResource:lensPerformerProvider:] */

undefined1 * FUN_1061e04c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  puStack_68 = PTR_PTR_1126f0468;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf318a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf51e00();
    uVar8 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f8a0(puVar1);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061e0638; end: 1061e063b; -[SCCameraHardwareResourceWrapper ringFlashFooterTintColor] */

void FUN_1061e0638(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fd999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061e063c; end: 1061e0663; -[SCCameraHardwareResourceWrapper ringFlashSelectionInfoObservable] */

void FUN_1061e063c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061e0664; end: 1061e07f7; -[SCCameraHardwareResourceWrapper startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

void FUN_1061e0664(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar5);
    _objc_initWeak(auStack_68,param_1);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf70e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1061e07f8; end: 1061e089b;  */

void FUN_1061e07f8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e39a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061e089c; end: 1061e08e3;  */

void FUN_1061e089c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfca80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061e08e4; end: 1061e093b; -[SCCameraHardwareResourceWrapper _didChangeRingFlashActive:] */

void FUN_1061e08e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c1410c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061e093c; end: 1061e0977; -[SCCameraHardwareResourceWrapper .cxx_destruct] */

void FUN_1061e093c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061e0978; end: 1061e0a1f;  */

void FUN_1061e0978(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e44838;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e44838,
                      &PTR____CFConstantStringClassReference_110e44858,0);
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



/* Entry: 1061e0a20; end: 1061e0a4b; +[SCGrapheneLensFeedMetric explorerButtonAppearence] */

void FUN_1061e0a20(void)

{
  _objc_alloc(PTR_PTR_1126c8b00);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061e0a4c; end: 1061e0aeb; -[SCGrapheneLensFeedMetric description] */

void FUN_1061e0a4c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e44938;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e44938,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f0470;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1061e0aec; end: 1061e0c2f; -[SCGrapheneRegistry lensFeedGraphene] */

void FUN_1061e0aec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1061e0b74;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c33d0 != -1) {
    func_0x00010002a2fc(0x1136c33d0,&puStack_48);
  }
  uVar1 = uRam00000001136c33c8;
  _objc_retain(uRam00000001136c33c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061e0c30; end: 1061e0d43; -[SCLensExplorerCarouselOverlayViewModel initWithTitle:message:buttonTitle:icon:lensOverlayAllowsPathThrough:] */

undefined1 *
FUN_1061e0c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f0478;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061e0d44; end: 1061e0d67; -[SCLensExplorerCarouselOverlayViewModel copyWithZone:] */

undefined8 FUN_1061e0d44(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1061e0d68; end: 1061e0df7; -[SCLensExplorerCarouselOverlayViewModel hash] */

undefined8 * FUN_1061e0d68(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1061e0eb8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1061e0ec4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_1061e0ec4;
            }
            goto LAB_1061e0eb8;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1061e0ec4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1061e0df8; end: 1061e0edf; -[SCLensExplorerCarouselOverlayViewModel isEqual:] */

long FUN_1061e0df8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1061e0eb8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1061e0ec4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_1061e0ec4;
            }
            goto LAB_1061e0eb8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1061e0ec4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1061e0ee0; end: 1061e0ee7; -[SCLensExplorerCarouselOverlayViewModel title] */

undefined8 FUN_1061e0ee0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1061e0ee8; end: 1061e0eef; -[SCLensExplorerCarouselOverlayViewModel message] */

undefined8 FUN_1061e0ee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1061e0ef0; end: 1061e0ef7; -[SCLensExplorerCarouselOverlayViewModel buttonTitle] */

undefined8 FUN_1061e0ef0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1061e0ef8; end: 1061e0eff; -[SCLensExplorerCarouselOverlayViewModel icon] */

undefined8 FUN_1061e0ef8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1061e0f00; end: 1061e0f07; -[SCLensExplorerCarouselOverlayViewModel lensOverlayAllowsPathThrough] */

undefined1 FUN_1061e0f00(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1061e0f08; end: 1061e0f4f; -[SCLensExplorerCarouselOverlayViewModel .cxx_destruct] */

void FUN_1061e0f08(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1061e0f50; end: 1061e0fc7;  */

void FUN_1061e0f50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar2,param_2,param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061e0fc8; end: 1061e114f;  */

ulong FUN_1061e0fc8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e3d4d8);
  if ((((((uVar1 & 1) == 0) &&
        (uVar1 = param_1,
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e434b8),
        (uVar1 & 1) == 0)) &&
       (uVar1 = param_1,
       func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e3cfd8),
       (uVar1 & 1) == 0)) &&
      (((uVar1 = param_1,
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e437d8),
        (uVar1 & 1) == 0 &&
        (uVar1 = param_1,
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e43358),
        (uVar1 & 1) == 0)) &&
       ((uVar1 = param_1,
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e442f8),
        (uVar1 & 1) == 0 &&
        ((uVar1 = param_1,
         func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e44a38),
         (uVar1 & 1) == 0 &&
         (uVar1 = param_1,
         func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e442d8),
         (uVar1 & 1) == 0)))))))) &&
     ((uVar1 = param_1,
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e42f78),
      (uVar1 & 1) == 0 &&
      (((((uVar1 = param_1,
          func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e43238),
          (uVar1 & 1) == 0 &&
          (uVar1 = param_1,
          func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e42818),
          (uVar1 & 1) == 0)) &&
         (uVar1 = param_1,
         func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e3d778),
         (uVar1 & 1) == 0)) &&
        ((uVar1 = param_1,
         func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e43498),
         (uVar1 & 1) == 0 &&
         (uVar1 = param_1,
         func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e430f8),
         (uVar1 & 1) == 0)))) &&
       ((uVar1 = param_1,
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e42bb8),
        (uVar1 & 1) == 0 &&
        (uVar1 = param_1,
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e438d8),
        (uVar1 & 1) == 0)))))))) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e3cd78);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1061e1150; end: 1061e11bb; -[SCCameraToolbarButtonEventResultImpl initWithToolbarItem:] */

undefined1 * FUN_1061e1150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0480;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061e11bc; end: 1061e11cb; -[SCCameraToolbarButtonEventResultImpl setShouldBlockInteraction:] */

void FUN_1061e11bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    *(undefined1 *)(param_1 + 0xb) = param_3;
  }
  return;
}



/* Entry: 1061e11cc; end: 1061e11d3; -[SCCameraToolbarButtonEventResultImpl animated] */

undefined1 FUN_1061e11cc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1061e11d4; end: 1061e11db; -[SCCameraToolbarButtonEventResultImpl setAnimated:] */

void FUN_1061e11d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1061e11dc; end: 1061e11e3; -[SCCameraToolbarButtonEventResultImpl animationDelay] */

undefined8 FUN_1061e11dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1061e11e4; end: 1061e11eb; -[SCCameraToolbarButtonEventResultImpl setAnimationDelay:] */

void FUN_1061e11e4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 1061e11ec; end: 1061e11f3; -[SCCameraToolbarButtonEventResultImpl canBeSelected] */

undefined1 FUN_1061e11ec(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1061e11f4; end: 1061e11fb; -[SCCameraToolbarButtonEventResultImpl setCanBeSelected:] */

void FUN_1061e11f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1061e11fc; end: 1061e1203; -[SCCameraToolbarButtonEventResultImpl shouldBlockChangingSelected] */

undefined1 FUN_1061e11fc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1061e1204; end: 1061e120b; -[SCCameraToolbarButtonEventResultImpl setShouldBlockChangingSelected:] */

void FUN_1061e1204(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 1061e120c; end: 1061e1213; -[SCCameraToolbarButtonEventResultImpl shouldBlockInteraction] */

undefined1 FUN_1061e120c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 1061e1214; end: 1061e121b; -[SCCameraToolbarButtonEventResultImpl shouldShowChildItem] */

undefined1 FUN_1061e1214(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 1061e121c; end: 1061e1223; -[SCCameraToolbarButtonEventResultImpl setShouldShowChildItem:] */

void FUN_1061e121c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 1061e1224; end: 1061e123b; -[SCCameraToolbarButtonEventResultImpl toolbarItem] */

void FUN_1061e1224(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061e123c; end: 1061e1253; -[SCCameraToolbarButtonEventResultImpl toolbarItemToSelect] */

void FUN_1061e123c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061e1254; end: 1061e125f; -[SCCameraToolbarButtonEventResultImpl setToolbarItemToSelect:] */

void FUN_1061e1254(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1061e1260; end: 1061e12cf; -[SCCameraToolbarButtonEventResultImpl .cxx_destruct] */

void FUN_1061e1260(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x18);
  return;
}



/* Entry: 1061e12d0; end: 1061e133f;  */

void FUN_1061e12d0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c07d660(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf034a0(param_2);
    func_0x00010bea7240(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061e1340; end: 1061e13df;  */

void FUN_1061e1340(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdfcb40(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061e13e0; end: 1061e1427; -[SCCameraToolbarButtonImpl _removeSelectedBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e13e0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + _DAT_1127429dc) != 0) {
    lVar2 = (long)_DAT_1127429ec;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1061e1428; end: 1061e178b; -[SCCameraToolbarButtonImpl _setupSelectedBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e1428(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  undefined *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar9;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_1;
  lStack_c8 = unaff_x19;
  if (*(long *)(param_1 + _DAT_1127429dc) != 0) {
    func_0x00010be8d300();
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar9 = (long)_DAT_1127429ec;
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar1;
    _objc_release(uVar8);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar8);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar9));
    _objc_release(puVar1);
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4031000000000000);
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3fe0000000000000);
    _objc_release(uVar8);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf414e0(0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar8);
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010c066fa0(param_1);
    puStack_a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x21 = *(long *)(param_1 + lVar9);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lStack_a0 = unaff_x21;
    func_0x00010bf49420(0x4041000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = *(undefined8 *)(param_1 + lVar9);
    lStack_98 = unaff_x21;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = unaff_x22;
    func_0x00010bf49420(0x4041000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar9);
    uStack_90 = uVar8;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34860(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    uStack_88 = uVar5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar7;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_a8);
    _objc_release(unaff_x20);
    _objc_release(uVar7);
    _objc_release(param_1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(uVar8);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    lVar4 = lStack_a0;
    _objc_release();
    lStack_c8 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_1061e178c;
  lVar9 = (long)_DAT_1127429f0;
  uStack_e0 = unaff_x22;
  lStack_d8 = unaff_x21;
  puStack_d0 = unaff_x20;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010c069d00(*(undefined8 *)(lVar4 + lVar9));
  uVar8 = *(undefined8 *)(lVar4 + lVar9);
  *(undefined8 *)(lVar4 + lVar9) = 0;
  _objc_release(uVar8);
  lVar9 = (long)_DAT_1127429f4;
  func_0x00010c069d00(*(undefined8 *)(lVar4 + lVar9));
  uVar8 = *(undefined8 *)(lVar4 + lVar9);
  *(undefined8 *)(lVar4 + lVar9) = 0;
  _objc_release(uVar8);
  lVar9 = (long)_DAT_1127429f8;
  func_0x00010c069d00(*(undefined8 *)(lVar4 + lVar9));
  uVar8 = *(undefined8 *)(lVar4 + lVar9);
  *(undefined8 *)(lVar4 + lVar9) = 0;
  _objc_release(uVar8);
  puStack_e8 = PTR_PTR_1126f0488;
  lStack_f0 = lVar4;
  _objc_msgSendSuper2(&lStack_f0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061e178c; end: 1061e1823; -[SCCameraToolbarButtonImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e178c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = (long)_DAT_1127429f0;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_1127429f4;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_1127429f8;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126f0488;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061e1824; end: 1061e1833; -[SCCameraToolbarButtonImpl setToolbarVisibiltyStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e1824(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112742a00) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bee2310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTitle_112596268);
  return;
}



/* Entry: 1061e1834; end: 1061e188f; -[SCCameraToolbarButtonImpl setTitleAndNewBadgeVisible:] */

void FUN_1061e1834(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0((double)(param_3 & 0xffffffff));
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cc9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNewBadgeVisible__112650ca0,param_3);
  return;
}



/* Entry: 1061e1890; end: 1061e18f3; -[SCCameraToolbarButtonImpl setNewBadgeVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e1890(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 0) {
    lVar2 = (long)_DAT_112742a04;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
    lVar1 = *(long *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0d8520(param_1);
    func_0x00010c1677c0(0x3ff0000000000000);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be49990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__layoutTitleLabelWithNewBadgeVie_112570000);
  return;
}



/* Entry: 1061e18f4; end: 1061e1947; -[SCCameraToolbarButtonImpl forceHideTitleAndNewBadge] */

void FUN_1061e18f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c0d8520(param_1);
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061e1948; end: 1061e199b; -[SCCameraToolbarButtonImpl restoreTitleAndNewBadgeVisibility] */

void FUN_1061e1948(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c0d8520(param_1);
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061e199c; end: 1061e19c3; -[SCCameraToolbarButtonImpl isNewBadgeVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1061e199c(double param_1,long param_2)

{
  func_0x00010bf01b40(*(undefined8 *)(param_2 + _DAT_112742a04));
  return 0.0 < param_1;
}



/* Entry: 1061e19c4; end: 1061e19d7; -[SCCameraToolbarButtonImpl initialLayoutDidFinish] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e19c4(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112742a08) = 1;
  return;
}



/* Entry: 1061e19d8; end: 1061e1a5f; -[SCCameraToolbarButtonImpl animateTitleToShowBriefly] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e19d8(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  *(undefined1 *)(param_1 + _DAT_112742a0c) = 1;
  func_0x00010bee2300();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1061e1a60;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010bf03440(0x3ff8000000000000,0x3fe0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,0,&puStack_48,0);
  return;
}



/* Entry: 1061e1a60; end: 1061e1a77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e1a60(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112742a0c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bee2310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateTitle_112596268);
  return;
}



/* Entry: 1061e1a78; end: 1061e1b2b; -[SCCameraToolbarButtonImpl showHint:forDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e1a78(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010bfe2040(param_2);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112742a10);
  *(undefined8 *)(param_2 + _DAT_112742a10) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c1503c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + _DAT_1127429f0);
  *(undefined **)(param_2 + _DAT_1127429f0) = puVar1;
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bee2310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateTitle_112596268);
  return;
}



/* Entry: 1061e1b2c; end: 1061e1b8b; -[SCCameraToolbarButtonImpl hideHint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e1b2c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127429f0;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c069d00();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112742a10);
    *(undefined8 *)(param_1 + _DAT_112742a10) = 0;
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bee2310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTitle_112596268);
    return;
  }
  return;
}



/* Entry: 1061e1b8c; end: 1061e1ec7; -[SCCameraToolbarButtonImpl _showBalloonTooltipImmediatelyWithTitle:duration:isForChildButton:animationStyle:completion:] */

void FUN_1061e1b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,long param_7)

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
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b6950;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c217080(param_2);
  _objc_release(puVar1);
  uVar2 = param_2;
  func_0x00010c273da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a1e0(0);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c273da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_4);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c273da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c273da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_2);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c273da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_2;
  func_0x00010c273da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c08e400(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c273da0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010bfe90c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0x4043000000000000;
  if (param_5 == 0) {
    uVar13 = 0;
  }
  uVar10 = uVar7;
  func_0x00010bf493c0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c273da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9f5c0(param_1);
  _objc_release(param_2);
  if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7);
  }
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c236150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1061e1ec8; end: 1061e1ed3; -[SCCameraToolbarButtonImpl showBalloonTooltipsWithTitle:delay:duration:isForChildButton:completion:] */

void FUN_1061e1ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_showBalloonTooltipsWithTitle_del_11266b278,param_3,param_4,0,param_5);
  return;
}



/* Entry: 1061e1ed4; end: 1061e2063; -[SCCameraToolbarButtonImpl showBalloonTooltipsWithTitle:delay:duration:isForChildButton:animationStyle:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e1ed4(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_8);
  func_0x00010bfe1a20(param_3);
  if (param_1 <= 0.0) {
    func_0x00010beb7e80(param_2,param_3);
  }
  else {
    _objc_initWeak(auStack_68,param_3);
    puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    _objc_copyWeak(auStack_88,auStack_68);
    _objc_retain(param_5);
    uStack_80 = param_2;
    uStack_78 = param_7;
    uStack_70 = param_6;
    _objc_retain(param_8);
    func_0x00010c150360(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_3 + _DAT_1127429f4);
    *(undefined **)(param_3 + _DAT_1127429f4) = puVar1;
    _objc_release(uVar2);
    _objc_release(param_8);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  return;
}



/* Entry: 1061e2064; end: 1061e20ab;  */

void FUN_1061e2064(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010beb7e80(*(undefined8 *)(param_1 + 0x38),lVar1,param_2,
                        *(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061e20ac; end: 1061e210f; -[SCCameraToolbarButtonImpl hideBalloonTooltips] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e20ac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127429f4;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c069d00();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  lVar2 = (long)_DAT_112742a14;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1061e2110; end: 1061e2127; -[SCCameraToolbarButtonImpl setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e2110(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea7250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setSelected_animated__112587638,param_3,
             *(byte *)(param_1 + _DAT_112742a18) != param_3);
  return;
}



/* Entry: 1061e2128; end: 1061e2173; -[SCCameraToolbarButtonImpl tapButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e2128(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c87c8;
  _objc_alloc(PTR_PTR_1126c87c8);
  func_0x00010c0540a0();
  func_0x00010beca780(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061e2174; end: 1061e248b; -[SCCameraToolbarButtonImpl loadingAnimationLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e2174(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112742a20;
  lVar6 = *(long *)(param_1 + lVar8);
  if (lVar6 == 0) {
    puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar1;
    _objc_release(uVar5);
    func_0x00010c19f0e0(0,0,0x4044000000000000,0x4044000000000000,*(undefined8 *)(param_1 + lVar8));
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19960(0x4034000000000000,0x4034000000000000,0x4024000000000000,0,
                        0xbfe45f306dc9c883,PTR__OBJC_CLASS___UIBezierPath_1126aec18,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112742a24;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar2;
    _objc_release(uVar5);
    puVar2 = puVar1;
    _objc_retainAutorelease(puVar1);
    func_0x00010bdc1040();
    func_0x00010c1d9820(*(undefined8 *)(param_1 + lVar6),param_2,puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar6),param_2,puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(*(undefined8 *)(param_1 + lVar6),param_2,puVar3);
    _objc_release(puVar2);
    func_0x00010c1bdd00(0x4004000000000000,*(undefined8 *)(param_1 + lVar6));
    uVar7 = *(undefined8 *)PTR__kCALineCapRound_110346d40;
    func_0x00010c1bdb40(*(undefined8 *)(param_1 + lVar6),param_2,uVar7);
    func_0x00010c20e920(0x3fe6666666666666,*(undefined8 *)(param_1 + lVar6));
    func_0x00010c19f0e0(0,0,0x4044000000000000,0x4044000000000000,*(undefined8 *)(param_1 + lVar6));
    func_0x00010befbb20(*(undefined8 *)(param_1 + lVar8),param_2,*(undefined8 *)(param_1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19960(0x4034000000000000,0x4034000000000000,0x4018000000000000,0,
                        0xbfe45f306dc9c883,PTR__OBJC_CLASS___UIBezierPath_1126aec18,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112742a28;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar3;
    _objc_release(uVar5);
    puVar3 = puVar2;
    _objc_retainAutorelease(puVar2);
    func_0x00010bdc1040();
    func_0x00010c1d9820(*(undefined8 *)(param_1 + lVar6),param_2,puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar6),param_2,puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(*(undefined8 *)(param_1 + lVar6),param_2,puVar4);
    _objc_release(puVar3);
    func_0x00010c1bdd00(0x4004000000000000,*(undefined8 *)(param_1 + lVar6));
    func_0x00010c1bdb40(*(undefined8 *)(param_1 + lVar6),param_2,uVar7);
    func_0x00010c20e920(0x3fe999999999999a,*(undefined8 *)(param_1 + lVar6));
    func_0x00010c19f0e0(0,0,0x4044000000000000,0x4044000000000000,*(undefined8 *)(param_1 + lVar6));
    func_0x00010befbb20(*(undefined8 *)(param_1 + lVar8),param_2,*(undefined8 *)(param_1 + lVar6));
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar6 = *(long *)(param_1 + lVar8);
  }
  _objc_retain(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1061e248c; end: 1061e2537; -[SCCameraToolbarButtonImpl gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1061e248c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b9cb0;
  lVar1 = param_1 + _DAT_1127429e8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2738e0();
  _objc_release(lVar1);
  if (((int)puVar2 == 0) || (*(long *)(param_1 + _DAT_112742a00) == 3)) {
    uVar4 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar4 = (uint)uVar3;
  }
  _objc_release(param_4);
  return uVar4 & 1;
}



/* Entry: 1061e2538; end: 1061e2703; -[SCCameraToolbarButtonImpl press:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e2538(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c87c8;
  _objc_alloc();
  lVar6 = (long)_DAT_1127429d0;
  func_0x00010c0540a0();
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf2da40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010c22e500();
  if (((ulong)puVar3 & 1) != 0) goto LAB_1061e26d8;
  uVar4 = *(ulong *)(param_1 + lVar6);
  func_0x00010c076be0();
  if ((uVar4 & 1) != 0) goto LAB_1061e26d8;
  puStack_58 = PTR_PTR_1126f0488;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_press__11252fad8,param_3);
  puVar3 = PTR_PTR_1126c87c8;
  _objc_alloc(PTR_PTR_1126c87c8);
  func_0x00010c0540a0();
  lVar5 = param_3;
  func_0x00010c252440();
  if (lVar5 == 1) {
    lVar5 = param_1 + _DAT_1127429d4;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c09ef00(param_3);
    func_0x00010bf2b7e0(lVar5);
    _objc_release(lVar5);
    func_0x00010c159240(param_1);
    func_0x00010c1b4280(*(undefined8 *)(param_1 + lVar6));
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c2a6f80(uVar2);
    _objc_retainAutoreleasedReturnValue();
LAB_1061e2674:
    func_0x00010c0d9840();
    _objc_release(uVar2);
  }
  else {
    lVar5 = param_3;
    func_0x00010c252440();
    if (lVar5 == 3) {
      func_0x00010beca780(param_1);
    }
    else {
      lVar5 = param_3;
      func_0x00010c252440();
      if (lVar5 == 4) {
        uVar2 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010bf72c80(uVar2);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1061e2674;
      }
    }
  }
  _objc_release(puVar3);
LAB_1061e26d8:
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1061e2704; end: 1061e2803; -[SCCameraToolbarButtonImpl _tapEndedWithResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e2704(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112742a2c;
  lVar4 = param_1 + lVar5;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar4 != 0) {
    lVar4 = param_1 + lVar5;
    _objc_loadWeakRetained();
    lVar1 = lVar4;
    func_0x00010bf2b3e0();
    _objc_release(lVar4);
    if ((int)lVar1 == 0) goto LAB_1061e27ec;
  }
  lVar4 = param_1;
  func_0x00010bf87a00();
  if ((int)lVar4 != 0) {
    puVar2 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar2);
  }
  lVar4 = (long)_DAT_1127429d0;
  func_0x00010c272c00(*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf7ca60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar3);
  param_1 = param_1 + lVar5;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf2b400();
  _objc_release(param_1);
LAB_1061e27ec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


