/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061cbd28; end: 1061cbd33; -[SCFeatureLensExplorerButtonLayoutStrategy configureWithView:] */

void FUN_1061cbd28(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1061cbd34; end: 1061cbddb; -[SCFeatureLensExplorerButtonLayoutStrategy layoutFeatureContainer:] */

void FUN_1061cbd34(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_2 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_2 = param_2 + 8;
    _objc_loadWeakRetained(param_2);
    lVar1 = param_2;
    func_0x00010bfe1200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c092b40(PTR_PTR_1126c89d8);
    func_0x00010c092b40(PTR_PTR_1126c89d8);
    func_0x00010bf07160(param_1,lVar1,param_3,param_4,2);
    _objc_release(lVar1);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061cbddc; end: 1061cbde3; -[SCFeatureLensExplorerButtonLayoutStrategy .cxx_destruct] */

void FUN_1061cbddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1061cbde4; end: 1061cbe57; -[SCFeatureLensExplorerButtonTabBarLayoutStrategy initWithLensCollectionsBarFeature:] */

undefined1 * FUN_1061cbde4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0338;
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



/* Entry: 1061cbe58; end: 1061cbe5f; -[SCFeatureLensExplorerButtonTabBarLayoutStrategy lensCollectionsTabBar] */

void FUN_1061cbe58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa1830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_feature_1125c5fb0);
  return;
}



/* Entry: 1061cbe60; end: 1061cbe63; -[SCFeatureLensExplorerButtonTabBarLayoutStrategy configureWithView:] */

void FUN_1061cbe60(void)

{
  return;
}



/* Entry: 1061cbe64; end: 1061cc103; -[SCFeatureLensExplorerButtonTabBarLayoutStrategy layoutFeatureContainer:] */

void FUN_1061cbe64(double param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

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
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0926c0(PTR_PTR_1126c89d8);
    lVar5 = lVar2;
    func_0x00010bf493c0(-param_1);
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
    func_0x00010c092b40(PTR_PTR_1126c89d8);
    lVar10 = lVar9;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c092b40(PTR_PTR_1126c89d8);
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



/* Entry: 1061cc104; end: 1061cc10f; -[SCFeatureLensExplorerButtonTabBarLayoutStrategy .cxx_destruct] */

void FUN_1061cc104(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061cc110; end: 1061cc157; -[SCFeatureLensFavoritesLayoutStrategy initWithPosition:] */

void FUN_1061cc110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0340;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
  }
  return;
}



/* Entry: 1061cc158; end: 1061cc163; -[SCFeatureLensFavoritesLayoutStrategy configureWithView:] */

void FUN_1061cc158(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1061cc164; end: 1061cc1fb; -[SCFeatureLensFavoritesLayoutStrategy layoutFeatureContainer:] */

void FUN_1061cc164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_7);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_5 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfe1200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_5 + 0x10);
    func_0x00010bf20c00(param_7);
    func_0x00010bf07160(param_3,param_4,lVar2,param_6,param_7,uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1061cc1fc; end: 1061cc203; -[SCFeatureLensFavoritesLayoutStrategy .cxx_destruct] */

void FUN_1061cc1fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1061cc204; end: 1061cc287; -[SCFeatureLensFavoritesTabBarLayoutStrategy initWithLensCollectionsBarFeature:isCollectionsSendToButtonEnabled:] */

undefined1 *
FUN_1061cc204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f0348;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061cc288; end: 1061cc28f; -[SCFeatureLensFavoritesTabBarLayoutStrategy lensCollectionsTabBar] */

void FUN_1061cc288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa1830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_feature_1125c5fb0);
  return;
}



/* Entry: 1061cc290; end: 1061cc293; -[SCFeatureLensFavoritesTabBarLayoutStrategy configureWithView:] */

void FUN_1061cc290(void)

{
  return;
}



/* Entry: 1061cc294; end: 1061cc57b; -[SCFeatureLensFavoritesTabBarLayoutStrategy layoutFeatureContainer:] */

