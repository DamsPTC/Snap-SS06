/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ae01ec; end: 107ae01ef; -[SCStreamingContentFetcher onComplete] */

void FUN_107ae01ec(void)

{
  return;
}



/* Entry: 107ae01f0; end: 107ae01ff; -[SCStreamingContentFetcher _handleCallingBackWithSuccess:] */

void FUN_107ae01f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107ae01fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))
            (*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 107ae0200; end: 107ae023b; -[SCStreamingContentFetcher .cxx_destruct] */

void FUN_107ae0200(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ae023c; end: 107ae0247; -[SCDiscoverVideoCatalogServices .cxx_destruct] */

void FUN_107ae023c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ae0248; end: 107ae037b; -[SCAdOperaPlaceLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:featureFlags:pageLauncher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107ae0248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f9bd0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithConfiguration_layerViewC_1125de050,param_3,param_4,
                      param_5,param_6,param_7);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b44c8;
    _objc_alloc();
    func_0x00010c030dc0();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276a10c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276a10c) = puVar2;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_11276a110;
    _objc_retain(param_8);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_8;
    _objc_release(uVar5);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf99b40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    func_0x00010be89fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 107ae037c; end: 107ae0437; +[SCAdOperaPlaceLayerViewController _registeredEventsForOperaSession] */

void FUN_107ae037c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c0f25a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9460;
  puStack_48 = puVar1;
  func_0x00010c0f2600();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c222380(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107ae0438; end: 107ae04bb; -[SCAdOperaPlaceLayerViewController loadView] */

void FUN_107ae0438(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ae04bc; end: 107ae0507; -[SCAdOperaPlaceLayerViewController viewDidLoad] */

void FUN_107ae04bc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9bd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c189400(param_1);
  return;
}



/* Entry: 107ae0508; end: 107ae05bf; -[SCAdOperaPlaceLayerViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae0508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f9bd0;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = *(undefined8 *)(param_5 + _DAT_11276a114);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 107ae05c0; end: 107ae0623; -[SCAdOperaPlaceLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae05c0(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9bd0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_teardown_112678538);
  lVar1 = param_1 + _DAT_11276a118;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010be359a0(param_1);
  }
  return;
}



/* Entry: 107ae0624; end: 107ae067b; -[SCAdOperaPlaceLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

undefined8 FUN_107ae0624(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong in_x3;
  
  puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_retain(in_x3);
  _objc_opt_class(puVar2);
  uVar3 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar2);
  _objc_release(in_x3);
  uVar1 = 0xffffffffffffffff;
  if ((uVar3 & 1) != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 107ae067c; end: 107ae07ef; -[SCAdOperaPlaceLayerViewController operaViewDidSendEvent:page:params:] */

void FUN_107ae067c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c0f25a0(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    _objc_release(puVar1);
  }
  else {
    uVar3 = param_1;
    func_0x00010c0eaa40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar1);
    if ((int)uVar5 != 0) {
      func_0x00010beb9c80(param_1);
      goto LAB_107ae07cc;
    }
  }
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c0f2600(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    _objc_release(puVar1);
  }
  else {
    uVar3 = param_1;
    func_0x00010c0f2520();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c0eaa40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0f13c0(uVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar1);
    if ((int)uVar5 != 0) {
      func_0x00010be359a0(param_1);
    }
  }
LAB_107ae07cc:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ae07f0; end: 107ae08a7; -[SCAdOperaPlaceLayerViewController attachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae07f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11276a114;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  func_0x00010bef7700(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x00010bf77e80(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ae08a8; end: 107ae097b; -[SCAdOperaPlaceLayerViewController detachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae08a8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11276a114;
  func_0x00010c2a6740(*(undefined8 *)(param_1 + lVar3),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  func_0x00010c12c8e0(*(undefined8 *)(param_1 + lVar3));
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  func_0x00010c281b20(*(undefined8 *)(param_1 + _DAT_11276a10c));
  if (param_3 == 0) {
    puVar2 = PTR_PTR_1126b2638;
    func_0x00010c152660(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04420(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ae097c; end: 107ae0b0f; -[SCAdOperaPlaceLayerViewController _showMapPlaceProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae097c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126b5c50;
  _objc_alloc(PTR_PTR_1126b5c50);
  func_0x00010c031b80();
  puVar5 = PTR_PTR_1126b5c58;
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0fd0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afdd8;
  func_0x00010c0f2220(param_1);
  func_0x00010bfc8740(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fd700(*(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98,
                      *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8),
                      *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98,
                      *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8),puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126c69f8;
  _objc_alloc(PTR_PTR_1126c69f8);
  func_0x00010c00bb00();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11276a110);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c080();
  _objc_release(uVar6);
  puVar7 = puVar4;
  func_0x00010bf6b020(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + _DAT_11276a118,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ae0b10; end: 107ae0b93; -[SCAdOperaPlaceLayerViewController _hideMapPlaceProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae0b10(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276a118;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + lVar2;
    _objc_loadWeakRetained(lVar1);
    _objc_storeWeak(param_1 + lVar2,0);
    if (*(long *)(param_1 + _DAT_11276a114) != 0) {
      func_0x00010bf839e0(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107ae0b94; end: 107ae0b9b; -[SCAdOperaPlaceLayerViewController pageViewName] */

undefined8 FUN_107ae0b94(void)

{
  return 5;
}



/* Entry: 107ae0b9c; end: 107ae0bf7; -[SCAdOperaPlaceLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae0b9c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276a118);
  _objc_storeStrong(param_1 + _DAT_11276a110,0);
  _objc_storeStrong(param_1 + _DAT_11276a114,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a10c,0);
  return;
}



/* Entry: 107ae0bf8; end: 107ae0c47; -[SCAdComposerCtaLayerView init] */

undefined1 * FUN_107ae0bf8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9bd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bea9440(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107ae0c48; end: 107ae0fe3; -[SCAdComposerCtaLayerView setUpWithViewModel:componentContext:runtime:enableAccurateTouchGesturesInAnimations:enableDFSHitTestPrecheck:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae0c48(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  *(undefined1 *)(param_2 + _DAT_11276a11c) = param_8;
  lVar17 = param_2;
  func_0x00010c29d560(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c071ae0();
  _objc_release(lVar17);
  if ((uVar1 & 1) == 0) {
    lVar17 = (long)_DAT_11276a120;
    if (*(long *)(param_2 + lVar17) == 0) {
      puVar2 = PTR_PTR_1126d64a8;
      _objc_alloc();
      uVar14 = param_5;
      func_0x00010c269d40(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c061d40();
      uVar16 = *(undefined8 *)(param_2 + lVar17);
      *(undefined **)(param_2 + lVar17) = puVar2;
      _objc_release(uVar16);
      _objc_release(uVar14);
      lVar3 = param_2;
      func_0x00010bece440(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_2 + lVar17);
      func_0x00010c295200(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219560();
      _objc_release(uVar14);
      _objc_release(lVar3);
      func_0x00010c219b60(*(undefined8 *)(param_2 + lVar17));
      func_0x00010befbb60(param_2);
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar4 = *(undefined8 *)(param_2 + lVar17);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + lVar17);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_2;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_2 + lVar17);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_2;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_2 + lVar17);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_2;
      func_0x00010bf1ff80(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar10;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2);
      _objc_release(puVar13);
      _objc_release(uVar12);
      _objc_release(lVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(lVar8);
      _objc_release(uVar7);
      _objc_release(uVar16);
      _objc_release(lVar6);
      _objc_release(uVar5);
      _objc_release(uVar14);
      _objc_release(lVar3);
      _objc_release(uVar4);
    }
    else {
      func_0x00010c2226c0();
    }
    uVar14 = *(undefined8 *)(param_2 + lVar17);
    func_0x00010c295200(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194920();
    _objc_release(uVar14);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(param_4 + (long)_DAT_11276a124) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107ae0fe4; end: 107ae0ff3; -[SCAdComposerCtaLayerView setGradientViewHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae0fe4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276a124) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107ae0ff4; end: 107ae1057; -[SCAdComposerCtaLayerView layoutValdiViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae0ff4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276a120;
  if ((*(byte *)(param_1 + _DAT_11276a128) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c295200(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a1580();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 107ae1058; end: 107ae1067; -[SCAdComposerCtaLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae1058(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be36290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hitTest_withEvent_onView__11256b240,param_3,
             *(undefined8 *)(param_1 + _DAT_11276a120));
  return;
}



/* Entry: 107ae1068; end: 107ae1077; -[SCAdComposerCtaLayerView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae1068(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a120),PTR_s_setViewModel__1126663d8);
  return;
}



/* Entry: 107ae1078; end: 107ae1087; -[SCAdComposerCtaLayerView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae1078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a120),PTR_s_viewModel_112684f80);
  return;
}



/* Entry: 107ae1088; end: 107ae1333; -[SCAdComposerCtaLayerView _hitTest:withEvent:onView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_107ae1088(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             long param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  int iVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long lVar23;
  undefined *unaff_x27;
  long unaff_x28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined1 ***pppuStack_2a0;
  code *pcStack_298;
  undefined8 uStack_288;
  undefined *puStack_280;
  long lStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined *puStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar18 = param_2;
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_6 != param_3) && ((param_3[_DAT_11276a11c] & 1) != 0)) {
    puVar1 = param_6;
    func_0x00010bfc1c00();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar1;
    func_0x00010bf529e0();
    if (puVar22 == (undefined *)0x0) {
      puVar22 = param_6;
      func_0x00010c2953a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar1);
      if (puVar22 == (undefined *)0x0) goto LAB_107ae1178;
    }
    else {
      _objc_release(puVar1);
    }
    uVar5 = param_1;
    uVar18 = param_2;
    func_0x00010bf51200(param_1,param_2,param_6);
    puVar1 = param_6;
    func_0x00010bfe3a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 == (undefined *)0x0) {
      puVar22 = (undefined *)0x0;
      puVar1 = (undefined *)0x0;
      goto LAB_107ae12d8;
    }
  }
LAB_107ae1178:
  uVar5 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  puVar22 = param_6;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar22;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 == (undefined *)0x0) {
    puVar22 = (undefined *)0x0;
    puVar2 = unaff_x24;
  }
  else {
    unaff_x28 = *plStack_130;
    puStack_148 = param_6;
    do {
      puVar19 = (undefined *)0x0;
      do {
        if (*plStack_130 != unaff_x28) {
          _objc_enumerationMutation(puVar1);
        }
        puVar21 = *(undefined **)(lStack_138 + (long)puVar19 * 8);
        unaff_x25 = param_3;
        uVar5 = param_1;
        uVar18 = param_2;
        func_0x00010be36280(param_1,param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar22 = unaff_x25;
        if (unaff_x25 != (undefined *)0x0) {
LAB_107ae12b4:
          _objc_retain(puVar22);
          _objc_release(unaff_x25);
          param_6 = puStack_148;
          goto LAB_107ae12d0;
        }
        unaff_x26 = puVar21;
        func_0x00010bfc1c00();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = unaff_x26;
        func_0x00010bf529e0();
        _objc_release(unaff_x26);
        if (unaff_x27 != (undefined *)0x0) {
          uVar5 = param_1;
          uVar18 = param_2;
          func_0x00010bf51200(param_1,param_2,puVar21);
          unaff_x26 = puVar21;
          func_0x00010bfe3a40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar22 = puVar21;
          if (unaff_x26 != (undefined *)0x0) goto LAB_107ae12b4;
        }
        puVar19 = puVar19 + 1;
      } while (puVar2 != puVar19);
      puVar2 = puVar1;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
    puVar22 = (undefined *)0x0;
    param_6 = puStack_148;
  }
LAB_107ae12d0:
  _objc_release(puVar1);
  unaff_x24 = puVar2;
LAB_107ae12d8:
  _objc_release(param_6);
  lVar3 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    pcStack_158 = FUN_107ae1334;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR_PTR_1126b1198;
    uStack_1c0 = param_1;
    uStack_1b8 = param_2;
    lStack_1b0 = unaff_x28;
    puStack_1a8 = unaff_x27;
    puStack_1a0 = unaff_x26;
    puStack_198 = unaff_x25;
    puStack_190 = unaff_x24;
    puStack_188 = puVar22;
    puStack_180 = puVar1;
    puStack_178 = param_3;
    puStack_170 = param_6;
    lStack_168 = param_5;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_opt_new();
    lVar23 = (long)_DAT_11276a12c;
    uVar18 = *(undefined8 *)(lVar3 + lVar23);
    *(undefined **)(lVar3 + lVar23) = puVar2;
    _objc_release(uVar18);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar1;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_1e8 = puVar22;
    func_0x00010bf41680(0,0x3fd3333333333333);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar18 = 0x3fd999999999999a;
    puVar19 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_1e0 = puVar22;
    func_0x00010bf41680(0,0x3fd999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar19;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_1d8 = puVar22;
    func_0x00010bf41680(0,0x3fd999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1d0 = puVar22;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar3 + lVar23);
    func_0x00010bfcd9c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60();
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar21);
    _objc_release(puVar19);
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar5 = *(undefined8 *)(lVar3 + lVar23);
    func_0x00010bfcd9c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bff00();
    _objc_release(uVar5);
    func_0x00010c219b60(*(undefined8 *)(lVar3 + lVar23));
    func_0x00010befbb60(lVar3);
    puStack_228 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)(lVar3 + lVar23);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    uStack_210 = uVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_218 = lVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar3 + lVar23);
    uStack_220 = uVar5;
    uStack_208 = uVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar3 + lVar23);
    uStack_200 = uVar8;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar3 + _DAT_11276a124);
    uVar10 = uVar9;
    func_0x00010bf49420(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar3 + lVar23);
    uStack_1f8 = uVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_1f0 = uVar12;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_228);
    _objc_release(puVar1);
    _objc_release(uVar12);
    _objc_release(lVar3);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(lVar6);
    _objc_release(uVar7);
    _objc_release(uStack_220);
    _objc_release(lStack_218);
    uVar10 = uStack_210;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
      auVar24._8_8_ = uVar18;
      auVar24._0_8_ = uVar5;
      return auVar24;
    }
    ___stack_chk_fail();
    pcStack_238 = FUN_107ae16c8;
    lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
    lStack_270 = lVar6;
    uStack_268 = uVar7;
    uStack_260 = uVar8;
    puStack_258 = puVar1;
    uStack_250 = uVar12;
    lStack_248 = lVar3;
    ppuStack_240 = &puStack_160;
    func_0x00010c279600();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_288 = uVar10;
    puStack_280 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar1;
    func_0x00010c279660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    _objc_release(uVar10);
    puVar21 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
      ___stack_chk_fail();
      uStack_2d8 = 0x3fd999999999999a;
      puStack_2b8 = puVar1;
      pcStack_298 = FUN_107ae17b4;
      puStack_2e8 = PTR_PTR_1126f9bd8;
      puStack_2f0 = puVar21;
      uStack_2e0 = param_1;
      lStack_2d0 = lVar6;
      puStack_2c8 = puVar19;
      uStack_2c0 = uVar10;
      puStack_2b0 = puVar2;
      puStack_2a8 = puVar22;
      pppuStack_2a0 = &ppuStack_240;
      _objc_msgSendSuper2(&puStack_2f0,PTR_s_intrinsicContentSize_1125f8080);
      uVar13 = *(ulong *)(puVar21 + _DAT_11276a120);
      uVar8 = uVar5;
      func_0x00010c29d560();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010c24c800();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010c071ae0();
      if ((uVar15 & 1) == 0) {
        uVar15 = uVar13;
        func_0x00010c24c800();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar15;
        func_0x00010c071ae0();
        if ((uVar16 & 1) == 0) {
          uVar16 = uVar13;
          func_0x00010c24c800();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar16;
          func_0x00010c071ae0();
          iVar20 = (int)uVar17;
          _objc_release(uVar16);
        }
        else {
          iVar20 = 1;
        }
        _objc_release(uVar15);
      }
      else {
        iVar20 = 1;
      }
      _objc_release(uVar14);
      uVar14 = uVar13;
      func_0x00010bf5d5a0();
      if ((int)uVar14 == 4 && iVar20 != 0) {
        func_0x00010c2a71e0(puVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectGetWidth();
        _objc_release(puVar21);
        uVar5 = uVar8;
      }
      _objc_release(uVar13);
      auVar25._8_8_ = uVar18;
      auVar25._0_8_ = uVar5;
      return auVar25;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  auVar26._8_8_ = uVar18;
  auVar26._0_8_ = uVar5;
  return auVar26;
}



/* Entry: 107ae1334; end: 107ae16c7; -[SCAdComposerCtaLayerView _setUpGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107ae1334(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined *puStack_1a0;
  undefined *puStack_198;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1198;
  _objc_opt_new();
  lVar23 = (long)_DAT_11276a12c;
  uVar20 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar1;
  _objc_release(uVar20);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar25 = 0x3fd999999999999a;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fd999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fd999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bfcd9c0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar20);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar20 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bfcd9c0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff00();
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar6 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + _DAT_11276a124);
  uVar11 = uVar10;
  func_0x00010bf49420(uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar13);
  _objc_release(param_1);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar20);
  _objc_release(lVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    auVar26._8_8_ = uVar25;
    auVar26._0_8_ = uVar24;
    return auVar26;
  }
  ___stack_chk_fail();
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
  func_0x00010c279600();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c279660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    auVar28._8_8_ = uVar25;
    auVar28._0_8_ = uVar24;
    return auVar28;
  }
  ___stack_chk_fail();
  puStack_198 = PTR_PTR_1126f9bd8;
  puStack_1a0 = puVar2;
  _objc_msgSendSuper2(&puStack_1a0,PTR_s_intrinsicContentSize_1125f8080);
  uVar14 = *(ulong *)(puVar2 + _DAT_11276a120);
  uVar20 = uVar24;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c24c800();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c071ae0();
  if ((uVar16 & 1) == 0) {
    uVar16 = uVar14;
    func_0x00010c24c800();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c071ae0();
    if ((uVar17 & 1) == 0) {
      uVar17 = uVar14;
      func_0x00010c24c800();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c071ae0();
      iVar22 = (int)uVar18;
      _objc_release(uVar17);
    }
    else {
      iVar22 = 1;
    }
    _objc_release(uVar16);
  }
  else {
    iVar22 = 1;
  }
  _objc_release(uVar15);
  uVar15 = uVar14;
  func_0x00010bf5d5a0();
  if ((int)uVar15 == 4 && iVar22 != 0) {
    func_0x00010c2a71e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(puVar2);
    uVar24 = uVar20;
  }
  _objc_release(uVar14);
  auVar27._8_8_ = uVar25;
  auVar27._0_8_ = uVar24;
  return auVar27;
}



/* Entry: 107ae16c8; end: 107ae17b3; -[SCAdComposerCtaLayerView _traitCollectionWithoutAccessibilityBoldLegibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_107ae16c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined *puStack_c0;
  undefined *puStack_b8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
  func_0x00010c279600(PTR__OBJC_CLASS___UITraitCollection_1126b6d80,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c279660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = param_1;
    return auVar13;
  }
  ___stack_chk_fail();
  puStack_b8 = PTR_PTR_1126f9bd8;
  puStack_c0 = puVar1;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_intrinsicContentSize_1125f8080);
  uVar4 = *(ulong *)(puVar1 + _DAT_11276a120);
  uVar11 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c24c800();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c071ae0();
  if ((uVar6 & 1) == 0) {
    uVar6 = uVar4;
    func_0x00010c24c800();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c071ae0();
    if ((uVar7 & 1) == 0) {
      uVar7 = uVar4;
      func_0x00010c24c800();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c071ae0();
      iVar10 = (int)uVar8;
      _objc_release(uVar7);
    }
    else {
      iVar10 = 1;
    }
    _objc_release(uVar6);
  }
  else {
    iVar10 = 1;
  }
  _objc_release(uVar5);
  uVar5 = uVar4;
  func_0x00010bf5d5a0();
  if ((int)uVar5 == 4 && iVar10 != 0) {
    func_0x00010c2a71e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(puVar1);
    param_1 = uVar11;
  }
  _objc_release(uVar4);
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = param_1;
  return auVar12;
}



/* Entry: 107ae17b4; end: 107ae190b; -[SCAdComposerCtaLayerView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107ae17b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f9bd8;
  lStack_60 = param_3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_intrinsicContentSize_1125f8080);
  uVar1 = *(ulong *)(param_3 + _DAT_11276a120);
  uVar7 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c24c800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c071ae0();
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar1;
    func_0x00010c24c800();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c071ae0();
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar1;
      func_0x00010c24c800();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c071ae0();
      iVar6 = (int)uVar5;
      _objc_release(uVar4);
    }
    else {
      iVar6 = 1;
    }
    _objc_release(uVar3);
  }
  else {
    iVar6 = 1;
  }
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf5d5a0();
  if ((int)uVar2 == 4 && iVar6 != 0) {
    func_0x00010c2a71e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(param_3);
    param_1 = uVar7;
  }
  _objc_release(uVar1);
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 107ae190c; end: 107ae191b; -[SCAdComposerCtaLayerView skipValdiRenderWait] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ae190c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276a128);
}



/* Entry: 107ae191c; end: 107ae192b; -[SCAdComposerCtaLayerView setSkipValdiRenderWait:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae191c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276a128) = param_3;
  return;
}



/* Entry: 107ae192c; end: 107ae196b; -[SCAdComposerCtaLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae192c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276a12c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a120,0);
  return;
}



/* Entry: 107ae196c; end: 107ae19bb; -[SCAdComposerStickersLayerView init] */

undefined1 * FUN_107ae196c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9be0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bea9440(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107ae19bc; end: 107ae1ccb; -[SCAdComposerStickersLayerView setupComposerCtaWithViewModel:componentContext:runtime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae19bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d64b0;
  lVar14 = (long)_DAT_11276a130;
  lVar13 = *(long *)(param_2 + lVar14);
  if (lVar13 == 0) {
    _objc_retain(param_4);
    _objc_alloc();
    func_0x00010c061d40();
    _objc_release(param_4);
    uVar2 = *(undefined8 *)(param_2 + lVar14);
    *(undefined **)(param_2 + lVar14) = puVar1;
    _objc_release(uVar2);
    lVar13 = param_2;
    func_0x00010bece440(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + lVar14);
    func_0x00010c295200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219560();
    _objc_release(uVar2);
    _objc_release(lVar13);
    func_0x00010c219b60(*(undefined8 *)(param_2 + lVar14));
    func_0x00010befbb60(param_2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    param_4 = *(undefined8 *)(param_2 + lVar14);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + lVar14);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + lVar14);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_2;
    func_0x00010c274200(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_2 + lVar14);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(param_2);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar13);
  }
  else {
    _objc_retain(param_4);
    func_0x00010c2226c0(lVar13);
  }
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(param_5 + _DAT_11276a134) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107ae1ccc; end: 107ae1cdb; -[SCAdComposerStickersLayerView setGradientViewHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae1ccc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276a134) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107ae1cdc; end: 107ae1ceb; -[SCAdComposerStickersLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae1cdc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be36290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hitTest_withEvent_onView__11256b240,param_3,
             *(undefined8 *)(param_1 + _DAT_11276a130));
  return;
}



/* Entry: 107ae1cec; end: 107ae1cfb; -[SCAdComposerStickersLayerView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae1cec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a130),PTR_s_setViewModel__1126663d8);
  return;
}



/* Entry: 107ae1cfc; end: 107ae1d0b; -[SCAdComposerStickersLayerView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae1cfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a130),PTR_s_viewModel_112684f80);
  return;
}



/* Entry: 107ae1d0c; end: 107ae1ef7; -[SCAdComposerStickersLayerView _hitTest:withEvent:onView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae1d0c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_6;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  lVar15 = lVar13;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  do {
    if (lVar15 == 0) {
      puVar17 = (undefined *)0x0;
LAB_107ae1ea4:
      _objc_release(lVar13);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        ___stack_chk_fail();
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar17 = PTR_PTR_1126b1198;
        _objc_opt_new();
        lVar12 = (long)_DAT_11276a138;
        uVar14 = *(undefined8 *)(param_5 + lVar12);
        *(undefined **)(param_5 + lVar12) = puVar17;
        _objc_release(uVar14);
        puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf41680(0,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf41680(0,0x3fd3333333333333);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf41680(0,0x3fd999999999999a);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf41680(0,0x3fd999999999999a);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = *(undefined8 *)(param_5 + lVar12);
        func_0x00010bfcd9c0(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c17eb60();
        _objc_release(uVar14);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar16);
        _objc_release(puVar1);
        _objc_release(puVar17);
        uVar14 = *(undefined8 *)(param_5 + lVar12);
        func_0x00010bfcd9c0(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bff00();
        _objc_release(uVar14);
        func_0x00010c219b60(*(undefined8 *)(param_5 + lVar12));
        func_0x00010befbb60(param_5);
        puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        uVar4 = *(undefined8 *)(param_5 + lVar12);
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = param_5;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar4;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_5 + lVar12);
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_5;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_5 + lVar12);
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bf49420(*(undefined8 *)(param_5 + _DAT_11276a134));
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_5 + lVar12);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar17);
        _objc_release(puVar1);
        _objc_release(uVar11);
        _objc_release(param_5);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(lVar6);
        _objc_release(uVar5);
        _objc_release(uVar14);
        _objc_release(lVar15);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
          return;
        }
        ___stack_chk_fail();
        lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar1 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
        func_0x00010c279600();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
        func_0x00010c279540();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c279660();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        _objc_release(uVar4);
        _objc_release(puVar1);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
          ___stack_chk_fail();
          _objc_storeStrong(puVar1 + _DAT_11276a138,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + _DAT_11276a130,0);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
      return;
    }
    lVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar13);
      }
      puVar16 = *(undefined **)(lVar18 * 8);
      puVar1 = param_3;
      func_0x00010be36280(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar1;
      if (puVar1 != (undefined *)0x0) {
LAB_107ae1e94:
        _objc_retain(puVar17);
        _objc_release(puVar1);
        goto LAB_107ae1ea4;
      }
      puVar17 = puVar16;
      func_0x00010bfc1c00();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar17;
      func_0x00010bf529e0();
      _objc_release(puVar17);
      if (puVar2 != (undefined *)0x0) {
        func_0x00010bf51200(param_1,param_2,puVar16);
        puVar2 = puVar16;
        func_0x00010bfe3a40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar17 = puVar16;
        if (puVar2 != (undefined *)0x0) goto LAB_107ae1e94;
      }
      lVar18 = lVar18 + 1;
    } while (lVar15 != lVar18);
    lVar15 = lVar13;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107ae1ef8; end: 107ae228b; -[SCAdComposerStickersLayerView _setUpGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae1ef8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1198;
  _objc_opt_new();
  lVar17 = (long)_DAT_11276a138;
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar15);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fd999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fd999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bfcd9c0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar15);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bfcd9c0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff00();
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar6 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49420(*(undefined8 *)(param_1 + _DAT_11276a134));
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar13);
  _objc_release(param_1);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar15);
  _objc_release(lVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
  func_0x00010c279600();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c279660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + _DAT_11276a138,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + _DAT_11276a130,0);
  return;
}



/* Entry: 107ae228c; end: 107ae2377; -[SCAdComposerStickersLayerView _traitCollectionWithoutAccessibilityBoldLegibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae228c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
  func_0x00010c279600(PTR__OBJC_CLASS___UITraitCollection_1126b6d80,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c279660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + _DAT_11276a138,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + _DAT_11276a130,0);
  return;
}



/* Entry: 107ae2378; end: 107ae23b7; -[SCAdComposerStickersLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae2378(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276a138,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a130,0);
  return;
}



/* Entry: 107ae23b8; end: 107ae2633; -[SCAdStickersViewLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:cofStore:dpaLensGrapheneLogger:eventAnnouncer:featureFlags:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107ae23b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = &uStack_90;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_88 = PTR_PTR_1126f9be8;
  uStack_90 = param_1;
  _objc_msgSendSuper2(&uStack_90,PTR_s_initWithConfiguration_layerViewC_1125de050,param_3,param_4,
                      param_5,param_8,param_9);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf99b40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca1e8;
    func_0x00010bf7e1e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2338;
    puStack_80 = puVar3;
    func_0x00010c29aaa0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2338;
    puStack_78 = puVar4;
    func_0x00010c282960();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276a13c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276a13c) = puVar3;
    _objc_release(uVar9);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276a140);
    *(undefined **)((long)puVar1 + (long)_DAT_11276a140) = puVar3;
    _objc_release(uVar9);
    puVar2 = param_5;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276a144);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11276a144) = puVar8;
    _objc_release(uVar9);
    _objc_release(puVar7);
    _objc_release(puVar2);
    lVar10 = (long)_DAT_11276a148;
    _objc_retain(param_6);
    uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_6;
    _objc_release(uVar9);
    lVar10 = (long)_DAT_11276a14c;
    _objc_retain(param_7);
    uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_7;
    _objc_release(uVar9);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126d64b8;
  _objc_alloc_init();
  lVar10 = (long)_DAT_11276a150;
  uVar9 = *(undefined8 *)(param_5 + lVar10);
  *(undefined **)(param_5 + lVar10) = puVar3;
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_5,PTR_s_setView__112666308,*(undefined8 *)(param_5 + lVar10));
  return param_5;
}



/* Entry: 107ae2634; end: 107ae267b; -[SCAdStickersViewLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae2634(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d64b8;
  _objc_alloc_init();
  lVar3 = (long)_DAT_11276a150;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107ae267c; end: 107ae2683; -[SCAdStickersViewLayerViewController isRecyclable] */

undefined8 FUN_107ae267c(void)

{
  return 0;
}



/* Entry: 107ae2684; end: 107ae26db; -[SCAdStickersViewLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae2684(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9be8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyAppear_112684c88);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11276a13c));
  return;
}



/* Entry: 107ae26dc; end: 107ae2733; -[SCAdStickersViewLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae26dc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9be8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyDisappear_112684ca8);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11276a13c));
  return;
}



/* Entry: 107ae2734; end: 107ae2833; -[SCAdStickersViewLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae2734(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf0a240(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf5d5a0();
    _objc_release(lVar2);
    if (lVar3 != 3) {
      puVar1 = PTR_PTR_1126c9410;
      func_0x00010bf0a240(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf1f3c0();
      _objc_release(lVar2);
      _objc_release(puVar1);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276a150),param_2,lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ae2834; end: 107ae2b7b; -[SCAdStickersViewLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae2834(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  lVar5 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010bf5d5a0();
  if (lVar1 == 3) {
    lVar1 = param_4;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bf5d000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    _objc_release(lVar5);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar6 == 0) goto LAB_107ae293c;
    lVar5 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010c27fd80();
    func_0x00010c0df780(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c29d560(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bf5d000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173680();
    _objc_release(lVar6);
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(lVar5);
LAB_107ae293c:
  lVar5 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010bf1f3c0();
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010bf5d5a0();
  _objc_release(lVar5);
  puVar2 = PTR_PTR_1126d64c0;
  lVar5 = param_4;
  func_0x00010bef5640(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c230000(puVar2,param_2,lVar3,lVar5,lVar1 == 2);
  _objc_release(lVar5);
  if (((int)puVar2 != 0) && (lVar5 = (long)_DAT_11276a154, *(long *)(param_1 + lVar5) == 0)) {
    puVar2 = PTR_PTR_1126d64c8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar4);
  }
  lVar5 = param_4;
  func_0x00010c29d560(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010bf5d000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5560();
  _objc_release(lVar1);
  _objc_release(lVar5);
  lVar6 = (long)_DAT_11276a150;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  lVar5 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010bf5d5a0();
  uVar7 = 0x406f400000000000;
  if (lVar1 != 2) {
    uVar7 = 0;
  }
  func_0x00010c1a41a0(uVar7,uVar4);
  _objc_release(lVar5);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  lVar5 = param_4;
  func_0x00010c29d560(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bef5640(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_4;
  func_0x00010bef4360(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdf3f00(param_1,param_2,lVar1,lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2286e0(uVar4,param_2,lVar5,lVar3,*(undefined8 *)(param_1 + _DAT_11276a144));
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107ae2b7c; end: 107ae2cb3; -[SCAdStickersViewLayerViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae2b7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ca1e8;
  func_0x00010bf7e1e0(PTR_PTR_1126ca1e8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11276a140);
    puVar1 = PTR_PTR_1126ca228;
    func_0x00010bf5efc0(PTR_PTR_1126ca228);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c0e00e0(param_5,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276a154);
    lVar2 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd10c0(uVar3,param_2,param_3,lVar2,param_5);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ae2cb4; end: 107ae2dfb; -[SCAdStickersViewLayerViewController _createStickersComponentContextWithAdSpecData:adRenderData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae2cb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d64d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  lVar2 = param_1;
  func_0x00010bdec940(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c186620(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bdf4600(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210440(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bdead40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169f40(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276a148);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17df40(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276a14c);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2080();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ae2dfc; end: 107ae2e8b; -[SCAdStickersViewLayerViewController _createArExperienceComponentContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae2dfc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d64d8;
  _objc_opt_new(PTR_PTR_1126d64d8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276a13c);
  func_0x00010c272120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8640(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010bdead60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d3960(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ae2e8c; end: 107ae2f1b; -[SCAdStickersViewLayerViewController _createSurveyComponentContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae2e8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d64e0;
  _objc_opt_new(PTR_PTR_1126d64e0);
  lVar2 = param_1;
  func_0x00010bdf4620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d1820(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276a13c);
  func_0x00010c272120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8640(puVar1,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ae2f1c; end: 107ae2fa3; -[SCAdStickersViewLayerViewController _createSurveyOnChangeBlock] */

void FUN_107ae2f1c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107ae2fa4;
  puStack_38 = &UNK_1109f9af8;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107ae2fa4; end: 107ae30df;  */

void FUN_107ae2fa4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    uVar1 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1109f9bb8);
    puVar2 = PTR_PTR_1126cf5d0;
    _objc_alloc(PTR_PTR_1126cf5d0);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3220(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126d64e8;
    func_0x00010c264000();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107ae30e0;
    puStack_68 = &UNK_110841f80;
    lStack_60 = param_2;
    puStack_58 = puVar3;
    func_0x000100162d98("APPSTORE",&puStack_80);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 107ae30e0; end: 107ae31f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae30e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126ca3c8;
  func_0x00010c254420();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca3d8;
  func_0x00010c254400();
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_58 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&puStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puVar7 = puVar4;
  func_0x00010bf04440(uVar8,param_2,puVar1,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126d64f0;
  _objc_retain(puVar7);
  _objc_retain(puVar6);
  _objc_opt_new(puVar2);
  puVar3 = puVar1;
  func_0x00010bdf0be0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d2780(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bdf0c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d3580(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bdf0b80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d1e80(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bdf0bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d2620(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bdf1d20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e0f60(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  uVar8 = *(undefined8 *)(puVar1 + _DAT_11276a13c);
  func_0x00010c272120(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8640(puVar2,param_2,uVar8);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(puVar1 + _DAT_11276a140);
  func_0x00010c272120(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e2e0(puVar2,param_2,uVar8);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(puVar1 + _DAT_11276a148);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17df40(puVar2,param_2,uVar8);
  _objc_release(uVar8);
  func_0x00010c1956c0(puVar2,param_2,puVar6);
  _objc_release(puVar6);
  func_0x00010c1956a0(puVar2,param_2,puVar7);
  _objc_release(puVar7);
  lVar9 = (long)_DAT_11276a154;
  uVar5 = *(undefined8 *)(puVar1 + lVar9);
  func_0x00010bf8b400(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21bfe0(puVar2,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(puVar1 + lVar9);
  func_0x00010c2a7260(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21c040(puVar2,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(puVar1 + lVar9);
  func_0x00010c29b5e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21c020(puVar2,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar5);
  func_0x00010bdf0c40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d42a0(puVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ae31f4; end: 107ae34b7; -[SCAdStickersViewLayerViewController _createCtaContainerComponentContextWithAdSpecData:adRenderData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae31f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d64f0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  lVar4 = param_1;
  func_0x00010bdf0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d2780(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bdf0c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d3580(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bdf0b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d1e80(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bdf0bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d2620(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bdf1d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e0f60(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276a13c);
  func_0x00010c272120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8640(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276a140);
  func_0x00010c272120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e2e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276a148);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17df40(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1956c0(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1956a0(puVar1,param_2,param_4);
  _objc_release(param_4);
  lVar4 = (long)_DAT_11276a154;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf8b400(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21bfe0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c2a7260(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21c040(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c29b5e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21c020(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  func_0x00010bdf0c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d42a0(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ae34b8; end: 107ae353f; -[SCAdStickersViewLayerViewController _createOnCtaClickedBlock] */

void FUN_107ae34b8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107ae3540;
  puStack_38 = &UNK_1109f9b28;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107ae3540; end: 107ae35d3;  */

void FUN_107ae3540(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107ae35d4;
    puStack_58 = &UNK_110875e90;
    lStack_50 = param_3;
    uStack_48 = param_1;
    uStack_40 = param_2;
    uStack_38 = param_4;
    func_0x000100162d98("APPSTORE",&puStack_70);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107ae35d4; end: 107ae3743;  */

void FUN_107ae35d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126ca1c8;
  func_0x00010bf7c8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca1a0;
  func_0x00010c269160();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  puStack_78 = puVar2;
  func_0x00010c297180(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ca240;
  puStack_68 = puVar3;
  func_0x00010c268d60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_70 = puVar4;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(uVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_d0;
  pcStack_88 = FUN_107ae3744;
  puStack_a0 = puVar2;
  puStack_98 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_a8,puVar3);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x107ae37cc;
  puStack_b8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_b0,auStack_a8);
  _objc_retainBlock(&puStack_d0);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 107ae3744; end: 107ae3843; -[SCAdStickersViewLayerViewController _createOnShareButtonClickedBlock] */

void FUN_107ae3744(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x107ae37cc;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107ae3844; end: 107ae396b;  */

void FUN_107ae3844(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010c15c9e0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b5bf0;
  func_0x00010c22ab20();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR____kCFBooleanTrue_11034ab68;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_58 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  uVar6 = uVar1;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_b0;
  pcStack_68 = FUN_107ae396c;
  uStack_80 = uVar3;
  uStack_78 = uVar1;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_88,uVar6);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x107ae39f4;
  puStack_98 = &UNK_1109f9b58;
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retainBlock(&puStack_b0);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 107ae396c; end: 107ae3a6b; -[SCAdStickersViewLayerViewController _createOnHeaderClickBlock] */

void FUN_107ae396c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x107ae39f4;
  puStack_38 = &UNK_1109f9b58;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107ae3a6c; end: 107ae3b7f;  */

void FUN_107ae3a6c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b6160;
  func_0x00010c277180(PTR_PTR_1126b6160);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(uVar5);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c288220();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6008;
  func_0x00010c0ea660();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb680;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_48 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_a0;
  pcStack_58 = FUN_107ae3b80;
  puStack_70 = puVar1;
  uStack_68 = uVar5;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_78,puVar2);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107ae3c08;
  puStack_88 = &UNK_1109f9b88;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retainBlock(&puStack_a0);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 107ae3b80; end: 107ae3c07; -[SCAdStickersViewLayerViewController _createOnItemClickBlock] */

void FUN_107ae3b80(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107ae3c08;
  puStack_38 = &UNK_1109f9b88;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107ae3c08; end: 107ae3ca3;  */

void FUN_107ae3c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  param_4 = param_4 + 0x20;
  _objc_loadWeakRetained();
  if (param_4 != 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107ae3ca4;
    puStack_68 = &UNK_11084e430;
    lStack_60 = param_4;
    uStack_58 = param_2;
    uStack_50 = param_3;
    uStack_48 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_80);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107ae3ca4; end: 107ae3e03;  */

void FUN_107ae3ca4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126ca1c8;
  func_0x00010bf7c820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca1a0;
  func_0x00010c269160();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  puStack_78 = puVar2;
  func_0x00010c297180(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ca1a0;
  puStack_68 = puVar3;
  func_0x00010c084640();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_70 = puVar4;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(uVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_d0;
  pcStack_88 = FUN_107ae3e04;
  puStack_a0 = puVar2;
  puStack_98 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_a8,puVar3);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_107ae3e8c;
  puStack_b8 = &UNK_1109f9b28;
  _objc_copyWeak(auStack_b0,auStack_a8);
  _objc_retainBlock(&puStack_d0);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 107ae3e04; end: 107ae3e8b; -[SCAdStickersViewLayerViewController _createArExperienceOnTapBlock] */

void FUN_107ae3e04(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107ae3e8c;
  puStack_38 = &UNK_1109f9b28;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107ae3e8c; end: 107ae3f17;  */

void FUN_107ae3e8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107ae3f18;
    puStack_50 = &UNK_110858dc0;
    lStack_48 = param_3;
    uStack_40 = param_1;
    uStack_38 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_68);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107ae3f18; end: 107ae4053;  */

void FUN_107ae3f18(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b5b08;
  func_0x00010bf4f2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca1a0;
  func_0x00010c269160();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  puStack_68 = puVar2;
  func_0x00010c297180(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ca240;
  puStack_58 = puVar3;
  func_0x00010c268d60();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb698;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_c0;
  pcStack_78 = FUN_107ae4054;
  puStack_90 = puVar3;
  puStack_88 = puVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_98,puVar2);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x107ae40dc;
  puStack_a8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_a0,auStack_98);
  _objc_retainBlock(&puStack_c0);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 107ae4054; end: 107ae4197; -[SCAdStickersViewLayerViewController _createPresentActionMenuBlock] */

void FUN_107ae4054(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x107ae40dc;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107ae4198; end: 107ae42e3; -[SCAdStickersViewLayerViewController _createOnUnskippableTimerBadgeClickedBlock] */

void FUN_107ae4198(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x107ae4220;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107ae42e4; end: 107ae4373; -[SCAdStickersViewLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae42e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276a154,0);
  _objc_storeStrong(param_1 + _DAT_11276a14c,0);
  _objc_storeStrong(param_1 + _DAT_11276a148,0);
  _objc_storeStrong(param_1 + _DAT_11276a144,0);
  _objc_storeStrong(param_1 + _DAT_11276a140,0);
  _objc_storeStrong(param_1 + _DAT_11276a13c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a150,0);
  return;
}



/* Entry: 107ae4374; end: 107ae447b;  */

void FUN_107ae4374(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126cf5c8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf39000(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c15a240(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c11dca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c11dda0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c0e9160(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c043ba0(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ae447c; end: 107ae4483; -[SCOperaExpandButtonLayerView initWithFrame:] */

void FUN_107ae447c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0150d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFrame_useSwiftExpandButt_1125e2e10,0)
  ;
  return;
}



/* Entry: 107ae4484; end: 107ae4653; -[SCOperaExpandButtonLayerView initWithFrame:useSwiftExpandButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107ae4484(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f9bf0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(char *)((long)puVar1 + (long)_DAT_11276a15c) = (char)param_3;
    if (param_3 == 0) {
      puVar2 = PTR_PTR_1126d6500;
      _objc_opt_new();
    }
    else {
      puVar2 = PTR_PTR_1126d64f8;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    }
    lVar7 = (long)_DAT_11276a160;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar5);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar7));
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11276a164;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = uVar5;
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(uVar3);
    func_0x00010c162480(*(undefined8 *)((long)puVar1 + lVar8));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c1408a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c1408a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107ae4654; end: 107ae46ab; -[SCOperaExpandButtonLayerView updateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae4654(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9bf0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_updateConstraints_11267ec30);
  func_0x00010becd620(param_1);
  func_0x00010c181140(*(undefined8 *)(param_1 + _DAT_11276a164));
  return;
}



/* Entry: 107ae46ac; end: 107ae472f; -[SCOperaExpandButtonLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae46ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_11276a160);
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



/* Entry: 107ae4730; end: 107ae4777; -[SCOperaExpandButtonLayerView updateExpandButtonWithViewModel:actionMenuEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae4730(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  func_0x00010bf47d60(*(undefined8 *)(param_1 + _DAT_11276a160));
  *(undefined1 *)(param_1 + _DAT_11276a168) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsUpdateConstraints_1126509f8);
  return;
}



/* Entry: 107ae4778; end: 107ae47af; -[SCOperaExpandButtonLayerView _didTapExpandButton] */

void FUN_107ae4778(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7cac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ae47b0; end: 107ae483f; -[SCOperaExpandButtonLayerView _topOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107ae47b0(double param_1,ulong param_2)

{
  ulong uVar1;
  double dVar2;
  
  if (*(char *)(param_2 + (long)_DAT_11276a16c) == '\x01') {
    uVar1 = param_2;
    func_0x000100478f84();
    if (((uVar1 & 1) == 0) && ((*(byte *)(param_2 + (long)_DAT_11276a170) & 1) != 0)) {
      dVar2 = 70.0;
    }
    else {
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      dVar2 = param_1 * 0.5 + 16.0;
    }
  }
  else {
    func_0x00010bdc4460();
    dVar2 = 64.0;
    if ((int)param_2 == 0) {
      dVar2 = 12.0;
    }
  }
  return dVar2;
}



/* Entry: 107ae4840; end: 107ae4893; -[SCOperaExpandButtonLayerView _actionMenuButtonIsWithinOperaPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ae4840(double param_1,long param_2)

{
  if (*(char *)(param_2 + _DAT_11276a168) == '\x01') {
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x00010c14d760(param_2);
    return 0.0 <= param_1;
  }
  return false;
}



/* Entry: 107ae4894; end: 107ae48b3; -[SCOperaExpandButtonLayerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae4894(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276a174);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ae48b4; end: 107ae48c7; -[SCOperaExpandButtonLayerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae48b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276a174,param_3);
  return;
}



/* Entry: 107ae48c8; end: 107ae48df; -[SCOperaExpandButtonLayerView operaSafeAreaInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ae48c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276a158);
}



/* Entry: 107ae48e0; end: 107ae48f7; -[SCOperaExpandButtonLayerView setOperaSafeAreaInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae48e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11276a158);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 107ae48f8; end: 107ae4907; -[SCOperaExpandButtonLayerView isSpotlight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ae48f8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276a16c);
}



/* Entry: 107ae4908; end: 107ae4917; -[SCOperaExpandButtonLayerView setIsSpotlight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae4908(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276a16c) = param_3;
  return;
}



/* Entry: 107ae4918; end: 107ae4927; -[SCOperaExpandButtonLayerView useSmallDeviceSpacing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ae4918(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276a170);
}



/* Entry: 107ae4928; end: 107ae4937; -[SCOperaExpandButtonLayerView setUseSmallDeviceSpacing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae4928(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276a170) = param_3;
  return;
}



/* Entry: 107ae4938; end: 107ae4947; -[SCOperaExpandButtonLayerView useSwiftExpandButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ae4938(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276a15c);
}



/* Entry: 107ae4948; end: 107ae4993; -[SCOperaExpandButtonLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae4948(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276a174);
  _objc_storeStrong(param_1 + _DAT_11276a164,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a160,0);
  return;
}



/* Entry: 107ae4994; end: 107ae4a37; -[SCOperaExpandButtonLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae4994(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d6508;
  _objc_alloc();
  func_0x00010c0150c0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_11276a17c;
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



/* Entry: 107ae4a38; end: 107ae4a87; -[SCOperaExpandButtonLayerViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae4a38(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9bf8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLayoutSubviews_112684cc8);
  func_0x00010c284820(*(undefined8 *)(param_1 + _DAT_11276a17c));
  return;
}



/* Entry: 107ae4a88; end: 107ae4baf; -[SCOperaExpandButtonLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae4a88(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126d6510;
  if (*(char *)(param_1 + _DAT_11276a178) == '\x01') {
    _objc_retain(param_4);
    func_0x00010c29d8c0(puVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    puVar1 = param_4;
    func_0x000107ae8d98(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = param_4;
  func_0x00010c07f340(param_4);
  lVar7 = (long)_DAT_11276a17c;
  func_0x00010c1b4960(*(undefined8 *)(param_1 + lVar7),param_2,puVar2);
  lVar3 = param_1;
  func_0x00010bfa23e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0ec0a0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c21dae0(*(undefined8 *)(param_1 + lVar7),param_2,lVar5);
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  puVar2 = param_4;
  func_0x00010beeeb00(param_4);
  _objc_release(param_4);
  func_0x00010c285ac0(uVar6,param_2,puVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ae4bb0; end: 107ae4c83; -[SCOperaExpandButtonLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae4bb0(undefined8 param_1,long param_2)

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
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_2 + _DAT_11276a17c));
  return;
}



/* Entry: 107ae4c84; end: 107ae4d97; -[SCOperaExpandButtonLayerViewController didTapExpandButtonLayerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107ae4c84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c288220(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6008;
  func_0x00010c0ea660();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb6b0;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_48 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&puStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ca428;
  func_0x00010bf9bc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,PTR____NSDictionary0__struct_11034ab58);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)(ulong)(byte)puVar1[_DAT_11276a178];
}



/* Entry: 107ae4d98; end: 107ae4da7; -[SCOperaExpandButtonLayerViewController useSwiftExpandButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ae4d98(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276a178);
}



/* Entry: 107ae4da8; end: 107ae4db7; -[SCOperaExpandButtonLayerViewController setUseSwiftExpandButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae4da8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276a178) = param_3;
  return;
}



/* Entry: 107ae4db8; end: 107ae4dcb; -[SCOperaExpandButtonLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae4db8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a17c,0);
  return;
}


