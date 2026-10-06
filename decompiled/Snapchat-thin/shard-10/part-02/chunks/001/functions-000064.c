/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ae4dcc; end: 107ae4e9f;  */

undefined1  [16] FUN_107ae4dcc(double param_1,long param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  double dVar3;
  undefined1 auVar4 [16];
  long lVar2;
  
  _objc_retain();
  lVar2 = param_2;
  _objc_retain();
  iVar1 = (int)lVar2;
  if (param_4 == 0) {
    dVar3 = 12.0;
    if ((param_2 != 0) && (param_3 != 0)) {
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x00010c14d760(param_2);
      dVar3 = 64.0;
      if (param_1 < 0.0) {
        dVar3 = 12.0;
      }
    }
  }
  else {
    func_0x000100478f84();
    if ((param_5 == 0) || (iVar1 != 0)) {
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      dVar3 = param_1 * 0.5 + 16.0;
    }
    else {
      dVar3 = 70.0;
    }
  }
  _objc_release(param_2);
  _objc_release(param_2);
  auVar4._8_8_ = 0x4028000000000000;
  auVar4._0_8_ = dVar3 + 12.0;
  return auVar4;
}



/* Entry: 107ae4ea0; end: 107ae4fc3; -[SCAdGradientViewLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:cofStore:eventAnnouncer:featureFlags:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107ae4ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f9c00;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithConfiguration_layerViewC_1125de050,param_3,param_4,
                      param_5,param_7,param_8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_5;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276a180);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276a180) = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    lVar6 = (long)_DAT_11276a184;
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107ae4fc4; end: 107ae505b; -[SCAdGradientViewLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae4fc4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d6518;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010bdee3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  lVar4 = (long)_DAT_11276a188;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 107ae505c; end: 107ae5063; -[SCAdGradientViewLayerViewController isRecyclable] */

undefined8 FUN_107ae505c(void)

{
  return 0;
}



/* Entry: 107ae5064; end: 107ae5067; -[SCAdGradientViewLayerViewController updateViewWithPreviousLayer:currentLayer:] */

void FUN_107ae5064(void)

{
  return;
}



/* Entry: 107ae5068; end: 107ae50c7; -[SCAdGradientViewLayerViewController _createGradientComponentContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae5068(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d6520;
  _objc_opt_new(PTR_PTR_1126d6520);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276a184);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17df40(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ae50c8; end: 107ae5117; -[SCAdGradientViewLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae50c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276a184,0);
  _objc_storeStrong(param_1 + _DAT_11276a180,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a188,0);
  return;
}



/* Entry: 107ae5118; end: 107ae5167; -[SCAdOperaInteractiveAreaLayerView initWithFrame:] */