void FUN_1061cc294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

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
  undefined *puVar11;
  long lVar12;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  lVar2 = param_5;
  func_0x00010c091820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2674e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x00010c219b60(param_7);
    lVar2 = param_5;
    func_0x00010c091820(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c2674e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar4);
    _objc_release(lVar2);
    lVar2 = param_7;
    lVar4 = lVar3;
    if (*(char *)(param_5 + 0x10) == '\x01') {
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf34860(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0978a0(PTR_PTR_1126c89d8);
      lVar5 = lVar2;
      func_0x00010bf493c0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf34860(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar4);
    _objc_release(lVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar2 = param_7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf348e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(param_7);
    lVar8 = lVar7;
    func_0x00010bf49420(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_7;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(param_7);
    lVar10 = lVar9;
    func_0x00010bf49420(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar5);
  }
  _objc_release(lVar3);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_7 + 8,0);
  return;
}



/* Entry: 1061cc57c; end: 1061cc587; -[SCFeatureLensFavoritesTabBarLayoutStrategy .cxx_destruct] */

void FUN_1061cc57c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061cc588; end: 1061cc5fb; -[SCFeatureLensSendToTabBarButtonLayoutStrategy initWithLensCollectionsBarFeature:] */

undefined1 * FUN_1061cc588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0350;
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



/* Entry: 1061cc5fc; end: 1061cc603; -[SCFeatureLensSendToTabBarButtonLayoutStrategy lensCollectionsTabBar] */

void FUN_1061cc5fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa1830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_feature_1125c5fb0);
  return;
}



/* Entry: 1061cc604; end: 1061cc607; -[SCFeatureLensSendToTabBarButtonLayoutStrategy configureWithView:] */

void FUN_1061cc604(void)

{
  return;
}



/* Entry: 1061cc608; end: 1061cc8ab; -[SCFeatureLensSendToTabBarButtonLayoutStrategy layoutFeatureContainer:] */

void FUN_1061cc608(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5,undefined8 param_6,long param_7)

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
  _objc_retain(param_7);
  lVar2 = param_5;
  func_0x00010c091820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2674e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x00010c219b60(param_7);
    func_0x00010c091820(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_5;
    func_0x00010c2674e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    _objc_release(param_5);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar2 = param_7;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(param_7);
    lVar4 = lVar2;
    func_0x00010bf49420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(param_7);
    lVar6 = lVar5;
    func_0x00010bf49420(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    func_0x00010bf34860(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0978a0(PTR_PTR_1126c89d8);
    lVar9 = lVar7;
    func_0x00010bf493c0(-param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar3;
    func_0x00010bf348e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010bf493a0();
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
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_7 + 8,0);
  return;
}



/* Entry: 1061cc8ac; end: 1061cc8b7; -[SCFeatureLensSendToTabBarButtonLayoutStrategy .cxx_destruct] */

void FUN_1061cc8ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061cc8b8; end: 1061cc8c3; -[SCLensExplorerFromCarouselOverlayBackLayoutStrategy configureWithView:] */

void FUN_1061cc8b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1061cc8c4; end: 1061ccb43; -[SCLensExplorerFromCarouselOverlayBackLayoutStrategy layoutFeatureContainer:] */

void FUN_1061cc8c4(long param_1,undefined8 param_2,long param_3)

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
  long lVar13;
  undefined *puVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained();
    func_0x00010c219b60(param_3,param_2,0);
    func_0x00010c066fc0(param_1,param_2,param_3,0);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar2 = param_3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf493a0(lVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    lStack_88 = lVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf493a0(lVar5,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    lStack_80 = lVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c2793a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x00010bf493a0(lVar8,param_2,lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_3;
    lStack_78 = lVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar11;
    func_0x00010bf493a0(lVar11,param_2,lVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = lVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar14);
    _objc_release(puVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
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
    _objc_release(param_1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_3 + 8);
  return;
}



/* Entry: 1061ccb44; end: 1061ccb4b; -[SCLensExplorerFromCarouselOverlayBackLayoutStrategy .cxx_destruct] */

void FUN_1061ccb44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1061ccb4c; end: 1061ccb57; -[SCLensExplorerFromCarouselOverlayCtaLayoutStrategy configureWithView:] */

void FUN_1061ccb4c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1061ccb58; end: 1061ccc07; -[SCLensExplorerFromCarouselOverlayCtaLayoutStrategy layoutFeatureContainer:] */

void FUN_1061ccb58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfe1220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bf07120(lVar2,param_2,param_3);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1cbe20();
    _objc_release(lVar1);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c08cdc0();
    _objc_release(param_1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061ccc08; end: 1061ccc0f; -[SCLensExplorerFromCarouselOverlayCtaLayoutStrategy .cxx_destruct] */

void FUN_1061ccc08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1061ccc10; end: 1061ccc93; -[SCLensLeftFromFavoritesButtonLayoutStrategy initWithLensFavoritesButtonFeature:isForCollectionsBackButton:] */

undefined1 *
FUN_1061ccc10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f0358;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061ccc94; end: 1061ccc9b; -[SCLensLeftFromFavoritesButtonLayoutStrategy lensFavoritesButton] */

void FUN_1061ccc94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa1830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_feature_1125c5fb0);
  return;
}



/* Entry: 1061ccc9c; end: 1061ccca7; -[SCLensLeftFromFavoritesButtonLayoutStrategy configureWithView:] */

void FUN_1061ccc9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1061ccca8; end: 1061ccd6b; -[SCLensLeftFromFavoritesButtonLayoutStrategy layoutFeatureContainer:] */

void FUN_1061ccca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  _objc_retain(param_7);
  lVar1 = param_5 + 0x18;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    if (*(char *)(param_5 + 0x10) == '\x01') {
      func_0x00010c091740(PTR_PTR_1126c89d8);
      param_3 = param_1;
      param_4 = param_2;
    }
    else {
      func_0x00010bf20c00(param_7);
    }
    param_5 = param_5 + 0x18;
    _objc_loadWeakRetained(param_5);
    lVar1 = param_5;
    func_0x00010bfe1200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10a6e0(param_3,param_4);
    _objc_release(lVar1);
    _objc_release(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1061ccd6c; end: 1061ccd97; -[SCLensLeftFromFavoritesButtonLayoutStrategy .cxx_destruct] */

void FUN_1061ccd6c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061ccd98; end: 1061ccdf7; -[SCLensCollectionsTabBar initWithBarHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ccd98(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0360;
  uStack_30 = param_2;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_30,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127424fc) = param_1;
  }
  return;
}



/* Entry: 1061ccdf8; end: 1061ccdfb; -[SCLensCollectionsTabBar setBackgroundAlpha:] */

void FUN_1061ccdf8(void)

{
  return;
}



/* Entry: 1061ccdfc; end: 1061cd093; -[SCLensCollectionsTabBar containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1061ccdfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_112742500;
  puVar10 = *(undefined **)(param_4 + lVar11);
  if (puVar10 == (undefined *)0x0) {
    uVar14 = *(undefined8 *)PTR__CGPointZero_110347540;
    uVar13 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    func_0x00010c0699c0();
    puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar14,uVar13,param_1,param_2);
    func_0x00010c219b60();
    func_0x00010befbb60(param_4,param_5,puVar10);
    puVar9 = puVar10;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c274200(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010bf493a0(puVar9,param_5,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_112742504;
    uVar14 = *(undefined8 *)(param_4 + lVar12);
    *(undefined **)(param_4 + lVar12) = puVar2;
    _objc_release(uVar14);
    _objc_release(lVar1);
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = puVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c08de00(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf493a0(puVar2,param_5,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = *(undefined8 *)(param_4 + lVar12);
    puVar4 = puVar10;
    puStack_a8 = puVar3;
    func_0x00010bfe0660();
    param_3 = param_1;
    _objc_retainAutoreleasedReturnValue();
    param_1 = uVar13;
    func_0x00010c0699c0(param_4);
    puVar5 = puVar4;
    param_2 = param_1;
    func_0x00010bf49420(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar10;
    puStack_98 = puVar5;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0(param_4);
    puVar7 = puVar6;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&puStack_a8,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar9,param_5,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(puVar2);
    _objc_retain(puVar10);
    puVar9 = *(undefined **)(param_4 + lVar11);
    *(undefined **)(param_4 + lVar11) = puVar10;
    _objc_release();
  }
  else {
    puVar9 = puVar10;
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = param_1;
    return auVar16;
  }
  ___stack_chk_fail();
  puVar10 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar14 = *(undefined8 *)(puVar9 + _DAT_1127424fc);
  _objc_release(puVar10);
  auVar15._8_8_ = uVar14;
  auVar15._0_8_ = param_3;
  return auVar15;
}



/* Entry: 1061cd094; end: 1061cd0f3; -[SCLensCollectionsTabBar intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1061cd094(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = *(undefined8 *)(param_4 + _DAT_1127424fc);
  _objc_release(puVar1);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_3;
  return auVar3;
}



/* Entry: 1061cd0f4; end: 1061cd41f; -[SCLensCollectionsTabBar beginTransition:transitionIn:context:] */

/* WARNING: Possible PIC construction at 0x0001061cd3d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001061cd3d4) */
/* WARNING: Removing unreachable block (ram,0x0001061cd41c) */
/* WARNING: Removing unreachable block (ram,0x0001061cd480) */
/* WARNING: Removing unreachable block (ram,0x00010c12c960) */
/* WARNING: Removing unreachable block (ram,0x0001061cd434) */
/* WARNING: Removing unreachable block (ram,0x0001061cd440) */
/* WARNING: Removing unreachable block (ram,0x0001061cd444) */
/* WARNING: Removing unreachable block (ram,0x0001061cd448) */
/* WARNING: Removing unreachable block (ram,0x0001061cd454) */
/* WARNING: Removing unreachable block (ram,0x0001061cd464) */
/* WARNING: Removing unreachable block (ram,0x0001061cd468) */
/* WARNING: Removing unreachable block (ram,0x0001061cd490) */
/* WARNING: Removing unreachable block (ram,0x0001061cd46c) */
/* WARNING: Removing unreachable block (ram,0x0001061cd3fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cd0f4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double in_d3;
  
  if (param_4 == 0) {
    uVar12 = *(undefined8 *)(param_1 + _DAT_112742504);
    _objc_retain(param_3);
    uVar13 = 0;
  }
  else {
    _objc_retain(param_3);
    func_0x00010c1677c0(0,param_1);
    func_0x00010c1a7f60(param_1);
    func_0x00010c219b60(param_1);
    func_0x00010befbb60(param_3);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar2 = param_1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_3;
    func_0x00010c2793a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf49420(*(undefined8 *)(param_1 + _DAT_1127424fc));
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x00010c274200(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar11);
    _objc_release(lVar10);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar13);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar12);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_3;
    func_0x00010c149040(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf493a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(lVar3);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(lVar2);
    func_0x00010bf20c00(param_3);
    *(long *)(param_1 + _DAT_112742508) = (long)in_d3;
    uVar13 = NEON_ucvtf((long)in_d3);
    uVar12 = *(undefined8 *)(param_1 + _DAT_112742504);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar13,uVar12,PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 1061cd420; end: 1061cd49b; -[SCLensCollectionsTabBar endTransition:transitionIn:complete:context:enableDarkModeAlways:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cd420(double param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  
  if (param_5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_removeFromSuperview_112628c78);
    return;
  }
  func_0x00010bf01b40(param_2);
  if (param_1 < 1.0) {
    param_1 = 1.0;
    func_0x00010c1677c0(param_2);
  }
  lVar1 = (long)_DAT_112742504;
  func_0x00010bf49220(*(undefined8 *)(param_2 + lVar1));
  if (0.0 < param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,*(undefined8 *)(param_2 + lVar1),PTR_s_setConstant__11263de70);
    return;
  }
  return;
}



/* Entry: 1061cd49c; end: 1061cd503; -[SCLensCollectionsTabBar performAnimations:context:enableDarkModeAlways:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cd49c(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_3 & 1) == 0) {
    uVar1 = NEON_ucvtf(*(undefined8 *)(param_1 + _DAT_112742508));
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    uVar2 = 0x3ff0000000000000;
  }
  func_0x00010c181140(uVar1,*(undefined8 *)(param_1 + _DAT_112742504));
  func_0x00010c1677c0(uVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 1061cd504; end: 1061cd513; -[SCLensCollectionsTabBar overrideTintColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061cd504(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274250c);
}



/* Entry: 1061cd514; end: 1061cd51f; -[SCLensCollectionsTabBar setOverrideTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cd514(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1061cd520; end: 1061cd52f; -[SCLensCollectionsTabBar dimUnselectedIcons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061cd520(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127424f8);
}



/* Entry: 1061cd530; end: 1061cd53f; -[SCLensCollectionsTabBar setDimUnselectedIcons:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cd530(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127424f8) = param_3;
  return;
}



/* Entry: 1061cd540; end: 1061cd58f; -[SCLensCollectionsTabBar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cd540(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274250c,0);
  _objc_storeStrong(param_1 + _DAT_112742504,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742500,0);
  return;
}



/* Entry: 1061cd590; end: 1061cd593; -[SCFeatureLensCollectionFooterCondender setCameraUIVisible:animated:isFromRootArbitrator:arBarBottomUIArbitrator:] */

void FUN_1061cd590(void)

{
  return;
}



/* Entry: 1061cd594; end: 1061cd637; -[SCFeatureLensCollectionFooterCondender setCameraUIVisible:animated:arbitrator:] */

void FUN_1061cd594(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_5);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_5;
  func_0x00010c071ae0(param_5,param_2,lVar1);
  _objc_release(param_5);
  _objc_release(lVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c136e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061cd638; end: 1061cd64f; -[SCFeatureLensCollectionFooterCondender arBarBottomUIArbitrator] */

void FUN_1061cd638(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061cd650; end: 1061cd65b; -[SCFeatureLensCollectionFooterCondender setArBarBottomUIArbitrator:] */

void FUN_1061cd650(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1061cd65c; end: 1061cd663; -[SCFeatureLensCollectionFooterCondender .cxx_destruct] */

void FUN_1061cd65c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1061cd664; end: 1061cd7ab; -[SCFeatureLensCollectionsBackButtonImpl initWithLensCollectionsCarousel:lensPerformerProvider:layoutStrategy:controlStyle:ringFlashInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1061cd664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f0368;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112742514;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742518;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274251c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112742520) = param_6;
    lVar4 = (long)_DAT_112742524;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742528);
    *(undefined **)((long)puVar1 + (long)_DAT_112742528) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061cd7ac; end: 1061cd7f3; -[SCFeatureLensCollectionsBackButtonImpl activate] */

void FUN_1061cd7ac(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0368;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_activate_112599760);
  func_0x00010bec0c60(param_1);
  return;
}



/* Entry: 1061cd7f4; end: 1061cd803; -[SCFeatureLensCollectionsBackButtonImpl lensCollectionsCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cd7f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa1830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742514),PTR_s_feature_1125c5fb0);
  return;
}



/* Entry: 1061cd804; end: 1061cd813; -[SCFeatureLensCollectionsBackButtonImpl lensPerformerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cd804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742518),PTR_s_target_112678178);
  return;
}



/* Entry: 1061cd814; end: 1061cd823; -[SCFeatureLensCollectionsBackButtonImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cd814(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf47d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274251c),PTR_s_configureWithView__1125af8f0);
  return;
}



/* Entry: 1061cd824; end: 1061cd85b; -[SCFeatureLensCollectionsBackButtonImpl pointInsideLensCollectionsBackButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cd824(long param_1)

{
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_11274252c));
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 1061cd85c; end: 1061cd86b; -[SCFeatureLensCollectionsBackButtonImpl setCameraUIVisible:animated:arbitrator:] */

void FUN_1061cd85c(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7c290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__presentLensCollectionBackButton_11257ca40,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8c650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeLensCollectionBackButtonW_112580b30);
  return;
}



/* Entry: 1061cd86c; end: 1061cd987; -[SCFeatureLensCollectionsBackButtonImpl _startObservingRingFlashSelectionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cd86c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = (long)_DAT_112742524;
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



/* Entry: 1061cd988; end: 1061cd9e7;  */

void FUN_1061cd988(long param_1,undefined8 param_2)

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



/* Entry: 1061cd9e8; end: 1061cda07; -[SCFeatureLensCollectionsBackButtonImpl _didChangeRingFlashActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cd9e8(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_112742530) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_112742530) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed4610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateButtonUI_112592b28);
  return;
}



/* Entry: 1061cda08; end: 1061cdaef; -[SCFeatureLensCollectionsBackButtonImpl _presentLensCollectionBackButtonWithAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cda08(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (*(long *)(param_1 + _DAT_11274252c) != 0) {
    return;
  }
  lVar2 = param_1;
  func_0x00010bdef3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  func_0x00010c08ccc0(*(undefined8 *)(param_1 + _DAT_11274251c),param_2,lVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (param_3 == 0) {
    func_0x00010c1677c0(0x3ff0000000000000,lVar2);
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1061cdaf0;
    puStack_40 = &UNK_110842e18;
    _objc_retain(lVar2);
    lStack_38 = lVar2;
    func_0x00010bf03400(0x3fc3333333333333,puVar1,param_2,&puStack_58);
    _objc_release(lStack_38);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 1061cdaf0; end: 1061cdafb;  */

void FUN_1061cdaf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1061cdafc; end: 1061cdbcb; -[SCFeatureLensCollectionsBackButtonImpl _removeLensCollectionBackButtonWithAnimation:] */

void FUN_1061cdafc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1061cdbcc;
  puStack_50 = &UNK_110841f20;
  ppuVar1 = &puStack_68;
  uStack_48 = param_1;
  _objc_retainBlock();
  if (param_3 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1,1);
  }
  else {
    func_0x00010bf03420(0x3fc3333333333333,PTR__OBJC_CLASS___UIView_1126aec20);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 1061cdbcc; end: 1061cdc07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cdbcc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274252c;
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061cdc08; end: 1061cdc1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cdc08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274252c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1061cdc20; end: 1061cdd8f; -[SCFeatureLensCollectionsBackButtonImpl _createLensCollectionsBackButtonIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cdc20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
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
  undefined8 uStack_48;
  
  lVar4 = (long)_DAT_11274252c;
  puVar3 = *(undefined **)(param_1 + lVar4);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b6138;
    _objc_alloc();
    dVar5 = *(double *)(PTR__CGRectZero_110347608 + 8);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,dVar5,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    _objc_retain();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar3;
    _objc_release(uVar1);
    func_0x00010c21d680(puVar3,param_2,1);
    func_0x00010c1aac60(puVar3,param_2,4);
    puVar2 = PTR_PTR_1126c89d8;
    func_0x00010c091ea0(PTR_PTR_1126c89d8,param_2,*(undefined8 *)(param_1 + _DAT_112742520));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c17d4c0(puVar3,param_2,1);
    func_0x00010c091740(PTR_PTR_1126c89d8);
    puVar2 = puVar3;
    func_0x00010c08c0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar5 * 0.5);
    _objc_release(puVar2);
    func_0x00010bead060(param_1,param_2,puVar3);
    _CGAffineTransformMakeScale(&uStack_70,0xbff0000000000000,0x3ff0000000000000);
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    func_0x00010c219960(puVar3,param_2,&uStack_a0);
    func_0x00010c219b60(puVar3,param_2,0);
    func_0x00010befbd40(puVar3,param_2,param_1,PTR_s__didTapBackButton__11252d1c0);
  }
  else {
    _objc_retain(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061cdd90; end: 1061cdee7; -[SCFeatureLensCollectionsBackButtonImpl _setupIconForButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cdd90(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  if (*(long *)(param_2 + _DAT_112742534) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar1);
    _objc_initWeak(auStack_58,param_2);
    func_0x00010c095b60(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c0680e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = param_1;
    func_0x00010c0f7fc0(lVar2);
    _objc_release(lVar2);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  else {
    func_0x00010bed4600(param_2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1061cdee8; end: 1061ce073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cdee8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (lVar1 != 0) {
    _objc_opt_class(lVar1);
    func_0x00010bf249e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe8240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010c14e6c0(0x4033000000000000,0x4038000000000000,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    lVar6 = (long)_DAT_112742534;
    _objc_retain(puVar2);
    uVar4 = *(undefined8 *)(lVar1 + lVar6);
    *(undefined **)(lVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c095b60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c0b6bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x28);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1061ce074; end: 1061ce09f;  */

void FUN_1061ce074(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed4600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061ce0a0; end: 1061ce1df; -[SCFeatureLensCollectionsBackButtonImpl _updateButtonUI] */

/* WARNING: Possible PIC construction at 0x0001061ce160: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001061ce164) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ce0a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_112742534;
  if (*(long *)(param_1 + lVar4) == 0) {
    return;
  }
  if (*(long *)(param_1 + _DAT_112742530) == 2) {
    lVar1 = *(long *)(param_1 + _DAT_112742524);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c141080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar5 != 0) {
      lVar5 = (long)_DAT_11274252c;
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bfe90c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010bfe9720(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      goto code_r0x00010c1a9f00;
    }
  }
  lVar5 = (long)_DAT_11274252c;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe90c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
code_r0x00010c1a9f00:
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setImage__1126481e8,uVar2);
  return;
}



/* Entry: 1061ce1e0; end: 1061ce20f; -[SCFeatureLensCollectionsBackButtonImpl _didTapBackButton:] */

void FUN_1061ce1e0(undefined8 param_1)

{
  func_0x00010c091780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061ce210; end: 1061ce2af; -[SCFeatureLensCollectionsBackButtonImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ce210(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742538,0);
  _objc_storeStrong(param_1 + _DAT_112742534,0);
  _objc_storeStrong(param_1 + _DAT_11274252c,0);
  _objc_storeStrong(param_1 + _DAT_112742528,0);
  _objc_storeStrong(param_1 + _DAT_112742524,0);
  _objc_storeStrong(param_1 + _DAT_11274251c,0);
  _objc_storeStrong(param_1 + _DAT_112742518,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742514,0);
  return;
}



/* Entry: 1061ce2b0; end: 1061ce46b; -[SCFeatureLensCollectionsBarImpl tabBarContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ce2b0(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  
  lVar6 = (long)_DAT_112742540;
  lVar1 = *(long *)(param_5 + lVar6);
  if (lVar1 == 0) {
    lVar7 = (long)_DAT_11274253c;
    lVar1 = param_5 + lVar7;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0841c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c084de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar8 = param_4;
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (param_4 <= 0.0) {
      lVar1 = param_5 + lVar7;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c0841c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c084de0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        lVar1 = param_5 + lVar7;
        _objc_loadWeakRetained(lVar1);
        lVar2 = lVar1;
        func_0x00010c0841c0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c084de0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08cdc0();
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar1);
        lVar7 = param_5 + lVar7;
        _objc_loadWeakRetained(lVar7);
        lVar1 = lVar7;
        func_0x00010c0841c0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c084de0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _objc_release(lVar2);
        _objc_release(lVar1);
        _objc_release(lVar7);
        param_4 = dVar8;
      }
    }
    if (param_4 <= 0.0) {
      func_0x000100594f4c();
      param_4 = param_1;
    }
    puVar4 = PTR_PTR_1126c89e0;
    _objc_alloc();
    func_0x00010bff6a80(param_4);
    uVar5 = *(undefined8 *)(param_5 + lVar6);
    *(undefined **)(param_5 + lVar6) = puVar4;
    _objc_release(uVar5);
    lVar1 = *(long *)(param_5 + lVar6);
  }
  func_0x00010bf4b2a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061ce46c; end: 1061ce46f; -[SCFeatureLensCollectionsBarImpl setCameraUIVisible:animated:isFromRootArbitrator:arBarBottomUIArbitrator:] */

void FUN_1061ce46c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea8c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setUIVisible_animated__112587cc0);
  return;
}



/* Entry: 1061ce470; end: 1061ce533; -[SCFeatureLensCollectionsBarImpl setCameraUIVisible:animated:arbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ce470(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112742544;
  _objc_retain(param_5);
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_5;
  func_0x00010c071ae0();
  _objc_release(param_5);
  _objc_release(lVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea8c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__setUIVisible_animated__112587cc0,param_3,param_4);
    return;
  }
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c136e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061ce534; end: 1061ce5e7; -[SCFeatureLensCollectionsBarImpl _setUIVisible:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ce534(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  if ((*(byte *)(param_1 + _DAT_112742548) != param_3) &&
     (*(char *)(param_1 + _DAT_112742548) = (char)param_3, param_3 != 0)) {
    puVar1 = PTR_PTR_1126c8700;
    _objc_alloc(PTR_PTR_1126c8700);
    func_0x00010c020400();
    func_0x00010c201980();
    func_0x00010c1809a0(puVar1,param_2,param_4);
    param_1 = param_1 + _DAT_11274253c;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1b5e00();
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1061ce5e8; end: 1061ce607; -[SCFeatureLensCollectionsBarImpl arBarBottomUIArbitrator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ce5e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112742544);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061ce608; end: 1061ce64f; -[SCFeatureLensCollectionsBarImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ce608(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112742544);
  _objc_destroyWeak(param_1 + _DAT_11274253c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742540,0);
  return;
}



/* Entry: 1061ce650; end: 1061ce82f; -[SCFeatureLensCollectionsCarouselImpl initWithLensCarouselManager:lensCollectionsDataProvider:lensDataProviderFactory:lensCollectionUIArbitrator:lensCarouselResetEventsProvider:lensLogger:studySettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1061ce650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f0378;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11274254c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742550;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742554;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112742558),param_6);
    lVar4 = (long)_DAT_11274255c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742560;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742564;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742568);
    *(undefined **)((long)puVar1 + (long)_DAT_112742568) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274256c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274256c) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061ce830; end: 1061ce83f; -[SCFeatureLensCollectionsCarouselImpl lensDataProviderFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ce830(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742554),PTR_s_target_112678178);
  return;
}



/* Entry: 1061ce840; end: 1061ce84f; -[SCFeatureLensCollectionsCarouselImpl lensLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ce840(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742560),PTR_s_target_112678178);
  return;
}



/* Entry: 1061ce850; end: 1061ce887; -[SCFeatureLensCollectionsCarouselImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ce850(long param_1,undefined8 param_2)

{
  func_0x00010bea5400(param_1,param_2,0,1);
  *(undefined1 *)(param_1 + _DAT_112742570) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be938d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetRestoreState_1125827d0);
  return;
}



/* Entry: 1061ce888; end: 1061ce8ef; -[SCFeatureLensCollectionsCarouselImpl activateCollectionCarouselForLens:showLensesOnlyUI:] */

void FUN_1061ce888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0915a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef860(param_1,param_2,uVar1,param_3,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061ce8f0; end: 1061ce997; -[SCFeatureLensCollectionsCarouselImpl activateCollectionCarouselForCollectionId:preselectedLens:showLensesOnlyUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ce8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c89e8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bfff780();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bdc4a60(param_1,param_2,puVar1,puVar1,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061ce998; end: 1061ce99b; -[SCFeatureLensCollectionsCarouselImpl activateCollectionCarouselWithDataProvider:delegate:showLensesOnlyUI:] */

void FUN_1061ce998(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc4a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__activateCollectionCarouselWithD_11254ec38);
  return;
}



/* Entry: 1061ce99c; end: 1061ceabb; -[SCFeatureLensCollectionsCarouselImpl _activateCollectionCarouselWithDataProvider:delegate:showLensesOnlyUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ce99c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274254c);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_50 = param_5;
  func_0x00010c297280(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1061ceabc; end: 1061ceb4f;  */

void FUN_1061ceabc(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc4a80(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061ceb50; end: 1061cef13; -[SCFeatureLensCollectionsCarouselImpl _activateCollectionCarouselWithDataProvider:delegate:showLensesOnlyUI:lensCarouselManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ceb50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar9 = (long)_DAT_112742574;
  if (*(long *)(param_1 + lVar9) != 0) {
    func_0x00010bdf8260(param_1);
  }
  lVar10 = (long)_DAT_112742578;
  _objc_storeWeak(param_1 + lVar10,param_4);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  *(undefined8 *)(param_1 + lVar9) = param_3;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae820;
  _objc_opt_new();
  lVar9 = (long)_DAT_11274257c;
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar2;
  _objc_release(uVar1);
  lVar10 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar10);
  func_0x00010c2a5720();
  _objc_release(lVar10);
  uVar1 = param_6;
  func_0x00010bef1060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_initWeak(auStack_80,param_1);
  uVar5 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1061cef74;
  puStack_90 = &UNK_110914cb8;
  _objc_retain(param_3);
  uVar1 = uVar3;
  uStack_88 = param_3;
  func_0x00010bf41860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c0e0ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar2;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1061cefbc;
  puStack_c8 = &UNK_110914ce8;
  _objc_copyWeak(auStack_b8,auStack_80);
  _objc_retain(uVar5);
  uVar8 = uVar7;
  uStack_c0 = uVar5;
  uStack_b0 = param_5;
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010bf40b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_e8,auStack_80);
  uVar7 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_e8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(uVar1);
  _objc_release(uStack_88);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar4);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1061cef14; end: 1061cef2b;  */

void FUN_1061cef14(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 1061cef2c; end: 1061cef53;  */

void FUN_1061cef2c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1061cef54; end: 1061cef73;  */

bool FUN_1061cef54(undefined8 param_1,long param_2)

{
  func_0x00010bf529e0(param_2);
  return param_2 != 0;
}



/* Entry: 1061cef74; end: 1061cefbb;  */

void FUN_1061cef74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c097640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1061cefbc; end: 1061cf02f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cefbc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be7c260(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061cf030; end: 1061cf11b;  */

void FUN_1061cf030(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1061cf11c;
  puStack_50 = &UNK_110842c58;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1061cf11c; end: 1061cf1c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cf11c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11274257c));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061cf1c4; end: 1061cf27b; -[SCFeatureLensCollectionsCarouselImpl deactivateCollectionCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cf1c4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274254c);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c297280(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1061cf27c; end: 1061cf2bb;  */

void FUN_1061cf27c(long param_1,long param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010bdf8260(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061cf2bc; end: 1061cf423; -[SCFeatureLensCollectionsCarouselImpl _deactivateCollectionCarouselWithRestoringPreviousState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061cf2bc(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112742578;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2a5dc0();
  _objc_release(lVar1);
  func_0x00010bea5400(param_1);
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126c89f0;
    _objc_alloc(PTR_PTR_1126c89f0);
    func_0x00010c0258e0();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112742560);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c281140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1799c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar1 = param_1;
    func_0x00010c0926e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c287180();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf744e0();
  _objc_release(lVar1);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11274256c));
  uVar4 = *(undefined8 *)(param_1 + _DAT_112742574);
  *(undefined8 *)(param_1 + _DAT_112742574) = 0;
  _objc_release(uVar4);
  _objc_storeWeak(param_1 + lVar5,0);
  func_0x00010be938c0(param_1);
  *(undefined1 *)(param_1 + _DAT_112742570) = 0;
  return;
}



/* Entry: 1061cf424; end: 1061cf427; -[SCFeatureLensCollectionsCarouselImpl lensDataProvider:didAddLens:] */

void FUN_1061cf424(void)

{
  return;
}



/* Entry: 1061cf428; end: 1061cf42b; -[SCFeatureLensCollectionsCarouselImpl lensDataProvider:didRemoveLens:withError:] */

void FUN_1061cf428(void)

{
  return;
}