undefined1 * FUN_107ae5118(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9c08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bea8d60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107ae5168; end: 107ae52d7; -[SCAdOperaInteractiveAreaLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae5168(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_5;
  _objc_retain(param_5);
  lVar6 = param_3;
  func_0x00010c082800();
  if ((int)lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = param_3;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(lVar1);
          }
          lVar6 = *(long *)(lStack_128 + lVar8 * 8);
          func_0x00010bf512a0(param_1,param_2,param_3,param_4,lVar6);
          puVar4 = (undefined8 *)param_5;
          func_0x00010bfe3a40(lVar6,param_4,param_5);
          _objc_retainAutoreleasedReturnValue();
          if (lVar6 != 0) goto LAB_107ae5288;
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        lVar2 = lVar1;
        puVar4 = &uStack_130;
        func_0x00010bf52a60(lVar1,param_4,&uStack_130,auStack_e8,0x10);
      } while (lVar2 != 0);
    }
    lVar6 = 0;
LAB_107ae5288:
    _objc_release(lVar1);
    puVar3 = (undefined1 *)puVar4;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    uVar5 = *(undefined8 *)(param_5 + _DAT_11276a190);
    _objc_retain(puVar3);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47780();
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 107ae52d8; end: 107ae532f; -[SCAdOperaInteractiveAreaLayerView configureWithConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae52d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276a190);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47780();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ae5330; end: 107ae5387; -[SCAdOperaInteractiveAreaLayerView setDelegateViewForGestures:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae5330(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276a190);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b700();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ae5388; end: 107ae53f7; -[SCAdOperaInteractiveAreaLayerView interactiveAreaView:didSwipeWithParameters:] */

void FUN_107ae5388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c068ba0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ae53f8; end: 107ae5467; -[SCAdOperaInteractiveAreaLayerView interactiveAreaView:didRegisterSecondPointWithParameters:] */

void FUN_107ae53f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c068b80();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ae5468; end: 107ae54d7; -[SCAdOperaInteractiveAreaLayerView interactiveAreaView:didBeginInteractionWithParameters:] */

void FUN_107ae5468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c068b20();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ae54d8; end: 107ae555f; -[SCAdOperaInteractiveAreaLayerView interactiveAreaViewDidCrossSwipeLeftHintThreshold:] */

void FUN_107ae54d8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c068c00();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ae5560; end: 107ae55e7; -[SCAdOperaInteractiveAreaLayerView interactiveAreaViewDidRecedeSwipeLeftHintThreshold:] */

void FUN_107ae5560(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c068c20();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ae55e8; end: 107ae5657; -[SCAdOperaInteractiveAreaLayerView interactiveAreaView:didCompleteInteractionWithParameters:] */

void FUN_107ae55e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c068b40();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ae5658; end: 107ae56cf; -[SCAdOperaInteractiveAreaLayerView interactiveAreaView:didFailInteractionWithParameters:failReason:] */

void FUN_107ae5658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c068b60();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ae56d0; end: 107ae570b; -[SCAdOperaInteractiveAreaLayerView isViewAnimatingHorizontally] */

undefined8 FUN_107ae56d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c083480();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107ae570c; end: 107ae5747; -[SCAdOperaInteractiveAreaLayerView isPassthroughEnabled] */

undefined8 FUN_107ae570c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c079a80();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107ae5748; end: 107ae57ab; -[SCAdOperaInteractiveAreaLayerView interactiveAreaViewSwipeToAttachmentDirection:] */

undefined8 FUN_107ae5748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf643e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c068c40();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107ae57ac; end: 107ae583f; -[SCAdOperaInteractiveAreaLayerView interactiveAreaView:insetsForInteractiveAreaType:] */

undefined8
FUN_107ae57ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf643e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c068bc0();
  _objc_release(param_4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107ae5840; end: 107ae5913; -[SCAdOperaInteractiveAreaLayerView _setUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae5840(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276a190);
  *(undefined **)(param_1 + _DAT_11276a190) = puVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107ae5914; end: 107ae5953;  */

void FUN_107ae5914(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107ae5954; end: 107ae5c27; -[SCAdOperaInteractiveAreaLayerView _createInteractiveView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae5954(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + _DAT_11276a18c) == '\x01') {
    puVar1 = PTR_PTR_1126d6528;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  }
  else {
    puVar1 = PTR_PTR_1126d6530;
    _objc_opt_new();
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  func_0x00010c189840(puVar1,param_2,param_1);
  func_0x00010befbb60(param_1,param_2,puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf493a0(puVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_88 = puVar5;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c1408a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493a0(puVar6,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  puStack_80 = puVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493a0(puVar9,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = puVar11;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08e400(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010bf493a0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(puVar3 + _DAT_11276a194);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ae5c28; end: 107ae5c47; -[SCAdOperaInteractiveAreaLayerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae5c28(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276a194);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ae5c48; end: 107ae5c5b; -[SCAdOperaInteractiveAreaLayerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae5c48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276a194,param_3);
  return;
}



/* Entry: 107ae5c5c; end: 107ae5c7b; -[SCAdOperaInteractiveAreaLayerView dataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae5c5c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276a198);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ae5c7c; end: 107ae5c8f; -[SCAdOperaInteractiveAreaLayerView setDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae5c7c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276a198,param_3);
  return;
}



/* Entry: 107ae5c90; end: 107ae5c9f; -[SCAdOperaInteractiveAreaLayerView useSwiftInteractiveAreaView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ae5c90(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276a18c);
}



/* Entry: 107ae5ca0; end: 107ae5caf; -[SCAdOperaInteractiveAreaLayerView setUseSwiftInteractiveAreaView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae5ca0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276a18c) = param_3;
  return;
}



/* Entry: 107ae5cb0; end: 107ae5cf7; -[SCAdOperaInteractiveAreaLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae5cb0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276a198);
  _objc_destroyWeak(param_1 + _DAT_11276a194);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a190,0);
  return;
}



/* Entry: 107ae5cf8; end: 107ae5d63; -[SCAdOperaInteractiveAreaLayerViewController isFullyVisible] */

undefined8 FUN_107ae5cf8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f13c0(uVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107ae5d64; end: 107ae5ddf; -[SCAdOperaInteractiveAreaLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae5d64(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d6538;
  _objc_alloc_init();
  lVar3 = (long)_DAT_11276a1a0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c21db60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107ae5de0; end: 107ae5e3b; -[SCAdOperaInteractiveAreaLayerViewController setDelegateViewForGestures:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae5de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11276a1a8;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  func_0x00010c18b700(*(undefined8 *)(param_1 + _DAT_11276a1a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ae5e3c; end: 107ae5f0f; -[SCAdOperaInteractiveAreaLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae5e3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_updateViewWithPreviousLayer_curr_112680a50;
  puStack_48 = PTR_PTR_1126f9c10;
  lStack_50 = param_1;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar1,param_3,param_4);
  lVar4 = (long)_DAT_11276a1a0;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  uVar2 = param_4;
  func_0x00010c068ae0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf47780(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  param_1 = param_1 + _DAT_11276a1a8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c18b700(uVar2);
  _objc_release(param_1);
  return;
}



/* Entry: 107ae5f10; end: 107ae5f17; -[SCAdOperaInteractiveAreaLayerViewController layerViewContainerOption] */

undefined8 FUN_107ae5f10(void)

{
  return 2;
}



/* Entry: 107ae5f18; end: 107ae6663; -[SCAdOperaInteractiveAreaLayerViewController interactiveAreaView:didSwipeWithParameters:] */

void FUN_107ae5f18(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  ulong uVar38;
  ulong uVar39;
  undefined1 uVar40;
  byte bVar41;
  char cVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
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
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010be59880(param_1);
  puVar1 = PTR_PTR_1126ca240;
  func_0x00010c264d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    bVar41 = 0;
  }
  else {
    bVar41 = *(byte *)(param_4 + 8);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1a0 = puVar1;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar41 & 1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ca240;
  puStack_110 = puVar2;
  func_0x00010bf86e80();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = 0;
  uVar43 = 0;
  if (param_4 != 0) {
    uVar43 = *(undefined8 *)(param_4 + 0x20);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_198 = puVar3;
  func_0x00010c0df720(uVar43);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ca240;
  puStack_108 = puVar4;
  func_0x00010c2979e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    uVar44 = *(undefined8 *)(param_4 + 0x28);
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_190 = puVar5;
  func_0x00010c0df720(uVar44);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ca240;
  puStack_100 = puVar6;
  func_0x00010bf87020();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = 0;
  uVar43 = 0;
  if (param_4 != 0) {
    uVar43 = *(undefined8 *)(param_4 + 0x30);
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_188 = puVar7;
  func_0x00010c0df720(uVar43);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ca240;
  puStack_f8 = puVar8;
  func_0x00010c297a40();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    uVar44 = *(undefined8 *)(param_4 + 0x38);
  }
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_180 = puVar9;
  func_0x00010c0df720(uVar44);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126ca240;
  puStack_f0 = puVar10;
  func_0x00010c083ce0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    bVar41 = 0;
  }
  else {
    bVar41 = *(byte *)(param_4 + 9);
  }
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_178 = puVar11;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar41 & 1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126ca240;
  puStack_e8 = puVar12;
  func_0x00010c268d60();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    uVar40 = 0;
  }
  else {
    uVar40 = *(undefined1 *)(param_4 + 8);
  }
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_170 = puVar13;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar40);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126c9a28;
  puStack_e0 = puVar14;
  func_0x00010c29d1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = 0;
  uVar43 = 0;
  if (param_4 != 0) {
    uVar43 = *(undefined8 *)(param_4 + 0x10);
  }
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_168 = puVar15;
  func_0x00010c0df720(uVar43);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126c9a28;
  puStack_d8 = puVar16;
  func_0x00010c29d260();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    uVar44 = *(undefined8 *)(param_4 + 0x18);
  }
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_160 = puVar17;
  func_0x00010c0df720(uVar44);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126c9a28;
  puStack_d0 = puVar18;
  func_0x00010c29d180();
  _objc_retainAutoreleasedReturnValue();
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  if (param_4 != 0) {
    uStack_1a8 = *(undefined8 *)(param_4 + 0x48);
    uStack_1b0 = *(undefined8 *)(param_4 + 0x40);
  }
  puVar20 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  puStack_158 = puVar19;
  func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_1b0,"{CGPoint=dd}");
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126ca240;
  puStack_c8 = puVar20;
  func_0x00010c154c40();
  _objc_retainAutoreleasedReturnValue();
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  if (param_4 != 0) {
    uStack_1b8 = *(undefined8 *)(param_4 + 0x68);
    uStack_1c0 = *(undefined8 *)(param_4 + 0x60);
  }
  puVar22 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  puStack_150 = puVar21;
  func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_1c0,"{CGPoint=dd}");
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126c9a28;
  puStack_c0 = puVar22;
  func_0x00010c29d200();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    uStack_1d0 = 0;
    uStack_1c8 = 0;
  }
  else {
    uStack_1c8 = *(undefined8 *)(param_4 + 0x88);
    uStack_1d0 = *(undefined8 *)(param_4 + 0x80);
  }
  puVar24 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  puStack_148 = puVar23;
  func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_1d0,"{CGPoint=dd}");
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126c9a28;
  puStack_b8 = puVar24;
  func_0x00010c29d1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = 0;
  uVar43 = 0;
  if (param_4 != 0) {
    uVar43 = *(undefined8 *)(param_4 + 0x50);
  }
  puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_140 = puVar25;
  func_0x00010c0df720(uVar43);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR_PTR_1126c9a28;
  puStack_b0 = puVar26;
  func_0x00010c29d1c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    uVar44 = *(undefined8 *)(param_4 + 0x58);
  }
  puVar28 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_138 = puVar27;
  func_0x00010c0df720(uVar44);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR_PTR_1126ca240;
  puStack_a8 = puVar28;
  func_0x00010c154c60();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = 0;
  uVar43 = 0;
  if (param_4 != 0) {
    uVar43 = *(undefined8 *)(param_4 + 0x70);
  }
  puVar30 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_130 = puVar29;
  func_0x00010c0df720(uVar43);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR_PTR_1126ca240;
  puStack_a0 = puVar30;
  func_0x00010c154c80();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    uVar44 = *(undefined8 *)(param_4 + 0x78);
  }
  puVar32 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_128 = puVar31;
  func_0x00010c0df720(uVar44);
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR_PTR_1126c9a28;
  puStack_98 = puVar32;
  func_0x00010c29d220();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = 0;
  uVar43 = 0;
  if (param_4 != 0) {
    uVar43 = *(undefined8 *)(param_4 + 0x90);
  }
  puVar34 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_120 = puVar33;
  func_0x00010c0df720(uVar43);
  _objc_retainAutoreleasedReturnValue();
  puVar35 = PTR_PTR_1126c9a28;
  puStack_90 = puVar34;
  func_0x00010c29d240();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    uVar44 = *(undefined8 *)(param_4 + 0x98);
  }
  puVar36 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_118 = puVar35;
  func_0x00010c0df720(uVar44);
  _objc_retainAutoreleasedReturnValue();
  puVar37 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar36;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_110,&puStack_1a0,
                      0x12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
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
  _objc_release(puVar1);
  uVar38 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar38;
  func_0x00010c080640();
  _objc_release(uVar38);
  if (param_4 == 0) {
    _objc_release(0);
    if ((int)uVar39 == 0) goto LAB_107ae65b4;
    cVar42 = '\0';
  }
  else {
    cVar42 = *(char *)(param_4 + 8);
    _objc_release(param_4);
    if ((uVar39 & 1) == 0) {
      if (cVar42 != '\0') {
        puVar1 = PTR_PTR_1126affa8;
        func_0x00010c22bc20(PTR_PTR_1126affa8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f8760();
        _objc_release(puVar1);
      }
LAB_107ae65b4:
      puVar1 = PTR_PTR_1126ca1d0;
      func_0x00010bf7c2e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf04440(param_1,param_2,puVar1,puVar37);
      _objc_release(puVar1);
      goto LAB_107ae65e8;
    }
  }
  func_0x00010be31820(param_1,param_2,puVar37,cVar42);
LAB_107ae65e8:
  _objc_release(puVar37);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126ca1d0;
  func_0x00010bf74460(PTR_PTR_1126ca1d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(puVar37,param_2,puVar1,PTR____NSDictionary0__struct_11034ab58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ae6664; end: 107ae66af; -[SCAdOperaInteractiveAreaLayerViewController interactiveAreaViewDidCrossSwipeLeftHintThreshold:] */

void FUN_107ae6664(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca1d0;
  func_0x00010bf74460(PTR_PTR_1126ca1d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,PTR____NSDictionary0__struct_11034ab58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ae66b0; end: 107ae66fb; -[SCAdOperaInteractiveAreaLayerViewController interactiveAreaViewDidRecedeSwipeLeftHintThreshold:] */

void FUN_107ae66b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca1d0;
  func_0x00010bf78fc0(PTR_PTR_1126ca1d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,PTR____NSDictionary0__struct_11034ab58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ae66fc; end: 107ae676b; -[SCAdOperaInteractiveAreaLayerViewController _handleSwipeToAttachmentDisabled:swipeRecognized:] */

void FUN_107ae66fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca1d0;
  if (param_4 != 0) {
    _objc_retain(param_3);
    func_0x00010bf72660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(param_1,param_2,puVar1,param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107ae676c; end: 107ae67d3; -[SCAdOperaInteractiveAreaLayerViewController interactiveAreaView:didBeginInteractionWithParameters:] */

void FUN_107ae676c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca1d0;
  _objc_retain(param_4);
  func_0x00010bf72920(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbf60(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ae67d4; end: 107ae683b; -[SCAdOperaInteractiveAreaLayerViewController interactiveAreaView:didRegisterSecondPointWithParameters:] */

void FUN_107ae67d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca1d0;
  _objc_retain(param_4);
  func_0x00010bf798c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbf60(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ae683c; end: 107ae68a3; -[SCAdOperaInteractiveAreaLayerViewController interactiveAreaView:didCompleteInteractionWithParameters:] */

void FUN_107ae683c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca1d0;
  _objc_retain(param_4);
  func_0x00010bf73ca0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbf60(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ae68a4; end: 107ae68af; -[SCAdOperaInteractiveAreaLayerViewController interactiveAreaView:didFailInteractionWithParameters:failReason:] */

void FUN_107ae68a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcbf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__announceInteractionFailedEventW_112550980,param_4,param_5);
  return;
}



/* Entry: 107ae68b0; end: 107ae6a9b; -[SCAdOperaInteractiveAreaLayerViewController _announceInteractionEvent:parameters:] */

void FUN_107ae68b0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

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
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  puVar1 = PTR_PTR_1126c9a28;
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c29d180();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297120();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9a28;
  func_0x00010c29d1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = 0;
  uVar23 = 0;
  if (param_4 != 0) {
    uVar23 = *(undefined8 *)(param_4 + 0x18);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9a28;
  func_0x00010c29d1c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 != 0) {
    uVar24 = *(undefined8 *)(param_4 + 0x20);
  }
  _objc_release(param_4);
  func_0x00010c0df720(uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar21 = param_3;
  func_0x00010bf04440(param_1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126c9a28;
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar21);
  func_0x00010c29d180();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297120();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9a28;
  func_0x00010c29d200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297120();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9a28;
  func_0x00010c29d1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = 0;
  uVar23 = 0;
  if (lVar21 != 0) {
    uVar23 = *(undefined8 *)(lVar21 + 0x50);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c9a28;
  func_0x00010c29d1c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar21 != 0) {
    uVar24 = *(undefined8 *)(lVar21 + 0x58);
  }
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9a28;
  func_0x00010c29d220();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = 0;
  uVar23 = 0;
  if (lVar21 != 0) {
    uVar23 = *(undefined8 *)(lVar21 + 0x90);
  }
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126c9a28;
  func_0x00010c29d240();
  _objc_retainAutoreleasedReturnValue();
  if (lVar21 != 0) {
    uVar24 = *(undefined8 *)(lVar21 + 0x98);
  }
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126c9a28;
  func_0x00010c29d1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = 0;
  uVar23 = 0;
  if (lVar21 != 0) {
    uVar23 = *(undefined8 *)(lVar21 + 0x10);
  }
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126c9a28;
  func_0x00010c29d260();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar21 != 0) {
    uVar24 = *(undefined8 *)(lVar21 + 0x18);
  }
  _objc_release(lVar21);
  func_0x00010c0df720(uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126ca240;
  func_0x00010c2648c0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ca1d0;
  func_0x00010bf761a0(PTR_PTR_1126ca1d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(puVar7);
  _objc_release(puVar1);
  _objc_release(puVar20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c06c150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107ae6a9c; end: 107ae6e6f; -[SCAdOperaInteractiveAreaLayerViewController _announceInteractionFailedEventWithParameters:failReason:] */

void FUN_107ae6a9c(undefined8 param_1,undefined8 param_2,long param_3)

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
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar1 = PTR_PTR_1126c9a28;
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c29d180();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297120();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9a28;
  func_0x00010c29d200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297120();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9a28;
  func_0x00010c29d1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = 0;
  uVar21 = 0;
  if (param_3 != 0) {
    uVar21 = *(undefined8 *)(param_3 + 0x50);
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(uVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c9a28;
  func_0x00010c29d1c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    uVar22 = *(undefined8 *)(param_3 + 0x58);
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c9a28;
  func_0x00010c29d220();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = 0;
  uVar21 = 0;
  if (param_3 != 0) {
    uVar21 = *(undefined8 *)(param_3 + 0x90);
  }
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(uVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c9a28;
  func_0x00010c29d240();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    uVar22 = *(undefined8 *)(param_3 + 0x98);
  }
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126c9a28;
  func_0x00010c29d1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = 0;
  uVar21 = 0;
  if (param_3 != 0) {
    uVar21 = *(undefined8 *)(param_3 + 0x10);
  }
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(uVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126c9a28;
  func_0x00010c29d260();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 != 0) {
    uVar22 = *(undefined8 *)(param_3 + 0x18);
  }
  _objc_release(param_3);
  func_0x00010c0df720(uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126ca240;
  func_0x00010c2648c0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
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
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ca1d0;
  func_0x00010bf761a0(PTR_PTR_1126ca1d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1);
  _objc_release(puVar1);
  _objc_release(puVar19);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c06c150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107ae6e70; end: 107ae6e73; -[SCAdOperaInteractiveAreaLayerViewController isViewAnimatingHorizontally] */

void FUN_107ae6e70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06c150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isAnimatingHorizontally_1125f8a60);
  return;
}



/* Entry: 107ae6e74; end: 107ae6e7b; -[SCAdOperaInteractiveAreaLayerViewController isPassthroughEnabled] */

undefined8 FUN_107ae6e74(void)

{
  return 1;
}



/* Entry: 107ae6e7c; end: 107ae6ee3; -[SCAdOperaInteractiveAreaLayerViewController interactiveAreaViewSwipeToAttachmentDirection:] */

ulong FUN_107ae6e7c(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0d6c60();
    uVar2 = (ulong)(lVar1 == 1);
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 107ae6ee4; end: 107ae6f8b; -[SCAdOperaInteractiveAreaLayerViewController interactiveAreaViewCtaHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107ae6ee4(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  lVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5d5a0();
  _objc_release(lVar1);
  if (lVar2 == 3) {
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c27fd80();
    dVar3 = (double)lVar1;
    _objc_release(param_2);
  }
  else {
    dVar3 = 0.0;
    if (lVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bf885b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_2 + _DAT_11276a1ac),PTR_s_doubleValue_1125bfb10);
      return param_1;
    }
  }
  return dVar3;
}



/* Entry: 107ae6f8c; end: 107ae711f; -[SCAdOperaInteractiveAreaLayerViewController interactiveAreaView:insetsForInteractiveAreaType:] */

double FUN_107ae6f8c(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                    undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double unaff_d8;
  
  _objc_retain(param_7);
  lVar1 = param_5;
  func_0x00010c08c520(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c068ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c068b00();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 2) {
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010c0eb1c0(lVar1);
    param_4 = param_4 - param_1;
    func_0x00010c0f1de0(lVar1);
    param_4 = param_4 - param_1;
    func_0x00010c0eb1c0(lVar1);
    func_0x00010c068be0(param_5,param_6,param_7);
    unaff_d8 = (param_4 - param_3) - param_1;
    _objc_release(lVar2);
    func_0x00010c0eb1c0(lVar1);
    func_0x00010c0eb1c0(lVar1);
  }
  else if (lVar4 == 1) {
    unaff_d8 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  else if (lVar4 == 0) {
    func_0x00010c0eb1c0(lVar1);
    func_0x00010c0eb1c0(lVar1);
    func_0x00010c0eb1c0(lVar1);
    func_0x00010c0f0c40(lVar1);
    func_0x00010c0eb1c0(lVar1);
    unaff_d8 = param_1;
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  return unaff_d8;
}



/* Entry: 107ae7120; end: 107ae7127; -[SCAdOperaInteractiveAreaLayerViewController _logSwipeToAttachmentDirection] */

void FUN_107ae7120(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c068c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_interactiveAreaViewSwipeToAttach_1125f7d20,0)
  ;
  return;
}



/* Entry: 107ae7128; end: 107ae7147; -[SCAdOperaInteractiveAreaLayerViewController delegateViewForGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae7128(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276a1a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ae7148; end: 107ae7157; -[SCAdOperaInteractiveAreaLayerViewController useSwiftInteractiveAreaView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ae7148(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276a1a4);
}



/* Entry: 107ae7158; end: 107ae7167; -[SCAdOperaInteractiveAreaLayerViewController setUseSwiftInteractiveAreaView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae7158(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276a1a4) = param_3;
  return;
}



/* Entry: 107ae7168; end: 107ae71b3; -[SCAdOperaInteractiveAreaLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae7168(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276a1a8);
  _objc_storeStrong(param_1 + _DAT_11276a1a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a1ac,0);
  return;
}



/* Entry: 107ae71b4; end: 107ae71bb; -[SCOperaAdProgressBarLayerView initWithFrame:] */

void FUN_107ae71b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c013e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFrame_adConfigProvider__1125e2960,0);
  return;
}



/* Entry: 107ae71bc; end: 107ae72d7; -[SCOperaAdProgressBarLayerView initWithFrame:adConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107ae71bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f9c18;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    uVar5 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf1f480();
    _objc_release(uVar5);
    ppuVar1 = &PTR_PTR_1126d6540;
    if ((int)uVar3 == 0) {
      ppuVar1 = &PTR_PTR_1126c9628;
    }
    puVar4 = *ppuVar1;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276a1b0);
    *(undefined **)((long)puVar2 + (long)_DAT_11276a1b0) = puVar4;
    _objc_release(uVar5);
    func_0x00010befbb60(puVar2);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar2;
}



/* Entry: 107ae72d8; end: 107ae73ab; -[SCOperaAdProgressBarLayerView configureWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae72d8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11276a1b4;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_107ae7394;
    }
    func_0x00010bf47d60(*(undefined8 *)(param_1 + _DAT_11276a1b0),param_2,param_3);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    func_0x00010c1cbe20(param_1);
  }
LAB_107ae7394:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ae73ac; end: 107ae73e7; -[SCOperaAdProgressBarLayerView teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae73ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276a1b4);
  *(undefined8 *)(param_1 + _DAT_11276a1b4) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c26ac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a1b0),PTR_s_teardown_112678538);
  return;
}



/* Entry: 107ae73e8; end: 107ae742b; -[SCOperaAdProgressBarLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae73e8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf20ca0();
  lVar1 = (long)_DAT_11276a1b0;
  func_0x00010c19f0e0(0,0x4010000000000000,param_1,0x4010000000000000,
                      *(undefined8 *)(param_2 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c08d150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + lVar1),PTR_s_layoutSubviews_112600e60);
  return;
}



/* Entry: 107ae742c; end: 107ae74af; -[SCOperaAdProgressBarLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae742c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_11276a1b0);
  _objc_retain(param_5);
  func_0x00010bf512a0(param_1,param_2,param_3,param_4,uVar1);
  func_0x00010bfe3a40(uVar1,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ae74b0; end: 107ae74ef; -[SCOperaAdProgressBarLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae74b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276a1b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a1b4,0);
  return;
}



/* Entry: 107ae74f0; end: 107ae75ab; -[SCOperaAdProgressBarLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:featureFlags:adConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107ae74f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f9c20;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithConfiguration_layerViewC_1125de050,param_3,param_4,
                      param_5,param_6,param_7);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11276a1b8;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 107ae75ac; end: 107ae761f; -[SCOperaAdProgressBarLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae75ac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d6548;
  _objc_alloc();
  func_0x00010c013e40(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11276a1bc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107ae7620; end: 107ae76b3; -[SCOperaAdProgressBarLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae7620(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276a1bc);
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c117840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47d60(uVar2,param_2,lVar1);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107ae76b4; end: 107ae76bb; -[SCOperaAdProgressBarLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

undefined8 FUN_107ae76b4(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 107ae76bc; end: 107ae770b; -[SCOperaAdProgressBarLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae76bc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9c20;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_teardown_112678538);
  func_0x00010c26ac40(*(undefined8 *)(param_1 + _DAT_11276a1bc));
  return;
}



/* Entry: 107ae770c; end: 107ae77e3; -[SCOperaAdProgressBarLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae770c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126d6550;
    func_0x00010bfe1620(PTR_PTR_1126d6550);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (lVar2 != 0) {
      puVar1 = PTR_PTR_1126d6550;
      func_0x00010bfe1620(PTR_PTR_1126d6550);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf1f3c0();
      _objc_release(lVar2);
      _objc_release(puVar1);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276a1bc),param_2,lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ae77e4; end: 107ae7823; -[SCOperaAdProgressBarLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae77e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276a1b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a1bc,0);
  return;
}



/* Entry: 107ae7824; end: 107ae789b; +[SCAdOperaContextUtilities isTopSnapContext:] */

undefined8 FUN_107ae7824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2340;
  func_0x00010c075040(PTR_PTR_1126b2340,param_2,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126b2340;
    func_0x00010c083240(PTR_PTR_1126b2340,param_2,param_3);
    if (((ulong)puVar1 & 1) == 0) {
      func_0x00010c06eec0(param_1,param_2,param_3);
      goto LAB_107ae7880;
    }
  }
  param_1 = 1;
LAB_107ae7880:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107ae789c; end: 107ae791f; +[SCAdOperaContextUtilities isComposerDpaContext:] */

bool FUN_107ae789c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bfe00;
  _objc_retain(param_3);
  func_0x00010bef2480(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  return lVar2 != 0;
}



/* Entry: 107ae7920; end: 107ae7967; +[SCAdOperaContextUtilities isVerticalEndCardPresenterContext:] */

undefined8 FUN_107ae7920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e4e478);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf1f3c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107ae7968; end: 107ae79ff; +[SCAdOperaContextUtilities isAdLongformRotatingVideoContext:] */

undefined8 FUN_107ae7968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010be3df80(param_1,param_2,param_3);
  if ((int)param_1 != 0) {
    puVar1 = PTR_PTR_1126b2340;
    func_0x00010c0771a0(PTR_PTR_1126b2340,param_2,param_3);
    if ((int)puVar1 != 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0c0f8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf1f3c0();
      _objc_release(uVar2);
      goto LAB_107ae79e4;
    }
  }
  uVar3 = 0;
LAB_107ae79e4:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107ae7a00; end: 107ae7a9b; +[SCAdOperaContextUtilities isRemoteWebPageAttachmentContext:] */

uint FUN_107ae7a00(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0cad8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0cf78);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    uVar4 = (uint)lVar3 ^ 1;
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107ae7a9c; end: 107ae7b0f; +[SCAdOperaContextUtilities isDeeplinkAppStoreFallbackContext:] */

bool FUN_107ae7a9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ca2b0;
  func_0x00010c06c400(PTR_PTR_1126ca2b0,param_2,param_3);
  if ((int)puVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0e338);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107ae7b10; end: 107ae7b97; +[SCAdOperaContextUtilities isExternalBrowserRemoteWebpageContext:] */

undefined8 FUN_107ae7b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bfe00;
  _objc_retain(param_3);
  func_0x00010c12a860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf1f3c0(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 107ae7b98; end: 107ae7c1f; +[SCAdOperaContextUtilities isExternalBrowserWithBottomSnapEnabledContext:] */

undefined8 FUN_107ae7b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bfe00;
  _objc_retain(param_3);
  func_0x00010c12a880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf1f3c0(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 107ae7c20; end: 107ae7c9f; +[SCAdOperaContextUtilities isStoreContext:] */

bool FUN_107ae7c20(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bfe00;
  _objc_retain(param_3);
  func_0x00010c257a80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  return lVar2 != 0;
}



/* Entry: 107ae7ca0; end: 107ae7d23; +[SCAdOperaContextUtilities isAppInstallAttachmentContext:] */

bool FUN_107ae7ca0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bfe00;
  _objc_retain(param_3);
  func_0x00010bf05560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  return lVar2 != 0;
}



/* Entry: 107ae7d24; end: 107ae7da7; +[SCAdOperaContextUtilities isExternalBrowserAttachmentContext:] */

undefined8 FUN_107ae7d24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c072640(param_1,param_2,param_3);
  if ((int)param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb15f8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107ae7da8; end: 107ae7e5f; +[SCAdOperaContextUtilities isSwipeSensitivityLayerEnabledContext:] */

ulong FUN_107ae7da8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126bfe00;
  _objc_retain(param_3);
  func_0x00010bef3120(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ca7e8;
  _objc_opt_class(PTR_PTR_1126ca7e8);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bf8ef20(uVar1);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 107ae7e60; end: 107ae7f4b; +[SCAdOperaContextUtilities isCustomProductPageEnabledContext:] */

bool FUN_107ae7e60(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar3 = PTR_PTR_1126bfe00;
  _objc_retain(param_3);
  func_0x00010c257a80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar1 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 == 0) {
    bVar2 = false;
  }
  else {
    func_0x00010c0e00e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    bVar2 = uVar5 != 0;
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  return bVar2;
}



/* Entry: 107ae7f4c; end: 107ae7fcf; +[SCAdOperaContextUtilities isPlayableContentContext:] */

bool FUN_107ae7f4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ca738;
  _objc_retain(param_3);
  func_0x00010c0fed60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  return lVar2 != 0;
}



/* Entry: 107ae7fd0; end: 107ae801b; +[SCAdOperaContextUtilities _isAdContext:] */

undefined8 FUN_107ae7fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0e358);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf1f3c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107ae801c; end: 107ae81bb;  */

ulong FUN_107ae801c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar2 = &puStack_80;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107ae81bc;
  puStack_68 = &UNK_110841f80;
  _objc_retain(param_2);
  uStack_60 = param_2;
  _objc_retain(param_1);
  uStack_58 = param_1;
  _objc_retainBlock();
  puVar3 = PTR_PTR_1126ca1d0;
  func_0x00010bf7c2e0(PTR_PTR_1126ca1d0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)uVar4 == 0) {
    uVar6 = 0;
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
    puVar3 = PTR_PTR_1126ca240;
    func_0x00010c264d40(PTR_PTR_1126ca240);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar3);
    uVar1 = uVar6;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar6);
    uVar6 = uVar1;
    func_0x00010bf1f3c0(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 107ae81bc; end: 107ae81bf;  */

void FUN_107ae81bc(void)

{
  return;
}



/* Entry: 107ae81c0; end: 107ae8253;  */

undefined1 * FUN_107ae81c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ca1d0;
  func_0x00010bf7c2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_60;
  pcStack_38 = FUN_107ae8254;
  puStack_58 = PTR_PTR_1126f9c28;
  puStack_60 = puVar3;
  puStack_50 = puVar1;
  puStack_48 = puVar2;
  puStack_40 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_60,PTR_s_initWithFrame__1125e2948);
  if (ppuVar4 != (undefined **)0x0) {
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(ppuVar4);
    _objc_release(puVar1);
  }
  return (undefined1 *)ppuVar4;
}



/* Entry: 107ae8254; end: 107ae82cf; -[SCAdTapToSkipLayerView initWithFrame:] */

undefined1 * FUN_107ae8254(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9c28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107ae82d0; end: 107ae83af; -[SCAdTapToSkipLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae82d0(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long *plVar2;
  double dVar3;
  long lStack_60;
  undefined *puStack_58;
  
  plVar2 = &lStack_60;
  dVar3 = param_1;
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar1);
  if (dVar3 * 1000.0 - *(double *)(param_3 + _DAT_11276a1c4) <=
      *(double *)(param_3 + _DAT_11276a1c8)) {
    puStack_58 = PTR_PTR_1126f9c28;
    lStack_60 = param_3;
    _objc_msgSendSuper2(param_1,param_2,&lStack_60,PTR_s_hitTest_withEvent__1125d6850,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    plVar2 = (long *)0x0;
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 107ae83b0; end: 107ae841f; -[SCAdTapToSkipLayerView enableTapHandlingForDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae83b0(double param_1,long param_2)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  dVar2 = param_1;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  *(double *)(param_2 + _DAT_11276a1c4) = dVar2 * 1000.0;
  _objc_release(puVar1);
  *(double *)(param_2 + _DAT_11276a1c8) = param_1;
  return;
}



/* Entry: 107ae8420; end: 107ae844f; -[SCAdTapToSkipLayerView _didTapLayerView] */

void FUN_107ae8420(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7cc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ae8450; end: 107ae846f; -[SCAdTapToSkipLayerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae8450(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276a1c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ae8470; end: 107ae8483; -[SCAdTapToSkipLayerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae8470(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276a1c0,param_3);
  return;
}



/* Entry: 107ae8484; end: 107ae8493; -[SCAdTapToSkipLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae8484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276a1c0);
  return;
}



/* Entry: 107ae8494; end: 107ae84fb; -[SCAdTapToSkipLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae8494(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d6558;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11276a1cc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107ae84fc; end: 107ae8503; -[SCAdTapToSkipLayerViewController isRecyclable] */

undefined8 FUN_107ae84fc(void)

{
  return 0;
}



/* Entry: 107ae8504; end: 107ae8537; -[SCAdTapToSkipLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae8504(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010c23e3c0();
  *(double *)(param_1 + _DAT_11276a1d0) = (double)param_4;
  return;
}



/* Entry: 107ae8538; end: 107ae858f; -[SCAdTapToSkipLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae8538(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9c30;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyAppear_112684c88);
  func_0x00010bf92080(*(undefined8 *)(param_1 + _DAT_11276a1d0),
                      *(undefined8 *)(param_1 + _DAT_11276a1cc));
  return;
}


